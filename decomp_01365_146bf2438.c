// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146bf2438 FUN_146bf2438 body=143 status=ok
// SIG undefined FUN_146bf2438(void)

void FUN_146bf2438(longlong param_1,int param_2)

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



// FUNCTION 146bf24c8 FUN_146bf24c8 body=48 status=ok
// SIG undefined FUN_146bf24c8(void)

void FUN_146bf24c8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 146bf24f8 FUN_146bf24f8 body=67 status=ok
// SIG undefined FUN_146bf24f8(void)

void FUN_146bf24f8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_144aa00e6(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1406b664c(param_1);
    return;
  }
  FUN_146bf253c(param_1);
  FUN_144aa00e6(param_1,0);
  return;
}



// FUNCTION 146bf253c FUN_146bf253c body=322 status=ok
// SIG undefined FUN_146bf253c(void)

void FUN_146bf253c(longlong *param_1)

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



// FUNCTION 146bf267f FUN_146bf267f body=56 status=ok
// SIG undefined FUN_146bf267f(void)

void FUN_146bf267f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x7fefffffffffffff;
    param_1[1] = 0x7fefffffffffffff;
    param_1[2] = 0x7fefffffffffffff;
    param_1[3] = 0xffefffffffffffff;
    param_1[4] = 0xffefffffffffffff;
    param_1[5] = 0xffefffffffffffff;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 146bf26b8 FUN_146bf26b8 body=147 status=ok
// SIG undefined FUN_146bf26b8(void)

void FUN_146bf26b8(longlong param_1,int param_2)

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



// FUNCTION 146bf274c FUN_146bf274c body=62 status=ok
// SIG undefined FUN_146bf274c(void)

void FUN_146bf274c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf278a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146bf278a FUN_146bf278a body=112 status=ok
// SIG undefined FUN_146bf278a(void)

ulonglong FUN_146bf278a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146bf27c4;
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
LAB_146bf27c4:
  return param_2 & 0xffffffff;
}



// FUNCTION 146bf27fa FUN_146bf27fa body=296 status=ok
// SIG undefined FUN_146bf27fa(void)

undefined4 * FUN_146bf27fa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146bf2924(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146bf2a0a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146bf2b22(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf2924 FUN_146bf2924 body=230 status=ok
// SIG undefined FUN_146bf2924(void)

int * FUN_146bf2924(longlong *param_1,int *param_2)

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



// FUNCTION 146bf2a0a FUN_146bf2a0a body=166 status=ok
// SIG undefined FUN_146bf2a0a(void)

undefined8 FUN_146bf2a0a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          lVar2 = *(longlong *)(piVar1 + 2);
          if (lVar2 != 0) {
            FUN_146ba12c2(lVar2);
            FUN_1400020a8(lVar2);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146bf2ab0(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146bf2ab0 FUN_146bf2ab0 body=114 status=ok
// SIG undefined FUN_146bf2ab0(void)

void FUN_146bf2ab0(longlong *param_1,int param_2)

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



// FUNCTION 146bf2b22 FUN_146bf2b22 body=419 status=ok
// SIG undefined FUN_146bf2b22(void)

void FUN_146bf2b22(longlong *param_1)

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



// FUNCTION 146bf2cc6 FUN_146bf2cc6 body=81 status=ok
// SIG undefined FUN_146bf2cc6(void)

void FUN_146bf2cc6(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_146bf2d18(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146bf2d18 FUN_146bf2d18 body=87 status=ok
// SIG undefined FUN_146bf2d18(void)

void FUN_146bf2d18(longlong *param_1,int param_2)

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
  FUN_146bf2d70();
  return;
}



// FUNCTION 146bf2d70 FUN_146bf2d70 body=65 status=ok
// SIG undefined FUN_146bf2d70(void)

void FUN_146bf2d70(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18);
  if (lVar1 != 0) {
    FUN_146ba12c2(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_146bf2ab0(param_1,param_2);
  return;
}



// FUNCTION 146bf2db1 FUN_146bf2db1 body=658 status=ok
// SIG undefined FUN_146bf2db1(void)

void FUN_146bf2db1(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined4 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar14 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar14 + fVar14);
    plVar5 = &local_348;
    do {
      puVar6 = (undefined4 *)*plVar5;
      puVar9 = (undefined4 *)plVar5[1];
      local_354 = (int)plVar5[2];
      uVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar6) >> 2) + 1;
      puVar12 = puVar9;
      puVar13 = puVar6;
      local_360 = plVar5;
      if (local_354 != 0) {
LAB_146bf2e7e:
        plVar5 = local_360;
        if (8 < (int)uVar4) {
          uVar1 = puVar6[uVar4 >> 1];
          puVar6[uVar4 >> 1] = *puVar6;
          *puVar6 = uVar1;
          puVar7 = puVar9 + 1;
          puVar8 = puVar6;
          local_350 = puVar13;
          do {
            puVar2 = puVar8 + 1;
            puVar10 = puVar8 + 1;
            do {
              puVar8 = puVar10;
              puVar13 = puVar2;
              if (puVar9 < puVar8) break;
              cVar3 = FUN_146bf31b8(param_3,*puVar6,*puVar8);
              puVar2 = puVar13 + 1;
              puVar10 = puVar8 + 1;
            } while (cVar3 == '\0');
            puVar2 = puVar7 + -2;
            do {
              puVar10 = puVar7;
              puVar11 = puVar2;
              puVar7 = puVar10 + -1;
              if (puVar7 <= puVar6) break;
              cVar3 = FUN_146bf31b8(param_3,*puVar7,*puVar6);
              puVar2 = puVar11 + -1;
            } while (cVar3 == '\0');
            if (puVar7 < puVar8) goto LAB_146bf2f0f;
            uVar1 = *puVar8;
            *puVar8 = *puVar7;
            *puVar7 = uVar1;
          } while( true );
        }
        for (; local_360 = plVar5, puVar13 = puVar6, puVar12 = puVar6, puVar6 < puVar9;
            puVar9 = puVar9 + -1) {
          while (puVar7 = puVar13, puVar12 = puVar12 + 1, puVar12 <= puVar9) {
            cVar3 = FUN_146bf31b8(param_3,*puVar7,*puVar12);
            puVar13 = puVar12;
            if (cVar3 == '\0') {
              puVar13 = puVar7;
            }
          }
          uVar1 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar1;
          plVar5 = local_360;
        }
        goto LAB_146bf3017;
      }
LAB_146bf3031:
      FUN_146bf3044(puVar6,uVar4,param_3);
      plVar5 = local_360;
LAB_146bf3017:
      plVar5 = plVar5 + -3;
    } while (&local_348 <= plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bf2f0f:
  uVar1 = *puVar6;
  *puVar6 = *puVar7;
  *puVar7 = uVar1;
  local_354 = local_354 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar11 - (longlong)local_350 < (longlong)puVar12 - (longlong)puVar13) {
    plVar5 = local_360;
    if (puVar8 < puVar9) {
      *local_360 = (longlong)puVar8;
      local_360[1] = (longlong)puVar9;
      *(int *)(local_360 + 2) = local_354;
      plVar5 = local_360 + 3;
    }
    puVar13 = puVar6;
    if (puVar7 <= puVar6 + 1) goto LAB_146bf3017;
  }
  else {
    if (puVar6 + 1 < puVar7) {
      *local_360 = (longlong)puVar6;
      local_360[1] = (longlong)puVar10;
      *(int *)(local_360 + 2) = local_354;
      local_360 = local_360 + 3;
    }
    plVar5 = local_360;
    puVar6 = puVar8;
    puVar10 = puVar9;
    puVar11 = puVar9;
    if (puVar9 <= puVar8) goto LAB_146bf3017;
  }
  local_360 = plVar5;
  uVar4 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar13) >> 2) + 1;
  puVar9 = puVar10;
  puVar12 = puVar11;
  if (local_354 == 0) goto LAB_146bf3031;
  goto LAB_146bf2e7e;
}



// FUNCTION 146bf3044 FUN_146bf3044 body=372 status=ok
// SIG undefined FUN_146bf3044(void)

void FUN_146bf3044(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar5;
joined_r0x000146bf307f:
    do {
      iVar6 = iVar5 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar5 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (cVar2 = FUN_146bf31b8(param_3,param_1[iVar7],param_1[iVar6]), cVar2 == '\0')) {
          iVar6 = iVar7;
        }
        cVar2 = FUN_146bf31b8(param_3,param_1[iVar5],param_1[iVar6]);
        if (cVar2 != '\0') {
          uVar1 = param_1[iVar5];
          param_1[iVar5] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar5 = iVar6;
          goto joined_r0x000146bf307f;
        }
      }
      bVar9 = iVar8 != 0;
      iVar5 = iVar8 + -1;
      iVar8 = iVar5;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar5 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar5 < (longlong)uVar4) &&
               (cVar2 = FUN_146bf31b8(param_3,param_1[iVar5],param_1[iVar6]), cVar2 == '\0')) {
              iVar7 = iVar5;
            }
            cVar2 = FUN_146bf31b8(param_3,param_1[iVar8],param_1[iVar7]);
            if (cVar2 == '\0') break;
            uVar1 = param_1[iVar8];
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar1;
            iVar5 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar4);
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



// FUNCTION 146bf31b8 FUN_146bf31b8 body=152 status=ok
// SIG undefined FUN_146bf31b8(void)

ulonglong FUN_146bf31b8(longlong *param_1,float param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  (**(code **)*param_1)(&local_2c,((undefined8 *)*param_1)[1]);
  local_24 = param_3;
  uVar1 = (**(code **)*param_1)(&local_34,((undefined8 *)*param_1)[1]);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  if (local_34 <= local_2c) {
    uVar2 = (ulonglong)-(uint)(local_28 < local_30 && local_2c == local_34);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf3251 FUN_146bf3251 body=229 status=ok
// SIG undefined FUN_146bf3251(void)

ulonglong FUN_146bf3251(float *param_1,uint param_2,undefined8 *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  float *local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  uVar4 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (1 < (int)param_2) {
    lVar5 = uVar4 * 4 + -4;
    pfVar2 = param_1;
    local_68 = param_1;
    do {
      fVar1 = param_1[1];
      local_5c = *pfVar2;
      (*(code *)*param_3)(&local_54,param_3[1],&local_5c);
      local_4c = fVar1;
      (*(code *)*param_3)(&local_5c,param_3[1],&local_4c);
      if ((local_54 != local_5c) || (NAN(local_54) || NAN(local_5c))) {
LAB_146bf32e5:
        pfVar3 = pfVar2 + 1;
        if (param_1 != pfVar2) {
          *pfVar3 = param_1[1];
        }
      }
      else if ((local_50 != local_58) || (pfVar3 = pfVar2, NAN(local_50) || NAN(local_58)))
      goto LAB_146bf32e5;
      param_1 = param_1 + 1;
      lVar5 = lVar5 + -4;
      pfVar2 = pfVar3;
    } while (lVar5 != 0);
    uVar4 = (ulonglong)((longlong)pfVar3 + (4 - (longlong)local_68)) >> 2;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146bf334f FUN_146bf334f body=658 status=ok
// SIG undefined FUN_146bf334f(void)

void FUN_146bf334f(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined4 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar14 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar14 + fVar14);
    plVar5 = &local_348;
    do {
      puVar6 = (undefined4 *)*plVar5;
      puVar9 = (undefined4 *)plVar5[1];
      local_354 = (int)plVar5[2];
      uVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar6) >> 2) + 1;
      puVar12 = puVar9;
      puVar13 = puVar6;
      local_360 = plVar5;
      if (local_354 != 0) {
LAB_146bf341c:
        plVar5 = local_360;
        if (8 < (int)uVar4) {
          uVar1 = puVar6[uVar4 >> 1];
          puVar6[uVar4 >> 1] = *puVar6;
          *puVar6 = uVar1;
          puVar7 = puVar9 + 1;
          puVar8 = puVar6;
          local_350 = puVar13;
          do {
            puVar2 = puVar8 + 1;
            puVar10 = puVar8 + 1;
            do {
              puVar8 = puVar10;
              puVar13 = puVar2;
              if (puVar9 < puVar8) break;
              cVar3 = FUN_146bf3756(param_3,*puVar6,*puVar8);
              puVar2 = puVar13 + 1;
              puVar10 = puVar8 + 1;
            } while (cVar3 == '\0');
            puVar2 = puVar7 + -2;
            do {
              puVar10 = puVar7;
              puVar11 = puVar2;
              puVar7 = puVar10 + -1;
              if (puVar7 <= puVar6) break;
              cVar3 = FUN_146bf3756(param_3,*puVar7,*puVar6);
              puVar2 = puVar11 + -1;
            } while (cVar3 == '\0');
            if (puVar7 < puVar8) goto LAB_146bf34ad;
            uVar1 = *puVar8;
            *puVar8 = *puVar7;
            *puVar7 = uVar1;
          } while( true );
        }
        for (; local_360 = plVar5, puVar13 = puVar6, puVar12 = puVar6, puVar6 < puVar9;
            puVar9 = puVar9 + -1) {
          while (puVar7 = puVar13, puVar12 = puVar12 + 1, puVar12 <= puVar9) {
            cVar3 = FUN_146bf3756(param_3,*puVar7,*puVar12);
            puVar13 = puVar12;
            if (cVar3 == '\0') {
              puVar13 = puVar7;
            }
          }
          uVar1 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar1;
          plVar5 = local_360;
        }
        goto LAB_146bf35b5;
      }
LAB_146bf35cf:
      FUN_146bf35e2(puVar6,uVar4,param_3);
      plVar5 = local_360;
LAB_146bf35b5:
      plVar5 = plVar5 + -3;
    } while (&local_348 <= plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bf34ad:
  uVar1 = *puVar6;
  *puVar6 = *puVar7;
  *puVar7 = uVar1;
  local_354 = local_354 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar11 - (longlong)local_350 < (longlong)puVar12 - (longlong)puVar13) {
    plVar5 = local_360;
    if (puVar8 < puVar9) {
      *local_360 = (longlong)puVar8;
      local_360[1] = (longlong)puVar9;
      *(int *)(local_360 + 2) = local_354;
      plVar5 = local_360 + 3;
    }
    puVar13 = puVar6;
    if (puVar7 <= puVar6 + 1) goto LAB_146bf35b5;
  }
  else {
    if (puVar6 + 1 < puVar7) {
      *local_360 = (longlong)puVar6;
      local_360[1] = (longlong)puVar10;
      *(int *)(local_360 + 2) = local_354;
      local_360 = local_360 + 3;
    }
    plVar5 = local_360;
    puVar6 = puVar8;
    puVar10 = puVar9;
    puVar11 = puVar9;
    if (puVar9 <= puVar8) goto LAB_146bf35b5;
  }
  local_360 = plVar5;
  uVar4 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar13) >> 2) + 1;
  puVar9 = puVar10;
  puVar12 = puVar11;
  if (local_354 == 0) goto LAB_146bf35cf;
  goto LAB_146bf341c;
}



// FUNCTION 146bf35e2 FUN_146bf35e2 body=372 status=ok
// SIG undefined FUN_146bf35e2(void)

void FUN_146bf35e2(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar5;
joined_r0x000146bf361d:
    do {
      iVar6 = iVar5 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar5 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           (cVar2 = FUN_146bf3756(param_3,param_1[iVar7],param_1[iVar6]), cVar2 == '\0')) {
          iVar6 = iVar7;
        }
        cVar2 = FUN_146bf3756(param_3,param_1[iVar5],param_1[iVar6]);
        if (cVar2 != '\0') {
          uVar1 = param_1[iVar5];
          param_1[iVar5] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar5 = iVar6;
          goto joined_r0x000146bf361d;
        }
      }
      bVar9 = iVar8 != 0;
      iVar5 = iVar8 + -1;
      iVar8 = iVar5;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar5 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar5 < (longlong)uVar4) &&
               (cVar2 = FUN_146bf3756(param_3,param_1[iVar5],param_1[iVar6]), cVar2 == '\0')) {
              iVar7 = iVar5;
            }
            cVar2 = FUN_146bf3756(param_3,param_1[iVar8],param_1[iVar7]);
            if (cVar2 == '\0') break;
            uVar1 = param_1[iVar8];
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar1;
            iVar5 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar4);
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



// FUNCTION 146bf3756 FUN_146bf3756 body=156 status=ok
// SIG undefined FUN_146bf3756(void)

