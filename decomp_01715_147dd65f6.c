// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147dd65f6 FUN_147dd65f6 body=101 status=ok
// SIG undefined FUN_147dd65f6(void)

void FUN_147dd65f6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x60 + *param_1);
  FUN_140ebe85e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x60 + (longlong)_Dst),(longlong)iVar2 * 0x60);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147dd665c FUN_147dd665c body=62 status=ok
// SIG undefined FUN_147dd665c(void)

void FUN_147dd665c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dd669a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 147dd669a FUN_147dd669a body=112 status=ok
// SIG undefined FUN_147dd669a(void)

ulonglong FUN_147dd669a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147dd66d4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_147dd66d4:
  return param_2 & 0xffffffff;
}



// FUNCTION 147dd670a FUN_147dd670a body=287 status=ok
// SIG undefined FUN_147dd670a(void)

undefined4 * FUN_147dd670a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147dd682a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_147dd6910(param_1,uVar5,local_40,&local_4c);
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
      FUN_147dd6a02(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd682a FUN_147dd682a body=230 status=ok
// SIG undefined FUN_147dd682a(void)

int * FUN_147dd682a(longlong *param_1,int *param_2)

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



// FUNCTION 147dd6910 FUN_147dd6910 body=128 status=ok
// SIG undefined FUN_147dd6910(void)

undefined8 FUN_147dd6910(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147dd6990(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147dd6990 FUN_147dd6990 body=114 status=ok
// SIG undefined FUN_147dd6990(void)

void FUN_147dd6990(longlong *param_1,int param_2)

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



// FUNCTION 147dd6a02 FUN_147dd6a02 body=419 status=ok
// SIG undefined FUN_147dd6a02(void)

void FUN_147dd6a02(longlong *param_1)

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



// FUNCTION 147dd6ba6 FUN_147dd6ba6 body=105 status=ok
// SIG undefined FUN_147dd6ba6(void)

void FUN_147dd6ba6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x10 + lVar1),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147dd6c10 FUN_147dd6c10 body=102 status=ok
// SIG undefined FUN_147dd6c10(void)

void FUN_147dd6c10(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147dd6c76(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147dd6c76 FUN_147dd6c76 body=93 status=ok
// SIG undefined FUN_147dd6c76(void)

void FUN_147dd6c76(longlong *param_1,int param_2)

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
  FUN_146bd7430(param_1,param_2,1);
  return;
}



// FUNCTION 147dd6cd4 FUN_147dd6cd4 body=81 status=ok
// SIG undefined FUN_147dd6cd4(void)

void FUN_147dd6cd4(longlong *param_1,int param_2)

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
          FUN_147dd6d26(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147dd6d26 FUN_147dd6d26 body=87 status=ok
// SIG undefined FUN_147dd6d26(void)

void FUN_147dd6d26(longlong *param_1,int param_2)

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
  FUN_147dd6990();
  return;
}



// FUNCTION 147dd6d7e FUN_147dd6d7e body=96 status=ok
// SIG undefined FUN_147dd6d7e(void)

void FUN_147dd6d7e(longlong param_1,int param_2)

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



// FUNCTION 147dd6dde FUN_147dd6dde body=48 status=ok
// SIG undefined FUN_147dd6dde(void)

void FUN_147dd6dde(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,8);
  }
  return;
}



// FUNCTION 147dd6e0e FUN_147dd6e0e body=68 status=ok
// SIG undefined FUN_147dd6e0e(void)

void FUN_147dd6e0e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147dd6e52();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147dd6e52 FUN_147dd6e52 body=322 status=ok
// SIG undefined FUN_147dd6e52(void)

void FUN_147dd6e52(longlong *param_1)

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



// FUNCTION 147dd6f96 FUN_147dd6f96 body=335 status=ok
// SIG undefined FUN_147dd6f96(void)

undefined4 * FUN_147dd6f96(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147dd70e6(param_1,local_48);
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
  cVar4 = FUN_147dd71cc(param_1,uVar9,local_40,&local_4c);
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
      FUN_147dd72be(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd70e6 FUN_147dd70e6 body=230 status=ok
// SIG undefined FUN_147dd70e6(void)

int * FUN_147dd70e6(longlong *param_1,int *param_2)

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



// FUNCTION 147dd71cc FUN_147dd71cc body=128 status=ok
// SIG undefined FUN_147dd71cc(void)

undefined8 FUN_147dd71cc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147dd724c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147dd724c FUN_147dd724c body=114 status=ok
// SIG undefined FUN_147dd724c(void)

void FUN_147dd724c(longlong *param_1,int param_2)

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



// FUNCTION 147dd72be FUN_147dd72be body=473 status=ok
// SIG undefined FUN_147dd72be(void)

void FUN_147dd72be(longlong *param_1)

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



// FUNCTION 147dd7498 FUN_147dd7498 body=115 status=ok
// SIG undefined FUN_147dd7498(void)

int FUN_147dd7498(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 147dd750b FUN_147dd750b body=93 status=ok
// SIG undefined FUN_147dd750b(void)

void FUN_147dd750b(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x12) = 0x101;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 147dd7568 FUN_147dd7568 body=147 status=ok
// SIG undefined FUN_147dd7568(void)

void FUN_147dd7568(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dd75fc FUN_147dd75fc body=60 status=ok
// SIG undefined FUN_147dd75fc(void)

void FUN_147dd75fc(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x16) = 0;
      *(undefined8 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147dd7638 FUN_147dd7638 body=327 status=ok
// SIG undefined FUN_147dd7638(void)

undefined4 * FUN_147dd7638(longlong param_1,undefined4 *param_2,longlong *param_3)

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
  FUN_147dd7780(param_1,local_48);
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
  cVar6 = FUN_147dd7866(param_1,uVar7,local_40,&local_4c);
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
      FUN_147dd7936(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd7780 FUN_147dd7780 body=229 status=ok
// SIG undefined FUN_147dd7780(void)

int * FUN_147dd7780(longlong *param_1,int *param_2)

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



// FUNCTION 147dd7866 FUN_147dd7866 body=93 status=ok
// SIG undefined FUN_147dd7866(void)

undefined8 FUN_147dd7866(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147dd7498(), iVar7 != -1)) {
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
    FUN_147dd78c4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147dd78c4 FUN_147dd78c4 body=114 status=ok
// SIG undefined FUN_147dd78c4(void)

void FUN_147dd78c4(longlong *param_1,int param_2)

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



// FUNCTION 147dd7936 FUN_147dd7936 body=449 status=ok
// SIG undefined FUN_147dd7936(void)

void FUN_147dd7936(longlong *param_1)

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



// FUNCTION 147dd7af8 FUN_147dd7af8 body=152 status=ok
// SIG undefined FUN_147dd7af8(void)

void FUN_147dd7af8(longlong *param_1,int *param_2)

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
          FUN_147dd7b90(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147dd7b90 FUN_147dd7b90 body=90 status=ok
// SIG undefined FUN_147dd7b90(void)

void FUN_147dd7b90(longlong *param_1,int param_2)

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
  FUN_147dd78c4();
  return;
}



// FUNCTION 147dd7bea FUN_147dd7bea body=86 status=ok
// SIG undefined FUN_147dd7bea(void)

void FUN_147dd7bea(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147dd7c40 FUN_147dd7c40 body=132 status=ok
// SIG undefined FUN_147dd7c40(void)

void FUN_147dd7c40(longlong param_1,int param_2)

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



// FUNCTION 147dd7cc6 FUN_147dd7cc6 body=48 status=ok
// SIG undefined FUN_147dd7cc6(void)

void FUN_147dd7cc6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x160,8);
  }
  return;
}



// FUNCTION 147dd7cf6 FUN_147dd7cf6 body=132 status=ok
// SIG undefined FUN_147dd7cf6(void)

void FUN_147dd7cf6(longlong param_1,int param_2)

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



// FUNCTION 147dd7d7c FUN_147dd7d7c body=48 status=ok
// SIG undefined FUN_147dd7d7c(void)

void FUN_147dd7d7c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147dd7dac FUN_147dd7dac body=73 status=ok
// SIG undefined FUN_147dd7dac(void)

void FUN_147dd7dac(longlong *param_1)

{
  FUN_147dd7df5(param_1[4],(int)param_1[5]);
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



// FUNCTION 147dd7df5 FUN_147dd7df5 body=58 status=ok
// SIG undefined FUN_147dd7df5(void)

void FUN_147dd7df5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_147dc8960(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147dd7e30 FUN_147dd7e30 body=31 status=ok
// SIG undefined FUN_147dd7e30(void)

undefined8 FUN_147dd7e30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd7e6a FUN_147dd7e6a body=101 status=ok
// SIG undefined FUN_147dd7e6a(void)

void FUN_147dd7e6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab2da50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd7ed0 FUN_147dd7ed0 body=101 status=ok
// SIG undefined FUN_147dd7ed0(void)

void FUN_147dd7ed0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab2da50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd7f36 FUN_147dd7f36 body=134 status=ok
// SIG undefined FUN_147dd7f36(void)

void FUN_147dd7f36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab18ff0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2da50;
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
                    /* WARNING: Could not recover jumptable at 0x000147dd7fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dd7fbc FUN_147dd7fbc body=44 status=ok
// SIG undefined FUN_147dd7fbc(void)

void FUN_147dd7fbc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dd7fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147dd7fe8 FUN_147dd7fe8 body=31 status=ok
// SIG undefined FUN_147dd7fe8(void)

undefined8 FUN_147dd7fe8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd8022 FUN_147dd8022 body=101 status=ok
// SIG undefined FUN_147dd8022(void)

void FUN_147dd8022(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2dac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd8088 FUN_147dd8088 body=101 status=ok
// SIG undefined FUN_147dd8088(void)

void FUN_147dd8088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2dac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd80ee FUN_147dd80ee body=134 status=ok
// SIG undefined FUN_147dd80ee(void)

void FUN_147dd80ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa5a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2dac0;
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
                    /* WARNING: Could not recover jumptable at 0x000147dd8165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dd8174 FUN_147dd8174 body=62 status=ok
// SIG undefined FUN_147dd8174(void)

void FUN_147dd8174(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dd81af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dd81b2 FUN_147dd81b2 body=31 status=ok
// SIG undefined FUN_147dd81b2(void)

undefined8 FUN_147dd81b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd81ec FUN_147dd81ec body=101 status=ok
// SIG undefined FUN_147dd81ec(void)

void FUN_147dd81ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2db30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd8252 FUN_147dd8252 body=101 status=ok
// SIG undefined FUN_147dd8252(void)

void FUN_147dd8252(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2db30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd82b8 FUN_147dd82b8 body=134 status=ok
// SIG undefined FUN_147dd82b8(void)

void FUN_147dd82b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa5a870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2db30;
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
                    /* WARNING: Could not recover jumptable at 0x000147dd832f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dd833e FUN_147dd833e body=62 status=ok
// SIG undefined FUN_147dd833e(void)

void FUN_147dd833e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dd8379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dd837c FUN_147dd837c body=31 status=ok
// SIG undefined FUN_147dd837c(void)

undefined8 FUN_147dd837c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd83b6 FUN_147dd83b6 body=101 status=ok
// SIG undefined FUN_147dd83b6(void)

void FUN_147dd83b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2dba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd841c FUN_147dd841c body=101 status=ok
// SIG undefined FUN_147dd841c(void)

void FUN_147dd841c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2dba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd8482 FUN_147dd8482 body=134 status=ok
// SIG undefined FUN_147dd8482(void)

void FUN_147dd8482(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2dba0;
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
                    /* WARNING: Could not recover jumptable at 0x000147dd84f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dd8508 FUN_147dd8508 body=62 status=ok
// SIG undefined FUN_147dd8508(void)

void FUN_147dd8508(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dd8543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dd8546 FUN_147dd8546 body=31 status=ok
// SIG undefined FUN_147dd8546(void)

undefined8 FUN_147dd8546(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dd8580 FUN_147dd8580 body=29 status=ok
// SIG undefined FUN_147dd8580(void)

bool FUN_147dd8580(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147dd859e FUN_147dd859e body=101 status=ok
// SIG undefined FUN_147dd859e(void)

void FUN_147dd859e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bc3e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2dc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147dd8604 FUN_147dd8604 body=134 status=ok
// SIG undefined FUN_147dd8604(void)

void FUN_147dd8604(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bc3e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2dc10;
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
                    /* WARNING: Could not recover jumptable at 0x000147dd867b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dd868a FUN_147dd868a body=52 status=ok
// SIG undefined FUN_147dd868a(void)

void FUN_147dd868a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147dd86bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147dd86be FUN_147dd86be body=207 status=ok
// SIG undefined FUN_147dd86be(void)

int FUN_147dd86be(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
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



// FUNCTION 147dd878e FUN_147dd878e body=285 status=ok
// SIG undefined FUN_147dd878e(void)

undefined4 * FUN_147dd878e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147dd88ac(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_147dd8992(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_147dd8b76(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd88ac FUN_147dd88ac body=229 status=ok
// SIG undefined FUN_147dd88ac(void)

int * FUN_147dd88ac(longlong *param_1,int *param_2)

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



// FUNCTION 147dd8992 FUN_147dd8992 body=132 status=ok
// SIG undefined FUN_147dd8992(void)

undefined8 FUN_147dd8992(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_147dd8a18();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_147dd8ace(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_147dd89b6;
    }
  }
  uVar2 = 0;
LAB_147dd89b6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd8a18 FUN_147dd8a18 body=180 status=ok
// SIG undefined FUN_147dd8a18(void)

int FUN_147dd8a18(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_147dd8b40(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_147dd8aa6;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_147dd8aa6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd8ace FUN_147dd8ace body=114 status=ok
// SIG undefined FUN_147dd8ace(void)

void FUN_147dd8ace(longlong *param_1,int param_2)

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



// FUNCTION 147dd8b40 FUN_147dd8b40 body=53 status=ok
// SIG undefined FUN_147dd8b40(void)

ulonglong FUN_147dd8b40(int *param_1,int *param_2)

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



// FUNCTION 147dd8b76 FUN_147dd8b76 body=439 status=ok
// SIG undefined FUN_147dd8b76(void)

void FUN_147dd8b76(longlong *param_1)

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



// FUNCTION 147dd8d2e FUN_147dd8d2e body=90 status=ok
// SIG undefined FUN_147dd8d2e(void)

void FUN_147dd8d2e(longlong *param_1,int param_2)

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
  FUN_147dd8ace();
  return;
}



// FUNCTION 147dd8d88 FUN_147dd8d88 body=356 status=ok
// SIG undefined FUN_147dd8d88(void)

void FUN_147dd8d88(longlong *param_1,undefined8 *param_2)

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
      lVar8 = lVar8 * 0x78 + *param_1;
      cVar4 = FUN_144a7afa6(lVar8,param_2);
      if (cVar4 == '\0') {
        do {
          lVar10 = lVar8;
          lVar8 = (longlong)*(int *)(lVar10 + 0x70);
          if (lVar8 == -1) {
            return;
          }
          lVar8 = lVar8 * 0x78 + *param_1;
          cVar4 = FUN_144a7afa6(lVar8,param_2);
        } while (cVar4 == '\0');
        puVar15 = (undefined4 *)(lVar10 + 0x70);
      }
      else {
        puVar15 = (undefined4 *)((longlong)plVar14 + uVar16 * 4);
      }
      FUN_147dd8eec(param_1,*puVar15);
      return;
    }
  }
  return;
}



// FUNCTION 147dd8eec FUN_147dd8eec body=113 status=ok
// SIG undefined FUN_147dd8eec(void)

void FUN_147dd8eec(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x78;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x74 + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x70 + lVar6 * 0x78);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x78 + 0x70);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x70);
  FUN_147dd4286(lVar3 + *param_1);
  FUN_147dd4806(param_1,param_2);
  return;
}



// FUNCTION 147dd8f5e FUN_147dd8f5e body=413 status=ok
// SIG undefined FUN_147dd8f5e(void)

void FUN_147dd8f5e(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 147dd90fc FUN_147dd90fc body=365 status=ok
// SIG undefined FUN_147dd90fc(void)

undefined4 * FUN_147dd90fc(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bf4106(param_1,local_40);
  uVar6 = *param_3;
  *local_38 = uVar6;
  if ((uVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar6);
    uVar6 = *local_38;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  if (((bVar1 & 1) != 0) && (uVar6 != 0)) {
    FUN_1456cec3c(uVar6);
  }
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145bf4062(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
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
      *(uint *)((longlong)local_38 + 0xc) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145bf41ec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd926a FUN_147dd926a body=322 status=ok
// SIG undefined FUN_147dd926a(void)

void FUN_147dd926a(longlong *param_1)

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



// FUNCTION 147dd93ad FUN_147dd93ad body=41 status=ok
// SIG undefined FUN_147dd93ad(void)

void FUN_147dd93ad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147dd946a(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 147dd93d6 FUN_147dd93d6 body=146 status=ok
// SIG undefined FUN_147dd93d6(void)

void FUN_147dd93d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd8)) {
      uVar5 = uVar4 / 0xd8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dd946a FUN_147dd946a body=207 status=ok
// SIG undefined FUN_147dd946a(void)

undefined2 * FUN_147dd946a(undefined2 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147dd953a(param_1 + 0x54);
  local_48 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  uStack_40 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(undefined8 *)(param_1 + 4) = local_48;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0xc) = local_48;
  *(undefined8 *)(param_1 + 0x10) = uStack_40;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = local_48;
  *(undefined8 *)(param_1 + 0x1c) = uStack_40;
  *(undefined8 *)(param_1 + 0x20) = local_48;
  *(undefined8 *)(param_1 + 0x24) = uStack_40;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(ulonglong *)(param_1 + 0x2c) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(ulonglong *)(param_1 + 0x34) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x4a) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x4e) = uVar4;
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_38 = local_48;
  uStack_30 = uStack_40;
  local_28 = local_48;
  uStack_20 = uStack_40;
  FUN_147dd96d2(param_1 + 0x54);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd953a FUN_147dd953a body=88 status=ok
// SIG undefined FUN_147dd953a(void)

undefined8 * FUN_147dd953a(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147dd9592(0,0x400);
  if (*(int *)((longlong)param_1 + 0x1c) < 0x400) {
    FUN_147dd9602(param_1 + 2,0x400);
  }
  if (*(int *)((longlong)param_1 + 0x2c) < 0x80) {
    FUN_147dd9672(param_1 + 4,0x80);
  }
  return param_1;
}



// FUNCTION 147dd9592 FUN_147dd9592 body=112 status=ok
// SIG undefined FUN_147dd9592(void)

void FUN_147dd9592(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 147dd9602 FUN_147dd9602 body=112 status=ok
// SIG undefined FUN_147dd9602(void)

void FUN_147dd9602(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147dd9672 FUN_147dd9672 body=95 status=ok
// SIG undefined FUN_147dd9672(void)

void FUN_147dd9672(longlong param_1,uint param_2)

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



// FUNCTION 147dd96d2 FUN_147dd96d2 body=124 status=ok
// SIG undefined FUN_147dd96d2(void)

void FUN_147dd96d2(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_147dd9592(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_147dd9602(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  FUN_147dd7df5(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_147dd9672(param_1 + 0x20,0);
    return;
  }
  return;
}



// FUNCTION 147dd974e FUN_147dd974e body=98 status=ok
// SIG undefined FUN_147dd974e(void)

void FUN_147dd974e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xd8 + *param_1);
  FUN_145722f54(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xd8 + (longlong)_Dst),(longlong)iVar2 * 0xd8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147dd97b0 FUN_147dd97b0 body=182 status=ok
// SIG undefined FUN_147dd97b0(void)

void FUN_147dd97b0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb12230;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cb1223c = DAT_14cb1223c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb12228 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb12228 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb1223c = DAT_14cb1223c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147dd983f;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cb1223c = DAT_14cb1223c + -1;
LAB_147dd983f:
  FUN_14474d06a(&DAT_14cb12228,0);
  return;
}



// FUNCTION 147dd9866 FUN_147dd9866 body=62 status=ok
// SIG undefined FUN_147dd9866(void)

void FUN_147dd9866(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dd98a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147dd98a4 FUN_147dd98a4 body=93 status=ok
// SIG undefined FUN_147dd98a4(void)

ulonglong FUN_147dd98a4(uint param_1,uint param_2)

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



// FUNCTION 147dd9902 FUN_147dd9902 body=133 status=ok
// SIG undefined FUN_147dd9902(void)

longlong * FUN_147dd9902(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  param_1 = (longlong *)*param_1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        bVar7 = *(longlong *)(lVar2 + (longlong)iVar6 * 0x10) == lVar1;
        param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar7);
        if (bVar7) {
          return param_1;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
      } while (iVar6 != -1);
      return param_1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147dd99a6 FUN_147dd99a6 body=154 status=ok
// SIG undefined FUN_147dd99a6(void)

longlong * FUN_147dd99a6(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x28) < 2) {
    FUN_140002266(&local_30,&DAT_14ab2e47a,&DAT_14c764000);
    if ((longlong *)(param_1 + 0x20) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x20) = local_30;
      *(undefined4 *)(param_1 + 0x28) = local_28;
      *(undefined4 *)(param_1 + 0x2c) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (longlong *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dd9a42 FUN_147dd9a42 body=880 status=ok
// SIG undefined FUN_147dd9a42(void)

uint FUN_147dd9a42(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  uint local_94;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(&local_68);
  FUN_1412cfe60(&local_58,&local_68,((int)uStack_60 == 0) + '\x02');
  uVar7 = FUN_1401aebe8(&local_58,&DAT_149e060b2,1);
  if (local_68 != 0) {
    uVar7 = FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  puVar8 = local_58;
  if (local_50 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  local_a8 = 0;
  local_94 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  uVar7 = FUN_147dd9db4(param_1,&local_68,puVar8,1);
  local_90 = param_2;
  if (0 < (int)uStack_60) {
    local_94 = (uint)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    lVar10 = 8;
    lVar11 = 0;
    do {
      lVar4 = local_68;
      FUN_140056680(&local_88,param_2);
      iVar1 = *(int *)(lVar4 + lVar10);
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      FUN_1412cfe60(&local_78,&local_88,iVar2 + 1 + (uint)(local_80 == 0));
      FUN_1401aebe8(&local_78,*(undefined8 *)(lVar4 + -8 + lVar10),iVar2);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      puVar8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar8 = local_78;
      }
      cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar8)
      ;
      param_2 = local_90;
      if (cVar5 == '\0') {
        local_94 = 0;
      }
      else {
        puVar8 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar8 = local_78;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),puVar8,0);
        puVar8 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar8 = local_78;
        }
        bVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                          (*(longlong **)(param_1 + 8),puVar8);
        local_94 = CONCAT31((int3)(local_94 >> 8),(byte)local_94 & bVar6);
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < (int)uStack_60);
  }
  FUN_1447a1747(local_68);
  uVar3 = uStack_60 >> 0x20;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_1408be2c4(&local_68,0);
  }
  puVar8 = local_58;
  if (local_50 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  local_a8 = 1;
  FUN_147dd9db4(param_1,&local_68,puVar8,0);
  if (0 < (int)uStack_60) {
    lVar11 = 8;
    lVar10 = 0;
    do {
      lVar4 = local_68;
      FUN_140056680(&local_88,param_2);
      iVar1 = *(int *)(lVar4 + lVar11);
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      FUN_1412cfe60(&local_78,&local_88,iVar2 + 1 + (uint)(local_80 == 0));
      FUN_1401aebe8(&local_78,*(undefined8 *)(lVar4 + -8 + lVar11),iVar2);
      puVar8 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar8 = local_78;
      }
      bVar6 = FUN_147dd9a42(param_1,puVar8);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_94 = CONCAT31((int3)(local_94 >> 8),(byte)local_94 & bVar6);
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x10;
      param_2 = local_90;
    } while (lVar10 < (int)uStack_60);
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2);
  uVar9 = local_94;
  if (cVar5 == '\0') {
    bVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2)
    ;
    uVar9 = (uint)((bVar6 ^ 1) & (byte)local_94);
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147dd9db4 FUN_147dd9db4 body=386 status=ok
// SIG undefined FUN_147dd9db4(void)

void FUN_147dd9db4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined2 *local_88;
  int local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(local_98,param_3);
  FUN_14093d9c4(&local_88,local_98);
  puVar2 = local_88;
  local_70 = 0;
  local_78 = &PTR_FUN_14ab2e570;
  local_60 = (void *)0x0;
  lVar3 = (longlong)local_80;
  local_58 = local_80;
  local_68 = param_2;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_80,0);
    memcpy(local_60,puVar2,lVar3 * 2);
  }
  local_4f = param_5;
  local_50 = param_4;
  if (puVar2 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar2);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140056680(local_98,param_3);
  FUN_140beea4a(&local_88,local_98);
  puVar2 = local_88;
  if (local_80 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar1 + 0x130))(plVar1,puVar2,&local_78);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14ab2e570;
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dd9f38 FUN_147dd9f38 body=259 status=ok
// SIG undefined FUN_147dd9f38(void)

undefined8 * FUN_147dd9f38(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_48);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_38,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar2);
  if ((cVar1 == '\0') && (cVar1 = FUN_147dda03c(param_1,param_3,0), cVar1 != '\0')) {
    FUN_140056680(&local_48,param_3);
    FUN_140aa5ef8(param_2,&local_48);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_38;
    *(int *)(param_2 + 1) = local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147dda03c FUN_147dda03c body=438 status=ok
// SIG undefined FUN_147dda03c(void)

ulonglong FUN_147dda03c(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  longlong local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = uVar3;
  if ((*(int *)(param_1 + 0x88) != 0) || (*(int *)(param_1 + 0x78) != 0)) {
    FUN_140056680(&local_58);
    uVar3 = FUN_1401ae5e4(&local_58);
    if (param_3 == '\0') {
      iVar1 = *(int *)(param_1 + 0x78);
      if (0 < (longlong)iVar1) {
        local_68 = local_58;
        puVar10 = local_58;
        if (local_50 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        iVar5 = local_50 + -1;
        if (local_50 == 0) {
          iVar5 = 0;
        }
        piVar9 = (int *)(*(longlong *)(param_1 + 0x70) + 8);
        uVar6 = 1;
        local_60 = param_1;
        do {
          iVar2 = *piVar9;
          iVar8 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar8 = 0;
          }
          puVar7 = &DAT_149dfb77a;
          if (iVar2 != 0) {
            puVar7 = *(undefined2 **)(piVar9 + -2);
          }
          uVar3 = FUN_14038a9c4(puVar10,iVar5,puVar7,iVar8);
          bVar4 = (byte)uVar3;
          if (bVar4 != 0) break;
          uVar3 = uVar6 + 1;
          piVar9 = piVar9 + 4;
          bVar11 = uVar6 < (ulonglong)(longlong)iVar1;
          uVar6 = uVar3;
        } while (bVar11);
        goto LAB_147dda191;
      }
LAB_147dda1ef:
      bVar4 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x88);
      if ((longlong)iVar1 < 1) goto LAB_147dda1ef;
      local_68 = local_58;
      puVar10 = local_58;
      if (local_50 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      iVar5 = local_50 + -1;
      if (local_50 == 0) {
        iVar5 = 0;
      }
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 8);
      uVar6 = 1;
      local_60 = param_1;
      do {
        iVar2 = *piVar9;
        iVar8 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar8 = 0;
        }
        puVar7 = &DAT_149dfb77a;
        if (iVar2 != 0) {
          puVar7 = *(undefined2 **)(piVar9 + -2);
        }
        uVar3 = FUN_14038a9c4(puVar10,iVar5,puVar7,iVar8);
        bVar4 = (byte)uVar3;
        if (bVar4 != 0) break;
        uVar3 = uVar6 + 1;
        piVar9 = piVar9 + 4;
        bVar11 = uVar6 < (ulonglong)(longlong)iVar1;
        uVar6 = uVar3;
      } while (bVar11);
LAB_147dda191:
      bVar4 = bVar4 ^ 1;
      param_1 = local_60;
      local_58 = local_68;
    }
    if (local_58 != (undefined2 *)0x0) {
      uVar3 = FUN_1400020a8(local_58);
    }
    if (bVar4 == 0) {
      uVar3 = 0;
      goto LAB_147dda1b7;
    }
  }
  uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)(param_1 + 0xd8)) ^ 1;
LAB_147dda1b7:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147dda1f4 FUN_147dda1f4 body=93 status=ok
// SIG undefined FUN_147dda1f4(void)

undefined8 FUN_147dda1f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e92480(param_1,local_28);
  FUN_140aa5ef8(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dda252 FUN_147dda252 body=150 status=ok
// SIG undefined FUN_147dda252(void)

longlong * FUN_147dda252(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x68) < 2) {
    uVar1 = FUN_147dda2ea();
    FUN_140bee914(&local_30,uVar1);
    if ((longlong *)(param_1 + 0x60) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x60) = local_30;
      *(undefined4 *)(param_1 + 0x68) = local_28;
      *(undefined4 *)(param_1 + 0x6c) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (longlong *)(param_1 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dda2ea FUN_147dda2ea body=353 status=ok
// SIG undefined FUN_147dda2ea(void)

longlong * FUN_147dda2ea(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) < 2) {
    uVar3 = FUN_140d6afb0();
    FUN_140056680(&local_30,uVar3);
    if (plVar1 == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      iVar2 = *(int *)(param_1 + 0x58);
    }
    else {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x50) = local_30;
      local_30 = 0;
      *(int *)(param_1 + 0x58) = local_28;
      *(undefined4 *)(param_1 + 0x5c) = local_24;
      iVar2 = local_28;
    }
    if (iVar2 < 2) {
      FUN_140033559(".\\Runtime/SandboxFile/Private/IPlatformFileSandboxWrapper.cpp",0x1b8,
                    L"SandboxFileWrapper tried to access project path before it was set.");
    }
    FUN_1401aea18(&local_30,plVar1);
    if (plVar1 == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x50) = local_30;
      local_30 = 0;
      *(int *)(param_1 + 0x58) = local_28;
      *(undefined4 *)(param_1 + 0x5c) = local_24;
    }
    FUN_140bee914(&local_30,plVar1);
    if (plVar1 == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x50) = local_30;
      *(int *)(param_1 + 0x58) = local_28;
      *(undefined4 *)(param_1 + 0x5c) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dda470 FUN_147dda470 body=177 status=ok
// SIG undefined FUN_147dda470(void)

ulonglong FUN_147dda470(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_40,param_2);
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,puVar4);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  if (cVar2 == '\0') {
    uVar5 = 0;
    cVar2 = FUN_147dda03c(param_1,param_2,0);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))
                        (*(longlong **)(param_1 + 8),param_2);
      uVar5 = (ulonglong)uVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147dda522 FUN_147dda522 body=180 status=ok
// SIG undefined FUN_147dda522(void)

longlong FUN_147dda522(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_38,param_2);
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((lVar3 < 0) && (cVar2 = FUN_147dda03c(param_1,param_2,0), cVar2 != '\0')) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147dda5d8 FUN_147dda5d8 body=250 status=ok
// SIG undefined FUN_147dda5d8(void)

ulonglong FUN_147dda5d8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_48,param_2);
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_38,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar4);
  uVar5 = CONCAT71((int7)((ulonglong)&local_48 >> 8),1);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    FUN_140e92480(param_1,&local_48,param_2);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,puVar4);
    uVar5 = (ulonglong)uVar3;
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147dda6d4 FUN_147dda6d4 body=206 status=ok
// SIG undefined FUN_147dda6d4(void)

undefined4 FUN_147dda6d4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e92480(param_1,&local_38,param_2);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_28,puVar3);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = local_28;
    if (local_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),puVar3);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147dda7a4 FUN_147dda7a4 body=323 status=ok
// SIG undefined FUN_147dda7a4(void)

undefined4 FUN_147dda7a4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e92480(param_1,&local_58);
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_48,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar2 == '\0') {
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),puVar4);
    if (cVar2 == '\0') {
      uVar3 = 0;
      goto LAB_147dda884;
    }
  }
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_58,param_2);
  puVar5 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar5 = local_58;
  }
  uVar3 = (**(code **)(*plVar1 + 0xa0))(plVar1,puVar5,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147dda884:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147dda8e8 FUN_147dda8e8 body=214 status=ok
// SIG undefined FUN_147dda8e8(void)

undefined4 FUN_147dda8e8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_40,param_2);
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_30,puVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = local_30;
    if (local_28 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
                      (*(longlong **)(param_1 + 8),puVar3,param_3);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147dda9c0 FUN_147dda9c0 body=234 status=ok
// SIG undefined FUN_147dda9c0(void)

undefined8 * FUN_147dda9c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_48);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_38,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),&local_48,puVar2);
  *param_2 = local_48;
  if ((local_48 == (undefined2 *)0x0) && (cVar1 = FUN_147dda03c(param_1,param_3,0), cVar1 != '\0'))
  {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,param_3);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ddaaac FUN_147ddaaac body=244 status=ok
// SIG undefined FUN_147ddaaac(void)

void FUN_147ddaaac(longlong param_1,undefined2 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_48,param_2);
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_38,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 == '\0') {
    cVar1 = FUN_147dda03c(param_1,param_2,0);
    if (cVar1 == '\0') goto LAB_147ddab53;
    plVar3 = *(longlong **)(param_1 + 8);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 8);
    param_2 = local_38;
    if (local_30 == 0) {
      param_2 = &DAT_149dfb77a;
    }
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0xb8))(plVar3,param_2,param_3);
LAB_147ddab53:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ddaba2 FUN_147ddaba2 body=254 status=ok
// SIG undefined FUN_147ddaba2(void)

undefined8 * FUN_147ddaba2(longlong param_1,undefined8 *param_2,undefined2 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  FUN_140e92480(param_1,&local_48);
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_38,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 == '\0') {
    cVar1 = FUN_147dda03c(param_1,param_3,0);
    if (cVar1 == '\0') goto LAB_147ddac4d;
    plVar3 = *(longlong **)(param_1 + 8);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 8);
    param_3 = local_38;
    if (local_30 == 0) {
      param_3 = &DAT_149dfb77a;
    }
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0xc0))(plVar3,param_2,param_3);
LAB_147ddac4d:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ddaca2 FUN_147ddaca2 body=325 status=ok
// SIG undefined FUN_147ddaca2(void)

undefined2 ** FUN_147ddaca2(longlong param_1,undefined2 **param_2,undefined2 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = (undefined2 *)0x0;
  param_2[1] = (undefined2 *)0x0;
  FUN_140e92480(0,&local_48);
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_38,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar4);
  if (cVar1 == '\0') {
    cVar1 = FUN_147dda03c(param_1,param_3,0);
    if (cVar1 == '\0') goto LAB_147ddad80;
    plVar3 = *(longlong **)(param_1 + 8);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 8);
    param_3 = local_38;
    if (local_30 == 0) {
      param_3 = &DAT_149dfb77a;
    }
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 200))(plVar3,&local_48,param_3);
  if (&local_48 == param_2) {
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_48;
    local_48 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
  }
LAB_147ddad80:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ddade8 FUN_147ddade8 body=195 status=ok
// SIG undefined FUN_147ddade8(void)

longlong FUN_147ddade8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_40,param_2);
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  lVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,puVar4,param_3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    cVar2 = FUN_147dda03c(param_1,param_2,0);
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                        (*(longlong **)(param_1 + 8),param_2,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147ddaeac FUN_147ddaeac body=142 status=ok
// SIG undefined FUN_147ddaeac(void)

undefined8 FUN_147ddaeac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_38,param_2);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 0x100))(plVar1,puVar3,param_3,param_4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddaf3c FUN_147ddaf3c body=178 status=ok
// SIG undefined FUN_147ddaf3c(void)

undefined8 FUN_147ddaf3c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_38,param_2);
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 1;
  if (cVar2 == '\0') {
    cVar2 = FUN_147dda03c(param_1,param_2,1);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147ddaff0 FUN_147ddaff0 body=123 status=ok
// SIG undefined FUN_147ddaff0(void)

undefined4 FUN_147ddaff0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_30,param_2);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 0x110))(plVar1,puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb06c FUN_147ddb06c body=123 status=ok
// SIG undefined FUN_147ddb06c(void)

undefined4 FUN_147ddb06c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_30,param_2);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 0x118))(plVar1,puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb0e8 FUN_147ddb0e8 body=230 status=ok
// SIG undefined FUN_147ddb0e8(void)

undefined4 * FUN_147ddb0e8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_58);
  if (iStack_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)CONCAT44(uStack_54,local_58);
  }
  (**(code **)(*plVar1 + 0x120))(plVar1,param_2,puVar3);
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)(param_2 + 8) & 4) == 0) {
    cVar2 = FUN_147dda03c(param_1,param_3,0);
    if (cVar2 != '\0') {
      cVar2 = FUN_147dda03c(param_1,param_3,1);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x120))
                  (*(longlong **)(param_1 + 8),&local_58,param_3);
        *(undefined8 *)(param_2 + 8) = local_38;
        *(undefined8 *)(param_2 + 4) = local_48;
        *(undefined8 *)(param_2 + 6) = uStack_40;
        *param_2 = local_58;
        param_2[1] = uStack_54;
        param_2[2] = iStack_50;
        param_2[3] = uStack_4c;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddb1d0 FUN_147ddb1d0 body=402 status=ok
// SIG undefined FUN_147ddb1d0(void)

undefined4 FUN_147ddb1d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  undefined **local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = 0;
  local_a0 = 0;
  local_a8 = &PTR_FUN_14ab2e590;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_98 = param_3;
  local_90 = param_1;
  FUN_140e92480(0,&local_b8,param_2);
  puVar3 = local_b8;
  if (local_b0 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))
                    (*(longlong **)(param_1 + 8),puVar3,&local_a8);
  if (cVar1 != '\0') {
    puVar3 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar3 = local_b8;
    }
    lVar4 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)puVar3 + lVar4);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)(param_2 + lVar4);
      if (uVar5 != uVar7) break;
      if (uVar5 == 0) goto LAB_147ddb306;
LAB_147ddb2bc:
      lVar4 = lVar4 + 2;
    }
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_147ddb2bc;
    }
    if (uVar5 != uVar7) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))
                        (*(longlong **)(param_1 + 8),param_2,&local_a8);
      goto LAB_147ddb308;
    }
LAB_147ddb306:
    uVar2 = 1;
  }
LAB_147ddb308:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = &PTR_FUN_14ab2e590;
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_88);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb364 FUN_147ddb364 body=404 status=ok
// SIG undefined FUN_147ddb364(void)

undefined4 FUN_147ddb364(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  undefined **local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_a8 = &PTR_FUN_14ab2e590;
  uVar2 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 1;
  local_98 = param_3;
  local_90 = param_1;
  FUN_140e92480(0,&local_b8,param_2);
  puVar3 = local_b8;
  if (local_b0 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))
                    (*(longlong **)(param_1 + 8),puVar3,&local_a8);
  if (cVar1 != '\0') {
    puVar3 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar3 = local_b8;
    }
    lVar4 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)puVar3 + lVar4);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)(param_2 + lVar4);
      if (uVar5 != uVar7) break;
      if (uVar5 == 0) goto LAB_147ddb49c;
LAB_147ddb452:
      lVar4 = lVar4 + 2;
    }
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_147ddb452;
    }
    if (uVar5 != uVar7) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))
                        (*(longlong **)(param_1 + 8),param_2,&local_a8);
      goto LAB_147ddb49e;
    }
LAB_147ddb49c:
    uVar2 = 1;
  }
LAB_147ddb49e:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = &PTR_FUN_14ab2e590;
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_88);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb4fa FUN_147ddb4fa body=399 status=ok
// SIG undefined FUN_147ddb4fa(void)

undefined4 FUN_147ddb4fa(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [40];
  undefined2 *local_b0;
  int local_a8;
  undefined **local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = &PTR_FUN_14ab2e5c0;
  uVar2 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_98 = param_3;
  local_90 = param_1;
  FUN_140e92480(0,&local_b0,param_2);
  puVar3 = local_b0;
  if (local_a8 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                    (*(longlong **)(param_1 + 8),puVar3,&local_a0);
  if (cVar1 != '\0') {
    puVar3 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar3 = local_b0;
    }
    lVar4 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)puVar3 + lVar4);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)(param_2 + lVar4);
      if (uVar5 != uVar7) break;
      if (uVar5 == 0) goto LAB_147ddb62d;
LAB_147ddb5e3:
      lVar4 = lVar4 + 2;
    }
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_147ddb5e3;
    }
    if (uVar5 != uVar7) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                        (*(longlong **)(param_1 + 8),param_2,&local_a0);
      goto LAB_147ddb62f;
    }
LAB_147ddb62d:
    uVar2 = 1;
  }
LAB_147ddb62f:
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = &PTR_FUN_14ab2e5c0;
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_88);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb68a FUN_147ddb68a body=454 status=ok
// SIG undefined FUN_147ddb68a(void)

ulonglong FUN_147ddb68a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = &PTR_FUN_14ab2e5c0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 1;
  local_a0 = param_3;
  local_98 = param_1;
  FUN_140e92480(0,&local_b8,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_c8,param_2);
  puVar4 = local_c8;
  if (local_c0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,puVar4,&local_a8);
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    puVar4 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar4 = local_b8;
    }
    lVar5 = 0;
    while( true ) {
      uVar7 = *(ushort *)((longlong)puVar4 + lVar5);
      uVar6 = (ulonglong)uVar7;
      uVar8 = *(ushort *)(param_2 + lVar5);
      if (uVar7 != uVar8) break;
      if (uVar7 == 0) goto LAB_147ddb7f1;
LAB_147ddb7a3:
      lVar5 = lVar5 + 2;
    }
    if ((uVar8 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar9 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_147ddb7a3;
    }
    if (uVar7 != uVar8) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b8))
                        (*(longlong **)(param_1 + 8),param_2,&local_a8);
      uVar6 = (ulonglong)uVar3;
      goto LAB_147ddb7f4;
    }
LAB_147ddb7f1:
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
LAB_147ddb7f4:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = &PTR_FUN_14ab2e5c0;
  local_48 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_90);
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147ddb852 FUN_147ddb852 body=123 status=ok
// SIG undefined FUN_147ddb852(void)

undefined4 FUN_147ddb852(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_30,param_2);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 0x1d0))(plVar1,puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb8ce FUN_147ddb8ce body=123 status=ok
// SIG undefined FUN_147ddb8ce(void)

undefined4 FUN_147ddb8ce(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_30,param_2);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar2 = (**(code **)(*plVar1 + 0x1d8))(plVar1,puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddb94a FUN_147ddb94a body=368 status=ok
// SIG undefined FUN_147ddb94a(void)

undefined4
FUN_147ddb94a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_140e92480(param_1,&local_58);
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (cVar2 == '\0') {
    FUN_140e92480(param_1,&local_58,param_2);
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_78 = param_5;
    uVar3 = (**(code **)(*plVar1 + 0x1e0))(plVar1,puVar4,param_3,param_4);
  }
  else {
    FUN_140e92480(param_1,&local_58,param_3);
    puVar4 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar4 = local_58;
    }
    FUN_140e92480(param_1,&local_68,param_2);
    puVar5 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    local_78 = param_5;
    uVar3 = (**(code **)(*plVar1 + 0x1e0))(plVar1,puVar5,puVar4,param_4);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147ddbabc FUN_147ddbabc body=239 status=ok
// SIG undefined FUN_147ddbabc(void)

undefined8 FUN_147ddbabc(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  longlong lVar3;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_40,param_2);
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_30,puVar5);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar1 = FUN_147dda03c(param_1,param_2,0);
  if (cVar1 != '\0') {
    puVar5 = local_30;
    if (local_28 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar5);
    if (cVar1 == '\0') {
      plVar4 = *(longlong **)(param_1 + 8);
      lVar3 = *plVar4;
      goto LAB_147ddbb66;
    }
  }
  plVar4 = *(longlong **)(param_1 + 8);
  param_2 = local_30;
  if (local_28 == 0) {
    param_2 = &DAT_149dfb77a;
  }
  lVar3 = *plVar4;
LAB_147ddbb66:
  uVar2 = (**(code **)(lVar3 + 0x178))(plVar4,param_2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddbbbe FUN_147ddbbbe body=239 status=ok
// SIG undefined FUN_147ddbbbe(void)

undefined8 FUN_147ddbbbe(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  longlong lVar3;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e92480(param_1,&local_40,param_2);
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140056680(&local_30,puVar5);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar1 = FUN_147dda03c(param_1,param_2,0);
  if (cVar1 != '\0') {
    puVar5 = local_30;
    if (local_28 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),puVar5);
    if (cVar1 == '\0') {
      plVar4 = *(longlong **)(param_1 + 8);
      lVar3 = *plVar4;
      goto LAB_147ddbc68;
    }
  }
  plVar4 = *(longlong **)(param_1 + 8);
  param_2 = local_30;
  if (local_28 == 0) {
    param_2 = &DAT_149dfb77a;
  }
  lVar3 = *plVar4;
LAB_147ddbc68:
  uVar2 = (**(code **)(lVar3 + 0x188))(plVar4,param_2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ddbcae FUN_147ddbcae body=73 status=ok
// SIG undefined FUN_147ddbcae(void)

undefined8 * FUN_147ddbcae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab2e590;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ddbcf8 FUN_147ddbcf8 body=1509 status=ok
// SIG undefined FUN_147ddbcf8(void)

ulonglong FUN_147ddbcf8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined7 uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  undefined2 *puVar17;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80 [2];
  undefined2 *local_70;
  ulonglong uStack_68;
  undefined2 *local_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined2 *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_50);
  puVar9 = local_50;
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (*(uint *)(lVar8 + 0xc0) < 2) {
LAB_147ddbd32:
    iVar3 = *(int *)(lVar8 + 0x18);
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    puVar9 = &DAT_149dfb77a;
    if (iVar3 != 0) {
      puVar9 = *(undefined2 **)(lVar8 + 0x10);
    }
    puVar17 = &DAT_149dfb77a;
    if ((int)uStack_48 != 0) {
      puVar17 = local_50;
    }
    iVar3 = FUN_144a54874(puVar17,puVar9,(longlong)iVar2);
    if (iVar3 == 0) {
      FUN_140056680(&local_60,puVar17);
      FUN_140e830ae(param_1 + 0x20,&local_70,&local_60,0);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x18);
      uVar4 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      uVar11 = (int)uStack_48 - 1;
      if ((int)uStack_48 == 0) {
        uVar11 = 0;
      }
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
      if (0 < (int)uVar11) {
        if ((int)uStack_48 - uVar11 != 0) {
          memmove(local_50,local_50 + uVar11,(longlong)(int)((int)uStack_48 - uVar11) * 2);
        }
        uStack_48 = CONCAT44(uStack_48._4_4_,(int)uStack_48 - uVar11);
      }
      cVar1 = FUN_144a791f8(&local_50,L"Engine/",7,1);
      if (cVar1 == '\0') {
        puVar9 = local_50;
        if ((int)uStack_48 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        lVar8 = 0;
        while( true ) {
          uVar14 = *(ushort *)((longlong)puVar9 + lVar8);
          uVar6 = (ulonglong)uVar14;
          uVar16 = *(ushort *)((longlong)L"Engine" + lVar8);
          if (uVar14 != uVar16) break;
          if (uVar14 == 0) goto LAB_147ddbf1d;
LAB_147ddc1d7:
          lVar8 = lVar8 + 2;
        }
        if ((uVar16 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar15 = (ulonglong)uVar16;
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar15]) goto LAB_147ddc1d7;
        }
        if (uVar14 != uVar16) {
          lVar8 = FUN_147dd99a6(*(undefined8 *)(param_1 + 0x18));
          uVar4 = *(int *)(lVar8 + 8) - 1;
          if (*(int *)(lVar8 + 8) == 0) {
            uVar4 = 0;
          }
          uVar11 = (int)uStack_48 - 1;
          if ((int)uStack_48 == 0) {
            uVar11 = 0;
          }
          if ((int)uVar4 < (int)uVar11) {
            uVar11 = uVar4;
          }
          if (0 < (int)uVar11) {
            if ((int)uStack_48 - uVar11 != 0) {
              memmove(local_50,local_50 + uVar11,(longlong)(int)((int)uStack_48 - uVar11) * 2);
            }
            uStack_48 = CONCAT44(uStack_48._4_4_,(int)uStack_48 - uVar11);
          }
          puVar7 = (undefined8 *)FUN_147dda2ea(*(undefined8 *)(param_1 + 0x18));
          iVar3 = (int)uStack_48 + -1;
          if ((int)uStack_48 == 0) {
            iVar3 = 0;
          }
          iVar2 = *(int *)(puVar7 + 1);
          local_88 = iVar3 + 1 + (uint)(iVar2 == 0);
          uVar10 = *puVar7;
          goto LAB_147ddbf46;
        }
      }
LAB_147ddbf1d:
      iVar3 = (int)uStack_48 + -1;
      if ((int)uStack_48 == 0) {
        iVar3 = 0;
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x48);
      local_88 = iVar3 + 1 + (uint)(iVar2 == 0);
      uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
LAB_147ddbf46:
      local_60 = (undefined2 *)0x0;
      FUN_14125bce8(&local_60,uVar10,iVar2,0);
      FUN_1401aebe8(&local_60,local_50,iVar3);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = local_60;
      uStack_48 = CONCAT44(uStack_54,iStack_58);
    }
    else {
      FUN_140e92480(lVar8,&local_60,puVar17);
      puVar9 = local_60;
      if (iStack_58 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      iVar3 = iStack_58 + -1;
      if (iStack_58 == 0) {
        iVar3 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar3,puVar9);
      iVar3 = FUN_1456cf568(param_1 + 0x20,uVar5,&local_60);
      uVar12 = (undefined7)((ulonglong)lVar8 >> 8);
      if (iVar3 != -1) {
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = CONCAT71(uVar12,1);
        goto LAB_147ddbfa1;
      }
      puVar9 = local_50;
      if ((int)uStack_48 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      cVar1 = FUN_147dda03c(*(undefined8 *)(param_1 + 0x18),puVar9,param_3);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71(uVar12,1);
      if (cVar1 == '\0') goto LAB_147ddbfa1;
    }
  }
  else {
    local_60 = (undefined2 *)0x0;
    lVar8 = (longlong)(int)uStack_48;
    iStack_58 = (int)uStack_48;
    if (lVar8 == 0) {
      uStack_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,uStack_48 & 0xffffffff,0);
      memcpy(local_60,puVar9,lVar8 * 2);
    }
    FUN_1401ae5e4(&local_60);
    lVar8 = *(longlong *)(param_1 + 0x18);
    if (iStack_58 == *(int *)(lVar8 + 0xb0)) {
      if (1 < iStack_58) {
        lVar13 = 0;
        while( true ) {
          uVar14 = *(ushort *)((longlong)local_60 + lVar13);
          uVar6 = (ulonglong)uVar14;
          uVar16 = *(ushort *)(*(longlong *)(lVar8 + 0xa8) + lVar13);
          if (uVar14 != uVar16) break;
          if (uVar14 == 0) goto LAB_147ddbfdf;
LAB_147ddbe3b:
          lVar13 = lVar13 + 2;
        }
        if ((uVar16 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar15 = (ulonglong)uVar16;
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar15]) goto LAB_147ddbe3b;
        }
        if (uVar14 != uVar16) goto LAB_147ddc031;
      }
LAB_147ddbfdf:
      if (*(int *)(lVar8 + 0xa0) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar8 + 0x98);
      }
      FUN_140115ae4(*(undefined8 *)(param_1 + 0x10),puVar9,1);
      lVar8 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(param_1 + 0x70) == '\x01') {
        if (*(int *)(lVar8 + 0xc0) == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = *(undefined2 **)(lVar8 + 0xb8);
        }
        (**(code **)(**(longlong **)(lVar8 + 8) + 0x1a8))(*(longlong **)(lVar8 + 8),puVar9,param_1);
        lVar8 = *(longlong *)(param_1 + 0x18);
      }
    }
    else if (*(int *)(lVar8 + 0xb0) + iStack_58 == 1) goto LAB_147ddbfdf;
LAB_147ddc031:
    iVar3 = 0;
    if (*(int *)(lVar8 + 0xc0) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)(lVar8 + 0xb8);
      iVar3 = *(int *)(lVar8 + 0xc0) + -1;
    }
    cVar1 = FUN_144a791f8(&local_50,puVar9,iVar3,1);
    if (cVar1 == '\0') {
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = *(longlong *)(param_1 + 0x18);
      goto LAB_147ddbd32;
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc0);
    uVar4 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    uVar11 = (int)uStack_48 - 1;
    puVar9 = local_50;
    if ((int)uStack_48 == 0) {
      uVar11 = 0;
      puVar9 = &DAT_149dfb77a;
    }
    if ((int)uVar11 <= (int)uVar4) {
      uVar4 = uVar11;
    }
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar6 = 0;
    }
    FUN_14006620a(local_80,puVar9 + uVar6,uVar11 - (int)uVar6);
    FUN_1407ec8fc(&local_70,*(longlong *)(param_1 + 0x18) + 0x98,local_80);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_50 = local_70;
    uStack_48 = uStack_68;
    local_70 = (undefined2 *)0x0;
    uStack_68 = 0;
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar9 = local_50;
  if ((int)uStack_48 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  uVar4 = FUN_140115ae4(*(undefined8 *)(param_1 + 0x10),puVar9,param_3);
  uVar6 = (ulonglong)uVar4;
LAB_147ddbfa1:
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147ddc2de FUN_147ddc2de body=73 status=ok
// SIG undefined FUN_147ddc2de(void)

undefined8 * FUN_147ddc2de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab2e5c0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ddc328 FUN_147ddc328 body=1390 status=ok
// SIG undefined FUN_147ddc328(void)

ulonglong FUN_147ddc328(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined7 uVar13;
  longlong lVar14;
  undefined2 **ppuVar15;
  ushort uVar16;
  ushort uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98 [2];
  undefined2 *local_88;
  ulonglong uStack_80;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(&local_50);
  puVar8 = local_50;
  lVar11 = *(longlong *)(param_1 + 0x10);
  if (*(uint *)(lVar11 + 0xc0) < 2) {
LAB_147ddc368:
    iVar3 = *(int *)(lVar11 + 0x18);
    iVar2 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    puVar8 = &DAT_149dfb77a;
    if (iVar3 != 0) {
      puVar8 = *(undefined2 **)(lVar11 + 0x10);
    }
    puVar12 = &DAT_149dfb77a;
    if ((int)uStack_48 != 0) {
      puVar12 = local_50;
    }
    iVar3 = FUN_144a54874(puVar12,puVar8,(longlong)iVar2);
    if (iVar3 == 0) {
      FUN_140056680(&local_88,puVar12);
      FUN_140e830ae(param_1 + 0x18,&local_60,&local_88,0);
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
      uVar4 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      uVar10 = (int)uStack_48 - 1;
      if ((int)uStack_48 == 0) {
        uVar10 = 0;
      }
      if ((int)uVar4 < (int)uVar10) {
        uVar10 = uVar4;
      }
      if (0 < (int)uVar10) {
        if ((int)uStack_48 - uVar10 != 0) {
          memmove(local_50,local_50 + uVar10,(longlong)(int)((int)uStack_48 - uVar10) * 2);
        }
        uStack_48 = CONCAT44(uStack_48._4_4_,(int)uStack_48 - uVar10);
      }
      cVar1 = FUN_144a791f8(&local_50,L"Engine/",7,1);
      if (cVar1 == '\0') {
        puVar7 = (undefined8 *)FUN_147dda252();
        iVar3 = (int)uStack_48 + -1;
        if ((int)uStack_48 == 0) {
          iVar3 = 0;
        }
        iVar2 = *(int *)(puVar7 + 1);
        local_a8 = iVar3 + 1 + (uint)(iVar2 == 0);
        uVar9 = *puVar7;
      }
      else {
        iVar3 = (int)uStack_48 + -1;
        if ((int)uStack_48 == 0) {
          iVar3 = 0;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x48);
        local_a8 = iVar3 + 1 + (uint)(iVar2 == 0);
        uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
      }
      local_88 = (undefined2 *)0x0;
      FUN_14125bce8(&local_88,uVar9,iVar2,0);
      FUN_1401aebe8(&local_88,local_50,iVar3);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = local_88;
      uStack_48 = uStack_80;
    }
    else {
      ppuVar15 = &local_88;
      FUN_140e92480(lVar11,ppuVar15,puVar12);
      puVar8 = local_88;
      if ((int)uStack_80 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      iVar3 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar3 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar3,puVar8);
      iVar3 = FUN_1456cf568(param_1 + 0x18,uVar5,ppuVar15);
      uVar13 = (undefined7)((ulonglong)lVar11 >> 8);
      if (iVar3 != -1) {
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = CONCAT71(uVar13,1);
        goto LAB_147ddc5ea;
      }
      puVar8 = local_50;
      if ((int)uStack_48 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      cVar1 = FUN_147dda03c(*(undefined8 *)(param_1 + 0x10),puVar8,
                            CONCAT71((int7)((ulonglong)ppuVar15 >> 8),
                                     *(undefined1 *)(param_3 + 0x20)) & 0xffffffffffffff01);
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71(uVar13,1);
      if (cVar1 == '\0') goto LAB_147ddc5ea;
    }
  }
  else {
    local_60 = (void *)0x0;
    lVar11 = (longlong)(int)uStack_48;
    local_58 = (int)uStack_48;
    if (lVar11 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,uStack_48 & 0xffffffff,0);
      memcpy(local_60,puVar8,lVar11 * 2);
    }
    FUN_1401ae5e4(&local_60);
    lVar11 = *(longlong *)(param_1 + 0x10);
    if (local_58 == *(int *)(lVar11 + 0xb0)) {
      if (1 < local_58) {
        lVar14 = 0;
        while( true ) {
          uVar16 = *(ushort *)((longlong)local_60 + lVar14);
          uVar6 = (ulonglong)uVar16;
          uVar17 = *(ushort *)(*(longlong *)(lVar11 + 0xa8) + lVar14);
          if (uVar16 != uVar17) break;
          if (uVar16 == 0) goto LAB_147ddc632;
LAB_147ddc477:
          lVar14 = lVar14 + 2;
        }
        if ((uVar17 | uVar16) < 0x80) {
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar18 = (ulonglong)uVar17;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar18]) goto LAB_147ddc477;
        }
        if (uVar16 != uVar17) goto LAB_147ddc6b5;
      }
LAB_147ddc632:
      puVar12 = &DAT_149dfb77a;
      puVar8 = &DAT_149dfb77a;
      if (*(int *)(lVar11 + 0xa0) != 0) {
        puVar8 = *(undefined2 **)(lVar11 + 0x98);
      }
      (**(code **)(**(longlong **)(lVar11 + 8) + 0x120))
                (*(longlong **)(lVar11 + 8),&local_88,puVar8);
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xa0) != 0) {
        puVar12 = *(undefined2 **)(*(longlong *)(param_1 + 0x10) + 0x98);
      }
      FUN_1467b706a(*(undefined8 *)(param_1 + 8),puVar12,&local_88);
      if (*(char *)(param_1 + 0x68) == '\x01') {
        lVar11 = *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar11 + 0xc0) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = *(undefined2 **)(lVar11 + 0xb8);
        }
        (**(code **)(**(longlong **)(lVar11 + 8) + 0x1b8))
                  (*(longlong **)(lVar11 + 8),puVar8,param_1);
      }
      lVar11 = *(longlong *)(param_1 + 0x10);
    }
    else if (*(int *)(lVar11 + 0xb0) + local_58 == 1) goto LAB_147ddc632;
LAB_147ddc6b5:
    iVar3 = 0;
    if (*(int *)(lVar11 + 0xc0) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(lVar11 + 0xb8);
      iVar3 = *(int *)(lVar11 + 0xc0) + -1;
    }
    cVar1 = FUN_144a791f8(&local_50,puVar8,iVar3,1);
    if (cVar1 == '\0') {
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = *(longlong *)(param_1 + 0x10);
      goto LAB_147ddc368;
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0);
    uVar4 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    uVar10 = (int)uStack_48 - 1;
    puVar8 = local_50;
    if ((int)uStack_48 == 0) {
      uVar10 = 0;
      puVar8 = &DAT_149dfb77a;
    }
    if ((int)uVar10 <= (int)uVar4) {
      uVar4 = uVar10;
    }
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar6 = 0;
    }
    FUN_14006620a(local_98,puVar8 + uVar6,uVar10 - (int)uVar6);
    FUN_1407ec8fc(&local_88,*(longlong *)(param_1 + 0x10) + 0x98,local_98);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_50 = local_88;
    uStack_48 = uStack_80;
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0;
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar8 = local_50;
  if ((int)uStack_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar4 = FUN_1467b706a(*(undefined8 *)(param_1 + 8),puVar8,param_3);
  uVar6 = (ulonglong)uVar4;
LAB_147ddc5ea:
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147ddc898 FUN_147ddc898 body=31 status=ok
// SIG undefined FUN_147ddc898(void)

undefined8 FUN_147ddc898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ddc8d4 FUN_147ddc8d4 body=93 status=ok
// SIG undefined FUN_147ddc8d4(void)

void FUN_147ddc8d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab2e5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ddc932 FUN_147ddc932 body=123 status=ok
// SIG undefined FUN_147ddc932(void)

void FUN_147ddc932(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2e5e0;
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



// FUNCTION 147ddc9ae FUN_147ddc9ae body=21 status=ok
// SIG undefined FUN_147ddc9ae(void)

undefined8 FUN_147ddc9ae(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147ddc9c4 FUN_147ddc9c4 body=78 status=ok
// SIG undefined FUN_147ddc9c4(void)

undefined8 * FUN_147ddc9c4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_147dddf68(param_1 + 1,0);
  puVar1 = (undefined1 *)param_1[1];
  *puVar1 = 0x1c;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 147ddca12 FUN_147ddca12 body=46 status=ok
// SIG undefined FUN_147ddca12(void)

void FUN_147ddca12(longlong param_1)

{
  FUN_147dddf39(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ddca40 FUN_147ddca40 body=4 status=ok
// SIG undefined FUN_147ddca40(void)

undefined8 FUN_147ddca40(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 147ddca44 FUN_147ddca44 body=16 status=ok
// SIG undefined FUN_147ddca44(void)

longlong FUN_147ddca44(longlong param_1)

{
  return (longlong)(*(int *)(param_1 + 0x10) + -1) * 0x20 + *(longlong *)(param_1 + 8);
}



// FUNCTION 147ddca54 FUN_147ddca54 body=1026 status=ok
// SIG undefined FUN_147ddca54(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000147ddd05d) overlaps instruction at (ram,0x000147ddd05a)
    */
/* WARNING: Removing unreachable block (ram,0x000147ddcfd9) */
/* WARNING: Removing unreachable block (ram,0x000147ddcfeb) */
/* WARNING: Removing unreachable block (ram,0x000147ddcffd) */
/* WARNING: Removing unreachable block (ram,0x000147ddd16e) */
/* WARNING: Removing unreachable block (ram,0x000147ddcf8e) */
/* WARNING: Removing unreachable block (ram,0x000147ddd11f) */
/* WARNING: Removing unreachable block (ram,0x000147ddcfa1) */
/* WARNING: Removing unreachable block (ram,0x000147ddcfc3) */
/* WARNING: Removing unreachable block (ram,0x000147ddd142) */

undefined8 * FUN_147ddca54(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  void *_Src;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined7 uVar19;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  byte bVar20;
  byte bVar21;
  byte *pbVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong unaff_RBX;
  byte *pbVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auStack_68 [32];
  ulonglong *puStack_48;
  
  *param_2 = 0x1c;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  pbVar14 = param_2 + 0x10;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  pbVar14[0] = 0;
  pbVar14[1] = 0;
  pbVar14[2] = 0;
  pbVar14[3] = 0;
  pbVar14[4] = 0;
  pbVar14[5] = 0;
  pbVar14[6] = 0;
  pbVar14[7] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  bVar20 = *(byte *)param_1[1];
  if ((byte)((bVar20 & 0x1f) - 0x1d) < 2) {
LAB_147ddcaa1:
    *param_2 = bVar20;
    return (undefined8 *)0x0;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    bVar20 = 0x1e;
    *(byte *)param_1[1] = 0x1e;
    goto LAB_147ddcaa1;
  }
  plVar1 = param_1 + 1;
  bVar20 = *(byte *)(lVar4 + 0x2a);
  *(byte *)(lVar4 + 0x2a) = bVar20 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  lVar12 = (longlong)((int)param_1[2] + -1) * 0x20;
  pbVar22 = (byte *)(param_1[1] + lVar12);
  bVar11 = *(byte *)(param_1[1] + lVar12);
  if ((((bVar11 & 0xe0 | 0x20) == 0xa0) && ((~bVar11 & 0x1f) != 0)) &&
     (*(longlong *)(pbVar22 + 8) == 0)) {
    *param_2 = 0xff;
    uVar15 = *(ulonglong *)(pbVar22 + 8);
LAB_147ddcd34:
    *(ulonglong *)(param_2 + 8) = uVar15;
    bVar11 = *pbVar22;
    iVar3 = *(int *)(param_2 + 0x18);
    *(uint *)(param_2 + 0x18) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1c) < iVar3 + 1U) {
      FUN_144761492(pbVar14,iVar3);
    }
    *(byte *)(*(longlong *)pbVar14 + (longlong)iVar3) = bVar11 & 0xe0;
    lVar23 = (longlong)(int)param_1[2] * 0x20;
    lVar12 = *(longlong *)(param_1[1] + -0x10 + lVar23);
    puVar17 = (undefined8 *)(param_1[1] + -0x10 + lVar23);
    *puVar17 = 0;
    puVar17[1] = 0;
    FUN_147dddfee(plVar1,(int)param_1[2] + -1);
    FUN_147dde046(plVar1);
    puVar17 = (undefined8 *)0x1;
    if (lVar12 != 0) {
      FUN_1400020a8(lVar12);
    }
    goto LAB_147ddcb3e;
  }
  cVar10 = (**(code **)(*(longlong *)*param_1 + 0x38))();
  if (cVar10 != '\0') {
    bVar11 = 0x3c;
    if (*pbVar22 != 0x1c) {
      *(undefined1 *)*plVar1 = 0x5e;
      bVar11 = 0x5e;
    }
    *param_2 = bVar11;
    goto LAB_147ddcb3c;
  }
  plVar13 = (longlong *)*param_1;
  pbVar5 = *(byte **)plVar13[1];
  pbVar26 = pbVar5 + 1;
  if ((byte *)((undefined8 *)plVar13[1])[1] < pbVar26) {
    pbVar26 = &DAT_00000001;
    plVar13 = (longlong *)(**(code **)(*plVar13 + 0x170))(plVar13,param_2);
  }
  else {
    *param_2 = *pbVar5;
    plVar13 = (longlong *)plVar13[1];
    *plVar13 = *plVar13 + 1;
  }
  uVar19 = (undefined7)((ulonglong)plVar13 >> 8);
  puVar18 = (ulonglong *)CONCAT71(uVar19,*param_2);
  bVar11 = *pbVar22;
  uVar24 = bVar11 >> 5 ^ 4;
  if (*param_2 == 0xff) {
    if (((uVar24 < 8) && ((0xc3U >> uVar24 & 1) != 0)) && ((~bVar11 & 0x1f) == 0)) {
      uVar15 = *(ulonglong *)(pbVar22 + 8);
      if (((bVar11 & 0xe0) != 0xa0) || ((uVar15 & 1) == 0)) goto LAB_147ddcd34;
      pbVar14 = (byte *)*plVar1;
      bVar11 = 0x3e;
    }
    else {
      pbVar14 = (byte *)*plVar1;
      bVar11 = 0x3d;
    }
LAB_147ddcc75:
    *pbVar14 = bVar11;
    *param_2 = bVar11;
    goto LAB_147ddcb3c;
  }
  if ((((byte)uVar24 < 8) && (pbVar26 = (byte *)0xc3, (0xc3U >> uVar24 & 1) != 0)) &&
     ((~bVar11 & 0x1f) == 0)) {
    *(longlong *)(pbVar22 + 8) = *(longlong *)(pbVar22 + 8) + 1;
    puVar18 = (ulonglong *)CONCAT71(uVar19,*param_2);
    if (((bVar11 & 0xc0) == 0x40) && ((bVar11 & 0x60) != (*param_2 & 0xe0))) {
      pbVar14 = (byte *)*plVar1;
      bVar11 = 0x7d;
      goto LAB_147ddcc75;
    }
  }
  else if (((bVar11 & 0xe0 | 0x20) == 0xa0) && ((~bVar11 & 0x1f) != 0)) {
    *(longlong *)(pbVar22 + 8) = *(longlong *)(pbVar22 + 8) + -1;
    puVar18 = (ulonglong *)CONCAT71(uVar19,*param_2);
  }
  bVar21 = (byte)(((ulonglong)puVar18 & 0xffffffff) >> 5) & 7;
  puVar25 = &switchD_147ddcc5a::caseD_18;
  bVar27 = 0xfffffffeb54d189f < (ulonglong)(longlong)(int)(&switchD_147ddcc5a::caseD_18)[bVar21 ^ 4]
  ;
  pbVar22 = (byte *)((longlong)&switchD_147ddcc5a::caseD_18 +
                    (longlong)(int)(&switchD_147ddcc5a::caseD_18)[bVar21 ^ 4]);
  bVar28 = pbVar22 == (byte *)0x0;
  bVar11 = (byte)puVar18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar21) {
  case 0:
    if ((~bVar11 & 0x1f) == 0) {
LAB_147ddcc9b:
      lVar12 = 0;
    }
    else {
      lVar12 = FUN_147ddce54(param_2,*param_1);
    }
    goto LAB_147ddcc9d;
  case 1:
    if ((~bVar11 & 0x1f) == 0) goto LAB_147ddcc9b;
    lVar12 = FUN_147ddce54(param_2,*param_1);
    lVar12 = lVar12 * 2;
LAB_147ddcc9d:
    *(longlong *)(param_2 + 8) = lVar12;
LAB_147ddcca1:
    iVar3 = (int)param_1[2];
    *(uint *)(param_1 + 2) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x14) < iVar3 + 1U) {
      FUN_147dddf68(plVar1,iVar3);
    }
    lVar12 = *plVar1;
    lVar23 = (longlong)iVar3 * 0x20;
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    puVar2 = (undefined4 *)(lVar12 + lVar23);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    *(undefined8 *)(lVar12 + 0x10 + lVar23) = 0;
    iVar3 = *(int *)(param_2 + 0x18);
    _Src = *(void **)(param_2 + 0x10);
    *(int *)(lVar12 + 0x18 + lVar23) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)(lVar12 + lVar23 + 0x1c) = 0;
    }
    else {
      puVar17 = (undefined8 *)(lVar23 + lVar12 + 0x10);
      FUN_1409e00a6(puVar17,iVar3,0);
      memcpy((void *)*puVar17,_Src,(longlong)iVar3);
    }
LAB_147ddcd01:
    puVar17 = (undefined8 *)0x1;
    if ((byte)((*param_2 & 0x1f) - 0x1d) < 2) {
      *(byte *)*plVar1 = *param_2;
LAB_147ddcb3c:
      puVar17 = (undefined8 *)0x0;
    }
LAB_147ddcb3e:
    *(byte *)(lVar4 + 0x2a) = *(byte *)(lVar4 + 0x2a) & 0xfd | bVar20 & 2;
                    /* WARNING: Read-only address (ram,0x0001468564e6) is written */
    return puVar17;
  case 2:
  case 4:
    uVar15 = FUN_147ddce54(param_2,*param_1);
    goto LAB_147ddcdc3;
  case 3:
    FUN_147ddd010(param_2,*param_1);
    goto LAB_147ddcd01;
  case 5:
    uVar15 = FUN_147ddce54(param_2,*param_1);
    uVar15 = ~uVar15;
LAB_147ddcdc3:
    *(ulonglong *)(param_2 + 8) = uVar15;
    goto LAB_147ddcd01;
  case 6:
  case 7:
    if ((~bVar11 & 0x1f) != 0) {
      uVar15 = FUN_147ddce54(param_2,*param_1);
      *(ulonglong *)(param_2 + 8) = uVar15;
      if (0x7ffffffe < uVar15) {
        pbVar14 = (byte *)*plVar1;
        bVar11 = 0x7e;
        goto LAB_147ddcc75;
      }
      FUN_1410fe350(pbVar14,(int)uVar15 + 1,1);
      (**(code **)(*(longlong *)*param_1 + 0x170))
                ((longlong *)*param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      *(undefined1 *)(*(longlong *)(param_2 + 0x10) + uVar15) = 0;
      goto LAB_147ddcd01;
    }
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    goto LAB_147ddcca1;
  case 8:
switchD_147ddcc5a_caseD_8:
                    /* WARNING: This code block may not be properly labeled as switch case */
    (**(code **)(*(undefined **)puVar25 + 0x170))(puVar25,&puStack_48,8);
    puVar18 = puStack_48;
                    /* WARNING: Read-only address (ram,0x0001468564e6) is written */
    goto switchD_147ddce86_default;
  case 9:
switchD_147ddcc5a_caseD_9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (bVar27 || bVar28) {
      puStack_48._0_1_ = *pbVar22;
      *puVar18 = (ulonglong)pbVar26;
    }
    else {
      (**(code **)(*(undefined **)puVar25 + 0x170))(puVar25,&puStack_48,1);
    }
    puVar18 = (ulonglong *)(ulonglong)(byte)puStack_48;
    goto switchD_147ddce86_default;
  case 10:
switchD_147ddcc5a_caseD_a:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *pbVar22 = 0x1d;
    goto switchD_147ddce86_default;
  case 0xb:
switchD_147ddcc5a_caseD_b:
                    /* WARNING: This code block may not be properly labeled as switch case */
    (**(code **)(*(undefined **)puVar25 + 0x170))(puVar25,&puStack_48,4);
                    /* WARNING: Read-only address (ram,0x0001468564e6) is written */
    puVar18 = (ulonglong *)((ulonglong)puStack_48 & 0xffffffff);
    goto switchD_147ddce86_default;
  default:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uVar24 = (uint)puVar18 & 0x1f;
    puVar18 = (ulonglong *)(ulonglong)uVar24;
    puVar25 = (uint *)&PTR_caseD_54_14ab20160;
    switch(uVar24) {
    case 0x18:
      puVar18 = (ulonglong *)(undefined *)0x1468564e6;
      pbVar22 = (byte *)0xffffffc0c748ccc3;
      pbVar26 = (byte *)0xffffffc0c748ccc4;
      bVar27 = false;
      bVar28 = false;
      goto switchD_147ddcc5a_caseD_9;
    case 0x19:
      (*(code *)0x76abc92058d4c03)(&PTR_caseD_54_14ab20160,&puStack_48,2);
                    /* WARNING: Read-only address (ram,0x0001468564e6) is written */
      puVar18 = (ulonglong *)((ulonglong)puStack_48 & 0xffff);
      break;
    case 0x1a:
      goto switchD_147ddcc5a_caseD_b;
    case 0x1b:
      goto switchD_147ddcc5a_caseD_8;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
      goto switchD_147ddcc5a_caseD_a;
    }
switchD_147ddce86_default:
    if ((unaff_RBX ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return puVar18;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *(byte *)((longlong)param_1 + -0x35) = *(byte *)((longlong)param_1 + -0x35) ^ (byte)param_1;
    goto LAB_147ddd060;
  case 0x12:
  case 0x13:
                    /* WARNING: This code block may not be properly labeled as switch case */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
                    /* WARNING: This code block may not be properly labeled as switch case */
    *param_2 = *param_2 - (char)pbVar22;
    uVar24 = ((uint)puVar18 & 0x1f) - 0x14;
    puVar16 = (ulonglong *)(ulonglong)uVar24;
    if (uVar24 < 8) {
      puVar18 = (ulonglong *)
                ((longlong)&switchD_147ddd047::switchdataD_14ab2e7a0 +
                (longlong)(int)(&switchD_147ddd047::switchdataD_14ab2e7a0)[(longlong)puVar16]);
      puVar25 = (uint *)&PTR_caseD_54_14ab20160;
      switch(puVar16) {
      case (ulonglong *)0x0:
        *(undefined1 *)(param_1 + 2) = 0;
        goto switchD_147ddcc5a_caseD_15;
      case (ulonglong *)0x1:
        *(undefined1 *)(param_1 + 2) = 1;
        break;
      case (ulonglong *)0x4:
        puVar18 = (ulonglong *)(*(code *)0x76abc92058d4c03)(&PTR_caseD_54_14ab20160,&puStack_48,1);
        break;
      case (ulonglong *)0x5:
        *(undefined1 *)plVar1 = 0x5d;
        break;
      case (ulonglong *)0x6:
        puVar18 = (ulonglong *)(*(code *)0x76abc92058d4c03)(&PTR_caseD_54_14ab20160,&puStack_48,4);
                    /* WARNING: Read-only address (ram,0x0001468564e6) is written */
        *(undefined4 *)(param_1 + 2) = puStack_48._0_4_;
        break;
      case (ulonglong *)0x7:
        goto switchD_147ddcc5a_caseD_16;
      }
    }
    else {
      *(undefined1 *)plVar1 = 0x1d;
      puVar18 = puVar16;
    }
    break;
  case 0x15:
switchD_147ddcc5a_caseD_15:
                    /* WARNING: This code block may not be properly labeled as switch case */
    break;
  case 0x16:
switchD_147ddcc5a_caseD_16:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar18 = *(ulonglong **)((longlong)puVar25 + 8);
    puVar17 = (undefined8 *)*puVar18 + 1;
    if ((undefined8 *)puVar18[1] < puVar17) {
      if ((*(byte *)((longlong)puVar25 + 0x2a) & 2) == 0) {
        puVar18 = (ulonglong *)(**(code **)(*(undefined **)puVar25 + 0x170))(puVar25,&puStack_48,8);
      }
      else {
        puVar18 = (ulonglong *)thunk_FUN_146821949(puVar25,&puStack_48);
      }
    }
    else {
      puStack_48 = *(ulonglong **)*puVar18;
      *puVar18 = (ulonglong)puVar17;
    }
    param_1[2] = (longlong)puStack_48;
    break;
  case 0x17:
                    /* WARNING: This code block may not be properly labeled as switch case */
    pcVar6 = (code *)swi(3);
    puVar17 = (undefined8 *)(*pcVar6)();
    return puVar17;
  case 0x18:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: This code block may not be properly labeled as switch case */
    halt_baddata();
  }
                    /* WARNING: This code block may not be properly labeled as switch case */
  if ((unaff_RBX ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar18;
  }
LAB_147ddd060:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddce54 FUN_147ddce54 body=435 status=ok
// SIG undefined FUN_147ddce54(void)

ulonglong FUN_147ddce54(byte *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar6 = *param_1 & 0x1f;
  uVar7 = (ulonglong)uVar6;
  switch(uVar6) {
  case 0x18:
    puVar4 = (ulonglong *)param_2[1];
    pbVar2 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar2) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_18,1);
      bVar8 = (byte)local_18;
    }
    else {
      bVar8 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar2;
    }
    uVar7 = (ulonglong)bVar8;
    break;
  case 0x19:
    puVar4 = (ulonglong *)param_2[1];
    puVar3 = (undefined2 *)*puVar4 + 1;
    if ((undefined2 *)puVar4[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_18,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_18);
      }
    }
    else {
      local_18 = CONCAT62(local_18._2_6_,*(undefined2 *)*puVar4);
      *puVar4 = (ulonglong)puVar3;
    }
    uVar7 = local_18 & 0xffff;
    break;
  case 0x1a:
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_18,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_18);
      }
    }
    else {
      local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    uVar7 = local_18 & 0xffffffff;
    break;
  case 0x1b:
    puVar5 = (ulonglong *)param_2[1];
    puVar4 = (ulonglong *)*puVar5 + 1;
    if ((ulonglong *)puVar5[1] < puVar4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_18,8);
        uVar7 = local_18;
      }
      else {
        thunk_FUN_146821949(param_2,&local_18);
        uVar7 = local_18;
      }
    }
    else {
      uVar7 = *(ulonglong *)*puVar5;
      *puVar5 = (ulonglong)puVar4;
      local_18 = uVar7;
    }
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    *param_1 = 0x1d;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147ddd010 FUN_147ddd010 body=367 status=ok
// SIG undefined FUN_147ddd010(void)

void FUN_147ddd010(byte *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  switch(*param_1 & 0x1f) {
  case 0x14:
    param_1[8] = 0;
    break;
  case 0x15:
    param_1[8] = 1;
    break;
  case 0x16:
  case 0x17:
    break;
  case 0x18:
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_18,1);
    }
    else {
      *puVar3 = *puVar3 + 1;
    }
    break;
  case 0x19:
    *param_1 = 0x5d;
    break;
  case 0x1a:
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_18,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_18);
      }
    }
    else {
      local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    *(undefined4 *)(param_1 + 8) = (undefined4)local_18;
    break;
  case 0x1b:
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined8 *)*puVar3 + 1;
    if ((undefined8 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_18,8);
      }
      else {
        thunk_FUN_146821949(param_2,&local_18);
      }
    }
    else {
      local_18 = *(undefined8 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *(undefined8 *)(param_1 + 8) = local_18;
    break;
  default:
    *param_1 = 0x1d;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ddd180 FUN_147ddd180 body=273 status=ok
// SIG undefined FUN_147ddd180(void)

ulonglong FUN_147ddd180(longlong *param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  byte local_48 [8];
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == 0) ||
     ((*(byte *)(param_1[1] + (longlong)((int)param_1[2] + -1) * 0x20) & 0xe0) != param_2)) {
    uVar4 = 0;
  }
  else {
    local_48[0] = 0x1c;
    local_40 = 0;
    lStack_38 = 0;
    local_30 = 0;
    cVar1 = FUN_147ddca54();
    if (cVar1 != '\0') {
      iVar3 = 0;
      do {
        if (local_48[0] == 0xff) {
          bVar5 = iVar3 == 0;
          iVar3 = iVar3 + -1;
          if (bVar5) break;
LAB_147ddd21c:
          bVar5 = false;
        }
        else {
          uVar2 = local_48[0] >> 5 ^ 4;
          if (((7 < uVar2) || ((0xc3U >> uVar2 & 1) == 0)) ||
             (bVar5 = true, (~local_48[0] & 0x1f) != 0)) {
            if ((local_48[0] & 0xc0 | 0x20) != 0xa0) goto LAB_147ddd21c;
            bVar5 = (~local_48[0] & 0x1f) != 0;
          }
        }
        iVar3 = iVar3 + (uint)bVar5;
        cVar1 = FUN_147ddca54(param_1,local_48);
      } while (cVar1 != '\0');
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     (byte)((*(byte *)param_1[1] & 0x1f) - 0x1f) < 0xfe);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147ddd292 FUN_147ddd292 body=78 status=ok
// SIG undefined FUN_147ddd292(void)

undefined8 * FUN_147ddd292(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_147dddf68(param_1 + 1,0);
  puVar1 = (undefined1 *)param_1[1];
  *puVar1 = 0x1c;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 147ddd2e0 FUN_147ddd2e0 body=46 status=ok
// SIG undefined FUN_147ddd2e0(void)

void FUN_147ddd2e0(longlong param_1)

{
  FUN_147dddf39(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ddd30e FUN_147ddd30e body=330 status=ok
// SIG undefined FUN_147ddd30e(void)

void FUN_147ddd30e(longlong *param_1,undefined4 param_2,longlong param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [46];
  byte local_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_1;
  bVar3 = *(byte *)(lVar5 + 0x2a);
  *(byte *)(lVar5 + 0x2a) = bVar3 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  FUN_147ddd45a(param_1);
  if (param_3 < 0) {
    local_49 = (byte)param_2 | 0x1f;
    plVar6 = (longlong *)*param_1;
    puVar7 = (ulonglong *)plVar6[1];
    pbVar1 = (byte *)*puVar7 + 1;
    if ((byte *)puVar7[1] < pbVar1) {
      (**(code **)(*plVar6 + 0x170))(plVar6,&local_49,1);
    }
    else {
      local_49 = *(byte *)*puVar7;
      *puVar7 = (ulonglong)pbVar1;
    }
  }
  else {
    FUN_147ddd514(&local_4a,param_2,*param_1,param_3);
    local_49 = local_4a;
  }
  bVar9 = local_49;
  iVar4 = (int)param_1[2];
  *(uint *)(param_1 + 2) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar4 + 1U) {
    FUN_147dddf68(param_1 + 1,iVar4);
  }
  lVar10 = 0;
  if (-1 < param_3) {
    lVar10 = param_3 << ((byte)param_2 == 0xa0);
  }
  lVar8 = param_1[1];
  lVar11 = (longlong)iVar4 * 0x20;
  *(byte *)(lVar8 + lVar11) = bVar9;
  *(longlong *)(lVar8 + 8 + lVar11) = lVar10;
  puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(byte *)(lVar5 + 0x2a) = *(byte *)(lVar5 + 0x2a) & 0xfd | bVar3 & 2;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddd45a FUN_147ddd45a body=185 status=ok
// SIG undefined FUN_147ddd45a(void)

void FUN_147ddd45a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(*(int *)(param_1 + 0x10) + -1) * 0x20;
  lVar2 = *(longlong *)(param_1 + 8) + lVar6;
  bVar4 = *(byte *)(*(longlong *)(param_1 + 8) + lVar6);
  uVar5 = bVar4 >> 5 ^ 4;
  if (((uVar5 < 8) && ((0xc3U >> uVar5 & 1) != 0)) && ((~bVar4 & 0x1f) == 0)) {
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
  }
  else if (((bVar4 & 0xe0 | 0x20) == 0xa0) && ((~bVar4 & 0x1f) != 0)) {
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x20;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -0x10 + lVar6);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + -0x10 + lVar6);
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_147dddfee(param_1 + 8,*(int *)(param_1 + 0x10) + -1);
      FUN_147dde046(param_1 + 8);
      if (lVar2 != 0) {
        FUN_1400020a8(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ddd514 FUN_147ddd514 body=662 status=ok
// SIG undefined FUN_147ddd514(void)

byte * FUN_147ddd514(byte *param_1,byte param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  undefined1 local_21 [9];
  
  local_21._1_8_ = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 < 0x18) {
    local_21[0] = param_2 & 0xe0 | (byte)param_4;
    puVar2 = (ulonglong *)param_3[1];
    pbVar3 = (byte *)*puVar2 + 1;
    if (pbVar3 <= (byte *)puVar2[1]) {
      local_21[0] = *(byte *)*puVar2;
      goto LAB_147ddd5b3;
    }
    lVar1 = *param_3;
    puVar2 = (ulonglong *)local_21;
LAB_147ddd55b:
    uVar4 = 1;
  }
  else {
    if (param_4 < 0x100) {
      local_21[0] = param_2 & 0xe0 | 0x18;
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)*puVar2 + 1;
      if ((byte *)puVar2[1] < pbVar3) {
        (**(code **)(*param_3 + 0x170))(param_3,local_21,1);
      }
      else {
        local_21[0] = *(byte *)*puVar2;
        *puVar2 = (ulonglong)pbVar3;
      }
      local_30 = CONCAT71(local_30._1_7_,(byte)param_4);
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)(*puVar2 + 1);
      if (pbVar3 <= (byte *)puVar2[1]) goto LAB_147ddd5b3;
      lVar1 = *param_3;
      puVar2 = &local_30;
      goto LAB_147ddd55b;
    }
    if (param_4 < 0x10000) {
      local_21[0] = param_2 & 0xe0 | 0x19;
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)*puVar2 + 1;
      if ((byte *)puVar2[1] < pbVar3) {
        (**(code **)(*param_3 + 0x170))(param_3,local_21,1);
      }
      else {
        local_21[0] = *(byte *)*puVar2;
        *puVar2 = (ulonglong)pbVar3;
      }
      local_30 = CONCAT62(local_30._2_6_,(short)param_4);
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)(*puVar2 + 2);
      if (pbVar3 <= (byte *)puVar2[1]) goto LAB_147ddd5b3;
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) != 0) {
        thunk_FUN_1457251a8(param_3,&local_30);
        goto LAB_147ddd5b6;
      }
      lVar1 = *param_3;
      puVar2 = &local_30;
      uVar4 = 2;
    }
    else if (param_4 >> 0x20 == 0) {
      local_21[0] = param_2 & 0xe0 | 0x1a;
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)*puVar2 + 1;
      if ((byte *)puVar2[1] < pbVar3) {
        (**(code **)(*param_3 + 0x170))(param_3,local_21,1);
      }
      else {
        local_21[0] = *(byte *)*puVar2;
        *puVar2 = (ulonglong)pbVar3;
      }
      local_30 = CONCAT44(local_30._4_4_,(int)param_4);
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)(*puVar2 + 4);
      if (pbVar3 <= (byte *)puVar2[1]) {
LAB_147ddd5b3:
        *puVar2 = (ulonglong)pbVar3;
        goto LAB_147ddd5b6;
      }
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) != 0) {
        thunk_FUN_14572512c(param_3,&local_30);
        goto LAB_147ddd5b6;
      }
      lVar1 = *param_3;
      puVar2 = &local_30;
      uVar4 = 4;
    }
    else {
      local_21[0] = param_2 & 0xe0 | 0x1b;
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)*puVar2 + 1;
      if ((byte *)puVar2[1] < pbVar3) {
        (**(code **)(*param_3 + 0x170))(param_3,local_21,1);
      }
      else {
        local_21[0] = *(byte *)*puVar2;
        *puVar2 = (ulonglong)pbVar3;
      }
      puVar2 = (ulonglong *)param_3[1];
      pbVar3 = (byte *)(*puVar2 + 8);
      local_30 = param_4;
      if (pbVar3 <= (byte *)puVar2[1]) goto LAB_147ddd5b3;
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) != 0) {
        thunk_FUN_146821949(param_3,&local_30);
        goto LAB_147ddd5b6;
      }
      lVar1 = *param_3;
      puVar2 = &local_30;
      uVar4 = 8;
    }
  }
  (**(code **)(lVar1 + 0x170))(param_3,puVar2,uVar4);
LAB_147ddd5b6:
  *param_1 = local_21[0];
  if ((local_21._1_8_ ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddd7ac FUN_147ddd7ac body=225 status=ok
// SIG undefined FUN_147ddd7ac(void)

void FUN_147ddd7ac(longlong *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  bVar3 = *(byte *)(lVar4 + 0x2a);
  *(byte *)(lVar4 + 0x2a) = bVar3 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  local_31 = 0xff;
  plVar5 = (longlong *)*param_1;
  puVar6 = (ulonglong *)plVar5[1];
  puVar1 = (undefined1 *)*puVar6 + 1;
  if ((undefined1 *)puVar6[1] < puVar1) {
    (**(code **)(*plVar5 + 0x170))(plVar5,&local_31,1);
  }
  else {
    local_31 = *(undefined1 *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
  }
  lVar8 = (longlong)(int)param_1[2] * 0x20;
  lVar7 = *(longlong *)(param_1[1] + -0x10 + lVar8);
  puVar2 = (undefined8 *)(param_1[1] + -0x10 + lVar8);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_147dddfee(param_1 + 1,(int)param_1[2] + -1);
  FUN_147dde046(param_1 + 1);
  if (lVar7 != 0) {
    FUN_1400020a8(lVar7);
  }
  *(byte *)(lVar4 + 0x2a) = *(byte *)(lVar4 + 0x2a) & 0xfd | bVar3 & 2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddd88e FUN_147ddd88e body=147 status=ok
// SIG undefined FUN_147ddd88e(void)

void FUN_147ddd88e(longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x2a);
  *(byte *)(lVar2 + 0x2a) = bVar1 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  FUN_147ddd45a(param_1);
  if ((longlong)param_2 < 0) {
    param_2 = ~param_2;
    lVar5 = *param_1;
    puVar3 = &local_29;
    uVar4 = 0x20;
  }
  else {
    lVar5 = *param_1;
    puVar3 = &local_2a;
    uVar4 = 0;
  }
  FUN_147ddd514(puVar3,uVar4,lVar5,param_2);
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) & 0xfd | bVar1 & 2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddd922 FUN_147ddd922 body=159 status=ok
// SIG undefined FUN_147ddd922(void)

void FUN_147ddd922(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [47];
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x2a);
  *(byte *)(lVar2 + 0x2a) = bVar1 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  FUN_147ddd45a(param_1);
  local_29 = param_2 | 0xf4;
  param_1 = (longlong *)*param_1;
  puVar3 = (ulonglong *)param_1[1];
  if (puVar3[1] < *puVar3 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_29,1);
  }
  else {
    *puVar3 = *puVar3 + 1;
  }
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) & 0xfd | bVar1 & 2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddd9c2 FUN_147ddd9c2 body=227 status=ok
// SIG undefined FUN_147ddd9c2(void)

void FUN_147ddd9c2(longlong *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  bVar2 = *(byte *)(lVar3 + 0x2a);
  *(byte *)(lVar3 + 0x2a) = bVar2 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  local_24 = param_2;
  FUN_147ddd45a(param_1);
  local_25 = 0xfa;
  plVar4 = (longlong *)*param_1;
  puVar5 = (ulonglong *)plVar4[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*plVar4 + 0x170))(plVar4,&local_25,1);
  }
  else {
    local_25 = *(undefined1 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  param_1 = (longlong *)*param_1;
  puVar5 = (ulonglong *)param_1[1];
  if (puVar5[1] < *puVar5 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    *puVar5 = *puVar5 + 4;
  }
  *(byte *)(lVar3 + 0x2a) = *(byte *)(lVar3 + 0x2a) & 0xfd | bVar2 & 2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dddaa6 FUN_147dddaa6 body=227 status=ok
// SIG undefined FUN_147dddaa6(void)

void FUN_147dddaa6(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  bVar2 = *(byte *)(lVar3 + 0x2a);
  *(byte *)(lVar3 + 0x2a) = bVar2 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  local_28 = param_2;
  FUN_147ddd45a(param_1);
  local_29 = 0xfb;
  plVar4 = (longlong *)*param_1;
  puVar5 = (ulonglong *)plVar4[1];
  puVar1 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar1) {
    (**(code **)(*plVar4 + 0x170))(plVar4,&local_29,1);
  }
  else {
    local_29 = *(undefined1 *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  param_1 = (longlong *)*param_1;
  puVar5 = (ulonglong *)param_1[1];
  if (puVar5[1] < *puVar5 + 8) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_28,8);
    }
    else {
      thunk_FUN_146821949(param_1,&local_28);
    }
  }
  else {
    *puVar5 = *puVar5 + 8;
  }
  *(byte *)(lVar3 + 0x2a) = *(byte *)(lVar3 + 0x2a) & 0xfd | bVar2 & 2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dddb8a FUN_147dddb8a body=81 status=ok
// SIG undefined FUN_147dddb8a(void)

void FUN_147dddb8a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_10 = 0;
  }
  FUN_147dddbdc(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dddbdc FUN_147dddbdc body=209 status=ok
// SIG undefined FUN_147dddbdc(void)

void FUN_147dddbdc(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_f8 [47];
  undefined1 local_c9;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x2a);
  *(byte *)(lVar2 + 0x2a) = bVar1 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  FUN_147ddd45a(param_1);
  FUN_147dddcae(local_c8,param_2);
  FUN_147ddd514(&local_c9,0x60,*param_1,(longlong)local_38);
  (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,local_40,(longlong)local_38);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) & 0xfd | bVar1 & 2;
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dddcae FUN_147dddcae body=101 status=ok
// SIG undefined FUN_147dddcae(void)

longlong FUN_147dddcae(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_2 + 1);
  lVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    if ((int)uVar2 < 1) {
      bVar3 = false;
    }
    else {
      bVar3 = *(short *)(lVar1 + (ulonglong)(uVar2 - 1) * 2) == 0;
      if (bVar3) {
        uVar2 = uVar2 - 1;
      }
    }
    FUN_1446fe5a4(param_1,lVar1,uVar2,bVar3);
  }
  return param_1;
}



// FUNCTION 147dddd14 FUN_147dddd14 body=155 status=ok
// SIG undefined FUN_147dddd14(void)

void FUN_147dddd14(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x2a);
  *(byte *)(lVar2 + 0x2a) = bVar1 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  FUN_147ddd45a(param_1);
  FUN_147ddd514(&local_31,0x40,*param_1,param_3);
  (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,param_2,param_3);
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) & 0xfd | bVar1 & 2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddddb0 thunk_FUN_147dddd14 body=5 status=ok
// SIG undefined thunk_FUN_147dddd14(void)

void thunk_FUN_147dddd14(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  ulonglong uStack_30;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x2a);
  *(byte *)(lVar2 + 0x2a) = bVar1 & 0xfd | ((int)param_1[3] == 1) * '\x02';
  FUN_147ddd45a(param_1);
  FUN_147ddd514(&uStack_31,0x40,*param_1,param_3);
  (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,param_2,param_3);
  *(byte *)(lVar2 + 0x2a) = *(byte *)(lVar2 + 0x2a) & 0xfd | bVar1 & 2;
  if ((uStack_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddddb6 FUN_147ddddb6 body=29 status=ok
// SIG undefined FUN_147ddddb6(void)

void FUN_147ddddb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ab2e720;
  return;
}



// FUNCTION 147ddddd4 FUN_147ddddd4 body=36 status=ok
// SIG undefined FUN_147ddddd4(void)

undefined8 FUN_147ddddd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147ddde14 FUN_147ddde14 body=93 status=ok
// SIG undefined FUN_147ddde14(void)

void FUN_147ddde14(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab2e6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ddde72 FUN_147ddde72 body=123 status=ok
// SIG undefined FUN_147ddde72(void)

void FUN_147ddde72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab2e6b0;
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



// FUNCTION 147dddefa FUN_147dddefa body=21 status=ok
// SIG undefined FUN_147dddefa(void)

undefined8 FUN_147dddefa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dddf10 FUN_147dddf10 body=34 status=ok
// SIG undefined FUN_147dddf10(void)

undefined8 FUN_147dddf10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147dddf39 FUN_147dddf39 body=47 status=ok
// SIG undefined FUN_147dddf39(void)

void FUN_147dddf39(longlong param_1,int param_2)

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



// FUNCTION 147dddf68 FUN_147dddf68 body=132 status=ok
// SIG undefined FUN_147dddf68(void)

void FUN_147dddf68(longlong param_1,int param_2)

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



// FUNCTION 147dddfee FUN_147dddfee body=88 status=ok
// SIG undefined FUN_147dddfee(void)

void FUN_147dddfee(longlong *param_1,uint param_2)

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



// FUNCTION 147dde046 FUN_147dde046 body=62 status=ok
// SIG undefined FUN_147dde046(void)

void FUN_147dde046(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dde084(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147dde084 FUN_147dde084 body=93 status=ok
// SIG undefined FUN_147dde084(void)

ulonglong FUN_147dde084(uint param_1,uint param_2)

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



// FUNCTION 147dde11c FUN_147dde11c body=63 status=ok
// SIG undefined FUN_147dde11c(void)

void FUN_147dde11c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ab31f70;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_147ddca12(param_1 + 1);
  return;
}



// FUNCTION 147dde162 FUN_147dde162 body=63 status=ok
// SIG undefined FUN_147dde162(void)

undefined8 FUN_147dde162(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147ddca40(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  FUN_140002266(param_2,L"Offset: %llu",uVar2);
  return param_2;
}



// FUNCTION 147dde1a2 FUN_147dde1a2 body=106 status=ok
// SIG undefined FUN_147dde1a2(void)

undefined8 * FUN_147dde1a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb12640) {
    FUN_144b3d300(&DAT_14cb12640);
    if (DAT_14cb12640 == -1) {
      DAT_14cb12630 = 0;
      uRam000000014cb12638 = 0;
      atexit((_func_5014 *)&LAB_1437c4bb4);
      _Init_thread_footer(&DAT_14cb12640);
    }
  }
  return &DAT_14cb12630;
}



// FUNCTION 147dde20c FUN_147dde20c body=451 status=ok
// SIG undefined FUN_147dde20c(void)

/* WARNING: Instruction at (ram,0x0001437cb6e1) overlaps instruction at (ram,0x0001437cb6df)
    */
/* WARNING: Control flow encountered bad instruction data */

wchar_t **
FUN_147dde20c(wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,wchar_t *param_4,
             wchar_t **param_5,wchar_t **param_6,wchar_t **param_7,wchar_t *param_8,
             undefined8 param_9,wchar_t *param_10,undefined8 param_11,code *param_12,
             wchar_t **param_13,code *param_14,undefined8 param_15,undefined2 *param_16,
             undefined8 param_17,undefined8 param_18,wchar_t **param_19,undefined8 param_20,
             undefined8 param_21,wchar_t **param_22,undefined4 param_23,ulonglong param_24)

{
  byte *pbVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  wchar_t **ppwVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  double *pdVar15;
  void *pvVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  ulonglong *puVar22;
  wchar_t ***pppwVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  undefined7 uVar31;
  char *pcVar29;
  wchar_t **ppwVar30;
  byte bVar32;
  char cVar33;
  int iVar34;
  uint *puVar35;
  ulonglong uVar36;
  wchar_t *pwVar37;
  wchar_t *pwVar38;
  uint *puVar39;
  uint *puVar40;
  wchar_t **ppwVar41;
  char **ppcVar42;
  char **ppcVar43;
  char **ppcVar44;
  char **ppcVar45;
  char **ppcVar46;
  char **ppcVar47;
  char **ppcVar48;
  char **ppcVar49;
  char **ppcVar50;
  char **ppcVar51;
  char **ppcVar52;
  char **ppcVar53;
  char **ppcVar54;
  char **ppcVar55;
  int iVar56;
  wchar_t **unaff_RBP;
  size_t sVar57;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  longlong in_R10;
  wchar_t **ppwVar58;
  undefined *puVar59;
  longlong lVar60;
  wchar_t **unaff_R12;
  wchar_t **unaff_R13;
  wchar_t **ppwVar61;
  ulonglong unaff_R14;
  uint uVar62;
  wchar_t **ppwVar63;
  wchar_t **unaff_R15;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  float10 in_ST0;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uVar67;
  ulonglong unaff_retaddr;
  wchar_t **ppwStackX_8;
  wchar_t **ppwStackX_10;
  wchar_t **ppwStackX_18;
  wchar_t *pwStackX_20;
  undefined1 auStack_188 [32];
  wchar_t ***pppwStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined4 uStack_148;
  code *pcStack_140;
  undefined1 *puStack_138;
  code **ppcStack_130;
  void *pvStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  void *pvStack_108;
  ulonglong uStack_100;
  wchar_t **ppwStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *pvStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  ulonglong uStack_a8;
  wchar_t *pwStack_a0;
  char *pcStack_68;
  undefined1 auStack_60 [24];
  wchar_t *local_48;
  undefined8 local_40;
  undefined *local_38;
  wchar_t **ppwVar68;
  
  uVar12 = (undefined4)((ulonglong)unaff_RSI >> 0x20);
  uVar67 = (undefined4)(unaff_retaddr >> 0x20);
  ppcVar54 = &pcStack_68;
  ppcVar45 = &pcStack_68;
  ppcVar46 = &pcStack_68;
  ppcVar44 = &pcStack_68;
  ppcVar47 = &pcStack_68;
  ppcVar48 = &pcStack_68;
  ppcVar42 = &pcStack_68;
  ppcVar52 = &pcStack_68;
  ppcVar49 = &pcStack_68;
  ppcVar43 = &pcStack_68;
  ppcVar50 = &pcStack_68;
  ppcVar55 = &pcStack_68;
  ppcVar51 = &pcStack_68;
  local_38 = (undefined *)(DAT_14c707940 ^ (ulonglong)&pcStack_68);
  ppwVar63 = (wchar_t **)(param_1 + 0x24);
  param_1[0x28] = L'\0';
  param_1[0x29] = L'\0';
  if (*(int *)(param_1 + 0x2a) < 0) {
    FUN_1446f8c06(ppwVar63,0);
  }
  if (*ppwVar63 != (wchar_t *)0x0) {
    **ppwVar63 = L'\0';
  }
  if ((byte)param_1[0x2e] == 1) {
    iVar11 = 5;
    if (*(int *)(param_1 + 0x20) + -1 <= *(int *)(param_1 + 0x2c)) {
      *(byte *)(param_1 + 0x2e) = 0;
      iVar11 = 0;
    }
LAB_147dde271:
    *(int *)param_2 = iVar11;
    ppwVar30 = (wchar_t **)&DAT_00000001;
    goto switchD_147dde2ee_caseD_6;
  }
  ppwVar61 = (wchar_t **)(param_1 + 4);
  puVar40 = (uint *)(param_1 + 0x14);
  cVar8 = FUN_147ddca54(ppwVar61,puVar40);
  bVar32 = (byte)param_1[0x14];
  if (cVar8 == '\0') {
LAB_147dde30a:
    *(uint *)param_2 = 4 - (uint)((byte)((bVar32 & 0x1f) - 0x1d) < 2);
    ppwVar30 = (wchar_t **)0x0;
    goto switchD_147dde2ee_caseD_6;
  }
  if (bVar32 == 0xff) {
    iVar11 = 6;
    if (**(char **)(param_1 + 0x1c) == -0x80) {
      iVar11 = 0;
    }
    goto LAB_147dde271;
  }
  puVar27 = (undefined1 *)FUN_147ddca44(ppwVar61);
  uVar28 = CONCAT71((int7)((ulonglong)puVar27 >> 8),*puVar27) & 0xffffffffffffffe0;
  ppwVar58 = unaff_R12;
  if (((char)uVar28 == -0x60) &&
     (uVar28 = FUN_147ddca44(ppwVar61), (*(byte *)(uVar28 + 8) & 1) != 0)) {
    ppwVar58 = &local_48;
    FUN_147dde3d0(puVar40,ppwVar58);
    if (ppwVar63 == ppwVar58) {
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppwVar63 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *(wchar_t **)(param_1 + 0x24) = local_48;
      local_48 = (wchar_t *)0x0;
      *(int *)(param_1 + 0x28) = (int)local_40;
      *(int *)(param_1 + 0x2a) = local_40._4_4_;
    }
    uVar28 = FUN_147ddca54(ppwVar61,puVar40);
    if ((char)uVar28 == '\0') {
      bVar32 = (byte)*(wchar_t *)puVar40;
      goto LAB_147dde30a;
    }
  }
  bVar32 = (byte)*(wchar_t *)puVar40 >> 5;
  uVar31 = (undefined7)(uVar28 >> 8);
  ppwVar30 = (wchar_t **)CONCAT71(uVar31,1);
  puVar39 = &switchD_147dde2ee::switchdataD_14ab33454;
  uVar36 = (ulonglong)(int)(&switchD_147dde2ee::switchdataD_14ab33454)[bVar32 ^ 4];
  bVar64 = 0xfffffffeb54ccbab < uVar36;
  pwVar37 = (wchar_t *)((longlong)&switchD_147dde2ee::switchdataD_14ab33454 + uVar36);
  cVar33 = (char)pwVar37;
  uVar62 = (uint)pwVar37;
  uVar10 = (uint)ppwVar30;
  cVar8 = (char)pcStack_68;
  ppcVar53 = &pcStack_68;
  ppwVar68 = unaff_R12;
  pwVar38 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar32) {
  default:
    *(int *)param_2 = 5;
    break;
  case 2:
    *(int *)param_2 = 1;
    param_1[0x2c] = L'\0';
    param_1[0x2d] = L'\0';
    *(byte *)(param_1 + 0x2e) = 1;
    break;
  case 4:
    *(int *)param_2 = 1;
    break;
  case 5:
    *(int *)param_2 = 7;
    break;
  case 6:
    break;
  case 8:
    uVar9 = uVar10 + 0xb60f0000;
    if (!SCARRY4(uVar10,-0x49f10000)) {
      *(uint *)((ulonglong)uVar9 - 0x7b) = *(uint *)((ulonglong)uVar9 - 0x7b) | uVar62;
      *(byte *)param_1 = (byte)*param_1 >> 4 | (byte)*param_1 << 4;
      uVar10 = (uVar10 + 0xb8e45102) - (uint)((char)(byte)*param_1 < '\0');
      pcVar29 = (char *)(ulonglong)uVar10;
      *pcVar29 = *pcVar29 + (char)uVar10;
      ppcVar55 = &pcStack_68;
      if (((ulonglong)ppwVar58[3] & (ulonglong)pcVar29) == 0) goto LAB_1437c582a;
      iVar11 = *(int *)(param_1 + 0x3c);
      piVar13 = (int *)FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
      ppcVar55 = &pcStack_68;
      if (piVar13 == (int *)0x0) goto LAB_1437c582a;
      *piVar13 = iVar11;
      ppcVar50 = &pcStack_68;
      goto LAB_1437c529e;
    }
    uVar28 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\b' + (0x49f0ffff < uVar10));
code_r0x0001437c534f:
    if ((char)unaff_RBP == '\0') {
      bVar32 = 0;
    }
    else {
      bVar32 = (byte)param_1[0x4d];
    }
    *(byte *)(uVar28 + *(byte *)((longlong)param_1 + 0x99)) =
         *(byte *)(uVar28 + *(byte *)((longlong)param_1 + 0x99)) &
         ~*(byte *)((longlong)param_1 + 0x9b) | bVar32;
    ppcVar42 = &pcStack_68;
    goto LAB_1437c4ed2;
  case 9:
  case 10:
    goto switchD_147dde2ee_caseD_9;
  case 0xb:
    *(uint *)((longlong)ppwVar30 + 0x39) = *(int *)((longlong)ppwVar30 + 0x39) + uVar62;
    *(byte *)param_1 = (byte)*param_1 >> 1 | (byte)*param_1 << 7;
    *(int *)((longlong)&UINT_14ab3345c + uVar36) = *(int *)((longlong)&UINT_14ab3345c + uVar36) + 1;
    goto LAB_1437c56f5;
  case 0xc:
    *(int *)((longlong)ppwVar30 * 2) = (*(int *)((longlong)ppwVar30 * 2) - uVar62) - (uint)bVar64;
    pcVar29 = (char *)((longlong)pwVar37 * 5 + -0x31);
    *pcVar29 = *pcVar29 + cVar33;
    puVar40 = &switchD_147dde2ee::switchdataD_14ab33454;
    ppwVar61 = param_3;
switchD_147dde2ee_caseD_9:
    puVar39 = &switchD_1437c4c2d::switchdataD_14ab33474;
    uVar36 = (ulonglong)(int)(&switchD_1437c4c2d::switchdataD_14ab33474)[(ulonglong)pwVar37 & 0xff];
    puVar35 = (uint *)((longlong)&switchD_1437c4c2d::switchdataD_14ab33474 + uVar36);
    bVar32 = (byte)puVar35;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((ulonglong)pwVar37 & 0xff) {
    case 0:
      ppwVar63 = (wchar_t **)0x0;
      uVar10 = (uVar10 & 0x1f) - 0x14;
      if (uVar10 < 8) {
        puVar35 = &switchD_1437c4c4e::switchdataD_14ab33488;
        goto code_r0x0001437c4c47;
      }
      goto switchD_1437c4c2d_default;
    case 1:
      if ((wchar_t *)puVar40 != (wchar_t *)0x0) {
        ppwVar58 = *(wchar_t ***)((longlong)puVar40 + 8);
        uVar28 = DAT_14c951d30;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), uVar28 = DAT_14c951d30, DAT_14c951d78 == -1)) {
          FUN_14475b26a();
          local_38 = &DAT_14c9520b8;
          local_40 = 0;
          local_48 = (wchar_t *)0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
          uVar28 = DAT_14c951d30;
        }
code_r0x0001437c4ce0:
        if (uVar28 == 0) {
          bVar64 = ppwVar58 != (wchar_t **)0x0;
          if (ppwVar58 != (wchar_t **)&DAT_14c951d28 && bVar64) {
            do {
              ppwVar58 = (wchar_t **)ppwVar58[6];
              bVar64 = ppwVar58 != (wchar_t **)0x0;
              if (ppwVar58 == (wchar_t **)&DAT_14c951d28) break;
            } while (ppwVar58 != (wchar_t **)0x0);
          }
          ppcVar47 = &pcStack_68;
          if (!bVar64) goto LAB_1437c4d8e;
        }
        else if (((ulonglong)ppwVar58[3] & uVar28) == 0) {
LAB_1437c4d8e:
          lVar60 = *(longlong *)((longlong)puVar40 + 8);
          lVar18 = FUN_140e98e1a();
          if (*(ulonglong *)(lVar18 + 8) == 0) {
            bVar64 = lVar60 != 0;
            if (lVar60 != lVar18 && bVar64) {
              do {
                lVar60 = *(longlong *)(lVar60 + 0x30);
                bVar64 = lVar60 != 0;
                if (lVar60 == lVar18) break;
              } while (lVar60 != 0);
            }
            ppcVar48 = &pcStack_68;
            if (!bVar64) goto LAB_1437c4e3f;
          }
          else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) == 0) {
LAB_1437c4e3f:
            puVar59 = *(undefined **)((longlong)puVar40 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1))
            {
              FUN_14475b26a();
              local_38 = &DAT_14c9520b8;
              local_40 = 0;
              local_48 = (wchar_t *)0x1008801;
              FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
              atexit(FUN_142817034);
              _Init_thread_footer(&DAT_14c952318);
            }
            if (DAT_14c9522d0 == 0) {
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 != &DAT_14c9522c8 && bVar64) {
                do {
                  puVar59 = *(undefined **)(puVar59 + 0x30);
                  bVar64 = puVar59 != (undefined *)0x0;
                  if (puVar59 == &DAT_14c9522c8) break;
                } while (puVar59 != (undefined *)0x0);
              }
              ppcVar49 = &pcStack_68;
              if (!bVar64) goto LAB_1437c4f15;
            }
            else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c9522d0) == 0) {
LAB_1437c4f15:
              ppwVar58 = *(wchar_t ***)((longlong)puVar40 + 8);
              pwVar37 = *(wchar_t **)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              uVar10 = DAT_14c952370;
code_r0x0001437c4f32:
              if (*(int *)(pwVar37 + 0x88) < (int)uVar10) {
                *(undefined8 *)((longlong)ppcVar43 + -8) = 0x1437c60fb;
                FUN_144b3d300(&DAT_14c952370);
                if (DAT_14c952370 == 0xffffffff) {
                  *(undefined8 *)((longlong)ppcVar43 + -8) = 0x1437c610d;
                  FUN_14475b26a();
                  *(code **)((longlong)ppcVar43 + 0x38) = FUN_1468e12e4;
                  *(undefined **)((longlong)ppcVar43 + 0x30) = &DAT_14c9520b8;
                  *(undefined8 *)((longlong)ppcVar43 + 0x28) = 0;
                  *(undefined8 *)((longlong)ppcVar43 + 0x20) = 0x1008201;
                  *(undefined8 *)((longlong)ppcVar43 + -8) = 0x1437c6153;
                  FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
                  *(undefined8 *)((longlong)ppcVar43 + -8) = 0x1437c615f;
                  atexit(FUN_142817061);
                  *(undefined8 *)((longlong)ppcVar43 + -8) = 0x1437c616b;
                  _Init_thread_footer(&DAT_14c952370);
                }
              }
              uVar28 = DAT_14c952328;
              ppcVar49 = ppcVar43;
              if (DAT_14c952328 != 0) goto code_r0x0001437c4f4e;
              bVar64 = ppwVar58 != (wchar_t **)0x0;
              ppwVar30 = (wchar_t **)&DAT_14c952320;
              ppcVar45 = ppcVar43;
              if (ppwVar58 != (wchar_t **)&DAT_14c952320 && bVar64) {
LAB_1437c5041:
                do {
                  ppwVar58 = (wchar_t **)ppwVar58[6];
                  bVar64 = ppwVar58 != (wchar_t **)0x0;
                  ppcVar49 = ppcVar45;
                  if (ppwVar58 == ppwVar30) break;
                } while (ppwVar58 != (wchar_t **)0x0);
              }
              ppcVar46 = ppcVar49;
              if (!bVar64) goto switchD_1437c4c2d_caseD_2;
              goto LAB_1437c527d;
            }
            goto LAB_1437c51d4;
          }
LAB_1437c5131:
          uVar26 = *(undefined8 *)(param_1 + 0x3c);
          *(undefined8 *)((longlong)ppcVar48 + -8) = 0x1437c5146;
          puVar21 = (undefined2 *)
                    FUN_147dde4de(puVar40,ppwVar61,pwVar38,(ulonglong)param_2 & 0xffffffff);
          ppcVar55 = ppcVar48;
          if (puVar21 != (undefined2 *)0x0) {
            *puVar21 = (short)uVar26;
            ppcVar50 = ppcVar48;
            goto LAB_1437c529e;
          }
          break;
        }
LAB_1437c50b9:
        uVar26 = *(undefined8 *)(param_1 + 0x3c);
        *(undefined8 *)((longlong)ppcVar47 + -8) = 0x1437c50ce;
        puVar27 = (undefined1 *)
                  FUN_147dde4de(puVar40,ppwVar61,pwVar38,(ulonglong)param_2 & 0xffffffff);
        ppcVar55 = ppcVar47;
        if (puVar27 != (undefined1 *)0x0) {
          *puVar27 = (char)uVar26;
          ppcVar50 = ppcVar47;
LAB_1437c529e:
          ppwVar63 = (wchar_t **)0x1;
          ppcVar51 = ppcVar50;
          goto switchD_1437c4c2d_default;
        }
      }
      break;
    case 2:
switchD_1437c4c2d_caseD_2:
      ppcVar55 = ppcVar46;
      ppcVar49 = ppcVar46;
      if ((wchar_t *)puVar40 != (wchar_t *)0x0) {
LAB_1437c5067:
        lVar60 = *(longlong *)((longlong)puVar40 + 8);
        *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c5070;
        lVar18 = FUN_14093f012();
        ppcVar55 = ppcVar49;
        ppcVar47 = ppcVar49;
        if (*(ulonglong *)(lVar18 + 8) == 0) {
          bVar64 = lVar60 != 0;
          if (lVar60 != lVar18 && bVar64) {
            do {
              lVar60 = *(longlong *)(lVar60 + 0x30);
              bVar64 = lVar60 != 0;
              if (lVar60 == lVar18) break;
            } while (lVar60 != 0);
          }
          if (bVar64) {
            if ((wchar_t *)puVar40 != (wchar_t *)0x0) goto LAB_1437c50b9;
            break;
          }
        }
        else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0)
        goto LAB_1437c50b9;
        lVar60 = *(longlong *)((longlong)puVar40 + 8);
        *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c50e8;
        lVar18 = FUN_14093f0c0();
        ppcVar48 = ppcVar49;
        if (*(ulonglong *)(lVar18 + 8) == 0) {
          bVar64 = lVar60 != 0;
          if (lVar60 != lVar18 && bVar64) {
            do {
              lVar60 = *(longlong *)(lVar60 + 0x30);
              bVar64 = lVar60 != 0;
              if (lVar60 == lVar18) break;
            } while (lVar60 != 0);
          }
          if (bVar64) {
            if ((wchar_t *)puVar40 != (wchar_t *)0x0) goto LAB_1437c5131;
            break;
          }
        }
        else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0)
        goto LAB_1437c5131;
        puVar14 = *(undefined8 **)((longlong)puVar40 + 8);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c952210) {
          *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c607a;
          FUN_144b3d300(&DAT_14c952210);
          if (DAT_14c952210 == -1) {
            *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c608c;
            FUN_14475b26a();
            *(code **)((longlong)ppcVar49 + 0x38) = FUN_1405ebbb2;
            *(undefined **)((longlong)ppcVar49 + 0x30) = &DAT_14c9520b8;
            *(undefined8 *)((longlong)ppcVar49 + 0x28) = 0;
            *(undefined8 *)((longlong)ppcVar49 + 0x20) = 0x1008081;
            *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c60d2;
            FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
            *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c60de;
            atexit(FUN_142816fad);
            *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c60ea;
            _Init_thread_footer(&DAT_14c952210);
          }
        }
        if (DAT_14c9521c8 == 0) {
          bVar64 = puVar14 != (undefined8 *)0x0;
          if (puVar14 != &DAT_14c9521c0 && bVar64) {
            do {
              puVar14 = (undefined8 *)puVar14[6];
              bVar64 = puVar14 != (undefined8 *)0x0;
              if (puVar14 == &DAT_14c9521c0) break;
            } while (puVar14 != (undefined8 *)0x0);
          }
          if (!bVar64) goto LAB_1437c51fa;
          if ((wchar_t *)puVar40 != (wchar_t *)0x0) goto LAB_1437c51d4;
        }
        else if ((puVar14[3] & DAT_14c9521c8) == 0) {
LAB_1437c51fa:
          puVar59 = *(undefined **)((longlong)puVar40 + 8);
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c952268) {
            *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c627e;
            FUN_144b3d300(&DAT_14c952268);
            if (DAT_14c952268 == -1) {
              *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c6290;
              FUN_14475b26a();
              *(code **)((longlong)ppcVar49 + 0x38) = FUN_1459738d6;
              *(undefined **)((longlong)ppcVar49 + 0x30) = &DAT_14c9520b8;
              *(undefined8 *)((longlong)ppcVar49 + 0x28) = 0;
              *(undefined8 *)((longlong)ppcVar49 + 0x20) = 0x1408001;
              *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c62d6;
              FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
              *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c62e2;
              atexit(FUN_142816fda);
              *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c62ee;
              _Init_thread_footer(&DAT_14c952268);
            }
          }
          if (DAT_14c952220 == 0) {
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 != &DAT_14c952218 && bVar64) {
              do {
                puVar59 = *(undefined **)(puVar59 + 0x30);
                bVar64 = puVar59 != (undefined *)0x0;
                if (puVar59 == &DAT_14c952218) break;
              } while (puVar59 != (undefined *)0x0);
            }
            if (!(bool)(bVar64 ^ 1U | (wchar_t *)puVar40 == (wchar_t *)0x0)) goto LAB_1437c527d;
          }
          else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952220) != 0) {
LAB_1437c527d:
            uVar26 = *(undefined8 *)(param_1 + 0x3c);
            *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c5292;
            puVar14 = (undefined8 *)
                      FUN_147dde4de(puVar40,ppwVar61,pwVar38,(ulonglong)param_2 & 0xffffffff);
            ppcVar55 = ppcVar49;
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = uVar26;
              ppcVar50 = ppcVar49;
              goto LAB_1437c529e;
            }
          }
        }
        else {
LAB_1437c51d4:
          uVar26 = *(undefined8 *)(param_1 + 0x3c);
          *(undefined8 *)((longlong)ppcVar49 + -8) = 0x1437c51e9;
          puVar20 = (undefined4 *)
                    FUN_147dde4de(puVar40,ppwVar61,pwVar38,(ulonglong)param_2 & 0xffffffff);
          ppcVar55 = ppcVar49;
          if (puVar20 != (undefined4 *)0x0) {
            *puVar20 = (int)uVar26;
            ppcVar50 = ppcVar49;
            goto LAB_1437c529e;
          }
        }
      }
      break;
    case 3:
      puVar14 = *(undefined8 **)(param_1 + 0x40);
      iVar11 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar11 + 1;
      ppcVar55 = &pcStack_68;
      if ((wchar_t *)puVar40 == (wchar_t *)0x0) {
LAB_1437c54f9:
        bVar32 = (byte)puVar14;
        bVar7 = 0;
      }
      else {
        uVar6 = *(undefined1 *)((longlong)puVar14 + (longlong)iVar11);
        puVar59 = *(undefined **)((longlong)puVar40 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
          FUN_14475b26a();
          local_38 = &DAT_14c9520b8;
          local_40 = 0;
          local_48 = (wchar_t *)0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
        }
        if (DAT_14c951d30 == 0) {
          bVar64 = puVar59 != (undefined *)0x0;
          if (puVar59 != &DAT_14c951d28 && bVar64) {
            do {
              puVar59 = *(undefined **)(puVar59 + 0x30);
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 == &DAT_14c951d28) break;
            } while (puVar59 != (undefined *)0x0);
          }
          if (!bVar64) goto LAB_1437c4de8;
        }
        else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c951d30) == 0) {
LAB_1437c4de8:
          puVar17 = *(undefined8 **)((longlong)puVar40 + 8);
          puVar14 = (undefined8 *)FUN_14093f012();
          if (puVar14[1] == 0) {
            bVar64 = puVar17 != (undefined8 *)0x0;
            if (puVar17 != puVar14 && bVar64) {
              do {
                puVar17 = (undefined8 *)puVar17[6];
                bVar64 = puVar17 != (undefined8 *)0x0;
                if (puVar17 == puVar14) break;
              } while (puVar17 != (undefined8 *)0x0);
            }
            ppcVar55 = &pcStack_68;
            if (!bVar64) goto LAB_1437c54f9;
          }
          else {
            ppcVar55 = &pcStack_68;
            if ((puVar17[3] & puVar14[1]) == 0) goto LAB_1437c54f9;
          }
        }
        puVar27 = (undefined1 *)
                  FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
        if (puVar27 != (undefined1 *)0x0) {
          *puVar27 = uVar6;
          goto LAB_1437c4ed2;
        }
LAB_1437c5889:
        bVar7 = 1;
        bVar32 = 0;
        ppcVar55 = ppcVar52;
      }
      goto LAB_1437c54fb;
    case 4:
      FUN_147dde3d0(param_1 + 0x38,&param_12);
      if ((wchar_t *)puVar40 == (wchar_t *)0x0) goto LAB_1437c5c41;
      puVar59 = *(undefined **)((longlong)puVar40 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        local_38 = (undefined *)FUN_1446ddbd2();
        local_40 = 0;
        local_48 = (wchar_t *)0xc001;
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      if (DAT_14c963e40 == 0) {
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c963e38 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c963e38) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (!bVar64) goto LAB_1437c53cf;
LAB_1437c559d:
        puVar14 = (undefined8 *)
                  FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
        ppwVar61 = (wchar_t **)param_12;
        ppwVar63 = (wchar_t **)(ulonglong)(puVar14 != (undefined8 *)0x0);
        if ((code **)puVar14 != &param_12 && puVar14 != (undefined8 *)0x0) {
          iVar11 = (int)param_13;
          lVar60 = (longlong)(int)param_13;
          *(int *)(puVar14 + 1) = (int)param_13;
          if ((int)param_13 == 0 && *(int *)((longlong)puVar14 + 0xc) == 0) {
            *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
            goto LAB_1437c5f82;
          }
          FUN_1446dd670(puVar14,(ulonglong)param_13 & 0xffffffff);
          ppwVar63 = (wchar_t **)0x1;
          if (iVar11 != 0) {
            memcpy((void *)*puVar14,ppwVar61,lVar60 * 2);
          }
        }
      }
      else {
        if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c963e40) != 0) goto LAB_1437c559d;
LAB_1437c53cf:
        puVar59 = *(undefined **)((longlong)puVar40 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9520b0) &&
           (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
          local_38 = (undefined *)FUN_1446ddbd2();
          local_40 = 0;
          local_48 = (wchar_t *)0xa001;
          FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
          atexit(FUN_142816ef9);
          _Init_thread_footer(&DAT_14c9520b0);
        }
        if (DAT_14c952068 == 0) {
          bVar64 = puVar59 != (undefined *)0x0;
          if (puVar59 != &DAT_14c952060 && bVar64) {
            do {
              puVar59 = *(undefined **)(puVar59 + 0x30);
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 == &DAT_14c952060) break;
            } while (puVar59 != (undefined *)0x0);
          }
          if (!bVar64) goto LAB_1437c5412;
LAB_1437c564e:
          ppwVar63 = (wchar_t **)param_12;
          if ((int)param_13 == 0) {
            ppwVar63 = (wchar_t **)&DAT_149dfb77a;
          }
          FUN_1446f470e(&param_5,ppwVar63,1);
          puVar14 = (undefined8 *)
                    FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
          ppwVar63 = (wchar_t **)(ulonglong)(puVar14 != (undefined8 *)0x0);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = param_5;
          }
          goto LAB_1437c5c43;
        }
        if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952068) != 0) goto LAB_1437c564e;
LAB_1437c5412:
        puVar59 = *(undefined **)((longlong)puVar40 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c963ee0) &&
           (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
          local_38 = (undefined *)FUN_1446ddbd2();
          local_40 = 0;
          local_48 = (wchar_t *)0x40008001;
          FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
          atexit(FUN_14282980e);
          _Init_thread_footer(&DAT_14c963ee0);
        }
        if (DAT_14c963e98 == 0) {
          bVar64 = puVar59 != (undefined *)0x0;
          if (puVar59 != &DAT_14c963e90 && bVar64) {
            do {
              puVar59 = *(undefined **)(puVar59 + 0x30);
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 == &DAT_14c963e90) break;
            } while (puVar59 != (undefined *)0x0);
          }
          if (bVar64) goto LAB_1437c56a1;
        }
        else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c963e98) != 0) {
LAB_1437c56a1:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t **)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (wchar_t *)0x0;
            *DAT_14c844840 = (wchar_t *)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (wchar_t *)0xffffffffffffffff;
            DAT_14c844840[3] = (wchar_t *)0x0;
            DAT_14c844840[4] = (wchar_t *)0x0;
            DAT_14c844840[5] = (wchar_t *)0x0;
            if (DAT_14c844840 != (wchar_t **)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          param_5 = DAT_14c844840;
          if (DAT_14c844840 != (wchar_t **)0x0) {
            if (*(code **)(*DAT_14c844840 + 4) == FUN_144907e24) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            else {
              (**(code **)(*DAT_14c844840 + 4))();
            }
          }
LAB_1437c56f5:
          param_6 = (wchar_t **)((ulonglong)param_6 & 0xffffffff00000000);
          ppwVar63 = (wchar_t **)param_12;
          if ((int)param_13 == 0) {
            ppwVar63 = (wchar_t **)&DAT_149dfb77a;
          }
          goto LAB_1437c5ca6;
        }
        puVar59 = *(undefined **)((longlong)puVar40 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
          FUN_14475b26a();
          local_38 = &DAT_14c9520b8;
          local_40 = 0;
          local_48 = (wchar_t *)0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
        }
        if (DAT_14c951d30 != 0) {
          if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c951d30) == 0) goto LAB_1437c578f;
LAB_1437c5498:
          lVar60 = *(longlong *)((longlong)puVar40 + 0x70);
          if (lVar60 != 0) {
            ppwVar63 = (wchar_t **)param_12;
            if ((int)param_13 == 0) {
              ppwVar63 = (wchar_t **)&DAT_149dfb77a;
            }
            FUN_1446f470e(&param_11,ppwVar63,1);
            ppwVar63 = (wchar_t **)0x0;
            iVar11 = FUN_1448e5bf4(lVar60,CONCAT71(param_11._1_7_,(byte)param_11),0);
            if (iVar11 == -1) goto LAB_1437c5c43;
            lVar60 = *(longlong *)(*(longlong *)(lVar60 + 0x40) + 8 + (longlong)iVar11 * 0x10);
            if ((lVar60 == -1) ||
               (puVar27 = (undefined1 *)
                          FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff),
               puVar27 == (undefined1 *)0x0)) goto LAB_1437c5c41;
            *puVar27 = (char)lVar60;
            goto LAB_1437c5f82;
          }
          goto LAB_1437c5c41;
        }
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c951d28 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c951d28) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (bVar64) goto LAB_1437c5498;
LAB_1437c578f:
        puVar59 = *(undefined **)((longlong)puVar40 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9496d8) &&
           (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
          local_38 = (undefined *)FUN_1446ddbd2();
          local_48 = (wchar_t *)0x1000000008001;
          local_40 = 0;
          FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
          atexit(FUN_1427e14fe);
          _Init_thread_footer(&DAT_14c9496d8);
        }
        if (DAT_14c949690 == 0) {
          bVar64 = puVar59 != (undefined *)0x0;
          if (puVar59 != &DAT_14c949688 && bVar64) {
            do {
              puVar59 = *(undefined **)(puVar59 + 0x30);
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 == &DAT_14c949688) break;
            } while (puVar59 != (undefined *)0x0);
          }
          if (bVar64) goto LAB_1437c57d2;
LAB_1437c593d:
          lVar60 = *(longlong *)((longlong)puVar40 + 8);
          lVar18 = FUN_140019cf2();
          if (*(ulonglong *)(lVar18 + 8) == 0) {
            bVar64 = lVar60 != 0;
            if (lVar60 != lVar18 && bVar64) {
              do {
                lVar60 = *(longlong *)(lVar60 + 0x30);
                bVar64 = lVar60 != 0;
                if (lVar60 == lVar18) break;
              } while (lVar60 != 0);
            }
            if (!bVar64) goto LAB_1437c595d;
LAB_1437c5a4a:
            ppwVar63 = (wchar_t **)param_12;
            if ((int)param_13 == 0) {
              ppwVar63 = (wchar_t **)&DAT_149dfb77a;
            }
            if (DAT_14c949118 == 0) {
              param_14 = FUN_140631fbe;
              lVar60 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar60;
              FUN_1446f470e(&param_15,L"Class",1);
              local_38 = (undefined *)0x20;
              local_40._0_4_ = 0x10000000;
              local_48._0_4_ = 8;
              FUN_14574b4b2(lVar60);
              DAT_14c949118 = lVar60;
              uVar26 = FUN_144a7a812();
              lVar60 = DAT_14c949118;
              if (DAT_14c948f88 == (void *)0x0) {
                ppwStackX_8 = (wchar_t **)&DAT_1427db2a2;
                pvVar16 = (void *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                DAT_14c948f88 = pvVar16;
                FUN_1446f470e(&param_5,L"Struct",1);
                local_38 = (undefined *)0x8;
                local_40._0_4_ = 0x10000020;
                local_48 = (wchar_t *)CONCAT44(local_48._4_4_,8);
                FUN_14574b4b2(pvVar16);
                DAT_14c948f88 = pvVar16;
                uVar24 = FUN_1446f8646();
                pvVar16 = DAT_14c948f88;
                uVar25 = FUN_1400163b0();
                local_48 = L"Struct";
                FUN_14574b446(uVar25,pvVar16,uVar24,L"/Script/CoreUObject");
              }
              local_48 = L"Class";
              FUN_14574b446(DAT_14c948f88,lVar60,uVar26,L"/Script/CoreUObject");
            }
            local_40 = 0;
            local_38 = (undefined *)CONCAT71(local_38._1_7_,1);
            local_48 = (wchar_t *)CONCAT44(local_48._4_4_,2);
            param_5 = (wchar_t **)FUN_1412ecd05(DAT_14c949118,0,ppwVar63,0);
            local_48 = (wchar_t *)&param_5;
            uVar10 = FUN_147dde64a(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
LAB_1437c5efa:
            ppwVar63 = (wchar_t **)(ulonglong)uVar10;
            goto LAB_1437c5c43;
          }
          if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) goto LAB_1437c5a4a;
LAB_1437c595d:
          lVar60 = *(longlong *)((longlong)puVar40 + 8);
          lVar18 = FUN_140f4d408();
          if (*(ulonglong *)(lVar18 + 8) == 0) {
            bVar64 = lVar60 != 0;
            if (lVar60 != lVar18 && bVar64) {
              do {
                lVar60 = *(longlong *)(lVar60 + 0x30);
                bVar64 = lVar60 != 0;
                if (lVar60 == lVar18) break;
              } while (lVar60 != 0);
            }
            if (!bVar64) goto LAB_1437c5a96;
          }
          else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) == 0) {
LAB_1437c5a96:
            puVar59 = *(undefined **)((longlong)puVar40 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1))
            {
              FUN_1446f4b16();
              local_38 = &DAT_14c951c78;
              local_40 = 0;
              local_48 = (wchar_t *)0x4018001;
              FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
              atexit(FUN_1428170e8);
              _Init_thread_footer(&DAT_14c952478);
            }
            if (DAT_14c952430 == 0) {
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 != &DAT_14c952428 && bVar64) {
                do {
                  puVar59 = *(undefined **)(puVar59 + 0x30);
                  bVar64 = puVar59 != (undefined *)0x0;
                  if (puVar59 == &DAT_14c952428) break;
                } while (puVar59 != (undefined *)0x0);
              }
              if (bVar64) goto LAB_1437c5b75;
            }
            else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952430) != 0) {
LAB_1437c5b75:
              ppwVar63 = (wchar_t **)param_12;
              if ((int)param_13 == 0) {
                ppwVar63 = (wchar_t **)&DAT_149dfb77a;
              }
              param_5 = (wchar_t **)
                        FUN_140277b32(*(undefined8 *)((longlong)puVar40 + 0x70),0,ppwVar63,0);
              local_48 = (wchar_t *)&param_5;
              uVar10 = FUN_147dde6ae(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
              goto LAB_1437c5efa;
            }
            lVar60 = *(longlong *)((longlong)puVar40 + 8);
            lVar18 = FUN_14010a2ea();
            if (*(ulonglong *)(lVar18 + 8) == 0) {
              bVar64 = lVar60 != 0;
              if (lVar60 != lVar18 && bVar64) {
                do {
                  lVar60 = *(longlong *)(lVar60 + 0x30);
                  bVar64 = lVar60 != 0;
                  if (lVar60 == lVar18) break;
                } while (lVar60 != 0);
              }
              if (bVar64) goto LAB_1437c5bee;
            }
            else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) {
LAB_1437c5bee:
              ppwVar63 = (wchar_t **)param_12;
              if ((int)param_13 == 0) {
                ppwVar63 = (wchar_t **)&DAT_149dfb77a;
              }
              uVar10 = 0;
              lVar60 = FUN_140277b32(*(undefined8 *)((longlong)puVar40 + 0x70),0,ppwVar63,0);
              iVar11 = 0;
              if (lVar60 != 0) {
                uVar10 = *(uint *)(lVar60 + 0xc);
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar60 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                else {
                  lVar60 = 0;
                }
                iVar11 = *(int *)(lVar60 + 0x10);
                if (*(int *)(lVar60 + 0x10) == 0) {
                  LOCK();
                  iVar11 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar56 = DAT_14c964868 + 1;
                  bVar64 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar11;
                  if (bVar64) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar56);
                  }
                  LOCK();
                  iVar11 = *(int *)(lVar60 + 0x10);
                  bVar64 = iVar11 == 0;
                  if (bVar64) {
                    *(int *)(lVar60 + 0x10) = iVar56;
                    iVar11 = 0;
                  }
                  UNLOCK();
                  if (bVar64) {
                    iVar11 = iVar56;
                  }
                }
              }
              puVar14 = (undefined8 *)
                        FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
              if (puVar14 == (undefined8 *)0x0) goto LAB_1437c5c41;
              *puVar14 = CONCAT44(iVar11,uVar10);
              goto LAB_1437c5f82;
            }
            puVar59 = *(undefined **)((longlong)puVar40 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1))
            {
              FUN_1446f4b16();
              local_38 = &DAT_14c951c78;
              local_40 = 0;
              local_48 = (wchar_t *)0x24008001;
              FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
              atexit(FUN_142818859);
              _Init_thread_footer(&DAT_14c9529b0);
            }
            if (DAT_14c952968 == 0) {
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 != &DAT_14c952960 && bVar64) {
                do {
                  puVar59 = *(undefined **)(puVar59 + 0x30);
                  bVar64 = puVar59 != (undefined *)0x0;
                  if (puVar59 == &DAT_14c952960) break;
                } while (puVar59 != (undefined *)0x0);
              }
              if (bVar64) goto LAB_1437c5d2e;
            }
            else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952968) != 0) goto LAB_1437c5d2e;
LAB_1437c5c41:
            ppwVar63 = (wchar_t **)0x0;
            goto LAB_1437c5c43;
          }
LAB_1437c5d2e:
          ppwStackX_8 = (wchar_t **)0x0;
          ppwStackX_10 = (wchar_t **)0x0;
          ppwStackX_18 = (wchar_t **)0x0;
          pwStackX_20 = (wchar_t *)0x0;
          param_5 = (wchar_t **)param_12;
          iVar11 = (int)param_13 + -1;
          if ((int)param_13 == 0) {
            iVar11 = 0;
          }
          param_6 = (wchar_t **)CONCAT44(param_6._4_4_,iVar11);
          FUN_14475bf92(&ppwStackX_8,&param_5);
          ppwVar63 = ppwStackX_18;
          param_5 = (wchar_t **)0x0;
          param_6 = ppwStackX_8;
          param_7 = ppwStackX_10;
          param_8 = (wchar_t *)0x0;
          lVar60 = (longlong)(int)pwStackX_20;
          param_9._0_4_ = (int)pwStackX_20;
          if (lVar60 == 0) {
            param_9._4_4_ = 0;
          }
          else {
            FUN_1446dd670(&param_8,(ulonglong)pwStackX_20 & 0xffffffff,0);
            memcpy(param_8,ppwVar63,lVar60 * 2);
          }
          puVar14 = (undefined8 *)
                    FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
          iVar11 = (int)param_9;
          pwVar37 = param_8;
          ppwVar63 = (wchar_t **)(ulonglong)(puVar14 != (undefined8 *)0x0);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = param_5;
            *(undefined4 *)(puVar14 + 1) = param_6._0_4_;
            *(undefined4 *)((longlong)puVar14 + 0xc) = param_6._4_4_;
            *(undefined4 *)(puVar14 + 2) = param_7._0_4_;
            *(undefined4 *)((longlong)puVar14 + 0x14) = param_7._4_4_;
            if ((wchar_t ***)puVar14 != &param_5) {
              lVar60 = (longlong)(int)param_9;
              *(int *)(puVar14 + 4) = (int)param_9;
              if ((int)param_9 == 0 && *(int *)((longlong)puVar14 + 0x24) == 0) {
                *(undefined4 *)((longlong)puVar14 + 0x24) = 0;
              }
              else {
                FUN_1446dd670(puVar14 + 3,(int)param_9);
                if (iVar11 != 0) {
                  memcpy((void *)puVar14[3],pwVar37,lVar60 * 2);
                }
              }
            }
          }
          if (param_8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (ppwStackX_18 != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1437c5c43;
        }
        if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c949690) == 0) goto LAB_1437c593d;
LAB_1437c57d2:
        lVar60 = *(longlong *)((longlong)puVar40 + 0x78);
        ppwVar63 = (wchar_t **)param_12;
        if ((int)param_13 == 0) {
          ppwVar63 = (wchar_t **)&DAT_149dfb77a;
        }
        FUN_1446f470e(&param_10,ppwVar63,1);
        ppwVar63 = (wchar_t **)0x0;
        iVar11 = FUN_1448e5bf4(lVar60,param_10,0);
        if (iVar11 == -1) goto LAB_1437c5c43;
        lVar60 = *(longlong *)(*(longlong *)(lVar60 + 0x40) + 8 + (longlong)iVar11 * 0x10);
        if ((lVar60 == -1) ||
           (lVar18 = FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff),
           lVar18 == 0)) goto LAB_1437c5c41;
        (**(code **)(**(longlong **)((longlong)puVar40 + 0x70) + 0x1f8))
                  (*(longlong **)((longlong)puVar40 + 0x70),lVar18,lVar60);
LAB_1437c5f82:
        ppwVar63 = (wchar_t **)0x1;
      }
LAB_1437c5c43:
      ppcVar51 = &pcStack_68;
      if ((wchar_t **)param_12 != (wchar_t **)0x0) {
        FUN_1400020a8();
        ppcVar51 = &pcStack_68;
      }
      goto switchD_1437c4c2d_default;
    case 5:
    case 6:
      uVar6 = in(0x3474);
      uVar10 = (uint)(uint *)CONCAT71(uVar31,uVar6) | *(uint *)CONCAT71(uVar31,uVar6);
      pcVar29 = (char *)((ulonglong)uVar10 - 0x73);
      *pcVar29 = *pcVar29 + bVar32;
      uVar10 = uVar10 | 0x736e841;
code_r0x0001437c4c47:
                    /* WARNING: Could not recover jumptable at 0x0001437c4c4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppwVar63 = (wchar_t **)(*(code *)((longlong)puVar35 + (longlong)(int)puVar35[uVar10]))();
      return ppwVar63;
    case 7:
      *(byte *)param_1 = (byte)*param_1 + bVar32;
      ppwVar63 = (wchar_t **)param_12;
LAB_1437c5ca6:
      local_48 = (wchar_t *)((ulonglong)local_48 & 0xffffffffffffff00);
      lVar60 = FUN_140c97480(ppwVar63,&param_5,0,0);
      if (lVar60 == 0) {
        FUN_140009b9a(&ppwStackX_8,&param_12);
        FUN_140008f88(&param_5,&ppwStackX_8);
        if (ppwStackX_8 != (wchar_t **)0x0) {
          (**(code **)(*ppwStackX_8 + 8))();
        }
      }
      local_48 = (wchar_t *)&param_5;
      uVar10 = FUN_147dde48a(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
      ppwVar63 = (wchar_t **)(ulonglong)uVar10;
      if (param_5 != (wchar_t **)0x0) {
        (**(code **)(*param_5 + 8))();
      }
      goto LAB_1437c5c43;
    case 8:
    case 9:
    case 10:
      while ((ppwVar58 != ppwVar30 && (ppwVar58 != (wchar_t **)0x0))) {
        ppwVar58 = (wchar_t **)ppwVar58[6];
        puVar35 = (uint *)(ulonglong)(ppwVar58 != (wchar_t **)0x0);
      }
      ppcVar55 = &pcStack_68;
      if ((char)puVar35 != '\0') {
        fVar2 = *(float *)(param_1 + 0x3c);
        pdVar15 = (double *)FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
        ppcVar55 = &pcStack_68;
        if (pdVar15 != (double *)0x0) {
          *pdVar15 = (double)fVar2;
          goto LAB_1437c529e;
        }
      }
      break;
    case 0xb:
      bRam00000000c8c54fa2 = bRam00000000c8c54fa2 & 1;
      puVar14 = (undefined8 *)((ulonglong)ppwVar30 & 0xffffffffffffff18);
code_r0x0001437c4fa0:
      ppcVar55 = ppcVar44;
      if (((ulonglong)ppwVar58[3] & (ulonglong)puVar14) == 0) goto LAB_1437c54f9;
LAB_1437c5864:
      uVar26 = *(undefined8 *)(param_1 + 0x3c);
      *(undefined8 *)((longlong)ppcVar44 + -8) = 0x1437c587b;
      puVar14 = (undefined8 *)
                FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
      ppcVar52 = ppcVar44;
      if (puVar14 == (undefined8 *)0x0) goto LAB_1437c5889;
      *puVar14 = uVar26;
      ppcVar42 = ppcVar44;
LAB_1437c4ed2:
      bVar7 = 1;
      bVar32 = 1;
      ppcVar55 = ppcVar42;
LAB_1437c54fb:
      ppwVar63 = (wchar_t **)(ulonglong)(bVar7 & bVar32);
      ppcVar51 = ppcVar55;
      goto switchD_1437c4c2d_default;
    case 0xc:
      bVar7 = *(byte *)((longlong)puVar40 + 1);
      *(char *)CONCAT71(uVar31,bVar7) = *(char *)CONCAT71(uVar31,bVar7) + bVar7;
      pcVar29 = (char *)((longlong)&PTR_LAB_14ab333f8 + uVar36 + 1);
      *pcVar29 = *pcVar29 + bVar32;
      uVar28 = CONCAT71(uVar31,bVar7) & 0xffffffffffffff18;
      ppcVar49 = &pcStack_68;
code_r0x0001437c4f4e:
      if (((ulonglong)ppwVar58[3] & uVar28) == 0) goto LAB_1437c5067;
      goto LAB_1437c527d;
    case 0xd:
      pwVar37 = (wchar_t *)((longlong)&UINT_14ab33470 + uVar36 + 3);
      if (pwVar37 != (wchar_t *)0x0 && puVar35 != (uint *)0x0) {
        *(uint *)((longlong)puVar40 + -0x3535df3) =
             *(uint *)((longlong)puVar40 + -0x3535df3) | (uint)pwVar37;
        *(byte *)(unaff_RBP + 9) = *(byte *)(unaff_RBP + 9) | (byte)(uVar28 >> 8);
        ppcVar53 = &pcStack_68;
        goto switchD_147dde2ee_caseD_13;
      }
      param_15 = CONCAT44(param_15._4_4_,uVar10);
switchD_147dde2ee_caseD_11:
      pwStack_a0 = (wchar_t *)puVar40;
      puVar19 = auStack_188;
      ppcVar54 = (char **)auStack_188;
      ppcVar55 = (char **)auStack_188;
      uVar12 = local_38._0_4_;
      param_2 = (wchar_t **)((ulonglong)local_38 & 0xffffffff);
      uStack_a8 = DAT_14c707940 ^ (ulonglong)auStack_188;
      unaff_RBP = (wchar_t **)0x1;
      puVar27 = auStack_188;
      puVar40 = puVar39;
      param_1 = param_4;
      switch(*(undefined4 *)(pwVar37 + 0xc)) {
      case 4:
        if ((wchar_t *)puVar39 != (wchar_t *)0x0) {
          ppwVar30 = *(wchar_t ***)(pwVar37 + 0x10);
          ppwVar63 = (wchar_t **)(ulonglong)*(byte *)(ppwVar30 + 0xd);
          ppwVar58 = *(wchar_t ***)((longlong)puVar39 + 8);
          ppcVar53 = (char **)auStack_188;
          ppwVar61 = param_3;
          goto switchD_147dde2ee_caseD_13;
        }
        break;
      case 5:
        puVar14 = (undefined8 *)(**(code **)(**(longlong **)(pwVar37 + 0x10) + 0x10))();
        puVar27 = auStack_188;
        if ((wchar_t *)puVar39 == (wchar_t *)0x0) goto LAB_1437c8e53;
        puVar59 = *(undefined **)((longlong)puVar39 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c963e88) &&
           (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
          puStack_158 = (undefined *)FUN_1446ddbd2();
          pcStack_150 = FUN_140dafe7a;
          uStack_160 = 0;
          pppwStack_168 = (wchar_t ***)0xc001;
          FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
          atexit(FUN_142829758);
          _Init_thread_footer(&DAT_14c963e88);
        }
        if (DAT_14c963e40 == 0) {
          bVar64 = puVar59 != (undefined *)0x0;
          if (puVar59 != &DAT_14c963e38 && bVar64) {
            do {
              puVar59 = *(undefined **)(puVar59 + 0x30);
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 == &DAT_14c963e38) break;
            } while (puVar59 != (undefined *)0x0);
          }
          if (bVar64) goto LAB_1437c8187;
        }
        else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c963e40) != 0) {
LAB_1437c8187:
          puVar17 = (undefined8 *)FUN_147dde4de(puVar39,param_3,param_4,param_2);
          puVar27 = auStack_188;
          if (puVar17 != (undefined8 *)0x0) {
            puVar27 = auStack_188;
            if (puVar17 != puVar14) {
              iVar11 = *(int *)(puVar14 + 1);
              pvVar16 = (void *)*puVar14;
              *(int *)(puVar17 + 1) = iVar11;
              if (iVar11 == 0 && *(int *)((longlong)puVar17 + 0xc) == 0) {
                *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
                puVar27 = auStack_188;
              }
              else {
                FUN_1446dd670(puVar17,iVar11);
                puVar27 = auStack_188;
                if (iVar11 != 0) {
                  memcpy((void *)*puVar17,pvVar16,(longlong)iVar11 * 2);
                  puVar27 = auStack_188;
                }
              }
            }
            goto switchD_1437c7e63_default;
          }
          goto LAB_1437c8e53;
        }
        puVar59 = *(undefined **)((longlong)puVar39 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9520b0) &&
           (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
          puStack_158 = (undefined *)FUN_1446ddbd2();
          pcStack_150 = FUN_1409e12a0;
          uStack_160 = 0;
          pppwStack_168 = (wchar_t ***)0xa001;
          FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
          atexit(FUN_142816ef9);
          _Init_thread_footer(&DAT_14c9520b0);
        }
        if (DAT_14c952068 == 0) {
          bVar64 = puVar59 != (undefined *)0x0;
          if (puVar59 != &DAT_14c952060 && bVar64) {
            do {
              puVar59 = *(undefined **)(puVar59 + 0x30);
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 == &DAT_14c952060) break;
            } while (puVar59 != (undefined *)0x0);
          }
          if (!bVar64) goto LAB_1437c7fb4;
LAB_1437c85d2:
          if (*(int *)(puVar14 + 1) == 0) {
            puVar21 = &DAT_149dfb77a;
          }
          else {
            puVar21 = (undefined2 *)*puVar14;
          }
          FUN_1446f470e(&ppwStack_f0,puVar21,1);
          ppcVar55 = (char **)auStack_188;
          ppwVar61 = param_3;
LAB_1437c8e9f:
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8eb0;
          puVar22 = (ulonglong *)FUN_147dde4de(puVar40,ppwVar61,param_1,uVar12);
          unaff_RBP = (wchar_t **)(ulonglong)(puVar22 != (ulonglong *)0x0);
          puVar27 = (undefined1 *)ppcVar55;
          if (puVar22 == (ulonglong *)0x0) goto switchD_1437c7e63_default;
          uVar28 = *(ulonglong *)((longlong)ppcVar55 + 0x98);
        }
        else {
          if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952068) != 0) goto LAB_1437c85d2;
LAB_1437c7fb4:
          puVar59 = *(undefined **)((longlong)puVar39 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
            puStack_158 = (undefined *)FUN_1446ddbd2();
            pcStack_150 = FUN_140fb5c52;
            uStack_160 = 0;
            pppwStack_168 = (wchar_t ***)0x40008001;
            FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
            atexit(FUN_14282980e);
            _Init_thread_footer(&DAT_14c963ee0);
          }
          if (DAT_14c963e98 == 0) {
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 != &DAT_14c963e90 && bVar64) {
              do {
                puVar59 = *(undefined **)(puVar59 + 0x30);
                bVar64 = puVar59 != (undefined *)0x0;
                if (puVar59 == &DAT_14c963e90) break;
              } while (puVar59 != (undefined *)0x0);
            }
            if (bVar64) goto LAB_1437c861e;
          }
          else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c963e98) != 0) {
LAB_1437c861e:
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (wchar_t **)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = (wchar_t *)0x0;
              *DAT_14c844840 = (wchar_t *)&PTR_FUN_149e19310;
              DAT_14c844840[2] = (wchar_t *)0xffffffffffffffff;
              DAT_14c844840[3] = (wchar_t *)0x0;
              DAT_14c844840[4] = (wchar_t *)0x0;
              DAT_14c844840[5] = (wchar_t *)0x0;
              if (DAT_14c844840 != (wchar_t **)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            ppwStack_f0 = DAT_14c844840;
            if (DAT_14c844840 != (wchar_t **)0x0) {
              if (*(code **)(*DAT_14c844840 + 4) == FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*DAT_14c844840 + 4))();
              }
            }
            iStack_e8 = 0;
            if (*(int *)(puVar14 + 1) == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            else {
              puVar21 = (undefined2 *)*puVar14;
            }
            pppwStack_168 = (wchar_t ***)((ulonglong)pppwStack_168 & 0xffffffffffffff00);
            lVar60 = FUN_140c97480(puVar21,&ppwStack_f0,0,0);
            if (lVar60 == 0) {
              FUN_140009b9a(&uStack_118,puVar14);
              FUN_140008f88(&ppwStack_f0,&uStack_118);
              if (uStack_118 != (wchar_t **)0x0) {
                (**(code **)(*uStack_118 + 8))();
              }
            }
            pppwStack_168 = &ppwStack_f0;
            uVar10 = FUN_147dde48a(puVar39,param_3,param_4,param_2);
            unaff_RBP = (wchar_t **)(ulonglong)uVar10;
            puVar27 = auStack_188;
            if (ppwStack_f0 != (wchar_t **)0x0) {
              (**(code **)(*ppwStack_f0 + 8))();
              puVar27 = auStack_188;
            }
            goto switchD_1437c7e63_default;
          }
          puVar59 = *(undefined **)((longlong)puVar39 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
            FUN_14475b26a();
            pcStack_150 = FUN_1409f1a5c;
            puStack_158 = &DAT_14c9520b8;
            uStack_160 = 0;
            pppwStack_168 = (wchar_t ***)0x1008041;
            FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
            atexit(FUN_14281201f);
            _Init_thread_footer(&DAT_14c951d78);
          }
          if (DAT_14c951d30 == 0) {
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 != &DAT_14c951d28 && bVar64) {
              do {
                puVar59 = *(undefined **)(puVar59 + 0x30);
                bVar64 = puVar59 != (undefined *)0x0;
                if (puVar59 == &DAT_14c951d28) break;
              } while (puVar59 != (undefined *)0x0);
            }
            if (bVar64) goto LAB_1437c803c;
          }
          else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c951d30) != 0) {
LAB_1437c803c:
            lVar60 = *(longlong *)((longlong)puVar39 + 0x70);
            puVar27 = auStack_188;
            if (lVar60 != 0) {
              if (*(int *)(puVar14 + 1) == 0) {
                puVar21 = &DAT_149dfb77a;
              }
              else {
                puVar21 = (undefined2 *)*puVar14;
              }
              FUN_1446f470e(&uStack_c0,puVar21,1);
              iVar11 = FUN_1448e5bf4(lVar60,uStack_c0,0);
              puVar27 = auStack_188;
              if (((iVar11 != -1) &&
                  (lVar60 = *(longlong *)
                             (*(longlong *)(lVar60 + 0x40) + 8 + (longlong)iVar11 * 0x10),
                  puVar27 = auStack_188, lVar60 != -1)) &&
                 (puVar19 = (undefined1 *)FUN_147dde4de(puVar39,param_3,param_4,param_2),
                 puVar27 = auStack_188, puVar19 != (undefined1 *)0x0)) {
                *puVar19 = (char)lVar60;
                puVar27 = auStack_188;
                goto switchD_1437c7e63_default;
              }
            }
            goto LAB_1437c8e53;
          }
          puVar59 = *(undefined **)((longlong)puVar39 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
            puStack_158 = (undefined *)FUN_1446ddbd2();
            pcStack_150 = FUN_140a4831c;
            pppwStack_168 = (wchar_t ***)0x1000000008001;
            uStack_160 = 0;
            FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
            atexit(FUN_1427e14fe);
            _Init_thread_footer(&DAT_14c9496d8);
          }
          if (DAT_14c949690 == 0) {
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 != &DAT_14c949688 && bVar64) {
              do {
                puVar59 = *(undefined **)(puVar59 + 0x30);
                bVar64 = puVar59 != (undefined *)0x0;
                if (puVar59 == &DAT_14c949688) break;
              } while (puVar59 != (undefined *)0x0);
            }
            if (bVar64) goto LAB_1437c870d;
          }
          else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c949690) != 0) {
LAB_1437c870d:
            ppwVar58 = *(wchar_t ***)((longlong)puVar39 + 0x78);
            if (*(int *)(puVar14 + 1) == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            else {
              puVar21 = (undefined2 *)*puVar14;
            }
            FUN_1446f470e(&uStack_c8,puVar21,1);
            ppwVar30 = (wchar_t **)FUN_1448e5bf4(ppwVar58,uStack_c8,0);
            puVar27 = auStack_188;
            if ((int)ppwVar30 != -1) {
code_r0x0001437c88f1:
              lVar60 = *(longlong *)(ppwVar58[8] + (longlong)(int)ppwVar30 * 8 + 4);
              puVar27 = (undefined1 *)ppcVar54;
              if (lVar60 != -1) {
                *(undefined8 *)((longlong)ppcVar54 + -8) = 0x1437c891c;
                lVar18 = FUN_147dde4de(puVar39,param_3,param_4,(ulonglong)param_2 & 0xffffffff);
                if (lVar18 != 0) {
                  plVar3 = *(longlong **)((longlong)puVar39 + 0x70);
                  pcVar4 = *(code **)(*plVar3 + 0x1f8);
                  *(undefined8 *)((longlong)ppcVar54 + -8) = 0x1437c8939;
                  (*pcVar4)(plVar3,lVar18,lVar60);
                  goto switchD_1437c7e63_default;
                }
              }
            }
            goto LAB_1437c8e53;
          }
          lVar60 = *(longlong *)((longlong)puVar39 + 8);
          lVar18 = FUN_140019cf2();
          if (*(ulonglong *)(lVar18 + 8) == 0) {
            bVar64 = lVar60 != 0;
            if (lVar60 != lVar18 && bVar64) {
              do {
                lVar60 = *(longlong *)(lVar60 + 0x30);
                bVar64 = lVar60 != 0;
                if (lVar60 == lVar18) break;
              } while (lVar60 != 0);
            }
            if (!bVar64) goto LAB_1437c87ee;
LAB_1437c8ad4:
            if (*(int *)(puVar14 + 1) == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            else {
              puVar21 = (undefined2 *)*puVar14;
            }
            if (DAT_14c949118 == 0) {
              pcStack_b8 = FUN_140631fbe;
              lVar60 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar60;
              FUN_1446f470e(auStack_b0,L"Class",1);
              puStack_138 = &LAB_146891e90;
              pcStack_140 = (code *)&LAB_146273097;
              pcStack_150 = (code *)0x149e2b68a;
              uStack_148 = 199;
              puStack_158 = (undefined *)0x20;
              uStack_160._0_4_ = 0x10000000;
              pppwStack_168._0_4_ = 8;
              ppcStack_130 = &pcStack_b8;
              FUN_14574b4b2(lVar60);
              DAT_14c949118 = lVar60;
              uVar26 = FUN_144a7a812();
              lVar60 = DAT_14c949118;
              if (DAT_14c948f88 == (void *)0x0) {
                uStack_118 = (wchar_t **)&DAT_1427db2a2;
                DAT_14c948f88 = (void *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                pvStack_120 = DAT_14c948f88;
                FUN_1446f470e(&ppwStack_f0,L"Struct",1);
                pvVar16 = pvStack_120;
                ppcStack_130 = (code **)&uStack_118;
                puStack_138 = &LAB_146891313;
                pcStack_140 = FUN_146272f63;
                pcStack_150 = (code *)0x149e2b68a;
                uStack_148 = 199;
                puStack_158 = (undefined *)0x8;
                uStack_160._0_4_ = 0x10000020;
                pppwStack_168 = (wchar_t ***)CONCAT44(pppwStack_168._4_4_,8);
                FUN_14574b4b2(pvStack_120);
                DAT_14c948f88 = pvVar16;
                uVar24 = FUN_1446f8646();
                pvStack_120 = DAT_14c948f88;
                uVar25 = FUN_1400163b0();
                pppwStack_168 = (wchar_t ***)0x149e6bce8;
                FUN_14574b446(uVar25,pvStack_120,uVar24,L"/Script/CoreUObject");
              }
              pppwStack_168 = (wchar_t ***)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,lVar60,uVar26,L"/Script/CoreUObject");
            }
            pcStack_150 = (code *)0x0;
            uStack_160 = 0;
            puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
            pppwStack_168 = (wchar_t ***)CONCAT44(pppwStack_168._4_4_,2);
            ppwStack_f0 = (wchar_t **)FUN_1412ecd05(DAT_14c949118,0,puVar21,0);
            pppwStack_168 = &ppwStack_f0;
            uVar10 = FUN_147dde64a(puVar39,param_3,param_4,param_2);
LAB_1437c90dc:
            unaff_RBP = (wchar_t **)(ulonglong)uVar10;
            puVar27 = auStack_188;
            goto switchD_1437c7e63_default;
          }
          if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) goto LAB_1437c8ad4;
LAB_1437c87ee:
          lVar60 = *(longlong *)((longlong)puVar39 + 8);
          lVar18 = FUN_140f4d408();
          if (*(ulonglong *)(lVar18 + 8) == 0) {
            bVar64 = lVar60 != 0;
            if (lVar60 != lVar18 && bVar64) {
              do {
                lVar60 = *(longlong *)(lVar60 + 0x30);
                bVar64 = lVar60 != 0;
                if (lVar60 == lVar18) break;
              } while (lVar60 != 0);
            }
            if (!bVar64) goto LAB_1437c880f;
LAB_1437c8b19:
            if (*(int *)(puVar14 + 1) == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            else {
              puVar21 = (undefined2 *)*puVar14;
            }
            if (DAT_14c949118 == 0) {
              pcStack_b8 = FUN_140631fbe;
              lVar60 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c949118 = lVar60;
              FUN_1446f470e(auStack_b0,L"Class",1);
              puStack_138 = &LAB_146891e90;
              pcStack_140 = (code *)&LAB_146273097;
              pcStack_150 = (code *)0x149e2b68a;
              uStack_148 = 199;
              puStack_158 = (undefined *)0x20;
              uStack_160._0_4_ = 0x10000000;
              pppwStack_168._0_4_ = 8;
              ppcStack_130 = &pcStack_b8;
              FUN_14574b4b2(lVar60);
              DAT_14c949118 = lVar60;
              uVar26 = FUN_144a7a812();
              lVar60 = DAT_14c949118;
              if (DAT_14c948f88 == (void *)0x0) {
                uStack_118 = (wchar_t **)&DAT_1427db2a2;
                DAT_14c948f88 = (void *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                pvStack_120 = DAT_14c948f88;
                FUN_1446f470e(&ppwStack_f0,L"Struct",1);
                pvVar16 = pvStack_120;
                ppcStack_130 = (code **)&uStack_118;
                puStack_138 = &LAB_146891313;
                pcStack_140 = FUN_146272f63;
                pcStack_150 = (code *)0x149e2b68a;
                uStack_148 = 199;
                puStack_158 = (undefined *)0x8;
                uStack_160._0_4_ = 0x10000020;
                pppwStack_168 = (wchar_t ***)CONCAT44(pppwStack_168._4_4_,8);
                FUN_14574b4b2(pvStack_120);
                DAT_14c948f88 = pvVar16;
                uVar24 = FUN_1446f8646();
                pvStack_120 = DAT_14c948f88;
                uVar25 = FUN_1400163b0();
                pppwStack_168 = (wchar_t ***)0x149e6bce8;
                FUN_14574b446(uVar25,pvStack_120,uVar24,L"/Script/CoreUObject");
              }
              pppwStack_168 = (wchar_t ***)0x149e6ee30;
              FUN_14574b446(DAT_14c948f88,lVar60,uVar26,L"/Script/CoreUObject");
            }
            iVar11 = 0;
            pcStack_150 = (code *)0x0;
            uStack_160 = 0;
            puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
            pppwStack_168 = (wchar_t ***)CONCAT44(pppwStack_168._4_4_,2);
            lVar60 = FUN_1412ecd05(DAT_14c949118,0,puVar21,0);
            uStack_118 = (wchar_t **)0x0;
            uStack_110 = 0;
            if (lVar60 == 0) {
              uStack_118 = (wchar_t **)0x0;
              uStack_110 = 0;
              uVar28 = 0;
              uVar36 = 0;
              pvStack_120 = (void *)0x0;
            }
            else {
              FUN_1400bbfc4(&ppwStack_f0,lVar60);
              uStack_118 = ppwStack_f0;
              uStack_110 = CONCAT44(uStack_e4,iStack_e8);
              pvStack_120 = (void *)CONCAT44(uStack_dc,uStack_e0);
              iVar11 = (int)pvStack_d8;
              cVar8 = (*(code *)PTR_FUN_14c758760)();
              uVar10 = *(uint *)(lVar60 + 0xc);
              uVar28 = (ulonglong)uVar10;
              if (cVar8 != '\0') {
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar60 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                else {
                  lVar60 = 0;
                }
                if ((*(uint *)(lVar60 + 8) & 0x8400000) != 0) {
                  uVar28 = 0;
                  uVar36 = 0;
                  goto LAB_1437c9296;
                }
              }
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar60 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar60 = 0;
              }
              uVar10 = *(uint *)(lVar60 + 0x10);
              if (*(uint *)(lVar60 + 0x10) == 0) {
                LOCK();
                iVar56 = DAT_14c964868 + 1;
                UNLOCK();
                uVar62 = DAT_14c964868 + 1;
                bVar64 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar56;
                if (bVar64) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar62);
                }
                LOCK();
                uVar10 = *(uint *)(lVar60 + 0x10);
                bVar64 = uVar10 == 0;
                if (bVar64) {
                  *(uint *)(lVar60 + 0x10) = uVar62;
                  uVar10 = 0;
                }
                UNLOCK();
                if (bVar64) {
                  uVar10 = uVar62;
                }
              }
              uVar36 = (ulonglong)uVar10 << 0x20;
            }
LAB_1437c9296:
            puVar22 = (ulonglong *)FUN_147dde4de(puVar39,param_3,param_4,param_2);
            pvVar16 = pvStack_120;
            bVar64 = puVar22 != (ulonglong *)0x0;
            if (bVar64) {
              *puVar22 = uVar36 | uVar28;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_118;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_118._4_4_;
              *(undefined4 *)(puVar22 + 2) = (undefined4)uStack_110;
              *(undefined4 *)((longlong)puVar22 + 0x14) = uStack_110._4_4_;
              *(int *)(puVar22 + 4) = iVar11;
              if (iVar11 == 0 && *(int *)((longlong)puVar22 + 0x24) == 0) {
                *(undefined4 *)((longlong)puVar22 + 0x24) = 0;
              }
              else {
                FUN_1446dd670(puVar22 + 3,iVar11);
                if (iVar11 != 0) {
                  memcpy((void *)puVar22[3],pvVar16,(longlong)iVar11 * 2);
                }
              }
            }
joined_r0x0001437c9308:
            unaff_RBP = (wchar_t **)(ulonglong)bVar64;
            puVar27 = auStack_188;
            if (pvVar16 != (void *)0x0) {
              FUN_1400020a8(pvVar16);
              puVar27 = auStack_188;
            }
            goto switchD_1437c7e63_default;
          }
          if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) goto LAB_1437c8b19;
LAB_1437c880f:
          puVar59 = *(undefined **)((longlong)puVar39 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
            FUN_1446f4b16();
            pcStack_150 = FUN_1403a5f94;
            puStack_158 = &DAT_14c951c78;
            uStack_160 = 0;
            pppwStack_168 = (wchar_t ***)0x4018001;
            FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
            atexit(FUN_1428170e8);
            _Init_thread_footer(&DAT_14c952478);
          }
          if (DAT_14c952430 == 0) {
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 != &DAT_14c952428 && bVar64) {
              do {
                puVar59 = *(undefined **)(puVar59 + 0x30);
                bVar64 = puVar59 != (undefined *)0x0;
                if (puVar59 == &DAT_14c952428) break;
              } while (puVar59 != (undefined *)0x0);
            }
            if (bVar64) goto LAB_1437c8b65;
          }
          else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952430) != 0) {
LAB_1437c8b65:
            if (*(int *)(puVar14 + 1) == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            else {
              puVar21 = (undefined2 *)*puVar14;
            }
            ppwStack_f0 = (wchar_t **)
                          FUN_140277b32(*(undefined8 *)((longlong)puVar39 + 0x70),0,puVar21,0);
            pppwStack_168 = &ppwStack_f0;
            uVar10 = FUN_147dde6ae(puVar39,param_3,param_4,param_2);
            goto LAB_1437c90dc;
          }
          lVar60 = *(longlong *)((longlong)puVar39 + 8);
          lVar18 = FUN_14010a2ea();
          if (*(ulonglong *)(lVar18 + 8) == 0) {
            bVar64 = lVar60 != 0;
            if (lVar60 != lVar18 && bVar64) {
              do {
                lVar60 = *(longlong *)(lVar60 + 0x30);
                bVar64 = lVar60 != 0;
                if (lVar60 == lVar18) break;
              } while (lVar60 != 0);
            }
            if (!bVar64) goto LAB_1437c8874;
          }
          else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) == 0) {
LAB_1437c8874:
            puVar59 = *(undefined **)((longlong)puVar39 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1))
            {
              FUN_1446f4b16();
              pcStack_150 = FUN_140f17fc6;
              puStack_158 = &DAT_14c951c78;
              uStack_160 = 0;
              pppwStack_168 = (wchar_t ***)0x24008001;
              FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
              atexit(FUN_142818859);
              _Init_thread_footer(&DAT_14c9529b0);
            }
            if (DAT_14c952968 == 0) {
              bVar64 = puVar59 != (undefined *)0x0;
              if (puVar59 != &DAT_14c952960 && bVar64) {
                do {
                  puVar59 = *(undefined **)(puVar59 + 0x30);
                  bVar64 = puVar59 != (undefined *)0x0;
                  if (puVar59 == &DAT_14c952960) break;
                } while (puVar59 != (undefined *)0x0);
              }
              puVar27 = auStack_188;
              if (bVar64) goto LAB_1437c8bf6;
            }
            else {
              puVar27 = auStack_188;
              if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952968) != 0) {
LAB_1437c8bf6:
                uStack_118 = (wchar_t **)0x0;
                uStack_110 = 0;
                pvStack_108 = (void *)0x0;
                uStack_100 = 0;
                ppwStack_f0 = (wchar_t **)*puVar14;
                iStack_e8 = *(int *)(puVar14 + 1) + -1;
                if (*(int *)(puVar14 + 1) == 0) {
                  iStack_e8 = 0;
                }
                FUN_14475bf92(&uStack_118,&ppwStack_f0);
                pvVar16 = pvStack_108;
                ppwStack_f0 = (wchar_t **)0x0;
                iStack_e8 = (undefined4)uStack_118;
                uStack_e4 = uStack_118._4_4_;
                uStack_e0 = (undefined4)uStack_110;
                uStack_dc = uStack_110._4_4_;
                pvStack_d8 = (void *)0x0;
                lVar60 = (longlong)(int)uStack_100;
                iStack_d0 = (int)uStack_100;
                if (lVar60 == 0) {
                  uStack_cc = 0;
                }
                else {
                  FUN_1446dd670(&pvStack_d8,uStack_100 & 0xffffffff,0);
                  memcpy(pvStack_d8,pvVar16,lVar60 * 2);
                }
                pppwVar23 = (wchar_t ***)FUN_147dde4de(puVar39,param_3,param_4,param_2);
                iVar11 = iStack_d0;
                pvVar16 = pvStack_d8;
                bVar64 = pppwVar23 != (wchar_t ***)0x0;
                if (bVar64) {
                  *pppwVar23 = ppwStack_f0;
                  *(int *)(pppwVar23 + 1) = iStack_e8;
                  *(undefined4 *)((longlong)pppwVar23 + 0xc) = uStack_e4;
                  *(undefined4 *)(pppwVar23 + 2) = uStack_e0;
                  *(undefined4 *)((longlong)pppwVar23 + 0x14) = uStack_dc;
                  if (pppwVar23 != &ppwStack_f0) {
                    lVar60 = (longlong)iStack_d0;
                    *(int *)(pppwVar23 + 4) = iStack_d0;
                    if (iStack_d0 == 0 && *(int *)((longlong)pppwVar23 + 0x24) == 0) {
                      *(undefined4 *)((longlong)pppwVar23 + 0x24) = 0;
                    }
                    else {
                      FUN_1446dd670(pppwVar23 + 3,iStack_d0);
                      if (iVar11 != 0) {
                        memcpy(pppwVar23[3],pvVar16,lVar60 * 2);
                      }
                    }
                  }
                }
                pvVar16 = pvStack_108;
                if (pvStack_d8 != (void *)0x0) {
                  FUN_1400020a8();
                  pvVar16 = pvStack_108;
                }
                goto joined_r0x0001437c9308;
              }
            }
            goto LAB_1437c8e53;
          }
          if (*(int *)(puVar14 + 1) == 0) {
            puVar21 = &DAT_149dfb77a;
          }
          else {
            puVar21 = (undefined2 *)*puVar14;
          }
          uVar10 = 0;
          lVar60 = FUN_140277b32(*(undefined8 *)((longlong)puVar39 + 0x70),0,puVar21,0);
          uVar28 = 0;
          if (lVar60 != 0) {
            uVar10 = *(uint *)(lVar60 + 0xc);
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar60 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar60 = 0;
            }
            uVar28 = (ulonglong)*(uint *)(lVar60 + 0x10);
            if (*(uint *)(lVar60 + 0x10) == 0) {
              LOCK();
              iVar11 = DAT_14c964868 + 1;
              UNLOCK();
              uVar62 = DAT_14c964868 + 1;
              bVar64 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar11;
              if (bVar64) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar62);
              }
              LOCK();
              uVar9 = *(uint *)(lVar60 + 0x10);
              bVar64 = uVar9 == 0;
              if (bVar64) {
                *(uint *)(lVar60 + 0x10) = uVar62;
                uVar9 = 0;
              }
              UNLOCK();
              if (bVar64) {
                uVar9 = uVar62;
              }
              uVar28 = (ulonglong)uVar9;
            }
          }
          puVar22 = (ulonglong *)FUN_147dde4de(puVar39,param_3,param_4,param_2);
          puVar27 = auStack_188;
          if (puVar22 == (ulonglong *)0x0) goto LAB_1437c8e53;
          uVar28 = (ulonglong)uVar10 | uVar28 << 0x20;
        }
        *puVar22 = uVar28;
        puVar27 = (undefined1 *)ppcVar55;
        goto switchD_1437c7e63_default;
      case 6:
        puVar27 = auStack_188;
        if ((wchar_t *)puVar39 != (wchar_t *)0x0) {
          ppwVar63 = *(wchar_t ***)(pwVar37 + 0x10);
          ppcVar55 = (char **)auStack_188;
          ppwVar61 = param_3;
          goto code_r0x0001437c7ecd;
        }
        goto LAB_1437c8e53;
      case 7:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(DAT_14c707940 ^ (ulonglong)auStack_188 ^ (ulonglong)auStack_188);
      default:
        goto switchD_1437c7e63_default;
      }
      goto LAB_1437c7eb6;
    case 0xe:
      ppcVar55 = (char **)auStack_60;
      *pcStack_68 = *pcStack_68 + cVar8;
      pcStack_68[-0x75] = pcStack_68[-0x75] + bVar32;
code_r0x0001437c7ecd:
      uVar12 = SUB84(param_2,0);
      puVar59 = *(undefined **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951d78) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c963f;
        FUN_144b3d300(&DAT_14c951d78);
        if (DAT_14c951d78 == -1) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9651;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_1409f1a5c;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x1008041;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9697;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c96a3;
          atexit(FUN_14281201f);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c96af;
          _Init_thread_footer(&DAT_14c951d78);
        }
      }
      puVar27 = (undefined1 *)ppcVar55;
      if (DAT_14c951d30 == 0) {
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c951d28 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c951d28) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (bVar64) goto LAB_1437c8972;
      }
      else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c951d30) != 0) {
LAB_1437c8972:
        *(undefined1 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8c80;
        cVar8 = FUN_146842de0((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8c99;
          puVar19 = (undefined1 *)
                    FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
          unaff_RBP = (wchar_t **)(ulonglong)(puVar19 != (undefined1 *)0x0);
          if (puVar19 != (undefined1 *)0x0) {
            *puVar19 = *(undefined1 *)((longlong)ppcVar55 + 0x98);
          }
          goto switchD_1437c7e63_default;
        }
      }
      puVar59 = *(undefined **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952420) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c99b1;
        FUN_144b3d300(&DAT_14c952420);
        if (DAT_14c952420 == -1) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c99c3;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_14079c5e4;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x101008001;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9a10;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9a1c;
          atexit(FUN_1428170bb);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9a28;
          _Init_thread_footer(&DAT_14c952420);
        }
      }
      if (DAT_14c9523d8 == (undefined8 *)0x0) {
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c9523d0 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c9523d0) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (bVar64) goto LAB_1437c8991;
      }
      else if ((*(ulonglong *)(puVar59 + 0x18) & (ulonglong)DAT_14c9523d8) != 0) {
LAB_1437c8991:
        *(undefined8 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8cc5;
        cVar8 = FUN_146842f4c((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8cde;
          puVar14 = (undefined8 *)
                    FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
          unaff_RBP = (wchar_t **)(ulonglong)(puVar14 != (undefined8 *)0x0);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = *(undefined8 *)((longlong)ppcVar55 + 0x98);
          }
          goto switchD_1437c7e63_default;
        }
      }
      puVar14 = *(undefined8 **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9523c8) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9741;
        FUN_144b3d300(&DAT_14c9523c8);
        if (DAT_14c9523c8 == -1) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9753;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_1408a629c;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x1008101;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9799;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c97a5;
          atexit(FUN_14281708e);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c97b1;
          _Init_thread_footer(&DAT_14c9523c8);
        }
      }
      if (DAT_14c952380 == 0) {
        bVar64 = puVar14 != (undefined8 *)0x0;
        if (puVar14 != &DAT_14c952378 && bVar64) {
          do {
            puVar14 = (undefined8 *)puVar14[6];
            bVar64 = puVar14 != (undefined8 *)0x0;
            if (puVar14 == &DAT_14c952378) break;
          } while (puVar14 != (undefined8 *)0x0);
        }
        if (bVar64) goto LAB_1437c89b4;
      }
      else if ((puVar14[3] & DAT_14c952380) != 0) {
LAB_1437c89b4:
        *(undefined4 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8d0e;
        cVar8 = FUN_146842e8b((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8d27;
          puVar20 = (undefined4 *)
                    FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
          unaff_RBP = (wchar_t **)(ulonglong)(puVar20 != (undefined4 *)0x0);
          if (puVar20 != (undefined4 *)0x0) {
            *puVar20 = *(undefined4 *)((longlong)ppcVar55 + 0x98);
          }
          goto switchD_1437c7e63_default;
        }
      }
      puVar14 = *(undefined8 **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952210) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c95be;
        FUN_144b3d300(&DAT_14c952210);
        if (DAT_14c952210 == -1) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c95d0;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_1405ebbb2;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x1008081;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9616;
          FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9622;
          atexit(FUN_142816fad);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c962e;
          _Init_thread_footer(&DAT_14c952210);
        }
      }
      if (DAT_14c9521c8 == 0) {
        bVar64 = puVar14 != (undefined8 *)0x0;
        if (puVar14 != &DAT_14c9521c0 && bVar64) {
          do {
            puVar14 = (undefined8 *)puVar14[6];
            bVar64 = puVar14 != (undefined8 *)0x0;
            if (puVar14 == &DAT_14c9521c0) break;
          } while (puVar14 != (undefined8 *)0x0);
        }
        if (!bVar64) goto LAB_1437c831b;
LAB_1437c89d6:
        *(undefined4 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8d57;
        cVar8 = FUN_146842c83((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 == '\0') goto LAB_1437c831b;
LAB_1437c8d7a:
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8d8b;
        puVar20 = (undefined4 *)
                  FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
        unaff_RBP = (wchar_t **)(ulonglong)(puVar20 != (undefined4 *)0x0);
        if (puVar20 != (undefined4 *)0x0) {
          *puVar20 = *(undefined4 *)((longlong)ppcVar55 + 0x98);
        }
        goto switchD_1437c7e63_default;
      }
      if ((puVar14[3] & DAT_14c9521c8) != 0) goto LAB_1437c89d6;
LAB_1437c831b:
      puVar59 = *(undefined **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952318) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c943b;
        FUN_144b3d300(&DAT_14c952318);
        if (DAT_14c952318 == -1) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c944d;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_1468e122c;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x1008801;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9493;
          FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c949f;
          atexit(FUN_142817034);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c94ab;
          _Init_thread_footer(&DAT_14c952318);
        }
      }
      if (DAT_14c9522d0 == 0) {
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c9522c8 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c9522c8) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (bVar64) goto LAB_1437c89f8;
      }
      else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c9522d0) != 0) {
LAB_1437c89f8:
        *(undefined4 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8d72;
        cVar8 = FUN_1468429ca((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') goto LAB_1437c8d7a;
      }
      lVar60 = *(longlong *)((longlong)puVar40 + 8);
      *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c839e;
      lVar18 = FUN_14093f0c0();
      if (*(ulonglong *)(lVar18 + 8) == 0) {
        bVar64 = lVar60 != 0;
        if (lVar60 != lVar18 && bVar64) {
          do {
            lVar60 = *(longlong *)(lVar60 + 0x30);
            bVar64 = lVar60 != 0;
            if (lVar60 == lVar18) break;
          } while (lVar60 != 0);
        }
        if (!bVar64) goto LAB_1437c83e5;
LAB_1437c8a1a:
        *(undefined2 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8db7;
        cVar8 = FUN_146842d31((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 == '\0') goto LAB_1437c83e5;
LAB_1437c8dda:
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8deb;
        puVar21 = (undefined2 *)
                  FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
        unaff_RBP = (wchar_t **)(ulonglong)(puVar21 != (undefined2 *)0x0);
        if (puVar21 != (undefined2 *)0x0) {
          *puVar21 = *(undefined2 *)((longlong)ppcVar55 + 0x98);
        }
        goto switchD_1437c7e63_default;
      }
      if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) goto LAB_1437c8a1a;
LAB_1437c83e5:
      lVar60 = *(longlong *)((longlong)puVar40 + 8);
      *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c83ee;
      lVar18 = FUN_140e98e1a();
      if (*(ulonglong *)(lVar18 + 8) == 0) {
        bVar64 = lVar60 != 0;
        if (lVar60 != lVar18 && bVar64) {
          do {
            lVar60 = *(longlong *)(lVar60 + 0x30);
            bVar64 = lVar60 != 0;
            if (lVar60 == lVar18) break;
          } while (lVar60 != 0);
        }
        if (bVar64) goto LAB_1437c8a3b;
      }
      else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) {
LAB_1437c8a3b:
        *(undefined2 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8dd2;
        cVar8 = FUN_146842a78((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') goto LAB_1437c8dda;
      }
      puVar59 = *(undefined **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952268) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c94bc;
        FUN_144b3d300(&DAT_14c952268);
        if (DAT_14c952268 == -1) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c94ce;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_1459738d6;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x1408001;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9514;
          FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9520;
          atexit(FUN_142816fda);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c952c;
          _Init_thread_footer(&DAT_14c952268);
        }
      }
      if (DAT_14c952220 == 0) {
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c952218 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c952218) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (bVar64) goto LAB_1437c8a5c;
      }
      else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952220) != 0) {
LAB_1437c8a5c:
        *(undefined8 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8e12;
        cVar8 = FUN_146842bd2((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') goto LAB_1437c8e9f;
      }
      puVar59 = *(undefined **)((longlong)puVar40 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < (int)DAT_14c952370) {
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c953d;
        FUN_144b3d300(&DAT_14c952370);
        if (DAT_14c952370 == 0xffffffff) {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c954f;
          FUN_14475b26a();
          *(code **)((longlong)ppcVar55 + 0x38) = FUN_1468e12e4;
          *(undefined **)((longlong)ppcVar55 + 0x30) = &DAT_14c9520b8;
          *(undefined8 *)((longlong)ppcVar55 + 0x28) = 0;
          *(undefined8 *)((longlong)ppcVar55 + 0x20) = 0x1008201;
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9595;
          FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c95a1;
          atexit(FUN_142817061);
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c95ad;
          _Init_thread_footer(&DAT_14c952370);
        }
      }
      if (DAT_14c952328 == 0) {
        bVar64 = puVar59 != (undefined *)0x0;
        if (puVar59 != &DAT_14c952320 && bVar64) {
          do {
            puVar59 = *(undefined **)(puVar59 + 0x30);
            bVar64 = puVar59 != (undefined *)0x0;
            if (puVar59 == &DAT_14c952320) break;
          } while (puVar59 != (undefined *)0x0);
        }
        if (bVar64) goto LAB_1437c8a7f;
      }
      else if ((*(ulonglong *)(puVar59 + 0x18) & DAT_14c952328) != 0) {
LAB_1437c8a7f:
        *(undefined8 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8e30;
        cVar8 = FUN_146842914((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') goto LAB_1437c8e9f;
      }
      lVar60 = *(longlong *)((longlong)puVar40 + 8);
      *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8532;
      lVar18 = FUN_14093f012();
      if (*(ulonglong *)(lVar18 + 8) == 0) {
        bVar64 = lVar60 != 0;
        if (lVar60 != lVar18 && bVar64) {
          do {
            lVar60 = *(longlong *)(lVar60 + 0x30);
            bVar64 = lVar60 != 0;
            if (lVar60 == lVar18) break;
          } while (lVar60 != 0);
        }
        if (bVar64) goto LAB_1437c857a;
      }
      else if ((*(ulonglong *)(lVar60 + 0x18) & *(ulonglong *)(lVar18 + 8)) != 0) {
LAB_1437c857a:
        *(undefined1 *)((longlong)ppcVar55 + 0x98) = 0;
        if (*(int *)(ppwVar63 + 10) == 0) {
          pwVar37 = L"";
        }
        else {
          pwVar37 = ppwVar63[9];
        }
        *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c8e4b;
        cVar8 = FUN_146842de0((undefined1 *)((longlong)ppcVar55 + 0x98),pwVar37);
        if (cVar8 != '\0') {
          *(undefined8 *)((longlong)ppcVar55 + -8) = 0x1437c9232;
          puVar19 = (undefined1 *)
                    FUN_147dde4de(puVar40,ppwVar61,param_1,(ulonglong)param_2 & 0xffffffff);
          if (puVar19 != (undefined1 *)0x0) {
            *puVar19 = *(undefined1 *)((longlong)ppcVar55 + 0x98);
            unaff_RBP = (wchar_t **)0x1;
            goto switchD_1437c7e63_default;
          }
        }
      }
      goto LAB_1437c8e53;
    case 0xf:
      pwVar37 = (wchar_t *)
                (ulonglong)(&switchD_1437c4c2d::switchdataD_14ab33474)[(longlong)puVar35 * 2];
      ppcVar53 = &pcStack_68;
switchD_147dde2ee_caseD_13:
      pbVar1 = (byte *)(in_R10 + 0x78 + (longlong)pwVar37 * 4);
      *pbVar1 = *pbVar1 & (byte)ppwVar30;
      puVar19 = (undefined1 *)((longlong)ppcVar53 + -8);
      *(undefined8 *)((longlong)ppcVar53 + -8) = 0x8638b4c;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c951d20) {
        *(undefined8 *)((longlong)ppcVar53 + -0x10) = 0x1437c9a39;
        FUN_144b3d300(&DAT_14c951d20);
        if (DAT_14c951d20 == -1) {
          *(undefined8 *)((longlong)ppcVar53 + -0x10) = 0x1437c9a4b;
          uVar26 = FUN_1446ddbd2();
          *(code **)((longlong)ppcVar53 + 0x30) = FUN_14067a048;
          *(undefined8 *)((longlong)ppcVar53 + 0x28) = uVar26;
          *(undefined8 *)((longlong)ppcVar53 + 0x20) = 0;
          *(undefined8 *)((longlong)ppcVar53 + 0x18) = 0x28001;
          *(undefined8 *)((longlong)ppcVar53 + -0x10) = 0x1437c9a8a;
          FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
          *(undefined8 *)((longlong)ppcVar53 + -0x10) = 0x1437c9a96;
          atexit(FUN_142811fe5);
          *(undefined8 *)((longlong)ppcVar53 + -0x10) = 0x1437c9aa2;
          _Init_thread_footer(&DAT_14c951d20);
        }
      }
      if (DAT_14c951cd8 == (undefined8 *)0x0) {
        bVar64 = ppwVar58 != (wchar_t **)0x0;
        if (ppwVar58 != (wchar_t **)&DAT_14c951cd0 && bVar64) {
          do {
            ppwVar58 = (wchar_t **)ppwVar58[6];
            bVar64 = ppwVar58 != (wchar_t **)0x0;
            if (ppwVar58 == (wchar_t **)&DAT_14c951cd0) break;
          } while (ppwVar58 != (wchar_t **)0x0);
        }
        if (bVar64) goto LAB_1437c8117;
      }
      else {
        puVar19 = (undefined1 *)((longlong)ppcVar53 + -8);
        if (((ulonglong)ppwVar58[3] & (ulonglong)DAT_14c951cd8) != 0) {
LAB_1437c8117:
          *(undefined8 *)((longlong)ppcVar53 + -0x10) = 0x1437c8128;
          lVar60 = FUN_147dde4de(puVar40,ppwVar61,param_1);
          puVar27 = (undefined1 *)((longlong)ppcVar53 + -8);
          if (lVar60 != 0) {
            if ((char)ppwVar63 == '\0') {
              bVar32 = 0;
            }
            else {
              bVar32 = (byte)*(wchar_t *)((longlong)puVar40 + 0x72);
            }
            *(byte *)(lVar60 + (ulonglong)*(byte *)((longlong)puVar40 + 0x71)) =
                 *(byte *)(lVar60 + (ulonglong)*(byte *)((longlong)puVar40 + 0x71)) &
                 ~*(byte *)((longlong)puVar40 + 0x73) | bVar32;
            puVar27 = (undefined1 *)((longlong)ppcVar53 + -8);
            goto switchD_1437c7e63_default;
          }
          goto LAB_1437c8e53;
        }
      }
LAB_1437c7eb6:
      *(undefined8 *)(puVar19 + -8) = 0x1437c7ebb;
      FUN_140932b6e();
      puVar27 = puVar19;
LAB_1437c8e53:
      unaff_RBP = (wchar_t **)0x0;
switchD_1437c7e63_default:
      if ((*(ulonglong *)(puVar27 + 0xe0) ^ (ulonglong)puVar27) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar27 + -8) = &UNK_1437c8e84;
        FUN_144d8e3a0();
      }
      return (wchar_t **)((ulonglong)unaff_RBP & 0xffffffff);
    case 0x10:
      *(byte *)((longlong)ppwVar30 + -0x77) = *(byte *)((longlong)ppwVar30 + -0x77) + bVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x11:
    case 0x13:
    case 0x15:
      *(byte *)((longlong)ppwVar30 + -0x75) = *(byte *)((longlong)ppwVar30 + -0x75) + bVar32;
      piVar13 = (int *)((longlong)&PTR_FUN_14ab33428 + uVar36 + 4);
      *piVar13 = *piVar13 + uVar10;
      pcVar29 = (char *)CONCAT71(uVar31,*(byte *)ppwVar30 + 1);
      *pcVar29 = *pcVar29 + *(byte *)ppwVar30 + 1;
      ppcVar55 = (char **)auStack_60;
      goto switchD_147de0522_caseD_4;
    case 0x12:
      local_38 = (undefined *)(ulonglong)((uint)CONCAT71(uVar31,0x49) ^ (uint)&pcStack_68);
      *(int *)((longlong)&UINT_14ab33498 + uVar36) =
           *(int *)((longlong)&UINT_14ab33498 + uVar36) + -1;
      ppcVar55 = &pcStack_68;
      switch(*(undefined4 *)((longlong)&UINT_14ab33494 + uVar36)) {
      case 3:
      case 5:
      case 7:
        local_48 = L"\r\n";
        local_40 = CONCAT44(local_40._4_4_,2);
        FUN_147dea178(param_2[1]);
        iVar11 = *(int *)((longlong)param_2 + 0x24);
        ppcVar55 = &pcStack_68;
        if (0 < iVar11) {
          pwVar37 = param_2[1];
          do {
            local_48 = (wchar_t *)CONCAT62(local_48._2_6_,9);
            (**(code **)(*(longlong *)pwVar37 + 0x170))(pwVar37,&local_48,2);
            iVar11 = iVar11 + -1;
            ppcVar55 = &pcStack_68;
          } while (iVar11 != 0);
        }
        break;
      case 4:
        break;
      default:
        pwVar37 = param_2[1];
        puVar39 = (uint *)&local_48;
switchD_147dde2ee_caseD_19:
                    /* WARNING (jumptable): Read-only address (ram,0x00014ab33454) is written */
        *(undefined2 *)puVar39 = 0x20;
        (**(code **)(*(longlong *)pwVar37 + 0x170))(pwVar37,puVar39,2);
        ppcVar55 = &pcStack_68;
      }
switchD_147de0522_caseD_4:
      pwVar37 = param_2[1];
      *(undefined2 *)((longlong)ppcVar55 + 0x20) = 0x5d;
      pcVar4 = *(code **)(*(longlong *)pwVar37 + 0x170);
      *(undefined8 *)((longlong)ppcVar55 + -8) = 0x147de055e;
      (*pcVar4)(pwVar37,(undefined2 *)((longlong)ppcVar55 + 0x20),2);
      *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + -1;
      *(undefined8 *)((longlong)ppcVar55 + -8) = 0x147de056a;
      ppwVar63 = (wchar_t **)FUN_14047c610(param_2 + 2);
      *(int *)(param_2 + 4) = 5;
      if ((*(ulonglong *)((longlong)ppcVar55 + 0x30) ^ (ulonglong)ppcVar55) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)((longlong)ppcVar55 + -8) = &UNK_147de0590;
        FUN_144d8e3a0();
      }
      return ppwVar63;
    case 0x14:
      ppwVar63 = (wchar_t **)FUN_147de04ec(*(undefined8 *)((longlong)&UINT_14ab3347c + uVar36));
      return ppwVar63;
    case 0x16:
      *(undefined1 *)((ulonglong)ppwVar30 & 0xffffffffffffffe8) =
           *(undefined1 *)((ulonglong)ppwVar30 & 0xffffffffffffffe8);
      *(char *)(uVar36 + 0x10ae47a66) = *(char *)(uVar36 + 0x10ae47a66) + bVar32;
code_r0x0001437cb43f:
      FUN_1446dd670(puVar35,puVar39);
      memcpy(param_16,puVar40,(longlong)param_2 * 2);
      ppwVar68 = unaff_R12;
LAB_1437cb467:
      iVar11 = (int)((ulonglong)unaff_RSI >> 0x20);
      uVar12 = (undefined4)(unaff_retaddr >> 0x20);
      puVar40 = (uint *)&DAT_00000001;
      switch(param_18._4_4_) {
      case 0:
        if (ppwVar61 != (wchar_t **)0x0) {
          ppwVar30 = (wchar_t **)ppwVar61[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
            local_38 = (undefined *)FUN_1446ddbd2();
            local_48 = (wchar_t *)0x800000008001;
            local_40 = 0;
            FUN_14000176a(ppwVar63,L"FSetProperty");
            atexit(FUN_142817fb7);
            _Init_thread_footer(&DAT_14c952900);
          }
          if (DAT_14c9528b8 == 0) {
            bVar64 = ppwVar30 != (wchar_t **)0x0;
            if (ppwVar30 != ppwVar63 && bVar64) {
              do {
                ppwVar30 = (wchar_t **)ppwVar30[6];
                bVar64 = ppwVar30 != (wchar_t **)0x0;
                if (ppwVar30 == ppwVar63) break;
              } while (ppwVar30 != (wchar_t **)0x0);
            }
            if (bVar64) goto LAB_1437cb4d5;
          }
          else if (((ulonglong)ppwVar30[3] & DAT_14c9528b8) != 0) {
LAB_1437cb4d5:
            param_5 = (wchar_t **)ppwVar61[0xe];
code_r0x0001437cb4e1:
            param_9._0_4_ = *(int *)(ppwVar61 + 0x11);
            param_7 = (wchar_t **)ppwVar61[0xf];
            param_8 = ppwVar61[0x10];
            param_13 = (wchar_t **)&param_22;
            param_12 = FUN_14281ab14;
            param_6 = ppwVar68;
            param_22 = unaff_R13;
            FUN_1402609e8();
          }
        }
        lVar60 = (longlong)(int)(uint)param_20;
        if (lVar60 == 0) goto switchD_1437cb48b_caseD_3;
LAB_1437cb968:
        unaff_RSI = (ulonglong)*(uint *)(param_19 + lVar60 * 4 + -4) << 0x20;
        unaff_retaddr = (ulonglong)*(uint *)((longlong)param_19 + lVar60 * 0x20 + -0x1c) << 0x20;
        ppwVar68 = (wchar_t **)param_19[lVar60 * 4 + -3];
        ppwVar61 = (wchar_t **)param_19[lVar60 * 4 + -2];
        unaff_R15 = (wchar_t **)param_19[lVar60 * 4 + -1];
        param_20._0_4_ = (int)lVar60 - 1;
        goto LAB_1437cc348;
      case 1:
        param_12 = (code *)((ulonglong)param_12._4_4_ << 0x20);
        param_13 = (wchar_t **)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
        param_14 = (code *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
        param_15 = 0;
        puVar21 = &DAT_149dfb77a;
        if ((int)param_17 != 0) {
          puVar21 = param_16;
        }
        FUN_1446f470e(unaff_R13,puVar21,0);
        ppwVar5 = param_5;
        ppwVar30 = unaff_R15;
        ppwVar41 = param_5;
        if (unaff_R15 != (wchar_t **)0x0) {
          while (ppwVar41 != (wchar_t **)0x0) {
            for (unaff_RBP = (wchar_t **)ppwVar30[10]; unaff_RBP != (wchar_t **)0x0;
                unaff_RBP = (wchar_t **)unaff_RBP[3]) {
              if ((~*(uint *)(unaff_RBP[1] + 0xc) & 0x8001) == 0) goto LAB_1437cb63b;
            }
            ppwVar30 = (wchar_t **)(**(code **)(*ppwVar30 + 0x158))(ppwVar30);
            ppwVar41 = ppwVar30;
          }
        }
LAB_1437cb5df:
        if (*(int *)ppwVar58 != 0) {
          (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
          unaff_RBP = (wchar_t **)((longlong)&param_18 + 4);
          goto LAB_1437cc348;
        }
        goto LAB_1437cc957;
      default:
        goto switchD_1437cb48b_caseD_2;
      case 3:
switchD_1437cb48b_caseD_3:
        unaff_R14 = 0;
        break;
      case 5:
        if (((int)param_17 < 2) && (ppwVar61 != (wchar_t **)0x0)) {
          ppwVar30 = (wchar_t **)ppwVar61[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
            local_38 = (undefined *)FUN_1446ddbd2();
            local_48 = (wchar_t *)0x800000008001;
            local_40 = 0;
            FUN_14000176a(ppwVar63,L"FSetProperty",0x800000000000,0);
            atexit(FUN_142817fb7);
            _Init_thread_footer(&DAT_14c952900);
          }
          if (ppwVar30 != ppwVar63) goto LAB_1437cb864;
          ppwVar30 = (wchar_t **)ppwVar61[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
            local_38 = (undefined *)FUN_1446ddbd2();
            local_48 = (wchar_t *)0x800000008001;
            local_40 = 0;
            FUN_14000176a(ppwVar63,L"FSetProperty",0x800000000000,0);
            atexit(FUN_142817fb7);
            _Init_thread_footer(&DAT_14c952900);
          }
          if (DAT_14c9528b8 == 0) {
            bVar64 = ppwVar30 != (wchar_t **)0x0;
            if (ppwVar30 != ppwVar63 && bVar64) {
              do {
                ppwVar30 = (wchar_t **)ppwVar30[6];
                bVar64 = ppwVar30 != (wchar_t **)0x0;
                if (ppwVar30 == ppwVar63) break;
              } while (ppwVar30 != (wchar_t **)0x0);
            }
          }
          else {
            bVar64 = ((ulonglong)ppwVar30[3] & DAT_14c9528b8) != 0;
          }
          ppwVar30 = (wchar_t **)0x0;
          if (bVar64) {
            ppwVar30 = ppwVar61;
          }
          param_2 = (wchar_t **)ppwVar30[0xe];
          param_9._0_4_ = *(int *)(ppwVar30 + 0x11);
          param_7 = (wchar_t **)ppwVar30[0xf];
          param_8 = ppwVar30[0x10];
          param_5 = param_2;
          param_6 = ppwVar68;
          iVar11 = FUN_14026089e(unaff_R13);
          param_4 = (wchar_t *)0x0;
          if (*(int *)(param_6 + 1) != *(int *)((longlong)param_6 + 0x34)) {
            param_4 = (wchar_t *)((longlong)*param_6 + (longlong)iVar11 * (longlong)(int)param_9);
          }
          ppwVar30 = *(wchar_t ***)param_1;
switchD_147dde2ee_caseD_25:
          local_48 = param_4;
          goto LAB_1437cc345;
        }
LAB_1437cb864:
        if ((int)param_17 < 2) {
          if (ppwVar61 == (wchar_t **)0x0) {
            ppwVar61 = (wchar_t **)0x0;
            goto switchD_1437cb48b_caseD_3;
          }
          pwVar37 = ppwVar61[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
            FUN_1446ddbd2();
            local_38 = &DAT_14c951a38;
            local_40 = 0;
            local_48 = (wchar_t *)0x208001;
            FUN_14000176a(&DAT_14c951a90,L"FArrayProperty");
            atexit(FUN_14280cbf7);
            _Init_thread_footer(&DAT_14c951ae0);
          }
          ppwVar30 = ppwVar61;
          if (DAT_14c951a98 == 0) {
            bVar64 = pwVar37 != (wchar_t *)0x0;
            if (pwVar37 != (wchar_t *)&DAT_14c951a90 && bVar64) {
              do {
                pwVar37 = *(wchar_t **)(pwVar37 + 0x18);
                bVar64 = pwVar37 != (wchar_t *)0x0;
                if (pwVar37 == (wchar_t *)&DAT_14c951a90) break;
              } while (pwVar37 != (wchar_t *)0x0);
            }
            if (bVar64) goto LAB_1437cc1af;
LAB_1437cc1b3:
            if (ppwVar30 == (wchar_t **)0x0) goto switchD_1437cb48b_caseD_3;
          }
          else if ((*(ulonglong *)(pwVar37 + 0xc) & DAT_14c951a98) != 0) {
LAB_1437cc1af:
            ppwVar30 = (wchar_t **)ppwVar61[0xf];
            goto LAB_1437cc1b3;
          }
          local_48 = (wchar_t *)CONCAT44(local_48._4_4_,iVar11);
          (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppwVar30);
          unaff_RSI = (ulonglong)(iVar11 + 1) << 0x20;
          goto LAB_1437cc348;
        }
        if (ppwVar61 == (wchar_t **)0x0) {
LAB_1437cba8e:
          puVar21 = param_16;
LAB_1437cba96:
          FUN_1446f470e(unaff_R13,puVar21,0);
          ppwVar5 = param_5;
          ppwVar30 = unaff_R15;
          ppwVar41 = param_5;
          if (unaff_R15 != (wchar_t **)0x0) {
            while (ppwVar41 != (wchar_t **)0x0) {
              for (param_2 = (wchar_t **)ppwVar30[10]; param_2 != (wchar_t **)0x0;
                  param_2 = (wchar_t **)param_2[3]) {
                if ((~*(uint *)(param_2[1] + 0xc) & 0x8001) == 0) goto LAB_1437cbb42;
              }
              ppwVar30 = (wchar_t **)(**(code **)(*ppwVar30 + 0x158))(ppwVar30);
              ppwVar41 = ppwVar30;
            }
          }
LAB_1437cbaec:
          puVar40 = (uint *)(ulonglong)(*(int *)ppwVar58 == 0);
          unaff_R14 = (ulonglong)((byte)unaff_R14 & *(int *)ppwVar58 != 0);
          break;
        }
        pwVar37 = ppwVar61[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951f40) &&
           (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
          local_38 = (undefined *)FUN_1446ddbd2();
          local_48 = (wchar_t *)0x400000008001;
          local_40 = 0;
          FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
          atexit(FUN_142815b60);
          _Init_thread_footer(&DAT_14c951f40);
        }
        pwVar38 = ppwVar61[1];
        if (pwVar37 != (wchar_t *)&DAT_14c951ef0) {
          pwVar37 = (wchar_t *)FUN_140019ace();
          if (pwVar38 == pwVar37) {
LAB_1437cc34f:
            pwVar37 = ppwVar61[1];
            pwVar38 = (wchar_t *)FUN_140019ace();
            if (*(ulonglong *)(pwVar38 + 4) == 0) {
              bVar64 = pwVar37 != (wchar_t *)0x0;
              if (pwVar37 != pwVar38 && bVar64) {
                do {
                  pwVar37 = *(wchar_t **)(pwVar37 + 0x18);
                  bVar64 = pwVar37 != (wchar_t *)0x0;
                  if (pwVar37 == pwVar38) break;
                } while (pwVar37 != (wchar_t *)0x0);
              }
            }
            else {
              bVar64 = (*(ulonglong *)(pwVar37 + 0xc) & *(ulonglong *)(pwVar38 + 4)) != 0;
            }
            ppwVar30 = (wchar_t **)0x0;
            if (bVar64) {
              ppwVar30 = ppwVar61;
            }
            pwVar37 = ppwVar30[0xe];
            cVar8 = (**(code **)(*(longlong *)pwVar37 + 0x1b8))(pwVar37);
            pwVar38 = ppwVar30[0xe];
            if (cVar8 == '\0') {
              sVar57 = (longlong)*(int *)(pwVar38 + 0x1a) * (longlong)*(int *)(pwVar38 + 0x18);
              if (*(byte *)((longlong)ppwVar68 + sVar57) == 0) {
                if ((*(byte *)((longlong)pwVar38 + 0x39) & 2) == 0) {
                  (**(code **)(*(longlong *)pwVar38 + 0x160))(pwVar38,ppwVar68);
                }
                else {
                  memset(ppwVar68,0,sVar57);
                }
                *(byte *)((longlong)ppwVar68 + sVar57) = 1;
              }
            }
            else {
              cVar8 = (**(code **)(*(longlong *)pwVar38 + 0x1b8))();
              pwVar38 = ppwVar30[0xe];
              if (cVar8 == '\0') {
                if (*(byte *)((longlong)ppwVar68 +
                             (longlong)*(int *)(pwVar38 + 0x1a) * (longlong)*(int *)(pwVar38 + 0x18)
                             ) == 0) goto LAB_1437cc84b;
              }
              else {
                cVar8 = (**(code **)(*(longlong *)pwVar38 + 0x1c8))();
                if (cVar8 == '\0') {
                  pwVar38 = ppwVar30[0xe];
LAB_1437cc84b:
                  uVar28 = *(ulonglong *)(pwVar38 + 0x1c);
                  if ((uVar28 >> 0x24 & 1) == 0) {
                    (**(code **)(*(longlong *)pwVar38 + 0x148))();
                    pwVar38 = ppwVar30[0xe];
                    uVar28 = *(ulonglong *)(pwVar38 + 0x1c);
                  }
                  if (((uint)uVar28 >> 9 & 1) == 0) {
                    (**(code **)(*(longlong *)pwVar38 + 0x160))(pwVar38,ppwVar68);
                  }
                  else {
                    memset(ppwVar68,0,
                           (longlong)*(int *)(pwVar38 + 0x18) * (longlong)*(int *)(pwVar38 + 0x1a));
                  }
                }
              }
            }
            local_48 = (wchar_t *)CONCAT44(local_48._4_4_,(int)((ulonglong)unaff_RSI >> 0x20));
            (**(code **)(*(longlong *)param_1 + 0x20))(param_1,pwVar37);
            puVar40 = (uint *)0x0;
            unaff_R13 = (wchar_t **)&param_5;
            break;
          }
          puVar21 = &DAT_149dfb77a;
          if ((int)param_17 != 0) goto LAB_1437cba8e;
          goto LAB_1437cba96;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951f40) &&
           (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
          local_38 = (undefined *)FUN_1446ddbd2();
          local_48 = (wchar_t *)0x400000008001;
          local_40 = 0;
          FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
          atexit(FUN_142815b60);
          _Init_thread_footer(&DAT_14c951f40);
        }
        if (DAT_14c951ef8 == 0) {
          bVar64 = pwVar38 != (wchar_t *)0x0;
          if (pwVar38 != (wchar_t *)&DAT_14c951ef0 && bVar64) {
            do {
              pwVar38 = *(wchar_t **)(pwVar38 + 0x18);
              bVar64 = pwVar38 != (wchar_t *)0x0;
              if (pwVar38 == (wchar_t *)&DAT_14c951ef0) break;
            } while (pwVar38 != (wchar_t *)0x0);
          }
        }
        else {
          bVar64 = (*(ulonglong *)(pwVar38 + 0xc) & DAT_14c951ef8) != 0;
        }
        ppwVar30 = (wchar_t **)0x0;
        if (bVar64) {
          ppwVar30 = ppwVar61;
        }
        param_11._0_1_ = *(byte *)(ppwVar30 + 0x13);
        param_5 = (wchar_t **)ppwVar30[0xe];
        ppwVar41 = (wchar_t **)ppwVar30[0xf];
        param_10 = ppwVar30[0x12];
        param_8 = ppwVar30[0x10];
        param_9._0_4_ = *(int *)(ppwVar30 + 0x11);
        param_9._4_4_ = *(int *)((longlong)ppwVar30 + 0x8c);
        param_6 = ppwVar41;
        param_7 = ppwVar68;
        param_12 = (code *)unaff_R13;
        uVar12 = FUN_140007ec8(unaff_R13,&param_12);
        param_13 = (wchar_t **)CONCAT44(param_13._4_4_,uVar12);
        param_12 = (code *)unaff_R13;
        uVar26 = FUN_140005950(unaff_R13,&param_12);
        puVar21 = &DAT_149dfb77a;
        if ((int)param_17 != 0) {
          puVar21 = param_16;
        }
        if (puVar21 != (undefined2 *)0x0) {
          local_38 = DAT_14c872be8;
          local_40 = CONCAT44(local_40._4_4_,0x8000000);
          local_48 = (wchar_t *)0x0;
          (**(code **)(*(longlong *)ppwVar30[0xe] + 0xf8))(ppwVar30[0xe],puVar21,uVar26,0);
        }
        local_48 = (wchar_t *)CONCAT44(local_48._4_4_,iVar11);
        (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppwVar41);
        puVar40 = (uint *)0x0;
        goto LAB_1437cc936;
      case 6:
        if (ppwVar61 != (wchar_t **)0x0) {
          pwVar37 = ppwVar61[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
            local_38 = (undefined *)FUN_1446ddbd2();
            local_48 = (wchar_t *)0x400000008001;
            local_40 = 0;
            FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
            atexit(FUN_142815b60);
            _Init_thread_footer(&DAT_14c951f40);
          }
          if (DAT_14c951ef8 == 0) {
            bVar64 = pwVar37 != (wchar_t *)0x0;
            if (pwVar37 != (wchar_t *)&DAT_14c951ef0 && bVar64) {
              do {
                pwVar37 = *(wchar_t **)(pwVar37 + 0x18);
                bVar64 = pwVar37 != (wchar_t *)0x0;
                if (pwVar37 == (wchar_t *)&DAT_14c951ef0) break;
              } while (pwVar37 != (wchar_t *)0x0);
            }
            if (bVar64) goto LAB_1437cb909;
          }
          else if ((*(ulonglong *)(pwVar37 + 0xc) & DAT_14c951ef8) != 0) {
LAB_1437cb909:
            param_11._0_1_ = *(byte *)(ppwVar61 + 0x13);
            param_5 = (wchar_t **)ppwVar61[0xe];
            param_6 = (wchar_t **)ppwVar61[0xf];
            param_10 = ppwVar61[0x12];
            param_8 = ppwVar61[0x10];
            param_9._0_4_ = *(int *)(ppwVar61 + 0x11);
            param_9._4_4_ = *(int *)((longlong)ppwVar61 + 0x8c);
            param_7 = ppwVar68;
            FUN_140458c30(unaff_R13);
          }
        }
        lVar60 = (longlong)(int)(uint)param_20;
        if (lVar60 != 0) goto LAB_1437cb968;
        unaff_R14 = 1;
        break;
      case 7:
        param_12 = (code *)((ulonglong)param_12._4_4_ << 0x20);
        param_13 = (wchar_t **)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
        param_14 = (code *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
        param_15 = 0;
        if ((int)param_17 < 2) {
          if (ppwVar61 != (wchar_t **)0x0) {
            param_2 = (wchar_t **)ppwVar61[1];
            iVar11 = *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110);
            bVar66 = SBORROW4(DAT_14c952900,iVar11);
            bVar65 = DAT_14c952900 - iVar11 < 0;
            bVar64 = DAT_14c952900 == iVar11;
code_r0x0001437cb7a4:
            if ((!bVar64 && bVar66 == bVar65) &&
               (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
              local_38 = (undefined *)FUN_1446ddbd2();
              local_48 = (wchar_t *)0x800000008001;
              local_40 = 0;
              FUN_14000176a(ppwVar63,L"FSetProperty",0x800000000000,0);
              atexit(FUN_142817fb7);
              _Init_thread_footer(&DAT_14c952900);
            }
            unaff_R12 = ppwVar68;
            if (DAT_14c9528b8 == 0) {
              bVar64 = param_2 != (wchar_t **)0x0;
              if (param_2 != ppwVar63 && bVar64) {
                do {
                  param_2 = (wchar_t **)param_2[6];
                  bVar64 = param_2 != (wchar_t **)0x0;
                  if (param_2 == ppwVar63) break;
                } while (param_2 != (wchar_t **)0x0);
              }
              if (!bVar64) goto LAB_1437cbfaa;
            }
            else if (((ulonglong)param_2[3] & DAT_14c9528b8) == 0) {
LAB_1437cbfaa:
              pwVar37 = ppwVar61[1];
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951ae0) &&
                 (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
                FUN_1446ddbd2();
                local_38 = &DAT_14c951a38;
                local_40 = 0;
                local_48 = (wchar_t *)0x208001;
                FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
                atexit(FUN_14280cbf7);
                _Init_thread_footer(&DAT_14c951ae0);
              }
              if (DAT_14c951a98 == 0) {
                bVar64 = pwVar37 != (wchar_t *)0x0;
                if (pwVar37 != (wchar_t *)&DAT_14c951a90 && bVar64) {
                  do {
                    pwVar37 = *(wchar_t **)(pwVar37 + 0x18);
                    bVar64 = pwVar37 != (wchar_t *)0x0;
                    if (pwVar37 == (wchar_t *)&DAT_14c951a90) break;
                  } while (pwVar37 != (wchar_t *)0x0);
                }
                if (!bVar64) goto LAB_1437cc3aa;
              }
              else if ((*(ulonglong *)(pwVar37 + 0xc) & DAT_14c951a98) == 0) {
LAB_1437cc3aa:
                puVar40 = (uint *)&DAT_00000001;
                goto switchD_1437cb48b_caseD_3;
              }
              lVar60 = (longlong)*(int *)((longlong)ppwVar61 + 0x44);
              ppwStackX_10 = (wchar_t **)((longlong)ppwVar68 + lVar60);
              bVar32 = *(byte *)(ppwVar61 + 0xe);
              ppwStackX_18 = ppwVar58;
              (**(code **)(*(longlong *)ppwVar61[0xf] + 0x178))();
              ppwVar30 = ppwStackX_10;
              pwVar37 = ppwVar61[0xf];
              ppwStackX_8 = (wchar_t **)(longlong)*(int *)(pwVar37 + 0x1a);
              iVar11 = *(int *)((longlong)ppwVar68 + lVar60 + 8);
              iVar34 = iVar11 + 1;
              *(int *)((longlong)ppwVar68 + lVar60 + 8) = iVar34;
              iVar56 = *(int *)((longlong)ppwVar68 + lVar60 + 0xc);
              unaff_R14 = CONCAT17(bVar32,(int7)unaff_R14);
              if ((bVar32 & 1) == 0) {
                if (iVar56 <= iVar11) {
                  FUN_14097bbd2(ppwStackX_10,iVar11,ppwStackX_8);
                  iVar34 = *(int *)(ppwVar30 + 1);
                }
                if (iVar34 == 0) {
                  pwVar38 = (wchar_t *)0x0;
                }
                else {
                  pwVar38 = *ppwVar30;
LAB_1437cc06f:
                  pwVar38 = (wchar_t *)
                            ((longlong)pwVar38 + (longlong)iVar11 * (longlong)ppwStackX_8);
                }
              }
              else {
                if (iVar56 <= iVar11) {
                  FUN_1468c03c2(ppwStackX_10,iVar11,ppwStackX_8);
                  iVar34 = *(int *)(ppwVar30 + 1);
                  ppwVar30 = ppwStackX_10;
                }
                ppwStackX_10 = ppwVar30;
                if (iVar34 != 0) {
                    /* WARNING: Read-only address (ram,0x00014ab33db4) is written */
                  pwVar38 = *ppwVar30;
                  if (((ulonglong)pwVar38 & 1) != 0) {
                    pwVar38 = (wchar_t *)((longlong)ppwVar30 + ((longlong)pwVar38 >> 0x18));
                  }
                  goto LAB_1437cc06f;
                }
                    /* WARNING: Read-only address (ram,0x00014ab33db4) is written */
                pwVar38 = (wchar_t *)0x0;
              }
              ppwVar58 = ppwStackX_18;
              unaff_R13 = (wchar_t **)&param_5;
              if ((*(byte *)((longlong)pwVar37 + 0x39) & 2) == 0) {
                (**(code **)(*(longlong *)pwVar37 + 0x160))(pwVar37);
              }
              else {
                memset(pwVar38,0,(size_t)ppwStackX_8);
              }
              param_14 = (code *)ppwVar61[0xf];
              if (*(int *)(ppwVar30 + 1) == 0) {
                param_13 = (wchar_t **)0x0;
              }
              else {
                if ((bVar32 & 1) == 0) {
                  pwVar37 = *ppwVar30;
                }
                else {
                  pwVar37 = *ppwVar30;
                  if (((ulonglong)pwVar37 & 1) != 0) {
                    pwVar37 = (wchar_t *)((longlong)ppwVar30 + ((longlong)pwVar37 >> 0x18));
                  }
                }
                param_13 = (wchar_t **)
                           ((longlong)pwVar37 + (longlong)iVar11 * (longlong)ppwStackX_8);
              }
              goto LAB_1437cc8de;
            }
LAB_1437cb7c4:
            param_5 = (wchar_t **)ppwVar61[0xe];
            param_9._0_4_ = *(int *)(ppwVar61 + 0x11);
            param_7 = (wchar_t **)ppwVar61[0xf];
            param_8 = ppwVar61[0x10];
            param_6 = unaff_R12;
            iVar11 = FUN_14026089e(unaff_R13);
            if (*(int *)(param_6 + 1) == *(int *)((longlong)param_6 + 0x34)) {
              param_13 = (wchar_t **)0x0;
            }
            else {
              param_13 = (wchar_t **)
                         ((longlong)*param_6 + (longlong)iVar11 * (longlong)(int)param_9);
            }
            param_14 = (code *)ppwVar61[0xe];
            ppwVar68 = unaff_R12;
            goto LAB_1437cc8de;
          }
          goto switchD_1437cb48b_caseD_2;
        }
        puVar21 = param_16;
        if (ppwVar61 != (wchar_t **)0x0) {
          pwVar37 = ppwVar61[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
            local_38 = (undefined *)FUN_1446ddbd2();
            local_48 = (wchar_t *)0x400000008001;
            local_40 = 0;
            FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
            atexit(FUN_142815b60);
            _Init_thread_footer(&DAT_14c951f40);
          }
          pwVar38 = ppwVar61[1];
          if (pwVar37 == (wchar_t *)&DAT_14c951ef0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
            {
              local_38 = (undefined *)FUN_1446ddbd2();
              local_48 = (wchar_t *)0x400000008001;
              local_40 = 0;
              FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
              atexit(FUN_142815b60);
              _Init_thread_footer(&DAT_14c951f40);
            }
            if (DAT_14c951ef8 == 0) {
              bVar64 = pwVar38 != (wchar_t *)0x0;
              if (pwVar38 != (wchar_t *)&DAT_14c951ef0 && bVar64) {
                do {
                  pwVar38 = *(wchar_t **)(pwVar38 + 0x18);
                  bVar64 = pwVar38 != (wchar_t *)0x0;
                  if (pwVar38 == (wchar_t *)&DAT_14c951ef0) break;
                } while (pwVar38 != (wchar_t *)0x0);
              }
            }
            else {
              bVar64 = (*(ulonglong *)(pwVar38 + 0xc) & DAT_14c951ef8) != 0;
            }
            ppwVar30 = (wchar_t **)0x0;
            if (bVar64) {
              ppwVar30 = ppwVar61;
            }
            param_11._0_1_ = *(byte *)(ppwVar30 + 0x13);
            param_5 = (wchar_t **)ppwVar30[0xe];
            param_6 = (wchar_t **)ppwVar30[0xf];
            param_10 = ppwVar30[0x12];
            param_8 = ppwVar30[0x10];
            param_9._0_4_ = *(int *)(ppwVar30 + 0x11);
            param_9._4_4_ = *(int *)((longlong)ppwVar30 + 0x8c);
            param_7 = ppwVar68;
            param_22 = unaff_R13;
            param_23 = FUN_140007ec8(unaff_R13,&param_22);
            param_22 = unaff_R13;
            lVar60 = FUN_140005950(unaff_R13,&param_22);
            param_13 = (wchar_t **)((int)param_8 + lVar60);
            param_14 = (code *)ppwVar30[0xf];
            puVar21 = &DAT_149dfb77a;
            if ((int)param_17 != 0) {
              puVar21 = param_16;
            }
            if (puVar21 != (undefined2 *)0x0) {
              local_38 = DAT_14c872be8;
              local_40 = CONCAT44(local_40._4_4_,0x8000000);
              local_48 = (wchar_t *)0x0;
              (**(code **)(*(longlong *)ppwVar30[0xe] + 0xf8))(ppwVar30[0xe],puVar21,lVar60);
            }
          }
          else {
            pwVar37 = (wchar_t *)FUN_140019ace();
            if (pwVar38 != pwVar37) {
              puVar21 = &DAT_149dfb77a;
              if ((int)param_17 != 0) {
                puVar21 = param_16;
              }
              goto LAB_1437cbdd0;
            }
            param_14 = (code *)ppwVar61[0xe];
            cVar8 = (**(code **)(*(wchar_t **)param_14 + 0xdc))();
            pwVar37 = ppwVar61[0xe];
            param_13 = ppwVar68;
            if (cVar8 == '\0') {
              sVar57 = (longlong)*(int *)(pwVar37 + 0x1a) * (longlong)*(int *)(pwVar37 + 0x18);
              if (*(byte *)((longlong)ppwVar68 + sVar57) == 0) {
                if ((*(byte *)((longlong)pwVar37 + 0x39) & 2) == 0) {
                  (**(code **)(*(longlong *)pwVar37 + 0x160))(pwVar37,ppwVar68);
                }
                else {
                  memset(ppwVar68,0,sVar57);
                }
                *(byte *)((longlong)ppwVar68 + sVar57) = 1;
              }
            }
            else {
              cVar8 = (**(code **)(*(longlong *)pwVar37 + 0x1b8))();
              pwVar37 = ppwVar61[0xe];
              if (cVar8 == '\0') {
                if (*(byte *)((longlong)ppwVar68 +
                             (longlong)*(int *)(pwVar37 + 0x1a) * (longlong)*(int *)(pwVar37 + 0x18)
                             ) == 0) goto LAB_1437cc7f4;
              }
              else {
                cVar8 = (**(code **)(*(longlong *)pwVar37 + 0x1c8))();
                if (cVar8 == '\0') {
                  pwVar37 = ppwVar61[0xe];
LAB_1437cc7f4:
                  uVar28 = *(ulonglong *)(pwVar37 + 0x1c);
                  if ((uVar28 >> 0x24 & 1) == 0) {
                    (**(code **)(*(longlong *)pwVar37 + 0x148))();
                    pwVar37 = ppwVar61[0xe];
                    uVar28 = *(ulonglong *)(pwVar37 + 0x1c);
                  }
                  if (((uint)uVar28 >> 9 & 1) == 0) {
                    (**(code **)(*(longlong *)pwVar37 + 0x160))(pwVar37,ppwVar68);
                  }
                  else {
                    memset(ppwVar68,0,
                           (longlong)*(int *)(pwVar37 + 0x18) * (longlong)*(int *)(pwVar37 + 0x1a));
                  }
                }
              }
            }
          }
          goto LAB_1437cc8de;
        }
LAB_1437cbdd0:
        FUN_1446f470e(unaff_R13,puVar21,0);
        ppwVar5 = param_5;
        ppwVar30 = unaff_R15;
        ppwVar41 = param_5;
        if (unaff_R15 != (wchar_t **)0x0) {
          while (ppwVar41 != (wchar_t **)0x0) {
            for (ppwVar41 = (wchar_t **)ppwVar30[10]; ppwVar41 != (wchar_t **)0x0;
                ppwVar41 = (wchar_t **)ppwVar41[3]) {
              if ((~*(uint *)(ppwVar41[1] + 0xc) & 0x8001) == 0) goto LAB_1437cbe70;
            }
            ppwVar30 = (wchar_t **)(**(code **)(*ppwVar30 + 0x158))(ppwVar30);
            ppwVar41 = ppwVar30;
          }
        }
LAB_1437cbe26:
        if (*(int *)ppwVar58 == 0) goto LAB_1437cc957;
        goto LAB_1437cc943;
      }
      goto LAB_1437cca09;
    case 0x17:
      *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
      pbVar1 = (byte *)(uVar36 + 0x159f444b6);
      bVar7 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar32;
      *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) + 1 + CARRY1(bVar7,bVar32);
      goto code_r0x0001437cb4e1;
    case 0x18:
    case 0x1a:
      goto code_r0x0001437cc9ac;
    case 0x19:
      goto LAB_1437cc34f;
    case 0x1b:
      *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
      goto LAB_1437cb7c4;
    case 0x1c:
      *(char *)puVar35 = (char)*puVar35;
      *(byte *)((longlong)unaff_RBP + -0x7b) = *(byte *)((longlong)unaff_RBP + -0x7b) + bVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x1d:
      *(char *)puVar35 = (char)*puVar35 + '\x01' + (0xfffffffeb54ccb8b < uVar36);
      *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
      goto code_r0x0001437cb6d9;
    case 0x1e:
    case 0x20:
      *(int *)(ppwVar30 + 0x138) = *(int *)(ppwVar30 + 0x138) + 1;
      goto code_r0x000147dea0d0;
    case 0x1f:
    case 0x21:
      *(char *)puVar35 = (char)*puVar35;
      *(byte *)((longlong)ppwVar30 + -0x73) = *(byte *)((longlong)ppwVar30 + -0x73) + bVar32;
      ppwVar30 = (wchar_t **)CONCAT71(uVar31,7);
      goto code_r0x000147dea0d0;
    default:
      *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
      goto code_r0x000147dea0d0;
    case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_1437c582a:
    ppwVar63 = (wchar_t **)0x0;
    ppcVar51 = ppcVar55;
switchD_1437c4c2d_default:
    if ((*(ulonglong *)((longlong)ppcVar51 + 0xe8) ^ (ulonglong)ppcVar51) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)ppcVar51 + -8) = &UNK_1437c5863;
      FUN_144d8e3a0();
    }
    return ppwVar63;
  case 0xd:
    if (DAT_14c951cd8 == (undefined8 *)0x0) {
      bVar64 = ppwVar58 != (wchar_t **)0x0;
      puVar14 = &DAT_14c951cd0;
      if (ppwVar58 != (wchar_t **)&DAT_14c951cd0 && bVar64) {
        do {
          ppwVar58 = (wchar_t **)ppwVar58[6];
          bVar64 = ppwVar58 != (wchar_t **)0x0;
          if (ppwVar58 == (wchar_t **)&DAT_14c951cd0) break;
        } while (ppwVar58 != (wchar_t **)0x0);
      }
      ppcVar55 = &pcStack_68;
      if (bVar64) goto LAB_1437c5331;
      goto LAB_1437c54f9;
    }
    puVar14 = DAT_14c951cd8;
    ppcVar55 = &pcStack_68;
    if (((ulonglong)ppwVar58[3] & (ulonglong)DAT_14c951cd8) == 0) goto LAB_1437c54f9;
LAB_1437c5331:
    unaff_RBP = (wchar_t **)(ulonglong)(byte)param_1[0x3c];
    uVar28 = FUN_147dde4de(puVar40,ppwVar61,param_1);
    ppcVar52 = &pcStack_68;
    if (uVar28 != 0) goto code_r0x0001437c534f;
    goto LAB_1437c5889;
  case 0xe:
    *(byte *)((longlong)unaff_RBP + 0x15) = *(byte *)((longlong)unaff_RBP + 0x15) << 1;
    goto LAB_1437c5041;
  case 0xf:
    lVar60 = CONCAT71((int7)(((ulonglong)param_1 & 0xffffffff) >> 8),
                      (char)((ulonglong)param_1 & 0xffffffff) + bVar64);
    pcVar29 = (char *)(lVar60 + -0x75);
    *pcVar29 = *pcVar29 + cVar33;
    uVar28 = (ulonglong)((int)lVar60 + 0x918d050);
    pwVar38 = (wchar_t *)((ulonglong)ppwVar30 & 0xffffffff);
    goto code_r0x0001437c4ce0;
  case 0x10:
    ppcVar43 = (char **)auStack_60;
    *pcStack_68 = *pcStack_68 + cVar8;
    pcStack_68[-0x75] = pcStack_68[-0x75] + cVar33;
    uVar10 = (uint)pcStack_68 | 0xca;
    goto code_r0x0001437c4f32;
  case 0x11:
    goto switchD_147dde2ee_caseD_11;
  case 0x12:
    *(int *)param_1 = (int)in_ST0;
    ppcVar55 = &pcStack_68;
    param_1 = (wchar_t *)
              (ulonglong)*(uint *)((longlong)&switchD_1437c4c2d::switchdataD_14ab33474 + uVar36);
    goto code_r0x0001437c7ecd;
  case 0x13:
    goto switchD_147dde2ee_caseD_13;
  case 0x14:
  case 0x15:
  case 0x16:
    return (wchar_t **)((ulonglong)&pcStack_68 & 0xffffffff);
  case 0x17:
    ppcVar44 = (char **)auStack_60;
    *pcStack_68 = *pcStack_68 + cVar8;
    pcStack_68[-0x75] = pcStack_68[-0x75] + cVar33;
    if (*(int *)((longlong)L"OverlayItem" + uVar36 + 4) < (int)((uint)pcStack_68 | 0xca)) {
      pcStack_68 = (char *)0x1437c6576;
      FUN_144b3d300(&DAT_14c952420);
      if (DAT_14c952420 == -1) {
        pcStack_68 = (char *)0x1437c6588;
        FUN_14475b26a();
        local_40 = 0x101008001;
        local_38 = (undefined *)0x0;
        pcStack_68 = (char *)0x1437c65d5;
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
        pcStack_68 = (char *)0x1437c65e1;
        atexit(FUN_1428170bb);
        pcStack_68 = (char *)0x1437c65ed;
        _Init_thread_footer(&DAT_14c952420);
      }
    }
    puVar14 = DAT_14c9523d8;
    if (DAT_14c9523d8 != (undefined8 *)0x0) goto code_r0x0001437c4fa0;
    bVar64 = ppwVar58 != (wchar_t **)0x0;
    if (ppwVar58 != (wchar_t **)&DAT_14c9523d0 && bVar64) {
      do {
        ppwVar58 = (wchar_t **)ppwVar58[6];
        bVar64 = ppwVar58 != (wchar_t **)0x0;
        if (ppwVar58 == (wchar_t **)&DAT_14c9523d0) break;
      } while (ppwVar58 != (wchar_t **)0x0);
    }
    puVar14 = (undefined8 *)&DAT_14c9523d0;
    ppcVar55 = (char **)auStack_60;
    ppcVar44 = (char **)auStack_60;
    if (!bVar64) goto LAB_1437c54f9;
    goto LAB_1437c5864;
  case 0x18:
    local_38 = (undefined *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)(ulonglong)*(uint *)(param_2 + 1) + 0x170))
              ((longlong *)(ulonglong)*(uint *)(param_2 + 1),&local_38,2);
    local_38 = &DAT_149e02010;
    FUN_147dea178();
    iVar11 = *(int *)((longlong)param_2 + 0x24);
    if (0 < iVar11) {
      pwVar37 = param_2[1];
      do {
        local_38 = (undefined *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*(longlong *)pwVar37 + 0x170))(pwVar37,&local_38,2);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    local_38 = *(undefined **)param_1;
    (**(code **)(*param_2 + 0xc))(param_2,&local_38);
    local_40 = CONCAT26(0x3a,(undefined6)local_40);
    (**(code **)(*(longlong *)param_2[1] + 0x170))(param_2[1],(longlong)&local_40 + 6,2);
    local_38 = &DAT_149e02010;
    FUN_147dea178(param_2[1],&local_38);
    iVar11 = *(int *)((longlong)param_2 + 0x24);
    pwVar37 = param_2[1];
    if (0 < iVar11) {
      do {
        local_38 = (undefined *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*(longlong *)pwVar37 + 0x170))(pwVar37,&local_38,2);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      pwVar37 = param_2[1];
    }
    local_38 = (undefined *)CONCAT62(local_38._2_6_,0x7b);
    (**(code **)(*(longlong *)pwVar37 + 0x170))(pwVar37,&local_38,2);
    *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + 1;
    iVar11 = *(int *)(param_2 + 3);
    *(uint *)(param_2 + 3) = iVar11 + 1U;
    if (*(uint *)((longlong)param_2 + 0x1c) < iVar11 + 1U) {
      FUN_14047d866(param_2 + 2,iVar11);
    }
    ppwVar63 = (wchar_t **)param_2[2];
    pwVar37 = (wchar_t *)((longlong)ppwVar63 + (longlong)iVar11 * 4);
    pwVar37[0] = L'\x06';
    pwVar37[1] = L'\0';
    *(int *)(param_2 + 4) = 2;
    if ((unaff_RDI ^ (ulonglong)&pcStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return ppwVar63;
  case 0x19:
  case 0x1d:
  case 0x1f:
    goto switchD_147dde2ee_caseD_19;
  case 0x1a:
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    pbVar1 = (byte *)((longlong)ppwVar30 + 99);
    bVar32 = *pbVar1;
    *pbVar1 = *pbVar1 + cVar33;
    if (!SCARRY1(bVar32,cVar33)) goto code_r0x0001437cb423;
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    goto code_r0x0001437cb423;
  case 0x1b:
    param_5 = (wchar_t **)CONCAT44(param_5._4_4_,uVar10);
    goto code_r0x0001437cb4e1;
  case 0x1c:
    *(int *)param_1 = *(int *)param_1 + -1;
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    puVar39 = puVar40;
    param_4 = param_1;
    param_3 = ppwVar61;
    goto code_r0x0001437c88f1;
  case 0x1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x20:
    *(uint *)ppwVar30 = *(int *)ppwVar30 + 0xf000001 + (uint)bVar64;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x21:
    pbVar1 = (byte *)((longlong)ppwVar30 + -0x75);
    *pbVar1 = *pbVar1 + cVar33;
    if (*pbVar1 == 0) goto code_r0x0001437cb6d9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x22:
                    /* WARNING (jumptable): Read-only address (ram,0x00014ab33db4) is written */
                    /* WARNING: Read-only address (ram,0x00014ab33db4) is written */
    PTR_caseD_4e_14ab33db0._4_4_ = (int)param_1 + 1;
  case 0x28:
  case 0x29:
switchD_147dde2ee_caseD_28:
    FUN_1405b70a4((wchar_t *)((longlong)param_2 + 0x14ab33454),param_1 + 0xa5599a2a);
    puVar39 = (uint *)0x970;
code_r0x000147dea0bf:
    FUN_147de52e2((byte *)((longlong)param_2 + (longlong)puVar39),
                  (byte *)((longlong)puVar39 + (longlong)param_1));
    ppwVar30 = (wchar_t **)0x9c0;
code_r0x000147dea0d0:
    FUN_147de5268((byte *)((longlong)param_2 + (longlong)ppwVar30),
                  (byte *)((longlong)param_1 + (longlong)ppwVar30));
    return param_2;
  case 0x23:
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    goto switchD_147dde2ee_caseD_28;
  case 0x24:
  case 0x26:
    goto switchD_147dde2ee_caseD_24;
  case 0x25:
    goto switchD_147dde2ee_caseD_25;
  case 0x27:
    bVar66 = SCARRY1(*(byte *)ppwVar30,'\x01');
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    bVar65 = (char)*(byte *)ppwVar30 < '\0';
    bVar64 = *(byte *)ppwVar30 == 0;
    goto code_r0x0001437cb7a4;
  case 0x2a:
    *(byte *)ppwVar30 = *(byte *)ppwVar30 + 1;
    goto code_r0x000147dea0bf;
  }
switchD_147dde2ee_caseD_6:
  if (((ulonglong)local_38 ^ (ulonglong)&pcStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppwVar30;
LAB_1437cbe70:
  if ((wchar_t **)ppwVar41[4] != ppwVar5) {
    ppwVar41 = ppwVar41 + 3;
    do {
      for (ppwVar41 = (wchar_t **)*ppwVar41; ppwVar41 != (wchar_t **)0x0;
          ppwVar41 = (wchar_t **)ppwVar41[3]) {
        if ((~*(uint *)(ppwVar41[1] + 0xc) & 0x8001) == 0) goto LAB_1437cbe70;
      }
      ppwVar30 = (wchar_t **)(**(code **)(*ppwVar30 + 0x158))(ppwVar30);
      ppwVar41 = ppwVar30 + 10;
    } while (ppwVar30 != (wchar_t **)0x0);
    goto LAB_1437cbe26;
  }
  pwVar37 = ppwVar41[1];
  param_14 = (code *)ppwVar41;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
    local_38 = (undefined *)FUN_1446ddbd2();
    local_48 = (wchar_t *)0x400000008001;
    local_40 = 0;
    FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
    atexit(FUN_142815b60);
    _Init_thread_footer(&DAT_14c951f40);
  }
  if (DAT_14c951ef8 == 0) {
    bVar64 = pwVar37 != (wchar_t *)0x0;
    if (pwVar37 != (wchar_t *)&DAT_14c951ef0 && bVar64) {
      do {
        pwVar37 = *(wchar_t **)(pwVar37 + 0x18);
        bVar64 = pwVar37 != (wchar_t *)0x0;
        if (pwVar37 == (wchar_t *)&DAT_14c951ef0) break;
      } while (pwVar37 != (wchar_t *)0x0);
    }
    if (bVar64) goto LAB_1437cbec1;
LAB_1437cc10e:
    pwVar37 = ppwVar41[1];
    pwVar38 = (wchar_t *)FUN_140019ace();
    if (*(ulonglong *)(pwVar38 + 4) == 0) {
      bVar64 = pwVar37 != (wchar_t *)0x0;
      if (pwVar37 != pwVar38 && bVar64) {
        do {
          pwVar37 = *(wchar_t **)(pwVar37 + 0x18);
          bVar64 = pwVar37 != (wchar_t *)0x0;
          if (pwVar37 == pwVar38) break;
        } while (pwVar37 != (wchar_t *)0x0);
      }
      if (bVar64) goto LAB_1437cc12e;
    }
    else if ((*(ulonglong *)(pwVar37 + 0xc) & *(ulonglong *)(pwVar38 + 4)) != 0) {
LAB_1437cc12e:
      ppwVar30 = (wchar_t **)
                 ((longlong)ppwVar68 +
                 (longlong)iVar11 * (longlong)*(int *)((longlong)ppwVar41 + 0x34) +
                 (longlong)*(int *)((longlong)ppwVar41 + 0x44));
      param_13 = ppwVar30;
      cVar8 = (**(code **)(*(longlong *)ppwVar41[0xe] + 0x1b8))();
      pwVar37 = ppwVar41[0xe];
      if (cVar8 == '\0') {
        iVar11 = *(int *)(pwVar37 + 0x18);
        iVar56 = *(int *)(pwVar37 + 0x1a);
        if (*(byte *)((longlong)ppwVar30 + (longlong)iVar56 * (longlong)iVar11) == 1) {
          if ((pwVar37[0x1e] & L'\x10') == L'\0') {
            (**(code **)(*(longlong *)pwVar37 + 0x148))(pwVar37,ppwVar30);
          }
          *(byte *)((longlong)ppwVar30 + (longlong)iVar56 * (longlong)iVar11) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)pwVar37 + 0x1d0))(pwVar37,ppwVar30);
      }
      goto LAB_1437cc8de;
    }
    param_13 = (wchar_t **)((longlong)ppwVar68 + (longlong)*(int *)((longlong)ppwVar41 + 0x44));
  }
  else {
    if ((*(ulonglong *)(pwVar37 + 0xc) & DAT_14c951ef8) == 0) goto LAB_1437cc10e;
LAB_1437cbec1:
    param_7 = (wchar_t **)
              ((longlong)ppwVar68 +
              (longlong)iVar11 * (longlong)*(int *)((longlong)ppwVar41 + 0x34) +
              (longlong)*(int *)((longlong)ppwVar41 + 0x44));
    param_11._0_1_ = *(byte *)(ppwVar41 + 0x13);
    param_5 = (wchar_t **)ppwVar41[0xe];
    param_6 = (wchar_t **)ppwVar41[0xf];
    param_10 = ppwVar41[0x12];
    param_8 = ppwVar41[0x10];
    param_9._0_4_ = *(int *)(ppwVar41 + 0x11);
    param_9._4_4_ = *(int *)((longlong)ppwVar41 + 0x8c);
    param_13 = param_7;
    FUN_140458a4e(unaff_R13,0);
  }
LAB_1437cc8de:
  unaff_RBP = (wchar_t **)param_14;
  uVar12 = (undefined4)((ulonglong)unaff_RSI >> 0x20);
  uVar67 = (undefined4)(unaff_retaddr >> 0x20);
  if ((wchar_t **)param_14 == (wchar_t **)0x0) {
LAB_1437cc943:
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    if (*(int *)ppwVar58 == 0) {
LAB_1437cc957:
      puVar40 = (uint *)&DAT_00000001;
      unaff_R14 = 0;
      goto LAB_1437cc936;
    }
  }
  else {
    pcVar4 = (code *)ppwVar58[2];
    if (pcVar4 != (code *)0x0) {
      pwVar37 = ppwVar58[4];
      if (ppwVar58[4] == (wchar_t *)0x0) {
        pwVar37 = pwStackX_20;
      }
      param_5 = ppwVar61;
      param_22 = (wchar_t **)param_14;
      uVar26 = (**(code **)(*(longlong *)pwVar37 + 8))();
      cVar8 = (*pcVar4)(uVar26,&param_22);
      if (cVar8 == '\0') {
        (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
        goto LAB_1437cc931;
      }
    }
    param_12 = (code *)((ulonglong)param_12 & 0xffffffff00000000);
    param_2 = (wchar_t **)FUN_147de1d6f(&param_12);
    puVar40 = (uint *)(longlong)(int)(uint)param_20;
    ppwVar30 = (wchar_t **)(ulonglong)((uint)param_20 + 1);
switchD_147dde2ee_caseD_24:
    param_20._0_4_ = (uint)ppwVar30;
    if (param_20._4_4_ < (uint)param_20) {
      FUN_147dedb52(&param_19,(ulonglong)puVar40 & 0xffffffff);
    }
    puVar40 = (uint *)((longlong)puVar40 << 5);
    ppwVar30 = param_19;
    unaff_R12 = ppwVar68;
code_r0x0001437cc9ac:
    *(undefined4 *)((longlong)ppwVar30 + (longlong)puVar40) = uVar12;
    *(undefined4 *)((longlong)((longlong)ppwVar30 + 4) + (longlong)puVar40) = uVar67;
    *(wchar_t ***)((longlong)(ppwVar30 + 1) + (longlong)puVar40) = unaff_R12;
    *(wchar_t ***)((longlong)(ppwVar30 + 2) + (longlong)puVar40) = ppwVar61;
    *(wchar_t ***)((longlong)(ppwVar30 + 3) + (longlong)puVar40) = unaff_R15;
    unaff_retaddr = (ulonglong)param_12 & 0xffffffff00000000;
    unaff_RSI = 0;
    ppwVar61 = unaff_RBP;
    ppwVar68 = param_13;
    unaff_R15 = param_2;
  }
  unaff_RBP = (wchar_t **)((longlong)&param_18 + 4);
switchD_1437cb48b_caseD_2:
  puVar40 = (uint *)0x0;
  goto LAB_1437cca09;
LAB_1437cbb42:
  if ((wchar_t **)param_2[4] != ppwVar5) {
    param_2 = param_2 + 3;
    do {
      for (param_2 = (wchar_t **)*param_2; param_2 != (wchar_t **)0x0;
          param_2 = (wchar_t **)param_2[3]) {
        if ((~*(uint *)(param_2[1] + 0xc) & 0x8001) == 0) goto LAB_1437cbb42;
      }
      ppwVar30 = (wchar_t **)(**(code **)(*ppwVar30 + 0x158))(ppwVar30);
      param_2 = ppwVar30 + 10;
    } while (ppwVar30 != (wchar_t **)0x0);
    goto LAB_1437cbaec;
  }
  pcVar4 = (code *)ppwVar58[2];
  if (pcVar4 != (code *)0x0) {
    pwVar37 = ppwVar58[4];
    if (ppwVar58[4] == (wchar_t *)0x0) {
      pwVar37 = pwStackX_20;
    }
    param_5 = ppwVar61;
    param_12 = (code *)param_2;
    uVar26 = (**(code **)(*(longlong *)pwVar37 + 8))();
    cVar8 = (*pcVar4)(uVar26,&param_12);
    puVar40 = (uint *)0x0;
    if (cVar8 == '\0') goto LAB_1437cca09;
  }
  ppwVar30 = *(wchar_t ***)param_1;
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,iVar11);
LAB_1437cc345:
  (*(code *)ppwVar30[4])(param_1,param_2);
  goto LAB_1437cc348;
code_r0x0001437cb432:
  puVar35 = (uint *)&param_16;
  puVar39 = (uint *)((ulonglong)param_2 & 0xffffffff);
  goto code_r0x0001437cb43f;
LAB_1437cb63b:
  if ((wchar_t **)unaff_RBP[4] != ppwVar5) {
    ppwVar41 = unaff_RBP + 3;
    do {
      for (unaff_RBP = (wchar_t **)*ppwVar41; unaff_RBP != (wchar_t **)0x0;
          unaff_RBP = (wchar_t **)unaff_RBP[3]) {
        if ((~*(uint *)(unaff_RBP[1] + 0xc) & 0x8001) == 0) goto LAB_1437cb63b;
      }
      ppwVar30 = (wchar_t **)(**(code **)(*ppwVar30 + 0x158))(ppwVar30);
      ppwVar41 = ppwVar30 + 10;
    } while (ppwVar30 != (wchar_t **)0x0);
    goto LAB_1437cb5df;
  }
  pcVar4 = (code *)ppwVar58[2];
  param_14 = (code *)unaff_RBP;
  if (pcVar4 != (code *)0x0) {
    pwVar37 = ppwVar58[4];
    if (ppwVar58[4] == (wchar_t *)0x0) {
      pwVar37 = pwStackX_20;
    }
    param_5 = ppwVar61;
    param_22 = unaff_RBP;
    uVar26 = (**(code **)(*(longlong *)pwVar37 + 8))();
    cVar8 = (*pcVar4)(uVar26,&param_22);
    if (cVar8 != '\0') goto LAB_1437cb692;
    (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
LAB_1437cc931:
    puVar40 = (uint *)0x0;
LAB_1437cc936:
    unaff_RBP = (wchar_t **)((longlong)&param_18 + 4);
    goto LAB_1437cca09;
  }
LAB_1437cb692:
  ppwVar30 = (wchar_t **)unaff_RBP[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
    local_38 = (undefined *)FUN_1446ddbd2();
    local_48 = (wchar_t *)0x800000008001;
    local_40 = 0;
    FUN_14000176a(ppwVar63,L"FSetProperty");
    atexit(FUN_142817fb7);
    _Init_thread_footer(&DAT_14c952900);
  }
  if (DAT_14c9528b8 == 0) {
    bVar64 = ppwVar30 != (wchar_t **)0x0;
    if (ppwVar30 != ppwVar63 && bVar64) {
      do {
        ppwVar30 = (wchar_t **)ppwVar30[6];
        bVar64 = ppwVar30 != (wchar_t **)0x0;
        if (ppwVar30 == ppwVar63) break;
      } while (ppwVar30 != (wchar_t **)0x0);
    }
    if (!bVar64) goto caseD_21_1;
code_r0x0001437cbbfc:
    unaff_R12 = (wchar_t **)
                ((longlong)ppwVar68 +
                (longlong)iVar11 * (longlong)*(int *)((longlong)unaff_RBP + 0x34) +
                (longlong)*(int *)((longlong)unaff_RBP + 0x44));
    param_5 = (wchar_t **)unaff_RBP[0xe];
    param_9._0_4_ = *(int *)(unaff_RBP + 0x11);
    param_7 = (wchar_t **)unaff_RBP[0xf];
    param_8 = unaff_RBP[0x10];
    param_6 = unaff_R12;
    param_13 = unaff_R12;
    FUN_1402608fa(unaff_R13,0);
    ppwVar30 = param_13;
  }
  else {
    if (((ulonglong)ppwVar30[3] & DAT_14c9528b8) != 0) goto code_r0x0001437cbbfc;
caseD_21_1:
    param_2 = (wchar_t **)unaff_RBP[1];
    unaff_R12 = ppwVar68;
code_r0x0001437cb6d9:
    iVar11 = (int)((ulonglong)unaff_RSI >> 0x20);
    uVar12 = (undefined4)(unaff_retaddr >> 0x20);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_38 = &DAT_14c951a38;
      local_40 = 0;
      local_48 = (wchar_t *)0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty");
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    ppwVar30 = unaff_R12;
    ppwVar68 = unaff_R12;
    if (DAT_14c951a98 == 0) {
      bVar64 = param_2 != (wchar_t **)0x0;
      if (param_2 != (wchar_t **)&DAT_14c951a90 && bVar64) {
        do {
          param_2 = (wchar_t **)param_2[6];
          bVar64 = param_2 != (wchar_t **)0x0;
          if (param_2 == (wchar_t **)&DAT_14c951a90) break;
        } while (param_2 != (wchar_t **)0x0);
      }
      if (bVar64) goto LAB_1437cb718;
    }
    else if (((ulonglong)param_2[3] & DAT_14c951a98) != 0) {
LAB_1437cb718:
      cVar8 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1,unaff_RBP);
      puVar40 = (uint *)0x0;
      if (cVar8 != '\0') goto LAB_1437cc936;
    }
  }
  param_13 = ppwVar30;
  unaff_RBP = (wchar_t **)((longlong)&param_18 + 4);
  ppwVar30 = (wchar_t **)FUN_147de1d6f(&param_12);
  uVar10 = (uint)param_20;
  lVar60 = (longlong)(int)(uint)param_20;
  param_20._0_4_ = (uint)param_20 + 1;
  if (param_20._4_4_ < (uint)param_20) {
    FUN_147dedb52(&param_19,uVar10);
  }
  *(int *)(param_19 + lVar60 * 4) = iVar11;
  *(undefined4 *)((longlong)param_19 + lVar60 * 0x20 + 4) = uVar12;
  param_19[lVar60 * 4 + 1] = (wchar_t *)ppwVar68;
  param_19[lVar60 * 4 + 2] = (wchar_t *)ppwVar61;
  param_19[lVar60 * 4 + 3] = (wchar_t *)unaff_R15;
  unaff_RSI = (longlong)param_12 << 0x20;
  unaff_retaddr = (ulonglong)param_12 & 0xffffffff00000000;
  ppwVar63 = (wchar_t **)&DAT_14c9528b0;
  unaff_R13 = (wchar_t **)&param_5;
  ppwVar61 = (wchar_t **)param_14;
  ppwVar68 = unaff_R12;
  unaff_R15 = ppwVar30;
LAB_1437cc348:
  puVar40 = (uint *)0x0;
LAB_1437cca09:
  if (param_16 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (((ulonglong)puVar40 & 1) == 0) {
    cVar8 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1,unaff_RBP);
    if (cVar8 != '\0') {
      ppwVar30 = (wchar_t **)(*(code *)**(undefined8 **)param_1)(param_1);
      param_16 = (undefined2 *)0x0;
      param_2 = (wchar_t **)(longlong)*(int *)(ppwVar30 + 1);
      unaff_R12 = ppwVar68;
code_r0x0001437cb423:
      puVar40 = (uint *)*ppwVar30;
      param_17._0_4_ = (int)param_2;
      if (param_2 != (wchar_t **)0x0) goto code_r0x0001437cb432;
      param_17._4_4_ = 0;
      ppwVar68 = unaff_R12;
      goto LAB_1437cb467;
    }
    uVar28 = 0;
  }
  else {
    uVar28 = unaff_R14 & 0xffffffff;
  }
  if (param_19 != (wchar_t **)0x0) {
    FUN_1400020a8();
  }
  if ((param_24 ^ (ulonglong)&pcStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (wchar_t **)(uVar28 & 0xffffffffffffff01);
}



// FUNCTION 147dde3d0 FUN_147dde3d0 body=184 status=ok
// SIG undefined FUN_147dde3d0(void)

undefined8 FUN_147dde3d0(longlong param_1,undefined8 param_2)

{
  char *_Str;
  size_t sVar1;
  undefined1 auStack_158 [32];
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  _Str = *(char **)(param_1 + 0x10);
  local_38 = 0;
  if (_Str == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = strlen(_Str);
    FUN_1446e6fe8(local_138,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(param_2,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dde48a FUN_147dde48a body=84 status=ok
// SIG undefined FUN_147dde48a(void)

undefined8 FUN_147dde48a(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *in_stack_00000028;
  
  plVar3 = (longlong *)FUN_147dde4de();
  uVar4 = 0;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)*in_stack_00000028;
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != plVar1) {
      *plVar3 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    uVar4 = (ulonglong)*(uint *)(in_stack_00000028 + 1);
    *(uint *)(plVar3 + 1) = *(uint *)(in_stack_00000028 + 1);
  }
  return CONCAT71((int7)(uVar4 >> 8),plVar3 != (longlong *)0x0);
}



// FUNCTION 147dde4de FUN_147dde4de body=362 status=ok
// SIG undefined FUN_147dde4de(void)

longlong FUN_147dde4de(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_48;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
LAB_147dde5ec:
    if (param_4 < (int)param_1[6]) {
      lVar4 = (longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
              param_3 + *(int *)((longlong)param_1 + 0x44);
      goto LAB_147dde60b;
    }
  }
  else {
    lVar4 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar6) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar6 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar6) goto LAB_147dde5ec;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_147dde5ec;
    if (*(longlong **)(param_2 + 0x78) == param_1) {
      iVar2 = *(int *)(param_2 + 0x44);
      bVar1 = *(byte *)(param_2 + 0x70);
      local_4c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
      local_60 = *(longlong *)(param_2 + 0x78);
      local_50 = *(int *)(local_60 + 0x34);
      local_38 = 1;
      local_58 = (ulonglong *)(param_3 + iVar2);
      local_48 = bVar1;
      local_40 = &local_60;
      iVar2 = FUN_144a482cc(&local_60);
      FUN_144ae1314(&local_60,iVar2,1);
      if ((int)local_58[1] != 0) {
        if ((local_48 & 1) == 0) {
          uVar5 = *local_58;
        }
        else {
          uVar5 = *local_58;
          if ((uVar5 & 1) != 0) {
            uVar5 = (longlong)local_58 + ((longlong)uVar5 >> 0x18);
          }
        }
        lVar4 = (longlong)local_50 * (longlong)iVar2 + uVar5;
        goto LAB_147dde60b;
      }
    }
  }
  lVar4 = 0;
LAB_147dde60b:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 147dde64a FUN_147dde64a body=99 status=ok
// SIG undefined FUN_147dde64a(void)

bool FUN_147dde64a(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *in_stack_00000028;
  
  plVar2 = (longlong *)FUN_147dde4de();
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *in_stack_00000028;
    if (lVar1 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar1);
    }
    *plVar2 = lVar1;
  }
  return plVar2 != (longlong *)0x0;
}



// FUNCTION 147dde6ae FUN_147dde6ae body=99 status=ok
// SIG undefined FUN_147dde6ae(void)

bool FUN_147dde6ae(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *in_stack_00000028;
  
  plVar2 = (longlong *)FUN_147dde4de();
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *in_stack_00000028;
    if (lVar1 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar1);
    }
    *plVar2 = lVar1;
  }
  return plVar2 != (longlong *)0x0;
}



// FUNCTION 147dde712 FUN_147dde712 body=350 status=ok
// SIG undefined FUN_147dde712(void)

undefined8 FUN_147dde712(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (bVar6) goto LAB_147dde75e;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147dde75e:
      if (*(longlong **)(param_2 + 0x78) != param_1) {
        uVar4 = 0;
        goto LAB_147dde84d;
      }
      iVar2 = *(int *)(param_2 + 0x44);
      uVar1 = *(undefined1 *)(param_2 + 0x70);
      local_54 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
      local_68 = *(longlong *)(param_2 + 0x78);
      local_58 = *(undefined4 *)(local_68 + 0x34);
      local_40 = 1;
      local_60 = iVar2 + param_3;
      local_50 = uVar1;
      local_48 = &local_68;
      param_4 = FUN_144a482cc(&local_68);
      FUN_144ae1314(&local_68,param_4,1);
    }
  }
  if ((~param_1[7] & 0x1000000200U) == 0) {
    memset((void *)((longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                   param_3 + *(int *)((longlong)param_1 + 0x44)),0,
           (longlong)*(int *)((longlong)param_1 + 0x34));
  }
  else {
    (**(code **)(*param_1 + 0x140))
              (param_1,(longlong)*(int *)((longlong)param_1 + 0x34) * (longlong)param_4 +
                       param_3 + *(int *)((longlong)param_1 + 0x44));
  }
  uVar4 = 1;
LAB_147dde84d:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147dde872 FUN_147dde872 body=430 status=ok
// SIG undefined FUN_147dde872(void)

undefined8 FUN_147dde872(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *_Dst;
  int iVar4;
  ulonglong *puVar5;
  size_t _Size;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x5c) != '\x01') || (*(longlong *)(param_2 + 0x78) == 0))
  goto LAB_147dde9a0;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 8);
  lVar2 = FUN_14475a8dc();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar7 = lVar6 != 0;
    if (lVar6 != lVar2 && bVar7) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar7 = lVar6 != 0;
        if (lVar6 == lVar2) break;
      } while (lVar6 != 0);
    }
    if (!bVar7) goto LAB_147dde97b;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
LAB_147dde97b:
    if (*(longlong *)(param_2 + 0x78) == 0) {
LAB_147dde9a0:
      uVar3 = 0;
      goto LAB_147dde9a2;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x78) + 8);
    lVar2 = FUN_14093f012();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar2 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar2) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_147dde9a0;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_147dde9a0;
  }
  puVar5 = (ulonglong *)(param_3 + *(int *)(param_2 + 0x44));
  bVar1 = *(byte *)(param_2 + 0x70);
  local_4c = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
  local_60 = *(longlong *)(param_2 + 0x78);
  local_50 = *(undefined4 *)(local_60 + 0x34);
  _Size = (longlong)*(int *)(param_1 + 0x40) - 1;
  iVar4 = (int)_Size;
  local_58 = puVar5;
  local_48 = bVar1;
  if (iVar4 != 0) {
    _Src = *(void **)(param_1 + 0x38);
    local_40 = &local_60;
    local_38 = iVar4;
    FUN_144a482cc(local_40);
    if ((int)local_58[1] == 0) {
      _Dst = (void *)0x0;
    }
    else if ((local_48 & 1) == 0) {
      _Dst = (void *)*local_58;
    }
    else {
      _Dst = (void *)*local_58;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)((longlong)local_58 + ((longlong)_Dst >> 0x18));
      }
    }
    memcpy(_Dst,_Src,_Size);
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  uVar3 = 1;
LAB_147dde9a2:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147ddea44 FUN_147ddea44 body=63 status=ok
// SIG undefined FUN_147ddea44(void)

undefined8 * FUN_147ddea44(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  *param_1 = &PTR_FUN_14ab31fe0;
  FUN_147ddd292(param_1 + 1,param_2,param_3 >> 2 & 1);
  *(uint *)(param_1 + 5) = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 147ddea84 FUN_147ddea84 body=49 status=ok
// SIG undefined FUN_147ddea84(void)

void FUN_147ddea84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab31fe0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_147ddd2e0(param_1 + 1);
  return;
}



// FUNCTION 147ddeab6 FUN_147ddeab6 body=622 status=ok
// SIG undefined FUN_147ddeab6(void)

void FUN_147ddeab6(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 0x28) & 2) == 0) || (lVar6 = *(longlong *)(param_2 + 0x20), lVar6 == 0))
  goto LAB_147ddeade;
  lVar4 = *(longlong *)(lVar6 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar7) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar7 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (!bVar7) goto LAB_147ddeade;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_147ddeade;
  if (*(longlong *)(lVar6 + 0x78) == 0) goto LAB_147ddeade;
  lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x78) + 8);
  lVar3 = FUN_14475a8dc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar7) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar7 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (!bVar7) goto LAB_147ddecc5;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_147ddecc5:
    if (*(longlong *)(lVar6 + 0x78) == 0) goto LAB_147ddeade;
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x78) + 8);
    lVar4 = FUN_14093f012();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_147ddeade;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_147ddeade;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
LAB_147ddeade:
  plVar5 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
  uVar2 = FUN_1446e6bbc();
  cVar1 = FUN_1400164de(plVar5,uVar2);
  if ((cVar1 == '\0') || (*plVar5 == 0)) {
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
    uVar2 = FUN_144a7e162();
    cVar1 = FUN_1400164de(plVar5,uVar2);
    if ((cVar1 == '\0') || (*plVar5 == 0)) {
      plVar5 = *(longlong **)(param_2 + 0x10);
      if (plVar5 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147dddb8a(param_1 + 8,local_38);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar5 + 0xf0))(plVar5,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147dddb8a(param_1 + 8,local_38);
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_147ddd30e(param_1 + 8,0x80,0xffffffffffffffff);
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dded26 FUN_147dded26 body=413 status=ok
// SIG undefined FUN_147dded26(void)

void FUN_147dded26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x10) == 0)) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar4,uVar3);
        if ((cVar2 == '\0') || (*plVar4 == 0)) {
          plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar4,uVar3);
          if (((cVar2 == '\0') || (*plVar4 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147ddedf1;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147ddedf1:
      plVar4 = *(longlong **)(param_2 + 0x10);
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147dddb8a(param_1 + 8,local_38);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_147ddd30e(param_1 + 8,0xa0,0xffffffffffffffff);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147dddb8a(param_1 + 8,local_38);
        FUN_147ddd30e(param_1 + 8,0xa0,0xffffffffffffffff);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 147ddeedc FUN_147ddeedc body=51 status=ok
// SIG undefined FUN_147ddeedc(void)

void FUN_147ddeedc(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    thunk_FUN_147dddd14(param_1 + 8,*(undefined8 *)(param_1 + 0x30),
                        (longlong)*(int *)(param_1 + 0x38));
    *(undefined1 *)(param_1 + 0x40) = 0;
    return;
  }
  FUN_147ddd7ac(param_1 + 8);
  return;
}



// FUNCTION 147ddef1b FUN_147ddef1b body=394 status=ok
// SIG undefined FUN_147ddef1b(void)

void FUN_147ddef1b(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x10) == 0)) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar4,uVar3);
        if ((cVar2 == '\0') || (*plVar4 == 0)) {
          plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar4,uVar3);
          if (((cVar2 == '\0') || (*plVar4 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147ddefe5;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147ddefe5:
      plVar4 = *(longlong **)(param_2 + 0x10);
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147dddb8a(param_1,local_38);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_147ddd922(param_1,*param_3);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147dddb8a(param_1,local_38);
        FUN_147ddd922(param_1,*param_3);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_78);
}



// FUNCTION 147ddf0b9 FUN_147ddf0b9 body=394 status=ok
// SIG undefined FUN_147ddf0b9(void)

void FUN_147ddf0b9(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x10) == 0)) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar4,uVar3);
        if ((cVar2 == '\0') || (*plVar4 == 0)) {
          plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar4,uVar3);
          if (((cVar2 == '\0') || (*plVar4 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147ddf182;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147ddf182:
      plVar4 = *(longlong **)(param_2 + 0x10);
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147dddb8a(param_1,local_38);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_147dddb8a(param_1,param_3);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147dddb8a(param_1,local_38);
        FUN_147dddb8a(param_1,param_3);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_78);
}



// FUNCTION 147ddf258 FUN_147ddf258 body=397 status=ok
// SIG undefined FUN_147ddf258(void)

void FUN_147ddf258(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x10) == 0)) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar4,uVar3);
        if ((cVar2 == '\0') || (*plVar4 == 0)) {
          plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar4,uVar3);
          if (((cVar2 == '\0') || (*plVar4 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147ddf324;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147ddf324:
      plVar4 = *(longlong **)(param_2 + 0x10);
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147dddb8a(param_1,local_38);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
        FUN_147ddd88e(param_1,*param_3);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147dddb8a(param_1,local_38);
        FUN_147ddd88e(param_1,*param_3);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_78);
}



// FUNCTION 147ddf3fa FUN_147ddf3fa body=410 status=ok
// SIG undefined FUN_147ddf3fa(void)

void FUN_147ddf3fa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x10) == 0)) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar4,uVar3);
        if ((cVar2 == '\0') || (*plVar4 == 0)) {
          plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar4,uVar3);
          if (((cVar2 == '\0') || (*plVar4 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147ddf4d1;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147ddf4d1:
      plVar4 = *(longlong **)(param_2 + 0x10);
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_58,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_58);
        }
        FUN_147dddb8a(param_1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        FUN_147ddd9c2(param_1,*param_3);
      }
      else {
        local_58[0] = 0;
        local_58[1] = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_60 = 0;
        local_68 = 0;
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_58,*(undefined8 *)(param_2 + 8),0);
        FUN_147dddb8a(param_1,local_58);
        FUN_147ddd9c2(param_1,*param_3);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 147ddf762 FUN_147ddf762 body=434 status=ok
// SIG undefined FUN_147ddf762(void)

undefined8 FUN_147ddf762(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 != 0) {
    lVar7 = *(longlong *)(lVar3 + 8);
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar4 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar4) break;
        } while (lVar7 != 0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
    }
    if (!bVar8) {
      return 0;
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0x78) == 0) {
      return 0;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + 8);
    lVar4 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar4 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar4) break;
        } while (lVar7 != 0);
      }
      if (bVar8) goto LAB_147ddf7e1;
    }
    else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_147ddf7e1;
    if (*(longlong *)(lVar3 + 0x78) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + 8);
      lVar4 = FUN_14093f012();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar8 = lVar7 != 0;
        if (lVar7 != lVar4 && bVar8) {
          do {
            lVar7 = *(longlong *)(lVar7 + 0x30);
            bVar8 = lVar7 != 0;
            if (lVar7 == lVar4) break;
          } while (lVar7 != 0);
        }
        if (bVar8) goto LAB_147ddf7e1;
      }
      else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_147ddf7e1:
        lVar7 = *(longlong *)(param_2 + 0x18);
        iVar2 = *(int *)(lVar3 + 0x44);
        bVar1 = *(byte *)(lVar3 + 0x70);
        (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
        if (*(int *)(lVar7 + 8 + (longlong)iVar2) == 0) {
          uVar6 = 0;
        }
        else {
          puVar5 = (ulonglong *)(lVar7 + iVar2);
          if ((bVar1 & 1) == 0) {
            uVar6 = *puVar5;
          }
          else {
            uVar6 = *puVar5;
            if ((uVar6 & 1) != 0) {
              uVar6 = (longlong)puVar5 + ((longlong)uVar6 >> 0x18);
            }
          }
        }
        thunk_FUN_147dddd14(param_1 + 8,uVar6);
        *(undefined1 *)(param_1 + 0x40) = 0;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 147ddf920 FUN_147ddf920 body=44 status=ok
// SIG undefined FUN_147ddf920(void)

undefined8 FUN_147ddf920(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Line: %u, Ch: %u",*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x60),
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 100));
  return param_2;
}



// FUNCTION 147ddf956 FUN_147ddf956 body=64 status=ok
// SIG undefined FUN_147ddf956(void)

void FUN_147ddf956(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_14047c1fc(*(undefined8 *)(param_1 + 0x20),(uint *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x18);
    uVar3 = 4;
    if (uVar2 < 9) {
      uVar3 = *(undefined4 *)(&DAT_14ab33430 + uVar2 * 4);
    }
    *param_2 = uVar3;
  }
  return;
}



// FUNCTION 147ddf9b2 FUN_147ddf9b2 body=262 status=ok
// SIG undefined FUN_147ddf9b2(void)

void FUN_147ddf9b2(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
  uVar2 = FUN_1446e6bbc();
  cVar1 = FUN_1400164de(plVar3,uVar2);
  if ((cVar1 != '\0') && (*plVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      FUN_140056680(local_38,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
    }
    FUN_147ddfd64(uVar2,local_38);
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_40 = 0;
    local_48 = 0;
    (**(code **)(*plVar3 + 0xf0))(plVar3,local_38,*(undefined8 *)(param_2 + 8),0);
    FUN_147ddfbea(*(undefined8 *)(param_1 + 8),local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddfbea FUN_147ddfbea body=377 status=ok
// SIG undefined FUN_147ddfbea(void)

void FUN_147ddfbea(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  local_48._0_2_ = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x5b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_14047d866(param_1 + 2,iVar2);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddfd64 FUN_147ddfd64 body=377 status=ok
// SIG undefined FUN_147ddfd64(void)

void FUN_147ddfd64(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178();
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar2) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_48,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  local_48._0_2_ = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x5b);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_14047d866(param_1 + 2,iVar2);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar2 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ddfede FUN_147ddfede body=382 status=ok
// SIG undefined FUN_147ddfede(void)

void FUN_147ddfede(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar1 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x10) == 0)) {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar4,uVar3);
        if ((cVar2 == '\0') || (*plVar4 == 0)) {
          plVar4 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar4,uVar3);
          if (((cVar2 == '\0') || (*plVar4 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147ddff2f;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147ddff2f:
      plVar4 = *(longlong **)(param_2 + 0x10);
      if (plVar4 == (longlong *)0x0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147de0338(uVar3,local_38);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar4 + 0xf0))(plVar4,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147de018e(*(undefined8 *)(param_1 + 8),local_38);
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 147de018e FUN_147de018e body=424 status=ok
// SIG undefined FUN_147de018e(void)

void FUN_147de018e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178();
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar1) {
    plVar2 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178(param_1[1],&local_48);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  plVar2 = (longlong *)param_1[1];
  if (0 < iVar1) {
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = (longlong *)param_1[1];
  }
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x7b);
  (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de0338 FUN_147de0338 body=424 status=ok
// SIG undefined FUN_147de0338(void)

void FUN_147de0338(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178();
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar1) {
    plVar2 = (longlong *)param_1[1];
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_48 = (undefined1 *)*param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48);
  local_4a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_4a,2);
  local_48 = &DAT_149e02010;
  local_40 = 2;
  FUN_147dea178(param_1[1],&local_48);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  plVar2 = (longlong *)param_1[1];
  if (0 < iVar1) {
    do {
      local_48 = (undefined1 *)CONCAT62(local_48._2_6_,9);
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = (longlong *)param_1[1];
  }
  local_48 = (undefined1 *)CONCAT62(local_48._2_6_,0x7b);
  (**(code **)(*plVar2 + 0x170))(plVar2,&local_48,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de04ec FUN_147de04ec body=248 status=ok
// SIG undefined FUN_147de04ec(void)

void FUN_147de04ec(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 3:
  case 5:
  case 7:
    local_38 = &DAT_149e02010;
    local_30 = 2;
    FUN_147dea178(*(undefined8 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x24);
    if (0 < iVar2) {
      plVar1 = *(longlong **)(param_1 + 8);
      do {
        local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
        (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,2);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    break;
  case 4:
    break;
  default:
    local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x20);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x5d);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_38,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_14047c610(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de05f0 FUN_147de05f0 body=194 status=ok
// SIG undefined FUN_147de05f0(void)

void FUN_147de05f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_149e02010;
  local_30 = 2;
  FUN_147dea178(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = iVar1 + -1;
  *(int *)(param_1 + 0x24) = iVar2;
  plVar3 = *(longlong **)(param_1 + 8);
  if (1 < iVar1) {
    do {
      local_38 = (undefined1 *)CONCAT62(local_38._2_6_,9);
      (**(code **)(*plVar3 + 0x170))(plVar3,&local_38,2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 8);
  }
  local_38 = (undefined1 *)CONCAT62(local_38._2_6_,0x7d);
  (**(code **)(*plVar3 + 0x170))(plVar3,&local_38,2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_14047c610(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de06b6 FUN_147de06b6 body=402 status=ok
// SIG undefined FUN_147de06b6(void)

void FUN_147de06b6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x30) < 2) {
      uVar4 = FUN_1446e6bbc();
      cVar3 = FUN_1400164de((longlong *)(lVar2 + 0x10),uVar4);
      if ((cVar3 == '\0') || (*(longlong *)(lVar2 + 0x10) == 0)) {
        plVar5 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar4 = FUN_144a7e162();
        cVar3 = FUN_1400164de(plVar5,uVar4);
        if ((cVar3 == '\0') || (*plVar5 == 0)) {
          plVar5 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar4 = FUN_1446ebfd4();
          cVar3 = FUN_1400164de(plVar5,uVar4);
          if (((cVar3 == '\0') || (*plVar5 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147de0713;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147de0713:
      plVar5 = *(longlong **)(param_2 + 0x10);
      if (plVar5 == (longlong *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        uVar1 = *param_3;
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_38,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_38);
        }
        FUN_147dea476(uVar4,local_38,CONCAT71((int7)((ulonglong)param_3 >> 8),uVar1) & 0xffffffff);
      }
      else {
        local_38[0] = 0;
        local_38[1] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_40 = 0;
        local_48 = 0;
        (**(code **)(*plVar5 + 0xf0))(plVar5,local_38,*(undefined8 *)(param_2 + 8),0);
        FUN_147dea306(*(undefined8 *)(param_1 + 8),local_38,*param_3);
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_38[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_78);
}



// FUNCTION 147de085c FUN_147de085c body=553 status=ok
// SIG undefined FUN_147de085c(void)

void FUN_147de085c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x30) < 2) {
      uVar3 = FUN_1446e6bbc();
      cVar2 = FUN_1400164de((longlong *)(lVar4 + 0x10),uVar3);
      if ((cVar2 == '\0') || (*(longlong *)(lVar4 + 0x10) == 0)) {
        plVar5 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar3 = FUN_144a7e162();
        cVar2 = FUN_1400164de(plVar5,uVar3);
        if ((cVar2 == '\0') || (*plVar5 == 0)) {
          plVar5 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
          uVar3 = FUN_1446ebfd4();
          cVar2 = FUN_1400164de(plVar5,uVar3);
          if (((cVar2 == '\0') || (*plVar5 == 0)) || (*(longlong *)(param_2 + 0x10) != 0))
          goto LAB_147de08c2;
        }
      }
    }
    if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
LAB_147de08c2:
      plVar5 = *(longlong **)(param_2 + 0x10);
      if (plVar5 == (longlong *)0x0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        local_68 = (void *)0x0;
        local_60 = *(int *)(param_3 + 1);
        lVar4 = (longlong)local_60;
        pvVar1 = (void *)*param_3;
        if (lVar4 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,pvVar1,lVar4 * 2);
        }
        if (*(longlong *)(param_2 + 0x20) == 0) {
          FUN_140056680(local_48,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*(longlong *)(param_2 + 0x20) + 0x20,local_48);
        }
        FUN_147dea848(uVar3,local_48,&local_68);
      }
      else {
        local_48[0] = 0;
        local_48[1] = 0;
        local_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        (**(code **)(*plVar5 + 0xf0))(plVar5,local_48,*(undefined8 *)(param_2 + 8),0);
        uVar3 = *(undefined8 *)(param_1 + 8);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 1);
        lVar4 = (longlong)local_50;
        pvVar1 = (void *)*param_3;
        if (lVar4 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar1,lVar4 * 2);
        }
        FUN_147dea6dc(uVar3,local_48,&local_58);
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 147de1b4c FUN_147de1b4c body=546 status=ok
// SIG undefined FUN_147de1b4c(void)

undefined8 FUN_147de1b4c(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_2 + 0x38) == -1) && (lVar7 = *(longlong *)(param_2 + 0x20), lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar7 + 8);
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar10 = lVar8 != 0;
      if (lVar8 != lVar4 && bVar10) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar10 = lVar8 != 0;
          if (lVar8 == lVar4) break;
        } while (lVar8 != 0);
      }
      if (bVar10) goto LAB_147de1bf1;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_147de1bf1:
      if (*(longlong *)(lVar7 + 0x78) != 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x78) + 8);
        lVar4 = FUN_14475a8dc();
        if (*(ulonglong *)(lVar4 + 8) == 0) {
          bVar10 = lVar8 != 0;
          if (lVar8 != lVar4 && bVar10) {
            do {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              bVar10 = lVar8 != 0;
              if (lVar8 == lVar4) break;
            } while (lVar8 != 0);
          }
          if (!bVar10) goto LAB_147de1d0b;
        }
        else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) {
LAB_147de1d0b:
          if (*(longlong *)(lVar7 + 0x78) != 0) {
            lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x78) + 8);
            lVar4 = FUN_14093f012();
            if (*(ulonglong *)(lVar4 + 8) == 0) {
              bVar10 = lVar8 != 0;
              if (lVar8 != lVar4 && bVar10) {
                do {
                  lVar8 = *(longlong *)(lVar8 + 0x30);
                  bVar10 = lVar8 != 0;
                  if (lVar8 == lVar4) break;
                } while (lVar8 != 0);
              }
              if (bVar10) goto LAB_147de1c1e;
            }
            else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0)
            goto LAB_147de1c1e;
          }
          goto LAB_147de1b71;
        }
LAB_147de1c1e:
        lVar8 = *(longlong *)(param_2 + 0x18);
        iVar2 = *(int *)(lVar7 + 0x44);
        bVar1 = *(byte *)(lVar7 + 0x70);
        (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x178))();
        local_68 = *(longlong *)(lVar7 + 0x78);
        iVar3 = *(int *)(local_68 + 0x34);
        local_88[0] = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        local_60 = 0;
        local_58 = *(undefined8 *)(local_68 + 8);
        local_50 = 0xffffffff;
        if (0 < *(int *)(lVar8 + 8 + (longlong)iVar2)) {
          puVar9 = (ulonglong *)(lVar8 + iVar2);
          lVar7 = 0;
          lVar8 = 0;
          do {
            if ((bVar1 & 1) == 0) {
              uVar5 = *puVar9;
            }
            else {
              uVar5 = *puVar9;
              if ((uVar5 & 1) != 0) {
                uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)puVar9;
              }
            }
            local_70 = uVar5 + lVar7;
            (**(code **)(*param_1 + 0x28))(param_1,local_88,0);
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + iVar3;
          } while (lVar8 < (int)puVar9[1]);
        }
        (**(code **)(*param_1 + 0x10))(param_1,param_2);
        uVar6 = 1;
        goto LAB_147de1b73;
      }
    }
  }
LAB_147de1b71:
  uVar6 = 0;
LAB_147de1b73:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147de1d6f FUN_147de1d6f body=300 status=ok
// SIG undefined FUN_147de1d6f(void)

undefined8 FUN_147de1d6f(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
LAB_147de1dec:
    uVar2 = *puVar4;
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 8);
    lVar1 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar1 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar1) break;
        } while (lVar5 != 0);
      }
      if (bVar6) goto LAB_147de1d97;
LAB_147de1d9b:
      if (lVar3 != 0) goto LAB_147de1da0;
    }
    else {
      if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
LAB_147de1d97:
        lVar3 = *(longlong *)(lVar3 + 0x78);
        goto LAB_147de1d9b;
      }
LAB_147de1da0:
      lVar5 = *(longlong *)(lVar3 + 8);
      lVar1 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar1 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar1 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar1) break;
          } while (lVar5 != 0);
        }
      }
      else {
        bVar6 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
      }
      lVar5 = *(longlong *)(lVar3 + 8);
      lVar1 = FUN_1446f4b16();
      if (*(ulonglong *)(lVar1 + 8) == 0) {
        bVar7 = lVar5 != 0;
        if (lVar5 != lVar1 && bVar7) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar7 = lVar5 != 0;
            if (lVar5 == lVar1) break;
          } while (lVar5 != 0);
        }
      }
      else {
        bVar7 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0;
      }
      if ((bVar6) || (bVar7)) {
        puVar4 = (undefined8 *)(lVar3 + 0x70);
        goto LAB_147de1dec;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147de1e9b FUN_147de1e9b body=209 status=ok
// SIG undefined FUN_147de1e9b(void)

undefined1 *
FUN_147de1e9b(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_3 + 0x78);
  local_50 = param_2;
  local_48 = param_4;
  uVar2 = FUN_140005950(param_2);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(longlong *)(param_1 + 0x20) = lVar1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = param_6;
  if (*(int *)(param_5 + 8) == 0) {
    local_50 = param_2;
    local_48 = param_4;
    uVar2 = FUN_140005950(param_2);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x70);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de1f6d FUN_147de1f6d body=258 status=ok
// SIG undefined FUN_147de1f6d(void)

bool FUN_147de1f6d(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (bVar3) {
      return true;
    }
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
    return true;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_144a7e162();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (bVar3) {
      return true;
    }
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) {
    return true;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_1446ebfd4();
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar3 = lVar2 != 0;
    if (lVar2 != lVar1 && bVar3) {
      do {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        bVar3 = lVar2 != 0;
        if (lVar2 == lVar1) break;
      } while (lVar2 != 0);
    }
    if (!bVar3) {
      return false;
    }
  }
  else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
    return false;
  }
  return *(int *)(param_2 + 8) == 1;
}



// FUNCTION 147de206f FUN_147de206f body=319 status=ok
// SIG undefined FUN_147de206f(void)

void FUN_147de206f(char *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
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
  char cVar23;
  byte bVar24;
  longlong lVar25;
  longlong lVar26;
  
  if (*param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147de209a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x18))(param_3,param_1);
    return;
  }
  (**(code **)(*param_3 + 8))(param_3,param_1);
  *param_1 = '\x01';
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147dedbd8(param_2,iVar3);
  }
  lVar4 = *param_2;
  lVar25 = (longlong)iVar3 * 0x40;
  uVar8 = *(undefined4 *)param_1;
  uVar9 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar11 = *(undefined4 *)(param_1 + 0xc);
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x14);
  uVar14 = *(undefined4 *)(param_1 + 0x18);
  uVar15 = *(undefined4 *)(param_1 + 0x1c);
  uVar16 = *(undefined4 *)(param_1 + 0x20);
  uVar17 = *(undefined4 *)(param_1 + 0x24);
  uVar18 = *(undefined4 *)(param_1 + 0x28);
  uVar19 = *(undefined4 *)(param_1 + 0x2c);
  uVar20 = *(undefined4 *)(param_1 + 0x34);
  uVar21 = *(undefined4 *)(param_1 + 0x38);
  uVar22 = *(undefined4 *)(param_1 + 0x3c);
  puVar1 = (undefined4 *)(lVar4 + 0x30 + lVar25);
  *puVar1 = *(undefined4 *)(param_1 + 0x30);
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar25);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar25);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (undefined4 *)(lVar4 + lVar25);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  lVar4 = *(longlong *)(param_1 + 0x20);
  plVar5 = *(longlong **)(lVar4 + 0x70);
  lVar25 = (longlong)*(int *)(lVar4 + 0x44) + *(longlong *)(param_1 + 0x18);
  cVar23 = (**(code **)(*plVar5 + 0x1b8))(plVar5);
  plVar6 = *(longlong **)(lVar4 + 0x70);
  if (cVar23 == '\0') {
    bVar24 = *(byte *)(lVar25 + (longlong)*(int *)((longlong)plVar6 + 0x34) *
                                (longlong)(int)plVar6[6]);
  }
  else {
    bVar24 = (**(code **)(*plVar6 + 0x1c8))(plVar6,lVar25);
  }
  if ((lVar25 != 0 & bVar24) == 1) {
    lVar4 = plVar5[1];
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_147dedbd8(param_2,iVar3);
    }
    lVar7 = *param_2;
    lVar26 = (longlong)iVar3 * 0x40;
    *(undefined1 *)(lVar7 + lVar26) = 0;
    puVar2 = (undefined8 *)(lVar7 + 8 + lVar26);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(longlong *)(lVar7 + 0x18 + lVar26) = lVar25;
    *(longlong **)(lVar7 + 0x20 + lVar26) = plVar5;
    *(undefined8 *)(lVar7 + 0x28 + lVar26) = 0;
    *(longlong *)(lVar7 + 0x30 + lVar26) = lVar4;
    *(undefined8 *)(lVar7 + 0x38 + lVar26) = 0xffffffff;
  }
  return;
}



// FUNCTION 147de21ae FUN_147de21ae body=137 status=ok
// SIG undefined FUN_147de21ae(void)

void FUN_147de21ae(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) == -1) {
    (**(code **)*param_2)(param_2,param_1);
    if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x30)) {
      iVar1 = 0;
      do {
        (**(code **)(*param_2 + 0x28))(param_2,param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x30));
    }
                    /* WARNING: Could not recover jumptable at 0x000147de222b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return;
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(*(longlong *)(param_1 + 0x20) + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147de21e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 147de2237 FUN_147de2237 body=512 status=ok
// SIG undefined FUN_147de2237(void)

longlong * FUN_147de2237(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(longlong *)(param_2 + 0x28) == 0) goto LAB_147de23f7;
  local_90 = *(longlong *)(param_2 + 0x18);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x10);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 != 0) &&
         (lVar3 = *(longlong *)(uVar2 + 8), lVar6 = FUN_1446e6bbc(), lVar3 == lVar6))
      goto LAB_147de22e2;
    }
    else if (((uVar2 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
    }
    iVar8 = 0;
    if (*(int *)(param_2 + 0x38) != -1) {
      iVar8 = *(int *)(param_2 + 0x38);
    }
    local_90 = (longlong)iVar8 * (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) +
               (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
               *(longlong *)(param_2 + 0x18);
  }
LAB_147de22e2:
  local_88 = *(longlong *)(param_2 + 0x28);
  if (local_88 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = *(longlong *)(local_88 + 0x50);
  }
  local_78 = 0xffffffff;
  local_74 = 0x101;
  local_72 = 0;
  FUN_144a2daf0(&local_88);
  if (local_80 != 0) {
    do {
      pcVar4 = *(code **)(param_3 + 0x10);
      if (pcVar4 == (code *)0x0) {
LAB_147de2376:
        lVar3 = local_80;
        uVar7 = *(undefined8 *)(local_80 + 8);
        iVar8 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
          FUN_147dedbd8(param_1,iVar8);
        }
        lVar6 = *param_1;
        lVar10 = (longlong)iVar8 * 0x40;
        *(undefined1 *)(lVar6 + lVar10) = 0;
        puVar1 = (undefined8 *)(lVar6 + 8 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(longlong *)(lVar6 + 0x18 + lVar10) = local_90;
        *(longlong *)(lVar6 + 0x20 + lVar10) = lVar3;
        *(undefined8 *)(lVar6 + 0x28 + lVar10) = 0;
        *(undefined8 *)(lVar6 + 0x30 + lVar10) = uVar7;
        *(undefined8 *)(lVar6 + 0x38 + lVar10) = 0xffffffff;
      }
      else {
        local_68 = *(undefined8 *)(param_2 + 0x20);
        local_70 = local_80;
        plVar9 = *(longlong **)(param_3 + 0x20);
        if (*(longlong **)(param_3 + 0x20) == (longlong *)0x0) {
          plVar9 = (longlong *)(param_3 + 0x30);
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar5 = (*pcVar4)(uVar7,&local_70,&local_68);
        if (cVar5 != '\0') goto LAB_147de2376;
      }
      local_80 = *(longlong *)(local_80 + 0x18);
      FUN_144a2daf0(&local_88);
    } while (local_80 != 0);
  }
LAB_147de23f7:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147de2438 FUN_147de2438 body=161 status=ok
// SIG undefined FUN_147de2438(void)

longlong * FUN_147de2438(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x30);
  if (0 < iVar2) {
    uVar7 = iVar2 + 1;
    do {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_147dedbd8(param_1,iVar2);
      }
      lVar5 = *param_1;
      lVar6 = (longlong)iVar2 * 0x40;
      *(undefined1 *)(lVar5 + lVar6) = 0;
      puVar1 = (undefined8 *)(lVar5 + 8 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar5 + 0x18 + lVar6) = uVar3;
      *(undefined8 *)(lVar5 + 0x20 + lVar6) = uVar4;
      puVar1 = (undefined8 *)(lVar5 + 0x28 + lVar6);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(uint *)(lVar5 + 0x38 + lVar6) = uVar7 - 2;
      *(undefined4 *)(lVar5 + 0x3c + lVar6) = 0;
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return param_1;
}



// FUNCTION 147de24d9 FUN_147de24d9 body=188 status=ok
// SIG undefined FUN_147de24d9(void)

undefined8 FUN_147de24d9(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(lVar3 + 8);
    lVar1 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (bVar4) goto LAB_147de2504;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) != 0) goto LAB_147de2504;
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar3 + 8);
      lVar1 = FUN_1446f4b16();
      if (*(ulonglong *)(lVar1 + 8) == 0) {
        bVar4 = lVar2 != 0;
        if (lVar2 != lVar1 && bVar4) {
          do {
            lVar2 = *(longlong *)(lVar2 + 0x30);
            bVar4 = lVar2 != 0;
            if (lVar2 == lVar1) break;
          } while (lVar2 != 0);
        }
        if (!bVar4) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
        return 0;
      }
LAB_147de2504:
      return *(undefined8 *)(lVar3 + 0x70);
    }
  }
  return 0;
}



// FUNCTION 147de26e7 FUN_147de26e7 body=410 status=ok
// SIG undefined FUN_147de26e7(void)

void FUN_147de26e7(char *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*param_1 != '\0') goto LAB_147de275b;
  }
  else {
    if ((1 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x30)) && (*(int *)(param_1 + 0x38) == -1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    if (*param_1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  lVar23 = FUN_147de24d9(param_1);
  if (lVar23 != 0) {
    *(longlong *)(param_1 + 0x28) = lVar23;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*param_3 + 8))(param_3,param_1);
  }
  *param_1 = '\x01';
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147dedbd8(param_2,iVar2);
  }
  lVar23 = *param_2;
  lVar25 = (longlong)iVar2 * 0x40;
  uVar3 = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  uVar11 = *(undefined4 *)(param_1 + 0x20);
  uVar12 = *(undefined4 *)(param_1 + 0x24);
  uVar13 = *(undefined4 *)(param_1 + 0x28);
  uVar14 = *(undefined4 *)(param_1 + 0x2c);
  uVar15 = *(undefined4 *)(param_1 + 0x34);
  uVar16 = *(undefined4 *)(param_1 + 0x38);
  uVar17 = *(undefined4 *)(param_1 + 0x3c);
  puVar27 = (undefined4 *)(lVar23 + 0x30 + lVar25);
  *puVar27 = *(undefined4 *)(param_1 + 0x30);
  puVar27[1] = uVar15;
  puVar27[2] = uVar16;
  puVar27[3] = uVar17;
  puVar27 = (undefined4 *)(lVar23 + 0x20 + lVar25);
  *puVar27 = uVar11;
  puVar27[1] = uVar12;
  puVar27[2] = uVar13;
  puVar27[3] = uVar14;
  puVar27 = (undefined4 *)(lVar23 + 0x10 + lVar25);
  *puVar27 = uVar7;
  puVar27[1] = uVar8;
  puVar27[2] = uVar9;
  puVar27[3] = uVar10;
  puVar27 = (undefined4 *)(lVar23 + lVar25);
  *puVar27 = uVar3;
  puVar27[1] = uVar4;
  puVar27[2] = uVar5;
  puVar27[3] = uVar6;
  FUN_147de2237(&local_40,param_1,param_4);
  lVar23 = (longlong)local_38;
  if (0 < lVar23) {
    uVar26 = lVar23 + 1;
    lVar23 = lVar23 << 6;
    do {
      lVar23 = lVar23 + -0x40;
      puVar27 = (undefined4 *)(local_40 + lVar23);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_147dedbd8(param_2,iVar2);
      }
      lVar25 = *param_2;
      lVar24 = (longlong)iVar2 * 0x40;
      uVar3 = *puVar27;
      uVar4 = puVar27[1];
      uVar5 = puVar27[2];
      uVar6 = puVar27[3];
      uVar18 = *(undefined8 *)(puVar27 + 4);
      uVar19 = *(undefined8 *)(puVar27 + 6);
      uVar20 = *(undefined8 *)(puVar27 + 8);
      uVar21 = *(undefined8 *)(puVar27 + 10);
      uVar22 = *(undefined8 *)(puVar27 + 0xe);
      puVar1 = (undefined8 *)(lVar25 + 0x30 + lVar24);
      *puVar1 = *(undefined8 *)(puVar27 + 0xc);
      puVar1[1] = uVar22;
      puVar1 = (undefined8 *)(lVar25 + 0x20 + lVar24);
      *puVar1 = uVar20;
      puVar1[1] = uVar21;
      puVar1 = (undefined8 *)(lVar25 + 0x10 + lVar24);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar27 = (undefined4 *)(lVar25 + lVar24);
      *puVar27 = uVar3;
      puVar27[1] = uVar4;
      puVar27[2] = uVar5;
      puVar27[3] = uVar6;
      uVar26 = uVar26 - 1;
    } while (1 < uVar26);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_147de275b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147de28b2 FUN_147de28b2 body=972 status=ok
// SIG undefined FUN_147de28b2(void)

void FUN_147de28b2(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_147dedbd8(&local_68,0);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  uVar13 = param_1[0xd];
  uVar14 = param_1[0xe];
  uVar15 = param_1[0xf];
  local_68[0xc] = param_1[0xc];
  local_68[0xd] = uVar13;
  local_68[0xe] = uVar14;
  local_68[0xf] = uVar15;
  local_68[8] = uVar9;
  local_68[9] = uVar10;
  local_68[10] = uVar11;
  local_68[0xb] = uVar12;
  local_68[4] = uVar5;
  local_68[5] = uVar6;
  local_68[6] = uVar7;
  local_68[7] = uVar8;
  *local_68 = uVar1;
  local_68[1] = uVar2;
  local_68[2] = uVar3;
  local_68[3] = uVar4;
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0;
  uStack_70 = 0xffffffff;
  (**(code **)(*param_2 + 8))(param_2);
  if (0 < (int)(uint)uStack_60) {
    do {
      uVar17 = (ulonglong)(uint)uStack_60;
      local_a8 = *(undefined8 *)(local_68 + uVar17 * 0x10 + -0x10);
      uStack_a0 = *(undefined8 *)((longlong)(local_68 + uVar17 * 0x10 + -0x10) + 8);
      local_98 = *(undefined8 *)(local_68 + uVar17 * 0x10 + -0xc);
      uStack_90 = *(undefined8 *)((longlong)(local_68 + uVar17 * 0x10 + -0xc) + 8);
      local_88 = *(longlong *)(local_68 + uVar17 * 0x10 + -8);
      lStack_80 = *(longlong *)((longlong)(local_68 + uVar17 * 0x10 + -8) + 8);
      local_78 = *(undefined8 *)(local_68 + uVar17 * 0x10 + -4);
      uStack_70 = *(undefined8 *)((longlong)(local_68 + uVar17 * 0x10 + -4) + 8);
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 - 1);
      if (local_88 == 0) {
LAB_147de2adb:
        FUN_147de26e7(&local_a8,&local_68,param_2,param_3);
      }
      else {
        lVar18 = *(longlong *)(local_88 + 8);
        lVar16 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar16 + 8) == 0) {
          bVar19 = lVar18 != 0;
          if (lVar18 != lVar16 && bVar19) {
            do {
              lVar18 = *(longlong *)(lVar18 + 0x30);
              bVar19 = lVar18 != 0;
              if (lVar18 == lVar16) break;
            } while (lVar18 != 0);
          }
          if (bVar19) goto LAB_147de2adb;
        }
        else if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar16 + 8)) != 0)
        goto LAB_147de2adb;
        if (local_88 != 0) {
          lVar18 = *(longlong *)(local_88 + 8);
          lVar16 = FUN_1446e6bbc();
          if (*(ulonglong *)(lVar16 + 8) == 0) {
            bVar19 = lVar18 != 0;
            if (lVar18 != lVar16 && bVar19) {
              do {
                lVar18 = *(longlong *)(lVar18 + 0x30);
                bVar19 = lVar18 != 0;
                if (lVar18 == lVar16) break;
              } while (lVar18 != 0);
            }
            if (bVar19) goto LAB_147de2b20;
          }
          else if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar16 + 8)) != 0) {
LAB_147de2b20:
            FUN_147de2c7f(&local_a8,&local_68,param_2,param_3);
            goto LAB_147de2a98;
          }
          if (local_88 != 0) {
            lVar18 = *(longlong *)(local_88 + 8);
            lVar16 = FUN_1446ebfd4();
            if (*(ulonglong *)(lVar16 + 8) == 0) {
              bVar19 = lVar18 != 0;
              if (lVar18 != lVar16 && bVar19) {
                do {
                  lVar18 = *(longlong *)(lVar18 + 0x30);
                  bVar19 = lVar18 != 0;
                  if (lVar18 == lVar16) break;
                } while (lVar18 != 0);
              }
              if (bVar19) goto LAB_147de2b68;
            }
            else if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar16 + 8)) != 0) {
LAB_147de2b68:
              FUN_147de2e76(&local_a8,&local_68,param_2,param_3);
              goto LAB_147de2a98;
            }
            if (local_88 != 0) {
              lVar18 = *(longlong *)(local_88 + 8);
              lVar16 = FUN_144a7e162();
              if (*(ulonglong *)(lVar16 + 8) == 0) {
                bVar19 = lVar18 != 0;
                if (lVar18 != lVar16 && bVar19) {
                  do {
                    lVar18 = *(longlong *)(lVar18 + 0x30);
                    bVar19 = lVar18 != 0;
                    if (lVar18 == lVar16) break;
                  } while (lVar18 != 0);
                }
                if (bVar19) goto LAB_147de2bb0;
              }
              else if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar16 + 8)) != 0) {
LAB_147de2bb0:
                FUN_147de3079(&local_a8,&local_68,param_2,param_3);
                goto LAB_147de2a98;
              }
              if (local_88 != 0) {
                lVar18 = *(longlong *)(local_88 + 8);
                lVar16 = FUN_140019ace();
                if (*(ulonglong *)(lVar16 + 8) == 0) {
                  bVar19 = lVar18 != 0;
                  if (lVar18 != lVar16 && bVar19) {
                    do {
                      lVar18 = *(longlong *)(lVar18 + 0x30);
                      bVar19 = lVar18 != 0;
                      if (lVar18 == lVar16) break;
                    } while (lVar18 != 0);
                  }
                  if (bVar19) goto LAB_147de2c08;
                }
                else if ((*(ulonglong *)(lVar18 + 0x18) & *(ulonglong *)(lVar16 + 8)) != 0) {
LAB_147de2c08:
                  FUN_147de206f(&local_a8,&local_68,param_2);
                  goto LAB_147de2a98;
                }
              }
            }
          }
        }
        if (*(int *)(local_88 + 0x30) < 2) {
          (**(code **)(*param_2 + 0x28))(param_2,&local_a8,0);
        }
        else {
          FUN_147de21ae(&local_a8,param_2);
        }
      }
LAB_147de2a98:
    } while (0 < (int)(uint)uStack_60);
  }
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0;
  uStack_70 = 0xffffffff;
  (**(code **)(*param_2 + 0x18))(param_2);
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147de2c7f FUN_147de2c7f body=479 status=ok
// SIG undefined FUN_147de2c7f(void)

void FUN_147de2c7f(char *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  char cVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 != '\0') {
    if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
      FUN_147de1f6d(*(undefined8 *)(param_1 + 0x20),param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    goto LAB_147de2caf;
  }
  if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    bVar26 = FUN_147de1f6d(*(undefined8 *)(param_1 + 0x20),param_4);
    (**(code **)(*param_3 + (ulonglong)(bVar26 ^ 1) * 8))(param_3,param_1);
  }
  lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  lVar27 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar27 + 8) == 0) {
    bVar30 = lVar29 != 0;
    if (lVar29 != lVar27 && bVar30) {
      do {
        lVar29 = *(longlong *)(lVar29 + 0x30);
        bVar30 = lVar29 != 0;
        if (lVar29 == lVar27) break;
      } while (lVar29 != 0);
    }
    if (bVar30) goto LAB_147de2d28;
  }
  else if ((*(ulonglong *)(lVar29 + 0x18) & *(ulonglong *)(lVar27 + 8)) != 0) {
LAB_147de2d28:
    cVar25 = (**(code **)(*param_3 + 0x30))(param_3,param_1);
    if (cVar25 != '\0') goto LAB_147de2caf;
  }
  *param_1 = '\x01';
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147dedbd8(param_2,iVar3);
  }
  lVar29 = *param_2;
  lVar27 = (longlong)iVar3 * 0x40;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  uVar13 = *(undefined4 *)(param_1 + 0x20);
  uVar14 = *(undefined4 *)(param_1 + 0x24);
  uVar15 = *(undefined4 *)(param_1 + 0x28);
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  uVar17 = *(undefined4 *)(param_1 + 0x34);
  uVar18 = *(undefined4 *)(param_1 + 0x38);
  uVar19 = *(undefined4 *)(param_1 + 0x3c);
  puVar1 = (undefined4 *)(lVar29 + 0x30 + lVar27);
  *puVar1 = *(undefined4 *)(param_1 + 0x30);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (undefined4 *)(lVar29 + 0x20 + lVar27);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1[2] = uVar15;
  puVar1[3] = uVar16;
  puVar1 = (undefined4 *)(lVar29 + 0x10 + lVar27);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar1 = (undefined4 *)(lVar29 + lVar27);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  FUN_147dedc5d(&local_40,param_1);
  lVar29 = local_40;
  if ((longlong)local_38 != 0) {
    lVar27 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_147dedbd8(param_2,iVar3);
      }
      puVar1 = (undefined4 *)(lVar29 + lVar27);
      lVar4 = *param_2;
      lVar28 = (longlong)iVar3 * 0x40;
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar20 = *(undefined8 *)(puVar1 + 4);
      uVar21 = *(undefined8 *)(puVar1 + 6);
      uVar22 = *(undefined8 *)(puVar1 + 8);
      uVar23 = *(undefined8 *)(puVar1 + 10);
      uVar24 = *(undefined8 *)(puVar1 + 0xe);
      puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar28);
      *puVar2 = *(undefined8 *)(puVar1 + 0xc);
      puVar2[1] = uVar24;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar28);
      *puVar2 = uVar22;
      puVar2[1] = uVar23;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar28);
      *puVar2 = uVar20;
      puVar2[1] = uVar21;
      puVar1 = (undefined4 *)(lVar4 + lVar28);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar27 = lVar27 + 0x40;
    } while ((longlong)local_38 * 0x40 != lVar27);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
LAB_147de2caf:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de2e76 FUN_147de2e76 body=491 status=ok
// SIG undefined FUN_147de2e76(void)

void FUN_147de2e76(char *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  char cVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 != '\0') {
    if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
      FUN_147de1f6d(*(undefined8 *)(param_1 + 0x20),param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    goto LAB_147de2ea9;
  }
  if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    bVar26 = FUN_147de1f6d(*(undefined8 *)(param_1 + 0x20),param_4);
    (**(code **)(*param_3 + (ulonglong)(bVar26 ^ 1) * 8))(param_3,param_1);
  }
  lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  lVar27 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar27 + 8) == 0) {
    bVar30 = lVar29 != 0;
    if (lVar29 != lVar27 && bVar30) {
      do {
        lVar29 = *(longlong *)(lVar29 + 0x30);
        bVar30 = lVar29 != 0;
        if (lVar29 == lVar27) break;
      } while (lVar29 != 0);
    }
    if (bVar30) goto LAB_147de2f22;
  }
  else if ((*(ulonglong *)(lVar29 + 0x18) & *(ulonglong *)(lVar27 + 8)) != 0) {
LAB_147de2f22:
    cVar25 = (**(code **)(*param_3 + 0x30))(param_3,param_1);
    if (cVar25 != '\0') goto LAB_147de2ea9;
  }
  *param_1 = '\x01';
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147dedbd8(param_2,iVar3);
  }
  lVar29 = *param_2;
  lVar27 = (longlong)iVar3 * 0x40;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  uVar13 = *(undefined4 *)(param_1 + 0x20);
  uVar14 = *(undefined4 *)(param_1 + 0x24);
  uVar15 = *(undefined4 *)(param_1 + 0x28);
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  uVar17 = *(undefined4 *)(param_1 + 0x34);
  uVar18 = *(undefined4 *)(param_1 + 0x38);
  uVar19 = *(undefined4 *)(param_1 + 0x3c);
  puVar1 = (undefined4 *)(lVar29 + 0x30 + lVar27);
  *puVar1 = *(undefined4 *)(param_1 + 0x30);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (undefined4 *)(lVar29 + 0x20 + lVar27);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1[2] = uVar15;
  puVar1[3] = uVar16;
  puVar1 = (undefined4 *)(lVar29 + 0x10 + lVar27);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar1 = (undefined4 *)(lVar29 + lVar27);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  FUN_147dedec5(&local_40,param_1,param_4);
  lVar29 = local_40;
  if ((longlong)local_38 != 0) {
    lVar27 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_147dedbd8(param_2,iVar3);
      }
      puVar1 = (undefined4 *)(lVar29 + lVar27);
      lVar4 = *param_2;
      lVar28 = (longlong)iVar3 * 0x40;
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar20 = *(undefined8 *)(puVar1 + 4);
      uVar21 = *(undefined8 *)(puVar1 + 6);
      uVar22 = *(undefined8 *)(puVar1 + 8);
      uVar23 = *(undefined8 *)(puVar1 + 10);
      uVar24 = *(undefined8 *)(puVar1 + 0xe);
      puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar28);
      *puVar2 = *(undefined8 *)(puVar1 + 0xc);
      puVar2[1] = uVar24;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar28);
      *puVar2 = uVar22;
      puVar2[1] = uVar23;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar28);
      *puVar2 = uVar20;
      puVar2[1] = uVar21;
      puVar1 = (undefined4 *)(lVar4 + lVar28);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar27 = lVar27 + 0x40;
    } while ((longlong)local_38 * 0x40 != lVar27);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
LAB_147de2ea9:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de3079 FUN_147de3079 body=479 status=ok
// SIG undefined FUN_147de3079(void)

void FUN_147de3079(char *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  char cVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 != '\0') {
    if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
      FUN_147de1f6d(*(undefined8 *)(param_1 + 0x20),param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    goto LAB_147de30a9;
  }
  if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
    bVar26 = FUN_147de1f6d(*(undefined8 *)(param_1 + 0x20),param_4);
    (**(code **)(*param_3 + (ulonglong)(bVar26 ^ 1) * 8))(param_3,param_1);
  }
  lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  lVar27 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar27 + 8) == 0) {
    bVar30 = lVar29 != 0;
    if (lVar29 != lVar27 && bVar30) {
      do {
        lVar29 = *(longlong *)(lVar29 + 0x30);
        bVar30 = lVar29 != 0;
        if (lVar29 == lVar27) break;
      } while (lVar29 != 0);
    }
    if (bVar30) goto LAB_147de3122;
  }
  else if ((*(ulonglong *)(lVar29 + 0x18) & *(ulonglong *)(lVar27 + 8)) != 0) {
LAB_147de3122:
    cVar25 = (**(code **)(*param_3 + 0x30))(param_3,param_1);
    if (cVar25 != '\0') goto LAB_147de30a9;
  }
  *param_1 = '\x01';
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147dedbd8(param_2,iVar3);
  }
  lVar29 = *param_2;
  lVar27 = (longlong)iVar3 * 0x40;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  uVar13 = *(undefined4 *)(param_1 + 0x20);
  uVar14 = *(undefined4 *)(param_1 + 0x24);
  uVar15 = *(undefined4 *)(param_1 + 0x28);
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  uVar17 = *(undefined4 *)(param_1 + 0x34);
  uVar18 = *(undefined4 *)(param_1 + 0x38);
  uVar19 = *(undefined4 *)(param_1 + 0x3c);
  puVar1 = (undefined4 *)(lVar29 + 0x30 + lVar27);
  *puVar1 = *(undefined4 *)(param_1 + 0x30);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (undefined4 *)(lVar29 + 0x20 + lVar27);
  *puVar1 = uVar13;
  puVar1[1] = uVar14;
  puVar1[2] = uVar15;
  puVar1[3] = uVar16;
  puVar1 = (undefined4 *)(lVar29 + 0x10 + lVar27);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar1 = (undefined4 *)(lVar29 + lVar27);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  FUN_147dee169(&local_40,param_1);
  lVar29 = local_40;
  if ((longlong)local_38 != 0) {
    lVar27 = 0;
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_147dedbd8(param_2,iVar3);
      }
      puVar1 = (undefined4 *)(lVar29 + lVar27);
      lVar4 = *param_2;
      lVar28 = (longlong)iVar3 * 0x40;
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar20 = *(undefined8 *)(puVar1 + 4);
      uVar21 = *(undefined8 *)(puVar1 + 6);
      uVar22 = *(undefined8 *)(puVar1 + 8);
      uVar23 = *(undefined8 *)(puVar1 + 10);
      uVar24 = *(undefined8 *)(puVar1 + 0xe);
      puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar28);
      *puVar2 = *(undefined8 *)(puVar1 + 0xc);
      puVar2[1] = uVar24;
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar28);
      *puVar2 = uVar22;
      puVar2[1] = uVar23;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar28);
      *puVar2 = uVar20;
      puVar2[1] = uVar21;
      puVar1 = (undefined4 *)(lVar4 + lVar28);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar27 = lVar27 + 0x40;
    } while ((longlong)local_38 * 0x40 != lVar27);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
LAB_147de30a9:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de3270 FUN_147de3270 body=102 status=ok
// SIG undefined FUN_147de3270(void)

void FUN_147de3270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0xffffffff;
  local_30 = param_1;
  local_20 = param_2;
  FUN_147de28b2(local_48,param_3,param_4);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de32d8 FUN_147de32d8 body=38 status=ok
// SIG undefined FUN_147de32d8(void)

undefined8 FUN_147de32d8(undefined8 param_1,int param_2)

{
  FUN_147dde11c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147de32fe FUN_147de32fe body=66 status=ok
// SIG undefined FUN_147de32fe(void)

undefined8 * FUN_147de32fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab31fe0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_147ddd2e0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147de345a FUN_147de345a body=59 status=ok
// SIG undefined FUN_147de345a(void)

undefined8 FUN_147de345a(longlong *param_1)

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



// FUNCTION 147de3576 FUN_147de3576 body=59 status=ok
// SIG undefined FUN_147de3576(void)

undefined8 FUN_147de3576(longlong *param_1)

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



// FUNCTION 147de3656 FUN_147de3656 body=63 status=ok
// SIG undefined FUN_147de3656(void)

undefined1 FUN_147de3656(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147de37d2(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 147de36be FUN_147de36be body=59 status=ok
// SIG undefined FUN_147de36be(void)

undefined8 FUN_147de36be(longlong *param_1)

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



// FUNCTION 147de370a FUN_147de370a body=40 status=ok
// SIG undefined FUN_147de370a(void)

void FUN_147de370a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_147de3780(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147de3780 FUN_147de3780 body=82 status=ok
// SIG undefined FUN_147de3780(void)

void FUN_147de3780(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de37d2 FUN_147de37d2 body=365 status=ok
// SIG undefined FUN_147de37d2(void)

longlong * FUN_147de37d2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[1];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar4;
  lVar4 = param_2[2];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[2];
    }
  }
  param_1[2] = lVar4;
  param_1[3] = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar4 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(int *)(param_1 + 5) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  lVar4 = param_2[8];
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[8];
    }
  }
  bVar3 = DAT_14c950c29;
  param_1[8] = lVar4;
  lVar4 = param_2[9];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[9];
    }
  }
  param_1[9] = lVar4;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  lVar4 = param_2[0xd];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(int *)(param_1 + 0xd) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar2;
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
  lVar4 = param_2[0x11];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xa4);
  lVar4 = param_2[0x15];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar1;
  *(int *)(param_1 + 0x15) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 147de3950 FUN_147de3950 body=49 status=ok
// SIG undefined FUN_147de3950(void)

void FUN_147de3950(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de3998 FUN_147de3998 body=63 status=ok
// SIG undefined FUN_147de3998(void)

undefined1 FUN_147de3998(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147de3cba(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 147de3a00 FUN_147de3a00 body=95 status=ok
// SIG undefined FUN_147de3a00(void)

void FUN_147de3a00(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 0x18);
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_144a49b4a(iVar2,puVar3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de3a70 FUN_147de3a70 body=59 status=ok
// SIG undefined FUN_147de3a70(void)

void FUN_147de3a70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 147de3afa FUN_147de3afa body=446 status=ok
// SIG undefined FUN_147de3afa(void)

longlong FUN_147de3afa(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e3d1e();
  FUN_1446f470e(param_1 + 0x10,L"Test FName",1);
  FUN_1400b22c2(param_1 + 0x18,"Test String");
  FUN_1400b22c2(local_30,"Test Text");
  FUN_140233b1a(param_1 + 0x28,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  local_40 = 0x40;
  local_48 = 0x20;
  local_50 = 0x10;
  local_58 = 8;
  FUN_14021300e(param_1 + 0x38,0x800,2,4);
  local_50 = 5;
  local_58 = 4;
  FUN_1458c54da(param_1 + 0x40,1,2,3);
  *(undefined8 *)(param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0x4008000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0x4010000000000000;
  *(undefined8 *)(param_1 + 0x68) = 0x4014000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0x4018000000000000;
  *(undefined8 *)(param_1 + 0x78) = 0x401c000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0x40b0000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0x40c0000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x40d0000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xa8) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0xb0) = 0x4008000000000000;
  *(undefined8 *)(param_1 + 0xb8) = 0x3fdd70a3e0000000;
  *(undefined4 *)(param_1 + 0xc0) = 0xff03ff3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de3cba FUN_147de3cba body=121 status=ok
// SIG undefined FUN_147de3cba(void)

undefined4 * FUN_147de3cba(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  plVar1 = *(longlong **)(param_2 + 10);
  plVar2 = *(longlong **)(param_1 + 10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[0xc] = param_2[0xc];
  memcpy(param_1 + 0xe,param_2 + 0xe,0x8c);
  return param_1;
}



// FUNCTION 147de3d62 FUN_147de3d62 body=129 status=ok
// SIG undefined FUN_147de3d62(void)

undefined8 FUN_147de3d62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
    do {
      memcpy((void *)(param_2 + -0x310),(void *)(param_3 + -0x310),0x2b0);
      FUN_1405b70a4(param_2 + -0x60,param_3 + -0x60);
      FUN_147de52e2(param_2 + -0x50,param_3 + -0x50);
      FUN_147de5268(param_2,param_3);
      param_3 = param_3 + 0x360;
      param_2 = param_2 + 0x360;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147de3e0c FUN_147de3e0c body=59 status=ok
// SIG undefined FUN_147de3e0c(void)

undefined8 FUN_147de3e0c(longlong *param_1)

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



// FUNCTION 147de3e58 FUN_147de3e58 body=40 status=ok
// SIG undefined FUN_147de3e58(void)

void FUN_147de3e58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x360) == '\x01') {
    FUN_147de4f94(param_2);
    *(undefined1 *)(param_2 + 0x360) = 0;
  }
  return;
}



// FUNCTION 147de3ece FUN_147de3ece body=1431 status=ok
// SIG undefined FUN_147de3ece(void)

undefined8 * FUN_147de3ece(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0x3ff4000000000000;
  param_1[1] = 0x4004000000000000;
  param_1[2] = 0x400e000000000000;
  param_1[3] = 0x4002000000000000;
  param_1[4] = 0x400c000000000000;
  param_1[6] = 0x3fe0000000000000;
  param_1[7] = 0x3ff4000000000000;
  param_1[8] = 0x4004000000000000;
  param_1[9] = 0x400e000000000000;
  param_1[10] = 0x3ff4000000000000;
  param_1[0xb] = 0x4002000000000000;
  param_1[0xc] = 0x400a000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x4011000000000000;
  param_1[0xf] = 0x4016000000000000;
  param_1[0x10] = 0x401a000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x401d000000000000;
  param_1[0x13] = 0x4020800000000000;
  param_1[0x14] = 0x4022800000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x4000000000000000;
  param_1[0x18] = 0x4008000000000000;
  param_1[0x19] = 0x3ff0000000000000;
  param_1[0x1a] = 0x3fd0000000000000;
  param_1[0x1b] = 0x3ff4000000000000;
  param_1[0x1c] = 0x4002000000000000;
  param_1[0x1d] = 0x400a000000000000;
  param_1[0x1e] = 0x3fd0000000000000;
  param_1[0x1f] = 0x3fe0000000000000;
  param_1[0x20] = 0x3fe8000000000000;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x4002000000000000;
  param_1[0x23] = 0x4002000000000000;
  param_1[0x24] = 0x4002000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0x4000000000000000;
  param_1[0x28] = 0x4008000000000000;
  param_1[0x29] = 0x4010000000000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0x4000000000000000;
  param_1[0x34] = 0x4008000000000000;
  param_1[0x35] = 0x4014000000000000;
  param_1[0x36] = 0x4018000000000000;
  param_1[0x37] = 0x401c000000000000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x39] = 0x4024000000000000;
  param_1[0x3a] = 0x4034000000000000;
  param_1[0x3b] = 0x403e000000000000;
  param_1[0x3c] = 0x4044000000000000;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  param_1[0x3e] = 0x3ff0000000000000;
  param_1[0x3f] = 0x4000000000000000;
  param_1[0x40] = 0x4008000000000000;
  param_1[0x41] = 0x4024000000000000;
  param_1[0x42] = 0x4024000000000000;
  param_1[0x43] = 0x4024000000000000;
  param_1[0x44] = 0x4034000000000000;
  *(undefined4 *)(param_1 + 0x54) = 0x40a80000;
  param_1[0x55] = 0x3ff1d2f1a9fbe76d;
  plVar1 = param_1 + 0x56;
  puVar2 = param_1 + 0x58;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x49] = 0x3ff0000000000000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x4000000000000000;
  param_1[0x4c] = 0x4000000000000000;
  param_1[0x4d] = 0x4000000000000000;
  param_1[0x4e] = 0x4008000000000000;
  param_1[0x4f] = 0x4008000000000000;
  param_1[0x50] = 0x4008000000000000;
  param_1[0x45] = 0x4014000000000000;
  param_1[0x46] = 0x4014000000000000;
  param_1[0x47] = 0x4014000000000000;
  param_1[0x51] = 0x4024000000000000;
  param_1[0x52] = 0x4034000000000000;
  param_1[0x53] = 0x403e000000000000;
  *(undefined4 *)(param_1 + 0x57) = 1;
  FUN_1403e3958(plVar1,0);
  puVar4 = (undefined8 *)param_1[0x56];
  *puVar4 = 0x3ff0000000000000;
  puVar4[1] = 0x4000000000000000;
  puVar4[2] = 0x4008000000000000;
  iVar3 = *(int *)(param_1 + 0x57);
  lVar6 = (longlong)iVar3;
  *(uint *)(param_1 + 0x57) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 700) < iVar3 + 1U) {
    FUN_1403e3958(plVar1,iVar3);
  }
  lVar5 = *plVar1;
  *(undefined8 *)(lVar5 + lVar6 * 0x18) = 0xbff0000000000000;
  *(undefined8 *)(lVar5 + 8 + lVar6 * 0x18) = 0xc000000000000000;
  *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x18) = 0xc008000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_140056680(local_a8,L"V000");
  local_78 = local_a8;
  local_70 = &local_98;
  FUN_147de4466(puVar2,local_64);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0x4000000000000000;
  local_88 = 0x4008000000000000;
  FUN_140056680(local_a8,L"V123");
  local_78 = local_a8;
  local_70 = &local_98;
  FUN_147de4466(puVar2,local_64);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  local_98 = 0x4018000000000000;
  uStack_90 = 0x4018000000000000;
  local_88 = 0x4018000000000000;
  FUN_140056680(local_a8,L"V666");
  local_78 = local_a8;
  local_70 = &local_98;
  FUN_147de4466(puVar2,local_64);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  local_98 = 0x4024000000000000;
  uStack_90 = 0x4026000000000000;
  local_88 = 0x4028000000000000;
  FUN_147de4a64(param_1 + 0x62,&local_78);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de4466 FUN_147de4466 body=355 status=ok
// SIG undefined FUN_147de4466(void)

undefined4 * FUN_147de4466(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147de45ca(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_40 = *puVar1;
  iVar10 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[4] = *(undefined8 *)(puVar2 + 4);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
  *(undefined4 *)(local_40 + 3) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar5;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*local_40;
    iVar10 = *(int *)(local_40 + 1) + -1;
  }
  uVar7 = FUN_144a49b4a(iVar10,puVar11);
  cVar6 = FUN_147de46b8(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x2c) = uVar7;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147de4882(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147de45ca FUN_147de45ca body=238 status=ok
// SIG undefined FUN_147de45ca(void)

int * FUN_147de45ca(longlong *param_1,int *param_2)

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



// FUNCTION 147de46b8 FUN_147de46b8 body=127 status=ok
// SIG undefined FUN_147de46b8(void)

undefined8 FUN_147de46b8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
     (iVar10 = FUN_147de4738(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x30) != 0) {
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
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147de4808(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 147de4738 FUN_147de4738 body=207 status=ok
// SIG undefined FUN_147de4738(void)

int FUN_147de4738(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_147de4782:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_147de47fc;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147de47fc;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147de47ed;
    }
  }
  return -1;
LAB_147de47fc:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147de47ed:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147de4782;
}



// FUNCTION 147de4808 FUN_147de4808 body=122 status=ok
// SIG undefined FUN_147de4808(void)

void FUN_147de4808(longlong *param_1,int param_2)

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



// FUNCTION 147de4882 FUN_147de4882 body=480 status=ok
// SIG undefined FUN_147de4882(void)

void FUN_147de4882(longlong *param_1)

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



// FUNCTION 147de4a64 FUN_147de4a64 body=302 status=ok
// SIG undefined FUN_147de4a64(void)

undefined4 * FUN_147de4a64(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147de4b94(param_1,local_48);
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar1;
  local_40[2] = uVar2;
  local_40[3] = uVar3;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_1448eb174(local_40,0x18,0);
  cVar4 = FUN_147de4c7a(param_1,uVar5,local_40,&local_4c);
  uVar1 = local_4c;
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
      local_40[7] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
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
      FUN_147de4dce(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147de4b94 FUN_147de4b94 body=229 status=ok
// SIG undefined FUN_147de4b94(void)

int * FUN_147de4b94(longlong *param_1,int *param_2)

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



// FUNCTION 147de4c7a FUN_147de4c7a body=93 status=ok
// SIG undefined FUN_147de4c7a(void)

undefined8 FUN_147de4c7a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147de4cd8(), iVar7 != -1)) {
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
    FUN_147de4d5c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147de4cd8 FUN_147de4cd8 body=131 status=ok
// SIG undefined FUN_147de4cd8(void)

int FUN_147de4cd8(longlong *param_1,uint param_2,double *param_3)

{
  double dVar1;
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
        lVar5 = (longlong)iVar2 * 0x20;
        if ((*(double *)(lVar3 + lVar5) == *param_3) &&
           (!NAN(*(double *)(lVar3 + lVar5)) && !NAN(*param_3))) {
          dVar1 = *(double *)(lVar3 + lVar5 + 8);
          if ((dVar1 == param_3[1]) && (!NAN(dVar1) && !NAN(param_3[1]))) {
            dVar1 = *(double *)(lVar3 + lVar5 + 0x10);
            if ((dVar1 == param_3[2]) && (!NAN(dVar1) && !NAN(param_3[2]))) {
              return iVar2;
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x18 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147de4d5c FUN_147de4d5c body=114 status=ok
// SIG undefined FUN_147de4d5c(void)

void FUN_147de4d5c(longlong *param_1,int param_2)

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



// FUNCTION 147de4dce FUN_147de4dce body=452 status=ok
// SIG undefined FUN_147de4dce(void)

void FUN_147de4dce(longlong *param_1)

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
        iVar6 = FUN_1448eb174(lVar3 + lVar10,0x18,0);
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



// FUNCTION 147de4f94 FUN_147de4f94 body=124 status=ok
// SIG undefined FUN_147de4f94(void)

void FUN_147de4f94(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_1400020a8();
  }
  FUN_147de5010(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  FUN_147de50c8(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de5010 FUN_147de5010 body=54 status=ok
// SIG undefined FUN_147de5010(void)

void FUN_147de5010(longlong *param_1)

{
  FUN_147de5046(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147de5046 FUN_147de5046 body=128 status=ok
// SIG undefined FUN_147de5046(void)

void FUN_147de5046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 147de50c8 FUN_147de50c8 body=54 status=ok
// SIG undefined FUN_147de50c8(void)

void FUN_147de50c8(longlong *param_1)

{
  FUN_147de50fe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


