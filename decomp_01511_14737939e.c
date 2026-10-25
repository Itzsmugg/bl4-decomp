// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14737939e FUN_14737939e body=62 status=ok
// SIG undefined FUN_14737939e(void)

void FUN_14737939e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473793dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473793dc FUN_1473793dc body=93 status=ok
// SIG undefined FUN_1473793dc(void)

ulonglong FUN_1473793dc(uint param_1,uint param_2)

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



// FUNCTION 14737943a FUN_14737943a body=99 status=ok
// SIG undefined FUN_14737943a(void)

undefined8 * FUN_14737943a(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14a34c3b8;
  *param_1 = &PTR_FUN_14a34c3b8;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14737949e FUN_14737949e body=99 status=ok
// SIG undefined FUN_14737949e(void)

undefined8 * FUN_14737949e(undefined8 *param_1,int param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  ppuVar1 = &PTR_FUN_14a34c3c8;
  *param_1 = &PTR_FUN_14a34c3c8;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      FUN_1400020a8();
      param_1[1] = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = (undefined **)*param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  (*(code *)ppuVar1[1])(param_1,0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147379502 FUN_147379502 body=62 status=ok
// SIG undefined FUN_147379502(void)

void FUN_147379502(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147379540(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147379540 FUN_147379540 body=93 status=ok
// SIG undefined FUN_147379540(void)

ulonglong FUN_147379540(uint param_1,uint param_2)

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



// FUNCTION 14737959e FUN_14737959e body=132 status=ok
// SIG undefined FUN_14737959e(void)

void FUN_14737959e(longlong param_1,int param_2)

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



// FUNCTION 147379624 FUN_147379624 body=132 status=ok
// SIG undefined FUN_147379624(void)

void FUN_147379624(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1cc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x70,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 4;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1cc) = iVar6;
    FUN_1473796aa(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473796aa FUN_1473796aa body=141 status=ok
// SIG undefined FUN_1473796aa(void)

void FUN_1473796aa(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x70);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c0,0,param_3,0x70);
    memmove(*(void **)((longlong)param_1 + 0x1c0),param_1,(longlong)param_2 * 0x70);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c0,param_2,param_3,0x70);
  return;
}



// FUNCTION 147379738 FUN_147379738 body=136 status=ok
// SIG undefined FUN_147379738(void)

void FUN_147379738(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x7c0);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x7c4)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x280,0);
      iVar4 = (int)(uVar3 / 0x280);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x7c4) = iVar5;
    FUN_1473797c2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473797c2 FUN_1473797c2 body=149 status=ok
// SIG undefined FUN_1473797c2(void)

void FUN_1473797c2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x780);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x280);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x780,0,param_3,0x280);
    memmove(*(void **)((longlong)param_1 + 0x780),param_1,(longlong)param_2 * 0x280);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x780,param_2,param_3,0x280);
  return;
}



// FUNCTION 147379858 FUN_147379858 body=322 status=ok
// SIG undefined FUN_147379858(void)

void FUN_147379858(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 14737999c FUN_14737999c body=110 status=ok
// SIG undefined FUN_14737999c(void)

void FUN_14737999c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x24)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x24) = iVar5;
    FUN_147379a0c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147379a0c FUN_147379a0c body=132 status=ok
// SIG undefined FUN_147379a0c(void)

void FUN_147379a0c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,8);
  return;
}



// FUNCTION 147379a90 FUN_147379a90 body=138 status=ok
// SIG undefined FUN_147379a90(void)

void FUN_147379a90(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147379b1a FUN_147379b1a body=76 status=ok
// SIG undefined FUN_147379b1a(void)

void FUN_147379b1a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_14476c499(lVar1,*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) == param_2) {
    return;
  }
  FUN_147379b68(param_1,param_2);
  return;
}



// FUNCTION 147379b68 FUN_147379b68 body=94 status=ok
// SIG undefined FUN_147379b68(void)

void FUN_147379b68(longlong param_1,uint param_2)

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
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_1400914a6(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 147379bc6 FUN_147379bc6 body=110 status=ok
// SIG undefined FUN_147379bc6(void)

void FUN_147379bc6(longlong param_1,int param_2)

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
    FUN_1400914a6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147379c36 FUN_147379c36 body=114 status=ok
// SIG undefined FUN_147379c36(void)

void FUN_147379c36(longlong *param_1,int param_2)

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



// FUNCTION 147379ca8 FUN_147379ca8 body=48 status=ok
// SIG undefined FUN_147379ca8(void)

void FUN_147379ca8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147379cd8 FUN_147379cd8 body=132 status=ok
// SIG undefined FUN_147379cd8(void)

void FUN_147379cd8(longlong param_1,int param_2)

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



// FUNCTION 147379d5e FUN_147379d5e body=552 status=ok
// SIG undefined FUN_147379d5e(void)

longlong FUN_147379d5e(longlong param_1,char param_2,longlong param_3,ulonglong param_4,
                      longlong param_5,uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  ulonglong uVar10;
  char *pcVar11;
  
  uVar8 = *(uint *)(param_1 + 0x20);
LAB_147379d96:
  while ((*(char *)(param_1 + 0x24) == param_2 ||
         ((int)((float)(uVar8 + 1) * 0.9) <= *(int *)(param_1 + 0x28)))) {
    FUN_147379f86(param_1);
    uVar8 = *(uint *)(param_1 + 0x20);
    param_4 = (ulonglong)(uVar8 & param_6);
    lVar5 = *(longlong *)(param_1 + 8);
    param_2 = '\0';
    param_3 = param_1;
    if ((lVar5 != 0) && (param_2 = '\0', -1 < *(char *)(lVar5 + param_4))) {
      param_2 = '\0';
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8) == param_5)
        goto LAB_147379ec3;
        param_4 = (ulonglong)((int)param_4 + 1);
        param_2 = param_2 + '\x01';
      } while (param_2 <= *(char *)(lVar5 + param_4));
    }
  }
  iVar7 = (int)param_4;
  param_4 = param_4 & 0xffffffff;
  cVar9 = *(char *)(*(longlong *)(param_3 + 8) + param_4);
  if (cVar9 < '\0') {
    *(longlong *)(*(longlong *)(param_3 + 0x10) + param_4 * 8) = param_5;
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4) = param_7;
    *(char *)(*(longlong *)(param_3 + 8) + param_4) = param_2;
  }
  else {
    *(char *)(*(longlong *)(param_3 + 8) + param_4) = param_2;
    uVar4 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + param_4 * 8);
    *(longlong *)(*(longlong *)(param_3 + 0x10) + param_4 * 8) = param_5;
    uVar3 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4);
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4) = param_7;
    cVar9 = cVar9 + '\x01';
    uVar10 = (ulonglong)(iVar7 + 1);
    lVar5 = *(longlong *)(param_3 + 8);
    cVar6 = *(char *)(lVar5 + uVar10);
    if (-1 < cVar6) {
      pcVar11 = (char *)(lVar5 + uVar10);
      uVar8 = iVar7 + 2;
      do {
        if (cVar6 < cVar9) {
          *pcVar11 = cVar9;
          uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8);
          *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8) = uVar4;
          uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar10 * 4);
          *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar10 * 4) = uVar3;
          cVar9 = cVar6 + '\x01';
          lVar5 = *(longlong *)(param_3 + 8);
          uVar4 = uVar2;
          uVar3 = uVar1;
        }
        else {
          cVar9 = cVar9 + '\x01';
          if (cVar9 == *(char *)(param_1 + 0x24)) goto LAB_147379ef6;
        }
        uVar10 = (ulonglong)uVar8;
        pcVar11 = (char *)(lVar5 + uVar10);
        cVar6 = *(char *)(lVar5 + uVar10);
        uVar8 = uVar8 + 1;
        if (cVar6 < '\0') break;
      } while( true );
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8) = uVar4;
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar10 * 4) = uVar3;
    *(char *)(*(longlong *)(param_3 + 8) + uVar10) = cVar9;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  param_1 = param_3;
LAB_147379ec3:
  return param_4 * 4 + *(longlong *)(param_1 + 0x18);
LAB_147379ef6:
  param_5 = *(longlong *)(*(longlong *)(param_3 + 0x10) + param_4 * 8);
  *(undefined8 *)(*(longlong *)(param_3 + 0x10) + param_4 * 8) = uVar4;
  param_7 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4);
  *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4) = uVar3;
  FUN_147379f86(param_1);
  uVar8 = *(uint *)(param_1 + 0x20);
  param_6 = (uint)param_5;
  param_4 = (ulonglong)(uVar8 & param_6);
  lVar5 = *(longlong *)(param_1 + 8);
  param_2 = '\0';
  param_3 = param_1;
  if ((lVar5 != 0) && (param_2 = '\0', -1 < *(char *)(lVar5 + param_4))) {
    param_2 = '\0';
    do {
      if (param_5 == *(longlong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8)) goto LAB_147379ec3;
      param_4 = (ulonglong)((int)param_4 + 1);
      param_2 = param_2 + '\x01';
    } while (param_2 <= *(char *)(lVar5 + param_4));
  }
  goto LAB_147379d96;
}



// FUNCTION 147379f86 FUN_147379f86 body=443 status=ok
// SIG undefined FUN_147379f86(void)

void FUN_147379f86(uint *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  void *_Dst;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  uint local_80;
  undefined4 local_78;
  int local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1)
  ;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  uVar13 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar11 = 1 << ((byte)lVar3 & 0x1f);
  uVar6 = param_1[8];
  if ((uVar6 == 0) || (uVar6 + 1 != uVar11)) {
    uVar13 = (ulonglong)uVar11 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 4;
    if (4 < (uint)lVar3) {
      uVar14 = (uint)lVar3;
    }
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = param_1[4];
    uStack_54 = param_1[5];
    uStack_50 = param_1[6];
    uStack_4c = param_1[7];
    local_6c = (int)(char)param_1[9];
    uVar13 = (ulonglong)(uVar14 + uVar11);
    _Dst = (void *)FUN_14001cc68(uVar13,0);
    uVar7 = FUN_14001cc68(uVar13 * 8,0);
    uVar10 = 0;
    uVar8 = FUN_14001cc68(uVar13 * 4,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),0xff),uVar13);
    *param_1 = uVar14 + uVar11;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 6) = uVar8;
    param_1[8] = uVar11 - 1;
    *(char *)(param_1 + 9) = (char)uVar14;
    param_1[10] = 0;
    uVar6 = uVar6 + local_6c;
    if (uVar6 != 0) {
      lVar3 = CONCAT44(uStack_5c,uStack_60);
      lVar4 = CONCAT44(uStack_54,local_58);
      lVar5 = CONCAT44(uStack_4c,uStack_50);
      uVar13 = 0;
      do {
        if (-1 < *(char *)(lVar3 + uVar13)) {
          lVar1 = *(longlong *)(lVar4 + uVar13 * 8);
          uVar12 = (ulonglong)(param_1[8] & (uint)lVar1);
          lVar2 = *(longlong *)(param_1 + 2);
          if ((lVar2 == 0) || (*(char *)(lVar2 + uVar12) < '\0')) {
            cVar9 = '\0';
          }
          else {
            cVar9 = '\0';
            do {
              if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 4) + uVar12 * 8))
              goto LAB_14737a12b;
              uVar12 = (ulonglong)((int)uVar12 + 1);
              cVar9 = cVar9 + '\x01';
            } while (cVar9 <= *(char *)(lVar2 + uVar12));
          }
          local_88 = lVar1;
          local_80 = (uint)lVar1;
          local_78 = *(undefined4 *)(lVar5 + uVar13 * 4);
          FUN_147379d5e(param_1,cVar9,param_1);
        }
