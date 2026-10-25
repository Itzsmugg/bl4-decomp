// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c8e3d3 FUN_146c8e3d3 body=276 status=ok
// SIG undefined FUN_146c8e3d3(void)

void FUN_146c8e3d3(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

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
  
  dVar3 = *param_5;
  dVar4 = param_5[1];
  dVar5 = param_3[1] - dVar4;
  dVar1 = *param_3 - dVar3;
  dVar9 = param_4[1] - dVar4;
  dVar7 = *param_4 - dVar3;
  dVar2 = dVar1 * dVar1 + dVar5 * dVar5;
  dVar6 = dVar1 * dVar7 + dVar5 * dVar9;
  dVar8 = dVar7 * dVar7 + dVar9 * dVar9;
  dVar1 = dVar1 * (*param_2 - dVar3) + dVar5 * (param_2[1] - dVar4);
  dVar4 = (*param_2 - dVar3) * dVar7 + (param_2[1] - dVar4) * dVar9;
  dVar3 = 1.0 / (dVar2 * dVar8 - dVar6 * dVar6);
  dVar9 = (dVar8 * dVar1 - dVar4 * dVar6) * dVar3;
  dVar3 = (dVar2 * dVar4 - dVar1 * dVar6) * dVar3;
  *param_1 = dVar9;
  param_1[1] = dVar3;
  param_1[2] = (1.0 - dVar9) - dVar3;
  return;
}



// FUNCTION 146c8e4e8 FUN_146c8e4e8 body=71 status=ok
// SIG undefined FUN_146c8e4e8(void)

void FUN_146c8e4e8(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8e578();
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
      FUN_146c8e60c();
      return;
    }
  }
  return;
}



// FUNCTION 146c8e530 FUN_146c8e530 body=71 status=ok
// SIG undefined FUN_146c8e530(void)

void FUN_146c8e530(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8ec6e();
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
      FUN_146c8ecf4();
      return;
    }
  }
  return;
}



// FUNCTION 146c8e578 FUN_146c8e578 body=147 status=ok
// SIG undefined FUN_146c8e578(void)

void FUN_146c8e578(longlong param_1,int param_2)

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



// FUNCTION 146c8e60c FUN_146c8e60c body=62 status=ok
// SIG undefined FUN_146c8e60c(void)

void FUN_146c8e60c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8e64a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 146c8e64a FUN_146c8e64a body=112 status=ok
// SIG undefined FUN_146c8e64a(void)

ulonglong FUN_146c8e64a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c8e684;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_146c8e684:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c8e6c2 FUN_146c8e6c2 body=199 status=ok
// SIG undefined FUN_146c8e6c2(void)

void FUN_146c8e6c2(undefined8 *param_1,int param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pdVar2 = (double *)param_1[1];
  local_2c = param_2;
  (**(code **)param_1[2])(&local_48,((undefined8 *)param_1[2])[1]);
  dVar1 = *pdVar2;
  auVar6._0_8_ = local_48 / dVar1;
  auVar6._8_8_ = 0;
  auVar6 = roundsd(auVar6,auVar6,9);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_40 / dVar1;
  auVar7 = roundsd(ZEXT816(0),auVar5,9);
  auVar8._0_8_ = local_38 / dVar1;
  auVar8._8_8_ = 0;
  auVar5 = roundsd(ZEXT816(0),auVar8,9);
  lVar3 = *(longlong *)*param_1;
  lVar4 = (longlong)param_2;
  *(int *)(lVar3 + lVar4 * 0x14) = param_2;
  *(int *)(lVar3 + 4 + lVar4 * 0x14) = (int)auVar6._0_8_;
  *(int *)(lVar3 + 8 + lVar4 * 0x14) = (int)auVar7._0_8_;
  *(int *)(lVar3 + 0xc + lVar4 * 0x14) = (int)auVar5._0_8_;
  *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x14) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8e78a FUN_146c8e78a body=101 status=ok
// SIG undefined FUN_146c8e78a(void)

int FUN_146c8e78a(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x18) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x18, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 146c8e7f0 FUN_146c8e7f0 body=311 status=ok
// SIG undefined FUN_146c8e7f0(void)

