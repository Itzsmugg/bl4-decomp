// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c41830 FUN_147c41830 body=147 status=ok
// SIG undefined FUN_147c41830(void)

void FUN_147c41830(longlong param_1,int param_2)

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



// FUNCTION 147c418c4 FUN_147c418c4 body=9 status=ok
// SIG undefined FUN_147c418c4(void)

void FUN_147c418c4(longlong param_1)

{
  FUN_1436003aa(param_1 + 0x10);
  return;
}



// FUNCTION 147c418ce FUN_147c418ce body=29 status=ok
// SIG undefined FUN_147c418ce(void)

undefined8 FUN_147c418ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c418ec FUN_147c418ec body=167 status=ok
// SIG undefined FUN_147c418ec(void)

void FUN_147c418ec(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147c41967;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147c41967;
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
LAB_147c41967:
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
                    /* WARNING: Could not recover jumptable at 0x000147c41987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147c41994 FUN_147c41994 body=119 status=ok
// SIG undefined FUN_147c41994(void)

void FUN_147c41994(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_147c41a0c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c41a0c FUN_147c41a0c body=141 status=ok
// SIG undefined FUN_147c41a0c(void)

void FUN_147c41a0c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 147c41a9a FUN_147c41a9a body=288 status=ok
// SIG undefined FUN_147c41a9a(void)

void FUN_147c41a9a(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  
  iVar2 = DAT_14caf5b10;
  lVar3 = (longlong)DAT_14caf5b10;
  iVar13 = DAT_14caf5b10;
  if (lVar3 != 0) {
    plVar5 = &DAT_14caf5a88;
    if (DAT_14caf5b08 != (longlong *)0x0) {
      plVar5 = DAT_14caf5b08;
    }
    iVar13 = 0;
    bVar12 = *plVar5 == *(longlong *)*param_1;
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      plVar6 = plVar5 + lVar7 * 2 + 2;
      iVar10 = iVar9;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar11 = iVar4;
        if (lVar3 <= lVar8) break;
        lVar1 = *plVar6;
        iVar10 = iVar10 + 1;
        plVar6 = plVar6 + 2;
        iVar11 = iVar10;
      } while (bVar12 == (lVar1 == *(longlong *)*param_1));
      iVar4 = iVar11 - iVar9;
      if (bVar12 == false) {
        if (iVar13 != iVar9) {
          memmove(plVar5 + (longlong)iVar13 * 2,plVar5 + lVar7 * 2,(longlong)iVar4 << 4);
        }
        iVar13 = iVar13 + iVar4;
      }
      else {
        FUN_145cfedad(plVar5 + lVar7 * 2,iVar4);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar9 = iVar11;
    } while (lVar8 < lVar3);
  }
  DAT_14caf5b10 = iVar13;
  return;
}



// FUNCTION 147c41bba FUN_147c41bba body=52 status=ok
// SIG undefined FUN_147c41bba(void)

void FUN_147c41bba(void)

{
  if (1 < DAT_14caf5a70) {
    FUN_141631e48();
    DAT_14caf5a70 = 1;
    FUN_147c41d5c();
    return;
  }
  FUN_147c41bee();
  FUN_141631e48();
  return;
}



// FUNCTION 147c41bee FUN_147c41bee body=364 status=ok
// SIG undefined FUN_147c41bee(void)

void FUN_147c41bee(void)

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
  puVar5 = &DAT_14caf5a60;
  if (DAT_14caf5a68 != (undefined *)0x0) {
    puVar5 = DAT_14caf5a68;
  }
  iVar4 = DAT_14caf5a70 + 3;
  if (-1 < DAT_14caf5a70) {
    iVar4 = DAT_14caf5a70;
  }
  if (DAT_14caf5a30 - DAT_14caf5a5c < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14caf5a38;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14caf5a50 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14caf5a50;
    }
    local_78 = &DAT_14caf5a28;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14caf5a38)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14caf5a28 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14caf5a38 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14caf5a70) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14caf5a70);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c41d5c FUN_147c41d5c body=477 status=ok
// SIG undefined FUN_147c41d5c(void)

void FUN_147c41d5c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf5a68 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caf5a68,0,0,4);
  }
  uVar3 = DAT_14caf5a70;
  uVar2 = local_50;
  if (DAT_14caf5a70 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14caf5a60,0,DAT_14caf5a70,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14caf5a68;
        if (DAT_14caf5a68 == (undefined *)0x0) {
          puVar6 = &DAT_14caf5a60;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14caf5a70 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caf5a38;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caf5a50 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caf5a28;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar9 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                (longlong)(int)DAT_14caf5a70 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14caf5a68;
        if (DAT_14caf5a68 == (undefined *)0x0) {
          puVar6 = &DAT_14caf5a60;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14caf5a70 - 1U & uVar9) * 4);
        puVar6 = DAT_14caf5a68;
        if (DAT_14caf5a68 == (undefined *)0x0) {
          puVar6 = &DAT_14caf5a60;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14caf5a70 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c41f3a FUN_147c41f3a body=89 status=ok
// SIG undefined FUN_147c41f3a(void)

void FUN_147c41f3a(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x88) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 8;
    return;
  }
  FUN_147c41f94(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_147c41ff9(lVar1,param_2,param_3);
  return;
}



// FUNCTION 147c41f94 FUN_147c41f94 body=101 status=ok
// SIG undefined FUN_147c41f94(void)

void FUN_147c41f94(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_2 < 9) {
      iVar3 = 8;
    }
    else {
      iVar2 = 0;
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar3 = (int)(uVar1 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
      else if (iVar3 < 1) goto LAB_147c41fcd;
    }
    iVar2 = iVar3;
    FUN_147c41a0c(param_1,0,iVar2);
  }
LAB_147c41fcd:
  *(int *)(param_1 + 0x8c) = iVar2;
  return;
}



// FUNCTION 147c41ff9 FUN_147c41ff9 body=45 status=ok
// SIG undefined FUN_147c41ff9(void)

void FUN_147c41ff9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147c42026 FUN_147c42026 body=140 status=ok
// SIG undefined FUN_147c42026(void)

void FUN_147c42026(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14caf5a80;
  if (param_1 <= (int)DAT_14caf5a80) {
    if (DAT_14caf5a84 == 0) {
      uVar2 = 4;
      if (4 < DAT_14caf5a80) {
        uVar2 = DAT_14caf5a80;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14caf5a80 + ((ulonglong)((longlong)(int)DAT_14caf5a80 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14caf5a84 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14caf5a78,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c420b4 FUN_147c420b4 body=93 status=ok
// SIG undefined FUN_147c420b4(void)

void FUN_147c420b4(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  
  puVar4 = &DAT_14caf5a60;
  if (DAT_14caf5a68 != (undefined *)0x0) {
    puVar4 = DAT_14caf5a68;
  }
  lVar1 = DAT_14caf5a28 + (longlong)param_1 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar3 = *(int *)(puVar4 + lVar5 * 4);
  if (iVar3 == param_1) {
    puVar2 = (undefined4 *)(puVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(DAT_14caf5a28 + 0x10 + lVar5 * 0x18);
    } while (iVar3 != param_1);
    puVar2 = (undefined4 *)(DAT_14caf5a28 + lVar5 * 0x18 + 0x10);
  }
  *puVar2 = *(undefined4 *)(lVar1 + 0x10);
  FUN_143600aa6();
  return;
}



// FUNCTION 147c42112 FUN_147c42112 body=128 status=ok
// SIG undefined FUN_147c42112(void)

void FUN_147c42112(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caf5a28;
  if (DAT_14caf5a5c != 0) {
    *(int *)(DAT_14caf5a28 + (longlong)DAT_14caf5a58 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caf5a5c) {
    iVar4 = DAT_14caf5a58;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14caf5a5c = DAT_14caf5a5c + 1;
  puVar3 = &DAT_14caf5a38;
  if (DAT_14caf5a48 != (undefined4 *)0x0) {
    puVar3 = DAT_14caf5a48;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caf5a58 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147c42192 FUN_147c42192 body=134 status=ok
// SIG undefined FUN_147c42192(void)

longlong FUN_147c42192(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_147c4221a();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1;
    if (DAT_14caf5a28 + lVar2 * 0x18 != 0) goto LAB_147c421cc;
  }
  local_28 = param_2;
  FUN_147c422ec(&local_1c,param_1);
  lVar2 = (longlong)local_1c;
LAB_147c421cc:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14caf5a28 + lVar2 * 0x18 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4221a FUN_147c4221a body=209 status=ok
// SIG undefined FUN_147c4221a(void)

int FUN_147c4221a(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caf5a30 != DAT_14caf5a5c) {
    puVar2 = &DAT_14caf5a60;
    if (DAT_14caf5a68 != (undefined *)0x0) {
      puVar2 = DAT_14caf5a68;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14caf5a70 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14caf5a28 + (longlong)iVar3 * 0x18);
        cVar1 = FUN_140bf1e82(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_147c42247;
        iVar3 = *(int *)(DAT_14caf5a28 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_147c42247:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 147c422ec FUN_147c422ec body=293 status=ok
// SIG undefined FUN_147c422ec(void)

undefined4 * FUN_147c422ec(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147c42412(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar2 = FUN_143600ad6(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14caf5a30 - DAT_14caf5a5c;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14caf5a70)) {
      param_2 = DAT_14caf5a70 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x14) = param_2;
      puVar4 = DAT_14caf5a68;
      if (DAT_14caf5a68 == (undefined *)0x0) {
        puVar4 = &DAT_14caf5a60;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14caf5a70 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14caf5a68;
      if (DAT_14caf5a68 == (undefined *)0x0) {
        puVar4 = &DAT_14caf5a60;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14caf5a70 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14caf5a70 = iVar6;
      FUN_147c41d5c();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c42412 FUN_147c42412 body=270 status=ok
// SIG undefined FUN_147c42412(void)

int * FUN_147c42412(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14caf5a58;
  iVar4 = DAT_14caf5a30;
  if (DAT_14caf5a5c == 0) {
    iVar2 = DAT_14caf5a30 + 1;
    bVar7 = DAT_14caf5a34 == DAT_14caf5a30;
    DAT_14caf5a30 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14caf5a28,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14caf5a38,1);
    puVar3 = DAT_14caf5a48;
    if (DAT_14caf5a48 == (undefined4 *)0x0) {
      puVar3 = &DAT_14caf5a38;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar3[iVar5 >> 5] = puVar3[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14caf5a58;
    DAT_14caf5a58 = *(int *)(DAT_14caf5a28 + 4 + lVar6 * 0x18);
    DAT_14caf5a5c = DAT_14caf5a5c + -1;
    iVar4 = iVar2;
    if (DAT_14caf5a5c != 0) {
      *(undefined4 *)(DAT_14caf5a28 + (longlong)DAT_14caf5a58 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14caf5a38;
  if (DAT_14caf5a48 != (undefined4 *)0x0) {
    puVar3 = DAT_14caf5a48;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  puVar3[iVar2 >> 5] = puVar3[iVar2 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14caf5a28;
  return param_1;
}



// FUNCTION 147c42520 FUN_147c42520 body=76 status=ok
// SIG undefined FUN_147c42520(void)

void FUN_147c42520(void)

{
  int iVar1;
  
  iVar1 = FUN_147c4256c(DAT_14caf5a80,DAT_14caf5a84);
  if (iVar1 != DAT_14caf5a84) {
    DAT_14caf5a84 = iVar1;
    FUN_1446f8d3c(&DAT_14caf5a78,DAT_14caf5a80,iVar1,8,8);
  }
  return;
}



// FUNCTION 147c4256c FUN_147c4256c body=93 status=ok
// SIG undefined FUN_147c4256c(void)

ulonglong FUN_147c4256c(uint param_1,uint param_2)

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



// FUNCTION 147c425ca FUN_147c425ca body=52 status=ok
// SIG undefined FUN_147c425ca(void)

void FUN_147c425ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c425fe(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 == *(int *)(param_1 + 0x5c)) {
    return;
  }
  *(int *)(param_1 + 0x5c) = iVar1;
  FUN_147c4266a(param_1,*(undefined4 *)(param_1 + 0x58),iVar1);
  return;
}



// FUNCTION 147c425fe FUN_147c425fe body=108 status=ok
// SIG undefined FUN_147c425fe(void)

ulonglong FUN_147c425fe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 10;
  if (10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147c4266a FUN_147c4266a body=132 status=ok
// SIG undefined FUN_147c4266a(void)

void FUN_147c4266a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,8);
  return;
}



// FUNCTION 147c426ee FUN_147c426ee body=110 status=ok
// SIG undefined FUN_147c426ee(void)

void FUN_147c426ee(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x5c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_147c4266a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c4275e FUN_147c4275e body=296 status=ok
// SIG undefined FUN_147c4275e(void)

undefined4 * FUN_147c4275e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147c42888(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_147c4296e(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
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
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_147c42b48(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c42888 FUN_147c42888 body=230 status=ok
// SIG undefined FUN_147c42888(void)

int * FUN_147c42888(longlong *param_1,int *param_2)

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



// FUNCTION 147c4296e FUN_147c4296e body=172 status=ok
// SIG undefined FUN_147c4296e(void)

undefined8 FUN_147c4296e(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    iVar6 = FUN_147c42a1c();
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x18);
      lVar2 = *(longlong *)(puVar1 + 2);
      if (lVar2 != 0) {
        FUN_147c42cfe(lVar2);
        FUN_1400020a8(lVar2);
      }
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_147c42ad6(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_147c42996;
    }
  }
  uVar7 = 0;
LAB_147c42996:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c42a1c FUN_147c42a1c body=185 status=ok
// SIG undefined FUN_147c42a1c(void)

int FUN_147c42a1c(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_140bf1e82(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147c42a45;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147c42a45:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 147c42ad6 FUN_147c42ad6 body=114 status=ok
// SIG undefined FUN_147c42ad6(void)

void FUN_147c42ad6(longlong *param_1,int param_2)

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



// FUNCTION 147c42b48 FUN_147c42b48 body=436 status=ok
// SIG undefined FUN_147c42b48(void)

void FUN_147c42b48(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 147c42cfe FUN_147c42cfe body=119 status=ok
// SIG undefined FUN_147c42cfe(void)

void FUN_147c42cfe(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c42d76 FUN_147c42d76 body=63 status=ok
// SIG undefined FUN_147c42d76(void)

void FUN_147c42d76(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147c412fa(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147c42b48(param_1);
    return;
  }
  FUN_147c42db6(param_1);
  FUN_147c412fa(param_1);
  return;
}



// FUNCTION 147c42db6 FUN_147c42db6 body=322 status=ok
// SIG undefined FUN_147c42db6(void)

void FUN_147c42db6(longlong *param_1)

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



// FUNCTION 147c42efa FUN_147c42efa body=110 status=ok
// SIG undefined FUN_147c42efa(void)

void FUN_147c42efa(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147c42f6a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c42f6a FUN_147c42f6a body=132 status=ok
// SIG undefined FUN_147c42f6a(void)

void FUN_147c42f6a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147c42fee FUN_147c42fee body=263 status=ok
// SIG undefined FUN_147c42fee(void)

void FUN_147c42fee(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_140bf1e82();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_147c43012;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_140bf1e82(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_147c430f6(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_147c43012:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c430f6 FUN_147c430f6 body=87 status=ok
// SIG undefined FUN_147c430f6(void)

void FUN_147c430f6(longlong *param_1,int param_2)

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
  FUN_147c4314e();
  return;
}



// FUNCTION 147c4314e FUN_147c4314e body=65 status=ok
// SIG undefined FUN_147c4314e(void)

void FUN_147c4314e(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (lVar1 != 0) {
    FUN_147c42cfe(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_147c42ad6(param_1,param_2);
  return;
}



// FUNCTION 147c43190 FUN_147c43190 body=56 status=ok
// SIG undefined FUN_147c43190(void)

undefined8 * FUN_147c43190(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa07570;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c431c8 FUN_147c431c8 body=56 status=ok
// SIG undefined FUN_147c431c8(void)

undefined8 * FUN_147c431c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa075a0;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c43200 FUN_147c43200 body=56 status=ok
// SIG undefined FUN_147c43200(void)

undefined8 * FUN_147c43200(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa075d0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c43238 FUN_147c43238 body=56 status=ok
// SIG undefined FUN_147c43238(void)

undefined8 * FUN_147c43238(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa07600;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c43270 FUN_147c43270 body=56 status=ok
// SIG undefined FUN_147c43270(void)

undefined8 * FUN_147c43270(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa07630;
  FUN_144725486();
  FUN_1463f15c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c432a8 FUN_147c432a8 body=38 status=ok
// SIG undefined FUN_147c432a8(void)

undefined8 FUN_147c432a8(undefined8 param_1,int param_2)

{
  FUN_1463f15c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c432ce FUN_147c432ce body=334 status=ok
// SIG undefined FUN_147c432ce(void)

void FUN_147c432ce(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147c4341c(*param_2,lVar11,param_4,*param_5,*param_6,*param_7,*param_8);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147c4341c FUN_147c4341c body=516 status=ok
// SIG undefined FUN_147c4341c(void)

void FUN_147c4341c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_88 [32];
  short *local_68;
  longlong local_60;
  short local_58;
  undefined6 uStack_56;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143600b74(&local_60,param_3);
  FUN_145e4142c();
  FUN_144aff0d6(&local_50,&DAT_14caf5b98);
  FUN_144aff0d6(&local_58,&local_50);
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == CONCAT62(uStack_56,local_58)) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_147c434ec;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c434ec:
  if (*psVar6 != -1) {
    local_50 = local_60;
    local_68 = &local_58;
    local_58 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  FUN_144a86a8e(param_2,param_1 + 0xec,param_4);
  FUN_144a86a8e(param_2,param_1 + 0xf0,param_5);
  FUN_144775fd8(param_2,param_1 + 0xe4,param_6);
  FUN_144a86bff(param_2,param_1 + 0xe0,param_7);
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_60);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c43622 FUN_147c43622 body=364 status=ok
// SIG undefined FUN_147c43622(void)

void FUN_147c43622(void)

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
  puVar5 = &DAT_14caf5ff8;
  if (DAT_14caf6000 != (undefined *)0x0) {
    puVar5 = DAT_14caf6000;
  }
  iVar4 = DAT_14caf6008 + 3;
  if (-1 < DAT_14caf6008) {
    iVar4 = DAT_14caf6008;
  }
  if (DAT_14caf5fc8 - DAT_14caf5ff4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14caf5fd0;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14caf5fe8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14caf5fe8;
    }
    local_78 = &DAT_14caf5fc0;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14caf5fd0)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14caf5fc0 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14caf5fd0 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14caf6008) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14caf6008);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c43790 FUN_147c43790 body=88 status=ok
// SIG undefined FUN_147c43790(void)

void FUN_147c43790(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x150);
  FUN_1417e5043(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 7);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 147c437e8 FUN_147c437e8 body=62 status=ok
// SIG undefined FUN_147c437e8(void)

void FUN_147c437e8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c43826(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 147c43826 FUN_147c43826 body=112 status=ok
// SIG undefined FUN_147c43826(void)

ulonglong FUN_147c43826(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147c43860;
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
LAB_147c43860:
  return param_2 & 0xffffffff;
}



// FUNCTION 147c43896 FUN_147c43896 body=31 status=ok
// SIG undefined FUN_147c43896(void)

undefined8 FUN_147c43896(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c438c6 FUN_147c438c6 body=93 status=ok
// SIG undefined FUN_147c438c6(void)

void FUN_147c438c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa07690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c43924 FUN_147c43924 body=93 status=ok
// SIG undefined FUN_147c43924(void)

void FUN_147c43924(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa07690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c43982 FUN_147c43982 body=126 status=ok
// SIG undefined FUN_147c43982(void)

void FUN_147c43982(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa07690;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c439f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147c43a0c FUN_147c43a0c body=132 status=ok
// SIG undefined FUN_147c43a0c(void)

void FUN_147c43a0c(longlong param_1,int param_2)

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



// FUNCTION 147c43a91 FUN_147c43a91 body=23 status=ok
// SIG undefined FUN_147c43a91(void)

void FUN_147c43a91(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) & 0xf8;
  return;
}



// FUNCTION 147c43aa8 FUN_147c43aa8 body=132 status=ok
// SIG undefined FUN_147c43aa8(void)

void FUN_147c43aa8(longlong param_1,int param_2)

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



// FUNCTION 147c43b2e FUN_147c43b2e body=136 status=ok
// SIG undefined FUN_147c43b2e(void)

void FUN_147c43b2e(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_1;
  FUN_143600dc2(param_1 + 0xa8,&local_20);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c43bcc FUN_147c43bcc body=114 status=ok
// SIG undefined FUN_147c43bcc(void)

undefined8 * FUN_147c43bcc(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *_Dst;
  
  *param_1 = param_2;
  param_1[5] = 0;
  iVar1 = *(int *)((longlong)param_3 + 0x28);
  pvVar2 = *(void **)((longlong)param_3 + 0x20);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_3 = pvVar2;
    }
    FUN_146ec8ea8(param_1 + 1,iVar1,0);
    _Dst = (undefined8 *)param_1[5];
    if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
      _Dst = param_1 + 1;
    }
    memcpy(_Dst,param_3,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147c43c3e FUN_147c43c3e body=572 status=ok
// SIG undefined FUN_147c43c3e(void)

void FUN_147c43c3e(longlong param_1,uint param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [188];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_338;
    do {
      puVar4 = (undefined8 *)*plVar10;
      puVar11 = (undefined8 *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3);
      puVar9 = puVar4;
      puVar14 = puVar11;
      if (iVar13 != 0) {
LAB_147c43cfd:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          uVar2 = puVar4[uVar7];
          puVar4[uVar7] = *puVar4;
          *puVar4 = uVar2;
          puVar8 = puVar11 + 1;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 1;
            puVar12 = puVar5 + 1;
            do {
              puVar5 = puVar12;
              puVar15 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar15 + 1;
              puVar12 = puVar5 + 1;
            } while (*(float *)((longlong)puVar4 + 4) < *(float *)((longlong)puVar5 + 4) ||
                     *(float *)((longlong)puVar4 + 4) == *(float *)((longlong)puVar5 + 4));
            puVar3 = puVar8 + -2;
            do {
              puVar12 = puVar8;
              puVar16 = puVar3;
              puVar8 = puVar12 + -1;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar16 + -1;
            } while (*(float *)((longlong)puVar12 + -4) < *(float *)((longlong)puVar4 + 4) ||
                     *(float *)((longlong)puVar12 + -4) == *(float *)((longlong)puVar4 + 4));
            if (puVar8 < puVar5) goto LAB_147c43d81;
            uVar2 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar2;
          } while( true );
        }
        for (; puVar9 = puVar4, puVar14 = puVar4, puVar4 < puVar11; puVar11 = puVar11 + -1) {
          while (puVar8 = puVar9, puVar9 = puVar14 + 1, puVar9 <= puVar11) {
            pfVar1 = (float *)((longlong)puVar14 + 0xc);
            puVar14 = puVar9;
            if (*(float *)((longlong)puVar8 + 4) < *pfVar1 ||
                *(float *)((longlong)puVar8 + 4) == *pfVar1) {
              puVar9 = puVar8;
            }
          }
          uVar2 = *puVar8;
          *puVar8 = *puVar11;
          *puVar11 = uVar2;
        }
        goto LAB_147c43e59;
      }
LAB_147c43e6e:
      FUN_147c43e7b(puVar4);
LAB_147c43e59:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  if ((local_38 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147c43d81:
  uVar2 = *puVar4;
  *puVar4 = *puVar8;
  *puVar8 = uVar2;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar16 - (longlong)puVar9 < (longlong)puVar14 - (longlong)puVar15) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar15 = puVar4;
    if (puVar8 <= puVar4 + 1) goto LAB_147c43e59;
  }
  else {
    if (puVar4 + 1 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar16 = puVar11;
    if (puVar11 <= puVar5) goto LAB_147c43e59;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar15) >> 3);
  puVar9 = puVar15;
  puVar11 = puVar12;
  puVar14 = puVar16;
  if (iVar13 == 0) goto LAB_147c43e6e;
  goto LAB_147c43cfd;
}



// FUNCTION 147c43e7b FUN_147c43e7b body=319 status=ok
// SIG undefined FUN_147c43e7b(void)

void FUN_147c43e7b(undefined8 *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar4;
joined_r0x000147c43e9c:
    do {
      iVar7 = iVar4 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar9 = iVar4 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4),
           pfVar1 = (float *)((longlong)param_1 + (longlong)iVar7 * 8 + 4),
           fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
          iVar7 = iVar9;
        }
        lVar11 = (longlong)iVar4;
        lVar8 = (longlong)iVar7;
        fVar2 = *(float *)((longlong)param_1 + lVar11 * 8 + 4);
        pfVar1 = (float *)((longlong)param_1 + lVar8 * 8 + 4);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          uVar3 = param_1[lVar11];
          param_1[lVar11] = param_1[lVar8];
          param_1[lVar8] = uVar3;
          iVar4 = iVar7;
          goto joined_r0x000147c43e9c;
        }
      }
      bVar12 = iVar10 != 0;
      iVar4 = iVar10 + -1;
      iVar10 = iVar4;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar4 = 0;
          iVar7 = 1;
          iVar10 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar9 = iVar7;
            if (((longlong)iVar4 < (longlong)uVar6) &&
               (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar4 * 8 + 4),
               pfVar1 = (float *)((longlong)param_1 + (longlong)iVar7 * 8 + 4),
               fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
              iVar9 = iVar4;
            }
            lVar8 = (longlong)iVar10;
            lVar11 = (longlong)iVar9;
            fVar2 = *(float *)((longlong)param_1 + lVar8 * 8 + 4);
            pfVar1 = (float *)((longlong)param_1 + lVar11 * 8 + 4);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            uVar3 = param_1[lVar8];
            param_1[lVar8] = param_1[lVar11];
            param_1[lVar11] = uVar3;
            iVar4 = iVar9 * 2;
            iVar7 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar3 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar3;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 147c43fba FUN_147c43fba body=565 status=ok
// SIG undefined FUN_147c43fba(void)

void FUN_147c43fba(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_348;
    do {
      puVar4 = (undefined8 *)*plVar10;
      puVar11 = (undefined8 *)plVar10[1];
      iVar13 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3);
      puVar9 = puVar4;
      puVar14 = puVar11;
      if (iVar13 != 0) {
LAB_147c4407b:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          uVar2 = puVar4[uVar7];
          puVar4[uVar7] = *puVar4;
          *puVar4 = uVar2;
          puVar8 = puVar11 + 1;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 1;
            puVar12 = puVar5 + 1;
            do {
              puVar5 = puVar12;
              puVar15 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar15 + 1;
              puVar12 = puVar5 + 1;
            } while (*(uint *)((longlong)puVar4 + 4) <= *(uint *)((longlong)puVar5 + 4));
            puVar3 = puVar8 + -2;
            do {
              puVar12 = puVar8;
              puVar16 = puVar3;
              puVar8 = puVar12 + -1;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar16 + -1;
            } while (*(uint *)((longlong)puVar12 + -4) <= *(uint *)((longlong)puVar4 + 4));
            if (puVar8 < puVar5) goto LAB_147c440f9;
            uVar2 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar2;
          } while( true );
        }
        for (; puVar9 = puVar4, puVar14 = puVar4, puVar4 < puVar11; puVar11 = puVar11 + -1) {
          while (puVar8 = puVar9, puVar9 = puVar14 + 1, puVar9 <= puVar11) {
            puVar1 = (uint *)((longlong)puVar14 + 0xc);
            puVar14 = puVar9;
            if (*(uint *)((longlong)puVar8 + 4) <= *puVar1) {
              puVar9 = puVar8;
            }
          }
          uVar2 = *puVar8;
          *puVar8 = *puVar11;
          *puVar11 = uVar2;
        }
        goto LAB_147c441ce;
      }
LAB_147c441e3:
      FUN_147c441f0(puVar4);
LAB_147c441ce:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147c440f9:
  uVar2 = *puVar4;
  *puVar4 = *puVar8;
  *puVar8 = uVar2;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar16 - (longlong)puVar9 < (longlong)puVar14 - (longlong)puVar15) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar15 = puVar4;
    if (puVar8 <= puVar4 + 1) goto LAB_147c441ce;
  }
  else {
    if (puVar4 + 1 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar13;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar16 = puVar11;
    if (puVar11 <= puVar5) goto LAB_147c441ce;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar15) >> 3);
  puVar9 = puVar15;
  puVar11 = puVar12;
  puVar14 = puVar16;
  if (iVar13 == 0) goto LAB_147c441e3;
  goto LAB_147c4407b;
}



// FUNCTION 147c441f0 FUN_147c441f0 body=308 status=ok
// SIG undefined FUN_147c441f0(void)

void FUN_147c441f0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar2;
joined_r0x000147c44211:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar7 = iVar2 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (*(uint *)((longlong)param_1 + (longlong)iVar7 * 8 + 4) <=
            *(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4))) {
          iVar5 = iVar7;
        }
        lVar9 = (longlong)iVar2;
        lVar6 = (longlong)iVar5;
        if (*(uint *)((longlong)param_1 + lVar6 * 8 + 4) <
            *(uint *)((longlong)param_1 + lVar9 * 8 + 4)) {
          uVar1 = param_1[lVar9];
          param_1[lVar9] = param_1[lVar6];
          param_1[lVar6] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x000147c44211;
        }
      }
      bVar10 = iVar8 != 0;
      iVar2 = iVar8 + -1;
      iVar8 = iVar2;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar7 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(uint *)((longlong)param_1 + (longlong)iVar2 * 8 + 4) <=
                *(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4))) {
              iVar7 = iVar2;
            }
            lVar6 = (longlong)iVar8;
            lVar9 = (longlong)iVar7;
            if (*(uint *)((longlong)param_1 + lVar6 * 8 + 4) <=
                *(uint *)((longlong)param_1 + lVar9 * 8 + 4)) break;
            uVar1 = param_1[lVar6];
            param_1[lVar6] = param_1[lVar9];
            param_1[lVar9] = uVar1;
            iVar2 = iVar7 * 2;
            iVar5 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 147c44324 FUN_147c44324 body=85 status=ok
// SIG undefined FUN_147c44324(void)

void FUN_147c44324(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1436012fe();
  return;
}



// FUNCTION 147c4437a FUN_147c4437a body=42 status=ok
// SIG undefined FUN_147c4437a(void)

longlong FUN_147c4437a(longlong param_1,int param_2)

{
  FUN_147c443a4(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c443a4 FUN_147c443a4 body=82 status=ok
// SIG undefined FUN_147c443a4(void)

void FUN_147c443a4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa07720;
  FUN_144725486(param_1 + 1);
  if (param_1[0x2d] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2d] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147c443f6(param_1 + 1);
  return;
}



// FUNCTION 147c443f6 FUN_147c443f6 body=68 status=ok
// SIG undefined FUN_147c443f6(void)

void FUN_147c443f6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa07730;
  if (param_1[0x28] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x28] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 147c4443a FUN_147c4443a body=38 status=ok
// SIG undefined FUN_147c4443a(void)

undefined8 FUN_147c4443a(undefined8 param_1,int param_2)

{
  FUN_147c443a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c44460 FUN_147c44460 body=38 status=ok
// SIG undefined FUN_147c44460(void)

undefined8 FUN_147c44460(undefined8 param_1,int param_2)

{
  FUN_147c443f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c4448a FUN_147c4448a body=124 status=ok
// SIG undefined FUN_147c4448a(void)

void FUN_147c4448a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147c44508(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c44508 FUN_147c44508 body=132 status=ok
// SIG undefined FUN_147c44508(void)

void FUN_147c44508(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147c4458c FUN_147c4458c body=42 status=ok
// SIG undefined FUN_147c4458c(void)

longlong FUN_147c4458c(longlong param_1,int param_2)

{
  FUN_147c445b6(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c445b6 FUN_147c445b6 body=130 status=ok
// SIG undefined FUN_147c445b6(void)

void FUN_147c445b6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa07790;
  FUN_144725486(param_1 + 1);
  if (param_1[0x58] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x58] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[1] = &PTR_FUN_14aa077a0;
  param_1[0x52] = &PTR_FUN_14a3875e8;
  FUN_14011fb0c(param_1 + 0x53);
  FUN_140038ae8(param_1 + 0x53);
  FUN_1447259a8(param_1 + 1);
  return;
}



// FUNCTION 147c44638 FUN_147c44638 body=38 status=ok
// SIG undefined FUN_147c44638(void)

undefined8 FUN_147c44638(undefined8 param_1,int param_2)

{
  FUN_147c445b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c4465e FUN_147c4465e body=90 status=ok
// SIG undefined FUN_147c4465e(void)

undefined8 * FUN_147c4465e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa077a0;
  param_1[0x51] = &PTR_FUN_14a3875e8;
  FUN_14011fb0c(param_1 + 0x52);
  FUN_140038ae8(param_1 + 0x52);
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c446b8 FUN_147c446b8 body=66 status=ok
// SIG undefined FUN_147c446b8(void)

longlong FUN_147c446b8(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aa07800;
  FUN_144725486(param_1 + 0x18);
  FUN_147c446fa(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c446fa FUN_147c446fa body=68 status=ok
// SIG undefined FUN_147c446fa(void)

void FUN_147c446fa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa07810;
  if (param_1[0x27] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x27] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 147c4473e FUN_147c4473e body=65 status=ok
// SIG undefined FUN_147c4473e(void)

undefined8 * FUN_147c4473e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa07800;
  FUN_144725486(param_1 + 1);
  FUN_147c446fa(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c44780 FUN_147c44780 body=38 status=ok
// SIG undefined FUN_147c44780(void)

undefined8 FUN_147c44780(undefined8 param_1,int param_2)

{
  FUN_147c446fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c447a6 FUN_147c447a6 body=74 status=ok
// SIG undefined FUN_147c447a6(void)

void FUN_147c447a6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = param_1;
    }
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1446fc232(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while (iVar1 != (int)lVar4);
  }
  return;
}



// FUNCTION 147c447f0 FUN_147c447f0 body=62 status=ok
// SIG undefined FUN_147c447f0(void)

void FUN_147c447f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c4482e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147c4482e FUN_147c4482e body=93 status=ok
// SIG undefined FUN_147c4482e(void)

ulonglong FUN_147c4482e(uint param_1,uint param_2)

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



// FUNCTION 147c4488c FUN_147c4488c body=163 status=ok
// SIG undefined FUN_147c4488c(void)

void FUN_147c4488c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_147a774f0(param_1 + 0x40);
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"DistributionSourceStrength",1);
    local_30 = 0;
    local_38 = 0;
    lVar2 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x42c80000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x68) = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c44930 FUN_147c44930 body=168 status=ok
// SIG undefined FUN_147c44930(void)

void FUN_147c44930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x02') {
    plVar1 = (longlong *)(param_2 + 0x6a0);
    lVar3 = (longlong)*(int *)(param_2 + 0x6a8);
    if (0 < lVar3) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*plVar1 + lVar4) == *(longlong *)(param_1 + 0x34)) {
          return;
        }
        lVar4 = lVar4 + 0xe0;
      } while (lVar3 * 0xe0 - lVar4 != 0);
    }
    uVar2 = *(int *)(param_2 + 0x6a8) + 1;
    *(uint *)(param_2 + 0x6a8) = uVar2;
    if (*(uint *)(param_2 + 0x6ac) < uVar2) {
      FUN_147c0c1bc(plVar1);
    }
    lVar3 = lVar3 * 0xe0;
    memset((void *)(*plVar1 + lVar3),0,0xe0);
    *(undefined8 *)(*plVar1 + lVar3) = *(undefined8 *)(param_1 + 0x34);
    *(undefined1 *)(*plVar1 + 8 + lVar3) = 6;
    *(undefined8 *)(*plVar1 + 0x50 + lVar3) = 0;
  }
  return;
}



// FUNCTION 147c449d8 FUN_147c449d8 body=220 status=ok
// SIG undefined FUN_147c449d8(void)

/* WARNING: Removing unreachable block (ram,0x000147c44a83) */

void FUN_147c449d8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x30) == '\x02') {
    FUN_1400021e4(param_1 + 0x34,&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"TrailSource: Actor: %s\n",puVar4);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c44abc FUN_147c44abc body=65 status=ok
// SIG undefined FUN_147c44abc(void)

longlong * FUN_147c44abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x420,0x10);
  FUN_147c3ddfe(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
  return plVar1;
}