LAB_14737a12b:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
    }
    FUN_147376fc0(&local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737a142 FUN_14737a142 body=52 status=ok
// SIG undefined FUN_14737a142(void)

void FUN_14737a142(longlong *param_1)

{
  FUN_14737a176();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14737a176 FUN_14737a176 body=89 status=ok
// SIG undefined FUN_14737a176(void)

void FUN_14737a176(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 14737a1d0 FUN_14737a1d0 body=132 status=ok
// SIG undefined FUN_14737a1d0(void)

void FUN_14737a1d0(longlong param_1,int param_2)

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



// FUNCTION 14737a256 FUN_14737a256 body=312 status=ok
// SIG undefined FUN_14737a256(void)

undefined4 * FUN_14737a256(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14737a390(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14737a476(param_1,uVar3,local_40,&local_4c);
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
      FUN_14737a564(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737a390 FUN_14737a390 body=229 status=ok
// SIG undefined FUN_14737a390(void)

int * FUN_14737a390(longlong *param_1,int *param_2)

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



// FUNCTION 14737a476 FUN_14737a476 body=124 status=ok
// SIG undefined FUN_14737a476(void)

undefined8 FUN_14737a476(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14737a4f2(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14737a4f2 FUN_14737a4f2 body=114 status=ok
// SIG undefined FUN_14737a4f2(void)

void FUN_14737a4f2(longlong *param_1,int param_2)

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



// FUNCTION 14737a564 FUN_14737a564 body=477 status=ok
// SIG undefined FUN_14737a564(void)

void FUN_14737a564(longlong *param_1)

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



// FUNCTION 14737a742 FUN_14737a742 body=119 status=ok
// SIG undefined FUN_14737a742(void)

void FUN_14737a742(longlong param_1,int param_2)

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
    FUN_14737a7ba(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14737a7ba FUN_14737a7ba body=140 status=ok
// SIG undefined FUN_14737a7ba(void)

void FUN_14737a7ba(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14737a846 FUN_14737a846 body=132 status=ok
// SIG undefined FUN_14737a846(void)

void FUN_14737a846(longlong param_1,int param_2)

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



// FUNCTION 14737a8cc FUN_14737a8cc body=209 status=ok
// SIG undefined FUN_14737a8cc(void)

int FUN_14737a8cc(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 14737a99e FUN_14737a99e body=95 status=ok
// SIG undefined FUN_14737a99e(void)

void FUN_14737a99e(longlong param_1,uint param_2)

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



// FUNCTION 14737a9fe FUN_14737a9fe body=115 status=ok
// SIG undefined FUN_14737a9fe(void)

undefined8 * FUN_14737a9fe(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140346272(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14737aa72 FUN_14737aa72 body=96 status=ok
// SIG undefined FUN_14737aa72(void)

void FUN_14737aa72(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14737aad2 FUN_14737aad2 body=132 status=ok
// SIG undefined FUN_14737aad2(void)

void FUN_14737aad2(longlong param_1,int param_2)

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



// FUNCTION 14737ab58 FUN_14737ab58 body=315 status=ok
// SIG undefined FUN_14737ab58(void)

undefined4 *
FUN_14737ab58(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14682a34e(param_1,local_50);
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)param_3[1];
  local_48[4] = puVar1[4];
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar3 = puVar1[3];
  *local_48 = *puVar1;
  local_48[1] = uVar6;
  local_48[2] = uVar7;
  local_48[3] = uVar3;
  local_48[5] = *puVar2;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = *local_48;
  local_68 = param_4;
  cVar4 = FUN_14682a434(param_1,uVar6,local_48);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[7] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14682a532(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737ac94 FUN_14737ac94 body=132 status=ok
// SIG undefined FUN_14737ac94(void)

void FUN_14737ac94(longlong param_1,int param_2)

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



// FUNCTION 14737ad1a FUN_14737ad1a body=113 status=ok
// SIG undefined FUN_14737ad1a(void)

void FUN_14737ad1a(longlong param_1,int param_2)

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



// FUNCTION 14737ad8c FUN_14737ad8c body=96 status=ok
// SIG undefined FUN_14737ad8c(void)

void FUN_14737ad8c(longlong param_1,int param_2)

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



// FUNCTION 14737adec FUN_14737adec body=132 status=ok
// SIG undefined FUN_14737adec(void)

void FUN_14737adec(longlong param_1,int param_2)

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



// FUNCTION 14737ae72 FUN_14737ae72 body=62 status=ok
// SIG undefined FUN_14737ae72(void)

void FUN_14737ae72(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14737aeb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14737aeb0 FUN_14737aeb0 body=93 status=ok
// SIG undefined FUN_14737aeb0(void)

ulonglong FUN_14737aeb0(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14737af0e FUN_14737af0e body=132 status=ok
// SIG undefined FUN_14737af0e(void)

void FUN_14737af0e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x708);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x70c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x70c) = iVar6;
    FUN_14737af94(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14737af94 FUN_14737af94 body=141 status=ok
// SIG undefined FUN_14737af94(void)

void FUN_14737af94(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x700);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x700,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x700),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x700,param_2,param_3,0x38);
  return;
}



// FUNCTION 14737b022 FUN_14737b022 body=67 status=ok
// SIG undefined FUN_14737b022(void)

void FUN_14737b022(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14737b066(*(undefined4 *)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x70c));
  if (iVar1 == *(int *)(param_1 + 0x70c)) {
    return;
  }
  *(int *)(param_1 + 0x70c) = iVar1;
  FUN_14737af94(param_1,*(undefined4 *)(param_1 + 0x708),iVar1);
  return;
}



// FUNCTION 14737b066 FUN_14737b066 body=121 status=ok
// SIG undefined FUN_14737b066(void)

ulonglong FUN_14737b066(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x38) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x38,0);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 14737b0df FUN_14737b0df body=73 status=ok
// SIG undefined FUN_14737b0df(void)

void FUN_14737b0df(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14737b128 FUN_14737b128 body=56 status=ok
// SIG undefined FUN_14737b128(void)

longlong FUN_14737b128(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14737b16e FUN_14737b16e body=218 status=ok
// SIG undefined FUN_14737b16e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14737b16e(void)

{
  if ((DAT_14ca76f27 & 2) == 0) {
    DAT_14ca76f27 = DAT_14ca76f27 | 2;
    _DAT_14ca76ec8 = L"TResourceArray";
    _DAT_14ca76ee0 = FUN_146826540;
    _DAT_14ca76ee8 = FUN_146825d77;
    _DAT_14ca76ef0 = FUN_146825fd6;
    _DAT_14ca76ef8 = FUN_1407e02ea;
    _DAT_14ca76f00 = FUN_146826273;
    _DAT_14ca76ed8 = FUN_14737b248;
    _DAT_14ca76f18 = 0xffffffff00000020;
    _DAT_14ca76f20 = 8;
    DAT_14ca76f24 = 1;
    _DAT_14ca76f08 = &LAB_14737b274;
    FUN_14737b27a(&DAT_14ca76ec0);
    FUN_14737b388(&DAT_14ca76ec0);
    FUN_1407e00cc(&DAT_14ca76ec0);
  }
  return &DAT_14ca76ec0;
}



// FUNCTION 14737b248 FUN_14737b248 body=43 status=ok
// SIG undefined FUN_14737b248(void)

void FUN_14737b248(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14737b27a FUN_14737b27a body=269 status=ok
// SIG undefined FUN_14737b27a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737b27a(longlong param_1)

{
  _DAT_14ca76f50 = L"bNeedsCPUAccess";
  DAT_14ca76f7a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14ca76f58 = &DAT_14c9cfcf0;
  _DAT_14ca76f68 = &LAB_14682652b;
  _DAT_14ca76f70 = &DAT_100000018;
  _DAT_14ca76f78 = 0;
  _DAT_14ca76f60 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca76f50;
  return;
}



// FUNCTION 14737b388 FUN_14737b388 body=361 status=ok
// SIG undefined FUN_14737b388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737b388(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14ca76de0 = L"BASE";
  DAT_14ca76e0a = 4;
  if ((DAT_14ca76fe7 & 2) == 0) {
    DAT_14ca76fe7 = DAT_14ca76fe7 | 3;
    _DAT_14ca76f88 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca76fa0 = &LAB_14737b570;
    _DAT_14ca76fa8 = FUN_14737b57e;
    _DAT_14ca76fb0 = &LAB_14737b59e;
    _DAT_14ca76fb8 = &LAB_14737b5ac;
    _DAT_14ca76fc0 = &LAB_14737b5ba;
    _DAT_14ca76f98 = FUN_14737b5c6;
    _DAT_14ca76fd8 = 0x1000000010;
    _DAT_14ca76fe0 = 8;
    DAT_14ca76fe4 = '\0';
  }
  _DAT_14ca76de8 = &DAT_14ca76f80;
  _DAT_14ca76df8 = &LAB_14682652b;
  _DAT_14ca76e00 = &DAT_100000008;
  _DAT_14ca76df0 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14ca76de0;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14ca76fe4 != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  _DAT_14ca76e10 = L"BASE";
  DAT_14ca76e3a = 4;
  lVar1 = FUN_146268212();
  _DAT_14ca76e28 = &LAB_14682652b;
  _DAT_14ca76e30 = 0x100000000;
  _DAT_14ca76e20 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14ca76e18 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14ca76e10;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 14737b4f1 FUN_14737b4f1 body=127 status=ok
// SIG undefined FUN_14737b4f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14737b4f1(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca76f48) {
    FUN_144b3d300(&DAT_14ca76f48);
    if (DAT_14ca76f48 == -1) {
      DAT_14ca76f30 = 0;
      uRam000000014ca76f38 = 0;
      _DAT_14ca76f28 = &PTR_FUN_14a34c530;
      DAT_14ca76f40 = 0;
      atexit((_func_5014 *)&LAB_14316a5da);
      _Init_thread_footer(&DAT_14ca76f48);
    }
  }
  return &DAT_14ca76f28;
}



// FUNCTION 14737b57e FUN_14737b57e body=31 status=ok
// SIG undefined FUN_14737b57e(void)

undefined8
FUN_14737b57e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14737b6e4(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 14737b5c6 FUN_14737b5c6 body=51 status=ok
// SIG undefined FUN_14737b5c6(void)

void FUN_14737b5c6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14737b5fa FUN_14737b5fa body=234 status=ok
// SIG undefined FUN_14737b5fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737b5fa(longlong param_1,undefined8 param_2)

{
  if ((DAT_14c951b7f & 2) == 0) {
    DAT_14c951b7f = DAT_14c951b7f | 3;
    _DAT_14c951b20 = L"float";
    _DAT_14c951b38 = &LAB_1468cb284;
    _DAT_14c951b40 = &LAB_1468cb290;
    _DAT_14c951b48 = &LAB_1468cb2a0;
    _DAT_14c951b50 = &LAB_1468cb2a6;
    _DAT_14c951b58 = &LAB_1468cb2aa;
    _DAT_14c951b30 = &LAB_1468cb2b4;
    _DAT_14c951b70 = 0x400000004;
    _DAT_14c951b78 = 4;
    DAT_14c951b7c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14c951b18,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 14737b6e4 FUN_14737b6e4 body=248 status=ok
// SIG undefined FUN_14737b6e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737b6e4(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147372826(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
  if ((DAT_14c951b7f & 2) == 0) {
    DAT_14c951b7f = DAT_14c951b7f | 3;
    _DAT_14c951b20 = L"float";
    _DAT_14c951b38 = &LAB_1468cb284;
    _DAT_14c951b40 = &LAB_1468cb290;
    _DAT_14c951b48 = &LAB_1468cb2a0;
    _DAT_14c951b50 = &LAB_1468cb2a6;
    _DAT_14c951b58 = &LAB_1468cb2aa;
    _DAT_14c951b30 = &LAB_1468cb2b4;
    _DAT_14c951b70 = 0x400000004;
    _DAT_14c951b78 = 4;
    DAT_14c951b7c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14c951b18,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 14737b7dc FUN_14737b7dc body=203 status=ok
// SIG undefined FUN_14737b7dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737b7dc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14c951b7f & 2) == 0) {
    DAT_14c951b7f = DAT_14c951b7f | 3;
    _DAT_14c951b20 = L"float";
    _DAT_14c951b38 = &LAB_1468cb284;
    _DAT_14c951b40 = &LAB_1468cb290;
    _DAT_14c951b48 = &LAB_1468cb2a0;
    _DAT_14c951b50 = &LAB_1468cb2a6;
    _DAT_14c951b58 = &LAB_1468cb2aa;
    _DAT_14c951b30 = &LAB_1468cb2b4;
    _DAT_14c951b70 = 0x400000004;
    _DAT_14c951b78 = 4;
    DAT_14c951b7c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14c951b18,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 14737b8a8 FUN_14737b8a8 body=63 status=ok
// SIG undefined FUN_14737b8a8(void)

void FUN_14737b8a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14737b8e8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14737b8e8 FUN_14737b8e8 body=97 status=ok
// SIG undefined FUN_14737b8e8(void)

ulonglong FUN_14737b8e8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14737b94a FUN_14737b94a body=135 status=ok
// SIG undefined FUN_14737b94a(void)

void FUN_14737b94a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (param_2 <= (int)uVar1) {
    iVar7 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x44) < 2) {
        uVar3 = 4;
        if (4 < uVar1) {
          uVar3 = uVar1;
        }
        lVar4 = (longlong)(int)uVar3;
      }
      else {
        lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = FUN_144a3809e(lVar4 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5 >> 3;
      iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar7 = 0x7fffffff;
      if ((int)uVar1 <= iVar6) {
        iVar7 = iVar6;
      }
    }
    *(int *)(param_1 + 0x44) = iVar7;
    FUN_14737b9d2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14737b9d2 FUN_14737b9d2 body=132 status=ok
// SIG undefined FUN_14737b9d2(void)

void FUN_14737b9d2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x38);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x38,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x38),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x38,param_2,param_3,0x38);
  return;
}



// FUNCTION 14737ba56 FUN_14737ba56 body=52 status=ok
// SIG undefined FUN_14737ba56(void)

void FUN_14737ba56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14737ba8a(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar1 == *(int *)(param_1 + 0x44)) {
    return;
  }
  *(int *)(param_1 + 0x44) = iVar1;
  FUN_14737b9d2(param_1,*(undefined4 *)(param_1 + 0x40),iVar1);
  return;
}



// FUNCTION 14737ba8a FUN_14737ba8a body=121 status=ok
// SIG undefined FUN_14737ba8a(void)

ulonglong FUN_14737ba8a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x38) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x38,0);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 14737bb04 FUN_14737bb04 body=48 status=ok
// SIG undefined FUN_14737bb04(void)

void FUN_14737bb04(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14737bb34 FUN_14737bb34 body=93 status=ok
// SIG undefined FUN_14737bb34(void)

void FUN_14737bb34(longlong param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x38,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    uVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar4 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar4) {
    FUN_14737b9d2(param_1,0,uVar4);
    param_3 = uVar4;
  }
  *(uint *)(param_1 + 0x44) = param_3;
  return;
}



// FUNCTION 14737bb92 FUN_14737bb92 body=95 status=ok
// SIG undefined FUN_14737bb92(void)

void FUN_14737bb92(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14737bbf2 FUN_14737bbf2 body=132 status=ok
// SIG undefined FUN_14737bbf2(void)

void FUN_14737bbf2(longlong param_1,int param_2)

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



// FUNCTION 14737bc78 FUN_14737bc78 body=74 status=ok
// SIG undefined FUN_14737bc78(void)

void FUN_14737bc78(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  FUN_14737bcc2(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14737bcc2 FUN_14737bcc2 body=132 status=ok
// SIG undefined FUN_14737bcc2(void)

void FUN_14737bcc2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 14737bd46 FUN_14737bd46 body=124 status=ok
// SIG undefined FUN_14737bd46(void)

void FUN_14737bd46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
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
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_14737bcc2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14737bdc4 FUN_14737bdc4 body=132 status=ok
// SIG undefined FUN_14737bdc4(void)

void FUN_14737bdc4(longlong param_1,int param_2)

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



// FUNCTION 14737be4a FUN_14737be4a body=48 status=ok
// SIG undefined FUN_14737be4a(void)

void FUN_14737be4a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14737be7a FUN_14737be7a body=100 status=ok
// SIG undefined FUN_14737be7a(void)

undefined8 FUN_14737be7a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x30,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  iVar4 = (int)(uVar2 / 0x30);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 == *(int *)(param_1 + 0x60c)) {
    return SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  }
  *(int *)(param_1 + 0x60c) = iVar5;
  uVar3 = FUN_14737bede(param_1,*(undefined4 *)(param_1 + 0x608));
  return uVar3;
}



// FUNCTION 14737bede FUN_14737bede body=149 status=ok
// SIG undefined FUN_14737bede(void)

void FUN_14737bede(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,0x30);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0x30);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,0x30);
  return;
}



// FUNCTION 14737bf74 FUN_14737bf74 body=136 status=ok
// SIG undefined FUN_14737bf74(void)

void FUN_14737bf74(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x60c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x30,0);
      iVar4 = (int)(uVar3 / 0x30);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x60c) = iVar5;
    FUN_14737bede(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14737bffe FUN_14737bffe body=336 status=ok
// SIG undefined FUN_14737bffe(void)

undefined4 * FUN_14737bffe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14737c150(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14737c236(param_1,uVar4,local_40,&local_4c);
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
      FUN_14737c354(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737c150 FUN_14737c150 body=230 status=ok
// SIG undefined FUN_14737c150(void)

int * FUN_14737c150(longlong *param_1,int *param_2)

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



// FUNCTION 14737c236 FUN_14737c236 body=172 status=ok
// SIG undefined FUN_14737c236(void)

undefined8 FUN_14737c236(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          if (plVar6[1] != 0) {
            LOCK();
            puVar1 = (uint *)(plVar6[1] + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)*param_3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar3;
          *(int *)(plVar6 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar4;
          FUN_14737c2e2(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14737c2e2 FUN_14737c2e2 body=114 status=ok
// SIG undefined FUN_14737c2e2(void)

void FUN_14737c2e2(longlong *param_1,int param_2)

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



// FUNCTION 14737c354 FUN_14737c354 body=474 status=ok
// SIG undefined FUN_14737c354(void)

void FUN_14737c354(longlong *param_1)

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



// FUNCTION 14737c530 FUN_14737c530 body=96 status=ok
// SIG undefined FUN_14737c530(void)

void FUN_14737c530(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14737c590 FUN_14737c590 body=132 status=ok
// SIG undefined FUN_14737c590(void)

void FUN_14737c590(longlong param_1,int param_2)

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



// FUNCTION 14737c616 FUN_14737c616 body=222 status=ok
// SIG undefined FUN_14737c616(void)

longlong FUN_14737c616(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
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
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2[0xc];
  uStack_30 = param_2[0xe];
  uStack_34 = param_2[0xd];
  iStack_2c = param_2[0xf];
  local_48 = param_2[8];
  uStack_44 = param_2[9];
  uStack_40 = param_2[10];
  uStack_3c = param_2[0xb];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  lVar3 = *(longlong *)(param_1 + 8);
  if ((lVar3 != 0) &&
     (uVar2 = (ulonglong)(*(uint *)(param_1 + 0x20) & local_38), -1 < *(char *)(lVar3 + uVar2))) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    cVar5 = '\0';
    do {
      if (((*(longlong *)(param_2 + 0xc) == *(longlong *)(lVar1 + 0x30 + uVar2 * 0x40)) &&
          (lVar6 = uVar2 * 0x40 + lVar1, param_2[0xf] == *(int *)(lVar6 + 0x3c))) &&
         (uStack_30 == *(uint *)(lVar6 + 0x38))) {
        if ((ulonglong)uStack_30 == 0) {
LAB_14737c6eb:
          lVar3 = uVar2 * 4 + *(longlong *)(param_1 + 0x18);
          goto LAB_14737c6ca;
        }
        uVar4 = 0;
        while (*(longlong *)(&local_68 + uVar4 * 2) ==
               *(longlong *)(uVar2 * 0x40 + lVar1 + uVar4 * 8)) {
          uVar4 = uVar4 + 1;
          if (uStack_30 == uVar4) goto LAB_14737c6eb;
        }
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      cVar5 = cVar5 + '\x01';
    } while (cVar5 <= *(char *)(lVar3 + uVar2));
  }
  lVar3 = 0;
LAB_14737c6ca:
  if ((DAT_14c707940 ^ (ulonglong)auStack_88 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14737c6f6 FUN_14737c6f6 body=314 status=ok
// SIG undefined FUN_14737c6f6(void)

void FUN_14737c6f6(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  uint local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
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
  uint local_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = *param_2;
  local_a8 = *(undefined8 *)(param_2 + 4);
  uStack_a0 = *(undefined8 *)(param_2 + 6);
  local_98 = *(undefined8 *)(param_2 + 8);
  uStack_90 = *(undefined8 *)(param_2 + 10);
  uVar5 = local_98;
  uVar6 = uStack_90;
  uVar3 = local_a8;
  uVar4 = uStack_a0;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_88 = *(longlong *)(param_2 + 0xc);
  uStack_80 = *(ulonglong *)(param_2 + 0xe);
  lVar7 = local_88;
  uVar8 = (uint)local_88;
  uVar11 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar8);
  lVar1 = *(longlong *)(param_1 + 8);
  iVar12 = (int)uStack_80;
  iVar10 = (int)(uStack_80 >> 0x20);
  if ((lVar1 == 0) || (*(char *)(lVar1 + uVar11) < '\0')) {
    cVar9 = '\0';
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    cVar9 = '\0';
    do {
      if (((local_88 == *(longlong *)(lVar2 + 0x30 + uVar11 * 0x40)) &&
          (lVar13 = uVar11 * 0x40 + lVar2, *(int *)(lVar13 + 0x3c) == iVar10)) &&
         (*(int *)(lVar13 + 0x38) == iVar12)) {
        if (iVar12 == 0) goto LAB_14737c806;
        uVar14 = 0;
        while (*(longlong *)(&local_b8 + uVar14 * 2) ==
               *(longlong *)(uVar11 * 0x40 + lVar2 + uVar14 * 8)) {
          uVar14 = uVar14 + 1;
          if ((uStack_80 & 0xffffffff) == uVar14) goto LAB_14737c806;
        }
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      cVar9 = cVar9 + '\x01';
    } while (cVar9 <= *(char *)(lVar1 + uVar11));
  }
  local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  local_d8 = &local_78;
  uStack_44 = local_88._4_4_;
  local_58 = (undefined4)local_98;
  uStack_54 = local_98._4_4_;
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  local_68 = (undefined4)local_a8;
  uStack_64 = local_a8._4_4_;
  uStack_60 = (undefined4)uStack_a0;
  uStack_5c = uStack_a0._4_4_;
  local_d0 = uVar8;
  local_c8 = param_3;
  local_a8 = uVar3;
  uStack_a0 = uVar4;
  local_98 = uVar5;
  uStack_90 = uVar6;
  local_88 = lVar7;
  local_78 = local_b8;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_48 = uVar8;
  iStack_40 = iVar12;
  iStack_3c = iVar10;
  FUN_14737c832(local_b8,cVar9,param_1);
LAB_14737c806:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737c832 FUN_14737c832 body=1445 status=ok
// SIG undefined FUN_14737c832(void)

longlong FUN_14737c832(longlong param_1,char param_2,longlong param_3,uint param_4,
                      undefined8 *param_5,uint param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  undefined4 uVar28;
  char cVar29;
  char cVar30;
  longlong lVar31;
  longlong lVar32;
  char *pcVar33;
  ulonglong uVar34;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  uint local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(char *)(param_1 + 0x24) != param_2) &&
     (*(int *)(param_1 + 0x28) < (int)((float)(*(int *)(param_1 + 0x20) + 1) * 0.9))) {
    uVar23 = (ulonglong)param_4;
    cVar30 = *(char *)(*(longlong *)(param_3 + 8) + uVar23);
    if (cVar30 < '\0') {
      lVar24 = *(longlong *)(param_3 + 0x10);
      lVar27 = uVar23 * 0x40;
      uVar28 = *(undefined4 *)param_5;
      uVar4 = *(undefined4 *)((longlong)param_5 + 4);
      uVar5 = *(undefined4 *)(param_5 + 1);
      uVar6 = *(undefined4 *)((longlong)param_5 + 0xc);
      uVar8 = param_5[2];
      uVar9 = param_5[3];
      uVar10 = param_5[4];
      uVar11 = param_5[5];
      uVar12 = param_5[7];
      puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar27);
      *puVar2 = param_5[6];
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar27);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar27);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar1 = (undefined4 *)(lVar24 + lVar27);
      *puVar1 = uVar28;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar23 * 4) = param_7;
      *(char *)(*(longlong *)(param_3 + 8) + uVar23) = param_2;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      lVar24 = uVar23 * 4;
    }
    else {
      *(char *)(*(longlong *)(param_3 + 8) + uVar23) = param_2;
      lVar24 = *(longlong *)(param_3 + 0x10);
      lVar27 = uVar23 * 0x40;
      local_88 = *param_5;
      uStack_80 = param_5[1];
      local_78 = param_5[2];
      uStack_70 = param_5[3];
      local_68 = param_5[4];
      uStack_60 = param_5[5];
      local_58 = param_5[6];
      uStack_50 = param_5[7];
      uVar8 = *(undefined8 *)(lVar24 + lVar27);
      uVar9 = ((undefined8 *)(lVar24 + lVar27))[1];
      puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar27);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar27);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar27);
      uVar14 = puVar2[1];
      param_5[6] = *puVar2;
      param_5[7] = uVar14;
      param_5[4] = uVar12;
      param_5[5] = uVar13;
      param_5[2] = uVar10;
      param_5[3] = uVar11;
      *param_5 = uVar8;
      param_5[1] = uVar9;
      plVar3 = (longlong *)(lVar24 + 0x30 + lVar27);
      *plVar3 = local_58;
      plVar3[1] = uStack_50;
      puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar27);
      *puVar2 = local_68;
      puVar2[1] = uStack_60;
      puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar27);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      *(undefined8 *)(lVar24 + lVar27) = local_88;
      ((undefined8 *)(lVar24 + lVar27))[1] = uStack_80;
      uVar28 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar23 * 4);
      *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar23 * 4) = param_7;
      cVar30 = cVar30 + '\x01';
      uVar25 = (ulonglong)(param_4 + 1);
      lVar24 = *(longlong *)(param_3 + 8);
      cVar29 = *(char *)(lVar24 + uVar25);
      if (-1 < cVar29) {
        pcVar33 = (char *)(lVar24 + uVar25);
        param_4 = param_4 + 2;
        do {
          if (cVar29 < cVar30) {
            *pcVar33 = cVar30;
            lVar24 = *(longlong *)(param_3 + 0x10);
            lVar31 = uVar25 * 0x40;
            local_88 = *param_5;
            uStack_80 = param_5[1];
            local_78 = param_5[2];
            uStack_70 = param_5[3];
            local_68 = param_5[4];
            uStack_60 = param_5[5];
            local_58 = param_5[6];
            uStack_50 = param_5[7];
            uVar8 = *(undefined8 *)(lVar24 + lVar31);
            uVar9 = ((undefined8 *)(lVar24 + lVar31))[1];
            puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar31);
            uVar10 = *puVar2;
            uVar11 = puVar2[1];
            puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar31);
            uVar12 = *puVar2;
            uVar13 = puVar2[1];
            puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar31);
            uVar14 = puVar2[1];
            param_5[6] = *puVar2;
            param_5[7] = uVar14;
            param_5[4] = uVar12;
            param_5[5] = uVar13;
            param_5[2] = uVar10;
            param_5[3] = uVar11;
            *param_5 = uVar8;
            param_5[1] = uVar9;
            plVar3 = (longlong *)(lVar24 + 0x30 + lVar31);
            *plVar3 = local_58;
            plVar3[1] = uStack_50;
            puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar31);
            *puVar2 = local_68;
            puVar2[1] = uStack_60;
            puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar31);
            *puVar2 = local_78;
            puVar2[1] = uStack_70;
            *(undefined8 *)(lVar24 + lVar31) = local_88;
            ((undefined8 *)(lVar24 + lVar31))[1] = uStack_80;
            uVar4 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar25 * 4);
            *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar25 * 4) = uVar28;
            cVar30 = cVar29 + '\x01';
            lVar24 = *(longlong *)(param_3 + 8);
            uVar28 = uVar4;
          }
          else {
            cVar30 = cVar30 + '\x01';
            if (cVar30 == *(char *)(param_1 + 0x24)) {
              lVar24 = *(longlong *)(param_3 + 0x10);
              uVar8 = *param_5;
              uVar9 = param_5[1];
              uVar10 = param_5[2];
              uVar11 = param_5[3];
              uVar12 = param_5[4];
              uVar13 = param_5[5];
              lVar31 = param_5[6];
              uVar25 = param_5[7];
              uVar14 = *(undefined8 *)(lVar24 + lVar27);
              uVar15 = ((undefined8 *)(lVar24 + lVar27))[1];
              puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar27);
              uVar16 = *puVar2;
              uVar17 = puVar2[1];
              puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar27);
              uVar18 = *puVar2;
              uVar19 = puVar2[1];
              puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar27);
              uVar20 = puVar2[1];
              param_5[6] = *puVar2;
              param_5[7] = uVar20;
              param_5[4] = uVar18;
              param_5[5] = uVar19;
              param_5[2] = uVar16;
              param_5[3] = uVar17;
              *param_5 = uVar14;
              param_5[1] = uVar15;
              local_88._0_4_ = (undefined4)uVar8;
              local_88._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
              uStack_80._0_4_ = (undefined4)uVar9;
              uStack_80._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
              local_78._0_4_ = (undefined4)uVar10;
              local_78._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
              uStack_70._0_4_ = (undefined4)uVar11;
              uStack_70._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
              local_68._0_4_ = (undefined4)uVar12;
              local_68._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
              uStack_60._0_4_ = (undefined4)uVar13;
              uStack_60._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
              local_58._0_4_ = (undefined4)lVar31;
              local_58._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
              uStack_50._0_4_ = (undefined4)uVar25;
              uStack_50._4_4_ = (undefined4)(uVar25 >> 0x20);
              puVar1 = (undefined4 *)(lVar24 + 0x30 + lVar27);
              *puVar1 = (undefined4)local_58;
              puVar1[1] = local_58._4_4_;
              puVar1[2] = (undefined4)uStack_50;
              puVar1[3] = uStack_50._4_4_;
              puVar1 = (undefined4 *)(lVar24 + 0x20 + lVar27);
              *puVar1 = (undefined4)local_68;
              puVar1[1] = local_68._4_4_;
              puVar1[2] = (undefined4)uStack_60;
              puVar1[3] = uStack_60._4_4_;
              puVar1 = (undefined4 *)(lVar24 + 0x10 + lVar27);
              *puVar1 = (undefined4)local_78;
              puVar1[1] = local_78._4_4_;
              puVar1[2] = (undefined4)uStack_70;
              puVar1[3] = uStack_70._4_4_;
              puVar1 = (undefined4 *)(lVar24 + lVar27);
              *puVar1 = (undefined4)local_88;
              puVar1[1] = local_88._4_4_;
              puVar1[2] = (undefined4)uStack_80;
              puVar1[3] = uStack_80._4_4_;
              uVar4 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar23 * 4);
              *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar23 * 4) = uVar28;
              local_88 = uVar8;
              uStack_80 = uVar9;
              local_78 = uVar10;
              uStack_70 = uVar11;
              local_68 = uVar12;
              uStack_60 = uVar13;
              local_58 = lVar31;
              uStack_50 = uVar25;
              FUN_14737cdd8(param_1);
              uVar8 = param_5[1];
              local_b8 = param_5[2];
              uStack_b0 = param_5[3];
              local_a8 = param_5[4];
              uStack_a0 = param_5[5];
              local_c8 = *(undefined4 *)param_5;
              uStack_c4 = *(undefined4 *)((longlong)param_5 + 4);
              uStack_c0 = *(undefined4 *)(param_5 + 1);
              uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
              local_98 = param_5[6];
              uStack_90 = param_5[7];
              uVar26 = (uint)local_98;
              uVar22 = *(uint *)(param_1 + 0x20) & uVar26;
              uVar25 = (ulonglong)uVar22;
              lVar24 = *(longlong *)(param_1 + 8);
              uVar9 = *param_5;
              uVar10 = local_b8;
              uVar11 = uStack_b0;
              uVar12 = local_a8;
              uVar13 = uStack_a0;
              lVar27 = local_98;
              uVar23 = uStack_90;
              if ((lVar24 == 0) || (*(char *)(lVar24 + uVar25) < '\0')) {
                cVar30 = '\0';
                goto LAB_14737cbff;
              }
              lVar31 = *(longlong *)(param_1 + 0x10);
              cVar30 = '\0';
              goto LAB_14737cd29;
            }
          }
          uVar25 = (ulonglong)param_4;
          pcVar33 = (char *)(lVar24 + uVar25);
          cVar29 = *(char *)(lVar24 + uVar25);
          param_4 = param_4 + 1;
        } while (-1 < cVar29);
      }
      lVar24 = *(longlong *)(param_3 + 0x10);
      lVar27 = uVar25 * 0x40;
      uVar4 = *(undefined4 *)param_5;
      uVar5 = *(undefined4 *)((longlong)param_5 + 4);
      uVar6 = *(undefined4 *)(param_5 + 1);
      uVar7 = *(undefined4 *)((longlong)param_5 + 0xc);
      uVar8 = param_5[2];
      uVar9 = param_5[3];
      uVar10 = param_5[4];
      uVar11 = param_5[5];
      uVar12 = param_5[7];
      puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar27);
      *puVar2 = param_5[6];
      puVar2[1] = uVar12;
      puVar2 = (undefined8 *)(lVar24 + 0x20 + lVar27);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2 = (undefined8 *)(lVar24 + 0x10 + lVar27);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar1 = (undefined4 *)(lVar24 + lVar27);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar25 * 4) = uVar28;
      *(char *)(*(longlong *)(param_3 + 8) + uVar25) = cVar30;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      lVar24 = uVar23 << 2;
    }
    lVar24 = lVar24 + *(longlong *)(param_3 + 0x18);
    goto LAB_14737ca8c;
  }
  FUN_14737cdd8(param_1);
  uVar23 = param_5[7];
  local_d8 = param_5[6];
  uStack_d0 = uVar23;
  uVar21 = uStack_d0;
  local_e8 = param_5[4];
  uStack_e0 = param_5[5];
  local_f8 = param_5[2];
  uStack_f0 = param_5[3];
  local_108 = *(undefined4 *)param_5;
  uStack_104 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_100 = *(undefined4 *)(param_5 + 1);
  uStack_fc = *(undefined4 *)((longlong)param_5 + 0xc);
  uVar22 = *(uint *)(param_1 + 0x20) & param_6;
  uVar25 = (ulonglong)uVar22;
  lVar24 = *(longlong *)(param_1 + 8);
  if ((lVar24 == 0) || (*(char *)(lVar24 + uVar25) < '\0')) {
    cVar30 = '\0';
  }
  else {
    lVar27 = *(longlong *)(param_1 + 0x10);
    uStack_d0._4_4_ = (int)(uVar23 >> 0x20);
    uStack_d0._0_4_ = (int)uVar23;
    cVar30 = '\0';
    do {
      if (((param_5[6] == *(longlong *)(lVar27 + 0x30 + uVar25 * 0x40)) &&
          (lVar31 = uVar25 * 0x40 + lVar27, uStack_d0._4_4_ == *(int *)(lVar31 + 0x3c))) &&
         ((int)uStack_d0 == *(int *)(lVar31 + 0x38))) {
        if ((uVar23 & 0xffffffff) == 0) goto LAB_14737cd7c;
        uVar34 = 0;
        while (*(longlong *)(&local_108 + uVar34 * 2) ==
               *(longlong *)(uVar25 * 0x40 + lVar27 + uVar34 * 8)) {
          uVar34 = uVar34 + 1;
          if ((uVar23 & 0xffffffff) == uVar34) goto LAB_14737cd7c;
        }
      }
      uVar22 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar22;
      cVar30 = cVar30 + '\x01';
    } while (cVar30 <= *(char *)(lVar24 + uVar25));
  }
  local_118 = param_7;
  local_120 = param_6;
  uVar26 = local_120;
  uVar4 = local_118;
  uStack_d0 = uVar21;
  uVar9 = *param_5;
  uVar8 = param_5[1];
  uVar10 = param_5[2];
  uVar11 = param_5[3];
  uVar12 = param_5[4];
  uVar13 = param_5[5];
  lVar27 = param_5[6];
  uVar23 = param_5[7];
  goto LAB_14737cbff;
LAB_14737cd7c:
  uStack_d0 = uVar21;
  lVar24 = uVar25 * 4 + *(longlong *)(param_1 + 0x18);
  goto LAB_14737ca8c;
LAB_14737cd29:
  do {
    if (((local_98 == *(longlong *)(lVar31 + 0x30 + uVar25 * 0x40)) &&
        (lVar32 = uVar25 * 0x40 + lVar31, *(int *)(lVar32 + 0x3c) == (int)(uStack_90 >> 0x20))) &&
       (*(int *)(lVar32 + 0x38) == (int)uStack_90)) {
      uVar21 = uStack_d0;
      if ((int)uStack_90 == 0) goto LAB_14737cd7c;
      uVar34 = 0;
      while (*(longlong *)(&local_c8 + uVar34 * 2) ==
             *(longlong *)(uVar25 * 0x40 + lVar31 + uVar34 * 8)) {
        uVar34 = uVar34 + 1;
        if ((uStack_90 & 0xffffffff) == uVar34) goto LAB_14737cd7c;
      }
    }
    uVar22 = (int)uVar25 + 1;
    uVar25 = (ulonglong)uVar22;
    cVar30 = cVar30 + '\x01';
  } while (cVar30 <= *(char *)(lVar24 + uVar25));
LAB_14737cbff:
  uStack_50 = uVar23;
  local_58 = lVar27;
  uStack_60 = uVar13;
  local_68 = uVar12;
  uStack_70 = uVar11;
  local_78 = uVar10;
  uStack_80 = uVar8;
  local_88 = uVar9;
  local_118 = uVar4;
  local_120 = uVar26;
  local_128 = &local_88;
  lVar24 = FUN_14737c832(param_1,cVar30,param_1,uVar22);
LAB_14737ca8c:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar24;
}



// FUNCTION 14737cdd8 FUN_14737cdd8 body=708 status=ok
// SIG undefined FUN_14737cdd8(void)

void FUN_14737cdd8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  void *_Dst;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  uint local_110;
  undefined4 local_108;
  ulonglong local_100;
  undefined4 local_f4;
  longlong local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar10 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1
            );
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  uVar21 = (ulonglong)(uVar10 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar17 = 1 << ((byte)lVar3 & 0x1f);
  uVar10 = param_1[8];
  if ((uVar10 == 0) || (uVar10 + 1 != uVar17)) {
    uVar21 = (ulonglong)uVar17 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar22 = 4;
    if (4 < (uint)lVar3) {
      uVar22 = (uint)lVar3;
    }
    local_e8 = *param_1;
    uStack_e4 = param_1[1];
    uStack_e0 = param_1[2];
    uStack_dc = param_1[3];
    local_d8 = param_1[4];
    uStack_d4 = param_1[5];
    uStack_d0 = param_1[6];
    uStack_cc = param_1[7];
    local_100 = CONCAT44(local_100._4_4_,(int)(char)param_1[9]);
    uVar21 = (ulonglong)(uVar22 + uVar17);
    _Dst = (void *)FUN_14001cc68(uVar21,0);
    uVar11 = FUN_14001cc68(uVar21 << 6,0);
    uVar16 = 0;
    uVar12 = FUN_14001cc68(uVar21 * 4,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar16 >> 8),0xff),uVar21);
    *param_1 = uVar22 + uVar17;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar11;
    *(undefined8 *)(param_1 + 6) = uVar12;
    param_1[8] = uVar17 - 1;
    *(char *)(param_1 + 9) = (char)uVar22;
    param_1[10] = 0;
    if (uVar10 + (int)local_100 != 0) {
      local_100 = (ulonglong)(uVar10 + (int)local_100);
      lVar3 = CONCAT44(uStack_dc,uStack_e0);
      lVar4 = CONCAT44(uStack_d4,local_d8);
      local_f0 = CONCAT44(uStack_cc,uStack_d0);
      uVar21 = 0;
      do {
        if (-1 < *(char *)(lVar3 + uVar21)) {
          local_f4 = *(undefined4 *)(local_f0 + uVar21 * 4);
          lVar13 = uVar21 * 0x40;
          local_c8 = *(undefined8 *)(lVar4 + lVar13);
          uStack_c0 = ((undefined8 *)(lVar4 + lVar13))[1];
          puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar13);
          local_b8 = *puVar1;
          uStack_b0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar13);
          local_a8 = *puVar1;
          uStack_a0 = puVar1[1];
          uVar7 = local_a8;
          uVar8 = uStack_a0;
          uVar16 = local_b8;
          uVar6 = uStack_b0;
          uVar11 = local_c8;
          uVar12 = uStack_c0;
          local_98 = *(longlong *)(lVar4 + 0x30 + lVar13);
          uStack_90 = *(ulonglong *)(lVar4 + 0x38 + lVar13);
          lVar9 = local_98;
          uVar10 = (uint)local_98;
          uVar23 = (ulonglong)(param_1[8] & uVar10);
          lVar13 = *(longlong *)(param_1 + 2);
          iVar18 = (int)uStack_90;
          iVar20 = (int)(uStack_90 >> 0x20);
          if ((lVar13 != 0) && (-1 < *(char *)(lVar13 + uVar23))) {
            lVar2 = *(longlong *)(param_1 + 4);
            cVar15 = '\0';
            do {
              if (((local_98 == *(longlong *)(lVar2 + 0x30 + uVar23 * 0x40)) &&
                  (lVar19 = uVar23 * 0x40 + lVar2, *(int *)(lVar19 + 0x3c) == iVar20)) &&
                 (*(int *)(lVar19 + 0x38) == iVar18)) {
                if (iVar18 == 0) goto LAB_14737d080;
                uVar14 = 0;
                while ((&local_c8)[uVar14] == *(longlong *)(uVar23 * 0x40 + lVar2 + uVar14 * 8)) {
                  uVar14 = uVar14 + 1;
                  if ((uStack_90 & 0xffffffff) == uVar14) goto LAB_14737d080;
                }
              }
              uVar23 = (ulonglong)((int)uVar23 + 1);
              cVar15 = cVar15 + '\x01';
            } while (cVar15 <= *(char *)(lVar13 + uVar23));
          }
          local_c8._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
          uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
          uVar5 = (undefined4)local_b8;
          local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
          local_a8._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          local_98._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
          uStack_54 = local_98._4_4_;
          local_68 = (undefined4)local_a8;
          uStack_64 = local_a8._4_4_;
          uStack_60 = (undefined4)uStack_a0;
          uStack_5c = uStack_a0._4_4_;
          local_78 = (undefined4)local_b8;
          uStack_74 = local_b8._4_4_;
          uStack_70 = (undefined4)uStack_b0;
          uStack_6c = uStack_b0._4_4_;
          local_88 = (undefined4)local_c8;
          uStack_84 = local_c8._4_4_;
          uStack_80 = (undefined4)uStack_c0;
          uStack_7c = uStack_c0._4_4_;
          local_118 = &local_88;
          local_110 = uVar10;
          local_108 = local_f4;
          local_c8 = uVar11;
          uStack_c0 = uVar12;
          local_b8 = uVar16;
          uStack_b0 = uVar6;
          local_a8 = uVar7;
          uStack_a0 = uVar8;
          local_98 = lVar9;
          local_58 = uVar10;
          iStack_50 = iVar18;
          iStack_4c = iVar20;
          FUN_14737c832(param_1,uVar5,param_1,uVar23);
        }