ulonglong FUN_146bf3756(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  double local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  (**(code **)*param_1)(&local_38,((undefined8 *)*param_1)[1]);
  local_24 = param_3;
  uVar1 = (**(code **)*param_1)(&local_48,((undefined8 *)*param_1)[1]);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  if ((double)CONCAT44(uStack_44,local_48) <= local_38) {
    uVar2 = -(ulonglong)(local_30 < local_40 && local_38 == (double)CONCAT44(uStack_44,local_48)) &
            0xffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf37f3 FUN_146bf37f3 body=231 status=ok
// SIG undefined FUN_146bf37f3(void)

ulonglong FUN_146bf37f3(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  uVar4 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1 < (int)param_2) {
    lVar5 = uVar4 * 4 + -4;
    puVar2 = param_1;
    local_78 = param_1;
    do {
      uVar1 = param_1[1];
      local_70 = *puVar2;
      (*(code *)*param_3)(&local_60,param_3[1],&local_70);
      local_4c = uVar1;
      (*(code *)*param_3)(&local_70,param_3[1],&local_4c);
      if ((local_60 != (double)CONCAT44(uStack_6c,local_70)) ||
         (NAN(local_60) || NAN((double)CONCAT44(uStack_6c,local_70)))) {
LAB_146bf3889:
        puVar3 = puVar2 + 1;
        if (param_1 != puVar2) {
          *puVar3 = param_1[1];
        }
      }
      else if ((local_58 != local_68) || (puVar3 = puVar2, NAN(local_58) || NAN(local_68)))
      goto LAB_146bf3889;
      param_1 = param_1 + 1;
      lVar5 = lVar5 + -4;
      puVar2 = puVar3;
    } while (lVar5 != 0);
    uVar4 = (ulonglong)((longlong)puVar3 + (4 - (longlong)local_78)) >> 2;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146bf38f8 FUN_146bf38f8 body=134 status=ok
// SIG undefined FUN_146bf38f8(void)

void FUN_146bf38f8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bf3abe(param_1,iVar1);
    }
    FUN_146bf3a95((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bf3b44(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bf3b9e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bf3980 FUN_146bf3980 body=276 status=ok
// SIG undefined FUN_146bf3980(void)

void FUN_146bf3980(longlong param_1,float *param_2)

{
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = (double)param_2[8];
  local_48 = (double)param_2[7];
  local_50 = (double)param_2[6];
  local_58 = (double)param_2[5];
  local_60 = (double)param_2[4];
  local_68 = (double)param_2[3];
  local_70 = (double)param_2[2];
  local_78 = (double)param_2[1];
  local_80 = (double)*param_2;
  FUN_146baf581(&local_38,&local_80);
  *(double *)(param_1 + 0x20) = local_38;
  *(double *)(param_1 + 0x28) = local_30;
  *(double *)(param_1 + 0x30) = local_28;
  *(double *)(param_1 + 0x38) = local_70 * local_28 + local_80 * local_38 + local_78 * local_30;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf3a95 FUN_146bf3a95 body=40 status=ok
// SIG undefined FUN_146bf3a95(void)

void FUN_146bf3a95(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1[3] = 0xffefffffffffffff;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 146bf3abe FUN_146bf3abe body=132 status=ok
// SIG undefined FUN_146bf3abe(void)

void FUN_146bf3abe(longlong param_1,int param_2)

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



// FUNCTION 146bf3b44 FUN_146bf3b44 body=89 status=ok
// SIG undefined FUN_146bf3b44(void)

void FUN_146bf3b44(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146be7657(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bf3b9e FUN_146bf3b9e body=62 status=ok
// SIG undefined FUN_146bf3b9e(void)

void FUN_146bf3b9e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf3bdc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 146bf3bdc FUN_146bf3bdc body=93 status=ok
// SIG undefined FUN_146bf3bdc(void)

ulonglong FUN_146bf3bdc(uint param_1,uint param_2)

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



// FUNCTION 146bf3c3a FUN_146bf3c3a body=918 status=ok
// SIG undefined FUN_146bf3c3a(void)

undefined8
FUN_146bf3c3a(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7,int param_8,int param_9,
             char param_10)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  longlong *local_c0;
  undefined4 local_b4;
  ulonglong local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  iVar8 = param_9;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  if (param_9 != -1) {
    pcVar3 = (code *)*param_3;
    uVar6 = param_3[1];
    lVar13 = *param_2;
    lVar7 = (longlong)param_8;
    local_88 = *(undefined4 *)(lVar13 + lVar7 * 0xc);
    (*pcVar3)(&local_78,uVar6);
    local_7c = *(undefined4 *)(lVar13 + 4 + lVar7 * 0xc);
    (*pcVar3)(&local_88,uVar6,&local_7c);
    local_6c = CONCAT44(uStack_84,local_88);
    local_64 = local_80;
    local_7c = *(undefined4 *)(lVar13 + 8 + lVar7 * 0xc);
    (*pcVar3)(&local_88,uVar6,&local_7c);
    local_60 = CONCAT44(uStack_84,local_88);
    local_58 = local_80;
    fVar14 = (float)FUN_146ba99e6(&local_78,&local_6c,&local_60,local_a0);
    if (fVar14 <= 0.0) {
      uVar6 = 0;
      goto LAB_146bf3e8f;
    }
  }
  cVar4 = param_10;
  iVar10 = 0;
  FUN_1447cbafe(param_6,&local_78,&param_8,0);
  if (cVar4 == '\0') {
    FUN_146bf3fd2(param_1,param_8,param_5);
  }
  local_78 = *(undefined8 *)(*local_c0 + (longlong)param_8 * 0xc);
  uVar6 = local_78;
  local_70 = *(int *)(*local_c0 + 8 + (longlong)param_8 * 0xc);
  if (iVar8 < 0) {
    uVar12 = 3;
  }
  else {
    iVar11 = 0;
    if ((int)local_78 != iVar8) {
      iVar11 = 1;
      local_78._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      if (local_78._4_4_ != iVar8) {
        iVar11 = (uint)(local_70 == iVar8) * 3 + -1;
      }
    }
    iVar10 = iVar11 + 1;
    uVar12 = (ulonglong)(iVar11 + 4);
  }
  local_b0 = uVar12;
  local_78 = uVar6;
  do {
    uVar1 = *(uint *)((longlong)param_8 * 0xc + *param_1 + (longlong)(iVar10 % 3) * 4);
    if ((int)param_6[1] != *(int *)((longlong)param_6 + 0x34)) {
      plVar5 = (longlong *)param_6[8];
      if ((longlong *)param_6[8] == (longlong *)0x0) {
        plVar5 = param_6 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_6[9] - 1U & uVar1) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*param_6 + (longlong)iVar8 * 0xc) == uVar1) goto LAB_146bf3e47;
          iVar8 = *(int *)(*param_6 + (longlong)iVar8 * 0xc + 4);
        } while (iVar8 != -1);
      }
    }
    uVar2 = *(undefined4 *)((longlong)&local_78 + (longlong)((iVar10 + 1) % 3) * 4);
    local_98 = *local_a8;
    local_90 = local_a8[1];
    local_e8 = param_7;
    local_f0 = param_6;
    local_f8 = param_5;
    local_d0 = 0;
    local_e0 = uVar1;
    local_d8 = uVar2;
    cVar4 = FUN_146bf3c3a(param_1,local_c0,&local_98,local_a0);
    uVar12 = local_b0;
    if (cVar4 == '\0') {
      uVar9 = *(undefined4 *)((longlong)&local_78 + (longlong)(iVar10 % 3) * 4);
      iVar8 = (int)param_7[1];
      lVar13 = (longlong)iVar8;
      *(uint *)(param_7 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar8 + 1U) {
        local_b4 = uVar9;
        FUN_146bf45fc(param_7,iVar8);
        uVar9 = local_b4;
      }
      lVar7 = *param_7;
      *(undefined4 *)(lVar7 + lVar13 * 0xc) = uVar9;
      *(undefined4 *)(lVar7 + 4 + lVar13 * 0xc) = uVar2;
      *(uint *)(lVar7 + 8 + lVar13 * 0xc) = uVar1;
      uVar12 = local_b0;
    }
LAB_146bf3e47:
    iVar10 = iVar10 + 1;
  } while (iVar10 != (int)uVar12);
  uVar6 = 1;
LAB_146bf3e8f:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146bf3fd2 FUN_146bf3fd2 body=196 status=ok
// SIG undefined FUN_146bf3fd2(void)

void FUN_146bf3fd2(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2 * 0x40;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar5)) {
    FUN_144a7cc9e(param_1 + 0x20);
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar2 = *(uint *)(lVar4 + 8 + lVar5);
    if ((longlong)(int)uVar2 != 0) {
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + uVar2;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar3) < uVar2) {
        FUN_1446f48e2(param_3,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 4 + *param_3),*(void **)(lVar4 + lVar5),
             (longlong)(int)uVar2 << 2);
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    lVar1 = lVar4 + lVar5;
    *(undefined4 *)(lVar4 + 8 + lVar5) = 0;
    if (*(int *)(lVar4 + 0xc + lVar5) < 0) {
      FUN_14481578e(lVar1,0);
    }
    *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0xffefffffffffffff;
  }
  return;
}



// FUNCTION 146bf4096 FUN_146bf4096 body=111 status=ok
// SIG undefined FUN_146bf4096(void)

void FUN_146bf4096(longlong *param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ((double)param_3[2] * (double)param_1[6] +
          (double)*param_3 * (double)param_1[4] + (double)param_3[1] * (double)param_1[5]) -
          (double)param_1[7];
  if ((double)param_1[3] <= dVar2 && dVar2 != (double)param_1[3]) {
    param_1[3] = (longlong)dVar2;
    *(undefined4 *)(param_1 + 2) = param_2;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 146bf4106 FUN_146bf4106 body=1268 status=ok
// SIG undefined FUN_146bf4106(void)

void FUN_146bf4106(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  uint local_e4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  iVar17 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  plVar1 = param_3 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar17 = (int)param_3[5];
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_3;
  if ((iStack_a4 != iVar17) || (local_b0 != plVar1)) {
    plVar19 = param_1 + 4;
    local_f8 = param_1 + 2;
    local_f0 = param_3 + 7;
    do {
      local_e4 = *(uint *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      if ((int)local_e4 < (int)param_2[1]) {
        local_b0 = (longlong *)
                   CONCAT44(local_b0._4_4_,
                            *(undefined4 *)(*param_1 + 8 + (longlong)(int)local_e4 * 0xc));
        local_b8 = *(undefined8 *)(*param_1 + (longlong)(int)local_e4 * 0xc);
        lVar12 = 0;
        do {
          iVar9 = *(int *)((longlong)&local_b8 + lVar12 * 4);
          if ((-1 < (longlong)iVar9) && (iVar9 < (int)param_1[1])) {
            lVar13 = (longlong)iVar9 * 0xc + *param_1;
            lVar15 = 0;
            do {
              if (*(uint *)(lVar13 + lVar15 * 4) == local_e4) {
                *(undefined4 *)(lVar13 + lVar15 * 4) = 0xffffffff;
                break;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != 3);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        uVar14 = (int)param_2[1] - 1;
        uVar10 = (ulonglong)uVar14;
        if ((int)local_e4 < (int)uVar14) {
          uVar10 = (longlong)(int)param_2[1] - 1;
          do {
            uVar14 = (uint)uVar10;
            if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
LAB_146bf449c:
              local_100 = plVar19;
              FUN_1447cbafe(&local_98,&local_b8,&local_e4,0);
              lVar13 = (longlong)(int)uVar14;
              local_b0 = (longlong *)
                         CONCAT44(local_b0._4_4_,*(undefined4 *)(*param_1 + 8 + lVar13 * 0xc));
              local_b8 = *(undefined8 *)(*param_1 + lVar13 * 0xc);
              lVar12 = 0;
              do {
                iVar9 = *(int *)((longlong)&local_b8 + lVar12 * 4);
                if ((-1 < (longlong)iVar9) && (iVar9 < (int)param_1[1])) {
                  lVar15 = (longlong)iVar9 * 0xc + *param_1;
                  lVar16 = 0;
                  do {
                    if (*(uint *)(lVar15 + lVar16 * 4) == uVar14) {
                      *(uint *)(lVar15 + lVar16 * 4) = local_e4;
                      break;
                    }
                    lVar16 = lVar16 + 1;
                  } while (lVar16 != 3);
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 != 3);
              lVar12 = *param_1;
              lVar15 = lVar13 * 0xc;
              lVar16 = (longlong)(int)local_e4 * 0xc;
              *(undefined4 *)(lVar12 + 8 + lVar16) = *(undefined4 *)(lVar12 + 8 + lVar15);
              *(undefined8 *)(lVar12 + lVar16) = *(undefined8 *)(lVar12 + lVar15);
              lVar12 = *param_2;
              *(undefined4 *)(lVar12 + 8 + lVar16) = *(undefined4 *)(lVar12 + 8 + lVar15);
              *(undefined8 *)(lVar12 + lVar16) = *(undefined8 *)(lVar12 + lVar15);
              plVar20 = (longlong *)(lVar13 * 0x40 + param_1[2]);
              plVar18 = (longlong *)((longlong)(int)local_e4 * 0x40 + param_1[2]);
              if (local_e4 != uVar14) {
                if (*plVar18 != 0) {
                  FUN_1400020a8();
                }
                *plVar18 = *plVar20;
                *plVar20 = 0;
                *(int *)(plVar18 + 1) = (int)plVar20[1];
                *(undefined4 *)((longlong)plVar18 + 0xc) = *(undefined4 *)((longlong)plVar20 + 0xc);
                plVar20[1] = 0;
              }
              plVar19 = local_100;
              lVar12 = plVar20[2];
              uVar2 = *(undefined4 *)((longlong)plVar20 + 0x14);
              lVar13 = plVar20[3];
              uVar3 = *(undefined4 *)((longlong)plVar20 + 0x1c);
              lVar15 = plVar20[4];
              uVar4 = *(undefined4 *)((longlong)plVar20 + 0x24);
              lVar16 = plVar20[5];
              uVar5 = *(undefined4 *)((longlong)plVar20 + 0x2c);
              uVar6 = *(undefined4 *)((longlong)plVar20 + 0x34);
              lVar8 = plVar20[7];
              uVar7 = *(undefined4 *)((longlong)plVar20 + 0x3c);
              *(int *)(plVar18 + 6) = (int)plVar20[6];
              *(undefined4 *)((longlong)plVar18 + 0x34) = uVar6;
              *(int *)(plVar18 + 7) = (int)lVar8;
              *(undefined4 *)((longlong)plVar18 + 0x3c) = uVar7;
              *(int *)(plVar18 + 4) = (int)lVar15;
              *(undefined4 *)((longlong)plVar18 + 0x24) = uVar4;
              *(int *)(plVar18 + 5) = (int)lVar16;
              *(undefined4 *)((longlong)plVar18 + 0x2c) = uVar5;
              *(int *)(plVar18 + 2) = (int)lVar12;
              *(undefined4 *)((longlong)plVar18 + 0x14) = uVar2;
              *(int *)(plVar18 + 3) = (int)lVar13;
              *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar3;
              iVar9 = FUN_144a7cc9e(local_100,uVar10 & 0xffffffff);
              if (iVar9 != 0) {
                FUN_1447cbafe(plVar19,&local_b8,&local_e4,0);
              }
              goto LAB_146bf446e;
            }
            plVar18 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar18 = local_f0;
            }
            iVar9 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4);
            if (iVar9 == -1) goto LAB_146bf449c;
            while (*(uint *)(*param_3 + (longlong)iVar9 * 0xc) != uVar14) {
              iVar9 = *(int *)(*param_3 + (longlong)iVar9 * 0xc + 4);
              if (iVar9 == -1) goto LAB_146bf449c;
            }
            if ((int)uStack_90 != local_64) {
              puVar11 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar11 = local_60;
              }
              for (iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & uVar14) * 4); iVar9 != -1;
                  iVar9 = *(int *)(local_98 + (longlong)iVar9 * 0xc + 4)) {
                if (*(uint *)(local_98 + (longlong)iVar9 * 0xc) == uVar14) goto LAB_146bf449c;
              }
            }
            FUN_144a7cc9e(plVar19,uVar10 & 0xffffffff);
            local_b0 = (longlong *)
                       CONCAT44(local_b0._4_4_,*(undefined4 *)(*param_1 + 8 + uVar10 * 0xc));
            local_b8 = *(undefined8 *)(*param_1 + uVar10 * 0xc);
            lVar12 = 0;
            do {
              iVar9 = *(int *)((longlong)&local_b8 + lVar12 * 4);
              if ((-1 < (longlong)iVar9) && (iVar9 < (int)param_1[1])) {
                lVar13 = (longlong)iVar9 * 0xc + *param_1;
                lVar15 = 0;
                do {
                  if (*(uint *)(lVar13 + lVar15 * 4) == uVar14) {
                    *(undefined4 *)(lVar13 + lVar15 * 4) = 0xffffffff;
                    break;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 3);
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != 3);
            uVar10 = uVar10 - 1;
          } while ((longlong)(int)local_e4 < (longlong)uVar10);
        }
        FUN_144a7cc9e(plVar19);
LAB_146bf446e:
        FUN_146bd783c(param_2,uVar10 & 0xffffffff,0);
        FUN_146bd783c(param_1,uVar10 & 0xffffffff,0);
        FUN_146bf38f8(local_f8,uVar10 & 0xffffffff,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != param_3 || (local_d0 != plVar1 || iStack_c4 != iVar17));
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf45fc FUN_146bf45fc body=147 status=ok
// SIG undefined FUN_146bf45fc(void)

void FUN_146bf45fc(longlong param_1,int param_2)

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



// FUNCTION 146bf4690 FUN_146bf4690 body=326 status=ok
// SIG undefined FUN_146bf4690(void)

void FUN_146bf4690(longlong *param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_88 [44];
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  if ((int)param_1[2] == param_2) {
    param_1[3] = -0x10000000000001;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    iVar2 = (int)param_1[1];
    if (0 < iVar2) {
      uVar3 = 0;
      do {
        lVar1 = *param_1;
        iVar4 = *(int *)(lVar1 + (longlong)(int)uVar3 * 4);
        if (iVar4 == param_2) {
          iVar4 = ~uVar3 + iVar2;
          if (iVar4 != 0) {
            if (0 < iVar4) {
              iVar4 = 1;
            }
            memmove((void *)(lVar1 + (longlong)(int)uVar3 * 4),
                    (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 4),(longlong)iVar4 << 2);
            iVar2 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar2 + -1;
          uVar3 = uVar3 - 1;
        }
        else {
          local_4c = iVar4;
          (*(code *)*param_3)(&local_5c,param_3[1],&local_4c);
          dVar5 = ((double)local_54 * (double)param_1[6] +
                  (double)local_5c * (double)param_1[4] + (double)local_58 * (double)param_1[5]) -
                  (double)param_1[7];
          if ((double)param_1[3] <= dVar5 && dVar5 != (double)param_1[3]) {
            param_1[3] = (longlong)dVar5;
            *(int *)(param_1 + 2) = iVar4;
          }
        }
        uVar3 = uVar3 + 1;
        iVar2 = (int)param_1[1];
      } while ((int)uVar3 < iVar2);
    }
  }
  else {
    FUN_1428664a6(param_1,&local_50,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bf47ee FUN_146bf47ee body=47 status=ok
// SIG undefined FUN_146bf47ee(void)

void FUN_146bf47ee(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146bf481e FUN_146bf481e body=48 status=ok
// SIG undefined FUN_146bf481e(void)

void FUN_146bf481e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 146bf484e FUN_146bf484e body=147 status=ok
// SIG undefined FUN_146bf484e(void)

void FUN_146bf484e(longlong param_1,int param_2)

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



// FUNCTION 146bf48e2 FUN_146bf48e2 body=806 status=ok
// SIG undefined FUN_146bf48e2(void)

void FUN_146bf48e2(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar20 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar20 + fVar20);
    plVar13 = &local_358;
    do {
      puVar6 = (undefined8 *)*plVar13;
      puVar14 = (undefined8 *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar6) >> 3);
      puVar17 = puVar14;
      puVar18 = puVar6;
      if (iVar16 != 0) {
LAB_146bf49ab:
        uVar9 = iVar7 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar1 = puVar6[uVar10 * 3 + 2];
          uVar2 = puVar6[uVar10 * 3];
          uVar3 = (puVar6 + uVar10 * 3)[1];
          puVar6[uVar10 * 3 + 2] = puVar6[2];
          uVar4 = puVar6[1];
          puVar6[uVar10 * 3] = *puVar6;
          (puVar6 + uVar10 * 3)[1] = uVar4;
          puVar6[2] = uVar1;
          *puVar6 = uVar2;
          puVar6[1] = uVar3;
          puVar11 = puVar14 + 3;
          puVar8 = puVar6;
          do {
            puVar5 = puVar8 + 3;
            puVar15 = puVar8 + 3;
            do {
              puVar8 = puVar15;
              puVar12 = puVar5;
              if (puVar14 < puVar8) break;
              puVar5 = puVar12 + 3;
              puVar15 = puVar8 + 3;
            } while ((double)puVar8[2] < (double)puVar6[2] || (double)puVar8[2] == (double)puVar6[2]
                    );
            puVar5 = puVar11 + -6;
            do {
              puVar15 = puVar11;
              puVar19 = puVar5;
              puVar11 = puVar15 + -3;
              if (puVar11 <= puVar6) break;
              puVar5 = puVar19 + -3;
            } while ((double)puVar6[2] < (double)puVar15[-1] ||
                     (double)puVar6[2] == (double)puVar15[-1]);
            if (puVar11 < puVar8) goto LAB_146bf4a9c;
            uVar1 = puVar8[2];
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            puVar8[2] = puVar15[-1];
            uVar4 = puVar15[-2];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            puVar15[-1] = uVar1;
            *puVar11 = uVar2;
            puVar15[-2] = uVar3;
          } while( true );
        }
        for (; puVar18 = puVar6, puVar17 = puVar6, puVar6 < puVar14; puVar14 = puVar14 + -3) {
          while (puVar11 = puVar18, puVar17 = puVar17 + 3, puVar17 <= puVar14) {
            puVar18 = puVar17;
            if ((double)puVar17[2] < (double)puVar11[2] || (double)puVar17[2] == (double)puVar11[2])
            {
              puVar18 = puVar11;
            }
          }
          local_48 = puVar11[2];
          local_58 = *puVar11;
          uStack_50 = puVar11[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          puVar11[2] = puVar14[2];
          uVar1 = puVar14[1];
          *puVar11 = *puVar14;
          puVar11[1] = uVar1;
          puVar14[2] = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_146bf4be7;
      }
LAB_146bf4bfc:
      FUN_146bf4c09(puVar6);
LAB_146bf4be7:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_38 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bf4a9c:
  local_48 = puVar6[2];
  local_58 = *puVar6;
  uStack_50 = puVar6[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  puVar6[2] = puVar15[-1];
  uVar1 = puVar15[-2];
  *puVar6 = *puVar11;
  puVar6[1] = uVar1;
  puVar15[-1] = local_48;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -6;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar19 - (longlong)puVar18 < (longlong)puVar17 - (longlong)puVar12) {
    if (puVar8 < puVar14) {
      *plVar13 = (longlong)puVar8;
      plVar13[1] = (longlong)puVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar12 = puVar6;
    if (puVar11 <= puVar6 + 3) goto LAB_146bf4be7;
  }
  else {
    if (puVar6 + 3 < puVar11) {
      *plVar13 = (longlong)puVar6;
      plVar13[1] = (longlong)puVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar6 = puVar8;
    puVar15 = puVar14;
    puVar19 = puVar14;
    if (puVar14 <= puVar8) goto LAB_146bf4be7;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar12) >> 3);
  puVar14 = puVar15;
  puVar17 = puVar19;
  puVar18 = puVar12;
  if (iVar16 == 0) goto LAB_146bf4bfc;
  goto LAB_146bf49ab;
}



// FUNCTION 146bf4c09 FUN_146bf4c09 body=597 status=ok
// SIG undefined FUN_146bf4c09(void)

void FUN_146bf4c09(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x000146bf4c3d:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           ((double)param_1[(longlong)iVar10 * 3 + 2] < (double)param_1[(longlong)iVar11 * 3 + 2] ||
            (double)param_1[(longlong)iVar10 * 3 + 2] == (double)param_1[(longlong)iVar11 * 3 + 2]))
        {
          iVar10 = iVar11;
        }
        if ((double)param_1[(longlong)iVar8 * 3 + 2] <= (double)param_1[(longlong)iVar10 * 3 + 2] &&
            (double)param_1[(longlong)iVar10 * 3 + 2] != (double)param_1[(longlong)iVar8 * 3 + 2]) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146bf4c3d;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               ((double)param_1[(longlong)iVar10 * 3 + 2] < (double)param_1[(longlong)iVar8 * 3 + 2]
                || (double)param_1[(longlong)iVar10 * 3 + 2] ==
                   (double)param_1[(longlong)iVar8 * 3 + 2])) {
              iVar11 = iVar8;
            }
            if ((double)param_1[(longlong)iVar11 * 3 + 2] <
                (double)param_1[(longlong)iVar12 * 3 + 2] ||
                (double)param_1[(longlong)iVar11 * 3 + 2] ==
                (double)param_1[(longlong)iVar12 * 3 + 2]) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bf4e60 FUN_146bf4e60 body=298 status=ok
// SIG undefined FUN_146bf4e60(void)

undefined4 * FUN_146bf4e60(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146bf4f8c(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[0x12] = 0;
  local_40[0x13] = 0;
  local_40[0x14] = 0;
  local_40[0x15] = 0x10;
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_146bf507a(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x17] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x16] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146bf519a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf4f8c FUN_146bf4f8c body=238 status=ok
// SIG undefined FUN_146bf4f8c(void)

int * FUN_146bf4f8c(longlong *param_1,int *param_2)

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



// FUNCTION 146bf507a FUN_146bf507a body=165 status=ok
// SIG undefined FUN_146bf507a(void)

undefined8 FUN_146bf507a(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x58);
          FUN_146bf5120(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146bf5120 FUN_146bf5120 body=122 status=ok
// SIG undefined FUN_146bf5120(void)

void FUN_146bf5120(longlong *param_1,int param_2)

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



// FUNCTION 146bf519a FUN_146bf519a body=423 status=ok
// SIG undefined FUN_146bf519a(void)

void FUN_146bf519a(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146bf5342 FUN_146bf5342 body=95 status=ok
// SIG undefined FUN_146bf5342(void)

void FUN_146bf5342(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_146bf53a2();
  return;
}



// FUNCTION 146bf53a2 FUN_146bf53a2 body=56 status=ok
// SIG undefined FUN_146bf53a2(void)

void FUN_146bf53a2(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x48 + (longlong)param_2 * 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_146bf5120(param_1,param_2);
  return;
}



// FUNCTION 146bf53da FUN_146bf53da body=101 status=ok
// SIG undefined FUN_146bf53da(void)

void FUN_146bf53da(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_1401fcd14(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146bf5440 FUN_146bf5440 body=147 status=ok
// SIG undefined FUN_146bf5440(void)

void FUN_146bf5440(longlong param_1,int param_2)

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



// FUNCTION 146bf5518 FUN_146bf5518 body=59 status=ok
// SIG undefined FUN_146bf5518(void)

void FUN_146bf5518(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf5554(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_1400cc4ea(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,4);
  return;
}



// FUNCTION 146bf5554 FUN_146bf5554 body=105 status=ok
// SIG undefined FUN_146bf5554(void)

ulonglong FUN_146bf5554(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146bf55be FUN_146bf55be body=117 status=ok
// SIG undefined FUN_146bf55be(void)

void FUN_146bf55be(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x30 + lVar1),(longlong)iVar3 * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146bf564a FUN_146bf564a body=73 status=ok
// SIG undefined FUN_146bf564a(void)

void FUN_146bf564a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_146bf5694(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf5694 FUN_146bf5694 body=169 status=ok
// SIG undefined FUN_146bf5694(void)

void FUN_146bf5694(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_146bf5440(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar4) = 0x800000000;
  FUN_146badc46(lVar3 + lVar4,param_2);
  plVar2 = *(longlong **)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_140c0b6f2(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_3;
  }
  return;
}



// FUNCTION 146bf573e FUN_146bf573e body=73 status=ok
// SIG undefined FUN_146bf573e(void)

void FUN_146bf573e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_146bf5788(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf5788 FUN_146bf5788 body=169 status=ok
// SIG undefined FUN_146bf5788(void)

void FUN_146bf5788(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_146bf5440(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar4) = 0x800000000;
  FUN_146badc46(lVar3 + lVar4,param_2);
  plVar2 = *(longlong **)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_140c0b6f2(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_3;
  }
  return;
}



// FUNCTION 146bf5832 FUN_146bf5832 body=96 status=ok
// SIG undefined FUN_146bf5832(void)

void FUN_146bf5832(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146bf5892 FUN_146bf5892 body=132 status=ok
// SIG undefined FUN_146bf5892(void)

void FUN_146bf5892(longlong param_1,int param_2)

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



// FUNCTION 146bf593a FUN_146bf593a body=174 status=ok
// SIG undefined FUN_146bf593a(void)

void FUN_146bf593a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146bf59ea(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      puVar2[3] = 0xffefffffffffffff;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_146bf5a70(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_146bf5aca(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bf59ea FUN_146bf59ea body=132 status=ok
// SIG undefined FUN_146bf59ea(void)

void FUN_146bf59ea(longlong param_1,int param_2)

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



// FUNCTION 146bf5a70 FUN_146bf5a70 body=89 status=ok
// SIG undefined FUN_146bf5a70(void)

void FUN_146bf5a70(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146be77f4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bf5aca FUN_146bf5aca body=62 status=ok
// SIG undefined FUN_146bf5aca(void)

void FUN_146bf5aca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf5b08(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 146bf5b08 FUN_146bf5b08 body=93 status=ok
// SIG undefined FUN_146bf5b08(void)

ulonglong FUN_146bf5b08(uint param_1,uint param_2)

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



// FUNCTION 146bf5b66 FUN_146bf5b66 body=1099 status=ok
// SIG undefined FUN_146bf5b66(void)

undefined8
FUN_146bf5b66(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7,int param_8,int param_9,
             char param_10)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  uint local_160;
  undefined4 local_158;
  undefined1 local_150;
  longlong *local_140;
  longlong *local_138;
  undefined8 *local_130;
  ulonglong local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  iVar15 = param_9;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_140 = param_1;
  local_138 = param_2;
  local_130 = param_4;
  local_120 = param_3;
  if (param_9 != -1) {
    pcVar5 = (code *)*param_3;
    uVar13 = param_3[1];
    lVar20 = *param_2;
    lVar14 = (longlong)param_8;
    local_c8._0_4_ = *(undefined4 *)(lVar20 + lVar14 * 0xc);
    (*pcVar5)(&local_a8,uVar13,&local_c8);
    uVar8 = uStack_a0;
    uVar6 = local_a8;
    local_c8._0_4_ = *(undefined4 *)(lVar20 + 4 + lVar14 * 0xc);
    (*pcVar5)(&local_a8,uVar13,&local_c8);
    uVar10 = local_98;
    uVar9 = uStack_a0;
    uVar7 = local_a8;
    param_4 = local_130;
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar20 + 8 + lVar14 * 0xc));
    (*pcVar5)(&local_a8,uVar13,&local_c8);
    local_c8 = uVar7;
    uStack_c0 = uVar9;
    local_b8 = uVar10;
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    local_d8 = local_98;
    local_108 = *param_4;
    local_100 = param_4[1];
    local_f8 = param_4[2];
    local_a8 = uVar6;
    uStack_a0 = uVar8;
    dVar21 = (double)FUN_146bb2dfa(&local_a8,&local_c8);
    if (dVar21 <= 0.0) {
      uVar13 = 0;
      goto LAB_146bf5df4;
    }
  }
  cVar11 = param_10;
  iVar16 = 0;
  FUN_1447cbafe(param_6,&local_a8,&param_8,0);
  if (cVar11 == '\0') {
    FUN_146bf5fb2(local_140,param_8,param_5);
  }
  local_a8 = *(undefined8 *)(*local_138 + (longlong)param_8 * 0xc);
  uVar13 = local_a8;
  iVar1 = *(int *)(*local_138 + 8 + (longlong)param_8 * 0xc);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar1);
  if (iVar15 < 0) {
    uVar19 = 3;
  }
  else {
    iVar18 = 0;
    if ((int)local_a8 != iVar15) {
      iVar18 = 1;
      local_a8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      if (local_a8._4_4_ != iVar15) {
        iVar18 = (uint)(iVar1 == iVar15) * 3 + -1;
      }
    }
    iVar16 = iVar18 + 1;
    uVar19 = (ulonglong)(iVar18 + 4);
  }
  plVar17 = local_140;
  local_128 = uVar19;
  local_a8 = uVar13;
  do {
    uVar2 = *(uint *)((longlong)param_8 * 0xc + *plVar17 + (longlong)(iVar16 % 3) * 4);
    if ((int)param_6[1] != *(int *)((longlong)param_6 + 0x34)) {
      plVar12 = (longlong *)param_6[8];
      if ((longlong *)param_6[8] == (longlong *)0x0) {
        plVar12 = param_6 + 7;
      }
      iVar15 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_6[9] - 1U & uVar2) * 4);
      if (iVar15 != -1) {
        do {
          if (*(uint *)(*param_6 + (longlong)iVar15 * 0xc) == uVar2) goto LAB_146bf5da5;
          iVar15 = *(int *)(*param_6 + (longlong)iVar15 * 0xc + 4);
        } while (iVar15 != -1);
      }
    }
    uVar3 = *(undefined4 *)((longlong)&local_a8 + (longlong)((iVar16 + 1) % 3) * 4);
    local_118 = *local_120;
    local_110 = local_120[1];
    local_168 = param_7;
    local_170 = param_6;
    local_178 = param_5;
    local_150 = 0;
    local_160 = uVar2;
    local_158 = uVar3;
    cVar11 = FUN_146bf5b66(plVar17,local_138,&local_118,param_4);
    plVar17 = local_140;
    uVar19 = local_128;
    if (cVar11 == '\0') {
      uVar4 = *(undefined4 *)((longlong)&local_a8 + (longlong)(iVar16 % 3) * 4);
      iVar15 = (int)param_7[1];
      lVar20 = (longlong)iVar15;
      *(uint *)(param_7 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar15 + 1U) {
        FUN_146bf65dc(param_7,iVar15);
      }
      lVar14 = *param_7;
      *(undefined4 *)(lVar14 + lVar20 * 0xc) = uVar4;
      *(undefined4 *)(lVar14 + 4 + lVar20 * 0xc) = uVar3;
      *(uint *)(lVar14 + 8 + lVar20 * 0xc) = uVar2;
      plVar17 = local_140;
      uVar19 = local_128;
      param_4 = local_130;
    }
LAB_146bf5da5:
    iVar16 = iVar16 + 1;
  } while (iVar16 != (int)uVar19);
  uVar13 = 1;
LAB_146bf5df4:
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 146bf5fb2 FUN_146bf5fb2 body=196 status=ok
// SIG undefined FUN_146bf5fb2(void)

void FUN_146bf5fb2(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_2 * 0x40;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar5)) {
    FUN_144a7cc9e(param_1 + 0x20);
    lVar4 = *(longlong *)(param_1 + 0x10);
    uVar2 = *(uint *)(lVar4 + 8 + lVar5);
    if ((longlong)(int)uVar2 != 0) {
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + uVar2;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar3) < uVar2) {
        FUN_1446f48e2(param_3,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 4 + *param_3),*(void **)(lVar4 + lVar5),
             (longlong)(int)uVar2 << 2);
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    lVar1 = lVar4 + lVar5;
    *(undefined4 *)(lVar4 + 8 + lVar5) = 0;
    if (*(int *)(lVar4 + 0xc + lVar5) < 0) {
      FUN_14481578e(lVar1,0);
    }
    *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0xffefffffffffffff;
  }
  return;
}



// FUNCTION 146bf6076 FUN_146bf6076 body=111 status=ok
// SIG undefined FUN_146bf6076(void)

void FUN_146bf6076(longlong *param_1,undefined4 param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  
  dVar2 = ((double)param_1[6] * param_3[2] +
          (double)param_1[4] * *param_3 + param_3[1] * (double)param_1[5]) - (double)param_1[7];
  if ((double)param_1[3] <= dVar2 && dVar2 != (double)param_1[3]) {
    param_1[3] = (longlong)dVar2;
    *(undefined4 *)(param_1 + 2) = param_2;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 146bf60e6 FUN_146bf60e6 body=1268 status=ok
// SIG undefined FUN_146bf60e6(void)

void FUN_146bf60e6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  uint local_e4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  iVar17 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  plVar1 = param_3 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_b0 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar17 = (int)param_3[5];
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_3;
  if ((iStack_a4 != iVar17) || (local_b0 != plVar1)) {
    plVar19 = param_1 + 4;
    local_f8 = param_1 + 2;
    local_f0 = param_3 + 7;
    do {
      local_e4 = *(uint *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      if ((int)local_e4 < (int)param_2[1]) {
        local_b0 = (longlong *)
                   CONCAT44(local_b0._4_4_,
                            *(undefined4 *)(*param_1 + 8 + (longlong)(int)local_e4 * 0xc));
        local_b8 = *(undefined8 *)(*param_1 + (longlong)(int)local_e4 * 0xc);
        lVar12 = 0;
        do {
          iVar9 = *(int *)((longlong)&local_b8 + lVar12 * 4);
          if ((-1 < (longlong)iVar9) && (iVar9 < (int)param_1[1])) {
            lVar13 = (longlong)iVar9 * 0xc + *param_1;
            lVar15 = 0;
            do {
              if (*(uint *)(lVar13 + lVar15 * 4) == local_e4) {
                *(undefined4 *)(lVar13 + lVar15 * 4) = 0xffffffff;
                break;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != 3);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        uVar14 = (int)param_2[1] - 1;
        uVar10 = (ulonglong)uVar14;
        if ((int)local_e4 < (int)uVar14) {
          uVar10 = (longlong)(int)param_2[1] - 1;
          do {
            uVar14 = (uint)uVar10;
            if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
LAB_146bf647c:
              local_100 = plVar19;
              FUN_1447cbafe(&local_98,&local_b8,&local_e4,0);
              lVar13 = (longlong)(int)uVar14;
              local_b0 = (longlong *)
                         CONCAT44(local_b0._4_4_,*(undefined4 *)(*param_1 + 8 + lVar13 * 0xc));
              local_b8 = *(undefined8 *)(*param_1 + lVar13 * 0xc);
              lVar12 = 0;
              do {
                iVar9 = *(int *)((longlong)&local_b8 + lVar12 * 4);
                if ((-1 < (longlong)iVar9) && (iVar9 < (int)param_1[1])) {
                  lVar15 = (longlong)iVar9 * 0xc + *param_1;
                  lVar16 = 0;
                  do {
                    if (*(uint *)(lVar15 + lVar16 * 4) == uVar14) {
                      *(uint *)(lVar15 + lVar16 * 4) = local_e4;
                      break;
                    }
                    lVar16 = lVar16 + 1;
                  } while (lVar16 != 3);
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 != 3);
              lVar12 = *param_1;
              lVar15 = lVar13 * 0xc;
              lVar16 = (longlong)(int)local_e4 * 0xc;
              *(undefined4 *)(lVar12 + 8 + lVar16) = *(undefined4 *)(lVar12 + 8 + lVar15);
              *(undefined8 *)(lVar12 + lVar16) = *(undefined8 *)(lVar12 + lVar15);
              lVar12 = *param_2;
              *(undefined4 *)(lVar12 + 8 + lVar16) = *(undefined4 *)(lVar12 + 8 + lVar15);
              *(undefined8 *)(lVar12 + lVar16) = *(undefined8 *)(lVar12 + lVar15);
              plVar20 = (longlong *)(lVar13 * 0x40 + param_1[2]);
              plVar18 = (longlong *)((longlong)(int)local_e4 * 0x40 + param_1[2]);
              if (local_e4 != uVar14) {
                if (*plVar18 != 0) {
                  FUN_1400020a8();
                }
                *plVar18 = *plVar20;
                *plVar20 = 0;
                *(int *)(plVar18 + 1) = (int)plVar20[1];
                *(undefined4 *)((longlong)plVar18 + 0xc) = *(undefined4 *)((longlong)plVar20 + 0xc);
                plVar20[1] = 0;
              }
              plVar19 = local_100;
              lVar12 = plVar20[2];
              uVar2 = *(undefined4 *)((longlong)plVar20 + 0x14);
              lVar13 = plVar20[3];
              uVar3 = *(undefined4 *)((longlong)plVar20 + 0x1c);
              lVar15 = plVar20[4];
              uVar4 = *(undefined4 *)((longlong)plVar20 + 0x24);
              lVar16 = plVar20[5];
              uVar5 = *(undefined4 *)((longlong)plVar20 + 0x2c);
              uVar6 = *(undefined4 *)((longlong)plVar20 + 0x34);
              lVar8 = plVar20[7];
              uVar7 = *(undefined4 *)((longlong)plVar20 + 0x3c);
              *(int *)(plVar18 + 6) = (int)plVar20[6];
              *(undefined4 *)((longlong)plVar18 + 0x34) = uVar6;
              *(int *)(plVar18 + 7) = (int)lVar8;
              *(undefined4 *)((longlong)plVar18 + 0x3c) = uVar7;
              *(int *)(plVar18 + 4) = (int)lVar15;
              *(undefined4 *)((longlong)plVar18 + 0x24) = uVar4;
              *(int *)(plVar18 + 5) = (int)lVar16;
              *(undefined4 *)((longlong)plVar18 + 0x2c) = uVar5;
              *(int *)(plVar18 + 2) = (int)lVar12;
              *(undefined4 *)((longlong)plVar18 + 0x14) = uVar2;
              *(int *)(plVar18 + 3) = (int)lVar13;
              *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar3;
              iVar9 = FUN_144a7cc9e(local_100,uVar10 & 0xffffffff);
              if (iVar9 != 0) {
                FUN_1447cbafe(plVar19,&local_b8,&local_e4,0);
              }
              goto LAB_146bf644e;
            }
            plVar18 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar18 = local_f0;
            }
            iVar9 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4);
            if (iVar9 == -1) goto LAB_146bf647c;
            while (*(uint *)(*param_3 + (longlong)iVar9 * 0xc) != uVar14) {
              iVar9 = *(int *)(*param_3 + (longlong)iVar9 * 0xc + 4);
              if (iVar9 == -1) goto LAB_146bf647c;
            }
            if ((int)uStack_90 != local_64) {
              puVar11 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar11 = local_60;
              }
              for (iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & uVar14) * 4); iVar9 != -1;
                  iVar9 = *(int *)(local_98 + (longlong)iVar9 * 0xc + 4)) {
                if (*(uint *)(local_98 + (longlong)iVar9 * 0xc) == uVar14) goto LAB_146bf647c;
              }
            }
            FUN_144a7cc9e(plVar19,uVar10 & 0xffffffff);
            local_b0 = (longlong *)
                       CONCAT44(local_b0._4_4_,*(undefined4 *)(*param_1 + 8 + uVar10 * 0xc));
            local_b8 = *(undefined8 *)(*param_1 + uVar10 * 0xc);
            lVar12 = 0;
            do {
              iVar9 = *(int *)((longlong)&local_b8 + lVar12 * 4);
              if ((-1 < (longlong)iVar9) && (iVar9 < (int)param_1[1])) {
                lVar13 = (longlong)iVar9 * 0xc + *param_1;
                lVar15 = 0;
                do {
                  if (*(uint *)(lVar13 + lVar15 * 4) == uVar14) {
                    *(undefined4 *)(lVar13 + lVar15 * 4) = 0xffffffff;
                    break;
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 3);
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != 3);
            uVar10 = uVar10 - 1;
          } while ((longlong)(int)local_e4 < (longlong)uVar10);
        }
        FUN_144a7cc9e(plVar19);
LAB_146bf644e:
        FUN_146bd783c(param_2,uVar10 & 0xffffffff,0);
        FUN_146bd783c(param_1,uVar10 & 0xffffffff,0);
        FUN_146bf593a(local_f8,uVar10 & 0xffffffff,0);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != param_3 || (local_d0 != plVar1 || iStack_c4 != iVar17));
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf65dc FUN_146bf65dc body=147 status=ok
// SIG undefined FUN_146bf65dc(void)

void FUN_146bf65dc(longlong param_1,int param_2)

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



// FUNCTION 146bf6670 FUN_146bf6670 body=317 status=ok
// SIG undefined FUN_146bf6670(void)

void FUN_146bf6670(longlong *param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  if ((int)param_1[2] == param_2) {
    param_1[3] = -0x10000000000001;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    iVar2 = (int)param_1[1];
    if (0 < iVar2) {
      uVar3 = 0;
      do {
        lVar1 = *param_1;
        iVar4 = *(int *)(lVar1 + (longlong)(int)uVar3 * 4);
        if (iVar4 == param_2) {
          iVar4 = ~uVar3 + iVar2;
          if (iVar4 != 0) {
            if (0 < iVar4) {
              iVar4 = 1;
            }
            memmove((void *)(lVar1 + (longlong)(int)uVar3 * 4),
                    (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 4),(longlong)iVar4 << 2);
            iVar2 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar2 + -1;
          uVar3 = uVar3 - 1;
        }
        else {
          local_4c = iVar4;
          (*(code *)*param_3)(&local_68,param_3[1],&local_4c);
          dVar5 = ((double)param_1[6] * local_58 +
                  (double)param_1[4] * local_68 + local_60 * (double)param_1[5]) -
                  (double)param_1[7];
          if ((double)param_1[3] <= dVar5 && dVar5 != (double)param_1[3]) {
            param_1[3] = (longlong)dVar5;
            *(int *)(param_1 + 2) = iVar4;
          }
        }
        uVar3 = uVar3 + 1;
        iVar2 = (int)param_1[1];
      } while ((int)uVar3 < iVar2);
    }
  }
  else {
    FUN_1428664a6(param_1,&local_50,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bf67b1 FUN_146bf67b1 body=30 status=ok
// SIG undefined FUN_146bf67b1(void)

void FUN_146bf67b1(longlong param_1)

{
  FUN_146bf67d0(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146bf67d0 FUN_146bf67d0 body=97 status=ok
// SIG undefined FUN_146bf67d0(void)

void FUN_146bf67d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146be7e8c(param_1);
  return;
}



// FUNCTION 146bf6832 FUN_146bf6832 body=70 status=ok
// SIG undefined FUN_146bf6832(void)

void FUN_146bf6832(longlong param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x61) = 0;
  FUN_146bf6d9a(param_1,param_2 * 6);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14481578e(param_1 + 0x50,0);
    return;
  }
  return;
}



// FUNCTION 146bf6878 FUN_146bf6878 body=155 status=ok
// SIG undefined FUN_146bf6878(void)

void FUN_146bf6878(undefined8 param_1,ulonglong *param_2)

{
  undefined1 auStack_58 [36];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146bf6f4c();
  local_34 = *param_2 << 0x20 | *param_2 >> 0x20;
  local_2c = 0xffffffff;
  FUN_146bf6f4c(param_1,&local_34);
  local_34 = *(ulonglong *)((longlong)param_2 + 4) << 0x20 |
             *(ulonglong *)((longlong)param_2 + 4) >> 0x20;
  local_2c = 0xffffffff;
  FUN_146bf6f4c(param_1,&local_34);
  local_34 = CONCAT44((int)param_2[1],(int)*param_2);
  local_2c = 0xffffffff;
  FUN_146bf6f4c(param_1,&local_34);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf6914 FUN_146bf6914 body=571 status=ok
// SIG undefined FUN_146bf6914(void)

undefined8 *
FUN_146bf6914(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,int param_6,uint *param_7)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_7 = 0xfffffffe;
  local_60 = 1;
  local_50 = param_6;
  local_4c = 0xffffffff;
  local_70 = *(uint *)(param_5 + 1);
  local_78 = *param_5;
  local_68 = param_2;
  local_58 = param_4;
  iVar4 = FUN_146bf703e(&local_68,&local_78,0);
  if (iVar4 == -1) {
    uVar6 = (uint)local_78;
  }
  else {
    iVar8 = -1;
    do {
      iVar8 = iVar8 + 1;
      if (((*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) / 3) * 100 <= iVar8) {
        *param_1 = 0xfffffffefffffffe;
        *(undefined4 *)(param_1 + 1) = 0xfffffffe;
        goto LAB_146bf6a3c;
      }
      local_7c = *(undefined4 *)((longlong)&local_78 + (longlong)iVar4 * 4);
      local_80 = *(uint *)((longlong)&local_78 +
                          (longlong)*(int *)(&DAT_149f36350 + (longlong)iVar4 * 4) * 4);
      local_70 = FUN_146bf715c(param_3,&local_80);
      uVar6 = local_80;
      local_78 = CONCAT44(local_7c,local_80);
      iVar4 = FUN_146bf703e(&local_68,&local_78,1);
    } while (iVar4 != -1);
  }
  lVar5 = (longlong)param_6;
  if ((int)uVar6 < 0) {
LAB_146bf6aca:
    if (-1 < (longlong)(int)local_78._4_4_) {
      lVar3 = *param_4;
      lVar7 = (longlong)(int)local_78._4_4_ * 0x10;
      dVar2 = *(double *)(lVar3 + lVar5 * 0x10);
      pdVar1 = (double *)(lVar3 + lVar7);
      if ((dVar2 == *pdVar1) && (!NAN(dVar2) && !NAN(*pdVar1))) {
        dVar2 = *(double *)(lVar5 * 0x10 + lVar3 + 8);
        pdVar1 = (double *)(lVar7 + lVar3 + 8);
        if ((dVar2 == *pdVar1) && (uVar6 = local_78._4_4_, !NAN(dVar2) && !NAN(*pdVar1)))
        goto LAB_146bf6aac;
      }
    }
    if ((longlong)(int)local_70 < 0) goto LAB_146bf6ab6;
    lVar3 = *param_4;
    lVar7 = (longlong)(int)local_70 * 0x10;
    dVar2 = *(double *)(lVar3 + lVar5 * 0x10);
    pdVar1 = (double *)(lVar3 + lVar7);
    if ((dVar2 != *pdVar1) || (NAN(dVar2) || NAN(*pdVar1))) goto LAB_146bf6ab6;
    dVar2 = *(double *)(lVar5 * 0x10 + lVar3 + 8);
    pdVar1 = (double *)(lVar7 + lVar3 + 8);
    if ((dVar2 != *pdVar1) || (uVar6 = local_70, NAN(dVar2) || NAN(*pdVar1))) goto LAB_146bf6ab6;
  }
  else {
    lVar3 = *param_4;
    dVar2 = *(double *)(lVar3 + lVar5 * 0x10);
    pdVar1 = (double *)(lVar3 + (ulonglong)uVar6 * 0x10);
    if ((((dVar2 != *pdVar1) || (NAN(dVar2) || NAN(*pdVar1))) ||
        (dVar2 = *(double *)(lVar5 * 0x10 + lVar3 + 8),
        pdVar1 = (double *)((ulonglong)uVar6 * 0x10 + lVar3 + 8), dVar2 != *pdVar1)) ||
       (NAN(dVar2) || NAN(*pdVar1))) goto LAB_146bf6aca;
  }
LAB_146bf6aac:
  *param_7 = uVar6;
LAB_146bf6ab6:
  *(uint *)(param_1 + 1) = local_70;
  *param_1 = local_78;
LAB_146bf6a3c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bf6b50 FUN_146bf6b50 body=585 status=ok
// SIG undefined FUN_146bf6b50(void)

undefined8 *
FUN_146bf6b50(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  ulonglong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong **local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &local_88;
  local_a8 = *param_4;
  local_a0 = *(undefined4 *)(param_4 + 1);
  local_90 = param_2;
  local_80 = param_2;
  FUN_146bf72dc();
  local_b8 = (ulonglong *)0x0;
  uStack_b0 = 0;
  if ((int)uStack_70 == 0) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    goto LAB_146bf6d09;
  }
  do {
    local_f0 = *(ulonglong *)(local_78 + -8 + (longlong)(int)uStack_70 * 8);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + -1);
    iVar4 = FUN_146bf715c(param_2,&local_f0);
    if (iVar4 != -2) {
      uVar7 = (undefined4)local_f0;
      uVar6 = local_f0._4_4_;
      local_c4 = (undefined4)local_f0;
      local_c0 = local_f0._4_4_;
      local_d8 = *param_3;
      uStack_d4 = param_3[1];
      uStack_d0 = param_3[2];
      uStack_cc = param_3[3];
      local_bc = iVar4;
      cVar3 = FUN_146bf7334(&local_d8,&local_c4,param_5);
      uVar2 = uStack_b0;
      if (cVar3 == '\0') {
        lVar8 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_146be54b8(&local_b8,uVar2 & 0xffffffff);
        }
        local_b8[lVar8] = local_f0;
      }
      else {
        local_e4 = uVar7;
        local_e0 = uVar6;
        local_dc = iVar4;
        FUN_146bf72dc(&local_98,&local_e4);
      }
    }
  } while ((int)uStack_70 != 0);
  uVar7 = 0xffffffff;
  if ((longlong)(int)uStack_b0 == 0) {
LAB_146bf6cea:
    uVar6 = 0xffffffff;
    param_5 = 0xffffffff;
  }
  else {
    puVar1 = local_b8 + (int)uStack_b0;
    puVar9 = local_b8;
    do {
      local_f0 = *puVar9 << 0x20 | *puVar9 >> 0x20;
      local_e8 = param_5;
      FUN_146bf6f4c(param_2,&local_f0);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
    if ((int)uStack_b0 < 1) goto LAB_146bf6cea;
    uVar6 = (undefined4)*local_b8;
    uVar7 = *(undefined4 *)((longlong)local_b8 + 4);
  }
  *(undefined4 *)param_1 = uVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = param_5;
  if (local_b8 != (ulonglong *)0x0) {
    FUN_1400020a8(local_b8);
  }
LAB_146bf6d09:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bf6d9a FUN_146bf6d9a body=110 status=ok
// SIG undefined FUN_146bf6d9a(void)

void FUN_146bf6d9a(longlong param_1,uint param_2)

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
    FUN_146be7ec2(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_146be7ccc(param_1);
    return;
  }
  FUN_146bf6e08(param_1);
  FUN_146be7ec2(param_1,param_2);
  return;
}



// FUNCTION 146bf6e08 FUN_146bf6e08 body=322 status=ok
// SIG undefined FUN_146bf6e08(void)

void FUN_146bf6e08(longlong *param_1)

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



// FUNCTION 146bf6f4c FUN_146bf6f4c body=240 status=ok
// SIG undefined FUN_146bf6f4c(void)

void FUN_146bf6f4c(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2 + 2;
  local_50 = *(undefined8 *)param_2;
  local_48 = &local_50;
  FUN_146be7a00(param_1,local_34,&local_48);
  local_50 = *(undefined8 *)(param_2 + 1);
  local_48 = &local_50;
  local_40 = param_2;
  FUN_146be7a00(param_1,local_34,&local_48);
  local_50 = CONCAT44(*param_2,param_2[2]);
  local_48 = &local_50;
  local_40 = param_2 + 1;
  FUN_146be7a00(param_1,local_34,&local_48);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar1 = param_2[2];
    iVar2 = param_2[1];
    iVar3 = *param_2;
    *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)iVar3 * 4) = iVar2 + 1;
    *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)iVar2 * 4) = iVar1 + 1;
    *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)iVar1 * 4) = iVar3 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf703e FUN_146bf703e body=285 status=ok
// SIG undefined FUN_146bf703e(void)

ulonglong FUN_146bf703e(longlong *param_1,int *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  ulonglong local_40;
  undefined7 uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_1[2];
  local_50 = (undefined4)param_1[3];
  local_4c = 0xffffffff;
  local_48 = 0xffffffffffffffff;
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (undefined4)CONCAT71(uVar6,1);
  if ((*param_2 != -1) && (param_2[1] != -1)) {
    uVar5 = (undefined4)CONCAT71(uVar6,param_2[2] == -1);
  }
  uVar4 = (ulonglong)param_3;
  piVar7 = (int *)(&DAT_149f36350 + uVar4 * 4);
  iVar8 = 0;
  do {
    cVar1 = FUN_146bf71f2(&local_58,param_2[uVar4],param_2[*piVar7],uVar5);
    if (cVar1 != '\0') {
      if ((char)param_1[1] != '\0') goto LAB_146bf7134;
      lVar2 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      *(int *)((longlong)&local_48 + lVar2 * 4) = (int)uVar4;
    }
    uVar4 = uVar4 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar4 != 3);
  if (iVar8 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (iVar8 == 1) {
    uVar4 = local_48 & 0xffffffff;
  }
  else {
    uVar3 = *(int *)(*param_1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*param_1 + 4) = uVar3;
    fVar9 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    uVar4 = (ulonglong)*(uint *)((longlong)&local_48 + (longlong)(int)(fVar9 + fVar9) * 4);
  }
LAB_146bf7134:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf715c FUN_146bf715c body=150 status=ok
// SIG undefined FUN_146bf715c(void)

int FUN_146bf715c(longlong *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  uVar2 = FUN_1448eb174(param_2,8,0);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar3 * 0x14);
        if ((*piVar1 == *param_2) && (*(int *)(*param_1 + 4 + (longlong)iVar3 * 0x14) == param_2[1])
           ) {
          if (piVar1 + 2 == (int *)0x0 || piVar1 == (int *)0x0) {
            return -2;
          }
          return piVar1[2];
        }
        iVar3 = piVar1[3];
      } while (iVar3 != -1);
    }
  }
  return -2;
}



// FUNCTION 146bf71f2 FUN_146bf71f2 body=232 status=ok
// SIG undefined FUN_146bf71f2(void)

undefined8 FUN_146bf71f2(undefined8 *param_1,int param_2,int param_3,byte param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  double extraout_XMM0_Qa;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_4 == 0) || (param_3 != -1 && param_2 != -1)) {
    lVar1 = *(longlong *)*param_1;
    local_28 = *(undefined8 *)(lVar1 + (longlong)param_2 * 0x10);
    local_20 = *(undefined8 *)(lVar1 + 8 + (longlong)param_2 * 0x10);
    local_38 = *(undefined8 *)(lVar1 + (longlong)param_3 * 0x10);
    local_30 = *(undefined8 *)(lVar1 + 8 + (longlong)param_3 * 0x10);
    local_48 = *(undefined8 *)(lVar1 + (longlong)*(int *)(param_1 + 1) * 0x10);
    local_40 = *(undefined8 *)(lVar1 + 8 + (longlong)*(int *)(param_1 + 1) * 0x10);
    FUN_146bb2d66();
    uVar2 = 1;
    if ((extraout_XMM0_Qa < 0.0) || ((extraout_XMM0_Qa == 0.0 & param_4) != 0)) goto LAB_146bf7223;
  }
  uVar2 = 0;
LAB_146bf7223:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146bf72dc FUN_146bf72dc body=88 status=ok
// SIG undefined FUN_146bf72dc(void)

void FUN_146bf72dc(undefined8 *param_1,undefined4 *param_2)

{
  FUN_146bf75a0(param_1[1]);
  FUN_146bf7674(*param_1,CONCAT44(*param_2,param_2[1]));
  FUN_146bf7674(*param_1,CONCAT44(param_2[1],param_2[2]));
  FUN_146bf7674(*param_1,CONCAT44(param_2[2],*param_2));
  return;
}



// FUNCTION 146bf7334 FUN_146bf7334 body=618 status=ok
// SIG undefined FUN_146bf7334(void)

ulonglong FUN_146bf7334(longlong *param_1,int *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar13 = *param_2;
  iVar7 = param_2[1];
  if ((longlong)iVar13 == -1) {
    if (iVar7 != -1) {
      iVar15 = param_2[2];
      goto LAB_146bf7399;
    }
LAB_146bf73b6:
    iVar9 = iVar13;
    iVar13 = param_2[2];
  }
  else {
    if (iVar7 == -1) goto LAB_146bf73b6;
    iVar15 = -1;
    if ((longlong)param_2[2] != -1) {
      lVar8 = *param_1;
      lVar14 = (longlong)param_2[2] * 0x10;
      lVar12 = (longlong)iVar13 * 0x10;
      local_88 = *(double *)(lVar8 + lVar12);
      local_80 = *(double *)(lVar8 + 8 + lVar12);
      local_98 = *(double *)(lVar8 + (longlong)iVar7 * 0x10);
      local_90 = *(double *)(lVar8 + 8 + (longlong)iVar7 * 0x10);
      local_a8 = *(double *)(lVar8 + lVar14);
      local_a0 = *(double *)(lVar8 + 8 + lVar14);
      local_b8 = *(undefined8 *)(lVar8 + (longlong)param_3 * 0x10);
      local_b0 = *(undefined8 *)(lVar8 + 8 + (longlong)param_3 * 0x10);
      uVar10 = FUN_146bb3330();
      uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0.0 < extraout_XMM0_Qa_00);
      goto LAB_146bf7436;
    }
LAB_146bf7399:
    iVar9 = iVar7;
    if (iVar15 != -1) {
      iVar9 = iVar15;
      iVar13 = iVar7;
    }
  }
  lVar8 = *param_1;
  dVar1 = *(double *)(lVar8 + (longlong)iVar13 * 0x10);
  dVar2 = *(double *)(lVar8 + 8 + (longlong)iVar13 * 0x10);
  dVar3 = *(double *)(lVar8 + (longlong)iVar9 * 0x10);
  dVar4 = *(double *)(lVar8 + 8 + (longlong)iVar9 * 0x10);
  dVar5 = *(double *)(lVar8 + (longlong)param_3 * 0x10);
  dVar6 = *(double *)(lVar8 + 8 + (longlong)param_3 * 0x10);
  local_a8 = dVar5;
  local_a0 = dVar6;
  local_98 = dVar3;
  local_90 = dVar4;
  local_88 = dVar1;
  local_80 = dVar2;
  uVar10 = FUN_146bb2d66();
  uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  if (extraout_XMM0_Qa <= 0.0) {
    if (0.0 <= extraout_XMM0_Qa) {
      if ((dVar1 != dVar3) || (NAN(dVar1) || NAN(dVar3))) {
        uVar16 = SUB84(dVar3,0);
        uVar17 = (int)((ulonglong)dVar3 >> 0x20);
        if (dVar1 <= dVar3) {
          uVar16 = SUB84(dVar1,0);
          uVar17 = (int)((ulonglong)dVar1 >> 0x20);
          dVar1 = dVar3;
        }
        uVar11 = (ulonglong)-(uint)((double)CONCAT44(uVar17,uVar16) <= dVar5 && dVar5 <= dVar1);
      }
      else {
        uVar16 = SUB84(dVar4,0);
        uVar17 = (int)((ulonglong)dVar4 >> 0x20);
        if (dVar2 <= dVar4) {
          uVar16 = SUB84(dVar2,0);
          uVar17 = (int)((ulonglong)dVar2 >> 0x20);
          dVar2 = dVar4;
        }
        uVar11 = (ulonglong)-(uint)((double)CONCAT44(uVar17,uVar16) <= dVar6 && dVar6 <= dVar2);
      }
    }
    else {
      uVar11 = 0;
    }
  }
LAB_146bf7436:
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar11 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf75a0 FUN_146bf75a0 body=210 status=ok
// SIG undefined FUN_146bf75a0(void)

void FUN_146bf75a0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)param_2;
  FUN_146be7892(param_1,&local_28);
  local_28 = *(undefined8 *)(param_2 + 1);
  FUN_146be7892(param_1,&local_28);
  local_28 = CONCAT44(*param_2,param_2[2]);
  FUN_146be7892(param_1,&local_28);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar1 = param_2[2];
    iVar2 = param_2[1];
    iVar3 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x50);
    if (*(int *)(lVar4 + 4 + (longlong)iVar3 * 4) == iVar2 + 1) {
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 4) = 0xffffffff;
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    if (*(int *)(lVar4 + 4 + (longlong)iVar2 * 4) == iVar1 + 1) {
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar2 * 4) = 0xffffffff;
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    if (*(int *)(lVar4 + 4 + (longlong)iVar1 * 4) == iVar3 + 1) {
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar1 * 4) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf7674 FUN_146bf7674 body=119 status=ok
// SIG undefined FUN_146bf7674(void)

void FUN_146bf7674(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  cVar2 = FUN_146bb27b0(param_1[1],&local_20);
  if (cVar2 != '\0') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146be54b8(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf76ec FUN_146bf76ec body=505 status=ok
// SIG undefined FUN_146bf76ec(void)

undefined8 *
FUN_146bf76ec(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,int param_6,uint *param_7)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_7 = 0xfffffffe;
  local_60 = 1;
  local_50 = param_6;
  local_4c = 0xffffffff;
  local_70 = *(uint *)(param_5 + 1);
  local_78 = *param_5;
  local_68 = param_2;
  local_58 = param_4;
  iVar4 = FUN_146bf7b30(&local_68,&local_78,0);
  if (iVar4 == -1) {
    uVar7 = (uint)local_78;
  }
  else {
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      if (((*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) / 3) * 100 <= iVar6) {
        *param_1 = 0xfffffffefffffffe;
        *(undefined4 *)(param_1 + 1) = 0xfffffffe;
        goto LAB_146bf7813;
      }
      local_7c = *(undefined4 *)((longlong)&local_78 + (longlong)iVar4 * 4);
      local_80 = *(uint *)((longlong)&local_78 +
                          (longlong)*(int *)(&DAT_149f36350 + (longlong)iVar4 * 4) * 4);
      local_70 = FUN_146bf715c(param_3,&local_80);
      uVar7 = local_80;
      local_78 = CONCAT44(local_7c,local_80);
      iVar4 = FUN_146bf7b30(&local_68,&local_78,1);
    } while (iVar4 != -1);
  }
  lVar5 = (longlong)param_6;
  if ((int)uVar7 < 0) {
LAB_146bf788e:
    lVar8 = (longlong)(int)local_78._4_4_;
    if (-1 < lVar8) {
      lVar3 = *param_4;
      fVar2 = *(float *)(lVar3 + lVar5 * 8);
      pfVar1 = (float *)(lVar3 + lVar8 * 8);
      if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
        fVar2 = *(float *)(lVar3 + 4 + lVar5 * 8);
        pfVar1 = (float *)(lVar3 + 4 + lVar8 * 8);
        if ((fVar2 == *pfVar1) && (uVar7 = local_78._4_4_, !NAN(fVar2) && !NAN(*pfVar1)))
        goto LAB_146bf7872;
      }
    }
    lVar8 = (longlong)(int)local_70;
    if (lVar8 < 0) goto LAB_146bf787d;
    lVar3 = *param_4;
    fVar2 = *(float *)(lVar3 + lVar5 * 8);
    pfVar1 = (float *)(lVar3 + lVar8 * 8);
    if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) goto LAB_146bf787d;
    fVar2 = *(float *)(lVar3 + 4 + lVar5 * 8);
    pfVar1 = (float *)(lVar3 + 4 + lVar8 * 8);
    if ((fVar2 != *pfVar1) || (uVar7 = local_70, NAN(fVar2) || NAN(*pfVar1))) goto LAB_146bf787d;
  }
  else {
    lVar8 = *param_4;
    fVar2 = *(float *)(lVar8 + lVar5 * 8);
    pfVar1 = (float *)(lVar8 + (ulonglong)uVar7 * 8);
    if ((((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) ||
        (fVar2 = *(float *)(lVar8 + 4 + lVar5 * 8),
        pfVar1 = (float *)(lVar8 + 4 + (ulonglong)uVar7 * 8), fVar2 != *pfVar1)) ||
       (NAN(fVar2) || NAN(*pfVar1))) goto LAB_146bf788e;
  }
LAB_146bf7872:
  *param_7 = uVar7;
LAB_146bf787d:
  *(uint *)(param_1 + 1) = local_70;
  *param_1 = local_78;
LAB_146bf7813:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bf78e6 FUN_146bf78e6 body=585 status=ok
// SIG undefined FUN_146bf78e6(void)

undefined8 *
FUN_146bf78e6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  ulonglong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong **local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = &local_88;
  local_a8 = *param_4;
  local_a0 = *(undefined4 *)(param_4 + 1);
  local_90 = param_2;
  local_80 = param_2;
  FUN_146bf7d28();
  local_b8 = (ulonglong *)0x0;
  uStack_b0 = 0;
  if ((int)uStack_70 == 0) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    goto LAB_146bf7a9f;
  }
  do {
    local_f0 = *(ulonglong *)(local_78 + -8 + (longlong)(int)uStack_70 * 8);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + -1);
    iVar4 = FUN_146bf715c(param_2,&local_f0);
    if (iVar4 != -2) {
      uVar7 = (undefined4)local_f0;
      uVar6 = local_f0._4_4_;
      local_c4 = (undefined4)local_f0;
      local_c0 = local_f0._4_4_;
      local_d8 = *param_3;
      uStack_d4 = param_3[1];
      uStack_d0 = param_3[2];
      uStack_cc = param_3[3];
      local_bc = iVar4;
      cVar3 = FUN_146bf7d80(&local_d8,&local_c4,param_5);
      uVar2 = uStack_b0;
      if (cVar3 == '\0') {
        lVar8 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_146be54b8(&local_b8,uVar2 & 0xffffffff);
        }
        local_b8[lVar8] = local_f0;
      }
      else {
        local_e4 = uVar7;
        local_e0 = uVar6;
        local_dc = iVar4;
        FUN_146bf7d28(&local_98,&local_e4);
      }
    }
  } while ((int)uStack_70 != 0);
  uVar7 = 0xffffffff;
  if ((longlong)(int)uStack_b0 == 0) {
LAB_146bf7a80:
    uVar6 = 0xffffffff;
    param_5 = 0xffffffff;
  }
  else {
    puVar1 = local_b8 + (int)uStack_b0;
    puVar9 = local_b8;
    do {
      local_f0 = *puVar9 << 0x20 | *puVar9 >> 0x20;
      local_e8 = param_5;
      FUN_146bf6f4c(param_2,&local_f0);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
    if ((int)uStack_b0 < 1) goto LAB_146bf7a80;
    uVar6 = (undefined4)*local_b8;
    uVar7 = *(undefined4 *)((longlong)local_b8 + 4);
  }
  *(undefined4 *)param_1 = uVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = param_5;
  if (local_b8 != (ulonglong *)0x0) {
    FUN_1400020a8(local_b8);
  }
LAB_146bf7a9f:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146bf7b30 FUN_146bf7b30 body=285 status=ok
// SIG undefined FUN_146bf7b30(void)

ulonglong FUN_146bf7b30(longlong *param_1,int *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  ulonglong local_40;
  undefined7 uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_1[2];
  local_50 = (undefined4)param_1[3];
  local_4c = 0xffffffff;
  local_48 = 0xffffffffffffffff;
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar5 = (undefined4)CONCAT71(uVar6,1);
  if ((*param_2 != -1) && (param_2[1] != -1)) {
    uVar5 = (undefined4)CONCAT71(uVar6,param_2[2] == -1);
  }
  uVar4 = (ulonglong)param_3;
  piVar7 = (int *)(&DAT_149f36350 + uVar4 * 4);
  iVar8 = 0;
  do {
    cVar1 = FUN_146bf7c4e(&local_58,param_2[uVar4],param_2[*piVar7],uVar5);
    if (cVar1 != '\0') {
      if ((char)param_1[1] != '\0') goto LAB_146bf7c26;
      lVar2 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      *(int *)((longlong)&local_48 + lVar2 * 4) = (int)uVar4;
    }
    uVar4 = uVar4 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar4 != 3);
  if (iVar8 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (iVar8 == 1) {
    uVar4 = local_48 & 0xffffffff;
  }
  else {
    uVar3 = *(int *)(*param_1 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(*param_1 + 4) = uVar3;
    fVar9 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    uVar4 = (ulonglong)*(uint *)((longlong)&local_48 + (longlong)(int)(fVar9 + fVar9) * 4);
  }
LAB_146bf7c26:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf7c4e FUN_146bf7c4e body=217 status=ok
// SIG undefined FUN_146bf7c4e(void)

undefined8 FUN_146bf7c4e(undefined8 *param_1,int param_2,int param_3,byte param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float extraout_XMM0_Da;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_4 == 0) || (param_3 != -1 && param_2 != -1)) {
    lVar1 = *(longlong *)*param_1;
    local_18 = *(undefined4 *)(lVar1 + (longlong)param_2 * 8);
    local_14 = *(undefined4 *)(lVar1 + 4 + (longlong)param_2 * 8);
    local_20 = *(undefined4 *)(lVar1 + (longlong)param_3 * 8);
    local_1c = *(undefined4 *)(lVar1 + 4 + (longlong)param_3 * 8);
    local_28 = *(undefined4 *)(lVar1 + (longlong)*(int *)(param_1 + 1) * 8);
    local_24 = *(undefined4 *)(lVar1 + 4 + (longlong)*(int *)(param_1 + 1) * 8);
    FUN_146bb358a();
    uVar2 = 1;
    if ((extraout_XMM0_Da < 0.0) || ((extraout_XMM0_Da == 0.0 & param_4) != 0)) goto LAB_146bf7c7f;
  }
  uVar2 = 0;
LAB_146bf7c7f:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146bf7d28 FUN_146bf7d28 body=88 status=ok
// SIG undefined FUN_146bf7d28(void)

void FUN_146bf7d28(undefined8 *param_1,undefined4 *param_2)

{
  FUN_146bf75a0(param_1[1]);
  FUN_146bf7f42(*param_1,CONCAT44(*param_2,param_2[1]));
  FUN_146bf7f42(*param_1,CONCAT44(param_2[1],param_2[2]));
  FUN_146bf7f42(*param_1,CONCAT44(param_2[2],*param_2));
  return;
}



// FUNCTION 146bf7d80 FUN_146bf7d80 body=448 status=ok
// SIG undefined FUN_146bf7d80(void)

ulonglong FUN_146bf7d80(longlong *param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = *param_2;
  iVar6 = param_2[1];
  if ((longlong)iVar5 == -1) {
    if (iVar6 != -1) {
      iVar11 = param_2[2];
      goto LAB_146bf7dd4;
    }
LAB_146bf7df0:
    iVar8 = iVar5;
    iVar5 = param_2[2];
  }
  else {
    if (iVar6 == -1) goto LAB_146bf7df0;
    iVar11 = -1;
    if ((longlong)param_2[2] != -1) {
      lVar7 = *param_1;
      uVar9 = FUN_146bf7fba(lVar7 + (longlong)iVar5 * 8,lVar7 + (longlong)iVar6 * 8,
                            lVar7 + (longlong)param_2[2] * 8,lVar7 + (longlong)param_3 * 8);
      uVar10 = CONCAT71((int7)((ulonglong)uVar9 >> 8),0.0 < extraout_XMM0_Da_00);
      goto LAB_146bf7e63;
    }
LAB_146bf7dd4:
    iVar8 = iVar6;
    if (iVar11 != -1) {
      iVar8 = iVar11;
      iVar5 = iVar6;
    }
  }
  lVar7 = *param_1;
  fVar13 = *(float *)(lVar7 + (longlong)iVar5 * 8);
  fVar12 = *(float *)(lVar7 + 4 + (longlong)iVar5 * 8);
  fVar1 = *(float *)(lVar7 + (longlong)iVar8 * 8);
  fVar2 = *(float *)(lVar7 + 4 + (longlong)iVar8 * 8);
  fVar3 = *(float *)(lVar7 + (longlong)param_3 * 8);
  fVar4 = *(float *)(lVar7 + 4 + (longlong)param_3 * 8);
  local_88 = fVar3;
  local_84 = fVar4;
  local_80 = fVar1;
  local_7c = fVar2;
  local_78 = fVar13;
  local_74 = fVar12;
  uVar9 = FUN_146bb358a();
  uVar10 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  if (extraout_XMM0_Da <= 0.0) {
    if (0.0 <= extraout_XMM0_Da) {
      if ((fVar13 != fVar1) || (NAN(fVar13) || NAN(fVar1))) {
        fVar12 = fVar1;
        if (fVar13 <= fVar1) {
          fVar12 = fVar13;
          fVar13 = fVar1;
        }
        uVar10 = (ulonglong)-(uint)(fVar3 <= fVar13 && fVar12 <= fVar3);
      }
      else {
        fVar13 = fVar2;
        if (fVar12 <= fVar2) {
          fVar13 = fVar12;
          fVar12 = fVar2;
        }
        uVar10 = (ulonglong)-(uint)(fVar4 <= fVar12 && fVar13 <= fVar4);
      }
    }
    else {
      uVar10 = 0;
    }
  }
LAB_146bf7e63:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar10 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf7f42 FUN_146bf7f42 body=119 status=ok
// SIG undefined FUN_146bf7f42(void)

void FUN_146bf7f42(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  cVar2 = FUN_146bb27b0(param_1[1],&local_20);
  if (cVar2 != '\0') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_146be54b8(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf7fba FUN_146bf7fba body=239 status=ok
// SIG undefined FUN_146bf7fba(void)

undefined8 FUN_146bf7fba(float *param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = (double)*param_1;
  local_20 = (double)param_1[1];
  local_38 = (double)*param_2;
  local_30 = (double)param_2[1];
  local_48 = (double)*param_3;
  local_40 = (double)param_3[1];
  local_58 = (double)*param_4;
  local_50 = (double)param_4[1];
  dVar1 = (double)FUN_146bb3330(&local_28,&local_38,&local_48,&local_58);
  dVar1 = (double)(-(ulonglong)(0.0 < dVar1) & 0x3ff0000000000000 |
                  ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbff0000000000000);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf80aa FUN_146bf80aa body=317 status=ok
// SIG undefined FUN_146bf80aa(void)

void FUN_146bf80aa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
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
  if (((char)param_1[0xc] != '\x01') || ((int)param_1[0xb] <= param_2)) {
    *(undefined1 *)(param_1 + 0xc) = 1;
    local_78 = (longlong *)CONCAT44(local_78._4_4_,0xffffffff);
    FUN_1448156a8(param_1 + 10,&local_78,param_2 + 1);
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar5 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar3 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar3, uStack_48 != plVar1)) {
      do {
        local_60 = uVar3;
        lVar2 = *(longlong *)(*local_78 + (longlong)iVar4 * 0x14);
        *(int *)(param_1[10] + ((lVar2 << 0x20) + 0x100000000 >> 0x1e)) =
             (int)((ulonglong)lVar2 >> 0x20) + 1;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar5));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf81e8 FUN_146bf81e8 body=1025 status=ok
// SIG undefined FUN_146bf81e8(void)

uint FUN_146bf81e8(undefined8 param_1,longlong *param_2,uint *param_3,longlong *param_4,
                  longlong *param_5,undefined1 *param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  double dVar13;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_6 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_14481578e(param_5,0);
  }
  local_e0 = 0xffffffffffffffff;
  local_f8 = *param_2;
  lStack_f0 = param_2[1];
  cVar9 = FUN_146bf8949(param_1,&local_f8,param_3);
  if (cVar9 == '\0') {
    *param_6 = 1;
  }
  else {
    uVar8 = local_e0._4_4_;
    local_108 = CONCAT44(local_108._4_4_,(undefined4)local_e0);
    local_b8 = CONCAT44((undefined4)local_e0,*param_3);
    local_b0 = CONCAT44(local_b0._4_4_,local_e0._4_4_);
    FUN_146bf75a0(param_1);
    iVar5 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_5,iVar5);
    }
    *(uint *)(*param_5 + (longlong)iVar5 * 4) = *param_3;
    iVar5 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_4,iVar5);
    }
    *(uint *)(*param_4 + (longlong)iVar5 * 4) = *param_3;
    iVar5 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_5,iVar5);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar5 * 4) = (undefined4)local_108;
    iVar5 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_4,iVar5);
    }
    *(undefined4 *)(*param_4 + (longlong)iVar5 * 4) = uVar8;
    lVar6 = *param_2;
    uVar1 = *(ulonglong *)(lVar6 + (longlong)(int)*param_3 * 0x10);
    uVar2 = *(undefined8 *)(lVar6 + 8 + (longlong)(int)*param_3 * 0x10);
    uVar3 = *(undefined8 *)(lVar6 + (longlong)(int)param_3[1] * 0x10);
    uVar4 = *(undefined8 *)(lVar6 + 8 + (longlong)(int)param_3[1] * 0x10);
    local_100 = CONCAT44((undefined4)local_108,uVar8);
    uVar10 = FUN_146bf715c(param_1);
    while (uVar10 != 0xfffffffe) {
      local_b0._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
      local_b0 = CONCAT44(local_b0._4_4_,uVar10);
      local_b8 = local_100;
      FUN_146bf75a0(param_1,&local_b8);
      if (uVar10 == param_3[1]) {
        iVar5 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_5,iVar5);
        }
        *(uint *)(*param_5 + (longlong)iVar5 * 4) = param_3[1];
        iVar5 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_4,iVar5);
        }
        *(uint *)(*param_4 + (longlong)iVar5 * 4) = param_3[1];
        *param_6 = 1;
        uVar10 = param_3[1];
        goto LAB_146bf82ba;
      }
      local_d8 = *(undefined8 *)(*param_2 + (longlong)(int)uVar10 * 0x10);
      local_d0 = *(undefined8 *)(*param_2 + 8 + (longlong)(int)uVar10 * 0x10);
      local_c8 = uVar3;
      local_c0 = uVar4;
      local_b8 = uVar1;
      local_b0 = uVar2;
      dVar13 = (double)FUN_146bb2d66(&local_b8,&local_c8,&local_d8);
      if ((dVar13 == 0.0) && (!NAN(dVar13))) {
        iVar5 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_5,iVar5);
        }
        *(uint *)(*param_5 + (longlong)iVar5 * 4) = uVar10;
        iVar5 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_4,iVar5);
        }
        *(uint *)(*param_4 + (longlong)iVar5 * 4) = uVar10;
        goto LAB_146bf82ba;
      }
      if (0.0 <= dVar13) {
        uVar7 = local_100._4_4_;
        uVar12 = *(uint *)(param_4 + 1);
        *(uint *)(param_4 + 1) = uVar12 + 1;
        if (*(uint *)((longlong)param_4 + 0xc) < uVar12 + 1) {
          local_108 = (ulonglong)uVar12;
          FUN_1446f48e2(param_4,(ulonglong)uVar12);
          uVar12 = (uint)local_108;
        }
        local_100 = (ulonglong)uVar10;
        plVar11 = param_4;
      }
      else {
        uVar12 = *(uint *)(param_5 + 1);
        *(uint *)(param_5 + 1) = uVar12 + 1;
        if (*(uint *)((longlong)param_5 + 0xc) < uVar12 + 1) {
          local_108 = CONCAT44(local_108._4_4_,(undefined4)local_100);
          FUN_1446f48e2(param_5);
          local_100 = local_108;
        }
        local_100 = local_100 & 0xffffffff;
        plVar11 = param_5;
        uVar7 = uVar10;
      }
      *(uint *)(*plVar11 + (longlong)(int)uVar12 * 4) = uVar10;
      local_100 = local_100 | (ulonglong)uVar7 << 0x20;
      uVar10 = FUN_146bf715c(param_1,&local_100);
    }
  }
  uVar10 = *param_3;
LAB_146bf82ba:
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf85ea FUN_146bf85ea body=861 status=ok
// SIG undefined FUN_146bf85ea(void)

void FUN_146bf85ea(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  double dVar16;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar9 = (int)param_3[1];
  if (iVar9 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9 + -2);
  }
  local_c8 = param_2;
  if (iVar9 == 2) {
    iVar15 = 1;
    uVar4 = 0;
    iVar9 = 0;
  }
  else {
    FUN_146be5458(&local_b8);
    iVar15 = (int)param_3[1] + -1;
    uVar4 = uStack_b0._4_4_;
    iVar9 = (uint)uStack_b0;
  }
  uVar6 = iVar9 + 1;
  uStack_b0._0_4_ = uVar6;
  if (uVar4 < uVar6) {
    FUN_146be54b8(&local_b8,iVar9);
  }
  *(undefined4 *)(local_b8 + (longlong)iVar9 * 8) = 0;
  *(int *)(local_b8 + 4 + (longlong)iVar9 * 8) = iVar15;
  if ((uint)uStack_b0 != 0) {
    local_c0 = param_1;
    do {
      plVar3 = local_c8;
      uVar1 = *(ulonglong *)(local_b8 + -8 + (longlong)(int)(uint)uStack_b0 * 8);
      uStack_b0._0_4_ = (uint)uStack_b0 - 1;
      iVar9 = (int)uVar1;
      iVar15 = iVar9 + 1;
      iVar12 = (int)(uVar1 >> 0x20);
      lVar8 = (longlong)uVar1 >> 0x20;
      if (iVar9 + 2 == iVar12) {
        lVar14 = *param_3;
        local_78 = CONCAT44(*(undefined4 *)(lVar14 + (longlong)iVar15 * 4),
                            *(undefined4 *)(lVar14 + (longlong)iVar9 * 4));
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar14 + lVar8 * 4));
        FUN_146bf6f4c(param_1,&local_78);
      }
      else {
        lVar14 = (longlong)(uVar1 << 0x20) >> 0x1e;
        local_d8 = uVar1 >> 0x20;
        local_d0 = uVar1;
        if (iVar9 + 2 < iVar12) {
          lVar13 = ((longlong)(uVar1 << 0x20) >> 0x20) + 2;
          iVar9 = (iVar12 - iVar9) + -2;
          do {
            lVar5 = *param_3;
            lVar2 = *plVar3;
            lVar7 = (longlong)*(int *)(lVar5 + lVar13 * 4) * 0x10;
            lVar10 = (longlong)*(int *)(lVar5 + lVar8 * 4) * 0x10;
            lVar11 = (longlong)*(int *)(lVar5 + (longlong)iVar15 * 4) * 0x10;
            lVar5 = (longlong)*(int *)(lVar5 + lVar14) * 0x10;
            local_78 = *(undefined8 *)(lVar2 + lVar5);
            local_70 = *(undefined8 *)(lVar2 + 8 + lVar5);
            local_88 = *(undefined8 *)(lVar2 + lVar11);
            local_80 = *(undefined8 *)(lVar2 + 8 + lVar11);
            local_98 = *(undefined8 *)(lVar2 + lVar10);
            local_90 = *(undefined8 *)(lVar2 + 8 + lVar10);
            local_a8 = *(undefined8 *)(lVar2 + lVar7);
            local_a0 = *(undefined8 *)(lVar2 + 8 + lVar7);
            dVar16 = (double)FUN_146bb3330(&local_78,&local_88,&local_98,&local_a8);
            if (0.0 < dVar16) {
              iVar15 = (int)lVar13;
            }
            lVar13 = lVar13 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        param_1 = local_c0;
        lVar13 = *param_3;
        local_78 = CONCAT44(*(undefined4 *)(lVar13 + (longlong)iVar15 * 4),
                            *(undefined4 *)(lVar13 + lVar14));
        local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar13 + lVar8 * 4));
        FUN_146bf6f4c(local_c0,&local_78);
        uVar4 = (uint)uStack_b0;
        if (1 < iVar15 - (int)local_d0) {
          lVar8 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_146be54b8(&local_b8,uVar4);
          }
          *(int *)(local_b8 + lVar8 * 8) = (int)local_d0;
          *(int *)(local_b8 + 4 + lVar8 * 8) = iVar15;
        }
        uVar4 = (uint)uStack_b0;
        if (1 < (int)local_d8 - iVar15) {
          lVar8 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_146be54b8(&local_b8,uVar4);
          }
          *(int *)(local_b8 + lVar8 * 8) = iVar15;
          *(int *)(local_b8 + 4 + lVar8 * 8) = (int)local_d8;
        }
      }
    } while ((uint)uStack_b0 != 0);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bf8949 FUN_146bf8949 body=470 status=ok
// SIG undefined FUN_146bf8949(void)

undefined8 FUN_146bf8949(undefined8 param_1,longlong *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar4 = FUN_146bb27b0(param_1,param_3);
  if ((cVar4 == '\0') && (FUN_146bf8b20(param_1,&local_80,*param_3), local_80 != -2)) {
    lVar2 = *param_2;
    puVar1 = (undefined8 *)(lVar2 + (longlong)*param_3 * 0x10);
    local_98 = *puVar1;
    uStack_90 = puVar1[1];
    local_c0 = &local_98;
    puVar1 = (undefined8 *)(lVar2 + (longlong)param_3[1] * 0x10);
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    local_b8 = &local_a8;
    uVar6 = CONCAT44(iStack_7c,local_80);
    uVar7 = 0;
    local_c8 = uVar6;
    local_b0 = param_2;
    if (local_80 != -1) {
      local_78 = *(undefined8 *)(lVar2 + (longlong)local_80 * 0x10);
      local_70 = *(undefined8 *)(lVar2 + 8 + (longlong)local_80 * 0x10);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      local_58 = local_98;
      uStack_50 = uStack_90;
      uVar7 = FUN_146bb2d66(&local_58,&local_68,0);
    }
    cVar4 = FUN_146bf8ca8(&local_c0,&local_c8,uVar7,&local_58);
    uVar7 = uVar6;
    iVar3 = iStack_7c;
    while (cVar4 == '\0') {
      local_68 = CONCAT44(iVar3,*param_3);
      local_d0 = uVar7;
      iVar5 = FUN_146bf715c(param_1,&local_68);
      uVar6 = CONCAT44(iVar5,iVar3);
      local_c8 = uVar6;
      if (iVar5 == iStack_7c && iVar3 == (int)uVar7) goto LAB_146bf8986;
      cVar4 = FUN_146bf8ca8(&local_c0,&local_c8,local_58,&local_58);
      uVar7 = local_d0;
      iVar3 = iVar5;
    }
    *param_4 = uVar6;
    uVar6 = 1;
  }
  else {
LAB_146bf8986:
    uVar6 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf8b20 FUN_146bf8b20 body=390 status=ok
// SIG undefined FUN_146bf8b20(void)

int * FUN_146bf8b20(longlong *param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
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
  if (((char)param_1[0xc] == '\x01') &&
     (iVar5 = *(int *)(param_1[10] + 4 + (longlong)param_3 * 4) + -1, iVar5 != -2)) {
    local_88 = (longlong *)CONCAT44(iVar5,param_3);
    iVar2 = FUN_146bf715c(param_1);
    *param_2 = iVar5;
    param_2[1] = iVar2;
  }
  else {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar5 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar3 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if ((local_70._4_4_ != iVar5) || (uStack_58 != plVar1)) {
      iVar2 = local_70._4_4_;
      local_70 = uVar3;
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x14 + *local_88);
        if ((char)param_1[0xc] == '\x01') {
          *(int *)(param_1[10] + ((*plVar4 << 0x20) + 0x100000000 >> 0x1e)) =
               (int)((ulonglong)*plVar4 >> 0x20) + 1;
        }
        if ((int)*plVar4 == param_3) {
          uVar3 = *(undefined8 *)((longlong)plVar4 + 4);
          goto LAB_146bf8bd5;
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar2 = local_70._4_4_;
        uVar3 = local_70;
      } while (((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar5) ||
               local_88 != param_1);
    }
    local_70 = uVar3;
    uVar3 = 0xfffffffefffffffe;
LAB_146bf8bd5:
    *(undefined8 *)param_2 = uVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146bf8ca8 FUN_146bf8ca8 body=323 status=ok
// SIG undefined FUN_146bf8ca8(void)

undefined4 FUN_146bf8ca8(undefined8 *param_1,int *param_2,double param_3,double *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = param_2[1];
  if (-1 < (longlong)iVar2) {
    lVar3 = (longlong)iVar2 * 0x10;
    local_48 = *(undefined8 *)*param_1;
    local_40 = ((undefined8 *)*param_1)[1];
    local_58 = *(undefined8 *)param_1[1];
    local_50 = ((undefined8 *)param_1[1])[1];
    local_68 = *(undefined8 *)(*(longlong *)param_1[2] + lVar3);
    local_60 = *(undefined8 *)(*(longlong *)param_1[2] + 8 + lVar3);
    dVar5 = (double)FUN_146bb2d66();
    *param_4 = dVar5;
    iVar2 = param_2[1];
  }
  uVar1 = 0;
  if ((*param_2 != -1) && (iVar2 != -1)) {
    if ((int)(double)(-(ulonglong)(0.0 < param_3) & 0x3ff0000000000000 |
                     ~-(ulonglong)(0.0 < param_3) &
                     (ulonglong)((uint)(-(ulonglong)(param_3 < 0.0) >> 0x20) & 0xbff00000) << 0x20)
        < 0) {
      uVar4 = -(ulonglong)(0.0 < *param_4);
      iVar2 = (int)(double)(uVar4 & 0x3ff0000000000000 |
                           ~uVar4 & -(ulonglong)(*param_4 < 0.0) & 0xbff0000000000000);
      uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 1);
    }
    else {
      uVar1 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf8dec FUN_146bf8dec body=995 status=ok
// SIG undefined FUN_146bf8dec(void)

uint FUN_146bf8dec(undefined8 param_1,longlong *param_2,uint *param_3,longlong *param_4,
                  longlong *param_5,undefined1 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_6 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_14481578e(param_5,0);
  }
  local_c4 = 0xffffffffffffffff;
  local_d8 = (undefined4)*param_2;
  uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_d0 = (undefined4)param_2[1];
  uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar8 = FUN_146bf948f(param_1,&local_d8,param_3);
  if (cVar8 == '\0') {
    *param_6 = 1;
  }
  else {
    uVar9 = local_c4._4_4_;
    local_e8 = CONCAT44(local_e8._4_4_,(undefined4)local_c4);
    local_bc = CONCAT44((undefined4)local_c4,*param_3);
    local_b4 = local_c4._4_4_;
    FUN_146bf75a0(param_1);
    iVar5 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_5,iVar5);
    }
    *(uint *)(*param_5 + (longlong)iVar5 * 4) = *param_3;
    iVar5 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_4,iVar5);
    }
    *(uint *)(*param_4 + (longlong)iVar5 * 4) = *param_3;
    iVar5 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_5,iVar5);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar5 * 4) = (undefined4)local_e8;
    iVar5 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
      FUN_1446f48e2(param_4,iVar5);
    }
    *(uint *)(*param_4 + (longlong)iVar5 * 4) = uVar9;
    lVar6 = *param_2;
    uVar1 = *(undefined4 *)(lVar6 + (longlong)(int)*param_3 * 8);
    uVar2 = *(undefined4 *)(lVar6 + 4 + (longlong)(int)*param_3 * 8);
    uVar3 = *(undefined4 *)(lVar6 + (longlong)(int)param_3[1] * 8);
    uVar4 = *(undefined4 *)(lVar6 + 4 + (longlong)(int)param_3[1] * 8);
    local_e0 = CONCAT44((undefined4)local_e8,uVar9);
    uVar9 = FUN_146bf715c(param_1);
    while (uVar9 != 0xfffffffe) {
      local_bc = local_e0;
      local_b4 = uVar9;
      FUN_146bf75a0(param_1,&local_bc);
      if (uVar9 == param_3[1]) {
        iVar5 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_5,iVar5);
        }
        *(uint *)(*param_5 + (longlong)iVar5 * 4) = param_3[1];
        iVar5 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_4,iVar5);
        }
        *(uint *)(*param_4 + (longlong)iVar5 * 4) = param_3[1];
        *param_6 = 1;
        uVar9 = param_3[1];
        goto LAB_146bf8eb5;
      }
      local_bc = CONCAT44(uVar2,uVar1);
      local_b0 = *(undefined4 *)(*param_2 + (longlong)(int)uVar9 * 8);
      local_ac = *(undefined4 *)(*param_2 + 4 + (longlong)(int)uVar9 * 8);
      local_a8 = uVar3;
      local_a4 = uVar4;
      fVar12 = (float)FUN_146bb358a(&local_bc,&local_a8,&local_b0);
      if ((fVar12 == 0.0) && (!NAN(fVar12))) {
        iVar5 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_5,iVar5);
        }
        *(uint *)(*param_5 + (longlong)iVar5 * 4) = uVar9;
        iVar5 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(param_4,iVar5);
        }
        *(uint *)(*param_4 + (longlong)iVar5 * 4) = uVar9;
        goto LAB_146bf8eb5;
      }
      if (0.0 <= fVar12) {
        uVar7 = local_e0._4_4_;
        uVar11 = *(uint *)(param_4 + 1);
        *(uint *)(param_4 + 1) = uVar11 + 1;
        if (*(uint *)((longlong)param_4 + 0xc) < uVar11 + 1) {
          local_e8 = (ulonglong)uVar11;
          FUN_1446f48e2(param_4,(ulonglong)uVar11);
          uVar11 = (uint)local_e8;
        }
        local_e0 = (ulonglong)uVar9;
        plVar10 = param_4;
      }
      else {
        uVar11 = *(uint *)(param_5 + 1);
        *(uint *)(param_5 + 1) = uVar11 + 1;
        if (*(uint *)((longlong)param_5 + 0xc) < uVar11 + 1) {
          local_e8 = CONCAT44(local_e8._4_4_,(undefined4)local_e0);
          FUN_1446f48e2(param_5);
          local_e0 = local_e8;
        }
        local_e0 = local_e0 & 0xffffffff;
        plVar10 = param_5;
        uVar7 = uVar9;
      }
      *(uint *)(*plVar10 + (longlong)(int)uVar11 * 4) = uVar9;
      local_e0 = local_e0 | (ulonglong)uVar7 << 0x20;
      uVar9 = FUN_146bf715c(param_1,&local_e0);
    }
  }
  uVar9 = *param_3;