// FUNCTION 147c44b06 FUN_147c44b06 body=123 status=ok
// SIG undefined FUN_147c44b06(void)

void FUN_147c44b06(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_147bfa9d8(0 < *(int *)(param_2 + 0x160));
  iVar1 = param_3[0xc];
  param_3[0xc] = iVar1 + 1U;
  if ((uint)param_3[0xd] < iVar1 + 1U) {
    FUN_140df0cf8(param_3 + 2,iVar1);
  }
  puVar4 = param_3 + 2;
  if (*(undefined4 **)(param_3 + 10) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_3 + 10);
  }
  *(undefined **)(puVar4 + (longlong)iVar1 * 4) = &DAT_14caf3ca0;
  *(undefined8 *)(puVar4 + (longlong)iVar1 * 4 + 2) = uVar3;
  uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 147c44b88 FUN_147c44b88 body=65 status=ok
// SIG undefined FUN_147c44b88(void)

longlong * FUN_147c44b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(800,0x10);
  FUN_147c40458(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
  return plVar1;
}



// FUNCTION 147c44bd2 FUN_147c44bd2 body=123 status=ok
// SIG undefined FUN_147c44bd2(void)

void FUN_147c44bd2(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_147bfa9d8(0 < *(int *)(param_2 + 0x160));
  iVar1 = param_3[0xc];
  param_3[0xc] = iVar1 + 1U;
  if ((uint)param_3[0xd] < iVar1 + 1U) {
    FUN_140df0cf8(param_3 + 2,iVar1);
  }
  puVar4 = param_3 + 2;
  if (*(undefined4 **)(param_3 + 10) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_3 + 10);
  }
  *(undefined **)(puVar4 + (longlong)iVar1 * 4) = &DAT_14caf3ca0;
  *(undefined8 *)(puVar4 + (longlong)iVar1 * 4 + 2) = uVar3;
  uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 147c44c76 FUN_147c44c76 body=25 status=ok
// SIG undefined FUN_147c44c76(void)

undefined8 FUN_147c44c76(char param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14caf6298;
  if (param_1 != '\0') {
    puVar1 = &DAT_14caf62b8;
  }
  return *(undefined8 *)(puVar1 + 0x10);
}



// FUNCTION 147c44c90 FUN_147c44c90 body=112 status=ok
// SIG undefined FUN_147c44c90(void)

void FUN_147c44c90(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  
  FUN_147c44d00();
  puVar5 = &DAT_14caf6298;
  if (*(char *)(param_1 + 0x159) != '\0') {
    puVar5 = &DAT_14caf62b8;
  }
  lVar3 = *(longlong *)(puVar5 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x110) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c44d00 FUN_147c44d00 body=253 status=ok
// SIG undefined FUN_147c44d00(void)

void FUN_147c44d00(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 uVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 0x10;
  iVar2 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
    FUN_14472e0ae(lVar5,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar3 = lVar5;
  }
  *(undefined8 *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = 0x800000000;
  *(undefined8 **)(lVar3 + (longlong)iVar2 * 0x10) = &DAT_14caf6048;
  iVar2 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
    FUN_14472e0ae(lVar5,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar3 = lVar5;
  }
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
    FUN_14472e0ae(lVar5,iVar2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x90);
  }
  puVar1 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (*(char *)(param_1 + 0x159) == '\x01') {
    uVar4 = *(undefined2 *)(param_1 + 0x15c);
  }
  else {
    uVar4 = 0;
  }
  *(undefined2 *)(lVar5 + (longlong)iVar2 * 0x10 + 0xc) = uVar4;
  return;
}



// FUNCTION 147c44e06 FUN_147c44e06 body=45 status=ok
// SIG undefined FUN_147c44e06(void)

void FUN_147c44e06(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14aa07e60;
  param_1[4] = 0;
  param_1[3] = param_2;
  return;
}



// FUNCTION 147c44e34 FUN_147c44e34 body=65 status=ok
// SIG undefined FUN_147c44e34(void)

void FUN_147c44e34(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa07e60;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 147c44e76 FUN_147c44e76 body=67 status=ok
// SIG undefined FUN_147c44e76(void)

void FUN_147c44e76(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_14010eabe();
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



// FUNCTION 147c44eba FUN_147c44eba body=233 status=ok
// SIG undefined FUN_147c44eba(void)

void FUN_147c44eba(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  byte local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*param_2 + 8);
  switchD_143c3d4dc::caseD_20();
  lVar2 = *(longlong *)(lVar1 + 0x68);
  if (lVar2 == 0) {
    local_31 = false;
  }
  else {
    local_31 = *(longlong *)(lVar2 + 0x10) != 0;
  }
  FUN_1456bb002(*param_2,&local_31);
  if ((local_31 == 0) && ((*(byte *)(lVar1 + 0x28) & 1) != 0)) {
    local_30 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&local_30,&local_48);
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/Particles/SubUVAnimation.cpp",0x6c,
                  L"This platform requires cooked packages, and this SubUV animation does not contain cooked data %s."
                  ,puVar3);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_31 & 1) != 0) {
    FUN_140752362(param_1 + 0x40,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c44fa4 FUN_147c44fa4 body=29 status=ok
// SIG undefined FUN_147c44fa4(void)

void FUN_147c44fa4(longlong param_1)

{
  FUN_1446e0b6e();
  FUN_140308182(*(undefined8 *)(param_1 + 0x58),0);
  return;
}



// FUNCTION 147c44fc2 FUN_147c44fc2 body=160 status=ok
// SIG undefined FUN_147c44fc2(void)

void FUN_147c44fc2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x778))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45064 FUN_147c45064 body=160 status=ok
// SIG undefined FUN_147c45064(void)

void FUN_147c45064(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x788))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45106 FUN_147c45106 body=160 status=ok
// SIG undefined FUN_147c45106(void)

void FUN_147c45106(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x780))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c451ae FUN_147c451ae body=344 status=ok
// SIG undefined FUN_147c451ae(void)

void FUN_147c451ae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  (**(code **)(*param_1 + 0x768))(param_1,&local_58,local_34,local_38 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45308 FUN_147c45308 body=100 status=ok
// SIG undefined FUN_147c45308(void)

void FUN_147c45308(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x770))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45388 FUN_147c45388 body=100 status=ok
// SIG undefined FUN_147c45388(void)

void FUN_147c45388(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x720))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c453ee FUN_147c453ee body=136 status=ok
// SIG undefined FUN_147c453ee(void)

void FUN_147c453ee(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 == (longlong *)0x0) {
    local_18 = DAT_14c846508;
    local_28 = DAT_14c8464f8;
    uStack_20 = DAT_14c846500;
  }
  else {
    (**(code **)(*plVar1 + 0x680))(plVar1,&local_28);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = (undefined4)local_28;
  param_3[1] = local_28._4_4_;
  param_3[2] = (undefined4)uStack_20;
  param_3[3] = uStack_20._4_4_;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c454a0 FUN_147c454a0 body=25 status=ok
// SIG undefined FUN_147c454a0(void)

void FUN_147c454a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = *(undefined8 *)(param_1 + 0x400);
  uVar1 = *(undefined8 *)(param_1 + 0x3f8);
  *param_2 = *(undefined8 *)(param_1 + 0x3f0);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 147c454ba FUN_147c454ba body=38 status=ok
// SIG undefined FUN_147c454ba(void)

void FUN_147c454ba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1410b7fb6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c454e0 FUN_147c454e0 body=181 status=ok
// SIG undefined FUN_147c454e0(void)

void FUN_147c454e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
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
  if (local_20 != (longlong *)0x0) {
    lVar1 = (**(code **)(*local_20 + 0x640))();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      goto LAB_147c45554;
    }
  }
  uVar2 = 0;
LAB_147c45554:
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45596 FUN_147c45596 body=42 status=ok
// SIG undefined FUN_147c45596(void)

void FUN_147c45596(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x638))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c455c0 FUN_147c455c0 body=108 status=ok
// SIG undefined FUN_147c455c0(void)

void FUN_147c455c0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4562e FUN_147c4562e body=100 status=ok
// SIG undefined FUN_147c4562e(void)

void FUN_147c4562e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x408);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 147c456ba FUN_147c456ba body=86 status=ok
// SIG undefined FUN_147c456ba(void)

void FUN_147c456ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c45712(param_1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45712 FUN_147c45712 body=103 status=ok
// SIG undefined FUN_147c45712(void)

undefined4 * FUN_147c45712(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    lVar3 = FUN_144a75eb4();
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_147c9996e(lVar1,param_2);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 147c4577e FUN_147c4577e body=41 status=ok
// SIG undefined FUN_147c4577e(void)

void FUN_147c4577e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x708))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c457ac FUN_147c457ac body=121 status=ok
// SIG undefined FUN_147c457ac(void)

void FUN_147c457ac(longlong param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    bVar3 = 0;
    goto LAB_147c45814;
  }
  lVar4 = FUN_144a75eb4();
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 == 0) {
LAB_147c45821:
    bVar5 = false;
  }
  else {
    bVar5 = false;
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), bVar5 = false, lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_147c45821;
      bVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30;
    }
  }
  bVar3 = lVar1 != 0 & bVar5;
LAB_147c45814:
  *param_3 = bVar3;
  return;
}



// FUNCTION 147c4582a FUN_147c4582a body=56 status=ok
// SIG undefined FUN_147c4582a(void)

void FUN_147c4582a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_144b1f538();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(byte *)(lVar1 + 0x39a) & 8) == 0;
  }
  *param_3 = bVar2;
  return;
}



// FUNCTION 147c45866 FUN_147c45866 body=41 status=ok
// SIG undefined FUN_147c45866(void)

void FUN_147c45866(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x700))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c458b8 FUN_147c458b8 body=41 status=ok
// SIG undefined FUN_147c458b8(void)

void FUN_147c458b8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x790))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c458e6 FUN_147c458e6 body=41 status=ok
// SIG undefined FUN_147c458e6(void)

void FUN_147c458e6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x688))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c4591a FUN_147c4591a body=529 status=ok
// SIG undefined FUN_147c4591a(void)

void FUN_147c4591a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar2 = local_5c;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = local_68;
  if (local_68 == 0) {
    lVar3 = param_1;
  }
  if (iVar2 == 0) {
    local_28 = local_48;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 0x1c8);
    if (lVar1 != 0) {
      local_38 = *(undefined8 *)(lVar1 + 0x260);
      uStack_30 = *(undefined8 *)(lVar1 + 0x268);
      local_28 = *(undefined8 *)(lVar1 + 0x270);
      goto LAB_147c45ad7;
    }
    local_28 = DAT_14c8464f0;
    local_58 = (undefined4)DAT_14c8464e0;
    uStack_54 = DAT_14c8464e0._4_4_;
    uStack_50 = (undefined4)DAT_14c8464e8;
    uStack_4c = DAT_14c8464e8._4_4_;
  }
  local_38 = CONCAT44(uStack_54,local_58);
  uStack_30 = CONCAT44(uStack_4c,uStack_50);
LAB_147c45ad7:
  local_70 = 0;
  local_78 = 0;
  FUN_1478b8698(lVar3,local_3c,param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45b2c FUN_147c45b2c body=92 status=ok
// SIG undefined FUN_147c45b2c(void)

void FUN_147c45b2c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf6478);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45b94 FUN_147c45b94 body=304 status=ok
// SIG undefined FUN_147c45b94(void)

void FUN_147c45b94(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) || ((iVar1 != 0) != SUB41((*(uint *)(param_1 + 0x73) & 8) >> 3,0))) {
    *(uint *)(param_1 + 0x73) = (*(uint *)(param_1 + 0x73) & 0xfffffff7) + (uint)(iVar1 != 0) * 8;
    (**(code **)(*param_1 + 0x6a0))(param_1);
    FUN_1478c9862(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c45d0e FUN_147c45d0e body=809 status=ok
// SIG undefined FUN_147c45d0e(void)

uint FUN_147c45d0e(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  double *pdVar14;
  float fVar15;
  double extraout_XMM0_Qa;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_d8);
  plVar13 = *(longlong **)(param_1 + 0x3c0);
  local_60 = dVar9;
  if (plVar13 == (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      local_a8 = DAT_14c846508;
      uVar11 = 0;
      local_b8 = DAT_14c8464f8;
      dStack_b0 = DAT_14c846500;
    }
    else {
      dVar16 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      uVar11 = 0;
      local_98 = dVar16;
      dStack_90 = dVar5;
      local_88 = dVar6;
      dStack_80 = dVar7;
      if (pdVar10 == (double *)0x0) {
        uVar11 = 0x40;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar10[4] = DAT_14c8464f8;
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar16 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar12 = movmskpd(uVar11,auVar3);
      uVar11 = 0;
      if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
        pdVar14 = &local_98;
        pdVar10[2] = local_88;
        pdVar10[3] = dStack_80;
        *pdVar10 = local_98;
        pdVar10[1] = dStack_90;
        FUN_1448052ee(pdVar14,&local_78);
        uVar11 = SUB84(pdVar14,0);
        pdVar10[6] = local_68;
        pdVar10[4] = local_78;
        pdVar10[5] = dStack_70;
      }
      local_a8 = pdVar10[6];
      local_b8 = pdVar10[4];
      dStack_b0 = pdVar10[5];
    }
  }
  else {
    (**(code **)(*plVar13 + 0x6c0))(plVar13,&local_b8);
    uVar11 = SUB84(plVar13,0);
  }
  dVar9 = (double)FUN_144719204(dStack_b0,0x4076800000000000);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  dVar16 = DAT_14c846500;
  if (lVar1 != 0) {
    dVar16 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar10 = *(double **)(lVar1 + 0x228);
    local_98 = dVar16;
    dStack_90 = dVar5;
    local_88 = dVar6;
    dStack_80 = dVar7;
    if (pdVar10 == (double *)0x0) {
      uVar11 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = DAT_14c846500;
      pdVar10[4] = DAT_14c8464f8;
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar10;
    }
    auVar17._8_8_ = -(ulonglong)(dVar7 != pdVar10[3]);
    auVar17._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
    auVar4._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
    auVar4._0_8_ = -(ulonglong)(dVar16 != *pdVar10);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar4);
    uVar12 = movmskpd(uVar11,auVar17);
    if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
      pdVar10[2] = local_88;
      pdVar10[3] = dStack_80;
      *pdVar10 = local_98;
      pdVar10[1] = dStack_90;
      FUN_1448052ee(&local_98,&local_78);
      pdVar10[6] = local_68;
      pdVar10[4] = local_78;
      pdVar10[5] = dStack_70;
    }
    dVar16 = pdVar10[5];
  }
  dVar9 = (double)FUN_144719204(dVar16,0x4076800000000000);
  fVar15 = ABS((float)((double)(~-(ulonglong)(extraout_XMM0_Qa < 0.0) & (ulonglong)extraout_XMM0_Qa
                               | (ulonglong)(extraout_XMM0_Qa + 360.0) &
                                 -(ulonglong)(extraout_XMM0_Qa < 0.0)) -
                      (double)(~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar9 |
                              (ulonglong)(dVar9 + 360.0) & -(ulonglong)(dVar9 < 0.0))));
  if (((ulonglong)local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return -(uint)(fVar15 < *(float *)(param_1 + 0x3d0) ||
                360.0 - *(float *)(param_1 + 0x3d0) < fVar15) & 0xffffff01;
}



// FUNCTION 147c46038 FUN_147c46038 body=200 status=ok
// SIG undefined FUN_147c46038(void)

void FUN_147c46038(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  plVar1 = *(longlong **)(lVar2 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    plVar3 = (longlong *)plVar1[0x22];
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      plVar3 = (longlong *)plVar1[0x22];
    }
    (**(code **)(*plVar3 + 0x528))(plVar3,local_1c,&local_20);
  }
  else {
    (**(code **)(*plVar1 + 0x540))(plVar1);
    (**(code **)(*plVar1 + 0x538))(plVar1,local_1c,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20);
}



// FUNCTION 147c46102 FUN_147c46102 body=200 status=ok
// SIG undefined FUN_147c46102(void)

void FUN_147c46102(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  plVar1 = *(longlong **)(lVar2 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    plVar3 = (longlong *)plVar1[0x22];
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      plVar3 = (longlong *)plVar1[0x22];
    }
    (**(code **)(*plVar3 + 0x528))(plVar3,&local_1c,local_20);
  }
  else {
    (**(code **)(*plVar1 + 0x540))(plVar1);
    (**(code **)(*plVar1 + 0x538))(plVar1,&local_1c,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_1c);
}



// FUNCTION 147c461cc FUN_147c461cc body=46 status=ok
// SIG undefined FUN_147c461cc(void)

void FUN_147c461cc(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (param_2 * 256.0) / 360.0;
  *(char *)(param_1 + 0x3a2) = (char)((ulonglong)(longlong)ROUND(fVar1 + fVar1 + 0.5) >> 1);
  return;
}



// FUNCTION 147c461fa FUN_147c461fa body=50 status=ok
// SIG undefined FUN_147c461fa(void)

longlong FUN_147c461fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_147c4622c();
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      lVar1 = FUN_147c4622c();
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 147c4622c FUN_147c4622c body=102 status=ok
// SIG undefined FUN_147c4622c(void)

void FUN_147c4622c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a70d96();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c462c6 FUN_147c462c6 body=77 status=ok
// SIG undefined FUN_147c462c6(void)

undefined8 FUN_147c462c6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x700))();
  if ((cVar2 != '\0') && (lVar1 = param_1[0x78], lVar1 != 0)) {
    lVar3 = FUN_144a75eb4();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147c46314 FUN_147c46314 body=701 status=ok
// SIG undefined FUN_147c46314(void)

void FUN_147c46314(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [24];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  byte local_a4;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x3c0) != 0) goto LAB_147c46350;
  iVar7 = FUN_14487fd02();
  if ((iVar7 == 3) || (lVar11 = *(longlong *)(param_1 + 0x3a8), lVar11 == 0)) goto LAB_147c46350;
  lVar8 = FUN_14490fee6();
  if ((lVar8 == 0) ||
     (((*(int *)(lVar11 + 0x38) < *(int *)(lVar8 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) || (*(longlong *)(param_1 + 0x3a8) == 0)))) goto LAB_147c46350;
  FUN_1411371f6(local_d8);
  local_c0 = *(undefined8 *)(param_1 + 0x1b0);
  local_a8 = 1;
  local_b8 = FUN_144a79cc8(param_1);
  local_a4 = local_a4 | 0x40;
  lVar11 = param_1;
  dVar9 = (double)FUN_1447210f0();
  uVar13 = (undefined4)lVar11;
  lVar11 = *(longlong *)(param_1 + 0x1c8);
  if (lVar11 == 0) {
    local_e8 = DAT_14c846508;
    local_f8 = DAT_14c8464f8;
    dStack_f0 = DAT_14c846500;
LAB_147c464e4:
    local_108 = (double)DAT_14c8464f0;
    local_118 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_110 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    dVar3 = *(double *)(lVar11 + 0x240);
    dVar4 = *(double *)(lVar11 + 0x248);
    dVar5 = *(double *)(lVar11 + 0x250);
    dVar6 = *(double *)(lVar11 + 600);
    pdVar12 = *(double **)(lVar11 + 0x228);
    dVar10 = dVar9;
    local_118 = dVar3;
    uStack_110 = dVar4;
    local_108 = dVar5;
    uStack_100 = dVar6;
    if (pdVar12 == (double *)0x0) {
      uVar13 = 0x40;
      pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar12 = DAT_14c8463d0;
      pdVar12[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar12[2] = DAT_14c8463e0;
      pdVar12[3] = dVar10;
      dVar10 = DAT_14c846500;
      pdVar12[4] = DAT_14c8464f8;
      pdVar12[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar12[6] = DAT_14c846508;
      *(double **)(lVar11 + 0x228) = pdVar12;
    }
    auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar12[1]);
    auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar12);
    auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar12[1]) >> 0x20);
    iVar7 = movmskpd(SUB84(dVar10,0),auVar1);
    auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[3]);
    auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[3]) >> 0x20);
    uVar14 = movmskpd(uVar13,auVar2);
    if ((uVar14 & 0x3fffffff) != 0 || iVar7 != 0) {
      *(undefined4 *)(pdVar12 + 2) = (undefined4)local_108;
      *(undefined4 *)((longlong)pdVar12 + 0x14) = local_108._4_4_;
      *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_100._4_4_;
      *(undefined4 *)pdVar12 = (undefined4)local_118;
      *(undefined4 *)((longlong)pdVar12 + 4) = local_118._4_4_;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_110;
      *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_110._4_4_;
      FUN_1448052ee(&local_118,&local_f8);
      pdVar12[6] = local_e8;
      pdVar12[4] = local_f8;
      pdVar12[5] = dStack_f0;
    }
    local_e8 = pdVar12[6];
    local_f8 = pdVar12[4];
    dStack_f0 = pdVar12[5];
    lVar11 = *(longlong *)(param_1 + 0x1c8);
    if (lVar11 == 0) goto LAB_147c464e4;
    local_118 = *(double *)(lVar11 + 0x260);
    uStack_110 = *(double *)(lVar11 + 0x268);
    local_108 = *(double *)(lVar11 + 0x270);
  }
  lVar11 = *(longlong *)(param_1 + 0x3a8);
  if (lVar11 == 0) {
LAB_147c4652a:
    uVar15 = 0;
  }
  else {
    lVar8 = FUN_14490fee6();
    if (((lVar8 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_147c4652a;
    uVar15 = *(undefined8 *)(param_1 + 0x3a8);
  }
  local_128 = local_d8;
  lVar11 = FUN_141137228(dVar9,uVar15,&local_118,&local_f8);
  if (lVar11 != 0) {
    FUN_1414b167c(lVar11,param_1);
  }
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
LAB_147c46350:
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c465d2 FUN_147c465d2 body=98 status=ok
// SIG undefined FUN_147c465d2(void)

void FUN_147c465d2(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[0x2f] == '\x03') {
    FUN_140c7ce82(param_1,1);
  }
  FUN_1405e47c6(param_1,0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x638))(param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x490))(plVar1);
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
  }
  FUN_14576edb8(param_1);
  return;
}