undefined4 * FUN_146c8e7f0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146be646e(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_1448eb174(local_40,0xc,0);
  cVar4 = FUN_146c8e928(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146c8e9ee(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8e928 FUN_146c8e928 body=84 status=ok
// SIG undefined FUN_146c8e928(void)

undefined8 FUN_146c8e928(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_146c8e78a(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_146c8e97c(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 146c8e97c FUN_146c8e97c body=114 status=ok
// SIG undefined FUN_146c8e97c(void)

void FUN_146c8e97c(longlong *param_1,int param_2)

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



// FUNCTION 146c8e9ee FUN_146c8e9ee body=446 status=ok
// SIG undefined FUN_146c8e9ee(void)

void FUN_146c8e9ee(longlong *param_1)

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



// FUNCTION 146c8ebae FUN_146c8ebae body=132 status=ok
// SIG undefined FUN_146c8ebae(void)

void FUN_146c8ebae(longlong param_1,int param_2)

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



// FUNCTION 146c8ec34 FUN_146c8ec34 body=58 status=ok
// SIG undefined FUN_146c8ec34(void)

void FUN_146c8ec34(longlong param_1)

{
  if (param_1 != 0) {
    FUN_141082b5c(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146c8ec6e FUN_146c8ec6e body=132 status=ok
// SIG undefined FUN_146c8ec6e(void)

void FUN_146c8ec6e(longlong param_1,int param_2)

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



// FUNCTION 146c8ecf4 FUN_146c8ecf4 body=62 status=ok
// SIG undefined FUN_146c8ecf4(void)

void FUN_146c8ecf4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8ed32(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c8ed32 FUN_146c8ed32 body=93 status=ok
// SIG undefined FUN_146c8ed32(void)

ulonglong FUN_146c8ed32(uint param_1,uint param_2)

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



// FUNCTION 146c8ed90 FUN_146c8ed90 body=119 status=ok
// SIG undefined FUN_146c8ed90(void)

void FUN_146c8ed90(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = *param_1 * 0x200 + param_1[1];
  uVar10 = (uint)param_3;
  if (uVar8 != uVar10) {
    if (uVar10 <= uVar8) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      lVar9 = (ulonglong)(uVar10 & 0x1ff) * 0x34;
      *(undefined4 *)(lVar2 + 0x30 + lVar9) = *(undefined4 *)(param_2 + 6);
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      uVar7 = param_2[5];
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar9);
      *puVar1 = param_2[4];
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar9);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(undefined8 *)(lVar2 + lVar9) = uVar3;
      ((undefined8 *)(lVar2 + lVar9))[1] = uVar4;
      return;
    }
    FUN_146c8efc6(param_1,param_3 & 0xffffffff);
  }
  FUN_146c8eec2(param_1,param_2);
  return;
}



// FUNCTION 146c8ee08 FUN_146c8ee08 body=184 status=ok
// SIG undefined FUN_146c8ee08(void)

longlong * FUN_146c8ee08(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88 [8];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_3c = 8;
  local_88[0] = FUN_146c8f208();
  local_40 = 1;
  local_30 = 0;
  local_38 = local_88[0];
  FUN_146c8f2fa(param_1 + 0x50,local_88,param_3 & 0xffffffff);
  *param_2 = (ulonglong)(((uint)param_3 & 0x1ff) * 0x60) +
             *(longlong *)(*(longlong *)(param_1 + 0x58) + (param_3 >> 9 & 0x7fffff) * 8);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c8eec2 FUN_146c8eec2 body=259 status=ok
// SIG undefined FUN_146c8eec2(void)

void FUN_146c8eec2(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar9 = *param_1;
  uVar11 = param_1[1];
  if (uVar11 == 0x200) {
    iVar3 = param_1[4];
    if (iVar9 == iVar3 + -1) {
      _Dst = (void *)FUN_14001cc68(0x6800);
      memset(_Dst,0,0x6800);
      lVar10 = 0x14;
      do {
        *(undefined4 *)((longlong)_Dst + lVar10 + -0x14) = 0xffffffff;
        *(undefined1 *)((longlong)_Dst + lVar10 + -0x10) = 0;
        *(undefined8 *)((longlong)_Dst + lVar10 + -0xc) = 0;
        *(undefined4 *)((longlong)_Dst + lVar10 + -4) = 0;
        puVar1 = (undefined4 *)((longlong)_Dst + lVar10);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1 = (undefined4 *)((longlong)_Dst + lVar10 + 0x10);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        lVar10 = lVar10 + 0x34;
      } while (lVar10 != 0x6814);
      param_1[4] = iVar3 + 1U;
      if ((uint)param_1[5] < iVar3 + 1U) {
        FUN_145ad3ea8(param_1 + 2,iVar3);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 8) = _Dst;
      iVar9 = *param_1;
    }
    iVar9 = iVar9 + 1;
    *param_1 = iVar9;
    param_1[1] = 0;
    uVar11 = 0;
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar9 * 8);
  lVar12 = (ulonglong)uVar11 * 0x34;
  *(undefined4 *)(lVar10 + 0x30 + lVar12) = *(undefined4 *)(param_2 + 6);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar12);
  *puVar2 = param_2[4];
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar12);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  *(undefined8 *)(lVar10 + lVar12) = uVar4;
  ((undefined8 *)(lVar10 + lVar12))[1] = uVar5;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c8efc6 FUN_146c8efc6 body=309 status=ok
// SIG undefined FUN_146c8efc6(void)

void FUN_146c8efc6(int *param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uVar4 = param_1[4];
    if ((int)uVar4 < (int)uVar3) {
      do {
        _Dst = (void *)FUN_14001cc68(0x6800);
        memset(_Dst,0,0x6800);
        lVar6 = 0x14;
        do {
          *(undefined4 *)((longlong)_Dst + lVar6 + -0x14) = 0xffffffff;
          *(undefined1 *)((longlong)_Dst + lVar6 + -0x10) = 0;
          *(undefined8 *)((longlong)_Dst + lVar6 + -0xc) = 0;
          *(undefined4 *)((longlong)_Dst + lVar6 + -4) = 0;
          puVar2 = (undefined4 *)((longlong)_Dst + lVar6);
          *puVar2 = 0xffffffff;
          puVar2[1] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[3] = 0xffffffff;
          puVar2 = (undefined4 *)((longlong)_Dst + lVar6 + 0x10);
          *puVar2 = 0xffffffff;
          puVar2[1] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[3] = 0xffffffff;
          lVar6 = lVar6 + 0x34;
        } while (lVar6 != 0x6814);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_145ad3ea8(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    else if (uVar3 < uVar4) {
      FUN_146c8f0fc(plVar1,uVar3,0);
    }
    iVar5 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    iVar7 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar7 = 0;
    }
    *param_1 = iVar7;
    param_1[1] = iVar5;
  }
  return;
}



// FUNCTION 146c8f0fc FUN_146c8f0fc body=106 status=ok
// SIG undefined FUN_146c8f0fc(void)

void FUN_146c8f0fc(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146c8f166(param_1);
    return;
  }
  return;
}



// FUNCTION 146c8f166 FUN_146c8f166 body=63 status=ok
// SIG undefined FUN_146c8f166(void)

void FUN_146c8f166(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8f1a6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c8f1a6 FUN_146c8f1a6 body=97 status=ok
// SIG undefined FUN_146c8f1a6(void)

ulonglong FUN_146c8f1a6(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146c8f208 FUN_146c8f208 body=242 status=ok
// SIG undefined FUN_146c8f208(void)

longlong FUN_146c8f208(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *piVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  iVar1 = param_1[8];
  if ((longlong)iVar1 < 1) {
    iVar1 = param_1[4];
    lVar4 = *(longlong *)(param_1 + 2);
    piVar5 = *(int **)(lVar4 + (longlong)(iVar1 + -1) * 8);
    iVar2 = *piVar5;
    if (iVar2 == param_1[1]) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_145ad3fde(param_1 + 2,iVar1);
        lVar4 = *(longlong *)(param_1 + 2);
      }
      *(undefined8 **)(lVar4 + (longlong)iVar1 * 8) = puVar3;
      piVar5 = *(int **)(*(longlong *)(param_1 + 2) + (longlong)(param_1[4] + -1) * 8);
      FUN_144a127d2(piVar5 + 2,*param_1 * param_1[1],1);
      iVar2 = *piVar5;
    }
    lVar4 = (longlong)*param_1 * (longlong)iVar2 * 4 + *(longlong *)(piVar5 + 2);
    *piVar5 = iVar2 + 1;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 6) + -8 + (longlong)iVar1 * 8);
    param_1[8] = iVar1 + -1;
    FUN_146c8f472(param_1 + 6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return lVar4;
}



// FUNCTION 146c8f2fa FUN_146c8f2fa body=123 status=ok
// SIG undefined FUN_146c8f2fa(void)

void FUN_146c8f2fa(int *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = *param_1 * 0x200 + param_1[1];
  uVar4 = (uint)param_3;
  if (uVar2 != uVar4) {
    if (uVar4 <= uVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      uVar3 = (ulonglong)((uVar4 & 0x1ff) * 0x60);
      FUN_146c8f86e(lVar1 + uVar3,param_2);
      *(undefined8 *)(lVar1 + 0x50 + uVar3) = *(undefined8 *)(param_2 + 0x50);
      *(undefined4 *)(lVar1 + 0x58 + uVar3) = *(undefined4 *)(param_2 + 0x58);
      return;
    }
    FUN_146c8f60c(param_1,param_3 & 0xffffffff);
  }
  FUN_146c8f514(param_1,param_2);
  return;
}



// FUNCTION 146c8f376 FUN_146c8f376 body=116 status=ok
// SIG undefined FUN_146c8f376(void)

void FUN_146c8f376(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_146c8f3ec(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146c8f3ec FUN_146c8f3ec body=133 status=ok
// SIG undefined FUN_146c8f3ec(void)

void FUN_146c8f3ec(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 146c8f472 FUN_146c8f472 body=63 status=ok
// SIG undefined FUN_146c8f472(void)

void FUN_146c8f472(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8f4b2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c8f4b2 FUN_146c8f4b2 body=97 status=ok
// SIG undefined FUN_146c8f4b2(void)

ulonglong FUN_146c8f4b2(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146c8f514 FUN_146c8f514 body=248 status=ok
// SIG undefined FUN_146c8f514(void)

void FUN_146c8f514(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar2 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0xc000);
      memset(_Dst,0,0xc000);
      lVar3 = 0x58;
      do {
        *(undefined8 *)((longlong)_Dst + lVar3 + -0x18) = 0;
        *(undefined8 *)((longlong)_Dst + lVar3 + -0x10) = 0x800000000;
        *(undefined8 *)((longlong)_Dst + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)_Dst + lVar3) = 0;
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != 0xc058);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_145ad4062(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar4 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8);
  lVar5 = (ulonglong)uVar4 * 0x60;
  FUN_146c8f86e(lVar3 + lVar5,param_2);
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(lVar3 + 0x58 + lVar5) = *(undefined4 *)(param_2 + 0x58);
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c8f60c FUN_146c8f60c body=299 status=ok
// SIG undefined FUN_146c8f60c(void)

void FUN_146c8f60c(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uVar3 = param_1[4];
    if ((int)uVar3 < (int)uVar2) {
      do {
        _Dst = (void *)FUN_14001cc68(0xc000);
        memset(_Dst,0,0xc000);
        lVar5 = 0x58;
        do {
          *(undefined8 *)((longlong)_Dst + lVar5 + -0x18) = 0;
          *(undefined8 *)((longlong)_Dst + lVar5 + -0x10) = 0x800000000;
          *(undefined8 *)((longlong)_Dst + lVar5 + -8) = 0;
          *(undefined4 *)((longlong)_Dst + lVar5) = 0;
          lVar5 = lVar5 + 0x60;
        } while (lVar5 != 0xc058);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_145ad4062(plVar1,iVar4);
        }
        *(void **)(*plVar1 + (longlong)iVar4 * 8) = _Dst;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
    else if (uVar2 < uVar3) {
      FUN_146c8f738(plVar1,uVar2,0);
    }
    iVar4 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    iVar6 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    *param_1 = iVar6;
    param_1[1] = iVar4;
  }
  return;
}



// FUNCTION 146c8f738 FUN_146c8f738 body=148 status=ok
// SIG undefined FUN_146c8f738(void)

void FUN_146c8f738(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  if (param_2 < iVar2) {
    lVar4 = (longlong)param_2;
    do {
      lVar3 = *param_1;
      lVar1 = *(longlong *)(lVar3 + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = 0xc000;
        do {
          if (*(longlong *)(lVar1 + -0x20 + lVar3) != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + -0x60;
        } while (lVar3 != 0);
        FUN_1400020a8(lVar1);
        lVar3 = *param_1;
      }
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
      iVar2 = (int)param_1[1];
    } while (lVar4 < iVar2);
  }
  if ((iVar2 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146c8f7cc(param_1);
    return;
  }
  return;
}



// FUNCTION 146c8f7cc FUN_146c8f7cc body=63 status=ok
// SIG undefined FUN_146c8f7cc(void)

void FUN_146c8f7cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c8f80c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c8f80c FUN_146c8f80c body=97 status=ok
// SIG undefined FUN_146c8f80c(void)

ulonglong FUN_146c8f80c(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146c8f86e FUN_146c8f86e body=104 status=ok
// SIG undefined FUN_146c8f86e(void)

void * FUN_146c8f86e(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
    }
    else {
      FUN_146c8f8d6(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 146c8f8d6 FUN_146c8f8d6 body=101 status=ok
// SIG undefined FUN_146c8f8d6(void)

void FUN_146c8f8d6(longlong param_1,uint param_2,int param_3)

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
    FUN_146c8f3ec(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 146c8f944 FUN_146c8f944 body=1936 status=ok
// SIG undefined FUN_146c8f944(void)

void FUN_146c8f944(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  double *pdVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  double *pdVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_178 [32];
  double *local_158;
  double *local_150;
  int *local_148;
  uint local_13c;
  longlong local_138;
  undefined8 *local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [12];
  uint uStack_ec;
  double local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  int local_b8;
  int local_b4;
  int iStack_b0;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pdVar3 = (double *)param_1[1];
  local_138 = *(longlong *)(*(longlong *)*param_1 + (longlong)param_2 * 8);
  local_d8 = (undefined1  [16])0x0;
  FUN_146c900d6(local_d8,*(undefined4 *)(pdVar3 + 1));
  local_148 = *(int **)(*(longlong *)param_1[2] + (longlong)param_2 * 8);
  local_13c = *local_148 * 0x200 + local_148[1];
  if (local_13c != 0) {
    uVar11 = 0;
    local_130 = param_1;
    do {
      lVar17 = (longlong)
               *(int *)(*(longlong *)(*(longlong *)(local_148 + 2) + (ulonglong)(uVar11 >> 9) * 8) +
                       (ulonglong)(uVar11 & 0x1ff) * 4);
      pdVar24 = (double *)(lVar17 * 5);
      local_c8._0_4_ = *(undefined4 *)(*(longlong *)param_1[3] + lVar17 * 0x14);
      (**(code **)param_1[4])(local_f8,((undefined8 *)param_1[4])[1],local_c8);
      if (*(int *)(pdVar3 + 1) < 1) {
        iVar13 = 0;
        uVar23 = 0;
      }
      else {
        local_150 = (double *)(ulonglong)*(byte *)(local_138 + 4);
        lVar17 = 0;
        uVar23 = 0;
        iVar14 = *(int *)(local_138 + 0x10);
        iVar7 = *(int *)(local_138 + 8);
        local_158 = pdVar24;
        iVar21 = *(int *)(local_138 + 0xc);
        do {
          dVar26 = *pdVar3 / (double)(1L << ((char)local_150 + (char)uVar23 & 0x1fU));
          dVar27 = dVar26 * 0.5;
          bVar4 = dVar27 + (double)iVar7 * dVar26 <= (double)local_f8._0_8_;
          bVar5 = (double)iVar21 * dVar26 + dVar27 <= stack0xffffffffffffff10;
          bVar6 = (double)iVar14 * dVar26 + dVar27 <= local_e8;
          iStack_b0 = (uint)bVar4 + (uint)bVar5 * 2 + (uint)bVar6 * 4;
          iVar25 = (uint)bVar6 + iVar14 * 2;
          iVar20 = (uint)bVar5 + iVar21 * 2;
          iVar19 = (uint)bVar4 + iVar7 * 2;
          local_c8._4_4_ = iVar21;
          local_c8._0_4_ = iVar7;
          local_c8._8_4_ = iVar14;
          local_c8._12_4_ = iVar19;
          uStack_ac = 0xffffffff00000000;
          local_b8 = iVar20;
          local_b4 = iVar25;
          iVar13 = FUN_146c90370(local_d8._0_8_ + lVar17,local_c8);
          uVar23 = uVar23 + 1;
          lVar17 = lVar17 + 0x10;
          param_1 = local_130;
          pdVar24 = local_158;
          iVar14 = iVar25;
          iVar7 = iVar19;
          iVar21 = iVar20;
        } while ((longlong)uVar23 < (longlong)*(int *)(pdVar3 + 1));
      }
      *(int *)(*(longlong *)param_1[3] + 0x10 + (longlong)pdVar24 * 4) = iVar13;
      piVar1 = (int *)(*(longlong *)(local_d8._0_8_ + -0x10 + (uVar23 & 0xffffffff) * 0x10) + 0x1c +
                      (longlong)iVar13 * 0x24);
      *piVar1 = *piVar1 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != local_13c);
  }
  _local_f8 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108._0_12_ = ZEXT412(1) << 0x40;
  local_108._12_4_ = 0;
  FUN_146c8ec6e(local_108,0);
  *(longlong *)local_108._0_8_ = local_138;
  lVar17 = (longlong)*(int *)(pdVar3 + 1);
  if (0 < lVar17) {
    local_150 = pdVar3 + 2;
    local_158 = pdVar3 + 9;
    uVar23 = 0;
    do {
      lVar17 = (longlong)*(int *)(local_d8._0_8_ + 8 + uVar23 * 0x10);
      if (lVar17 != 0) {
        piVar22 = *(int **)(local_d8._0_8_ + uVar23 * 0x10);
        piVar1 = piVar22 + lVar17 * 9;
        do {
          if ((longlong)(int)local_108._8_4_ != 0) {
            lVar17 = (longlong)(int)local_108._8_4_ << 3;
            plVar15 = (longlong *)local_108._0_8_;
            do {
              lVar18 = *plVar15;
              if (((*(int *)(lVar18 + 8) == *piVar22) && (*(int *)(lVar18 + 0xc) == piVar22[1])) &&
                 (*(int *)(lVar18 + 0x10) == piVar22[2])) goto LAB_146c8fa61;
              plVar15 = plVar15 + 1;
              lVar17 = lVar17 + -8;
            } while (lVar17 != 0);
          }
          plVar15 = (longlong *)0x0;
LAB_146c8fa61:
          lVar17 = *plVar15;
          uVar11 = piVar22[6];
          local_b8 = (uVar11 >> 2 & 1) + *(int *)(lVar17 + 0x10) * 2;
          local_c8[4] = *(char *)(lVar17 + 4) + '\x01';
          local_c8._0_4_ = 0xffffffff;
          local_c8._8_4_ = (uVar11 & 1) + *(int *)(lVar17 + 8) * 2;
          local_c8._12_4_ = (uVar11 >> 1 & 1) + *(int *)(lVar17 + 0xc) * 2;
          local_a4 = 0xffffffff;
          uStack_a0 = 0xffffffff;
          uStack_9c = 0xffffffff;
          uStack_98 = 0xffffffff;
          local_b4 = -1;
          iStack_b0 = -1;
          uStack_ac = 0xffffffffffffffff;
          EnterCriticalSection((LPCRITICAL_SECTION)param_1[5]);
          uVar10 = FUN_146c08aba(local_150);
          local_c8._0_4_ = uVar10;
          FUN_146c8ed90(local_158,local_c8,uVar10);
          if (uVar23 == *(int *)(pdVar3 + 1) - 1) {
            uVar10 = local_f8._8_4_;
            lVar17 = (longlong)(int)local_f8._8_4_;
            uVar11 = local_f8._8_4_ + 1;
            local_f8._8_4_ = uVar11;
            if (uStack_ec < uVar11) {
              FUN_1447808da(local_f8,uVar10);
            }
            *(undefined4 *)(local_f8._0_8_ + lVar17 * 4) = local_c8._0_4_;
          }
          else {
          }
          uVar11 = local_c8._0_4_ & 0x1ff;
          lVar17 = *(longlong *)((longlong)pdVar3[10] + (ulonglong)((uint)local_c8._0_4_ >> 9) * 8);
          LeaveCriticalSection((LPCRITICAL_SECTION)param_1[5]);
          *(undefined4 *)(*plVar15 + 0x14 + (ulonglong)(uint)piVar22[6] * 4) = local_c8._0_4_;
          piVar22[8] = local_c8._0_4_;
          uVar10 = local_118._8_4_;
          lVar18 = (longlong)(int)local_118._8_4_;
          uVar12 = local_118._8_4_ + 1;
          local_118._8_4_ = uVar12;
          if ((uint)local_118._12_4_ < uVar12) {
            FUN_146c8ec6e(local_118,uVar10);
          }
          *(ulonglong *)(local_118._0_8_ + lVar18 * 8) = (ulonglong)uVar11 * 0x34 + lVar17;
          piVar22 = piVar22 + 9;
        } while (piVar22 != piVar1);
      }
      auVar8 = local_108;
      uVar10 = local_108._12_4_;
      local_108 = local_118;
      local_118._0_8_ = auVar8._0_8_;
      local_118._8_4_ = 0;
      local_118._12_4_ = uVar10;
      if ((int)uVar10 < 0) {
        FUN_146c904a4(local_118);
      }
      uVar23 = uVar23 + 1;
      lVar17 = (longlong)*(int *)(pdVar3 + 1);
    } while ((longlong)uVar23 < lVar17);
  }
  uVar9 = local_d8._0_8_;
  iVar13 = *(int *)(local_d8._0_8_ + -8 + lVar17 * 0x10);
  lVar18 = (longlong)iVar13;
  local_c8 = (undefined1  [16])0x0;
  FUN_146c9015a(local_c8,iVar13);
  EnterCriticalSection((LPCRITICAL_SECTION)param_1[6]);
  if (0 < lVar18) {
    lVar16 = 0;
    do {
      FUN_146c8ee08(pdVar3 + 0xc,local_128,*(undefined4 *)(local_f8._0_8_ + lVar16 * 4));
      *(undefined8 *)(local_c8._0_8_ + lVar16 * 8) = local_128._0_8_;
      lVar16 = lVar16 + 1;
    } while (lVar18 != lVar16);
  }
  lVar17 = uVar9 + lVar17 * 0x10;
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[6]);
  local_128 = (undefined1  [16])0x0;
  FUN_140bfc200(local_128,iVar13,1);
  if (0 < iVar13) {
    lVar16 = 0;
    do {
      iVar13 = *(int *)(*(longlong *)(lVar17 + -0x10) + 0x1c + lVar16);
      if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      if ((int)local_128._12_4_ < iVar13) {
        FUN_1403b10bc(local_128);
      }
      lVar16 = lVar16 + 0x24;
    } while (lVar18 * 0x24 != lVar16);
  }
  uVar11 = *local_148 * 0x200 + local_148[1];
  local_158 = (double *)lVar18;
  local_150 = (double *)lVar17;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      lVar17 = (longlong)
               *(int *)(*(longlong *)(*(longlong *)(local_148 + 2) + (ulonglong)(uVar12 >> 9) * 8) +
                       (ulonglong)(uVar12 & 0x1ff) * 4);
      uVar2 = *(uint *)(*(longlong *)param_1[3] + lVar17 * 0x14);
      lVar18 = (longlong)*(int *)(*(longlong *)param_1[3] + 0x10 + lVar17 * 0x14);
      lVar17 = lVar18 * 0x10;
      plVar15 = (longlong *)(local_128._0_8_ + lVar17);
      iVar13 = *(int *)(local_128._0_8_ + 8 + lVar17);
      *(uint *)(local_128._0_8_ + 8 + lVar17) = iVar13 + 1U;
      if (*(uint *)(local_128._0_8_ + 0xc + lVar17) < iVar13 + 1U) {
        FUN_1446f48e2(plVar15,iVar13);
      }
      *(uint *)(*plVar15 + (longlong)iVar13 * 4) = uVar2;
      *(undefined4 *)
       (*(longlong *)((longlong)pdVar3[0x1a] + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) =
           *(undefined4 *)(*(longlong *)((longlong)local_150 + -0x10) + 0x20 + lVar18 * 0x24);
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  pdVar24 = local_158;
  if (0 < (int)local_158) {
    lVar18 = 0;
    lVar17 = 0;
    do {
      FUN_146c9060a(pdVar3 + 0xc,*(undefined8 *)(local_c8._0_8_ + lVar17 * 8),
                    local_128._0_8_ + lVar18);
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x10;
    } while (pdVar24 != (double *)lVar17);
  }
  FUN_144716727(local_128._0_8_,local_128._8_4_);
  if (local_128._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_c8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_118._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_108._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_f8._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_146c902e6(local_d8._0_8_,local_d8._8_4_);
  if (local_d8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c900d6 FUN_146c900d6 body=130 status=ok
// SIG undefined FUN_146c900d6(void)

void FUN_146c900d6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c901c8(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c9024e(param_1,param_2,iVar1 - param_2);
    FUN_146c902a8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c9015a FUN_146c9015a body=109 status=ok
// SIG undefined FUN_146c9015a(void)

void FUN_146c9015a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c904e8(param_1,iVar1);
    }
    FUN_146c904d4((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146c9056e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c901c8 FUN_146c901c8 body=132 status=ok
// SIG undefined FUN_146c901c8(void)

void FUN_146c901c8(longlong param_1,int param_2)

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



// FUNCTION 146c9024e FUN_146c9024e body=89 status=ok
// SIG undefined FUN_146c9024e(void)

void FUN_146c9024e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_146c902e6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c902a8 FUN_146c902a8 body=62 status=ok
// SIG undefined FUN_146c902a8(void)

void FUN_146c902a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c90312(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146c902e6 FUN_146c902e6 body=43 status=ok
// SIG undefined FUN_146c902e6(void)

void FUN_146c902e6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146c90312 FUN_146c90312 body=93 status=ok
// SIG undefined FUN_146c90312(void)

ulonglong FUN_146c90312(uint param_1,uint param_2)

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



// FUNCTION 146c90370 FUN_146c90370 body=159 status=ok
// SIG undefined FUN_146c90370(void)

int FUN_146c90370(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar7 = *param_1;
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (lVar9 != 0) {
    uVar8 = 0;
    do {
      if (((*(int *)(lVar7 + 0xc + uVar8) == *(int *)((longlong)param_2 + 0xc)) &&
          (*(int *)(lVar7 + 0x10 + uVar8) == *(int *)(param_2 + 2))) &&
         (*(int *)(lVar7 + 0x14 + uVar8) == *(int *)((longlong)param_2 + 0x14))) {
        iVar6 = (int)(uVar8 >> 2) * 0x38e38e39;
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      uVar8 = uVar8 + 0x24;
    } while (lVar9 * 0x24 != uVar8);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146c90410(param_1,iVar2);
    lVar7 = *param_1;
  }
  *(undefined4 *)(lVar7 + 0x20 + lVar9 * 0x24) = *(undefined4 *)(param_2 + 4);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar9 * 0x24);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar7 + lVar9 * 0x24);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  return iVar2;
}



// FUNCTION 146c90410 FUN_146c90410 body=147 status=ok
// SIG undefined FUN_146c90410(void)

void FUN_146c90410(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c904a4 FUN_146c904a4 body=48 status=ok
// SIG undefined FUN_146c904a4(void)

void FUN_146c904a4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146c904d4 FUN_146c904d4 body=19 status=ok
// SIG undefined FUN_146c904d4(void)

void FUN_146c904d4(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 146c904e8 FUN_146c904e8 body=132 status=ok
// SIG undefined FUN_146c904e8(void)

void FUN_146c904e8(longlong param_1,int param_2)

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



// FUNCTION 146c9056e FUN_146c9056e body=62 status=ok
// SIG undefined FUN_146c9056e(void)

void FUN_146c9056e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c905ac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146c905ac FUN_146c905ac body=93 status=ok
// SIG undefined FUN_146c905ac(void)

ulonglong FUN_146c905ac(uint param_1,uint param_2)

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



// FUNCTION 146c9060a FUN_146c9060a body=211 status=ok
// SIG undefined FUN_146c9060a(void)

void FUN_146c9060a(int *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_3 + 1);
  if (*(int *)(param_2 + 0x58) != 0) {
    FUN_146c906de(param_1,param_2);
  }
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(param_2 + 0x58);
      if (iVar3 == *param_1) {
        uVar4 = FUN_146c8f208(param_1);
        iVar3 = *(int *)(param_2 + 0x48);
        *(uint *)(param_2 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_2 + 0x4c) < iVar3 + 1U) {
          FUN_146c8f376(param_2,iVar3);
        }
        lVar5 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar5 = param_2;
        }
        *(undefined8 *)(lVar5 + (longlong)iVar3 * 8) = uVar4;
        lVar5 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar5 = param_2;
        }
        lVar5 = *(longlong *)(lVar5 + (longlong)(*(int *)(param_2 + 0x48) + -1) * 8);
        *(longlong *)(param_2 + 0x50) = lVar5;
        *(undefined4 *)(param_2 + 0x58) = 0;
        iVar3 = 0;
      }
      else {
        lVar5 = *(longlong *)(param_2 + 0x50);
      }
      uVar2 = *(undefined4 *)(*param_3 + uVar6 * 4);
      *(int *)(param_2 + 0x58) = iVar3 + 1;
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 4) = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



// FUNCTION 146c906de FUN_146c906de body=108 status=ok
// SIG undefined FUN_146c906de(void)

void FUN_146c906de(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (1 < *(int *)(param_2 + 9)) {
    lVar2 = 1;
    do {
      puVar1 = (undefined8 *)param_2[8];
      if ((undefined8 *)param_2[8] == (undefined8 *)0x0) {
        puVar1 = param_2;
      }
      FUN_146c9074a(param_1,puVar1[lVar2]);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 9));
  }
  FUN_146c907a8(param_2,1,1);
  puVar1 = (undefined8 *)param_2[8];
  if ((undefined8 *)param_2[8] == (undefined8 *)0x0) {
    puVar1 = param_2;
  }
  param_2[10] = *puVar1;
  *(undefined4 *)(param_2 + 0xb) = 0;
  return;
}



// FUNCTION 146c9074a FUN_146c9074a body=93 status=ok
// SIG undefined FUN_146c9074a(void)

void FUN_146c9074a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146a4b016((longlong *)(param_1 + 0x18),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000146c90793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 146c907a8 FUN_146c907a8 body=129 status=ok
// SIG undefined FUN_146c907a8(void)

void FUN_146c907a8(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c8f376(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x48) = param_2, param_3 == '\x01')) {
      FUN_146c9082a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c9082a FUN_146c9082a body=59 status=ok
// SIG undefined FUN_146c9082a(void)

void FUN_146c9082a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c90866(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_146c8f3ec(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,8);
  return;
}



// FUNCTION 146c90866 FUN_146c90866 body=105 status=ok
// SIG undefined FUN_146c90866(void)

ulonglong FUN_146c90866(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146c908cf FUN_146c908cf body=42 status=ok
// SIG undefined FUN_146c908cf(void)

void FUN_146c908cf(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_146c8ec34(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 146c9091c FUN_146c9091c body=126 status=ok
// SIG undefined FUN_146c9091c(void)

void FUN_146c9091c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 10;
  if (param_2 < 0xb) {
LAB_146c90931:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 0xb) && (*(longlong *)(param_1 + 0x50) == 0)) goto LAB_146c9095a;
    uVar3 = 0;
    if (10 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar2 = uVar2 >> 3;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_146c9095a;
      goto LAB_146c90931;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x50,0,uVar3,8);
LAB_146c9095a:
  *(uint *)(param_1 + 0x5c) = uVar1;
  return;
}



// FUNCTION 146c9099a FUN_146c9099a body=261 status=ok
// SIG undefined FUN_146c9099a(void)

void FUN_146c9099a(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(param_2 >> 9) * 8);
  uVar9 = (ulonglong)((param_2 & 0x1ff) * 0x60);
  lVar5 = *(longlong *)(lVar7 + 0x50 + uVar9);
  if (lVar5 != 0) {
    lVar7 = lVar7 + uVar9;
    iVar2 = *(int *)(lVar7 + 0x48);
    if (0 < (longlong)iVar2) {
      lVar8 = *(longlong *)(lVar7 + 0x40);
      if (*(longlong *)(lVar7 + 0x40) == 0) {
        lVar8 = lVar7;
      }
      piVar1 = (int *)(lVar7 + 0x58);
      uVar9 = 0;
      do {
        piVar4 = param_1;
        if (uVar9 == iVar2 - 1) {
          piVar4 = piVar1;
        }
        if (0 < (longlong)*piVar4) {
          lVar3 = *(longlong *)(lVar8 + uVar9 * 8);
          uVar6 = 0;
          do {
            if (*(int *)(lVar3 + uVar6 * 4) == param_3) {
              iVar2 = *piVar1;
              if (lVar3 == lVar5) {
                if ((int)uVar6 - iVar2 == -1) goto LAB_146c90a3c;
                piVar4 = (int *)(lVar3 + ((longlong)iVar2 + -1) * 4);
              }
              else {
                piVar4 = (int *)(lVar5 + (longlong)iVar2 * 4 + -4);
              }
              *(int *)(lVar3 + uVar6 * 4) = *piVar4;
              *piVar4 = param_3;
              uVar6 = (ulonglong)(*piVar1 - 1);
LAB_146c90a3c:
              *piVar1 = (int)uVar6;
              if ((int)uVar6 != 0) {
                return;
              }
              if (*(int *)(lVar7 + 0x48) < 2) {
                return;
              }
              FUN_146c9074a(param_1,*(undefined8 *)(lVar7 + 0x50));
              *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + -1;
              FUN_146c9082a(lVar7);
              lVar5 = *(longlong *)(lVar7 + 0x40);
              if (*(longlong *)(lVar7 + 0x40) == 0) {
                lVar5 = lVar7;
              }
              *(undefined8 *)(lVar7 + 0x50) =
                   *(undefined8 *)(lVar5 + (longlong)(*(int *)(lVar7 + 0x48) + -1) * 8);
              *(int *)(lVar7 + 0x58) = *param_1;
              return;
            }
            uVar6 = uVar6 + 1;
          } while ((longlong)*piVar4 != uVar6);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != (longlong)iVar2);
    }
  }
  return;
}



// FUNCTION 146c90aa0 FUN_146c90aa0 body=253 status=ok
// SIG undefined FUN_146c90aa0(void)

void FUN_146c90aa0(longlong *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_78 [36];
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = param_3[2];
  if (param_2[2] <= iVar5) {
    iVar3 = param_3[1];
    iVar8 = param_2[2];
    do {
      if (param_2[1] <= iVar3) {
        iVar5 = *param_3;
        iVar9 = param_2[1];
        do {
          iVar7 = *param_2;
          if (*param_2 <= iVar5) {
            do {
              local_54 = iVar7;
              local_50 = iVar9;
              local_4c = iVar8;
              uVar4 = FUN_1448eb174(&local_54,0xc,0);
              iVar5 = FUN_146c8b7be(param_1,uVar4);
              if (((iVar5 != -1) && (lVar6 = (longlong)iVar5 * 0x20 + *param_1, lVar6 != 0)) &&
                 (puVar1 = *(undefined4 **)(lVar6 + 0x10), puVar1 != (undefined4 *)0x0)) {
                FUN_146c90cb4(param_4,*puVar1);
              }
              iVar5 = *param_3;
              bVar2 = iVar7 < iVar5;
              iVar7 = iVar7 + 1;
            } while (bVar2);
            iVar3 = param_3[1];
          }
          bVar2 = iVar9 < iVar3;
          iVar9 = iVar9 + 1;
        } while (bVar2);
        iVar5 = param_3[2];
      }
      bVar2 = iVar8 < iVar5;
      iVar8 = iVar8 + 1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c90b9e FUN_146c90b9e body=181 status=ok
// SIG undefined FUN_146c90b9e(void)

void FUN_146c90b9e(int *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(param_2 >> 9) * 8);
  uVar6 = (ulonglong)((param_2 & 0x1ff) * 0x60);
  if (*(longlong *)(lVar5 + 0x50 + uVar6) != 0) {
    lVar5 = lVar5 + uVar6;
    iVar1 = *(int *)(lVar5 + 0x48);
    if (0 < (longlong)iVar1) {
      uVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar5 + 0x40);
        if (*(longlong *)(lVar5 + 0x40) == 0) {
          lVar3 = lVar5;
        }
        piVar4 = param_1;
        if (uVar6 == iVar1 - 1) {
          piVar4 = (int *)(lVar5 + 0x58);
        }
        iVar2 = *piVar4;
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(lVar3 + uVar6 * 8);
          lVar7 = 0;
          do {
            FUN_146c90d0c(param_3,*(undefined4 *)(lVar3 + lVar7));
            lVar7 = lVar7 + 4;
          } while ((longlong)iVar2 * 4 != lVar7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != (longlong)iVar1);
    }
  }
  return;
}



// FUNCTION 146c90c54 FUN_146c90c54 body=96 status=ok
// SIG undefined FUN_146c90c54(void)

void FUN_146c90c54(longlong param_1,int param_2)

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



// FUNCTION 146c90cb4 FUN_146c90cb4 body=88 status=ok
// SIG undefined FUN_146c90cb4(void)

void FUN_146c90cb4(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x50) + (ulonglong)(param_2 >> 9) * 8);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_146c90d7e(plVar2,iVar1);
  }
  *(ulonglong *)(*plVar2 + (longlong)iVar1 * 8) = lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x34;
  return;
}



// FUNCTION 146c90d0c FUN_146c90d0c body=112 status=ok
// SIG undefined FUN_146c90d0c(void)

void FUN_146c90d0c(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  cVar3 = (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c90d7e FUN_146c90d7e body=132 status=ok
// SIG undefined FUN_146c90d7e(void)

void FUN_146c90d7e(longlong param_1,int param_2)

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



// FUNCTION 146c90f06 FUN_146c90f06 body=106 status=ok
// SIG undefined FUN_146c90f06(void)

void FUN_146c90f06(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *param_3;
  local_28 = *param_2;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_28,&local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c90f72 FUN_146c90f72 body=95 status=ok
// SIG undefined FUN_146c90f72(void)

ulonglong FUN_146c90f72(longlong param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar3 = uVar4 * 4;
    uVar2 = 0;
    do {
      if (*(int *)(param_1 + uVar2 * 4) == *param_2) {
        if ((int)uVar2 != -1) {
          uVar4 = uVar2 & 0xffffffff;
          goto LAB_146c90fb2;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 0xc) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10) < iVar1 + 1U) {
    FUN_146c90fd2(param_1,iVar1);
  }
  *(int *)(param_1 + uVar4 * 4) = *param_2;
LAB_146c90fb2:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146c90fd2 FUN_146c90fd2 body=31 status=ok
// SIG undefined FUN_146c90fd2(void)

void FUN_146c90fd2(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    *(undefined4 *)(param_1 + 0x10) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146c90ff2 FUN_146c90ff2 body=48 status=ok
// SIG undefined FUN_146c90ff2(void)

void FUN_146c90ff2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146c91022 FUN_146c91022 body=48 status=ok
// SIG undefined FUN_146c91022(void)

void FUN_146c91022(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 146c91052 FUN_146c91052 body=132 status=ok
// SIG undefined FUN_146c91052(void)

void FUN_146c91052(longlong param_1,int param_2)

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



// FUNCTION 146c910d8 FUN_146c910d8 body=147 status=ok
// SIG undefined FUN_146c910d8(void)

void FUN_146c910d8(longlong param_1,int param_2)

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



// FUNCTION 146c9116c FUN_146c9116c body=62 status=ok
// SIG undefined FUN_146c9116c(void)

void FUN_146c9116c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c911aa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146c911aa FUN_146c911aa body=93 status=ok
// SIG undefined FUN_146c911aa(void)

ulonglong FUN_146c911aa(uint param_1,uint param_2)

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



// FUNCTION 146c91208 FUN_146c91208 body=90 status=ok
// SIG undefined FUN_146c91208(void)

void FUN_146c91208(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x48) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x48);
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar2) * 0x48);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146c91262 FUN_146c91262 body=62 status=ok
// SIG undefined FUN_146c91262(void)

void FUN_146c91262(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c912a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146c912a0 FUN_146c912a0 body=112 status=ok
// SIG undefined FUN_146c912a0(void)

ulonglong FUN_146c912a0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146c912da;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_146c912da:
  return param_2 & 0xffffffff;
}



// FUNCTION 146c91310 FUN_146c91310 body=174 status=ok
// SIG undefined FUN_146c91310(void)

void FUN_146c91310(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_1[2];
  dVar2 = param_1[1];
  dVar3 = param_1[4];
  dVar4 = param_1[5];
  dVar5 = (param_3[2] - dVar1) * dVar4 +
          (*param_3 - *param_1) * param_1[3] + (param_3[1] - dVar2) * dVar3;
  if (0.0 <= dVar5) {
    *param_2 = *param_1 + param_1[3] * dVar5;
    param_2[1] = dVar2 + dVar3 * dVar5;
    param_2[2] = dVar1 + dVar4 * dVar5;
  }
  else {
    param_2[2] = param_1[2];
    dVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = dVar1;
  }
  return;
}



// FUNCTION 146c913be FUN_146c913be body=147 status=ok
// SIG undefined FUN_146c913be(void)

void FUN_146c913be(longlong param_1,int param_2)

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



// FUNCTION 146c91452 FUN_146c91452 body=930 status=ok
// SIG undefined FUN_146c91452(void)

double FUN_146c91452(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
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
  
  dVar4 = param_1[2] - param_2[2];
  dVar7 = param_1[1] - param_2[1];
  dVar6 = *param_1 - *param_2;
  dVar13 = param_1[5] * param_2[5] + param_1[3] * param_2[3] + param_1[4] * param_2[4];
  dVar10 = -dVar13;
  dVar11 = dVar6 * param_1[3] + dVar7 * param_1[4] + dVar4 * param_1[5];
  dVar12 = param_2[5] * dVar4 + param_2[3] * dVar6 + param_2[4] * dVar7;
  dVar5 = -dVar12;
  dVar4 = dVar4 * dVar4 + dVar6 * dVar6 + dVar7 * dVar7;
  dVar6 = 1.0 - dVar13 * dVar13;
  uVar3 = -(ulonglong)(-dVar6 <= dVar6);
  dVar6 = (double)(~uVar3 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar3);
  if (1e-08 <= dVar6) {
    dVar8 = dVar13 * dVar12 - dVar11;
    dVar1 = dVar10 * dVar11 + dVar12;
    dVar7 = param_2[6];
    dVar2 = dVar6 * dVar7;
    dVar9 = dVar7;
    if (dVar8 < 0.0) {
      if (dVar1 <= -dVar2) {
        dVar11 = dVar13 * dVar7 + dVar11;
        if (dVar11 < 0.0) {
          dVar8 = -dVar11;
          dVar9 = -dVar7;
          dVar11 = dVar4 + (dVar8 * dVar11 - ((dVar5 + dVar5) - dVar7) * dVar7);
          goto LAB_146c916b8;
        }
      }
      else if ((dVar2 < dVar1) && (dVar11 = dVar10 * dVar7 + dVar11, dVar11 < 0.0))
      goto LAB_146c915c7;
      dVar9 = -dVar7;
      if ((dVar9 <= dVar12) && (dVar9 = dVar12, dVar7 < dVar12)) {
        dVar9 = dVar7;
      }
      dVar11 = (dVar5 + dVar5 + dVar9) * dVar9 + dVar4;
      dVar8 = 0.0;
      goto LAB_146c916b8;
    }
    if (-dVar2 <= dVar1) {
      if (dVar1 <= dVar2) {
        dVar8 = dVar8 * (1.0 / dVar6);
        dVar9 = dVar1 * (1.0 / dVar6);
        dVar11 = dVar4 + (dVar11 + dVar11 + dVar10 * dVar9 + dVar8) * dVar8 +
                         (dVar5 + dVar5 + dVar10 * dVar8 + dVar9) * dVar9;
        goto LAB_146c916b8;
      }
      goto LAB_146c915bd;
    }
    dVar9 = -dVar7;
    dVar11 = dVar13 * dVar7 + dVar11;
    if (0.0 <= dVar11) goto LAB_146c916a8;
    dVar8 = -dVar11;
    dVar11 = (dVar5 + dVar5 + dVar9) * dVar9 - dVar11 * dVar11;
  }
  else {
    dVar9 = (double)(~-(ulonglong)(dVar13 < 0.0) & (ulonglong)param_2[6] |
                    (ulonglong)-param_2[6] & -(ulonglong)(dVar13 < 0.0));
LAB_146c915bd:
    dVar11 = dVar10 * dVar9 + dVar11;
    if (0.0 <= dVar11) {
LAB_146c916a8:
      dVar8 = 0.0;
      dVar11 = (dVar5 + dVar5 + dVar9) * dVar9;
    }
    else {
LAB_146c915c7:
      dVar8 = -dVar11;
      dVar11 = (dVar5 + dVar5 + dVar9) * dVar9 - dVar11 * dVar11;
    }
  }
  dVar11 = dVar11 + dVar4;
LAB_146c916b8:
  *param_3 = dVar8;
  *param_4 = dVar9;
  dVar4 = 0.0;
  if (0.0 <= dVar11) {
    dVar4 = dVar11;
  }
  return dVar4;
}



// FUNCTION 146c917f4 FUN_146c917f4 body=68 status=ok
// SIG undefined FUN_146c917f4(void)

void FUN_146c917f4(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146c91b90();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146c91838 FUN_146c91838 body=175 status=ok
// SIG undefined FUN_146c91838(void)

undefined8 FUN_146c91838(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = *param_1;
  if (iVar3 < 1) {
    if (*param_2 == -1) {
      *param_2 = param_3;
      return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
    }
  }
  else {
    lVar5 = (longlong)*(int *)(**(longlong **)(param_1 + 4) + (longlong)param_3 * 4);
    if (*param_2 == -1) {
      param_2[1] = param_3;
      *param_2 = param_3;
      lVar2 = *(longlong *)**(undefined8 **)(param_1 + 2);
      param_2[2] = *(int *)(lVar2 + lVar5 * 4);
      uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (*param_1 < 2) {
        return uVar4;
      }
      param_2[3] = *(int *)(*(longlong *)(**(longlong **)(param_1 + 2) + 0x10) + lVar5 * 4);
      return uVar4;
    }
    fVar1 = *(float *)(*(longlong *)**(undefined8 **)(param_1 + 2) + lVar5 * 4);
    if ((float)param_2[2] <= fVar1 && fVar1 != (float)param_2[2]) {
      param_2[2] = (int)fVar1;
      *param_2 = param_3;
      iVar3 = *param_1;
    }
    if ((1 < iVar3) &&
       (fVar1 = *(float *)(*(longlong *)(**(longlong **)(param_1 + 2) + 0x10) + lVar5 * 4),
       (float)param_2[3] <= fVar1 && fVar1 != (float)param_2[3])) {
      param_2[3] = (int)fVar1;
      param_2[1] = param_3;
    }
  }
  return 0;
}



// FUNCTION 146c918e8 FUN_146c918e8 body=286 status=ok
// SIG undefined FUN_146c918e8(void)

ulonglong FUN_146c918e8(undefined8 *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double *pdVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_58 [40];
  undefined1 local_30 [7];
  char local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)*param_1;
  lVar9 = (longlong)param_2;
  if (*(char *)(lVar3 + lVar9) == '\0') {
    puVar4 = (undefined8 *)param_1[3];
    iVar2 = *(int *)puVar4[3];
    dVar1 = *(double *)puVar4[2];
    pdVar5 = (double *)puVar4[1];
    lVar6 = **(longlong **)*puVar4;
    auVar12._0_8_ = (*(double *)(lVar6 + lVar9 * 0x18) - *pdVar5) / dVar1;
    auVar12._8_8_ = 0;
    auVar12 = roundpd(auVar12,auVar12,1);
    lVar10 = (longlong)(iVar2 / 2);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (*(double *)(lVar6 + 8 + lVar9 * 0x18) - pdVar5[1]) / dVar1;
    auVar13 = roundpd(auVar13,auVar13,1);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (*(double *)(lVar6 + 0x10 + lVar9 * 0x18) - pdVar5[2]) / dVar1;
    auVar11 = roundpd(auVar11,auVar11,1);
    local_28 = (longlong)auVar11._0_8_ + lVar10 +
               ((longlong)auVar13._0_8_ + lVar10 +
               ((longlong)auVar12._0_8_ + lVar10) * (longlong)iVar2) * (longlong)iVar2;
    local_29 = '\0';
    uVar7 = FUN_146c91cd4(param_1[2],local_30,&local_28,&local_29);
    if (local_29 == '\0') {
      *(undefined1 *)(lVar3 + lVar9) = 1;
    }
    uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_29) ^ 1;
  }
  else {
    uVar8 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c91a08 FUN_146c91a08 body=68 status=ok
// SIG undefined FUN_146c91a08(void)

void FUN_146c91a08(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146c91a4c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146c91a4c FUN_146c91a4c body=322 status=ok
// SIG undefined FUN_146c91a4c(void)

void FUN_146c91a4c(longlong *param_1)

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



// FUNCTION 146c91b90 FUN_146c91b90 body=322 status=ok
// SIG undefined FUN_146c91b90(void)

void FUN_146c91b90(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 146c91cd4 FUN_146c91cd4 body=305 status=ok
// SIG undefined FUN_146c91cd4(void)

undefined4 *
FUN_146c91cd4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403d57ba(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  local_68 = param_4;
  cVar2 = FUN_1403d5728(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1403d5990(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c91e06 FUN_146c91e06 body=181 status=ok
// SIG undefined FUN_146c91e06(void)

longlong FUN_146c91e06(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_146c91e9e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146c91ebc(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146c91e9e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146c91ebc FUN_146c91ebc body=281 status=ok
// SIG undefined FUN_146c91ebc(void)

undefined4 * FUN_146c91ebc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_146c91fd6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  *(undefined4 *)(local_40 + 2) = 0xff7fffff;
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xff7fffff;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_146c920bc(param_1,param_3,local_40,local_48);
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
      FUN_146c921b8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c91fd6 FUN_146c91fd6 body=229 status=ok
// SIG undefined FUN_146c91fd6(void)

int * FUN_146c91fd6(longlong *param_1,int *param_2)

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



// FUNCTION 146c920bc FUN_146c920bc body=137 status=ok
// SIG undefined FUN_146c920bc(void)

undefined8 FUN_146c920bc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146c92146((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146c92146 FUN_146c92146 body=114 status=ok
// SIG undefined FUN_146c92146(void)

void FUN_146c92146(longlong *param_1,int param_2)

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



// FUNCTION 146c921b8 FUN_146c921b8 body=450 status=ok
// SIG undefined FUN_146c921b8(void)

void FUN_146c921b8(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146c9237b FUN_146c9237b body=633 status=ok
// SIG undefined FUN_146c9237b(void)

void FUN_146c9237b(longlong param_1,uint param_2,longlong *param_3)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar15 = &local_348;
    do {
      piVar4 = (int *)*plVar15;
      piVar8 = (int *)plVar15[1];
      iVar10 = (int)plVar15[2];
      uVar6 = (int)((ulonglong)((longlong)piVar8 - (longlong)piVar4) >> 2) + 1;
      piVar12 = piVar8;
      piVar11 = piVar4;
      if (iVar10 != 0) {
LAB_146c92441:
        if (8 < (int)uVar6) {
          iVar2 = piVar4[uVar6 >> 1];
          piVar4[uVar6 >> 1] = *piVar4;
          *piVar4 = iVar2;
          piVar7 = piVar8 + 1;
          piVar5 = piVar4;
          do {
            piVar3 = piVar5 + 1;
            piVar9 = piVar5 + 1;
            do {
              piVar5 = piVar9;
              piVar13 = piVar3;
              if (piVar8 < piVar5) break;
              fVar16 = *(float *)(*param_3 + (longlong)*piVar4 * 4);
              pfVar1 = (float *)(*param_3 + (longlong)*piVar5 * 4);
              piVar3 = piVar13 + 1;
              piVar9 = piVar5 + 1;
            } while (fVar16 < *pfVar1 || fVar16 == *pfVar1);
            piVar3 = piVar7 + -2;
            do {
              piVar9 = piVar7;
              piVar14 = piVar3;
              piVar7 = piVar9 + -1;
              if (piVar7 <= piVar4) break;
              fVar16 = *(float *)(*param_3 + (longlong)*piVar7 * 4);
              pfVar1 = (float *)(*param_3 + (longlong)*piVar4 * 4);
              piVar3 = piVar14 + -1;
            } while (fVar16 < *pfVar1 || fVar16 == *pfVar1);
            if (piVar7 < piVar5) goto LAB_146c924d6;
            iVar2 = *piVar5;
            *piVar5 = *piVar7;
            *piVar7 = iVar2;
          } while( true );
        }
        if (piVar4 < piVar8) {
          do {
            piVar12 = piVar4;
            if (piVar4 + 1 <= piVar8) {
              iVar10 = *piVar4;
              piVar11 = piVar4 + 1;
              piVar7 = piVar4;
              do {
                fVar16 = *(float *)(*param_3 + (longlong)iVar10 * 4);
                pfVar1 = (float *)(*param_3 + (longlong)*piVar11 * 4);
                piVar12 = piVar11;
                iVar2 = *piVar11;
                if (fVar16 < *pfVar1 || fVar16 == *pfVar1) {
                  piVar12 = piVar7;
                  iVar2 = iVar10;
                }
                iVar10 = iVar2;
                piVar11 = piVar11 + 1;
                piVar7 = piVar12;
              } while (piVar11 <= piVar8);
            }
            iVar10 = *piVar12;
            *piVar12 = *piVar8;
            *piVar8 = iVar10;
            piVar8 = piVar8 + -1;
          } while (piVar4 < piVar8);
        }
        goto LAB_146c925c1;
      }
LAB_146c925db:
      local_358 = (undefined4)*param_3;
      uStack_354 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_350 = (undefined4)param_3[1];
      uStack_34c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_146c925f5(piVar4,uVar6,&local_358);
LAB_146c925c1:
      plVar15 = plVar15 + -3;
    } while (&local_348 <= plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146c924d6:
  iVar2 = *piVar4;
  *piVar4 = *piVar7;
  *piVar7 = iVar2;
  iVar10 = iVar10 + -1;
  piVar9 = piVar9 + -2;
  if ((longlong)piVar14 - (longlong)piVar11 < (longlong)piVar12 - (longlong)piVar13) {
    if (piVar5 < piVar8) {
      *plVar15 = (longlong)piVar5;
      plVar15[1] = (longlong)piVar8;
      *(int *)(plVar15 + 2) = iVar10;
      plVar15 = plVar15 + 3;
    }
    piVar13 = piVar4;
    if (piVar7 <= piVar4 + 1) goto LAB_146c925c1;
  }
  else {
    if (piVar4 + 1 < piVar7) {
      *plVar15 = (longlong)piVar4;
      plVar15[1] = (longlong)piVar9;
      *(int *)(plVar15 + 2) = iVar10;
      plVar15 = plVar15 + 3;
    }
    piVar4 = piVar5;
    piVar9 = piVar8;
    piVar14 = piVar8;
    if (piVar8 <= piVar5) goto LAB_146c925c1;
  }
  uVar6 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar13) >> 2) + 1;
  piVar8 = piVar9;
  piVar12 = piVar14;
  piVar11 = piVar13;
  if (iVar10 == 0) goto LAB_146c925db;
  goto LAB_146c92441;
}



// FUNCTION 146c925f5 FUN_146c925f5 body=332 status=ok
// SIG undefined FUN_146c925f5(void)

void FUN_146c925f5(undefined4 *param_1,uint param_2,longlong *param_3)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x000146c92618:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        lVar4 = *param_3;
        if ((iVar9 < (int)param_2) &&
           (fVar2 = *(float *)(lVar4 + (longlong)(int)param_1[iVar9] * 4),
           pfVar1 = (float *)(lVar4 + (longlong)(int)param_1[iVar8] * 4),
           fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
          iVar8 = iVar9;
        }
        iVar9 = param_1[iVar5];
        fVar2 = *(float *)(lVar4 + (longlong)iVar9 * 4);
        pfVar1 = (float *)(lVar4 + (longlong)(int)param_1[iVar8] * 4);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          param_1[iVar5] = param_1[iVar8];
          param_1[iVar8] = iVar9;
          iVar5 = iVar8;
          goto joined_r0x000146c92618;
        }
      }
      bVar11 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar8 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            lVar4 = *param_3;
            iVar9 = iVar8;
            if (((longlong)iVar5 < (longlong)uVar7) &&
               (fVar2 = *(float *)(lVar4 + (longlong)(int)param_1[iVar5] * 4),
               pfVar1 = (float *)(lVar4 + (longlong)(int)param_1[iVar8] * 4),
               fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
              iVar9 = iVar5;
            }
            iVar5 = param_1[iVar10];
            fVar2 = *(float *)(lVar4 + (longlong)iVar5 * 4);
            pfVar1 = (float *)(lVar4 + (longlong)(int)param_1[iVar9] * 4);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            param_1[iVar10] = param_1[iVar9];
            param_1[iVar9] = iVar5;
            iVar5 = iVar9 * 2;
            iVar8 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar8 < (longlong)uVar7);
          uVar3 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar3;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 146c92742 FUN_146c92742 body=52 status=ok
// SIG undefined FUN_146c92742(void)

void FUN_146c92742(longlong *param_1)

{
  FUN_146c92776();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c92776 FUN_146c92776 body=89 status=ok
// SIG undefined FUN_146c92776(void)

void FUN_146c92776(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 146c927d0 FUN_146c927d0 body=259 status=ok
// SIG undefined FUN_146c927d0(void)

void FUN_146c927d0(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar9 = *param_1;
  uVar11 = param_1[1];
  if (uVar11 == 0x200) {
    iVar3 = param_1[4];
    if (iVar9 == iVar3 + -1) {
      _Dst = (void *)FUN_14001cc68(0x6800);
      memset(_Dst,0,0x6800);
      lVar10 = 0x14;
      do {
        *(undefined4 *)((longlong)_Dst + lVar10 + -0x14) = 0xffffffff;
        *(undefined1 *)((longlong)_Dst + lVar10 + -0x10) = 0;
        *(undefined8 *)((longlong)_Dst + lVar10 + -0xc) = 0;
        *(undefined4 *)((longlong)_Dst + lVar10 + -4) = 0;
        puVar1 = (undefined4 *)((longlong)_Dst + lVar10);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1 = (undefined4 *)((longlong)_Dst + lVar10 + 0x10);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        lVar10 = lVar10 + 0x34;
      } while (lVar10 != 0x6814);
      param_1[4] = iVar3 + 1U;
      if ((uint)param_1[5] < iVar3 + 1U) {
        FUN_1458483b0(param_1 + 2,iVar3);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 8) = _Dst;
      iVar9 = *param_1;
    }
    iVar9 = iVar9 + 1;
    *param_1 = iVar9;
    param_1[1] = 0;
    uVar11 = 0;
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar9 * 8);
  lVar12 = (ulonglong)uVar11 * 0x34;
  *(undefined4 *)(lVar10 + 0x30 + lVar12) = *(undefined4 *)(param_2 + 6);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar12);
  *puVar2 = param_2[4];
  puVar2[1] = uVar8;
  puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar12);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  *(undefined8 *)(lVar10 + lVar12) = uVar4;
  ((undefined8 *)(lVar10 + lVar12))[1] = uVar5;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146c928d4 FUN_146c928d4 body=306 status=ok
// SIG undefined FUN_146c928d4(void)

void FUN_146c928d4(int *param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    uVar4 = param_1[4];
    if ((int)uVar4 < (int)uVar3) {
      do {
        _Dst = (void *)FUN_14001cc68(0x6800);
        memset(_Dst,0,0x6800);
        lVar6 = 0x14;
        do {
          *(undefined4 *)((longlong)_Dst + lVar6 + -0x14) = 0xffffffff;
          *(undefined1 *)((longlong)_Dst + lVar6 + -0x10) = 0;
          *(undefined8 *)((longlong)_Dst + lVar6 + -0xc) = 0;
          *(undefined4 *)((longlong)_Dst + lVar6 + -4) = 0;
          puVar2 = (undefined4 *)((longlong)_Dst + lVar6);
          *puVar2 = 0xffffffff;
          puVar2[1] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[3] = 0xffffffff;
          puVar2 = (undefined4 *)((longlong)_Dst + lVar6 + 0x10);
          *puVar2 = 0xffffffff;
          puVar2[1] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[3] = 0xffffffff;
          lVar6 = lVar6 + 0x34;
        } while (lVar6 != 0x6814);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_1458483b0(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    else if (uVar3 < uVar4) {
      FUN_146c92a06(plVar1,uVar3);
    }
    iVar5 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    iVar7 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar7 = 0;
    }
    *param_1 = iVar7;
    param_1[1] = iVar5;
  }
  return;
}



// FUNCTION 146c92a06 FUN_146c92a06 body=76 status=ok
// SIG undefined FUN_146c92a06(void)

void FUN_146c92a06(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)uVar1) {
    uVar3 = (ulonglong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 1);
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 146c92a52 FUN_146c92a52 body=145 status=ok
// SIG undefined FUN_146c92a52(void)

void FUN_146c92a52(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x200;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e20];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x200,8);
  }
  uVar2 = 0x7fffffff;
  if (0x3f < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146c92ae4 FUN_146c92ae4 body=132 status=ok
// SIG undefined FUN_146c92ae4(void)

void FUN_146c92ae4(longlong param_1,int param_2)

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



// FUNCTION 146c92b6a FUN_146c92b6a body=59 status=ok
// SIG undefined FUN_146c92b6a(void)

void FUN_146c92b6a(longlong *param_1)

{
  FUN_146c93168(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c92ba6 FUN_146c92ba6 body=87 status=ok
// SIG undefined FUN_146c92ba6(void)

void FUN_146c92ba6(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_146c93138(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_146c93168(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_146c93198(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 146c92bfe FUN_146c92bfe body=1336 status=ok
// SIG undefined FUN_146c92bfe(void)

void FUN_146c92bfe(longlong *param_1,longlong *param_2,int param_3,double *param_4)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  bool bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double *pdVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulonglong uVar23;
  undefined1 auVar22 [16];
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  ulonglong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  ulonglong uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_188 [32];
  double *local_168;
  int local_154;
  ulonglong local_150;
  double *local_148;
  double *local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  dVar2 = *param_4;
  dVar26 = param_4[1];
  uVar24 = SUB84(dVar26,0);
  uVar25 = (undefined4)((ulonglong)dVar26 >> 0x20);
  dVar37 = param_4[2];
  uVar29 = SUB84(dVar37,0);
  uVar30 = (undefined4)((ulonglong)dVar37 >> 0x20);
  uVar31 = 0;
  uVar32 = 0;
  dVar3 = param_4[3];
  uVar33 = SUB84(dVar3,0);
  uVar34 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uVar35 = 0;
  uVar36 = 0;
  uVar28 = 0;
  dVar26 = (dVar26 + dVar3) * 0.5;
  dVar37 = (dVar2 + dVar37) * 0.5;
  uVar39 = 0;
  pdVar19 = (double *)((longlong)param_3 * 0x10 + *param_2);
  uVar18 = 0;
  local_140 = param_4;
  local_118 = dVar37;
  local_110 = dVar26;
  if (0 < (int)param_1[4]) {
    iVar14 = 0;
    uVar40 = SUB84(dVar2,0);
    uVar41 = (int)((ulonglong)dVar2 >> 0x20);
    do {
      lVar11 = *param_1;
      lVar13 = (longlong)(int)uVar18 * 0x10;
      local_118 = dVar37;
      local_110 = dVar26;
      if (-2 < *(int *)(lVar11 + lVar13)) {
        puVar10 = (undefined8 *)(lVar11 + lVar13);
        lVar11 = 0;
        do {
          if (*(int *)((longlong)puVar10 + lVar11 * 4) == -1) {
            *(int *)((longlong)puVar10 + lVar11 * 4) = param_3;
            goto LAB_146c9309e;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
        local_108 = *puVar10;
        uStack_100 = puVar10[1];
        lVar11 = 0;
        do {
          *(undefined4 *)(*param_1 + lVar13 + lVar11 * 4) = 0xfffffffe;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
        local_154 = param_3;
        local_148 = pdVar19;
        if (iVar14 + 1 < (int)param_1[4]) {
          lVar11 = 0;
          do {
            iVar4 = *(int *)((longlong)&local_108 + lVar11 * 4);
            lVar12 = (longlong)iVar4 * 0x10;
            lVar12 = (ulonglong)(dVar37 < *(double *)(*param_2 + lVar12)) +
                     (ulonglong)(dVar26 < *(double *)(*param_2 + 8 + lVar12)) * 2;
            lVar16 = *param_1;
            iVar5 = *(int *)(lVar16 + lVar13 + lVar12 * 4);
            if (iVar5 == -2) {
              iVar5 = (int)param_1[1];
              lVar15 = (longlong)iVar5;
              *(uint *)(param_1 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
                FUN_146c931c8(param_1,iVar5);
                lVar16 = *param_1;
              }
              puVar1 = (undefined4 *)(lVar16 + lVar15 * 0x10);
              *puVar1 = 0xffffffff;
              puVar1[1] = 0xffffffff;
              puVar1[2] = 0xffffffff;
              puVar1[3] = 0xffffffff;
              *(int *)(*param_1 + lVar13 + lVar12 * 4) = -3 - iVar5;
              lVar16 = *param_1;
            }
            else {
              lVar15 = (longlong)(-3 - iVar5);
            }
            lVar16 = lVar15 * 0x10 + lVar16;
            lVar12 = 0;
            do {
              if (*(int *)(lVar16 + lVar12 * 4) == -1) {
                *(int *)(lVar16 + lVar12 * 4) = iVar4;
                break;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != 4);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 4);
        }
        else {
          lVar11 = 0;
          do {
            uVar18 = (ulonglong)*(int *)((longlong)&local_108 + lVar11 * 4);
            pdVar19 = (double *)(*param_2 + uVar18 * 0x10);
            dVar2 = *pdVar19;
            dStack_120 = pdVar19[1];
            bVar9 = dVar26 < dStack_120;
            uVar17 = (ulonglong)((uint)(dVar37 < dVar2) + (uint)bVar9 * 2);
            lVar12 = *param_1;
            iVar4 = *(int *)(lVar12 + lVar13 + uVar17 * 4);
            local_128 = dVar2;
            if (iVar4 == -2) {
              iVar4 = (int)param_1[1];
              lVar16 = (longlong)iVar4;
              *(uint *)(param_1 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
                local_150 = uVar18;
                FUN_146c931c8(param_1,iVar4);
                lVar12 = *param_1;
                uVar18 = local_150;
              }
              puVar1 = (undefined4 *)(lVar12 + lVar16 * 0x10);
              *puVar1 = 0xffffffff;
              puVar1[1] = 0xffffffff;
              puVar1[2] = 0xffffffff;
              puVar1[3] = 0xffffffff;
              *(int *)(*param_1 + lVar13 + uVar17 * 4) = -3 - iVar4;
              lVar12 = *param_1;
            }
            else {
              lVar16 = (longlong)(-3 - iVar4);
            }
            local_130 = (local_140[3] - local_140[1]) * 0.5 *
                        ((double)(byte)(bVar9 * '\x02') + -0.5) + dVar26;
            local_138 = (local_140[2] - *local_140) * 0.5 *
                        (double)(~-(ulonglong)(dVar37 < dVar2) & 0xbfe0000000000000 |
                                -(ulonglong)(dVar37 < dVar2) & 0x3fe0000000000000) + dVar37;
            local_168 = &local_138;
            FUN_146c9324e(param_1,uVar18 & 0xffffffff,&local_128,lVar16 * 0x10 + lVar12);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 4);
        }
        lVar11 = *param_1;
        pdVar19 = local_148;
        param_3 = local_154;
      }
      dVar2 = *pdVar19;
      dVar3 = pdVar19[1];
      lVar12 = (ulonglong)(dVar37 < dVar2) + (ulonglong)(dVar26 < dVar3) * 2;
      iVar4 = *(int *)(lVar11 + lVar13 + lVar12 * 4);
      if (iVar4 == -2) {
        uVar6 = *(uint *)(param_1 + 1);
        uVar18 = (ulonglong)uVar6;
        *(uint *)(param_1 + 1) = uVar6 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar6 + 1) {
          FUN_146c931c8(param_1,uVar18);
          lVar11 = *param_1;
        }
        puVar1 = (undefined4 *)(lVar11 + (longlong)(int)uVar6 * 0x10);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        *(uint *)(lVar13 + *param_1 + lVar12 * 4) = -3 - uVar6;
        uVar17 = 0;
        uVar23 = 0;
      }
      else {
        uVar18 = (ulonglong)(-iVar4 - 3);
        local_118 = dVar37;
        uVar17 = uVar39;
        local_110 = dVar26;
        uVar23 = uVar28;
      }
      uVar20 = SUB84(local_118,0);
      uVar21 = (int)((ulonglong)local_118 >> 0x20);
      if (dVar2 <= dVar37) {
        uVar20 = uVar40;
        uVar21 = uVar41;
      }
      if (dVar26 < dVar3) {
        uVar24 = SUB84(local_110,0);
        uVar25 = (undefined4)((ulonglong)local_110 >> 0x20);
      }
      uVar8 = CONCAT44(uVar32,uVar31) & uVar39;
      auVar38._0_8_ = ~-(ulonglong)(dVar37 < dVar2) & (ulonglong)local_118;
      auVar38._8_8_ = ~uVar39 & uVar17;
      auVar7._8_4_ = (int)uVar8;
      auVar7._0_8_ = CONCAT44(uVar30,uVar29) & -(ulonglong)(dVar37 < dVar2);
      auVar7._12_4_ = (int)(uVar8 >> 0x20);
      auVar38 = auVar38 | auVar7;
      uVar29 = auVar38._0_4_;
      uVar30 = auVar38._4_4_;
      uVar39 = auVar38._8_8_;
      uVar31 = auVar38._8_4_;
      uVar32 = auVar38._12_4_;
      auVar22._0_8_ = (ulonglong)local_110 & -(ulonglong)(dVar3 <= dVar26);
      auVar22._8_8_ = uVar23 & uVar28;
      auVar27._0_8_ = ~-(ulonglong)(dVar3 <= dVar26) & CONCAT44(uVar34,uVar33);
      auVar27._8_8_ = ~uVar28 & CONCAT44(uVar36,uVar35);
      auVar27 = auVar27 | auVar22;
      uVar33 = auVar27._0_4_;
      uVar34 = auVar27._4_4_;
      uVar28 = auVar27._8_8_;
      uVar35 = auVar27._8_4_;
      uVar36 = auVar27._12_4_;
      iVar14 = iVar14 + 1;
      dVar26 = (auVar27._0_8_ + (double)CONCAT44(uVar25,uVar24)) * 0.5;
      dVar37 = (auVar38._0_8_ + (double)CONCAT44(uVar21,uVar20)) * 0.5;
      uVar40 = uVar20;
      uVar41 = uVar21;
    } while (iVar14 < (int)param_1[4]);
    uVar18 = (ulonglong)(int)uVar18;
    local_118 = dVar37;
    local_110 = dVar26;
  }
  local_168 = &local_118;
  FUN_146c9324e(param_1,param_3,pdVar19,uVar18 * 0x10 + *param_1);
LAB_146c9309e:
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c93138 FUN_146c93138 body=48 status=ok
// SIG undefined FUN_146c93138(void)

void FUN_146c93138(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 146c93168 FUN_146c93168 body=47 status=ok
// SIG undefined FUN_146c93168(void)

void FUN_146c93168(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146c93198 FUN_146c93198 body=48 status=ok
// SIG undefined FUN_146c93198(void)

void FUN_146c93198(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146c931c8 FUN_146c931c8 body=132 status=ok
// SIG undefined FUN_146c931c8(void)

void FUN_146c931c8(longlong param_1,int param_2)

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



// FUNCTION 146c9324e FUN_146c9324e body=226 status=ok
// SIG undefined FUN_146c9324e(void)

void FUN_146c9324e(longlong param_1,undefined4 param_2,double *param_3,longlong param_4,
                  double *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = (ulonglong)(*param_5 <= *param_3 && *param_3 != *param_5) +
          (ulonglong)(param_5[1] <= param_3[1] && param_3[1] != param_5[1]) * 2;
  lVar4 = (longlong)*(int *)(param_4 + lVar1 * 4);
  if (lVar4 == -1) {
    iVar2 = *(int *)(param_1 + 0x18);
    lVar4 = (longlong)iVar2;
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
      FUN_146c93330((longlong *)(param_1 + 0x10),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x18 + lVar4 * 0x20) = 0x400000000;
    *(int *)(param_4 + lVar1 * 4) = iVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = lVar4 * 0x20;
  lVar1 = lVar3 + lVar4;
  iVar2 = *(int *)(lVar3 + 0x18 + lVar4);
  *(uint *)(lVar3 + 0x18 + lVar4) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c + lVar4) < iVar2 + 1U) {
    FUN_1400c4ccc(lVar1,iVar2);
  }
  lVar4 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    lVar4 = lVar1;
  }
  *(undefined4 *)(lVar4 + (longlong)iVar2 * 4) = param_2;
  return;
}



// FUNCTION 146c93330 FUN_146c93330 body=132 status=ok
// SIG undefined FUN_146c93330(void)

void FUN_146c93330(longlong param_1,int param_2)

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



// FUNCTION 146c933b6 FUN_146c933b6 body=59 status=ok
// SIG undefined FUN_146c933b6(void)

void FUN_146c933b6(longlong *param_1)

{
  FUN_146c93168(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c933f2 FUN_146c933f2 body=87 status=ok
// SIG undefined FUN_146c933f2(void)

void FUN_146c933f2(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_146c93138(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_146c93168(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_146c93198(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 146c9344a FUN_146c9344a body=1274 status=ok
// SIG undefined FUN_146c9344a(void)

void FUN_146c9344a(longlong *param_1,longlong *param_2,int param_3,float *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_168 [32];
  float *local_148;
  int local_13c;
  ulonglong local_138;
  float *local_130;
  float *local_128;
  float local_120;
  float local_11c;
  undefined8 local_118;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  fVar24 = *param_4;
  fVar19 = param_4[1];
  fVar21 = param_4[2];
  fVar22 = param_4[3];
  fVar20 = (fVar19 + fVar22) * 0.5;
  fVar23 = (fVar24 + fVar21) * 0.5;
  pfVar17 = (float *)((longlong)param_3 * 8 + *param_2);
  uVar16 = 0;
  local_128 = param_4;
  local_110 = fVar23;
  local_10c = fVar20;
  if (0 < (int)param_1[4]) {
    iVar12 = 0;
    do {
      lVar10 = *param_1;
      lVar11 = (longlong)(int)uVar16 * 0x10;
      local_110 = fVar23;
      local_10c = fVar20;
      if (-2 < *(int *)(lVar10 + lVar11)) {
        puVar8 = (undefined8 *)(lVar10 + lVar11);
        lVar10 = 0;
        do {
          if (*(int *)((longlong)puVar8 + lVar10 * 4) == -1) {
            *(int *)((longlong)puVar8 + lVar10 * 4) = param_3;
            goto LAB_146c938af;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
        local_108 = *puVar8;
        uStack_100 = puVar8[1];
        lVar10 = 0;
        do {
          *(undefined4 *)(*param_1 + lVar11 + lVar10 * 4) = 0xfffffffe;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 4);
        local_13c = param_3;
        local_130 = pfVar17;
        if (iVar12 + 1 < (int)param_1[4]) {
          lVar10 = 0;
          do {
            iVar3 = *(int *)((longlong)&local_108 + lVar10 * 4);
            lVar9 = (ulonglong)(fVar23 < *(float *)(*param_2 + (longlong)iVar3 * 8)) +
                    (ulonglong)(fVar20 < *(float *)(*param_2 + 4 + (longlong)iVar3 * 8)) * 2;
            lVar14 = *param_1;
            iVar4 = *(int *)(lVar14 + lVar11 + lVar9 * 4);
            if (iVar4 == -2) {
              iVar4 = (int)param_1[1];
              lVar13 = (longlong)iVar4;
              *(uint *)(param_1 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
                FUN_146c931c8(param_1,iVar4);
                lVar14 = *param_1;
              }
              puVar1 = (undefined4 *)(lVar14 + lVar13 * 0x10);
              *puVar1 = 0xffffffff;
              puVar1[1] = 0xffffffff;
              puVar1[2] = 0xffffffff;
              puVar1[3] = 0xffffffff;
              *(int *)(*param_1 + lVar11 + lVar9 * 4) = -3 - iVar4;
              lVar14 = *param_1;
            }
            else {
              lVar13 = (longlong)(-3 - iVar4);
            }
            lVar14 = lVar13 * 0x10 + lVar14;
            lVar9 = 0;
            do {
              if (*(int *)(lVar14 + lVar9 * 4) == -1) {
                *(int *)(lVar14 + lVar9 * 4) = iVar3;
                break;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != 4);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 4);
        }
        else {
          lVar10 = 0;
          do {
            uVar16 = (ulonglong)*(int *)((longlong)&local_108 + lVar10 * 4);
            local_118 = *(undefined8 *)(*param_2 + uVar16 * 8);
            fVar7 = (float)local_118;
            bVar5 = fVar20 < (float)((ulonglong)local_118 >> 0x20);
            uVar15 = (ulonglong)((uint)(fVar23 < fVar7) + (uint)bVar5 * 2);
            lVar9 = *param_1;
            iVar3 = *(int *)(lVar9 + lVar11 + uVar15 * 4);
            if (iVar3 == -2) {
              iVar3 = (int)param_1[1];
              lVar14 = (longlong)iVar3;
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                local_138 = uVar16;
                FUN_146c931c8(param_1,iVar3);
                lVar9 = *param_1;
                uVar16 = local_138;
              }
              puVar1 = (undefined4 *)(lVar9 + lVar14 * 0x10);
              *puVar1 = 0xffffffff;
              puVar1[1] = 0xffffffff;
              puVar1[2] = 0xffffffff;
              puVar1[3] = 0xffffffff;
              *(int *)(*param_1 + lVar11 + uVar15 * 4) = -3 - iVar3;
              lVar9 = *param_1;
            }
            else {
              lVar14 = (longlong)(-3 - iVar3);
            }
            uVar18 = -(uint)(fVar23 < fVar7);
            local_11c = (local_128[3] - local_128[1]) * 0.5 * ((float)(byte)(bVar5 * '\x02') + -0.5)
                        + fVar20;
            local_120 = (local_128[2] - *local_128) * 0.5 *
                        (float)(~uVar18 & 0xbf000000 | uVar18 & 0x3f000000) + fVar23;
            local_148 = &local_120;
            FUN_146c93946(param_1,uVar16 & 0xffffffff,&local_118,lVar14 * 0x10 + lVar9);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 4);
        }
        lVar10 = *param_1;
        pfVar17 = local_130;
        param_3 = local_13c;
      }
      fVar7 = *pfVar17;
      fVar2 = pfVar17[1];
      lVar9 = (ulonglong)(fVar23 < fVar7) + (ulonglong)(fVar20 < fVar2) * 2;
      iVar3 = *(int *)(lVar10 + lVar11 + lVar9 * 4);
      if (iVar3 == -2) {
        uVar18 = *(uint *)(param_1 + 1);
        uVar16 = (ulonglong)uVar18;
        *(uint *)(param_1 + 1) = uVar18 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar18 + 1) {
          FUN_146c931c8(param_1,uVar16);
          lVar10 = *param_1;
        }
        puVar1 = (undefined4 *)(lVar10 + (longlong)(int)uVar18 * 0x10);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        *(uint *)(lVar11 + *param_1 + lVar9 * 4) = -3 - uVar18;
      }
      else {
        uVar16 = (ulonglong)(-iVar3 - 3);
        local_110 = fVar23;
        local_10c = fVar20;
      }
      fVar6 = local_110;
      if (fVar7 <= fVar23) {
        fVar6 = fVar24;
      }
      fVar24 = fVar6;
      if (fVar20 < fVar2) {
        fVar19 = local_10c;
      }
      fVar21 = (float)(~-(uint)(fVar23 < fVar7) & (uint)local_110 |
                      (uint)fVar21 & -(uint)(fVar23 < fVar7));
      fVar22 = (float)(~-(uint)(fVar2 <= fVar20) & (uint)fVar22 |
                      (uint)local_10c & -(uint)(fVar2 <= fVar20));
      iVar12 = iVar12 + 1;
      fVar20 = (fVar22 + fVar19) * 0.5;
      fVar23 = (fVar21 + fVar24) * 0.5;
    } while (iVar12 < (int)param_1[4]);
    uVar16 = (ulonglong)(int)uVar16;
    local_110 = fVar23;
    local_10c = fVar20;
  }
  local_148 = &local_110;
  FUN_146c93946(param_1,param_3,pfVar17,uVar16 * 0x10 + *param_1);
LAB_146c938af:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c93946 FUN_146c93946 body=224 status=ok
// SIG undefined FUN_146c93946(void)

void FUN_146c93946(longlong param_1,undefined4 param_2,float *param_3,longlong param_4,
                  float *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = (ulonglong)(*param_5 <= *param_3 && *param_3 != *param_5) +
          (ulonglong)(param_5[1] <= param_3[1] && param_3[1] != param_5[1]) * 2;
  lVar4 = (longlong)*(int *)(param_4 + lVar1 * 4);
  if (lVar4 == -1) {
    iVar2 = *(int *)(param_1 + 0x18);
    lVar4 = (longlong)iVar2;
    *(uint *)(param_1 + 0x18) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
      FUN_146c93330((longlong *)(param_1 + 0x10),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x18 + lVar4 * 0x20) = 0x400000000;
    *(int *)(param_4 + lVar1 * 4) = iVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = lVar4 * 0x20;
  lVar1 = lVar3 + lVar4;
  iVar2 = *(int *)(lVar3 + 0x18 + lVar4);
  *(uint *)(lVar3 + 0x18 + lVar4) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c + lVar4) < iVar2 + 1U) {
    FUN_1400c4ccc(lVar1,iVar2);
  }
  lVar4 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    lVar4 = lVar1;
  }
  *(undefined4 *)(lVar4 + (longlong)iVar2 * 4) = param_2;
  return;
}



// FUNCTION 146c93a26 FUN_146c93a26 body=149 status=ok
// SIG undefined FUN_146c93a26(void)

void FUN_146c93a26(double *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    dVar4 = *param_1;
    dVar6 = param_1[1];
    dVar5 = param_1[2];
    dVar7 = param_1[3];
    lVar3 = 0;
    do {
      dVar8 = *(double *)(lVar1 + lVar3);
      if (dVar8 < dVar4) {
        *param_1 = dVar8;
        dVar4 = dVar8;
        dVar8 = *(double *)(lVar1 + lVar3);
      }
      if (dVar5 < dVar8) {
        param_1[2] = dVar8;
        dVar5 = dVar8;
      }
      dVar8 = *(double *)(lVar1 + 8 + lVar3);
      if (dVar8 < dVar6) {
        param_1[1] = dVar8;
        dVar6 = dVar8;
        dVar8 = *(double *)(lVar1 + 8 + lVar3);
      }
      if (dVar7 < dVar8) {
        param_1[3] = dVar8;
        dVar7 = dVar8;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 146c93abc FUN_146c93abc body=370 status=ok
// SIG undefined FUN_146c93abc(void)

void FUN_146c93abc(longlong *param_1,longlong *param_2,longlong *param_3,double *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c92ba6();
  lVar4 = param_1[1];
  uVar5 = (int)lVar4 + 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
    FUN_146c931c8(param_1);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)lVar4 * 0x10);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = param_5;
  dVar10 = *param_4;
  dVar11 = param_4[2];
  uVar8 = SUB84(dVar11,0);
  uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (((dVar11 < dVar10) || (param_4[3] <= param_4[1] && param_4[1] != param_4[3])) &&
     (lVar4 = param_3[1], (longlong)(int)lVar4 != 0)) {
    lVar3 = *param_3;
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar3 + lVar6) * 0x10;
      pdVar2 = (double *)(*param_2 + lVar7);
      dVar11 = *(double *)(*param_2 + lVar7);
      if (dVar11 < dVar10) {
        *param_4 = dVar11;
        dVar10 = dVar11;
        dVar11 = *pdVar2;
      }
      if ((double)CONCAT44(uVar9,uVar8) <= dVar11 && dVar11 != (double)CONCAT44(uVar9,uVar8)) {
        param_4[2] = dVar11;
        uVar8 = SUB84(dVar11,0);
        uVar9 = (undefined4)((ulonglong)dVar11 >> 0x20);
      }
      dVar11 = pdVar2[1];
      if (dVar11 < param_4[1]) {
        param_4[1] = dVar11;
        dVar11 = pdVar2[1];
      }
      if (param_4[3] <= dVar11 && dVar11 != param_4[3]) {
        param_4[3] = dVar11;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar6 = 0;
    do {
      local_58 = (undefined4)*param_2;
      uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_50 = (undefined4)param_2[1];
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_146c92bfe(param_1,&local_58,*(undefined4 *)(lVar3 + lVar6),param_4);
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c93c30 FUN_146c93c30 body=354 status=ok
// SIG undefined FUN_146c93c30(void)

void FUN_146c93c30(longlong *param_1,longlong *param_2,int *param_3,int param_4,char param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  char local_68;
  int *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 < (int)param_1[4]) {
    if (*param_3 < -1) {
      uVar10 = 0;
      uVar11 = 3;
      do {
        uVar6 = (ulonglong)uVar10;
        if (param_5 != '\0') {
          uVar6 = uVar11;
        }
        if (param_3[uVar6] != -2) {
          local_58 = (undefined4)*param_2;
          uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_50 = (undefined4)param_2[1];
          uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
          local_60 = param_6;
          local_68 = param_5;
          FUN_146c93c30(param_1,&local_58,(longlong)(-3 - param_3[uVar6]) * 0x10 + *param_1,
                        param_4 + 1);
        }
        uVar10 = uVar10 + 1;
        uVar11 = (ulonglong)((int)uVar11 - 1);
      } while (uVar10 != 4);
    }
    else {
      lVar5 = 0;
      do {
        iVar1 = param_3[lVar5];
        if (iVar1 == -1) break;
        iVar2 = *param_6;
        *param_6 = iVar2 + 1;
        *(int *)(*param_2 + (longlong)iVar2 * 4) = iVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar4 = 3 - uVar10;
      if (param_5 == '\0') {
        uVar4 = uVar10;
      }
      if ((longlong)param_3[uVar4] != -1) {
        lVar5 = param_1[2];
        lVar8 = (longlong)param_3[uVar4] * 0x20;
        lVar9 = *(longlong *)(lVar5 + 0x10 + lVar8);
        lVar7 = lVar5 + lVar8;
        if (lVar9 != 0) {
          lVar7 = lVar9;
        }
        lVar5 = (longlong)*(int *)(lVar5 + 0x18 + lVar8);
        if (lVar5 != 0) {
          lVar9 = 0;
          do {
            uVar3 = *(undefined4 *)(lVar7 + lVar9);
            iVar1 = *param_6;
            *param_6 = iVar1 + 1;
            *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
            lVar9 = lVar9 + 4;
          } while (lVar5 * 4 != lVar9);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c93d94 FUN_146c93d94 body=350 status=ok
// SIG undefined FUN_146c93d94(void)

void FUN_146c93d94(longlong *param_1,longlong *param_2,longlong *param_3,float *param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c933f2();
  lVar4 = param_1[1];
  uVar5 = (int)lVar4 + 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
    FUN_146c931c8(param_1);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)lVar4 * 0x10);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = param_5;
  fVar9 = *param_4;
  fVar8 = param_4[2];
  if (((fVar8 < fVar9) || (param_4[3] <= param_4[1] && param_4[1] != param_4[3])) &&
     (lVar4 = param_3[1], (longlong)(int)lVar4 != 0)) {
    lVar2 = *param_3;
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar2 + lVar6);
      lVar3 = *param_2;
      fVar10 = *(float *)(lVar3 + lVar7 * 8);
      if (fVar10 < fVar9) {
        *param_4 = fVar10;
        fVar9 = fVar10;
        fVar10 = *(float *)(lVar3 + lVar7 * 8);
      }
      if (fVar8 < fVar10) {
        param_4[2] = fVar10;
        fVar8 = fVar10;
      }
      fVar10 = *(float *)(lVar3 + 4 + lVar7 * 8);
      if (fVar10 < param_4[1]) {
        param_4[1] = fVar10;
        fVar10 = *(float *)(lVar3 + 4 + lVar7 * 8);
      }
      if (param_4[3] <= fVar10 && fVar10 != param_4[3]) {
        param_4[3] = fVar10;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_3;
    lVar6 = 0;
    do {
      local_58 = (undefined4)*param_2;
      uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_50 = (undefined4)param_2[1];
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_146c9344a(param_1,&local_58,*(undefined4 *)(lVar2 + lVar6),param_4);
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c93ef4 FUN_146c93ef4 body=354 status=ok
// SIG undefined FUN_146c93ef4(void)

void FUN_146c93ef4(longlong *param_1,longlong *param_2,int *param_3,int param_4,char param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  char local_68;
  int *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 < (int)param_1[4]) {
    if (*param_3 < -1) {
      uVar10 = 0;
      uVar11 = 3;
      do {
        uVar6 = (ulonglong)uVar10;
        if (param_5 != '\0') {
          uVar6 = uVar11;
        }
        if (param_3[uVar6] != -2) {
          local_58 = (undefined4)*param_2;
          uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_50 = (undefined4)param_2[1];
          uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
          local_60 = param_6;
          local_68 = param_5;
          FUN_146c93ef4(param_1,&local_58,(longlong)(-3 - param_3[uVar6]) * 0x10 + *param_1,
                        param_4 + 1);
        }
        uVar10 = uVar10 + 1;
        uVar11 = (ulonglong)((int)uVar11 - 1);
      } while (uVar10 != 4);
    }
    else {
      lVar5 = 0;
      do {
        iVar1 = param_3[lVar5];
        if (iVar1 == -1) break;
        iVar2 = *param_6;
        *param_6 = iVar2 + 1;
        *(int *)(*param_2 + (longlong)iVar2 * 4) = iVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
    }
  }
  else {
    uVar10 = 0;
    do {
      uVar4 = 3 - uVar10;
      if (param_5 == '\0') {
        uVar4 = uVar10;
      }
      if ((longlong)param_3[uVar4] != -1) {
        lVar5 = param_1[2];
        lVar8 = (longlong)param_3[uVar4] * 0x20;
        lVar9 = *(longlong *)(lVar5 + 0x10 + lVar8);
        lVar7 = lVar5 + lVar8;
        if (lVar9 != 0) {
          lVar7 = lVar9;
        }
        lVar5 = (longlong)*(int *)(lVar5 + 0x18 + lVar8);
        if (lVar5 != 0) {
          lVar9 = 0;
          do {
            uVar3 = *(undefined4 *)(lVar7 + lVar9);
            iVar1 = *param_6;
            *param_6 = iVar1 + 1;
            *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
            lVar9 = lVar9 + 4;
          } while (lVar5 * 4 != lVar9);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c94058 FUN_146c94058 body=201 status=ok
// SIG undefined FUN_146c94058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_146c94058(undefined1 (*param_1) [16],float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar13 = param_2[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar1 = param_3[2];
  param_4 = param_4 * 0.5;
  fVar10 = param_4 * (fVar1 * fVar3 * -1.0 +
                     fVar6 * fVar4 * 1.0 + fVar5 * fVar13 * 1.0 + fVar2 * 0.0) + fVar2;
  fVar11 = param_4 * (fVar1 * fVar2 * 1.0 +
                     fVar6 * fVar13 * 1.0 + fVar5 * fVar4 * -1.0 + fVar3 * 0.0) + fVar3;
  fVar12 = param_4 * (fVar1 * fVar13 * 1.0 +
                     fVar6 * fVar2 * -1.0 + fVar5 * fVar3 * 1.0 + fVar4 * 0.0) + fVar4;
  fVar13 = param_4 * (fVar1 * fVar4 * -1.0 +
                     fVar6 * fVar3 * -1.0 + fVar5 * fVar2 * -1.0 + fVar13 * 0.0) + fVar13;
  fVar5 = fVar10 * fVar10 + fVar11 * fVar11;
  fVar6 = fVar12 * fVar12 + fVar13 * fVar13;
  auVar7._0_4_ = fVar6 + fVar5;
  auVar7._4_4_ = fVar6 + fVar5;
  auVar7._8_4_ = fVar5 + fVar6;
  auVar7._12_4_ = fVar5 + fVar6;
  auVar8 = sqrtps(auVar7,auVar7);
  auVar8 = divps(_DAT_1499314a0,auVar8);
  auVar9._0_4_ = auVar8._0_4_ * fVar10;
  auVar9._4_4_ = auVar8._4_4_ * fVar11;
  auVar9._8_4_ = auVar8._8_4_ * fVar12;
  auVar9._12_4_ = auVar8._12_4_ * fVar13;
  auVar8._4_4_ = -(uint)(1e-08 <= auVar7._4_4_);
  auVar8._0_4_ = -(uint)(1e-08 <= auVar7._0_4_);
  auVar8._8_4_ = -(uint)(1e-08 <= auVar7._8_4_);
  auVar8._12_4_ = -(uint)(1e-08 <= auVar7._12_4_);
  auVar8 = blendvps(_DAT_149932320,auVar9,auVar8);
  *param_1 = auVar8;
  return param_1;
}



// FUNCTION 146c94122 FUN_146c94122 body=29 status=ok
// SIG undefined FUN_146c94122(void)

void FUN_146c94122(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149f3cd10;
  return;
}



// FUNCTION 146c94140 FUN_146c94140 body=36 status=ok
// SIG undefined FUN_146c94140(void)

undefined8 FUN_146c94140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 146c94180 FUN_146c94180 body=93 status=ok
// SIG undefined FUN_146c94180(void)

void FUN_146c94180(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f3cca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c941de FUN_146c941de body=123 status=ok
// SIG undefined FUN_146c941de(void)

void FUN_146c941de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f3cca0;
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



// FUNCTION 146c94266 FUN_146c94266 body=21 status=ok
// SIG undefined FUN_146c94266(void)

undefined8 FUN_146c94266(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146c9427c FUN_146c9427c body=34 status=ok
// SIG undefined FUN_146c9427c(void)

undefined8 FUN_146c9427c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146c942a2 FUN_146c942a2 body=18 status=ok
// SIG undefined FUN_146c942a2(void)

void FUN_146c942a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146c942af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 146c942b4 FUN_146c942b4 body=319 status=ok
// SIG undefined FUN_146c942b4(void)

undefined4 *
FUN_146c942b4(undefined4 *param_1,longlong param_2,double *param_3,double param_4,undefined8 param_5
             )

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (0.0 <= param_4) {
    uVar2 = SUB84(param_4,0);
    uVar3 = (undefined4)((ulonglong)param_4 >> 0x20);
  }
  uStack_50 = param_3[5] + (double)CONCAT44(uVar3,uVar2);
  local_58 = param_3[4] + (double)CONCAT44(uVar3,uVar2);
  uStack_60 = param_3[3] + (double)CONCAT44(uVar3,uVar2);
  local_68 = param_3[2] - (double)CONCAT44(uVar3,uVar2);
  uStack_70 = param_3[1] - (double)CONCAT44(uVar3,uVar2);
  local_78 = *param_3 - (double)CONCAT44(uVar3,uVar2);
  local_48 = 1;
  local_88 = param_5;
  FUN_1403b201c(&local_80,uVar2,&local_78,0);
  lVar1 = *(longlong *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = local_80;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_47,local_48);
  param_1[0xc] = (undefined4)local_58;
  param_1[0xd] = local_58._4_4_;
  param_1[0xe] = (undefined4)uStack_50;
  param_1[0xf] = uStack_50._4_4_;
  param_1[8] = (undefined4)local_68;
  param_1[9] = local_68._4_4_;
  param_1[10] = (undefined4)uStack_60;
  param_1[0xb] = uStack_60._4_4_;
  param_1[4] = (undefined4)local_78;
  param_1[5] = local_78._4_4_;
  param_1[6] = (undefined4)uStack_70;
  param_1[7] = uStack_70._4_4_;
  *param_1 = *(undefined4 *)(param_2 + 8);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c943f4 FUN_146c943f4 body=122 status=ok
// SIG undefined FUN_146c943f4(void)

undefined8 FUN_146c943f4(uint *param_1)

{
  uint uVar1;
  uint uVar3;
  int *piVar4;
  ulonglong uVar2;
  
  uVar1 = param_1[0x10] + 1;
  uVar2 = (ulonglong)uVar1;
  param_1[0x10] = uVar1;
  uVar3 = param_1[0xf];
  if (*(int *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar3 * 4) <= (int)uVar1) {
    param_1[0x10] = 0;
    uVar2 = (ulonglong)param_1[0xc];
    piVar4 = (int *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar3 * 4);
    do {
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      param_1[0xf] = uVar3;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      param_1[0xc] = uVar1;
      if (uVar1 == *param_1) {
        param_1[0xc] = 0;
        uVar1 = param_1[0xd];
        param_1[0xd] = uVar1 + 1;
        uVar2 = 0;
        if (uVar1 + 1 == param_1[1]) {
          param_1[0xd] = 0;
          param_1[0xe] = param_1[0xe] + 1;
          uVar2 = 0;
          if (uVar3 == param_1[4]) {
            return 0;
          }
        }
      }
    } while (*piVar4 == 0);
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 146c9446e FUN_146c9446e body=639 status=ok
// SIG undefined FUN_146c9446e(void)

void FUN_146c9446e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined1 local_1d8 [192];
  int local_118;
  uint local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  int *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined1 local_d0 [136];
  longlong local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1403b0d76(*(undefined8 *)(param_1 + 8),local_d0);
  FUN_146c946ee(param_2);
  piVar6 = *(int **)(param_1 + 8);
  iVar3 = *piVar6;
  uVar4 = piVar6[1];
  local_110 = piVar6[2];
  local_10c = piVar6[3];
  iVar5 = piVar6[4];
  local_104 = piVar6[0x32];
  local_100 = *(longlong *)(piVar6 + 0x2c);
  local_f8 = *(longlong *)(piVar6 + 0x2a);
  piVar6 = *(int **)(piVar6 + 0x2e);
  local_118 = iVar3;
  local_114 = uVar4;
  local_108 = iVar5;
  local_f0 = piVar6;
  FUN_1403b1286();
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  if (*piVar6 == 0) {
    iVar13 = 0;
    lVar9 = 1;
    uVar11 = 0;
    iVar10 = 0;
    do {
      iVar8 = (int)lVar9;
      uStack_e0 = CONCAT44(iVar8,(undefined4)uStack_e0);
      iVar13 = iVar13 + 1;
      local_e8 = CONCAT44(local_e8._4_4_,iVar13);
      if (iVar13 == iVar3) {
        uVar11 = uVar11 + 1;
        local_e8 = (ulonglong)uVar11 << 0x20;
        if (uVar11 == uVar4) {
          local_e8 = 0;
          iVar10 = iVar10 + 1;
          uStack_e0 = CONCAT44(iVar8,iVar10);
          if (iVar5 == iVar8) goto LAB_146c9462a;
          uVar11 = 0;
        }
        iVar13 = 0;
      }
      piVar2 = piVar6 + lVar9;
      lVar9 = lVar9 + 1;
    } while (*piVar2 == 0);
  }
  do {
    local_1f8 = (undefined4)uStack_e0;
    local_200 = CONCAT44(local_200._4_4_,local_e8._4_4_);
    local_208 = CONCAT44(local_208._4_4_,(undefined4)local_e8);
    cVar7 = FUN_144977a5c(local_d0,local_1d8,uStack_e0._4_4_,local_d8);
    if (cVar7 != '\0') {
      lVar9 = *(longlong *)(local_100 + (longlong)uStack_e0._4_4_ * 8);
      lVar12 = (longlong)local_104 * (longlong)local_d8;
      puVar1 = (undefined4 *)(lVar9 + lVar12 * 8);
      local_1f0 = *puVar1;
      uStack_1ec = puVar1[1];
      uStack_1e8 = puVar1[2];
      uStack_1e4 = puVar1[3];
      local_1e0 = *(undefined8 *)(lVar9 + 0x10 + lVar12 * 8);
      lVar9 = *param_2;
      lVar12 = (longlong)
               *(int *)(*(longlong *)(local_f8 + (longlong)uStack_e0._4_4_ * 8) +
                       (longlong)local_d8 * 4) * 0x40;
      local_200 = lVar9 + lVar12 + 0x30;
      local_208 = lVar9 + 0x20 + lVar12;
      FUN_146c95a8a(local_1d8,&local_1f0,lVar9 + lVar12,lVar9 + 0x10 + lVar12);
    }
    cVar7 = FUN_146c943f4(&local_118);
  } while (cVar7 != '\0');
LAB_146c9462a:
  FUN_1403b0dd8(local_1d8);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c946ee FUN_146c946ee body=121 status=ok
// SIG undefined FUN_146c946ee(void)

void FUN_146c946ee(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146c94a1a(param_1,iVar1);
    }
    FUN_146c94a07((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146c94aa0(param_1,param_2,iVar1 - param_2);
    FUN_146c94afa(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146c94768 FUN_146c94768 body=434 status=ok
// SIG undefined FUN_146c94768(void)

longlong * FUN_146c94768(int *param_1,longlong *param_2,int param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *param_1;
  if (param_3 < 0) {
    iVar5 = iVar3 + 0x3f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    param_3 = 0x96;
    if (0x96 < iVar5 >> 6) {
      param_3 = iVar5 >> 6;
    }
  }
  if ((double)iVar3 * 1.5 <= (double)param_3) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_1446f48e2(param_2,0);
    *(undefined4 *)*param_2 = 0;
    lVar6 = *(longlong *)(param_1 + 2);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1446f48e2(param_2,iVar3);
    }
    lVar7 = *param_2;
    uVar4 = *(undefined4 *)(lVar6 + 0x10);
  }
  else {
    iVar5 = iVar3 / param_3 + 2;
    if (iVar3 / param_3 < -2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 == 0) {
      uVar2 = 0;
      iVar3 = 0;
    }
    else {
      FUN_14481578e(param_2);
      iVar3 = (int)param_2[1];
      uVar2 = *(uint *)((longlong)param_2 + 0xc);
    }
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (uVar2 < iVar3 + 1U) {
      FUN_1446f48e2(param_2,iVar3);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = 0;
    lVar6 = *(longlong *)(param_1 + 2);
    iVar5 = *(int *)(lVar6 + 0x10);
    if (iVar5 < 1) {
      dVar1 = 0.0;
    }
    else {
      lVar7 = 0;
      iVar3 = 0;
      do {
        if (param_3 <= iVar3) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(param_2,iVar3);
          }
          *(int *)(*param_2 + (longlong)iVar3 * 4) = (int)lVar7;
          lVar6 = *(longlong *)(param_1 + 2);
          iVar3 = 0;
        }
        iVar3 = iVar3 + *(int *)(*(longlong *)(lVar6 + 0xb8) + lVar7 * 4);
        lVar7 = lVar7 + 1;
        iVar5 = *(int *)(lVar6 + 0x10);
      } while (lVar7 < iVar5);
      dVar1 = (double)iVar3;
    }
    iVar3 = (int)param_2[1];
    if (dVar1 < (double)param_3 * 0.5) {
      *(int *)(*param_2 + (longlong)(iVar3 + -1) * 4) = iVar5;
      return param_2;
    }
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1446f48e2(param_2,iVar3);
    }
    lVar7 = *param_2;
    uVar4 = *(undefined4 *)(lVar6 + 0x10);
  }
  *(undefined4 *)(lVar7 + (longlong)iVar3 * 4) = uVar4;
  return param_2;
}



// FUNCTION 146c9491c FUN_146c9491c body=215 status=ok
// SIG undefined FUN_146c9491c(void)

void FUN_146c9491c(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  code *local_40;
  undefined4 **local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146c94768(param_1,&local_50);
  if (local_48 < 3) {
    FUN_146c9446e(param_1,param_2);
  }
  else {
    FUN_146c946ee(param_2,*param_1);
    local_38 = &local_68;
    local_78 = &local_30;
    local_30 = 0;
    local_28 = 0;
    local_40 = FUN_142986850;
    local_80 = 0;
    local_68 = param_1;
    local_60 = &local_50;
    local_58 = param_2;
    FUN_1401f8d10(L"ParallelFor Task",local_48 + -1,1);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c94a07 FUN_146c94a07 body=19 status=ok
// SIG undefined FUN_146c94a07(void)

void FUN_146c94a07(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 6);
    return;
  }
  return;
}



// FUNCTION 146c94a1a FUN_146c94a1a body=132 status=ok
// SIG undefined FUN_146c94a1a(void)

void FUN_146c94a1a(longlong param_1,int param_2)

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



// FUNCTION 146c94aa0 FUN_146c94aa0 body=89 status=ok
// SIG undefined FUN_146c94aa0(void)

void FUN_146c94aa0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146c94b38(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146c94afa FUN_146c94afa body=62 status=ok
// SIG undefined FUN_146c94afa(void)

void FUN_146c94afa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146c94baa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 146c94b38 FUN_146c94b38 body=38 status=ok
// SIG undefined FUN_146c94b38(void)

void FUN_146c94b38(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146c94b5e(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 146c94b5e FUN_146c94b5e body=75 status=ok
// SIG undefined FUN_146c94b5e(void)

void FUN_146c94b5e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146c94baa FUN_146c94baa body=93 status=ok
// SIG undefined FUN_146c94baa(void)

ulonglong FUN_146c94baa(uint param_1,uint param_2)

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



// FUNCTION 146c94c08 FUN_146c94c08 body=79 status=ok
// SIG undefined FUN_146c94c08(void)

bool FUN_146c94c08(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  
  iVar1 = param_1[0x12];
  param_1[0xf] = iVar1;
  uVar2 = (longlong)iVar1 % (longlong)param_1[3];
  param_1[0xe] = iVar1 / param_1[3];
  uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
  param_1[0xd] = (int)((longlong)uVar2 / (longlong)*param_1);
  param_1[0xc] = (int)((longlong)uVar2 % (longlong)*param_1);
  param_1[0x10] = 0;
  do {
    iVar1 = *(int *)(*(longlong *)(param_1 + 10) + (longlong)param_1[0xf] * 4);
    if (iVar1 != 0) break;
    cVar3 = FUN_146c94ca2(param_1);
  } while (cVar3 != '\0');
  return iVar1 != 0;
}



// FUNCTION 146c94c58 FUN_146c94c58 body=73 status=ok
// SIG undefined FUN_146c94c58(void)

char FUN_146c94c58(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x40) = iVar2;
  cVar1 = '\x01';
  if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x3c) * 4) <= iVar2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    do {
      cVar1 = FUN_146c94ca2(param_1);
      if (cVar1 == '\0') {
        return '\0';
      }
    } while (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x3c) * 4) == 0);
  }
  return cVar1;
}



// FUNCTION 146c94ca2 FUN_146c94ca2 body=71 status=ok
// SIG undefined FUN_146c94ca2(void)

undefined4 FUN_146c94ca2(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0xf] + 1;
  param_1[0xf] = iVar2;
  if ((iVar2 < param_1[0x13]) &&
     (iVar1 = param_1[0xc], param_1[0xc] = iVar1 + 1, iVar1 + 1 == *param_1)) {
    param_1[0xc] = 0;
    iVar1 = param_1[0xd];
    param_1[0xd] = iVar1 + 1;
    if (iVar1 + 1 == param_1[1]) {
      param_1[0xd] = 0;
      param_1[0xe] = param_1[0xe] + 1;
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 < param_1[0x13]);
}



// FUNCTION 146c94cea FUN_146c94cea body=147 status=ok
// SIG undefined FUN_146c94cea(void)

void FUN_146c94cea(longlong param_1,int param_2)

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



// FUNCTION 146c94d7e FUN_146c94d7e body=113 status=ok
// SIG undefined FUN_146c94d7e(void)

void FUN_146c94d7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 146c94df0 FUN_146c94df0 body=34 status=ok
// SIG undefined FUN_146c94df0(void)

void FUN_146c94df0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f3cde0;
  return;
}



// FUNCTION 146c94e12 FUN_146c94e12 body=31 status=ok
// SIG undefined FUN_146c94e12(void)

undefined8 FUN_146c94e12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c94e4e FUN_146c94e4e body=93 status=ok
// SIG undefined FUN_146c94e4e(void)

void FUN_146c94e4e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f3cd70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c94eac FUN_146c94eac body=123 status=ok
// SIG undefined FUN_146c94eac(void)

void FUN_146c94eac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f3cd70;
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



// FUNCTION 146c94f34 FUN_146c94f34 body=21 status=ok
// SIG undefined FUN_146c94f34(void)

undefined8 FUN_146c94f34(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146c94f4a FUN_146c94f4a body=29 status=ok
// SIG undefined FUN_146c94f4a(void)

undefined8 FUN_146c94f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c94f68 FUN_146c94f68 body=133 status=ok
// SIG undefined FUN_146c94f68(void)

undefined4 FUN_146c94f68(longlong param_1,int param_2,double *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  
  lVar7 = (longlong)param_2 * 8 + *(longlong *)(param_1 + 0x30);
  lVar3 = (longlong)param_2 * 0x10;
  dVar9 = *(double *)(lVar3 + lVar7) * *(double *)(param_1 + 0x80);
  *param_3 = dVar9;
  dVar9 = *(double *)(lVar3 + 8 + lVar7) * *(double *)(param_1 + 0x88) + dVar9;
  *param_3 = dVar9;
  dVar9 = (*(double *)(lVar3 + 0x10 + lVar7) * *(double *)(param_1 + 0x90) -
          *(double *)(param_1 + 0x98)) + dVar9;
  *param_3 = dVar9;
  uVar2 = 0xffffffff;
  if ((dVar9 < -2e-11) || (uVar2 = 1, 2e-11 < dVar9)) {
    return uVar2;
  }
  iVar8 = *(int *)(param_1 + 0x74);
  if (0 < (longlong)iVar8) {
    uVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x78) + uVar6 * 4) == param_2) {
        puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + ((uVar6 & 0xffffffff) << 2 | 4));
        goto LAB_146c95883;
      }
      uVar6 = uVar6 + 2;
    } while ((int)uVar6 < iVar8);
  }
  if (iVar8 == *(int *)(param_1 + 0x70)) {
    iVar1 = iVar8 * 2;
    *(int *)(param_1 + 0x70) = iVar1;
    lVar3 = -1;
    if (-1 < iVar1) {
      lVar3 = (longlong)iVar1 * 4 + (ulonglong)((longlong)iVar1 * 4 == 0);
    }
    lVar3 = FUN_14001cc68(lVar3,0x10);
    lVar7 = *(longlong *)(param_1 + 0x78);
    if (0 < iVar8) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)(lVar7 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (iVar8 != lVar4);
    }
    if (lVar7 != 0) {
      FUN_1400020a8();
      iVar8 = *(int *)(param_1 + 0x74);
    }
    *(longlong *)(param_1 + 0x78) = lVar3;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x74) = iVar8 + 1;
  *(int *)(lVar3 + (longlong)iVar8 * 4) = param_2;
  iVar8 = 1;
  if (*param_3 <= 1e-11) {
    iVar8 = -(uint)(*param_3 < -1e-11);
  }
  iVar1 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar1 + 1;
  *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 4) = iVar8;
  puVar5 = (undefined4 *)
           (*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x74) * 4 + -4);
LAB_146c95883:
  return *puVar5;
}



// FUNCTION 146c94fee FUN_146c94fee body=150 status=ok
// SIG undefined FUN_146c94fee(void)

void FUN_146c94fee(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x14) * 2;
  *(int *)(param_1 + 0x14) = iVar3;
  lVar5 = -1;
  if (-1 < iVar3) {
    lVar5 = (longlong)iVar3 * 4 + (ulonglong)((longlong)iVar3 * 4 == 0);
  }
  puVar4 = (undefined4 *)FUN_14001cc68(lVar5,0x10);
  puVar2 = (undefined4 *)*param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  puVar7 = puVar4;
  for (puVar6 = puVar1; puVar6 < puVar2; puVar6 = puVar6 + 1) {
    *puVar7 = *puVar6;
    puVar7 = puVar7 + 1;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 **)(param_1 + 0x60) = puVar4;
  *param_2 = puVar7;
  *(longlong *)(param_1 + 0x68) =
       (longlong)*(int *)(param_1 + 0x14) * 4 + *(longlong *)(param_1 + 0x60);
  return;
}



// FUNCTION 146c95084 FUN_146c95084 body=150 status=ok
// SIG undefined FUN_146c95084(void)

void FUN_146c95084(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x10) * 2;
  *(int *)(param_1 + 0x10) = iVar3;
  lVar5 = -1;
  if (-1 < iVar3) {
    lVar5 = (longlong)iVar3 * 4 + (ulonglong)((longlong)iVar3 * 4 == 0);
  }
  puVar4 = (undefined4 *)FUN_14001cc68(lVar5,0x10);
  puVar2 = (undefined4 *)*param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  puVar7 = puVar4;
  for (puVar6 = puVar1; puVar6 < puVar2; puVar6 = puVar6 + 1) {
    *puVar7 = *puVar6;
    puVar7 = puVar7 + 1;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 **)(param_1 + 0x50) = puVar4;
  *param_2 = puVar7;
  *(longlong *)(param_1 + 0x58) =
       (longlong)*(int *)(param_1 + 0x10) * 4 + *(longlong *)(param_1 + 0x50);
  return;
}



// FUNCTION 146c9511a FUN_146c9511a body=340 status=ok
// SIG undefined FUN_146c9511a(void)

void FUN_146c9511a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = iVar1 * 2;
  lVar7 = (longlong)iVar3 * 8;
  lVar5 = -1;
  if (-1 < iVar3) {
    lVar5 = lVar7 + (ulonglong)(lVar7 == 0);
  }
  lVar5 = FUN_14001cc68(lVar5,0x10);
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar5 + lVar6 * 8) = *(undefined8 *)(lVar7 + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (iVar1 != lVar6);
  }
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x20) = lVar5;
  FUN_146c9632c(param_2,iVar3);
  lVar5 = (longlong)iVar3 * 4;
  lVar7 = -1;
  if (-1 < iVar3) {
    lVar7 = lVar5 + (ulonglong)(lVar5 == 0);
  }
  lVar5 = FUN_14001cc68(lVar7);
  iVar2 = *(int *)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (0 < (longlong)iVar2) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar6 * 4) = *(undefined4 *)(lVar7 + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (iVar2 != lVar6);
  }
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x28) = lVar5;
  lVar7 = (longlong)(iVar1 * 6) * 8;
  lVar5 = -1;
  if (-1 < iVar1 * 6) {
    lVar5 = lVar7 + (ulonglong)(lVar7 == 0);
  }
  lVar7 = FUN_14001cc68(lVar5,0x10);
  if (*(int *)(param_1 + 8) < 1) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  else {
    uVar4 = *(int *)(param_1 + 8) * 3;
    lVar5 = *(longlong *)(param_1 + 0x30);
    uVar8 = 1;
    if (1 < (int)uVar4) {
      uVar8 = (ulonglong)uVar4;
    }
    uVar9 = 0;
    do {
      *(undefined8 *)(lVar7 + uVar9 * 8) = *(undefined8 *)(lVar5 + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  if (lVar5 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x30) = lVar7;
  *(int *)(param_1 + 8) = iVar3;
  return;
}



// FUNCTION 146c9526e FUN_146c9526e body=261 status=ok
// SIG undefined FUN_146c9526e(void)

undefined8 FUN_146c9526e(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar8 = *(int **)(param_1 + 0x60);
  local_50 = piVar8 + 1;
  *piVar8 = *param_2;
  piVar6 = local_50;
  do {
    lVar3 = (longlong)*piVar8;
    *param_2 = *piVar8;
    piVar4 = piVar6;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x28) + lVar3 * 4)) {
      lVar7 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3 * 8) + lVar7 * 4);
        iVar2 = FUN_146c94f68(param_1,iVar1,local_58);
        if (iVar2 == 0) {
          for (piVar4 = *(int **)(param_1 + 0x60); piVar4 < piVar6; piVar4 = piVar4 + 1) {
            if (*piVar4 == iVar1) goto LAB_146c952e1;
          }
          piVar4 = piVar6;
          if (piVar6 == *(int **)(param_1 + 0x68)) {
            FUN_146c94fee(param_1,&local_50);
            piVar4 = local_50;
          }
          piVar6 = piVar4 + 1;
          *piVar4 = iVar1;
          local_50 = piVar6;
        }
        else if (iVar2 == -1) {
          uVar5 = 1;
          goto LAB_146c9534c;
        }
LAB_146c952e1:
        lVar7 = lVar7 + 1;
        lVar3 = (longlong)*param_2;
        piVar4 = local_50;
      } while (lVar7 < *(int *)(*(longlong *)(param_1 + 0x28) + lVar3 * 4));
    }
    piVar8 = piVar8 + 1;
    piVar6 = piVar4;
  } while (piVar8 < piVar4);
  uVar5 = 0;
LAB_146c9534c:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146c95374 FUN_146c95374 body=370 status=ok
// SIG undefined FUN_146c95374(void)

void FUN_146c95374(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  iVar6 = uVar1 * 2;
  lVar4 = (longlong)iVar6 * 4;
  lVar8 = -1;
  if (-1 < iVar6) {
    lVar8 = lVar4 + (ulonglong)(lVar4 == 0);
  }
  lVar4 = FUN_14001cc68();
  uVar3 = 0;
  if (0 < (longlong)(int)uVar1) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar5 * 4) = *(undefined4 *)(lVar7 + lVar5 * 4);
      lVar5 = lVar5 + 1;
      uVar3 = uVar1;
    } while ((int)uVar1 != lVar5);
  }
  if ((int)uVar3 < iVar6) {
    memset((void *)(lVar4 + (ulonglong)uVar3 * 4),0,(ulonglong)(~uVar3 + iVar6) * 4 + 4);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  lVar7 = (longlong)iVar6 * 8;
  *(longlong *)(param_1 + 0x38) = lVar4;
  lVar4 = -1;
  if (-1 < iVar6) {
    lVar4 = lVar7 + (ulonglong)(lVar7 == 0);
  }
  lVar7 = FUN_14001cc68(lVar4);
  iVar2 = *(int *)(param_1 + 0xc);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (0 < (longlong)iVar2) {
    lVar5 = 0;
    do {
      *(undefined8 *)(lVar7 + lVar5 * 8) = *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (iVar2 != lVar5);
  }
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x48) = lVar7;
  lVar4 = FUN_14001cc68(lVar8);
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar3 = 0;
  if (0 < (longlong)(int)uVar1) {
    lVar8 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar7 * 4) = *(undefined4 *)(lVar8 + lVar7 * 4);
      lVar7 = lVar7 + 1;
      uVar3 = uVar1;
    } while ((int)uVar1 != lVar7);
  }
  if ((int)uVar3 < iVar6) {
    memset((void *)(lVar4 + (ulonglong)uVar3 * 4),0,(ulonglong)(~uVar3 + iVar6) * 4 + 4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x40) = lVar4;
  FUN_146c96398(param_2,iVar6);
  *(int *)(param_1 + 0xc) = iVar6;
  return;
}



// FUNCTION 146c954e6 FUN_146c954e6 body=678 status=ok
// SIG undefined FUN_146c954e6(void)

void FUN_146c954e6(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  
  uVar1 = param_3 * 2;
  lVar12 = (longlong)param_3;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar12 * 4);
  iVar7 = (int)((longlong)(int)uVar1 + 1);
  if (iVar5 == 0) {
    lVar2 = (longlong)(param_3 * 8) * 4;
    lVar2 = lVar2 + (ulonglong)(lVar2 == 0);
    if (param_3 < 0) {
      lVar2 = -1;
    }
    uVar3 = FUN_14001cc68(lVar2,0x10);
    *(undefined8 *)(*(longlong *)(param_2 + 0xa0) + lVar12 * 8) = uVar3;
    lVar2 = (longlong)(iVar7 * 8) << 2;
    if ((int)uVar1 < 0) {
      lVar2 = -1;
    }
    uVar3 = FUN_14001cc68(lVar2,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar12 * 8) = uVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar12 * 4) = 8;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x38) + lVar12 * 4) = iVar5 * 2;
    lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + lVar12 * 4) *
            ((longlong)(int)uVar1 + 1);
    lVar4 = lVar2 * 4;
    lVar4 = lVar4 + (ulonglong)(lVar4 == 0);
    if ((int)lVar2 < 0) {
      lVar4 = -1;
    }
    lVar2 = FUN_14001cc68(lVar4,0x10);
    lVar6 = *(int *)(*(longlong *)(param_2 + 0x38) + lVar12 * 4) * lVar12;
    lVar4 = lVar6 * 4;
    lVar4 = lVar4 + (ulonglong)(lVar4 == 0);
    if ((int)lVar6 < 0) {
      lVar4 = -1;
    }
    uVar3 = FUN_14001cc68(lVar4);
    *(undefined8 *)(param_2 + 0xb0) = uVar3;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x40) + lVar12 * 4) * iVar7) {
      iVar5 = 0;
      iVar8 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar12 * 8);
        lVar6 = (longlong)*(int *)(lVar4 + (longlong)(int)(iVar8 + uVar1) * 4);
        if (lVar6 < 0) {
          piVar11 = *(int **)(param_1 + 0x60);
          if (piVar11 < param_4) {
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar11 * 8) ==
                  lVar4 + (longlong)iVar8 * 4) {
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar11 * 8) =
                     lVar2 + (longlong)iVar8 * 4;
                lVar6 = (longlong)*piVar11;
                goto LAB_146c955e7;
              }
              piVar11 = piVar11 + 1;
            } while (piVar11 < param_4);
          }
        }
        else {
          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar6 * 8) = lVar2 + (longlong)iVar8 * 4;
LAB_146c955e7:
          *(longlong *)(*(longlong *)(param_2 + 0xa8) + lVar6 * 8) =
               (longlong)iVar5 * 4 + *(longlong *)(param_2 + 0xb0);
        }
        if (-1 < (int)uVar1) {
          lVar4 = *(longlong *)(param_1 + 0x48);
          lVar6 = (longlong)iVar8;
          uVar9 = 0;
          do {
            *(undefined4 *)(lVar2 + lVar6 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar4 + lVar12 * 8) + lVar6 * 4);
            lVar6 = lVar6 + 1;
            uVar9 = uVar9 - 1;
          } while (~uVar1 != uVar9);
          iVar8 = iVar8 - uVar9;
        }
        if (0 < param_3) {
          lVar4 = (longlong)iVar5;
          iVar10 = 0;
          do {
            *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + lVar4 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + lVar12 * 8) + lVar4 * 4);
            lVar4 = lVar4 + 1;
            iVar10 = iVar10 + -1;
          } while (-param_3 != iVar10);
          iVar5 = iVar5 - iVar10;
        }
      } while (iVar8 < *(int *)(*(longlong *)(param_1 + 0x40) + lVar12 * 4) * iVar7);
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(lVar4 + lVar12 * 8) != 0) {
      FUN_1400020a8();
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    *(longlong *)(lVar4 + lVar12 * 8) = lVar2;
    lVar2 = *(longlong *)(param_2 + 0xa0);
    if (*(longlong *)(lVar2 + lVar12 * 8) != 0) {
      FUN_1400020a8();
      lVar2 = *(longlong *)(param_2 + 0xa0);
    }
    *(undefined8 *)(lVar2 + lVar12 * 8) = *(undefined8 *)(param_2 + 0xb0);
  }
  return;
}



// FUNCTION 146c9578c FUN_146c9578c body=276 status=ok
// SIG undefined FUN_146c9578c(void)

undefined4 FUN_146c9578c(longlong param_1,int param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x74);
  if (0 < (longlong)iVar7) {
    uVar6 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x78) + uVar6 * 4) == param_2) {
        puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + ((uVar6 & 0xffffffff) << 2 | 4));
        goto LAB_146c95883;
      }
      uVar6 = uVar6 + 2;
    } while ((int)uVar6 < iVar7);
  }
  if (iVar7 == *(int *)(param_1 + 0x70)) {
    iVar1 = iVar7 * 2;
    *(int *)(param_1 + 0x70) = iVar1;
    lVar3 = -1;
    if (-1 < iVar1) {
      lVar3 = (longlong)iVar1 * 4 + (ulonglong)((longlong)iVar1 * 4 == 0);
    }
    lVar3 = FUN_14001cc68(lVar3,0x10);
    lVar2 = *(longlong *)(param_1 + 0x78);
    if (0 < iVar7) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar3 + lVar4 * 4) = *(undefined4 *)(lVar2 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while (iVar7 != lVar4);
    }
    if (lVar2 != 0) {
      FUN_1400020a8();
      iVar7 = *(int *)(param_1 + 0x74);
    }
    *(longlong *)(param_1 + 0x78) = lVar3;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x74) = iVar7 + 1;
  *(int *)(lVar3 + (longlong)iVar7 * 4) = param_2;
  iVar7 = 1;
  if (*param_3 <= 1e-11) {
    iVar7 = -(uint)(*param_3 < -1e-11);
  }
  iVar1 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar1 + 1;
  *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 4) = iVar7;
  puVar5 = (undefined4 *)
           (*(longlong *)(param_1 + 0x78) + (longlong)*(int *)(param_1 + 0x74) * 4 + -4);
LAB_146c95883:
  return *puVar5;
}



// FUNCTION 146c958a0 FUN_146c958a0 body=103 status=ok
// SIG undefined FUN_146c958a0(void)

void FUN_146c958a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar1 = (undefined8 *)FUN_144737586();
  local_38 = &local_res18;
  __stdio_common_vfprintf(*puVar1,param_1,param_2,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c95908 FUN_146c95908 body=386 status=ok
// SIG undefined FUN_146c95908(void)

void FUN_146c95908(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (1 < iVar5) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar8 = 1;
    do {
      if (0 < *(int *)(lVar3 + uVar8 * 4)) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        lVar11 = 0;
        do {
          uVar2 = *(uint *)(*(longlong *)(lVar4 + uVar8 * 8) + lVar11 * 4);
          uVar10 = (ulonglong)(int)uVar2;
          if (-1 < (longlong)uVar10) {
            if ((undefined4 *)param_2[1] == (undefined4 *)param_2[2]) {
              FUN_14694bab6(param_2);
            }
            else {
              *(undefined4 *)param_2[1] =
                   *(undefined4 *)
                    (lVar11 * 4 + *(longlong *)(*(longlong *)(param_1 + 0xa8) + uVar8 * 8));
              param_2[1] = param_2[1] + 4;
            }
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8) + lVar11 * 4) =
                 ~uVar2;
            lVar4 = *(longlong *)(param_1 + 0x20);
            iVar5 = *(int *)(*(longlong *)(lVar4 + uVar8 * 8) +
                            ((longlong)(int)lVar11 +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + uVar8 * 4)) * 4);
            iVar6 = iVar5 + 1;
            if (*(int *)(*(longlong *)(param_1 + 0x28) + uVar10 * 4) + -1 == iVar5) {
              iVar6 = 0;
            }
            do {
              lVar9 = (longlong)(int)uVar10;
              lVar3 = *(longlong *)(lVar4 + lVar9 * 8);
              lVar7 = (longlong)iVar6;
              uVar2 = *(uint *)(lVar3 + lVar7 * 4);
              uVar10 = (ulonglong)uVar2;
              *(uint *)(lVar3 + lVar7 * 4) = ~uVar2;
              lVar4 = *(longlong *)(param_1 + 0x20);
              lVar3 = *(longlong *)(param_1 + 0x28);
              iVar5 = *(int *)(*(longlong *)(lVar4 + lVar9 * 8) +
                              (*(int *)(lVar3 + lVar9 * 4) + lVar7) * 4);
              iVar6 = iVar5 + 1;
              if (*(int *)(lVar3 + (longlong)(int)uVar2 * 4) + -1 == iVar5) {
                iVar6 = 0;
              }
            } while (uVar8 != uVar10);
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar3 + uVar8 * 4));
        iVar5 = *(int *)(param_1 + 0x18);
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar5);
  }
  if (0 < iVar5) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if (0 < *(int *)(lVar3 + lVar4 * 4)) {
        lVar11 = 0;
        do {
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4 * 8) + lVar11 * 4);
          *puVar1 = ~*puVar1;
          lVar11 = lVar11 + 1;
          lVar3 = *(longlong *)(param_1 + 0x28);
        } while (lVar11 < *(int *)(lVar3 + lVar4 * 4));
        iVar5 = *(int *)(param_1 + 0x18);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar5);
  }
  return;
}



// FUNCTION 146c95a8a FUN_146c95a8a body=1338 status=ok
// SIG undefined FUN_146c95a8a(void)

void FUN_146c95a8a(longlong param_1,double *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  FUN_140b463b8();
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar16 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    lVar9 = 0;
    do {
      *(double *)(*param_3 + lVar7) = *(double *)(lVar16 + lVar7) * 0.5 + *param_2;
      *(double *)(*param_3 + 8 + lVar7) = *(double *)(lVar16 + 8 + lVar7) * 0.5 + param_2[1];
      *(double *)(*param_3 + 0x10 + lVar7) = *(double *)(lVar16 + 0x10 + lVar7) * 0.5 + param_2[2];
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_14481578e(param_5,0);
  }
  *(undefined4 *)(param_6 + 1) = 0;
  if (*(int *)((longlong)param_6 + 0xc) < 0) {
    FUN_1447a8aa0(param_6,0);
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (1 < iVar6) {
    lVar16 = *(longlong *)(param_1 + 0x28);
    uVar14 = 1;
    uVar11 = 0;
    do {
      if (0 < *(int *)(lVar16 + uVar14 * 4)) {
        lVar7 = 0;
        do {
          uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar14 * 8) + lVar7 * 4);
          uVar13 = (ulonglong)(int)uVar2;
          if (-1 < (longlong)uVar13) {
            lVar16 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + uVar14 * 8);
            iVar6 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
              FUN_1446f48e2(param_5,iVar6);
            }
            *(undefined4 *)(*param_5 + (longlong)iVar6 * 4) = *(undefined4 *)(lVar16 + lVar7 * 4);
            iVar6 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar6 + 1U) {
              FUN_1446f48e2(param_4,iVar6);
            }
            *(undefined4 *)(*param_4 + (longlong)iVar6 * 4) = 0;
            iVar6 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar6 + 1U) {
              FUN_1446f48e2(param_4,iVar6);
            }
            *(int *)(*param_4 + (longlong)iVar6 * 4) = (int)uVar14;
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar14 * 8) + lVar7 * 4) =
                 ~uVar2;
            iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar14 * 8) +
                            ((longlong)(int)lVar7 +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + uVar14 * 4)) * 4);
            iVar6 = iVar3 + 1;
            if (*(int *)(*(longlong *)(param_1 + 0x28) + uVar13 * 4) + -1 == iVar3) {
              iVar6 = 0;
            }
            dVar19 = 0.0;
            dVar21 = 0.0;
            dVar23 = 0.0;
            uVar28 = 0;
            uVar29 = 0;
            uVar26 = 0;
            uVar27 = 0;
            uVar24 = 0;
            uVar25 = 0;
            dVar4 = 0.0;
            dVar5 = 0.0;
            do {
              iVar3 = (int)param_4[1];
              *(uint *)(param_4 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
                FUN_1446f48e2(param_4,iVar3);
              }
              iVar15 = (int)uVar13;
              *(int *)(*param_4 + (longlong)iVar3 * 4) = iVar15;
              lVar9 = (longlong)iVar15;
              lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9 * 8);
              lVar10 = (longlong)iVar6;
              uVar2 = *(uint *)(lVar16 + lVar10 * 4);
              uVar13 = (ulonglong)uVar2;
              lVar8 = (longlong)(int)uVar2;
              *(uint *)(lVar16 + lVar10 * 4) = ~uVar2;
              if (dVar5 <= 9.999999999999999e-23) {
                lVar16 = *(longlong *)(param_1 + 0x30);
                lVar12 = (longlong)(iVar15 * 3);
                dVar18 = *(double *)(lVar16 + lVar8 * 0x18) - *(double *)(lVar16 + lVar12 * 8);
                dVar17 = *(double *)(lVar16 + 8 + lVar8 * 0x18) -
                         *(double *)(lVar16 + 8 + lVar12 * 8);
                dVar20 = *(double *)(lVar16 + 0x10 + lVar8 * 0x18) -
                         *(double *)(lVar16 + 0x10 + lVar12 * 8);
                if (9.999999999999999e-23 < dVar4) {
                  dVar22 = (double)CONCAT44(uVar27,uVar26) * dVar17 -
                           dVar20 * (double)CONCAT44(uVar29,uVar28);
                  dVar20 = (double)CONCAT44(uVar25,uVar24) * dVar20 -
                           dVar18 * (double)CONCAT44(uVar27,uVar26);
                  dVar18 = (double)CONCAT44(uVar29,uVar28) * dVar18 -
                           dVar17 * (double)CONCAT44(uVar25,uVar24);
                  dVar5 = dVar18 * dVar18 + dVar22 * dVar22 + dVar20 * dVar20;
                  if (9.999999999999999e-23 < dVar5) {
                    dVar19 = 1.0 / SQRT(dVar5);
                    dVar23 = dVar22 * dVar19;
                    dVar21 = dVar20 * dVar19;
                    dVar19 = dVar18 * dVar19;
                  }
                  goto LAB_146c95d4f;
                }
                dVar4 = dVar20 * dVar20 + dVar18 * dVar18 + dVar17 * dVar17;
              }
              else {
LAB_146c95d4f:
                dVar17 = (double)CONCAT44(uVar29,uVar28);
                dVar20 = (double)CONCAT44(uVar27,uVar26);
                dVar18 = (double)CONCAT44(uVar25,uVar24);
              }
              iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9 * 8) +
                              (*(int *)(*(longlong *)(param_1 + 0x28) + lVar9 * 4) + lVar10) * 4);
              iVar6 = iVar3 + 1;
              if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar8 * 4) + -1 == iVar3) {
                iVar6 = 0;
              }
              uVar28 = SUB84(dVar17,0);
              uVar29 = (undefined4)((ulonglong)dVar17 >> 0x20);
              uVar26 = SUB84(dVar20,0);
              uVar27 = (undefined4)((ulonglong)dVar20 >> 0x20);
              uVar24 = SUB84(dVar18,0);
              uVar25 = (undefined4)((ulonglong)dVar18 >> 0x20);
            } while (uVar14 != uVar13);
            iVar6 = (int)param_6[1];
            lVar16 = (longlong)iVar6;
            *(uint *)(param_6 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_6 + 0xc) < iVar6 + 1U) {
              FUN_1403e3958(param_6,iVar6);
            }
            lVar9 = *param_6;
            *(double *)(lVar9 + lVar16 * 0x18) = dVar23;
            *(double *)(lVar9 + 8 + lVar16 * 0x18) = dVar21;
            *(double *)(lVar9 + 0x10 + lVar16 * 0x18) = dVar19;
            uVar2 = *(uint *)(param_4 + 1);
            *(uint *)(*param_4 + (longlong)(int)uVar11 * 4) = ~uVar11 + uVar2;
            lVar16 = *(longlong *)(param_1 + 0x28);
            uVar11 = uVar2;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar16 + uVar14 * 4));
        iVar6 = *(int *)(param_1 + 0x18);
      }
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)iVar6);
  }
  if (0 < iVar6) {
    lVar16 = *(longlong *)(param_1 + 0x28);
    lVar7 = 0;
    do {
      if (0 < *(int *)(lVar16 + lVar7 * 4)) {
        lVar9 = 0;
        do {
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8) + lVar9 * 4);
          *puVar1 = ~*puVar1;
          lVar9 = lVar9 + 1;
          lVar16 = *(longlong *)(param_1 + 0x28);
        } while (lVar9 < *(int *)(lVar16 + lVar7 * 4));
        iVar6 = *(int *)(param_1 + 0x18);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  return;
}