LAB_146bf8eb5:
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf91d0 FUN_146bf91d0 body=701 status=ok
// SIG undefined FUN_146bf91d0(void)

void FUN_146bf91d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  iVar12 = (int)param_3[1];
  local_90 = param_2;
  if (iVar12 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12 + -2);
  }
  if (iVar12 == 2) {
    iVar11 = 1;
    uVar7 = 0;
    iVar12 = 0;
  }
  else {
    FUN_146be5458(&local_78);
    iVar11 = (int)param_3[1] + -1;
    uVar7 = uStack_70._4_4_;
    iVar12 = (uint)uStack_70;
  }
  uVar8 = iVar12 + 1;
  uStack_70._0_4_ = uVar8;
  if (uVar7 < uVar8) {
    FUN_146be54b8(&local_78,iVar12);
  }
  *(undefined4 *)(local_78 + (longlong)iVar12 * 8) = 0;
  *(int *)(local_78 + 4 + (longlong)iVar12 * 8) = iVar11;
  uVar6 = param_1;
  uVar4 = local_a0;
  while (local_a0 = uVar6, (uint)uStack_70 != 0) {
    uVar1 = *(ulonglong *)(local_78 + -8 + (longlong)(int)(uint)uStack_70 * 8);
    uStack_70._0_4_ = (uint)uStack_70 - 1;
    iVar12 = (int)uVar1;
    iVar14 = iVar12 + 1;
    iVar11 = (int)(uVar1 >> 0x20);
    lVar10 = (longlong)uVar1 >> 0x20;
    if (iVar12 + 2 == iVar11) {
      lVar9 = *param_3;
      local_7c = *(undefined4 *)(lVar9 + lVar10 * 4);
      local_80 = *(undefined4 *)(lVar9 + (longlong)iVar14 * 4);
      local_84 = *(undefined4 *)(lVar9 + (longlong)iVar12 * 4);
      FUN_146bf6f4c(param_1,&local_84);
      uVar6 = local_a0;
      uVar4 = local_a0;
    }
    else {
      lVar9 = (longlong)(uVar1 << 0x20) >> 0x1e;
      local_98 = uVar1 >> 0x20;
      if (iVar12 + 2 < iVar11) {
        lVar13 = ((longlong)(uVar1 << 0x20) >> 0x20) + 2;
        iVar11 = (iVar11 - iVar12) + -2;
        do {
          lVar2 = *param_3;
          lVar3 = *local_90;
          fVar15 = (float)FUN_146bf7fba(lVar3 + (longlong)*(int *)(lVar2 + lVar9) * 8,
                                        lVar3 + (longlong)*(int *)(lVar2 + (longlong)iVar14 * 4) * 8
                                        ,lVar3 + (longlong)*(int *)(lVar2 + lVar10 * 4) * 8,
                                        lVar3 + (longlong)*(int *)(lVar2 + lVar13 * 4) * 8);
          iVar5 = (int)lVar13;
          if (fVar15 <= 0.0) {
            iVar5 = iVar14;
          }
          iVar14 = iVar5;
          lVar13 = lVar13 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      param_1 = local_a0;
      lVar13 = *param_3;
      local_7c = *(undefined4 *)(lVar13 + lVar10 * 4);
      local_80 = *(undefined4 *)(lVar13 + (longlong)iVar14 * 4);
      local_84 = *(undefined4 *)(lVar13 + lVar9);
      FUN_146bf6f4c(local_a0,&local_84);
      uVar7 = (uint)uStack_70;
      uVar1 = local_98;
      if (1 < iVar14 - iVar12) {
        lVar10 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_146be54b8(&local_78,uVar7);
        }
        *(int *)(local_78 + lVar10 * 8) = iVar12;
        *(int *)(local_78 + 4 + lVar10 * 8) = iVar14;
      }
      uVar7 = (uint)uStack_70;
      uVar6 = local_a0;
      uVar4 = local_a0;
      if (1 < (int)uVar1 - iVar14) {
        lVar10 = (longlong)(int)(uint)uStack_70;
        uStack_70._0_4_ = (uint)uStack_70 + 1;
        if (uStack_70._4_4_ < (uint)uStack_70) {
          FUN_146be54b8(&local_78,uVar7);
        }
        *(int *)(local_78 + lVar10 * 8) = iVar14;
        *(int *)(local_78 + 4 + lVar10 * 8) = (int)uVar1;
        uVar6 = local_a0;
        uVar4 = local_a0;
      }
    }
  }
  local_a0 = uVar4;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bf948f FUN_146bf948f body=418 status=ok
// SIG undefined FUN_146bf948f(void)

undefined8 FUN_146bf948f(undefined8 param_1,longlong *param_2,int *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_146bb27b0(param_1,param_3);
  if ((cVar4 == '\0') && (FUN_146bf8b20(param_1,&local_68,*param_3), local_68 != -2)) {
    lVar1 = *param_2;
    local_70 = *(undefined8 *)(lVar1 + (longlong)*param_3 * 8);
    local_90 = &local_70;
    local_78 = *(undefined8 *)(lVar1 + (longlong)param_3[1] * 8);
    local_88 = &local_78;
    uVar6 = CONCAT44(iStack_64,local_68);
    uVar7 = 0;
    local_98 = uVar6;
    local_80 = param_2;
    if (local_68 != -1) {
      local_60 = *(undefined4 *)(lVar1 + (longlong)local_68 * 8);
      local_5c = *(undefined4 *)(lVar1 + 4 + (longlong)local_68 * 8);
      local_58 = local_78;
      local_50 = local_70;
      uVar7 = FUN_146bb358a(&local_50,&local_58,0);
    }
    cVar4 = FUN_146bf9632(&local_90,&local_98,uVar7,&local_58);
    uVar2 = uVar6;
    iVar3 = iStack_64;
    while (cVar4 == '\0') {
      local_50 = CONCAT44(iVar3,*param_3);
      local_a0 = uVar2;
      iVar5 = FUN_146bf715c(param_1,&local_50);
      uVar6 = CONCAT44(iVar5,iVar3);
      local_98 = uVar6;
      if (iVar5 == iStack_64 && iVar3 == (int)uVar2) goto LAB_146bf94cc;
      cVar4 = FUN_146bf9632(&local_90,&local_98,(undefined4)local_58,&local_58);
      uVar2 = local_a0;
      iVar3 = iVar5;
    }
    *param_4 = uVar6;
    uVar6 = 1;
  }
  else {
LAB_146bf94cc:
    uVar6 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf9632 FUN_146bf9632 body=305 status=ok
// SIG undefined FUN_146bf9632(void)

undefined4 FUN_146bf9632(undefined8 *param_1,int *param_2,float param_3,float *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = param_2[1];
  lVar3 = (longlong)iVar2;
  if (-1 < lVar3) {
    local_38 = *(undefined4 *)*param_1;
    local_34 = ((undefined4 *)*param_1)[1];
    local_40 = *(undefined4 *)param_1[1];
    local_3c = ((undefined4 *)param_1[1])[1];
    local_48 = *(undefined4 *)(*(longlong *)param_1[2] + lVar3 * 8);
    local_44 = *(undefined4 *)(*(longlong *)param_1[2] + 4 + lVar3 * 8);
    fVar5 = (float)FUN_146bb358a();
    *param_4 = fVar5;
    iVar2 = param_2[1];
  }
  uVar1 = 0;
  if ((*param_2 != -1) && (iVar2 != -1)) {
    if ((int)(float)(-(uint)(0.0 < param_3) & 0x3f800000 |
                    ~-(uint)(0.0 < param_3) & -(uint)(param_3 < 0.0) & 0xbf800000) < 0) {
      uVar4 = -(uint)(0.0 < *param_4);
      iVar2 = (int)(float)(uVar4 & 0x3f800000 | ~uVar4 & -(uint)(*param_4 < 0.0) & 0xbf800000);
      uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 1);
    }
    else {
      uVar1 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bf976c FUN_146bf976c body=426 status=ok
// SIG undefined FUN_146bf976c(void)

void FUN_146bf976c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar12 = (longlong)param_2;
  lVar9 = (longlong)*(int *)((undefined8 *)param_1[2] + 1);
  if (lVar9 == 0) {
    dVar6 = 0.0;
  }
  else {
    lVar10 = *(longlong *)*param_1;
    lVar3 = *(longlong *)param_1[1];
    lVar14 = (longlong)*(int *)(lVar10 + lVar12 * 0xc) * 0x10;
    lVar15 = (longlong)*(int *)(lVar10 + 4 + lVar12 * 0xc) * 0x10;
    lVar10 = (longlong)*(int *)(lVar10 + 8 + lVar12 * 0xc) * 0x10;
    dVar5 = (*(double *)(lVar3 + 8 + lVar14) + *(double *)(lVar3 + 8 + lVar15) +
            *(double *)(lVar3 + 8 + lVar10)) * 0.3333333333333333;
    dVar4 = (*(double *)(lVar3 + lVar14) + *(double *)(lVar3 + lVar15) + *(double *)(lVar3 + lVar10)
            ) * 0.3333333333333333;
    piVar11 = *(int **)param_1[2];
    piVar1 = piVar11 + lVar9 * 2;
    dVar6 = 0.0;
    do {
      lVar9 = *(longlong *)param_1[1];
      dVar18 = *(double *)(lVar9 + 8 + (longlong)*piVar11 * 0x10) - dVar5;
      dVar17 = *(double *)(lVar9 + (longlong)*piVar11 * 0x10) - dVar4;
      dVar16 = *(double *)(lVar9 + 8 + (longlong)piVar11[1] * 0x10) - dVar5;
      dVar19 = *(double *)(lVar9 + (longlong)piVar11[1] * 0x10) - dVar4;
      dVar16 = atan2(dVar16 * dVar17 - dVar19 * dVar18,dVar17 * dVar19 + dVar18 * dVar16);
      dVar6 = dVar6 + dVar16;
      piVar11 = piVar11 + 2;
    } while (piVar11 != piVar1);
    dVar6 = dVar6 * 0.15915494309189535;
  }
  uVar13 = (uint)ROUND(dVar6 + dVar6 + 0.5);
  iVar8 = (int)uVar13 >> 1;
  iVar2 = *(int *)param_1[4];
  bVar7 = 1;
  if (((-1 < iVar8 || iVar2 != 3) && (uVar13 < 2 || iVar2 != 2)) && (iVar8 < 1 || iVar2 != 1)) {
    if (iVar2 == 4) {
      bVar7 = (byte)iVar8 & 1;
    }
    else {
      bVar7 = 0;
    }
  }
  *(byte *)(*(longlong *)param_1[3] + lVar12) = bVar7;
  return;
}



// FUNCTION 146bf9916 FUN_146bf9916 body=141 status=ok
// SIG undefined FUN_146bf9916(void)

void FUN_146bf9916(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141724806(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bf99a4(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bf9a04(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bf99a4 FUN_146bf99a4 body=95 status=ok
// SIG undefined FUN_146bf99a4(void)

void FUN_146bf99a4(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1400d7bbd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bf9a04 FUN_146bf9a04 body=63 status=ok
// SIG undefined FUN_146bf9a04(void)

void FUN_146bf9a04(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bf9a44(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146bf9a44 FUN_146bf9a44 body=97 status=ok
// SIG undefined FUN_146bf9a44(void)

ulonglong FUN_146bf9a44(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146bf9aa5 FUN_146bf9aa5 body=818 status=ok
// SIG undefined FUN_146bf9aa5(void)

void FUN_146bf9aa5(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar8 = &local_348;
    do {
      piVar4 = (int *)*plVar8;
      piVar9 = (int *)plVar8[1];
      iVar11 = (int)plVar8[2];
      uVar6 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar4) >> 2) + 1;
      piVar13 = piVar9;
      piVar12 = piVar4;
      if (iVar11 != 0) {
LAB_146bf9b6e:
        if (8 < (int)uVar6) {
          iVar1 = piVar4[uVar6 >> 1];
          piVar4[uVar6 >> 1] = *piVar4;
          *piVar4 = iVar1;
          piVar7 = piVar9 + 1;
          piVar5 = piVar4;
          do {
            piVar3 = piVar5 + 1;
            piVar10 = piVar5 + 1;
            do {
              piVar14 = piVar10;
              piVar5 = piVar3;
              if (piVar9 < piVar5) break;
              lVar2 = *(longlong *)param_3[2];
              piVar3 = piVar5 + 1;
              piVar10 = piVar14 + 1;
            } while (*param_3 * *(double *)(lVar2 + (longlong)*piVar5 * 0x10) +
                     param_3[1] * *(double *)(lVar2 + 8 + (longlong)*piVar5 * 0x10) <=
                     *(double *)(lVar2 + (longlong)*piVar4 * 0x10) * *param_3 +
                     *(double *)(lVar2 + 8 + (longlong)*piVar4 * 0x10) * param_3[1]);
            piVar3 = piVar7 + -2;
            do {
              piVar10 = piVar7;
              piVar16 = piVar3;
              piVar7 = piVar10 + -1;
              if (piVar7 <= piVar4) break;
              lVar2 = *(longlong *)param_3[2];
              piVar3 = piVar16 + -1;
            } while (*param_3 * *(double *)(lVar2 + (longlong)*piVar4 * 0x10) +
                     param_3[1] * *(double *)(lVar2 + 8 + (longlong)*piVar4 * 0x10) <=
                     *(double *)(lVar2 + (longlong)*piVar7 * 0x10) * *param_3 +
                     *(double *)(lVar2 + 8 + (longlong)*piVar7 * 0x10) * param_3[1]);
            if (piVar7 < piVar5) goto LAB_146bf9c78;
            iVar1 = *piVar5;
            *piVar5 = *piVar7;
            *piVar7 = iVar1;
          } while( true );
        }
        if (piVar4 < piVar9) {
          do {
            piVar13 = piVar4;
            if (piVar4 + 1 <= piVar9) {
              lVar2 = *(longlong *)param_3[2];
              iVar11 = *piVar4;
              piVar12 = piVar4 + 1;
              do {
                lVar15 = (longlong)*piVar12 * 0x10;
                piVar7 = piVar12;
                iVar1 = *piVar12;
                if (*(double *)(lVar2 + lVar15) * *param_3 +
                    *(double *)(lVar2 + 8 + lVar15) * param_3[1] <=
                    *(double *)(lVar2 + (longlong)iVar11 * 0x10) * *param_3 +
                    *(double *)(lVar2 + 8 + (longlong)iVar11 * 0x10) * param_3[1]) {
                  piVar7 = piVar13;
                  iVar1 = iVar11;
                }
                iVar11 = iVar1;
                piVar13 = piVar7;
                piVar12 = piVar12 + 1;
              } while (piVar12 <= piVar9);
            }
            iVar11 = *piVar13;
            *piVar13 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar4 < piVar9);
        }
        goto LAB_146bf9db3;
      }
LAB_146bf9dc8:
      FUN_146bf9dd8(piVar4,uVar6,param_3);
LAB_146bf9db3:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146bf9c78:
  iVar1 = *piVar4;
  *piVar4 = *piVar7;
  *piVar7 = iVar1;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar16 - (longlong)piVar12 < (longlong)piVar13 - (longlong)piVar14) {
    if (piVar5 < piVar9) {
      *plVar8 = (longlong)piVar5;
      plVar8[1] = (longlong)piVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar14 = piVar4;
    if (piVar7 <= piVar4 + 1) goto LAB_146bf9db3;
  }
  else {
    if (piVar4 + 1 < piVar7) {
      *plVar8 = (longlong)piVar4;
      plVar8[1] = (longlong)piVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar4 = piVar5;
    piVar10 = piVar9;
    piVar16 = piVar9;
    if (piVar9 <= piVar5) goto LAB_146bf9db3;
  }
  uVar6 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar14) >> 2) + 1;
  piVar9 = piVar10;
  piVar13 = piVar16;
  piVar12 = piVar14;
  if (iVar11 == 0) goto LAB_146bf9dc8;
  goto LAB_146bf9b6e;
}



// FUNCTION 146bf9dd8 FUN_146bf9dd8 body=577 status=ok
// SIG undefined FUN_146bf9dd8(void)

void FUN_146bf9dd8(undefined4 *param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar11 = iVar5;
joined_r0x000146bf9dfd:
    do {
      iVar9 = iVar5 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar5 * 2 + 2;
        lVar4 = *(longlong *)param_3[2];
        dVar1 = *param_3;
        dVar2 = param_3[1];
        if ((iVar10 < (int)param_2) &&
           (*(double *)(lVar4 + (longlong)(int)param_1[iVar9] * 0x10) * dVar1 +
            *(double *)(lVar4 + 8 + (longlong)(int)param_1[iVar9] * 0x10) * dVar2 <=
            *(double *)(lVar4 + (longlong)(int)param_1[iVar10] * 0x10) * dVar1 +
            *(double *)(lVar4 + 8 + (longlong)(int)param_1[iVar10] * 0x10) * dVar2)) {
          iVar9 = iVar10;
        }
        iVar10 = param_1[iVar5];
        lVar8 = (longlong)iVar10 * 0x10;
        lVar12 = (longlong)(int)param_1[iVar9] * 0x10;
        if (*(double *)(lVar4 + lVar8) * dVar1 + *(double *)(lVar4 + 8 + lVar8) * dVar2 <
            dVar1 * *(double *)(lVar4 + lVar12) + dVar2 * *(double *)(lVar4 + 8 + lVar12)) {
          param_1[iVar5] = param_1[iVar9];
          param_1[iVar9] = iVar10;
          iVar5 = iVar9;
          goto joined_r0x000146bf9dfd;
        }
      }
      bVar13 = iVar11 != 0;
      iVar5 = iVar11 + -1;
      iVar11 = iVar5;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            iVar5 = iVar5 + 2;
            lVar4 = *(longlong *)param_3[2];
            dVar1 = *param_3;
            dVar2 = param_3[1];
            iVar10 = iVar9;
            if (((longlong)iVar5 < (longlong)uVar7) &&
               (*(double *)(lVar4 + (longlong)(int)param_1[iVar9] * 0x10) * dVar1 +
                *(double *)(lVar4 + 8 + (longlong)(int)param_1[iVar9] * 0x10) * dVar2 <=
                *(double *)(lVar4 + (longlong)(int)param_1[iVar5] * 0x10) * dVar1 +
                *(double *)(lVar4 + 8 + (longlong)(int)param_1[iVar5] * 0x10) * dVar2)) {
              iVar10 = iVar5;
            }
            iVar5 = param_1[iVar11];
            lVar12 = (longlong)iVar5 * 0x10;
            lVar8 = (longlong)(int)param_1[iVar10] * 0x10;
            if (dVar1 * *(double *)(lVar4 + lVar8) + dVar2 * *(double *)(lVar4 + 8 + lVar8) <=
                *(double *)(lVar4 + lVar12) * dVar1 + *(double *)(lVar4 + 8 + lVar12) * dVar2)
            break;
            param_1[iVar11] = param_1[iVar10];
            param_1[iVar10] = iVar5;
            iVar5 = iVar10 * 2;
            iVar9 = iVar10 * 2 + 1;
            iVar11 = iVar10;
          } while ((longlong)iVar9 < (longlong)uVar7);
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



// FUNCTION 146bfa01a FUN_146bfa01a body=291 status=ok
// SIG undefined FUN_146bfa01a(void)

longlong * FUN_146bfa01a(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
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
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = (longlong *)CONCAT44(local_78._4_4_,0xffffffff);
  FUN_1448156a8(param_2,&local_78,param_3 + 1);
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      *(int *)(*param_2 + 4 + (longlong)*(int *)(*local_78 + (longlong)iStack_5c * 0x14) * 4) =
           *(int *)(*local_78 + 4 + (longlong)iStack_5c * 0x14) + 1;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfa13e FUN_146bfa13e body=288 status=ok
// SIG undefined FUN_146bfa13e(void)

void FUN_146bfa13e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar5) || (uStack_48 != plVar1)) {
    do {
      lVar3 = *local_78;
      lVar4 = (longlong)iStack_5c;
      iVar2 = *(int *)(lVar3 + 8 + lVar4 * 0x14);
      if (((iVar2 != -1) && (iVar2 <= *(int *)(lVar3 + lVar4 * 0x14))) &&
         (iVar2 <= *(int *)(lVar3 + 4 + lVar4 * 0x14))) {
        FUN_146bfa260(param_2,lVar3 + lVar4 * 0x14);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar5));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bfa260 FUN_146bfa260 body=189 status=ok
// SIG undefined FUN_146bfa260(void)

void FUN_146bfa260(undefined8 *param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double *pdVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pdVar3 = (double *)*param_1;
  lVar4 = *(longlong *)param_1[1];
  puVar1 = (undefined8 *)(lVar4 + (longlong)*param_2 * 0x10);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  puVar2 = (undefined4 *)(lVar4 + (longlong)param_3 * 0x10);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  FUN_146bfa31e(&local_28,&local_48,&local_38,(longlong)param_2[1] * 0x10 + lVar4);
  if (local_28 < *pdVar3) {
    *pdVar3 = local_28;
  }
  if (pdVar3[2] <= local_28 && local_28 != pdVar3[2]) {
    pdVar3[2] = local_28;
  }
  if (local_20 < pdVar3[1]) {
    pdVar3[1] = local_20;
  }
  if (pdVar3[3] <= local_20 && local_20 != pdVar3[3]) {
    pdVar3[3] = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfa31e FUN_146bfa31e body=274 status=ok
// SIG undefined FUN_146bfa31e(void)

void FUN_146bfa31e(double *param_1,double *param_2,double *param_3,double *param_4)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar5 = param_3[1] - dVar2;
  dVar4 = *param_3 - dVar1;
  dVar10 = param_4[1] - dVar2;
  dVar7 = *param_4 - dVar1;
  dVar9 = dVar4 * dVar10 - dVar7 * dVar5;
  dVar9 = dVar9 + dVar9;
  if (ABS(dVar9) <= 2.220446049250313e-16) {
    dVar6 = (dVar5 + dVar10) * 0.3333333333333333;
    dVar9 = (dVar4 + dVar7) * 0.3333333333333333;
  }
  else {
    dVar3 = dVar4 * dVar4 + dVar5 * dVar5;
    dVar8 = dVar7 * dVar7 + dVar10 * dVar10;
    dVar6 = (dVar4 * dVar8 - dVar3 * dVar7) / dVar9;
    dVar9 = (dVar8 * -dVar5 + dVar10 * dVar3) / dVar9;
  }
  *param_1 = dVar1 + dVar9;
  param_1[1] = dVar2 + dVar6;
  return;
}



// FUNCTION 146bfa438 FUN_146bfa438 body=843 status=ok
// SIG undefined FUN_146bfa438(void)

void FUN_146bfa438(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  uint local_c4;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)(**(longlong **)param_1[2] + 4 + (longlong)(int)param_2 * 4);
  uVar13 = iVar4 - 1;
  if (uVar13 != 0xfffffffe) {
    uVar16 = (ulonglong)param_2;
    plVar14 = (longlong *)((longlong)(int)param_2 * 0x10 + *(longlong *)*param_1);
    local_68 = param_2;
    uStack_64 = uVar13;
    uVar11 = FUN_146bf715c(param_1[1]);
    if (*(char *)param_1[3] == '\x01') {
      if (iVar4 == 0 || uVar11 == 0xffffffff) {
        do {
          uVar13 = uVar11;
          local_68 = param_2;
          uStack_64 = uVar13;
          uVar11 = FUN_146bf715c(param_1[1],&local_68);
        } while (uVar11 == 0xffffffff || uVar13 == 0xffffffff);
      }
    }
    else {
      uStack_64 = 0xffffffff;
      local_68 = param_2;
      cVar10 = FUN_146bb27b0(param_1[1]);
      if (cVar10 != '\0') goto LAB_146bfa47c;
    }
    local_50 = CONCAT44(uVar13,param_2);
    local_54 = 0xffffffff;
    local_c0 = uVar16;
    uVar13 = uVar11;
    do {
      uVar18 = local_50._4_4_;
      if ((int)(uint)local_50 < (int)local_50._4_4_) {
        uVar18 = (uint)local_50;
      }
      uVar12 = uVar13;
      if ((int)uVar18 < (int)uVar13) {
        uVar12 = uVar18;
      }
      if (uVar12 == 0xffffffff) {
        if (uVar13 == 0xffffffff) {
          local_d8 = &local_54;
          FUN_146bfa784(param_1[4],&local_68,uVar16);
          goto LAB_146bfa5fd;
        }
        local_d8 = &local_6c;
        local_c4 = uVar11;
        FUN_146bfa784(param_1[4],&local_68,uVar13,uVar16);
        uVar11 = local_6c;
        if ((-1 < (int)local_54) && (uVar18 = local_54, -1 < (int)local_6c)) {
          for (; uVar18 != uVar11; uVar18 = uVar18 + 1 & 3) {
            puVar15 = (undefined4 *)((ulonglong)uVar18 * 0x10 + param_1[5]);
            iVar4 = (int)plVar14[1];
            *(uint *)(plVar14 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar14 + 0xc) < iVar4 + 1U) {
              FUN_14489624a(plVar14,iVar4);
            }
            uVar6 = puVar15[1];
            uVar7 = puVar15[2];
            uVar8 = puVar15[3];
            puVar3 = (undefined4 *)(*plVar14 + (longlong)iVar4 * 0x10);
            *puVar3 = *puVar15;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
          }
        }
        iVar4 = (int)plVar14[1];
        *(uint *)(plVar14 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar14 + 0xc) < iVar4 + 1U) {
          FUN_14489624a(plVar14,iVar4);
        }
        puVar2 = (uint *)(*plVar14 + (longlong)iVar4 * 0x10);
        *puVar2 = local_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
        uVar11 = local_c4;
      }
      else {
        uVar17 = (uint)local_50;
        uVar9 = uVar13;
        if ((int)(uint)local_50 < (int)local_50._4_4_) {
          uVar17 = uVar13;
          uVar9 = local_50._4_4_;
        }
        if ((int)uVar13 < (int)uVar18) {
          uVar17 = local_50._4_4_;
          uVar9 = (uint)local_50;
        }
        lVar5 = *(longlong *)param_1[6];
        puVar1 = (undefined8 *)(lVar5 + (longlong)(int)uVar9 * 0x10);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar15 = (undefined4 *)(lVar5 + (longlong)(int)uVar12 * 0x10);
        local_98 = *puVar15;
        uStack_94 = puVar15[1];
        uStack_90 = puVar15[2];
        uStack_8c = puVar15[3];
        FUN_146bfa31e(&local_68,&local_98,&local_88,(longlong)(int)uVar17 * 0x10 + lVar5);
LAB_146bfa5fd:
        iVar4 = (int)plVar14[1];
        *(uint *)(plVar14 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar14 + 0xc) < iVar4 + 1U) {
          FUN_14489624a(plVar14,iVar4);
        }
        puVar2 = (uint *)(*plVar14 + (longlong)iVar4 * 0x10);
        *puVar2 = local_68;
        puVar2[1] = uStack_64;
        puVar2[2] = uStack_60;
        puVar2[3] = uStack_5c;
      }
      local_50 = ((ulonglong)uVar13 << 0x20) + local_c0;
      uVar13 = FUN_146bf715c(param_1[1],&local_50);
    } while (uVar13 != uVar11);
    if (*(char *)param_1[7] == '\x01') {
      puVar15 = (undefined4 *)param_1[8];
      local_a8 = *(undefined8 *)(puVar15 + 4);
      uStack_a0 = *(undefined8 *)(puVar15 + 6);
      local_b8 = *puVar15;
      uStack_b4 = puVar15[1];
      uStack_b0 = puVar15[2];
      uStack_ac = puVar15[3];
      FUN_142970d3b(plVar14);
    }
  }
LAB_146bfa47c:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bfa784 FUN_146bfa784 body=296 status=ok
// SIG undefined FUN_146bfa784(void)

void FUN_146bfa784(undefined8 *param_1,double *param_2,int param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = *(longlong *)*param_1;
  dVar8 = *(double *)(lVar1 + (longlong)param_3 * 0x10);
  dVar4 = *(double *)(lVar1 + 8 + (longlong)param_3 * 0x10);
  dVar7 = *(double *)(lVar1 + (longlong)param_4 * 0x10);
  dVar9 = *(double *)(lVar1 + 8 + (longlong)param_4 * 0x10);
  dVar6 = (dVar8 + dVar7) * 0.5;
  dVar5 = dVar9 - dVar4;
  dVar7 = dVar7 - dVar8;
  *param_5 = 0xffffffff;
  if (dVar5 <= -dVar5) {
    if (dVar5 < 0.0) {
      pdVar3 = (double *)(param_1[1] + 0x10);
      uVar2 = 2;
      goto LAB_146bfa805;
    }
    dVar8 = 1.79769313486232e+308;
  }
  else {
    pdVar3 = (double *)param_1[1];
    uVar2 = 0;
LAB_146bfa805:
    dVar8 = (*pdVar3 - dVar6) / -dVar5;
    *param_5 = uVar2;
  }
  dVar4 = (dVar4 + dVar9) * 0.5;
  if (0.0 <= dVar7) {
    if (dVar7 <= 0.0) goto LAB_146bfa845;
    dVar9 = *(double *)(param_1[1] + 0x18);
    uVar2 = 3;
  }
  else {
    dVar9 = *(double *)(param_1[1] + 8);
    uVar2 = 1;
  }
  dVar9 = (dVar9 - dVar4) / dVar7;
  if (dVar9 < dVar8) {
    *param_5 = uVar2;
    dVar8 = dVar9;
  }
LAB_146bfa845:
  *param_2 = dVar6 - dVar5 * dVar8;
  param_2[1] = dVar4 + dVar7 * dVar8;
  return;
}



// FUNCTION 146bfa8ac FUN_146bfa8ac body=143 status=ok
// SIG undefined FUN_146bfa8ac(void)

void FUN_146bfa8ac(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146bfa93c(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146bfa9c2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146bfaa22(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146bfa93c FUN_146bfa93c body=132 status=ok
// SIG undefined FUN_146bfa93c(void)

void FUN_146bfa93c(longlong param_1,int param_2)

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



// FUNCTION 146bfa9c2 FUN_146bfa9c2 body=95 status=ok
// SIG undefined FUN_146bfa9c2(void)

void FUN_146bfa9c2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146bfaa61(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bfaa22 FUN_146bfaa22 body=63 status=ok
// SIG undefined FUN_146bfaa22(void)

void FUN_146bfaa22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bfaa8c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146bfaa61 FUN_146bfaa61 body=43 status=ok
// SIG undefined FUN_146bfaa61(void)

void FUN_146bfaa61(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146bfaa8c FUN_146bfaa8c body=97 status=ok
// SIG undefined FUN_146bfaa8c(void)

ulonglong FUN_146bfaa8c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146bfaaf6 FUN_146bfaaf6 body=132 status=ok
// SIG undefined FUN_146bfaaf6(void)

void FUN_146bfaaf6(longlong param_1,int param_2)

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



// FUNCTION 146bfab7c FUN_146bfab7c body=77 status=ok
// SIG undefined FUN_146bfab7c(void)

void FUN_146bfab7c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140c0b6f2();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1467ff8c6();
      return;
    }
  }
  return;
}



// FUNCTION 146bfabca FUN_146bfabca body=431 status=ok
// SIG undefined FUN_146bfabca(void)

float * FUN_146bfabca(float *param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar8 = fVar2 + fVar2;
  fVar3 = param_2[2];
  fVar9 = fVar3 + fVar3;
  fVar4 = param_2[3];
  fVar11 = fVar1 * (fVar1 + fVar1);
  fVar10 = (fVar1 + fVar1) * fVar4;
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  *param_1 = (fVar1 * fVar9 + fVar8 * fVar4) * fVar7 +
             (1.0 - (fVar9 * fVar3 + fVar8 * fVar2)) * fVar5 +
             (fVar1 * fVar8 - fVar4 * fVar9) * fVar6;
  param_1[1] = (fVar2 * fVar9 - fVar10) * fVar7 +
               (fVar1 * fVar8 + fVar4 * fVar9) * fVar5 + (1.0 - (fVar11 + fVar9 * fVar3)) * fVar6;
  param_1[2] = (1.0 - (fVar11 + fVar8 * fVar2)) * fVar7 +
               (fVar1 * fVar9 - fVar8 * fVar4) * fVar5 + (fVar2 * fVar9 + fVar10) * fVar6;
  return param_1;
}



// FUNCTION 146bfad7a FUN_146bfad7a body=132 status=ok
// SIG undefined FUN_146bfad7a(void)

void FUN_146bfad7a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bfae00 FUN_146bfae00 body=110 status=ok
// SIG undefined FUN_146bfae00(void)

void FUN_146bfae00(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_140cb0586(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_144941252(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146bfae70 FUN_146bfae70 body=132 status=ok
// SIG undefined FUN_146bfae70(void)

void FUN_146bfae70(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bfaf56 FUN_146bfaf56 body=730 status=ok
// SIG undefined FUN_146bfaf56(void)

void FUN_146bfaf56(float *param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar7 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar5 = 1.0 / fVar7;
  if (0.0 < fVar7) {
    fVar2 = fVar2 * fVar5;
    fVar6 = fVar1 * fVar5;
  }
  else {
    fVar2 = 0.0;
    fVar6 = 0.0;
  }
  fVar4 = (float)(-(uint)(0.0 < fVar7) & (uint)(fVar3 * fVar5));
  fVar10 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
  fVar11 = 1.0 / fVar12;
  if (0.0 < fVar12) {
    fVar9 = fVar9 * fVar11;
    fVar8 = fVar8 * fVar11;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
  }
  fVar9 = fVar9 + fVar2;
  fVar8 = fVar8 + fVar6;
  fVar10 = (float)(-(uint)(0.0 < fVar12) & (uint)(fVar10 * fVar11)) + fVar4;
  fVar11 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
  fVar12 = 1.0 / fVar11;
  if (1e-06 < fVar11) {
    fVar9 = fVar9 * fVar12;
    fVar8 = fVar8 * fVar12;
  }
  else {
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  fVar11 = (float)(-(uint)(1e-06 < fVar11) & (uint)(fVar10 * fVar12));
  fVar10 = fVar2 * fVar9 + fVar4 * fVar11 + fVar6 * fVar8;
  param_1[3] = fVar10;
  if ((fVar10 != 0.0) || (NAN(fVar10))) {
    *param_1 = fVar6 * fVar9 - fVar8 * fVar2;
    param_1[1] = fVar2 * fVar11 - fVar9 * fVar4;
    param_1[2] = fVar4 * fVar8 - fVar11 * fVar6;
  }
  else {
    fVar10 = 0.0;
    if (0.0 < fVar7) {
      fVar10 = ABS(fVar1 * fVar5);
    }
    if (fVar10 <= (float)(-(uint)(0.0 < fVar7) & 0x7fffffff & (uint)(fVar3 * fVar5))) {
      fVar3 = 1.0 / SQRT(fVar4 * fVar4 + fVar2 * fVar2);
      fVar2 = -fVar2 * fVar3;
      *param_1 = fVar2;
      param_1[1] = 0.0;
      param_1[2] = fVar3 * fVar4;
    }
    else {
      fVar3 = 1.0 / SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      *param_1 = 0.0;
      fVar2 = fVar2 * fVar3;
      param_1[1] = fVar2;
      param_1[2] = -fVar6 * fVar3;
    }
  }
  FUN_146bfb230(fVar2,0);
  return;
}



// FUNCTION 146bfb230 FUN_146bfb230 body=203 status=ok
// SIG undefined FUN_146bfb230(void)

float FUN_146bfb230(float *param_1,float param_2)

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
  float fVar10;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar7 = 0.0;
  fVar6 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar5 = 0.0;
  if (param_2 < fVar10) {
    fVar5 = 1.0 / fVar10;
    fVar7 = fVar1 * fVar5;
    fVar6 = fVar2 * fVar5;
    fVar8 = fVar3 * fVar5;
    fVar9 = fVar4 * fVar5;
  }
  *param_1 = fVar7;
  param_1[1] = fVar6;
  param_1[2] = fVar8;
  param_1[3] = fVar9;
  return fVar5;
}



// FUNCTION 146bfb2fc FUN_146bfb2fc body=280 status=ok
// SIG undefined FUN_146bfb2fc(void)

undefined4 *
FUN_146bfb2fc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146bfb416(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  uVar2 = FUN_1448eb174(local_48,8,0);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
    *(uint *)(local_48 + 2) = uVar2;
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)((longlong)local_48 + 0xc) =
         *(undefined4 *)
          (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4) =
         local_50[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146bfb4fc(param_1);
  }
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfb416 FUN_146bfb416 body=230 status=ok
// SIG undefined FUN_146bfb416(void)

int * FUN_146bfb416(longlong *param_1,int *param_2)

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



// FUNCTION 146bfb4fc FUN_146bfb4fc body=446 status=ok
// SIG undefined FUN_146bfb4fc(void)

void FUN_146bfb4fc(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x14;
        iVar6 = FUN_1448eb174(lVar2,8,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xc) =
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



// FUNCTION 146bfb6bc FUN_146bfb6bc body=309 status=ok
// SIG undefined FUN_146bfb6bc(void)

void FUN_146bfb6bc(longlong *param_1,int *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  if ((int)param_1[9] != 0) {
    iVar5 = FUN_1448eb174(param_2,8);
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    while (iVar10 = iVar5, iVar10 != -1) {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar10;
      iVar5 = *(int *)(lVar9 + 0xc + lVar8 * 0x14);
      if ((*(int *)(lVar9 + lVar8 * 0x14) == *param_2) &&
         (*(int *)(lVar9 + 4 + lVar8 * 0x14) == param_2[1])) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1446f48e2(param_3,iVar1);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) =
               *(undefined4 *)((longlong)iVar10 * 0x14 + 8 + lVar9);
          do {
            iVar10 = iVar5;
            if (iVar10 == -1) goto LAB_146bfb7a3;
            lVar9 = *param_1;
            lVar8 = (longlong)iVar10;
            iVar5 = *(int *)(lVar9 + 0xc + lVar8 * 0x14);
          } while ((*(int *)(lVar9 + lVar8 * 0x14) != *param_2) ||
                  (*(int *)(lVar9 + 4 + lVar8 * 0x14) != param_2[1]));
        } while( true );
      }
    }
  }
LAB_146bfb7a3:
  if (param_4 != '\0') {
    uVar2 = *(uint *)(param_3 + 1);
    lVar9 = (longlong)(int)uVar2;
    if (1 < lVar9) {
      puVar4 = (undefined4 *)*param_3;
      lVar8 = 0;
      puVar6 = puVar4;
      do {
        uVar3 = *puVar6;
        *puVar6 = puVar4[lVar9 + lVar8 + -1];
        puVar4[lVar9 + lVar8 + -1] = uVar3;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 1;
      } while (-lVar8 != (ulonglong)(uVar2 >> 1));
    }
  }
  return;
}



// FUNCTION 146bfb7f2 FUN_146bfb7f2 body=780 status=ok
// SIG undefined FUN_146bfb7f2(void)

void FUN_146bfb7f2(double *param_1,double *param_2,double *param_3)

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
  
  dVar8 = *param_2;
  dVar1 = param_2[1];
  dVar7 = param_2[2];
  dVar4 = SQRT(dVar7 * dVar7 + dVar8 * dVar8 + dVar1 * dVar1);
  dVar10 = 1.0 / dVar4;
  if (0.0 < dVar4) {
    dVar7 = dVar7 * dVar10;
    dVar11 = dVar1 * dVar10;
  }
  else {
    dVar7 = 0.0;
    dVar11 = 0.0;
  }
  dVar9 = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar8 * dVar10));
  dVar12 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar6 = SQRT(dVar3 * dVar3 + dVar12 * dVar12 + dVar2 * dVar2);
  dVar5 = 1.0 / dVar6;
  if (0.0 < dVar6) {
    dVar3 = dVar3 * dVar5;
    dVar2 = dVar2 * dVar5;
  }
  else {
    dVar2 = 0.0;
    dVar3 = 0.0;
  }
  dVar3 = dVar3 + dVar7;
  dVar2 = dVar2 + dVar11;
  dVar12 = (double)(-(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar12 * dVar5)) + dVar9;
  dVar5 = SQRT(dVar3 * dVar3 + dVar12 * dVar12 + dVar2 * dVar2);
  dVar6 = 1.0 / dVar5;
  if (1e-08 < dVar5) {
    dVar3 = dVar3 * dVar6;
    dVar2 = dVar2 * dVar6;
  }
  else {
    dVar3 = 0.0;
    dVar2 = 0.0;
  }
  dVar5 = (double)(-(ulonglong)(1e-08 < dVar5) & (ulonglong)(dVar12 * dVar6));
  dVar12 = dVar7 * dVar3 + dVar9 * dVar5 + dVar11 * dVar2;
  param_1[3] = dVar12;
  if ((dVar12 != 0.0) || (NAN(dVar12))) {
    *param_1 = dVar11 * dVar3 - dVar2 * dVar7;
    param_1[1] = dVar7 * dVar5 - dVar3 * dVar9;
    param_1[2] = dVar9 * dVar2 - dVar5 * dVar11;
  }
  else {
    dVar12 = 0.0;
    if (0.0 < dVar4) {
      dVar12 = ABS(dVar1 * dVar10);
    }
    if (dVar12 <= (double)(-(ulonglong)(0.0 < dVar4) & 0x7fffffffffffffff &
                          (ulonglong)(dVar8 * dVar10))) {
      dVar8 = 1.0 / SQRT(dVar9 * dVar9 + dVar7 * dVar7);
      dVar7 = -dVar7 * dVar8;
      *param_1 = dVar7;
      param_1[1] = 0.0;
      param_1[2] = dVar8 * dVar9;
    }
    else {
      dVar8 = 1.0 / SQRT(dVar11 * dVar11 + dVar7 * dVar7);
      *param_1 = 0.0;
      dVar7 = dVar7 * dVar8;
      param_1[1] = dVar7;
      param_1[2] = -dVar11 * dVar8;
    }
  }
  FUN_146bfbafe(dVar7,0);
  return;
}



// FUNCTION 146bfbafe FUN_146bfbafe body=219 status=ok
// SIG undefined FUN_146bfbafe(void)

double FUN_146bfbafe(double *param_1,double param_2)

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
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar5 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar8 = 0.0;
  dVar7 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar6 = 0.0;
  if (param_2 < dVar5) {
    dVar6 = 1.0 / dVar5;
    dVar8 = dVar1 * dVar6;
    dVar7 = dVar2 * dVar6;
    dVar9 = dVar3 * dVar6;
    dVar10 = dVar4 * dVar6;
  }
  *param_1 = dVar8;
  param_1[1] = dVar7;
  param_1[2] = dVar9;
  param_1[3] = dVar10;
  return dVar6;
}



// FUNCTION 146bfbbda FUN_146bfbbda body=671 status=ok
// SIG undefined FUN_146bfbbda(void)

void FUN_146bfbbda(double *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_88 [32];
  double local_68 [3];
  int local_4c [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c[0] = 1;
  local_4c[1] = 2;
  local_4c[2] = 0;
  dVar13 = *param_2;
  dVar2 = param_2[4];
  dVar3 = param_2[8];
  dVar12 = dVar13 + dVar2 + dVar3;
  if (dVar12 <= 0.0) {
    pdVar1 = param_2 + 3;
    pdVar9 = pdVar1;
    if (dVar2 <= dVar13) {
      pdVar9 = param_2;
    }
    pdVar9 = (double *)((ulonglong)((uint)(dVar13 < dVar2) * 8) + (longlong)pdVar9);
    uVar11 = 2;
    if (dVar3 < *pdVar9 || dVar3 == *pdVar9) {
      uVar11 = (ulonglong)(dVar13 < dVar2);
    }
    pdVar9 = param_2 + 6;
    iVar4 = local_4c[uVar11];
    iVar10 = (int)uVar11;
    pdVar8 = param_2;
    if ((iVar10 != 0) && (pdVar8 = pdVar1, iVar10 != 1)) {
      pdVar8 = pdVar9;
    }
    iVar5 = local_4c[iVar4];
    pdVar7 = param_2;
    if ((iVar4 != 0) && (pdVar7 = pdVar1, iVar4 != 1)) {
      pdVar7 = pdVar9;
    }
    pdVar6 = param_2;
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        pdVar6 = param_2 + 4;
      }
      else {
        pdVar6 = pdVar9 + iVar5;
      }
    }
    dVar13 = ((pdVar8[uVar11] - pdVar7[iVar4]) - *pdVar6) + 1.0;
    if (dVar13 < 0.0) {
      dVar13 = sqrt(dVar13);
    }
    else {
      dVar13 = SQRT(dVar13);
    }
    local_68[2] = param_1[2];
    local_68[0] = *param_1;
    local_68[1] = param_1[1];
    local_68[uVar11] = dVar13 * 0.5;
    pdVar8 = param_2;
    if ((iVar5 != 0) && (pdVar8 = pdVar1, iVar5 != 1)) {
      pdVar8 = pdVar9;
    }
    dVar13 = 0.5 / dVar13;
    pdVar7 = param_2;
    if ((iVar4 != 0) && (pdVar7 = pdVar1, iVar4 != 1)) {
      pdVar7 = pdVar9;
    }
    param_1[3] = (pdVar8[iVar4] - pdVar7[iVar5]) * dVar13;
    pdVar8 = param_2;
    if ((uVar11 != 0) && (pdVar8 = pdVar1, iVar10 != 1)) {
      pdVar8 = pdVar9;
    }
    local_68[iVar4] = (pdVar7[uVar11] + pdVar8[iVar4]) * dVar13;
    pdVar8 = param_2;
    if ((iVar5 != 0) && (pdVar8 = pdVar1, iVar5 != 1)) {
      pdVar8 = pdVar9;
    }
    if ((uVar11 != 0) && (param_2 = pdVar1, iVar10 != 1)) {
      param_2 = pdVar9;
    }
    local_68[iVar5] = dVar13 * (pdVar8[uVar11] + param_2[iVar5]);
    *param_1 = local_68[0];
    param_1[1] = local_68[1];
    dVar13 = local_68[2];
  }
  else {
    dVar12 = dVar12 + 1.0;
    if (dVar12 < 0.0) {
      dVar12 = sqrt(dVar12);
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    param_1[3] = dVar12 * 0.5;
    dVar12 = 0.5 / dVar12;
    *param_1 = (param_2[7] - param_2[5]) * dVar12;
    param_1[1] = (param_2[2] - param_2[6]) * dVar12;
    dVar13 = (param_2[3] - param_2[1]) * dVar12;
  }
  param_1[2] = dVar13;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_146bfbafe(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfbec4 FUN_146bfbec4 body=114 status=ok
// SIG undefined FUN_146bfbec4(void)

void FUN_146bfbec4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_30 = *param_2;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_30,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfbf38 FUN_146bfbf38 body=174 status=ok
// SIG undefined FUN_146bfbf38(void)

void FUN_146bfbf38(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar5 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar5) {
      FUN_146bfbfe6(param_1,iVar1);
    }
    if (uVar5 != 0) {
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x58 + *param_1 + 0x50);
      do {
        uVar3 = DAT_14c8464e8;
        uVar2 = DAT_14c8464e0;
        puVar4[-7] = DAT_14c8464f0;
        puVar4[-9] = uVar2;
        puVar4[-8] = uVar3;
        puVar4[-6] = 0;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-3] = 0x3ff0000000000000;
        puVar4[-2] = 0x3ff0000000000000;
        puVar4[-1] = 0x3ff0000000000000;
        *puVar4 = 0x3ff0000000000000;
        puVar4 = puVar4 + 0xb;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146bfc076(param_1);
  return;
}



// FUNCTION 146bfbfe6 FUN_146bfbfe6 body=143 status=ok
// SIG undefined FUN_146bfbfe6(void)

void FUN_146bfbfe6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bfc076 FUN_146bfc076 body=62 status=ok
// SIG undefined FUN_146bfc076(void)

void FUN_146bfc076(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bfc0b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 146bfc0b4 FUN_146bfc0b4 body=104 status=ok
// SIG undefined FUN_146bfc0b4(void)

ulonglong FUN_146bfc0b4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146bfc0ea;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_146bfc0ea:
  return param_2 & 0xffffffff;
}



// FUNCTION 146bfc124 FUN_146bfc124 body=288 status=ok
// SIG undefined FUN_146bfc124(void)

void FUN_146bfc124(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0 [11];
  undefined8 local_158 [11];
  undefined8 local_100 [11];
  undefined8 local_a8 [11];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar3 = (undefined8 *)*param_1;
  puVar2 = local_a8;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar5 = ((int)param_2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar5) {
    iVar5 = *(int *)param_1[2];
  }
  iVar6 = *(int *)param_1[1] * (int)param_2;
  local_1b8 = param_2;
  if (iVar6 < iVar5) {
    do {
      local_4c = iVar6;
      (**(code **)param_1[3])(local_100,((undefined8 *)param_1[3])[1],&local_4c);
      puVar3 = (undefined8 *)param_1[4];
      puVar2 = local_a8;
      puVar4 = local_158;
      for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = local_100;
      puVar4 = local_1b0;
      for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*(code *)*puVar3)(local_a8,puVar3[1],local_1b0);
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  puVar3 = local_a8;
  puVar2 = (undefined8 *)((longlong)(int)local_1b8 * 0x58 + *(longlong *)param_1[5]);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfc246 FUN_146bfc246 body=31 status=ok
// SIG undefined FUN_146bfc246(void)

undefined8 FUN_146bfc246(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_146bfc266(param_2,param_1,*param_3);
  return param_1;
}



// FUNCTION 146bfc266 FUN_146bfc266 body=2182 status=ok
// SIG undefined FUN_146bfc266(void)

double * FUN_146bfc266(double *param_1,double *param_2,int param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  char *pcVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  double *pdVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2d8 [40];
  uint local_2b0;
  undefined1 **local_2a8;
  double *local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined4 local_260;
  code *local_258;
  undefined1 **local_250;
  undefined1 *local_248;
  double *local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c8 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  double local_1a0;
  double local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined ***local_128;
  undefined **local_118;
  undefined1 *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  pcVar3 = *(char **)param_1[7];
  if (pcVar3 == (char *)0x0) {
LAB_146bfc411:
    local_1a8 = *(double *)(*(longlong *)param_1[1] + 0x10 + (longlong)param_3 * 0x18);
    puVar1 = (undefined4 *)(*(longlong *)param_1[1] + (longlong)param_3 * 0x18);
    local_1b8 = *puVar1;
    uStack_1b4 = puVar1[1];
    uStack_1b0 = puVar1[2];
    uStack_1ac = puVar1[3];
    local_1c8[0] = 0;
    local_1c8[1] = 0;
    FUN_144aa2a62(local_1c8,*(undefined4 *)((longlong)param_1[2] + 8),1);
    local_1a0 = param_1[2];
    local_240 = &local_1a0;
    local_198 = *param_1;
    local_188 = (double)CONCAT44(uStack_1b4,local_1b8);
    uStack_180 = (double)CONCAT44(uStack_1ac,uStack_1b0);
    local_178 = local_1a8;
    local_2a8 = &local_138;
    local_138 = (undefined1 *)0x0;
    local_130 = 0;
    local_248 = &LAB_146bfcaee;
    local_2b0 = (uint)*(byte *)(param_1 + 6);
    local_190 = local_1c8;
    FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)((longlong)local_1a0 + 8),1);
    lVar15 = (longlong)*(int *)((undefined8 *)param_1[4] + 1);
    if (lVar15 == 0) {
      dVar20 = -1.79769313486232e+308;
      dVar23 = 1.79769313486232e+308;
    }
    else {
      pdVar13 = *(double **)param_1[4];
      pdVar2 = pdVar13 + lVar15 * 3;
      dVar23 = 1.79769313486232e+308;
      dVar20 = -1.79769313486232e+308;
      do {
        dVar5 = pdVar13[2] * local_1a8 +
                *pdVar13 * (double)CONCAT44(uStack_1b4,local_1b8) +
                pdVar13[1] * (double)CONCAT44(uStack_1ac,uStack_1b0);
        dVar6 = dVar5;
        if (dVar23 <= dVar5) {
          dVar6 = dVar23;
        }
        dVar23 = dVar6;
        if (dVar5 <= dVar20) {
          dVar5 = dVar20;
        }
        dVar20 = dVar5;
        pdVar13 = pdVar13 + 3;
      } while (pdVar13 != pdVar2);
    }
    local_1d8 = 0;
    uStack_1d0 = 0;
    FUN_1429716df(param_1[2],param_1[3],local_1c8,&local_1d8);
    local_1e8 = 0;
    uStack_1e0 = 0;
    if ((int)uStack_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_1d0 & 0xffffffff);
    }
    local_2a0 = param_2;
    if ((uStack_1d0 & 0xffffffff) != 0) {
      FUN_1408652ee(&local_1e8);
    }
    FUN_146bb5db8(&local_1b8,&local_200,&local_218);
    lVar15 = local_1d8;
    lVar17 = (longlong)(int)uStack_1d0;
    if (lVar17 != 0) {
      lVar18 = 0;
      do {
        local_138 = (undefined1 *)CONCAT44(local_138._4_4_,*(undefined4 *)(lVar15 + lVar18));
        (**(code **)*param_1)(&local_1a0,((undefined8 *)*param_1)[1],&local_138);
        uVar9 = uStack_1e0;
        dVar8 = local_210 * local_198;
        dVar22 = local_218 * local_1a0;
        dVar6 = local_198 * local_1f8;
        dVar5 = local_1a0 * local_200;
        dVar21 = local_208 * (double)local_190;
        dVar7 = (double)local_190 * local_1f0;
        lVar19 = (longlong)(int)uStack_1e0;
        uVar11 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar11);
        if (uStack_1e0._4_4_ < uVar11) {
          FUN_14489624a(&local_1e8,uVar9 & 0xffffffff);
        }
        *(double *)(local_1e8 + lVar19 * 0x10) = dVar7 + dVar5 + dVar6;
        *(double *)(local_1e8 + 8 + lVar19 * 0x10) = dVar21 + dVar22 + dVar8;
        lVar18 = lVar18 + 4;
      } while (lVar17 * 4 != lVar18);
    }
    param_2 = local_2a0;
    if (*(int *)param_1[5] == 0) {
      local_110 = &LAB_146bfcc4e;
      local_138 = &LAB_146bfcc54;
      local_118 = &PTR_LAB_149f36360;
    }
    else {
      local_138 = &LAB_146bfccac;
      local_118 = &PTR_LAB_149f36380;
      local_110 = (undefined1 *)(dVar20 - dVar23);
    }
    local_250 = &local_138;
    local_128 = (undefined ***)0x0;
    local_258 = FUN_146bfbec4;
    local_268 = local_1e8;
    local_260 = (int)uStack_1e0;
    FUN_146bb414b(&local_248);
    local_288 = (dVar20 - dVar23) * 0.5;
    local_2a0 = (double *)local_228;
    dVar5 = (double)(-(ulonglong)(0.0 <= local_228 + local_228) & (ulonglong)(local_228 + local_228)
                    );
    local_280 = local_220;
    dVar6 = (double)(-(ulonglong)(0.0 <= local_220 + local_220) & (ulonglong)(local_220 + local_220)
                    );
    if (*(int *)param_1[5] == 0) {
      local_278 = (double)(-(ulonglong)(0.0 <= local_288 + local_288) &
                          (ulonglong)(local_288 + local_288)) * dVar6 * dVar5;
    }
    else {
      dVar21 = (double)(-(ulonglong)(0.0 <= local_288 + local_288) &
                       (ulonglong)(local_288 + local_288));
      local_278 = dVar5 * (dVar21 + dVar6) + dVar21 * dVar6;
      local_278 = local_278 + local_278;
    }
    uStack_270 = 0;
    dVar20 = (dVar23 + dVar20) * 0.5;
    local_290 = local_1a8;
    dVar22 = dVar20 * local_1a8;
    local_190 = (longlong *)CONCAT44(uStack_1b4,local_1b8);
    local_298 = (double)CONCAT44(uStack_1ac,uStack_1b0);
    dVar24 = dVar20 * local_298;
    dVar20 = dVar20 * (double)local_190;
    dVar5 = (double)local_248 * local_1f0;
    dVar7 = (double)local_248 * local_1f8;
    dVar21 = (double)local_248 * local_200;
    dVar23 = (double)local_240 * local_208;
    dVar6 = (double)local_240 * local_210;
    dVar8 = (double)local_240 * local_218;
    local_170 = local_208 * local_230 + local_1f0 * local_238;
    local_188 = local_210 * local_230 + local_1f8 * local_238;
    local_1a0 = local_218 * local_230 + local_200 * local_238;
    local_168 = local_208 * local_238 - local_1f0 * local_230;
    uStack_180 = local_210 * local_238 - local_1f8 * local_230;
    local_198 = local_218 * local_238 - local_200 * local_230;
    local_160 = local_1a8;
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_148 = 0;
    uStack_140 = 0x3ff0000000000000;
    local_178 = local_298;
    FUN_146bfbbda(&local_158);
    *param_2 = local_278;
    param_2[1] = dVar8 + dVar21 + dVar20;
    param_2[2] = dVar6 + dVar7 + dVar24;
    param_2[3] = dVar23 + dVar5 + dVar22;
    param_2[4] = local_158;
    param_2[5] = dStack_150;
    *(undefined4 *)(param_2 + 6) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x34) = local_148._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_140._4_4_;
    param_2[8] = (double)local_2a0;
    param_2[9] = local_280;
    param_2[10] = local_288;
    if (local_138 != (undefined1 *)0x0) {
      pppuVar16 = local_128;
      if (local_128 == (undefined ***)0x0) {
        pppuVar16 = &local_118;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*pcVar3 == '\0') {
      pcVar4 = *(code **)(pcVar3 + 0x70);
      plVar14 = (longlong *)(pcVar3 + 0x90);
      if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
        plVar14 = *(longlong **)(pcVar3 + 0x80);
      }
      uVar12 = (**(code **)(*plVar14 + 8))();
      cVar10 = (*pcVar4)(uVar12);
      *pcVar3 = cVar10;
      if (cVar10 == '\0') goto LAB_146bfc411;
    }
    *param_2 = 1.79769313486232e+308;
    dVar20 = DAT_14c8464e8;
    param_2[1] = DAT_14c8464e0;
    param_2[2] = dVar20;
    param_2[3] = DAT_14c8464f0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 1.0;
    param_2[8] = 1.0;
    param_2[9] = 1.0;
    param_2[10] = 1.0;
  }
  if ((local_f0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfcaf6 FUN_146bfcaf6 body=342 status=ok
// SIG undefined FUN_146bfcaf6(void)

void FUN_146bfcaf6(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)*param_1;
  lVar4 = (longlong)param_2;
  uVar1 = *(undefined4 *)(lVar3 + lVar4 * 0xc);
  uVar2 = *(undefined4 *)(lVar3 + 4 + lVar4 * 0xc);
  local_58._0_4_ = *(undefined4 *)(lVar3 + 8 + lVar4 * 0xc);
  (**(code **)param_1[1])(&local_d0,((undefined8 *)param_1[1])[1],&local_58);
  local_58._0_4_ = uVar2;
  (**(code **)param_1[1])(&local_e8,((undefined8 *)param_1[1])[1],&local_58);
  local_58 = CONCAT44(local_58._4_4_,uVar1);
  (**(code **)param_1[1])(&local_100,((undefined8 *)param_1[1])[1],&local_58);
  local_58 = local_100;
  local_50 = local_f8;
  uStack_48 = uStack_f0;
  local_78 = local_e8;
  local_70 = local_e0;
  uStack_68 = uStack_d8;
  local_98 = local_d0;
  uStack_90 = uStack_c8;
  local_88 = local_c0;
  local_b8 = param_1[3];
  local_b0 = param_1[4];
  local_a8 = param_1[5];
  dVar5 = (double)FUN_146bb309b(&local_58);
  *(bool *)(*(longlong *)param_1[2] + lVar4) = 0.0 < dVar5;
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfcc82 FUN_146bfcc82 body=12 status=ok
// SIG undefined FUN_146bfcc82(void)

void FUN_146bfcc82(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146bfcc8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 146bfcc8e FUN_146bfcc8e body=29 status=ok
// SIG undefined FUN_146bfcc8e(void)

undefined8 FUN_146bfcc8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bfccf4 FUN_146bfccf4 body=29 status=ok
// SIG undefined FUN_146bfccf4(void)

undefined8 FUN_146bfccf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bfcd12 FUN_146bfcd12 body=50 status=ok
// SIG undefined FUN_146bfcd12(void)

void FUN_146bfcd12(double *param_1,undefined8 param_2,double *param_3,double *param_4)

{
  longlong lVar1;
  double *pdVar2;
  double dVar3;
  
  dVar3 = *param_3;
  if (*param_4 <= dVar3) {
    dVar3 = *param_4;
    param_3 = param_4;
  }
  lVar1 = 10;
  pdVar2 = param_1;
  while( true ) {
    pdVar2 = pdVar2 + 1;
    param_3 = param_3 + 1;
    if (lVar1 == 0) break;
    lVar1 = lVar1 + -1;
    *pdVar2 = *param_3;
  }
  *param_1 = dVar3;
  return;
}



// FUNCTION 146bfcd44 FUN_146bfcd44 body=378 status=ok
// SIG undefined FUN_146bfcd44(void)

void FUN_146bfcd44(longlong param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_3 == 2) {
    dVar5 = *(double *)(param_1 + 0x18);
    dVar2 = *(double *)(param_1 + 0x20);
    dVar3 = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x28);
    dVar1 = *(double *)(param_1 + 0x30);
    *param_2 = dVar5 * dVar3 + dVar1 * (dVar2 + dVar2);
    param_2[1] = dVar3 * dVar2 - (dVar5 + dVar5) * dVar1;
    param_2[2] = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar5 * (dVar5 + dVar5));
  }
  else {
    if (param_3 == 1) {
      dVar5 = *(double *)(param_1 + 0x18);
      dVar2 = *(double *)(param_1 + 0x20);
      dVar1 = *(double *)(param_1 + 0x28);
      dVar4 = dVar1 + dVar1;
      dVar3 = (dVar2 + dVar2) * dVar5 - *(double *)(param_1 + 0x30) * dVar4;
      dVar2 = dVar2 * dVar4 + (dVar5 + dVar5) * *(double *)(param_1 + 0x30);
      dVar5 = 1.0 - (dVar4 * dVar1 + dVar5 * (dVar5 + dVar5));
    }
    else {
      if (param_3 != 0) {
        param_2[2] = DAT_14c8464f0;
        dVar5 = DAT_14c8464e8;
        *param_2 = DAT_14c8464e0;
        param_2[1] = dVar5;
        return;
      }
      dVar1 = *(double *)(param_1 + 0x20);
      dVar4 = dVar1 + dVar1;
      dVar3 = *(double *)(param_1 + 0x28);
      dVar6 = dVar3 + dVar3;
      dVar5 = dVar4 * *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x30) * dVar6;
      dVar2 = *(double *)(param_1 + 0x18) * dVar6 - dVar4 * *(double *)(param_1 + 0x30);
      dVar3 = 1.0 - (dVar6 * dVar3 + dVar1 * dVar4);
    }
    *param_2 = dVar3;
    param_2[1] = dVar5;
    param_2[2] = dVar2;
  }
  return;
}



// FUNCTION 146bfcf0c FUN_146bfcf0c body=29 status=ok
// SIG undefined FUN_146bfcf0c(void)

undefined8 FUN_146bfcf0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146bfcf2a FUN_146bfcf2a body=132 status=ok
// SIG undefined FUN_146bfcf2a(void)

void FUN_146bfcf2a(longlong param_1,int param_2)

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



// FUNCTION 146bfcfaf FUN_146bfcfaf body=31 status=ok
// SIG undefined FUN_146bfcfaf(void)

void FUN_146bfcfaf(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 146bfcfce FUN_146bfcfce body=147 status=ok
// SIG undefined FUN_146bfcfce(void)

void FUN_146bfcfce(longlong param_1,int param_2)

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



// FUNCTION 146bfd062 FUN_146bfd062 body=101 status=ok
// SIG undefined FUN_146bfd062(void)

void FUN_146bfd062(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x48 + *param_1);
  FUN_146bfd107(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bfd0c8 FUN_146bfd0c8 body=63 status=ok
// SIG undefined FUN_146bfd0c8(void)

void FUN_146bfd0c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bfd17a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146bfd107 FUN_146bfd107 body=38 status=ok
// SIG undefined FUN_146bfd107(void)

void FUN_146bfd107(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146bfd12e(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 146bfd12e FUN_146bfd12e body=75 status=ok
// SIG undefined FUN_146bfd12e(void)

void FUN_146bfd12e(longlong *param_1)

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



// FUNCTION 146bfd17a FUN_146bfd17a body=117 status=ok
// SIG undefined FUN_146bfd17a(void)

ulonglong FUN_146bfd17a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x48) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
      uVar1 = uVar1 / 0x48;
    }
  }
  return uVar1;
}



// FUNCTION 146bfd1f0 FUN_146bfd1f0 body=253 status=ok
// SIG undefined FUN_146bfd1f0(void)

void FUN_146bfd1f0(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  do {
    if ((((*param_1 == param_1[5]) && ((int)param_1[1] == (int)param_1[6])) &&
        ((int)param_1[3] == (int)param_1[8])) &&
       (*(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_1 + 0x44)))
    goto LAB_146bfd2cb;
    if (*(int *)((longlong)param_1 + 0x5c) == 1) {
      uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x54);
      if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
        uVar4 = 2;
        goto LAB_146bfd2c5;
      }
    }
    else if (*(int *)((longlong)param_1 + 0x5c) == 0) {
      local_34 = (undefined4)param_1[4];
      pcVar1 = (code *)param_1[0xc];
      plVar5 = (longlong *)param_1[0xe];
      if ((longlong *)param_1[0xe] == (longlong *)0x0) {
        plVar5 = param_1 + 0x10;
      }
      uVar2 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(&local_40,uVar2,&local_34);
      param_1[10] = local_40;
      if (-1 < (int)local_40) {
        uVar4 = 1;
        uVar3 = local_40;
LAB_146bfd2c5:
        *(int *)(param_1 + 0xb) = (int)uVar3;
        *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
LAB_146bfd2cb:
        if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    if ((int)param_1[2] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
      param_1[3] = -1;
    }
    else {
      FUN_146be9922(param_1);
    }
  } while( true );
}



// FUNCTION 146bfd2ee FUN_146bfd2ee body=91 status=ok
// SIG undefined FUN_146bfd2ee(void)

void FUN_146bfd2ee(undefined8 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfd34a FUN_146bfd34a body=93 status=ok
// SIG undefined FUN_146bfd34a(void)

void FUN_146bfd34a(int *param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = *param_2;
      return;
    }
    FUN_146bfd442(param_1,param_3 & 0xffffffff);
  }
  FUN_146bfd3a8(param_1,param_2);
  return;
}



// FUNCTION 146bfd3a8 FUN_146bfd3a8 body=154 status=ok
// SIG undefined FUN_146bfd3a8(void)

void FUN_146bfd3a8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x800);
      memset(_Dst,0,0x800);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_14582f07c(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3 * 4) =
       *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 146bfd442 FUN_146bfd442 body=218 status=ok
// SIG undefined FUN_146bfd442(void)

void FUN_146bfd442(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
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
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_146bfd51c(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x800);
        memset(_Dst,0,0x800);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_14582f07c(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 146bfd51c FUN_146bfd51c body=106 status=ok
// SIG undefined FUN_146bfd51c(void)

void FUN_146bfd51c(longlong *param_1,int param_2,char param_3)

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
    FUN_146bfd586(param_1);
    return;
  }
  return;
}



// FUNCTION 146bfd586 FUN_146bfd586 body=63 status=ok
// SIG undefined FUN_146bfd586(void)

void FUN_146bfd586(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bfd5c6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146bfd5c6 FUN_146bfd5c6 body=97 status=ok
// SIG undefined FUN_146bfd5c6(void)

ulonglong FUN_146bfd5c6(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146bfd628 FUN_146bfd628 body=202 status=ok
// SIG undefined FUN_146bfd628(void)

longlong * FUN_146bfd628(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar5 = (ulonglong)uVar1;
    FUN_146becdc4(param_1,uVar5);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_146bece56(param_1,uVar1);
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        lVar4 = FUN_14001cc68(0x8000,0x10);
        lVar3 = *(longlong *)(*param_2 + uVar6 * 8);
        lVar7 = 0;
        do {
          FUN_146becd5c(lVar4 + lVar7,lVar3 + lVar7);
          lVar7 = lVar7 + 0x40;
        } while (lVar7 != 0x8000);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_146bea1b0(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar4;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146bfd6f4 FUN_146bfd6f4 body=177 status=ok
// SIG undefined FUN_146bfd6f4(void)

undefined4 * FUN_146bfd6f4(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  
  FUN_146bfda32(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x8000);
  memset(_Dst,0,0x8000);
  lVar2 = 0x3c;
  do {
    *(undefined8 *)((longlong)_Dst + lVar2 + -0xc) = 0;
    *(undefined8 *)((longlong)_Dst + lVar2 + -4) = 0xc00000000;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x803c);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_146bea1b0(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146bfd7a6 FUN_146bfd7a6 body=442 status=ok
// SIG undefined FUN_146bfd7a6(void)

ulonglong FUN_146bfd7a6(longlong *param_1,uint param_2,int *param_3)

{
  uint *_Dst;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_RBP;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = param_2 >> 0x10;
  lVar10 = *param_1;
  lVar4 = *(longlong *)(lVar10 + 0x30);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = lVar10;
  }
  iVar11 = *(int *)(lVar10 + 0x38);
  lVar12 = (longlong)iVar11;
  uVar2 = (ushort)(param_2 >> 0x10);
  if (lVar12 != 0) {
    iVar6 = 1;
    lVar9 = 0;
    lVar8 = 0;
    do {
      if (*(short *)(lVar5 + lVar9) == (short)param_2) {
        if (iVar6 != 0) {
          _Dst = (uint *)(lVar5 + (lVar8 >> 0x20) * 4);
          if (*(ushort *)(param_3 + 2) <= uVar2) {
            uVar1 = *(uint *)(lVar5 + (lVar8 >> 0x20) * 4);
            uVar7 = uVar1 >> 0x10;
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            bVar13 = uVar7 < uVar3;
            if (uVar7 == uVar3) goto LAB_146bfd826;
            *_Dst = uVar1 & 0xffff | param_2 & 0xffff0000;
            goto LAB_146bfd8cd;
          }
          if (iVar11 - iVar6 != 0) {
            memmove(_Dst,_Dst + 1,(longlong)(iVar11 - iVar6) << 2);
            iVar11 = *(int *)(lVar10 + 0x38);
          }
          *(int *)(lVar10 + 0x38) = iVar11 + -1;
          FUN_146beb7e4(lVar10);
          if (*param_3 == 2) {
            FUN_146bebfde(param_1,2);
          }
          goto LAB_146bfd824;
        }
        break;
      }
      lVar8 = lVar8 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 4;
    } while (lVar12 * 4 - lVar9 != 0);
  }
  if (uVar2 < *(ushort *)(param_3 + 2)) {
LAB_146bfd824:
    unaff_RBP = 0;
  }
  else {
    if (iVar11 == param_3[1]) {
      if (uVar3 < *(ushort *)(lVar5 + -2 + lVar12 * 4)) goto LAB_146bfd824;
      *(uint *)(lVar5 + -4 + lVar12 * 4) = param_2;
    }
    else {
      *(uint *)(lVar10 + 0x38) = iVar11 + 1U;
      if (*(uint *)(lVar10 + 0x3c) < iVar11 + 1U) {
        FUN_146beb76e(lVar10,iVar11);
        lVar4 = *(longlong *)(lVar10 + 0x30);
      }
      if (lVar4 != 0) {
        lVar10 = lVar4;
      }
      *(uint *)(lVar10 + lVar12 * 4) = param_2;
    }
    bVar13 = true;
LAB_146bfd8cd:
    lVar10 = *param_1;
    local_48 = &LAB_146bebfd2;
    lVar4 = *(longlong *)(lVar10 + 0x30);
    if (*(longlong *)(lVar10 + 0x30) == 0) {
      lVar4 = lVar10;
    }
    FUN_146bec52c(lVar4,*(undefined4 *)(lVar10 + 0x38));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    if ((*param_3 == 2) || ((bool)(bVar13 & *param_3 == 1))) {
      FUN_146bfd962(param_1,param_3);
    }
  }
LAB_146bfd826:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfd962 FUN_146bfd962 body=65 status=ok
// SIG undefined FUN_146bfd962(void)

void FUN_146bfd962(undefined8 param_1,int *param_2)

{
  char cVar1;
  
  FUN_146bebfde(param_1,*param_2);
  if (*param_2 == 2) {
    cVar1 = FUN_146bfd9a4(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_146bebfde(param_1,2);
      return;
    }
  }
  return;
}



// FUNCTION 146bfd9a4 FUN_146bfd9a4 body=142 status=ok
// SIG undefined FUN_146bfd9a4(void)

ulonglong FUN_146bfd9a4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar8;
  undefined7 uVar7;
  
  uVar3 = *(uint *)(*param_1 + 0x38);
  iVar2 = *(int *)(param_2 + 4);
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,iVar2 < (int)uVar3);
  if (iVar2 < (int)uVar3) {
    FUN_146beb71e(*param_1,iVar2,0);
    uVar3 = *(uint *)(param_2 + 4);
  }
  if (0 < (int)uVar3) {
    lVar5 = *param_1;
    lVar4 = *(longlong *)(lVar5 + 0x30);
    if (*(longlong *)(lVar5 + 0x30) == 0) {
      lVar4 = lVar5;
    }
    if (*(ushort *)(lVar4 + -2 + (ulonglong)uVar3 * 4) < *(ushort *)(param_2 + 8)) {
      uVar6 = CONCAT71(uVar7,1);
      uVar8 = (ulonglong)uVar3;
      do {
        FUN_146beb71e(lVar5,(int)uVar8 + -1,0);
        if (uVar8 < 2) break;
        lVar5 = *param_1;
        lVar4 = *(longlong *)(lVar5 + 0x30);
        if (*(longlong *)(lVar5 + 0x30) == 0) {
          lVar4 = lVar5;
        }
        lVar1 = uVar8 * 4;
        uVar8 = uVar8 - 1;
      } while (*(ushort *)(lVar4 + -6 + lVar1) < *(ushort *)(param_2 + 8));
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146bfda32 FUN_146bfda32 body=79 status=ok
// SIG undefined FUN_146bfda32(void)

longlong * FUN_146bfda32(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_146becdc4(param_1,0);
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



// FUNCTION 146bfda82 FUN_146bfda82 body=112 status=ok
// SIG undefined FUN_146bfda82(void)

void FUN_146bfda82(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x220,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x220)) {
      uVar2 = uVar1 / 0x220 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x220,8);
  }
  return;
}



// FUNCTION 146bfdaf2 FUN_146bfdaf2 body=54 status=ok
// SIG undefined FUN_146bfdaf2(void)

void FUN_146bfdaf2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411b354a(param_1,0,0,0,0);
    param_1 = param_1 + 0x220;
  }
  return;
}



// FUNCTION 146bfdb28 FUN_146bfdb28 body=146 status=ok
// SIG undefined FUN_146bfdb28(void)

void FUN_146bfdb28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x220,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x220)) {
      uVar5 = uVar4 / 0x220 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x220,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bfdbbc FUN_146bfdbbc body=101 status=ok
// SIG undefined FUN_146bfdbbc(void)

void FUN_146bfdbbc(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x220 + *param_1);
  FUN_1461a8f9d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x220 + (longlong)_Dst),(longlong)iVar2 * 0x220);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146bfdc22 FUN_146bfdc22 body=63 status=ok
// SIG undefined FUN_146bfdc22(void)

void FUN_146bfdc22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146bfdc62(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x220,8);
  }
  return;
}



// FUNCTION 146bfdc62 FUN_146bfdc62 body=115 status=ok
// SIG undefined FUN_146bfdc62(void)

ulonglong FUN_146bfdc62(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x220) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x220,8);
      uVar1 = uVar1 / 0x220;
    }
  }
  return uVar1;
}