// FUNCTION 147c46634 FUN_147c46634 body=73 status=ok
// SIG undefined FUN_147c46634(void)

bool FUN_147c46634(longlong param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x178) < 3) || ((*(byte *)(param_1 + 0x62) & 4) == 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_1447210f0();
    bVar1 = param_2 != 0.0 && *(longlong *)(lVar2 + 0x170) != 0;
  }
  return bVar1;
}



// FUNCTION 147c4667e FUN_147c4667e body=158 status=ok
// SIG undefined FUN_147c4667e(void)

undefined8
FUN_147c4667e(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x6a8))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = FUN_1478b8812(param_1,param_2,param_3,param_4,param_5);
    if ((param_4 != 0) &&
       ((((float)uVar2 != 0.0 || (NAN((float)uVar2))) && (param_1[0x78] != param_4)))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_4);
      }
      param_1[0x77] = param_4;
    }
  }
  return uVar2;
}



// FUNCTION 147c4672c FUN_147c4672c body=104 status=ok
// SIG undefined FUN_147c4672c(void)

void FUN_147c4672c(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if ((((param_2 != 0.0) || (NAN(param_2))) &&
      (plVar1 = *(longlong **)(param_1 + 0x3c0), plVar1 != (longlong *)0x0)) &&
     ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c46786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0xc88))
                (*(longlong **)(param_1 + 0x3c0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147c46794 FUN_147c46794 body=104 status=ok
// SIG undefined FUN_147c46794(void)

void FUN_147c46794(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if ((((param_2 != 0.0) || (NAN(param_2))) &&
      (plVar1 = *(longlong **)(param_1 + 0x3c0), plVar1 != (longlong *)0x0)) &&
     ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c467ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0xc90))
                (*(longlong **)(param_1 + 0x3c0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147c467fc FUN_147c467fc body=104 status=ok
// SIG undefined FUN_147c467fc(void)

void FUN_147c467fc(longlong param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if ((((param_2 != 0.0) || (NAN(param_2))) &&
      (plVar1 = *(longlong **)(param_1 + 0x3c0), plVar1 != (longlong *)0x0)) &&
     ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147c46856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0xc98))
                (*(longlong **)(param_1 + 0x3c0),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147c4686e FUN_147c4686e body=53 status=ok
// SIG undefined FUN_147c4686e(void)

void FUN_147c4686e(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x638))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c4688f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a0))(plVar1);
    return;
  }
  FUN_1478b847a(param_1);
  return;
}



// FUNCTION 147c468a6 FUN_147c468a6 body=73 status=ok
// SIG undefined FUN_147c468a6(void)

void FUN_147c468a6(longlong *param_1)

{
  if ((param_1[0x78] != 0) && (*(longlong *)(param_1[0x78] + 0x398) == 0)) {
    FUN_1478b8668(param_1);
    return;
  }
  (**(code **)(*param_1 + 0x738))(param_1);
  FUN_140aeefbc(param_1,0,1);
  return;
}



// FUNCTION 147c468f0 FUN_147c468f0 body=50 status=ok
// SIG undefined FUN_147c468f0(void)

undefined8 FUN_147c468f0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x3b0) == 0) {
    FUN_1478b932e(param_1,param_2);
  }
  else {
    FUN_141220240(*(longlong *)(param_1 + 0x3b0),param_2);
  }
  return param_2;
}



// FUNCTION 147c46922 FUN_147c46922 body=518 status=ok
// SIG undefined FUN_147c46922(void)

void FUN_147c46922(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60 [2];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_2 + 0xa8;
  plVar2 = *(longlong **)(param_1 + 0x3b0);
  if (plVar2 == (longlong *)0x0) {
    local_4c = 0;
    FUN_140056680(local_60,L"NO PlayerState");
    FUN_147d8f316(lVar1,local_60,&local_4c);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_68 = param_5;
    (**(code **)(*plVar2 + 0x5a0))(plVar2,param_2,param_3,param_4);
  }
  local_68 = param_5;
  FUN_1478b9376(param_1,param_2,param_3,param_4);
  *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar3 = 0;
    do {
      if (*(ulonglong *)(*param_3 + lVar3) == (ulonglong)DAT_14c892cd4) {
        local_4c = 0;
        FUN_140002266(local_60,L"BaseEyeHeight %f",(double)*(float *)(param_1 + 0x39c));
        FUN_147d8f316(lVar1,local_60,&local_4c);
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)param_3[1] * 8 != lVar3);
  }
  plVar2 = *(longlong **)(param_1 + 0x3c0);
  if (plVar2 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xdc) = 0;
    *(undefined4 *)(param_2 + 0xe0) = 0;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    local_4c = 0;
    FUN_140056680(local_60,L"NO Controller");
    FUN_147d8f316(lVar1,local_60,&local_4c);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_68 = param_5;
    (**(code **)(*plVar2 + 0x5a0))(plVar2,param_2,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c46b2a FUN_147c46b2a body=443 status=ok
// SIG undefined FUN_147c46b2a(void)

void FUN_147c46b2a(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar8 = (double)(ulonglong)*(uint *)(param_1 + 0x398);
  if ((*(uint *)(param_1 + 0x398) & 7) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      uVar14 = SUB84(DAT_14c846500,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
      uVar12 = SUB84(DAT_14c846508,0);
      uVar13 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      dVar16 = DAT_14c8464f8;
    }
    else {
      dVar16 = *(double *)(lVar1 + 0x240);
      dVar4 = *(double *)(lVar1 + 0x248);
      dVar5 = *(double *)(lVar1 + 0x250);
      dVar6 = *(double *)(lVar1 + 600);
      pdVar9 = *(double **)(lVar1 + 0x228);
      lVar11 = param_1;
      local_88 = dVar16;
      uStack_80 = dVar4;
      local_78 = dVar5;
      uStack_70 = dVar6;
      if (pdVar9 == (double *)0x0) {
        lVar11 = 0x40;
        pdVar9 = (double *)FUN_14001cc68(0x40,0x10);
        dVar8 = DAT_14c8463d8;
        *pdVar9 = DAT_14c8463d0;
        pdVar9[1] = dVar8;
        dVar8 = DAT_14c8463e8;
        pdVar9[2] = DAT_14c8463e0;
        pdVar9[3] = dVar8;
        dVar8 = DAT_14c846500;
        pdVar9[4] = DAT_14c8464f8;
        pdVar9[5] = dVar8;
        dVar8 = DAT_14c846508;
        pdVar9[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar9;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar4 != pdVar9[1]);
      auVar2._0_8_ = -(ulonglong)(dVar16 != *pdVar9);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar9[1]) >> 0x20);
      iVar7 = movmskpd(SUB84(dVar8,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar9[3]);
      auVar3._0_8_ = -(ulonglong)(dVar5 != pdVar9[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar9[3]) >> 0x20);
      uVar10 = movmskpd((int)lVar11,auVar3);
      if ((uVar10 & 0x3fffffff) != 0 || iVar7 != 0) {
        *(undefined4 *)(pdVar9 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar9 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar9 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar9 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar9 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar9 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar9 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar9 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar9[6] = local_58;
        pdVar9[4] = local_68;
        pdVar9[5] = dStack_60;
      }
      uVar14 = SUB84(pdVar9[5],0);
      uVar15 = (undefined4)((ulonglong)pdVar9[5] >> 0x20);
      uVar12 = SUB84(pdVar9[6],0);
      uVar13 = (undefined4)((ulonglong)pdVar9[6] >> 0x20);
      dVar8 = (double)(ulonglong)*(uint *)(param_1 + 0x398);
      dVar16 = pdVar9[4];
    }
    if (((ulonglong)dVar8 & 1) == 0) {
      *param_2 = dVar16;
      dVar8 = (double)(ulonglong)*(uint *)(param_1 + 0x398);
    }
    if (((ulonglong)dVar8 & 2) == 0) {
      param_2[1] = (double)CONCAT44(uVar15,uVar14);
      dVar8 = (double)(ulonglong)*(uint *)(param_1 + 0x398);
    }
    if (((ulonglong)dVar8 & 4) == 0) {
      param_2[2] = (double)CONCAT44(uVar13,uVar12);
    }
    local_98 = param_2[2];
    local_a8 = *(undefined4 *)param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = *(undefined4 *)(param_2 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_1417b27fe(param_1,&local_a8,0);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c46d46 FUN_147c46d46 body=988 status=ok
// SIG undefined FUN_147c46d46(void)

void FUN_147c46d46(longlong *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined1 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pdVar12 = &local_88;
  FUN_140496eb6(pdVar12,param_1 + 0x22,param_1);
  uVar16 = SUB84(pdVar12,0);
  lVar8 = param_1[0x39];
  if (lVar8 == 0) {
    pdVar12 = &DAT_14c8464e0;
    uVar15 = SUB84(DAT_14c8464f0,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    pdVar12 = (double *)(lVar8 + 0x260);
    uVar15 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
  }
  if ((((local_88 == *pdVar12) && (!NAN(local_88) && !NAN(*pdVar12))) && (dStack_80 == pdVar12[1]))
     && (!NAN(dStack_80) && !NAN(pdVar12[1]))) {
    if ((local_78 == (double)CONCAT44(uVar17,uVar15)) &&
       (!NAN(local_78) && !NAN((double)CONCAT44(uVar17,uVar15)))) {
      if (lVar8 == 0) {
        uVar16 = SUB84(DAT_14c846508,0);
        uVar15 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
        dVar18 = DAT_14c846500;
        dVar19 = DAT_14c8464f8;
      }
      else {
        dVar18 = *(double *)(lVar8 + 0x240);
        dVar19 = *(double *)(lVar8 + 0x248);
        dVar4 = *(double *)(lVar8 + 0x250);
        dVar5 = *(double *)(lVar8 + 600);
        pdVar13 = *(double **)(lVar8 + 0x228);
        local_68 = dVar18;
        uStack_60 = dVar19;
        local_58 = dVar4;
        dStack_50 = dVar5;
        if (pdVar13 == (double *)0x0) {
          uVar16 = 0x40;
          pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
          dVar6 = DAT_14c8463d8;
          *pdVar13 = DAT_14c8463d0;
          pdVar13[1] = dVar6;
          dVar6 = DAT_14c8463e8;
          pdVar13[2] = DAT_14c8463e0;
          pdVar13[3] = dVar6;
          dVar6 = DAT_14c846500;
          pdVar13[4] = DAT_14c8464f8;
          pdVar13[5] = dVar6;
          pdVar12 = DAT_14c846508;
          pdVar13[6] = (double)DAT_14c846508;
          *(double **)(lVar8 + 0x228) = pdVar13;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar19 != pdVar13[1]);
        auVar2._0_8_ = -(ulonglong)(dVar18 != *pdVar13);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar13[1]) >> 0x20);
        iVar7 = movmskpd((int)pdVar12,auVar2);
        auVar3._8_4_ = (int)-(ulonglong)(dVar5 != pdVar13[3]);
        auVar3._0_8_ = -(ulonglong)(dVar4 != pdVar13[2]);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar13[3]) >> 0x20);
        uVar14 = movmskpd(uVar16,auVar3);
        if ((uVar14 & 0x3fffffff) != 0 || iVar7 != 0) {
          pdVar13[2] = local_58;
          pdVar13[3] = dStack_50;
          *(undefined4 *)pdVar13 = (undefined4)local_68;
          *(undefined4 *)((longlong)pdVar13 + 4) = local_68._4_4_;
          *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_60._4_4_;
          FUN_1448052ee(&local_68,&local_f8);
          pdVar13[6] = local_e8;
          pdVar13[4] = local_f8;
          pdVar13[5] = dStack_f0;
        }
        uVar16 = SUB84(pdVar13[6],0);
        uVar15 = (undefined4)((ulonglong)pdVar13[6] >> 0x20);
        dVar18 = pdVar13[5];
        dVar19 = pdVar13[4];
      }
      if (((double)param_1[0x25] == dVar19) && (!NAN((double)param_1[0x25]) && !NAN(dVar19))) {
        if (((double)param_1[0x26] == dVar18) && (!NAN((double)param_1[0x26]) && !NAN(dVar18))) {
          if (((double)param_1[0x27] == (double)CONCAT44(uVar15,uVar16)) &&
             (!NAN((double)param_1[0x27]) && !NAN((double)CONCAT44(uVar15,uVar16)))) {
            fVar1 = *(float *)(param_1 + 0x30);
            lVar8 = FUN_1447210f0(param_1);
            if ((*(double *)(lVar8 + 0x6d0) != (double)fVar1) ||
               (NAN(*(double *)(lVar8 + 0x6d0)) || NAN((double)fVar1))) goto LAB_147c47026;
          }
        }
      }
    }
  }
  if ((char)param_1[0x2f] == '\x01') {
    lVar9 = FUN_1402020be(param_1);
    *(double *)(lVar9 + 0x40) = *(double *)(lVar9 + 0x40) + 0.009999999776482582;
    lVar8 = param_1[0x39];
    if (lVar8 == 0) {
      local_78 = DAT_14c8464f0;
      local_88 = DAT_14c8464e0;
      dStack_80 = DAT_14c8464e8;
      local_68 = 0.0;
      uStack_60 = 0.0;
      local_58 = 0.0;
      dStack_50 = 1.0;
    }
    else {
      local_88 = *(double *)(lVar8 + 0x260);
      dStack_80 = *(double *)(lVar8 + 0x268);
      local_78 = *(double *)(lVar8 + 0x270);
      local_68 = *(double *)(lVar8 + 0x240);
      uStack_60 = *(double *)(lVar8 + 0x248);
      local_58 = *(double *)(lVar8 + 0x250);
      dStack_50 = *(double *)(lVar8 + 600);
    }
    FUN_140496eb6(&local_a0,lVar9 + 0x30,param_1);
    local_a8 = *(undefined8 *)(lVar9 + 0x58);
    local_b8 = *(undefined8 *)(lVar9 + 0x48);
    uStack_b0 = *(undefined8 *)(lVar9 + 0x50);
    local_d8 = local_a0;
    uStack_d4 = uStack_9c;
    uStack_d0 = uStack_98;
    uStack_cc = uStack_94;
    local_c8 = local_90;
    local_100 = 0;
    local_108 = (double *)0x0;
    FUN_1407fd818(param_1,&local_d8,&local_b8,0);
    lVar8 = (**(code **)(*param_1 + 0x638))(param_1);
    if (lVar8 != 0) {
      uVar10 = FUN_1406f6b90();
      plVar11 = (longlong *)FUN_144718840(lVar8,uVar10);
      if (plVar11 != (longlong *)0x0) {
        FUN_144a7484c(lVar9 + 0x48,&local_f8);
        local_108 = &local_f8;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_88,&local_68,&local_a0);
      }
    }
  }
LAB_147c47026:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47124 FUN_147c47124 body=66 status=ok
// SIG undefined FUN_147c47124(void)

undefined * FUN_147c47124(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x390) + 0x638))(param_1 + -0x390);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c47156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(**(code **)(*(longlong *)(lVar1 + 0x178) + 0x38))(lVar1 + 0x178);
    return puVar2;
  }
  return &DAT_14cacb108;
}



// FUNCTION 147c47166 FUN_147c47166 body=92 status=ok
// SIG undefined FUN_147c47166(void)

longlong FUN_147c47166(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    lVar3 = FUN_144a75eb4();
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 147c471c6 FUN_147c471c6 body=135 status=ok
// SIG undefined FUN_147c471c6(void)

void FUN_147c471c6(longlong param_1,longlong *param_2)

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
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(plVar1 + 5) & 5) == 0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,param_1 + 0x30);
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4724e FUN_147c4724e body=144 status=ok
// SIG undefined FUN_147c4724e(void)

void FUN_147c4724e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((*(byte *)(param_2 + 0x28) & 5) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c472f6 FUN_147c472f6 body=159 status=ok
// SIG undefined FUN_147c472f6(void)

undefined8
FUN_147c472f6(longlong param_1,undefined8 param_2,longlong param_3,char param_4,undefined8 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  
  *(char *)(param_1 + 0xaa) = param_4;
  if (param_4 == '\0') {
LAB_147c4737e:
    uVar5 = 0;
  }
  else {
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_5 + 1) != 0) {
      puVar3 = (undefined2 *)*param_5;
    }
    lVar6 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
      uVar7 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)&DAT_149dfb77a + lVar6);
      uVar4 = (ulonglong)uVar2;
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) goto LAB_147c47369;
LAB_147c47340:
      lVar6 = lVar6 + 2;
    }
    if ((uVar2 | uVar1) < 0x80) {
      uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar4 = (ulonglong)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147c47340;
    }
    if (uVar7 != (uint)uVar4) goto LAB_147c4737e;
LAB_147c47369:
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
    if ((*(char *)(param_1 + 0xc0) == '\x01') && (*(longlong *)(param_3 + 0x360) != 0)) {
      FUN_147dab7e4();
    }
  }
  return uVar5;
}



// FUNCTION 147c473a0 FUN_147c473a0 body=12 status=ok
// SIG undefined FUN_147c473a0(void)

undefined4 FUN_147c473a0(void)

{
  return *DAT_14caf6550;
}



// FUNCTION 147c473ac FUN_147c473ac body=34 status=ok
// SIG undefined FUN_147c473ac(void)

undefined8 * FUN_147c473ac(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a83b10(param_2,uVar1);
  return param_2;
}



// FUNCTION 147c473ce FUN_147c473ce body=38 status=ok
// SIG undefined FUN_147c473ce(void)

void FUN_147c473ce(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147c473f4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c473f4 FUN_147c473f4 body=134 status=ok
// SIG undefined FUN_147c473f4(void)

longlong FUN_147c473f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_14585979a();
  }
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x110);
    if ((((lVar1 == 0) || (lVar2 = FUN_14585979a(), lVar2 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x110);
    }
    lVar1 = plVar3[0x22];
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar1 = plVar3[0x22];
    }
    return lVar1;
  }
  return *(longlong *)(param_1 + 0x128);
}



// FUNCTION 147c47496 FUN_147c47496 body=160 status=ok
// SIG undefined FUN_147c47496(void)

void FUN_147c47496(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x478))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4753a FUN_147c4753a body=126 status=ok
// SIG undefined FUN_147c4753a(void)

longlong FUN_147c4753a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      lVar2 = FUN_144a7cbb2();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(lVar1 + 0x3c0) != 0)) {
        FUN_144a75eb4();
      }
    }
  }
  return 0;
}



// FUNCTION 147c47640 FUN_147c47640 body=230 status=ok
// SIG undefined FUN_147c47640(void)

undefined4 FUN_147c47640(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*param_2 != 0) {
    lVar3 = *(longlong *)(*param_2 + 0x40);
    uVar1 = *(uint *)(lVar3 + 0x88);
    uVar7 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar7);
    }
    *(undefined4 *)(param_1 + 0x208) = 0;
    if (*(int *)(param_1 + 0x20c) < (int)uVar1) {
      FUN_140e4bc70(param_1,uVar1);
    }
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar3 + 0x80);
        if (*(longlong *)(lVar3 + 0x80) == 0) {
          lVar5 = lVar3 + 0x78;
        }
        uVar4 = *(undefined8 *)(lVar5 + uVar8 * 8);
        lVar5 = *param_2;
        iVar2 = *(int *)(param_1 + 0x208);
        *(uint *)(param_1 + 0x208) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x20c) < iVar2 + 1U) {
          FUN_146ef97fe(param_1,iVar2);
        }
        lVar6 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar6 = param_1;
        }
        *(undefined8 *)(lVar6 + (longlong)iVar2 * 0x10) = uVar4;
        *(longlong *)(lVar6 + 8 + (longlong)iVar2 * 0x10) = lVar5;
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
  }
  return *(undefined4 *)(param_1 + 0x208);
}



// FUNCTION 147c47728 FUN_147c47728 body=209 status=ok
// SIG undefined FUN_147c47728(void)

void FUN_147c47728(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0x20) {
    FUN_144760bde(plVar1,0x20);
  }
  lVar7 = 0;
  lVar6 = FUN_144a9f2d6();
  do {
    cVar2 = *(char *)(param_1 + lVar7);
    if (((cVar2 != (&DAT_14cad0ed0)[lVar7]) && ((int)lVar7 < *(int *)(lVar6 + 0x148))) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x140) + lVar7 * 8), lVar4 != 0)) {
      iVar3 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
        FUN_1402ba360(plVar1,iVar3);
      }
      lVar5 = *plVar1;
      *(longlong *)(lVar5 + (longlong)iVar3 * 0xc) = lVar4;
      *(char *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = cVar2;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    FUN_144760bde(plVar1);
    return;
  }
  return;
}



// FUNCTION 147c477fa FUN_147c477fa body=111 status=ok
// SIG undefined FUN_147c477fa(void)

void FUN_147c477fa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda();
  if (cVar1 != '\0') {
    local_20 = &local_38;
    local_28 = FUN_14361a722;
    local_38 = param_1;
    local_30 = param_2;
    FUN_144966906(param_1 + 0x138);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4786a FUN_147c4786a body=53 status=ok
// SIG undefined FUN_147c4786a(void)

undefined8 * FUN_147c4786a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_143605db2(0,*(undefined8 *)(param_1 + 0x140),param_2,param_3,*(undefined8 *)(param_1 + 0x148))
  ;
  return param_2;
}



// FUNCTION 147c478a0 FUN_147c478a0 body=8 status=ok
// SIG undefined FUN_147c478a0(void)

void FUN_147c478a0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3a) = param_2;
  FUN_14034b5ee();
  return;
}



// FUNCTION 147c478a8 FUN_147c478a8 body=363 status=ok
// SIG undefined FUN_147c478a8(void)