LAB_14737d080:
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_100);
    }
    FUN_147377434(&local_e8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737d09e FUN_14737d09e body=58 status=ok
// SIG undefined FUN_14737d09e(void)

void FUN_14737d09e(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14737d108(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14737d0d8 FUN_14737d0d8 body=48 status=ok
// SIG undefined FUN_14737d0d8(void)

void FUN_14737d0d8(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14737d108 FUN_14737d108 body=67 status=ok
// SIG undefined FUN_14737d108(void)

void FUN_14737d108(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 14737d14c FUN_14737d14c body=1069 status=ok
// SIG undefined FUN_14737d14c(void)

void FUN_14737d14c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  uint local_c4;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (uVar2 == 0) {
    uVar6 = 0x20;
  }
  else {
    uVar6 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
  }
  if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
      (*(char *)(param_1[0x5d] + 0x48) == '\x01')) &&
     (lVar3 = *(longlong *)(param_1[0x5d] + 0x60), lVar3 != 0)) {
    piVar1 = (int *)(lVar3 + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  plVar8 = (longlong *)*param_2;
  if (plVar8 == (longlong *)0x0) {
LAB_14737d1e9:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*plVar8 + 8))(plVar8);
    if ((*(byte *)(lVar3 + 2) & 4) != 0) {
      plVar8 = (longlong *)**(longlong **)(plVar8[0x48] + 0xa0);
    }
    lVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
    if (lVar3 == 0) goto LAB_14737d1e9;
    plVar8 = *(longlong **)(lVar3 + 0x128 + (ulonglong)uVar6 * 8);
  }
  local_e0 = (**(code **)(*plVar8 + 8))(plVar8);
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar9 + 8))(plVar9);
    if ((*(byte *)(lVar3 + 2) & 4) != 0) {
      plVar9 = (longlong *)**(longlong **)(plVar9[0x48] + 0xa0);
    }
    lVar3 = (**(code **)(*plVar9 + 0x30))(plVar9);
    if (lVar3 != 0) {
      plVar9 = *(longlong **)(lVar3 + 0x128 + (ulonglong)uVar6 * 8);
      goto LAB_14737d23f;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_14737d23f:
  local_d8 = plVar9[0x17];
  lVar3 = (**(code **)(*plVar9 + 8))();
  local_d0 = plVar9;
  if (*(char *)(local_e0 + 0x33) == '\v') {
    if ((((int)param_2[3] < 0) || ((int)param_2[4] < 0)) ||
       ((*(int *)((longlong)param_2 + 0x1c) < 0 || (*(int *)((longlong)param_2 + 0x24) < 0)))) {
      lStack_70 = *(longlong *)(lVar3 + 0x24);
      local_78 = 0;
      lStack_a0 = *(longlong *)(local_e0 + 0x24);
      local_a8 = 0;
    }
    else {
      local_78 = param_2[3];
      lStack_70 = param_2[4];
      local_a8 = param_2[3];
      lStack_a0 = param_2[4];
    }
    local_d8 = local_d8 + 0x58;
    local_4c = 0x22;
    uVar2 = FUN_144b19f7a();
    local_108 = plVar9[(ulonglong)uVar2 * 2 + 0x34];
    if ((int)-(uint)*(byte *)(plVar9 + 0x2f) < (int)plVar9[0x33]) {
      plVar5 = plVar9 + 0x30;
      if ((longlong *)plVar9[0x32] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar9[0x32];
      }
      lVar3 = plVar5[(ulonglong)*(byte *)(plVar9 + 0x2f) * -2];
    }
    else {
      lVar3 = 0;
    }
    local_f0 = &local_78;
    local_f8 = &local_a8;
    local_100 = local_d8;
    FUN_14737d57a(param_1,plVar8,plVar9,lVar3);
  }
  else {
    local_e4 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar3 + 0x33) * 0x30)
                       );
    if (local_e4 == 0x1b) {
      local_e4 = 0x1c;
    }
    else if (local_e4 == 0x5a) {
      local_e4 = 0x57;
    }
    uVar2 = *(uint *)((longlong)param_2 + 0x14);
    local_c4 = (uint)*(ushort *)(local_e0 + 0x2e);
    if (-1 < (int)uVar2) {
      local_c4 = uVar2 + 1;
    }
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar6 = uVar2;
    }
    local_b0 = param_2;
    if ((int)uVar6 < (int)local_c4) {
      local_b8 = plVar9 + 0x15;
      local_c0 = plVar8 + 0x15;
      do {
        iVar10 = *(byte *)(lVar3 + 0x30) * uVar6 + (uint)*(byte *)(local_b0 + 2);
        iVar7 = *(byte *)(local_e0 + 0x30) * uVar6 + (uint)*(byte *)(local_b0 + 2);
        local_108._0_4_ = 0x1000;
        local_100._0_4_ = iVar10;
        FUN_144abd48c(&local_78,param_1,local_d0[0x17],local_b8);
        local_100 = CONCAT44(local_100._4_4_,iVar7);
        local_108 = CONCAT44(local_108._4_4_,0x2000);
        FUN_144abd48c(&local_a8,param_1,plVar8[0x17],local_c0);
        FUN_14492aa36(param_1);
        lVar4 = param_1[0x33];
        if (lVar4 == 0) {
          (**(code **)(*param_1 + 8))(param_1);
          lVar4 = param_1[0x33];
        }
        *(int *)(lVar4 + 0x1c0) = *(int *)(lVar4 + 0x1c0) + 1;
        local_100 = CONCAT44(local_100._4_4_,local_e4);
        local_108 = CONCAT44(local_108._4_4_,iVar7);
        (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x98))
                  (*(longlong **)(lVar4 + 0x28),*(undefined8 *)(local_d8 + 0x20),iVar10,
                   *(undefined8 *)(plVar8[0x17] + 0x20));
        FUN_144ac1896(&local_a8);
        FUN_144ac1896(&local_78);
        uVar6 = uVar6 + 1;
      } while (local_c4 != uVar6);
    }
  }
  lVar3 = plVar8[0x17];
  lVar4 = param_1[0x33];
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar4 = param_1[0x33];
  }
  FUN_1447093fc(lVar4,lVar3);
  lVar3 = local_d0[0x17];
  lVar4 = param_1[0x33];
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar4 = param_1[0x33];
  }
  FUN_1447093fc(lVar4,lVar3);
  FUN_14315b922(param_1);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737d57a FUN_14737d57a body=1251 status=ok
// SIG undefined FUN_14737d57a(void)

void FUN_14737d57a(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,int *param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_638 [32];
  ulonglong local_618;
  undefined4 local_610;
  undefined8 local_608;
  longlong local_600;
  undefined8 *local_5f8;
  undefined8 local_5f0;
  int *local_5e8;
  undefined1 *local_5e0;
  longlong *local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  undefined1 local_5b9;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_24c;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined5 uStack_214;
  undefined3 uStack_20f;
  undefined5 uStack_20c;
  undefined8 uStack_207;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [384];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_638;
  uVar2 = *(uint *)(param_1 + 0x7c);
  uVar8 = 0x10;
  if ((int)uVar2 < 0x10) {
    uVar8 = uVar2;
  }
  local_5d0 = param_2;
  local_5c8 = param_4;
  if (0 < (int)uVar2) {
    memcpy(local_1c8,(void *)((longlong)param_1 + 0x3e4),(ulonglong)(uVar8 * 0x18));
    if (0x10 < uVar2) {
      memset(local_1c8 + (ulonglong)uVar8 * 0x18,0,(ulonglong)(uVar2 - uVar8) * 0x18);
    }
  }
  local_268 = 0;
  uStack_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  bVar9 = false;
  local_258 = 0;
  local_24c = 0;
  uStack_244 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  local_22c = 0;
  uStack_224 = 0;
  local_21c = 0;
  uStack_214 = 0;
  uStack_20f = 0;
  uStack_20c = 0;
  uStack_207 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 1;
  local_1d8 = 0;
  local_278 = DAT_14c9c0d50;
  uStack_270 = DAT_14c9c0db0;
  plVar7 = param_3 + 0xc;
  if (param_3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  FUN_14736c26c(param_1,plVar7,0x18);
  if (param_8[1] == 0 && *param_8 == 0) {
    if (*(longlong *)(param_6 + 0x10) == (longlong)param_8[2]) {
      bVar9 = param_8[3] == *(int *)(param_6 + 0x18);
    }
    else {
      bVar9 = false;
    }
  }
  if ((*(byte *)(param_6 + 0x30) & 2) == 0) {
    if (bVar9) {
      if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
          (*(char *)(param_1[0x5d] + 0x48) == '\x01')) &&
         (lVar5 = *(longlong *)(param_1[0x5d] + 0x60), lVar5 != 0)) {
        piVar1 = (int *)(lVar5 + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      FUN_1456b7b28(param_1,param_4,4);
      FUN_14492aa36(param_1);
      local_5b8 = 0;
      uStack_5b0 = 0;
      lVar5 = param_1[0x33];
      if (lVar5 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar5 = param_1[0x33];
      }
      *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + 1;
      local_618 = 0;
      (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x180))
                (*(longlong **)(lVar5 + 0x28),*(undefined8 *)(param_4 + 0x38),&local_5b8,0);
      uVar3 = *(undefined8 *)(local_5c8 + 0x20);
      lVar5 = param_1[0x33];
      if (lVar5 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar5 = param_1[0x33];
      }
      FUN_1447093fc(lVar5,uVar3);
    }
    FUN_144ad6520(param_1 + 0x72,1,&local_5c8,0);
    local_268 = DAT_14c9c0d98;
    if (param_3 != (longlong *)0x0) {
      lVar5 = (**(code **)(*param_3 + 8))(param_3);
      local_24c._0_5_ = CONCAT14(*(undefined1 *)(lVar5 + 0x33),(undefined4)local_24c);
      puVar6 = (undefined8 *)(**(code **)(*param_3 + 8))(param_3);
      uStack_240 = (undefined4)*puVar6;
      uStack_23c = (undefined4)((ulonglong)*puVar6 >> 0x20);
LAB_14737d947:
      lVar5 = (**(code **)(*param_3 + 8))(param_3);
      local_1e8 = CONCAT62(local_1e8._2_6_,(ushort)*(byte *)(lVar5 + 0x31));
    }
  }
  else {
    if (bVar9) {
      if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
          (*(char *)(param_1[0x5d] + 0x48) == '\x01')) &&
         (lVar5 = *(longlong *)(param_1[0x5d] + 0x60), lVar5 != 0)) {
        piVar1 = (int *)(lVar5 + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      FUN_14736cfe0(param_1,param_5,0x10);
      FUN_14492aa36(param_1);
      lVar5 = param_1[0x33];
      if (lVar5 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar5 = param_1[0x33];
      }
      *(int *)(lVar5 + 0x1c0) = *(int *)(lVar5 + 0x1c0) + 1;
      local_608 = 0;
      local_610 = 0;
      local_618 = local_618 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(lVar5 + 0x28) + 0x178))
                (*(longlong **)(lVar5 + 0x28),*(undefined8 *)(param_5 + 0x38),3,0);
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      lVar5 = param_1[0x33];
      if (lVar5 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar5 = param_1[0x33];
      }
      FUN_1447093fc(lVar5,uVar3);
    }
    local_5b8 = 0;
    FUN_144ad6520(param_1 + 0x72,1,&local_5b8,param_5);
    local_268 = DAT_14c9c0c60;
    if (param_3 != (longlong *)0x0) {
      lVar5 = (**(code **)(*param_3 + 8))(param_3);
      uStack_207 = CONCAT17(*(undefined1 *)(lVar5 + 0x33),(undefined7)uStack_207);
      puVar6 = (undefined8 *)(**(code **)(*param_3 + 8))(param_3);
      local_1f8 = *puVar6;
      goto LAB_14737d947;
    }
  }
  plVar7 = param_1 + 0x39;
  if (param_1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  FUN_140048e76(&local_5b8,plVar7);
  local_600 = param_6;
  local_5f8 = &local_2a8;
  local_5f0 = param_7;
  local_5e8 = param_8;
  local_5e0 = &local_5b9;
  local_5d8 = &local_5d0;
  FUN_143177732(&local_600,&local_5b8);
  FUN_140048db6(&local_5b8);
  lVar5 = local_5d0 + 0x60;
  if (local_5d0 == 0) {
    lVar5 = 0;
  }
  FUN_14736c26c(param_1,lVar5,0x18);
  if (*(uint *)(param_1 + 0x7c) == uVar2) {
    iVar4 = memcmp((void *)((longlong)param_1 + 0x3e4),local_1c8,(ulonglong)uVar2 * 0x18);
    if (iVar4 == 0) goto LAB_14737da30;
  }
  memcpy((void *)((longlong)param_1 + 0x3e4),local_1c8,(ulonglong)uVar2 * 0x18);
  *(uint *)(param_1 + 0x7c) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x3b2) = 1;
LAB_14737da30:
  if ((local_48 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737da5e FUN_14737da5e body=387 status=ok
// SIG undefined FUN_14737da5e(void)

void FUN_14737da5e(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_4c;
  undefined4 local_48;
  undefined2 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_3 == 0) && (puVar1 = (undefined4 *)param_1[0x46], puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    uVar6 = puVar1[5];
    uVar7 = puVar1[6];
    uVar8 = puVar1[7];
    param_2[4] = puVar1[4];
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar8;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  FUN_144b15a3c(param_1,&local_4c);
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_88 = 3;
  local_78 = (longlong)local_4c;
  uStack_70._0_6_ = CONCAT24(local_44,local_48);
  uStack_70 = (ulonglong)(uint6)uStack_70;
  lVar10 = (**(code **)(*param_1 + 8))(param_1);
  uStack_70 = (ulonglong)CONCAT16(*(undefined1 *)(lVar10 + 0x30),(uint6)uStack_70);
  lVar10 = (**(code **)(*param_1 + 8))(param_1);
  local_68 = CONCAT44(local_68._4_4_,
                      *(undefined4 *)
                       ((longlong)&DAT_14c873434 +
                       (ulonglong)((uint)*(byte *)(lVar10 + 0x33) * 0x30)));
  lVar10 = (**(code **)(*param_1 + 8))(param_1);
  local_68 = (ulonglong)CONCAT14(*(undefined1 *)(lVar10 + 0x31),(undefined4)local_68);
  FUN_143175c93(param_2,*(undefined8 *)(*(longlong *)(param_1[0xd] + 0x10) + 8),&local_88,param_3);
  if (param_3 == 0) {
    puVar11 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    lVar10 = param_1[0x46];
    param_1[0x46] = (longlong)puVar11;
    if (lVar10 != 0) {
      FUN_1400020a8();
      puVar11 = (undefined8 *)param_1[0x46];
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar9 = *(undefined8 *)(param_2 + 6);
    puVar11[2] = *(undefined8 *)(param_2 + 4);
    puVar11[3] = uVar9;
    *(undefined4 *)puVar11 = uVar2;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
    *(undefined4 *)(puVar11 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737dbe4 FUN_14737dbe4 body=570 status=ok
// SIG undefined FUN_14737dbe4(void)

void FUN_14737dbe4(undefined8 param_1,longlong *param_2,int *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  void *_Dst;
  ulonglong _Size;
  int iVar6;
  uint uVar7;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  longlong *local_128;
  undefined4 local_120;
  int local_118;
  int local_114;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 *local_a0;
  longlong local_98;
  int local_8c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_120 = param_5[6];
  local_114 = param_3[1];
  iVar4 = param_3[2];
  iVar2 = *param_3;
  local_118 = param_3[3];
  iVar6 = local_118 - local_114;
  local_138 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_c8 = *param_5;
  uStack_c4 = param_5[1];
  uStack_c0 = param_5[2];
  uStack_bc = param_5[3];
  uStack_b8 = param_5[4];
  uStack_b4 = param_5[5];
  uStack_b0 = param_5[6];
  local_130 = (undefined8 *)&local_c8;
  local_d8 = *(undefined8 *)param_3;
  local_d0 = *(undefined8 *)(param_3 + 2);
  local_128 = &local_98;
  FUN_14316ce88(local_c8,&local_a0,param_2);
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  iVar3 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30));
  local_110 = param_4;
  FUN_140393c76(param_4,(iVar4 - iVar2) * iVar6 * iVar3,1);
  _Size = (ulonglong)(uint)((param_3[2] - *param_3) * iVar3);
  uVar7 = local_8c * iVar3 + 0xffU & 0xffffff00;
  lVar5 = (ulonglong)(local_78._4_4_ * uVar7) + (ulonglong)(uint)(iVar3 * (int)local_78) + local_98;
  local_e8 = (iVar6 + -1) * uVar7 + _Size + lVar5;
  local_f0 = lVar5;
  iVar4 = (**(code **)(*(longlong *)local_a0[4] + 0x40))
                    ((longlong *)local_a0[4],0,&local_f0,&local_e0);
  if (iVar4 < 0) {
    local_130 = &local_108;
    local_108 = 0;
    uStack_100 = 0;
    local_138 = (undefined8 *)0x0;
    FUN_145763094(iVar4,"TempTexture2D->GetResource()->Map(0, &ReadRange, &pData)",
                  ".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x200);
  }
  if (local_118 != local_114) {
    _Src = (void *)(lVar5 + local_e0);
    _Dst = (void *)*local_110;
    do {
      memcpy(_Dst,_Src,_Size);
      _Dst = (void *)((longlong)_Dst + _Size);
      _Src = (void *)((longlong)_Src + (ulonglong)uVar7);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (**(code **)(*(longlong *)local_a0[4] + 0x48))((longlong *)local_a0[4],0,0);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737de20 FUN_14737de20 body=3298 status=ok
// SIG undefined FUN_14737de20(void)

/* WARNING: Removing unreachable block (ram,0x00014737e7aa) */

void FUN_14737de20(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined8 *local_170;
  int local_160;
  int local_15c;
  undefined4 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [12];
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [12];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_e8 = 0;
  uStack_e0 = 0;
  local_150 = param_4;
  if (param_2 == (longlong *)0x0) {
LAB_14737de8d:
    lVar14 = 0;
  }
  else {
    uVar26 = *(uint *)(param_5 + 3);
    lVar14 = (**(code **)(*param_2 + 8))(param_2);
    plVar25 = param_2;
    if ((*(byte *)(lVar14 + 2) & 4) != 0) {
      plVar25 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar14 = (**(code **)(*plVar25 + 0x30))();
    if (lVar14 == 0) goto LAB_14737de8d;
    lVar14 = *(longlong *)(lVar14 + 0x128 + (ulonglong)uVar26 * 8);
  }
  lVar14 = *(longlong *)(lVar14 + 0xb8);
  if (*(int *)(lVar14 + 0x7c) == 1) {
    local_108 = *(undefined4 *)param_5;
    uStack_104 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_100 = *(undefined4 *)(param_5 + 1);
    local_178 = &local_108;
    auStack_f8 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_fc = *(undefined4 *)((longlong)param_5 + 0xc);
    local_118 = *(undefined8 *)param_3;
    local_110 = *(undefined8 *)(param_3 + 2);
    FUN_14737dbe4(param_1,param_2);
  }
  else {
    local_138 = *(undefined4 *)param_5;
    uStack_134 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_130 = *(undefined4 *)(param_5 + 1);
    local_178 = &local_138;
    auStack_128 = SUB1612(*(undefined1 (*) [16])((longlong)param_5 + 0xc),4);
    uStack_12c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_148 = *(undefined8 *)param_3;
    local_140 = *(undefined8 *)(param_3 + 2);
    FUN_14316d3a4(param_1,param_2);
  }
  plVar25 = local_150;
  local_160 = param_3[1];
  iVar7 = param_3[2];
  iVar8 = *param_3;
  iVar9 = *(int *)(lVar14 + 0x7c);
  iVar20 = (iVar7 - iVar8) * iVar9;
  iVar10 = param_3[3];
  uVar26 = iVar10 - local_160;
  FUN_14735c9c0(local_150,uVar26 * iVar20,1);
  iVar12 = FUN_14316d38d(*(undefined4 *)(lVar14 + 0x78));
  iVar13 = iVar12 * iVar20;
  local_15c = iVar20;
  lVar14 = (**(code **)(*param_2 + 8))(param_2);
  bVar3 = *(byte *)(lVar14 + 0x33);
  local_158 = (undefined4 *)*plVar25;
  if ((bVar3 == 0x20) || (bVar3 == 4)) {
    if (iVar10 != local_160) {
      uVar23 = 0;
      uVar24 = 0;
      do {
        if (local_15c != 0) {
          pfVar18 = (float *)(local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4);
          lVar14 = 0;
          do {
            fVar29 = (float)*(ushort *)(uVar23 + local_e8 + lVar14 * 2) * 1.5259022e-05;
            *pfVar18 = fVar29;
            pfVar18[1] = fVar29;
            pfVar18[2] = fVar29;
            pfVar18[3] = 1.0;
            pfVar18 = pfVar18 + 4;
            lVar14 = lVar14 + 1;
          } while (local_15c != (int)lVar14);
        }
        uVar24 = uVar24 + 1;
        uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
      } while (uVar24 != uVar26);
    }
    goto LAB_14737e061;
  }
  if ((byte)(bVar3 - 0x15) < 2) {
    if (iVar10 != local_160) {
      uVar23 = 0;
      uVar24 = 0;
      do {
        if (local_15c != 0) {
          puVar15 = local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4;
          lVar14 = 0;
          do {
            uVar4 = *(ushort *)(uVar23 + local_e8 + lVar14 * 2);
            uVar19 = (uint)uVar4 << 0xd;
            if ((uVar19 & 0xf800000) == 0xf800000) {
              fVar29 = (float)(uVar19 | 0x70000000);
            }
            else if ((uVar19 & 0xf800000) == 0) {
              fVar29 = (float)(uVar19 | 0x38800000) + -6.1035156e-05;
            }
            else {
              fVar29 = (float)((uVar19 & 0xfffe000) + 0x38000000);
            }
            uVar19 = (int)(short)uVar4 & 0x80000000U | (uint)fVar29;
            *puVar15 = uVar19;
            puVar15[1] = uVar19;
            puVar15[2] = uVar19;
            puVar15[3] = 0x3f800000;
            puVar15 = puVar15 + 4;
            lVar14 = lVar14 + 1;
          } while (local_15c != (int)lVar14);
        }
        uVar24 = uVar24 + 1;
        uVar23 = (ulonglong)(uint)((int)uVar23 + iVar12 * iVar9 * (iVar7 - iVar8));
      } while (uVar24 != uVar26);
    }
    goto LAB_14737e061;
  }
  fVar29 = *(float *)((longlong)param_5 + 0xc);
  if (bVar3 - 1 < 0x1a) {
    switch((uint)bVar3) {
    case 1:
      local_c8 = *(undefined4 *)(param_5 + 1);
      local_170 = &local_d0;
      local_d0 = *param_5;
      local_c0 = param_5[2];
      local_b8 = *(undefined4 *)(param_5 + 3);
      local_178 = local_158;
      local_c4 = fVar29;
      FUN_1431771f1(local_15c,uVar26,local_e8,iVar13);
      break;
    case 2:
      if (iVar10 != local_160) {
        uVar23 = 0;
        uVar24 = 0;
        do {
          if (local_15c != 0) {
            lVar14 = uVar23 + local_e8 + 3;
            puVar16 = local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4;
            lVar28 = 0;
            do {
              uVar1 = (&DAT_14c758c60)[*(byte *)(lVar14 + -2 + lVar28 * 4)];
              uVar2 = (&DAT_14c758c60)[*(byte *)(lVar14 + -3 + lVar28 * 4)];
              bVar3 = *(byte *)(lVar14 + lVar28 * 4);
              *puVar16 = (&DAT_14c758c60)[*(byte *)(lVar14 + -1 + lVar28 * 4)];
              puVar16[1] = uVar1;
              puVar16[2] = uVar2;
              puVar16[3] = (float)bVar3 * 0.003921569;
              puVar16 = puVar16 + 4;
              lVar28 = lVar28 + 1;
            } while (local_15c != (int)lVar28);
          }
          uVar24 = uVar24 + 1;
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (uVar24 != uVar26);
      }
      break;
    case 9:
    case 0x1a:
      if (iVar10 != local_160) {
        local_150 = (longlong *)(ulonglong)uVar26;
        uVar23 = 0;
        plVar25 = (longlong *)0x0;
        do {
          if (local_15c != 0) {
            puVar15 = local_158 + (ulonglong)(uint)(local_15c * (int)plVar25) * 4;
            lVar14 = 0;
            do {
              uVar26 = *(uint *)(uVar23 + local_e8 + lVar14 * 4);
              uVar27 = uVar26 & 0x3f;
              uVar19 = uVar26 >> 6 & 0x1f;
              if (uVar19 == 0) {
                if (uVar27 == 0) {
                  uVar19 = 0xffffff90;
                  uVar27 = 0;
                }
                else {
                  uVar21 = 0x1f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> uVar21 == 0; uVar21 = uVar21 - 1) {
                    }
                  }
                  uVar19 = (uVar21 ^ 0xffffffe0) + 0x1b;
                  uVar27 = uVar26 << (~(byte)uVar21 + 7 & 0x1f) & 0x3e;
                }
LAB_14737e261:
                uVar19 = uVar27 * 0x20000 + uVar19 * 0x800000 + 0x38000000;
              }
              else {
                if (uVar19 != 0x1f) goto LAB_14737e261;
                uVar19 = uVar27 << 0x11 | 0x7f800000;
              }
              uVar27 = uVar26 >> 0xb & 0x3f;
              uVar21 = uVar26 >> 0x11 & 0x1f;
              if (uVar21 == 0) {
                if (uVar27 == 0) {
                  uVar21 = 0xffffff90;
                  uVar27 = 0;
                }
                else {
                  uVar22 = 0x1f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> uVar22 == 0; uVar22 = uVar22 - 1) {
                    }
                  }
                  uVar21 = (uVar22 ^ 0xffffffe0) + 0x1b;
                  uVar27 = (uVar26 >> 0xb) << (~(byte)uVar22 + 7 & 0x1f) & 0x3e;
                }
LAB_14737e2bc:
                uVar27 = uVar27 * 0x20000 + uVar21 * 0x800000 + 0x38000000;
              }
              else {
                if (uVar21 != 0x1f) goto LAB_14737e2bc;
                uVar27 = uVar27 << 0x11 | 0x7f800000;
              }
              uVar21 = uVar26 >> 0x16 & 0x1f;
              uVar22 = uVar26 >> 0x1b;
              if (uVar22 == 0x1f) {
                uVar26 = uVar21 << 0x11 | 0x7f800000;
              }
              else {
                if (uVar26 < 0x8000000) {
                  if (uVar21 == 0) {
                    uVar22 = 0xffffff90;
                    uVar21 = 0;
                  }
                  else {
                    uVar11 = 0x1f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> uVar11 == 0; uVar11 = uVar11 - 1) {
                      }
                    }
                    uVar22 = (uVar11 ^ 0xffffffe0) + 0x1c;
                    uVar21 = (uVar26 >> 0x16) << (~(byte)uVar11 + 6 & 0x1f) & 0x1e;
                  }
                }
                uVar26 = uVar21 * 0x40000 + uVar22 * 0x800000 + 0x38000000;
              }
              *puVar15 = uVar19;
              puVar15[1] = uVar27;
              puVar15[2] = uVar26;
              puVar15[3] = 0;
              lVar14 = lVar14 + 1;
              puVar15 = puVar15 + 4;
            } while (local_15c != (int)lVar14);
          }
          plVar25 = (longlong *)((longlong)plVar25 + 1);
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (plVar25 != local_150);
      }
      break;
    case 10:
      local_a8 = *(undefined4 *)(param_5 + 1);
      local_170 = &local_b0;
      local_b0 = *param_5;
      local_a0 = param_5[2];
      local_98 = *(undefined4 *)(param_5 + 3);
      local_178 = local_158;
      local_a4 = fVar29;
      FUN_143176911(local_15c,uVar26,local_e8,iVar13);
      break;
    case 0xb:
switchD_14737e1d0_caseD_b:
      iVar7 = *(int *)((longlong)&DAT_14c873428 + (ulonglong)((uint)bVar3 * 0x30));
      if (iVar7 == 4) goto switchD_14737e1d0_caseD_14;
      if (bVar3 - 0xb < 9) {
        (*(code *)(&DAT_14a350b58 + *(int *)(&DAT_14a350b58 + (ulonglong)(bVar3 - 0xb) * 4)))
                  (bVar3,iVar7,local_e8,
                   &DAT_14a350b58 + *(int *)(&DAT_14a350b58 + (ulonglong)(bVar3 - 0xb) * 4));
        return;
      }
      if ((bVar3 == 0x2c) && (4 < iVar7)) {
        if (iVar10 != local_160) {
          uVar19 = 0;
          uVar23 = 0;
          do {
            if (local_15c != 0) {
              pfVar18 = (float *)(local_158 + (ulonglong)(uint)(local_15c * (int)uVar23) * 4);
              lVar14 = 0;
              do {
                fVar30 = *(float *)((ulonglong)uVar19 + local_e8 + lVar14 * 8);
                if (1.0 <= fVar30) {
                  fVar30 = 1.0;
                }
                bVar3 = *(byte *)((ulonglong)uVar19 + local_e8 + 4 + lVar14 * 8);
                fVar30 = ABS((1.0 / (fVar30 * 0.1 + -0.1)) / fVar29);
                if (1.0 <= fVar30) {
                  fVar30 = 1.0;
                }
                *pfVar18 = fVar30;
                pfVar18[1] = (float)bVar3 / 255.0;
                pfVar18[2] = 0.0;
                pfVar18[3] = 0.0;
                lVar14 = lVar14 + 1;
                pfVar18 = pfVar18 + 4;
              } while (local_15c != (int)lVar14);
            }
            uVar23 = uVar23 + 1;
            uVar19 = uVar19 + iVar13;
          } while (uVar23 != uVar26);
        }
        break;
      }
    default:
switchD_14737e1d0_caseD_3:
      *(undefined4 *)(plVar25 + 1) = 0;
      if (*(int *)((longlong)plVar25 + 0xc) != 0) {
        FUN_144750f90(plVar25,0);
      }
      break;
    case 0xd:
      if (iVar10 != local_160) {
        uVar23 = 0;
        uVar24 = 0;
        do {
          if (local_15c != 0) {
            puVar16 = local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4;
            lVar14 = 0;
            do {
              *puVar16 = *(undefined4 *)(uVar23 + local_e8 + lVar14 * 4);
              *(undefined8 *)(puVar16 + 1) = 0;
              puVar16[3] = 0x3f800000;
              puVar16 = puVar16 + 4;
              lVar14 = lVar14 + 1;
            } while (local_15c != (int)lVar14);
          }
          uVar24 = uVar24 + 1;
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (uVar24 != uVar26);
      }
      break;
    case 0xe:
      if (iVar10 != local_160) {
        uVar23 = 0;
        uVar24 = 0;
        do {
          if (local_15c != 0) {
            lVar14 = uVar23 + local_e8 + 2;
            pfVar18 = (float *)(local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4);
            lVar28 = 0;
            do {
              uVar4 = *(ushort *)(lVar14 + lVar28 * 4);
              *pfVar18 = (float)*(ushort *)(lVar14 + -2 + lVar28 * 4) / 65535.0;
              pfVar18[1] = (float)uVar4 / 65535.0;
              pfVar18[2] = 0.0;
              pfVar18[3] = 1.0;
              pfVar18 = pfVar18 + 4;
              lVar28 = lVar28 + 1;
            } while (local_15c != (int)lVar28);
          }
          uVar24 = uVar24 + 1;
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (uVar24 != uVar26);
      }
      break;
    case 0xf:
      if (iVar10 != local_160) {
        local_150 = (longlong *)(ulonglong)uVar26;
        uVar23 = 0;
        plVar25 = (longlong *)0x0;
        do {
          if (local_15c != 0) {
            lVar28 = uVar23 + local_e8 + 2;
            puVar15 = local_158 + (ulonglong)(uint)(local_15c * (int)plVar25) * 4;
            lVar14 = 0;
            do {
              uVar4 = *(ushort *)(lVar28 + lVar14 * 4);
              uVar26 = (uint)uVar4 << 0xd;
              if ((uVar26 & 0xf800000) == 0xf800000) {
                fVar29 = (float)(uVar26 | 0x70000000);
              }
              else if ((uVar26 & 0xf800000) == 0) {
                fVar29 = (float)(uVar26 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar29 = (float)((uVar26 & 0xfffe000) + 0x38000000);
              }
              uVar5 = *(ushort *)(lVar28 + -2 + lVar14 * 4);
              uVar26 = (uint)uVar5 << 0xd;
              if ((uVar26 & 0xf800000) == 0xf800000) {
                fVar30 = (float)(uVar26 | 0x70000000);
              }
              else if ((uVar26 & 0xf800000) == 0) {
                fVar30 = (float)(uVar26 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar30 = (float)((uVar26 & 0xfffe000) + 0x38000000);
              }
              *puVar15 = (int)(short)uVar5 & 0x80000000U | (uint)fVar30;
              puVar15[1] = (uint)fVar29 | (int)(short)uVar4 & 0x80000000U;
              puVar15[2] = 0;
              puVar15[3] = 0x3f800000;
              puVar15 = puVar15 + 4;
              lVar14 = lVar14 + 1;
            } while (local_15c != (int)lVar14);
          }
          plVar25 = (longlong *)((longlong)plVar25 + 1);
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (plVar25 != local_150);
      }
      break;
    case 0x11:
      if (iVar10 != local_160) {
        uVar23 = 0;
        uVar24 = 0;
        do {
          if (local_15c != 0) {
            puVar17 = (undefined8 *)(local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4);
            lVar14 = 0;
            do {
              *puVar17 = *(undefined8 *)(uVar23 + local_e8 + lVar14 * 8);
              puVar17[1] = 0x3f80000000000000;
              puVar17 = puVar17 + 2;
              lVar14 = lVar14 + 1;
            } while (local_15c != (int)lVar14);
          }
          uVar24 = uVar24 + 1;
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (uVar24 != uVar26);
      }
      break;
    case 0x12:
      local_178 = local_158;
      FUN_14317682f(local_15c,uVar26,local_e8,iVar13);
      break;
    case 0x13:
      if (iVar10 != local_160) {
        uVar23 = 0;
        uVar24 = 0;
        do {
          if (local_15c != 0) {
            lVar28 = uVar23 + local_e8 + 6;
            pfVar18 = (float *)(local_158 + (ulonglong)(uint)(local_15c * (int)uVar24) * 4);
            lVar14 = 0;
            do {
              uVar4 = *(ushort *)(lVar28 + lVar14 * 8);
              uVar5 = *(ushort *)(lVar28 + -2 + lVar14 * 8);
              uVar6 = *(ushort *)(lVar28 + -4 + lVar14 * 8);
              *pfVar18 = (float)*(ushort *)(lVar28 + -6 + lVar14 * 8) / 65535.0;
              pfVar18[1] = (float)uVar6 / 65535.0;
              pfVar18[2] = (float)uVar5 / 65535.0;
              pfVar18[3] = (float)uVar4 / 65535.0;
              pfVar18 = pfVar18 + 4;
              lVar14 = lVar14 + 1;
            } while (local_15c != (int)lVar14);
          }
          uVar24 = uVar24 + 1;
          uVar23 = (ulonglong)(uint)((int)uVar23 + iVar13);
        } while (uVar24 != uVar26);
      }
      break;
    case 0x14:
switchD_14737e1d0_caseD_14:
      if (iVar10 != local_160) {
        uVar23 = 0;
        do {
          if (local_15c != 0) {
            pfVar18 = (float *)(local_158 + (ulonglong)(uint)(local_15c * (int)uVar23) * 4);
            lVar14 = 0;
            do {
              uVar19 = *(uint *)(local_e8 + lVar14 * 4);
              fVar30 = (float)(uVar19 & 0xffffff) * 5.9604645e-08;
              if (1.0 <= fVar30) {
                fVar30 = 1.0;
              }
              fVar30 = ABS((1.0 / (fVar30 * 0.1 + -0.1)) / fVar29);
              if (1.0 <= fVar30) {
                fVar30 = 1.0;
              }
              *pfVar18 = fVar30;
              pfVar18[1] = (float)(uVar19 >> 0x18) / 255.0;
              pfVar18[2] = 0.0;
              pfVar18[3] = 0.0;
              lVar14 = lVar14 + 1;
              pfVar18 = pfVar18 + 4;
            } while (local_15c != (int)lVar14);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar26);
      }
    }
LAB_14737e061:
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (bVar3 == 0x25) {
    if (iVar10 != local_160) {
      uVar19 = 0;
      uVar23 = 0;
      do {
        if (local_15c != 0) {
          lVar14 = (ulonglong)uVar19 + local_e8 + 3;
          puVar16 = local_158 + (ulonglong)(uint)(local_15c * (int)uVar23) * 4;
          lVar28 = 0;
          do {
            bVar3 = *(byte *)(lVar14 + lVar28 * 4);
            uVar1 = (&DAT_14c758c60)[*(byte *)(lVar14 + -2 + lVar28 * 4)];
            uVar2 = (&DAT_14c758c60)[*(byte *)(lVar14 + -1 + lVar28 * 4)];
            *puVar16 = (&DAT_14c758c60)[*(byte *)(lVar14 + -3 + lVar28 * 4)];
            puVar16[1] = uVar1;
            puVar16[2] = uVar2;
            puVar16[3] = (float)bVar3 * 0.003921569;
            puVar16 = puVar16 + 4;
            lVar28 = lVar28 + 1;
          } while (local_15c != (int)lVar28);
        }
        uVar23 = uVar23 + 1;
        uVar19 = uVar19 + iVar13;
      } while (uVar23 != uVar26);
    }
    goto LAB_14737e061;
  }
  if (bVar3 == 0x2c) goto switchD_14737e1d0_caseD_b;
  goto switchD_14737e1d0_caseD_3;
}



// FUNCTION 14737eb04 FUN_14737eb04 body=376 status=ok
// SIG undefined FUN_14737eb04(void)

void FUN_14737eb04(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  uint *param_5,undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x128 + (ulonglong)param_7 * 8);
  }
  lVar2 = plVar8[0x17];
  lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
  uVar1 = *(undefined4 *)
           ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar7 + 0x33) * 0x30));
  if (param_3 != (longlong *)0x0) {
    cVar4 = (**(code **)(*param_3 + 0x18))(param_3);
    if (cVar4 == '\0') {
      FUN_147370d10(param_3,&DAT_14ca85100,1 << ((byte)param_7 & 0x1f));
    }
  }
  local_60 = 0;
  local_58 = *(undefined8 *)(lVar2 + 0x68);
  plVar3 = *(longlong **)(lVar2 + 0x20);
  iVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,0,&local_60,&local_50);
  if (iVar5 < 0) {
    local_a0 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_a8 = *(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 8);
    FUN_145763094(iVar5,"Texture->GetResource()->Map(0, &ReadRange, &pData)",
                  ".\\Runtime/D3D12RHI/Private/D3D12RenderTarget.cpp",0x34a);
  }
  uVar6 = FUN_14316d38d(uVar1);
  FUN_14737da5e(plVar8,local_98,0);
  *param_4 = local_50;
  *param_5 = local_80 / uVar6;
  *param_6 = local_88;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8,(ulonglong)local_80 % (ulonglong)uVar6);
}



// FUNCTION 14737ecac FUN_14737ecac body=139 status=ok
// SIG undefined FUN_14737ecac(void)

void FUN_14737ecac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_2c;
  undefined1 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_2c;
  local_2c = 0x300000006;
  local_24 = 1;
  local_20 = 0x467a0000;
  local_1c = 0;
  local_18 = 0;
  local_40 = *param_3;
  local_38 = param_3[1];
  local_58 = param_5;
  FUN_14316fca2(param_1,param_2,&local_40);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737ed38 FUN_14737ed38 body=1235 status=ok
// SIG undefined FUN_14737ed38(void)

undefined8 *
FUN_14737ed38(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = (undefined4)*param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = (undefined4)param_4[1];
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  FUN_14737f20c();
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14a34cce8;
  lVar5 = *(longlong *)(param_3 + 0xf8 + (ulonglong)*(uint *)(param_2 + 8) * 8);
  param_1[0xe] = lVar5;
  local_d0 = param_2;
  local_c0 = param_3;
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)(lVar5 + 0x30) + 8))(lVar5 + 0x30);
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar5 = param_4[1];
  if ((longlong)(int)lVar5 == 0) {
    uVar6 = 1;
  }
  else {
    local_d8 = param_1 + 0x11;
    lVar12 = *param_4;
    uVar10 = (ulonglong)*(uint *)(local_d0 + 8);
    lVar13 = 0;
    local_c8 = param_4;
    do {
      cVar3 = *(char *)(lVar12 + 8 + lVar13);
      if (cVar3 == '\x02') {
        if (*(longlong *)(lVar12 + lVar13) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(*(longlong *)(lVar12 + lVar13) + 200 + uVar10 * 8);
        }
        iVar4 = *(int *)(param_1 + 0x12);
        *(uint *)(param_1 + 0x12) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0x94) < iVar4 + 1U) {
          FUN_14736f572(local_d8,iVar4);
        }
        lVar9 = lVar7 + 0x28;
        if (lVar7 == 0) {
          lVar9 = 0;
        }
        *(longlong *)(*local_d8 + (longlong)iVar4 * 8) = lVar9;
      }
      else {
        if (cVar3 == '\x01') {
          lVar7 = *(longlong *)(lVar12 + lVar13);
          if (lVar7 == 0) {
            uVar14 = 0;
          }
          else {
LAB_14737eead:
            uVar14 = *(undefined8 *)(lVar7 + 0x88 + uVar10 * 8);
          }
          iVar4 = *(int *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xa4) < iVar4 + 1U) {
            FUN_147383eb8(param_1 + 0x13,iVar4);
          }
          lVar7 = param_1[0x13];
        }
        else {
          if (cVar3 != '\0') goto LAB_14737eeda;
          lVar7 = (**(code **)(**(longlong **)(lVar12 + lVar13) + 0x10))();
          if (lVar7 != 0) goto LAB_14737eead;
          plVar8 = *(longlong **)(lVar12 + lVar13);
          if (plVar8 == (longlong *)0x0) {
LAB_14737ef39:
            lVar7 = 0;
          }
          else {
            lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
            if ((*(byte *)(lVar7 + 2) & 4) != 0) {
              plVar8 = (longlong *)**(longlong **)(plVar8[0x48] + 0xa0);
            }
            lVar7 = (**(code **)(*plVar8 + 0x30))(plVar8);
            if (lVar7 == 0) goto LAB_14737ef39;
            lVar7 = *(longlong *)(lVar7 + 0x128 + uVar10 * 8);
          }
          uVar14 = *(undefined8 *)(lVar7 + 0x168);
          iVar4 = *(int *)(param_1 + 0x12);
          *(uint *)(param_1 + 0x12) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x94) < iVar4 + 1U) {
            FUN_14736f572(local_d8,iVar4);
          }
          lVar7 = *local_d8;
        }
        *(undefined8 *)(lVar7 + (longlong)iVar4 * 8) = uVar14;
      }
LAB_14737eeda:
      lVar13 = lVar13 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar13);
    uVar6 = (int)local_c8[1] + 1;
  }
  lVar5 = local_c0;
  local_a0 = &DAT_100000027;
  uStack_98 = 0x1688;
  uStack_90 = *(ulonglong *)(local_c0 + 0xd8) >> 2;
  uStack_88 = (ulonglong)uVar6;
  uStack_80 = 1;
  if (param_5 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(param_5 + 0x78);
  }
  lVar12 = local_c0 + 0x30;
  plVar8 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a34c510;
  FUN_1447f3900(plVar8 + 2,local_d0,0,uVar14);
  plVar8[2] = (longlong)&PTR_LAB_14a34db50;
  plVar8[0x12] = 0;
  *(undefined4 *)(plVar8 + 0x13) = 0;
  *(undefined1 *)((longlong)plVar8 + 0x9c) = 0;
  plVar8[0x14] = 0;
  if (plVar8 == (longlong *)0x0) {
    param_1[0xf] = 0x10;
    plVar11 = (longlong *)param_1[0x10];
    if (plVar11 == (longlong *)0x0) goto LAB_14737f0e0;
    param_1[0x10] = 0;
LAB_14737f09f:
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_14737f0e0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0xf] = plVar8 + 2;
    plVar11 = (longlong *)param_1[0x10];
    if (plVar8 == plVar11) {
      LOCK();
      plVar11 = plVar8 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      param_1[0x10] = plVar8;
      if (plVar11 != (longlong *)0x0) goto LAB_14737f09f;
    }
  }
  LOCK();
  plVar11 = plVar8 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_14737f0e0:
  lVar13 = param_1[0xf];
  if (lVar5 == 0) {
    lVar12 = 0;
  }
  local_b0 = lVar12 + 0x48;
  if (lVar12 == 0) {
    local_a8 = 0;
    local_b0 = 0;
  }
  else {
    local_a8 = *(undefined8 *)(lVar12 + 0x58);
  }
  local_b8 = lVar12;
  FUN_1400db952(lVar13,&local_b8,&local_a0,0);
  *(undefined8 *)(lVar13 + 0x78) = uStack_80;
  *(undefined4 *)(lVar13 + 0x68) = (undefined4)uStack_90;
  *(undefined4 *)(lVar13 + 0x6c) = uStack_90._4_4_;
  *(undefined4 *)(lVar13 + 0x70) = (undefined4)uStack_88;
  *(undefined4 *)(lVar13 + 0x74) = uStack_88._4_4_;
  *(undefined4 *)(lVar13 + 0x58) = (undefined4)local_a0;
  *(undefined4 *)(lVar13 + 0x5c) = local_a0._4_4_;
  *(undefined4 *)(lVar13 + 0x60) = (undefined4)uStack_98;
  *(undefined4 *)(lVar13 + 100) = uStack_98._4_4_;
  FUN_1447f3744(&local_68,&local_a0);
  *(undefined8 *)(lVar13 + 0x2c) = local_68;
  FUN_1447f03f2(lVar13,&local_b8,0);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14737f20c FUN_14737f20c body=153 status=ok