// FUNCTION 146c95fc4 FUN_146c95fc4 body=156 status=ok
// SIG undefined FUN_146c95fc4(void)

void FUN_146c95fc4(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2;
  if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar2 * 4) < 1) {
    FUN_14678752e("     ()");
  }
  else {
    FUN_14678752e("     (");
    if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar2 * 4) < 2) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar1 = lVar3 * 4;
        lVar3 = lVar3 + 1;
        FUN_14678752e(&DAT_149f3cfef,
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar2 * 8) + lVar1));
      } while (lVar3 < (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + lVar2 * 4) + -1);
    }
    FUN_14678752e(&DAT_149f3cff3,
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar2 * 8) + lVar3 * 4));
  }
  return;
}



// FUNCTION 146c96060 FUN_146c96060 body=43 status=ok
// SIG undefined FUN_146c96060(void)

undefined8 FUN_146c96060(undefined8 param_1,int param_2)

{
  FUN_1403b0fea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 146c9608c FUN_146c9608c body=43 status=ok
// SIG undefined FUN_146c9608c(void)

undefined8 FUN_146c9608c(undefined8 param_1,int param_2)

{
  FUN_1403b0dd8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 146c960b8 FUN_146c960b8 body=189 status=ok
// SIG undefined FUN_146c960b8(void)

void FUN_146c960b8(longlong *param_1,ulonglong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 >> 0x3e == 0) {
    uVar3 = param_1[1] - *param_1;
    uVar1 = param_1[2] - *param_1 >> 2;
    uVar2 = (uVar1 >> 1) + uVar1;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x3fffffffffffffff - (uVar1 >> 1) < uVar1) {
      uVar2 = 0x3fffffffffffffff;
    }
    _Dst = (void *)FUN_14627a224(param_1);
    memset((void *)(uVar3 + (longlong)_Dst),0,(param_2 - (uVar3 >> 2)) * 4);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_14694af0e(param_1,_Dst,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694aefc();
}



// FUNCTION 146c96176 FUN_146c96176 body=436 status=ok
// SIG undefined FUN_146c96176(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c96176(longlong *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694aefc();
  }
  lVar7 = param_1[1] - *param_1;
  uVar3 = param_1[2] - *param_1 >> 2;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x3fffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_14627a224(param_1);
  auVar2 = _DAT_149931e80;
  lVar5 = param_2 - (lVar7 >> 2);
  iVar1 = *param_3;
  if (iVar1 == 0) {
    memset((void *)((longlong)_Dst + lVar7),0,lVar5 * 4);
  }
  else if (param_2 != lVar7 >> 2) {
    lVar6 = lVar5 + -1;
    auVar8._8_4_ = (int)lVar6;
    auVar8._0_8_ = lVar6;
    auVar8._12_4_ = (int)((ulonglong)lVar6 >> 0x20);
    uVar3 = 0;
    auVar10 = pmovsxbq(in_XMM1,0x302);
    auVar11 = pmovsxbq(in_XMM2,0x100);
    auVar8 = auVar8 ^ _DAT_149931e80;
    do {
      lVar6 = auVar8._0_8_;
      lVar9 = auVar8._8_8_;
      if ((bool)(~(lVar6 < (longlong)(uVar3 ^ auVar2._0_8_)) & 1)) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7) = iVar1;
      }
      auVar12._8_4_ = (int)uVar3;
      auVar12._0_8_ = uVar3;
      auVar12._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar12._8_8_ | auVar11._8_8_) ^ auVar2._8_8_) <= lVar9) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7 + 4) = iVar1;
      }
      auVar12 = (auVar12 | auVar10) ^ auVar2;
      if (auVar12._0_8_ <= lVar6) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7 + 8) = iVar1;
      }
      if (auVar12._8_8_ <= lVar9) {
        *(int *)((longlong)_Dst + uVar3 * 4 + lVar7 + 0xc) = iVar1;
      }
      uVar3 = uVar3 + 4;
    } while ((lVar5 + 3U & 0xfffffffffffffffc) != uVar3);
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  FUN_14694af0e(param_1,_Dst,param_2,uVar4);
  return;
}