undefined8 FUN_147c478a8(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_188 [40];
  code *local_160;
  undefined8 **local_158;
  undefined8 **local_150;
  longlong *local_148;
  undefined8 local_140;
  code *local_138;
  code **local_130;
  undefined8 *local_128;
  longlong local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 local_c8 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [3];
  longlong local_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_50 = param_2;
  cVar1 = FUN_144729dda(param_2);
  if ((cVar1 == '\0') || (*(longlong *)(param_2 + 0x108) == param_1)) {
    uVar2 = 0;
  }
  else {
    local_68[0] = 0;
    local_68[1] = 0;
    local_110 = &local_41;
    local_41 = 0;
    local_118 = &local_42;
    local_42 = 0;
    puVar4 = &DAT_14c846480;
    puVar5 = local_c8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_160 = FUN_1400d78f6;
    local_158 = &local_128;
    local_128 = local_c8;
    local_120 = param_1;
    FUN_1448e6002(param_1 + 0x138,&local_160);
    local_88 = *(undefined4 *)(param_1 + 0x50);
    uStack_84 = *(undefined4 *)(param_1 + 0x54);
    uStack_80 = *(undefined4 *)(param_1 + 0x58);
    uStack_7c = *(undefined4 *)(param_1 + 0x5c);
    local_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = 0;
    FUN_1449437a2(param_3,&local_128,local_c8);
    local_160 = (code *)&local_50;
    local_138 = FUN_14361cd98;
    local_158 = (undefined8 **)param_1;
    local_150 = &local_128;
    local_148 = local_68;
    local_140 = param_3;
    local_130 = &local_160;
    FUN_144966906(param_1 + 0x138);
    FUN_1417e53e4(param_1);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47a14 FUN_147c47a14 body=122 status=ok
// SIG undefined FUN_147c47a14(void)

void FUN_147c47a14(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  code *local_30;
  longlong *local_28;
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_18;
  local_38 = &local_19;
  local_19 = 0;
  local_28 = &local_48;
  local_30 = FUN_14361df8c;
  local_48 = param_1;
  local_18 = param_2;
  FUN_144966906(param_1 + 0x138);
  FUN_1417e53e4(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47a90 FUN_147c47a90 body=146 status=ok
// SIG undefined FUN_147c47a90(void)

void FUN_147c47a90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  longlong *local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_28;
  local_48 = &local_29;
  local_29 = 0;
  local_38 = &local_58;
  local_40 = FUN_14361df8c;
  local_58 = param_1;
  local_28 = param_2;
  FUN_144966906(param_1 + 0x138);
  FUN_1417e53e4(param_1);
  FUN_147c478a8(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47b24 FUN_147c47b24 body=118 status=ok
// SIG undefined FUN_147c47b24(void)

undefined4 * FUN_147c47b24(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  undefined8 local_28;
  code *local_20;
  undefined4 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_18 = &local_30;
  local_20 = FUN_143620404;
  local_30 = param_2;
  local_28 = param_3;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47b9c FUN_147c47b9c body=120 status=ok
// SIG undefined FUN_147c47b9c(void)

undefined8 * FUN_147c47b9c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_28 = &local_38;
  local_30 = FUN_1436204bc;
  local_38 = param_2;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47c16 FUN_147c47c16 body=97 status=ok
// SIG undefined FUN_147c47c16(void)

void FUN_147c47c16(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((*(byte *)(param_2 + 0x3d) & 0x10) != 0) {
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 0x10;
    uVar8 = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_1 + 0x118) = uVar8;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x7c);
  uVar6 = *(undefined4 *)(param_2 + 0x80);
  uVar7 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  FUN_1417bc958(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  FUN_1400bcfd8(param_1);
  return;
}



// FUNCTION 147c47c78 FUN_147c47c78 body=159 status=ok
// SIG undefined FUN_147c47c78(void)

void FUN_147c47c78(longlong param_1,float param_2,undefined1 param_3,char param_4)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  float *local_50;
  float *local_48;
  code *local_40;
  undefined1 **local_38;
  float local_2c;
  float local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_21;
  local_50 = &local_28;
  local_2c = param_2 * 57.295776;
  local_48 = &local_2c;
  local_38 = &local_58;
  local_40 = FUN_143622422;
  local_28 = param_2;
  local_21 = param_3;
  FUN_144966906(param_1 + 0x138);
  *(float *)(param_1 + 0x128) = local_2c;
  if (param_4 != '\0') {
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47d18 FUN_147c47d18 body=102 status=ok
// SIG undefined FUN_147c47d18(void)

void FUN_147c47d18(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 8;
  *(undefined4 *)(param_1 + 0x98) = param_2;
  local_10 = &local_28;
  local_18 = &LAB_1436224c0;
  local_28 = param_1;
  local_20 = param_2;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47d80 FUN_147c47d80 body=290 status=ok
// SIG undefined FUN_147c47d80(void)

void FUN_147c47d80(longlong param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                  ulonglong param_5,undefined8 param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar2 = param_5 < 0xffffffff00000000 && (int)param_5 != -1;
  local_88 = *(longlong *)(param_2 + 4);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x30,8);
  *local_68 = (longlong)&PTR_FUN_14aa1ddc0;
  local_68[3] = local_88;
  *(undefined4 *)(local_68 + 1) = local_98;
  *(undefined4 *)((longlong)local_68 + 0xc) = uStack_94;
  *(undefined4 *)(local_68 + 2) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_8c;
  *(undefined1 *)(local_68 + 4) = param_3;
  *(undefined1 *)((longlong)local_68 + 0x21) = param_4;
  *(bool *)((longlong)local_68 + 0x22) = bVar2;
  local_68[5] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143622504;
  }
  local_a8 = local_78;
  FUN_140f482b4(param_1,param_5,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_6);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47ea4 FUN_147c47ea4 body=96 status=ok
// SIG undefined FUN_147c47ea4(void)

void FUN_147c47ea4(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  longlong *local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_9;
  local_18 = &local_30;
  local_20 = &LAB_143622782;
  local_30 = param_1;
  local_9 = param_2;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c47f06 FUN_147c47f06 body=290 status=ok
// SIG undefined FUN_147c47f06(void)

void FUN_147c47f06(longlong param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
                  ulonglong param_5,undefined8 param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar2 = param_5 < 0xffffffff00000000 && (int)param_5 != -1;
  local_88 = *(longlong *)(param_2 + 4);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x30,8);
  *local_68 = (longlong)&PTR_FUN_14aa1de00;
  local_68[3] = local_88;
  *(undefined4 *)(local_68 + 1) = local_98;
  *(undefined4 *)((longlong)local_68 + 0xc) = uStack_94;
  *(undefined4 *)(local_68 + 2) = uStack_90;
  *(undefined4 *)((longlong)local_68 + 0x14) = uStack_8c;
  *(undefined1 *)(local_68 + 4) = param_3;
  *(undefined1 *)((longlong)local_68 + 0x21) = param_4;
  *(bool *)((longlong)local_68 + 0x22) = bVar2;
  local_68[5] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143622872;
  }
  local_a8 = local_78;
  FUN_140f482b4(param_1,param_5,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2) & 0xffffffff,
                param_6);
  if (local_78[0] != (code *)0x0) {
    plVar1 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar1 = local_58;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4802a FUN_147c4802a body=96 status=ok
// SIG undefined FUN_147c4802a(void)

void FUN_147c4802a(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  longlong *local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_9;
  local_18 = &local_30;
  local_20 = &LAB_143622968;
  local_30 = param_1;
  local_9 = param_2;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4808c FUN_147c4808c body=109 status=ok
// SIG undefined FUN_147c4808c(void)

void FUN_147c4808c(longlong param_1,char param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 8) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf7 | param_2 << 3;
    local_10 = &local_20;
    local_18 = FUN_143622e76;
    local_20 = param_1;
    FUN_144966906(param_1 + 0x138);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c480fa FUN_147c480fa body=117 status=ok
// SIG undefined FUN_147c480fa(void)

void FUN_147c480fa(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  char local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x3b) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0x3b) & 0xf7 | param_2 << 3;
    local_10 = &local_28;
    local_18 = &LAB_143622f2c;
    local_28 = param_1;
    local_20 = param_2;
    FUN_144966906(param_1 + 0x138);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c48170 FUN_147c48170 body=179 status=ok
// SIG undefined FUN_147c48170(void)

void FUN_147c48170(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  longlong *local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_9;
  local_9 = param_7;
  local_38 = &local_a;
  local_a = param_6;
  local_48 = &local_10;
  local_50 = &local_14;
  local_20 = &local_60;
  local_40 = (undefined1 *)&param_5;
  local_28 = FUN_143623068;
  local_60 = param_1;
  local_58 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  FUN_144966906(param_1 + 0x138);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c48224 FUN_147c48224 body=16 status=ok
// SIG undefined FUN_147c48224(void)

byte FUN_147c48224(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 147c48234 FUN_147c48234 body=128 status=ok
// SIG undefined FUN_147c48234(void)

undefined1
FUN_147c48234(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = &local_11;
  local_11 = param_5;
  local_38 = &local_12;
  local_12 = 0;
  local_20 = &local_50;
  local_28 = &LAB_147c63e72;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_4;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c482b5 FUN_147c482b5 body=1948 status=ok
// SIG undefined FUN_147c482b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_147c482b5(undefined1 (*param_1) [16],longlong param_2,double *param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  undefined8 *puVar21;
  ulonglong uVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auStack_3b8 [32];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined8 local_338 [12];
  undefined8 local_2d8 [12];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (*(longlong *)(param_2 + 0x108) != 0) {
    lVar14 = FUN_14479d2ce(*(longlong *)(param_2 + 0x108) + 0x140);
    lVar15 = FUN_14479d2ce(param_2 + 0x140);
    if (lVar15 != 0 && lVar14 != 0) {
      puVar18 = local_2d8;
      puVar19 = (undefined8 *)(lVar14 + 0x240);
      puVar21 = puVar18;
      for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
      }
      puVar19 = (undefined8 *)(lVar15 + 0x240);
      puVar21 = local_338;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar21 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar21 = puVar21 + 1;
      }
      uVar12 = FUN_1449437a2(puVar18,&local_398);
      dVar2 = *param_3;
      dVar27 = param_3[1];
      dVar32 = param_3[2];
      dVar33 = param_3[3];
      dVar7 = param_3[4];
      dVar8 = param_3[5];
      dVar9 = param_3[6];
      dVar41 = param_3[7];
      auVar40 = *(undefined1 (*) [16])(param_2 + 0x50);
      dVar23 = auVar40._0_8_;
      dVar26 = auVar40._8_8_;
      dVar28 = *(double *)(param_2 + 0x60);
      *(undefined8 *)param_1[2] = 0;
      *(undefined8 *)(param_1[2] + 8) = 0;
      auVar38 = _DAT_149934d80;
      dVar30 = local_358._0_8_;
      dVar34 = local_358._8_8_;
      dVar1 = local_348._0_8_;
      auVar36 = minpd(local_358,auVar40);
      auVar40._8_8_ = 0;
      auVar40._0_8_ = dVar28;
      auVar40 = minpd(local_348,auVar40);
      auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
      auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
      iVar13 = movmskpd(uVar12,auVar37);
      auVar36._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      uVar16 = movmskpd((int)puVar18,auVar36);
      if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
        dVar30 = local_398 * dVar32 * 1.0 +
                 dStack_380 * dVar27 + dVar2 * local_388 * -1.0 + dVar33 * dStack_390;
        dVar23 = dVar23 * local_378;
        dVar26 = dVar26 * dStack_370;
        dVar28 = dVar28 * local_368;
        dStack_360 = dStack_360 * 0.0;
        auVar38._8_4_ = SUB84(dVar30,0);
        auVar38._0_8_ =
             dStack_390 * dVar32 * -1.0 +
             local_388 * dVar27 + dVar2 * dStack_380 * 1.0 + dVar33 * local_398;
        auVar38._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        *param_1 = auVar38;
        *(double *)param_1[1] =
             dStack_380 * dVar32 * 1.0 +
             ((dVar2 * dStack_390 * 1.0 + dVar33 * local_388) - dVar27 * local_398);
        *(double *)(param_1[1] + 8) =
             local_388 * dVar32 * -1.0 +
             ((dVar2 * local_398 * -1.0 + dVar33 * dStack_380) - dVar27 * dStack_390);
        dVar34 = dVar26 * dVar2 - dVar27 * dVar23;
        dVar35 = dVar28 * dVar27 - dVar32 * dVar26;
        dVar30 = dVar23 * dVar32 - dVar2 * dVar28;
        dVar1 = dStack_360 * dVar33 - dVar33 * dStack_360;
        dVar35 = dVar35 + dVar35;
        dVar30 = dVar30 + dVar30;
        dVar34 = dVar34 + dVar34;
        dVar1 = dVar1 + dVar1;
        local_e8 = dVar9 + (dVar30 * dVar2 - dVar27 * dVar35) + dVar33 * dVar34 + dVar28;
        dVar41 = dVar41 + (dVar1 * dVar33 - dVar1 * dVar33) + dVar33 * dVar1 + dStack_360;
        *(double *)param_1[2] =
             dVar7 + (dVar34 * dVar27 - dVar32 * dVar30) + dVar33 * dVar35 + dVar23;
        *(double *)(param_1[2] + 8) =
             dVar8 + (dVar35 * dVar32 - dVar34 * dVar2) + dVar33 * dVar30 + dVar26;
      }
      else {
        dVar35 = dVar27 + dVar27;
        dVar5 = dVar32 + dVar32;
        dVar3 = dVar2 * (dVar2 + dVar2);
        dVar41 = (DAT_149934d80._8_8_ - (dVar32 * dVar5 + dVar3)) * dVar26;
        dVar6 = (dVar2 + dVar2) * dVar33;
        dVar4 = (dVar5 * dVar27 - dVar6) * dVar28;
        dVar31 = (dVar35 * dVar2 + dVar5 * dVar33) * dVar23;
        local_1a8 = (dVar5 * dVar27 + dVar6) * dVar26;
        local_1d8._8_4_ = SUB84(dVar31,0);
        local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar32 * dVar5 + dVar27 * dVar35)) * dVar23;
        local_1d8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        local_188 = (1.0 - (dVar3 + dVar27 * dVar35)) * dVar28;
        local_1c8 = (dVar2 * dVar5 - dVar35 * dVar33) * dVar23;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar41,0);
        local_1b8._0_8_ = (dVar35 * dVar2 - dVar5 * dVar33) * dVar26;
        local_1b8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        uStack_1a0 = 0;
        local_198._8_4_ = SUB84(dVar4,0);
        local_198._0_8_ = (dVar35 * dVar33 + dVar2 * dVar5) * dVar28;
        local_198._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_180 = 0;
        uStack_160 = 0x3ff0000000000000;
        dVar27 = dStack_390 + dStack_390;
        dVar32 = local_388 + local_388;
        dVar41 = local_398 * (local_398 + local_398);
        dVar33 = (local_398 + local_398) * dStack_380;
        dStack_210 = (dVar32 * dStack_390 - dVar33) * dVar1;
        local_258 = ((double)DAT_149934d80 - (local_388 * dVar32 + dStack_390 * dVar27)) * dVar30;
        dVar2 = (DAT_149934d80._8_8_ - (local_388 * dVar32 + dVar41)) * dVar34;
        dStack_250 = (dVar27 * local_398 + dVar32 * dStack_380) * dVar30;
        local_228 = (dVar32 * dStack_390 + dVar33) * dVar34;
        local_218 = (dVar27 * dStack_380 + local_398 * dVar32) * dVar1;
        local_248 = (local_398 * dVar32 - dVar27 * dStack_380) * dVar30;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar2,0);
        local_238._0_8_ = (dVar27 * local_398 - dVar32 * dStack_380) * dVar34;
        local_238._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uStack_220 = 0;
        local_208 = (1.0 - (dVar41 + dStack_390 * dVar27)) * dVar1;
        uStack_200 = 0;
        local_1f8 = local_378;
        dStack_1f0 = dStack_370;
        local_1e8 = local_368;
        uStack_1e0 = 0x3ff0000000000000;
        local_178 = dVar7;
        dStack_170 = dVar8;
        local_168 = dVar9;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar26 * dVar34);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar23 * dVar30);
        auVar40 = blendvpd(_DAT_149936790,auVar38,auVar24);
        uVar22 = -(ulonglong)(0.0 <= dVar28 * dVar1);
        dVar28 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
        dVar30 = auVar40._0_8_;
        local_148 = local_148 * dVar30;
        local_150 = local_150 * dVar30;
        local_158 = local_158 * dVar30;
        dVar30 = auVar40._8_8_;
        local_128 = local_128 * dVar30;
        local_130 = local_130 * dVar30;
        local_138 = dVar30 * local_138;
        local_108 = local_108 * dVar28;
        local_110 = local_110 * dVar28;
        local_118 = dVar28 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar28 = local_268 * local_268 + local_278 * local_278;
        dVar30 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar29._0_8_ = dVar28 + dVar30;
        auVar29._8_8_ = dVar28 + dVar30;
        auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
        auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
        auVar40 = sqrtpd(auVar29,auVar29);
        auVar38 = divpd(auVar38,auVar40);
        auVar39._0_8_ = auVar38._0_8_ * local_268;
        auVar39._8_8_ = auVar38._8_8_ * dStack_260;
        auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar25);
        *(ulonglong *)*param_1 =
             (ulonglong)(local_278 * auVar38._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
        *(ulonglong *)(*param_1 + 8) =
             (ulonglong)(dStack_270 * auVar38._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
        param_1[1] = auVar40;
        dVar41 = 0.0;
        *(undefined8 *)param_1[2] = local_f8;
        *(undefined8 *)(param_1[2] + 8) = uStack_f0;
      }
      *(double *)param_1[3] = local_e8;
      *(double *)(param_1[3] + 8) = dVar41;
      uVar11 = DAT_14c846520;
      uVar10 = DAT_14c846518;
      *(undefined8 *)param_1[4] = DAT_14c846510;
      *(undefined8 *)(param_1[4] + 8) = uVar10;
      *(undefined8 *)param_1[5] = uVar11;
      *(undefined8 *)(param_1[5] + 8) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_3b8);
    }
  }
  pauVar20 = param_1;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(double *)*pauVar20 = *param_3;
    param_3 = param_3 + 1;
    pauVar20 = (undefined1 (*) [16])(*pauVar20 + 8);
  }
  if ((local_d0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c48a58 FUN_147c48a58 body=36 status=ok
// SIG undefined FUN_147c48a58(void)

void FUN_147c48a58(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146ef2856(param_1 + 0x138);
  FUN_14484255c(param_2,uVar1);
  return;
}



// FUNCTION 147c48a7c FUN_147c48a7c body=95 status=ok
// SIG undefined FUN_147c48a7c(void)

void FUN_147c48a7c(undefined4 *param_1,uint param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  
  *param_1 = 0;
  if (param_2 != 0) {
    *(bool *)((longlong)param_1 + 2) = param_2 == 5 || (param_2 & 0xfffffffd) == 1;
    param_2 = param_2 & 0xfffffffe;
    bVar2 = DAT_14c761714 != 0;
    bVar1 = param_2 == 2;
    if (!bVar2) {
      bVar1 = bVar2;
    }
    if (param_2 == 4) {
      bVar1 = bVar2;
    }
    if (bVar1) {
      *(bool *)((longlong)param_1 + 3) = param_2 == 4;
      *(undefined1 *)param_1 = 1;
      if (param_3 != '\0') {
        *(undefined1 *)((longlong)param_1 + 1) = 1;
      }
    }
  }
  return;
}



// FUNCTION 147c48adc FUN_147c48adc body=20 status=ok
// SIG undefined FUN_147c48adc(void)

undefined8 FUN_147c48adc(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x48) != 0);
  }
  return 0;
}



// FUNCTION 147c48af0 FUN_147c48af0 body=15 status=ok
// SIG undefined FUN_147c48af0(void)

longlong FUN_147c48af0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 147c48b58 FUN_147c48b58 body=126 status=ok
// SIG undefined FUN_147c48b58(void)

void FUN_147c48b58(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xc) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x1c) * 0x18);
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0xc;
    lVar2 = 0;
    do {
      FUN_14484255c(param_2,(longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar1) << 4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x28));
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x2c) << 4);
  return;
}



// FUNCTION 147c48bd6 FUN_147c48bd6 body=525 status=ok
// SIG undefined FUN_147c48bd6(void)

void FUN_147c48bd6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  uVar4 = *(uint *)(param_2 + 1);
  lVar9 = param_2[3];
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    iVar8 = 0;
    iVar11 = 0;
  }
  else {
    FUN_14481578e(param_1,0);
    iVar11 = (int)param_1[1];
    iVar8 = *(int *)((longlong)param_1 + 0xc);
  }
  uVar7 = (int)lVar9 * 3;
  *(uint *)(param_1 + 1) = iVar11 + uVar7;
  if ((uint)(iVar8 - iVar11) < uVar7) {
    FUN_1446f48e2();
  }
  if (0 < (int)param_2[3]) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      *(undefined4 *)(*param_1 + lVar9) = *(undefined4 *)(param_2[2] + lVar9);
      *(undefined4 *)(*param_1 + 4 + lVar9) = *(undefined4 *)(param_2[2] + 4 + lVar9);
      *(undefined4 *)(*param_1 + 8 + lVar9) = *(undefined4 *)(param_2[2] + 8 + lVar9);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0xc;
    } while (lVar10 < (int)param_2[3]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    iVar8 = 0;
    iVar11 = 0;
  }
  else {
    FUN_1447a8aa0(param_1 + 2,0);
    iVar11 = (int)param_1[3];
    iVar8 = *(int *)((longlong)param_1 + 0x1c);
  }
  *(uint *)(param_1 + 3) = iVar11 + uVar4;
  if ((uint)(iVar8 - iVar11) < uVar4) {
    FUN_1403e3958();
  }
  if (0 < (int)param_2[1]) {
    lVar9 = 8;
    lVar10 = 0;
    do {
      lVar5 = *param_2;
      fVar2 = *(float *)(lVar5 + lVar9);
      fVar3 = *(float *)(lVar5 + -4 + lVar9);
      lVar6 = param_1[2];
      *(double *)(lVar6 + -0x10 + lVar9 * 2) = (double)*(float *)(lVar5 + -8 + lVar9);
      *(double *)(lVar6 + -8 + lVar9 * 2) = (double)fVar3;
      *(double *)(lVar6 + lVar9 * 2) = (double)fVar2;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0xc;
    } while (lVar10 < (int)param_2[1]);
  }
  if (0 < (int)param_2[7]) {
    lVar10 = 8;
    lVar9 = 0;
    do {
      lVar5 = param_2[6];
      if (*(uint *)(lVar5 + lVar10) != uVar4) {
        return;
      }
      iVar11 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c) < iVar11 + 1U) {
        FUN_141724806(param_1 + 4,iVar11);
      }
      lVar6 = param_1[4];
      lVar12 = (longlong)iVar11 * 0x10;
      puVar1 = (undefined8 *)(lVar6 + lVar12);
      *(undefined8 *)(lVar6 + lVar12) = 0;
      iVar11 = *(int *)(lVar5 + lVar10);
      _Src = *(void **)(lVar5 + -8 + lVar10);
      *(int *)(lVar6 + 8 + lVar12) = iVar11;
      if ((longlong)iVar11 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_144721d4c(puVar1,iVar11,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar11 << 4);
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 < (int)param_2[7]);
  }
  return;
}



// FUNCTION 147c48de4 FUN_147c48de4 body=136 status=ok
// SIG undefined FUN_147c48de4(void)

bool FUN_147c48de4(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [48];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = *(char *)(param_2 + 0x13);
  if (cVar1 == '\0') {
    FUN_1436270a4(local_a8);
    local_b8 = local_38;
    FUN_140bc41ce(param_1,local_88,local_78,local_68);
    FUN_1402ef326(local_a8);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return cVar1 == '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c48e6e FUN_147c48e6e body=204 status=ok
// SIG undefined FUN_147c48e6e(void)

longlong *
FUN_147c48e6e(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14aa1df10;
  puVar1[1] = *param_3;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_14114e6dc(puVar1 + 2,param_4);
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
  puVar1[4] = lVar3;
  *puVar1 = &PTR_FUN_14aa1dea0;
  puVar1[5] = 0;
  FUN_14485c47a(puVar1 + 5,param_2);
  puVar1[6] = FUN_147c48f3a;
  return param_1;
}



// FUNCTION 147c48f3a FUN_147c48f3a body=206 status=ok
// SIG undefined FUN_147c48f3a(void)

void FUN_147c48f3a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    FUN_1401841e8(param_1);
    *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 1;
  }
  else {
    if ((*(byte *)(param_2 + 0x100) & 1) != 0) {
      FUN_140627d5e(param_2);
      FUN_1400020a8(param_2);
      goto LAB_147c48f68;
    }
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    FUN_140bc3fca(param_1,param_2);
    FUN_14054c6c4(param_1 + 0x108,param_2 + 0x20);
    FUN_1405b70a4(param_1 + 0x118,param_2 + 0x30);
    FUN_147c5cdb8(param_1 + 0x128,param_2 + 0x40);
    FUN_140627d5e(param_2);
    FUN_1400020a8(param_2);
  }
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2 != 0);
  }
LAB_147c48f68:
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 147c49008 FUN_147c49008 body=32 status=ok
// SIG undefined FUN_147c49008(void)

void FUN_147c49008(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    LOCK();
    *(undefined1 *)(*(longlong *)(param_1 + 0x2f0) + 0x100) = 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  return;
}



// FUNCTION 147c49028 FUN_147c49028 body=34 status=ok
// SIG undefined FUN_147c49028(void)

void FUN_147c49028(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2c0))();
  FUN_147a2cbea(param_1 + 7);
  return;
}



// FUNCTION 147c4904a FUN_147c4904a body=532 status=ok
// SIG undefined FUN_147c4904a(void)

undefined8
FUN_147c4904a(longlong param_1,undefined8 param_2,int param_3,uint param_4,double *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((((int)param_4 < 0) || (*(int *)(param_1 + 0x130) <= (int)param_4)) || (param_3 < 0)) ||
     (uVar10 = param_3 * 3 + 2, *(int *)(param_1 + 0x110) <= (int)uVar10)) {
    uVar11 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x108);
    lVar12 = (longlong)*(int *)(lVar9 + (ulonglong)(uint)(param_3 * 3) * 4);
    lVar14 = (longlong)*(int *)(lVar9 + 4 + (ulonglong)(uint)(param_3 * 3) * 4);
    lVar13 = (longlong)*(int *)(lVar9 + (ulonglong)uVar10 * 4);
    lVar9 = *(longlong *)(param_1 + 0x118);
    local_a8 = *(undefined8 *)(lVar9 + 0x10 + lVar12 * 0x18);
    puVar1 = (undefined8 *)(lVar9 + lVar12 * 0x18);
    local_b8 = *puVar1;
    uStack_b0 = puVar1[1];
    local_c8 = *(undefined8 *)(lVar9 + 0x10 + lVar14 * 0x18);
    puVar1 = (undefined8 *)(lVar9 + lVar14 * 0x18);
    local_d8 = *puVar1;
    uStack_d0 = puVar1[1];
    local_e8 = *(undefined8 *)(lVar9 + 0x10 + lVar13 * 0x18);
    local_118 = &local_f8;
    puVar2 = (undefined4 *)(lVar9 + lVar13 * 0x18);
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (ulonglong)param_4 * 0x10);
    dVar3 = *(double *)(lVar9 + lVar12 * 0x10);
    dVar4 = *(double *)(lVar9 + 8 + lVar12 * 0x10);
    dVar5 = *(double *)(lVar9 + lVar14 * 0x10);
    dVar6 = *(double *)(lVar9 + 8 + lVar14 * 0x10);
    dVar7 = *(double *)(lVar9 + lVar13 * 0x10);
    dVar8 = *(double *)(lVar9 + 8 + lVar13 * 0x10);
    FUN_14276fa06(&local_110,param_2,&local_b8,&local_d8);
    *param_5 = dVar7 * local_100 + dVar5 * local_108 + dVar3 * local_110;
    param_5[1] = dVar8 * local_100 + dVar6 * local_108 + dVar4 * local_110;
    uVar11 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c49260 FUN_147c49260 body=1030 status=ok