// SIG undefined FUN_14737f20c(void)

undefined8 * FUN_14737f20c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x2b;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a34fc98;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1473828d4(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 << 4);
    iVar2 = *(int *)(param_1 + 3);
    if ((longlong)iVar2 != 0) {
      lVar3 = param_1[2];
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar4) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar3 + lVar4) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar4);
    }
  }
  return param_1;
}



// FUNCTION 14737f2a6 FUN_14737f2a6 body=130 status=ok
// SIG undefined FUN_14737f2a6(void)

void FUN_14737f2a6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400db952();
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 0x68) = param_3[4];
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  FUN_1447f3744(&local_30,param_3);
  *(undefined8 *)(param_1 + 0x2c) = local_30;
  FUN_1447f03f2(param_1,param_2,0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737f32a FUN_14737f32a body=137 status=ok
// SIG undefined FUN_14737f32a(void)

void FUN_14737f32a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a34cce8;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))(lVar4 + 0x30);
  }
  FUN_14737f3b4(param_1 + 5);
  FUN_14737f56a(param_1);
  return;
}



// FUNCTION 14737f3b4 FUN_14737f3b4 body=437 status=ok
// SIG undefined FUN_14737f3b4(void)

void FUN_14737f3b4(uint *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = *param_1;
  if (uVar6 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + (ulonglong)uVar3 * 2 + 2);
  puVar9 = (uint *)(lVar8 + 0x28);
  if (lVar8 == 0) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 == param_1) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x800000000;
    if (param_1 == (uint *)0x0) {
      uVar6 = 0;
    }
    bVar1 = (byte)uVar3 & 0x1f;
    uVar6 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar6;
    if (uVar6 != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      uVar7 = (ulonglong)uVar3;
      if (param_1 == (uint *)0x0) {
        lVar8 = 0;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30 + uVar7 * 8);
      if (lVar8 != 0) {
        do {
          uVar2 = local_38;
          lVar5 = (longlong)(int)local_38;
          uVar3 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,uVar3);
          if (local_38._4_4_ < uVar3) {
            FUN_147383d58(local_c0,uVar2 & 0xffffffff);
          }
          puVar4 = local_40;
          if (local_40 == (undefined1 *)0x0) {
            puVar4 = local_c0;
          }
          *(ulonglong *)(puVar4 + lVar5 * 0x10) = (ulonglong)uVar6 | uVar7 << 0x20;
          *(longlong *)(puVar4 + lVar5 * 0x10 + 8) = lVar8;
          bVar1 = (byte)uVar7 & 0x1f;
          uVar6 = uVar6 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
          if (uVar6 == 0) break;
          uVar3 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          uVar7 = (ulonglong)uVar3;
          lVar8 = *(longlong *)(lVar8 + 0x30 + uVar7 * 8);
        } while (lVar8 != 0);
        lVar8 = (longlong)(int)local_38;
        puVar4 = local_c0;
        if (local_40 != (undefined1 *)0x0) {
          puVar4 = local_40;
        }
        if (lVar8 != 0) {
          lVar5 = 0;
          do {
            LOCK();
            puVar9 = (uint *)(*(longlong *)(puVar4 + lVar5 + 8) + 8);
            uVar6 = *puVar9;
            *puVar9 = *puVar9 - 1;
            UNLOCK();
            if ((uVar6 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
            lVar5 = lVar5 + 0x10;
          } while (lVar8 * 0x10 != lVar5);
        }
      }
    }
    uVar7 = local_38 >> 0x20;
    local_38 = local_38 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      FUN_147383e5e(local_c0);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737f56a FUN_14737f56a body=122 status=ok
// SIG undefined FUN_14737f56a(void)

void FUN_14737f56a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14a34fc98;
  lVar4 = param_1[2];
  iVar3 = *(int *)(param_1 + 3);
  if ((longlong)iVar3 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar5) != 0) {
        LOCK();
        puVar1 = (uint *)(*(longlong *)(lVar4 + lVar5) + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar5);
    lVar4 = param_1[2];
  }
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 14737f5f3 FUN_14737f5f3 body=449 status=ok
// SIG undefined FUN_14737f5f3(void)

longlong FUN_14737f5f3(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined **local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  int local_94 [3];
  undefined8 local_88;
  undefined ***pppuStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = *param_2;
  pppuStack_80 = (undefined ***)param_2[1];
  local_b0 = &PTR_FUN_14a34fcd0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14738299e(&local_a8,&local_88);
  local_88 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"ResourceCollection";
  local_50 = 0;
  uStack_48 = 0;
  pppuStack_80 = &local_b0;
  local_94[0] = (int)uStack_a0 << 2;
  local_94[1] = 4;
  local_94[2] = 0x11;
  if ((uStack_a0 & 0x3fffffff) == 0) {
    FUN_14570b4be(param_1,&local_88,0x11,4);
  }
  local_c0 = &local_88;
  if (*(char *)(param_1 + 0x69) == '\0') {
    FUN_1446f970a(param_1,1);
    local_c8 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b8,param_1,local_94);
    *(undefined4 *)(local_b8 + 0x18) = 0x70;
    FUN_1446f970a(param_1,0);
    lVar3 = local_b8;
  }
  else {
    local_c8 = 0x70;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b8,param_1,local_94);
    *(undefined4 *)(local_b8 + 0x18) = 0x70;
    lVar3 = local_b8;
  }
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar3);
    }
  }
  local_b0 = &PTR_FUN_14a34fcd0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737f7b6 FUN_14737f7b6 body=130 status=ok
// SIG undefined FUN_14737f7b6(void)

void FUN_14737f7b6(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  int *piVar1;
  
  FUN_1456d02da(param_2);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 0xe) = 0xff00;
  memmove(param_2,param_3,0x78);
  *(undefined1 *)(param_2 + 0xe) = 6;
  *param_2 = param_1;
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)param_3 + 0x10) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(char *)((longlong)param_3 + 0x71) == '\x02') {
    FUN_147125530((longlong)param_3 + 0x20,param_2 + 4);
    return;
  }
  return;
}



// FUNCTION 14737f840 FUN_14737f840 body=169 status=ok
// SIG undefined FUN_14737f840(void)

void FUN_14737f840(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  plVar2 = (longlong *)*param_4;
  if (plVar2 != (longlong *)0x0) {
    *param_4 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_3,&DAT_14a34d8f0,param_4);
  if (iVar3 < 0) {
    local_40 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    FUN_145763094(iVar3,
                  "Device->GetDevice()->CreateCommandQueue(&Desc, IID_PPV_ARGS(OutCommandQueue.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12RHI.cpp",0x170);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737f9de FUN_14737f9de body=71 status=ok
// SIG undefined FUN_14737f9de(void)

undefined8 FUN_14737f9de(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar1 + 2) & 4) != 0) {
      param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  return *(undefined8 *)(lVar1 + 0x110);
}



// FUNCTION 14737fa26 FUN_14737fa26 body=79 status=ok
// SIG undefined FUN_14737fa26(void)

undefined8 FUN_14737fa26(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar1 + 2) & 4) != 0) {
      param_2 = (longlong *)**(undefined8 **)(param_2[0x48] + 0xa0);
    }
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0xb8) >> 8),
                  *(longlong *)(*(longlong *)(lVar1 + 0xb8) + 0x30) != 0);
}



// FUNCTION 14737fa76 FUN_14737fa76 body=156 status=ok
// SIG undefined FUN_14737fa76(void)

undefined8 *
FUN_14737fa76(undefined8 param_1,undefined8 *param_2,longlong *param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_3 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_3 + 8))(param_3);
    if ((*(byte *)(lVar1 + 2) & 4) != 0) {
      param_3 = (longlong *)**(undefined8 **)(param_3[0x48] + 0xa0);
    }
    lVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  if (*(char *)(lVar1 + 0x178) == '\x01') {
    param_4 = param_4 * *(int *)(lVar1 + 0x17c) + param_5;
  }
  if (param_4 < *(int *)(lVar1 + 0x198)) {
    lVar2 = lVar1 + 0x180;
    if (*(longlong *)(lVar1 + 400) != 0) {
      lVar2 = *(longlong *)(lVar1 + 400);
    }
    lVar1 = *(longlong *)(lVar2 + (longlong)param_4 * 0x10);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      goto LAB_14737fb00;
    }
  }
  uVar3 = 0;
LAB_14737fb00:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 14737fb12 FUN_14737fb12 body=47 status=ok
// SIG undefined FUN_14737fb12(void)

void FUN_14737fb12(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))(*(longlong **)(param_2 + 0x40),0);
  FUN_14736bfd6(uVar1,param_3,param_4);
  return;
}



// FUNCTION 14737fb42 FUN_14737fb42 body=47 status=ok
// SIG undefined FUN_14737fb42(void)

void FUN_14737fb42(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))(*(longlong **)(param_2 + 0x40),0);
  FUN_14736c086(uVar1,param_3,param_4);
  return;
}



// FUNCTION 14737fb72 FUN_14737fb72 body=225 status=ok
// SIG undefined FUN_14737fb72(void)

void FUN_14737fb72(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,longlong *param_7)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void **local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  local_50 = (int)param_7[1];
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_7;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0,param_6);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_60 = &local_58;
  local_68 = param_2;
  FUN_145763094(param_3,param_4,param_5,param_6);
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737fcbc FUN_14737fcbc body=788 status=ok
// SIG undefined FUN_14737fcbc(void)