// FUNCTION 146bfdcd5 FUN_146bfdcd5 body=41 status=ok
// SIG undefined FUN_146bfdcd5(void)

void FUN_146bfdcd5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146bfdcfe(param_1);
    param_1 = param_1 + 0x2c0;
  }
  return;
}



// FUNCTION 146bfdcfe FUN_146bfdcfe body=127 status=ok
// SIG undefined FUN_146bfdcfe(void)

void FUN_146bfdcfe(longlong param_1)

{
  FUN_146bfddd1(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  FUN_146bfddd1(*(undefined8 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a8));
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  FUN_146bfdd7e(param_1 + 0x1f8);
  FUN_146bfdd7e(param_1 + 0x150);
  FUN_146bfdd7e(param_1 + 0xa8);
  FUN_146bfdd7e(param_1);
  return;
}



// FUNCTION 146bfdd7e FUN_146bfdd7e body=83 status=ok
// SIG undefined FUN_146bfdd7e(void)

void FUN_146bfdd7e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1);
  return;
}



// FUNCTION 146bfddd1 FUN_146bfddd1 body=41 status=ok
// SIG undefined FUN_146bfddd1(void)

void FUN_146bfddd1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146bfdd7e(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 146bfddfa FUN_146bfddfa body=102 status=ok
// SIG undefined FUN_146bfddfa(void)

undefined8 FUN_146bfddfa(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x2c0,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x2c0)) {
    uVar4 = uVar2 / 0x2c0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x2c0,8);
  }
  return uVar3;
}