// SIG undefined FUN_147c49260(void)

void FUN_147c49260(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined **local_1c0 [17];
  undefined ***local_138;
  undefined ***local_130;
  undefined8 local_128;
  undefined **local_120 [17];
  undefined ***local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1d8 = param_2;
  switchD_143c3d4dc::caseD_38();
  if ((*(byte *)(param_1 + 0xb8) & 0x20) == 0) {
    FUN_144b0760a(param_1);
    if ((byte)local_120[0] != '\x03') {
      iVar3 = *(int *)(param_1 + 0x70);
      if (0 < iVar3) {
        lVar6 = 0xf0;
        lVar5 = 0;
        do {
          lVar1 = *(longlong *)(param_1 + 0x68);
          if (*(longlong *)(lVar1 + lVar6) != 0) {
            local_78[0] = 0;
            local_78[1] = 0;
            memset(local_120,0,0x90);
            FUN_144869430(local_120);
            local_90 = 0;
            local_120[0] = &PTR_FUN_149e1e590;
            local_88 = local_78;
            local_80 = 0;
            FUN_144a69558(local_120,1);
            (*(code *)local_120[0][0x1e])(local_120,0);
            local_120[0] = &PTR_FUN_149e1e330;
            FUN_1407134c4(local_1c0,local_120);
            local_138 = local_98;
            local_1c0[0] = &PTR_FUN_149f52ef0;
            local_130 = local_120;
            local_98 = local_1c0;
            uVar4 = FUN_14001cc68(0x158,0x10);
            FUN_140dffb3a(uVar4);
            local_128 = uVar4;
            FUN_14004aa5a(*(undefined8 *)(lVar1 + lVar6),local_1c0);
            FUN_14484255c(local_1d8);
            FUN_14041e0ac(local_1c0);
            FUN_144a7fc42(local_120);
            if (local_78[0] != 0) {
              FUN_1400020a8();
            }
            iVar3 = *(int *)(param_1 + 0x70);
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 0x100;
        } while (lVar5 < iVar3);
      }
    }
    if (param_1 != 0) {
      FUN_144b0760a(param_1);
      if ((((byte)local_120[0] & 0xfd) == 1) &&
         (iVar3 = *(int *)(param_1 + 0x100), (longlong)iVar3 != 0)) {
        lVar5 = *(longlong *)(param_1 + 0xf8);
        lVar6 = 0;
        do {
          if (*(longlong *)(lVar5 + lVar6) != 0) {
            local_78[0] = 0;
            local_78[1] = 0;
            memset(local_120,0,0x90);
            FUN_144869430(local_120);
            local_90 = 0;
            local_120[0] = &PTR_FUN_149e1e590;
            local_88 = local_78;
            local_80 = 0;
            FUN_144a69558(local_120,1);
            (*(code *)local_120[0][0x1e])(local_120,0);
            local_120[0] = &PTR_FUN_149e1e330;
            FUN_1407134c4(local_1c0,local_120);
            local_138 = local_98;
            local_1c0[0] = &PTR_FUN_149f52ef0;
            local_130 = local_120;
            local_98 = local_1c0;
            uVar4 = FUN_14001cc68(0x158,0x10);
            FUN_140dffb3a(uVar4);
            local_128 = uVar4;
            FUN_14172c4ee(*(undefined8 *)(lVar5 + lVar6),local_1c0);
            FUN_14484255c(local_1d8);
            FUN_14041e0ac(local_1c0);
            FUN_144a7fc42(local_120);
            if (local_78[0] != 0) {
              FUN_1400020a8();
            }
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar3 * 8 != lVar6);
      }
    }
  }
  FUN_1446ddc76(&local_1c8,"Chaos",1);
  cVar2 = FUN_1401cf654(param_1 + 0xd8,local_1c8);
  if (cVar2 != '\0') {
    FUN_1446ddc76(&local_1d0,"Chaos",1);
    lVar5 = FUN_14043030a(param_1 + 0xd8,local_1d0);
    FUN_14484255c(local_1d8,(ulonglong)*(uint5 *)(lVar5 + 8));
  }
  uVar4 = local_1d8;
  FUN_14484255c(local_1d8,(longlong)*(int *)(param_1 + 0x144) << 2);
  FUN_147c48b58(param_1 + 0x108,uVar4);
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c49668 FUN_147c49668 body=709 status=ok
// SIG undefined FUN_147c49668(void)

double FUN_147c49668(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((int)param_1[1] < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    lVar1 = 0x48;
    lVar2 = 0;
    do {
      dVar3 = ABS(*param_2);
      if (ABS(param_2[1]) <= ABS(*param_2)) {
        dVar3 = ABS(param_2[1]);
      }
      if (ABS(param_2[2]) <= dVar3) {
        dVar3 = ABS(param_2[2]);
      }
      dVar3 = pow(dVar3 * (double)*(float *)(*param_1 + lVar1),3.0);
      fVar6 = (float)((double)fVar6 + dVar3 * 4.188685417175293);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x50;
    } while (lVar2 < (int)param_1[1]);
  }
  if (0 < (longlong)(int)param_1[3]) {
    lVar1 = param_1[2];
    lVar2 = 0;
    do {
      fVar6 = (float)((double)fVar6 +
                     ABS((double)*(float *)(lVar1 + 0x68 + lVar2) *
                         (double)*(float *)(lVar1 + 100 + lVar2) *
                         (double)*(float *)(lVar1 + 0x60 + lVar2) *
                         *param_2 * param_2[1] * param_2[2]));
      lVar2 = lVar2 + 0x70;
    } while ((longlong)(int)param_1[3] * 0x70 - lVar2 != 0);
  }
  if (0 < (longlong)(int)param_1[5]) {
    dVar3 = ABS(*param_2);
    if (ABS(*param_2) <= ABS(param_2[1])) {
      dVar3 = ABS(param_2[1]);
    }
    lVar1 = 0;
    fVar4 = 0.1;
    do {
      fVar8 = *(float *)(param_1[4] + 0x60 + lVar1);
      fVar7 = (float)((double)(fVar8 + fVar8 + *(float *)(param_1[4] + 100 + lVar1)) *
                      ABS(param_2[2]) * 0.5);
      if (fVar7 <= 0.1) {
        fVar7 = fVar4;
      }
      fVar5 = fVar8 * (float)dVar3;
      if (fVar7 <= fVar8 * (float)dVar3) {
        fVar5 = fVar7;
      }
      if (fVar5 <= 0.1) {
        fVar5 = fVar4;
      }
      fVar7 = (fVar7 - fVar5) + (fVar7 - fVar5);
      fVar8 = fVar4;
      if (0.1 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar6 = fVar6 + (fVar5 * 1.3333 + fVar8) * fVar5 * fVar5 * 3.1415927;
      lVar1 = lVar1 + 0x68;
    } while ((longlong)(int)param_1[5] * 0x68 - lVar1 != 0);
  }
  if (0 < (longlong)(int)param_1[7]) {
    lVar1 = 0;
    do {
      lVar2 = *(longlong *)(param_1[6] + 0xf0 + lVar1);
      if (lVar2 == 0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)((double)*(float *)(lVar2 + 0x68) * ABS(*param_2 * param_2[1] * param_2[2]));
      }
      fVar6 = fVar6 + fVar4;
      lVar1 = lVar1 + 0x100;
    } while ((longlong)(int)param_1[7] * 0x100 != lVar1);
  }
  return (double)fVar6;
}



// FUNCTION 147c4992e FUN_147c4992e body=158 status=ok
// SIG undefined FUN_147c4992e(void)

undefined8 * FUN_147c4992e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0x700000000;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  *(undefined1 *)((longlong)param_1 + 0x19) = 3;
  *(undefined4 *)(param_1 + 4) = 6;
  param_1[5] = param_1;
  *param_1 = &PTR_FUN_14aa0f410;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3ff00000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_147c499cc();
  return param_1;
}



// FUNCTION 147c499cc FUN_147c499cc body=148 status=ok
// SIG undefined FUN_147c499cc(void)

void FUN_147c499cc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | *(byte *)(param_2 + 0x18) & 1;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  FUN_1405b70a4(param_1 + 0x30,param_2 + 0x30);
  FUN_14054c6c4(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  puVar7 = (undefined8 *)(param_2 + 0x90);
  puVar8 = (undefined8 *)(param_1 + 0x90);
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}



// FUNCTION 147c49a60 FUN_147c49a60 body=78 status=ok
// SIG undefined FUN_147c49a60(void)

longlong FUN_147c49a60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_147c499cc(param_1,param_2);
  return param_1;
}



// FUNCTION 147c49aae FUN_147c49aae body=440 status=ok
// SIG undefined FUN_147c49aae(void)

void FUN_147c49aae(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [48];
  double local_80;
  double dStack_78;
  double local_70;
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = param_3[8];
  dStack_c0 = param_3[9];
  local_b8 = param_3[10];
  FUN_1417e5bd4(SUB84(local_b8,0),local_b0,&local_c8,&DAT_14c846480);
  dVar4 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar8 = param_3[3];
  dVar5 = dStack_78 * dVar4 - local_80 * dVar2;
  dVar6 = local_70 * dVar2 - dStack_78 * dVar3;
  dVar7 = local_80 * dVar3 - dVar4 * local_70;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  dVar1 = (dVar5 * dVar8 + local_70 + (dVar7 * dVar4 - dVar6 * dVar2) + param_3[6]) - param_2[2];
  dVar4 = ((dVar3 * dVar6 - dVar4 * dVar5) + param_3[3] * dVar7 + dStack_78 + param_3[5]) -
          param_2[1];
  dVar8 = ((dVar5 * dVar2 - dVar7 * dVar3) + dVar8 * dVar6 + local_80 + param_3[4]) - *param_2;
  local_68 = (float)SQRT(dVar1 * dVar1 + dVar8 * dVar8 + dVar4 * dVar4) - local_68;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(-(uint)(1e-08 < local_68) & (uint)local_68);
}



// FUNCTION 147c49c68 FUN_147c49c68 body=649 status=ok
// SIG undefined FUN_147c49c68(void)

void FUN_147c49c68(undefined8 param_1,double *param_2,double *param_3,double *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_c0 [48];
  double local_90;
  double dStack_88;
  double local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = param_3[8];
  dStack_d0 = param_3[9];
  local_c8 = param_3[10];
  FUN_1417e5bd4(SUB84(local_c8,0),local_c0,&local_d8,&DAT_14c846480);
  dVar4 = *param_3;
  dVar1 = param_3[1];
  dVar6 = param_3[2];
  dVar8 = param_3[3];
  dVar5 = dStack_88 * dVar4 - local_90 * dVar1;
  dVar7 = local_80 * dVar1 - dStack_88 * dVar6;
  dVar9 = local_90 * dVar6 - dVar4 * local_80;
  dVar7 = dVar7 + dVar7;
  dVar9 = dVar9 + dVar9;
  dVar5 = dVar5 + dVar5;
  dVar2 = (dVar5 * dVar8 + local_80 + (dVar9 * dVar4 - dVar7 * dVar1) + param_3[6]) - param_2[2];
  dVar4 = ((dVar6 * dVar7 - dVar4 * dVar5) + param_3[3] * dVar9 + dStack_88 + param_3[5]) -
          param_2[1];
  dVar5 = ((dVar5 * dVar1 - dVar9 * dVar6) + dVar8 * dVar7 + local_90 + param_3[4]) - *param_2;
  dVar8 = SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4);
  fVar3 = (float)dVar8;
  if (fVar3 <= 1e-08) {
    param_5[2] = DAT_14c8464f0;
    dVar8 = DAT_14c8464e8;
    *param_5 = DAT_14c8464e0;
    param_5[1] = dVar8;
    dVar2 = param_5[2];
    dVar8 = *param_5;
    dVar4 = param_5[1];
  }
  else {
    dVar8 = 1.0 / dVar8;
    dVar2 = -dVar2 * dVar8;
    dVar4 = -dVar4 * dVar8;
    dVar8 = -dVar5 * dVar8;
    *param_5 = dVar8;
    param_5[1] = dVar4;
    param_5[2] = dVar2;
  }
  fVar3 = fVar3 - local_78;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  dVar6 = (double)fVar3;
  dVar5 = param_2[2];
  dVar1 = param_2[1];
  *param_4 = *param_2 - dVar8 * dVar6;
  param_4[1] = dVar1 - dVar4 * dVar6;
  param_4[2] = dVar5 - dVar2 * dVar6;
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c49ef2 FUN_147c49ef2 body=2068 status=ok
// SIG undefined FUN_147c49ef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c49ef2(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar14;
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [112];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_158 = param_3[8];
  dStack_150 = param_3[9];
  local_148 = param_3[10];
  FUN_140492472(local_148,local_2e8,&local_158,&DAT_14c846480);
  lVar8 = param_1 + 0x48;
  uVar5 = FUN_144a7484c(lVar8,&local_158);
  auVar18 = _DAT_149934d80;
  auVar10 = *(undefined1 (*) [16])(param_3 + 8);
  dVar12 = auVar10._0_8_;
  dVar1 = auVar10._8_8_;
  dVar14 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar10 = minpd(_DAT_149934d80,auVar10);
  auVar16 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ < 0.0);
  auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ < 0.0);
  iVar6 = movmskpd(uVar5,auVar11);
  auVar10._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar10._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  uVar7 = movmskpd((int)lVar8,auVar10);
  if ((uVar7 & 0x3fffffff) != 0 || iVar6 != 0) {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar15 = param_3[2];
    dVar17 = dVar4 + dVar4;
    dVar19 = dVar15 + dVar15;
    dVar22 = dVar3 * (dVar3 + dVar3);
    local_1d8 = ((double)DAT_149934d80 - (dVar15 * dVar19 + dVar4 * dVar17)) * dVar12;
    dVar2 = (DAT_149934d80._8_8_ - (dVar15 * dVar19 + dVar22)) * dVar1;
    dVar15 = param_3[3];
    dVar20 = dVar19 * dVar15;
    dVar21 = (dVar3 + dVar3) * param_3[3];
    dVar15 = dVar17 * dVar15;
    dStack_190 = (dVar19 * dVar4 - dVar21) * dVar14;
    local_198 = (dVar15 + *param_3 * dVar19) * dVar14;
    dStack_1d0 = (dVar17 * dVar3 + dVar20) * dVar12;
    local_1a8 = (dVar19 * dVar4 + dVar21) * dVar1;
    local_188 = (1.0 - (dVar22 + dVar4 * dVar17)) * dVar14;
    local_1c8 = (*param_3 * dVar19 - dVar15) * dVar12;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar2,0);
    local_1b8._0_8_ = (dVar17 * dVar3 - dVar20) * dVar1;
    local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar22 = dStack_150 + dStack_150;
    dVar2 = local_148 + local_148;
    dVar15 = local_158 * (local_158 + local_158);
    local_258 = (double)DAT_149934d80 - (local_148 * dVar2 + dStack_150 * dVar22);
    dStack_230 = DAT_149934d80._8_8_ - (local_148 * dVar2 + dVar15);
    local_208 = 1.0 - (dVar15 + dStack_150 * dVar22);
    dVar15 = (local_158 + local_158) * dStack_140;
    dStack_250 = dVar22 * local_158 + dVar2 * dStack_140;
    local_228 = dVar2 * dStack_150 + dVar15;
    local_238 = dVar22 * local_158 - dVar2 * dStack_140;
    dVar15 = dVar2 * dStack_150 - dVar15;
    local_248 = local_158 * dVar2 - dVar22 * dStack_140;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218._8_4_ = SUB84(dVar15,0);
    local_218._0_8_ = dVar22 * dStack_140 + local_158 * dVar2;
    local_218._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = *(undefined8 *)(param_1 + 0x30);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
    local_1e8 = *(undefined8 *)(param_1 + 0x40);
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar1);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar12);
    auVar10 = blendvpd(_DAT_149936790,auVar18,auVar16);
    dVar12 = (double)(~-(ulonglong)(0.0 <= dVar14) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar14) & 0x3ff0000000000000);
    dVar14 = auVar10._0_8_;
    local_148 = local_148 * dVar14;
    dStack_150 = dStack_150 * dVar14;
    local_158 = local_158 * dVar14;
    dVar14 = auVar10._8_8_;
    local_128 = local_128 * dVar14;
    local_130 = local_130 * dVar14;
    local_138 = dVar14 * local_138;
    local_108 = local_108 * dVar12;
    local_110 = local_110 * dVar12;
    local_118 = dVar12 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar12 = local_268 * local_268 + local_278 * local_278;
    dVar14 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar13._0_8_ = dVar12 + dVar14;
    auVar13._8_8_ = dVar12 + dVar14;
    auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
    auVar10 = sqrtpd(auVar13,auVar13);
    auVar10 = divpd(auVar18,auVar10);
    auVar18._0_8_ = auVar10._0_8_ * local_268;
    auVar18._8_8_ = auVar10._8_8_ * dStack_260;
    blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar9);
  }
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c4a708 FUN_147c4a708 body=2621 status=ok
// SIG undefined FUN_147c4a708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c4a708(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [96];
  float local_288;
  float local_284;
  float local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_158 = param_3[8];
  dStack_150 = param_3[9];
  local_148 = param_3[10];
  FUN_140492472(local_148,local_2e8,&local_158,&DAT_14c846480);
  lVar4 = param_1 + 0x48;
  uVar1 = FUN_144a7484c(lVar4,&local_158);
  auVar17 = _DAT_149934d80;
  auVar7 = *(undefined1 (*) [16])(param_3 + 8);
  dVar10 = auVar7._0_8_;
  dVar24 = auVar7._8_8_;
  dVar12 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar7 = minpd(_DAT_149934d80,auVar7);
  auVar14 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar8._8_8_ = -(ulonglong)(auVar7._8_8_ < 0.0);
  auVar8._0_8_ = -(ulonglong)(auVar7._0_8_ < 0.0);
  iVar2 = movmskpd(uVar1,auVar8);
  auVar7._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar7._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  uVar3 = movmskpd((int)lVar4,auVar7);
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar21 = *param_3;
    dVar22 = param_3[1];
    dVar19 = param_3[2];
    dVar23 = param_3[3];
    dVar13 = param_3[3];
    dVar16 = param_3[1];
    dVar25 = param_3[1];
    dVar15 = param_3[2];
    dVar20 = param_3[2];
    dVar6 = dStack_150 * dVar15 * -1.0 +
            local_148 * dVar16 + dStack_140 * *param_3 * 1.0 + local_158 * dVar23;
    dVar9 = local_158 * dVar20 * 1.0 +
            dStack_140 * dVar25 + local_148 * *param_3 * -1.0 + dStack_150 * dVar13;
    auVar17._0_8_ =
         dStack_140 * dVar15 * 1.0 +
         ((*param_3 * dStack_150 * 1.0 + local_148 * dVar23) - local_158 * dVar16);
    auVar17._8_8_ =
         local_148 * dVar20 * -1.0 +
         ((*param_3 * local_158 * -1.0 + dStack_140 * dVar13) - dStack_150 * dVar25);
    dVar10 = dVar10 * *(double *)(param_1 + 0x30);
    dVar24 = dVar24 * *(double *)(param_1 + 0x38);
    dVar12 = *(double *)(param_1 + 0x40) * dVar12;
    dVar16 = dVar24 * dVar21 - dVar10 * dVar22;
    dVar15 = dVar12 * dVar22 - dVar24 * dVar19;
    dVar25 = dVar10 * dVar19 - dVar12 * dVar21;
    dVar15 = dVar15 + dVar15;
    dVar25 = dVar25 + dVar25;
    dVar16 = dVar16 + dVar16;
    local_f8 = (dVar16 * dVar22 - dVar19 * dVar25) + dVar23 * dVar15 + dVar10 + param_3[4];
    dStack_f0 = (dVar15 * dVar19 - dVar16 * dVar21) + dVar13 * dVar25 + dVar24 + param_3[5];
    local_e8 = (dVar25 * dVar21 - dVar22 * dVar15) + dVar23 * dVar16 + dVar12 + param_3[6];
  }
  else {
    dVar25 = *param_3;
    dVar16 = param_3[1];
    dVar13 = param_3[2];
    dVar15 = dVar16 + dVar16;
    dVar20 = dVar13 + dVar13;
    dVar23 = dVar25 * (dVar25 + dVar25);
    local_1d8 = ((double)DAT_149934d80 - (dVar13 * dVar20 + dVar16 * dVar15)) * dVar10;
    dStack_1b0 = (DAT_149934d80._8_8_ - (dVar13 * dVar20 + dVar23)) * dVar24;
    dVar13 = param_3[3];
    dVar21 = dVar20 * dVar13;
    dVar22 = (dVar25 + dVar25) * param_3[3];
    dVar13 = dVar15 * dVar13;
    local_1b8 = (dVar15 * dVar25 - dVar21) * dVar24;
    dStack_190 = (dVar20 * dVar16 - dVar22) * dVar12;
    local_198 = (dVar13 + *param_3 * dVar20) * dVar12;
    dStack_1d0 = (dVar15 * dVar25 + dVar21) * dVar10;
    local_1a8 = (dVar20 * dVar16 + dVar22) * dVar24;
    local_188 = (1.0 - (dVar23 + dVar16 * dVar15)) * dVar12;
    local_1c8 = (*param_3 * dVar20 - dVar13) * dVar10;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar13 = dStack_150 + dStack_150;
    dVar25 = local_148 + local_148;
    dVar23 = local_158 * (local_158 + local_158);
    local_258 = (double)DAT_149934d80 - (local_148 * dVar25 + dStack_150 * dVar13);
    dStack_230 = DAT_149934d80._8_8_ - (local_148 * dVar25 + dVar23);
    local_208 = 1.0 - (dVar23 + dStack_150 * dVar13);
    dStack_210 = (local_158 + local_158) * dStack_140;
    dStack_250 = dVar13 * local_158 + dVar25 * dStack_140;
    local_228 = dVar25 * dStack_150 + dStack_210;
    local_238 = dVar13 * local_158 - dVar25 * dStack_140;
    dStack_210 = dVar25 * dStack_150 - dStack_210;
    local_218 = dVar13 * dStack_140 + local_158 * dVar25;
    local_248 = local_158 * dVar25 - dVar13 * dStack_140;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = *(double *)(param_1 + 0x30);
    dStack_1f0 = *(double *)(param_1 + 0x38);
    local_1e8 = *(double *)(param_1 + 0x40);
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar24);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar10);
    auVar7 = blendvpd(_DAT_149936790,auVar17,auVar14);
    dVar10 = (double)(~-(ulonglong)(0.0 <= dVar12) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar12) & 0x3ff0000000000000);
    dVar12 = auVar7._0_8_;
    local_148 = local_148 * dVar12;
    dStack_150 = dStack_150 * dVar12;
    local_158 = local_158 * dVar12;
    dVar12 = auVar7._8_8_;
    local_128 = local_128 * dVar12;
    local_130 = local_130 * dVar12;
    local_138 = dVar12 * local_138;
    local_108 = local_108 * dVar10;
    local_110 = local_110 * dVar10;
    local_118 = dVar10 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar10 = local_268 * local_268 + local_278 * local_278;
    dVar12 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar11._0_8_ = dVar10 + dVar12;
    auVar11._8_8_ = dVar10 + dVar12;
    auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar7 = sqrtpd(auVar11,auVar11);
    auVar7 = divpd(auVar17,auVar7);
    auVar18._0_8_ = auVar7._0_8_ * local_268;
    auVar18._8_8_ = auVar7._8_8_ * dStack_260;
    dVar6 = (double)((ulonglong)(local_278 * auVar7._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_));
    dVar9 = (double)((ulonglong)(dStack_270 * auVar7._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_));
    auVar17 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar5);
  }
  dVar23 = *param_2 - local_f8;
  dVar21 = param_2[1] - dStack_f0;
  dVar13 = param_2[2] - local_e8;
  dVar22 = -dVar6;
  dVar19 = -dVar9;
  dVar15 = auVar17._0_8_;
  dVar25 = dVar15 * -1.0;
  dVar20 = auVar17._8_8_;
  dVar16 = dVar20 * 1.0;
  dVar24 = dVar23 * dVar25 - dVar22 * dVar13;
  dVar10 = dVar21 * dVar22 - dVar19 * dVar23;
  dVar12 = dVar13 * dVar19 - dVar25 * dVar21;
  dVar12 = dVar12 + dVar12;
  dVar24 = dVar24 + dVar24;
  dVar10 = dVar10 + dVar10;
  dVar13 = dVar16 * dVar10 + dVar13 + (dVar24 * dVar22 - dVar12 * dVar19);
  dVar23 = (dVar10 * dVar19 - dVar24 * dVar25) + dVar16 * dVar12 + dVar23;
  dVar12 = dVar6 * dVar10 + dVar25 * dVar12 + dVar16 * dVar24 + dVar21;
  dVar25 = (double)(local_280 * 0.5);
  dVar24 = (double)-(local_280 * 0.5);
  dVar10 = dVar13;
  if (dVar25 <= dVar13) {
    dVar10 = dVar25;
  }
  if (dVar10 <= dVar24) {
    dVar10 = dVar24;
  }
  dVar25 = (double)(local_284 * 0.5);
  dVar16 = (double)-(local_284 * 0.5);
  dVar24 = dVar12;
  if (dVar25 <= dVar12) {
    dVar24 = dVar25;
  }
  if (dVar24 <= dVar16) {
    dVar24 = dVar16;
  }
  dVar21 = (double)(local_288 * 0.5);
  dVar25 = (double)-(local_288 * 0.5);
  dVar16 = dVar23;
  if (dVar21 <= dVar23) {
    dVar16 = dVar21;
  }
  if (dVar16 <= dVar25) {
    dVar16 = dVar25;
  }
  dVar23 = dVar23 - dVar16;
  dVar12 = dVar12 - dVar24;
  dVar25 = dVar24 * dVar6 - dVar9 * dVar16;
  dVar21 = dVar10 * dVar9 - dVar15 * dVar24;
  dVar22 = dVar16 * dVar15 - dVar10 * dVar6;
  dVar21 = dVar21 + dVar21;
  dVar22 = dVar22 + dVar22;
  dVar25 = dVar25 + dVar25;
  *param_4 = (dVar25 * dVar9 - dVar22 * dVar15) + dVar20 * dVar21 + dVar16 + local_f8;
  param_4[1] = (dVar15 * dVar21 - dVar6 * dVar25) + dVar20 * dVar22 + dVar24 + dStack_f0;
  param_4[2] = dVar25 * dVar20 + dVar10 + (dVar22 * dVar6 - dVar21 * dVar9) + local_e8;
  dVar13 = dVar13 - dVar10;
  dVar16 = SQRT(dVar13 * dVar13 + dVar23 * dVar23 + dVar12 * dVar12);
  dVar10 = DAT_14c8464e0;
  dVar24 = DAT_14c8464e8;
  dVar25 = DAT_14c8464f0;
  if (1e-08 < (float)dVar16) {
    dVar16 = 1.0 / dVar16;
    dVar10 = dVar23 * dVar16;
    dVar24 = dVar12 * dVar16;
    dVar25 = dVar13 * dVar16;
  }
  dVar12 = dVar24 * dVar6 - dVar9 * dVar10;
  dVar13 = dVar25 * dVar9 - dVar15 * dVar24;
  dVar23 = dVar10 * dVar15 - dVar25 * dVar6;
  dVar13 = dVar13 + dVar13;
  dVar23 = dVar23 + dVar23;
  dVar12 = dVar12 + dVar12;
  *param_5 = (dVar12 * dVar9 - dVar23 * dVar15) + dVar20 * dVar13 + dVar10;
  param_5[1] = (dVar15 * dVar13 - dVar6 * dVar12) + dVar20 * dVar23 + dVar24;
  param_5[2] = dVar12 * dVar20 + dVar25 + (dVar23 * dVar6 - dVar13 * dVar9);
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c4b146 FUN_147c4b146 body=107 status=ok
// SIG undefined FUN_147c4b146(void)