void FUN_14737fcbc(longlong param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 *local_1e0;
  int *local_1d8;
  int *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1b4;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined1 local_190 [304];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_198 = (longlong *)0x0;
  iVar2 = FUN_14736b01c(**(undefined8 **)(param_1 + 0x1b0));
  if (iVar2 < 0) {
    bVar13 = false;
    iVar2 = 0;
    iVar6 = 0;
  }
  else {
    iVar2 = (**(code **)(*local_198 + 0x40))(local_198,local_190);
    if (iVar2 < 0) {
      local_1e0 = &local_1a8;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1e8 = 0;
      FUN_145763094(iVar2,"Adapter->GetDesc(&AdapterDesc)",
                    ".\\Runtime/D3D12RHI/Private/D3D12RHI.cpp",0x331);
    }
    iVar2 = 0;
    bVar1 = true;
    iVar6 = 0;
    bVar13 = false;
    local_1d8 = param_2;
    local_1d0 = param_3;
    do {
      if (!bVar1) {
        iVar4 = 2;
        break;
      }
      local_1b0 = (longlong *)0x0;
      iVar3 = (**(code **)(*local_198 + 0x38))(local_198,0,&local_1b0);
      iVar4 = 2;
      if (iVar3 != -0x7785fffe) {
        if (iVar3 < 0) {
          iVar4 = 1;
        }
        else {
          local_1b4 = 0;
          local_1e8 = 0;
          iVar3 = (**(code **)(*local_1b0 + 0x40))(local_1b0,0x1c,0,&local_1b4);
          iVar4 = 1;
          if (iVar3 != -0x7785fffe) {
            if (iVar3 == -0x7785ffde) {
              FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12RHI.cpp",0x350,
                            L"This application cannot be run over a remote desktop configuration");
            }
            else {
              lVar5 = FUN_14001cc68((ulonglong)local_1b4 * 0x1c +
                                    (ulonglong)((ulonglong)local_1b4 * 0x1c == 0),0x10);
              local_1e8 = lVar5;
              iVar4 = (**(code **)(*local_1b0 + 0x40))(local_1b0,0x1c,0,&local_1b4);
              if (iVar4 < 0) {
                local_1c8 = 0;
                uStack_1c0 = 0;
                local_1e0 = &local_1c8;
                local_1e8 = 0;
                FUN_145763094(iVar4,"Output->GetDisplayModeList(Format, 0, &NumModes, ModeList)",
                              ".\\Runtime/D3D12RHI/Private/D3D12RHI.cpp",0x354);
              }
              if ((ulonglong)local_1b4 != 0) {
                lVar8 = 0;
                do {
                  iVar4 = *(int *)(lVar5 + 4 + lVar8);
                  uVar10 = *(int *)(lVar5 + lVar8) - *param_2;
                  uVar7 = -uVar10;
                  if ((int)uVar7 < 0) {
                    uVar7 = uVar10;
                  }
                  uVar11 = iVar2 - *param_2;
                  uVar10 = -uVar11;
                  if ((int)uVar10 < 0) {
                    uVar10 = uVar11;
                  }
                  uVar9 = iVar4 - *param_3;
                  uVar11 = -uVar9;
                  if ((int)uVar11 < 0) {
                    uVar11 = uVar9;
                  }
                  uVar12 = iVar6 - *param_3;
                  uVar9 = -uVar12;
                  if ((int)uVar9 < 0) {
                    uVar9 = uVar12;
                  }
                  if (!bVar13 || uVar7 <= uVar10 && uVar11 <= uVar9) {
                    iVar2 = *(int *)(lVar5 + lVar8);
                    iVar6 = iVar4;
                  }
                  lVar8 = lVar8 + 0x1c;
                  bVar13 = true;
                } while ((ulonglong)local_1b4 * 0x1c != lVar8);
              }
              iVar4 = 0;
              param_3 = local_1d0;
              param_2 = local_1d8;
              if (lVar5 != 0) {
                FUN_1400020a8(lVar5);
                param_3 = local_1d0;
                param_2 = local_1d8;
              }
            }
          }
        }
      }
      if (local_1b0 != (longlong *)0x0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
      bVar1 = false;
    } while (iVar4 == 0);
    bVar13 = iVar4 == 2;
  }
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x10))();
  }
  if (bVar13) {
    *param_2 = iVar2;
    *param_3 = iVar6;
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737ffd2 FUN_14737ffd2 body=1626 status=ok
// SIG undefined FUN_14737ffd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737ffd2(longlong param_1,uint *param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  ushort *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  char cVar23;
  char cVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  longlong lVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  bVar11 = *(byte *)(param_1 + 0xbd);
  *(byte *)(param_1 + 0xbd) = bVar11 & 0xe0;
  *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xa8) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  bVar18 = (byte)(param_2[8] >> 4) & 0x40;
  *(byte *)(param_1 + 0xbd) = bVar11 & 0xa0 | bVar18;
  *(byte *)(param_1 + 0xbd) = bVar11 & 0x20 | bVar18 | (byte)(param_2[8] >> 4) & 0x80;
  auVar10 = _DAT_149931e80;
  if (*param_2 != 0) {
    uVar5 = param_2[8];
    auVar26 = pmovsxbq((undefined1  [16])0x0,0x100);
    auVar28 = pmovsxbq(in_XMM3,0x202);
    cVar23 = '\0';
    uVar16 = 0;
    do {
      piVar1 = (int *)(*(longlong *)(param_2 + 2) + uVar16 * 0x20);
      iVar6 = *(int *)(*(longlong *)(param_2 + 2) + uVar16 * 0x20);
      if (iVar6 - 2U < 3) {
        iVar20 = piVar1[3];
        *(char *)(param_1 + 0x98 + uVar16) = cVar23;
        cVar23 = *(char *)(param_1 + 0xb8) + '\x02';
LAB_1473800f7:
        *(char *)(param_1 + 0xb8) = cVar23;
      }
      else {
        if (iVar6 == 1) {
          iVar20 = piVar1[3];
          *(char *)(param_1 + 0x98 + uVar16) = cVar23;
          cVar23 = *(char *)(param_1 + 0xb8) + (char)piVar1[4];
          goto LAB_1473800f7;
        }
        iVar20 = -1;
        if (iVar6 == 0) {
          iVar20 = *(int *)(*(longlong *)(piVar1 + 4) + 0xc);
          *(char *)(param_1 + 0x98 + uVar16) = cVar23;
          cVar23 = *(char *)(param_1 + 0xb8) + ('\x01' - ((char)uVar5 >> 7));
          goto LAB_1473800f7;
        }
      }
      if (iVar20 != param_3) goto switchD_147380298_default;
      bVar11 = 0xc;
      lVar22 = 0x19;
      bVar9 = true;
      switch(piVar1[6]) {
      case 1:
        lVar22 = 8;
        bVar9 = false;
        bVar11 = 0;
      default:
        goto switchD_14738012f_caseD_2;
      case 4:
        bVar11 = 4;
        break;
      case 5:
        bVar11 = 3;
        break;
      case 6:
        bVar11 = 2;
        break;
      case 7:
        bVar11 = 1;
      }
      bVar9 = false;
switchD_14738012f_caseD_2:
      *(byte *)(param_1 + 0x30) =
           *(byte *)(param_1 + 0x30) | ((uint)piVar1[6] < 2 && (uVar5 & 2) == 0);
      cVar24 = *(char *)(param_1 + 0x50);
      if ((char)((uVar5 & 0x10) >> 4) == '\0' && cVar24 == '\0') {
        cVar24 = (piVar1[6] & 0xfffffffbU) == 0;
      }
      *(char *)(param_1 + 0x50) = cVar24;
      cVar24 = *(char *)(param_1 + 0x48);
      if ((char)((uVar5 & 0x20) >> 5) == '\0' && cVar24 == '\0') {
        cVar24 = piVar1[6] == 5 || piVar1[6] == 0;
      }
      *(char *)(param_1 + 0x48) = cVar24;
      cVar24 = *(char *)(param_1 + 0x38);
      if ((uVar5 >> 9 & 1) == 0 && cVar24 == '\0') {
        cVar24 = piVar1[6] == 7 || piVar1[6] == 0;
      }
      *(char *)(param_1 + 0x38) = cVar24;
      cVar24 = *(char *)(param_1 + 0x40);
      if ((uVar5 & 0x100) == 0 && cVar24 == '\0') {
        cVar24 = piVar1[6] == 6 || piVar1[6] == 0;
      }
      *(char *)(param_1 + 0x40) = cVar24;
      bVar25 = true;
      if (*(char *)(param_1 + 0x58) == '\0') {
        bVar25 = piVar1[6] == 0;
      }
      *(bool *)(param_1 + 0x58) = bVar25;
      uVar15 = (undefined1)uVar16;
      if (*piVar1 == 2) {
        if (bVar9) {
          lVar22 = 0;
          do {
            pcVar2 = (char *)(param_1 + 0x2a + lVar22 * 8);
            *pcVar2 = *pcVar2 + '\x01';
            lVar22 = lVar22 + 1;
          } while (lVar22 != 6);
        }
        else {
          pcVar2 = (char *)(param_1 + 0x2a + (ulonglong)bVar11 * 8);
          *pcVar2 = *pcVar2 + '\x01';
        }
        if (piVar1[2] == 0) {
          puVar14 = (undefined1 *)(param_1 + 0x16);
          switch(bVar11) {
          case 0:
            break;
          case 1:
            puVar14 = (undefined1 *)(param_1 + 0x1f);
            break;
          case 2:
            puVar14 = (undefined1 *)(param_1 + 0x23);
            break;
          case 3:
            puVar14 = (undefined1 *)(param_1 + 0x12);
            break;
          case 4:
            puVar14 = (undefined1 *)(param_1 + 0x1b);
            break;
          case 5:
          case 0xc:
            puVar14 = (undefined1 *)(param_1 + 0x27);
            break;
          default:
            goto switchD_147380339_caseD_6;
          }
          *puVar14 = uVar15;
          *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | 8;
        }
switchD_147380339_caseD_6:
        uVar12 = (uint)bVar11;
        uVar17 = uVar12;
        if (bVar9) {
          uVar17 = 0;
          uVar12 = 5;
        }
        if (uVar17 <= uVar12) {
          uVar19 = (ulonglong)uVar17;
          do {
            puVar3 = (ushort *)(param_1 + 0x2e + uVar19 * 8);
            *puVar3 = *puVar3 | (ushort)(1 << (*(byte *)(piVar1 + 2) & 0x1f));
            uVar19 = uVar19 + 1;
          } while (uVar12 + 1 != uVar19);
        }
      }
      else {
        if (*piVar1 != 0) goto switchD_147380298_default;
        puVar8 = *(undefined4 **)(piVar1 + 4);
        lVar27 = auVar28._0_8_;
        lVar29 = auVar28._8_8_;
        switch(*puVar8) {
        case 0:
          uVar4 = *(undefined1 *)(puVar8 + 1);
          if (bVar9) {
            lVar22 = 0;
            auVar30 = auVar26;
            do {
              if (SUB168(auVar30 ^ auVar10,0) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x2b + lVar22 * 8) = uVar4;
              }
              if (SUB168(auVar30 ^ auVar10,8) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x33 + lVar22 * 8) = uVar4;
              }
              lVar22 = lVar22 + 2;
              lVar13 = auVar30._8_8_;
              auVar30._0_8_ = auVar30._0_8_ + lVar27;
              auVar30._8_8_ = lVar13 + lVar29;
            } while (lVar22 != 6);
          }
          else {
            *(undefined1 *)(param_1 + 0x2b + (ulonglong)bVar11 * 8) = uVar4;
          }
          puVar14 = (undefined1 *)(param_1 + 0x10);
          switch(bVar11) {
          case 0:
            puVar14 = (undefined1 *)(param_1 + 0x14);
            break;
          case 1:
            puVar14 = (undefined1 *)(param_1 + 0x1d);
            break;
          case 2:
            puVar14 = (undefined1 *)(param_1 + 0x21);
            break;
          case 3:
            break;
          case 4:
            puVar14 = (undefined1 *)(param_1 + 0x19);
            break;
          case 5:
          case 0xc:
            puVar14 = (undefined1 *)(param_1 + 0x25);
            break;
          default:
            goto switchD_147380298_default;
          }
          *puVar14 = uVar15;
          bVar11 = 2;
          break;
        case 1:
          uVar4 = *(undefined1 *)(puVar8 + 1);
          if (bVar9) {
            lVar13 = 0;
            auVar32 = auVar26;
            do {
              if (SUB168(auVar32 ^ auVar10,0) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x2d + lVar13 * 8) = uVar4;
              }
              if (SUB168(auVar32 ^ auVar10,8) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x35 + lVar13 * 8) = uVar4;
              }
              lVar13 = lVar13 + 2;
              lVar33 = auVar32._8_8_;
              auVar32._0_8_ = auVar32._0_8_ + lVar27;
              auVar32._8_8_ = lVar33 + lVar29;
            } while (lVar13 != 6);
          }
          else {
            *(undefined1 *)(param_1 + 0x2d + (ulonglong)bVar11 * 8) = uVar4;
          }
          ((undefined1 *)(param_1 + 0x10))[lVar22] = uVar15;
          bVar11 = 1;
          break;
        case 2:
          cVar24 = *(char *)(puVar8 + 1);
          if (bVar9) {
            lVar22 = 0;
            do {
              pcVar2 = (char *)(param_1 + 0x2a + lVar22 * 8);
              *pcVar2 = *pcVar2 + cVar24;
              lVar22 = lVar22 + 1;
            } while (lVar22 != 6);
          }
          else {
            pcVar2 = (char *)(param_1 + 0x2a + (ulonglong)bVar11 * 8);
            *pcVar2 = *pcVar2 + cVar24;
          }
          puVar14 = (undefined1 *)(param_1 + 0x15);
          switch(bVar11) {
          case 0:
            break;
          case 1:
            puVar14 = (undefined1 *)(param_1 + 0x1e);
            break;
          case 2:
            puVar14 = (undefined1 *)(param_1 + 0x22);
            break;
          case 3:
            puVar14 = (undefined1 *)(param_1 + 0x11);
            break;
          case 4:
            puVar14 = (undefined1 *)(param_1 + 0x1a);
            break;
          case 5:
          case 0xc:
            puVar14 = (undefined1 *)(param_1 + 0x26);
            break;
          default:
            goto switchD_147380493_caseD_6;
          }
          *puVar14 = uVar15;
          *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | 4;
switchD_147380493_caseD_6:
          uVar12 = (uint)bVar11;
          uVar17 = uVar12;
          if (bVar9) {
            uVar17 = 0;
            uVar12 = 5;
          }
          if (uVar17 <= uVar12) {
            iVar6 = puVar8[1];
            uVar7 = puVar8[2];
            uVar19 = (ulonglong)uVar17;
            do {
              if (uVar7 < iVar6 + uVar7) {
                uVar21 = (uint)*(ushort *)(param_1 + 0x2e + uVar19 * 8);
                iVar20 = iVar6;
                uVar17 = uVar7;
                do {
                  uVar21 = uVar21 | 1 << (uVar17 & 0x1f);
                  uVar17 = uVar17 + 1;
                  iVar20 = iVar20 + -1;
                } while (iVar20 != 0);
                *(short *)(param_1 + 0x2e + uVar19 * 8) = (short)uVar21;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar12 + 1);
          }
          goto switchD_147380298_default;
        case 3:
          uVar4 = *(undefined1 *)(puVar8 + 1);
          if (bVar9) {
            lVar22 = 0;
            auVar31 = auVar26;
            do {
              if (SUB168(auVar31 ^ auVar10,0) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x2c + lVar22 * 8) = uVar4;
              }
              if (SUB168(auVar31 ^ auVar10,8) < -0x7ffffffffffffffa) {
                *(undefined1 *)(param_1 + 0x34 + lVar22 * 8) = uVar4;
              }
              lVar22 = lVar22 + 2;
              lVar13 = auVar31._8_8_;
              auVar31._0_8_ = auVar31._0_8_ + lVar27;
              auVar31._8_8_ = lVar13 + lVar29;
            } while (lVar22 != 6);
          }
          else {
            *(undefined1 *)(param_1 + 0x2c + (ulonglong)bVar11 * 8) = uVar4;
          }
          puVar14 = (undefined1 *)(param_1 + 0x17);
          switch((ulonglong)bVar11) {
          case 0:
            break;
          case 1:
            puVar14 = (undefined1 *)(param_1 + 0x20);
            break;
          case 2:
            puVar14 = (undefined1 *)(param_1 + 0x24);
            break;
          case 3:
            puVar14 = (undefined1 *)(param_1 + 0x13);
            break;
          case 4:
            puVar14 = (undefined1 *)(param_1 + 0x1c);
            break;
          case 5:
          case 0xc:
            puVar14 = (undefined1 *)(param_1 + 0x28);
            break;
          default:
            goto switchD_147380298_default;
          }
          *puVar14 = uVar15;
          bVar11 = 0x10;
          break;
        default:
          goto switchD_147380298_default;
        }
        *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) | bVar11;
      }
switchD_147380298_default:
      uVar16 = uVar16 + 1;
    } while (uVar16 < *param_2);
  }
  return;
}



// FUNCTION 14738062c FUN_14738062c body=124 status=ok
// SIG undefined FUN_14738062c(void)

undefined8 * FUN_14738062c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  puVar8 = (undefined8 *)FUN_1473806a8(param_1 + 0x30,param_3);
  *param_2 = *puVar8;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar8 + 1);
  FUN_147382a9e(param_2 + 2,puVar8 + 2);
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0xd4);
  uVar2 = *(undefined4 *)(puVar8 + 0x1b);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0xdc);
  uVar4 = *(undefined4 *)((longlong)puVar8 + 0xdd);
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0xe1);
  uVar6 = *(undefined4 *)((longlong)puVar8 + 0xe5);
  uVar7 = *(undefined4 *)((longlong)puVar8 + 0xe9);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(puVar8 + 0x1a);
  *(undefined4 *)((longlong)param_2 + 0xd4) = uVar1;
  *(undefined4 *)(param_2 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xdc) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xdd) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xe1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xe5) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xe9) = uVar7;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return param_2;
}



// FUNCTION 1473806a8 FUN_1473806a8 body=248 status=ok
// SIG undefined FUN_1473806a8(void)

longlong FUN_1473806a8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0xf0 + (longlong)iStack_44 * 0x100) == param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x100;
        goto LAB_14738077e;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_14738077e:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473807a2 FUN_1473807a2 body=223 status=ok
// SIG undefined FUN_1473807a2(void)

longlong * FUN_1473807a2(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *_Dst;
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  _Dst = (undefined8 *)FUN_14001cc68(0xd8);
  memset(_Dst,0,0xd8);
  *(undefined2 *)((longlong)_Dst + 0xc) = 0x308;
  memset(_Dst + 3,0,0x84);
  *(undefined1 *)((longlong)_Dst + 0x9c) = 2;
  *(undefined2 *)((longlong)_Dst + 0x9e) = 0;
  *(undefined4 *)(_Dst + 0x17) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined8 *)((longlong)_Dst + 0xad) = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *(undefined2 *)(_Dst + 0x1a) = 0;
  *_Dst = &PTR_FUN_14a34fd00;
  lVar1 = FUN_14738431c(_Dst,&local_38);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147380882 FUN_147380882 body=534 status=ok
// SIG undefined FUN_147380882(void)

void FUN_147380882(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong local_110;
  undefined **local_108 [5];
  byte local_e0;
  byte local_df;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar7 = *param_3;
  iVar3 = *(int *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_118 = param_2;
  local_110 = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0xf0);
  *(undefined4 *)(puVar6 + 1) = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = 0x28;
  *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) | 3;
  puVar8 = puVar6 + 2;
  *(undefined4 *)(puVar6 + 2) = 0;
  memset(puVar6 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar6 + 0x9c) = param_5;
  *(byte *)((longlong)puVar6 + 0x9d) = *(byte *)((longlong)puVar6 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar6 + 0x9e) = 0;
  *(undefined4 *)(puVar6 + 0x17) = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  *(undefined8 *)((longlong)puVar6 + 0xad) = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  *(undefined2 *)(puVar6 + 0x1a) = 0;
  *puVar6 = &PTR_FUN_14a34fd20;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1d] = 0;
  local_58 = uVar7;
  local_50 = iVar3;
  local_4c = uVar4;
  memset(local_108,0,0x90);
  FUN_144869430(local_108);
  local_78 = 0;
  local_108[0] = &PTR_FUN_149e1ddc0;
  local_60 = 0x7fffffffffffffff;
  local_e0 = local_e0 | 1;
  local_df = local_df | 1;
  local_70 = uVar7;
  local_68 = (longlong)iVar3;
  FUN_1402ee999(local_108,puVar8);
  FUN_14021219d(local_108,puVar6 + 0x1c);
  cVar5 = FUN_14738480c(&local_58,local_78 & 0xffffffff,puVar6);
  if (cVar5 == '\0') {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(puVar6 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(puVar6);
    }
    FUN_144a7fc42(local_108);
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    FUN_1402eea41(puVar8);
    FUN_144a7fc42(local_108);
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = FUN_147385bbe(**(undefined8 **)(local_110 + 0x1b0),puVar6);
      puVar6[0x1b] = uVar7;
      *local_118 = puVar6;
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
      goto LAB_147380a6b;
    }
  }
  *local_118 = 0;
LAB_147380a6b:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147380a9a FUN_147380a9a body=746 status=ok
// SIG undefined FUN_147380a9a(void)

longlong *
FUN_147380a9a(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,char param_5
             )

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_128 [32];
  undefined **local_108;
  ulonglong *local_100;
  byte local_e0;
  byte local_df;
  byte local_de;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = *param_3;
  iVar10 = *(int *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  lVar8 = FUN_14001cc68(0x128,0x10);
  FUN_147380d86(lVar8);
  local_58 = uVar5;
  local_50 = iVar10;
  local_4c = uVar4;
  memset(&local_108,0,0x90);
  FUN_144869430(&local_108);
  local_78 = 0;
  local_108 = &PTR_FUN_149e1ddc0;
  local_60 = 0x7fffffffffffffff;
  local_e0 = local_e0 | 1;
  local_df = local_df | 1;
  lVar9 = lVar8 + 0x10;
  local_70 = uVar5;
  local_68 = (longlong)iVar10;
  FUN_1402ee999(&local_108,lVar9);
  FUN_14021219d(&local_108,lVar8 + 0xf0);
  FUN_14021219d(&local_108,lVar8 + 0x100);
  FUN_14021219d(&local_108,lVar8 + 0x110);
  if ((undefined4 *)local_100[1] < (undefined4 *)*local_100 + 1) {
    if ((local_de & 2) == 0) {
      (*(code *)local_108[0x2e])(&local_108,(undefined4 *)(lVar8 + 0xa0),4);
    }
    else {
      thunk_FUN_14572512c(&local_108);
    }
  }
  else {
    *(undefined4 *)(lVar8 + 0xa0) = *(undefined4 *)*local_100;
    *local_100 = *local_100 + 4;
  }
  if ((undefined4 *)local_100[1] < (undefined4 *)*local_100 + 1) {
    if ((local_de & 2) == 0) {
      (*(code *)local_108[0x2e])(&local_108,(undefined4 *)(lVar8 + 0xa4),4);
    }
    else {
      thunk_FUN_14572512c(&local_108);
    }
  }
  else {
    *(undefined4 *)(lVar8 + 0xa4) = *(undefined4 *)*local_100;
    *local_100 = *local_100 + 4;
  }
  iVar10 = (int)local_78;
  local_44 = 0;
  piVar1 = (int *)*local_100 + 1;
  if ((int *)local_100[1] < piVar1) {
    if ((local_de & 2) == 0) {
      (*(code *)local_108[0x2e])(&local_108,&local_44,4);
      iVar7 = local_44;
    }
    else {
      thunk_FUN_14572512c(&local_108,&local_44);
      iVar7 = local_44;
    }
  }
  else {
    iVar7 = *(int *)*local_100;
    *local_100 = (ulonglong)piVar1;
  }
  if (iVar7 == 0x52545053) {
    iVar10 = iVar10 + 4;
    *(undefined1 *)(lVar8 + 0x120) = 1;
  }
  cVar6 = FUN_147384bdb(&local_58,iVar10,lVar8);
  if (cVar6 == '\0') {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar2 = (uint *)(lVar8 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar8);
    }
    lVar8 = 0;
  }
  else {
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    FUN_1402eea41(lVar9);
  }
  FUN_144a7fc42(&local_108);
  if (param_5 == '\x06' || lVar8 == 0) {
    *param_2 = lVar8;
    if (lVar8 == 0) goto LAB_147380d4c;
  }
  else {
    lVar9 = FUN_147385e04(**(undefined8 **)(param_1 + 0x1b0),lVar8);
    *(longlong *)(lVar8 + 0xe8) = lVar9;
    *(uint *)(lVar8 + 0xa8) = (uint)*(byte *)(lVar9 + 0xb8) << 2;
    *param_2 = lVar8;
  }
  LOCK();
  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  UNLOCK();
LAB_147380d4c:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147380d86 FUN_147380d86 body=164 status=ok
// SIG undefined FUN_147380d86(void)

undefined8 * FUN_147380d86(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0xb;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *(undefined4 *)(param_1 + 2) = 0;
  memset(param_1 + 3,0,0x84);
  *(undefined1 *)((longlong)param_1 + 0x9c) = param_2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x9e) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_14a34fd28;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  return param_1;
}



// FUNCTION 147380e2a FUN_147380e2a body=103 status=ok
// SIG undefined FUN_147380e2a(void)

undefined8 * FUN_147380e2a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar1 = *(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 2000);
  FUN_147382c94(puVar2,param_3);
  puVar2[5] = uVar1;
  *puVar2 = &PTR_FUN_14a34fd30;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147380e92 FUN_147380e92 body=98 status=ok
// SIG undefined FUN_147380e92(void)

void FUN_147380e92(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x218) == param_2) &&
     (iVar1 = memcmp((void *)(param_1 + 0x21c),param_3,(ulonglong)param_2 * 0x18), iVar1 == 0)) {
    return;
  }
  memcpy((void *)(param_1 + 0x21c),param_3,(ulonglong)param_2 * 0x18);
  *(uint *)(param_1 + 0x218) = param_2;
  *(undefined1 *)(param_1 + 0x1ea) = 1;
  return;
}



// FUNCTION 147380ef4 FUN_147380ef4 body=83 status=ok
// SIG undefined FUN_147380ef4(void)

void FUN_147380ef4(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x50) == param_2) &&
     (iVar1 = memcmp((void *)(param_1 + 0x54),param_3,(ulonglong)param_2 * 0x18), iVar1 == 0)) {
    return;
  }
  memcpy((void *)(param_1 + 0x54),param_3,(ulonglong)param_2 * 0x18);
  *(uint *)(param_1 + 0x50) = param_2;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



// FUNCTION 147380f54 FUN_147380f54 body=73 status=ok
// SIG undefined FUN_147380f54(void)

undefined8 * FUN_147380f54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1447f3900(param_1,param_2,0,param_3);
  *param_1 = &PTR_LAB_14a34db50;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 147380f9e FUN_147380f9e body=998 status=ok
// SIG undefined FUN_147380f9e(void)

void FUN_147380f9e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(byte *)(param_1 + 0x18) < 2) {
    local_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_48 = 0;
    FUN_144b1c3c6(param_1 + 0x18,&local_80,lVar1);
    uVar6 = 0;
    if (local_70._2_1_ == '\0') {
      uStack_60 = 0x1688;
      if ((char)local_70 == '\x03') {
        local_68 = 0;
        uStack_64 = 0xb;
        uVar3 = (local_80 & 0xffffffff) + *(longlong *)(lVar1 + 0xd0);
        iVar5 = 0xb;
        uVar4 = 0;
        local_58 = uVar3;
      }
      else {
        uVar4 = *(uint *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_70._1_1_ * 0x30));
        if ((int)uVar4 < 0x49) {
          if ((int)uVar4 < 0x2c) {
            if (uVar4 == 0x1b) {
              uVar4 = 0x1c;
            }
            else if (uVar4 == 0x13) {
              uVar4 = 0x15;
            }
            else if (uVar4 == 0x27) {
              uVar4 = 0x29;
            }
          }
          else if (uVar4 == 0x46) {
            uVar4 = 0x47;
          }
          else if (uVar4 == 0x35) {
            uVar4 = 0x38;
          }
          else if (uVar4 == 0x2c) {
            uVar4 = 0x2e;
          }
        }
        else if ((int)uVar4 < 0x61) {
          if (uVar4 == 0x5a) {
            uVar4 = 0x57;
          }
          else if (uVar4 == 0x4c) {
            uVar4 = 0x4d;
          }
          else if (uVar4 == 0x49) {
            uVar4 = 0x4a;
          }
        }
        else if (uVar4 == 0x61) {
          uVar4 = 0x62;
        }
        uStack_64 = 1;
        uVar2 = uStack_64;
        uStack_64 = 1;
        uVar6 = 0;
        uVar3 = ((local_80 & 0xffffffff) + *(longlong *)(lVar1 + 0xd8)) / (ulonglong)local_80._4_4_;
        uStack_50 = (undefined4)local_78;
        iVar5 = 1;
        local_58 = uVar3;
        local_68 = uVar4;
        if ((char)local_70 == '\x02') {
          uStack_4c = local_80._4_4_;
          uVar6 = (ulonglong)local_80._4_4_;
        }
        else {
          uStack_64 = uVar2;
          if ((char)local_70 == '\x04') {
            local_68 = 0x27;
            local_48 = CONCAT44(local_48._4_4_,1);
            uVar4 = 0x27;
          }
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
      iVar5 = 0;
    }
    local_80 = lVar1 + 0x30;
    if (lVar1 == 0) {
      local_80 = lVar1;
    }
    local_78 = local_80 + 0x48;
    if (local_80 == 0) {
      local_70 = 0;
      local_78 = 0;
    }
    else {
      local_70 = *(undefined8 *)(local_80 + 0x58);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
    if (iVar5 == 1) {
      if ((uVar4 != 0) && (uVar6 = 0, uVar4 < 0x74)) {
        uVar6 = (ulonglong)*(uint *)(&UNK_14a3507d8 + (longlong)(int)uVar4 * 4);
      }
      *(int *)(param_1 + 0xb0) = (int)uVar6;
      *(ulonglong *)(param_1 + 0xa8) = uVar3 * uVar6 - *(longlong *)(local_78 + 0x60);
    }
    else if (iVar5 == 0xb) {
      *(ulonglong *)(param_1 + 0xa8) = uVar3 - *(longlong *)(local_78 + 0x58);
      *(undefined4 *)(param_1 + 0xb0) = 1;
    }
    *(undefined8 *)(param_1 + 0xa0) = local_48;
    *(undefined4 *)(param_1 + 0x90) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x94) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x98) = uStack_50;
    *(uint *)(param_1 + 0x9c) = uStack_4c;
    *(uint *)(param_1 + 0x80) = local_68;
    *(undefined4 *)(param_1 + 0x84) = uStack_64;
    *(undefined4 *)(param_1 + 0x88) = uStack_60;
    *(undefined4 *)(param_1 + 0x8c) = uStack_5c;
    FUN_1447f3744(&local_40);
    *(undefined8 *)(param_1 + 0x54) = local_40;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_48 = 0;
    FUN_140100962(param_1 + 0x18,&local_80,lVar1);
    uVar2 = FUN_140100a1e(&local_68,lVar1,&local_80);
    local_80 = lVar1 + 0x60;
    if (lVar1 == 0) {
      local_80 = lVar1;
    }
    local_78 = local_80 + 0x48;
    if (local_80 == 0) {
      local_70 = 0;
      local_78 = 0;
    }
    else {
      local_70 = *(undefined8 *)(local_80 + 0x58);
    }
    FUN_1400db952(param_1 + 0x28,&local_80,&local_68,uVar2);
    *(undefined8 *)(param_1 + 0xa0) = local_48;
    *(undefined4 *)(param_1 + 0x90) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x94) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x98) = uStack_50;
    *(uint *)(param_1 + 0x9c) = uStack_4c;
    *(uint *)(param_1 + 0x80) = local_68;
    *(undefined4 *)(param_1 + 0x84) = uStack_64;
    *(undefined4 *)(param_1 + 0x88) = uStack_60;
    *(undefined4 *)(param_1 + 0x8c) = uStack_5c;
    FUN_1447f3744(&local_40,&local_68);
    *(undefined8 *)(param_1 + 0x54) = local_40;
  }
  FUN_14493819a(param_1 + 0x28,param_2,&local_80,0);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473813e0 FUN_1473813e0 body=210 status=ok
// SIG undefined FUN_1473813e0(void)

undefined8 FUN_1473813e0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined4 *)(param_1 + 0x20);
  lVar5 = 6;
  do {
    uVar1 = (char)(0x30204010000 >> ((char)puVar4[2] * '\b' & 0x3fU));
    if (5 < (uint)puVar4[2]) {
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + -6 + lVar5) = uVar1;
    uVar1 = FUN_140020ed3(*puVar4);
    *(undefined1 *)(param_2 + -5 + lVar5) = uVar1;
    uVar1 = FUN_140020ed3(puVar4[1]);
    *(undefined1 *)(param_2 + -4 + lVar5) = uVar1;
    uVar1 = (char)(0x30204010000 >> ((char)puVar4[5] * '\b' & 0x3fU));
    if (5 < (uint)puVar4[5]) {
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + -3 + lVar5) = uVar1;
    uVar1 = FUN_140020ed3(puVar4[3]);
    *(undefined1 *)(param_2 + -2 + lVar5) = uVar1;
    uVar2 = FUN_140020ed3(puVar4[4]);
    *(char *)(param_2 + -1 + lVar5) = (char)uVar2;
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(puVar4 + 7)) & 0xffffffffffffff0f
    ;
    *(char *)(param_2 + lVar5) = (char)uVar3;
    lVar5 = lVar5 + 7;
    puVar4 = puVar4 + 10;
  } while (lVar5 != 0x3e);
  *(bool *)(param_2 + 0x38) = *(int *)(param_1 + 0x14) != 0;
  *(bool *)(param_2 + 0x39) = *(int *)(param_1 + 0x10) != 0;
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1473814b2 FUN_1473814b2 body=605 status=ok
// SIG undefined FUN_1473814b2(void)