// FUNCTION 146bfde60 FUN_146bfde60 body=419 status=ok
// SIG undefined FUN_146bfde60(void)

void FUN_146bfde60(undefined8 *param_1)

{
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
  *(undefined2 *)(param_1 + 0x14) = 0x101;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0x101;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f1) = 1;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((longlong)param_1 + 0x299) = 1;
  *(undefined1 *)(param_1 + 0x53) = 1;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  return;
}



// FUNCTION 146bfe004 FUN_146bfe004 body=146 status=ok
// SIG undefined FUN_146bfe004(void)

void FUN_146bfe004(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2c0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2c0)) {
      uVar5 = uVar4 / 0x2c0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2c0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146bfe098 FUN_146bfe098 body=153 status=ok
// SIG undefined FUN_146bfe098(void)

undefined8 * FUN_146bfe098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f3bc00;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_149f3aac0;
  param_1[9] = &LAB_146c474f0;
  param_1[4] = &LAB_146beded0;
  param_1[0xc] = 0x3e45798ee2308c3a;
  FUN_141040b84(param_1 + 0xd);
  FUN_141040be6(param_1 + 0x10);
  FUN_141040be6(param_1 + 0x13);
  FUN_141040b84(param_1 + 0x16);
  param_1[0x19] = 0xffffffffffffffff;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 146bfe132 FUN_146bfe132 body=2179 status=ok
// SIG undefined FUN_146bfe132(void)

void FUN_146bfe132(longlong *param_1,longlong param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  longlong local_158 [3];
  uint local_13c;
  int *local_138;
  uint local_130;
  uint local_12c;
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  undefined *local_e8;
  uint local_e0;
  int local_dc;
  code *local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined *local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  longlong local_78 [4];
  int *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(bool *)(param_1 + 6) = *(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) == 0;
  *(bool *)(param_1 + 9) = *(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) == 0;
  iVar20 = *(int *)(param_2 + 0x50);
  local_180 = param_2;
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar20);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar20) {
    FUN_1447a8aa0(param_1,iVar20);
  }
  if (((param_3[1] == '\x01') && ((char)param_1[6] == '\0')) &&
     (*(int *)((longlong)param_1 + 0x2c) < iVar20)) {
    FUN_14481578e(param_1 + 4,iVar20);
  }
  lVar12 = local_180;
  iVar20 = *(int *)(local_180 + 0x170);
  if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar20);
  }
  local_188 = param_1 + 2;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar20) {
    FUN_146be7820(local_188,iVar20);
  }
  if (((param_3[2] == '\x01') && ((char)param_1[9] == '\0')) &&
     (*(int *)((longlong)param_1 + 0x44) < iVar20)) {
    FUN_14481578e(param_1 + 7,iVar20);
  }
  local_158[0] = 0;
  local_158[1] = 0;
  if ((char)param_1[6] == '\x01') {
    local_d8 = (code *)0x0;
    local_c8 = &PTR_DAT_149f363e0;
    local_c0 = lVar12;
    local_e8 = &DAT_146be727e;
    FUN_146be708e(lVar12 + 0x20,&local_98);
    FUN_146be6fec(&local_98,&local_e8);
    local_130 = *local_58 * 0x200 + local_58[1];
    local_118 = (longlong *)0x0;
    local_128[0] = 0;
    local_138 = local_58;
    local_12c = local_130;
    FUN_146be715a(local_128,&local_98);
    if (local_e0 != local_130) {
      do {
        pcVar5 = local_d8;
        ppuVar9 = local_c8;
        if (local_c8 == (undefined **)0x0) {
          ppuVar9 = local_b8;
        }
        local_13c = local_e0;
        uVar6 = (**(code **)(*ppuVar9 + 8))();
        (*pcVar5)(&local_170,uVar6,&local_13c);
        iVar20 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar20 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
          FUN_1403e3958(param_1,iVar20);
        }
        lVar12 = *param_1;
        *(undefined8 *)(lVar12 + 0x10 + (longlong)iVar20 * 0x18) = local_160;
        puVar1 = (undefined4 *)(lVar12 + (longlong)iVar20 * 0x18);
        *puVar1 = local_170;
        puVar1[1] = uStack_16c;
        puVar1[2] = uStack_168;
        puVar1[3] = uStack_164;
        do {
          local_e0 = local_e0 + 1;
          if (local_dc <= (int)local_e0) break;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 8) +
                                               (ulonglong)(local_e0 >> 9) * 8) +
                                             (ulonglong)(local_e0 & 0x1ff) * 2) - 1U));
      } while (local_130 != local_e0);
    }
    if (local_128[0] != 0) {
      plVar8 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar8 = local_108;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_d8 != (code *)0x0) {
      ppuVar9 = local_c8;
      if (local_c8 == (undefined **)0x0) {
        ppuVar9 = local_b8;
      }
      (**(code **)(*ppuVar9 + 0x10))();
    }
    lVar12 = local_180;
    if (CONCAT44(uStack_94,local_98) != 0) {
      plVar8 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar8 = local_78;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    FUN_144a1a59e(local_158,*(int *)(lVar12 + 0x20) * 0x200 + *(int *)(lVar12 + 0x24),1);
    uVar19 = 0;
    uVar13 = *(int *)(lVar12 + 0x20) * 0x200 + *(int *)(lVar12 + 0x24);
    if ((uVar13 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x28) - 1U))) {
      uVar19 = 1;
      uVar17 = 1;
      if (1 < (int)uVar13) {
        uVar19 = (ulonglong)uVar13;
      }
      do {
        uVar18 = uVar17;
        if ((uint)uVar19 == uVar18) goto LAB_146bfe232;
        uVar17 = uVar18 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x28))[uVar18 >> 9] +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar19 = (ulonglong)uVar18;
    }