undefined8 FUN_147c4b146(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = ABS(*param_2);
  if (ABS(*param_2) <= ABS(param_2[1])) {
    dVar3 = ABS(param_2[1]);
  }
  fVar1 = *(float *)(param_1 + 0x60);
  fVar4 = (float)((double)(fVar1 + fVar1 + *(float *)(param_1 + 100)) * ABS(param_2[2]) * 0.5);
  if (fVar4 <= 0.1) {
    fVar4 = 0.1;
  }
  fVar2 = (float)dVar3 * fVar1;
  if (fVar4 <= (float)dVar3 * fVar1) {
    fVar2 = fVar4;
  }
  if (fVar2 <= 0.1) {
    fVar2 = 0.1;
  }
  return CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar2);
}



// FUNCTION 147c4b1b2 FUN_147c4b1b2 body=113 status=ok
// SIG undefined FUN_147c4b1b2(void)

float FUN_147c4b1b2(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x60);
  dVar3 = ABS(*param_2);
  if (ABS(*param_2) <= ABS(param_2[1])) {
    dVar3 = ABS(param_2[1]);
  }
  fVar4 = (float)(ABS(param_2[2]) * (double)(fVar1 + fVar1 + *(float *)(param_1 + 100)) * 0.5);
  if (fVar4 <= 0.1) {
    fVar4 = 0.1;
  }
  fVar2 = (float)dVar3 * fVar1;
  if (fVar4 <= (float)dVar3 * fVar1) {
    fVar2 = fVar4;
  }
  if (fVar2 <= 0.1) {
    fVar2 = 0.1;
  }
  fVar4 = (fVar4 - fVar2) + (fVar4 - fVar2);
  fVar1 = 0.1;
  if (0.1 <= fVar4) {
    fVar1 = fVar4;
  }
  return fVar1;
}



// FUNCTION 147c4b224 FUN_147c4b224 body=59 status=ok
// SIG undefined FUN_147c4b224(void)

float FUN_147c4b224(longlong param_1,longlong param_2)

{
  float fVar1;
  
  fVar1 = (float)(ABS(*(double *)(param_2 + 0x10)) *
                  (double)(*(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x60) +
                          *(float *)(param_1 + 100)) * 0.5);
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  return fVar1;
}



// FUNCTION 147c4b260 FUN_147c4b260 body=2022 status=ok
// SIG undefined FUN_147c4b260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c4b260(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar14;
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_308 [40];
  undefined1 local_2e0 [104];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_158 = param_3[8];
  dStack_150 = param_3[9];
  local_148 = param_3[10];
  FUN_1417e5e4c(local_148,local_2e0,&local_158,&DAT_14c846480);
  lVar8 = param_1 + 0x48;
  uVar5 = FUN_144a7484c(lVar8,&local_158);
  auVar18 = _DAT_149934d80;
  auVar10 = *(undefined1 (*) [16])(param_3 + 8);
  dVar12 = auVar10._0_8_;
  dVar1 = auVar10._8_8_;
  dVar14 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar10 = minpd(_DAT_149934d80,auVar10);
  auVar16 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ < 0.0);
  auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ < 0.0);
  iVar6 = movmskpd(uVar5,auVar11);
  auVar10._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar10._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  uVar7 = movmskpd((int)lVar8,auVar10);
  if ((uVar7 & 0x3fffffff) != 0 || iVar6 != 0) {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar15 = param_3[2];
    dVar17 = dVar4 + dVar4;
    dVar19 = dVar15 + dVar15;
    dVar22 = dVar3 * (dVar3 + dVar3);
    local_1d8 = ((double)DAT_149934d80 - (dVar15 * dVar19 + dVar4 * dVar17)) * dVar12;
    dVar2 = (DAT_149934d80._8_8_ - (dVar15 * dVar19 + dVar22)) * dVar1;
    dVar15 = param_3[3];
    dVar20 = dVar19 * dVar15;
    dVar21 = (dVar3 + dVar3) * param_3[3];
    dVar15 = dVar17 * dVar15;
    dStack_190 = (dVar19 * dVar4 - dVar21) * dVar14;
    local_198 = (dVar15 + *param_3 * dVar19) * dVar14;
    dStack_1d0 = (dVar17 * dVar3 + dVar20) * dVar12;
    local_1a8 = (dVar19 * dVar4 + dVar21) * dVar1;
    local_188 = (1.0 - (dVar22 + dVar4 * dVar17)) * dVar14;
    local_1c8 = (*param_3 * dVar19 - dVar15) * dVar12;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar2,0);
    local_1b8._0_8_ = (dVar17 * dVar3 - dVar20) * dVar1;
    local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar22 = dStack_150 + dStack_150;
    dVar2 = local_148 + local_148;
    dVar15 = local_158 * (local_158 + local_158);
    local_258 = (double)DAT_149934d80 - (local_148 * dVar2 + dStack_150 * dVar22);
    dStack_230 = DAT_149934d80._8_8_ - (local_148 * dVar2 + dVar15);
    local_208 = 1.0 - (dVar15 + dStack_150 * dVar22);
    dVar15 = (local_158 + local_158) * dStack_140;
    dStack_250 = dVar22 * local_158 + dVar2 * dStack_140;
    local_228 = dVar2 * dStack_150 + dVar15;
    local_238 = dVar22 * local_158 - dVar2 * dStack_140;
    dVar15 = dVar2 * dStack_150 - dVar15;
    local_248 = local_158 * dVar2 - dVar22 * dStack_140;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218._8_4_ = SUB84(dVar15,0);
    local_218._0_8_ = dVar22 * dStack_140 + local_158 * dVar2;
    local_218._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = *(undefined8 *)(param_1 + 0x30);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x38);
    local_1e8 = *(undefined8 *)(param_1 + 0x40);
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar1);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar12);
    auVar10 = blendvpd(_DAT_149936790,auVar18,auVar16);
    dVar12 = (double)(~-(ulonglong)(0.0 <= dVar14) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar14) & 0x3ff0000000000000);
    dVar14 = auVar10._0_8_;
    local_148 = local_148 * dVar14;
    dStack_150 = dStack_150 * dVar14;
    local_158 = local_158 * dVar14;
    dVar14 = auVar10._8_8_;
    local_128 = local_128 * dVar14;
    local_130 = local_130 * dVar14;
    local_138 = dVar14 * local_138;
    local_108 = local_108 * dVar12;
    local_110 = local_110 * dVar12;
    local_118 = dVar12 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar12 = local_268 * local_268 + local_278 * local_278;
    dVar14 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar13._0_8_ = dVar12 + dVar14;
    auVar13._8_8_ = dVar12 + dVar14;
    auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
    auVar10 = sqrtpd(auVar13,auVar13);
    auVar10 = divpd(auVar18,auVar10);
    auVar18._0_8_ = auVar10._0_8_ * local_268;
    auVar18._8_8_ = auVar10._8_8_ * dStack_260;
    blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar9);
  }
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c4ba48 FUN_147c4ba48 body=2402 status=ok
// SIG undefined FUN_147c4ba48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c4ba48(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_308 [40];
  undefined1 local_2e0 [96];
  float local_280;
  float local_27c;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_158 = param_3[8];
  dStack_150 = param_3[9];
  local_148 = param_3[10];
  FUN_1417e5e4c(local_148,local_2e0,&local_158,&DAT_14c846480);
  lVar4 = param_1 + 0x48;
  uVar1 = FUN_144a7484c(lVar4,&local_158);
  auVar18 = _DAT_149934d80;
  auVar8 = *(undefined1 (*) [16])(param_3 + 8);
  dVar11 = auVar8._0_8_;
  dVar20 = auVar8._8_8_;
  dVar13 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar8 = minpd(_DAT_149934d80,auVar8);
  auVar15 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar9._8_8_ = -(ulonglong)(auVar8._8_8_ < 0.0);
  auVar9._0_8_ = -(ulonglong)(auVar8._0_8_ < 0.0);
  iVar2 = movmskpd(uVar1,auVar9);
  auVar8._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
  auVar8._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
  uVar3 = movmskpd((int)lVar4,auVar8);
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar23 = *param_3;
    dVar24 = param_3[1];
    dVar25 = param_3[2];
    dVar17 = param_3[3];
    dVar14 = param_3[3];
    dVar22 = param_3[1];
    dVar26 = param_3[1];
    dVar6 = param_3[2];
    dVar16 = param_3[2];
    dVar7 = dStack_150 * dVar6 * -1.0 +
            local_148 * dVar22 + dStack_140 * *param_3 * 1.0 + local_158 * dVar17;
    dVar10 = local_158 * dVar16 * 1.0 +
             dStack_140 * dVar26 + local_148 * *param_3 * -1.0 + dStack_150 * dVar14;
    auVar18._0_8_ =
         dStack_140 * dVar6 * 1.0 +
         ((*param_3 * dStack_150 * 1.0 + local_148 * dVar17) - local_158 * dVar22);
    auVar18._8_8_ =
         local_148 * dVar16 * -1.0 +
         ((*param_3 * local_158 * -1.0 + dStack_140 * dVar14) - dStack_150 * dVar26);
    dVar11 = dVar11 * *(double *)(param_1 + 0x30);
    dVar20 = dVar20 * *(double *)(param_1 + 0x38);
    dVar13 = *(double *)(param_1 + 0x40) * dVar13;
    dVar22 = dVar20 * dVar23 - dVar11 * dVar24;
    dVar6 = dVar13 * dVar24 - dVar20 * dVar25;
    dVar26 = dVar11 * dVar25 - dVar13 * dVar23;
    dVar6 = dVar6 + dVar6;
    dVar26 = dVar26 + dVar26;
    dVar22 = dVar22 + dVar22;
    local_f8 = (dVar22 * dVar24 - dVar25 * dVar26) + dVar17 * dVar6 + dVar11 + param_3[4];
    dStack_f0 = (dVar6 * dVar25 - dVar22 * dVar23) + dVar14 * dVar26 + dVar20 + param_3[5];
    local_e8 = (dVar26 * dVar23 - dVar24 * dVar6) + dVar17 * dVar22 + dVar13 + param_3[6];
  }
  else {
    dVar22 = *param_3;
    dVar6 = param_3[1];
    dVar14 = param_3[2];
    dVar16 = dVar6 + dVar6;
    dVar23 = dVar14 + dVar14;
    dVar26 = dVar22 * (dVar22 + dVar22);
    local_1d8 = ((double)DAT_149934d80 - (dVar14 * dVar23 + dVar6 * dVar16)) * dVar11;
    dVar17 = (DAT_149934d80._8_8_ - (dVar14 * dVar23 + dVar26)) * dVar20;
    dVar14 = param_3[3];
    dVar24 = dVar23 * dVar14;
    dVar25 = (dVar22 + dVar22) * param_3[3];
    dVar14 = dVar16 * dVar14;
    dStack_190 = (dVar23 * dVar6 - dVar25) * dVar13;
    local_198 = (dVar14 + *param_3 * dVar23) * dVar13;
    dStack_1d0 = (dVar16 * dVar22 + dVar24) * dVar11;
    local_1a8 = (dVar23 * dVar6 + dVar25) * dVar20;
    local_188 = (1.0 - (dVar26 + dVar6 * dVar16)) * dVar13;
    local_1c8 = (*param_3 * dVar23 - dVar14) * dVar11;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar17,0);
    local_1b8._0_8_ = (dVar16 * dVar22 - dVar24) * dVar20;
    local_1b8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar26 = dStack_150 + dStack_150;
    dVar17 = local_148 + local_148;
    dVar14 = local_158 * (local_158 + local_158);
    local_258 = (double)DAT_149934d80 - (local_148 * dVar17 + dStack_150 * dVar26);
    dStack_230 = DAT_149934d80._8_8_ - (local_148 * dVar17 + dVar14);
    local_208 = 1.0 - (dVar14 + dStack_150 * dVar26);
    dVar14 = (local_158 + local_158) * dStack_140;
    dStack_250 = dVar26 * local_158 + dVar17 * dStack_140;
    local_228 = dVar17 * dStack_150 + dVar14;
    local_238 = dVar26 * local_158 - dVar17 * dStack_140;
    dVar14 = dVar17 * dStack_150 - dVar14;
    local_248 = local_158 * dVar17 - dVar26 * dStack_140;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218._8_4_ = SUB84(dVar14,0);
    local_218._0_8_ = dVar26 * dStack_140 + local_158 * dVar17;
    local_218._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = *(double *)(param_1 + 0x30);
    dStack_1f0 = *(double *)(param_1 + 0x38);
    local_1e8 = *(double *)(param_1 + 0x40);
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar15._8_8_ = -(ulonglong)(0.0 <= dVar20);
    auVar15._0_8_ = -(ulonglong)(0.0 <= dVar11);
    auVar8 = blendvpd(_DAT_149936790,auVar18,auVar15);
    dVar11 = (double)(~-(ulonglong)(0.0 <= dVar13) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar13) & 0x3ff0000000000000);
    dVar13 = auVar8._0_8_;
    local_148 = local_148 * dVar13;
    dStack_150 = dStack_150 * dVar13;
    local_158 = local_158 * dVar13;
    dVar13 = auVar8._8_8_;
    local_128 = local_128 * dVar13;
    local_130 = local_130 * dVar13;
    local_138 = dVar13 * local_138;
    local_108 = local_108 * dVar11;
    local_110 = local_110 * dVar11;
    local_118 = dVar11 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar11 = local_268 * local_268 + local_278 * local_278;
    dVar13 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar12._0_8_ = dVar11 + dVar13;
    auVar12._8_8_ = dVar11 + dVar13;
    auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar8 = sqrtpd(auVar12,auVar12);
    auVar8 = divpd(auVar18,auVar8);
    auVar21._0_8_ = auVar8._0_8_ * local_268;
    auVar21._8_8_ = auVar8._8_8_ * dStack_260;
    dVar7 = (double)((ulonglong)(local_278 * auVar8._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
    dVar10 = (double)((ulonglong)(dStack_270 * auVar8._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_));
    auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar5);
  }
  dVar13 = *param_2 - local_f8;
  dVar14 = param_2[1] - dStack_f0;
  dVar11 = param_2[2] - local_e8;
  dVar22 = -dVar10;
  dVar17 = auVar18._0_8_;
  dVar26 = auVar18._8_8_;
  dVar20 = dVar14 * -dVar7 - dVar22 * dVar13;
  dVar14 = dVar11 * dVar22 - dVar17 * -1.0 * dVar14;
  dVar13 = dVar7 * dVar11 + dVar17 * -1.0 * dVar13;
  dVar11 = dVar26 * 1.0 * (dVar20 + dVar20) + dVar11 +
           ((dVar13 + dVar13) * -dVar7 - dVar22 * (dVar14 + dVar14));
  fVar19 = -(local_27c * 0.5);
  dVar13 = (double)(local_27c * 0.5);
  if (dVar13 <= dVar11) {
    dVar11 = dVar13;
  }
  if ((double)fVar19 < dVar11) {
    fVar19 = (float)dVar11;
  }
  dVar14 = (double)fVar19;
  dVar20 = dVar17 * 0.0 - dVar7 * dVar14;
  dVar11 = dVar7 * 0.0 - dVar10 * 0.0;
  dVar13 = dVar14 * dVar10 - dVar17 * 0.0;
  dVar13 = dVar13 + dVar13;
  dVar20 = dVar20 + dVar20;
  dVar11 = dVar11 + dVar11;
  dVar22 = (local_e8 + dVar26 * dVar11 + dVar14 + (dVar20 * dVar7 - dVar13 * dVar10)) - param_2[2];
  dVar14 = (local_f8 + (dVar11 * dVar10 - dVar20 * dVar17) + dVar26 * dVar13 + 0.0) - *param_2;
  dVar13 = (dStack_f0 + (dVar17 * dVar13 - dVar7 * dVar11) + dVar26 * dVar20 + 0.0) - param_2[1];
  dVar11 = SQRT(dVar22 * dVar22 + dVar14 * dVar14 + dVar13 * dVar13);
  fVar19 = (float)dVar11;
  local_280 = fVar19 - local_280;
  if (local_280 <= 0.0) {
    local_280 = 0.0;
  }
  if (fVar19 <= 1e-08) {
    param_5[2] = DAT_14c8464f0;
    dVar11 = DAT_14c8464e8;
    *param_5 = DAT_14c8464e0;
    param_5[1] = dVar11;
    dVar20 = param_5[2];
    dVar11 = *param_5;
    dVar13 = param_5[1];
  }
  else {
    dVar11 = 1.0 / dVar11;
    dVar20 = -dVar22 * dVar11;
    dVar13 = -dVar13 * dVar11;
    dVar11 = -dVar14 * dVar11;
    *param_5 = dVar11;
    param_5[1] = dVar13;
    param_5[2] = dVar20;
  }
  dVar26 = (double)local_280;
  dVar14 = param_2[2];
  dVar17 = param_2[1];
  *param_4 = *param_2 - dVar11 * dVar26;
  param_4[1] = dVar17 - dVar13 * dVar26;
  param_4[2] = dVar14 - dVar20 * dVar26;
  if ((local_d0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4c3ac FUN_147c4c3ac body=2259 status=ok
// SIG undefined FUN_147c4c3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_147c4c3ac(longlong param_1,longlong param_2,undefined1 (*param_3) [16],double *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  double dVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar31;
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auStack_328 [40];
  double local_300;
  double local_2f8;
  double dStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined1 local_2a8 [24];
  undefined1 local_290 [4];
  undefined1 local_28c [4];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_e0;
  double dVar7;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_1479b2570(param_2,param_1);
  dVar29 = *(double *)param_3[1];
  local_2b0 = param_4[10] * dVar29;
  local_2b8 = param_4[9] * *(double *)(*param_3 + 8);
  local_2c0 = param_4[8] * *(double *)*param_3;
  auVar42 = *param_3;
  dVar4 = auVar42._0_8_;
  dVar5 = auVar42._8_8_;
  dVar32 = *(double *)param_3[1];
  FUN_140493462(&local_2c0,local_28c,local_290,local_2a8);
  FUN_147c4cc80(param_1,local_2a8,param_2 + 0x60,param_2 + 100);
  uVar26 = FUN_147c4cd32(param_1,local_2a8);
  *(undefined4 *)(param_2 + 0x68) = uVar26;
  uVar21 = DAT_14c8464f0;
  uVar20 = DAT_14c8464e8;
  uVar19 = DAT_14c8464e0._4_4_;
  uVar26 = (undefined4)DAT_14c8464e0;
  dVar8 = DAT_14c8463e8;
  dVar6 = DAT_14c8463e0;
  dVar7 = DAT_14c8463d8;
  dVar31 = DAT_14c8463d0;
  puVar1 = (undefined8 *)(param_2 + 0x48);
  puVar25 = puVar1;
  uVar22 = FUN_144a7484c(puVar1,&local_168);
  auVar36 = _DAT_149934d80;
  local_2f8 = local_168;
  dStack_2f0 = dStack_160;
  dVar40 = *(double *)param_3[1];
  dVar35 = *(double *)*param_3;
  dVar37 = *(double *)(*param_3 + 8);
  dVar2 = *(double *)(*param_3 + 8);
  dVar3 = *(double *)param_3[1];
  auVar38 = minpd(*param_3,auVar42);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = dVar3;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = dVar32;
  auVar42 = minpd(auVar41,auVar42);
  auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  iVar23 = movmskpd(uVar22,auVar39);
  auVar38._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
  auVar38._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
  uVar24 = movmskpd((int)puVar25,auVar38);
  if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
    dVar29 = dStack_160 * dVar6 * -1.0 +
             local_158 * dVar7 + dVar31 * dStack_150 * 1.0 + dVar8 * local_168;
    dVar32 = local_168 * dVar6 * 1.0 +
             dStack_150 * dVar7 + dVar31 * local_158 * -1.0 + dVar8 * dStack_160;
    auVar36._0_8_ =
         dStack_150 * dVar6 * 1.0 +
         ((dVar31 * dStack_160 * 1.0 + dVar8 * local_158) - dVar7 * local_168);
    auVar36._8_8_ =
         local_158 * dVar6 * -1.0 +
         ((dVar31 * local_168 * -1.0 + dVar8 * dStack_150) - dVar7 * dStack_160);
  }
  else {
    uStack_2e0 = (undefined4)uVar20;
    uStack_2dc = (undefined4)((ulonglong)uVar20 >> 0x20);
    local_2e8 = uVar26;
    uStack_2e4 = uVar19;
    local_300 = dVar29 * dVar40;
    uStack_2d0 = 0;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar21;
    dVar37 = dVar7 + dVar7;
    dVar40 = dVar6 + dVar6;
    dVar29 = dVar31 * (dVar31 + dVar31);
    dVar43 = (dVar31 + dVar31) * dVar8;
    local_198 = (1.0 - (dVar29 + dVar7 * dVar37)) * dVar32;
    local_1a8 = (dVar37 * dVar8 + dVar31 * dVar40) * dVar32;
    local_1c8 = (dVar37 * dVar31 - dVar40 * dVar8) * dVar5;
    dStack_1a0 = (dVar40 * dVar7 - dVar43) * dVar32;
    dStack_1c0 = (1.0 - (dVar6 * dVar40 + dVar29)) * dVar5;
    dVar29 = (dVar37 * dVar31 + dVar40 * dVar8) * dVar4;
    local_1b8 = (dVar40 * dVar7 + dVar43) * dVar5;
    local_1e8._8_4_ = SUB84(dVar29,0);
    local_1e8._0_8_ = (1.0 - (dVar6 * dVar40 + dVar7 * dVar37)) * dVar4;
    local_1e8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    local_1d8 = (dVar31 * dVar40 - dVar37 * dVar8) * dVar4;
    uStack_1d0 = 0;
    uStack_1f0 = DAT_149935300._8_8_;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_178 = blendpd(auVar34,_DAT_149935300,2);
    local_188 = CONCAT44(uVar19,uVar26);
    uStack_180 = uVar20;
    dVar31 = dStack_160 + dStack_160;
    dVar37 = local_158 + local_158;
    dVar29 = local_168 * (local_168 + local_168);
    local_218 = (1.0 - (dVar29 + dStack_160 * dVar31)) * dVar3;
    dVar40 = (local_168 + local_168) * dStack_150;
    local_248 = (dVar31 * local_168 - dVar37 * dStack_150) * dVar2;
    dVar32 = (dVar37 * dStack_160 - dVar40) * dVar3;
    local_268 = ((double)DAT_149934d80 - (local_158 * dVar37 + dStack_160 * dVar31)) * dVar35;
    dStack_240 = (DAT_149934d80._8_8_ - (local_158 * dVar37 + dVar29)) * dVar2;
    dStack_260 = (dVar31 * local_168 + dVar37 * dStack_150) * dVar35;
    local_238 = (dVar37 * dStack_160 + dVar40) * dVar2;
    local_258 = (local_168 * dVar37 - dVar31 * dStack_150) * dVar35;
    uStack_250 = 0;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar32,0);
    local_228._0_8_ = (dVar31 * dStack_150 + local_168 * dVar37) * dVar3;
    local_228._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    uStack_210 = 0;
    local_208 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_200 = DAT_14c8464e8;
    local_1f8 = DAT_14c8464f0;
    local_2d8 = dVar3;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar2);
    auVar27._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar35);
    auVar42 = blendvpd(_DAT_149936790,auVar36,auVar27);
    dVar29 = (double)(~-(ulonglong)(0.0 <= local_300) & 0xbff0000000000000 |
                     (ulonglong)((uint)(-(ulonglong)(0.0 <= local_300) >> 0x20) & 0x3ff00000) <<
                     0x20);
    dVar32 = auVar42._0_8_;
    local_158 = local_158 * dVar32;
    dStack_160 = dStack_160 * dVar32;
    local_168 = local_168 * dVar32;
    dVar32 = auVar42._8_8_;
    local_138 = local_138 * dVar32;
    local_140 = local_140 * dVar32;
    local_148 = dVar32 * local_148;
    local_118 = local_118 * dVar29;
    local_120 = local_120 * dVar29;
    local_128 = dVar29 * local_128;
    FUN_14481fd10(&local_288,&local_168);
    dVar29 = local_278 * local_278 + local_288 * local_288;
    dVar32 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar30._0_8_ = dVar29 + dVar32;
    auVar30._8_8_ = dVar29 + dVar32;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
    auVar42 = sqrtpd(auVar30,auVar30);
    auVar42 = divpd(auVar36,auVar42);
    auVar33._0_8_ = auVar42._0_8_ * local_278;
    auVar33._8_8_ = auVar42._8_8_ * dStack_270;
    auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar28);
    dVar29 = (double)((ulonglong)(local_288 * auVar42._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
    dVar32 = (double)((ulonglong)(dStack_280 * auVar42._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
    dVar40 = *(double *)param_3[1];
    dVar35 = *(double *)*param_3;
    dVar37 = *(double *)(*param_3 + 8);
  }
  dVar11 = *(double *)(param_1 + 0x30) * param_4[8];
  dVar12 = *(double *)(param_1 + 0x38) * param_4[9];
  dVar10 = *(double *)(param_1 + 0x40) * param_4[10];
  dVar16 = *param_4;
  dVar17 = param_4[1];
  dVar18 = param_4[2];
  dVar2 = param_4[3];
  dVar3 = param_4[3];
  dVar13 = dVar12 * dVar16 - dVar11 * dVar17;
  dVar14 = dVar10 * dVar17 - dVar12 * dVar18;
  dVar15 = dVar11 * dVar18 - dVar16 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar9 = param_4[5];
  dVar4 = param_4[6];
  dVar5 = *param_4;
  dVar31 = *param_4;
  dVar6 = param_4[1];
  dVar7 = param_4[1];
  dVar8 = param_4[2];
  dVar43 = param_4[2];
  *(double *)(param_2 + 0x30) =
       dVar35 * ((dVar13 * dVar17 - dVar15 * dVar18) + dVar2 * dVar14 + dVar11 + param_4[4]);
  *(double *)(param_2 + 0x38) =
       ((dVar18 * dVar14 - dVar16 * dVar13) + dVar3 * dVar15 + dVar12 + dVar9) * dVar37;
  *(double *)(param_2 + 0x40) =
       (dVar13 * dVar2 + dVar10 + (dVar15 * dVar16 - dVar14 * dVar17) + dVar4) * dVar40;
  dVar35 = auVar36._0_8_;
  dVar37 = auVar36._8_8_;
  local_168 = dVar32 * dVar8 * -1.0 + dVar35 * dVar6 + dVar37 * dVar5 * 1.0 + dVar29 * dVar2;
  dStack_160 = dVar29 * dVar43 * 1.0 + dVar37 * dVar7 + dVar35 * dVar31 * -1.0 + dVar32 * dVar3;
  local_158 = dVar37 * dVar8 * 1.0 + ((dVar5 * dVar32 * 1.0 + dVar2 * dVar35) - dVar29 * dVar6);
  dStack_150 = dVar35 * dVar43 * -1.0 + ((dVar31 * dVar29 * -1.0 + dVar3 * dVar37) - dVar32 * dVar7)
  ;
  FUN_1448052ee(&local_168,local_1e8);
  *(double *)(param_2 + 0x58) = local_1d8;
  *puVar1 = local_1e8._0_8_;
  *(undefined8 *)(param_2 + 0x50) = local_1e8._8_8_;
  if ((local_e0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4cc80 FUN_147c4cc80 body=177 status=ok
// SIG undefined FUN_147c4cc80(void)

void FUN_147c4cc80(longlong param_1,double *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  dVar1 = param_2[2];
  dVar2 = ABS(*param_2);
  if (ABS(*param_2) <= ABS(param_2[1])) {
    dVar2 = ABS(param_2[1]);
  }
  fVar4 = (float)((double)(*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x60) +
                          *(float *)(param_1 + 100)) * ABS(dVar1) * 0.5);
  if (fVar4 <= 0.1) {
    fVar4 = 0.1;
  }
  fVar3 = *(float *)(param_1 + 0x60) * (float)dVar2;
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  *param_3 = fVar3;
  fVar4 = (float)((double)(*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x60) +
                          *(float *)(param_1 + 100)) * ABS(dVar1) * 0.5);
  if (fVar4 <= 0.1) {
    fVar4 = 0.1;
  }
  fVar3 = *(float *)(param_1 + 100) * (float)dVar2;
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  *param_4 = fVar3;
  return;
}



// FUNCTION 147c4cd32 FUN_147c4cd32 body=164 status=ok
// SIG undefined FUN_147c4cd32(void)

void FUN_147c4cd32(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147c4cc80(param_1,param_2,&local_2c,&local_30);
  fVar1 = (float)(ABS(*(double *)(param_2 + 0x10)) *
                  (double)(*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x60) +
                          *(float *)(param_1 + 100)) * 0.5);
  if (fVar1 <= 0.1) {
    fVar1 = 0.1;
  }
  fVar2 = (fVar1 + fVar1) - (local_2c + local_30);
  fVar1 = 0.1;
  if (0.1 <= fVar2) {
    fVar1 = fVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar1);
}



// FUNCTION 147c4cdd8 FUN_147c4cdd8 body=453 status=ok
// SIG undefined FUN_147c4cdd8(void)

void FUN_147c4cdd8(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0x3ff0000000000000;
  lStack_60 = 0x3ff0000000000000;
  local_58 = 0x3ff0000000000000;
  if (param_2 == (longlong *)0x0) {
    plVar6 = param_1 + 0x29;
    param_2 = (longlong *)param_1[4];
    if (param_2 == (longlong *)0x0) goto LAB_147c4ceba;
    lVar4 = FUN_144a3a302();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_147c4ceba;
  }
  local_68 = param_2[0x50];
  lStack_60 = param_2[0x51];
  local_58 = param_2[0x52];
  plVar6 = param_2 + 0x82;
  lVar4 = FUN_144a745da();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
     ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30 &&
      (plVar5 = (longlong *)(**(code **)(*param_2 + 0x7b8))(param_2,param_1[5],1,0xffffffff),
      plVar5 != (longlong *)0x0)))) {
    plVar6 = plVar5;
  }