// FUNCTION 146c9632c FUN_146c9632c body=107 status=ok
// SIG undefined FUN_146c9632c(void)

void FUN_146c9632c(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = -1;
  if (-1 < (int)param_2) {
    lVar3 = (ulonglong)param_2 * 8 + (ulonglong)((ulonglong)param_2 == 0);
  }
  lVar2 = FUN_14001cc68(lVar3);
  iVar1 = *(int *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar3 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0xa8) = lVar2;
  return;
}



// FUNCTION 146c96398 FUN_146c96398 body=107 status=ok
// SIG undefined FUN_146c96398(void)

void FUN_146c96398(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = -1;
  if (-1 < (int)param_2) {
    lVar3 = (ulonglong)param_2 * 8 + (ulonglong)((ulonglong)param_2 == 0);
  }
  lVar2 = FUN_14001cc68(lVar3);
  iVar1 = *(int *)(param_1 + 0xc);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar3 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (iVar1 != lVar4);
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0xa0) = lVar2;
  return;
}



// FUNCTION 146c96404 FUN_146c96404 body=374 status=ok
// SIG undefined FUN_146c96404(void)

void FUN_146c96404(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x40);
  iVar1 = *(int *)(lVar7 + 4);
  while (0 < iVar1) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    lVar6 = (longlong)*(int *)(lVar7 + 4) + -1;
    *(int *)(lVar7 + 4) = (int)lVar6;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
    iVar1 = *(int *)(lVar7 + 8 + lVar6 * 0xc);
    FUN_146c9657a(param_1,param_2,*(undefined4 *)(lVar7 + lVar6 * 0xc),
                  *(undefined4 *)(lVar7 + 4 + lVar6 * 0xc),0);
    lVar7 = (longlong)*(int *)(param_1 + 0x18) + -1;
    iVar5 = (int)lVar7;
    *(int *)(param_1 + 0x18) = iVar5;
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == iVar1) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      iVar3 = 0;
    }
    if (iVar5 != iVar1) {
      if (iVar3 == iVar5) {
        *(int *)(param_1 + 0x1c) = iVar1;
      }
      lVar4 = (longlong)iVar1;
      lVar6 = lVar4 * 0x18;
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar6) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar7 * 0x18);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + lVar6) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x30) + 8 + (longlong)*(int *)(param_1 + 0x18) * 0x18);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar6) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)*(int *)(param_1 + 0x18) * 0x18);
      lVar7 = (longlong)*(int *)(param_1 + 0x18);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + lVar7 * 4);
      uVar8 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        lVar6 = 0;
        do {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
          *(int *)(*(longlong *)
                    (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar7 + lVar6 * 4) * 8) +
                  (longlong)*(int *)(lVar7 + ((int)uVar8 + lVar6) * 4) * 4) = iVar1;
          lVar6 = lVar6 + 1;
          lVar7 = (longlong)*(int *)(param_1 + 0x18);
          uVar8 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x28) + lVar7 * 4);
        } while (lVar6 < (longlong)uVar8);
      }
      *(undefined8 *)(*(longlong *)(param_2 + 0xa8) + lVar4 * 8) =
           *(undefined8 *)(*(longlong *)(param_2 + 0xa8) + lVar7 * 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar4 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x18) * 8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x18) * 4);
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4 * 8) +
              (longlong)(*(int *)(*(longlong *)(param_1 + 0x28) + lVar4 * 4) * 2) * 4) = iVar1;
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    iVar1 = *(int *)(lVar7 + 4);
  }
  return;
}