LAB_146bfe232:
    if ((uint)uVar19 != uVar13) {
      do {
        iVar20 = (int)param_1[1];
        uVar17 = (uint)uVar19;
        *(int *)(local_158[0] + (longlong)(int)uVar17 * 4) = iVar20;
        lVar16 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar19 >> 9) * 8);
        local_88 = *(longlong **)(lVar16 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
        puVar1 = (undefined4 *)(lVar16 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
        local_98 = *puVar1;
        uStack_94 = puVar1[1];
        uStack_90 = puVar1[2];
        uStack_8c = puVar1[3];
        *(uint *)(param_1 + 1) = iVar20 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
          FUN_1403e3958(param_1,iVar20);
        }
        lVar16 = *param_1;
        *(longlong **)(lVar16 + 0x10 + (longlong)iVar20 * 0x18) = local_88;
        puVar1 = (undefined4 *)(lVar16 + (longlong)iVar20 * 0x18);
        *puVar1 = local_98;
        puVar1[1] = uStack_94;
        puVar1[2] = uStack_90;
        puVar1[3] = uStack_8c;
        if (param_3[1] == '\x01') {
          iVar20 = (int)param_1[5];
          *(uint *)(param_1 + 5) = iVar20 + 1U;
          if (*(uint *)((longlong)param_1 + 0x2c) < iVar20 + 1U) {
            FUN_1446f48e2(param_1 + 4,iVar20);
          }
          *(uint *)(param_1[4] + (longlong)iVar20 * 4) = uVar17;
        }
        uVar18 = uVar17 + 1;
        if ((int)(uVar17 + 1) < (int)uVar13) {
          uVar18 = uVar13;
        }
        do {
          if (uVar18 - 1 == (int)uVar19) {
            uVar19 = (ulonglong)uVar18;
            break;
          }
          uVar17 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar17;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar12 + 0x28) +
                                               (ulonglong)(uVar17 >> 9) * 8) +
                                             (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar19 != uVar13);
    }
  }
  if (((char)param_1[9] == '\x01') && ((char)param_1[6] == '\x01')) {
    local_d8 = (code *)0x0;
    local_c8 = &PTR_DAT_149f3b6a0;
    local_e8 = &DAT_146c408a8;
    local_c0 = lVar12;
    FUN_146c406b8(lVar12 + 0x140,&local_98);
    FUN_146bfea58(&local_98,&local_e8);
    local_130 = *local_58 * 0x200 + local_58[1];
    local_118 = (longlong *)0x0;
    local_128[0] = 0;
    local_138 = local_58;
    local_12c = local_130;
    FUN_146c40784(local_128,&local_98);
    if (local_e0 != local_130) {
      do {
        pcVar5 = local_d8;
        ppuVar9 = local_c8;
        if (local_c8 == (undefined **)0x0) {
          ppuVar9 = local_b8;
        }
        local_13c = local_e0;
        uVar6 = (**(code **)(*ppuVar9 + 8))();
        (*pcVar5)(&local_170,uVar6,&local_13c);
        iVar20 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar20 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar20 + 1U) {
          FUN_146bd78c8(local_188,iVar20);
        }
        lVar12 = *local_188;
        *(undefined4 *)(lVar12 + 8 + (longlong)iVar20 * 0xc) = uStack_168;
        *(ulonglong *)(lVar12 + (longlong)iVar20 * 0xc) = CONCAT44(uStack_16c,local_170);
        do {
          local_e0 = local_e0 + 1;
          if (local_dc <= (int)local_e0) break;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 8) +
                                               (ulonglong)(local_e0 >> 9) * 8) +
                                             (ulonglong)(local_e0 & 0x1ff) * 2) - 1U));
      } while (local_130 != local_e0);
    }
    if (local_128[0] != 0) {
      plVar8 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar8 = local_108;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_d8 != (code *)0x0) {
      ppuVar9 = local_c8;
      if (local_c8 == (undefined **)0x0) {
        ppuVar9 = local_b8;
      }
      (**(code **)(*ppuVar9 + 0x10))();
    }
    if (CONCAT44(uStack_94,local_98) != 0) {
      plVar8 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar8 = local_78;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    uVar17 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
    uVar13 = 0;
    if ((uVar17 != 0) &&
       (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
      uVar18 = 1;
      uVar7 = 1;
      if (1 < (int)uVar17) {
        uVar18 = uVar17;
      }
      do {
        uVar13 = uVar18;
        if (uVar18 == uVar7) break;
        uVar10 = uVar7 >> 9;
        uVar15 = uVar7 & 0x1ff;
        uVar13 = uVar7;
        uVar7 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar10] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
    if (uVar13 != uVar17) {
      plVar8 = param_1 + 7;
      local_178 = plVar8;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)(uVar13 >> 9) * 8);
        uVar19 = (ulonglong)(uVar13 & 0x1ff);
        iVar20 = *(int *)(lVar12 + uVar19 * 0xc);
        iVar14 = *(int *)(lVar12 + 4 + uVar19 * 0xc);
        iVar11 = *(int *)(lVar12 + 8 + uVar19 * 0xc);
        if ((char)param_1[6] == '\0') {
          iVar20 = *(int *)(local_158[0] + (longlong)iVar20 * 4);
          iVar14 = *(int *)(local_158[0] + (longlong)iVar14 * 4);
          iVar11 = *(int *)(local_158[0] + (longlong)iVar11 * 4);
        }
        iVar3 = (int)param_1[3];
        lVar16 = (longlong)iVar3;
        *(uint *)(param_1 + 3) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
          FUN_146bd78c8(local_188,iVar3);
          plVar8 = local_178;
        }
        lVar12 = local_180;
        lVar4 = *local_188;
        *(int *)(lVar4 + lVar16 * 0xc) = iVar20;
        *(int *)(lVar4 + 4 + lVar16 * 0xc) = iVar14;
        *(int *)(lVar4 + 8 + lVar16 * 0xc) = iVar11;
        if (param_3[2] == '\x01') {
          iVar20 = (int)param_1[8];
          *(uint *)(param_1 + 8) = iVar20 + 1U;
          if (*(uint *)((longlong)param_1 + 0x44) < iVar20 + 1U) {
            FUN_1446f48e2(plVar8,iVar20);
            plVar8 = local_178;
          }
          *(uint *)(*plVar8 + (longlong)iVar20 * 4) = uVar13;
        }
        uVar18 = uVar13 + 1;
        if ((int)(uVar13 + 1) < (int)uVar17) {
          uVar18 = uVar17;
        }
        do {
          uVar7 = uVar18;
          if (uVar18 - 1 == uVar13) break;
          uVar13 = uVar13 + 1;
          uVar7 = uVar13;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar12 + 0x148) +
                                               (ulonglong)(uVar13 >> 9) * 8) +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
        uVar13 = uVar7;
      } while (uVar13 != uVar17);
    }
  }
  cVar2 = *param_3;
  param_1[0xb] = (longlong)param_1;
  param_1[0xc] = 0;
  if (cVar2 == '\x01') {
    FUN_146c4c43a(param_1 + 10,0);
    param_1[0xc] = 0;
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146bfe9b8 FUN_146bfe9b8 body=54 status=ok
// SIG undefined FUN_146bfe9b8(void)

undefined8 * FUN_146bfe9b8(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_146bfe098(param_1 + 10);
  FUN_146bfe9ee(param_1,0);
  return param_1;
}



// FUNCTION 146bfe9ee FUN_146bfe9ee body=105 status=ok
// SIG undefined FUN_146bfe9ee(void)

void FUN_146bfe9ee(longlong param_1,undefined4 param_2)

{
  FUN_14051b394(param_1,0,param_2);
  FUN_144a1a59e(param_1 + 0x20,0,param_2);
  FUN_146bd783c(param_1 + 0x10,0,param_2);
  FUN_144a1a59e(param_1 + 0x38,0,param_2);
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(longlong *)(param_1 + 0x58) = param_1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_146c4c43a(param_1 + 0x50,0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 146bfea58 FUN_146bfea58 body=162 status=ok
// SIG undefined FUN_146bfea58(void)

undefined8 * FUN_146bfea58(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x40);
  uVar3 = *piVar1 * 0x200 + piVar1[1];
  uVar4 = 0;
  if ((uVar3 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(piVar1 + 2) - 1U))) {
    uVar2 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar5 = uVar3;
    }
    do {
      uVar6 = uVar2;
      uVar4 = uVar5;
      if (uVar5 == uVar6) break;
      uVar2 = uVar6 + 1;
      uVar4 = uVar6;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(piVar1 + 2))[uVar6 >> 9] +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  }
  param_2[4] = 0;
  param_2[2] = 0;
  *param_2 = piVar1;
  *(uint *)(param_2 + 1) = uVar4;
  *(uint *)((longlong)param_2 + 0xc) = uVar3;
  FUN_146c40784(param_2 + 2,param_1);
  return param_2;
}



