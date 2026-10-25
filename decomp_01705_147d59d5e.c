// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d59d5e FUN_147d59d5e body=250 status=ok
// SIG undefined FUN_147d59d5e(void)

longlong * FUN_147d59d5e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147d59e58(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_147d59fe0(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147d59e58 FUN_147d59e58 body=389 status=ok
// SIG undefined FUN_147d59e58(void)

void FUN_147d59e58(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x18 + lVar4 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x30 + 8) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d59fe0 FUN_147d59fe0 body=152 status=ok
// SIG undefined FUN_147d59fe0(void)

undefined8 * FUN_147d59fe0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147d5a078(param_1,iVar1);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_147d5a0d2(param_1 + 2,iVar1);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 147d5a078 FUN_147d5a078 body=89 status=ok
// SIG undefined FUN_147d5a078(void)

void FUN_147d5a078(longlong param_1,int param_2)

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



// FUNCTION 147d5a0d2 FUN_147d5a0d2 body=89 status=ok
// SIG undefined FUN_147d5a0d2(void)

void FUN_147d5a0d2(longlong param_1,int param_2)

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



// FUNCTION 147d5a12c FUN_147d5a12c body=110 status=ok
// SIG undefined FUN_147d5a12c(void)

void FUN_147d5a12c(longlong param_1,uint param_2)

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
    FUN_147d5a2de(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_147d5a360(param_1);
    return;
  }
  FUN_147d5a19a(param_1);
  FUN_147d5a2de(param_1,param_2);
  return;
}



// FUNCTION 147d5a19a FUN_147d5a19a body=322 status=ok
// SIG undefined FUN_147d5a19a(void)

void FUN_147d5a19a(longlong *param_1)

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



// FUNCTION 147d5a2de FUN_147d5a2de body=128 status=ok
// SIG undefined FUN_147d5a2de(void)

void FUN_147d5a2de(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 147d5a360 FUN_147d5a360 body=446 status=ok
// SIG undefined FUN_147d5a360(void)

void FUN_147d5a360(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5a520 FUN_147d5a520 body=190 status=ok
// SIG undefined FUN_147d5a520(void)

void FUN_147d5a520(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d59738(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147d5a5de FUN_147d5a5de body=303 status=ok
// SIG undefined FUN_147d5a5de(void)

void FUN_147d5a5de(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 147d5a70e FUN_147d5a70e body=132 status=ok
// SIG undefined FUN_147d5a70e(void)

void FUN_147d5a70e(longlong param_1,int param_2)

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



// FUNCTION 147d5a794 FUN_147d5a794 body=132 status=ok
// SIG undefined FUN_147d5a794(void)

void FUN_147d5a794(longlong param_1,int param_2)

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



// FUNCTION 147d5a81a FUN_147d5a81a body=1060 status=ok
// SIG undefined FUN_147d5a81a(void)

undefined8 *
FUN_147d5a81a(undefined8 *param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  byte local_168;
  undefined1 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined *local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_5 != 0) {
    param_1[1] = &DAT_14aabc9b0;
    param_1[0x47] = &PTR_FUN_149e38530;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  lVar7 = param_2[0xcc];
  local_118 = param_2[0xd5];
  local_110 = param_4;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
    lVar7 = param_2[0xcc];
  }
  lVar6 = (longlong)param_3;
  local_e0 = (double)param_2[0x2e] + (double)param_2[0x31];
  local_e8 = (double)param_2[0x2d] + (double)param_2[0x30];
  local_f0 = (double)param_2[0x2c] + (double)param_2[0x2f];
  local_f8 = (double)param_2[0x2e] - (double)param_2[0x31];
  uStack_100 = (double)param_2[0x2d] - (double)param_2[0x30];
  local_108 = (double)param_2[0x2c] - (double)param_2[0x2f];
  local_d8 = 1;
  bVar1 = *(byte *)((longlong)param_2 + 0x2d6);
  bVar2 = *(byte *)((longlong)param_2 + 0x2dc);
  lVar5 = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
    lVar5 = param_2[0xcc];
  }
  local_11c = *(undefined4 *)(*(longlong *)(**(longlong **)(lVar7 + 0xe0) + lVar6 * 8) + 0x10c);
  lVar7 = lVar5;
  if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
    FUN_1456cec3c(lVar5);
    lVar7 = param_2[0xcc];
  }
  local_120 = *(undefined4 *)(*(longlong *)(**(longlong **)(lVar5 + 0xe0) + lVar6 * 8) + 0x10c);
  if (((DAT_14c950c29 & 1) != 0) && (lVar7 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  lVar5 = lVar6 * 0xa0 + local_118;
  uVar3 = FUN_147d51a5c(*(undefined8 *)(**(longlong **)(lVar7 + 0xe0) + lVar6 * 8));
  if ((param_2[0xcc] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(param_2[0xcc]);
  }
  uVar4 = FUN_147d51a5c();
  local_130 = 0;
  local_140 = &DAT_14aac19e8;
  local_148 = &local_108;
  local_158 = local_110;
  local_170 = 0;
  local_178 = local_11c;
  local_160 = 0;
  local_168 = (bVar2 >> 6 | bVar1 >> 1) & 1;
  local_150 = param_2;
  local_138 = lVar5 + 0x10;
  FUN_147b9a4a4(param_1,uVar4,uVar3,local_120);
  *param_1 = &PTR_FUN_14a89a650;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[1] + 4) + 8) = &PTR_FUN_14a89a6b0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(int *)(param_1 + 0x20) = param_3;
  lVar7 = param_2[0xcc];
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x21] = lVar7;
  param_1[0x22] = param_2;
  lVar7 = param_2[0xcc];
  if ((lVar7 != 0 & bVar1) == 1) {
    FUN_1456cec3c(lVar7);
  }
  lVar7 = *(longlong *)(**(longlong **)(lVar7 + 0xe0) + lVar6 * 8);
  param_1[0x23] = lVar7;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(uint *)((longlong)param_1 + 0x234) =
       *(uint *)((longlong)param_1 + 0x234) & 0xfffffffe |
       (uint)((double)param_2[0x50] * (double)param_2[0x51] * (double)param_2[0x52] < 0.0);
  FUN_1461c3a4c(lVar7 + 0x198,&local_108);
  *(undefined4 *)(param_1 + 0x24) = (undefined4)local_108;
  *(undefined4 *)((longlong)param_1 + 0x124) = local_108._4_4_;
  *(undefined4 *)(param_1 + 0x25) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)param_1 + 300) = uStack_100._4_4_;
  (**(code **)(*param_2 + 0x7a8))(param_2,&local_108);
  FUN_147d5ac40(param_1,&local_108);
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5ac40 FUN_147d5ac40 body=527 status=ok
// SIG undefined FUN_147d5ac40(void)

void FUN_147d5ac40(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar1 = (undefined8 *)(param_1 + 0x130);
  puVar3 = puVar1;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14007522e(&local_158,puVar1);
  *(undefined8 *)(param_1 + 0x1b0) = local_158;
  *(undefined8 *)(param_1 + 0x1b8) = local_138;
  *(undefined8 *)(param_1 + 0x1c0) = local_118;
  *(undefined8 *)(param_1 + 0x1c8) = local_f8;
  *(undefined8 *)(param_1 + 0x1d0) = local_150;
  *(undefined8 *)(param_1 + 0x1d8) = local_130;
  *(undefined8 *)(param_1 + 0x1e0) = local_110;
  *(undefined8 *)(param_1 + 0x1e8) = local_f0;
  *(undefined8 *)(param_1 + 0x1f0) = local_148;
  *(undefined8 *)(param_1 + 0x1f8) = local_128;
  *(undefined8 *)(param_1 + 0x200) = local_108;
  *(undefined8 *)(param_1 + 0x208) = local_e8;
  *(undefined8 *)(param_1 + 0x210) = local_140;
  *(undefined8 *)(param_1 + 0x218) = local_120;
  *(undefined8 *)(param_1 + 0x220) = local_100;
  *(undefined8 *)(param_1 + 0x228) = local_e0;
  dVar4 = (double)FUN_144a91046(puVar1);
  *(float *)(param_1 + 0x230) = (float)dVar4;
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5ae50 FUN_147d5ae50 body=288 status=ok
// SIG undefined FUN_147d5ae50(void)

void FUN_147d5ae50(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_2 = param_2 * 3;
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (*(char *)(param_1 + 300) == '\x01') {
    uVar3 = *(uint *)(lVar2 + (longlong)param_2 * 4);
    uVar5 = *(uint *)(param_1 + 0x234) & 1;
    uVar4 = *(uint *)(lVar2 + (longlong)(int)(uVar5 + param_2 + 1) * 4);
    uVar5 = *(uint *)(lVar2 + (longlong)(int)((param_2 - uVar5) + 2) * 4);
  }
  else {
    uVar3 = (uint)*(ushort *)(lVar2 + (longlong)param_2 * 2);
    uVar5 = *(uint *)(param_1 + 0x234) & 1;
    uVar4 = (uint)*(ushort *)(lVar2 + (longlong)(int)(uVar5 + param_2 + 1) * 2);
    uVar5 = (uint)*(ushort *)(lVar2 + (longlong)(int)((param_2 - uVar5) + 2) * 2);
  }
  lVar2 = param_1 + 0x1b0;
  lVar1 = param_1 + 0x130;
  FUN_143718f38(*(longlong *)(param_1 + 0x118) + 0x118,*(longlong *)(param_1 + 0x118) + 0x90,uVar3,
                lVar1,lVar2,param_3);
  FUN_143718f38(*(longlong *)(param_1 + 0x118) + 0x118,*(longlong *)(param_1 + 0x118) + 0x90,uVar4,
                lVar1,lVar2,param_4);
  FUN_143718f38(*(longlong *)(param_1 + 0x118) + 0x118,*(longlong *)(param_1 + 0x118) + 0x90,uVar5,
                lVar1,lVar2,param_5);
  return;
}



// FUNCTION 147d5b0fa FUN_147d5b0fa body=396 status=ok
// SIG undefined FUN_147d5b0fa(void)

undefined8 FUN_147d5b0fa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  cVar3 = (**(code **)(*param_1 + 0x748))(param_1,0);
  if (cVar3 != '\0') {
    cVar3 = FUN_1448e5c9e(param_1);
    uVar4 = 1;
    if (cVar3 != '\x02') {
      lVar5 = 0;
      do {
        lVar1 = param_1[0xcc];
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (*(int *)(*(longlong *)(lVar1 + 0xe0) + 8) <= lVar5) {
          uVar4 = 0;
          break;
        }
        lVar1 = param_1[0xcc];
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        lVar1 = *(longlong *)(**(longlong **)(lVar1 + 0xe0) + lVar5 * 8);
        local_44 = 0;
        local_48 = 0;
        (**(code **)(*param_1 + 0x758))(param_1,&local_44,&local_48);
        if ((0 < local_44) && (0 < local_48)) {
          lVar2 = param_1[0xcc];
          if ((lVar2 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar2);
          }
          if (-1 < *(int *)(lVar2 + 0x170)) {
            lVar2 = param_1[0xcc];
            if ((lVar2 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar2);
            }
            if (*(uint *)(lVar2 + 0x170) < *(uint *)(lVar1 + 0x108)) goto LAB_147d5b27d;
          }
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
  }
LAB_147d5b13d:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147d5b27d:
  uVar4 = 2;
  goto LAB_147d5b13d;
}



// FUNCTION 147d5b29c FUN_147d5b29c body=73 status=ok
// SIG undefined FUN_147d5b29c(void)

undefined8 FUN_147d5b29c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x250,0x10);
  FUN_147d5a81a(uVar1,param_1,param_2,param_3,1);
  return uVar1;
}



// FUNCTION 147d5b2e6 FUN_147d5b2e6 body=79 status=ok
// SIG undefined FUN_147d5b2e6(void)

void FUN_147d5b2e6(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1479ed6e8();
  if (0 < *(int *)(param_1 + 0x6b0)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x6a8);
      lVar4 = lVar4 + 1;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar2 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar3 = lVar3 + 0xa0;
    } while (lVar4 < *(int *)(param_1 + 0x6b0));
  }
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147d5b336 FUN_147d5b336 body=570 status=ok
// SIG undefined FUN_147d5b336(void)

undefined8 FUN_147d5b336(longlong param_1,char param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
LAB_147d5b378:
    if (param_2 == '\0') {
      if ((*(byte *)(param_1 + 0x675) & 4) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x660);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (*(int *)(lVar1 + 0x16c) != 0) {
          *(undefined4 *)(param_1 + 0x680) = 0;
          goto LAB_147d5b38a;
        }
      }
      else if (*(int *)(param_1 + 0x680) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x660);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (*(int *)(lVar1 + 0x16c) == 0) {
LAB_147d5b4f0:
          *(byte *)(param_1 + 0x675) = *(byte *)(param_1 + 0x675) & 0xfb;
        }
        else {
          *(undefined4 *)(param_1 + 0x680) = 0;
        }
        goto LAB_147d5b391;
      }
    }
    else {
      if (param_3 != 0) {
        *(int *)(param_1 + 0x680) = param_3;
LAB_147d5b38a:
        *(byte *)(param_1 + 0x675) = *(byte *)(param_1 + 0x675) | 4;
LAB_147d5b391:
        FUN_14282b7b8(param_1);
        uVar2 = 1;
        goto LAB_147d5b4a7;
      }
      if ((*(byte *)(param_1 + 0x675) & 4) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x660);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (*(int *)(lVar1 + 0x16c) == 0) {
          if (*(int *)(param_1 + 0x680) == 0) {
            local_24 = 0;
            local_38 = &DAT_14c872bb0;
            FUN_1414d73b6(DAT_14c872ce0,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes"
                          ,&local_24);
            *(undefined4 *)(param_1 + 0x680) = local_24;
          }
          goto LAB_147d5b38a;
        }
      }
      else if (*(int *)(param_1 + 0x680) == 0) {
        lVar1 = *(longlong *)(param_1 + 0x660);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (*(int *)(lVar1 + 0x16c) != 0) goto LAB_147d5b4f0;
        local_24 = 0;
        local_38 = &DAT_14c872bb0;
        FUN_1414d73b6(DAT_14c872ce0,L"DevOptions.StaticLighting",L"DefaultStaticMeshLightingRes",
                      &local_24);
        *(undefined4 *)(param_1 + 0x680) = local_24;
        goto LAB_147d5b391;
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x660) != 0) goto LAB_147d5b378;
  uVar2 = 0;
LAB_147d5b4a7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5b571 FUN_147d5b571 body=93 status=ok
// SIG undefined FUN_147d5b571(void)

void FUN_147d5b571(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14165273a(local_70);
  FUN_14080c2b4();
  DAT_14c761ba4 = DAT_14c761ba4 ^ 1;
  FUN_1416525c2(local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5b5d0 FUN_147d5b5d0 body=466 status=ok
// SIG undefined FUN_147d5b5d0(void)

void FUN_147d5b5d0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = DAT_14cb09e90;
  bVar3 = *(byte *)((longlong)param_1 + 0x2cc);
  if ((bVar3 & 1) == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x88d) & 0x20) != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      bVar3 = *(byte *)((longlong)param_1 + 0x2cc);
    }
    if (param_3 == '\x01' && *(int *)(lVar7 + uVar5 * 4) != 2) {
      if ((bVar3 & 2) == 0) {
        bVar3 = bVar3 | 2;
        *(byte *)((longlong)param_1 + 0x2cc) = bVar3;
        lVar7 = DAT_14cb09e90;
        if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
          uVar5 = 0;
        }
        else {
          bVar3 = FUN_144a61b4f();
          uVar5 = (ulonglong)(bVar3 ^ 1);
          bVar3 = *(byte *)((longlong)param_1 + 0x2cc);
        }
        bVar4 = (*(int *)(lVar7 + uVar5 * 4) == 1) << 2;
        *(byte *)((longlong)param_1 + 0x2cc) = bVar3 & 0xfb | bVar4;
        if (param_1[0x43] != 0) {
          cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
          *(byte *)(param_1[0x43] + 0x173) = *(byte *)(param_1[0x43] + 0x173) & 0xfb | cVar2 << 2;
          bVar4 = *(byte *)((longlong)param_1 + 0x2cc) & 4;
        }
        if (bVar4 != 0) {
          FUN_147d5b7a2(param_1,param_2);
        }
      }
      goto LAB_147d5b682;
    }
  }
  if ((bVar3 & 2) != 0) {
    *(byte *)((longlong)param_1 + 0x2cc) = bVar3 & 0xf9;
    if (param_1[0x43] != 0) {
      cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      *(byte *)(param_1[0x43] + 0x173) = *(byte *)(param_1[0x43] + 0x173) & 0xfb | cVar2 << 2;
    }
    plVar6 = (longlong *)param_1[0x10a];
    if ((longlong *)param_1[0x10a] == (longlong *)0x0) {
      plVar6 = param_1 + 0x5a;
    }
    if ((longlong)(int)param_1[0x10b] != 0) {
      lVar7 = (longlong)(int)param_1[0x10b] * 0xb0;
      do {
        (**(code **)(*plVar6 + 0x20))(plVar6);
        plVar6 = plVar6 + 0x16;
        lVar7 = lVar7 + -0xb0;
      } while (lVar7 != 0);
    }
    FUN_140064cbc(param_1 + 0x5a,0);
  }