// FUNCTION 146c9657a FUN_146c9657a body=836 status=ok
// SIG undefined FUN_146c9657a(void)

void FUN_146c9657a(longlong param_1,longlong param_2,int param_3,uint param_4,char param_5)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  
  lVar15 = (longlong)param_3;
  lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4);
  uVar9 = lVar13 - 1;
  uVar14 = param_4 + 1;
  uVar8 = (uint)uVar9;
  if (uVar8 == param_4) {
    uVar14 = 0;
  }
  if (param_5 != '\0') {
    uVar14 = param_4;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x40) + -4 + lVar13 * 4) ==
      *(int *)(*(longlong *)(param_1 + 0x38) + -4 + lVar13 * 4)) {
    FUN_146c954e6(param_1,param_2,uVar9 & 0xffffffff,*(undefined8 *)(param_1 + 0x60));
  }
  *(longlong *)(param_2 + 0xb0) =
       (longlong)(int)uVar8 * (longlong)*(int *)(*(longlong *)(param_2 + 0x40) + -4 + lVar13 * 4) *
       4 + *(longlong *)(*(longlong *)(param_2 + 0xa0) + -8 + lVar13 * 8);
  uVar7 = 0;
  if (0 < (int)uVar14) {
    uVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + uVar5 * 4) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0xa8) + lVar15 * 8) + uVar5 * 4);
      uVar5 = uVar5 + 1;
      uVar7 = uVar14;
    } while (uVar14 != uVar5);
  }
  if ((int)uVar7 < (int)uVar8) {
    uVar5 = (ulonglong)uVar7;
    do {
      *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + uVar5 * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_2 + 0xa8) + lVar15 * 8) + 4 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while ((uVar9 & 0xffffffff) != uVar5);
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x48) + -8 + lVar13 * 8);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + -4 + lVar13 * 4);
  *(int *)(*(longlong *)(param_1 + 0x40) + -4 + lVar13 * 4) = iVar4 + 1;
  lVar6 = (longlong)(int)(iVar4 * (uVar8 * 2 + 1));
  lVar1 = lVar12 + lVar6 * 4;
  *(int *)(lVar1 + (longlong)(int)(uVar8 * 2) * 4) = param_3;
  if ((int)param_4 < 1) {
    param_4 = 0;
  }
  else {
    uVar5 = 0;
    do {
      *(undefined4 *)(lVar1 + uVar5 * 4) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8) + uVar5 * 4);
      *(undefined4 *)(lVar1 + uVar9 * 4 + uVar5 * 4) =
           *(undefined4 *)
            ((longlong)*(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) * 4 +
             *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8) + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (param_4 != uVar5);
  }
  if ((int)param_4 < (int)uVar8) {
    lVar3 = (ulonglong)param_4 * 4;
    lVar6 = lVar3 + lVar6 * 4;
    lVar11 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8) + lVar3 + 4 +
                      lVar11 * 4);
      *(int *)(lVar12 + lVar6 + lVar11 * 4) = iVar4;
      iVar10 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) * 4 +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8) + lVar3 + 4 +
                       lVar11 * 4);
      *(int *)(lVar6 + lVar13 * 4 + lVar12 + -4 + lVar11 * 4) = iVar10;
      piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 8) +
                      ((longlong)*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4) +
                      (longlong)iVar10) * 4);
      *piVar2 = *piVar2 + -1;
      lVar11 = lVar11 + 1;
    } while ((uVar9 & 0xffffffff) - (ulonglong)param_4 != lVar11);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4);
  lVar12 = (longlong)iVar4;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar12 * 8);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar12 * 4) + -1;
  *(int *)(*(longlong *)(param_1 + 0x40) + lVar12 * 4) = iVar10;
  uVar14 = *(uint *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4);
  if ((uVar14 >> 0x1e & 1) == 0) {
    lVar12 = -1;
    do {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8) + 4 + lVar12 * 4) =
           *(undefined4 *)(lVar13 + (longlong)(iVar10 * (iVar4 * 2 + 1)) * 4 + 4 + lVar12 * 4);
      uVar14 = *(uint *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)(uVar14 * 2));
  }
  lVar13 = lVar13 + (longlong)((iVar4 * 2 + 1) * iVar10) * 4;
  lVar12 = (longlong)(int)uVar14;
  lVar12 = *(int *)(*(longlong *)(param_2 + 0x40) + lVar12 * 4) * lVar12 * 4 +
           *(longlong *)(*(longlong *)(param_2 + 0xa0) + lVar12 * 8);
  *(longlong *)(param_2 + 0xb8) = lVar12;
  if (0 < (int)uVar14) {
    uVar9 = 0;
    do {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0xa8) + lVar15 * 8) + uVar9 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0xb8) + uVar9 * 4);
      uVar9 = uVar9 + 1;
    } while (uVar14 != uVar9);
    lVar12 = *(longlong *)(param_2 + 0xb8);
  }
  *(longlong *)
   (*(longlong *)(param_2 + 0xa8) +
   (longlong)
   *(int *)(lVar13 + (longlong)(*(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) * 2) * 4) * 8)
       = lVar12;
  *(undefined8 *)(*(longlong *)(param_2 + 0xa8) + lVar15 * 8) = *(undefined8 *)(param_2 + 0xb0);
  *(longlong *)
   (*(longlong *)(param_1 + 0x20) +
   (longlong)
   *(int *)(lVar13 + (longlong)(*(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) * 2) * 4) * 8)
       = lVar13;
  *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8) = lVar1;
  *(uint *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) = uVar8;
  return;
}