// FUNCTION 146bfeafa FUN_146bfeafa body=178 status=ok
// SIG undefined FUN_146bfeafa(void)

undefined4 FUN_146bfeafa(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 in_stack_00000028;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88 [2];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined1 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x11c) < 0) || (*(longlong *)(param_1 + 0x60) != 0)) {
    uVar1 = 0;
  }
  else {
    local_90 = local_88;
    local_88[0] = 0x7fefffffffffffff;
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_38 = 0;
    local_98 = in_stack_00000028;
    uVar1 = FUN_146bfebae(param_1 + 0x50);
    if (local_78 != 0) {
      plVar2 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar2 = local_58;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfebae FUN_146bfebae body=133 status=ok
// SIG undefined FUN_146bfebae(void)

bool FUN_146bfebae(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (iVar2 < 0) {
      return false;
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
    return false;
  }
  FUN_146c4d352(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
  return *param_4 != -1;
}



// FUNCTION 146bfec34 FUN_146bfec34 body=31 status=ok
// SIG undefined FUN_146bfec34(void)

undefined8 FUN_146bfec34(longlong param_1)

{
  undefined8 uVar1;
  
  if ((-1 < *(int *)(param_1 + 0x11c)) && (*(longlong *)(param_1 + 0x60) == 0)) {
    uVar1 = FUN_146bfec54(param_1 + 0x50);
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 146bfec54 FUN_146bfec54 body=174 status=ok
// SIG undefined FUN_146bfec54(void)

undefined4 FUN_146bfec54(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    uVar2 = 0xffffffff;
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_146bfece6;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_146bfece6;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_146c4d712(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_146bfece6:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfed03 FUN_146bfed03 body=130 status=ok
// SIG undefined FUN_146bfed03(void)

bool FUN_146bfed03(undefined8 *param_1)

{
  bool bVar1;
  short sVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  sVar2 = _dtest();
  if (sVar2 < 1) {
    local_18 = param_1[1];
    sVar2 = _dtest();
    if (sVar2 < 1) {
      local_18 = param_1[2];
      sVar2 = _dtest();
      bVar1 = sVar2 < 1;
      goto LAB_146bfed34;
    }
  }
  bVar1 = false;
LAB_146bfed34:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bfed86 FUN_146bfed86 body=411 status=ok
// SIG undefined FUN_146bfed86(void)

undefined8 FUN_146bfed86(longlong param_1,longlong param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  longlong lVar25;
  int in_R10D;
  int iVar26;
  undefined4 in_R11D;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 == *(uint *)(param_2 + 0x20)) {
    uVar24 = 1;
    if (0 < (int)uVar5) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar7 = *(longlong *)(param_2 + 0x18);
      lVar25 = 0;
      do {
        pdVar1 = (double *)(lVar6 + 0x20 + lVar25);
        pdVar2 = (double *)(lVar6 + 0x30 + lVar25);
        pdVar3 = (double *)(lVar7 + 0x20 + lVar25);
        pdVar4 = (double *)(lVar7 + 0x30 + lVar25);
        auVar11._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - pdVar3[1]));
        auVar11._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - *pdVar3));
        iVar26 = movmskpd(in_R10D,auVar11);
        auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar2[1] - pdVar4[1]));
        auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar2 - *pdVar4));
        uVar27 = movmskpd(in_R11D,auVar8);
        if ((uVar27 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_146bfef0b;
        dVar16 = *(double *)(lVar6 + lVar25);
        dVar17 = ((double *)(lVar6 + lVar25))[1];
        pdVar1 = (double *)(lVar6 + 0x10 + lVar25);
        dVar18 = *pdVar1;
        dVar19 = pdVar1[1];
        dVar20 = *(double *)(lVar7 + lVar25);
        dVar21 = ((double *)(lVar7 + lVar25))[1];
        pdVar1 = (double *)(lVar7 + 0x10 + lVar25);
        dVar22 = *pdVar1;
        dVar23 = pdVar1[1];
        lVar29 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 - dVar21));
        auVar15._8_4_ = (int)lVar29;
        auVar15._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar16 - dVar20));
        auVar15._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        uVar27 = movmskpd(iVar26,auVar15);
        lVar29 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 - dVar23));
        auVar14._8_4_ = (int)lVar29;
        auVar14._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 - dVar22));
        auVar14._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        iVar26 = movmskpd(0,auVar14);
        uVar28 = iVar26 << 2 | uVar27;
        if (uVar28 != 0) {
          auVar12._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 + dVar21));
          auVar12._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar16 + dVar20));
          uVar27 = movmskpd(uVar27,auVar12);
          auVar10._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 + dVar23));
          auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 + dVar22));
          uVar28 = movmskpd(uVar28,auVar10);
          if ((uVar28 & 0x3fffffff) != 0 || uVar27 != 0) goto LAB_146bfef0b;
        }
        pdVar1 = (double *)(lVar6 + 0x40 + lVar25);
        pdVar2 = (double *)(lVar6 + 0x50 + lVar25);
        pdVar3 = (double *)(lVar7 + 0x40 + lVar25);
        pdVar4 = (double *)(lVar7 + 0x50 + lVar25);
        auVar13._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - pdVar3[1]));
        auVar13._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - *pdVar3));
        in_R10D = movmskpd(uVar27,auVar13);
        auVar9._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar2[1] - pdVar4[1]));
        auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar2 - *pdVar4));
        uVar27 = movmskpd(0,auVar9);
        if ((uVar27 & 0x3fffffff) != 0 || in_R10D != 0) goto LAB_146bfef0b;
        lVar25 = lVar25 + 0x60;
        in_R11D = 0;
      } while ((ulonglong)uVar5 * 0x60 != lVar25);
    }
  }
  else {
LAB_146bfef0b:
    uVar24 = 0;
  }
  return uVar24;
}



// FUNCTION 146bfef22 FUN_146bfef22 body=107 status=ok
// SIG undefined FUN_146bfef22(void)

void FUN_146bfef22(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_1402191ca(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146bfef8e FUN_146bfef8e body=72 status=ok
// SIG undefined FUN_146bfef8e(void)

void FUN_146bfef8e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1446f84a2();
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
      FUN_1406ce816();
      return;
    }
  }
  return;
}



// FUNCTION 146bfeff2 FUN_146bfeff2 body=108 status=ok
// SIG undefined FUN_146bfeff2(void)

undefined8 * FUN_146bfeff2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3ab40;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_146bfef8e(puVar1 + 3,0);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1406fa324(puVar1 + 3,param_1 + 0x18);
  return puVar1;
}



// FUNCTION 146bff05e FUN_146bff05e body=77 status=ok
// SIG undefined FUN_146bff05e(void)

undefined8 * FUN_146bff05e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3ab40;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_146bfef8e(puVar1 + 3,0);
  return puVar1;
}



// FUNCTION 146bff0c0 FUN_146bff0c0 body=45 status=ok
// SIG undefined FUN_146bff0c0(void)

undefined8 * FUN_146bff0c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f3bbd0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146bff0ee FUN_146bff0ee body=54 status=ok
// SIG undefined FUN_146bff0ee(void)