LAB_147d5b682:
                    /* WARNING: Could not recover jumptable at 0x000147d5b6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x42] + 0x4a0))((longlong *)param_1[0x42],param_1);
  return;
}



// FUNCTION 147d5b7a2 FUN_147d5b7a2 body=557 status=ok
// SIG undefined FUN_147d5b7a2(void)

void FUN_147d5b7a2(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x298) + 0x48);
  lVar7 = param_1 + 0x2d0;
  local_f0 = param_1;
  FUN_147ccb708(lVar7,(int)plVar3[1]);
  if (0 < (int)plVar3[1]) {
    lVar10 = 0;
    local_100 = lVar7;
    local_f8 = plVar3;
    do {
      FUN_147377468(&local_98,**(longlong **)(*local_f8 + lVar10 * 8) + 0x40);
      lVar4 = local_80;
      lVar6 = (longlong)local_78;
      if (lVar6 == 0) {
        lVar9 = local_80;
        iVar5 = 0;
      }
      else {
        lVar8 = 0;
        do {
          lVar7 = *(longlong *)(lVar4 + lVar8);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar4 + lVar8) = 0;
            LOCK();
            puVar1 = (uint *)(lVar7 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar8 = lVar8 + 0x28;
          lVar7 = local_100;
          lVar9 = local_80;
          iVar5 = local_78;
        } while (lVar6 * 0x28 != lVar8);
      }
      lVar4 = local_f0;
      uStack_84 = 0x101;
      uStack_81 = 0;
      lVar6 = *(longlong *)(local_f0 + 0x850);
      if (*(longlong *)(local_f0 + 0x850) == 0) {
        lVar6 = lVar7;
      }
      local_e8 = local_98;
      local_98 = 0;
      uStack_d8 = (ulonglong)CONCAT16(uStack_82,CONCAT24(0x101,uStack_88));
      local_e0 = local_90;
      local_80 = 0;
      local_c4 = local_74;
      local_78 = 0;
      local_74 = 0;
      local_a0 = local_50;
      local_b0 = local_60;
      uStack_ac = uStack_5c;
      uStack_a8 = uStack_58;
      uStack_a4 = uStack_54;
      local_c0 = local_70;
      uStack_bc = uStack_6c;
      uStack_b8 = uStack_68;
      uStack_b4 = uStack_64;
      lVar8 = lVar10 * 0xb0;
      local_d0 = lVar9;
      local_c8 = iVar5;
      FUN_141793e86(lVar6 + lVar8 + 0x40,&local_e8);
      FUN_14005bca4(&local_e8);
      lVar6 = *(longlong *)(lVar4 + 0x850);
      if (*(longlong *)(lVar4 + 0x850) == 0) {
        lVar6 = lVar7;
      }
      (**(code **)(*(longlong *)(lVar6 + lVar8) + 0x18))(lVar6 + lVar8,param_2);
      FUN_14005bca4(&local_98);
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)local_f8[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5b9d0 FUN_147d5b9d0 body=411 status=ok
// SIG undefined FUN_147d5b9d0(void)

ulonglong FUN_147d5b9d0(longlong param_1,int param_2,undefined8 param_3,uint param_4,
                       longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar5 = (longlong)param_2;
  lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x298) + lVar5 * 8);
  bVar9 = true;
  if ((DAT_14c761ba5 == '\x01') &&
     ((*(byte *)(param_1 + 0x880) & 2) >> 1 != (*(byte *)(param_1 + 0x6b) & 1))) {
    bVar9 = (*(byte *)(lVar1 + 0x5c) & 4) == 0;
  }
  bVar4 = (*(uint *)(lVar1 + 0x5c) & 1) == 0 & bVar9;
  if (bVar4 == 0) {
    lVar6 = lVar5 * 0x450 + (*(longlong **)(param_1 + 0x298))[2];
    lVar3 = lVar5 * 0x80 + *(longlong *)(param_1 + 0x2a0);
    lVar5 = *(longlong *)(param_5 + 0xa8);
    if (*(longlong *)(param_5 + 0xa8) == 0) {
      lVar5 = param_5;
    }
    lVar8 = 0x220;
    puVar7 = (undefined8 *)(lVar3 + 0x58);
    if (*(longlong *)(lVar3 + 0x50) == 0) {
      lVar8 = 0;
      puVar7 = (undefined8 *)(lVar6 + 0x208);
    }
    *(longlong *)(param_5 + 0xb8) = lVar8 + lVar6;
    *(undefined8 *)(lVar5 + 0x40) = *puVar7;
    lVar6 = *(longlong *)(lVar1 + 0x218) + 0x40;
    if (*(longlong *)(lVar1 + 0x218) == 0) {
      lVar6 = lVar1 + 0x1d8;
    }
    if (bVar9 != false) {
      lVar6 = lVar1 + 0x1d8;
    }
    *(longlong *)(lVar5 + 0x18) = lVar6;
    *(undefined4 *)(lVar5 + 0x58) = 0;
    *(undefined4 *)(lVar5 + 0x5c) = *(undefined4 *)(lVar1 + 0x60);
    *(undefined4 *)(lVar5 + 0x68) = 0;
    *(int *)(lVar5 + 0x6c) = *(int *)(lVar1 + 0x14c) + -1;
    *(char *)(param_5 + 0xde) = (char)param_2;
    *(uint *)(param_5 + 0xe4) =
         (param_4 & 7) << 0x11 |
         *(uint *)(param_5 + 0xe4) & 0xfff03fbf |
         (uint)(((byte)((*(uint *)(param_1 + 0x880) & 2) >> 1) ^ *(byte *)(param_1 + 0x6b)) & bVar9)
         << 6;
    *(longlong *)(param_5 + 200) = lVar3;
    FUN_14003fbd6();
    uVar2 = (**(code **)(*DAT_14caea080 + 0x2f0))();
    *(undefined8 *)(param_5 + 0xc0) = uVar2;
    *(byte *)(param_5 + 0xe5) = *(byte *)(param_5 + 0xe5) & 0xf1;
    FUN_140152c24(param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,
                  param_5);
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4) ^ 1) & 0xffffffff;
}



// FUNCTION 147d5bb6c FUN_147d5bb6c body=324 status=ok
// SIG undefined FUN_147d5bb6c(void)

bool FUN_147d5bb6c(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,byte param_5,
                  undefined1 param_6,longlong param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar5 = (longlong)param_2;
  lVar2 = (*(longlong **)(param_1 + 0x298))[2];
  lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x298) + lVar5 * 8);
  lVar6 = *(longlong *)(param_1 + 0x2a0) + lVar5 * 0x80;
  bVar10 = *(longlong *)(lVar6 + 0x50) != 0;
  puVar9 = (undefined8 *)(lVar2 + 0x208 + lVar5 * 0x450);
  if (bVar10) {
    puVar9 = (undefined8 *)(lVar6 + 0x58);
  }
  lVar6 = 0x220;
  if (!bVar10) {
    lVar6 = 0;
  }
  lVar7 = *(longlong *)(param_7 + 0xa8);
  if (*(longlong *)(param_7 + 0xa8) == 0) {
    lVar7 = param_7;
  }
  *(undefined8 *)(lVar7 + 0x40) = *puVar9;
  uVar1 = *(uint *)(param_7 + 0xe4);
  uVar8 = ((byte)(*(byte *)(param_1 + 0x880) >> 1 ^ *(byte *)(param_1 + 0x6b)) & 1) << 6;
  *(uint *)(param_7 + 0xe4) = uVar1 & 0xffffffbf | uVar8;
  *(uint *)(param_7 + 0xe4) =
       (param_5 & 7) << 0x11 | uVar1 & 0xfff1febf | uVar8 | (*(uint *)(param_1 + 0x880) & 1) << 8;
  *(undefined8 *)(param_7 + 0xc0) = param_4;
  *(undefined4 *)(lVar7 + 0x68) = 0;
  *(int *)(lVar7 + 0x6c) = *(int *)(lVar3 + 0x10c) + -1;
  iVar4 = FUN_140152ce8(param_1,param_2,0,1,0,param_6,lVar6 + lVar2 + lVar5 * 0x450,param_7);
  FUN_140152c24(param_1,param_2,0,param_7);
  return iVar4 != 0;
}



// FUNCTION 147d5bcb0 FUN_147d5bcb0 body=418 status=ok
// SIG undefined FUN_147d5bcb0(void)

undefined8
FUN_147d5bcb0(longlong param_1,int param_2,undefined8 param_3,int param_4,byte param_5,
             undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = (longlong)param_2;
  lVar9 = *(longlong *)(**(longlong **)(param_1 + 0x298) + lVar5 * 8);
  lVar1 = *(longlong *)(lVar9 + 0x30);
  lVar9 = lVar9 + 0x10;
  if (lVar1 != 0) {
    lVar9 = lVar1;
  }
  if (*(int *)(lVar9 + 8 + (longlong)param_4 * 0x1c) == 0) {
    uVar7 = 0;
  }
  else {
    lVar1 = (*(longlong **)(param_1 + 0x298))[2];
    lVar2 = *(longlong *)(param_1 + 0x2a0);
    uVar7 = 0;
    FUN_140152ce8(param_1,lVar5,param_4,0,0,1,0,param_7);
    lVar4 = *(longlong *)(param_7 + 0xa8);
    if (*(longlong *)(param_7 + 0xa8) == 0) {
      lVar4 = param_7;
    }
    lVar8 = lVar2 + lVar5 * 0x80;
    lVar3 = *(longlong *)(lVar8 + 0x50);
    puVar6 = (undefined8 *)(lVar1 + 0x208 + lVar5 * 0x450);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar8 + 0x58);
    }
    *(undefined8 *)(lVar4 + 0x40) = *puVar6;
    if (*(int *)(lVar4 + 0x5c) != 0) {
      lVar9 = lVar9 + (longlong)param_4 * 0x1c;
      lVar8 = 0x220;
      if (lVar3 == 0) {
        lVar8 = 0;
      }
      *(char *)(param_7 + 0xde) = (char)param_2;
      *(uint *)(param_7 + 0xe4) =
           (uint)(param_5 & 7) << 0x11 |
           *(uint *)(param_7 + 0xe4) & 0xfff1febf |
           ((byte)(*(byte *)(param_1 + 0x880) >> 1 ^ *(byte *)(param_1 + 0x6b)) & 1) << 6;
      *(longlong *)(param_7 + 200) = lVar2 + lVar5 * 0x80;
      *(longlong *)(param_7 + 0xb8) = lVar8 + lVar1 + lVar5 * 0x450;
      *(undefined8 *)(param_7 + 0xc0) = param_6;
      *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(lVar9 + 0xc);
      *(undefined4 *)(lVar4 + 0x6c) = *(undefined4 *)(lVar9 + 0x10);
      FUN_140152c24(param_1,param_2,0);
      uVar7 = 1;
    }
  }
  return uVar7;
}



// FUNCTION 147d5be52 FUN_147d5be52 body=57 status=ok
// SIG undefined FUN_147d5be52(void)

void FUN_147d5be52(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144b26b83();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_144a7b9cd();
                    /* WARNING: Could not recover jumptable at 0x000147d5be81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x220))
              (plVar2,*(undefined8 *)(param_1 + 0x218),*(code **)(*plVar2 + 0x220));
    return;
  }
  return;
}



// FUNCTION 147d5be8c FUN_147d5be8c body=581 status=ok
// SIG undefined FUN_147d5be8c(void)

void FUN_147d5be8c(longlong *param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined1 *local_180;
  int local_170;
  int local_16c;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150 [168];
  undefined1 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_168 = *(longlong *)(*(longlong *)param_1[0x53] + (longlong)param_2 * 8);
  local_158 = param_3;
  if (0 < *(int *)(local_168 + 0x38)) {
    local_170 = 0;
    local_160 = param_1;
    do {
      local_16c = (**(code **)(*param_1 + 0x240))(param_1);
      if (0 < local_16c) {
        iVar8 = 0;
        do {
          local_a8 = (undefined1 *)0x0;
          local_a0 = 0x100000000;
          local_88 = 0;
          local_98 = 0;
          uStack_90 = 0;
          uStack_80 = 0xffffffff;
          local_78 = 0xff0000ffffffff;
          uStack_70 = uStack_70 & 0xffffff00;
          uStack_6c = 0x40c00f07;
          local_68 = local_68 & 0xfc;
          FUN_141793e06(local_150);
          local_188 = 0;
          local_190 = 0;
          local_198 = 0;
          local_180 = local_150;
          cVar6 = (**(code **)(*param_1 + 0x250))(param_1,param_2,iVar8,local_170);
          plVar5 = local_158;
          if (cVar6 != '\0') {
            iVar3 = (int)local_158[1];
            *(uint *)(local_158 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)local_158 + 0xc) < iVar3 + 1U) {
              FUN_147471df6(local_158,iVar3);
            }
            lVar4 = *plVar5;
            lVar9 = (longlong)iVar3 * 0xf0;
            *(undefined8 *)(lVar4 + 0xa8 + lVar9) = 0;
            puVar7 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar7 = local_150;
            }
            FUN_144739392(lVar4 + lVar9,puVar7,local_a0 & 0xffffffff,0);
            *(byte *)(lVar4 + 0xe8 + lVar9) = local_68;
            puVar1 = (undefined8 *)(lVar4 + 0xd8 + lVar9);
            *puVar1 = local_78;
            puVar1[1] = CONCAT44(uStack_6c,uStack_70);
            puVar1 = (undefined8 *)(lVar4 + 200 + lVar9);
            *puVar1 = local_88;
            puVar1[1] = uStack_80;
            puVar2 = (undefined4 *)(lVar4 + 0xb8 + lVar9);
            *puVar2 = (undefined4)local_98;
            puVar2[1] = local_98._4_4_;
            puVar2[2] = (undefined4)uStack_90;
            puVar2[3] = uStack_90._4_4_;
            param_1 = local_160;
          }
          FUN_1446fc232(local_150);
          iVar8 = iVar8 + 1;
        } while (local_16c != iVar8);
      }
      local_170 = local_170 + 1;
    } while (local_170 < *(int *)(local_168 + 0x38));
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5c0d2 FUN_147d5c0d2 body=1594 status=ok
// SIG undefined FUN_147d5c0d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d5c0d2(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  double dVar17;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_230;
  undefined1 local_228;
  longlong local_220;
  undefined8 *local_218;
  int local_20c;
  uint local_208;
  undefined4 local_204;
  longlong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined2 uStack_13a;
  undefined4 uStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_100 = (longlong *)CONCAT44(local_100._4_4_,(undefined4)local_100);
  local_180 = (longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180);
  if (((int)param_1[0x10b] != 0) &&
     (local_100 = (longlong *)CONCAT44(local_100._4_4_,(undefined4)local_100),
     local_180 = (longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180),
     *(int *)(DAT_14cb09e78 + 4) != 0)) {
    cVar5 = (**(code **)(*param_1 + 0x58))();
    local_100 = (longlong *)CONCAT44(local_100._4_4_,(undefined4)local_100);
    local_180 = (longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180);
    if (cVar5 != '\0') {
      uVar9 = (**(code **)(*param_1 + 0x168))(param_1);
      local_204 = (undefined4)uVar9;
      uVar15 = 0;
      uVar8 = 0;
      bVar6 = *(byte *)((longlong)param_1 + 0x2cc) & 2;
      if (bVar6 != 0) {
        bVar6 = bVar6 >> 1;
        if (*(int *)(DAT_14cb09ec0 + 4) < 1) {
          uVar8 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),bVar6);
        }
        else {
          lVar11 = *(longlong *)(param_2 + 0x148);
          dVar17 = *(double *)(lVar11 + 0x1058) - (double)param_1[0x32];
          dVar4 = *(double *)(lVar11 + 0x1050) - (double)param_1[0x31];
          dVar3 = *(double *)(lVar11 + 0x1048) - (double)param_1[0x30];
          uVar8 = (uint)bVar6;
          if ((double)((float)(double)param_1[0x36] + *(float *)(DAT_14cb09ed8 + 4)) <
              SQRT(dVar17 * dVar17 + dVar3 * dVar3 + dVar4 * dVar4)) {
            uVar8 = 0;
          }
        }
      }
      plVar10 = *(longlong **)(param_1[0x53] + 0x48);
      uVar1 = *(uint *)(plVar10 + 1);
      if ((char)plVar10[3] == '\x01') {
        bVar6 = *(byte *)(param_1[0x53] + 0x8f);
        uVar7 = (**(code **)(*param_1 + 0x20))(param_1,*(undefined8 *)(param_2 + 0x148));
        uVar15 = (ulonglong)uVar7;
        uVar13 = (uint)bVar6;
        if ((int)uVar7 < (int)uVar13) {
          uVar15 = (ulonglong)uVar13;
        }
      }
      if (((char)uVar8 == '\0') &&
         (FUN_147ceea04(param_2,*(undefined4 *)(param_1[0x53] + 0x88)), (int)uVar15 < (int)uVar1)) {
        do {
          plVar2 = *(longlong **)(*plVar10 + uVar15 * 8);
          cVar5 = FUN_147428482(*plVar2);
          if (cVar5 == '\0') {
            cVar5 = FUN_1474283cc(*plVar2);
            if ((cVar5 != '\0') && ((*(byte *)(*plVar2 + 0xa0) & 8) == 0)) goto LAB_147d5c1f3;
          }
          else {
            FUN_1474284c0(*plVar2,0x3c23d70a);
          }
          uVar15 = uVar15 + 1;
        } while (uVar1 != uVar15);
      }
      else {
LAB_147d5c1f3:
        iVar14 = (int)uVar15;
        local_100 = (longlong *)CONCAT44(local_100._4_4_,(undefined4)local_100);
        local_180 = (longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180);
        if ((iVar14 != -1) &&
           (local_100 = (longlong *)CONCAT44(local_100._4_4_,(undefined4)local_100),
           local_180 = (longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180),
           iVar14 < (int)uVar1)) {
          lVar11 = (longlong)iVar14;
          local_218 = *(undefined8 **)(*plVar10 + lVar11 * 8);
          local_100 = (longlong *)CONCAT44(local_100._4_4_,(undefined4)local_100);
          local_180 = (longlong *)CONCAT44(local_180._4_4_,(undefined4)local_180);
          if (*(int *)(local_218[2] + 0x7c) != 0) {
            if ((char)uVar8 == '\0') {
              plVar10 = (longlong *)*local_218;
            }
            else {
              plVar10 = param_1 + 0x5a;
              if ((longlong *)param_1[0x10a] != (longlong *)0x0) {
                plVar10 = (longlong *)param_1[0x10a];
              }
              plVar10 = plVar10 + lVar11 * 0x16;
              cVar5 = FUN_147428482(plVar10);
              if (cVar5 != '\0') goto LAB_147d5c24f;
            }
            uStack_150 = 0;
            uStack_14c = 0;
            iStack_148 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            local_154 = 0;
            uStack_140 = 0xff;
            uStack_13c = 0;
            uStack_13b = 1;
            uStack_138 = 0;
            local_f0 = 0;
            local_130 = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            local_120 = 0;
            uStack_11c = 0;
            local_110 = 0;
            uStack_108 = 0;
            uStack_104 = 0;
            local_100._0_4_ = 0;
            local_100._4_4_ = 0;
            uStack_f8 = 0;
            local_208 = uVar8;
            local_20c = (**(code **)(*param_1 + 0x240))(param_1);
            iVar16 = *(int *)(local_218[1] + 0x28) * local_20c;
            plVar2 = param_1 + 0x10c;
            if ((iVar16 == (int)param_1[0x10d]) && (iVar14 == (short)param_1[0x10e])) {
              uStack_150 = (undefined4)*plVar2;
              uStack_14c = (undefined4)((ulonglong)*plVar2 >> 0x20);
              uStack_13b = 0;
              iStack_148 = iVar16;
            }
            else {
              iVar14 = *(int *)((longlong)param_1 + 0x86c);
              FUN_140064c53(param_1[0x10c]);
              *(undefined4 *)(param_1 + 0x10d) = 0;
              if ((iVar14 < 0) && (*(int *)((longlong)param_1 + 0x86c) != 0)) {
                FUN_147a3b5ca(plVar2,0);
              }
              local_1f0 = plVar10;
              if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar16);
              }
              local_200 = lVar11;
              local_1f8 = param_2;
              if (*(int *)((longlong)param_1 + 0x86c) < iVar16) {
                FUN_147a3b5ca(plVar2,iVar16);
              }
              if (0 < local_20c) {
                lVar11 = local_218[1];
                lVar12 = local_200 * 0x450;
                iVar14 = 0;
                do {
                  if (0 < *(int *)(lVar11 + 0x28)) {
                    iVar16 = 0;
                    do {
                      lVar11 = FUN_1474b7f2a(plVar2);
                      local_228 = 0;
                      local_230 = 0;
                      local_238 = (undefined1)local_204;
                      local_220 = lVar11;
                      cVar5 = (**(code **)(*param_1 + 0x250))
                                        (param_1,uVar15 & 0xffffffff,iVar14,iVar16);
                      if (cVar5 == '\0') {
                        FUN_14003fbd6();
                        uVar9 = (**(code **)(*DAT_14caea080 + 0x2f0))();
                        *(undefined8 *)(lVar11 + 0xc0) = uVar9;
                        *(longlong *)(lVar11 + 0xb8) = *(longlong *)(param_1[0x53] + 0x10) + lVar12;
                      }
                      *(uint *)(lVar11 + 0xe4) =
                           *(uint *)(lVar11 + 0xe4) & 0xffffffbf |
                           (*(uint *)(param_1 + 0x110) & 2) << 5;
                      *(int *)(lVar11 + 0xd8) = iVar16;
                      *(short *)(lVar11 + 0xdc) = (short)iVar16;
                      iVar16 = iVar16 + 1;
                      lVar11 = local_218[1];
                    } while (iVar16 < *(int *)(lVar11 + 0x28));
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 != local_20c);
              }
              iStack_148 = (int)param_1[0x10d];
              uStack_150 = (undefined4)param_1[0x10c];
              uStack_14c = (undefined4)((ulonglong)param_1[0x10c] >> 0x20);
              *(short *)(param_1 + 0x10e) = (short)uVar15;
              lVar11 = local_200;
              plVar10 = local_1f0;
              param_2 = local_1f8;
            }
            local_100 = param_1 + 0x20;
            uStack_f8 = 1;
            local_168 = plVar10;
            if ((char)local_208 != '\0') {
              lVar11 = FUN_1449da0ce(lVar11 * 0x450 + *(longlong *)(param_1[0x53] + 0x10));
              if ((*(byte *)(lVar11 + 0x29) & 4) != 0) {
                iVar14 = *(int *)(local_218[2] + 0xbc);
                local_e8 = 0;
                iVar16 = (int)param_1[0x10d];
                lVar11 = param_1[0x10c];
                local_e0 = iVar16;
                if (iVar16 == 0) {
                  local_dc = 0;
                }
                else {
                  FUN_147471e8a(&local_e8,iVar16,0);
                  FUN_147471efc(local_e8,lVar11,iVar16);
                }
                local_d8 = 0;
                local_d0 = iVar14 * 0xc;
                local_cc = (undefined4)plVar10[10];
                local_c0 = 0;
                local_b8 = 1;
                local_b4 = 0;
                local_a8 = _DAT_14c846250;
                uStack_a0 = DAT_14c846258;
                local_98 = _DAT_14c846260;
                uStack_90 = _DAT_14c846268;
                local_88 = _DAT_14c846270;
                uStack_80 = _DAT_14c846278;
                local_78 = DAT_14c846280;
                uStack_74 = DAT_14c846284;
                uStack_70 = DAT_14c846288;
                uStack_6c = DAT_14c84628c;
                local_d4 = iVar14;
                local_c8 = plVar10;
                FUN_147ceea5a(param_2);
              }
            }
            local_1e0 = 0;
            uStack_1d8 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
            local_154 = 0;
            local_1d0 = CONCAT44(uStack_14c,uStack_150);
            uStack_1bc = CONCAT22(uStack_13a,CONCAT11(uStack_13b,uStack_13c));
            _iStack_1c8 = CONCAT44(local_144,iStack_148);
            uStack_1c0 = uStack_140;
            uStack_1b8 = uStack_138;
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_130 = 0;
            uStack_128 = 0;
            uStack_124 = 0;
            local_1a0 = local_120;
            uStack_19c = (undefined4)uStack_11c;
            uStack_198 = uStack_11c._4_4_;
            uStack_194 = uStack_114;
            local_190 = 0;
            uStack_188 = 0;
            local_110 = 0;
            uStack_108 = 0;
            uStack_104 = 0;
            uStack_178 = uStack_f8;
            uStack_174 = uStack_f4;
            local_170 = 0;
            local_f0 = 0;
            local_1e8 = plVar10;
            local_180 = local_100;
            FUN_147cee9b0(param_2);
            FUN_1472aaabe(&local_168);
          }
        }
      }
    }
  }
LAB_147d5c24f:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5c70e FUN_147d5c70e body=121 status=ok
// SIG undefined FUN_147d5c70e(void)

void FUN_147d5c70e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x2a8)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x2a0);
      iVar1 = *(int *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x48) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x4c) < iVar1 + 1U) {
        FUN_147470a8e(param_2,iVar1);
      }
      lVar3 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar3 = param_2;
      }
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2 + lVar4;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x80;
    } while (lVar5 < *(int *)(param_1 + 0x2a8));
  }
  return;
}



// FUNCTION 147d5c788 FUN_147d5c788 body=291 status=ok
// SIG undefined FUN_147d5c788(void)

int FUN_147d5c788(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  float local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x53] != 0) {
    iVar3 = FUN_144b1c6f4();
    if (-1 < iVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    iVar3 = (int)param_1[0x10f];
    if (0 < iVar3) {
      iVar5 = *(int *)((longlong)param_1 + 0x87c) + 1;
      iVar4 = *(int *)(param_1[0x53] + 8);
      if (iVar3 < *(int *)(param_1[0x53] + 8)) {
        iVar4 = iVar3;
      }
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      iVar4 = iVar4 + -1;
      goto LAB_147d5c893;
    }
  }
  fVar1 = DAT_14cb0cc18;
  local_60 = (float)(**(code **)(*param_1 + 0x208))(param_1);
  local_60 = local_60 * fVar1;
  local_68 = *(undefined4 *)((longlong)param_1 + 0x87c);
  local_58 = param_1[0x30];
  local_50 = param_1[0x31];
  local_48 = param_1[0x32];
  local_40 = 0x3ff0000000000000;
  cVar2 = FUN_1405e275b(param_1[0x53],&local_58,(float)(double)param_1[0x36],param_2);
  iVar4 = (int)cVar2;
LAB_147d5c893:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147d5c8ae FUN_147d5c8ae body=147 status=ok
// SIG undefined FUN_147d5c8ae(void)

undefined8
FUN_147d5c8ae(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 1;
  FUN_147d60b46(&local_40,1,0);
  *local_40 = param_2;
  FUN_147d5c942(param_1,&local_40,param_3,param_4);
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5c942 FUN_147d5c942 body=1159 status=ok
// SIG undefined FUN_147d5c942(void)

longlong * FUN_147d5c942(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_15c [4];
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  int local_130;
  undefined4 local_12c;
  longlong *local_128;
  longlong *local_120;
  undefined2 local_118;
  undefined1 local_109;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [80];
  longlong **local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x51) = param_4;
  uVar10 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar10 != 0) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar10);
    }
    FUN_147d60dd2(param_1,uVar10);
    iVar5 = 1;
    if (3 < uVar10) {
      uVar10 = (uVar10 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar5)) {
      *(int *)(param_1 + 9) = iVar5;
      FUN_147d60f6c(param_1);
    }
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar12 = *param_2;
      lVar11 = 0;
      do {
        if (*(longlong **)(lVar12 + lVar11) != (longlong *)0x0) {
          local_150 = *(longlong **)(lVar12 + lVar11);
          local_98 = &local_150;
          FUN_147d6114c(param_1,&local_108,&local_98);
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar11);
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_78 = 0;
    local_70 = 0;
    local_98 = (longlong **)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1403a2f52(&local_109);
    local_100 = param_1 + 2;
    local_108 = 0x100000000;
    local_f8 = 0xffffffff;
    local_f0 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_108);
    }
    local_138 = local_f8;
    lVar3 = local_138;
    local_130 = local_f0;
    local_12c = local_ec;
    local_148 = local_108;
    local_140 = local_100;
    local_118 = 0;
    local_138._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    bVar2 = local_138._4_4_ < (int)local_100[3];
    plVar1 = param_1;
    local_150 = param_1;
    local_138 = lVar3;
    local_128 = param_1;
    local_120 = param_1;
    if (bVar2) {
      do {
        local_168 = plVar1;
        uVar6 = FUN_147be55e0(&local_109);
        FUN_1435aa5fc(uVar6,&local_108,
                      *(undefined8 *)(*local_150 + (longlong)local_138._4_4_ * 0x30));
        lVar3 = local_f8;
        lVar12 = (longlong)local_f0;
        if (lVar12 != 0) {
          lVar11 = 0;
          do {
            plVar1 = *(longlong **)(lVar3 + lVar11);
            plVar7 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1);
            cVar4 = (**(code **)*plVar7)(plVar7);
            if (cVar4 != '\0') {
              (**(code **)(*plVar7 + 0x50))(plVar7);
              lVar8 = (**(code **)(*plVar7 + 0x98))(plVar7);
              if (lVar8 != 0) {
                lVar9 = FUN_144a7a726();
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                  lVar9 = *local_150 + (longlong)local_138._4_4_ * 0x30;
                  iVar5 = *(int *)(lVar9 + 0x10);
                  *(uint *)(lVar9 + 0x10) = iVar5 + 1U;
                  if (*(uint *)(lVar9 + 0x14) < iVar5 + 1U) {
                    FUN_14587455c((longlong *)(lVar9 + 8),iVar5);
                  }
                  *(longlong *)(*(longlong *)(lVar9 + 8) + (longlong)iVar5 * 8) = lVar8;
                }
              }
              lVar8 = *local_150 + (longlong)local_138._4_4_ * 0x30;
              iVar5 = *(int *)(lVar8 + 0x20);
              *(uint *)(lVar8 + 0x20) = iVar5 + 1U;
              if (*(uint *)(lVar8 + 0x24) < iVar5 + 1U) {
                FUN_147befce6((longlong *)(lVar8 + 0x18),iVar5);
              }
              *(longlong **)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar5 * 8) = plVar1;
              local_158 = (**(code **)(*plVar7 + 0x30))(plVar7);
              FUN_146305894(&local_98,local_15c,&local_158,0);
            }
            lVar11 = lVar11 + 8;
          } while (lVar12 * 8 != lVar11);
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        local_138 = CONCAT44(local_138._4_4_,(uint)local_138 & ~local_148._4_4_);
        FUN_1449c0562(&local_148);
        param_1 = local_168;
        bVar2 = local_138._4_4_ < (int)local_140[3];
        plVar1 = local_168;
      } while (bVar2);
      if (((local_118 & 1) != 0) && (local_118._1_1_ == '\x01')) {
        FUN_147d614b8(local_120,(int)local_120[1] - *(int *)((longlong)local_120 + 0x34));
      }
    }
    if ((int)uStack_90 != local_64) {
      FUN_1414efd58(local_e8,&local_98);
      FUN_1414effc2(local_e8);
      FUN_14080c2b4();
    }
    FUN_1403a2e22(&local_109);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_141145f8e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d5cdcc FUN_147d5cdcc body=689 status=ok
// SIG undefined FUN_147d5cdcc(void)

void FUN_147d5cdcc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined1 local_134 [4];
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [80];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_78 = 0;
    iVar9 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_140 = param_1 + 2;
    local_108 = 0x100000000;
    local_f8 = 0xffffffff;
    local_f0 = 0;
    local_100 = local_140;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_108);
      iVar9 = (int)param_1[5];
    }
    local_118 = local_f8;
    uVar3 = local_118;
    local_110 = local_f0;
    local_10c = local_ec;
    local_128 = local_108;
    local_120 = local_100;
    local_118._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    iVar5 = local_118._4_4_;
    local_130 = param_1;
    if ((local_118._4_4_ != iVar9) || (local_118 = uVar3, local_100 != local_140)) {
      do {
        local_118 = uVar3;
        lVar1 = *local_130;
        lVar8 = (longlong)iVar5 * 0x30;
        lVar7 = (longlong)*(int *)(lVar1 + 0x10 + lVar8);
        if (lVar7 != 0) {
          lVar2 = *(longlong *)(lVar1 + 8 + lVar8);
          lVar10 = 0;
          do {
            plVar6 = *(longlong **)(lVar2 + lVar10);
            if ((char)param_1[10] == '\x01') {
              (**(code **)(*plVar6 + 0x3c8))(plVar6,1,0);
            }
            if (*(char *)((longlong)param_1 + 0x51) == '\x01') {
              (**(code **)(*plVar6 + 0x540))(plVar6);
            }
            lVar10 = lVar10 + 8;
          } while (lVar7 * 8 != lVar10);
        }
        lVar7 = (longlong)*(int *)(lVar1 + lVar8 + 0x20);
        if (lVar7 != 0) {
          lVar1 = *(longlong *)(lVar1 + lVar8 + 0x18);
          lVar8 = 0;
          do {
            plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar1 + lVar8) + 8))();
            cVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
            if ((cVar4 != '\0') && (cVar4 = (**(code **)*plVar6)(plVar6), cVar4 == '\0')) {
              (**(code **)(*plVar6 + 0x58))(plVar6,0);
              local_108 = (**(code **)(*plVar6 + 0x30))(plVar6);
              FUN_146305894(&local_98,local_134,&local_108,0);
            }
            lVar8 = lVar8 + 8;
          } while (lVar7 * 8 != lVar8);
        }
        local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
        FUN_1449c0562(&local_128);
        iVar5 = local_118._4_4_;
        uVar3 = local_118;
      } while (local_130 != param_1 || (local_120 != local_140 || local_118._4_4_ != iVar9));
    }
    FUN_1414efd58(local_e8,&local_98);
    FUN_1414effc2(local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_141145f8e(&local_98);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_147d60670(param_1);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5d07e FUN_147d5d07e body=109 status=ok
// SIG undefined FUN_147d5d07e(void)

void FUN_147d5d07e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_144a7a726();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      *(byte *)(param_2 + 0x2d3) = *(byte *)(param_2 + 0x2d3) | 2;
      iVar1 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
        FUN_140c43e06((longlong *)(param_1 + 8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 147d5d0f0 FUN_147d5d0f0 body=116 status=ok
// SIG undefined FUN_147d5d0f0(void)

undefined1 * FUN_147d5d0f0(undefined1 *param_1)

{
  *param_1 = 0x37;
  param_1[1] = param_1[1] & 0xf0 | 2;
  *(undefined4 *)(param_1 + 4) = 0x40;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xc;
  FUN_147bc8e60(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return param_1;
}



// FUNCTION 147d5d164 FUN_147d5d164 body=274 status=ok
// SIG undefined FUN_147d5d164(void)

undefined8 * FUN_147d5d164(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (DAT_14cb09f18 != (longlong *)0x0) goto LAB_147d5d17a;
  plVar3 = (longlong *)FUN_147d614fc();
  plVar4 = DAT_14cb09f20;
  DAT_14cb09f18 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    if (DAT_14cb09f20 != (longlong *)0x0) {
      DAT_14cb09f20 = (longlong *)0x0;
LAB_147d5d1cf:
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
      if (plVar3 != (longlong *)0x0) goto LAB_147d5d235;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (plVar3 == DAT_14cb09f20) {
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
    else {
      bVar5 = DAT_14cb09f20 != (longlong *)0x0;
      plVar4 = DAT_14cb09f20;
      DAT_14cb09f20 = plVar3;
      if (bVar5) goto LAB_147d5d1cf;
    }
LAB_147d5d235:
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
  FUN_147d5d41c(DAT_14cb09f18);
  FUN_147d5d276(DAT_14cb09f18);
LAB_147d5d17a:
  *param_1 = DAT_14cb09f18;
  plVar4 = DAT_14cb09f20;
  param_1[1] = DAT_14cb09f20;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    *(int *)plVar4 = (int)*plVar4 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 147d5d276 FUN_147d5d276 body=328 status=ok
// SIG undefined FUN_147d5d276(void)

void FUN_147d5d276(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  longlong local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = 0;
  FUN_145a00676(param_1 + 10,0);
  local_64 = 0x80;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar2 = (int)param_1[5];
  }
  local_78 = local_50;
  iStack_74 = iStack_4c;
  local_70 = local_48;
  local_6c = local_44;
  local_88 = local_60;
  local_80 = local_58;
  local_90 = param_1;
  if ((iStack_4c != iVar2) || (local_58 != plVar1)) {
    do {
      local_60 = (longlong)iStack_74 * 0x10 + *local_90;
      local_58 = (longlong *)&local_64;
      FUN_140283432(param_1 + 10,local_3c,&local_60,0);
      local_64 = local_64 << 1;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 || (local_80 != plVar1 || iStack_74 != iVar2));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5d3c0 FUN_147d5d3c0 body=91 status=ok
// SIG undefined FUN_147d5d3c0(void)

void FUN_147d5d3c0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb09f20;
  if (DAT_14cb09f18 != 0) {
    DAT_14cb09f18 = 0;
    if (DAT_14cb09f20 != (longlong *)0x0) {
      DAT_14cb09f20 = (longlong *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x000147d5d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147d5d41c FUN_147d5d41c body=162 status=ok
// SIG undefined FUN_147d5d41c(void)

void FUN_147d5d41c(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_1448c2e86();
  FUN_147d5d54a(&local_40);
  FUN_147d5d4c0(uVar3,&local_38,local_40);
  lVar2 = local_38;
  if ((longlong)local_30 != 0) {
    lVar4 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,param_1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)local_30 * 8 != lVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5d4c0 FUN_147d5d4c0 body=137 status=ok
// SIG undefined FUN_147d5d4c0(void)

longlong * FUN_147d5d4c0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147d615fc(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147d5d54a FUN_147d5d54a body=120 status=ok
// SIG undefined FUN_147d5d54a(void)

undefined8 * FUN_147d5d54a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a690) {
    FUN_144b3d300(&DAT_14cb0a690);
    if (DAT_14cb0a690 == -1) {
      FUN_1446f470e(&DAT_14cb0a688,L"StereoLayersFlagsSupplier",1);
      _Init_thread_footer(&DAT_14cb0a690);
    }
  }
  *param_1 = DAT_14cb0a688;
  return param_1;
}



// FUNCTION 147d5d5c2 FUN_147d5d5c2 body=42 status=ok
// SIG undefined FUN_147d5d5c2(void)

void FUN_147d5d5c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147d5d5f0 FUN_147d5d5f0 body=42 status=ok
// SIG undefined FUN_147d5d5f0(void)

void FUN_147d5d5f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d5d626 FUN_147d5d626 body=39 status=ok
// SIG undefined FUN_147d5d626(void)

void FUN_147d5d626(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147d607d6(uVar1,param_1);
  return;
}



// FUNCTION 147d5d64e FUN_147d5d64e body=61 status=ok
// SIG undefined FUN_147d5d64e(void)

longlong FUN_147d5d64e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147d5d68c FUN_147d5d68c body=42 status=ok
// SIG undefined FUN_147d5d68c(void)

void FUN_147d5d68c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147d5d6c2 FUN_147d5d6c2 body=46 status=ok
// SIG undefined FUN_147d5d6c2(void)

void FUN_147d5d6c2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147d60882(uVar1,param_1,L"InTexture");
  return;
}



// FUNCTION 147d5d6f0 FUN_147d5d6f0 body=56 status=ok
// SIG undefined FUN_147d5d6f0(void)

longlong FUN_147d5d6f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe6) = 0;
  return lVar1;
}



// FUNCTION 147d5d728 FUN_147d5d728 body=42 status=ok
// SIG undefined FUN_147d5d728(void)

void FUN_147d5d728(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147d5d75e FUN_147d5d75e body=46 status=ok
// SIG undefined FUN_147d5d75e(void)

void FUN_147d5d75e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147d60882(uVar1,param_1,L"InExternalTexture");
  return;
}



// FUNCTION 147d5d78c FUN_147d5d78c body=56 status=ok
// SIG undefined FUN_147d5d78c(void)

longlong FUN_147d5d78c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe6) = 0;
  return lVar1;
}



// FUNCTION 147d5d7c4 FUN_147d5d7c4 body=218 status=ok
// SIG undefined FUN_147d5d7c4(void)

ulonglong FUN_147d5d7c4(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_11 = 0;
  lVar1 = FUN_145a50fcc();
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    local_28 = &DAT_14c872af8;
    FUN_14052bb08(DAT_14c872ce0,L"/Script/EngineSettings.GeneralProjectSettings",L"bStartInVR",
                  &local_11);
  }
  else {
    lVar2 = FUN_145a50fcc();
    lVar1 = *(longlong *)(lVar2 + 0x110);
    if (lVar1 == 0) {
      FUN_140aa6c08(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x110);
    }
    local_11 = *(byte *)(lVar1 + 0xfa);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar3 = FUN_14054d46e(&DAT_14c846b20,&DAT_14aabe392);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 | local_11) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5d8a0 FUN_147d5d8a0 body=57 status=ok
// SIG undefined FUN_147d5d8a0(void)

ulonglong FUN_147d5d8a0(longlong param_1,undefined8 param_2)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x12) == '\0')) {
    FUN_144a450dc(param_1 + 0x28,param_2);
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  FUN_1449db362(param_2);
  return uVar1 & 0xffffffff;
}



// FUNCTION 147d5d8da FUN_147d5d8da body=100 status=ok
// SIG undefined FUN_147d5d8da(void)

ulonglong FUN_147d5d8da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  if (((*(char *)(param_1 + 0x15) == '\0') && (*(char *)(param_1 + 0x10) == '\0')) &&
     (*(char *)(param_1 + 0x13) != '\x01')) {
LAB_147d5d910:
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x80);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      lVar5 = 0;
      do {
        if ((*(longlong *)(lVar2 + lVar5) != 0) && (cVar3 = FUN_147d5d8da(), cVar3 == '\0'))
        goto LAB_147d5d910;
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147d5d93e FUN_147d5d93e body=240 status=ok
// SIG undefined FUN_147d5d93e(void)

void FUN_147d5d93e(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14591fc3c(param_2,param_1 + 0x68);
  if ((param_3 != '\0') && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x78);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x80) * 2;
    do {
      local_68 = 0;
      uStack_60 = 0;
      FUN_147d5d93e(*puVar5,&local_68,1);
      if ((longlong)(int)uStack_60 == 0) {
        uVar1 = 0;
      }
      else {
        lVar3 = (longlong)(int)uStack_60 << 5;
        lVar2 = local_68;
        do {
          FUN_144a6c37a(param_2,lVar2);
          lVar2 = lVar2 + 0x20;
          lVar3 = lVar3 + -0x20;
        } while (lVar3 != 0);
        uVar1 = uStack_60 & 0xffffffff;
      }
      FUN_140861e20(local_68,uVar1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5da30 FUN_147d5da30 body=501 status=ok
// SIG undefined FUN_147d5da30(void)

void FUN_147d5da30(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(char *)((longlong)param_1 + 0x12) == '\0') &&
      (*(char *)((longlong)param_1 + 0x11) == '\0')) &&
     (*(char *)((longlong)param_1 + 0x15) == '\x01')) {
    iVar6 = *(int *)(param_1 + 0x10);
    if (iVar6 <= *(int *)((longlong)param_1 + 100) + *(int *)(param_1 + 0xc)) {
      if (iVar6 != 0) {
        bVar8 = 1;
        lVar7 = 0;
        bVar9 = 1;
        do {
          if ((bVar8 & 1) == 0) {
            bVar8 = 0;
          }
          else {
            lVar3 = *(longlong *)(param_1[0xf] + lVar7);
            bVar8 = 1;
            if (*(char *)(lVar3 + 0x10) == '\0') {
              bVar8 = *(byte *)(lVar3 + 0x12);
            }
          }
          if ((bVar9 & 1) == 0) {
            bVar9 = 0;
          }
          else {
            bVar9 = *(byte *)(*(longlong *)(param_1[0xf] + lVar7) + 0x12);
          }
          if (bVar8 == 0 && bVar9 == 0) goto LAB_147d5da6b;
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar6 * 0x10 != lVar7);
        if (bVar9 == 0) {
          if (bVar8 != 0) {
            lVar7 = param_1[0x13];
            if (lVar7 != 0) {
              local_28 = (longlong *)param_1[1];
              if (local_28 == (longlong *)0x0) {
                local_28 = (longlong *)0x0;
                local_30 = 0;
              }
              else {
                iVar6 = (int)local_28[1];
                local_30 = 0;
                do {
                  if (iVar6 == 0) {
                    local_28 = (longlong *)0x0;
                    goto LAB_147d5dbc4;
                  }
                  LOCK();
                  iVar5 = (int)local_28[1];
                  bVar10 = iVar6 == iVar5;
                  if (bVar10) {
                    *(int *)(local_28 + 1) = iVar6 + 1;
                    iVar5 = iVar6;
                  }
                  iVar6 = iVar5;
                  UNLOCK();
                } while (!bVar10);
                local_30 = *param_1;
              }
LAB_147d5dbc4:
              local_20 = &local_30;
              FUN_1401a60d6(lVar7 + 0xd0);
              plVar4 = local_28;
              if (local_28 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_28 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_28)(local_28);
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
            FUN_1402a1afe(param_1);
            if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
              FUN_1401a5e92(param_1);
            }
          }
          goto LAB_147d5da6b;
        }
      }
      lVar7 = param_1[0x13];
      if (lVar7 != 0) {
        local_28 = (longlong *)param_1[1];
        if (local_28 == (longlong *)0x0) {
          local_28 = (longlong *)0x0;
          local_30 = 0;
        }
        else {
          iVar6 = (int)local_28[1];
          local_30 = 0;
          do {
            if (iVar6 == 0) {
              local_28 = (longlong *)0x0;
              goto LAB_147d5db6f;
            }
            LOCK();
            iVar5 = (int)local_28[1];
            bVar10 = iVar6 == iVar5;
            if (bVar10) {
              *(int *)(local_28 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar10);
          local_30 = *param_1;
        }
LAB_147d5db6f:
        local_20 = &local_30;
        FUN_1401a60d6(lVar7 + 0xd0);
        plVar4 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_28)(local_28);
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
      FUN_140886972(param_1);
    }
  }
LAB_147d5da6b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5dc26 FUN_147d5dc26 body=2023 status=ok
// SIG undefined FUN_147d5dc26(void)

undefined8 *
FUN_147d5dc26(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             byte param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_2f8 [32];
  undefined8 *local_2d8;
  longlong *local_2d0;
  uint local_2c4;
  undefined8 *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  undefined8 *local_298;
  longlong *local_290;
  longlong *local_288;
  undefined2 *local_280;
  undefined2 *local_278;
  ulonglong *local_270;
  char local_268;
  undefined2 local_260 [256];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((int)param_3[1] < 1) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60[0] ^ (ulonglong)auStack_2f8);
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  puVar9[3] = 0;
  *(undefined4 *)(puVar9 + 4) = 0;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[7] = 0;
  *(undefined4 *)(puVar9 + 8) = 0;
  local_2c0 = puVar9 + 9;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xe) = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14aac2250;
  plVar10[2] = (longlong)puVar9;
  local_2d8 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    if (plVar10 == (longlong *)0x0) {
      *puVar9 = puVar9;
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *puVar9 = puVar9;
      if ((longlong *)puVar9[1] != plVar10) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar16 = (longlong *)puVar9[1];
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))();
          }
        }
        local_2d8[1] = plVar10;
      }
      LOCK();
      plVar16 = plVar10 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
  }
  local_2d8[0x13] = param_1;
  *(undefined1 *)((longlong)local_2d8 + 0x15) = 1;
  FUN_144a787a6(local_2c0,param_4);
  local_280 = local_260;
  local_268 = '\0';
  local_270 = local_60;
  local_278 = local_280;
  if ((param_5 & 1) != 0) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = (undefined2 *)*param_4;
    }
    FUN_140212e80(&local_280,L"%s: Merged(",puVar17);
  }
  puVar9 = local_2d8;
  local_2a8 = param_1;
  if ((longlong)(int)param_3[1] != 0) {
    plVar16 = (longlong *)*param_3;
    local_290 = plVar16 + (longlong)(int)param_3[1] * 2;
    local_2b8 = local_2d8 + 0x11;
    local_2b0 = local_2d8 + 0xf;
    local_2c4 = (uint)CONCAT71((int7)((ulonglong)local_2b0 >> 8),1);
    local_2d0 = plVar10;
    local_298 = param_2;
    do {
      lVar3 = *plVar16;
      plVar19 = (longlong *)plVar16[1];
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
      }
      if (lVar3 == 0) {
        iVar14 = 3;
        if ((param_5 & 4) == 0) {
          *param_2 = 0;
          param_2[1] = 0;
          iVar14 = 1;
        }
      }
      else {
        local_288 = plVar19;
        if ((param_5 & 1) != 0) {
          if ((local_2c4 & 1) == 0) {
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(lVar3 + 0x50) != 0) {
              puVar17 = *(undefined2 **)(lVar3 + 0x48);
            }
            pwVar13 = L", %s";
          }
          else {
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(lVar3 + 0x50) != 0) {
              puVar17 = *(undefined2 **)(lVar3 + 0x48);
            }
            pwVar13 = L"%s";
          }
          FUN_140212e80(&local_280,pwVar13,puVar17);
          local_2c4 = 0;
          puVar9 = local_2d8;
        }
        if (((param_5 & 2) != 0) && (iVar14 = *(int *)(lVar3 + 0x90), 0 < iVar14)) {
          plVar10 = (longlong *)(lVar3 + 0x88);
          iVar15 = 0;
          do {
            plVar2 = local_2d0;
            lVar11 = *plVar10;
            plVar19 = *(longlong **)(lVar11 + 8 + (longlong)iVar15 * 0x10);
            bVar5 = true;
            if (plVar19 == (longlong *)0x0) {
LAB_147d5e07d:
              plVar19 = (longlong *)0x0;
LAB_147d5e080:
              FUN_147d6090e(plVar10,iVar15);
              FUN_147d60980(plVar10);
              iVar15 = iVar15 + -1;
              iVar14 = iVar14 + -1;
              puVar9 = local_2d8;
              if (!bVar5) goto LAB_147d5e04e;
            }
            else {
              iVar7 = (int)plVar19[1];
              do {
                if (iVar7 == 0) goto LAB_147d5e07d;
                LOCK();
                iVar6 = (int)plVar19[1];
                bVar20 = iVar7 == iVar6;
                if (bVar20) {
                  *(int *)(plVar19 + 1) = iVar7 + 1;
                  iVar6 = iVar7;
                }
                iVar7 = iVar6;
                UNLOCK();
              } while (!bVar20);
              puVar4 = *(undefined8 **)(lVar11 + (longlong)iVar15 * 0x10);
              if ((puVar4 == (undefined8 *)0x0) || (puVar4 != puVar9)) {
                if (puVar4 == (undefined8 *)0x0) {
                  bVar5 = false;
                }
                else {
                  plVar12 = puVar4 + 0xf;
                  iVar7 = *(int *)(puVar4 + 0x10);
                  if ((longlong)iVar7 != 0) {
                    lVar11 = puVar4[0xf];
                    lVar18 = 0;
                    uVar8 = 0;
                    do {
                      if (*(longlong *)(lVar11 + lVar18) == lVar3) {
                        if ((-1 < (int)uVar8) && ((int)uVar8 < iVar7)) {
                          if (local_2d0 == (longlong *)0x0) {
                            lVar18 = (ulonglong)(uVar8 & 0x7fffffff) * 0x10;
                            *(undefined8 **)(lVar11 + lVar18) = puVar9;
                            plVar12 = *(longlong **)(lVar11 + 8 + lVar18);
                            if (plVar12 == (longlong *)0x0) goto LAB_147d5e11c;
                            *(undefined8 *)(lVar11 + lVar18 + 8) = 0;
LAB_147d5e1d8:
                            LOCK();
                            plVar2 = plVar12 + 1;
                            *(int *)plVar2 = (int)*plVar2 + -1;
                            UNLOCK();
                            if ((int)*plVar2 != 0) goto LAB_147d5e11c;
                            (**(code **)*plVar12)(plVar12);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar12 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            puVar9 = local_2d8;
                            if (*piVar1 != 0) goto LAB_147d5e11c;
                            lVar11 = *plVar12;
                          }
                          else {
                            LOCK();
                            *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
                            UNLOCK();
                            lVar11 = *plVar12;
                            lVar18 = (ulonglong)(uVar8 & 0x7fffffff) * 0x10;
                            *(undefined8 **)(lVar11 + lVar18) = puVar9;
                            plVar12 = *(longlong **)(lVar11 + 8 + lVar18);
                            if (local_2d0 != plVar12) {
                              *(longlong **)(lVar11 + lVar18 + 8) = local_2d0;
                              if (plVar12 != (longlong *)0x0) goto LAB_147d5e1d8;
                              goto LAB_147d5e11c;
                            }
                            LOCK();
                            plVar12 = local_2d0 + 1;
                            *(int *)plVar12 = (int)*plVar12 + -1;
                            UNLOCK();
                            if ((int)*plVar12 != 0) goto LAB_147d5e11c;
                            (**(code **)*local_2d0)(local_2d0);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar2 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            puVar9 = local_2d8;
                            if (*piVar1 != 0) goto LAB_147d5e11c;
                            lVar11 = *local_2d0;
                            plVar12 = local_2d0;
                          }
                          (**(code **)(lVar11 + 0x10))(plVar12);
                          puVar9 = local_2d8;
                          goto LAB_147d5e11c;
                        }
                        break;
                      }
                      uVar8 = uVar8 + 1;
                      lVar18 = lVar18 + 0x10;
                    } while ((longlong)iVar7 << 4 != lVar18);
                  }
                  if (local_2d0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
                    UNLOCK();
                    iVar7 = *(int *)(puVar4 + 0x10);
                  }
                  *(uint *)(puVar4 + 0x10) = iVar7 + 1U;
                  if (*(uint *)((longlong)puVar4 + 0x84) < iVar7 + 1U) {
                    local_2a0 = plVar12;
                    FUN_1417b93bc(plVar12,iVar7);
                    puVar9 = local_2d8;
                    plVar12 = local_2a0;
                  }
                  lVar11 = *plVar12;
                  *(undefined8 **)(lVar11 + (longlong)iVar7 * 0x10) = puVar9;
                  *(longlong **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = local_2d0;
LAB_147d5e11c:
                  LOCK();
                  *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
                  UNLOCK();
                  iVar7 = *(int *)(puVar9 + 0x12);
                  *(uint *)(puVar9 + 0x12) = iVar7 + 1U;
                  if (*(uint *)((longlong)puVar9 + 0x94) < iVar7 + 1U) {
                    FUN_147d6197a(local_2b8,iVar7);
                  }
                  lVar11 = *local_2b8;
                  *(undefined8 **)(lVar11 + (longlong)iVar7 * 0x10) = puVar4;
                  *(longlong **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = plVar19;
                  bVar5 = false;
                  param_2 = local_298;
                }
                goto LAB_147d5e080;
              }
LAB_147d5e04e:
              LOCK();
              plVar2 = plVar19 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                puVar9 = local_2d8;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  puVar9 = local_2d8;
                }
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar14);
        }
        plVar10 = local_2d0;
        if (local_2d0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2d0 + 0xc) = *(int *)((longlong)local_2d0 + 0xc) + 1;
          UNLOCK();
        }
        iVar14 = *(int *)(lVar3 + 0x90);
        *(uint *)(lVar3 + 0x90) = iVar14 + 1U;
        if (*(uint *)(lVar3 + 0x94) < iVar14 + 1U) {
          FUN_147d6197a((longlong *)(lVar3 + 0x88),iVar14);
          puVar9 = local_2d8;
        }
        lVar11 = *(longlong *)(lVar3 + 0x88);
        *(undefined8 **)(lVar11 + (longlong)iVar14 * 0x10) = puVar9;
        *(longlong **)(lVar11 + 8 + (longlong)iVar14 * 0x10) = plVar10;
        iVar14 = *(int *)(puVar9 + 0x10);
        *(uint *)(puVar9 + 0x10) = iVar14 + 1U;
        if (*(uint *)((longlong)puVar9 + 0x84) < iVar14 + 1U) {
          FUN_1417b93bc(local_2b0,iVar14);
          puVar9 = local_2d8;
        }
        lVar11 = *local_2b0;
        *(longlong *)(lVar11 + (longlong)iVar14 * 0x10) = lVar3;
        *(longlong **)(lVar11 + 8 + (longlong)iVar14 * 0x10) = local_288;
        if (local_288 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_288 + 1) = (int)local_288[1] + 1;
          UNLOCK();
        }
        if (*(char *)(lVar3 + 0x10) == '\x01') {
          *(int *)(puVar9 + 0xc) = *(int *)(puVar9 + 0xc) + 1;
        }
        iVar14 = 0;
        plVar19 = local_288;
        if (*(char *)(lVar3 + 0x12) == '\x01') {
          *(int *)((longlong)puVar9 + 100) = *(int *)((longlong)puVar9 + 100) + 1;
        }
      }
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar19 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar9 = local_2d8;
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
            puVar9 = local_2d8;
          }
        }
      }
      if ((iVar14 != 3) && (iVar14 != 0)) {
        if (local_268 == '\x01') {
          FUN_1400020a8(local_280);
        }
        if (plVar10 == (longlong *)0x0) goto LAB_147d5e293;
        goto LAB_147d5e276;
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != local_290);
  }
  lVar3 = local_2a8;
  if ((param_5 & 1) != 0) {
    if (local_270 <= local_278 + 1) {
      FUN_140213274(&local_280,1);
    }
    *local_278 = 0x29;
    local_278[1] = 0;
    local_278 = local_278 + 1;
    FUN_14020fad6(local_2c0,local_280);
    puVar9 = local_2d8;
  }
  iVar14 = *(int *)(lVar3 + 0xd8);
  *(uint *)(lVar3 + 0xd8) = iVar14 + 1U;
  if (*(uint *)(lVar3 + 0xdc) < iVar14 + 1U) {
    FUN_1402a19f0((longlong *)(lVar3 + 0xd0),iVar14);
    puVar9 = local_2d8;
  }
  lVar3 = *(longlong *)(lVar3 + 0xd0);
  *(undefined8 **)(lVar3 + (longlong)iVar14 * 0x10) = puVar9;
  *(longlong **)(lVar3 + 8 + (longlong)iVar14 * 0x10) = plVar10;
  if (plVar10 == (longlong *)0x0) {
    FUN_147d5da30();
    *param_2 = puVar9;
    param_2[1] = 0;
    if (local_268 == '\x01') {
      FUN_1400020a8(local_280);
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    FUN_147d5da30();
    *param_2 = puVar9;
    param_2[1] = plVar10;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (local_268 == '\x01') {
      FUN_1400020a8(local_280);
    }
LAB_147d5e276:
    LOCK();
    plVar16 = plVar10 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
LAB_147d5e293:
  if ((local_60[0] ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5e40e FUN_147d5e40e body=310 status=ok
// SIG undefined FUN_147d5e40e(void)

undefined8 FUN_147d5e40e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = local_50;
  if (param_2 != 0) {
    local_38 = param_1 + 0x20;
    local_40 = 0x100000000;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1449c0562(&local_40);
    }
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_60 = local_40;
    local_58 = local_38;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    local_68 = (longlong *)(param_1 + 0x10);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar2 = local_50._4_4_;
      local_50 = uVar3;
      do {
        plVar1 = *(longlong **)(*local_68 + 0x20 + (longlong)iVar2 * 0x30);
        if (*plVar1 == param_2) {
          if ((int)plVar1[2] < 1) {
            if ((int)plVar1[4] < 1) goto LAB_147d5e4d3;
            lVar4 = 0x18;
          }
          else {
            lVar4 = 8;
          }
          FUN_144a787a6(param_3,**(longlong **)((longlong)plVar1 + lVar4) + 0x48);
          uVar3 = 1;
          goto LAB_147d5e50a;
        }
LAB_147d5e4d3:
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar2 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  uVar3 = 0;
LAB_147d5e50a:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147d5e546 FUN_147d5e546 body=277 status=ok
// SIG undefined FUN_147d5e546(void)

bool FUN_147d5e546(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_1448b0550();
  if ((lVar6 == 0) || ((longlong)*(int *)(lVar6 + 0x10) < 1)) {
    bVar9 = false;
  }
  else {
    plVar8 = *(longlong **)(lVar6 + 8);
    plVar2 = plVar8 + *(int *)(lVar6 + 0x10);
    do {
      plVar3 = (longlong *)*plVar8;
      plVar7 = (longlong *)plVar3[1];
      if (plVar7 == (longlong *)0x0) {
LAB_147d5e5b4:
        plVar7 = (longlong *)0x0;
        local_48 = 0;
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_147d5e5b4;
          LOCK();
          iVar4 = (int)plVar7[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        local_48 = *plVar3;
      }
      local_40 = plVar7;
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar6) == local_48) {
            FUN_147d62310(param_3,&local_48);
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*(int *)(param_1 + 200) * 0x10 != lVar6);
      }
      if (plVar7 != (longlong *)0x0) {
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
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
    bVar9 = 0 < *(int *)(param_3 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 147d5e65c FUN_147d5e65c body=128 status=ok
// SIG undefined FUN_147d5e65c(void)

undefined4 * FUN_147d5e65c(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = param_3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_3);
  }
  return param_1;
}



// FUNCTION 147d5e6dc FUN_147d5e6dc body=98 status=ok
// SIG undefined FUN_147d5e6dc(void)

void FUN_147d5e6dc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1402a19f0(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x10 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 4);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 147d5e73e FUN_147d5e73e body=98 status=ok
// SIG undefined FUN_147d5e73e(void)

void FUN_147d5e73e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1417f25d8(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 147d5e7a0 FUN_147d5e7a0 body=237 status=ok
// SIG undefined FUN_147d5e7a0(void)

void FUN_147d5e7a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
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
  FUN_14371bf72(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5e8c2 FUN_147d5e8c2 body=397 status=ok
// SIG undefined FUN_147d5e8c2(void)

void FUN_147d5e8c2(longlong param_1,undefined8 param_2,int param_3,float param_4,char param_5,
                  undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) == -1) {
    local_54 = 4;
  }
  else {
    iVar15 = ((uint)*(byte *)(param_1 + 0xc4) - param_3) + (uint)*(byte *)(param_1 + 0xc3);
    if ((int)(uint)*(byte *)(param_1 + 0xc5) < iVar15 == (bool)param_5) {
      iVar3 = *(int *)(param_1 + 0x30);
      uVar11 = iVar3 + 1;
      *(uint *)(param_1 + 0x30) = uVar11;
      if (*(uint *)(param_1 + 0x34) < uVar11) {
        FUN_147d62b5e((longlong *)(param_1 + 0x28));
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      lVar13 = (longlong)iVar3 * 0xa0;
      dVar6 = (double)param_4 + DAT_14c866ff8;
      *(undefined8 *)(lVar5 + lVar13) = param_2;
      *(double *)(lVar5 + 8 + lVar13) = dVar6;
      *(double *)(lVar5 + 0x10 + lVar13) = dVar6;
      *(int *)(lVar5 + 0x18 + lVar13) = iVar15;
      *(char *)(lVar5 + 0x1c + lVar13) = param_5;
      *(undefined1 *)(lVar5 + 0x1d + lVar13) = 1;
      *(undefined8 *)(lVar5 + 0x20 + lVar13) = 0;
      *(undefined8 *)(lVar5 + 0x30 + lVar13) = 0;
      *(undefined8 *)(lVar5 + 0x60 + lVar13) = *param_6;
      *(undefined8 *)(lVar5 + 0x70 + lVar13) = param_6[2];
      param_6[2] = 0;
      uVar7 = *(undefined4 *)(param_6 + 4);
      uVar8 = *(undefined4 *)((longlong)param_6 + 0x24);
      uVar9 = *(undefined4 *)(param_6 + 5);
      uVar10 = *(undefined4 *)((longlong)param_6 + 0x2c);
      uVar12 = param_6[7];
      puVar1 = (undefined8 *)(lVar5 + 0x90 + lVar13);
      *puVar1 = param_6[6];
      puVar1[1] = uVar12;
      puVar2 = (undefined4 *)(lVar5 + 0x80 + lVar13);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      if (*(longlong *)(lVar5 + 0x60 + lVar13) != 0) {
        *param_6 = 0;
      }
      goto LAB_147d5e976;
    }
    local_54 = 0;
  }
  pcVar4 = (code *)*param_6;
  plVar14 = param_6 + 4;
  if ((longlong *)param_6[2] != (longlong *)0x0) {
    plVar14 = (longlong *)param_6[2];
  }
  local_68 = param_2;
  local_60 = param_1;
  uVar12 = (**(code **)(*plVar14 + 8))(plVar14);
  (*pcVar4)(uVar12,&local_68,&local_60,&local_54);
LAB_147d5e976:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5ea50 FUN_147d5ea50 body=458 status=ok
// SIG undefined FUN_147d5ea50(void)

void FUN_147d5ea50(longlong param_1,undefined8 param_2,float param_3,undefined8 *param_4,
                  float param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  double dVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) == -1) {
    local_54 = 4;
  }
  else {
    if ((*(byte *)(param_1 + 0xc6) <= *(byte *)(param_1 + 0xc1)) ||
       (*(byte *)(param_1 + 0xc5) < *(byte *)(param_1 + 0xc6))) {
      iVar3 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
        FUN_147d62b5e((longlong *)(param_1 + 0x28),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar14 = (longlong)iVar3 * 0xa0;
      lVar1 = lVar4 + lVar14;
      dVar6 = (double)param_5 + DAT_14c866ff8;
      dVar16 = (double)param_3 + DAT_14c866ff8;
      *(undefined8 *)(lVar4 + lVar14) = param_2;
      *(double *)(lVar4 + 8 + lVar14) = dVar16;
      *(double *)(lVar4 + 0x10 + lVar14) = dVar6;
      *(undefined4 *)(lVar4 + 0x18 + lVar14) = 0;
      *(undefined2 *)(lVar4 + 0x1c + lVar14) = 0;
      *(undefined8 *)(lVar4 + 0x20 + lVar14) = *param_4;
      *(undefined8 *)(lVar4 + 0x30 + lVar14) = param_4[2];
      param_4[2] = 0;
      uVar13 = param_4[4];
      uVar11 = param_4[5];
      uVar12 = param_4[7];
      puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar14);
      *puVar2 = param_4[6];
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar14);
      *puVar2 = uVar13;
      puVar2[1] = uVar11;
      if (*(longlong *)(lVar4 + 0x20 + lVar14) != 0) {
        *param_4 = 0;
      }
      *(undefined8 *)(lVar1 + 0x60) = *param_6;
      *(undefined8 *)(lVar1 + 0x70) = param_6[2];
      param_6[2] = 0;
      uVar7 = *(undefined4 *)(param_6 + 4);
      uVar8 = *(undefined4 *)((longlong)param_6 + 0x24);
      uVar9 = *(undefined4 *)(param_6 + 5);
      uVar10 = *(undefined4 *)((longlong)param_6 + 0x2c);
      uVar13 = param_6[7];
      *(undefined8 *)(lVar1 + 0x90) = param_6[6];
      *(undefined8 *)(lVar1 + 0x98) = uVar13;
      *(undefined4 *)(lVar1 + 0x80) = uVar7;
      *(undefined4 *)(lVar1 + 0x84) = uVar8;
      *(undefined4 *)(lVar1 + 0x88) = uVar9;
      *(undefined4 *)(lVar1 + 0x8c) = uVar10;
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        *param_6 = 0;
      }
      goto LAB_147d5ebd1;
    }
    local_54 = 0;
  }
  pcVar5 = (code *)*param_6;
  plVar15 = param_6 + 4;
  if ((longlong *)param_6[2] != (longlong *)0x0) {
    plVar15 = (longlong *)param_6[2];
  }
  local_68 = param_2;
  local_60 = param_1;
  uVar13 = (**(code **)(*plVar15 + 8))(plVar15);
  (*pcVar5)(uVar13,&local_68,&local_60,&local_54);
LAB_147d5ebd1:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5ec1c FUN_147d5ec1c body=230 status=ok
// SIG undefined FUN_147d5ec1c(void)

void FUN_147d5ec1c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  int iVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x30);
  if (0 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x28);
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      if (*(longlong *)(*plVar1 + (longlong)iVar7 * 0xa0) == param_2) {
        lVar5 = *plVar1 + (longlong)iVar7 * 0xa0;
        local_4c = 3;
        pcVar2 = *(code **)(lVar5 + 0x60);
        plVar6 = (longlong *)(lVar5 + 0x80);
        if (*(longlong **)(lVar5 + 0x70) != (longlong *)0x0) {
          plVar6 = *(longlong **)(lVar5 + 0x70);
        }
        local_60 = param_2;
        local_58 = param_1;
        uVar4 = (**(code **)(*plVar6 + 8))();
        (*pcVar2)(uVar4,&local_60,&local_58,&local_4c);
        iVar8 = iVar7 + -1;
        FUN_147d62bf2(plVar1,iVar7);
        FUN_147d62c96(plVar1);
        iVar3 = *(int *)(param_1 + 0x30);
      }
      iVar7 = iVar8 + 1;
    } while (iVar7 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5ed04 FUN_147d5ed04 body=79 status=ok
// SIG undefined FUN_147d5ed04(void)

void FUN_147d5ed04(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_14371c050();
  if (*(int *)(param_1 + 0xb8) != -1) {
    lVar1 = FUN_140083894();
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x98))(*(longlong **)(lVar1 + 0x30),param_1);
    FUN_14371c050(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147d5ed54 FUN_147d5ed54 body=104 status=ok
// SIG undefined FUN_147d5ed54(void)

void FUN_147d5ed54(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 1) = param_2;
  FUN_147d5edd2(&local_28);
  lVar1 = *param_1;
  *param_1 = local_28;
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5edd2 FUN_147d5edd2 body=123 status=ok
// SIG undefined FUN_147d5edd2(void)

undefined8 * FUN_147d5edd2(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == '\x01') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar1 = &PTR_FUN_14aac22a0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  else if (param_2 == '\0') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_14aac2270;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0xffff;
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 147d5ee4e FUN_147d5ee4e body=33 status=ok
// SIG undefined FUN_147d5ee4e(void)

undefined8 * FUN_147d5ee4e(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_147d5ed54();
  return param_1;
}



// FUNCTION 147d5ee70 FUN_147d5ee70 body=274 status=ok
// SIG undefined FUN_147d5ee70(void)

undefined8 FUN_147d5ee70(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [43];
  char local_1d;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_2 + 5) & 4) == 0) ||
     (iVar4 = (**(code **)(*(longlong *)*param_1 + 8))(), iVar4 != 0)) {
    local_1c = 0x4b454553;
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_1c);
      }
    }
    else {
      local_1c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (local_1c == 0x4b454553) {
      local_1d = *(char *)(param_1 + 1);
      puVar3 = (ulonglong *)param_2[1];
      pcVar2 = (char *)*puVar3 + 1;
      if ((char *)puVar3[1] < pcVar2) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1d,1);
      }
      else {
        local_1d = *(char *)*puVar3;
        *puVar3 = (ulonglong)pcVar2;
      }
      if (((*(byte *)(param_2 + 5) & 1) != 0) && (local_1d != *(char *)(param_1 + 1))) {
        FUN_147d5ed54(param_1);
      }
      uVar5 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,param_2);
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147d5ef88 FUN_147d5ef88 body=100 status=ok
// SIG undefined FUN_147d5ef88(void)

void FUN_147d5ef88(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  LOCK();
  bVar2 = *(int *)(lVar1 + 0x48) == 1;
  if (bVar2) {
    *(int *)(lVar1 + 0x48) = 2;
  }
  UNLOCK();
  if (bVar2) {
    FUN_1448b65ca(lVar1 + 0x10,0);
    *(undefined4 *)(lVar1 + 0x48) = 3;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 0x48) != 0) {
    while (*(int *)(lVar1 + 0x48) != 3) {
      FUN_14000f986(0);
    }
    FUN_140342252(lVar1 + 0x10);
  }
  *(undefined4 *)(lVar1 + 0x48) = 0;
  return;
}



// FUNCTION 147d5f0f0 FUN_147d5f0f0 body=32 status=ok
// SIG undefined FUN_147d5f0f0(void)

int FUN_147d5f0f0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_147d659ba();
    iVar1 = iVar1 + 0x1d8;
  }
  return iVar1;
}



// FUNCTION 147d5f110 FUN_147d5f110 body=85 status=ok
// SIG undefined FUN_147d5f110(void)

undefined8 FUN_147d5f110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return 0;
  }
  FUN_1402d4fc6(param_1 + 0x10);
  uVar1 = FUN_1448226f0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 147d5f166 FUN_147d5f166 body=342 status=ok
// SIG undefined FUN_147d5f166(void)

void FUN_147d5f166(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  LOCK();
  bVar7 = *(int *)(lVar4 + 0x30) == 1;
  if (bVar7) {
    *(int *)(lVar4 + 0x30) = 2;
  }
  UNLOCK();
  if (bVar7) {
    FUN_140342504(lVar4 + 0x10,0);
    *(undefined4 *)(lVar4 + 0x30) = 3;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  LOCK();
  bVar7 = *(int *)(lVar4 + 0x18) == 1;
  if (bVar7) {
    *(int *)(lVar4 + 0x18) = 2;
  }
  UNLOCK();
  if (bVar7) {
    FUN_14034264a(lVar4 + 0x10,0);
    *(undefined4 *)(lVar4 + 0x18) = 3;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar4 + 0x30) != 0) {
    while (*(int *)(lVar4 + 0x30) != 3) {
      FUN_14000f986(0);
    }
    FUN_144b2b038(lVar4 + 0x10);
  }
  *(undefined4 *)(lVar4 + 0x30) = 0;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar4 + 0x18) != 0) {
    while (*(int *)(lVar4 + 0x18) != 3) {
      FUN_14000f986(0);
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar4 + 0x10) = 0;
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  *(undefined4 *)(lVar4 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x140);
  if (iVar2 < iVar3) {
    iVar6 = iVar2 - ((int)ROUND(-0.5 - ((float)iVar3 * param_2 + (float)iVar3 * param_2)) >> 1);
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_144b2afee(lVar4 + 0x10,*(longlong *)(param_1 + 8),iVar2,iVar6);
    *(undefined4 *)(lVar4 + 0x30) = 1;
  }
  return;
}



// FUNCTION 147d5f2bc FUN_147d5f2bc body=32 status=ok
// SIG undefined FUN_147d5f2bc(void)

int FUN_147d5f2bc(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_147d659ba();
    iVar1 = iVar1 + 0x1d8;
  }
  return iVar1;
}



// FUNCTION 147d5f2ee FUN_147d5f2ee body=330 status=ok
// SIG undefined FUN_147d5f2ee(void)

longlong FUN_147d5f2ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_b8 [4];
  undefined8 local_98;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar4 = FUN_14490d72a();
  cVar3 = FUN_144b2c332(param_1);
  lVar5 = 0;
  if ((cVar3 != '\0') && (iVar4 - 1U < 2)) {
    FUN_1411371f6(local_b8);
    lVar5 = FUN_1459ea024();
    local_b8[0] = *(undefined8 *)(lVar5 + 0x18);
    local_98 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1459ea024();
    local_c8 = local_b8;
    lVar5 = FUN_141137228(param_1,uVar6,0,0);
    if (lVar5 == 0) {
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
      lVar5 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x90);
      if ((longlong)iVar4 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x88);
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar7);
          if ((lVar2 != 0) && (cVar3 = FUN_147b980c8(lVar2), cVar3 != '\0')) {
            FUN_147d5f43a(lVar5,lVar2,1);
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar4 * 8 != lVar7);
      }
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147d5f43a FUN_147d5f43a body=181 status=ok
// SIG undefined FUN_147d5f43a(void)

void FUN_147d5f43a(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    (**(code **)(*param_2 + 0x2d0))(param_2,&local_48);
    if (param_3 == '\0') {
      FUN_14768c25a(param_1 + 0x390,local_48);
    }
    else {
      local_50 = 0;
      FUN_14485c47a(&local_50,param_2);
      local_40 = &local_48;
      local_38 = &local_50;
      FUN_14768c3de(param_1 + 0x390,local_2c,&local_40,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5f4f0 FUN_147d5f4f0 body=171 status=ok
// SIG undefined FUN_147d5f4f0(void)

undefined8 FUN_147d5f4f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    lVar3 = *param_2;
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x3d8) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar8 * 0x18);
        if (*plVar1 == lVar3) {
          if ((uint *)(plVar1 + 1) == (uint *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          if (*(int *)((longlong)plVar1 + 0xc) == 0) {
            return 0;
          }
          uVar2 = *(uint *)(plVar1 + 1);
          uVar4 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar5 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (puVar5 == (undefined8 *)0x0) {
              return 0;
            }
            if (*(int *)(puVar5 + 2) != *(int *)((longlong)plVar1 + 0xc)) {
              return 0;
            }
            if ((*(uint *)(puVar5 + 1) & 0x10200000) != 0) {
              return 0;
            }
            uVar4 = *puVar5;
          }
          return uVar4;
        }
        iVar8 = (int)plVar1[2];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d5f5b2 FUN_147d5f5b2 body=468 status=ok
// SIG undefined FUN_147d5f5b2(void)

void FUN_147d5f5b2(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147372d8e(param_1,param_3 + 0x40);
  *(undefined1 *)(param_1 + 0x17) = 2;
  if (*(int *)(param_3 + 0x20) != 0) {
    *(longlong *)(param_1 + 0x28) = param_3 + 0x10;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a4a0) {
    FUN_144b3d300(&DAT_14cb0a4a0);
    if (DAT_14cb0a4a0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Raytracing.DebugForceRuntimeBLAS",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cb0a498 = 0;
      }
      else {
        DAT_14cb0a498 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14cb0a4a0);
    }
  }
  lVar3 = DAT_14cb0a498;
  if (DAT_14cb0a498 == 0) {
LAB_147d5f650:
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar3 + uVar6 * 4) != 0) goto LAB_147d5f650;
  }
  (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,&local_28,param_2,param_1);
  plVar7 = (longlong *)(param_1 + 0x50);
  if (plVar7 != &local_28) {
    lVar3 = *plVar7;
    *plVar7 = local_28;
    local_28 = 0;
    if (lVar3 == 0) goto LAB_147d5f6e3;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147d5f6e3:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)(*(longlong *)*plVar7 + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x58) = uVar5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5f788 FUN_147d5f788 body=148 status=ok
// SIG undefined FUN_147d5f788(void)

void FUN_147d5f788(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 local_52;
  undefined8 local_51;
  undefined8 uStack_49;
  undefined8 local_41;
  undefined8 uStack_39;
  undefined8 local_31;
  undefined5 uStack_29;
  undefined3 uStack_24;
  undefined5 uStack_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  local_52 = 1;
  local_51 = 0;
  uStack_49 = 0;
  local_41 = 0;
  uStack_39 = 0;
  local_31 = 0;
  uStack_29 = 0;
  uStack_24 = 0;
  uStack_21 = 0;
  FUN_141793e86(0,&local_68);
  FUN_14005bca4(&local_68);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5f85c FUN_147d5f85c body=308 status=ok
// SIG undefined FUN_147d5f85c(void)

longlong FUN_147d5f85c(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  LOCK();
  bVar5 = *(int *)(lVar2 + 0x30) == 1;
  if (bVar5) {
    *(int *)(lVar2 + 0x30) = 2;
  }
  UNLOCK();
  if (bVar5) {
    FUN_140342504(lVar2 + 0x10,0);
    *(undefined4 *)(lVar2 + 0x30) = 3;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  LOCK();
  bVar5 = *(int *)(lVar2 + 0x18) == 1;
  if (bVar5) {
    *(int *)(lVar2 + 0x18) = 2;
  }
  UNLOCK();
  if (bVar5) {
    FUN_14034264a(lVar2 + 0x10,0);
    *(undefined4 *)(lVar2 + 0x18) = 3;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar2 + 0x30) != 0) {
    while (*(int *)(lVar2 + 0x30) != 3) {
      FUN_14000f986(0);
    }
    FUN_144b2b038(lVar2 + 0x10);
  }
  *(undefined4 *)(lVar2 + 0x30) = 0;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar2 + 0x18) != 0) {
    while (*(int *)(lVar2 + 0x18) != 3) {
      FUN_14000f986(0);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(undefined4 *)(lVar2 + 0x18) = 0;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != lVar2 && (param_2 == '\x01' && lVar4 == 0)) {
    *(longlong *)(param_1 + 0x20) = lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return lVar4;
}



// FUNCTION 147d5f990 FUN_147d5f990 body=75 status=ok
// SIG undefined FUN_147d5f990(void)

longlong * FUN_147d5f990(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_2) {
    *param_1 = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
    }
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x90);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (*(code *)**(undefined8 **)(lVar2 + 0x88))(lVar2 + 0x88,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d5f9dc FUN_147d5f9dc body=124 status=ok
// SIG undefined FUN_147d5f9dc(void)

void FUN_147d5f9dc(longlong param_1,int param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x648) == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
    FUN_147d5fa6a(param_1 + 0x650,local_20,&local_1c);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5fa6a FUN_147d5fa6a body=282 status=ok
// SIG undefined FUN_147d5fa6a(void)

undefined4 * FUN_147d5fa6a(longlong param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a6ca48(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar1 = FUN_144aff926(param_1,uVar3,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1449809d4(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5fb8a FUN_147d5fb8a body=89 status=ok
// SIG undefined FUN_147d5fb8a(void)

void FUN_147d5fb8a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x410);
  while (iVar1 != 0) {
    FUN_14371df20(param_1,0,0);
    iVar1 = *(int *)(param_1 + 0x410);
  }
  FUN_140187fa0(*(undefined8 *)(param_1 + 0x2a8),1,0);
  FUN_140187fa0(*(undefined8 *)(param_1 + 0x2b0),1,0);
  FUN_1447ab8d8(param_1,0);
  return;
}



// FUNCTION 147d5fbec FUN_147d5fbec body=566 status=ok
// SIG undefined FUN_147d5fbec(void)

void FUN_147d5fbec(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  LPCRITICAL_SECTION local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x6b0);
  EnterCriticalSection(lpCriticalSection);
  if (param_2 != 0) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400821c8(&local_98,0x20);
    plVar1 = (longlong *)(param_2 + 0x240);
    lVar2 = param_2 + 0x250;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    uStack_78 = lVar2;
    if (*(int *)(param_2 + 0x268) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar8 = *(int *)(param_2 + 0x268);
    }
    uStack_a0 = CONCAT44(uStack_64,uStack_68);
    local_a8 = local_70;
    uVar4 = local_a8;
    local_b8 = (undefined4)local_80;
    uStack_b4 = local_80._4_4_;
    uStack_b0 = (undefined4)uStack_78;
    uStack_ac = uStack_78._4_4_;
    local_a8._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    iVar5 = local_a8._4_4_;
    local_c8 = lpCriticalSection;
    local_c0 = plVar1;
    if ((local_a8._4_4_ != iVar8) || (local_a8 = uVar4, uStack_78 != lVar2)) {
      do {
        local_a8 = uVar4;
        plVar3 = *(longlong **)(*local_c0 + (longlong)iVar5 * 0x10);
        if (plVar3 != (longlong *)0x0) {
          lVar7 = FUN_144a3a302();
          if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
              (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
               == lVar7 + 0x30)) && ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0)) {
            bVar11 = (longlong)uStack_90 < 0;
            uStack_90 = uStack_90 & 0xffffffff00000000;
            if (bVar11) {
              FUN_1400821c8(&local_98,0);
            }
            (**(code **)(*plVar3 + 0x798))(plVar3,&local_98,4);
            lVar7 = local_98;
            lVar10 = (longlong)(int)uStack_90;
            if (lVar10 != 0) {
              lVar9 = 0;
              do {
                lVar6 = FUN_147d5fe24(param_1,*(undefined8 *)(lVar7 + lVar9));
                if (lVar6 != 0) {
                  fVar12 = *(float *)(lVar6 + 0x60);
                  if (*(float *)(lVar6 + 0x60) <= param_3) {
                    fVar12 = param_3;
                  }
                  *(float *)(lVar6 + 0x60) = fVar12;
                }
                lVar9 = lVar9 + 8;
              } while (lVar10 * 8 != lVar9);
            }
          }
        }
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
        FUN_1449c0562(&local_b8);
        iVar5 = local_a8._4_4_;
        uVar4 = local_a8;
      } while (local_c0 != plVar1 ||
               (CONCAT44(uStack_ac,uStack_b0) != lVar2 || local_a8._4_4_ != iVar8));
    }
    lpCriticalSection = local_c8;
    if (local_98 != 0) {
      FUN_1400020a8();
      lpCriticalSection = local_c8;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5fe24 FUN_147d5fe24 body=100 status=ok
// SIG undefined FUN_147d5fe24(void)

longlong FUN_147d5fe24(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xb8);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x18))) {
      lVar2 = (longlong)iVar1 * 0xa8;
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar2) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x10) + lVar2;
      }
      goto LAB_147d5fe70;
    }
  }
  lVar3 = 0;
LAB_147d5fe70:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  return lVar3;
}



// FUNCTION 147d5fe88 FUN_147d5fe88 body=136 status=ok
// SIG undefined FUN_147d5fe88(void)

void FUN_147d5fe88(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((longlong)*(int *)(param_1 + 0x400) != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + lVar2);
      if ((plVar1 != (longlong *)0x0) && (*plVar1 == param_2)) {
        if ((char)plVar1[8] == '\x06') {
          FUN_1402d4fc6(plVar1 + 4);
          if (plVar1[3] != 0) {
            FUN_147d65bd4(plVar1[3],param_3);
          }
        }
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x400) * 8 != lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000147d5fee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  return;
}



// FUNCTION 147d5ff10 FUN_147d5ff10 body=88 status=ok
// SIG undefined FUN_147d5ff10(void)

bool FUN_147d5ff10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = FUN_147d5fe24();
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = *(char *)(lVar5 + 0x85);
    bVar2 = *(byte *)((longlong)param_2 + 0xc3);
    iVar4 = (**(code **)(*param_2 + 0x2e8))(param_2);
    uVar6 = (uint)bVar2 - iVar4;
    if ((cVar1 == '\x01') && ((int)(uint)*(byte *)((longlong)param_2 + 0xc2) <= (int)uVar6)) {
      uVar6 = (uint)*(byte *)((longlong)param_2 + 0xc2);
    }
    bVar3 = (int)uVar6 <= (int)(uint)*(byte *)((longlong)param_2 + 0xc5);
  }
  return bVar3;
}



// FUNCTION 147d5ff68 FUN_147d5ff68 body=281 status=ok
// SIG undefined FUN_147d5ff68(void)

void FUN_147d5ff68(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  uVar2 = FUN_140083894();
  cVar1 = FUN_147a355de(uVar2);
  if ((param_2 != 0) && (cVar1 != '\0')) {
    FUN_140187fa0(*(undefined8 *)(param_1 + 0x2a8),1,0);
    FUN_140187fa0(*(undefined8 *)(param_1 + 0x2b0),1,0);
    FUN_1447ab8d8(param_1,0);
    lVar3 = FUN_147d5fe24(param_1,param_2);
    if (lVar3 != 0) {
      cVar1 = *(char *)(lVar3 + 0x84);
      if (cVar1 == '\x03') {
        lVar4 = *(longlong *)(param_1 + 0x1f8);
        uVar5 = *(undefined4 *)(param_1 + 0x200);
      }
      else if (cVar1 == '\x02') {
        lVar4 = *(longlong *)(param_1 + 0x1e8);
        uVar5 = *(undefined4 *)(param_1 + 0x1f0);
      }
      else if (cVar1 == '\x01') {
        lVar4 = param_1 + 0xc4;
        uVar5 = 0x49;
      }
      else {
        lVar4 = 0;
        uVar5 = 0xffffffff;
      }
      FUN_1447acc2e(lVar3,lVar4,uVar5,param_1 + 0x208,0,0);
      if ((*(byte *)(lVar3 + 0x86) & 4) != 0) {
        *(undefined1 *)(lVar3 + 0x81) = *(undefined1 *)(lVar3 + 0x7d);
        *(undefined1 *)(lVar3 + 0x78) = *(undefined1 *)(lVar3 + 0x7d);
      }
      FUN_14068ddc2(lVar3,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147d6007a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  return;
}



// FUNCTION 147d60082 FUN_147d60082 body=290 status=ok
// SIG undefined FUN_147d60082(void)

undefined8 FUN_147d60082(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x6d8);
  if (lVar3 != 0) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 != *(DWORD *)(lVar3 + 0x20)) {
      FUN_140082318(*(undefined8 *)(param_1 + 0x6d8));
    }
  }
  if (*DAT_14cb0a4e0 != 0) {
    uVar6 = FUN_140083894();
    cVar4 = FUN_147a355de(uVar6);
    if (cVar4 != '\0') {
      uVar6 = 0;
      if ((param_2 == 0) || (*(char *)(param_1 + 0x440) != '\0')) goto LAB_147d600fc;
      if (((*(byte *)(param_2 + 0xbc) & 0x10) != 0) &&
         (((*(byte *)(param_2 + 0xbc) & 8) != 0 || (DAT_14c866ff8 <= *(double *)(param_2 + 0x40)))))
      {
        iVar2 = *(int *)(param_2 + 0xb8);
        if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x18))) {
          lVar7 = (longlong)iVar2 * 0xa8;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
          if (lVar3 == param_2) {
            plVar8 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
            uVar6 = 0;
            FUN_1400980f0(lVar3,1,0);
            cVar4 = *(char *)(*plVar8 + 0xc5);
            uVar1 = *(undefined1 *)(*plVar8 + 0xc6);
            *(char *)((longlong)plVar8 + 0x7a) = cVar4;
            *(undefined1 *)((longlong)plVar8 + 0x7b) = uVar1;
            if (cVar4 < *(char *)((longlong)plVar8 + 0x7d)) {
              FUN_147d63c8c(param_1 + 0x340,local_2c,plVar8);
              uVar6 = 1;
            }
            goto LAB_147d600fc;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_147d600fc:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d601a6 FUN_147d601a6 body=611 status=ok
// SIG undefined FUN_147d601a6(void)

void FUN_147d601a6(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0 [2];
  int local_a0;
  undefined4 uStack_9c;
  longlong local_98 [2];
  longlong *local_88;
  int *local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  iVar2 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar11 = 0;
    do {
      iVar7 = 0;
      puVar10 = &DAT_149dfb77a;
      lVar4 = *(longlong *)(lVar3 + lVar11);
      if ((((lVar4 != 0) && ((*(byte *)(lVar3 + 0x86 + lVar11) & 0x40) == 0)) &&
          (*(char *)(lVar3 + 0x84 + lVar11) == '\x01')) &&
         ((fVar1 = *(float *)(lVar3 + 0x54 + lVar11), fVar1 != 3.4028235e+38 || (NAN(fVar1))))) {
        iVar12 = (int)*(char *)(lVar3 + 0x7d + lVar11) - (int)*(char *)(lVar3 + 0x7a + lVar11);
        if (iVar12 < 1) {
          iVar12 = 0;
        }
        local_88 = *(longlong **)(lVar4 + 0x18);
        local_b8 = param_2;
        FUN_1400021e4(&local_88,&local_a0);
        if ((int)local_98[0] != 0) {
          puVar10 = (undefined2 *)CONCAT44(uStack_9c,local_a0);
          iVar7 = (int)local_98[0] + -1;
        }
        uVar6 = FUN_144a49b4a(iVar7,puVar10);
        plVar5 = local_b8;
        iVar7 = FUN_147d64166(local_b8,uVar6,&local_a0);
        lVar8 = 0;
        if (iVar7 != -1) {
          lVar8 = (longlong)iVar7 * 0x30 + *plVar5;
        }
        piVar13 = (int *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          piVar13 = (int *)0x0;
        }
        if (CONCAT44(uStack_9c,local_a0) != 0) {
          FUN_1400020a8();
        }
        if (piVar13 == (int *)0x0) {
          local_98[0] = 0;
          local_98[1] = 0;
          local_a0 = iVar12;
          uVar9 = FUN_147d6ded4(*(undefined4 *)(lVar3 + 0xc + lVar11));
          FUN_14020fad6(local_98,uVar9);
          local_88 = *(longlong **)(lVar4 + 0x18);
          FUN_1400021e4(&local_88,local_b0);
          param_2 = local_b8;
          local_80 = &local_a0;
          local_88 = local_b0;
          FUN_147d64236(local_b8,local_74,&local_88);
          if (local_b0[0] != 0) {
            FUN_1400020a8();
          }
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*piVar13 <= iVar12) {
            iVar12 = *piVar13;
          }
          *piVar13 = iVar12;
          param_2 = local_b8;
        }
      }
      lVar11 = lVar11 + 0xa8;
    } while ((longlong)iVar2 * 0xa8 - lVar11 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6040a FUN_147d6040a body=38 status=ok
// SIG undefined FUN_147d6040a(void)

undefined8 FUN_147d6040a(undefined8 param_1,int param_2)

{
  FUN_147d647ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60430 FUN_147d60430 body=38 status=ok
// SIG undefined FUN_147d60430(void)

undefined8 FUN_147d60430(undefined8 param_1,int param_2)

{
  FUN_147d60ba8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60456 FUN_147d60456 body=38 status=ok
// SIG undefined FUN_147d60456(void)

undefined8 FUN_147d60456(undefined8 param_1,int param_2)

{
  FUN_140f77756();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6047c FUN_147d6047c body=89 status=ok
// SIG undefined FUN_147d6047c(void)

undefined8 * FUN_147d6047c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xf0);
  _Src = *(void **)(param_1 + 0xe8);
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



// FUNCTION 147d604da FUN_147d604da body=45 status=ok
// SIG undefined FUN_147d604da(void)

longlong FUN_147d604da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60508 FUN_147d60508 body=38 status=ok
// SIG undefined FUN_147d60508(void)

undefined8 FUN_147d60508(undefined8 param_1,int param_2)

{
  FUN_145d14e04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60530 FUN_147d60530 body=38 status=ok
// SIG undefined FUN_147d60530(void)

undefined8 FUN_147d60530(undefined8 param_1,int param_2)

{
  FUN_140c06e0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60556 FUN_147d60556 body=38 status=ok
// SIG undefined FUN_147d60556(void)

undefined8 FUN_147d60556(undefined8 param_1,int param_2)

{
  FUN_140096f1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d6061c FUN_147d6061c body=38 status=ok
// SIG undefined FUN_147d6061c(void)

undefined8 FUN_147d6061c(undefined8 param_1,int param_2)

{
  FUN_145d14a64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60670 FUN_147d60670 body=54 status=ok
// SIG undefined FUN_147d60670(void)

void FUN_147d60670(longlong *param_1)

{
  FUN_147d59e58(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d6070a FUN_147d6070a body=59 status=ok
// SIG undefined FUN_147d6070a(void)

undefined8 FUN_147d6070a(longlong *param_1)

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



// FUNCTION 147d60756 FUN_147d60756 body=47 status=ok
// SIG undefined FUN_147d60756(void)

void FUN_147d60756(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    if (*(longlong *)(param_2 + 0x88) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 147d607d6 FUN_147d607d6 body=171 status=ok
// SIG undefined FUN_147d607d6(void)

longlong FUN_147d607d6(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InQuadAdjust",0);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"InUVAdjust",0);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"InViewProjection",0);
  FUN_1474409b8(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"InWorld",0);
  return param_1;
}



// FUNCTION 147d60882 FUN_147d60882 body=139 status=ok
// SIG undefined FUN_147d60882(void)

longlong FUN_147d60882(longlong param_1,longlong param_2,undefined8 param_3)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),param_3,1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"InIsOpaque",0);
  return param_1;
}



// FUNCTION 147d6090e FUN_147d6090e body=113 status=ok
// SIG undefined FUN_147d6090e(void)

void FUN_147d6090e(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147d60980 FUN_147d60980 body=62 status=ok
// SIG undefined FUN_147d60980(void)

void FUN_147d60980(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d609be(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147d609be FUN_147d609be body=93 status=ok
// SIG undefined FUN_147d609be(void)

ulonglong FUN_147d609be(uint param_1,uint param_2)

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



// FUNCTION 147d60a64 FUN_147d60a64 body=59 status=ok
// SIG undefined FUN_147d60a64(void)

undefined8 FUN_147d60a64(longlong *param_1)

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



// FUNCTION 147d60b0a FUN_147d60b0a body=60 status=ok
// SIG undefined FUN_147d60b0a(void)

undefined8 * FUN_147d60b0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac1e60;
  FUN_145764f58(param_1 + 9);
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d60b46 FUN_147d60b46 body=98 status=ok
// SIG undefined FUN_147d60b46(void)

void FUN_147d60b46(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d60ba8 FUN_147d60ba8 body=141 status=ok
// SIG undefined FUN_147d60ba8(void)

void FUN_147d60ba8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aabdbb0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xb] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a3d46d0;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d60c36 FUN_147d60c36 body=132 status=ok
// SIG undefined FUN_147d60c36(void)

void FUN_147d60c36(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d60cbc FUN_147d60cbc body=104 status=ok
// SIG undefined FUN_147d60cbc(void)

void FUN_147d60cbc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0xa0 + *param_1);
  FUN_144760d2a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xa0 + (longlong)_Dst),(longlong)iVar2 * 0xa0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147d60d24 FUN_147d60d24 body=62 status=ok
// SIG undefined FUN_147d60d24(void)

void FUN_147d60d24(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d60d62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,8);
  }
  return;
}



// FUNCTION 147d60d62 FUN_147d60d62 body=112 status=ok
// SIG undefined FUN_147d60d62(void)

ulonglong FUN_147d60d62(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d60d9c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,8);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_147d60d9c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d60dd2 FUN_147d60dd2 body=410 status=ok
// SIG undefined FUN_147d60dd2(void)

void FUN_147d60dd2(longlong *param_1,uint param_2)

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
      FUN_14494313c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140044672(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x30 + lVar2 + -0x2c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = iVar9 + -1;
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
        puVar5 = puVar5 + -0xc;
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



// FUNCTION 147d60f6c FUN_147d60f6c body=478 status=ok
// SIG undefined FUN_147d60f6c(void)

void FUN_147d60f6c(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x2c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
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



// FUNCTION 147d6114c FUN_147d6114c body=326 status=ok
// SIG undefined FUN_147d6114c(void)

undefined4 * FUN_147d6114c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147d61294(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147d61382(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x2c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
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
      FUN_147d60f6c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d61294 FUN_147d61294 body=238 status=ok
// SIG undefined FUN_147d61294(void)

int * FUN_147d61294(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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



// FUNCTION 147d61382 FUN_147d61382 body=188 status=ok
// SIG undefined FUN_147d61382(void)

undefined8 FUN_147d61382(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_147d6143e(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d6143e FUN_147d6143e body=122 status=ok
// SIG undefined FUN_147d6143e(void)

void FUN_147d6143e(longlong *param_1,int param_2)

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



// FUNCTION 147d614b8 FUN_147d614b8 body=68 status=ok
// SIG undefined FUN_147d614b8(void)

void FUN_147d614b8(longlong param_1,uint param_2)

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
  FUN_147d60f6c(param_1);
  return;
}



// FUNCTION 147d614fc FUN_147d614fc body=131 status=ok
// SIG undefined FUN_147d614fc(void)

void FUN_147d614fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14aac2090;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  return;
}



// FUNCTION 147d6158a FUN_147d6158a body=29 status=ok
// SIG undefined FUN_147d6158a(void)

undefined8 FUN_147d6158a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d615a8 FUN_147d615a8 body=83 status=ok
// SIG undefined FUN_147d615a8(void)

void FUN_147d615a8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1);
  return;
}



// FUNCTION 147d615fc FUN_147d615fc body=132 status=ok
// SIG undefined FUN_147d615fc(void)

void FUN_147d615fc(longlong param_1,int param_2)

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



// FUNCTION 147d61682 FUN_147d61682 body=290 status=ok
// SIG undefined FUN_147d61682(void)

void FUN_147d61682(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_147d617a4(param_2,lVar2);
    iVar9 = 0;
    iVar6 = 0;
    do {
      lVar5 = (longlong)iVar6;
      iVar12 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      lVar11 = lVar5 * 0x10;
      lVar13 = lVar2 + 0x10 + lVar11;
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar12;
        if (lVar10 <= lVar5) break;
        bVar4 = FUN_147d617a4(param_2,lVar13);
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x10;
        iVar8 = iVar7;
      } while ((bVar3 & 1) == bVar4);
      iVar12 = iVar8 - iVar6;
      if ((bVar3 & 1) == 0) {
        if (iVar9 != iVar6) {
          memmove((void *)((longlong)iVar9 * 0x10 + lVar2),(void *)(lVar11 + lVar2),
                  (longlong)iVar12 << 4);
        }
        iVar9 = iVar9 + iVar12;
      }
      else {
        FUN_14068ce29(lVar11 + lVar2,iVar12);
      }
      iVar6 = iVar8;
      bVar3 = bVar3 ^ 1;
    } while (lVar5 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 147d617a4 FUN_147d617a4 body=167 status=ok
// SIG undefined FUN_147d617a4(void)

bool FUN_147d617a4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  param_1 = (longlong *)*param_1;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_147d617ce:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_147d617ce;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_147d61815;
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
    lVar8 = *param_1;
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
LAB_147d61815:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return lVar6 == lVar8;
}



// FUNCTION 147d6184c FUN_147d6184c body=86 status=ok
// SIG undefined FUN_147d6184c(void)

void FUN_147d6184c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147d618a2 FUN_147d618a2 body=40 status=ok
// SIG undefined FUN_147d618a2(void)

void FUN_147d618a2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147d618ce FUN_147d618ce body=38 status=ok
// SIG undefined FUN_147d618ce(void)

undefined8 FUN_147d618ce(undefined8 param_1,int param_2)

{
  FUN_147d618fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d618fc FUN_147d618fc body=71 status=ok
// SIG undefined FUN_147d618fc(void)

void FUN_147d618fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aac20b0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_147d61944(param_1 + 3);
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 147d61944 FUN_147d61944 body=54 status=ok
// SIG undefined FUN_147d61944(void)

void FUN_147d61944(longlong *param_1)

{
  FUN_14068c90e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d6197a FUN_147d6197a body=132 status=ok
// SIG undefined FUN_147d6197a(void)

void FUN_147d6197a(longlong param_1,int param_2)

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



// FUNCTION 147d61a10 FUN_147d61a10 body=93 status=ok
// SIG undefined FUN_147d61a10(void)

void FUN_147d61a10(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aac2100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d61a6e FUN_147d61a6e body=93 status=ok
// SIG undefined FUN_147d61a6e(void)

void FUN_147d61a6e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aac2100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d61acc FUN_147d61acc body=126 status=ok
// SIG undefined FUN_147d61acc(void)

void FUN_147d61acc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aac2100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d61b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d61b56 FUN_147d61b56 body=633 status=ok
// SIG undefined FUN_147d61b56(void)

void FUN_147d61b56(longlong *param_1)

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
        lVar18 = (longlong)iVar17 * 0x50;
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
        *(int *)(lVar3 + 0x4c + lVar18) = iVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar18) =
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



// FUNCTION 147d61dd0 FUN_147d61dd0 body=95 status=ok
// SIG undefined FUN_147d61dd0(void)

void FUN_147d61dd0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x48 + lVar5 * 0x50);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x50 + 0x48);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_147d61e30();
  return;
}



// FUNCTION 147d61e30 FUN_147d61e30 body=76 status=ok
// SIG undefined FUN_147d61e30(void)

void FUN_147d61e30(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x30 + (longlong)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x50 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_147d61e7c(param_1,param_2);
  return;
}



// FUNCTION 147d61e7c FUN_147d61e7c body=122 status=ok
// SIG undefined FUN_147d61e7c(void)

void FUN_147d61e7c(longlong *param_1,int param_2)

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



// FUNCTION 147d61efa FUN_147d61efa body=81 status=ok
// SIG undefined FUN_147d61efa(void)

undefined8 FUN_147d61efa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
    uVar6 = *(undefined8 *)(param_1 + 0x30);
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



// FUNCTION 147d61f52 FUN_147d61f52 body=89 status=ok
// SIG undefined FUN_147d61f52(void)

bool FUN_147d61f52(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147d61f9d;
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
    lVar6 = *(longlong *)(param_1 + 0x30);
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
LAB_147d61f9d:
  return lVar6 == param_2;
}



// FUNCTION 147d61fb8 FUN_147d61fb8 body=111 status=ok
// SIG undefined FUN_147d61fb8(void)

void FUN_147d61fb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  FUN_147d621b2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aac2170;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 147d62028 FUN_147d62028 body=149 status=ok
// SIG undefined FUN_147d62028(void)

void FUN_147d62028(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _RTL_CRITICAL_SECTION *p_Var3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  FUN_147d621b2(p_Var1,param_1);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac2170;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var1[1].CriticalSection = p_Var3;
  if (p_Var3 != (_RTL_CRITICAL_SECTION *)0x0) {
    LOCK();
    p_Var3->RecursionCount = p_Var3->RecursionCount + 1;
    UNLOCK();
  }
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d620ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d620be FUN_147d620be body=224 status=ok
// SIG undefined FUN_147d620be(void)

void FUN_147d620be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  local_28 = param_3;
  local_1c = param_4;
  if (puVar3 == (undefined8 *)0x0) {
LAB_147d62161:
    local_30 = 0;
    local_40 = &local_1c;
    local_48 = &local_28;
    FUN_14057c418(param_1 + 8,param_1 + 0x40,&local_30,param_2);
  }
  else {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_147d62161;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar4 == iVar2;
      if (bVar5) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar5);
    local_30 = *(undefined8 *)(param_1 + 0x30);
    local_40 = &local_1c;
    local_48 = &local_28;
    FUN_14057c418(param_1 + 8,param_1 + 0x40,&local_30,param_2);
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d621b2 FUN_147d621b2 body=125 status=ok
// SIG undefined FUN_147d621b2(void)

undefined8 * FUN_147d621b2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_LAB_14aac21e0;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 147d62230 FUN_147d62230 body=90 status=ok
// SIG undefined FUN_147d62230(void)

void FUN_147d62230(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147d6228a FUN_147d6228a body=132 status=ok
// SIG undefined FUN_147d6228a(void)

void FUN_147d6228a(longlong param_1,int param_2)

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



// FUNCTION 147d62310 FUN_147d62310 body=126 status=ok
// SIG undefined FUN_147d62310(void)

void FUN_147d62310(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402a19f0(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147d6238e FUN_147d6238e body=474 status=ok
// SIG undefined FUN_147d6238e(void)

undefined4 * FUN_147d6238e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d6256a(param_1,local_48);
  FUN_147d626e0(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar11 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
  iVar13 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(local_40 + 3) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)local_40[2];
    iVar13 = *(int *)(local_40 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar13,puVar9);
  uVar7 = FUN_144a78877(uVar5,uVar6);
  cVar3 = FUN_147d62658(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar4) {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x4c) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_147d61b56(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d6256a FUN_147d6256a body=238 status=ok
// SIG undefined FUN_147d6256a(void)

int * FUN_147d6256a(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 147d62658 FUN_147d62658 body=135 status=ok
// SIG undefined FUN_147d62658(void)

undefined8 FUN_147d62658(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_143720502(), iVar1 != -1)) {
    _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x50);
    if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar1 * 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0x48);
    FUN_147d61e7c(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 147d626e0 FUN_147d626e0 body=117 status=ok
// SIG undefined FUN_147d626e0(void)

undefined4 * FUN_147d626e0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  FUN_147d62756(param_1 + 8,param_3);
  return param_1;
}



// FUNCTION 147d62756 FUN_147d62756 body=88 status=ok
// SIG undefined FUN_147d62756(void)

undefined4 * FUN_147d62756(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147d627ae FUN_147d627ae body=364 status=ok
// SIG undefined FUN_147d627ae(void)

void FUN_147d627ae(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar13 = (uint)uVar2 & 0xffff;
    uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar12 = (uint)uVar1 & 0xffff;
    uVar5 = ((uint)uVar1 << 0x10 | uVar12) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
    iVar11 = 0;
    uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                            ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4) + uVar5 * 0x40 +
                            0x9e3779b9 ^ uVar5);
    if (*(int *)(param_2 + 3) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)param_2[2];
      iVar11 = *(int *)(param_2 + 3) + -1;
    }
    uVar7 = FUN_144a49b4a(iVar11,puVar9);
    iVar11 = FUN_144a78877(uVar6,uVar7);
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    uVar16 = (longlong)iVar11 & (longlong)(int)param_1[9] - 1U;
    lVar8 = (longlong)*(int *)((longlong)plVar14 + uVar16 * 4);
    if (lVar8 != -1) {
      lVar8 = lVar8 * 0x30 + *param_1;
      cVar4 = FUN_144a7afa6(lVar8,param_2);
      if (cVar4 == '\0') {
        do {
          lVar10 = lVar8;
          lVar8 = (longlong)*(int *)(lVar10 + 0x28);
          if (lVar8 == -1) {
            return;
          }
          lVar8 = lVar8 * 0x30 + *param_1;
          cVar4 = FUN_144a7afa6(lVar8,param_2);
        } while (cVar4 == '\0');
        puVar15 = (undefined4 *)(lVar10 + 0x28);
      }
      else {
        puVar15 = (undefined4 *)((longlong)plVar14 + uVar16 * 4);
      }
      FUN_140509b6c(param_1,*puVar15);
      return;
    }
  }
  return;
}



// FUNCTION 147d6291a FUN_147d6291a body=463 status=ok
// SIG undefined FUN_147d6291a(void)

undefined4 * FUN_147d6291a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1417f2bea(param_1,local_48);
  FUN_147d62aea(param_3,local_40);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar11 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
  iVar13 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(local_40 + 3) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)local_40[2];
    iVar13 = *(int *)(local_40 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar13,puVar9);
  uVar7 = FUN_144a78877(uVar5,uVar6);
  cVar3 = FUN_1417f2dc8(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar4) {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x2c) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1417f273a(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d62aea FUN_147d62aea body=116 status=ok
// SIG undefined FUN_147d62aea(void)

undefined4 * FUN_147d62aea(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined4 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *param_2 = *puVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *(undefined8 *)(param_2 + 4) = 0;
  iVar1 = puVar2[6];
  _Src = *(void **)(puVar2 + 4);
  param_2[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[7] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 4,iVar1,0);
    memcpy(*(void **)(param_2 + 4),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_2 + 8) = *puVar3;
  return param_2;
}



// FUNCTION 147d62b5e FUN_147d62b5e body=147 status=ok
// SIG undefined FUN_147d62b5e(void)

void FUN_147d62b5e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d62bf2 FUN_147d62bf2 body=164 status=ok
// SIG undefined FUN_147d62bf2(void)

void FUN_147d62bf2(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xa0);
  if (*(longlong *)(lVar1 + 0x60 + (longlong)(int)param_2 * 0xa0) != 0) {
    plVar4 = (longlong *)((longlong)_Dst + 0x80);
    if (*(longlong **)((longlong)_Dst + 0x70) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)_Dst + 0x70);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
    plVar4 = (longlong *)((longlong)_Dst + 0x40);
    if (*(longlong **)((longlong)_Dst + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)_Dst + 0x30);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  iVar2 = (int)param_1[1];
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar3 = 1;
    if (iVar5 < 1) {
      iVar3 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xa0),(longlong)iVar3 * 0xa0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147d62c96 FUN_147d62c96 body=62 status=ok
// SIG undefined FUN_147d62c96(void)

void FUN_147d62c96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d62cd4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,0x10);
  }
  return;
}



// FUNCTION 147d62cd4 FUN_147d62cd4 body=112 status=ok
// SIG undefined FUN_147d62cd4(void)

ulonglong FUN_147d62cd4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d62d0e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,0x10);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_147d62d0e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d62d44 FUN_147d62d44 body=113 status=ok
// SIG undefined FUN_147d62d44(void)

void FUN_147d62d44(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,0x10);
  }
  return;
}



// FUNCTION 147d62db6 FUN_147d62db6 body=141 status=ok
// SIG undefined FUN_147d62db6(void)

void FUN_147d62db6(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0xa0);
  if (*(longlong *)(*param_1 + 0x60 + (longlong)(int)param_2 * 0xa0) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x80);
    if (*(longlong **)((longlong)_Dst + 0x70) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x70);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x40);
    if (*(longlong **)((longlong)_Dst + 0x30) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x30);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xa0),(longlong)(int)(~param_2 + iVar1) * 0xa0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 147d62e44 FUN_147d62e44 body=57 status=ok
// SIG undefined FUN_147d62e44(void)

undefined8 * FUN_147d62e44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac2270;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d62ee6 FUN_147d62ee6 body=75 status=ok
// SIG undefined FUN_147d62ee6(void)

void FUN_147d62ee6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 1) {
    *(short *)(param_1 + 0x1c) = (short)param_2 - (short)*(undefined4 *)(param_1 + 0x18);
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 8),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 147d62f32 FUN_147d62f32 body=198 status=ok
// SIG undefined FUN_147d62f32(void)

undefined8 FUN_147d62f32(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  
  puVar1 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x1c),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      plVar3 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4)
      ;
    }
    else {
      plVar3 = (longlong *)thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    plVar3 = (longlong *)param_2[1];
    *plVar3 = *plVar3 + 4;
  }
  uVar4 = (undefined7)((ulonglong)plVar3 >> 8);
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_147d63096(param_1,param_2);
      uVar4 = extraout_var_00;
    }
  }
  else {
    FUN_147d62ff8(param_1,param_2);
    uVar4 = extraout_var;
  }
  return CONCAT71(uVar4,1);
}



// FUNCTION 147d62ff8 FUN_147d62ff8 body=156 status=ok
// SIG undefined FUN_147d62ff8(void)

void FUN_147d62ff8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_140d04a4c(local_28,*(int *)(param_1 + 0x10),1);
    if (1 < *(int *)(param_1 + 0x10)) {
      lVar1 = 1;
      do {
        *(short *)(local_28[0] + lVar1 * 2) =
             (short)*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar1 * 4) -
             (short)*(undefined4 *)(*(longlong *)(param_1 + 8) + -4 + lVar1 * 4);
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x10));
    }
  }
  FUN_14041268c(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d63096 FUN_147d63096 body=148 status=ok
// SIG undefined FUN_147d63096(void)

void FUN_147d63096(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14041268c(param_2,&local_28);
  FUN_14478085e((longlong *)(param_1 + 8),uStack_20 & 0xffffffff,1);
  if (0 < (int)uStack_20) {
    lVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (uint)*(ushort *)(local_28 + lVar1 * 2);
      *(int *)(*(longlong *)(param_1 + 8) + lVar1 * 4) = iVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)uStack_20);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6312c FUN_147d6312c body=71 status=ok
// SIG undefined FUN_147d6312c(void)

undefined8 * FUN_147d6312c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac22a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d631e6 FUN_147d631e6 body=81 status=ok
// SIG undefined FUN_147d631e6(void)

undefined4 FUN_147d631e6(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = 0xffffffff;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar5;
      if (*(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4) < param_2) {
        uVar5 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if ((int)uVar5 < (int)uVar2) {
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar5 * 4);
    }
  }
  return uVar4;
}



// FUNCTION 147d63238 FUN_147d63238 body=101 status=ok
// SIG undefined FUN_147d63238(void)

void FUN_147d63238(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447808da(param_1 + 8,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 4) = param_3;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x18),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 147d6329e FUN_147d6329e body=36 status=ok
// SIG undefined FUN_147d6329e(void)

undefined1 FUN_147d6329e(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      FUN_147d6342c();
    }
  }
  else {
    FUN_147d632c2();
  }
  return 1;
}



// FUNCTION 147d632c2 FUN_147d632c2 body=361 status=ok
// SIG undefined FUN_147d632c2(void)

void FUN_147d632c2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_140d04a4c(local_28,*(int *)(param_1 + 0x10),1);
    if (1 < *(int *)(param_1 + 0x10)) {
      lVar3 = 1;
      do {
        *(short *)(local_28[0] + lVar3 * 2) =
             (short)*(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3 * 4) -
             (short)*(undefined4 *)(*(longlong *)(param_1 + 8) + -4 + lVar3 * 4);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x10));
    }
  }
  FUN_14041268c(param_2,local_28);
  if (*(int *)(param_1 + 0x20) < 1) {
    local_2c = 0;
  }
  else {
    local_2c = **(undefined4 **)(param_1 + 0x18);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_140d04a4c(local_48,*(int *)(param_1 + 0x20),1);
    if (1 < *(int *)(param_1 + 0x20)) {
      lVar3 = 1;
      do {
        *(short *)(local_48[0] + lVar3 * 2) =
             (short)*(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 4) -
             (short)*(undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + lVar3 * 4);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x20));
    }
  }
  FUN_14041268c(param_2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6342c FUN_147d6342c body=344 status=ok
// SIG undefined FUN_147d6342c(void)

void FUN_147d6342c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  int local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14041268c(param_2,&local_38);
  FUN_14478085e((longlong *)(param_1 + 8),uStack_30 & 0xffffffff,1);
  if (0 < (int)uStack_30) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + (uint)*(ushort *)(local_38 + lVar3 * 2);
      *(int *)(*(longlong *)(param_1 + 8) + lVar3 * 4) = iVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uStack_30);
  }
  local_3c = 0;
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_14041268c(param_2,&local_58);
  iVar4 = local_3c;
  FUN_14478085e((longlong *)(param_1 + 0x18),uStack_50 & 0xffffffff,1);
  if (0 < (int)uStack_50) {
    lVar3 = 0;
    do {
      iVar4 = iVar4 + (uint)*(ushort *)(local_58 + lVar3 * 2);
      *(int *)(*(longlong *)(param_1 + 0x18) + lVar3 * 4) = iVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uStack_50);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d63586 FUN_147d63586 body=48 status=ok
// SIG undefined FUN_147d63586(void)

void FUN_147d63586(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147d635b6 FUN_147d635b6 body=110 status=ok
// SIG undefined FUN_147d635b6(void)

void FUN_147d635b6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1456d7d04(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d63626 FUN_147d63626 body=73 status=ok
// SIG undefined FUN_147d63626(void)

undefined8 * FUN_147d63626(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aac22d0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d63690 FUN_147d63690 body=144 status=ok
// SIG undefined FUN_147d63690(void)

void FUN_147d63690(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aac2340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aac22d0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000147d63715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 147d63720 FUN_147d63720 body=171 status=ok
// SIG undefined FUN_147d63720(void)

void FUN_147d63720(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aac2340;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aac22d0;
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
                    /* WARNING: Could not recover jumptable at 0x000147d637bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d637cc FUN_147d637cc body=51 status=ok
// SIG undefined FUN_147d637cc(void)

undefined8 FUN_147d637cc(longlong param_1,undefined8 param_2)

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
  (*pcVar1)(uVar2,param_2);
  return 1;
}



// FUNCTION 147d6381e FUN_147d6381e body=62 status=ok
// SIG undefined FUN_147d6381e(void)

void FUN_147d6381e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d6385c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d6385c FUN_147d6385c body=93 status=ok
// SIG undefined FUN_147d6385c(void)

ulonglong FUN_147d6385c(uint param_1,uint param_2)

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



// FUNCTION 147d638ba FUN_147d638ba body=52 status=ok
// SIG undefined FUN_147d638ba(void)

void FUN_147d638ba(longlong *param_1)

{
  FUN_140126962(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d638e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147d638ee FUN_147d638ee body=52 status=ok
// SIG undefined FUN_147d638ee(void)

void FUN_147d638ee(longlong *param_1)

{
  FUN_146086200(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d63918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147d63928 FUN_147d63928 body=31 status=ok
// SIG undefined FUN_147d63928(void)

undefined8 FUN_147d63928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d63958 FUN_147d63958 body=93 status=ok
// SIG undefined FUN_147d63958(void)

void FUN_147d63958(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aac29c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d639b6 FUN_147d639b6 body=93 status=ok
// SIG undefined FUN_147d639b6(void)

void FUN_147d639b6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aac29c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147d63a14 FUN_147d63a14 body=126 status=ok
// SIG undefined FUN_147d63a14(void)

void FUN_147d63a14(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aac29c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d63a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d63a9e FUN_147d63a9e body=90 status=ok
// SIG undefined FUN_147d63a9e(void)

void FUN_147d63a9e(longlong *param_1,int param_2)

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
  FUN_147d63af8();
  return;
}



// FUNCTION 147d63af8 FUN_147d63af8 body=114 status=ok
// SIG undefined FUN_147d63af8(void)

void FUN_147d63af8(longlong *param_1,int param_2)

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



// FUNCTION 147d63b6a FUN_147d63b6a body=146 status=ok
// SIG undefined FUN_147d63b6a(void)

void FUN_147d63b6a(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d63bfe FUN_147d63bfe body=141 status=ok
// SIG undefined FUN_147d63bfe(void)

void FUN_147d63bfe(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 147d63c8c FUN_147d63c8c body=312 status=ok
// SIG undefined FUN_147d63c8c(void)

undefined4 * FUN_147d63c8c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147d63dc6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147d63eac(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_147d63f28(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d63dc6 FUN_147d63dc6 body=229 status=ok
// SIG undefined FUN_147d63dc6(void)

int * FUN_147d63dc6(longlong *param_1,int *param_2)

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



// FUNCTION 147d63eac FUN_147d63eac body=124 status=ok
// SIG undefined FUN_147d63eac(void)

undefined8 FUN_147d63eac(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147d63af8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d63f28 FUN_147d63f28 body=477 status=ok
// SIG undefined FUN_147d63f28(void)

void FUN_147d63f28(longlong *param_1)

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



// FUNCTION 147d64106 FUN_147d64106 body=48 status=ok
// SIG undefined FUN_147d64106(void)

void FUN_147d64106(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147d64136 FUN_147d64136 body=48 status=ok
// SIG undefined FUN_147d64136(void)

void FUN_147d64136(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147d64166 FUN_147d64166 body=207 status=ok
// SIG undefined FUN_147d64166(void)

int FUN_147d64166(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_147d641b0:
      lVar10 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_147d6422a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147d6422a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147d6421b;
    }
  }
  return -1;
LAB_147d6422a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147d6421b:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147d641b0;
}



// FUNCTION 147d64236 FUN_147d64236 body=319 status=ok
// SIG undefined FUN_147d64236(void)

undefined4 * FUN_147d64236(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d64376(param_1,local_48);
  FUN_147d644f2(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_147d64464(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x2c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147d645e8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d64376 FUN_147d64376 body=238 status=ok
// SIG undefined FUN_147d64376(void)

int * FUN_147d64376(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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



// FUNCTION 147d64464 FUN_147d64464 body=141 status=ok
// SIG undefined FUN_147d64464(void)

undefined8 FUN_147d64464(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_147d64166(), iVar10 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar10 * 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    plVar1[4] = *(longlong *)(param_3 + 8);
    *(undefined4 *)(plVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
    *(undefined4 *)(plVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_147d6456e(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 147d644f2 FUN_147d644f2 body=124 status=ok
// SIG undefined FUN_147d644f2(void)

undefined8 * FUN_147d644f2(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *param_3;
  param_1[3] = 0;
  iVar1 = param_3[4];
  _Src = *(void **)(param_3 + 2);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147d6456e FUN_147d6456e body=122 status=ok
// SIG undefined FUN_147d6456e(void)

void FUN_147d6456e(longlong *param_1,int param_2)

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



// FUNCTION 147d645e8 FUN_147d645e8 body=480 status=ok
// SIG undefined FUN_147d645e8(void)

void FUN_147d645e8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x30;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d647ca FUN_147d647ca body=122 status=ok
// SIG undefined FUN_147d647ca(void)

void FUN_147d647ca(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aac0630;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
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
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x000147d64803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 147d64844 FUN_147d64844 body=163 status=ok
// SIG undefined FUN_147d64844(void)

longlong FUN_147d64844(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  if (*param_1 != 0) {
    iVar2 = ~(int)*(char *)((longlong)param_1 + 0x7c) + (int)*(char *)((longlong)param_1 + 0x7d);
    if (param_2 <= iVar2) {
      iVar2 = param_2;
    }
    if (iVar2 < 1) {
      cVar4 = *(char *)((longlong)param_1 + 0x81);
      if (*(char *)((longlong)param_1 + 0x7c) < cVar4) {
        *(char *)((longlong)param_1 + 0x81) = cVar4 + -1;
        return (longlong)*(int *)((longlong)param_1 + (longlong)cVar4 * 4 + 0x10) -
               (longlong)*(int *)((longlong)param_1 + (longlong)cVar4 * 4 + 0xc);
      }
    }
    else {
      cVar4 = *(char *)((longlong)param_1 + 0x7d) - (char)iVar2;
      *(char *)((longlong)param_1 + 0x7d) = cVar4;
      *(int *)(param_1 + 0xe) = (int)param_1[0xe] + iVar2;
      if (cVar4 < *(char *)((longlong)param_1 + 0x81)) {
        iVar2 = *(int *)((longlong)param_1 +
                        (longlong)*(char *)((longlong)param_1 + 0x81) * 4 + 0x10);
        iVar1 = *(int *)((longlong)param_1 + (longlong)cVar4 * 4 + 0x10);
        *(char *)((longlong)param_1 + 0x81) = cVar4;
        cVar3 = *(char *)((longlong)param_1 + 0x7f);
        if (cVar4 <= *(char *)((longlong)param_1 + 0x7f)) {
          cVar3 = cVar4;
        }
        *(char *)((longlong)param_1 + 0x7f) = cVar3;
        cVar3 = (char)(int)param_1[0x10];
        if (cVar3 < cVar4) {
          cVar4 = cVar3;
        }
        *(char *)(param_1 + 0x10) = cVar4;
        return (longlong)iVar2 - (longlong)iVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 147d648e8 FUN_147d648e8 body=57 status=ok
// SIG undefined FUN_147d648e8(void)

longlong FUN_147d648e8(longlong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    iVar1 = (int)*(char *)((longlong)param_1 + 0x7d);
    uVar2 = ~(int)*(char *)((longlong)param_1 + 0x7c) + iVar1;
    if ((int)param_2 <= (int)uVar2) {
      uVar2 = param_2;
    }
    return (longlong)*(int *)((longlong)param_1 + (longlong)iVar1 * 4 + 0x10) -
           (longlong)*(int *)((longlong)param_1 + (longlong)(int)(~uVar2 + iVar1) * 4 + 0x14);
  }
  return 0;
}



// FUNCTION 147d64922 FUN_147d64922 body=105 status=ok
// SIG undefined FUN_147d64922(void)

void FUN_147d64922(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_140eeef5c(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_14372c9d0(param_1 + 0xb0);
    return;
  }
  return;
}



// FUNCTION 147d6498c FUN_147d6498c body=117 status=ok
// SIG undefined FUN_147d6498c(void)

void FUN_147d6498c(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_LAB_14aac3580;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14aac2d90;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf00000000;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 147d64a02 FUN_147d64a02 body=81 status=ok
// SIG undefined FUN_147d64a02(void)

void FUN_147d64a02(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aac2d90;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d64a54 FUN_147d64a54 body=365 status=ok
// SIG undefined FUN_147d64a54(void)

undefined8 FUN_147d64a54(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_14112cad2(param_3,*(undefined4 *)(param_1 + 0x10));
    uVar4 = *(uint *)(param_1 + 0x14);
    if ((int)uVar4 < *(int *)(param_1 + 0x10)) {
      lVar6 = (longlong)(int)uVar4;
      lVar7 = lVar6 * 0x30;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar6 * 8);
        lVar5 = *(longlong *)(param_3 + 0x2d0);
        if (*(longlong *)(param_3 + 0x2d0) == 0) {
          lVar5 = param_3;
        }
        *(undefined1 *)(lVar5 + 0x10 + lVar7) = *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x84);
        *(uint *)(lVar5 + 0x14 + lVar7) = (uint)*(ushort *)(lVar3 + 0x48);
        *(uint *)(lVar5 + 0x18 + lVar7) = (uint)*(ushort *)(lVar3 + 0x4a);
        uVar2 = FUN_1432248df();
        *(undefined8 *)(lVar5 + 8 + lVar7) = uVar2;
        uVar2 = FUN_14001cc68(uVar2,0);
        *(undefined8 *)(lVar5 + lVar7) = uVar2;
        iVar1 = *(int *)(param_1 + 0xb8);
        *(uint *)(param_1 + 0xb8) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0xbc) < iVar1 + 1U) {
          FUN_147ce758c(param_1 + 0x38,iVar1);
        }
        lVar3 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar3 = param_1 + 0x38;
        }
        *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar5 + lVar7);
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x30;
      } while (lVar6 < *(int *)(param_1 + 0x10));
      uVar4 = *(uint *)(param_1 + 0x14);
    }
    uVar2 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_3 + 0x2d8))) {
      lVar7 = *(longlong *)(param_3 + 0x2d0);
      if (*(longlong *)(param_3 + 0x2d0) == 0) {
        lVar7 = param_3;
      }
      lVar6 = (ulonglong)uVar4 * 0x30;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar7 + 0x14 + lVar6);
      lVar7 = *(longlong *)(param_3 + 0x2d0);
      if (*(longlong *)(param_3 + 0x2d0) == 0) {
        lVar7 = param_3;
      }
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar7 + 0x18 + lVar6);
      lVar7 = *(longlong *)(param_3 + 0x2d0);
      if (*(longlong *)(param_3 + 0x2d0) == 0) {
        lVar7 = param_3;
      }
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(lVar7 + 0x10 + lVar6);
      *(undefined8 *)(param_1 + 0x18) = 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 147d64bc2 FUN_147d64bc2 body=124 status=ok
// SIG undefined FUN_147d64bc2(void)

void FUN_147d64bc2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar2 = param_1 + 0x38;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) == 0) {
    return;
  }
  FUN_147d6b292(param_1 + 0x38);
  return;
}



// FUNCTION 147d64c3e FUN_147d64c3e body=63 status=ok
// SIG undefined FUN_147d64c3e(void)

void FUN_147d64c3e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147d64bc2(param_1);
  return;
}



// FUNCTION 147d64c9c FUN_147d64c9c body=114 status=ok
// SIG undefined FUN_147d64c9c(void)

void FUN_147d64c9c(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_LAB_14aac3580;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  param_1[3] = 0x100000000;
  *param_1 = &PTR_FUN_14aac2dc0;
  param_1[4] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf00000000;
  return;
}



// FUNCTION 147d64d0e FUN_147d64d0e body=78 status=ok
// SIG undefined FUN_147d64d0e(void)

void FUN_147d64d0e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aac2dc0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d64d5c FUN_147d64d5c body=112 status=ok
// SIG undefined FUN_147d64d5c(void)

bool FUN_147d64d5c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_147d64dcc();
    FUN_1404553ca(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 0x20));
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(undefined1 **)(param_1 + 0x18) = &DAT_200000002;
  }
  return lVar3 != 0;
}



// FUNCTION 147d64dcc FUN_147d64dcc body=257 status=ok
// SIG undefined FUN_147d64dcc(void)

void FUN_147d64dcc(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar3 + 0xc60) != 0x40000002) {
      FUN_144a61b4f();
    }
    lVar8 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar8 = param_1 + 0x28;
    }
    iVar1 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar1 != 0) {
      lVar7 = 0;
      do {
        lVar4 = DAT_14cb0b628;
        uVar2 = *(undefined4 *)(lVar8 + lVar7);
        if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
          uVar6 = 0;
        }
        else {
          bVar5 = FUN_144a61b4f();
          uVar6 = (ulonglong)(bVar5 ^ 1);
        }
        (**(code **)(*DAT_14ca83900 + 0x438))
                  (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x20),uVar2,0,
                   0 < *(int *)(lVar4 + uVar6 * 4));
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar1 * 4 != lVar7);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_147d6b3da(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 147d64ece FUN_147d64ece body=67 status=ok
// SIG undefined FUN_147d64ece(void)

void FUN_147d64ece(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_147d64dcc();
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147d64f1e FUN_147d64f1e body=74 status=ok
// SIG undefined FUN_147d64f1e(void)

void FUN_147d64f1e(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = &PTR_LAB_14aac35b0;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  return;
}



// FUNCTION 147d64f68 FUN_147d64f68 body=91 status=ok
// SIG undefined FUN_147d64f68(void)

void FUN_147d64f68(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x110);
  }
  iVar1 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + 8 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
        *(undefined1 *)(param_1 + 0x12a) = 1;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147d64fda FUN_147d64fda body=311 status=ok
// SIG undefined FUN_147d64fda(void)

void FUN_147d64fda(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((*(longlong **)(param_1 + 0x100) != (longlong *)0x0) && (*(longlong *)(param_2 + 8) != 0)) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x100) + 8))();
    iVar3 = *(int *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x14);
    iVar7 = 0;
    if ((*(byte *)(lVar4 + 2) & 0x80) == 0) {
      iVar7 = iVar9;
    }
    if (iVar9 < iVar3) {
      lVar11 = (longlong)iVar9;
      lVar4 = param_1 + 0x108;
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar10 = lVar11 << 4;
      iVar9 = iVar9 - iVar7;
      do {
        lVar6 = DAT_14cb0b628;
        lVar8 = *(longlong *)(param_1 + 0x1f8);
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          lVar8 = lVar4;
        }
        if (*(longlong *)(lVar8 + lVar10) != 0) {
          if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
            uVar5 = 0;
          }
          else {
            bVar2 = FUN_144a61b4f();
            uVar5 = (ulonglong)(bVar2 ^ 1);
          }
          (**(code **)(*DAT_14ca83900 + 0x438))
                    (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x100),iVar9,0,
                     0 < *(int *)(lVar6 + uVar5 * 4));
          lVar6 = *(longlong *)(param_1 + 0x1f8);
          if (*(longlong *)(param_1 + 0x1f8) == 0) {
            lVar6 = lVar4;
          }
          *(undefined8 *)(lVar6 + lVar10) = 0;
          lVar6 = *(longlong *)(param_1 + 0x1f8);
          if (*(longlong *)(param_1 + 0x1f8) == 0) {
            lVar6 = lVar4;
          }
          *(undefined4 *)(lVar6 + 8 + lVar10) = 0xffffffff;
          iVar3 = *(int *)(param_1 + 0x10);
        }
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
        iVar9 = iVar9 + 1;
      } while (lVar11 < iVar3);
    }
  }
  return;
}



// FUNCTION 147d6512e FUN_147d6512e body=290 status=ok
// SIG undefined FUN_147d6512e(void)

undefined8 * FUN_147d6512e(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [40];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1403224f8();
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x289) = param_3;
  *param_1 = &PTR_FUN_14aac2eb0;
  FUN_140310484(local_d0,param_2,0);
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aace620;
  local_a8[0] = FUN_14372cc5c;
  *(undefined4 *)(param_1 + 0xd) = 2;
  local_80 = param_1;
  FUN_1403223d2(param_1 + 0xe,local_a8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar1 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar1 = &local_88;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_68[0] != 0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d65252 FUN_147d65252 body=290 status=ok
// SIG undefined FUN_147d65252(void)

undefined8 * FUN_147d65252(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [40];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1403224f8();
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x289) = param_3;
  *param_1 = &PTR_FUN_14aac2ef0;
  FUN_140310484(local_d0,param_2,0);
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aace780;
  local_a8[0] = FUN_14372d3b2;
  *(undefined4 *)(param_1 + 0xd) = 1;
  local_80 = param_1;
  FUN_1403223d2(param_1 + 0xe,local_a8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar1 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar1 = &local_88;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_68[0] != 0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d65376 FUN_147d65376 body=294 status=ok
// SIG undefined FUN_147d65376(void)

undefined8 * FUN_147d65376(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1403224f8();
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)((longlong)param_1 + 0x289) = param_3;
  *param_1 = &PTR_FUN_14aac2f30;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aace860;
  local_b8[0] = FUN_14372d9d6;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 1;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6549e FUN_147d6549e body=294 status=ok
// SIG undefined FUN_147d6549e(void)

undefined8 * FUN_147d6549e(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1403224f8();
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x281) = param_3;
  param_1[0x51] = 0;
  *param_1 = &PTR_FUN_14aac2ff0;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacea50;
  local_b8[0] = FUN_14372e690;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 1;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d655c6 FUN_147d655c6 body=294 status=ok
// SIG undefined FUN_147d655c6(void)

undefined8 * FUN_147d655c6(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1403224f8();
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x281) = param_3;
  param_1[0x51] = 0;
  *param_1 = &PTR_FUN_14aac3030;
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aaceb50;
  local_b8[0] = FUN_14372ee70;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 1;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d656ee FUN_147d656ee body=283 status=ok
// SIG undefined FUN_147d656ee(void)

undefined8 * FUN_147d656ee(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140322574();
  *param_1 = &PTR_FUN_14aac30b0;
  if (*(byte *)((longlong)param_1 + 0xd) <= *(byte *)((longlong)param_1 + 0xe)) {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  }
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aacecd0;
  local_b8[0] = FUN_14372fb3e;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 1;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6580a FUN_147d6580a body=283 status=ok
// SIG undefined FUN_147d6580a(void)

undefined8 * FUN_147d6580a(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140322574();
  *param_1 = &PTR_FUN_14aac30f0;
  if (*(byte *)((longlong)param_1 + 0xd) <= *(byte *)((longlong)param_1 + 0xe)) {
    *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  }
  local_78[0] = 0;
  local_68 = (longlong *)0x0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_14aaced30;
  local_b8[0] = FUN_14372fd5e;
  local_90 = param_1;
  FUN_140310484(local_e0,param_2,0);
  *(undefined4 *)(param_1 + 0xd) = 1;
  FUN_1403223d2(param_1 + 0xe,local_b8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1403223d2(param_1 + 0x18,local_78);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d6593c FUN_147d6593c body=122 status=ok
// SIG undefined FUN_147d6593c(void)

void FUN_147d6593c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aac3130;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
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
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x000147d65975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 147d659ba FUN_147d659ba body=536 status=ok
// SIG undefined FUN_147d659ba(void)

int FUN_147d659ba(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_1 + 0x98;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  iVar1 = 0;
  local_90 = (longlong *)(param_1 + 0x88);
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*local_90 + 0x14 + (longlong)iStack_74 * 0x20) * 0xc;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
  }
  local_94 = *(int *)(param_1 + 0x1c) * 0x150;
  iVar2 = *(uint *)(param_1 + 0x80) * 4;
  if (*(uint *)(param_1 + 0x80) < 2) {
    iVar2 = 0;
  }
  iVar3 = *(uint *)(param_1 + 0xd0) * 4;
  if (*(uint *)(param_1 + 0xd0) < 2) {
    iVar3 = 0;
  }
  iVar5 = *(uint *)(param_1 + 0x120) * 4;
  if (*(uint *)(param_1 + 0x120) < 2) {
    iVar5 = 0;
  }
  iVar4 = *(uint *)(param_1 + 0x1d0) * 4;
  if (*(uint *)(param_1 + 0x1d0) < 2) {
    iVar4 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return *(int *)(param_1 + 0x94) * 0x20 + iVar2 +
           *(int *)(param_1 + 0x28) * 0x3fe8 + local_94 + iVar1 +
           (*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x144)) * 8 +
           (*(int *)(param_1 + 0x164) + *(int *)(param_1 + 0x154)) * 4 +
           (*(int *)(param_1 + 100) + 0x1fU >> 5) * 4 + (*(int *)(param_1 + 0xb4) + 0x1fU >> 5) * 4
           + iVar3 + (*(int *)(param_1 + 0x104) + 0x1fU >> 5) * 4 + iVar5 +
           (*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x194)) * 0x18
           + (*(int *)(param_1 + 0x1b4) + 0x1fU >> 5) * 4 + iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d65bd4 FUN_147d65bd4 body=126 status=ok
// SIG undefined FUN_147d65bd4(void)

void FUN_147d65bd4(longlong param_1,double *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)(param_1 + 0x140);
  if (0 < iVar2) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x138) + uVar1 * 8) != 0) {
        lVar3 = (uVar1 >> 2 & 0x3fffffff) * 0x150 + *(longlong *)(param_1 + 0x10);
        uVar4 = (ulonglong)((uint)uVar1 & 3);
        *(double *)(lVar3 + uVar4 * 8) = *param_2 + *(double *)(lVar3 + uVar4 * 8);
        *(double *)(lVar3 + 0x20 + uVar4 * 8) = param_2[1] + *(double *)(lVar3 + 0x20 + uVar4 * 8);
        *(double *)(lVar3 + 0x40 + uVar4 * 8) = param_2[2] + *(double *)(lVar3 + 0x40 + uVar4 * 8);
        iVar2 = *(int *)(param_1 + 0x140);
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)iVar2);
  }
  return;
}



// FUNCTION 147d65c52 FUN_147d65c52 body=597 status=ok
// SIG undefined FUN_147d65c52(void)

void FUN_147d65c52(double *param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (param_2 == 0xffff0000) {
    param_3[6] = param_1[6];
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar11 = param_1[2];
    dVar3 = param_1[3];
    dVar4 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = dVar4;
    param_3[2] = dVar11;
    param_3[3] = dVar3;
    *param_3 = dVar1;
    param_3[1] = dVar2;
  }
  else if (param_1[6] <= 0.0) {
    param_3[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = dVar1;
    dVar1 = DAT_14c8464e8;
    param_3[3] = DAT_14c8464e0;
    param_3[4] = dVar1;
    param_3[5] = DAT_14c8464f0;
    param_3[6] = 0.0;
  }
  else {
    dVar1 = param_1[5];
    dVar2 = param_1[4];
    dVar11 = param_1[3];
    uVar7 = 0xe0000000;
    uVar8 = 0x3f1a36e2;
    uVar12 = SUB84(dVar1,0);
    uVar13 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar1 <= 9.999999747378752e-05) {
      uVar12 = uVar7;
      uVar13 = uVar8;
    }
    uVar14 = SUB84(dVar2,0);
    uVar15 = (int)((ulonglong)dVar2 >> 0x20);
    if (dVar2 <= 9.999999747378752e-05) {
      uVar14 = uVar7;
      uVar15 = uVar8;
    }
    uVar16 = SUB84(dVar11,0);
    uVar17 = (int)((ulonglong)dVar11 >> 0x20);
    if (dVar11 <= 9.999999747378752e-05) {
      uVar16 = uVar7;
      uVar17 = uVar8;
    }
    dVar10 = (double)CONCAT44(uVar13,uVar12) / 31.5;
    dVar5 = (double)CONCAT44(uVar15,uVar14) / 15.5;
    dVar6 = (double)CONCAT44(uVar17,uVar16) / 15.5;
    dVar4 = (double)(param_2 >> 10 & 0x3f) * dVar10 + (param_1[2] - dVar1);
    dVar3 = (double)(param_2 >> 5 & 0x1f) * dVar5 + (param_1[1] - dVar2);
    dVar9 = (double)(param_2 & 0x1f) * dVar6 + (*param_1 - dVar11);
    dVar1 = (double)(param_2 >> 0x1a) * dVar10 + (param_1[2] - dVar1);
    dVar10 = (double)(param_2 >> 0x15 & 0x1f) * dVar5 + (param_1[1] - dVar2);
    dVar2 = (double)(param_2 >> 0x10 & 0x1f) * dVar6 + (*param_1 - dVar11);
    *param_3 = (dVar9 + dVar2) * 0.5;
    param_3[1] = (dVar3 + dVar10) * 0.5;
    param_3[2] = (dVar4 + dVar1) * 0.5;
    dVar1 = (dVar1 - dVar4) * 0.5;
    dVar11 = (dVar10 - dVar3) * 0.5;
    dVar2 = (dVar2 - dVar9) * 0.5;
    param_3[3] = dVar2;
    param_3[4] = dVar11;
    param_3[5] = dVar1;
    param_3[6] = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar11 * dVar11);
  }
  return;
}



// FUNCTION 147d65ea8 FUN_147d65ea8 body=272 status=ok
// SIG undefined FUN_147d65ea8(void)

void FUN_147d65ea8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  lVar3 = *param_1;
  iVar1 = *(int *)(*(longlong *)
                    (*(longlong *)(lVar3 + 0x20) + (longlong)((int)param_1[1] / 0x199) * 8) + 0x10 +
                  (longlong)((int)param_1[1] % 0x199) * 0x28);
  iVar4 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((-4 < iVar1) && (iVar4 >> 2 < *(int *)(lVar3 + 0x18))) {
    lVar5 = (longlong)(iVar4 >> 2) * 0x150 + *(longlong *)(lVar3 + 0x10);
    lVar3 = (longlong)(iVar1 % 4);
    *param_2 = *(undefined8 *)(lVar5 + lVar3 * 8);
    param_2[1] = *(undefined8 *)(lVar5 + 0x20 + lVar3 * 8);
    param_2[2] = *(undefined8 *)(lVar5 + 0x40 + lVar3 * 8);
    dVar2 = (double)*(float *)(lVar5 + 0xc0 + lVar3 * 4);
    param_2[3] = dVar2;
    dVar6 = (double)*(float *)(lVar5 + 0xd0 + lVar3 * 4);
    param_2[4] = dVar6;
    dVar7 = (double)*(float *)(lVar5 + 0xe0 + lVar3 * 4);
    param_2[5] = dVar7;
    param_2[6] = SQRT(dVar7 * dVar7 + dVar2 * dVar2 + dVar6 * dVar6);
  }
  return;
}



// FUNCTION 147d65fd2 FUN_147d65fd2 body=127 status=ok
// SIG undefined FUN_147d65fd2(void)

void FUN_147d65fd2(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  uVar1 = *(undefined4 *)(lVar4 + 0x60);
  *(undefined4 *)(lVar4 + 0x60) = 3;
  lVar4 = *param_1;
  lVar3 = lVar4 + 0x110;
  if (*(longlong *)(lVar4 + 0x120) != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x120);
  }
  iVar2 = *(int *)(lVar4 + 0x128);
  if ((longlong)iVar2 != 0) {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x20))();
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
    lVar4 = *param_1;
  }
  *(undefined4 *)(lVar4 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000147d6604a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
  return;
}



// FUNCTION 147d66052 FUN_147d66052 body=116 status=ok
// SIG undefined FUN_147d66052(void)

void FUN_147d66052(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14473b392(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147d6bfbc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d660c8 FUN_147d660c8 body=1223 status=ok
// SIG undefined FUN_147d660c8(void)

void FUN_147d660c8(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  wchar_t *local_138;
  longlong *local_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  undefined1 local_b8 [8];
  undefined1 local_b0 [48];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  wchar_t *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_2 + 0xe8) == -1) {
    plVar6 = (longlong *)*param_1;
    uVar2 = FUN_1447addd0(param_2 + 0xd8,0x10);
    iVar3 = FUN_140133992(plVar6,uVar2,param_2 + 0xd8);
    if ((iVar3 == -1) ||
       (lVar4 = (longlong)iVar3 * 0x1c + *plVar6, piVar5 = (int *)(lVar4 + 0x10),
       piVar5 == (int *)0x0 || lVar4 == 0)) {
      iVar3 = *(int *)(param_1 + 6);
      *(uint *)(param_1 + 6) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
        FUN_147d6bf36(param_1 + 5,iVar3);
      }
      lVar4 = param_1[5];
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = 0;
      *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = param_2;
      *(int *)(param_2 + 0xe8) = iVar3;
    }
    else {
      iVar3 = *piVar5;
      plVar6 = (longlong *)(param_1[5] + (longlong)iVar3 * 0x10 + 8);
      if (*plVar6 == 0) {
        *(int *)(param_2 + 0xe8) = iVar3;
        *plVar6 = param_2;
      }
      else {
        FUN_1446ddc76(local_b8,"AssetCheck",1);
        FUN_14276766e(local_b0,local_b8);
        FUN_144a5dc74(local_c8);
        FUN_142767974(local_b0,&local_80,local_c8);
        FUN_144a5dc74(local_f8);
        FUN_1468756a4(&local_e8,*plVar6,local_f8);
        local_d8 = local_e8;
        local_d0 = local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_80,&local_70,&local_d8);
        FUN_144a5dc74(local_128);
        FUN_1468756a4(&local_118,param_2,local_128);
        local_108 = local_118;
        local_100 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_110 + 1) = (int)local_110[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_70,&local_60,&local_108);
        local_40 = L"TextureError_NonUniqueLightingGuid";
        local_38._0_4_ = 0x22;
        FUN_1446e940c(local_14c,&local_40);
        local_40 = L"AssetCheck";
        local_38 = (longlong *)CONCAT44(local_38._4_4_,10);
        FUN_1446e940c(local_150,&local_40);
        FUN_140208bae(local_148,local_150,local_14c,
                      L"Same lighting guid, modify or touch any property in the texture editor to generate a new guid and fix the issue."
                     );
        FUN_1467eb2e4(&local_138,local_148,1);
        local_40 = local_138;
        local_38 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_60,local_50,&local_40);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_48 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar5 = (int *)((longlong)local_48 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
        plVar6 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar5 = (int *)((longlong)plVar6 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_130 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar5 = (int *)((longlong)local_130 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_130 + 0x10))(local_130);
            }
          }
        }
        if (local_148[0] != (longlong *)0x0) {
          (**(code **)(*local_148[0] + 0x10))();
        }
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_58 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar5 = (int *)((longlong)local_58 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_58 + 0x10))(local_58);
            }
          }
        }
        plVar6 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar5 = (int *)((longlong)plVar6 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_110 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar5 = (int *)((longlong)local_110 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
            }
          }
        }
        if (local_128[0] != (longlong *)0x0) {
          (**(code **)(*local_128[0] + 0x10))();
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_68 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar5 = (int *)((longlong)local_68 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
        plVar6 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar5 = (int *)((longlong)plVar6 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_e0 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar5 = (int *)((longlong)local_e0 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_e0 + 0x10))(local_e0);
            }
          }
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_78 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar5 = (int *)((longlong)local_78 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*local_78 + 0x10))(local_78);
            }
          }
        }
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        FUN_1427678c0(local_b0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d66590 FUN_147d66590 body=70 status=ok
// SIG undefined FUN_147d66590(void)

longlong FUN_147d66590(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144781dc0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_144781d8d(lVar2,1);
  return lVar2;
}



// FUNCTION 147d665d6 FUN_147d665d6 body=117 status=ok
// SIG undefined FUN_147d665d6(void)

void FUN_147d665d6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = -0x78;
  do {
    if (*(longlong *)(param_1 + 0xa8 + lVar3) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0xa8 + lVar3) = 0;
    }
    *(undefined8 *)(param_1 + 0x120 + lVar3) = 0;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 147d6664c FUN_147d6664c body=4378 status=ok
// SIG undefined FUN_147d6664c(void)

void FUN_147d6664c(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130;
  longlong **local_128;
  longlong *local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  wchar_t local_98 [8];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((char)param_1[0xc] == '\0') && (cVar2 = FUN_14473b0f0(), cVar2 != '\0')) {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = L'\0';
    local_98[1] = L'\0';
    local_98[2] = L'\0';
    local_98[3] = L'\0';
    local_98[4] = L'\0';
    local_98[5] = L'\0';
    local_98[6] = L'\0';
    local_98[7] = L'\0';
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_f8 = L"None";
    uStack_f0._0_4_ = 4;
    local_118 = param_1;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,&DAT_149e01fe8);
    local_f8 = L"MaterialPropertiesDesc";
    uStack_f0._0_4_ = 0x16;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,
                  L"Visualizes Substrate material properties under mouse cursor");
    local_f8 = L"MaterialProperties";
    uStack_f0._0_4_ = 0x12;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Material Properties");
    local_130 = 1;
    local_138 = CONCAT31(local_138._1_3_,1);
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"MaterialProperties",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"None";
    uStack_f0._0_4_ = 4;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,&DAT_149e01fe8);
    local_f8 = L"MaterialCountDesc";
    uStack_f0._0_4_ = 0x11;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,L"Visualizes Substrate material count per pixel");
    local_f8 = L"MaterialCount";
    uStack_f0._0_4_ = 0xd;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Material Count");
    local_130 = 1;
    local_138 = CONCAT31(local_138._1_3_,2);
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"MaterialCount",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"IsSubstrateAdvancedDebugShaderEnabled";
    uStack_f0._0_4_ = 0x25;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,
                  L"Substrate advanced debugging r.Substrate.Debug.AdvancedVisualizationShaders is disabled"
                 );
    uVar3 = FUN_1407972e7();
    local_f8 = L"AdvancedMaterialPropertiesDesc";
    uStack_f0._0_4_ = 0x1e;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,L"Visualizes Substrate advanced material properties"
                 );
    local_f8 = L"AdvancedMaterialProperties";
    uStack_f0._0_4_ = 0x1a;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Advanced Material Properties");
    local_138 = CONCAT31(local_138._1_3_,5);
    local_130 = uVar3;
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"AdvancedMaterialProperties",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"None";
    uStack_f0._0_4_ = 4;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,&DAT_149e01fe8);
    local_f8 = L"MaterialClassificationDesc";
    uStack_f0._0_4_ = 0x1a;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,L"Visualizes Substrate material classification");
    local_f8 = L"MaterialClassification";
    uStack_f0._0_4_ = 0x16;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Material Classification");
    local_130 = 1;
    local_138 = CONCAT31(local_138._1_3_,6);
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"MaterialClassification",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"IsSubstrateBufferPassEnabled";
    uStack_f0._0_4_ = 0x1c;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,
                  L"Substrate tiled DBuffer pass (r.Substrate.DBufferPass and r.Substrate.DBufferPass.DedicatedTiles) is disabled"
                 );
    local_f8 = L"DecalClassificationDesc";
    uStack_f0._0_4_ = 0x17;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,L"Visualizes Substrate decal classification");
    local_f8 = L"DecalClassification";
    uStack_f0._0_4_ = 0x13;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Decal classification");
    local_130 = 0;
    local_138 = CONCAT31(local_138._1_3_,8);
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"DecalClassification",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"IsSubstrateRoughRefractionEnabled";
    uStack_f0._0_4_ = 0x21;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,
                  L"Substrate rough refraction r.Substrate.OpaqueMaterialRoughRefraction is disabled"
                 );
    uVar3 = FUN_144b1ce23();
    local_f8 = L"OpaqueRoughRefractionClassificationDesc";
    uStack_f0._0_4_ = 0x27;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,
                  L"Visualizes Substrate Opaque Rough Refraction Classification");
    local_f8 = L"OpaqueRoughRefractionClassification";
    uStack_f0._0_4_ = 0x23;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Opaque Rough Refraction Classification");
    local_138 = CONCAT31(local_138._1_3_,7);
    local_130 = uVar3;
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"OpaqueRoughRefractionClassification",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"None";
    uStack_f0._0_4_ = 4;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,&DAT_149e01fe8);
    local_f8 = L"SubstrateInfoDesc";
    uStack_f0._0_4_ = 0x11;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,L"Visualizes Substrate info");
    local_f8 = L"SubstrateInfo";
    uStack_f0._0_4_ = 0xd;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Substrate Info");
    local_130 = 1;
    local_138 = CONCAT31(local_138._1_3_,4);
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"SubstrateInfo",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_f8 = L"None";
    uStack_f0._0_4_ = 4;
    FUN_1446e940c(local_fc,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_100,&local_f8);
    FUN_140208bae(&local_b8,local_100,local_fc,&DAT_149e01fe8);
    local_f8 = L"MaterialByteCountDesc";
    uStack_f0._0_4_ = 0x15;
    FUN_1446e940c(local_104,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0._0_4_ = 0x1b;
    FUN_1446e940c(local_108,&local_f8);
    FUN_140208bae(&local_c8,local_108,local_104,L"Visualizes Substrate material footprint per pixel"
                 );
    local_f8 = L"MaterialByteCount";
    uStack_f0._0_4_ = 0x11;
    FUN_1446e940c(local_10c,&local_f8);
    local_f8 = L"FSubstrateVisualizationData";
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x1b);
    FUN_1446e940c(local_110,&local_f8);
    FUN_140208bae(&local_f8,local_110,local_10c,L"Material Bytes Count");
    local_130 = 1;
    local_138 = CONCAT31(local_138._1_3_,3);
    local_128 = &local_b8;
    FUN_143729adc(local_98,L"MaterialByteCount",&local_f8,&local_c8);
    if (local_f8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_f8 + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    local_b0 = local_88;
    local_b8 = (longlong *)0x100000000;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    local_a0 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
    }
    local_e0._0_4_ = (uint)local_a8;
    local_e0._4_4_ = local_a8._4_4_;
    local_d8 = local_a0;
    local_d4 = local_9c;
    uStack_f0 = local_b8;
    local_e8 = local_b0;
    if (local_a8._4_4_ < *(int *)(local_b0 + 0x18)) {
      iVar8 = 0;
      local_f8 = local_98;
      do {
        iVar4 = local_e0._4_4_;
        lVar6 = *(longlong *)local_f8;
        FUN_140056680(&local_b8,L"\n  Value=");
        iVar9 = (int)local_b0 + -1;
        if ((int)local_b0 == 0) {
          iVar9 = iVar8;
        }
        FUN_1400020e8(&local_c8,local_b8,iVar9);
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar6 = (longlong)iVar4 * 0x60 + lVar6;
        FUN_140002266(&local_b8,L"%d: ",*(undefined1 *)(lVar6 + 0x40));
        iVar4 = (int)local_b0 + -1;
        if ((int)local_b0 == 0) {
          iVar4 = iVar8;
        }
        FUN_1400020e8(&local_c8,local_b8,iVar4);
        if (local_b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        iVar4 = *(int *)(lVar6 + 0x10) + -1;
        if (*(int *)(lVar6 + 0x10) == 0) {
          iVar4 = iVar8;
        }
        FUN_1400020e8(&local_c8,*(undefined8 *)(lVar6 + 8),iVar4);
        if (*(char *)(lVar6 + 0x42) == '\0') {
          puVar5 = (undefined8 *)FUN_1447a1f4a(lVar6 + 0x48);
          puVar10 = &DAT_149dfb77a;
          if (*(int *)(puVar5 + 1) != 0) {
            puVar10 = (undefined2 *)*puVar5;
          }
          FUN_140002266(&local_b8,L" --- Unavailable, reason: %s",puVar10);
          iVar4 = (int)local_b0 + -1;
          if ((int)local_b0 == 0) {
            iVar4 = iVar8;
          }
          FUN_1400020e8(&local_c8,local_b8,iVar4);
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        local_e0._0_4_ = (uint)local_e0 & ~uStack_f0._4_4_;
        FUN_1449c0562(&uStack_f0);
      } while (local_e0._4_4_ < *(int *)(local_e8 + 0x18));
    }
    local_f8 = (wchar_t *)0x0;
    uStack_f0 = (longlong *)0x0;
    FUN_14020fad6(&local_f8,
                  L"When the viewport view-mode is set to \'Substrate Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
                 );
    iVar8 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar8 = 0;
    }
    FUN_1400020e8(&local_f8,local_c8,iVar8);
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    param_1 = local_118;
    pwVar11 = local_f8;
    if ((int)uStack_f0 == 0) {
      pwVar11 = L"";
    }
    local_138 = 1;
    lVar6 = (**(code **)(*DAT_14c8407a8 + 0x18))(DAT_14c8407a8,L"r.Substrate.ViewMode",0,pwVar11);
    param_1[0xd] = lVar6;
    if (local_c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((wchar_t **)(param_1 + 10) == &local_f8) {
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[10] != 0) {
        FUN_1400020a8();
      }
      param_1[10] = (longlong)local_f8;
      local_f8 = (wchar_t *)0x0;
      *(int *)(param_1 + 0xb) = (int)uStack_f0;
      *(uint *)((longlong)param_1 + 0x5c) = uStack_f0._4_4_;
    }
    local_b8 = (longlong *)&DAT_100000000;
    local_b0 = local_88;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar8 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar8 = local_70;
    }
    local_e0 = local_a8;
    uVar1 = local_e0;
    local_d8 = local_a0;
    local_d4 = local_9c;
    uStack_f0 = local_b8;
    local_e8 = local_b0;
    local_e0._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_f8 = local_98;
    if ((local_e0._4_4_ != iVar8) || (local_b0 != local_88)) {
      iVar4 = local_e0._4_4_;
      local_e0 = uVar1;
      do {
        if (*(char *)(*(longlong *)local_f8 + 0x42 + (longlong)iVar4 * 0x60) == '\x01') {
          local_b8 = (longlong *)(*(longlong *)local_f8 + (longlong)iVar4 * 0x60);
          plVar7 = local_b8 + 1;
          FUN_147d6c058(param_1,&local_c8,&local_b8);
          FUN_147d67768(*param_1 + (longlong)(int)local_c8 * 0x60 + 8,plVar7);
        }
        local_e0 = CONCAT44(local_e0._4_4_,(uint)local_e0 & ~uStack_f0._4_4_);
        FUN_1449c0562(&uStack_f0);
        iVar4 = local_e0._4_4_;
        uVar1 = local_e0;
      } while (local_f8 != local_98 || (local_e8 != local_88 || local_e0._4_4_ != iVar8));
    }
    local_e0 = uVar1;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145fda24c(local_98);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d67768 FUN_147d67768 body=195 status=ok
// SIG undefined FUN_147d67768(void)

longlong FUN_147d67768(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 147d6782c FUN_147d6782c body=153 status=ok
// SIG undefined FUN_147d6782c(void)

undefined8 FUN_147d6782c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x60) == lVar2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          return CONCAT71((int7)(lVar1 + 8U >> 8),*(undefined1 *)(lVar1 + 0x40));
        }
        iVar4 = *(int *)(lVar1 + 0x58);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d678c6 FUN_147d678c6 body=65 status=ok
// SIG undefined FUN_147d678c6(void)

undefined4 FUN_147d678c6(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((DAT_14cb0ac98 != (longlong *)0x0 & DAT_14cb0ac90) == 1) {
    lVar1 = (**(code **)(*DAT_14cb0ac98 + 0x68))();
    uVar2 = 0;
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*DAT_14cb0ac98 + 0x68))();
      uVar2 = *(undefined4 *)(lVar1 + 4);
    }
  }
  return uVar2;
}



// FUNCTION 147d67910 FUN_147d67910 body=59 status=ok
// SIG undefined FUN_147d67910(void)

undefined4 FUN_147d67910(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145b0eddc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147d67920;
  }
  lVar2 = 0;
LAB_147d67920:
  return *(undefined4 *)(lVar2 + 0x28);
}



// FUNCTION 147d6794c FUN_147d6794c body=101 status=ok
// SIG undefined FUN_147d6794c(void)

undefined8 FUN_147d6794c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar3 = FUN_145b0eddc();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_147d67960;
  }
  lVar2 = 0;
LAB_147d67960:
  uVar1 = *(undefined4 *)(lVar2 + 0x28);
  lVar2 = FUN_145ef8526();
  if (lVar2 == 0) {
    FUN_14340c58e(param_2);
  }
  else {
    FUN_147973036(lVar2,param_2,uVar1);
  }
  return param_2;
}