// FUNCTION 146c968be FUN_146c968be body=255 status=ok
// SIG undefined FUN_146c968be(void)

void FUN_146c968be(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x74) * 2;
  *(int *)(param_1 + 0x74) = iVar2;
  lVar5 = -1;
  if (-1 < iVar2) {
    lVar5 = (longlong)iVar2 * 4 + (ulonglong)((longlong)iVar2 * 4 == 0);
  }
  puVar3 = (undefined4 *)FUN_14001cc68(lVar5,0x10);
  puVar4 = (undefined4 *)*param_2;
  puVar6 = puVar3;
  if ((undefined4 *)*param_3 < puVar4) {
    if (puVar4 < *(undefined4 **)(param_1 + 0x98)) {
      do {
        puVar1 = puVar4 + 1;
        *param_2 = (ulonglong)puVar1;
        *puVar6 = *puVar4;
        puVar6 = puVar6 + 1;
        puVar4 = puVar1;
      } while (puVar1 < *(undefined4 **)(param_1 + 0x98));
    }
    puVar4 = *(undefined4 **)(param_1 + 0x90);
    *param_2 = (ulonglong)puVar4;
    while (puVar4 < (undefined4 *)*param_3) {
      *param_2 = (ulonglong)(puVar4 + 1);
      *puVar6 = *puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (undefined4 *)*param_2;
    }
  }
  else if (puVar4 < (undefined4 *)*param_3) {
    do {
      puVar1 = puVar4 + 1;
      *param_2 = (ulonglong)puVar1;
      *puVar6 = *puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = puVar1;
    } while (puVar1 < (undefined4 *)*param_3);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    thunk_FUN_1400020a8();
  }
  *(undefined4 **)(param_1 + 0x90) = puVar3;
  *param_2 = (ulonglong)puVar3;
  *(longlong *)(param_1 + 0x98) =
       (longlong)*(int *)(param_1 + 0x74) * 4 + *(longlong *)(param_1 + 0x90);
  *param_3 = (ulonglong)puVar6;
  return;
}



// FUNCTION 146c969d8 FUN_146c969d8 body=538 status=ok
// SIG undefined FUN_146c969d8(void)