bool FUN_146bff0ee(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == *(int *)(param_2 + 0x20)) {
    if (iVar1 == 0) {
      bVar2 = true;
    }
    else {
      iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar1 << 2);
      bVar2 = iVar1 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 146bff124 FUN_146bff124 body=111 status=ok
// SIG undefined FUN_146bff124(void)

undefined8 * FUN_146bff124(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3ac10;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_144a127d2(puVar1 + 3,0,1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_14054c6c4(puVar1 + 3,param_1 + 0x18);
  return puVar1;
}



// FUNCTION 146bff194 FUN_146bff194 body=80 status=ok
// SIG undefined FUN_146bff194(void)

undefined8 * FUN_146bff194(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3ac10;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_144a127d2(puVar1 + 3,0,1);
  return puVar1;
}



// FUNCTION 146bff1f8 FUN_146bff1f8 body=45 status=ok
// SIG undefined FUN_146bff1f8(void)

undefined8 * FUN_146bff1f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f3bbd0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146bff226 FUN_146bff226 body=112 status=ok
// SIG undefined FUN_146bff226(void)

void FUN_146bff226(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_14499148c(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1449e2712(param_1,iVar2);
      }
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146bff298 FUN_146bff298 body=88 status=ok
// SIG undefined FUN_146bff298(void)

undefined8 * FUN_146bff298(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141724ade(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 146bff30a FUN_146bff30a body=111 status=ok
// SIG undefined FUN_146bff30a(void)

undefined8 * FUN_146bff30a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3ace0;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_140330574(puVar1 + 3,0,1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_146bff298(puVar1 + 3,param_1 + 0x18);
  return puVar1;
}



// FUNCTION 146bff37a FUN_146bff37a body=80 status=ok
// SIG undefined FUN_146bff37a(void)

undefined8 * FUN_146bff37a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3ace0;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_140330574(puVar1 + 3,0,1);
  return puVar1;
}



// FUNCTION 146bff3de FUN_146bff3de body=45 status=ok
// SIG undefined FUN_146bff3de(void)

undefined8 * FUN_146bff3de(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f3bbd0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146bff40c FUN_146bff40c body=123 status=ok
// SIG undefined FUN_146bff40c(void)

void FUN_146bff40c(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_1401a2688(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_144a2c682(param_1,iVar1);
      }
      puVar3 = param_2;
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x60 + *param_1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 146bff488 FUN_146bff488 body=111 status=ok
// SIG undefined FUN_146bff488(void)

undefined8 * FUN_146bff488(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3adb0;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1407a57f6(puVar1 + 3,0,1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_144756208(puVar1 + 3,param_1 + 0x18);
  return puVar1;
}



// FUNCTION 146bff4f8 FUN_146bff4f8 body=80 status=ok
// SIG undefined FUN_146bff4f8(void)

undefined8 * FUN_146bff4f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149f3adb0;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1407a57f6(puVar1 + 3,0,1);
  return puVar1;
}



// FUNCTION 146bff55c FUN_146bff55c body=45 status=ok
// SIG undefined FUN_146bff55c(void)

undefined8 * FUN_146bff55c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f3bbd0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146bff58a FUN_146bff58a body=97 status=ok
// SIG undefined FUN_146bff58a(void)

undefined8 * FUN_146bff58a(undefined8 *param_1)

{
  void *_Dst;
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0;
  _Dst = (void *)FUN_14001cc68(0x1800,0x10);
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar1 >> 8),0xff),0x1800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1411b3d20(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146bff5ec FUN_146bff5ec body=97 status=ok
// SIG undefined FUN_146bff5ec(void)

undefined8 * FUN_146bff5ec(undefined8 *param_1)

{
  void *_Dst;
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0;
  _Dst = (void *)FUN_14001cc68(0x2000,0x10);
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar1 >> 8),0xff),0x2000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1411b3e82(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146bff64e FUN_146bff64e body=97 status=ok
// SIG undefined FUN_146bff64e(void)

undefined8 * FUN_146bff64e(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1800);
  memset(_Dst,0,0x1800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_146c4de0a(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146bff6b0 FUN_146bff6b0 body=97 status=ok
// SIG undefined FUN_146bff6b0(void)

undefined8 * FUN_146bff6b0(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x1000);
  memset(_Dst,0,0x1000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_146c4dfba(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 146bff712 FUN_146bff712 body=635 status=ok
// SIG undefined FUN_146bff712(void)

undefined8 * FUN_146bff712(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_149f3ae80;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_146c40ab6(param_1 + 2,param_2 + 0x10);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  FUN_146c40b54(param_1 + 5,param_2 + 0x28);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  FUN_146c40bf2(param_1 + 8,param_2 + 0x40);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  cVar1 = *(char *)(param_2 + 0x70);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    FUN_146c4e16a(param_1 + 0xc,param_2 + 0x60);
  }
  cVar1 = *(char *)(param_2 + 0x90);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
    FUN_146c4e16a(param_1 + 0x10,param_2 + 0x80);
  }
  cVar1 = *(char *)(param_2 + 0xb0);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
    FUN_146c4e20c(param_1 + 0x14,param_2 + 0xa0);
  }
  FUN_146bff98e(param_1 + 0x17,param_2 + 0xb8);
  param_1[0x25] = *(undefined8 *)(param_2 + 0x128);
  FUN_146c40c90(param_1 + 0x26,param_2 + 0x130);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  FUN_146c40b54(param_1 + 0x29,param_2 + 0x148);
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
  FUN_146c40bf2(param_1 + 0x2c,param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x170);
  param_1[0x2f] = *(undefined8 *)(param_2 + 0x178);
  FUN_146c40c90(param_1 + 0x30,param_2 + 0x180);
  cVar1 = *(char *)(param_2 + 0x1a8);
  *(char *)(param_1 + 0x35) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x32] = *(undefined8 *)(param_2 + 400);
    FUN_146c40bf2(param_1 + 0x33,param_2 + 0x198);
  }
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1b0);
  param_1[0x37] = *(undefined8 *)(param_2 + 0x1b8);
  FUN_146c40d2e(param_1 + 0x38,param_2 + 0x1c0);
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  FUN_146c40b54(param_1 + 0x3b,param_2 + 0x1d8);
  param_1[0x3d] = *(undefined8 *)(param_2 + 0x1e8);
  FUN_146c40bf2(param_1 + 0x3e,param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x200);
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 **)((longlong)param_1 + 0x214) = &DAT_100000001;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x218);
  UNLOCK();
  if (*(longlong *)(param_2 + 0x208) != 0) {
    FUN_14582ed12(param_1);
    FUN_146bffa02(param_1[0x41],*(undefined8 *)(param_2 + 0x208));
  }
  return param_1;
}



// FUNCTION 146bff98e FUN_146bff98e body=116 status=ok
// SIG undefined FUN_146bff98e(void)

undefined8 * FUN_146bff98e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_146c40bf2(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  FUN_146c40bf2(param_1 + 4,param_2 + 4);
  param_1[6] = param_2[6];
  FUN_146c40bf2(param_1 + 7,param_2 + 7);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  FUN_146c40bf2(param_1 + 0xb,param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 146bffa02 FUN_146bffa02 body=1227 status=ok
// SIG undefined FUN_146bffa02(void)

void FUN_146bffa02(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = (**(code **)(*param_2 + 0xa0))(param_2);
  (**(code **)(*param_1 + 0xa8))(param_1,uVar6);
  iVar7 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      FUN_146c17dae(*(undefined8 *)(param_1[4] + lVar10 * 8),
                    *(undefined8 *)(param_2[4] + lVar10 * 8));
      lVar10 = lVar10 + 1;
      iVar7 = (**(code **)(*param_1 + 0xa0))(param_1);
    } while (lVar10 < iVar7);
  }
  uVar6 = (**(code **)(*param_2 + 0xb0))(param_2);
  (**(code **)(*param_1 + 0xb8))(param_1,uVar6);
  iVar7 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      FUN_146c17e98(*(undefined8 *)(param_1[6] + lVar10 * 8),
                    *(undefined8 *)(param_2[6] + lVar10 * 8));
      lVar10 = lVar10 + 1;
      iVar7 = (**(code **)(*param_1 + 0xb0))(param_1);
    } while (lVar10 < iVar7);
  }
  if (param_2[8] == 0) {
    lVar10 = param_1[8];
    if (lVar10 != 0) {
      param_1[8] = 0;
      FUN_146c543c2(lVar10);
      FUN_1400020a8(lVar10);
    }
  }
  else {
    FUN_146c17f82(param_1);
    FUN_146c18038(param_1[8],param_2[8]);
  }
  if (param_2[9] == 0) {
    puVar2 = (undefined8 *)param_1[9];
    if (puVar2 != (undefined8 *)0x0) {
      param_1[9] = 0;
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    FUN_14582ed9a(param_1);
    plVar3 = (longlong *)param_1[9];
    lVar10 = param_2[9];
    (**(code **)(*plVar3 + 0xb8))(plVar3,lVar10);
    plVar3[3] = *(longlong *)(lVar10 + 0x18);
    FUN_146bedfa8(plVar3 + 4,lVar10 + 0x20);
  }
  uVar6 = (**(code **)(*param_2 + 0xc0))(param_2);
  (**(code **)(*param_1 + 200))(param_1,uVar6);
  iVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(param_1[0xc] + lVar10 * 8);
      lVar8 = *(longlong *)(param_2[0xc] + lVar10 * 8);
      (**(code **)(*plVar3 + 0xb8))(plVar3,lVar8);
      plVar3[3] = *(longlong *)(lVar8 + 0x18);
      FUN_146bedfa8(plVar3 + 4,lVar8 + 0x20);
      lVar10 = lVar10 + 1;
      iVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
    } while (lVar10 < iVar7);
  }
  uVar6 = (**(code **)(*param_2 + 0xd0))(param_2);
  (**(code **)(*param_1 + 0xd8))(param_1,uVar6);
  iVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(param_1[10] + lVar10 * 8);
      lVar4 = *(longlong *)(param_2[10] + lVar10 * 8);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar4 + 8);
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
      FUN_146c4426a(lVar8 + 0x20,lVar4 + 0x20);
      lVar10 = lVar10 + 1;
      iVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
    } while (lVar10 < iVar7);
  }
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_146c54426(param_1 + 1);
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if ((int)param_1[0xf] != *(int *)((longlong)param_1 + 0xa4)) {
    FUN_146c54456(param_1 + 0xe);
    FUN_146c5459a(param_1 + 0xe);
  }
  plVar3 = param_2 + 0xe;
  plVar1 = param_2 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  iVar7 = 0;
  plStack_60 = plVar1;
  if ((int)param_2[0x13] != 0) {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_2[0x13];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_68;
  plStack_80 = plStack_60;
  local_90 = plVar3;
  if ((iStack_54 != iVar7) || (plStack_60 != plVar1)) {
    do {
      lVar10 = *local_90;
      lVar8 = (longlong)iStack_74;
      uVar9 = FUN_146be9c62(*(undefined8 *)(lVar10 + 8 + lVar8 * 0x18),param_1[3]);
      FUN_146c18154(param_1,*(undefined8 *)(lVar10 + lVar8 * 0x18),uVar9);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar3 || (plStack_80 != plVar1 || iStack_74 != iVar7));
  }
  FUN_146c18200(param_1,param_2);
  if ((int)param_1[0x1d] != *(int *)((longlong)param_1 + 0x114)) {
    FUN_146c546ba(param_1 + 0x1c);
    FUN_146c547fe(param_1 + 0x1c);
  }
  plVar3 = param_2 + 0x1c;
  plVar1 = param_2 + 0x1e;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  plStack_60 = plVar1;
  if ((int)param_2[0x21] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_2[0x21];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88._0_4_ = (undefined4)local_68;
  local_88._4_4_ = local_68._4_4_;
  plStack_80 = plStack_60;
  local_90 = plVar3;
  if ((iStack_54 != iVar7) || (plStack_60 != plVar1)) {
    do {
      lVar10 = *local_90;
      lVar8 = (longlong)iStack_74;
      plVar5 = *(longlong **)(lVar10 + 8 + lVar8 * 0x18);
      uVar9 = (**(code **)(*plVar5 + 8))(plVar5,param_1[3]);
      FUN_146c18272(param_1,*(undefined8 *)(lVar10 + lVar8 * 0x18),uVar9);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar3 || (plStack_80 != plVar1 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146bffece FUN_146bffece body=462 status=ok
// SIG undefined FUN_146bffece(void)

undefined8 * FUN_146bffece(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_149f3ae80;
  FUN_146c0009c(param_1 + 1,param_2 + 8);
  FUN_146c40dcc(param_1 + 4,param_2 + 0x20);
  FUN_14582f194(param_1 + 7,param_2 + 0x38);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  cVar1 = *(char *)(param_2 + 0x70);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    FUN_146c4ded4(param_1 + 0xb,param_2 + 0x58);
  }
  cVar1 = *(char *)(param_2 + 0x90);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    FUN_146c4ded4(param_1 + 0xf,param_2 + 0x78);
  }
  cVar1 = *(char *)(param_2 + 0xb0);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    FUN_146c4e084(param_1 + 0x13,param_2 + 0x98);
  }
  FUN_146c00130(param_1 + 0x17,param_2 + 0xb8);
  FUN_146c0017e(param_1 + 0x25,param_2 + 0x128);
  FUN_146c40dcc(param_1 + 0x28,param_2 + 0x140);
  FUN_14582f194(param_1 + 0x2b,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x170);
  FUN_146c0017e(param_1 + 0x2f,param_2 + 0x178);
  cVar1 = *(char *)(param_2 + 0x1a8);
  *(char *)(param_1 + 0x35) = cVar1;
  if (cVar1 == '\x01') {
    FUN_14582f194(param_1 + 0x32,param_2 + 400);
  }
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x1b0);
  FUN_146c00212(param_1 + 0x37,param_2 + 0x1b8);
  FUN_146c40dcc(param_1 + 0x3a,param_2 + 0x1d0);
  FUN_14582f194(param_1 + 0x3d,param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x200);
  param_1[0x41] = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_2 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 **)((longlong)param_1 + 0x214) = &DAT_100000001;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x218);
  UNLOCK();
  if (param_1[0x41] != 0) {
    FUN_146c002a6(param_1[0x41],param_1);
  }
  return param_1;
}



// FUNCTION 146c0009c FUN_146c0009c body=148 status=ok
// SIG undefined FUN_146c0009c(void)

undefined8 * FUN_146c0009c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146c4e2ae(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x3000);
  memset(_Dst,0,0x3000);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_141040c48(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c00130 FUN_146c00130 body=78 status=ok
// SIG undefined FUN_146c00130(void)

longlong FUN_146c00130(longlong param_1,longlong param_2)

{
  FUN_14582f194();
  FUN_14582f194(param_1 + 0x18,param_2 + 0x18);
  FUN_14582f194(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_14582f194(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 146c0017e FUN_146c0017e body=148 status=ok
// SIG undefined FUN_146c0017e(void)

undefined8 * FUN_146c0017e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146c4e2fc(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = 0;
  _Dst = (void *)FUN_14001cc68(0x1800,0x10);
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x1800);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_1411b3d20(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c00212 FUN_146c00212 body=148 status=ok
// SIG undefined FUN_146c00212(void)

undefined8 * FUN_146c00212(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146c4e34a(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = 0;
  _Dst = (void *)FUN_14001cc68(0x2000,0x10);
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x2000);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_1411b3e82(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c002a6 FUN_146c002a6 body=803 status=ok
// SIG undefined FUN_146c002a6(void)

void FUN_146c002a6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
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
  param_1[3] = param_2;
  iVar4 = (**(code **)(*param_1 + 0xa0))();
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      **(longlong **)(param_1[4] + lVar5 * 8) = param_2;
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
    } while (lVar5 < iVar4);
  }
  iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      **(longlong **)(param_1[6] + lVar5 * 8) = param_2;
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
    } while (lVar5 < iVar4);
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    *(longlong *)param_1[8] = param_2;
  }
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0xc] + lVar5 * 8);
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    } while (lVar5 < iVar4);
  }
  iVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1[10] + lVar5 * 8);
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
    } while (lVar5 < iVar4);
  }
  plVar2 = param_1 + 0xe;
  plVar1 = param_1 + 0x10;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[0x13] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[0x13];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      *(longlong *)(*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18) + 0x10) = param_2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  plVar2 = (longlong *)param_1[0x18];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[0x19];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[0x1a];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  plVar2 = (longlong *)param_1[0x1b];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  plVar2 = param_1 + 0x1c;
  plVar1 = param_1 + 0x1e;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[0x21] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[0x21];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      plVar3 = *(longlong **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c005ca FUN_146c005ca body=38 status=ok
// SIG undefined FUN_146c005ca(void)

undefined8 FUN_146c005ca(undefined8 param_1,undefined8 param_2)

{
  FUN_146c005f0(param_1,param_2,1,1,1,1);
  return param_1;
}



// FUNCTION 146c005f0 FUN_146c005f0 body=849 status=ok
// SIG undefined FUN_146c005f0(void)

undefined4
FUN_146c005f0(longlong param_1,longlong param_2,char param_3,char param_4,char param_5,char param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_146bee054(param_1 + 0x10,param_2 + 0x10);
  if (param_3 == '\0') {
    local_38 = '\0';
  }
  else {
    local_38 = *(char *)(param_2 + 0x70);
    if (local_38 == '\x01') {
      local_50 = *(undefined8 *)(param_2 + 0x58);
      FUN_146c4e16a(local_48,param_2 + 0x60);
    }
  }
  FUN_146c0167a(param_1 + 0x58,&local_50);
  if (local_38 == '\x01') {
    FUN_146c40926(local_48,0);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_4 == '\0') {
    local_38 = '\0';
  }
  else {
    local_38 = *(char *)(param_2 + 0x90);
    if (local_38 == '\x01') {
      local_50 = *(undefined8 *)(param_2 + 0x78);
      FUN_146c4e16a(local_48,param_2 + 0x80);
    }
  }
  FUN_146c0167a(param_1 + 0x78,&local_50);
  if (local_38 == '\x01') {
    FUN_146c40926(local_48,0);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_5 == '\0') {
    local_38 = '\0';
  }
  else {
    local_38 = *(char *)(param_2 + 0xb0);
    if (local_38 == '\x01') {
      local_50 = *(undefined8 *)(param_2 + 0x98);
      FUN_146c4e20c(local_48,param_2 + 0xa0);
    }
  }
  FUN_146c016c6(param_1 + 0x98,&local_50);
  if (local_38 == '\x01') {
    FUN_146c409ee(local_48,0);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_146c40fba(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_146bedfa8(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_146c01712(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  FUN_146c41066(param_1 + 0x130,param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  FUN_146c41066(param_1 + 0x180,param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  FUN_146c40fba(param_1 + 0x148,param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  FUN_146bedfa8(param_1 + 0x160,param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_146c01786(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  FUN_146c41112(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  FUN_146c40fba(param_1 + 0x1d8,param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  FUN_146bedfa8(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  if ((param_6 == '\0') || (*(longlong *)(param_2 + 0x208) == 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    FUN_14582ed12(param_1);
    FUN_146bffa02(*(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_2 + 0x208));
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  UNLOCK();
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c00942 FUN_146c00942 body=397 status=ok
// SIG undefined FUN_146c00942(void)

longlong FUN_146c00942(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_146c00ad0(param_1 + 8,param_2 + 8);
  FUN_146c40eae(param_1 + 0x20,param_2 + 0x20);
  FUN_146c40f34(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_146c00b56(param_1 + 0x58,param_2 + 0x58);
  FUN_146c00b56(param_1 + 0x78,param_2 + 0x78);
  FUN_146c00ba2(param_1 + 0x98,param_2 + 0x98);
  FUN_146c00bee(param_1 + 0xb8,param_2 + 0xb8);
  FUN_146c00c3c(param_1 + 0x128,param_2 + 0x128);
  FUN_146c40eae(param_1 + 0x140,param_2 + 0x140);
  FUN_146c40f34(param_1 + 0x158,param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_146c00c3c(param_1 + 0x178,param_2 + 0x178);
  FUN_146c00cc2(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  FUN_146c00d0c(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_146c40eae(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_146c40f34(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
    *(undefined8 *)(param_2 + 0x208) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_146c002a6(*(longlong *)(param_1 + 0x208),param_1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  UNLOCK();
  return param_1;
}



// FUNCTION 146c00ad0 FUN_146c00ad0 body=134 status=ok
// SIG undefined FUN_146c00ad0(void)

undefined4 * FUN_146c00ad0(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  FUN_146c4e2ae(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x3000);
  memset(_Dst,0,0x3000);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_141040c48(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c00b56 FUN_146c00b56 body=75 status=ok
// SIG undefined FUN_146c00b56(void)

longlong FUN_146c00b56(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_146c4de90(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_146c40926(param_1 + 8,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}



// FUNCTION 146c00ba2 FUN_146c00ba2 body=75 status=ok
// SIG undefined FUN_146c00ba2(void)

longlong FUN_146c00ba2(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_146c4e040(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_146c409ee(param_1 + 8,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}



// FUNCTION 146c00bee FUN_146c00bee body=78 status=ok
// SIG undefined FUN_146c00bee(void)

longlong FUN_146c00bee(longlong param_1,longlong param_2)

{
  FUN_146c40f34();
  FUN_146c40f34(param_1 + 0x18,param_2 + 0x18);
  FUN_146c40f34(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  FUN_146c40f34(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 146c00c3c FUN_146c00c3c body=134 status=ok
// SIG undefined FUN_146c00c3c(void)

undefined4 * FUN_146c00c3c(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  
  FUN_146c4e2fc(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = 0;
  _Dst = (void *)FUN_14001cc68(0x1800,0x10);
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x1800);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_1411b3d20(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c00cc2 FUN_146c00cc2 body=73 status=ok
// SIG undefined FUN_146c00cc2(void)

longlong FUN_146c00cc2(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_14582f14e(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_141082b5c(param_1 + 8,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}



// FUNCTION 146c00d0c FUN_146c00d0c body=134 status=ok
// SIG undefined FUN_146c00d0c(void)

undefined4 * FUN_146c00d0c(undefined4 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  
  FUN_146c4e34a(param_1 + 2,param_2 + 1);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = 0;
  _Dst = (void *)FUN_14001cc68(0x2000,0x10);
  memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x2000);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_1411b3e82(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 146c00d92 FUN_146c00d92 body=261 status=ok
// SIG undefined FUN_146c00d92(void)

undefined8 * FUN_146c00d92(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_149f3ae80;
  FUN_141040be6(param_1 + 1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_141224904(param_1 + 4);
  FUN_141040b84(param_1 + 7);
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_141224b64(param_1 + 0x17);
  FUN_146bff58a(param_1 + 0x25);
  FUN_141224904(param_1 + 0x28);
  FUN_141040b84(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_146bff58a(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  FUN_146bff5ec(param_1 + 0x37);
  FUN_141224904(param_1 + 0x3a);
  FUN_141040b84(param_1 + 0x3d);
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 **)((longlong)param_1 + 0x214) = &DAT_100000001;
  FUN_146c00e98(param_1,param_2);
  return param_1;
}



// FUNCTION 146c00e98 FUN_146c00e98 body=696 status=ok
// SIG undefined FUN_146c00e98(void)

bool FUN_146c00e98(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14582f278();
  FUN_14582eef4(param_1,0);
  iVar6 = *(int *)(param_2 + 0x10);
  if (0 < (longlong)iVar6) {
    lVar7 = 0;
    do {
      local_78 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10 + lVar7);
      puVar1 = (undefined4 *)(*(longlong *)(param_2 + 8) + lVar7);
      local_88 = *puVar1;
      uStack_84 = puVar1[1];
      uStack_80 = puVar1[2];
      uStack_7c = puVar1[3];
      local_68 = DAT_14c846338;
      local_70 = DAT_14c846330;
      local_5c = DAT_14c846338;
      local_64 = DAT_14c846330;
      local_58 = DAT_14c84635c;
      local_50 = 0;
      local_4e = 0;
      FUN_146c02208(param_1,&local_88);
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar6 * 0x18 != lVar7);
  }
  uVar2 = *(uint *)(param_2 + 0x60);
  uVar8 = (ulonglong)uVar2;
  if ((*(int *)(param_2 + 0x20) < 1) && (*(int *)(param_2 + 0x40) < 1)) {
    if (*(int *)(param_2 + 0x90) == 0) {
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          FUN_146c01152(param_1,*(longlong *)(param_2 + 0x58) + lVar7,0);
          lVar7 = lVar7 + 0xc;
        } while (uVar8 * 0xc != lVar7);
      }
    }
    else if (0 < (int)uVar2) {
      lVar7 = 0;
      uVar10 = 0;
      do {
        FUN_146c01152(param_1,*(longlong *)(param_2 + 0x58) + lVar7,
                      *(int *)(*(longlong *)(param_2 + 0x88) + uVar10 * 4) + 1);
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar8 != uVar10);
    }
  }
  else {
    if (0 < (int)uVar2) {
      bVar3 = true;
      lVar7 = 0;
      uVar10 = 0;
      do {
        iVar6 = 0;
        if (0 < *(int *)(param_2 + 0x90)) {
          iVar6 = *(int *)(*(longlong *)(param_2 + 0x88) + uVar10 * 4) + 1;
        }
        uVar4 = FUN_146c01152(param_1,*(longlong *)(param_2 + 0x58) + lVar7,iVar6);
        bVar3 = (bool)(bVar3 & uVar10 == uVar4);
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar8 != uVar10);
      if (!bVar3) goto LAB_146c00fbf;
    }
    FUN_14582ed12(param_1);
    lVar7 = *(longlong *)(param_1 + 0x208);
    if (*(int *)(lVar7 + 0x28) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(lVar7 + 0x20);
    }
    if (*(int *)(lVar7 + 0x38) < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = **(undefined8 **)(lVar7 + 0x30);
    }
    iVar6 = *(int *)(param_2 + 0x20);
    if (0 < (longlong)iVar6) {
      lVar7 = 0;
      do {
        FUN_146c2d0a4(uVar5,*(longlong *)(param_2 + 0x18) + lVar7);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar6 * 8 != lVar7);
    }
    iVar6 = *(int *)(param_2 + 0x40);
    if (0 < (longlong)iVar6) {
      lVar7 = 0;
      do {
        FUN_146c2f9e2(uVar9,*(longlong *)(param_2 + 0x38) + lVar7);
        lVar7 = lVar7 + 0xc;
      } while ((longlong)iVar6 * 0xc != lVar7);
    }
    if (0 < (int)uVar2) {
      lVar7 = 0;
      uVar10 = 0;
      do {
        FUN_146c01486(uVar5,uVar10 & 0xffffffff,*(longlong *)(param_2 + 0x68) + lVar7,1);
        FUN_146c01580(uVar9,uVar10 & 0xffffffff,*(longlong *)(param_2 + 0x78) + lVar7,1);
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0xc;
      } while (uVar8 != uVar10);
    }
  }
LAB_146c00fbf:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(uint *)(param_1 + 0x170) == uVar2;
}



// FUNCTION 146c01152 FUN_146c01152 body=819 status=ok
// SIG undefined FUN_146c01152(void)

undefined4 FUN_146c01152(longlong param_1,uint *param_2,int param_3)

{
  short *psVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_60;
  char local_4f;
  char local_4e;
  char local_4d;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  uVar10 = 0xffffffff;
  local_4c = param_3;
  if ((((((-1 < (int)uVar3) &&
         (uVar12 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
         (int)uVar3 < (int)uVar12)) &&
        (lVar6 = *(longlong *)(param_1 + 0x28),
        (ushort)(*(short *)(*(longlong *)(lVar6 + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       ((uVar4 = param_2[1], uVar4 < uVar12 && -1 < (int)uVar4 &&
        ((ushort)(*(short *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8) +
                            (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)))) &&
      ((uVar5 = param_2[2], uVar5 < uVar12 && -1 < (int)uVar5 &&
       ((uVar3 != uVar4 &&
        (1 < (ushort)(*(short *)(*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) +
                                (ulonglong)(uVar5 & 0x1ff) * 2) + 1U))))))) &&
     (uVar4 != uVar5 && uVar3 != uVar5)) {
    uVar12 = FUN_146c08cbe(param_1,uVar3,uVar4,&local_4d);
    iVar8 = FUN_146c08cbe(param_1,uVar4,uVar5,&local_4e);
    iVar9 = FUN_146c08cbe(param_1,uVar5,uVar3,&local_4f);
    uVar10 = 0xfffffffe;
    if ((((uVar12 == 0xffffffff) || (local_4d != '\0')) && ((iVar8 == -1 || (local_4e != '\0')))) &&
       ((iVar9 == -1 || (local_4f != '\0')))) {
      if ((uVar12 != 0xffffffff) && ((iVar8 != -1 && (iVar9 != -1)))) {
        uVar3 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar12 >> 9) * 8) + 8 +
                         (ulonglong)((uVar12 & 0x1ff) << 4));
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
        uVar13 = (ulonglong)(uVar3 & 0x1ff);
        uVar10 = 0xfffffffd;
        if ((*(uint *)(lVar6 + uVar13 * 0xc) == uVar5) ||
           ((lVar6 = lVar6 + uVar13 * 0xc, *(uint *)(lVar6 + 4) == uVar5 ||
            (*(uint *)(lVar6 + 8) == uVar5)))) goto LAB_146c01243;
      }
      cVar2 = *(char *)(param_1 + 0x1a8);
      uVar10 = FUN_146c08aba(param_1 + 0x140);
      FUN_146c08b9e(param_1 + 0x128,param_2,uVar10);
      if (cVar2 == '\x01') {
        FUN_146bedf4e(param_1 + 400,&local_4c,uVar10);
        iVar11 = local_4c + 1;
        if (local_4c + 1 <= *(int *)(param_1 + 0x1b0)) {
          iVar11 = *(int *)(param_1 + 0x1b0);
        }
        *(int *)(param_1 + 0x1b0) = iVar11;
      }
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(*param_2 >> 9) * 8) +
                        (ulonglong)(*param_2 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2[1] >> 9) * 8) +
                        (ulonglong)(param_2[1] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2[2] >> 9) * 8) +
                        (ulonglong)(param_2[2] & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      local_68 = 0;
      local_60 = uVar12;
      FUN_146c0958e(param_1,uVar10,*param_2,param_2[1]);
      local_68 = 1;
      local_60 = iVar8;
      FUN_146c0958e(param_1,uVar10,param_2[1],param_2[2]);
      local_68 = 2;
      local_60 = iVar9;
      FUN_146c0958e(param_1,uVar10,param_2[2],*param_2);
      plVar7 = *(longlong **)(param_1 + 0x208);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7,uVar10,0);
      }
      if (*(char *)(param_1 + 0x210) == '\x01') {
        LOCK();
        *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
        UNLOCK();
      }
      LOCK();
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      UNLOCK();
    }
  }
LAB_146c01243:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c01486 FUN_146c01486 body=250 status=ok
// SIG undefined FUN_146c01486(void)

undefined8 FUN_146c01486(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = *param_3;
  uVar5 = 1;
  if ((((((-1 < (int)uVar1) &&
         (uVar6 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc), (int)uVar1 < (int)uVar6))
        && (lVar4 = *(longlong *)(param_1 + 0x10),
           (ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                              (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       ((uVar2 = param_3[1], uVar2 < uVar6 && -1 < (int)uVar2 &&
        ((ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                            (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) &&
      ((uVar3 = param_3[2], uVar3 < uVar6 && -1 < (int)uVar3 &&
       (((ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                            (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe &&
        (uVar5 = 0x17, uVar1 != uVar2)))))) && (uVar2 != uVar3 && uVar1 != uVar3)) {
    FUN_146c2d1aa();
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 146c01580 FUN_146c01580 body=250 status=ok
// SIG undefined FUN_146c01580(void)

undefined8 FUN_146c01580(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = *param_3;
  uVar5 = 1;
  if ((((((-1 < (int)uVar1) &&
         (uVar6 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc), (int)uVar1 < (int)uVar6))
        && (lVar4 = *(longlong *)(param_1 + 0x10),
           (ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                              (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       ((uVar2 = param_3[1], uVar2 < uVar6 && -1 < (int)uVar2 &&
        ((ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                            (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) &&
      ((uVar3 = param_3[2], uVar3 < uVar6 && -1 < (int)uVar3 &&
       (((ushort)(*(short *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                            (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe &&
        (uVar5 = 0x17, uVar1 != uVar2)))))) && (uVar2 != uVar3 && uVar1 != uVar3)) {
    FUN_146c2faea();
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 146c0167a FUN_146c0167a body=75 status=ok
// SIG undefined FUN_146c0167a(void)

longlong FUN_146c0167a(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_146c4e398(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_146c40926(param_1 + 8,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}



// FUNCTION 146c016c6 FUN_146c016c6 body=75 status=ok
// SIG undefined FUN_146c016c6(void)

longlong FUN_146c016c6(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_146c4e3e8(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_146c409ee(param_1 + 8,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}



// FUNCTION 146c01712 FUN_146c01712 body=116 status=ok
// SIG undefined FUN_146c01712(void)

undefined8 * FUN_146c01712(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_146bedfa8(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  FUN_146bedfa8(param_1 + 4,param_2 + 4);
  param_1[6] = param_2[6];
  FUN_146bedfa8(param_1 + 7,param_2 + 7);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  FUN_146bedfa8(param_1 + 0xb,param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 146c01786 FUN_146c01786 body=73 status=ok
// SIG undefined FUN_146c01786(void)

longlong FUN_146c01786(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_146c4e438(param_1);
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      FUN_141082b5c(param_1 + 8,0);
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  return param_1;
}