LAB_147c4ceba:
  if ((*(byte *)(plVar6 + 1) & 2) == 0) {
    lVar4 = FUN_14034b308(plVar6);
    fVar8 = *(float *)(plVar6 + 0x1c);
    if (lVar4 == 0) {
      dVar1 = 0.75;
      dVar2 = 1.0;
    }
    else {
      fVar7 = *(float *)(lVar4 + 0x3c) * 0.001;
      fVar3 = 9e-05;
      if (9e-05 <= fVar7) {
        fVar3 = fVar7;
      }
      dVar2 = (double)fVar3;
      dVar1 = (double)*(float *)(lVar4 + 0x4c);
    }
    dVar9 = (double)(**(code **)(*param_1 + 0x2b0))(param_1,&local_68);
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 9.999999747378752e-05) {
      dVar1 = 9.999999747378752e-05;
    }
    dVar1 = pow(dVar9 * dVar2,dVar1);
    fVar8 = (float)((double)fVar8 * dVar1);
  }
  else {
    fVar8 = *(float *)((longlong)plVar6 + 0x9c);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar8);
  }
  return;
}



// FUNCTION 147c4cf9e FUN_147c4cf9e body=22 status=ok
// SIG undefined FUN_147c4cf9e(void)

float FUN_147c4cf9e(longlong *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(*param_1 + 0x2b0))();
  return (float)dVar1;
}



// FUNCTION 147c4cfbe FUN_147c4cfbe body=161 status=ok
// SIG undefined FUN_147c4cfbe(void)

void FUN_147c4cfbe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | *(byte *)(param_2 + 0x18) & 1;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  lVar5 = *(longlong *)(param_2 + 0x98);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(longlong *)(param_1 + 0x98) = lVar5;
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
  puVar6 = (undefined8 *)(param_2 + 0x30);
  puVar7 = (undefined8 *)(param_1 + 0x30);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}



// FUNCTION 147c4d060 FUN_147c4d060 body=112 status=ok
// SIG undefined FUN_147c4d060(void)