void FUN_146c969d8(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_64 = param_2;
  puVar3 = (undefined8 *)FUN_146e1f7cc();
  if ((puVar3 != (undefined8 *)0x0) &&
     (local_b0 = (longlong)*(int *)(param_1 + 0x38), local_b0 != 0)) {
    local_a8 = *(longlong *)(param_1 + 0x30);
    local_b0 = local_b0 << 3;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + lVar7);
      local_a0 = local_64;
      local_98 = *puVar3;
      local_90 = (void *)0x0;
      iVar1 = *(int *)(puVar3 + 2);
      _Src = (void *)puVar3[1];
      local_88._0_4_ = iVar1;
      if ((longlong)iVar1 == 0) {
        local_88._4_4_ = 0;
      }
      else {
        FUN_1447bda9e(&local_90,iVar1,0);
        memcpy(local_90,_Src,(longlong)iVar1 << 2);
      }
      local_78 = *(undefined4 *)(puVar3 + 4);
      local_80 = puVar3[3];
      local_70 = lVar2;
      puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,8);
      *puVar5 = &PTR_LAB_149f45ad0;
      *(undefined4 *)(puVar5 + 1) = local_a0;
      puVar5[2] = local_98;
      puVar5[3] = local_90;
      local_90 = (void *)0x0;
      *(int *)(puVar5 + 4) = (int)local_88;
      *(undefined4 *)((longlong)puVar5 + 0x24) = local_88._4_4_;
      local_88 = 0;
      *(undefined4 *)(puVar5 + 6) = local_78;
      puVar5[5] = local_80;
      puVar6 = &LAB_142987a4e;
      if (puVar5 + 1 == (undefined8 *)0x0) {
        puVar6 = (undefined1 *)0x0;
      }
      puVar5[7] = local_70;
      *(undefined2 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined2 *)(puVar4 + 8) = 1;
      *puVar4 = &PTR_FUN_149f45dc0;
      puVar4[10] = puVar6;
      puVar4[0xc] = puVar5;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      FUN_1406e6496(lVar2 + 0x70,puVar4);
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 8;
    } while (local_b0 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c96bf4 FUN_146c96bf4 body=269 status=ok
// SIG undefined FUN_146c96bf4(void)

void FUN_146c96bf4(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = param_2;
  lVar4 = FUN_146e1f7cc();
  if ((lVar4 != 0) && (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    do {
      uVar3 = local_64;
      lVar2 = *(longlong *)(lVar4 + lVar6);
      puVar5 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar5 + 1) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      *(undefined2 *)(puVar5 + 8) = 1;
      *puVar5 = &PTR_FUN_149f45dc0;
      puVar5[10] = &LAB_142987ac2;
      puVar5[0xc] = 0;
      puVar5[0xe] = &PTR_LAB_149f45af0;
      *(undefined4 *)(puVar5 + 0xf) = uVar3;
      puVar5[0x10] = lVar2;
      puVar5[0x12] = 0;
      puVar5[0x14] = 0;
      *(undefined1 *)(puVar5 + 0x1a) = 0;
      FUN_1406e6496(lVar2 + 0x70,puVar5);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c96d02 FUN_146c96d02 body=538 status=ok
// SIG undefined FUN_146c96d02(void)

void FUN_146c96d02(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_64 = param_2;
  puVar3 = (undefined8 *)FUN_146e1f7cc();
  if ((puVar3 != (undefined8 *)0x0) &&
     (local_b0 = (longlong)*(int *)(param_1 + 0x38), local_b0 != 0)) {
    local_a8 = *(longlong *)(param_1 + 0x30);
    local_b0 = local_b0 << 3;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(local_a8 + lVar7);
      local_a0 = local_64;
      local_98 = *puVar3;
      local_90 = (void *)0x0;
      iVar1 = *(int *)(puVar3 + 2);
      _Src = (void *)puVar3[1];
      local_88._0_4_ = iVar1;
      if ((longlong)iVar1 == 0) {
        local_88._4_4_ = 0;
      }
      else {
        FUN_1447bda9e(&local_90,iVar1,0);
        memcpy(local_90,_Src,(longlong)iVar1 << 2);
      }
      local_78 = *(undefined4 *)(puVar3 + 4);
      local_80 = puVar3[3];
      local_70 = lVar2;
      puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,8);
      *puVar5 = &PTR_LAB_149f45ab0;
      *(undefined4 *)(puVar5 + 1) = local_a0;
      puVar5[2] = local_98;
      puVar5[3] = local_90;
      local_90 = (void *)0x0;
      *(int *)(puVar5 + 4) = (int)local_88;
      *(undefined4 *)((longlong)puVar5 + 0x24) = local_88._4_4_;
      local_88 = 0;
      *(undefined4 *)(puVar5 + 6) = local_78;
      puVar5[5] = local_80;
      puVar6 = &LAB_1429879da;
      if (puVar5 + 1 == (undefined8 *)0x0) {
        puVar6 = (undefined1 *)0x0;
      }
      puVar5[7] = local_70;
      *(undefined2 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined2 *)(puVar4 + 8) = 1;
      *puVar4 = &PTR_FUN_149f45dc0;
      puVar4[10] = puVar6;
      puVar4[0xc] = puVar5;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      FUN_1406e6496(lVar2 + 0x70,puVar4);
      if (local_90 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 8;
    } while (local_b0 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c96f1e FUN_146c96f1e body=366 status=ok
// SIG undefined FUN_146c96f1e(void)

void FUN_146c96f1e(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0x208);
  local_30 = param_2;
  local_28 = param_3;
  if (uVar1 != param_3) {
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        lVar5 = param_1 + 0x78;
        if (*(longlong *)(param_1 + 0x80) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x80);
        }
        iVar6 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_1 + 0x88) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        if (iVar6 != -1) {
          do {
            lVar5 = *(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x20;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x20) == uVar1)
            goto LAB_146c96f5b;
            iVar6 = *(int *)(lVar5 + 0x18);
          } while (iVar6 != -1);
        }
      }
      lVar5 = 0;
LAB_146c96f5b:
      lVar4 = lVar5 + 8;
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      local_20 = &local_30;
      FUN_142987704(lVar4);
    }
    *(ulonglong *)(local_30 + 0x208) = local_28;
    if (local_28 != 0) {
      uVar2 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = (longlong *)FUN_14611502c(param_1 + 0x40,uVar2 >> 0x10 ^ uVar2,&local_28);
      iVar6 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar6 + 1U) {
        FUN_14013439c(plVar3,iVar6);
      }
      *(longlong *)(*plVar3 + (longlong)iVar6 * 8) = local_30;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c9708e FUN_146c9708e body=29 status=ok
// SIG undefined FUN_146c9708e(void)

undefined8 FUN_146c9708e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c970ac FUN_146c970ac body=4 status=ok
// SIG undefined FUN_146c970ac(void)

undefined8 FUN_146c970ac(void)

{
  return 0;
}



// FUNCTION 146c970b0 FUN_146c970b0 body=3 status=ok
// SIG undefined FUN_146c970b0(void)

undefined8 FUN_146c970b0(void)

{
  return 0;
}



// FUNCTION 146c970bc FUN_146c970bc body=3 status=ok
// SIG undefined FUN_146c970bc(void)

undefined8 FUN_146c970bc(void)

{
  return 0;
}



// FUNCTION 146c970c0 FUN_146c970c0 body=4 status=ok
// SIG undefined FUN_146c970c0(void)

undefined8 FUN_146c970c0(void)

{
  return 0;
}



// FUNCTION 146c970c4 FUN_146c970c4 body=3 status=ok
// SIG undefined FUN_146c970c4(void)

undefined8 FUN_146c970c4(void)

{
  return 0;
}



// FUNCTION 146c970c8 FUN_146c970c8 body=4 status=ok
// SIG undefined FUN_146c970c8(void)

undefined8 FUN_146c970c8(void)

{
  return 0;
}



// FUNCTION 146c970cc FUN_146c970cc body=3 status=ok
// SIG undefined FUN_146c970cc(void)

undefined8 FUN_146c970cc(void)

{
  return 0;
}



// FUNCTION 146c970d0 FUN_146c970d0 body=4 status=ok
// SIG undefined FUN_146c970d0(void)

undefined8 FUN_146c970d0(void)

{
  return 0;
}



// FUNCTION 146c970d4 FUN_146c970d4 body=3 status=ok
// SIG undefined FUN_146c970d4(void)

undefined8 FUN_146c970d4(void)

{
  return 0;
}



// FUNCTION 146c970d8 FUN_146c970d8 body=4 status=ok
// SIG undefined FUN_146c970d8(void)

undefined8 FUN_146c970d8(void)

{
  return 0;
}



// FUNCTION 146c970dc FUN_146c970dc body=4 status=ok
// SIG undefined FUN_146c970dc(void)

undefined8 FUN_146c970dc(void)

{
  return 0;
}



// FUNCTION 146c97118 FUN_146c97118 body=63 status=ok
// SIG undefined FUN_146c97118(void)

undefined1 FUN_146c97118(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146ecd102(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 146c97180 FUN_146c97180 body=59 status=ok
// SIG undefined FUN_146c97180(void)

undefined8 FUN_146c97180(longlong *param_1)

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



// FUNCTION 146c971cc FUN_146c971cc body=38 status=ok
// SIG undefined FUN_146c971cc(void)

void FUN_146c971cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14054b30a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 146c97240 FUN_146c97240 body=380 status=ok
// SIG undefined FUN_146c97240(void)

undefined8 * FUN_146c97240(undefined8 *param_1)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1414db454();
  *param_1 = &PTR_FUN_149f44400;
  FUN_1446ddc76(&local_48,"VectorField",1);
  FUN_140b203e2(param_1,local_48);
  local_58 = 0;
  local_50 = 1;
  FUN_1446ddc76(&local_60,"VectorField",1);
  FUN_1446ddc76(&local_68,"Start",1);
  FUN_140676448(param_1,local_68,local_60,&local_58);
  local_78 = 0;
  local_70 = 1;
  FUN_1446ddc76(&local_80,"VectorField",1);
  FUN_1446ddc76(&local_88,&DAT_149ec5378,1);
  FUN_140676448(param_1,local_88,local_80,&local_78);
  local_98 = 0;
  local_90 = 1;
  FUN_1446ddc76(&local_a0,"VectorField",1);
  FUN_1446ddc76(&local_a8,"Color",1);
  FUN_146c973be(param_1,local_a8,local_a0,&local_98);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c973be FUN_146c973be body=70 status=ok
// SIG undefined FUN_146c973be(void)

void FUN_146c973be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_146c97a0a(param_1,param_2,param_3,param_4);
  }
  FUN_146c97c1a(param_1,param_2,param_3);
  return;
}



// FUNCTION 146c97404 FUN_146c97404 body=38 status=ok
// SIG undefined FUN_146c97404(void)

undefined8 FUN_146c97404(undefined8 param_1,int param_2)

{
  FUN_14054b30a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c9742a FUN_146c9742a body=100 status=ok
// SIG undefined FUN_146c9742a(void)

undefined4 FUN_146c9742a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"FManagedArrayCollection",1);
  local_28 = local_28 ^ (uint)param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT31((int3)(local_28 >> 8),
                    (int)((ulonglong)param_2 >> 0x20) == local_24 && local_28 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c97490 FUN_146c97490 body=187 status=ok
// SIG undefined FUN_146c97490(void)

void FUN_146c97490(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146c9778a();
  if (0 < (int)uVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(*param_2 + uVar4 * 4);
      lVar1 = param_1[2];
      *(undefined4 *)(local_48 + 8 + lVar3) = *(undefined4 *)(lVar1 + 8 + lVar5 * 0xc);
      *(undefined8 *)(local_48 + lVar3) = *(undefined8 *)(lVar1 + lVar5 * 0xc);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (uVar2 != uVar4);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c97550 FUN_146c97550 body=199 status=ok
// SIG undefined FUN_146c97550(void)

void FUN_146c97550(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar3 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar3)) {
    lVar6 = (longlong)(param_5 + param_3);
    lVar7 = (longlong)param_3;
    lVar4 = lVar7 * 0xc;
    lVar5 = lVar6 * 0xc;
    do {
      if ((int)param_1[3] <= lVar6) {
        return;
      }
      if (param_4 <= lVar7) {
        return;
      }
      lVar1 = param_2[2];
      lVar2 = param_1[2];
      *(undefined4 *)(lVar2 + 8 + lVar5) = *(undefined4 *)(lVar1 + 8 + lVar4);
      *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(lVar1 + lVar4);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 1;
      iVar3 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar4 = lVar4 + 0xc;
      lVar5 = lVar5 + 0xc;
    } while (lVar7 < iVar3);
  }
  return;
}



// FUNCTION 146c97626 FUN_146c97626 body=265 status=ok
// SIG undefined FUN_146c97626(void)

void FUN_146c97626(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar2 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar2 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar7 = iVar2 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar3 = (void *)((longlong)iVar6 * 0xc + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)iVar5 * 0xc),(longlong)iVar7 * 0xc)
            ;
            iVar2 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar2 - iVar5;
          piVar1 = (int *)*param_2;
          iVar2 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar2;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar7 = iVar2 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar3 = (void *)((longlong)*piVar1 * 0xc + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)pvVar3 + (longlong)iVar6 * 0xc),(longlong)iVar7 * 0xc);
          iVar2 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar2 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140678446(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146c97750 FUN_146c97750 body=57 status=ok
// SIG undefined FUN_146c97750(void)

undefined8 * FUN_146c97750(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f45be0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c9778a FUN_146c9778a body=69 status=ok
// SIG undefined FUN_146c9778a(void)

int FUN_146c9778a(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140c0b6f2(param_1,iVar1);
  }
  FUN_146bed2a3((longlong)iVar1 * 0xc + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146c977cf FUN_146c977cf body=260 status=ok
// SIG undefined FUN_146c977cf(void)

longlong * FUN_146c977cf(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
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
      FUN_140678446(param_2);
    }
    FUN_146bca1c8(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1447712aa(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0xc;
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



// FUNCTION 146c978d6 FUN_146c978d6 body=306 status=ok
// SIG undefined FUN_146c978d6(void)

longlong * FUN_146c978d6(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
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
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140678446(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140c0b9de(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 * 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c97a0a FUN_146c97a0a body=526 status=ok
// SIG undefined FUN_146c97a0a(void)

void FUN_146c97a0a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_146c97aa4;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_146c97aa4:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c992544) && (FUN_144b3d300(&DAT_14c992544), DAT_14c992544 == -1)) {
    DAT_14c99253c = 0;
    _Init_thread_footer(&DAT_14c992544);
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c99253c;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f45c70;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_146c9808c(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c97c1a FUN_146c97c1a body=251 status=ok
// SIG undefined FUN_146c97c1a(void)

void FUN_146c97c1a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) goto LAB_146c97c2a;
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  lVar2 = 0;
LAB_146c97c2a:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 146c97d16 FUN_146c97d16 body=178 status=ok
// SIG undefined FUN_146c97d16(void)

void FUN_146c97d16(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_48 = 0;
  lStack_40 = 0;
  FUN_146c98046(&local_48,uVar4);
  if (0 < (int)uVar4) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[2] + (longlong)*(int *)(*param_2 + lVar5) * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(local_48 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar5 = lVar5 + 4;
    } while ((ulonglong)uVar4 << 2 != lVar5);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = local_48;
  param_1[3] = lStack_40;
  local_48 = local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c97dca FUN_146c97dca body=98 status=ok
// SIG undefined FUN_146c97dca(void)

void FUN_146c97dca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_1[2];
      uVar2 = ((undefined8 *)(param_2[2] + lVar4))[1];
      *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(param_2[2] + lVar4);
      ((undefined8 *)(lVar1 + lVar4))[1] = uVar2;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar4);
  }
  return;
}



// FUNCTION 146c97e2c FUN_146c97e2c body=181 status=ok
// SIG undefined FUN_146c97e2c(void)

void FUN_146c97e2c(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar6 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar6)) {
    lVar9 = (longlong)(param_5 + param_3);
    lVar10 = (longlong)param_3;
    lVar7 = lVar10 << 4;
    lVar8 = lVar9 << 4;
    do {
      if ((int)param_1[3] <= lVar9) {
        return;
      }
      if (param_4 <= lVar10) {
        return;
      }
      puVar1 = (undefined4 *)(param_2[2] + lVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_1[2] + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 1;
      iVar6 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < iVar6);
  }
  return;
}



// FUNCTION 146c97eec FUN_146c97eec body=257 status=ok
// SIG undefined FUN_146c97eec(void)

void FUN_146c97eec(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar2 = (int *)*param_2;
      iVar1 = piVar2[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar7 = piVar2[uVar5 - 1];
        iVar4 = iVar1;
        if ((iVar7 != piVar2[uVar5 - 2] + 1) &&
           (iVar6 = (iVar1 - iVar7) + 1, iVar4 = piVar2[uVar5 - 2], iVar6 != 0)) {
          iVar4 = *(int *)(param_1 + 0x18);
          iVar1 = iVar4 - (iVar1 + 1);
          if (iVar1 != 0) {
            pvVar3 = (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar6 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4)
            ;
            iVar4 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar4 - iVar6;
          piVar2 = (int *)*param_2;
          iVar4 = piVar2[uVar5 - 2];
        }
        iVar1 = iVar4;
      }
      iVar7 = (iVar1 - *piVar2) + 1;
      if (iVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar1 = iVar4 - (iVar1 + 1);
        if (iVar1 != 0) {
          pvVar3 = (void *)((longlong)*piVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar7 * 0x10 + (longlong)pvVar3),(longlong)iVar1 << 4);
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar4 - iVar7;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_144750f90(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146c9800c FUN_146c9800c body=57 status=ok
// SIG undefined FUN_146c9800c(void)

undefined8 * FUN_146c9800c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f45d00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c98046 FUN_146c98046 body=70 status=ok
// SIG undefined FUN_146c98046(void)

int FUN_146c98046(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1467ff840(param_1,iVar1);
  }
  FUN_140a4b9d3((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146c9808c FUN_146c9808c body=138 status=ok
// SIG undefined FUN_146c9808c(void)

undefined1 *
FUN_146c9808c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 4;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f45d90;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 146c98130 FUN_146c98130 body=29 status=ok
// SIG undefined FUN_146c98130(void)

undefined8 FUN_146c98130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c9814e FUN_146c9814e body=322 status=ok
// SIG undefined FUN_146c9814e(void)

void FUN_146c9814e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 146c98292 FUN_146c98292 body=282 status=ok
// SIG undefined FUN_146c98292(void)

void FUN_146c98292(longlong *param_1)

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
      FUN_1406cd076(*local_60 + (longlong)iStack_44 * 0x40 + 0x10);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c983ae FUN_146c983ae body=322 status=ok
// SIG undefined FUN_146c983ae(void)

void FUN_146c983ae(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 146c98582 FUN_146c98582 body=59 status=ok
// SIG undefined FUN_146c98582(void)

undefined8 FUN_146c98582(longlong *param_1)

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



// FUNCTION 146c98700 FUN_146c98700 body=38 status=ok
// SIG undefined FUN_146c98700(void)

undefined8 FUN_146c98700(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x1b; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x6c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146c9874e FUN_146c9874e body=59 status=ok
// SIG undefined FUN_146c9874e(void)

undefined8 FUN_146c9874e(longlong *param_1)

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



// FUNCTION 146c987f0 FUN_146c987f0 body=31 status=ok
// SIG undefined FUN_146c987f0(void)

undefined8 FUN_146c987f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c9882c FUN_146c9882c body=93 status=ok
// SIG undefined FUN_146c9882c(void)

void FUN_146c9882c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f457e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c9888a FUN_146c9888a body=126 status=ok
// SIG undefined FUN_146c9888a(void)

void FUN_146c9888a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f457e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c988f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146c98908 FUN_146c98908 body=21 status=ok
// SIG undefined FUN_146c98908(void)

undefined8 FUN_146c98908(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146c9891e FUN_146c9891e body=31 status=ok
// SIG undefined FUN_146c9891e(void)

undefined8 FUN_146c9891e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c98956 FUN_146c98956 body=93 status=ok
// SIG undefined FUN_146c98956(void)

void FUN_146c98956(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f45900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f45890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c989b4 FUN_146c989b4 body=93 status=ok
// SIG undefined FUN_146c989b4(void)

void FUN_146c989b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f45900;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f45890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c98a12 FUN_146c98a12 body=126 status=ok
// SIG undefined FUN_146c98a12(void)

void FUN_146c98a12(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f45900;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f45890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c98a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146c98aa0 FUN_146c98aa0 body=31 status=ok
// SIG undefined FUN_146c98aa0(void)

undefined8 FUN_146c98aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146c98ad8 FUN_146c98ad8 body=93 status=ok
// SIG undefined FUN_146c98ad8(void)

void FUN_146c98ad8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f459e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f45970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c98b36 FUN_146c98b36 body=93 status=ok
// SIG undefined FUN_146c98b36(void)

void FUN_146c98b36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f459e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f45970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146c98b94 FUN_146c98b94 body=126 status=ok
// SIG undefined FUN_146c98b94(void)

void FUN_146c98b94(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f459e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f45970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c98c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146c98c20 FUN_146c98c20 body=21 status=ok
// SIG undefined FUN_146c98c20(void)

undefined8 FUN_146c98c20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146c98c38 FUN_146c98c38 body=114 status=ok
// SIG undefined FUN_146c98c38(void)

void FUN_146c98c38(longlong *param_1,int param_2)

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



// FUNCTION 146c98caa FUN_146c98caa body=96 status=ok
// SIG undefined FUN_146c98caa(void)

void FUN_146c98caa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146c98d0a FUN_146c98d0a body=174 status=ok
// SIG undefined FUN_146c98d0a(void)

void FUN_146c98d0a(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1447bda9e(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
      }
      *(undefined4 *)(param_1 + 0x20 + lVar2) = *(undefined4 *)(param_2 + lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146c98db8 FUN_146c98db8 body=96 status=ok
// SIG undefined FUN_146c98db8(void)

void FUN_146c98db8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146c98e18 FUN_146c98e18 body=98 status=ok
// SIG undefined FUN_146c98e18(void)

void FUN_146c98e18(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146c98e82 FUN_146c98e82 body=145 status=ok
// SIG undefined FUN_146c98e82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146c98e82(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992558) {
    FUN_144b3d300(&DAT_14c992558);
    if (DAT_14c992558 == -1) {
      _DAT_14c992548 = 0x8000000149f45e90;
      _DAT_14c992550 = FUN_145af9a3a("FSimCallbackCommandObject",0x19);
      DAT_14c992554 = 0;
      _Init_thread_footer(&DAT_14c992558);
    }
  }
  FUN_1446f57c6(&DAT_14c992548,param_2);
  return param_2;
}



// FUNCTION 146c98f68 FUN_146c98f68 body=2488 status=ok
// SIG undefined FUN_146c98f68(void)

char FUN_146c98f68(float *param_1,double *param_2,double *param_3,double param_4,double param_5,
                  double *param_6,double *param_7,double *param_8,undefined4 *param_9)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  double *local_2e0;
  double *local_2d8;
  double *local_2d0;
  undefined4 *local_2c8;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298 [3];
  double local_280 [12];
  double local_220 [3];
  undefined **local_208 [2];
  double dStack_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined2 local_1ec;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1a8;
  undefined4 auStack_1a0 [2];
  double adStack_198 [8];
  double local_158 [10];
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  *param_9 = 0xffffffff;
  local_2b8 = param_2[2];
  local_2a8 = *param_2;
  local_2a0 = param_2[1];
  local_220[0] = ((double)*param_1 - param_5) - local_2a8;
  local_220[1] = ((double)param_1[1] - param_5) - local_2a0;
  local_220[2] = ((double)param_1[2] - param_5) - local_2b8;
  local_280[9] = ((double)param_1[3] + param_5) - local_2a8;
  local_280[10] = ((double)param_1[4] + param_5) - local_2a0;
  local_280[0xb] = ((double)param_1[5] + param_5) - local_2b8;
  dVar1 = 1.79769313486232e+308;
  uVar22 = 0x3ff00000;
  lVar6 = 0;
  dVar27 = 0.0;
  dVar18 = 0.0;
  uVar25 = 0;
  uVar26 = 0;
  uVar10 = 0;
  uVar19 = 0;
  do {
    local_2b0 = param_4;
    if (ABS(param_3[lVar6]) <= 1e-08) {
      if (local_280[lVar6 + 0xc] <= 0.0) {
        dVar14 = 0.0;
        dVar16 = 3.4028234663852886e+38;
        if (0.0 < local_280[lVar6 + 9] || local_280[lVar6 + 9] == 0.0) goto LAB_146c9916d;
      }
LAB_146c993a3:
      cVar3 = '\0';
      goto LAB_146c993a5;
    }
    dVar16 = 1.0 / param_3[lVar6];
    dVar14 = local_280[lVar6 + 0xc] * dVar16;
    dVar16 = dVar16 * local_280[lVar6 + 9];
LAB_146c9916d:
    if ((int)lVar6 == 1) {
      local_208[1] = (undefined **)0x3ff0000000000000;
      dStack_1f8 = 0.0;
      uVar13 = 0;
      uVar24 = uVar22;
LAB_146c99204:
      local_208[0] = (undefined **)0x0;
      uVar11 = 0;
    }
    else {
      if ((int)lVar6 != 0) {
        local_208[1] = (undefined **)0x0;
        dStack_1f8 = 1.0;
        uVar13 = uVar22;
        uVar24 = 0;
        goto LAB_146c99204;
      }
      local_208[0] = (undefined **)0x3ff0000000000000;
      local_208[1] = (undefined **)0x0;
      dStack_1f8 = 0.0;
      uVar13 = 0;
      uVar24 = 0;
      uVar11 = uVar22;
    }
    uVar23 = 0;
    uVar12 = 0;
    uVar9 = 0;
    dVar15 = dVar16;
    if (dVar14 <= dVar16) {
      local_208[lVar6] = (undefined **)0xbff0000000000000;
      uVar9 = SUB84(local_208[0],0);
      uVar11 = (undefined4)((ulonglong)local_208[0] >> 0x20);
      uVar23 = SUB84(local_208[1],0);
      uVar24 = (undefined4)((ulonglong)local_208[1] >> 0x20);
      uVar12 = SUB84(dStack_1f8,0);
      uVar13 = (undefined4)((ulonglong)dStack_1f8 >> 0x20);
      dVar15 = dVar14;
      dVar14 = dVar16;
    }
    if (dVar14 <= dVar1) {
      dVar1 = dVar14;
    }
    uVar20 = SUB84(dVar27,0);
    uVar21 = (undefined4)((ulonglong)dVar27 >> 0x20);
    if (dVar27 <= dVar15) {
      uVar20 = SUB84(dVar15,0);
      uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
    }
    if (dVar1 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar1)
    goto LAB_146c993a3;
    if (dVar15 <= dVar27) {
      uVar9 = uVar10;
      uVar11 = uVar19;
      uVar23 = uVar25;
      uVar24 = uVar26;
    }
    dVar18 = (double)(~-(ulonglong)(dVar27 < dVar15) & (ulonglong)dVar18 |
                     CONCAT44(uVar13,uVar12) & -(ulonglong)(dVar27 < dVar15));
    lVar6 = lVar6 + 1;
    dVar27 = (double)CONCAT44(uVar21,uVar20);
    uVar25 = uVar23;
    uVar26 = uVar24;
    uVar10 = uVar9;
    uVar19 = uVar11;
  } while (lVar6 != 3);
  cVar3 = '\0';
  if ((dVar1 < 0.0) ||
     (param_4 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != param_4))
  goto LAB_146c993a5;
  local_280[8] = local_2b8 + param_3[2] * (double)CONCAT44(uVar21,uVar20);
  local_280[7] = local_2a0 + param_3[1] * (double)CONCAT44(uVar21,uVar20);
  local_280[6] = local_2a8 + *param_3 * (double)CONCAT44(uVar21,uVar20);
  if ((param_5 != 0.0) || (NAN(param_5))) {
    lVar6 = 0;
    iVar4 = 0;
    do {
      dVar27 = *(double *)((longlong)local_280 + lVar6 * 2 + 0x30);
      dVar1 = (double)*(float *)((longlong)param_1 + lVar6);
      if (dVar1 <= dVar27) {
        dVar16 = (double)*(float *)((longlong)param_1 + lVar6 + 0xc);
        if (dVar16 < dVar27) {
          *(double *)((longlong)local_280 + lVar6 * 2 + 0x18) = dVar16;
          *(double *)((longlong)local_280 + lVar6 * 2) = dVar16;
          goto LAB_146c9935b;
        }
        *(double *)((longlong)local_280 + lVar6 * 2 + 0x18) = dVar1;
        *(double *)((longlong)local_280 + lVar6 * 2) = dVar16;
      }
      else {
        *(double *)((longlong)local_280 + lVar6 * 2 + 0x18) = dVar1;
        *(double *)((longlong)local_280 + lVar6 * 2) = dVar1;
LAB_146c9935b:
        iVar4 = iVar4 + 1;
      }
      dVar16 = local_280[5];
      dVar1 = local_280[4];
      dVar27 = local_280[3];
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xc);
    if (iVar4 < 2) goto LAB_146c99430;
    if (iVar4 == 3) {
      local_2b8 = 2.12199579047121e-314;
      lVar8 = -3;
      pdVar7 = local_158;
      pdVar5 = &local_1a8;
      lVar6 = 0;
      uVar25 = 0;
      uVar26 = 0;
      do {
        local_298[2] = local_280[5];
        local_298[0] = local_280[3];
        local_298[1] = local_280[4];
        dVar18 = (double)param_1[lVar8 + 3];
        if ((local_280[lVar8] == dVar18) && (!NAN(local_280[lVar8]) && !NAN(dVar18))) {
          dVar18 = (double)param_1[lVar8 + 6];
        }
        local_280[lVar8] = dVar18;
        local_208[1] = (undefined **)0x0;
        local_1f0 = 0x101;
        local_1ee = 1;
        local_1ec = 0x303;
        local_208[0] = &PTR_FUN_149f487f0;
        local_1d8 = local_280[5];
        local_1e8 = local_280[3];
        dStack_1e0 = local_280[4];
        dVar18 = local_298[2] - dVar16;
        dVar15 = local_298[0] - dVar27;
        dVar17 = local_298[1] - dVar1;
        dVar2 = dVar18 * dVar18 + dVar15 * dVar15 + dVar17 * dVar17;
        local_1c8 = 0.0;
        local_1d0 = 1.0;
        uVar10 = 0;
        dVar14 = 0.0;
        local_1b8 = 0.0;
        if (9.999999747378752e-05 <= dVar2) {
          local_1b8 = SQRT(dVar2);
          dVar14 = dVar18 / local_1b8;
          uVar10 = SUB84(dVar14,0);
          local_1c8 = dVar17 / local_1b8;
          local_1d0 = dVar15 / local_1b8;
        }
        local_1c0 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar10);
        dStack_1f8 = param_5;
        local_2e0 = (double *)((longlong)local_108 + lVar6);
        local_2c8 = param_9;
        local_2e8 = 0;
        local_2d8 = pdVar7;
        local_2d0 = pdVar5;
        cVar3 = FUN_140663590(local_208,param_2,param_3,local_2b0);
        if (cVar3 != '\0') {
          dVar18 = local_108[lVar8 + 3];
          if ((local_2b8._0_4_ == -1) ||
             (dVar18 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar18
             )) {
            if ((dVar18 == 0.0) && (!NAN(dVar18))) {
              *param_6 = 0.0;
              local_208[0] = &PTR_FUN_149f553e0;
              goto LAB_146c99475;
            }
            local_2b8 = (double)(lVar8 + 3);
            uVar26 = (undefined4)((ulonglong)dVar18 >> 0x20);
            uVar25 = SUB84(dVar18,0);
          }
        }
        lVar6 = lVar6 + 8;
        pdVar7 = pdVar7 + 3;
        pdVar5 = pdVar5 + 3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
      cVar3 = SUB84(local_2b8,0) != -1;
      if ((bool)cVar3) {
        lVar6 = (longlong)SUB84(local_2b8,0);
        param_7[2] = local_158[lVar6 * 3 + 2];
        dVar27 = local_158[lVar6 * 3 + 1];
        *param_7 = local_158[lVar6 * 3];
        param_7[1] = dVar27;
        *param_6 = (double)CONCAT44(uVar26,uVar25);
        param_8[2] = adStack_198[lVar6 * 3];
        uVar25 = auStack_1a0[lVar6 * 6 + -1];
        uVar26 = auStack_1a0[lVar6 * 6];
        uVar10 = auStack_1a0[lVar6 * 6 + 1];
        *(undefined4 *)param_8 = *(undefined4 *)(&local_1a8 + lVar6 * 3);
        *(undefined4 *)((longlong)param_8 + 4) = uVar25;
        *(undefined4 *)(param_8 + 1) = uVar26;
        *(undefined4 *)((longlong)param_8 + 0xc) = uVar10;
      }
    }
    else {
      local_208[1] = (undefined **)0x0;
      local_1f0 = 0x101;
      local_1ee = 1;
      local_1ec = 0x303;
      local_208[0] = &PTR_FUN_149f487f0;
      local_1e8 = local_280[3];
      dStack_1e0 = local_280[4];
      local_1c0 = local_280[2] - local_280[5];
      local_1c8 = local_280[1] - local_280[4];
      local_1d0 = local_280[0] - local_280[3];
      local_1d8 = local_280[5];
      local_1b8 = local_1c0 * local_1c0 + local_1d0 * local_1d0 + local_1c8 * local_1c8;
      if (9.999999747378752e-05 <= local_1b8) {
        local_1b8 = SQRT(local_1b8);
        local_1c0 = local_1c0 / local_1b8;
        local_1c8 = local_1c8 / local_1b8;
        local_1d0 = local_1d0 / local_1b8;
      }
      else {
        local_1c8 = 0.0;
        local_1d0 = 1.0;
        local_1c0 = 0.0;
        local_1b8 = 0.0;
      }
      dStack_1f8 = param_5;
      local_2c8 = param_9;
      local_2d0 = param_8;
      local_2d8 = param_7;
      local_2e0 = param_6;
      local_2e8 = 0;
      cVar3 = FUN_140663590(local_208,param_2,param_3,param_4);
    }
    local_208[0] = &PTR_FUN_149f553e0;
    if ((cVar3 == '\0') || (*param_6 <= 0.0)) goto LAB_146c993a5;
    dVar27 = param_8[2];
    dVar1 = param_8[1];
    *param_7 = *param_7 - param_5 * *param_8;
    param_7[1] = param_7[1] - dVar1 * param_5;
    param_7[2] = param_7[2] - dVar27 * param_5;
  }
  else {
LAB_146c99430:
    *param_6 = (double)CONCAT44(uVar21,uVar20);
    *param_8 = (double)CONCAT44(uVar11,uVar9);
    param_8[1] = (double)CONCAT44(uVar24,uVar23);
    param_8[2] = dVar18;
    *param_7 = local_280[6] - (double)CONCAT44(uVar11,uVar9) * param_5;
    param_7[1] = local_280[7] - (double)CONCAT44(uVar24,uVar23) * param_5;
    param_7[2] = local_280[8] - dVar18 * param_5;
  }
LAB_146c99475:
  cVar3 = '\x01';
LAB_146c993a5:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar3;
}



// FUNCTION 146c99922 FUN_146c99922 body=2123 status=ok
// SIG undefined FUN_146c99922(void)

undefined8 *
FUN_146c99922(float *param_1,undefined8 *param_2,double *param_3,undefined8 param_4,double param_5)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined **ppuVar20;
  double dVar21;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  double local_1d0;
  double local_1c8;
  undefined8 *local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined **local_198 [3];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined **local_178 [3];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined2 local_12c;
  double local_128;
  double local_120;
  double local_118;
  ulonglong local_110;
  longlong lStack_108;
  ulonglong local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_158 = 0;
  uStack_150 = 0;
  iVar14 = 0;
  uVar18 = 0x3ff00000;
  local_1c0 = param_2;
  do {
    if (iVar14 == 0) {
      uVar11 = 0;
      uVar17 = uVar18;
LAB_146c99a1b:
      uVar19 = 0;
    }
    else {
      uVar17 = 0;
      if (iVar14 == 1) {
        uVar11 = 0x3ff00000;
        goto LAB_146c99a1b;
      }
      uVar11 = 0;
      uVar19 = uVar18;
    }
    local_118 = (double)param_1[2] - param_5;
    local_120 = (double)param_1[1] - param_5;
    local_128 = (double)*param_1 - param_5;
    uStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    local_130 = 0x100;
    local_12e = 0;
    local_12c = 0x202;
    local_148 = &PTR_FUN_149f48540;
    local_110 = (ulonglong)uVar17 << 0x20 ^ 0x8000000000000000;
    lStack_108 = (ulonglong)(uVar11 ^ 0x80000000) << 0x20;
    local_100 = (ulonglong)uVar19 << 0x20 ^ 0x8000000000000000;
    local_1e8 = 0;
    FUN_146dae232(&local_148,local_178,param_3,param_4);
    uVar10 = uStack_150;
    if ((char)uStack_160 == '\x01') {
      dVar21 = param_3[2];
      dVar3 = param_3[1];
      dVar4 = *param_3;
      local_148 = local_178[0];
      uStack_140 = local_178[1];
      ppuStack_138 = local_178[2];
      lVar12 = (longlong)(int)uStack_150;
      uVar11 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar11);
      if (uStack_150._4_4_ < uVar11) {
        FUN_146ca6182(&local_158,uVar10 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(double *)(local_158 + lVar12) =
           SQRT(((double)local_178[2] - dVar21) * ((double)local_178[2] - dVar21) +
                ((double)local_178[0] - dVar4) * ((double)local_178[0] - dVar4) +
                ((double)local_178[1] - dVar3) * ((double)local_178[1] - dVar3));
      pdVar1 = (double *)(local_158 + 8 + lVar12);
      *pdVar1 = (double)local_148;
      pdVar1[1] = (double)uStack_140;
      *(undefined ***)(local_158 + 0x18 + lVar12) = ppuStack_138;
    }
    if (iVar14 == 0) {
      uVar11 = uVar18;
      uVar17 = 0;
LAB_146c99bc5:
      local_100 = 0;
    }
    else {
      uVar11 = 0;
      uVar17 = uVar18;
      if (iVar14 == 1) goto LAB_146c99bc5;
      uVar17 = 0;
      local_100 = 0x3ff0000000000000;
    }
    local_118 = (double)param_1[5] + param_5;
    local_120 = (double)param_1[4] + param_5;
    local_128 = (double)param_1[3] + param_5;
    uStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    local_130 = 0x100;
    local_12e = 0;
    local_12c = 0x202;
    local_148 = &PTR_FUN_149f48540;
    local_110 = (ulonglong)uVar11 << 0x20;
    lStack_108 = (ulonglong)uVar17 << 0x20;
    local_1e8 = 0;
    FUN_146dae232(&local_148,local_198,param_3,param_4);
    uVar10 = uStack_150;
    local_178[2] = local_198[2];
    uStack_160 = uStack_180;
    uVar16 = uStack_160;
    uStack_15c = uStack_17c;
    local_178[0] = local_198[0];
    local_178[1] = local_198[1];
    local_148 = &PTR_FUN_149f553e0;
    uStack_160._0_1_ = (char)uStack_180;
    bVar15 = (char)uStack_160 == '\x01';
    uStack_160 = uVar16;
    if (bVar15) {
      dVar21 = (double)local_198[2] - param_3[2];
      dVar4 = (double)local_198[1] - param_3[1];
      dVar3 = (double)local_198[0] - *param_3;
      local_148 = local_198[0];
      uStack_140 = local_198[1];
      lVar12 = (longlong)(int)uStack_150;
      uVar11 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar11);
      ppuStack_138 = local_178[2];
      if (uStack_150._4_4_ < uVar11) {
        FUN_146ca6182(&local_158,uVar10 & 0xffffffff);
      }
      lVar12 = lVar12 * 0x20;
      *(double *)(local_158 + lVar12) = SQRT(dVar21 * dVar21 + dVar3 * dVar3 + dVar4 * dVar4);
      puVar2 = (undefined4 *)(local_158 + 8 + lVar12);
      *puVar2 = (undefined4)local_148;
      puVar2[1] = local_148._4_4_;
      puVar2[2] = (undefined4)uStack_140;
      puVar2[3] = uStack_140._4_4_;
      *(undefined ***)(local_158 + 0x18 + lVar12) = ppuStack_138;
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != 3);
  FUN_146ca6a06(local_158,uStack_150 & 0xffffffff);
  puVar9 = local_1c0;
  if ((longlong)(int)uStack_150 != 0) {
    local_1d0 = (double)param_1[5];
    local_1c8 = (double)param_1[4];
    local_1a0 = (double)param_1[3];
    local_1d4 = param_1[2];
    local_1d8 = *param_1;
    local_1dc = param_1[1];
    local_1a8 = (double)local_1d8;
    local_1b0 = (double)local_1dc;
    local_1b8 = (double)local_1d4;
    lVar12 = local_158;
    do {
      dVar21 = *(double *)(lVar12 + 0x18);
      ppuStack_138 = (undefined **)(dVar21 - local_1d0);
      dVar3 = *(double *)(lVar12 + 8);
      dVar4 = *(double *)(lVar12 + 0x10);
      uStack_140 = (undefined **)(dVar4 - local_1c8);
      local_148 = (undefined **)(dVar3 - local_1a0);
      local_178[2] = (undefined **)(double)(local_1d4 - (float)dVar21);
      local_178[1] = (undefined **)(double)(local_1dc - (float)dVar4);
      local_178[0] = (undefined **)(double)(local_1d8 - (float)dVar3);
      if (((((local_1a0 < dVar3) || (local_1c8 < dVar4)) || (local_1d0 < dVar21)) ||
          ((dVar3 < local_1a8 || (dVar4 < local_1b0)))) || (dVar21 < local_1b8)) {
        lVar13 = 0;
        do {
          dVar21 = (double)(&local_148)[lVar13];
          uVar16 = SUB84(dVar21,0);
          uVar18 = (uint)((ulonglong)dVar21 >> 0x20);
          if (dVar21 <= 0.0) {
            ppuVar5 = local_178[lVar13];
            uVar16 = 0;
            uVar18 = 0;
            if (0.0 < (double)ppuVar5) {
              uVar18 = (uint)((ulonglong)ppuVar5 >> 0x20) ^ 0x80000000;
              uVar16 = SUB84(ppuVar5,0);
            }
          }
          local_198[lVar13] = (undefined **)CONCAT44(uVar18,uVar16);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        dVar21 = (double)local_198[2] * (double)local_198[2] +
                 (double)local_198[0] * (double)local_198[0] +
                 (double)local_198[1] * (double)local_198[1];
        if (9.999999747378752e-05 <= dVar21) {
          ppuVar5 = (undefined **)SQRT(dVar21);
          local_198[0] = (undefined **)((double)local_198[0] / (double)ppuVar5);
          local_198[1] = (undefined **)((double)local_198[1] / (double)ppuVar5);
          local_198[2] = (undefined **)((double)local_198[2] / (double)ppuVar5);
          if (9.999999747378752e-05 <= (double)ppuVar5) goto LAB_146c9a068;
        }
        else {
          local_198[0] = (undefined **)0x3ff0000000000000;
          local_198[1] = (undefined **)0x0;
          local_198[2] = (undefined **)0x0;
          ppuVar5 = (undefined **)0x0;
        }
        lVar13 = 0;
        do {
          uVar18 = 0x3ff00000;
          if ((0.0 < (double)local_198[lVar13]) ||
             (uVar18 = 0xbff00000, (double)local_198[lVar13] < 0.0)) {
            local_198[lVar13] = (undefined **)((ulonglong)uVar18 << 0x20);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
      }
      else {
        ppuVar20 = local_178[2];
        if ((double)local_178[2] <= (double)ppuStack_138) {
          ppuVar20 = ppuStack_138;
        }
        ppuVar6 = local_178[1];
        if ((double)local_178[1] <= (double)uStack_140) {
          ppuVar6 = uStack_140;
        }
        ppuVar5 = local_178[0];
        if ((double)local_178[0] <= (double)local_148) {
          ppuVar5 = local_148;
        }
        if ((double)ppuVar5 <= (double)ppuVar6) {
          ppuVar5 = ppuVar6;
        }
        if ((double)ppuVar5 <= (double)ppuVar20) {
          ppuVar5 = ppuVar20;
        }
      }
LAB_146c9a068:
      if ((double)ppuVar5 < param_5 + 0.0001) {
        local_1c0[2] = *(undefined8 *)(lVar12 + 0x18);
        uVar16 = *(undefined4 *)(lVar12 + 0xc);
        uVar7 = *(undefined4 *)(lVar12 + 0x10);
        uVar8 = *(undefined4 *)(lVar12 + 0x14);
        *(undefined4 *)local_1c0 = *(undefined4 *)(lVar12 + 8);
        *(undefined4 *)((longlong)local_1c0 + 4) = uVar16;
        *(undefined4 *)(local_1c0 + 1) = uVar7;
        *(undefined4 *)((longlong)local_1c0 + 0xc) = uVar8;
        *(undefined1 *)(local_1c0 + 3) = 1;
        goto LAB_146c9a0c2;
      }
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != (longlong)(int)uStack_150 * 0x20 + local_158);
  }
  *(undefined8 *)((longlong)local_1c0 + 9) = 0;
  *(undefined8 *)((longlong)local_1c0 + 0x11) = 0;
  *local_1c0 = 0;
  local_1c0[1] = 0;
LAB_146c9a0c2:
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar9;
}



// FUNCTION 146c9a16e FUN_146c9a16e body=2072 status=ok
// SIG undefined FUN_146c9a16e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146c9a16e(double *param_1,double *param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double local_1e8;
  
  dVar1 = param_2[3];
  if ((dVar1 != 1.79769313486232e+308) || (NAN(dVar1))) {
    dVar10 = *param_2;
    if ((dVar10 != 1.79769313486232e+308) || (NAN(dVar10))) {
      auVar25 = *param_3 ^ _DAT_149931e80;
      dVar20 = *(double *)param_3[1] * -1.0;
      dVar21 = *(double *)(param_3[1] + 8) * 1.0;
      dVar15 = (dVar1 - dVar10) * 0.5;
      dVar7 = (param_2[4] - param_2[1]) * 0.5;
      dVar11 = auVar25._8_8_;
      uVar3 = DAT_149931e80;
      dVar8 = (double)((ulonglong)dVar11 ^ uVar3) * dVar15;
      dVar4 = auVar25._0_8_;
      dVar28 = dVar4 * dVar7 + dVar8;
      dVar8 = dVar8 - dVar4 * dVar7;
      dVar12 = (param_2[5] - param_2[2]) * 0.5;
      dVar28 = dVar28 + dVar28;
      dVar8 = dVar8 + dVar8;
      dVar22 = (double)(uVar3 ^ (ulonglong)dVar20);
      dVar23 = dVar11 * dVar12 + dVar7 * dVar22;
      dVar9 = (double)((ulonglong)dVar12 ^ uVar3) * dVar11;
      dVar13 = dVar7 * dVar22 + dVar9;
      dVar26 = dVar11 * dVar12 + dVar20 * dVar7;
      dVar9 = dVar20 * dVar7 + dVar9;
      dVar2 = (param_2[5] + param_2[2]) * 0.5 - *(double *)param_3[3];
      dVar27 = (param_2[4] + param_2[1]) * 0.5 - *(double *)(param_3[2] + 8);
      dVar18 = (dVar1 + dVar10) * 0.5 - *(double *)param_3[2];
      dVar1 = dVar4 * dVar27 - dVar18 * dVar11;
      dVar1 = dVar1 + dVar1;
      dVar5 = dVar20 * dVar18 - dVar2 * dVar4;
      dVar5 = dVar5 + dVar5;
      dVar16 = dVar11 * dVar2 - dVar27 * dVar20;
      dVar23 = dVar23 + dVar23;
      local_1e8 = SUB168(*param_3,0);
      dVar13 = dVar13 + dVar13;
      dVar26 = dVar26 + dVar26;
      dVar9 = dVar9 + dVar9;
      dVar16 = dVar16 + dVar16;
      dVar6 = dVar20 * dVar15 - dVar4 * dVar12;
      dVar6 = dVar6 + dVar6;
      dVar19 = dVar4 * dVar12 + dVar20 * dVar15;
      dVar19 = dVar19 + dVar19;
      dVar10 = 1.0 / *(double *)param_3[5];
      dVar29 = ABS(((dVar4 * dVar6 - dVar23 * dVar11) + dVar12 + dVar21 * dVar28) * dVar10);
      dVar14 = ABS(((dVar4 * dVar19 - dVar13 * dVar11) + (dVar21 * dVar28 - dVar12)) * dVar10);
      if (dVar29 <= dVar14) {
        dVar29 = dVar14;
      }
      dVar14 = 1.0 / *(double *)(param_3[4] + 8);
      dVar24 = ABS((dVar20 * dVar23 + dVar28 * local_1e8 + dVar7 + dVar21 * dVar6) * dVar14);
      dVar17 = ABS((dVar20 * dVar13 + dVar28 * local_1e8 + dVar7 + dVar21 * dVar19) * dVar14);
      if (dVar24 <= dVar17) {
        dVar24 = dVar17;
      }
      dVar17 = 1.0 / *(double *)param_3[4];
      dVar23 = ABS((dVar11 * dVar28 + dVar6 * dVar22 + dVar21 * dVar23 + dVar15) * dVar17);
      dVar28 = ABS((dVar11 * dVar28 + dVar19 * dVar22 + dVar21 * dVar13 + dVar15) * dVar17);
      if (dVar23 <= dVar28) {
        dVar23 = dVar28;
      }
      dVar28 = ABS(((dVar4 * dVar6 - dVar26 * dVar11) + dVar12 + dVar21 * dVar8) * dVar10);
      if (dVar29 <= dVar28) {
        dVar29 = dVar28;
      }
      dVar28 = ABS((dVar20 * dVar26 + local_1e8 * dVar8 + (dVar21 * dVar6 - dVar7)) * dVar14);
      if (dVar24 <= dVar28) {
        dVar24 = dVar28;
      }
      dVar28 = ABS((dVar6 * dVar22 + dVar8 * dVar11 + dVar21 * dVar26 + dVar15) * dVar17);
      if (dVar23 <= dVar28) {
        dVar23 = dVar28;
      }
      dVar6 = ABS(((dVar4 * dVar19 - dVar9 * dVar11) + (dVar21 * dVar8 - dVar12)) * dVar10);
      dVar28 = ABS((dVar20 * dVar9 + local_1e8 * dVar8 + (dVar21 * dVar19 - dVar7)) * dVar14);
      dVar9 = ABS((dVar8 * dVar11 + dVar19 * dVar22 + dVar21 * dVar9 + dVar15) * dVar17);
      if (dVar29 <= dVar6) {
        dVar29 = dVar6;
      }
      if (dVar24 <= dVar28) {
        dVar24 = dVar28;
      }
      if (dVar23 <= dVar9) {
        dVar23 = dVar9;
      }
      dVar10 = ((dVar4 * dVar5 - dVar16 * dVar11) + dVar21 * dVar1 + dVar2) * dVar10;
      dVar14 = ((dVar20 * dVar16 - dVar1 * dVar4) + dVar21 * dVar5 + dVar27) * dVar14;
      dVar17 = ((dVar11 * dVar1 - dVar5 * dVar20) + dVar21 * dVar16 + dVar18) * dVar17;
      *param_1 = dVar17 - dVar23;
      param_1[1] = dVar14 - dVar24;
      param_1[2] = dVar10 - dVar29;
      param_1[3] = dVar17 + dVar23;
      param_1[4] = dVar14 + dVar24;
      param_1[5] = dVar10 + dVar29;
      return;
    }
  }
  param_1[2] = param_2[2];
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  dVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = dVar1;
  param_1[5] = param_2[5];
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return;
}



// FUNCTION 146c9a986 FUN_146c9a986 body=2021 status=ok
// SIG undefined FUN_146c9a986(void)

undefined8 *
FUN_146c9a986(double *param_1,undefined8 *param_2,double *param_3,undefined8 param_4,double param_5)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined **ppuVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [12];
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  double dVar22;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 *local_1a8;
  double local_1a0;
  undefined **local_198 [4];
  undefined **local_178 [3];
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined2 local_12c;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_110 [16];
  ulonglong local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_158 = 0;
  uStack_150 = 0;
  iVar15 = 0;
  local_1a8 = param_2;
  do {
    if (iVar15 == 0) {
      uVar12 = 0;
      uVar18 = 0x3ff00000;
LAB_146c9aa7f:
      local_100 = 0;
    }
    else {
      uVar18 = 0;
      if (iVar15 == 1) {
        uVar12 = 0x3ff00000;
        goto LAB_146c9aa7f;
      }
      uVar12 = 0;
      local_100 = 0x3ff0000000000000;
    }
    local_100 = local_100 ^ 0x8000000000000000;
    local_118 = param_1[2] - param_5;
    local_120 = param_1[1] - param_5;
    local_128 = *param_1 - param_5;
    uStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    local_130 = 0x100;
    local_12e = 0;
    local_12c = 0x202;
    local_148 = &PTR_FUN_149f48540;
    local_110._8_4_ = 0;
    local_110._0_8_ = (ulonglong)uVar18 << 0x20 ^ 0x8000000000000000;
    local_110._12_4_ = uVar12 ^ 0x80000000;
    local_1d8 = 0;
    FUN_146dae232(&local_148,local_178,param_3,param_4);
    uVar11 = uStack_150;
    if ((char)uStack_160 == '\x01') {
      dVar6 = (double)local_178[2] - param_3[2];
      dVar3 = param_3[1];
      dVar22 = *param_3;
      local_148 = local_178[0];
      uStack_140 = local_178[1];
      ppuStack_138 = local_178[2];
      lVar13 = (longlong)(int)uStack_150;
      uVar12 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar12);
      if (uStack_150._4_4_ < uVar12) {
        FUN_146ca6182(&local_158,uVar11 & 0xffffffff);
      }
      lVar13 = lVar13 * 0x20;
      *(double *)(local_158 + lVar13) =
           SQRT(dVar6 * dVar6 +
                ((double)local_178[0] - dVar22) * ((double)local_178[0] - dVar22) +
                ((double)local_178[1] - dVar3) * ((double)local_178[1] - dVar3));
      pdVar1 = (double *)(local_158 + 8 + lVar13);
      *pdVar1 = (double)local_148;
      pdVar1[1] = (double)uStack_140;
      *(undefined ***)(local_158 + 0x18 + lVar13) = ppuStack_138;
    }
    if (iVar15 == 0) {
      uVar19 = 0;
      uVar12 = 0x3ff00000;
LAB_146c9ac20:
      local_100 = 0;
    }
    else {
      uVar12 = 0;
      if (iVar15 == 1) {
        uVar19 = 0x3ff0000000000000;
        goto LAB_146c9ac20;
      }
      uVar19 = 0;
      local_100 = 0x3ff0000000000000;
    }
    local_118 = param_1[5] + param_5;
    local_120 = param_1[4] + param_5;
    local_128 = param_1[3] + param_5;
    uStack_140 = (undefined **)0x0;
    ppuStack_138 = (undefined **)0x0;
    local_130 = 0x100;
    local_12e = 0;
    local_12c = 0x202;
    local_148 = &PTR_FUN_149f48540;
    auVar9._4_8_ = local_110._8_8_;
    auVar9._0_4_ = uVar12;
    local_110._0_8_ = auVar9._0_8_ << 0x20;
    local_110._8_8_ = uVar19;
    local_1d8 = 0;
    FUN_146dae232(&local_148,local_198,param_3,param_4);
    uVar11 = uStack_150;
    local_178[2] = local_198[2];
    uStack_160 = local_198[3];
    uVar19 = uStack_160;
    local_178[0] = local_198[0];
    local_178[1] = local_198[1];
    local_148 = &PTR_FUN_149f553e0;
    uStack_160._0_1_ = (char)local_198[3];
    bVar16 = (char)uStack_160 == '\x01';
    uStack_160 = uVar19;
    if (bVar16) {
      dVar3 = (double)local_198[2] - param_3[2];
      dVar6 = (double)local_198[1] - param_3[1];
      dVar22 = (double)local_198[0] - *param_3;
      local_148 = local_198[0];
      uStack_140 = local_198[1];
      ppuStack_138 = local_198[2];
      lVar13 = (longlong)(int)uStack_150;
      uVar12 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar12);
      if (uStack_150._4_4_ < uVar12) {
        FUN_146ca6182(&local_158,uVar11 & 0xffffffff);
      }
      lVar13 = lVar13 * 0x20;
      *(double *)(local_158 + lVar13) = SQRT(dVar3 * dVar3 + dVar22 * dVar22 + dVar6 * dVar6);
      puVar2 = (undefined4 *)(local_158 + 8 + lVar13);
      *puVar2 = (undefined4)local_148;
      puVar2[1] = local_148._4_4_;
      puVar2[2] = (undefined4)uStack_140;
      puVar2[3] = uStack_140._4_4_;
      *(undefined ***)(local_158 + 0x18 + lVar13) = ppuStack_138;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 3);
  FUN_146ca6ffe(local_158,uStack_150 & 0xffffffff);
  puVar10 = local_1a8;
  if ((longlong)(int)uStack_150 != 0) {
    local_1b0 = param_1[5];
    dVar3 = param_1[4];
    local_1a0 = param_1[3];
    local_1c8 = param_1[2];
    local_1b8 = *param_1;
    local_1c0 = param_1[1];
    lVar13 = local_158;
    do {
      dVar22 = *(double *)(lVar13 + 0x18);
      ppuStack_138 = (undefined **)(dVar22 - local_1b0);
      dVar6 = *(double *)(lVar13 + 8);
      dVar4 = *(double *)(lVar13 + 0x10);
      uStack_140 = (undefined **)(dVar4 - dVar3);
      local_148 = (undefined **)(dVar6 - local_1a0);
      local_178[2] = (undefined **)(local_1c8 - dVar22);
      local_178[1] = (undefined **)(local_1c0 - dVar4);
      local_178[0] = (undefined **)(local_1b8 - dVar6);
      if (((((local_1a0 < dVar6) || (dVar3 < dVar4)) || (local_1b0 < dVar22)) ||
          ((dVar6 < local_1b8 || (dVar4 < local_1c0)))) || (dVar22 < local_1c8)) {
        lVar14 = 0;
        do {
          dVar22 = (double)(&local_148)[lVar14];
          uVar17 = SUB84(dVar22,0);
          uVar12 = (uint)((ulonglong)dVar22 >> 0x20);
          if (dVar22 <= 0.0) {
            ppuVar5 = local_178[lVar14];
            uVar17 = 0;
            uVar12 = 0;
            if (0.0 < (double)ppuVar5) {
              uVar12 = (uint)((ulonglong)ppuVar5 >> 0x20) ^ 0x80000000;
              uVar17 = SUB84(ppuVar5,0);
            }
          }
          local_198[lVar14] = (undefined **)CONCAT44(uVar12,uVar17);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        dVar22 = (double)local_198[2] * (double)local_198[2] +
                 (double)local_198[0] * (double)local_198[0] +
                 (double)local_198[1] * (double)local_198[1];
        if (9.999999747378752e-05 <= dVar22) {
          ppuVar5 = (undefined **)SQRT(dVar22);
          local_198[0] = (undefined **)((double)local_198[0] / (double)ppuVar5);
          local_198[1] = (undefined **)((double)local_198[1] / (double)ppuVar5);
          local_198[2] = (undefined **)((double)local_198[2] / (double)ppuVar5);
          if (9.999999747378752e-05 <= (double)ppuVar5) goto LAB_146c9b066;
        }
        else {
          local_198[0] = (undefined **)0x3ff0000000000000;
          local_198[1] = (undefined **)0x0;
          local_198[2] = (undefined **)0x0;
          ppuVar5 = (undefined **)0x0;
        }
        lVar14 = 0;
        do {
          uVar12 = 0x3ff00000;
          if ((0.0 < (double)local_198[lVar14]) ||
             (uVar12 = 0xbff00000, (double)local_198[lVar14] < 0.0)) {
            local_198[lVar14] = (undefined **)((ulonglong)uVar12 << 0x20);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
      }
      else {
        ppuVar20 = local_178[2];
        if ((double)local_178[2] <= (double)ppuStack_138) {
          ppuVar20 = ppuStack_138;
        }
        ppuVar21 = local_178[1];
        if ((double)local_178[1] <= (double)uStack_140) {
          ppuVar21 = uStack_140;
        }
        ppuVar5 = local_178[0];
        if ((double)local_178[0] <= (double)local_148) {
          ppuVar5 = local_148;
        }
        if ((double)ppuVar5 <= (double)ppuVar21) {
          ppuVar5 = ppuVar21;
        }
        if ((double)ppuVar5 <= (double)ppuVar20) {
          ppuVar5 = ppuVar20;
        }
      }
LAB_146c9b066:
      if ((double)ppuVar5 < param_5 + 0.0001) {
        local_1a8[2] = *(undefined8 *)(lVar13 + 0x18);
        uVar17 = *(undefined4 *)(lVar13 + 0xc);
        uVar7 = *(undefined4 *)(lVar13 + 0x10);
        uVar8 = *(undefined4 *)(lVar13 + 0x14);
        *(undefined4 *)local_1a8 = *(undefined4 *)(lVar13 + 8);
        *(undefined4 *)((longlong)local_1a8 + 4) = uVar17;
        *(undefined4 *)(local_1a8 + 1) = uVar7;
        *(undefined4 *)((longlong)local_1a8 + 0xc) = uVar8;
        *(undefined1 *)(local_1a8 + 3) = 1;
        goto LAB_146c9b0c0;
      }
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != (longlong)(int)uStack_150 * 0x20 + local_158);
  }
  *(undefined8 *)((longlong)local_1a8 + 9) = 0;
  *(undefined8 *)((longlong)local_1a8 + 0x11) = 0;
  *local_1a8 = 0;
  local_1a8[1] = 0;
LAB_146c9b0c0:
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar10;
}



// FUNCTION 146c9b16c FUN_146c9b16c body=461 status=ok
// SIG undefined FUN_146c9b16c(void)

undefined8 * FUN_146c9b16c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_149f483b0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140c10f68(param_1 + 2,iVar1,0);
    FUN_140c10e76(param_1[2],uVar2,iVar1);
  }
  puVar4 = (undefined8 *)(param_2 + 0x20);
  puVar5 = param_1 + 4;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_146ca7580(param_1 + 0x11,iVar1,0);
    FUN_146ca75e2(param_1[0x11],uVar2,iVar1);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_146ca7650(param_1 + 0x13,iVar1,0);
    FUN_146ca76c3(param_1[0x13],uVar2,iVar1);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0xb0);
  _Src = *(void **)(param_2 + 0xa8);
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_146ca50f8(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],_Src,(longlong)iVar1 * 0x24);
  }
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 146c9b340 FUN_146c9b340 body=177 status=ok
// SIG undefined FUN_146c9b340(void)

longlong FUN_146c9b340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_146c9b3f2(param_1 + 0x10,param_2 + 0x10);
  puVar2 = (undefined8 *)(param_2 + 0x20);
  puVar3 = (undefined8 *)(param_1 + 0x20);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_146ca770e(param_1 + 0x88,param_2 + 0x88);
  FUN_146c9b442(param_1 + 0x98,param_2 + 0x98);
  FUN_146ca516c(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 146c9b3f2 FUN_146c9b3f2 body=79 status=ok
// SIG undefined FUN_146c9b3f2(void)

undefined8 * FUN_146c9b3f2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140c10f68(param_1,iVar1);
      FUN_140c10e76(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146c9b442 FUN_146c9b442 body=79 status=ok
// SIG undefined FUN_146c9b442(void)

undefined8 * FUN_146c9b442(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ca7650(param_1,iVar1);
      FUN_146ca76c3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146c9b492 FUN_146c9b492 body=56 status=ok
// SIG undefined FUN_146c9b492(void)

undefined8 * FUN_146c9b492(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(200,0x10);
  FUN_146c9b16c(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146c9b4ca FUN_146c9b4ca body=242 status=ok
// SIG undefined FUN_146c9b4ca(void)

void FUN_146c9b4ca(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_140c108c0(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_1 + 0x94);
  FUN_146ca58ed(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_146ca7b54(param_1 + 0x88,0);
  }
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_146ca7bb4(param_1 + 0x98,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xb4) < 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_146ca7c26(param_1 + 0xa8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}