undefined8 FUN_1473814b2(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_4a8 [40];
  undefined1 local_480 [544];
  undefined8 local_260;
  undefined1 local_258 [544];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lVar6 = 0;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    if (param_2[lVar6 + 9] != param_3[lVar6 + 9]) goto LAB_147381592;
    lVar6 = 1;
    bVar2 = false;
  } while (bVar1);
  if (((((int)param_2[0xb] == (int)param_3[0xb]) &&
       (*(char *)((longlong)param_2 + 0xc5) == *(char *)((longlong)param_3 + 0xc5))) &&
      (*(char *)((longlong)param_2 + 0xc6) == *(char *)((longlong)param_3 + 0xc6))) &&
     (((*(char *)((longlong)param_2 + 0xc9) == *(char *)((longlong)param_3 + 0xc9) &&
       (*(char *)((longlong)param_2 + 199) == *(char *)((longlong)param_3 + 199))) &&
      (*(int *)((longlong)param_2 + 0x5c) == *(int *)((longlong)param_3 + 0x5c))))) {
    lVar6 = 0x60;
    do {
      if (*(char *)((longlong)param_2 + lVar6) != *(char *)((longlong)param_3 + lVar6))
      goto LAB_147381592;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x68);
    if ((((char)param_2[0x15] == (char)param_3[0x15]) &&
        ((short)param_2[0x18] == (short)param_3[0x18])) &&
       ((*(char *)((longlong)param_2 + 0xc4) == *(char *)((longlong)param_3 + 0xc4) &&
        ((((param_2[1] == param_3[1] && (param_2[2] == param_3[2])) && (param_2[3] == param_3[3]))
         && ((param_2[4] == param_3[4] && (param_2[5] == param_3[5])))))))) {
      local_38 = 0x1100000000;
      lVar6 = *param_2;
      if (lVar6 != 0) {
        if (local_258 != (undefined1 *)(lVar6 + 0x10)) {
          iVar4 = *(int *)(lVar6 + 0x230);
          local_38 = CONCAT44(0x11,iVar4);
          FUN_141106966(local_258,iVar4,0x11);
          if ((longlong)iVar4 != 0) {
            memcpy(local_258,(undefined1 *)(lVar6 + 0x10),(longlong)iVar4 << 5);
          }
        }
      }
      local_260 = 0x1100000000;
      lVar6 = *param_3;
      if (lVar6 != 0) {
        if (local_480 != (undefined1 *)(lVar6 + 0x10)) {
          iVar4 = *(int *)(lVar6 + 0x230);
          local_260 = CONCAT44(0x11,iVar4);
          FUN_141106966(local_480,iVar4,0x11);
          if ((longlong)iVar4 != 0) {
            memcpy(local_480,(undefined1 *)(lVar6 + 0x10),(longlong)iVar4 << 5);
          }
        }
      }
      if ((int)local_38 == (int)local_260) {
        if ((int)local_38 != 0) {
          iVar4 = memcmp(local_258,local_480,(longlong)(int)local_38 << 5);
          if (iVar4 != 0) goto LAB_147381592;
        }
        cVar3 = FUN_143170f43(param_2[6],param_3[6]);
        if (cVar3 != '\0') {
          cVar3 = FUN_143170ffb(param_2[7],param_3[7]);
          if (cVar3 != '\0') {
            uVar5 = FUN_1431710c2(param_2[8],param_3[8]);
            goto LAB_147381594;
          }
        }
      }
    }
  }
LAB_147381592:
  uVar5 = 0;
LAB_147381594:
  if ((local_30 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147381710 FUN_147381710 body=162 status=ok
// SIG undefined FUN_147381710(void)

void FUN_147381710(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a34e140;
  if (param_1[0xc] != 0) {
    lVar2 = *(longlong *)(param_1[2] + 0x898);
    lVar4 = param_1[2] + 0x6d8;
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    FUN_144a63af0(lVar4 + 0x70,param_1 + 0xc);
    if ((*(int *)(param_1 + 0xe) != -1) && (*(char *)((longlong)param_1 + 0x74) != -1)) {
      uVar1 = *(uint *)(param_1 + 3);
      uVar3 = 0x20;
      if ((uVar1 != 0) && (uVar3 = 0, uVar1 != 0)) {
        for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      puVar5 = (undefined8 *)(param_1[(ulonglong)uVar3 + 4] + 0x18);
      if (param_1[(ulonglong)uVar3 + 4] == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 == param_1 + 3) {
        FUN_14736baba(param_1[2] + 0x6b0,param_1[0xe]);
      }
    }
  }
  FUN_1473817b2(param_1 + 3);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473817b2 FUN_1473817b2 body=437 status=ok
// SIG undefined FUN_1473817b2(void)

void FUN_1473817b2(uint *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = *param_1;
  if (uVar6 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + (ulonglong)uVar3 * 2 + 2);
  puVar9 = (uint *)(lVar8 + 0x18);
  if (lVar8 == 0) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 == param_1) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x800000000;
    if (param_1 == (uint *)0x0) {
      uVar6 = 0;
    }
    bVar1 = (byte)uVar3 & 0x1f;
    uVar6 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar6;
    if (uVar6 != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      uVar7 = (ulonglong)uVar3;
      if (param_1 == (uint *)0x0) {
        lVar8 = 0;
      }
      lVar8 = *(longlong *)(lVar8 + 0x20 + uVar7 * 8);
      if (lVar8 != 0) {
        do {
          uVar2 = local_38;
          lVar5 = (longlong)(int)local_38;
          uVar3 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,uVar3);
          if (local_38._4_4_ < uVar3) {
            FUN_14738501c(local_c0,uVar2 & 0xffffffff);
          }
          puVar4 = local_40;
          if (local_40 == (undefined1 *)0x0) {
            puVar4 = local_c0;
          }
          *(ulonglong *)(puVar4 + lVar5 * 0x10) = (ulonglong)uVar6 | uVar7 << 0x20;
          *(longlong *)(puVar4 + lVar5 * 0x10 + 8) = lVar8;
          bVar1 = (byte)uVar7 & 0x1f;
          uVar6 = uVar6 & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
          if (uVar6 == 0) break;
          uVar3 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          uVar7 = (ulonglong)uVar3;
          lVar8 = *(longlong *)(lVar8 + 0x20 + uVar7 * 8);
        } while (lVar8 != 0);
        lVar8 = (longlong)(int)local_38;
        puVar4 = local_c0;
        if (local_40 != (undefined1 *)0x0) {
          puVar4 = local_40;
        }
        if (lVar8 != 0) {
          lVar5 = 0;
          do {
            LOCK();
            puVar9 = (uint *)(*(longlong *)(puVar4 + lVar5 + 8) + 8);
            uVar6 = *puVar9;
            *puVar9 = *puVar9 - 1;
            UNLOCK();
            if ((uVar6 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
            lVar5 = lVar5 + 0x10;
          } while (lVar8 * 0x10 != lVar5);
        }
      }
    }
    uVar7 = local_38 >> 0x20;
    local_38 = local_38 & 0xffffffff00000000;
    if ((int)uVar7 != 0) {
      FUN_147385122(local_c0);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147381968 FUN_147381968 body=92 status=ok
// SIG undefined FUN_147381968(void)

void FUN_147381968(longlong param_1,uint param_2,void *param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x700) == param_2) &&
     (iVar1 = memcmp((void *)(param_1 + 0x600),param_3,(ulonglong)param_2 << 4), iVar1 == 0)) {
    return;
  }
  memcpy((void *)(param_1 + 0x600),param_3,(ulonglong)param_2 << 4);
  *(uint *)(param_1 + 0x700) = param_2;
  *(undefined1 *)(param_1 + 0x23) = 1;
  return;
}



// FUNCTION 1473819c4 FUN_1473819c4 body=233 status=ok
// SIG undefined FUN_1473819c4(void)

void FUN_1473819c4(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 < param_4) {
    puVar1 = (undefined8 *)((ulonglong)param_3 * 0x10 + param_1 + 0x32e8);
    do {
      local_48 = puVar1[0xc];
      local_40 = *(undefined4 *)(puVar1 + 0xd);
      local_58 = *puVar1;
      local_50 = *(undefined4 *)(puVar1 + 1);
      FUN_147370518(param_1 + 0x33b0,param_3,&local_58,&local_48);
      *(undefined4 *)(puVar1 + 1) = 0;
      if (*(int *)((longlong)puVar1 + 0xc) < 0) {
        FUN_1473788de(puVar1,0);
      }
      *(undefined4 *)(puVar1 + 0xd) = 0;
      if (*(int *)((longlong)puVar1 + 0x6c) < 0) {
        FUN_14737893e(puVar1 + 0xc,0);
      }
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 2;
    } while (param_4 != param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147381aae FUN_147381aae body=37 status=ok
// SIG undefined FUN_147381aae(void)

void FUN_147381aae(longlong param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  
  if (*param_2 != *(undefined1 (*) [16])(param_1 + 0x40)) {
    uVar1 = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}



// FUNCTION 147381ad4 FUN_147381ad4 body=124 status=ok
// SIG undefined FUN_147381ad4(void)

longlong FUN_147381ad4(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 8))(plVar1);
  plVar1 = (longlong *)FUN_1448c2e86();
  FUN_140e8e738(&local_20);
  lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,local_20,0);
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 + -8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147381b52 FUN_147381b52 body=113 status=ok
// SIG undefined FUN_147381b52(void)

void FUN_147381b52(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x1e0);
  if (pcVar1 != (code *)0x0) {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
    plVar3 = (longlong *)(param_1 + 0x200);
    if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x1f0);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147381bc4 FUN_147381bc4 body=136 status=ok
// SIG undefined FUN_147381bc4(void)

void FUN_147381bc4(longlong param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14ca773d0 = 1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x30) = DVar1;
    do {
      FUN_1400bd744(param_1,local_20);
    } while( true );
  }
  SetEvent(*(HANDLE *)(*(longlong *)(param_1 + 0x28) + 0x20));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147381c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x28) + 0x20))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 147381c52 FUN_147381c52 body=451 status=ok
// SIG undefined FUN_147381c52(void)

void FUN_147381c52(longlong *param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_118 [44];
  undefined4 local_ec;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8f;
  undefined1 local_8b;
  undefined4 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_1;
  local_e0 = param_2;
  puVar8 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  uVar4 = *puVar8;
  uVar2 = *(undefined4 *)((longlong)puVar8 + 0x2c);
  local_ec = *(undefined4 *)((longlong)puVar8 + 0x31);
  uVar3 = *(undefined4 *)(puVar8 + 1);
  uVar6 = *(undefined8 *)((longlong)puVar8 + 0xc);
  uVar7 = *(undefined8 *)((longlong)puVar8 + 0x14);
  uVar1 = *(undefined1 *)((longlong)puVar8 + 0x35);
  uVar5 = *(undefined8 *)((longlong)puVar8 + 0x1c);
  local_88 = FUN_1431edf91(uVar4,0);
  local_90 = param_5;
  local_8f = local_ec;
  local_80 = L"AsyncReallocateTexture2D_RenderThread";
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_c0 = uVar4;
  local_b8 = uVar3;
  local_b4 = uVar6;
  uStack_ac = uVar7;
  local_a4 = uVar5;
  local_9c = CONCAT44(param_7,param_6);
  local_94 = uVar2;
  local_8b = uVar1;
  lVar9 = (**(code **)(*local_e8 + 0x630))(local_e8,&local_c0,param_3,0);
  local_c8 = param_8;
  local_d8 = param_4;
  uStack_d0 = lVar9;
  if (*(char *)((longlong)param_3 + 100) == '\x01') {
    FUN_14317969e(&local_d8,param_3);
  }
  else {
    puVar10 = (undefined8 *)(*param_3 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if ((undefined8 *)param_3[1] < puVar8) {
      FUN_140023dd8(param_3,0x30);
      puVar10 = (undefined8 *)(*param_3 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *param_3 = (ulonglong)puVar8;
    *(int *)(param_3 + 0xc) = (int)param_3[0xc] + 1;
    *(undefined8 **)param_3[6] = puVar10;
    param_3[6] = (ulonglong)(puVar10 + 1);
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_14a350208;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_d8._4_4_;
    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_d0._4_4_;
    puVar10[4] = local_c8;
  }
  *local_e0 = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147381e16 FUN_147381e16 body=48 status=ok
// SIG undefined FUN_147381e16(void)

undefined8 * FUN_147381e16(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x498,
                L"RHIAsyncReallocateTexture2D should not be called. AsyncReallocateTexture2D_RenderThread is where this is implemented."
               );
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147381e72 FUN_147381e72 body=489 status=ok
// SIG undefined FUN_147381e72(void)

void FUN_147381e72(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_1456d02da((void *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0x118) = 0xff00;
  memmove((void *)(param_1 + 0xa8),(void *)(param_2 + 0xa8),0x78);
  *(undefined1 *)(param_1 + 0x118) = 5;
  *(undefined1 *)(param_2 + 0x118) = 5;
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_2 + 0xb8) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  uVar3 = *(undefined8 *)(param_2 + 0x168);
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(longlong *)(param_1 + 0x170) = lVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  lVar8 = 0;
  do {
    uVar3 = *(undefined8 *)(param_2 + 0x1a0 + lVar8);
    lVar7 = *(longlong *)(param_2 + 0x1a8 + lVar8);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x1a8 + lVar8);
    *(undefined8 *)(param_1 + 0x1a0 + lVar8) = uVar3;
    *(longlong *)(param_1 + 0x1a8 + lVar8) = lVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x40);
  FUN_1400db170(param_1 + 0x180,*(undefined4 *)(param_2 + 0x198),1);
  if (0 < *(int *)(param_2 + 0x198)) {
    lVar8 = 8;
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + 400);
      if (*(longlong *)(param_2 + 400) == 0) {
        lVar6 = param_2 + 0x180;
      }
      lVar5 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar5 = param_1 + 0x180;
      }
      uVar3 = *(undefined8 *)(lVar6 + -8 + lVar8);
      lVar6 = *(longlong *)(lVar6 + lVar8);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(lVar5 + lVar8);
      *(undefined8 *)(lVar5 + -8 + lVar8) = uVar3;
      *(longlong *)(lVar5 + lVar8) = lVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(param_2 + 0x198));
  }
  return;
}



// FUNCTION 14738205c FUN_14738205c body=35 status=ok
// SIG undefined FUN_14738205c(void)

undefined8 FUN_14738205c(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x7cc,
                L"RHILockTexture2D is unimplemented and should never be called. Use LockTexture2D_RenderThread."
               );
  return 0;
}



// FUNCTION 147382080 FUN_147382080 body=34 status=ok
// SIG undefined FUN_147382080(void)

void FUN_147382080(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x7d2,
                L"RHIUnlockTexture2D is unimplemented and should never be called. Use UnlockTexture2D_RenderThread."
               );
  return;
}



// FUNCTION 1473820a2 FUN_1473820a2 body=35 status=ok
// SIG undefined FUN_1473820a2(void)

undefined8 FUN_1473820a2(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x7d7,
                L"RHILockTexture2DArray is unimplemented and should never be called. Use LockTexture2DArray_RenderThread."
               );
  return 0;
}



// FUNCTION 1473820c6 FUN_1473820c6 body=34 status=ok
// SIG undefined FUN_1473820c6(void)

void FUN_1473820c6(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x7dd,
                L"RHIUnlockTexture2DArray is unimplemented and should never be called. Use UnlockTexture2DArray_RenderThread."
               );
  return;
}



// FUNCTION 1473820e8 FUN_1473820e8 body=35 status=ok
// SIG undefined FUN_1473820e8(void)

undefined8 FUN_1473820e8(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x7e2,
                L"RHIUnlockTexture2DArray is unimplemented and should never be called. Use UnlockTexture2DArray_RenderThread."
               );
  return 0;
}



// FUNCTION 14738210c FUN_14738210c body=34 status=ok
// SIG undefined FUN_14738210c(void)

void FUN_14738210c(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x7e8,
                L"RHIUnlockTextureCubeFace is unimplemented and should never be called. Use RHIUnlockTextureCubeFace_RenderThread."
               );
  return;
}



// FUNCTION 14738212e FUN_14738212e body=40 status=ok
// SIG undefined FUN_14738212e(void)

undefined8
FUN_14738212e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  FUN_1412da924(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 14738215c FUN_14738215c body=264 status=ok
// SIG undefined FUN_14738215c(void)

void FUN_14738215c(longlong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(*param_3 + 0x50) == '\x01') {
    if (0 < (int)param_3[1]) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        (**(code **)(*param_1 + 0x610))(param_1,param_2,*param_3 + lVar3,*param_3 + lVar3 + 0x48);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x88;
      } while (lVar4 < (int)param_3[1]);
    }
  }
  else {
    if (*(char *)((longlong)param_2 + 100) != '\x01') {
      uVar2 = *param_2 + 7 & 0xfffffffffffffff8;
      uVar1 = uVar2 + 0x30;
      if (param_2[1] < uVar1) {
        FUN_140023dd8(param_2,0x38);
        uVar2 = *param_2 + 7 & 0xfffffffffffffff8;
        uVar1 = uVar2 + 0x30;
      }
      *param_2 = uVar1;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(ulonglong *)param_2[6] = uVar2;
      param_2[6] = uVar2 + 8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    FUN_14738227c(local_60,param_3);
    FUN_143175d60(local_60,param_2);
    FUN_147382404(local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738227c FUN_14738227c body=391 status=ok
// SIG undefined FUN_14738227c(void)

undefined8 * FUN_14738227c(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14a34fef8;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*param_2 + 8);
  lVar7 = *(longlong *)*param_2;
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    iVar4 = 0;
    iVar9 = 0;
    if (uVar6 != 0) {
      FUN_147383278(param_1 + 4);
      iVar9 = *(int *)(param_1 + 5);
      iVar4 = *(int *)((longlong)param_1 + 0x2c);
    }
    *(uint *)(param_1 + 5) = uVar1 + iVar9;
    if ((uint)(iVar4 - iVar9) < uVar1) {
      FUN_1473832e4(param_1 + 4);
    }
    memset((void *)((longlong)iVar9 * 0x38 + param_1[4]),0,uVar6 * 0x38);
    if (0 < *(int *)(param_1 + 5)) {
      lVar7 = 0xc;
      lVar8 = 0x30;
      lVar10 = 0;
      do {
        lVar2 = param_1[4];
        lVar3 = *param_2;
        *(undefined4 *)(lVar2 + -0x30 + lVar8) = *(undefined4 *)(lVar3 + lVar7);
        *(undefined4 *)(lVar2 + -0x2c + lVar8) = *(undefined4 *)(lVar3 + 4 + lVar7);
        *(undefined4 *)(lVar2 + -0x28 + lVar8) = *(undefined4 *)(lVar3 + 8 + lVar7);
        *(undefined4 *)(lVar2 + -4 + lVar8) = *(undefined4 *)(lVar3 + 0x20 + lVar7);
        *(undefined4 *)(lVar2 + -8 + lVar8) = *(undefined4 *)(lVar3 + 0x1c + lVar7);
        *(undefined4 *)(lVar2 + -0xc + lVar8) = *(undefined4 *)(lVar3 + 0x18 + lVar7);
        lVar5 = (**(code **)(*(longlong *)param_1[3] + 8))();
        *(undefined4 *)(lVar2 + -0x10 + lVar8) =
             *(undefined4 *)
              ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(lVar5 + 0x33) * 0x30));
        *(undefined4 *)(lVar2 + lVar8) = *(undefined4 *)(lVar3 + 0x24 + lVar7);
        lVar3 = *(longlong *)(lVar3 + 0x3c + lVar7);
        *(longlong *)(lVar2 + -0x20 + lVar8) = lVar3;
        *(undefined8 *)(lVar2 + -0x18 + lVar8) = *(undefined8 *)(lVar3 + 0x60);
        lVar10 = lVar10 + 1;
        lVar7 = lVar7 + 0x88;
        lVar8 = lVar8 + 0x38;
      } while (lVar10 < *(int *)(param_1 + 5));
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6);
}



// FUNCTION 147382404 FUN_147382404 body=186 status=ok
// SIG undefined FUN_147382404(void)

void FUN_147382404(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14a34fef8;
  plVar1 = param_1 + 4;
  iVar5 = *(int *)(param_1 + 5);
  if (0 < iVar5) {
    lVar6 = 0x10;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(*plVar1 + lVar6);
      if (lVar4 != 0) {
        FUN_1456d02da(lVar4);
        FUN_1400020a8(lVar4);
        iVar5 = *(int *)(param_1 + 5);
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar7 < iVar5);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_147383278(plVar1,0);
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[3] + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1473824be FUN_1473824be body=112 status=ok
// SIG undefined FUN_1473824be(void)

void FUN_1473824be(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1402ca022(*(undefined8 *)(param_1 + 0xd0),L"TextureFromResource");
  if (cVar1 == '\0') {
    FUN_1446f470e(&local_20,L"TextureFromResource",1);
    *(undefined8 *)(param_1 + 0xd0) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147382530 FUN_147382530 body=58 status=ok
// SIG undefined FUN_147382530(void)

longlong *
FUN_147382530(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1431760d6(param_1,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14738256a FUN_14738256a body=58 status=ok
// SIG undefined FUN_14738256a(void)

longlong *
FUN_14738256a(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1431760d6(param_1,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473825a4 FUN_1473825a4 body=58 status=ok
// SIG undefined FUN_1473825a4(void)

longlong *
FUN_1473825a4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1431760d6(param_1,param_3,param_4,param_5,param_6);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473825de FUN_1473825de body=362 status=ok
// SIG undefined FUN_1473825de(void)

void FUN_1473825de(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 8))(param_2);
    if ((*(byte *)(lVar4 + 2) & 4) != 0) {
      param_2 = (longlong *)**(longlong **)(param_2[0x48] + 0xa0);
    }
    lVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  plVar8 = (longlong *)*param_3;
  if (plVar8 == (longlong *)0x0) {
    lVar5 = *(longlong *)(lVar4 + 0x238);
    if (lVar5 == 0) {
      lVar6 = 0;
      goto LAB_1473826b3;
    }
    *(undefined8 *)(lVar4 + 0x238) = 0;
    lVar6 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar8 + 8))(plVar8);
    if ((*(byte *)(lVar5 + 2) & 4) != 0) {
      plVar8 = (longlong *)**(longlong **)(plVar8[0x48] + 0xa0);
    }
    lVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    lVar1 = *param_3;
    lVar5 = *(longlong *)(lVar4 + 0x238);
    if (lVar5 == lVar1) goto LAB_1473826b3;
    *(longlong *)(lVar4 + 0x238) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 == 0) goto LAB_1473826b3;
  }
  LOCK();
  puVar7 = (uint *)(lVar5 + 8);
  uVar9 = *puVar7;
  *puVar7 = *puVar7 - 1;
  UNLOCK();
  if ((uVar9 & 0x3fffffff) == 1) {
    FUN_144a54812();
  }
LAB_1473826b3:
  puVar7 = (uint *)(lVar4 + 0x120);
  if (lVar4 == 0) {
    puVar7 = (uint *)0x0;
  }
  uVar9 = *puVar7;
  if (uVar9 != 0) {
    lVar4 = lVar6 + 0x120;
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    iVar2 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    lVar4 = *(longlong *)(lVar4 + 8 + (ulonglong)(uint)(iVar2 * 8));
    lVar5 = *(longlong *)((longlong)puVar7 + (ulonglong)(uint)(iVar2 * 8) + 8);
    FUN_147381e72(lVar5,lVar4);
    bVar3 = (byte)iVar2 & 0x1f;
    for (uVar9 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar9; uVar9 != 0;
        uVar9 = uVar9 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3)) {
      iVar2 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x128 + (ulonglong)(uint)(iVar2 * 8));
      lVar5 = *(longlong *)(lVar5 + 0x128 + (ulonglong)(uint)(iVar2 * 8));
      FUN_147381e72(lVar5,lVar4);
      bVar3 = (byte)iVar2 & 0x1f;
    }
  }
  return;
}



// FUNCTION 147382748 FUN_147382748 body=40 status=ok
// SIG undefined FUN_147382748(void)

undefined8 FUN_147382748(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x240) + 0xa0) + 0x18))();
  return param_2;
}



// FUNCTION 147382770 FUN_147382770 body=38 status=ok
// SIG undefined FUN_147382770(void)

undefined8 FUN_147382770(undefined8 param_1,int param_2)

{
  FUN_14737f32a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473827d0 FUN_1473827d0 body=38 status=ok
// SIG undefined FUN_1473827d0(void)

undefined8 FUN_1473827d0(undefined8 param_1,int param_2)

{
  FUN_1448470d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738280c FUN_14738280c body=38 status=ok
// SIG undefined FUN_14738280c(void)

undefined8 FUN_14738280c(undefined8 param_1,int param_2)

{
  FUN_147381710();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738283e FUN_14738283e body=38 status=ok
// SIG undefined FUN_14738283e(void)

undefined8 FUN_14738283e(undefined8 param_1,int param_2)

{
  FUN_1431774ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382864 FUN_147382864 body=45 status=ok
// SIG undefined FUN_147382864(void)

longlong FUN_147382864(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x60;
  FUN_144834c52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738289c FUN_14738289c body=38 status=ok
// SIG undefined FUN_14738289c(void)

undefined8 FUN_14738289c(undefined8 param_1,int param_2)

{
  FUN_14737f56a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473828d4 FUN_1473828d4 body=98 status=ok
// SIG undefined FUN_1473828d4(void)

void FUN_1473828d4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14738293e FUN_14738293e body=57 status=ok
// SIG undefined FUN_14738293e(void)

undefined8 * FUN_14738293e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a34fcd0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14738299e FUN_14738299e body=170 status=ok
// SIG undefined FUN_14738299e(void)

void FUN_14738299e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  int local_40;
  char local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14017c08a(param_1,(int)param_2[1] + 1,1);
  iVar1 = (int)param_2[1];
  *(int *)*param_1 = iVar1;
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = (longlong)iVar1 << 4;
    lVar4 = 1;
    do {
      FUN_147382a49(&local_40,lVar2);
      iVar1 = 0;
      if (local_3c != -1) {
        iVar1 = local_40;
      }
      if (local_40 == -1) {
        iVar1 = 0;
      }
      *(int *)(*param_1 + lVar4 * 4) = iVar1;
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147382a49 FUN_147382a49 body=85 status=ok
// SIG undefined FUN_147382a49(void)

undefined8 * FUN_147382a49(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (char)param_2[1];
  if (cVar1 == '\x02') {
    (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,param_1);
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = *(undefined8 *)(*param_2 + 0x68);
    }
    else {
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,param_1);
        return param_1;
      }
      uVar2 = 0xffffffffff;
    }
    *param_1 = uVar2;
  }
  return param_1;
}



// FUNCTION 147382a9e FUN_147382a9e body=134 status=ok
// SIG undefined FUN_147382a9e(void)

longlong FUN_147382a9e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 8 + lVar2);
    _Src = *(void **)(param_2 + lVar2);
    *(int *)(param_1 + 8 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc + lVar2) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + lVar2),iVar1,0);
      memcpy(*(void **)(param_1 + lVar2),_Src,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xc0);
  return param_1;
}



// FUNCTION 147382b24 FUN_147382b24 body=38 status=ok
// SIG undefined FUN_147382b24(void)

undefined8 FUN_147382b24(undefined8 param_1,int param_2)

{
  FUN_147382b4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382b4a FUN_147382b4a body=55 status=ok
// SIG undefined FUN_147382b4a(void)

void FUN_147382b4a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  return;
}



// FUNCTION 147382b82 FUN_147382b82 body=38 status=ok
// SIG undefined FUN_147382b82(void)

undefined8 FUN_147382b82(undefined8 param_1,int param_2)

{
  FUN_147382ba8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382ba8 FUN_147382ba8 body=82 status=ok
// SIG undefined FUN_147382ba8(void)

void FUN_147382ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a34fd20;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  return;
}



// FUNCTION 147382bfa FUN_147382bfa body=38 status=ok
// SIG undefined FUN_147382bfa(void)

undefined8 FUN_147382bfa(undefined8 param_1,int param_2)

{
  FUN_147382c20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382c20 FUN_147382c20 body=116 status=ok
// SIG undefined FUN_147382c20(void)

void FUN_147382c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a34fd28;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  return;
}



// FUNCTION 147382c94 FUN_147382c94 body=178 status=ok
// SIG undefined FUN_147382c94(void)

undefined8 * FUN_147382c94(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x27;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a34fd38;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 3) = param_2[2];
  cVar1 = *(char *)(param_2 + 3);
  *(char *)((longlong)param_1 + 0x1c) = cVar1;
  param_1[4] = 0;
  if (cVar1 == '\x02') {
    pwVar2 = L"VSPS";
  }
  else if (cVar1 == '\x01') {
    pwVar2 = L"MSPS";
  }
  else {
    if (cVar1 != '\0') goto LAB_147382d26;
    pwVar2 = L"CS";
  }
  FUN_1446f470e(&local_20,pwVar2,1);
  param_1[4] = local_20;
LAB_147382d26:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147382d48 FUN_147382d48 body=39 status=ok
// SIG undefined FUN_147382d48(void)