void FUN_147c4d060(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | *(byte *)(param_2 + 0x18) & 1;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 != puVar2) {
    *(undefined8 **)(param_1 + 0x30) = puVar2;
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
                    /* WARNING: Could not recover jumptable at 0x000147c4d0cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c4d0d0 FUN_147c4d0d0 body=373 status=ok
// SIG undefined FUN_147c4d0d0(void)

undefined8
FUN_147c4d0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined1 local_1e8 [208];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0x3ff0000000000000;
  local_58 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3ff0000000000000;
  lVar1 = FUN_14034b308(param_2);
  if (lVar1 == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x3c) * 0.001;
    fVar3 = 9e-08;
    if (9e-08 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  FUN_147c68626(&local_118,param_3,param_4,fVar3);
  FUN_14076c1ae(&local_118);
  memcpy(local_1e8,&local_118,0xd0);
  local_1f8 = param_6;
  FUN_14076c2b0(param_1,param_2,local_1e8,param_5);
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4d281 FUN_147c4d281 body=182 status=ok
// SIG undefined FUN_147c4d281(void)

void FUN_147c4d281(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  local_88 = param_2;
  FUN_145c3f772(&local_80,param_3);
  local_30 = param_4;
  FUN_1447cd2ec(param_1,&local_88);
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4d33e FUN_147c4d33e body=361 status=ok
// SIG undefined FUN_147c4d33e(void)

void FUN_147c4d33e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143607c2c(param_1,local_38[2],plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4d4a8 FUN_147c4d4a8 body=367 status=ok
// SIG undefined FUN_147c4d4a8(void)

void FUN_147c4d4a8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c4d618(param_1,local_30,plVar1,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4d618 FUN_147c4d618 body=297 status=ok
// SIG undefined FUN_147c4d618(void)

void FUN_147c4d618(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x850) != 0)) {
    iVar1 = (int)param_3[1];
    if (iVar1 == *(int *)(param_4 + 8)) {
      local_58 = 0;
      uStack_50 = 0;
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar1);
      }
      if (iVar1 != 0) {
        FUN_14071ff8a(&local_58);
        if (0 < (int)param_3[1]) {
          lVar5 = 0;
          do {
            lVar4 = (**(code **)(*(longlong *)(param_2 + 0x2b8) + 0x10))
                              ((longlong *)(param_2 + 0x2b8),*(undefined4 *)(*param_3 + lVar5 * 4));
            uVar2 = uStack_50;
            if (lVar4 != 0) {
              lVar6 = (longlong)(int)uStack_50;
              uVar3 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
              if (uStack_50._4_4_ < uVar3) {
                FUN_14075a758(&local_58,uVar2 & 0xffffffff);
              }
              *(longlong *)(local_58 + lVar6 * 8) = lVar4;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)param_3[1]);
        }
      }
      if ((int)uStack_50 != 0) {
        FUN_146ee6cf8(*(undefined8 *)(param_1 + 0x850),&local_58,param_4,1);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4d744 FUN_147c4d744 body=139 status=ok
// SIG undefined FUN_147c4d744(void)

void FUN_147c4d744(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c4d7d0(param_1,&local_28);
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



// FUNCTION 147c4d7d0 FUN_147c4d7d0 body=436 status=ok
// SIG undefined FUN_147c4d7d0(void)

longlong * FUN_147c4d7d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x708);
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x710) - *(int *)(param_1 + 0x73c);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_140c5c1ec(param_2);
  }
  local_48 = param_1 + 0x718;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar1;
  local_68 = plVar1;
  local_60 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      local_50 = CONCAT44(*(undefined4 *)(*local_90 + 4 + (longlong)iStack_74 * 0x68),
                          *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0x68));
      uVar2 = FUN_14479d2ce(&local_50);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447d05f2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_147c66148(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4d986 FUN_147c4d986 body=139 status=ok
// SIG undefined FUN_147c4d986(void)

void FUN_147c4d986(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c4da12(param_1,&local_28);
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



// FUNCTION 147c4da12 FUN_147c4da12 body=436 status=ok
// SIG undefined FUN_147c4da12(void)

longlong * FUN_147c4da12(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x6a0);
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x6a8) - *(int *)(param_1 + 0x6d4);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar3 != 0) {
    FUN_140337ccc(param_2);
  }
  local_48 = param_1 + 0x6b0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar1;
  local_68 = plVar1;
  local_60 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      local_50 = CONCAT44(*(undefined4 *)(*local_90 + 4 + (longlong)iStack_74 * 0x38),
                          *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0x38));
      uVar2 = FUN_14479d2ce(&local_50);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140c43e06(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_147c65f44(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4dbc8 FUN_147c4dbc8 body=228 status=ok
// SIG undefined FUN_147c4dbc8(void)

void FUN_147c4dbc8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c4dcae(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4dcae FUN_147c4dcae body=335 status=ok
// SIG undefined FUN_147c4dcae(void)

void FUN_147c4dcae(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0' && param_2 != 0) {
    FUN_147c4f2a2(&local_38);
    FUN_1410789fe(param_2 + 0x59e,param_1,local_38);
    local_48 = 0;
    FUN_14485c47a(&local_48,param_2);
    iVar2 = (int)local_48;
    iVar3 = local_48._4_4_;
    uVar4 = FUN_144a78877(local_48 & 0xffffffff,local_48._4_4_);
    if (*(int *)(param_1 + 0x760) != *(int *)(param_1 + 0x78c)) {
      lVar6 = param_1 + 0x790;
      if (*(longlong *)(param_1 + 0x798) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x798);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x7a0) - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x758);
        do {
          lVar7 = (longlong)iVar5 * 0x60;
          lVar1 = lVar6 + lVar7;
          if ((*(int *)(lVar6 + lVar7) == iVar2) && (*(int *)(lVar6 + 4 + lVar7) == iVar3)) {
            if (lVar1 != -8 && lVar1 != 0) {
              local_48 = 0;
              uStack_40 = 0;
              FUN_147c4f8c8(&local_48);
              FUN_143607c2c(param_1,param_2,&local_48,1);
              if (local_48 != 0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x58);
        } while (iVar5 != -1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c4ddfe FUN_147c4ddfe body=228 status=ok
// SIG undefined FUN_147c4ddfe(void)

void FUN_147c4ddfe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c4dee4(param_1,local_20,local_21);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4dee4 FUN_147c4dee4 body=126 status=ok
// SIG undefined FUN_147c4dee4(void)

void FUN_147c4dee4(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\x01' && param_2 != 0) {
    FUN_147c4f45c(&local_30);
    FUN_1410789fe(param_2 + 0x59e,param_1,local_30);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4df7c FUN_147c4df7c body=37 status=ok
// SIG undefined FUN_147c4df7c(void)

void FUN_147c4df7c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147c4dfa2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147c4dfa2 FUN_147c4dfa2 body=97 status=ok
// SIG undefined FUN_147c4dfa2(void)

bool FUN_147c4dfa2(longlong param_1)

{
  int iVar1;
  
  if (DAT_14c76171a == '\x01') {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      return *(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03';
    }
  }
  else {
    iVar1 = FUN_1417bb91c(param_1);
    if (iVar1 == 0) {
      return true;
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      return iVar1 != 3 && *(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03';
    }
  }
  return false;
}



// FUNCTION 147c4e00a FUN_147c4e00a body=163 status=ok
// SIG undefined FUN_147c4e00a(void)

void FUN_147c4e00a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147c4e0ae(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4e0ae FUN_147c4e0ae body=403 status=ok
// SIG undefined FUN_147c4e0ae(void)

ulonglong FUN_147c4e0ae(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
    iVar8 = (uint)local_38;
    iVar7 = local_38._4_4_;
  }
  uVar1 = FUN_144a78877(iVar8,iVar7);
  if (*(int *)(param_1 + 0x6a8) != *(int *)(param_1 + 0x6d4)) {
    lVar5 = param_1 + 0x6d8;
    if (*(longlong *)(param_1 + 0x6e0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x6e0);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x6e8) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x6a0);
      do {
        lVar6 = (longlong)iVar4 * 0x38;
        if ((*(int *)(lVar5 + lVar6) == iVar8) && (*(int *)(lVar5 + 4 + lVar6) == iVar7)) {
          uVar3 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          goto LAB_147c4e149;
        }
        iVar4 = *(int *)(lVar6 + lVar5 + 0x30);
      } while (iVar4 != -1);
    }
  }
  if (param_2 == 0) {
    iVar8 = 0;
    uVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
    uVar1 = (uint)local_38;
    iVar8 = local_38._4_4_;
  }
  uVar2 = FUN_144a78877(uVar1,iVar8);
  if (*(int *)(param_1 + 0x7b0) != *(int *)(param_1 + 0x7dc)) {
    lVar5 = param_1 + 0x7e0;
    if (*(longlong *)(param_1 + 0x7e8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x7e8);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x7f0) - 1U & uVar2) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x7a8);
      do {
        lVar6 = (longlong)iVar7 * 0x60;
        uVar2 = *(uint *)(lVar5 + lVar6) ^ uVar1;
        bVar9 = *(int *)(lVar5 + 4 + lVar6) == iVar8 && uVar2 == 0;
        uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar9);
        if (bVar9) break;
        iVar7 = *(int *)(lVar6 + lVar5 + 0x58);
      } while (iVar7 != -1);
      goto LAB_147c4e149;
    }
  }
  uVar3 = 0;
LAB_147c4e149:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147c4e25c FUN_147c4e25c body=256 status=ok
// SIG undefined FUN_147c4e25c(void)

void FUN_147c4e25c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c4e35e(param_1,local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4e35e FUN_147c4e35e body=1555 status=ok
// SIG undefined FUN_147c4e35e(void)

void FUN_147c4e35e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120 [2];
  int local_110;
  int iStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)((longlong)param_1 + 0x850) != 0)) {
    local_b8 = 0;
    FUN_14485c47a(&local_b8);
    uVar5 = local_b8;
    iVar8 = (int)local_b8;
    iVar11 = local_b8._4_4_;
    local_110 = (int)local_b8;
    iStack_10c = local_b8._4_4_;
    uVar7 = FUN_144a78877(local_b8 & 0xffffffff,local_b8._4_4_);
    if (*(int *)((longlong)param_1 + 0x760) != *(int *)((longlong)param_1 + 0x78c)) {
      lVar9 = (longlong)param_1 + 0x790;
      if (*(longlong *)((longlong)param_1 + 0x798) != 0) {
        lVar9 = *(longlong *)((longlong)param_1 + 0x798);
      }
      iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)param_1 + 0x7a0) - 1U & uVar7) * 4);
      if (iVar10 != -1) {
        lVar9 = *(longlong *)((longlong)param_1 + 0x758);
        do {
          lVar12 = (longlong)iVar10 * 0x60;
          lVar1 = lVar9 + lVar12;
          if ((*(int *)(lVar9 + lVar12) == iVar8) && (*(int *)(lVar9 + 4 + lVar12) == iVar11)) {
            if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
              lVar9 = param_3[1];
              if ((longlong)(int)lVar9 != 0) {
                lVar12 = *param_3;
                lVar15 = 0;
                do {
                  local_b8 = CONCAT44(0xffffffff,*(undefined4 *)(lVar12 + lVar15));
                  FUN_147c4fec2(lVar1 + 8,&local_b8);
                  lVar15 = lVar15 + 4;
                } while ((longlong)(int)lVar9 * 4 != lVar15);
              }
              if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
                FUN_147c651b6((longlong *)((longlong)param_1 + 0x758),&local_110);
              }
              goto LAB_147c4e5a0;
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x58);
        } while (iVar10 != -1);
      }
    }
    uVar7 = FUN_144a78877(uVar5 & 0xffffffff,iVar11);
    if (*(int *)((longlong)param_1 + 0x7b0) != *(int *)((longlong)param_1 + 0x7dc)) {
      lVar9 = (longlong)param_1 + 0x7e0;
      if (*(longlong *)((longlong)param_1 + 0x7e8) != 0) {
        lVar9 = *(longlong *)((longlong)param_1 + 0x7e8);
      }
      iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)param_1 + 0x7f0) - 1U & uVar7) * 4);
      if (iVar10 != -1) {
        plVar13 = (longlong *)((longlong)param_1 + 0x7a8);
        lVar9 = *plVar13;
        do {
          lVar12 = (longlong)iVar10 * 0x60;
          lVar1 = lVar9 + lVar12;
          if ((*(int *)(lVar9 + lVar12) == iVar8) && (*(int *)(lVar9 + 4 + lVar12) == iVar11)) {
            lVar9 = lVar1 + 8;
            if (lVar9 != 0 && lVar1 != 0) {
              lVar12 = *param_3;
              local_130 = plVar13;
              local_128 = param_2;
              if ((*(longlong *)((longlong)param_1 + 0x868) != 0) &&
                 (lVar15 = param_3[1], (longlong)(int)lVar15 != 0)) {
                uVar4 = CONCAT44(iStack_10c,local_110);
                lVar14 = 0;
                local_148 = param_1;
                local_140 = param_3;
                local_138 = lVar9;
                do {
                  local_b8 = 0;
                  uStack_b0 = 0xffffffffffffffff;
                  FUN_147c69ecc(&local_b8,uVar4,*(undefined4 *)(lVar12 + lVar14));
                  if (uStack_b0._4_4_ != -1) {
                    (**(code **)(**(longlong **)((longlong)local_148 + 0x868) + 0x70))
                              (*(longlong **)((longlong)local_148 + 0x868),&local_b8);
                  }
                  lVar14 = lVar14 + 4;
                } while ((longlong)(int)lVar15 * 4 != lVar14);
                lVar12 = *local_140;
                param_1 = local_148;
                param_3 = local_140;
                lVar9 = local_138;
              }
              local_148 = (longlong *)(longlong)(int)param_3[1];
              if (local_148 != (longlong *)0x0) {
                local_148 = (longlong *)((longlong)local_148 << 2);
                plVar13 = (longlong *)0x0;
                do {
                  local_b8 = CONCAT44(0xffffffff,*(undefined4 *)(lVar12 + (longlong)plVar13));
                  FUN_147c4fec2(lVar9,&local_b8);
                  plVar13 = (longlong *)((longlong)plVar13 + 4);
                } while (local_148 != plVar13);
              }
              param_2 = local_128;
              if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
                FUN_147c651b6(local_130,&local_110);
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x58);
        } while (iVar10 != -1);
      }
    }
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar7 = FUN_144a78877(uVar5 & 0xffffffff,iVar11);
    if (*(int *)((longlong)param_1 + 0x6a8) != *(int *)((longlong)param_1 + 0x6d4)) {
      lVar9 = (longlong)param_1 + 0x6d8;
      if (*(longlong *)((longlong)param_1 + 0x6e0) != 0) {
        lVar9 = *(longlong *)((longlong)param_1 + 0x6e0);
      }
      iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)param_1 + 0x6e8) - 1U & uVar7) * 4);
      if (iVar10 != -1) {
        lVar9 = *(longlong *)((longlong)param_1 + 0x6a0);
        do {
          lVar12 = (longlong)iVar10 * 0x38;
          lVar1 = lVar9 + lVar12;
          if ((*(int *)(lVar9 + lVar12) == iVar8) && (*(int *)(lVar9 + 4 + lVar12) == iVar11)) {
            if ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0 && lVar1 != 0) {
              iVar8 = *(int *)(lVar1 + 0x10);
              local_148 = (longlong *)((longlong)param_1 + 0x6a0);
              local_140 = param_3;
              while (0 < iVar8) {
                if (*(longlong *)((longlong)param_1 + 0x868) != 0) {
                  local_108 = 0;
                  uStack_100 = 0xffffffffffffffff;
                  puVar3 = *(undefined4 **)(lVar1 + 8);
                  uVar2 = *puVar3;
                  local_120[0] = 0;
                  FUN_14485c47a();
                  local_108 = local_120[0];
                  iVar8 = puVar3[1];
                  uStack_100 = CONCAT44(iVar8,uVar2);
                  if (iVar8 != -1) {
                    (**(code **)(**(longlong **)((longlong)param_1 + 0x868) + 0x70))
                              (*(longlong **)((longlong)param_1 + 0x868),&local_108);
                  }
                  iVar8 = *(int *)(lVar1 + 0x10);
                }
                iVar11 = 0;
                if (iVar8 + -1 != 0) {
                  memmove(*(void **)(lVar1 + 8),(void *)((longlong)*(void **)(lVar1 + 8) + 8),
                          (longlong)(iVar8 + -1) << 3);
                  iVar11 = *(int *)(lVar1 + 0x10) + -1;
                }
                *(int *)(lVar1 + 0x10) = iVar11;
                FUN_147c65d28();
                iVar8 = *(int *)(lVar1 + 0x10);
              }
              cVar6 = (**(code **)(*param_2 + 0x360))(param_2);
              if (cVar6 != '\0') {
                FUN_147c4fab9(local_120,param_2 + 0x57,local_140);
                local_e8 = 0;
                local_e0 = 0;
                local_108 = 0;
                uStack_100 = 0;
                local_dc = 0xffffffff00000080;
                local_d4 = 0;
                local_c8 = 0;
                local_c0 = 0;
                FUN_147c6554a(&local_108,local_120);
                FUN_147c4fb64(&local_b8,&local_108);
                local_c0 = 0;
                if (local_c8 != 0) {
                  FUN_1400020a8();
                }
                FUN_146eecb48(&local_108);
                if (local_120[0] != 0) {
                  FUN_1400020a8();
                }
              }
              if ((int)uStack_b0 != local_84) {
                FUN_146ee5e86(*(undefined8 *)((longlong)param_1 + 0x850),&local_b8);
                FUN_147c4fbc2(param_1,&local_b8);
              }
              if (*(int *)(lVar1 + 0x10) == 0) {
                *(undefined1 *)(lVar1 + 0x29) = 1;
                cVar6 = FUN_147c4dfa2(param_1);
                if ((cVar6 != '\0') && (lVar9 = FUN_14479d2ce(lVar1 + 0x18), lVar9 != 0)) {
                  *(undefined1 *)(lVar9 + 0x194) = 1;
                }
                FUN_147c65dc4(local_148,&local_110);
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x30);
        } while (iVar10 != -1);
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_146eecb48(&local_b8);
  }
LAB_147c4e5a0:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4e972 FUN_147c4e972 body=156 status=ok
// SIG undefined FUN_147c4e972(void)

void FUN_147c4e972(undefined8 param_1,longlong param_2)

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
  FUN_147c4ea10(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4ea10 FUN_147c4ea10 body=1530 status=ok
// SIG undefined FUN_147c4ea10(void)

void FUN_147c4ea10(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  undefined1 auStack_188 [40];
  longlong *local_160;
  longlong local_158 [2];
  longlong local_148 [3];
  ulonglong local_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  uint local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x850) != 0)) {
    local_b8 = (longlong *)0x0;
    FUN_14485c47a(&local_b8);
    local_130 = (ulonglong)local_b8;
    iVar7 = FUN_147c651b6(param_1 + 0x758);
    if (iVar7 == 0) {
      local_b8 = (longlong *)0x0;
      FUN_14485c47a(&local_b8,param_2);
      iVar7 = (int)local_b8;
      iVar4 = local_b8._4_4_;
      uVar8 = FUN_144a78877((ulonglong)local_b8 & 0xffffffff,local_b8._4_4_);
      if (*(int *)(param_1 + 0x7b0) != *(int *)(param_1 + 0x7dc)) {
        lVar9 = param_1 + 0x7e0;
        if (*(longlong *)(param_1 + 0x7e8) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x7e8);
        }
        iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x7f0) - 1U & uVar8) * 4);
        if (iVar10 != -1) {
          plVar12 = (longlong *)(param_1 + 0x7a8);
          lVar9 = *plVar12;
          do {
            lVar11 = (longlong)iVar10 * 0x60;
            lVar2 = lVar9 + lVar11;
            if ((*(int *)(lVar9 + lVar11) == iVar7) && (*(int *)(lVar9 + 4 + lVar11) == iVar4)) {
              plVar14 = (longlong *)(lVar2 + 8);
              if (plVar14 != (longlong *)0x0 && lVar2 != 0) {
                if (*(longlong *)(param_1 + 0x868) != 0) {
                  uVar1 = lVar2 + 0x18;
                  local_128 = 0x100000000;
                  local_118 = 0xffffffff;
                  local_110 = 0;
                  local_160 = plVar12;
                  uStack_120 = uVar1;
                  if (*(int *)(lVar2 + 0x30) != 0) {
                    FUN_1449c0562(&local_128);
                  }
                  local_a0 = local_118;
                  local_98 = CONCAT44(local_10c,local_110);
                  uStack_b0 = local_128;
                  local_a8 = uStack_120;
                  uVar8 = *(uint *)(lVar2 + 0x30);
                  local_128 = CONCAT44(1 << ((byte)uVar8 & 0x1f),(int)uVar8 >> 5);
                  local_118 = CONCAT44(uVar8,-1 << ((byte)uVar8 & 0x1f));
                  local_110 = uVar8 & 0xffffffe0;
                  uStack_120 = uVar1;
                  local_b8 = plVar14;
                  if (*(uint *)(lVar2 + 0x30) != uVar8) {
                    FUN_1449c0562(&local_128);
                    uVar8 = local_118._4_4_;
                  }
                  uVar5 = uStack_120;
                  uVar1 = local_130;
                  plVar12 = local_160;
                  if ((local_b8 != plVar14 || local_a8 != uStack_120) || local_a0._4_4_ != uVar8) {
                    do {
                      uStack_120 = *(ulonglong *)(*local_b8 + (longlong)(int)local_a0._4_4_ * 0x10);
                      local_128 = uVar1;
                      if (uStack_120 >> 0x20 != 0xffffffff) {
                        (**(code **)(**(longlong **)(param_1 + 0x868) + 0x70))
                                  (*(longlong **)(param_1 + 0x868),&local_128);
                      }
                      local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
                      FUN_1449c0562(&uStack_b0);
                      plVar12 = local_160;
                    } while (local_b8 != plVar14 || (local_a8 != uVar5 || local_a0._4_4_ != uVar8));
                  }
                }
                local_b8 = (longlong *)0x0;
                FUN_14485c47a(&local_b8,param_2);
                local_128 = (ulonglong)local_b8;
                FUN_147c651b6(plVar12);
              }
              break;
            }
            iVar10 = *(int *)(lVar2 + 0x58);
          } while (iVar10 != -1);
        }
      }
      local_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
      FUN_147c8cb8a(local_d8,*(undefined8 *)(lVar9 + 0x260));
      local_128 = 0;
      FUN_14485c47a(&local_128,param_2);
      iVar7 = (int)local_128;
      iVar4 = local_128._4_4_;
      uVar8 = FUN_144a78877(local_128 & 0xffffffff,local_128._4_4_);
      if (*(int *)(param_1 + 0x6a8) != *(int *)(param_1 + 0x6d4)) {
        lVar9 = param_1 + 0x6d8;
        if (*(longlong *)(param_1 + 0x6e0) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x6e0);
        }
        iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x6e8) - 1U & uVar8) * 4);
        if (iVar10 != -1) {
          lVar9 = *(longlong *)(param_1 + 0x6a0);
          do {
            lVar11 = (longlong)iVar10 * 0x38;
            lVar2 = lVar9 + lVar11;
            if ((*(int *)(lVar9 + lVar11) == iVar7) && (*(int *)(lVar9 + 4 + lVar11) == iVar4)) {
              if (lVar2 + 8 != 0 && lVar2 != 0) {
                *(undefined1 *)(lVar2 + 0x29) = 1;
                cVar6 = (**(code **)(*param_2 + 0x360))(param_2);
                if (cVar6 != '\0') {
                  local_148[0] = 0;
                  local_148[1] = 0;
                  FUN_147c4fa28(local_148,lVar2 + 8);
                  FUN_147c4fab9(local_158,param_2 + 0x57,local_148);
                  local_108 = 0;
                  local_100 = 0;
                  local_128 = 0;
                  uStack_120 = 0;
                  local_fc = 0xffffffff00000080;
                  local_f4 = 0;
                  local_e8 = 0;
                  local_e0 = 0;
                  FUN_147c6554a(&local_128,local_158);
                  FUN_147c4fb64(&local_b8,&local_128);
                  local_e0 = 0;
                  if (local_e8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_146eecb48(&local_128);
                  if (local_158[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_148[0] != 0) {
                    FUN_1400020a8();
                  }
                }
                cVar6 = FUN_147c4dfa2(param_1);
                if ((cVar6 != '\0') && (lVar9 = FUN_14479d2ce(lVar2 + 0x18), lVar9 != 0)) {
                  *(undefined1 *)(lVar9 + 0x194) = 1;
                }
                uVar1 = local_130;
                if ((*(longlong *)(param_1 + 0x868) != 0) && ((longlong)*(int *)(lVar2 + 0x10) != 0)
                   ) {
                  puVar13 = *(ulonglong **)(lVar2 + 8);
                  puVar3 = puVar13 + *(int *)(lVar2 + 0x10);
                  do {
                    local_128 = uVar1;
                    uStack_120 = *puVar13;
                    if (*(int *)((longlong)puVar13 + 4) != -1) {
                      (**(code **)(**(longlong **)(param_1 + 0x868) + 0x70))
                                (*(longlong **)(param_1 + 0x868),&local_128);
                    }
                    puVar13 = puVar13 + 1;
                  } while (puVar13 != puVar3);
                }
                if ((int)uStack_b0 != local_84) {
                  FUN_146ee5e86(*(undefined8 *)(param_1 + 0x850),&local_b8);
                  FUN_147c4fbc2(param_1,&local_b8);
                }
              }
              break;
            }
            iVar10 = *(int *)(lVar2 + 0x30);
          } while (iVar10 != -1);
        }
      }
      FUN_1448635f4(local_d8);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_146eecb48(&local_b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c4f010 FUN_147c4f010 body=177 status=ok
// SIG undefined FUN_147c4f010(void)

void FUN_147c4f010(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x620) = local_1c != 0;
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_146ee6f64(*(longlong *)(param_1 + 0x850),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f0c6 FUN_147c4f0c6 body=162 status=ok
// SIG undefined FUN_147c4f0c6(void)

void FUN_147c4f0c6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9f8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f174 FUN_147c4f174 body=104 status=ok
// SIG undefined FUN_147c4f174(void)

void FUN_147c4f174(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6950) {
    FUN_144b3d300(&DAT_14caf6950);
    if (DAT_14caf6950 == -1) {
      FUN_1446f470e(&DAT_14caf6948,L"ReplicatedRigidState",1);
      _Init_thread_footer(&DAT_14caf6950);
      return;
    }
  }
  return;
}



// FUNCTION 147c4f1dc FUN_147c4f1dc body=60 status=ok
// SIG undefined FUN_147c4f1dc(void)

undefined8 FUN_147c4f1dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  lVar3 = DAT_14cb10918;
  if ((lVar1 != 0) && (lVar2 = FUN_1447210f0(lVar1), lVar3 = DAT_14cb10918, lVar2 != 0)) {
    lVar3 = FUN_1447210f0(lVar1);
  }
  return *(undefined8 *)(lVar3 + 0x260);
}



// FUNCTION 147c4f218 FUN_147c4f218 body=137 status=ok
// SIG undefined FUN_147c4f218(void)

void FUN_147c4f218(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_14015716c(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x59e,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f2a2 FUN_147c4f2a2 body=184 status=ok
// SIG undefined FUN_147c4f2a2(void)

undefined8 * FUN_147c4f2a2(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6f10) {
    FUN_144b3d300(&DAT_14caf6f10);
    if (DAT_14caf6f10 == -1) {
      pwVar2 = L"HandleComponentPhysicsStateChange";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0x65;
      FUN_1446f470e(&DAT_14caf6f08,local_68,1);
      _Init_thread_footer(&DAT_14caf6f10);
    }
  }
  *param_1 = DAT_14caf6f08;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f35c FUN_147c4f35c body=110 status=ok
// SIG undefined FUN_147c4f35c(void)

void FUN_147c4f35c(longlong param_1,uint param_2)

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
    FUN_147c5d946(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_147c64aca(param_1);
    return;
  }
  FUN_147c652f2(param_1);
  FUN_147c5d946(param_1,param_2);
  return;
}



// FUNCTION 147c4f3ca FUN_147c4f3ca body=145 status=ok
// SIG undefined FUN_147c4f3ca(void)

void FUN_147c4f3ca(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_14015716c(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x59e,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f45c FUN_147c4f45c body=198 status=ok
// SIG undefined FUN_147c4f45c(void)

undefined8 * FUN_147c4f45c(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [14];
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6f20) {
    FUN_144b3d300(&DAT_14caf6f20);
    if (DAT_14caf6f20 == -1) {
      pwVar2 = L"HandleComponentPhysicsStateChangePostAddIntoClusterUnion";
      puVar3 = local_98;
      for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0;
      FUN_1446f470e(&DAT_14caf6f18,local_98,1);
      _Init_thread_footer(&DAT_14caf6f20);
    }
  }
  *param_1 = DAT_14caf6f18;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f524 FUN_147c4f524 body=930 status=ok
// SIG undefined FUN_147c4f524(void)

void FUN_147c4f524(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [96];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118 [12];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [32];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(longlong *)(param_1 + 0x850) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(param_1);
    }
    FUN_147c8cb8a(local_90,*(undefined8 *)(lVar6 + 0x260));
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    puVar9 = (undefined8 *)(param_1 + 0x240);
    puVar10 = local_118;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    lVar6 = param_2[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar2 = *param_2;
      lVar12 = 0;
      do {
        if ((*(longlong *)(lVar2 + lVar12) != 0) &&
           (*(int *)(*(longlong *)(lVar2 + lVar12) + 8) != -1)) {
          lVar7 = FUN_1429e0e24();
          if ((lVar7 != 0) && ((1 < *(byte *)(lVar7 + 0x90) && (*(longlong *)(lVar7 + 0x50) != 0))))
          {
            local_178._8_4_ = SUB84((double)*(float *)(lVar7 + 0x44),0);
            local_178._0_8_ = (double)*(float *)(lVar7 + 0x40);
            local_178._12_4_ = (int)((ulonglong)(double)*(float *)(lVar7 + 0x44) >> 0x20);
            local_168._8_4_ = SUB84((double)*(float *)(lVar7 + 0x4c),0);
            local_168._0_8_ = (double)*(float *)(lVar7 + 0x48);
            local_168._12_4_ = (int)((ulonglong)(double)*(float *)(lVar7 + 0x4c) >> 0x20);
            local_158 = *(undefined4 *)(lVar7 + 0x20);
            uStack_154 = *(undefined4 *)(lVar7 + 0x24);
            uStack_150 = *(undefined4 *)(lVar7 + 0x28);
            uStack_14c = *(undefined4 *)(lVar7 + 0x2c);
            local_148 = *(undefined8 *)(lVar7 + 0x30);
            uStack_140 = 0;
            local_138 = 0x3ff0000000000000;
            uStack_130 = 0x3ff0000000000000;
            local_128 = 0x3ff0000000000000;
            uStack_120 = 0;
            FUN_1449437a2(local_178,local_1d8,local_118);
            lVar8 = FUN_147c4ff12(lVar7,local_1d8);
            uVar4 = uStack_a0;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            lVar11 = (longlong)(int)uStack_a0;
            uVar5 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
            if (uStack_a0._4_4_ < uVar5) {
              FUN_140619960(&local_a8,uVar4 & 0xffffffff);
            }
            uVar4 = uStack_b0;
            *(longlong *)(local_a8 + lVar11 * 8) = lVar8;
            lVar8 = (longlong)(int)uStack_b0;
            uVar5 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
            if (uStack_b0._4_4_ < uVar5) {
              FUN_146e2d61c(&local_b8,uVar4 & 0xffffffff);
            }
            *(longlong *)(local_b8 + lVar8 * 8) = lVar7;
          }
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)(int)lVar6 * 8 != lVar12);
      if ((int)uStack_a0 != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x850) + 0x128);
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x50);
          if ((lVar6 == 0) || (*(char *)(lVar6 + 0x1c) != '\x05')) {
            lVar6 = FUN_14001cc68(0x70,0x10);
            FUN_14014f414(lVar6,&local_a8);
            if ((*(byte *)(lVar6 + 0x6c) & 1) == 0) {
              *(byte *)(lVar6 + 0x6c) = *(byte *)(lVar6 + 0x6c) | 1;
              FUN_1401183dc(lVar6);
            }
            uVar3 = *(undefined8 *)(param_1 + 0x850);
            local_178._0_8_ = lVar6;
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            FUN_146ee689c(uVar3,local_178,&local_b8);
            if ((undefined8 *)local_178._0_8_ != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_178._0_8_ + 8);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((*piVar1 == 0) && (*(int *)(local_178._0_8_ + 0xc) == 0)) {
                (*(code *)**(undefined8 **)local_178._0_8_)(local_178._0_8_,1);
              }
            }
          }
          else {
            FUN_146ee66de(*(longlong *)(param_1 + 0x850),&local_a8,&local_b8);
          }
        }
      }
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_144756766(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1448635f4(local_90);
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4f8c8 FUN_147c4f8c8 body=350 status=ok
// SIG undefined FUN_147c4f8c8(void)

void FUN_147c4f8c8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
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
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  iVar4 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    FUN_14481578e(param_1);
  }
  plVar1 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_2[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_2;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      lVar5 = (longlong)iStack_6c;
      lVar3 = *local_88;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_1,iVar2);
      }
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar5 * 0x10 + lVar3);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4fa28 FUN_147c4fa28 body=144 status=ok
// SIG undefined FUN_147c4fa28(void)

void FUN_147c4fa28(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  iVar3 = (int)param_2[1];
  if (-1 < iVar3) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      FUN_14481578e(param_1);
      iVar3 = (int)param_2[1];
    }
    if (iVar3 != 0) {
      lVar2 = *param_2;
      lVar4 = 0;
      do {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_1,iVar1);
        }
        *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar4);
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar3 * 8 != lVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 147c4fab9 FUN_147c4fab9 body=169 status=ok
// SIG undefined FUN_147c4fab9(void)

longlong * FUN_147c4fab9(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    iVar1 = (int)param_3[1];
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 != 0) {
      FUN_14071ff8a(param_1);
      lVar3 = param_3[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *param_3;
        lVar5 = 0;
        do {
          uVar4 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(lVar2 + lVar5));
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_14075a758(param_1,iVar1);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar4;
          lVar5 = lVar5 + 4;
        } while ((longlong)(int)lVar3 * 4 != lVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147c4fb64 FUN_147c4fb64 body=93 status=ok
// SIG undefined FUN_147c4fb64(void)

longlong FUN_147c4fb64(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146eed32a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147c4fbc2 FUN_147c4fbc2 body=766 status=ok
// SIG undefined FUN_147c4fbc2(void)

void FUN_147c4fbc2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x850) != 0) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_14075a3d2(&local_98,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34),1);
    plVar1 = param_2 + 2;
    local_88 = 0x100000000;
    local_78._0_4_ = 0xffffffff;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    uStack_80 = plVar1;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      iVar6 = (int)param_2[5];
    }
    uStack_a0 = CONCAT44(uStack_6c,uStack_70);
    local_a8._0_4_ = (uint)local_78;
    local_a8._4_4_ = local_78._4_4_;
    local_b8 = (undefined4)local_88;
    uStack_b4 = local_88._4_4_;
    uStack_b0 = (undefined4)uStack_80;
    uStack_ac = uStack_80._4_4_;
    local_c0 = param_2;
    if ((local_78._4_4_ != iVar6) || (uStack_80 != plVar1)) {
      do {
        uVar3 = uStack_90;
        uVar2 = *(undefined8 *)(*local_c0 + (longlong)local_a8._4_4_ * 0x10);
        lVar7 = (longlong)(int)uStack_90;
        uVar4 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
        if (uStack_90._4_4_ < uVar4) {
          FUN_14075a758(&local_98,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_98 + lVar7 * 8) = uVar2;
        local_a8._0_4_ = (uint)local_a8 & ~uStack_b4;
        FUN_1449c0562(&local_b8);
      } while (local_c0 != param_2 ||
               ((longlong *)CONCAT44(uStack_ac,uStack_b0) != plVar1 || local_a8._4_4_ != iVar6));
    }
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
    }
    FUN_147c8cb8a(local_68,*(undefined8 *)(lVar7 + 0x260));
    local_d8 = 0;
    uStack_d0 = 0;
    local_88 = 0x100000000;
    local_78 = 0xffffffff;
    uStack_70 = 0;
    if ((int)param_2[5] == 0) {
      iVar6 = 0;
      uStack_80 = plVar1;
    }
    else {
      uStack_80 = plVar1;
      FUN_1449c0562(&local_88);
      iVar6 = (int)param_2[5];
    }
    uStack_a0 = CONCAT44(uStack_6c,uStack_70);
    local_a8 = local_78;
    uVar2 = local_a8;
    local_b8 = (undefined4)local_88;
    uStack_b4 = local_88._4_4_;
    uStack_b0 = (undefined4)uStack_80;
    uStack_ac = uStack_80._4_4_;
    local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    iVar5 = local_a8._4_4_;
    local_c0 = param_2;
    if ((local_a8._4_4_ != iVar6) || (local_a8 = uVar2, uStack_80 != plVar1)) {
      do {
        local_a8 = uVar2;
        lVar7 = *(longlong *)(*local_c0 + (longlong)iVar5 * 0x10);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != -1)) {
          lVar7 = FUN_1429e0e24();
          uVar3 = uStack_d0;
          if (((lVar7 != 0) && (1 < *(byte *)(lVar7 + 0x90))) && (*(longlong *)(lVar7 + 0x50) != 0))
          {
            lVar8 = (longlong)(int)uStack_d0;
            uVar4 = (int)uStack_d0 + 1;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar4);
            if (uStack_d0._4_4_ < uVar4) {
              FUN_146e2d61c(&local_d8,uVar3 & 0xffffffff);
            }
            *(longlong *)(local_d8 + lVar8 * 8) = lVar7;
          }
        }
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
        FUN_1449c0562(&local_b8);
        iVar5 = local_a8._4_4_;
        uVar2 = local_a8;
      } while (local_c0 != param_2 ||
               ((longlong *)CONCAT44(uStack_ac,uStack_b0) != plVar1 || local_a8._4_4_ != iVar6));
      if (((int)uStack_d0 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x850) + 0x128) != 0)) {
        FUN_146ee6514(*(longlong *)(param_1 + 0x850),&local_d8);
      }
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    FUN_1448635f4(local_68);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c4fec2 FUN_147c4fec2 body=79 status=ok
// SIG undefined FUN_147c4fec2(void)

void FUN_147c4fec2(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_2) {
          FUN_147c65cce();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147c4ff12 FUN_147c4ff12 body=285 status=ok
// SIG undefined FUN_147c4ff12(void)

longlong FUN_147c4ff12(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_14001cc68(0xc0,0x10);
  puVar5 = local_88;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  local_90 = *(undefined8 **)(param_1 + 0x50);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
    UNLOCK();
  }
  FUN_14010f5c4(lVar2,&local_90,local_88);
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_90 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_90 + 0xc) == 0)) {
      (**(code **)*local_90)(local_90,1);
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  if (puVar5 == (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    if (puVar4 == (undefined8 *)0x0) goto LAB_147c50006;
    *(undefined8 *)(lVar2 + 0x20) = 0;
LAB_147c4ffbd:
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (puVar5 == (undefined8 *)0x0) goto LAB_147c50006;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    if (puVar4 != puVar5) {
      *(undefined8 **)(lVar2 + 0x20) = puVar5;
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      if (puVar4 != (undefined8 *)0x0) goto LAB_147c4ffbd;
    }
  }
  LOCK();
  piVar1 = (int *)(puVar5 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
LAB_147c50006:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c50042 FUN_147c50042 body=1260 status=ok
// SIG undefined FUN_147c50042(void)

void FUN_147c50042(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118 [2];
  longlong local_108 [12];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_141255c6e();
  if (param_1[0x10a] == 0) {
    FUN_14485c47a(param_1 + 0xaa,param_1);
    lVar9 = param_1[0x16];
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
      if (lVar9 == 0) goto LAB_147c5007c;
      lVar9 = param_1[0x16];
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
    }
    bVar1 = *(byte *)(lVar9 + 0x152);
    if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
      lVar9 = param_1[0x16];
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
      }
      cVar3 = FUN_1407579fa(lVar9);
      if (cVar3 == '\0') goto LAB_147c5007c;
    }
    plVar4 = (longlong *)FUN_144800528();
    lVar9 = plVar4[0x22];
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar9 = plVar4[0x22];
    }
    *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(lVar9 + 0xf0);
    local_50 = DAT_14c846520;
    local_60 = DAT_14c846510;
    uStack_58 = DAT_14c846518;
    local_90 = 0x3fd3333340000000;
    local_88 = 100;
    local_84 = 0;
    local_82 = 1;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_48 = 0;
    local_80 = 0;
    local_47 = (undefined1)param_1[0xc4];
    local_118[0] = param_1 + 0x10b;
    *(undefined4 *)(param_1 + 0x10b) = 5;
    param_1[0x10c] = (longlong)param_1;
    bVar12 = *(char *)(param_1[0x15] + 0x178) == '\x03';
    local_a8 = *(undefined4 *)(param_1[0x15] + 0xc);
    local_a4 = *(undefined4 *)((longlong)param_1 + 0xc);
    plVar4 = param_1 + 0x48;
    plVar10 = local_108;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *plVar10 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar10 = plVar10 + 1;
    }
    local_9c = (undefined4)param_1[0xe0];
    local_9f = !bVar12;
    local_a0 = bVar12;
    local_9e = bVar12;
    lVar9 = FUN_14001cc68(0x170,0x10);
    FUN_146ee5a0a(lVar9,param_1,&local_90,local_118);
    param_1[0x10a] = lVar9;
    FUN_146ee5bc8(lVar9);
    lVar9 = FUN_147c4f1dc(param_1);
    if (lVar9 != 0) {
      FUN_147c6971a(lVar9,param_1,param_1[0x10a]);
    }
    if (DAT_14c761719 == '\x01') {
      puVar5 = (undefined8 *)FUN_14001cc68(0x1f8);
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined2 *)((longlong)puVar5 + 0xc) = 0x101;
      *puVar5 = &PTR_FUN_14aa1cbe0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(undefined1 *)(puVar5 + 8) = 1;
      *(undefined8 *)((longlong)puVar5 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)puVar5 + 0x4c) = 0xffffffff;
      puVar5[0xe] = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x7c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
      puVar5[0x12] = 0;
      *(undefined4 *)(puVar5 + 0x13) = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      puVar5[0x18] = 0;
      *(undefined4 *)((longlong)puVar5 + 0x124) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x114) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x11c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x104) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xf4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xfc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0xec) = 0;
      puVar5[0x25] = 0x400;
      *(undefined4 *)(puVar5 + 0x26) = 0;
      puVar5[0x27] = &DAT_14c7585e0;
      puVar5[0x28] = 0;
      puVar5[0x29] = 0x100000000c;
      puVar5[0x2a] = 0x40f86a0000000000;
      *(undefined4 *)(puVar5 + 0x2b) = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0;
      puVar5[0x31] = 0;
      puVar5[0x32] = 0;
      puVar5[0x33] = 0;
      *(undefined1 *)(puVar5 + 0x34) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x1a1) = 0x101;
      puVar5[0x3d] = 0;
      puVar5[0x3e] = 0;
      puVar5[0x3b] = 0;
      puVar5[0x3c] = 0;
      puVar5[0x39] = 0;
      puVar5[0x3a] = 0;
      puVar5[0x37] = 0;
      puVar5[0x38] = 0;
      puVar5[0x35] = 0;
      puVar5[0x36] = 0;
      FUN_147c5dd32(puVar5 + 0x23);
      puVar2 = (undefined8 *)param_1[0x10d];
      param_1[0x10d] = (longlong)puVar5;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    cVar3 = FUN_147c4dfa2(param_1);
    if (cVar3 == '\0') {
      local_138 = param_1[0x48];
      lStack_130 = param_1[0x49];
      local_128 = (undefined4)param_1[0x4a];
      uStack_124 = *(undefined4 *)((longlong)param_1 + 0x254);
      uStack_120 = (undefined4)param_1[0x4b];
      uStack_11c = *(undefined4 *)((longlong)param_1 + 0x25c);
      local_158 = (undefined4)param_1[0x4c];
      uStack_154 = *(undefined4 *)((longlong)param_1 + 0x264);
      uStack_150 = (undefined4)param_1[0x4d];
      uStack_14c = *(undefined4 *)((longlong)param_1 + 0x26c);
      local_148 = param_1[0x4e];
      FUN_146ee6b84(param_1[0x10a]);
      if (DAT_14c761720 == '\x01') {
        (**(code **)(*param_1 + 0xa10))(param_1);
      }
    }
    else if ((longlong)(int)param_1[0xdf] != 0) {
      lVar9 = param_1[0xde];
      lVar11 = (longlong)(int)param_1[0xdf] * 0x28;
      do {
        cVar3 = FUN_144729dda(lVar9 + 0x20);
        if (cVar3 != '\0') {
          local_138 = 0;
          lStack_130 = 0;
          uVar6 = FUN_14479d2ce(lVar9 + 0x20);
          lVar7 = FUN_147a90604(lVar9,uVar6);
          if (lVar7 == 0) {
LAB_147c50431:
            lVar7 = 0;
          }
          else {
            lVar8 = FUN_144a3a302();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_147c50431;
          }
          FUN_143607c2c(param_1,lVar7,&local_138,1);
          if (local_138 != 0) {
            FUN_1400020a8();
          }
        }
        lVar9 = lVar9 + 0x28;
        lVar11 = lVar11 + -0x28;
      } while (lVar11 != 0);
    }
  }
LAB_147c5007c:
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c50530 FUN_147c50530 body=416 status=ok
// SIG undefined FUN_147c50530(void)

void FUN_147c50530(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1411096ca();
  if (*(longlong *)(param_1 + 0x850) != 0) {
    plVar1 = (longlong *)(param_1 + 0x6a0);
    lVar5 = param_1 + 0x6b0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar6 = 0;
    local_48 = lVar5;
    if (*(int *)(param_1 + 0x6c8) != 0) {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0x6c8);
    }
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar3, local_48 != lVar5)) {
      do {
        local_60 = uVar3;
        FUN_147c506d2(param_1,*(undefined8 *)(*local_78 + (longlong)iVar4 * 0x38));
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar5 || local_60._4_4_ != iVar6));
    }
    if (*(int *)(param_1 + 0x6a8) != *(int *)(param_1 + 0x6d4)) {
      FUN_147c6634c(plVar1);
      FUN_147c66490(plVar1);
    }
    lVar5 = FUN_147c4f1dc(param_1);
    if (lVar5 != 0) {
      FUN_147c6973e(lVar5,*(undefined8 *)(param_1 + 0x850));
    }
    *(undefined8 *)(param_1 + 0x850) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x868);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x868) = 0;
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