undefined8 * FUN_147382d48(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382d70 FUN_147382d70 body=39 status=ok
// SIG undefined FUN_147382d70(void)

undefined8 * FUN_147382d70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382d98 FUN_147382d98 body=38 status=ok
// SIG undefined FUN_147382d98(void)

undefined8 FUN_147382d98(undefined8 param_1,int param_2)

{
  FUN_145c78c50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147382dbe FUN_147382dbe body=125 status=ok
// SIG undefined FUN_147382dbe(void)

void FUN_147382dbe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_147382e3c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147382e3c FUN_147382e3c body=144 status=ok
// SIG undefined FUN_147382e3c(void)

void FUN_147382e3c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 147382ecc FUN_147382ecc body=125 status=ok
// SIG undefined FUN_147382ecc(void)

void FUN_147382ecc(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_147382f4a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147382f4a FUN_147382f4a body=144 status=ok
// SIG undefined FUN_147382f4a(void)

void FUN_147382f4a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 147382fda FUN_147382fda body=125 status=ok
// SIG undefined FUN_147382fda(void)

void FUN_147382fda(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_147383058(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147383058 FUN_147383058 body=144 status=ok
// SIG undefined FUN_147383058(void)

void FUN_147383058(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 1473830e8 FUN_1473830e8 body=360 status=ok
// SIG undefined FUN_1473830e8(void)

void FUN_1473830e8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar3 = *local_78;
      lVar4 = (longlong)iStack_5c;
      if (*(longlong *)(lVar3 + 8 + lVar4 * 0x20) != 0) {
        FUN_1400020a8();
      }
      lVar3 = *(longlong *)(lVar3 + lVar4 * 0x20);
      if (lVar3 != 0) {
        LOCK();
        piVar2 = (int *)(lVar3 + 0x478);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          FUN_1402cd3ea(*(undefined8 *)(lVar3 + 0x10));
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147383252 FUN_147383252 body=38 status=ok
// SIG undefined FUN_147383252(void)

undefined8 FUN_147383252(undefined8 param_1,int param_2)

{
  FUN_147382404();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147383278 FUN_147383278 body=108 status=ok
// SIG undefined FUN_147383278(void)

void FUN_147383278(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1473832e4 FUN_1473832e4 body=143 status=ok
// SIG undefined FUN_1473832e4(void)

void FUN_1473832e4(longlong param_1,int param_2)

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



// FUNCTION 147383374 FUN_147383374 body=119 status=ok
// SIG undefined FUN_147383374(void)

void FUN_147383374(longlong param_1,int param_2)

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
    FUN_1473833ec(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473833ec FUN_1473833ec body=140 status=ok
// SIG undefined FUN_1473833ec(void)

void FUN_1473833ec(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147383478 FUN_147383478 body=106 status=ok
// SIG undefined FUN_147383478(void)

void FUN_147383478(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar2);
  FUN_140127af8(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar1 - param_3;
  return;
}



// FUNCTION 1473834e2 FUN_1473834e2 body=59 status=ok
// SIG undefined FUN_1473834e2(void)

void FUN_1473834e2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14738351e(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_1400db31a(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,0x10);
  return;
}



// FUNCTION 14738351e FUN_14738351e body=105 status=ok
// SIG undefined FUN_14738351e(void)

ulonglong FUN_14738351e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147383587 FUN_147383587 body=307 status=ok
// SIG undefined FUN_147383587(void)

void FUN_147383587(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

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
  FUN_147432062(*param_2,lVar11,param_4,param_5,*param_6,*param_7);
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
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 1473836ba FUN_1473836ba body=251 status=ok
// SIG undefined FUN_1473836ba(void)

void FUN_1473836ba(ulonglong *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_147431f32(*param_2,lVar11);
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
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 1473837d8 FUN_1473837d8 body=1116 status=ok
// SIG undefined FUN_1473837d8(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473837d8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,int *param_6)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_638 [32];
  ulonglong local_618;
  undefined4 local_610;
  undefined8 local_608;
  longlong local_5f8;
  undefined8 *local_5f0;
  undefined8 local_5e8;
  int *local_5e0;
  undefined1 *local_5d8;
  longlong *local_5d0;
  longlong local_5c8;
  longlong local_5c0 [99];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_24c;
  undefined8 uStack_244;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined8 local_21c;
  undefined5 uStack_214;
  undefined3 uStack_20f;
  undefined5 uStack_20c;
  undefined8 uStack_207;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [384];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_638;
  uVar2 = *(uint *)(param_1 + 0x7c);
  uVar8 = 0x10;
  if ((int)uVar2 < 0x10) {
    uVar8 = uVar2;
  }
  local_5c8 = param_2;
  local_5c0[0] = param_3;
  if (0 < (int)uVar2) {
    memcpy(local_1c8,(void *)((longlong)param_1 + 0x3e4),(ulonglong)(uVar8 * 0x18));
    if (0x10 < uVar2) {
      memset(local_1c8 + (ulonglong)uVar8 * 0x18,0,(ulonglong)(uVar2 - uVar8) * 0x18);
    }
  }
  local_268 = 0;
  uStack_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  bVar9 = false;
  local_258 = 0;
  local_24c = 0;
  uStack_244 = 0;
  local_23c = 0;
  uStack_234 = 0;
  local_22c = 0;
  uStack_224 = 0;
  local_21c = 0;
  uStack_214 = 0;
  uStack_20f = 0;
  uStack_20c = 0;
  uStack_207 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 1;
  local_1d8 = 0;
  local_278 = DAT_14c9c0d50;
  uStack_270 = DAT_14c9c0db0;
  FUN_14736c26c(param_1,0,0x18);
  if (param_6[1] == 0 && *param_6 == 0) {
    if (*(longlong *)(param_4 + 0x10) == (longlong)param_6[2]) {
      bVar9 = param_6[3] == *(int *)(param_4 + 0x18);
    }
    else {
      bVar9 = false;
    }
  }
  if ((*(byte *)(param_4 + 0x30) & 2) == 0) {
    if (bVar9) {
      if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
          (*(char *)(param_1[0x5d] + 0x48) == '\x01')) &&
         (lVar6 = *(longlong *)(param_1[0x5d] + 0x60), lVar6 != 0)) {
        piVar1 = (int *)(lVar6 + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      FUN_1456b7b28(param_1,param_3,4);
      FUN_14492aa36(param_1);
      local_5c0[1] = 0;
      local_5c0[2] = 0;
      lVar6 = param_1[0x33];
      if (lVar6 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar6 = param_1[0x33];
      }
      *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
      local_618 = 0;
      (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x180))
                (*(longlong **)(lVar6 + 0x28),*(undefined8 *)(param_3 + 0x38),local_5c0 + 1,0);
      uVar3 = *(undefined8 *)(local_5c0[0] + 0x20);
      lVar6 = param_1[0x33];
      if (lVar6 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar6 = param_1[0x33];
      }
      FUN_1447093fc(lVar6,uVar3);
    }
    FUN_144ad6520(param_1 + 0x72,1,local_5c0,0);
    local_268 = DAT_14c9c0d98;
  }
  else {
    if (bVar9) {
      if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
          (*(char *)(param_1[0x5d] + 0x48) == '\x01')) &&
         (lVar6 = *(longlong *)(param_1[0x5d] + 0x60), lVar6 != 0)) {
        piVar1 = (int *)(lVar6 + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      FUN_14736cfe0(param_1,0,0x10);
      FUN_14492aa36(param_1);
      lVar6 = param_1[0x33];
      if (lVar6 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar6 = param_1[0x33];
      }
      *(int *)(lVar6 + 0x1c0) = *(int *)(lVar6 + 0x1c0) + 1;
      local_608 = 0;
      local_610 = 0;
      local_618 = local_618 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x178))
                (*(longlong **)(lVar6 + 0x28),_DAT_00000038,3,0);
      uVar3 = _DAT_00000020;
      lVar6 = param_1[0x33];
      if (lVar6 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar6 = param_1[0x33];
      }
      FUN_1447093fc(lVar6,uVar3);
    }
    local_5c0[1] = 0;
    FUN_144ad6520(param_1 + 0x72,1,local_5c0 + 1,0);
    local_268 = DAT_14c9c0c60;
  }
  plVar7 = param_1 + 0x39;
  if (param_1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  plVar4 = local_5c0 + 1;
  FUN_140048e76(plVar4,plVar7);
  local_5f0 = &local_2a8;
  local_5e8 = param_5;
  local_5e0 = param_6;
  local_5d8 = &stack0x00000038;
  local_5d0 = &local_5c8;
  local_5f8 = param_4;
  FUN_143177f5a(&local_5f8,plVar4);
  FUN_140048db6(plVar4);
  lVar6 = local_5c8 + 0x60;
  if (local_5c8 == 0) {
    lVar6 = 0;
  }
  FUN_14736c26c(param_1,lVar6,0x18);
  if (*(uint *)(param_1 + 0x7c) == uVar2) {
    iVar5 = memcmp((void *)((longlong)param_1 + 0x3e4),local_1c8,(ulonglong)uVar2 * 0x18);
    if (iVar5 == 0) goto LAB_147383c07;
  }
  memcpy((void *)((longlong)param_1 + 0x3e4),local_1c8,(ulonglong)uVar2 * 0x18);
  *(uint *)(param_1 + 0x7c) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x3b2) = 1;
LAB_147383c07:
  if ((local_48 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147383c35 FUN_147383c35 body=257 status=ok
// SIG undefined FUN_147383c35(void)

void FUN_147383c35(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

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
  FUN_147431fa2(*param_2,lVar11,*param_4);
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
    *puVar12 = &PTR_FUN_14a1e7fd8;
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



// FUNCTION 147383d58 FUN_147383d58 body=119 status=ok
// SIG undefined FUN_147383d58(void)

void FUN_147383d58(longlong param_1,int param_2)

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
    FUN_147383dd0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147383dd0 FUN_147383dd0 body=141 status=ok
// SIG undefined FUN_147383dd0(void)

void FUN_147383dd0(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147383e5e FUN_147383e5e body=90 status=ok
// SIG undefined FUN_147383e5e(void)

void FUN_147383e5e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 4);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 147383eb8 FUN_147383eb8 body=132 status=ok
// SIG undefined FUN_147383eb8(void)

void FUN_147383eb8(longlong param_1,int param_2)

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



// FUNCTION 147383f3e FUN_147383f3e body=136 status=ok
// SIG undefined FUN_147383f3e(void)

void FUN_147383f3e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147383fc8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147383fc8 FUN_147383fc8 body=149 status=ok
// SIG undefined FUN_147383fc8(void)

void FUN_147383fc8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0xc);
  return;
}



// FUNCTION 14738405e FUN_14738405e body=96 status=ok
// SIG undefined FUN_14738405e(void)

void FUN_14738405e(longlong *param_1,uint param_2)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar4) << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1473840be FUN_1473840be body=132 status=ok
// SIG undefined FUN_1473840be(void)

void FUN_1473840be(longlong param_1,int param_2)

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



// FUNCTION 147384144 FUN_147384144 body=96 status=ok
// SIG undefined FUN_147384144(void)

void FUN_147384144(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1473841a4 FUN_1473841a4 body=119 status=ok
// SIG undefined FUN_1473841a4(void)

void FUN_1473841a4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_14738421c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14738421c FUN_14738421c body=141 status=ok
// SIG undefined FUN_14738421c(void)

void FUN_14738421c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 1473842aa FUN_1473842aa body=114 status=ok
// SIG undefined FUN_1473842aa(void)

void FUN_1473842aa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x100) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x100 + 4) = uVar4;
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



// FUNCTION 14738431c FUN_14738431c body=288 status=ok
// SIG undefined FUN_14738431c(void)

longlong FUN_14738431c(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined **local_f8 [5];
  byte local_d0;
  byte local_cf;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar4 = *param_2;
  iVar3 = *(int *)(param_2 + 1);
  memset(local_f8,0,0x90);
  FUN_144869430(local_f8);
  local_68 = 0;
  local_f8[0] = &PTR_FUN_149e1ddc0;
  local_50 = 0x7fffffffffffffff;
  local_d0 = local_d0 | 1;
  local_cf = local_cf | 1;
  lVar6 = param_1 + 0x10;
  local_60 = uVar4;
  local_58 = (longlong)iVar3;
  FUN_1402ee999(local_f8,lVar6);
  cVar5 = FUN_14738443d(&local_48,local_68 & 0xffffffff,param_1);
  if (cVar5 == '\0') {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(param_1);
    }
    param_1 = 0;
  }
  else {
    if (param_1 == 0) {
      lVar6 = 0;
    }
    FUN_1402eea41(lVar6);
  }
  FUN_144a7fc42(local_f8);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14738443d FUN_14738443d body=974 status=ok
// SIG undefined FUN_14738443d(void)

undefined8 FUN_14738443d(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *param_1 + (longlong)(int)param_1[1];
  if ((ulonglong)(longlong)(int)param_1[1] < 4) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)*(int *)(lVar5 + -4);
  }
  lVar18 = -lVar18;
  do {
    lVar14 = lVar18;
    if (-5 < lVar14) goto LAB_1473844e3;
    uVar9 = (ulonglong)*(uint *)(lVar5 + 1 + lVar14);
    bVar19 = *(char *)(lVar5 + lVar14) != 'p';
    uVar17 = uVar9;
    if (!bVar19 && uVar9 == 5) {
      uVar17 = 0;
    }
    lVar18 = uVar17 + 5 + lVar14;
  } while (bVar19 || uVar9 != 5);
  puVar6 = (undefined4 *)(lVar5 + lVar14 + 5);
  if (puVar6 == (undefined4 *)0x0) {
LAB_1473844e3:
    uVar13 = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0xb4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(param_3 + 0xb0) = *puVar6;
    lVar18 = *param_1;
    uVar7 = *(uint *)(param_1 + 1);
    uVar17 = (ulonglong)(int)uVar7;
    lVar5 = lVar18 + uVar17;
    if (uVar17 < 4) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar14 = -lVar14;
    do {
      lVar8 = lVar14;
      if (-5 < lVar8) goto LAB_1473845ea;
      uVar2 = *(uint *)(lVar5 + 1 + lVar8);
      bVar19 = *(char *)(lVar5 + lVar8) != 'v';
      uVar9 = (ulonglong)uVar2;
      if (!bVar19) {
        uVar9 = 0;
      }
      lVar14 = uVar9 + 5 + lVar8;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar5 + lVar8 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar2)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar2;
      FUN_14736909a(&local_f8,param_3 + 0xc0);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
      lVar18 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)(int)uVar7;
    }
LAB_1473845ea:
    lVar5 = lVar18 + uVar17;
    if (uVar7 < 4) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar14 = -lVar14;
    do {
      lVar8 = lVar14;
      if (-5 < lVar8) goto LAB_14738464b;
      uVar15 = (ulonglong)*(uint *)(lVar5 + 1 + lVar8);
      bVar19 = *(char *)(lVar5 + lVar8) != 'x';
      uVar9 = uVar15;
      if (!bVar19 && uVar15 == 2) {
        uVar9 = 0;
      }
      lVar14 = uVar9 + 5 + lVar8;
    } while (bVar19 || uVar15 != 2);
    puVar11 = (undefined2 *)(lVar5 + lVar8 + 5);
    if (puVar11 != (undefined2 *)0x0) {
      *(undefined2 *)(param_3 + 0xd0) = *puVar11;
      lVar18 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)(int)uVar7;
    }
LAB_14738464b:
    lVar18 = uVar17 + lVar18;
    if (uVar7 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)*(int *)(lVar18 + -4);
    }
    lVar5 = -lVar5;
    do {
      lVar14 = lVar5;
      if (-5 < lVar14) goto LAB_147384748;
      uVar7 = *(uint *)(lVar18 + 1 + lVar14);
      uVar9 = (ulonglong)uVar7;
      bVar19 = *(char *)(lVar18 + lVar14) != 's';
      uVar17 = uVar9;
      if (!bVar19) {
        uVar17 = 0;
      }
      lVar5 = uVar17 + 5 + lVar14;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar18 + lVar14 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar7)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar9;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)(param_3 + 0xb8) = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8);
        }
      }
      else {
        *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
    }
LAB_147384748:
    FUN_1402eeba3(param_3,param_1);
    puVar1 = (undefined8 *)(param_3 + 0xa0);
    puVar10 = puVar1;
    if (param_3 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    cVar4 = FUN_1402ee923(puVar10,*(undefined1 *)(param_3 + 0x9c));
    uVar13 = 0;
    iVar12 = 0;
    if (cVar4 != '\0') {
      iVar3 = (int)param_1[1];
      lVar5 = *param_1;
      if (3 < (ulonglong)(longlong)iVar3) {
        iVar12 = *(int *)(lVar5 + -4 + (longlong)iVar3);
      }
      iVar12 = iVar12 + param_2;
      iVar16 = iVar3 - iVar12;
      *(int *)(param_3 + 0xa8) = iVar16;
      if (iVar16 == 0 && *(int *)(param_3 + 0xac) == 0) {
        *(undefined4 *)(param_3 + 0xac) = 0;
      }
      else {
        FUN_1447a127e(puVar1,iVar16);
        if (iVar3 != iVar12) {
          memcpy((void *)*puVar1,(void *)(lVar5 + param_2),(longlong)iVar16);
        }
      }
      *(byte *)(param_3 + 0x9d) =
           *(byte *)(param_3 + 0x9d) & 0xfd | *(byte *)(param_3 + 0xb0) >> 4 & 2;
      uVar13 = CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 14738480c FUN_14738480c body=974 status=ok
// SIG undefined FUN_14738480c(void)

undefined8 FUN_14738480c(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *param_1 + (longlong)(int)param_1[1];
  if ((ulonglong)(longlong)(int)param_1[1] < 4) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)*(int *)(lVar5 + -4);
  }
  lVar18 = -lVar18;
  do {
    lVar14 = lVar18;
    if (-5 < lVar14) goto LAB_1473848b2;
    uVar9 = (ulonglong)*(uint *)(lVar5 + 1 + lVar14);
    bVar19 = *(char *)(lVar5 + lVar14) != 'p';
    uVar17 = uVar9;
    if (!bVar19 && uVar9 == 5) {
      uVar17 = 0;
    }
    lVar18 = uVar17 + 5 + lVar14;
  } while (bVar19 || uVar9 != 5);
  puVar6 = (undefined4 *)(lVar5 + lVar14 + 5);
  if (puVar6 == (undefined4 *)0x0) {
LAB_1473848b2:
    uVar13 = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0xb4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(param_3 + 0xb0) = *puVar6;
    lVar18 = *param_1;
    uVar7 = *(uint *)(param_1 + 1);
    uVar17 = (ulonglong)(int)uVar7;
    lVar5 = lVar18 + uVar17;
    if (uVar17 < 4) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar14 = -lVar14;
    do {
      lVar8 = lVar14;
      if (-5 < lVar8) goto LAB_1473849b9;
      uVar2 = *(uint *)(lVar5 + 1 + lVar8);
      bVar19 = *(char *)(lVar5 + lVar8) != 'v';
      uVar9 = (ulonglong)uVar2;
      if (!bVar19) {
        uVar9 = 0;
      }
      lVar14 = uVar9 + 5 + lVar8;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar5 + lVar8 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar2)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar2;
      FUN_14736909a(&local_f8,param_3 + 0xc0);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
      lVar18 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)(int)uVar7;
    }
LAB_1473849b9:
    lVar5 = lVar18 + uVar17;
    if (uVar7 < 4) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar14 = -lVar14;
    do {
      lVar8 = lVar14;
      if (-5 < lVar8) goto LAB_147384a1a;
      uVar15 = (ulonglong)*(uint *)(lVar5 + 1 + lVar8);
      bVar19 = *(char *)(lVar5 + lVar8) != 'x';
      uVar9 = uVar15;
      if (!bVar19 && uVar15 == 2) {
        uVar9 = 0;
      }
      lVar14 = uVar9 + 5 + lVar8;
    } while (bVar19 || uVar15 != 2);
    puVar11 = (undefined2 *)(lVar5 + lVar8 + 5);
    if (puVar11 != (undefined2 *)0x0) {
      *(undefined2 *)(param_3 + 0xd0) = *puVar11;
      lVar18 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)(int)uVar7;
    }
LAB_147384a1a:
    lVar18 = uVar17 + lVar18;
    if (uVar7 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)*(int *)(lVar18 + -4);
    }
    lVar5 = -lVar5;
    do {
      lVar14 = lVar5;
      if (-5 < lVar14) goto LAB_147384b17;
      uVar7 = *(uint *)(lVar18 + 1 + lVar14);
      uVar9 = (ulonglong)uVar7;
      bVar19 = *(char *)(lVar18 + lVar14) != 's';
      uVar17 = uVar9;
      if (!bVar19) {
        uVar17 = 0;
      }
      lVar5 = uVar17 + 5 + lVar14;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar18 + lVar14 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar7)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar9;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)(param_3 + 0xb8) = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8);
        }
      }
      else {
        *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
    }
LAB_147384b17:
    FUN_1402eeba3(param_3,param_1);
    puVar1 = (undefined8 *)(param_3 + 0xa0);
    puVar10 = puVar1;
    if (param_3 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    cVar4 = FUN_1402ee923(puVar10,*(undefined1 *)(param_3 + 0x9c));
    uVar13 = 0;
    iVar12 = 0;
    if (cVar4 != '\0') {
      iVar3 = (int)param_1[1];
      lVar5 = *param_1;
      if (3 < (ulonglong)(longlong)iVar3) {
        iVar12 = *(int *)(lVar5 + -4 + (longlong)iVar3);
      }
      iVar12 = iVar12 + param_2;
      iVar16 = iVar3 - iVar12;
      *(int *)(param_3 + 0xa8) = iVar16;
      if (iVar16 == 0 && *(int *)(param_3 + 0xac) == 0) {
        *(undefined4 *)(param_3 + 0xac) = 0;
      }
      else {
        FUN_1447a127e(puVar1,iVar16);
        if (iVar3 != iVar12) {
          memcpy((void *)*puVar1,(void *)(lVar5 + param_2),(longlong)iVar16);
        }
      }
      *(byte *)(param_3 + 0x9d) =
           *(byte *)(param_3 + 0x9d) & 0xfd | *(byte *)(param_3 + 0xb0) >> 4 & 2;
      uVar13 = CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 147384bdb FUN_147384bdb body=974 status=ok
// SIG undefined FUN_147384bdb(void)

undefined8 FUN_147384bdb(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *param_1 + (longlong)(int)param_1[1];
  if ((ulonglong)(longlong)(int)param_1[1] < 4) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)*(int *)(lVar5 + -4);
  }
  lVar18 = -lVar18;
  do {
    lVar14 = lVar18;
    if (-5 < lVar14) goto LAB_147384c81;
    uVar9 = (ulonglong)*(uint *)(lVar5 + 1 + lVar14);
    bVar19 = *(char *)(lVar5 + lVar14) != 'p';
    uVar17 = uVar9;
    if (!bVar19 && uVar9 == 5) {
      uVar17 = 0;
    }
    lVar18 = uVar17 + 5 + lVar14;
  } while (bVar19 || uVar9 != 5);
  puVar6 = (undefined4 *)(lVar5 + lVar14 + 5);
  if (puVar6 == (undefined4 *)0x0) {
LAB_147384c81:
    uVar13 = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0xc4) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(param_3 + 0xc0) = *puVar6;
    lVar18 = *param_1;
    uVar7 = *(uint *)(param_1 + 1);
    uVar17 = (ulonglong)(int)uVar7;
    lVar5 = lVar18 + uVar17;
    if (uVar17 < 4) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar14 = -lVar14;
    do {
      lVar8 = lVar14;
      if (-5 < lVar8) goto LAB_147384d88;
      uVar2 = *(uint *)(lVar5 + 1 + lVar8);
      bVar19 = *(char *)(lVar5 + lVar8) != 'v';
      uVar9 = (ulonglong)uVar2;
      if (!bVar19) {
        uVar9 = 0;
      }
      lVar14 = uVar9 + 5 + lVar8;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar5 + lVar8 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar2)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar2;
      FUN_14736909a(&local_f8,param_3 + 0xd0);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
      lVar18 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)(int)uVar7;
    }
LAB_147384d88:
    lVar5 = lVar18 + uVar17;
    if (uVar7 < 4) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar5 + -4);
    }
    lVar14 = -lVar14;
    do {
      lVar8 = lVar14;
      if (-5 < lVar8) goto LAB_147384de9;
      uVar15 = (ulonglong)*(uint *)(lVar5 + 1 + lVar8);
      bVar19 = *(char *)(lVar5 + lVar8) != 'x';
      uVar9 = uVar15;
      if (!bVar19 && uVar15 == 2) {
        uVar9 = 0;
      }
      lVar14 = uVar9 + 5 + lVar8;
    } while (bVar19 || uVar15 != 2);
    puVar11 = (undefined2 *)(lVar5 + lVar8 + 5);
    if (puVar11 != (undefined2 *)0x0) {
      *(undefined2 *)(param_3 + 0xe0) = *puVar11;
      lVar18 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)(int)uVar7;
    }
LAB_147384de9:
    lVar18 = uVar17 + lVar18;
    if (uVar7 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)*(int *)(lVar18 + -4);
    }
    lVar5 = -lVar5;
    do {
      lVar14 = lVar5;
      if (-5 < lVar14) goto LAB_147384ee6;
      uVar7 = *(uint *)(lVar18 + 1 + lVar14);
      uVar9 = (ulonglong)uVar7;
      bVar19 = *(char *)(lVar18 + lVar14) != 's';
      uVar17 = uVar9;
      if (!bVar19) {
        uVar17 = 0;
      }
      lVar5 = uVar17 + 5 + lVar14;
    } while (bVar19);
    puVar6 = (undefined4 *)(lVar18 + lVar14 + 5);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar7)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar9;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)(param_3 + 200) = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8);
        }
      }
      else {
        *(undefined4 *)(param_3 + 200) = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42(&local_f8);
    }
LAB_147384ee6:
    FUN_1402eeba3(param_3,param_1);
    puVar1 = (undefined8 *)(param_3 + 0xb0);
    puVar10 = puVar1;
    if (param_3 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    cVar4 = FUN_1402ee923(puVar10,*(undefined1 *)(param_3 + 0x9c));
    uVar13 = 0;
    iVar12 = 0;
    if (cVar4 != '\0') {
      iVar3 = (int)param_1[1];
      lVar5 = *param_1;
      if (3 < (ulonglong)(longlong)iVar3) {
        iVar12 = *(int *)(lVar5 + -4 + (longlong)iVar3);
      }
      iVar12 = iVar12 + param_2;
      iVar16 = iVar3 - iVar12;
      *(int *)(param_3 + 0xb8) = iVar16;
      if (iVar16 == 0 && *(int *)(param_3 + 0xbc) == 0) {
        *(undefined4 *)(param_3 + 0xbc) = 0;
      }
      else {
        FUN_1447a127e(puVar1,iVar16);
        if (iVar3 != iVar12) {
          memcpy((void *)*puVar1,(void *)(lVar5 + param_2),(longlong)iVar16);
        }
      }
      *(byte *)(param_3 + 0x9d) =
           *(byte *)(param_3 + 0x9d) & 0xfd | *(byte *)(param_3 + 0xc0) >> 4 & 2;
      uVar13 = CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 147384faa FUN_147384faa body=114 status=ok
// SIG undefined FUN_147384faa(void)

void FUN_147384faa(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14738501c FUN_14738501c body=119 status=ok
// SIG undefined FUN_14738501c(void)

void FUN_14738501c(longlong param_1,int param_2)

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
    FUN_147385094(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147385094 FUN_147385094 body=141 status=ok
// SIG undefined FUN_147385094(void)

void FUN_147385094(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147385122 FUN_147385122 body=90 status=ok
// SIG undefined FUN_147385122(void)

void FUN_147385122(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 4);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 14738517c FUN_14738517c body=119 status=ok
// SIG undefined FUN_14738517c(void)

void FUN_14738517c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1473851f4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473851f4 FUN_1473851f4 body=141 status=ok
// SIG undefined FUN_1473851f4(void)

void FUN_1473851f4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 147385282 FUN_147385282 body=124 status=ok
// SIG undefined FUN_147385282(void)

void FUN_147385282(longlong param_1,int param_2)

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
    FUN_147385300(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147385300 FUN_147385300 body=132 status=ok
// SIG undefined FUN_147385300(void)

void FUN_147385300(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147385384 FUN_147385384 body=111 status=ok
// SIG undefined FUN_147385384(void)

void FUN_147385384(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar4 = 2;
  if (2 < uVar1) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(uVar3 << 3,0);
    iVar2 = (int)(uVar3 >> 3);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar4;
  FUN_1473853f4(param_1);
  return;
}



// FUNCTION 1473853f4 FUN_1473853f4 body=97 status=ok
// SIG undefined FUN_1473853f4(void)

void FUN_1473853f4(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  if (param_2 < 3) {
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    *param_1 = *puVar1;
    uVar2 = 0;
    param_2 = 0;
  }
  else {
    if (puVar1 == (undefined8 *)0x0) {
      FUN_1446efa72(param_1 + 2,0,param_2,8);
      *(undefined8 *)param_1[2] = *param_1;
      return;
    }
    uVar2 = 1;
  }
  FUN_1446efa72(param_1 + 2,uVar2,param_2,8);
  return;
}



// FUNCTION 147385456 FUN_147385456 body=125 status=ok
// SIG undefined FUN_147385456(void)

void FUN_147385456(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_1473854d4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473854d4 FUN_1473854d4 body=144 status=ok
// SIG undefined FUN_1473854d4(void)

void FUN_1473854d4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 147385564 FUN_147385564 body=90 status=ok
// SIG undefined FUN_147385564(void)

void FUN_147385564(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x40c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
    if (*(void **)((longlong)param_1 + 0x400) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x400),
              (longlong)*(int *)((longlong)param_1 + 0x408) << 3);
      FUN_1446efa72((longlong)param_1 + 0x400,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1473855be FUN_1473855be body=119 status=ok
// SIG undefined FUN_1473855be(void)

void FUN_1473855be(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0x18c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_147385636(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147385636 FUN_147385636 body=141 status=ok
// SIG undefined FUN_147385636(void)

void FUN_147385636(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x10);
  return;
}



// FUNCTION 1473856c4 FUN_1473856c4 body=119 status=ok
// SIG undefined FUN_1473856c4(void)

void FUN_1473856c4(longlong param_1,int param_2)

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
    FUN_14738573c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14738573c FUN_14738573c body=140 status=ok
// SIG undefined FUN_14738573c(void)

void FUN_14738573c(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147385830 FUN_147385830 body=146 status=ok
// SIG undefined FUN_147385830(void)

void FUN_147385830(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3 + 0x48;
  if (param_3 == 0) {
    local_38 = 0;
    local_40 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_3 + 0x58);
  }
  local_48 = param_3;
  FUN_1447f028a(&local_30,param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x2c) = local_30;
  FUN_14493819a(param_1,param_2,&local_48,0x20);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473858c4 FUN_1473858c4 body=89 status=ok
// SIG undefined FUN_1473858c4(void)

void FUN_1473858c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x20);
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 8);
  (**(code **)(*plVar1 + 0x98))(plVar1,lVar2,uVar3,param_1 + 0x58,*(undefined8 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}



// FUNCTION 14738591d FUN_14738591d body=672 status=ok
// SIG undefined FUN_14738591d(void)

void FUN_14738591d(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_348 [32];
  undefined2 *local_328;
  undefined2 *local_320;
  undefined8 local_318;
  undefined4 local_310;
  uint local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  uint local_2f0;
  undefined2 *local_2e8;
  uint local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  int local_2a0;
  undefined2 *local_298;
  int local_290;
  undefined2 *local_288;
  int local_280;
  undefined1 local_278 [256];
  longlong local_178;
  undefined8 local_170;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2d0 = param_4;
  local_2cc = param_1;
  local_2b8 = param_2;
  FUN_14317d9b0(&local_288,param_1,param_6);
  local_2c0 = FUN_147123c33(*(undefined4 *)(param_5 + 0x20));
  local_2b0 = DAT_14ca77418;
  uVar2 = *(uint *)(param_5 + 0x30);
  FUN_140056680(&local_2a8,&DAT_149dfb77a);
  if ((uVar2 & 1) != 0) {
    FUN_1400020e8(&local_2a8,L"D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET ",0x28);
  }
  if ((uVar2 & 2) != 0) {
    FUN_1400020e8(&local_2a8,L"D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL ",0x28);
  }
  if ((uVar2 & 8) != 0) {
    FUN_1400020e8(&local_2a8,L"D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE ",0x29);
  }
  if ((uVar2 & 4) != 0) {
    FUN_1400020e8(&local_2a8,L"D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS ",0x2b);
  }
  puVar5 = &DAT_149dfb77a;
  if (local_2a0 != 0) {
    puVar5 = local_2a8;
  }
  uVar1 = *(ushort *)(param_5 + 0x1e);
  uVar3 = *(undefined4 *)(param_5 + 0x20);
  local_2d4 = (uint)*(ushort *)(param_5 + 0x1c);
  uVar4 = *(undefined4 *)(param_5 + 0x18);
  local_2c8 = *(undefined8 *)(param_5 + 0x10);
  puVar6 = &DAT_149dfb77a;
  if (local_280 != 0) {
    puVar6 = local_288;
  }
  FUN_144a81018(local_160,param_3);
  FUN_144a81018(local_278,local_2b8);
  local_2f0 = (uint)uVar1;
  local_300 = local_2c0;
  local_308 = local_2d4;
  local_318 = local_2c8;
  local_328 = (undefined2 *)CONCAT44(local_328._4_4_,local_2d0);
  local_320 = puVar6;
  local_310 = uVar4;
  local_2f8 = uVar3;
  local_2e8 = puVar5;
  FUN_140002266(&local_298,
                L"%s failed \n at %s:%u \n with error %s, \n Size=%ix%ix%i Format=%s(0x%08X), NumMips=%i, Flags=%s"
                ,local_170,local_58);
  local_328 = &DAT_149dfb77a;
  if (local_290 != 0) {
    local_328 = local_298;
  }
  FUN_14317d3fe(local_2b0,local_2cc,param_6,1);
  if (local_298 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_2a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_288 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147385bbe FUN_147385bbe body=254 status=ok
// SIG undefined FUN_147385bbe(void)

undefined8 FUN_147385bbe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 local_110 [2];
  undefined4 auStack_100 [48];
  undefined8 uStack_40;
  undefined5 uStack_38;
  undefined3 local_33;
  undefined5 uStack_30;
  undefined8 uStack_2b;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(local_110,0,0xd0);
  lVar1 = 0x10;
  do {
    *(undefined8 *)((longlong)local_110 + lVar1) = 0;
    *(undefined8 *)((longlong)local_110 + lVar1 + 8) = 0;
    *(undefined4 *)((longlong)auStack_100 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd0);
  uStack_30 = 0;
  uStack_2b = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_33 = 0;
  lVar1 = param_2 + 0xa0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  local_118[0] = 1;
  FUN_1406bf9cf(local_110,lVar1,*(undefined4 *)(param_1 + 0x214),5);
  uStack_2b._0_7_ = CONCAT43((*(char *)(param_2 + 0x9c) != '\n') + 3,(undefined3)uStack_2b);
  uVar2 = FUN_1406bfa6a(param_1 + 0x238,local_110);
  lVar1 = 0xc0;
  do {
    if (*(longlong *)(local_118 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147385cbe FUN_147385cbe body=325 status=ok
// SIG undefined FUN_147385cbe(void)

undefined8 FUN_147385cbe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_138 [24];
  longlong alStack_120 [2];
  undefined8 local_110;
  undefined4 local_108 [48];
  undefined8 uStack_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  byte bStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar3 = local_108;
  memset(&local_110,0,200);
  lVar1 = 0x10;
  do {
    *(undefined8 *)((longlong)alStack_120 + lVar1 + 8) = 0;
    *(undefined8 *)((longlong)&local_110 + lVar1) = 0;
    *(undefined4 *)((longlong)local_108 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd0);
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  bStack_2c = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_3b = 0;
  alStack_120[1] = *param_2;
  local_110._0_4_ = *(undefined4 *)(param_2 + 1);
  param_2 = param_2 + 2;
  lVar1 = 8;
  do {
    FUN_144a787a6(puVar3,param_2);
    puVar3[4] = *(undefined4 *)(param_2 + 2);
    param_2 = param_2 + 3;
    puVar3 = puVar3 + 6;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  uStack_30 = 1;
  bStack_2c = (*(longlong *)(param_1 + 0x858) != 0) << 4 |
              bStack_2c & 0xe3 | (*(longlong *)(param_1 + 0x850) != 0) << 3 | 4;
  uStack_34 = 0x10401020;
  uVar2 = FUN_1406bfa6a(param_1 + 0x238);
  lVar1 = 0xc0;
  do {
    if (*(longlong *)((longlong)alStack_120 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147385e04 FUN_147385e04 body=290 status=ok
// SIG undefined FUN_147385e04(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_147385e04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [24];
  longlong lStack_110;
  undefined8 local_108 [2];
  undefined4 auStack_f8 [48];
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 local_2b;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined8 uStack_23;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  memset(local_108,0,0xd0);
  lVar1 = 0x10;
  do {
    *(undefined8 *)((longlong)local_108 + lVar1) = 0;
    *(undefined8 *)((longlong)local_108 + lVar1 + 8U) = 0;
    *(undefined4 *)((longlong)auStack_f8 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd0);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_23 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_2b = 0;
  if ((byte)(*(char *)(param_2 + 0x9c) - 7U) < 3) {
    uStack_24 = *(undefined1 *)(param_2 + 0xc1);
    uStack_23._0_3_ =
         CONCAT12(*(undefined1 *)(param_2 + 0xc4),
                  (short)CONCAT61(CONCAT51(0x200,*(undefined1 *)(param_2 + 0xc2)),
                                  *(undefined1 *)(param_2 + 0xc3)));
    uStack_23 = (ulonglong)CONCAT43(2,(undefined3)uStack_23);
  }
  lVar1 = param_2 + 0xb0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_14317de36(local_108,lVar1);
  uVar2 = FUN_1406bfa6a(param_1 + 0x238,local_108);
  lVar1 = 0xc0;
  do {
    if (*(longlong *)((longlong)&lStack_110 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147385f28 FUN_147385f28 body=55 status=ok
// SIG undefined FUN_147385f28(void)

void FUN_147385f28(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  *(uint *)(param_1 + 0x68) = param_3;
  *(ulonglong *)(param_1 + 0x58) =
       (ulonglong)param_3 + *(longlong *)(*(longlong *)(param_2 + 8) + 0x58);
  *(undefined4 *)(param_1 + 0x60) = param_4;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x100010000010000;
  FUN_1447f03f2(param_1,param_2,0x30);
  return;
}



// FUNCTION 147385fde FUN_147385fde body=37 status=ok
// SIG undefined FUN_147385fde(void)

void FUN_147385fde(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  FUN_14317e0b4(param_2,param_3,param_4,param_5,0);
  return;
}



// FUNCTION 147386004 FUN_147386004 body=220 status=ok
// SIG undefined FUN_147386004(void)

void FUN_147386004(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,char param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 unaff_RBX;
  
  if (param_6 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca77528) {
      FUN_144b3d300(&DAT_14ca77528);
      if (DAT_14ca77528 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar2 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.DefaultBackBufferPixelFormat",1);
        if (plVar2 == (longlong *)0x0) {
          DAT_14ca77520 = (undefined4 *)0x0;
        }
        else {
          DAT_14ca77520 = (undefined4 *)(**(code **)(*plVar2 + 0x68))(plVar2);
        }
        _Init_thread_footer(&DAT_14ca77528);
      }
    }
    uVar1 = FUN_146074939(*DAT_14ca77520);
    param_6 = FUN_146074956(uVar1);
  }
  FUN_14317e0b4(param_2,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,param_6);
  return;
}



// FUNCTION 1473860e0 FUN_1473860e0 body=2492 status=ok
// SIG undefined FUN_1473860e0(void)

undefined8 * FUN_1473860e0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  longlong **local_190;
  longlong local_180;
  longlong *local_178;
  wchar_t *local_170;
  longlong local_168;
  longlong *local_160;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  longlong *local_140;
  undefined2 *local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_108;
  longlong *local_100;
  undefined1 local_f8 [104];
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x29;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a3519d0;
  plVar21 = param_1 + 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  local_160 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  lVar13 = *(longlong *)(param_3 + 0x20);
  if (lVar13 != 0) {
    *plVar21 = lVar13;
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)(param_3 + 0x30) < 2) {
    pwVar19 = L"WorkGraphProgram";
  }
  else {
    pwVar19 = *(wchar_t **)(param_3 + 0x28);
  }
  local_180 = param_3;
  FUN_147386a9e(local_f8);
  lVar7 = FUN_14001cc68(0x18,0x10);
  FUN_14738acb0(lVar7,local_f8);
  lVar13 = local_90;
  if (local_88 != 0xaaaaaaaaaaaaaaa) {
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_88 = local_88 + 1;
    plVar8[2] = lVar7;
    plVar3 = *(longlong **)(lVar13 + 8);
    *plVar8 = lVar13;
    plVar8[1] = (longlong)plVar3;
    *(longlong **)(lVar13 + 8) = plVar8;
    *plVar3 = (longlong)plVar8;
    plVar3 = *(longlong **)(*(longlong *)(*plVar21 + 0xd8) + 8);
    plVar8 = *(longlong **)(lVar7 + 0x10);
    if (plVar8 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar8 = *(longlong **)(lVar7 + 0x10);
      }
      *(longlong **)(lVar7 + 0x10) = plVar3;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    local_168 = param_2;
    lVar7 = FUN_14001cc68(0x58,0x10);
    FUN_14738adf4(lVar7,local_f8);
    lVar13 = local_90;
    if (local_88 != 0xaaaaaaaaaaaaaaa) {
      plVar3 = param_1 + 3;
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar9[2] = lVar7;
      local_88 = local_88 + 1;
      plVar8 = *(longlong **)(lVar13 + 8);
      *plVar9 = lVar13;
      plVar9[1] = (longlong)plVar8;
      *(longlong **)(lVar13 + 8) = plVar9;
      *plVar8 = (longlong)plVar9;
      iVar1 = *(int *)(param_1[2] + 0xa8);
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1[2] + 0xa0);
      *(longlong *)(lVar7 + 0x18) = (longlong)iVar1;
      uVar2 = *(uint *)(local_180 + 0x40);
      uVar18 = (ulonglong)uVar2;
      *(undefined4 *)(param_1 + 0xd) = 0;
      local_170 = pwVar19;
      if (0 < (int)uVar2) {
        uVar20 = 0;
        lVar13 = local_180;
        local_178 = plVar21;
        do {
          lVar7 = *(longlong *)(*(longlong *)(lVar13 + 0x38) + uVar20 * 8);
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          iVar1 = *(int *)(param_1 + 4);
          *(uint *)(param_1 + 4) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
            FUN_14738afcc(plVar3,iVar1);
            lVar13 = local_180;
          }
          *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = lVar7;
          if (lVar7 != 0) {
            lVar10 = FUN_14001cc68(0x58,0x10);
            FUN_14738adf4(lVar10,local_f8);
            lVar13 = local_90;
            if (local_88 == 0xaaaaaaaaaaaaaaa) goto LAB_147386a91;
            plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
            plVar8[2] = lVar10;
            local_88 = local_88 + 1;
            plVar21 = *(longlong **)(lVar13 + 8);
            *plVar8 = lVar13;
            plVar8[1] = (longlong)plVar21;
            *(longlong **)(lVar13 + 8) = plVar8;
            *plVar21 = (longlong)plVar8;
            iVar1 = *(int *)(lVar7 + 0xa8);
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar7 + 0xa0);
            *(longlong *)(lVar10 + 0x18) = (longlong)iVar1;
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(local_180 + 0x50) != 0) {
              puVar17 = *(undefined2 **)(local_180 + 0x48);
            }
            FUN_140002266(&local_80,L"%s_%d",puVar17,uVar20 & 0xffffffff);
            puVar17 = &DAT_149dfb77a;
            if (*(int *)(lVar7 + 0xe8) != 0) {
              puVar17 = *(undefined2 **)(lVar7 + 0xe0);
            }
            puVar16 = &DAT_149dfb77a;
            if ((int)uStack_78 != 0) {
              puVar16 = local_80;
            }
            FUN_147386b66(lVar10,puVar16,puVar17);
            lVar10 = FUN_14001cc68(0x18,0x10);
            FUN_14738b052(lVar10,local_f8);
            lVar13 = local_90;
            if (local_88 == 0xaaaaaaaaaaaaaaa) goto LAB_147386a91;
            plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
            plVar8[2] = lVar10;
            local_88 = local_88 + 1;
            plVar21 = *(longlong **)(lVar13 + 8);
            *plVar8 = lVar13;
            plVar8[1] = (longlong)plVar21;
            *(longlong **)(lVar13 + 8) = plVar8;
            *plVar21 = (longlong)plVar8;
            plVar21 = *(longlong **)(*(longlong *)(lVar7 + 0xd8) + 8);
            plVar8 = *(longlong **)(lVar10 + 0x10);
            if (plVar8 != plVar21) {
              if (plVar21 != (longlong *)0x0) {
                (**(code **)(*plVar21 + 8))(plVar21);
                plVar8 = *(longlong **)(lVar10 + 0x10);
              }
              *(longlong **)(lVar10 + 0x10) = plVar21;
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x10))();
              }
            }
            lVar11 = FUN_14001cc68(0x50,0x10);
            FUN_14738b12a(lVar11,local_f8);
            lVar13 = local_90;
            if (local_88 == 0xaaaaaaaaaaaaaaa) goto LAB_147386a91;
            plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
            local_88 = local_88 + 1;
            plVar8[2] = lVar11;
            plVar21 = *(longlong **)(lVar13 + 8);
            *plVar8 = lVar13;
            plVar8[1] = (longlong)plVar21;
            *(longlong **)(lVar13 + 8) = plVar8;
            *plVar21 = (longlong)plVar8;
            *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar10 + 8);
            puVar17 = &DAT_149dfb77a;
            if ((int)uStack_78 != 0) {
              puVar17 = local_80;
            }
            FUN_147386c26(lVar11,puVar17);
            uVar4 = (uint)*(byte *)(*(longlong *)(lVar7 + 0xd8) + 0xb8) << 2;
            if (uVar4 <= *(uint *)(param_1 + 0xd)) {
              uVar4 = *(uint *)(param_1 + 0xd);
            }
            *(uint *)(param_1 + 0xd) = uVar4;
            lVar13 = local_180;
            if (local_80 != (undefined2 *)0x0) {
              FUN_1400020a8();
              lVar13 = local_180;
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar18 != uVar20);
        *(uint *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 0xfU & 0xfffffff0;
        plVar21 = local_178;
      }
      pwVar19 = local_170;
      plVar8 = (longlong *)FUN_14001cc68(0xb8,0x10);
      FUN_14738b300(plVar8,local_f8);
      if (local_88 != 0xaaaaaaaaaaaaaaa) {
        plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
        local_88 = local_88 + 1;
        plVar12[2] = (longlong)plVar8;
        plVar9 = *(longlong **)(local_90 + 8);
        *plVar12 = local_90;
        plVar12[1] = (longlong)plVar9;
        *(longlong **)(local_90 + 8) = plVar12;
        *plVar9 = (longlong)plVar12;
        lVar13 = FUN_147388374(plVar8 + 0x13,pwVar19);
        plVar8[2] = lVar13;
        if (*(int *)(*plVar21 + 0xe8) == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        else {
          puVar17 = *(undefined2 **)(*plVar21 + 0xe0);
        }
        local_178 = param_1 + 6;
        local_80 = (undefined2 *)FUN_147388374(plVar8 + 0x13,puVar17);
        uStack_78 = (ulonglong)uStack_78._4_4_ << 0x20;
        FUN_14738885a(plVar8 + 7,plVar8[7]);
        *(int *)(plVar8 + 9) = (int)plVar8[9] + 1;
        if (0 < (int)uVar2) {
          uVar20 = 0;
          lVar13 = local_180;
          do {
            if (*(longlong *)(*plVar3 + uVar20 * 8) != 0) {
              puVar17 = &DAT_149dfb77a;
              if (*(int *)(lVar13 + 0x50) != 0) {
                puVar17 = *(undefined2 **)(lVar13 + 0x48);
              }
              FUN_140002266(&local_80,L"%s_%d",puVar17,uVar20 & 0xffffffff);
              puVar17 = &DAT_149dfb77a;
              if ((int)uStack_78 != 0) {
                puVar17 = local_80;
              }
              lVar13 = FUN_1473888bc(plVar8);
              uVar15 = FUN_147388374(lVar13 + 0x40,puVar17);
              *(undefined8 *)(*(longlong *)(lVar13 + 0x38) + 8) = uVar15;
              puVar17 = &DAT_149dfb77a;
              if (*(int *)(local_180 + 0x50) != 0) {
                puVar17 = *(undefined2 **)(local_180 + 0x48);
              }
              uVar15 = FUN_147388374(lVar13 + 0x40,puVar17);
              puVar14 = (undefined8 *)FUN_14001cc68(0x18,0x10);
              puVar14[1] = uVar15;
              *(int *)(puVar14 + 2) = (int)uVar20;
              *puVar14 = *(undefined8 *)(lVar13 + 0x58);
              *(undefined8 **)(lVar13 + 0x58) = puVar14;
              *(undefined8 **)(lVar13 + 0x18) = puVar14 + 1;
              lVar13 = local_180;
              if (local_80 != (undefined2 *)0x0) {
                FUN_1400020a8();
                lVar13 = local_180;
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar18 != uVar20);
        }
        (**(code **)(*plVar8 + 0x10))(plVar8);
        plVar8 = local_178;
        plVar21 = (longlong *)*local_178;
        if (plVar21 != (longlong *)0x0) {
          *local_178 = 0;
          (**(code **)(*plVar21 + 0x10))();
        }
        plVar21 = param_1 + 0xe;
        FUN_147388cc8(local_f8);
        (**(code **)(*local_160 + 0x1f0))(local_160,local_f8,&DAT_14a34c4e8,plVar8);
        local_100 = (longlong *)0x0;
        (*(code *)**(undefined8 **)param_1[6])((undefined8 *)param_1[6],&DAT_14a351a00,&local_100);
        pwVar19 = local_170;
        (**(code **)(*local_100 + 0x38))(local_100,&local_80,local_170);
        *(undefined4 *)(param_1 + 9) = (undefined4)local_70;
        *(undefined4 *)((longlong)param_1 + 0x4c) = local_70._4_4_;
        *(undefined4 *)(param_1 + 10) = (undefined4)uStack_68;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_68._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)local_80;
        *(undefined4 *)((longlong)param_1 + 0x3c) = local_80._4_4_;
        *(int *)(param_1 + 8) = (int)uStack_78;
        *(uint *)((longlong)param_1 + 0x44) = uStack_78._4_4_;
        local_108 = (longlong *)0x0;
        (*(code *)**(undefined8 **)param_1[6])((undefined8 *)param_1[6],&DAT_14a351a10,&local_108);
        uVar5 = (**(code **)(*local_108 + 0x28))(local_108,pwVar19);
        local_118 = 0;
        local_128 = 0;
        uStack_120 = 0;
        (**(code **)(*local_108 + 0x70))();
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0xf) = 0;
        if (*(int *)((longlong)param_1 + 0x7c) < 0) {
          FUN_14480809c(plVar21);
        }
        if (0 < (int)uVar2) {
          iVar1 = *(int *)(param_1 + 0xf);
          *(uint *)(param_1 + 0xf) = iVar1 + uVar2;
          if ((uint)(*(int *)((longlong)param_1 + 0x7c) - iVar1) < uVar2) {
            FUN_1447808da(plVar21);
          }
          uVar20 = 0;
          memset((void *)((longlong)iVar1 * 4 + *plVar21),0,uVar18 * 4);
          lVar13 = local_180;
          do {
            if (*(longlong *)(*plVar3 + uVar20 * 8) != 0) {
              local_138 = &DAT_149dfb77a;
              if (*(int *)(lVar13 + 0x50) != 0) {
                local_138 = *(undefined2 **)(lVar13 + 0x48);
              }
              local_130 = (undefined4)uVar20;
              uVar6 = (**(code **)(*local_108 + 0x40))(local_108,uVar5,&local_138);
              uVar6 = (**(code **)(*local_108 + 0x48))(local_108,uVar5,uVar6);
              *(undefined4 *)(param_1[0xe] + uVar20 * 4) = uVar6;
              uVar2 = *(uint *)(param_1[0xe] + uVar20 * 4);
              uVar4 = *(uint *)((longlong)param_1 + 0x6c);
              if (*(uint *)((longlong)param_1 + 0x6c) < uVar2) {
                uVar4 = uVar2;
              }
              *(uint *)((longlong)param_1 + 0x6c) = uVar4;
              lVar13 = local_180;
            }
            uVar20 = uVar20 + 1;
          } while (uVar18 != uVar20);
        }
        local_190 = &local_140;
        local_140 = (longlong *)0x0;
        local_80 = (undefined2 *)CONCAT44(local_80._4_4_,1);
        uStack_78 = 0x10000;
        local_70 = uStack_120;
        uStack_68 = 0x1000100000001;
        local_60 = 0x100000000;
        uStack_58 = 0x100000000;
        local_50 = 4;
        local_154 = 1;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 1;
        local_144 = 1;
        plVar21 = *(longlong **)(*(longlong *)(local_168 + 0x10) + 8);
        local_198 = &DAT_14a350238;
        local_1a0 = 0;
        local_1a8 = 8;
        (**(code **)(*plVar21 + 0xd8))(plVar21,&local_154,0);
        uVar15 = (**(code **)(*local_140 + 0x58))();
        param_1[0xb] = uVar15;
        param_1[0xc] = uStack_120;
        if (local_108 != (longlong *)0x0) {
          (**(code **)(*local_108 + 0x10))();
        }
        if (local_100 != (longlong *)0x0) {
          (**(code **)(*local_100 + 0x10))();
        }
        FUN_147386c96(local_f8);
        if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_1;
      }
    }
  }
LAB_147386a91:
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 147386a9e FUN_147386a9e body=200 status=ok
// SIG undefined FUN_147386a9e(void)

longlong FUN_147386a9e(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar1 = FUN_14001cc68(0x28,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar1 = FUN_14001cc68(0x28,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar1 = FUN_14001cc68(0x28,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar1 = FUN_14001cc68(0x38,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x58) = lVar1;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar1 = FUN_14001cc68(0x18,0x10);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 0x68) = lVar1;
  FUN_1473881f2(param_1);
  return param_1;
}



// FUNCTION 147386b66 FUN_147386b66 body=191 status=ok
// SIG undefined FUN_147386b66(void)

void FUN_147386b66(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = FUN_147388374(param_1 + 0x30);
  local_30 = FUN_147388374(param_1 + 0x30,param_3);
  local_28 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 == *(undefined8 **)(param_1 + 0x50)) {
    FUN_147388578(param_1 + 0x40,puVar1,&local_38);
    lVar2 = *(longlong *)(param_1 + 0x48);
  }
  else {
    puVar1[2] = (ulonglong)uStack_24 << 0x20;
    *puVar1 = local_38;
    puVar1[1] = local_30;
    lVar2 = *(longlong *)(param_1 + 0x48) + 0x18;
    *(longlong *)(param_1 + 0x48) = lVar2;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x40);
  *(int *)(param_1 + 0x20) =
       (int)((ulonglong)(lVar2 - *(longlong *)(param_1 + 0x40)) >> 3) * -0x55555555;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147386c26 FUN_147386c26 body=110 status=ok
// SIG undefined FUN_147386c26(void)

void FUN_147386c26(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  local_18 = FUN_147388374(param_1 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 == *(undefined8 **)(param_1 + 0x48)) {
    FUN_147388726(param_1 + 0x38,puVar1,&local_18);
  }
  else {
    *puVar1 = local_18;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 8;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147386c96 FUN_147386c96 body=70 status=ok
// SIG undefined FUN_147386c96(void)

void FUN_147386c96(longlong param_1)

{
  FUN_147389494(param_1 + 0x68);
  FUN_1473894ea(param_1 + 0x58);
  FUN_147389528(param_1 + 0x48);
  FUN_147389574(param_1 + 0x38);
  FUN_1473895b2(param_1 + 0x20);
  FUN_147389606(param_1 + 0x10);
  return;
}



// FUNCTION 147386cdc FUN_147386cdc body=89 status=ok
// SIG undefined FUN_147386cdc(void)

longlong * FUN_147386cdc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 2000);
  lVar2 = FUN_14001cc68(0x98,0x10);
  FUN_1473860e0(lVar2,uVar1,param_3);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147386d36 FUN_147386d36 body=104 status=ok
// SIG undefined FUN_147386d36(void)

undefined4 * FUN_147386d36(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14612c64a();
  uVar1 = FUN_14612c64a();
  FUN_1448e935e(param_1,&local_30,uVar1,0);
  FUN_14612c64a();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147386da0 FUN_147386da0 body=148 status=ok
// SIG undefined FUN_147386da0(void)

void FUN_147386da0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = 0x4f1a08f64cae0c3d;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  lVar5 = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 0x38) = (int)*param_2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(int *)(param_1 + 0x40) = (int)lVar5;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  if ((longlong)(int)param_2[1] != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_2 + lVar5) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(*param_2 + lVar5) + 0x88);
      }
      uVar3 = uVar3 ^ (uVar3 >> 2) + uVar3 * 0x40 + lVar6 + 0x9e3779b9;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar5);
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_14020fad6(param_1 + 0x48,L"ShaderBundleNode");
  uVar4 = FUN_147389644(param_1);
  *(undefined8 *)(param_1 + 8) = uVar4;
  return;
}



// FUNCTION 147386e34 FUN_147386e34 body=134 status=ok
// SIG undefined FUN_147386e34(void)

void FUN_147386e34(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x248);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x248) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14738bcee(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x240);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar2 = param_1;
    }
    FUN_14738bcae((longlong)iVar1 * 0x90 + lVar2,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_14738be0e(param_1,param_2,iVar1 - param_2);
  FUN_14738be8a(param_1);
  return;
}



// FUNCTION 147386eba FUN_147386eba body=138 status=ok
// SIG undefined FUN_147386eba(void)

void FUN_147386eba(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_2 + 0x20) + 0xdf) & 1) != 0) {
    local_29 = '\0';
    FUN_1473783fe(param_1,param_2,&local_29);
    if (local_29 == '\0') {
      iVar1 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
        FUN_14736f572((longlong *)(param_1 + 0x60),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) = param_2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


