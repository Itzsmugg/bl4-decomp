// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14906deb1 FUN_14906deb1 body=22 status=ok
// SIG undefined FUN_14906deb1(void)

void FUN_14906deb1(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14906dec8 FUN_14906dec8 body=147 status=ok
// SIG undefined FUN_14906dec8(void)

void FUN_14906dec8(longlong param_1,int param_2)

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



// FUNCTION 14906df5c FUN_14906df5c body=419 status=ok
// SIG undefined FUN_14906df5c(void)

void FUN_14906df5c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 14906e100 FUN_14906e100 body=291 status=ok
// SIG undefined FUN_14906e100(void)

undefined4 * FUN_14906e100(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14906e224(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_14906e30a(param_1,uVar4,local_40,&local_4c);
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
      local_40[9] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14906df5c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906e224 FUN_14906e224 body=230 status=ok
// SIG undefined FUN_14906e224(void)

int * FUN_14906e224(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14906e30a FUN_14906e30a body=138 status=ok
// SIG undefined FUN_14906e30a(void)

undefined8 FUN_14906e30a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14906e394(iVar2,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 14906e394 FUN_14906e394 body=114 status=ok
// SIG undefined FUN_14906e394(void)

void FUN_14906e394(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14906e406 FUN_14906e406 body=332 status=ok
// SIG undefined FUN_14906e406(void)

undefined4 *
FUN_14906e406(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14906e554(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14906e63a(param_1,uVar2,local_48);
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
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14906e754(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906e554 FUN_14906e554 body=229 status=ok
// SIG undefined FUN_14906e554(void)

int * FUN_14906e554(longlong *param_1,int *param_2)

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



// FUNCTION 14906e63a FUN_14906e63a body=144 status=ok
// SIG undefined FUN_14906e63a(void)

void FUN_14906e63a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14906e6ca(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14906e6a5;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14906e6a5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14906e6ca FUN_14906e6ca body=138 status=ok
// SIG undefined FUN_14906e6ca(void)

void FUN_14906e6ca(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14906e754 FUN_14906e754 body=477 status=ok
// SIG undefined FUN_14906e754(void)

void FUN_14906e754(longlong *param_1)

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



// FUNCTION 14906e932 FUN_14906e932 body=96 status=ok
// SIG undefined FUN_14906e932(void)

void FUN_14906e932(longlong *param_1,int param_2)

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
  FUN_14906e6ca(param_1,param_2,1);
  return;
}



// FUNCTION 14906ea8a FUN_14906ea8a body=8 status=ok
// SIG undefined FUN_14906ea8a(void)

longlong FUN_14906ea8a(longlong param_1)

{
  return param_1 + 0x88;
}



// FUNCTION 14906ea92 FUN_14906ea92 body=95 status=ok
// SIG undefined FUN_14906ea92(void)

undefined8 * FUN_14906ea92(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c7eb52(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149079056(param_1,iVar1);
      FUN_1490790c9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906eb0e FUN_14906eb0e body=89 status=ok
// SIG undefined FUN_14906eb0e(void)

undefined8 * FUN_14906eb0e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14907936c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 14906eb84 FUN_14906eb84 body=95 status=ok
// SIG undefined FUN_14906eb84(void)

undefined8 * FUN_14906eb84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c7ea76(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490793e0(param_1,iVar1);
      FUN_149079442(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906ec04 FUN_14906ec04 body=8 status=ok
// SIG undefined FUN_14906ec04(void)

longlong FUN_14906ec04(longlong param_1)

{
  return param_1 + 0xa8;
}



// FUNCTION 14906ec0c FUN_14906ec0c body=79 status=ok
// SIG undefined FUN_14906ec0c(void)

undefined8 * FUN_14906ec0c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490794be(param_1,iVar1);
      FUN_149079520(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906ec7c FUN_14906ec7c body=8 status=ok
// SIG undefined FUN_14906ec7c(void)

longlong FUN_14906ec7c(longlong param_1)

{
  return param_1 + 0x98;
}



// FUNCTION 14906ec84 FUN_14906ec84 body=95 status=ok
// SIG undefined FUN_14906ec84(void)

undefined8 * FUN_14906ec84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c7eb13(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149079580(param_1,iVar1);
      FUN_1490795e2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906ed00 FUN_14906ed00 body=5 status=ok
// SIG undefined FUN_14906ed00(void)

longlong FUN_14906ed00(longlong param_1)

{
  return param_1 + 0x58;
}



// FUNCTION 14906ed06 FUN_14906ed06 body=95 status=ok
// SIG undefined FUN_14906ed06(void)

undefined8 * FUN_14906ed06(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c7ea4b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490796d8(param_1,iVar1);
      FUN_14907974e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906ed82 FUN_14906ed82 body=5 status=ok
// SIG undefined FUN_14906ed82(void)

longlong FUN_14906ed82(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 14906ed88 FUN_14906ed88 body=79 status=ok
// SIG undefined FUN_14906ed88(void)

undefined8 * FUN_14906ed88(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14907999e(param_1,iVar1);
      FUN_149079a11(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14906ee0e FUN_14906ee0e body=187 status=ok
// SIG undefined FUN_14906ee0e(void)

void FUN_14906ee0e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14054c6c4(param_1 + 200,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906eece FUN_14906eece body=154 status=ok
// SIG undefined FUN_14906eece(void)

void FUN_14906eece(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0xb8) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906ef6e FUN_14906ef6e body=154 status=ok
// SIG undefined FUN_14906ef6e(void)

void FUN_14906ef6e(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0xb9) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f00a FUN_14906f00a body=198 status=ok
// SIG undefined FUN_14906f00a(void)

void FUN_14906f00a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14906ea92(param_1 + 0x88,plVar1);
  FUN_145c7eb52(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f0d2 FUN_14906f0d2 body=184 status=ok
// SIG undefined FUN_14906f0d2(void)

void FUN_14906f0d2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14906eb0e(param_1 + 0x68,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f18c FUN_14906f18c body=195 status=ok
// SIG undefined FUN_14906f18c(void)

void FUN_14906f18c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14906eb84(param_1 + 0x78,plVar1);
  FUN_145c7ea76(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f250 FUN_14906f250 body=187 status=ok
// SIG undefined FUN_14906f250(void)

void FUN_14906f250(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14906ec0c(param_1 + 0xa8,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f30c FUN_14906f30c body=198 status=ok
// SIG undefined FUN_14906f30c(void)

void FUN_14906f30c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14906ec84(param_1 + 0x98,plVar1);
  FUN_145c7eb13(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f3d4 FUN_14906f3d4 body=195 status=ok
// SIG undefined FUN_14906f3d4(void)

void FUN_14906f3d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14906ed06(param_1 + 0x58,plVar1);
  FUN_145c7ea4b(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f498 FUN_14906f498 body=184 status=ok
// SIG undefined FUN_14906f498(void)

void FUN_14906f498(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14906ed88(param_1 + 0x48,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f552 FUN_14906f552 body=149 status=ok
// SIG undefined FUN_14906f552(void)

void FUN_14906f552(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xba) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f5e8 FUN_14906f5e8 body=179 status=ok
// SIG undefined FUN_14906f5e8(void)

void FUN_14906f5e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0xc0) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14906f6bc FUN_14906f6bc body=31 status=ok
// SIG undefined FUN_14906f6bc(void)

void FUN_14906f6bc(undefined8 param_1)

{
  FUN_14440f35c();
  FUN_14440f4b1();
  FUN_144420f00(param_1);
  return;
}



// FUNCTION 14906f6dc FUN_14906f6dc body=421 status=ok
// SIG undefined FUN_14906f6dc(void)

int FUN_14906f6dc(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_50;
  undefined4 local_48;
  
  cVar1 = FUN_1427d88f0(param_1 + 0xf8);
  if (cVar1 == '\0') {
    local_48 = 0;
  }
  else {
    local_48 = FUN_1427d8864(param_1 + 0xf8);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x168);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1427d8864(param_1 + 0x168);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x1a0);
  if (cVar1 == '\0') {
    local_50 = 0;
  }
  else {
    local_50 = FUN_1427d8864(param_1 + 0x1a0);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x210);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1427d8864(param_1 + 0x210);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x1d8);
  if (cVar1 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_1427d8864(param_1 + 0x1d8);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x268);
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_1427d8864(param_1 + 0x268);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x2a0);
  iVar7 = 0;
  if (cVar1 == '\0') {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_1427d8864(param_1 + 0x2a0);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x360);
  if (cVar1 != '\0') {
    iVar7 = FUN_1427d8864(param_1 + 0x360);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x328);
  if (cVar1 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_1427d8864(param_1 + 0x328);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x398);
  if (cVar1 == '\0') {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_1427d8864(param_1 + 0x398);
  }
  return iVar9 + iVar8 + iVar6 + iVar5 + iVar7 + iVar4 + iVar3 + local_50 + iVar2 + local_48;
}



// FUNCTION 14906f882 FUN_14906f882 body=636 status=ok
// SIG undefined FUN_14906f882(void)

undefined4 * FUN_14906f882(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar4 = FUN_14906fafe(param_2);
  *param_1 = uVar4;
  uVar4 = FUN_14906f6dc(param_2 + 0x240);
  param_1[1] = uVar4;
  iVar6 = 0;
  iVar9 = 0;
  if ((longlong)*(int *)(param_2 + 0x628) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x620);
    lVar7 = (longlong)*(int *)(param_2 + 0x628) * 0x390;
    iVar9 = 0;
    do {
      iVar5 = FUN_1490744a2(lVar8);
      iVar9 = iVar9 + iVar5;
      lVar8 = lVar8 + 0x390;
      lVar7 = lVar7 + -0x390;
    } while (lVar7 != 0);
  }
  param_1[2] = iVar9;
  if ((longlong)*(int *)(param_2 + 0x638) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x630);
    lVar7 = 0;
    iVar6 = 0;
    do {
      iVar6 = (*(int *)(lVar8 + 0x2c + lVar7) + *(int *)(lVar8 + 0xc + lVar7)) * 0x10 + iVar6 +
              (*(int *)(lVar8 + 0x3c + lVar7) + *(int *)(lVar8 + 0x1c + lVar7)) * 4;
      lVar7 = lVar7 + 0x80;
    } while ((longlong)*(int *)(param_2 + 0x638) * 0x80 != lVar7);
  }
  param_1[3] = iVar6;
  iVar6 = 0;
  uVar4 = 0;
  if (*param_3 != 0) {
    uVar4 = FUN_14906fcbe();
  }
  param_1[4] = uVar4;
  uVar4 = FUN_14906fbcc();
  param_1[5] = uVar4;
  if ((longlong)(int)param_3[7] != 0) {
    lVar8 = (longlong)(int)param_3[7] * 0x30;
    iVar6 = 0;
    do {
      iVar9 = FUN_149074604();
      iVar6 = iVar6 + iVar9;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
  }
  param_1[6] = iVar6;
  if ((longlong)(int)param_3[9] == 0) {
    iVar6 = 0;
  }
  else {
    lVar8 = (longlong)(int)param_3[9] * 0x18;
    iVar6 = 0;
    do {
      iVar9 = FUN_1490746f4();
      iVar6 = iVar6 + iVar9;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  param_1[7] = iVar6;
  lVar8 = param_3[1];
  if (lVar8 != 0) {
    uVar4 = FUN_14906fcbe();
    param_1[8] = uVar4;
  }
  lVar7 = param_3[2];
  if (lVar7 != 0) {
    lVar1 = *(longlong *)(lVar7 + 0x50);
    iVar6 = 0;
    iVar9 = 0;
    if (lVar1 != 0) {
      iVar9 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    lVar1 = *(longlong *)(lVar7 + 0x70);
    if (lVar1 != 0) {
      iVar6 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    param_1[9] = iVar6 + iVar9;
  }
  lVar1 = param_3[3];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar6 = 0;
    iVar9 = 0;
    if (lVar2 != 0) {
      iVar9 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar2 = *(longlong *)(lVar1 + 0x70);
    if (lVar2 != 0) {
      iVar6 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar2 = *(longlong *)(lVar1 + 0x90);
    if (lVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    param_1[10] = iVar6 + iVar9 + iVar5;
  }
  lVar2 = param_3[4];
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x50);
    iVar6 = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      iVar9 = *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10);
    }
    lVar3 = *(longlong *)(lVar2 + 0x70);
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 0x10);
    }
    param_1[0xb] = iVar6 + iVar9;
  }
  if (lVar8 != 0) {
    param_1[0xc] = *(undefined4 *)(lVar8 + 0x48);
  }
  if (lVar7 != 0) {
    param_1[0xd] = *(undefined4 *)(lVar7 + 0x48);
  }
  if (lVar1 != 0) {
    param_1[0xe] = *(undefined4 *)(lVar1 + 0x48);
  }
  if (lVar2 != 0) {
    param_1[0xf] = *(undefined4 *)(lVar2 + 0x48);
  }
  return param_1;
}



// FUNCTION 14906fafe FUN_14906fafe body=206 status=ok
// SIG undefined FUN_14906fafe(void)

int FUN_14906fafe(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = FUN_1427d88f0(param_1 + 0xf8);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1427d8864(param_1 + 0xf8);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x168);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1427d8864(param_1 + 0x168);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x1a0);
  if (cVar1 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_1427d8864(param_1 + 0x1a0);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x210);
  if (cVar1 == '\0') {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_1427d8864(param_1 + 0x210);
  }
  cVar1 = FUN_1427d88f0(param_1 + 0x1d8);
  if (cVar1 == '\0') {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_1427d8864(param_1 + 0x1d8);
  }
  return iVar6 + iVar5 + iVar4 + iVar3 + iVar2;
}



// FUNCTION 14906fbcc FUN_14906fbcc body=241 status=ok
// SIG undefined FUN_14906fbcc(void)

ulonglong FUN_14906fbcc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    uVar3 = FUN_14906fcbe();
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar4 = 0;
    iVar5 = 0;
    if (lVar2 != 0) {
      iVar5 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    uVar3 = (ulonglong)(uint)(iVar5 + (int)uVar3 + iVar4);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar4 = 0;
    iVar5 = 0;
    if (lVar2 != 0) {
      iVar5 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar2 = *(longlong *)(lVar1 + 0x70);
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x90);
    if (lVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    uVar3 = (ulonglong)(uint)(iVar5 + (int)uVar3 + iVar4 + iVar6);
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar4 = 0;
    iVar5 = 0;
    if (lVar2 != 0) {
      iVar5 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    uVar3 = (ulonglong)(uint)(iVar5 + (int)uVar3 + iVar4);
  }
  return uVar3;
}



// FUNCTION 14906fcbe FUN_14906fcbe body=184 status=ok
// SIG undefined FUN_14906fcbe(void)

int FUN_14906fcbe(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar4 = 0;
  iVar5 = 0;
  if (lVar1 != 0) {
    iVar5 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    iVar4 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  iVar7 = 0;
  iVar6 = 0;
  if (lVar1 != 0) {
    iVar6 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    iVar7 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  iVar8 = 0;
  iVar2 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    iVar8 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  return iVar2 + iVar8 + iVar3 + iVar6 + iVar7 + iVar4 + iVar5;
}



// FUNCTION 14906fd76 FUN_14906fd76 body=126 status=ok
// SIG undefined FUN_14906fd76(void)

longlong * FUN_14906fd76(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_141167aa0();
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



// FUNCTION 14906fdf4 FUN_14906fdf4 body=8 status=ok
// SIG undefined FUN_14906fdf4(void)

longlong FUN_14906fdf4(longlong param_1)

{
  return param_1 + 0xf0;
}



// FUNCTION 14906fdfc FUN_14906fdfc body=491 status=ok
// SIG undefined FUN_14906fdfc(void)

void FUN_14906fdfc(int *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar6 = 0;
  iVar7 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = *param_2;
    lVar9 = (longlong)(int)param_2[1] * 0x1d8;
    iVar7 = 0;
    do {
      iVar2 = FUN_149099998(lVar8);
      iVar7 = iVar7 + iVar2;
      lVar8 = lVar8 + 0x1d8;
      lVar9 = lVar9 + -0x1d8;
    } while (lVar9 != 0);
  }
  *param_1 = iVar7;
  if ((longlong)(int)param_2[3] != 0) {
    lVar8 = param_2[2];
    lVar9 = (longlong)(int)param_2[3] * 0x1d8;
    iVar6 = 0;
    do {
      iVar7 = FUN_149099998(lVar8);
      iVar6 = iVar6 + iVar7;
      lVar8 = lVar8 + 0x1d8;
      lVar9 = lVar9 + -0x1d8;
    } while (lVar9 != 0);
  }
  param_1[1] = iVar6;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    lVar8 = plVar1[1];
    if ((longlong)(int)lVar8 == 0) {
      iVar6 = 0;
    }
    else {
      lVar9 = *plVar1;
      lVar10 = 0;
      iVar6 = 0;
      do {
        iVar7 = FUN_149074758(*(undefined8 *)(lVar9 + lVar10));
        iVar6 = iVar6 + iVar7;
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar10);
    }
    param_1[3] = iVar6;
  }
  plVar1 = (longlong *)param_3[1];
  if (plVar1 != (longlong *)0x0) {
    lVar8 = plVar1[1];
    if ((longlong)(int)lVar8 == 0) {
      iVar6 = 0;
    }
    else {
      lVar9 = *plVar1;
      lVar10 = 0;
      iVar6 = 0;
      do {
        iVar7 = FUN_149074758(*(undefined8 *)(lVar9 + lVar10));
        iVar6 = iVar6 + iVar7;
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar10);
    }
    param_1[4] = iVar6;
  }
  lVar8 = param_2[5];
  if ((int)lVar8 == 0) {
    iVar6 = 0;
    iVar7 = 0;
  }
  else {
    iVar2 = 0;
    iVar7 = 0;
    iVar6 = 0;
    do {
      lVar9 = (longlong)iVar2 * 0x10;
      lVar10 = (longlong)*(int *)(param_2[4] + 8 + lVar9);
      if (lVar10 != 0) {
        lVar9 = *(longlong *)(param_2[4] + lVar9);
        lVar10 = lVar10 * 0x1d8;
        do {
          iVar3 = FUN_149099998(lVar9);
          iVar7 = iVar7 + iVar3;
          lVar9 = lVar9 + 0x1d8;
          lVar10 = lVar10 + -0x1d8;
        } while (lVar10 != 0);
      }
      plVar1 = *(longlong **)(param_3[2] + (longlong)iVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar9 = plVar1[1];
        if ((longlong)(int)lVar9 == 0) {
          iVar3 = 0;
        }
        else {
          lVar10 = *plVar1;
          lVar5 = 0;
          iVar3 = 0;
          do {
            iVar4 = FUN_149074758(*(undefined8 *)(lVar10 + lVar5));
            iVar3 = iVar3 + iVar4;
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)lVar9 * 8 != lVar5);
        }
        iVar6 = iVar6 + iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != (int)lVar8);
  }
  param_1[2] = iVar7;
  param_1[5] = iVar6;
  return;
}



// FUNCTION 14906ffe8 FUN_14906ffe8 body=126 status=ok
// SIG undefined FUN_14906ffe8(void)

longlong * FUN_14906ffe8(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_141225dee();
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



// FUNCTION 149070066 FUN_149070066 body=662 status=ok
// SIG undefined FUN_149070066(void)

undefined8 * FUN_149070066(longlong param_1,undefined8 *param_2,undefined2 param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [38];
  undefined2 local_62;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = (ulonglong)*(int *)(param_1 + 0xf8);
  local_62 = param_3;
  local_60 = param_2;
  local_50 = param_2;
  if (0 < (longlong)local_58) {
    uVar3 = 0;
    do {
      uVar2 = 0xffffffff;
      if (0 < (longlong)*(int *)(param_1 + 0xb0)) {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
        uVar9 = 0;
        do {
          if (*plVar6 == *(longlong *)(*(longlong *)(param_1 + 0x48) + uVar3 * 0x30)) {
            uVar2 = uVar9 & 0xffffffff;
            break;
          }
          uVar9 = uVar9 + 1;
          plVar6 = plVar6 + 2;
        } while ((longlong)*(int *)(param_1 + 0xb0) != uVar9);
      }
      lVar4 = uVar3 * 0x690 + *(longlong *)(param_1 + 0xf0);
      FUN_14440f646(&local_50,uVar2);
      cVar1 = FUN_144b0f89b(1,local_62);
      if ((cVar1 != '\0') && ((longlong)*(int *)(lVar4 + 0x628) != 0)) {
        lVar11 = *(longlong *)(lVar4 + 0x620);
        lVar5 = (longlong)*(int *)(lVar4 + 0x628) * 0x390 + lVar11;
        iVar10 = 0;
LAB_149070168:
        if (0 < *(int *)(lVar11 + 0x28)) {
          uVar2 = 0xffffffff;
          if ((longlong)*(int *)(param_1 + 0x90) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x88);
            lVar7 = 0;
            do {
              if ((uVar3 == *(uint *)(lVar8 + 0x80 + lVar7)) &&
                 (*(int *)(lVar8 + 0x84 + lVar7) == iVar10)) {
                if (0 < (longlong)*(int *)(param_1 + 0xb0)) {
                  plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
                  uVar9 = 0;
                  goto LAB_1490701f6;
                }
                break;
              }
              lVar7 = lVar7 + 0xa0;
            } while ((longlong)*(int *)(param_1 + 0x90) * 0xa0 != lVar7);
          }
          goto LAB_1490701b5;
        }
        goto LAB_1490701c6;
      }
LAB_14907020e:
      if ((longlong)*(int *)(lVar4 + 0x638) != 0) {
        lVar11 = *(longlong *)(lVar4 + 0x630);
        lVar4 = (longlong)*(int *)(lVar4 + 0x638) * 0x80 + lVar11;
        iVar10 = 0;
LAB_14907022e:
        if (0 < *(int *)(lVar11 + 8)) {
          uVar2 = 0xffffffff;
          if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
            lVar5 = *(longlong *)(param_1 + 0x98);
            lVar8 = 0;
            do {
              if ((uVar3 == *(uint *)(lVar5 + 0x68 + lVar8)) &&
                 (*(int *)(lVar5 + 0x6c + lVar8) == iVar10)) {
                if (0 < (longlong)*(int *)(param_1 + 0xb0)) {
                  plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
                  uVar9 = 0;
                  goto LAB_1490702aa;
                }
                break;
              }
              lVar8 = lVar8 + 0x80;
            } while ((longlong)*(int *)(param_1 + 0xa0) * 0x80 != lVar8);
          }
          goto LAB_14907026d;
        }
        goto LAB_14907027e;
      }
LAB_1490702c2:
      uVar3 = uVar3 + 1;
    } while (uVar3 != local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_60;
  while( true ) {
    uVar9 = uVar9 + 1;
    plVar6 = plVar6 + 2;
    if ((longlong)*(int *)(param_1 + 0xb0) == uVar9) break;
LAB_1490701f6:
    if (*plVar6 == *(longlong *)(lVar8 + 8 + lVar7)) {
      uVar2 = uVar9 & 0xffffffff;
      break;
    }
  }
LAB_1490701b5:
  FUN_14440f646(&local_50,uVar2);
LAB_1490701c6:
  iVar10 = iVar10 + 1;
  lVar11 = lVar11 + 0x390;
  if (lVar11 == lVar5) goto LAB_14907020e;
  goto LAB_149070168;
  while( true ) {
    uVar9 = uVar9 + 1;
    plVar6 = plVar6 + 2;
    if ((longlong)*(int *)(param_1 + 0xb0) == uVar9) break;
LAB_1490702aa:
    if (*plVar6 == *(longlong *)(lVar5 + 8 + lVar8)) {
      uVar2 = uVar9 & 0xffffffff;
      break;
    }
  }
LAB_14907026d:
  FUN_14440f646(&local_50,uVar2);
LAB_14907027e:
  iVar10 = iVar10 + 1;
  lVar11 = lVar11 + 0x80;
  if (lVar11 == lVar4) goto LAB_1490702c2;
  goto LAB_14907022e;
}



// FUNCTION 1490702fe FUN_1490702fe body=54 status=ok
// SIG undefined FUN_1490702fe(void)

ulonglong FUN_1490702fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0xb0)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
    uVar2 = 0;
    do {
      if (*plVar1 == param_2) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 2;
    } while ((longlong)*(int *)(param_1 + 0xb0) != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 149070334 FUN_149070334 body=446 status=ok
// SIG undefined FUN_149070334(void)

void FUN_149070334(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_144b0f89b(0,0x9b);
  if (cVar3 != '\0') {
    local_68 = 0;
    iVar1 = *(int *)(param_1 + 0xf8);
    if (iVar1 != 0) {
      iVar7 = 0;
      do {
        lVar6 = (longlong)iVar7 * 0x690;
        if (*(int *)(*(longlong *)(param_1 + 0xf0) + 0x24c + lVar6) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xf0) + lVar6;
          lVar2 = *(longlong *)(param_1 + 0x100);
          lVar8 = (longlong)iVar7 * 0x58;
          puVar4 = (undefined8 *)FUN_14001cc68(0x158,0x10);
          *(undefined4 *)(puVar4 + 1) = 0xffffffff;
          *(undefined2 *)((longlong)puVar4 + 0xc) = 0x105;
          *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
          *(undefined2 *)(puVar4 + 2) = 1;
          *(undefined1 *)((longlong)puVar4 + 0x12) = 1;
          *(undefined8 *)((longlong)puVar4 + 0x14) = local_68;
          *(undefined4 *)(puVar4 + 8) = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          *(undefined1 *)((longlong)puVar4 + 0x44) = 1;
          *puVar4 = &PTR_FUN_14baa6180;
          *(undefined8 *)((longlong)puVar4 + 0x79) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x81) = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          *(undefined8 *)((longlong)puVar4 + 0x99) = 0;
          *(undefined8 *)((longlong)puVar4 + 0xa1) = 0;
          puVar4[0x12] = 0;
          puVar4[0x13] = 0;
          *(undefined8 *)((longlong)puVar4 + 0x119) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x121) = 0;
          puVar4[0x22] = 0;
          puVar4[0x23] = 0;
          puVar4[0x20] = 0;
          puVar4[0x21] = 0;
          puVar4[0x1e] = 0;
          puVar4[0x1f] = 0;
          puVar4[0x1c] = 0;
          puVar4[0x1d] = 0;
          puVar4[0x1a] = 0;
          puVar4[0x1b] = 0;
          puVar4[0x18] = 0;
          puVar4[0x19] = 0;
          puVar4[0x16] = 0;
          puVar4[0x17] = 0;
          puVar4[0x26] = lVar6 + 0x240;
          *(undefined1 *)(puVar4 + 0x27) = 1;
          *(undefined4 *)(puVar4 + 9) = 0;
          *(undefined4 *)(puVar4 + 0x2a) = 0;
          puVar4[0x28] = 0;
          puVar4[0x29] = 0;
          *(undefined8 **)(lVar2 + 8 + lVar8) = puVar4;
          uVar5 = FUN_14001cc68(0xb8,0x10);
          FUN_14908f8a8(uVar5,lVar6 + 0x510,&local_69,&local_68);
          *(undefined8 *)(lVar2 + 0x18 + lVar8) = uVar5;
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490704f4 FUN_1490704f4 body=100 status=ok
// SIG undefined FUN_1490704f4(void)

void FUN_1490704f4(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x108))) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    lVar2 = (ulonglong)param_2 * 0x58;
    FUN_149070629(lVar1 + lVar2 + 8,1);
    FUN_1490706c7(lVar1 + lVar2 + 0x18);
    FUN_149070761(lVar1 + lVar2 + 0x10,1);
    FUN_1490707ff(lVar1 + lVar2 + 0x20);
    return;
  }
  return;
}



// FUNCTION 149070558 FUN_149070558 body=121 status=ok
// SIG undefined FUN_149070558(void)

void FUN_149070558(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x108))) {
    lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x38 + (ulonglong)param_2 * 0x58);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x30 + (ulonglong)param_2 * 0x58);
      lVar1 = lVar1 * 0x30 + lVar2;
      do {
        FUN_14907088e(lVar2);
        FUN_14907091d(lVar2 + 8);
        FUN_149070629(lVar2 + 0x10,0);
        FUN_149070761(lVar2 + 0x18);
        FUN_1490707ff(lVar2 + 0x20);
        lVar2 = lVar2 + 0x30;
      } while (lVar2 != lVar1);
    }
  }
  return;
}



// FUNCTION 1490705d2 FUN_1490705d2 body=87 status=ok
// SIG undefined FUN_1490705d2(void)

void FUN_1490705d2(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x108))) {
    lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x48 + (ulonglong)param_2 * 0x58);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x40 + (ulonglong)param_2 * 0x58);
      lVar1 = lVar2 + lVar1 * 0x18;
      do {
        FUN_1490709ac(lVar2);
        FUN_1490707ff(lVar2 + 8);
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != lVar1);
    }
  }
  return;
}



// FUNCTION 149070629 FUN_149070629 body=157 status=ok
// SIG undefined FUN_149070629(void)

void FUN_149070629(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if (param_2 != '\0') {
      (**(code **)(*plVar1 + 0x58))(plVar1);
    }
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ba9b000;
    local_68[0] = FUN_149079c8c;
    local_40 = plVar1;
    FUN_144411f5a(local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar2 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar2 = &local_48;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    *param_1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490706c7 FUN_1490706c7 body=153 status=ok
// SIG undefined FUN_1490706c7(void)

void FUN_1490706c7(longlong *param_1)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ba9b050;
    local_68[0] = FUN_149079d98;
    local_40 = plVar1;
    FUN_144412762(local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar2 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar2 = &local_48;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    *param_1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149070761 FUN_149070761 body=157 status=ok
// SIG undefined FUN_149070761(void)

void FUN_149070761(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if (param_2 != '\0') {
      (**(code **)(*plVar1 + 0x58))(plVar1);
    }
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ba9b0a0;
    local_68[0] = FUN_149079ea4;
    local_40 = plVar1;
    FUN_144412f6a(local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar2 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar2 = &local_48;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    *param_1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490707ff FUN_1490707ff body=142 status=ok
// SIG undefined FUN_1490707ff(void)

void FUN_1490707ff(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14ba9b0f0;
    local_58[0] = FUN_149079fb0;
    local_30 = *param_1;
    FUN_144413772(local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907088e FUN_14907088e body=142 status=ok
// SIG undefined FUN_14907088e(void)

void FUN_14907088e(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14ba9b140;
    local_58[0] = FUN_14907a0bc;
    local_30 = *param_1;
    FUN_144413f7a(local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907091d FUN_14907091d body=142 status=ok
// SIG undefined FUN_14907091d(void)

void FUN_14907091d(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14ba9b190;
    local_58[0] = FUN_14907a1c8;
    local_30 = *param_1;
    FUN_144414782(local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490709ac FUN_1490709ac body=142 status=ok
// SIG undefined FUN_1490709ac(void)

void FUN_1490709ac(longlong *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14ba9b1e0;
    local_58[0] = FUN_14907a2d4;
    local_30 = *param_1;
    FUN_144414f8a(local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149070a3c FUN_149070a3c body=180 status=ok
// SIG undefined FUN_149070a3c(void)

void FUN_149070a3c(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0xf8);
  FUN_149070af6((longlong *)(param_1 + 0x38));
  iVar3 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xf0);
    lVar6 = 0;
    iVar7 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x38);
      lVar8 = (longlong)iVar7 * 0x40;
      *(int *)(lVar5 + lVar8) = iVar7;
      *(undefined4 *)(lVar5 + 0xc + lVar8) = *(undefined4 *)(lVar4 + 0x248 + lVar6);
      *(undefined4 *)(lVar5 + 0x10 + lVar8) = *(undefined4 *)(lVar4 + 8 + lVar6);
      *(undefined4 *)(lVar5 + 0x14 + lVar8) = *(undefined4 *)(lVar4 + 0x24c + lVar6);
      *(undefined4 *)(lVar5 + 0x18 + lVar8) = *(undefined4 *)(lVar4 + 0xc + lVar6);
      *(undefined4 *)(lVar5 + 0x1c + lVar8) = *(undefined4 *)(lVar4 + 0x25c + lVar6);
      if (iVar1 != iVar2) {
        *(undefined1 *)(lVar5 + lVar8 + 0x38) = 1;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x690;
    } while ((longlong)iVar3 * 0x690 - lVar6 != 0);
  }
  return;
}



// FUNCTION 149070af0 FUN_149070af0 body=5 status=ok
// SIG undefined FUN_149070af0(void)

longlong FUN_149070af0(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 149070af6 FUN_149070af6 body=121 status=ok
// SIG undefined FUN_149070af6(void)

void FUN_149070af6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14907a362(param_1,iVar1);
    }
    FUN_14907a33b((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14907a3e8(param_1,param_2,iVar1 - param_2);
    FUN_14907a442(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149070b70 FUN_149070b70 body=179 status=ok
// SIG undefined FUN_149070b70(void)

undefined8 FUN_149070b70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong)(int)param_1[1] == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = (longlong *)*param_1;
    plVar6 = plVar5 + (longlong)(int)param_1[1] * 6;
    uVar3 = 0;
    do {
      if (plVar5[1] != 0) {
        lVar1 = *(longlong *)(plVar5[1] + 0x18);
        if ((longlong)(int)param_2[1] != 0) {
          lVar4 = 0;
          do {
            if (*(longlong *)(*param_2 + 8 + lVar4) == lVar1) goto LAB_149070bf0;
            lVar4 = lVar4 + 0x10;
          } while ((longlong)(int)param_2[1] * 0x10 != lVar4);
        }
        plVar2 = (longlong *)FUN_14907a570(param_2);
        lVar4 = plVar5[1];
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = plVar5[1];
          }
        }
        *plVar2 = lVar4;
        plVar2[1] = lVar1;
LAB_149070bf0:
        *plVar5 = lVar1;
        plVar5[1] = 0;
        uVar3 = 1;
      }
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar6);
  }
  return uVar3;
}



// FUNCTION 149070c23 FUN_149070c23 body=179 status=ok
// SIG undefined FUN_149070c23(void)

undefined8 FUN_149070c23(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar5 = (longlong *)*param_1;
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 1) * 0x14;
    uVar3 = 0;
    do {
      if (*plVar5 != 0) {
        lVar1 = *(longlong *)(*plVar5 + 0x18);
        if ((longlong)(int)param_2[1] != 0) {
          lVar4 = 0;
          do {
            if (*(longlong *)(*param_2 + 8 + lVar4) == lVar1) goto LAB_149070ca1;
            lVar4 = lVar4 + 0x10;
          } while ((longlong)(int)param_2[1] * 0x10 != lVar4);
        }
        plVar2 = (longlong *)FUN_14907a570(param_2);
        lVar4 = *plVar5;
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *plVar5;
          }
        }
        *plVar2 = lVar4;
        plVar2[1] = lVar1;
LAB_149070ca1:
        plVar5[1] = lVar1;
        *plVar5 = 0;
        uVar3 = 1;
      }
      plVar5 = plVar5 + 0x14;
    } while (plVar5 != plVar6);
  }
  return uVar3;
}



// FUNCTION 149070cd6 FUN_149070cd6 body=172 status=ok
// SIG undefined FUN_149070cd6(void)

undefined8 FUN_149070cd6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar6 = (longlong *)*param_1;
    plVar5 = plVar6 + (longlong)*(int *)(param_1 + 1) * 0x10;
    uVar3 = 0;
    do {
      if (*plVar6 != 0) {
        lVar1 = *(longlong *)(*plVar6 + 0x18);
        if ((longlong)(int)param_2[1] != 0) {
          lVar4 = 0;
          do {
            if (*(longlong *)(*param_2 + 8 + lVar4) == lVar1) goto LAB_149070d50;
            lVar4 = lVar4 + 0x10;
          } while ((longlong)(int)param_2[1] * 0x10 != lVar4);
        }
        plVar2 = (longlong *)FUN_14907a570(param_2);
        lVar4 = *plVar6;
        if (DAT_14c950c29 == '\x01') {
          if (lVar4 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar4 = *plVar6;
          }
        }
        *plVar2 = lVar4;
        plVar2[1] = lVar1;
LAB_149070d50:
        plVar6[1] = lVar1;
        *plVar6 = 0;
        uVar3 = 1;
      }
      plVar6 = plVar6 + 0x10;
    } while (plVar6 != plVar5);
  }
  return uVar3;
}



// FUNCTION 149070d82 FUN_149070d82 body=86 status=ok
// SIG undefined FUN_149070d82(void)

void FUN_149070d82(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  FUN_14907a638(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14907a7b0(param_1,iVar1);
      }
      FUN_14907a6ea((longlong)iVar1 * 0x58 + *param_1,param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149070dd8 FUN_149070dd8 body=504 status=ok
// SIG undefined FUN_149070dd8(void)

void FUN_149070dd8(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x20);
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x2e8;
    do {
      if (*(char *)((longlong)plVar5 + -0x1f) == '\x02') {
        uVar3 = FUN_14018d992();
        pwVar6 = L"/HairStrands/Emitters/StableRodsSystem.StableRodsSystem";
LAB_149070e8f:
        local_90 = 0;
        local_98 = 1;
        local_a0 = 0;
        local_a8 = 0;
        lVar4 = FUN_1412ecd05(uVar3,0,pwVar6,0);
        if (lVar4 == 0) {
          plVar5[-3] = 0;
          plVar5[-2] = 0;
          plVar5[-1] = 0;
          *(undefined4 *)(plVar5 + 1) = 0;
          if (*(int *)((longlong)plVar5 + 0xc) < 0) {
            FUN_1446f8c06(plVar5);
          }
          if ((undefined2 *)*plVar5 != (undefined2 *)0x0) {
            *(undefined2 *)*plVar5 = 0;
          }
        }
        else {
          FUN_1400bbfae(&local_80);
          *(undefined4 *)(plVar5 + -2) = local_80;
          *(undefined4 *)((longlong)plVar5 + -0xc) = uStack_7c;
          *(undefined4 *)(plVar5 + -1) = uStack_78;
          *(undefined4 *)((longlong)plVar5 + -4) = uStack_74;
          if (plVar5 + -2 == (longlong *)&local_80) {
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*plVar5 != 0) {
              FUN_1400020a8();
            }
            *plVar5 = local_70;
            local_70 = 0;
            *(undefined4 *)(plVar5 + 1) = local_68;
            *(undefined4 *)((longlong)plVar5 + 0xc) = local_64;
          }
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if (cVar2 != '\0') {
            uVar1 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
              plVar5[-3] = 0;
              goto LAB_149070f8d;
            }
          }
          FUN_14485c47a(plVar5 + -3);
        }
      }
      else if (*(char *)((longlong)plVar5 + -0x1f) == '\x04') {
        uVar3 = FUN_14018d992();
        pwVar6 = L"/HairStrands/Emitters/StableSpringsSystem.StableSpringsSystem";
        goto LAB_149070e8f;
      }
LAB_149070f8d:
      plVar5 = plVar5 + 0x5d;
      lVar7 = lVar7 + -0x2e8;
    } while (lVar7 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149070fd2 FUN_149070fd2 body=269 status=ok
// SIG undefined FUN_149070fd2(void)

void FUN_149070fd2(longlong *param_1,longlong param_2)

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
      FUN_1474be378(param_1 + 0x1d);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x1e];
    *(uint *)(param_1 + 0x1e) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x1d,iVar1);
    }
    *(longlong *)(param_1[0x1d] + (longlong)iVar1 * 8) = param_2;
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



// FUNCTION 1490710e0 FUN_1490710e0 body=181 status=ok
// SIG undefined FUN_1490710e0(void)

longlong FUN_1490710e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0xf0)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_149071129:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_14907114b;
        }
        else {
          if (lVar3 != 0) goto LAB_149071129;
LAB_14907114b:
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
    } while (lVar4 < *(int *)(param_1 + 0xf0));
  }
  return 0;
}



// FUNCTION 149071196 FUN_149071196 body=281 status=ok
// SIG undefined FUN_149071196(void)

void FUN_149071196(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0xf0);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_1490711e9:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_14907120b;
        }
        else {
          if (lVar5 != 0) goto LAB_1490711e9;
LAB_14907120b:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0xf0);
        }
        else {
          iVar3 = *(int *)(param_1 + 0xf0);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0xe8) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0xe8) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0xf0);
            }
            *(int *)(param_1 + 0xf0) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0xe8));
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



// FUNCTION 1490712b8 FUN_1490712b8 body=5 status=ok
// SIG undefined FUN_1490712b8(void)

longlong FUN_1490712b8(longlong param_1)

{
  return param_1 + 0x58;
}



// FUNCTION 1490712be FUN_1490712be body=304 status=ok
// SIG undefined FUN_1490712be(void)

undefined8 * FUN_1490712be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba97db0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = DAT_14c846358;
  param_1[0x16] = DAT_14c846350;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_14c846350;
  *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_14c846358;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_149074d84(param_1 + 0x1e);
  FUN_149074b38(param_1 + 0x48);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 0xc9) = DAT_14c846338;
  param_1[200] = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x654) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x64c) = DAT_14c846330;
  param_1[0xcb] = DAT_14c9a5298;
  *(undefined4 *)(param_1 + 0xcc) = DAT_14c9a52a0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  return param_1;
}



// FUNCTION 1490713ee FUN_1490713ee body=198 status=ok
// SIG undefined FUN_1490713ee(void)

void FUN_1490713ee(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FUN_1400020a8();
  }
  FUN_149075712(*(undefined8 *)(param_1 + 0x630),*(undefined4 *)(param_1 + 0x638));
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_1400020a8();
  }
  FUN_1490753f4(*(undefined8 *)(param_1 + 0x620),*(undefined4 *)(param_1 + 0x628));
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FUN_1400020a8();
  }
  FUN_149075034(param_1 + 0x510);
  *(undefined ***)(param_1 + 0x480) = &PTR_FUN_14ba97de0;
  FUN_1400ea36e(param_1 + 0x4e0,param_1 + 0x4e0);
  FUN_1400ea36e(param_1 + 0x4a8,param_1 + 0x4a8);
  FUN_149074f1c(param_1 + 0x240);
  FUN_149074f1c(param_1);
  return;
}



// FUNCTION 1490714b4 FUN_1490714b4 body=467 status=ok
// SIG undefined FUN_1490714b4(void)

undefined2 * FUN_1490714b4(undefined2 *param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238 [6];
  undefined8 local_232;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined6 uStack_220;
  longlong local_1b8;
  undefined1 local_1a0 [152];
  undefined1 local_108 [168];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  *param_1 = 0x400;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 5;
  *(undefined8 *)(param_1 + 0x18) = 0x500000000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xc08ea80000000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_149072512(param_1 + 0x3c);
  FUN_149072762(param_1 + 0x128);
  uStack_222 = 0;
  uStack_220 = 0;
  local_232 = 0;
  uStack_22a = 0;
  uStack_228 = 0;
  *param_1 = 0x400;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 5;
  *(undefined4 *)(param_1 + 0x1c) = 5;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xc08ea80000000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_149072512(local_238);
  FUN_14907264c(param_1 + 0x3c,local_238);
  FUN_1490726a8(param_1 + 0x88,local_1a0);
  FUN_149072704(param_1 + 0xd4,local_108);
  FUN_14907288c(local_238);
  FUN_149072762(local_238);
  FUN_149072926(param_1 + 0x128,local_238);
  uStack_228 = 0x14a176f00;
  uStack_222 = 0;
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  uStack_228 = 0x14a177080;
  uStack_222 = 0;
  FUN_144a78a1a();
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149071688 FUN_149071688 body=100 status=ok
// SIG undefined FUN_149071688(void)

void FUN_149071688(longlong param_1)

{
  *(undefined **)(param_1 + 0x260) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x260) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x268);
  FUN_14907288c(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149071720 FUN_149071720 body=287 status=ok
// SIG undefined FUN_149071720(void)

undefined8 * FUN_149071720(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xf8))) {
    lVar1 = *(longlong *)(param_1 + 0xf0);
    lVar3 = (ulonglong)param_2 * 0x690;
    if (*(int *)(lVar1 + 0xc + lVar3) != 0) {
      plVar4 = (longlong *)((ulonglong)param_2 * 0x58 + *(longlong *)(param_1 + 0x100));
      puVar2 = (undefined8 *)*plVar4;
      if (puVar2 != (undefined8 *)0x0) {
        return puVar2;
      }
      puVar2 = (undefined8 *)FUN_14001cc68(0x158,0x10);
      *(undefined4 *)(puVar2 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar2 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
      *(undefined2 *)(puVar2 + 2) = 1;
      *(undefined1 *)((longlong)puVar2 + 0x12) = 1;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x44) = 1;
      *puVar2 = &PTR_FUN_14baa6180;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x79) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x81) = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x99) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xa1) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x119) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x121) = 0;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0;
      puVar2[0x20] = 0;
      puVar2[0x21] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x1f] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x26] = lVar1 + lVar3;
      *(undefined1 *)(puVar2 + 0x27) = 0;
      *(undefined4 *)(puVar2 + 9) = 0;
      *(undefined4 *)(puVar2 + 0x2a) = 0;
      puVar2[0x28] = 0;
      puVar2[0x29] = 0;
      *plVar4 = (longlong)puVar2;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 149071840 FUN_149071840 body=213 status=ok
// SIG undefined FUN_149071840(void)

undefined8 * FUN_149071840(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xf8) <= (int)param_2)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x100);
    lVar4 = (ulonglong)param_2 * 0x58;
    puVar3 = *(undefined8 **)(lVar1 + 0x10 + lVar4);
    if (puVar3 == (undefined8 *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0xf0);
      puVar3 = (undefined8 *)FUN_14001cc68(0x98,0x10);
      *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar3 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
      *(undefined2 *)(puVar3 + 2) = 1;
      *(undefined1 *)((longlong)puVar3 + 0x12) = 1;
      *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x44) = 1;
      *puVar3 = &PTR_FUN_14baa88d0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = (ulonglong)param_2 * 0x690 + lVar2 + 0x480;
      *(undefined4 *)(puVar3 + 9) = 0;
      *(undefined8 **)(lVar1 + lVar4 + 0x10) = puVar3;
    }
  }
  return puVar3;
}



// FUNCTION 149071916 FUN_149071916 body=249 status=ok
// SIG undefined FUN_149071916(void)

longlong FUN_149071916(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144b1ce18();
  if ((((cVar3 == '\0') || ((int)param_2 < 0)) || (*(int *)(param_1 + 0x80) <= (int)param_2)) ||
     (((int)param_3 < 0 ||
      (uVar4 = (ulonglong)param_2,
      *(int *)(*(longlong *)(param_1 + 0x78) + 8 + uVar4 * 0x10) <= (int)param_3)))) {
    lVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x30 + uVar4 * 0x58);
    lVar6 = (ulonglong)param_3 * 0x30;
    lVar5 = *(longlong *)(lVar1 + 0x20 + lVar6);
    if (lVar5 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x620 + uVar4 * 0x690);
      lVar5 = FUN_14001cc68(0x150,0x10);
      local_28 = 0;
      FUN_149091e62(lVar5,(ulonglong)param_3 * 0x390 + lVar2,&local_29);
      *(longlong *)(lVar1 + lVar6 + 0x20) = lVar5;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149071a10 FUN_149071a10 body=246 status=ok
// SIG undefined FUN_149071a10(void)

longlong FUN_149071a10(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar6 = (ulonglong)param_3;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144b1ce18();
  if ((((cVar3 == '\0') || ((int)param_2 < 0)) || (*(int *)(param_1 + 0x80) <= (int)param_2)) ||
     (((int)param_3 < 0 ||
      (uVar4 = (ulonglong)param_2,
      *(int *)(*(longlong *)(param_1 + 0x78) + 8 + uVar4 * 0x10) <= (int)param_3)))) {
    lVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x40 + uVar4 * 0x58);
    lVar5 = *(longlong *)(lVar1 + 8 + uVar6 * 0x18);
    if (lVar5 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x630 + uVar4 * 0x690);
      lVar5 = FUN_14001cc68(0x150,0x10);
      local_30 = 0;
      FUN_149091f02(lVar5,uVar6 * 0x80 + lVar2,&local_31);
      *(longlong *)(lVar1 + uVar6 * 0x18 + 8) = lVar5;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149071b08 FUN_149071b08 body=191 status=ok
// SIG undefined FUN_149071b08(void)

longlong FUN_149071b08(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144b1ce18();
  if (((cVar3 == '\0') || ((int)param_2 < 0)) || (*(int *)(param_1 + 0xf8) <= (int)param_2)) {
    lVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x100);
    lVar5 = (ulonglong)param_2 * 0x58;
    lVar4 = *(longlong *)(lVar1 + 0x20 + lVar5);
    if (lVar4 == 0) {
      lVar2 = *(longlong *)(param_1 + 0xf0);
      lVar4 = FUN_14001cc68(0x150,0x10);
      local_30 = 0;
      FUN_149091da0(lVar4,lVar2 + (ulonglong)param_2 * 0x690 + 0x240,&local_31);
      *(longlong *)(lVar1 + lVar5 + 0x20) = lVar4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149071bc8 FUN_149071bc8 body=110 status=ok
// SIG undefined FUN_149071bc8(void)

void FUN_149071bc8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14907ad1e(param_1,iVar1);
    }
    FUN_14907ad03((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14907adb2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149071c38 FUN_149071c38 body=110 status=ok
// SIG undefined FUN_149071c38(void)

void FUN_149071c38(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14907ae78(param_1,iVar1);
    }
    FUN_14907ae60((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14907af0c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149071ca8 FUN_149071ca8 body=152 status=ok
// SIG undefined FUN_149071ca8(void)

ulonglong FUN_149071ca8(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  lVar1 = DAT_14c9d23d8;
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x80))) && (-1 < (int)param_3)) &&
     ((int)param_3 < *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (ulonglong)param_2 * 0x10))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    if (0 < *(int *)(lVar1 + uVar3 * 4)) {
      uVar4 = CONCAT71(uVar5,*(undefined1 *)
                              (*(longlong *)
                                (*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x10) + 0x16 +
                              (ulonglong)param_3 * 0x1c));
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149071d40 FUN_149071d40 body=144 status=ok
// SIG undefined FUN_149071d40(void)

undefined8 FUN_149071d40(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x80))) {
    lVar2 = (ulonglong)param_2 * 0x10;
    if (((int)param_3 < *(int *)(*(longlong *)(param_1 + 0x78) + 8 + lVar2)) &&
       (cVar1 = FUN_14716d37c(), cVar1 != '\0')) {
      if ((int)param_3 < 0) {
LAB_149071db0:
        return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                        *(undefined1 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)param_2 * 0x2e8))
        ;
      }
      if (param_3 <= DAT_14c7649c4) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar2);
        if (*(char *)(lVar2 + 0x14 + (ulonglong)param_3 * 0x1c) == '\x01') {
          cVar1 = *(char *)(lVar2 + (ulonglong)param_3 * 0x1c + 0x17);
          if (cVar1 == '\x01') {
            return 1;
          }
          if (cVar1 == '\0') goto LAB_149071db0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 149071dd0 FUN_149071dd0 body=82 status=ok
// SIG undefined FUN_149071dd0(void)

undefined1 FUN_149071dd0(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x80))) && (-1 < (int)param_3)) {
    if ((int)param_3 < *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (ulonglong)param_2 * 0x10)) {
      cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x10) +
                        0x18 + (ulonglong)param_3 * 0x1c);
      if (cVar1 == '\x01') {
        return 1;
      }
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return *(undefined1 *)(param_1 + 0xb8);
}



// FUNCTION 149071e22 FUN_149071e22 body=107 status=ok
// SIG undefined FUN_149071e22(void)

longlong * FUN_149071e22(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    lVar4 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + 8 + lVar4);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return param_2;
}



// FUNCTION 149071e8e FUN_149071e8e body=643 status=ok
// SIG undefined FUN_149071e8e(void)

void FUN_149071e8e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x54) * 0x30);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 100) * 0x2e8);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x74) * 0x28);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x84) << 4);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x94) * 0xa0);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xa4) << 7);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xb4) << 4);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xfc) * 0x690);
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
    lVar9 = (longlong)*(int *)(param_1 + 0xf8) * 0x690 + lVar3;
    do {
      uVar1 = FUN_14906fafe(lVar3);
      FUN_14484255c(param_2,uVar1);
      uVar1 = FUN_14906f6dc(lVar3 + 0x240);
      FUN_14484255c(param_2,uVar1);
      iVar5 = 0;
      if ((longlong)*(int *)(lVar3 + 0x628) != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x620);
        lVar6 = (longlong)*(int *)(lVar3 + 0x628) * 0x390;
        do {
          FUN_1490744a2(lVar7);
          lVar7 = lVar7 + 0x390;
          lVar6 = lVar6 + -0x390;
        } while (lVar6 != 0);
      }
      FUN_14484255c(param_2);
      if ((longlong)*(int *)(lVar3 + 0x638) != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x630);
        lVar6 = 0;
        iVar5 = 0;
        do {
          iVar5 = (*(int *)(lVar7 + 0x2c + lVar6) + *(int *)(lVar7 + 0xc + lVar6)) * 0x10 + iVar5 +
                  (*(int *)(lVar7 + 0x3c + lVar6) + *(int *)(lVar7 + 0x1c + lVar6)) * 4;
          lVar6 = lVar6 + 0x80;
        } while ((longlong)*(int *)(lVar3 + 0x638) * 0x80 != lVar6);
      }
      FUN_14484255c(param_2,iVar5);
      lVar3 = lVar3 + 0x690;
    } while (lVar3 != lVar9);
  }
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x100);
    plVar8 = plVar4 + (longlong)*(int *)(param_1 + 0x108) * 0xb;
    do {
      iVar5 = 0;
      uVar1 = 0;
      if (*plVar4 != 0) {
        uVar1 = FUN_14906fcbe();
      }
      FUN_146820164(param_2,uVar1);
      uVar1 = FUN_14906fbcc(plVar4 + 1);
      FUN_146820164(param_2,uVar1);
      if ((longlong)(int)plVar4[7] != 0) {
        lVar3 = plVar4[6];
        lVar9 = (longlong)(int)plVar4[7] * 0x30;
        iVar5 = 0;
        do {
          iVar2 = FUN_149074604(lVar3);
          iVar5 = iVar5 + iVar2;
          lVar3 = lVar3 + 0x30;
          lVar9 = lVar9 + -0x30;
        } while (lVar9 != 0);
      }
      FUN_146820164(param_2,iVar5);
      if ((longlong)(int)plVar4[9] == 0) {
        iVar5 = 0;
      }
      else {
        lVar3 = plVar4[8];
        lVar9 = (longlong)(int)plVar4[9] * 0x18;
        iVar5 = 0;
        do {
          iVar2 = FUN_1490746f4(lVar3);
          iVar5 = iVar5 + iVar2;
          lVar3 = lVar3 + 0x18;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
      }
      FUN_146820164(param_2,iVar5);
      plVar4 = plVar4 + 0xb;
    } while (plVar4 != plVar8);
  }
  return;
}



// FUNCTION 14907217c FUN_14907217c body=291 status=ok
// SIG undefined FUN_14907217c(void)

undefined2 * FUN_14907217c(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = param_1 + 8;
  FUN_14109baa4(puVar1);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0x3c23d70a3ba3d70a;
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_58);
  local_70 = local_58;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_54,0,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_54,2);
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_60);
  local_70 = local_60;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_5c,0x3f800000,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_5c,2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490722a0 FUN_1490722a0 body=291 status=ok
// SIG undefined FUN_1490722a0(void)

undefined2 * FUN_1490722a0(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = param_1 + 8;
  FUN_14109baa4(puVar1);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0x3f8000003ba3d70a;
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_58);
  local_70 = local_58;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_54,0,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_54,2);
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_60);
  local_70 = local_60;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_5c,0x3f800000,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_5c,2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490723c4 FUN_1490723c4 body=333 status=ok
// SIG undefined FUN_1490723c4(void)

undefined1 * FUN_1490723c4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = param_1 + 0x20;
  FUN_14109baa4(puVar1);
  *param_1 = 1;
  param_1[1] = 1;
  *(undefined8 *)(param_1 + 4) = 0x3dcccccd3dcccccd;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10) = 0x1e0000001e;
  *(undefined8 *)(param_1 + 0x18) = 0x3dcccccd0000001e;
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_58);
  local_70 = local_58;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_54,0,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_54,2);
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_60);
  local_70 = local_60;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_5c,0x3f800000,0x3dcccccd);
  thunk_FUN_14045d156(uVar2,local_5c,2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072512 FUN_149072512 body=312 status=ok
// SIG undefined FUN_149072512(void)

longlong FUN_149072512(longlong param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  undefined **local_d8;
  undefined1 local_d0 [8];
  undefined **local_c8;
  longlong local_68;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14907217c();
  FUN_1490722a0(param_1 + 0x98);
  FUN_1490723c4(param_1 + 0x130);
  FUN_14907217c(local_e8);
  FUN_14907264c(param_1,local_e8);
  local_d8 = (undefined **)&DAT_14a176f00;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_d8 = &PTR_FUN_14a177080;
  FUN_144a78a1a(local_d0);
  FUN_1490722a0(local_e8);
  FUN_1490726a8(param_1 + 0x98,local_e8);
  local_d8 = (undefined **)&DAT_14a176f00;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_d8 = &PTR_FUN_14a177080;
  FUN_144a78a1a(local_d0);
  FUN_1490723c4(local_e8);
  FUN_149072704(param_1 + 0x130,local_e8);
  local_c8 = (undefined **)&DAT_14a176f00;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_c8 = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907264c FUN_14907264c body=91 status=ok
// SIG undefined FUN_14907264c(void)

undefined8 * FUN_14907264c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14599ef06(param_1 + 2,param_2 + 2);
  lVar1 = param_2[0x12];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[0x12];
    }
  }
  param_1[0x12] = lVar1;
  return param_1;
}



// FUNCTION 1490726a8 FUN_1490726a8 body=91 status=ok
// SIG undefined FUN_1490726a8(void)

undefined8 * FUN_1490726a8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_14599ef06(param_1 + 2,param_2 + 2);
  lVar1 = param_2[0x12];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[0x12];
    }
  }
  param_1[0x12] = lVar1;
  return param_1;
}



// FUNCTION 149072704 FUN_149072704 body=93 status=ok
// SIG undefined FUN_149072704(void)

undefined4 * FUN_149072704(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_14599ef06(param_1 + 8,param_2 + 8);
  lVar8 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar8;
  return param_1;
}



// FUNCTION 149072762 FUN_149072762 body=296 status=ok
// SIG undefined FUN_149072762(void)

undefined1 * FUN_149072762(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = param_1 + 0x10;
  FUN_14109baa4(puVar1);
  *param_1 = 8;
  *(undefined8 *)(param_1 + 4) = 0x3dcccccd3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3c23d70a;
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_58);
  local_70 = local_58;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_54,0,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_54,2);
  uVar2 = FUN_1414cd6fa(puVar1);
  uVar3 = FUN_1414cd6fa(puVar1);
  FUN_14045d416(&local_60);
  local_70 = local_60;
  local_78 = 0;
  FUN_1406507bc(uVar3,&local_5c,0x3f800000,0x3f800000);
  thunk_FUN_14045d156(uVar2,local_5c,2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907288c FUN_14907288c body=154 status=ok
// SIG undefined FUN_14907288c(void)

void FUN_14907288c(longlong param_1)

{
  *(undefined **)(param_1 + 0x150) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x158);
  *(undefined **)(param_1 + 0xa8) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0xa8) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xb0);
  *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x18);
  return;
}



// FUNCTION 149072926 FUN_149072926 body=85 status=ok
// SIG undefined FUN_149072926(void)

undefined4 * FUN_149072926(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14599ef06(param_1 + 4,param_2 + 4);
  lVar4 = *(longlong *)(param_2 + 0x24);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x24);
    }
  }
  *(longlong *)(param_1 + 0x24) = lVar4;
  return param_1;
}



// FUNCTION 1490729e4 FUN_1490729e4 body=88 status=ok
// SIG undefined FUN_1490729e4(void)

undefined8 * FUN_1490729e4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14907afba(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 149072a9c FUN_149072a9c body=5 status=ok
// SIG undefined FUN_149072a9c(void)

undefined8 FUN_149072a9c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 149072ad2 FUN_149072ad2 body=5 status=ok
// SIG undefined FUN_149072ad2(void)

undefined8 FUN_149072ad2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 149072ad8 FUN_149072ad8 body=182 status=ok
// SIG undefined FUN_149072ad8(void)

void FUN_149072ad8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x38) != local_20) {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    *(longlong *)(param_1 + 0x38) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072b90 FUN_149072b90 body=146 status=ok
// SIG undefined FUN_149072b90(void)

void FUN_149072b90(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x30) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072c24 FUN_149072c24 body=184 status=ok
// SIG undefined FUN_149072c24(void)

void FUN_149072c24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1490729e4(param_1 + 0x68,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072cde FUN_149072cde body=149 status=ok
// SIG undefined FUN_149072cde(void)

void FUN_149072cde(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 100) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072d74 FUN_149072d74 body=149 status=ok
// SIG undefined FUN_149072d74(void)

void FUN_149072d74(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x60) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072e0a FUN_149072e0a body=176 status=ok
// SIG undefined FUN_149072e0a(void)

void FUN_149072e0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0x50) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072ebc FUN_149072ebc body=182 status=ok
// SIG undefined FUN_149072ebc(void)

void FUN_149072ebc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x40) != local_20) {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    *(longlong *)(param_1 + 0x40) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149072f74 FUN_149072f74 body=176 status=ok
// SIG undefined FUN_149072f74(void)

void FUN_149072f74(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149073026 FUN_149073026 body=182 status=ok
// SIG undefined FUN_149073026(void)

void FUN_149073026(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
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
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x48) != local_20) {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    *(longlong *)(param_1 + 0x48) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490730ec FUN_1490730ec body=1285 status=ok
// SIG undefined FUN_1490730ec(void)

void FUN_1490730ec(longlong param_1,undefined ****param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_238 [44];
  uint local_20c;
  longlong *local_208;
  uint local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined **local_1f0;
  undefined ****local_1e8;
  undefined ***pppuStack_1e0;
  undefined ****local_1d8;
  longlong local_1d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1d8 = &pppuStack_1e0;
  local_1f0 = &PTR_FUN_149e37810;
  pppuStack_1e0 = &local_1f0;
  local_1e8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (*(code *)(*param_2)[0x43])(param_2,&DAT_149e39130);
  local_1fc = 0;
  local_200 = *(uint *)(param_1 + 0xa8);
  pppuVar2 = param_2[1];
  ppuVar1 = (undefined **)((longlong)*pppuVar2 + 4);
  if (pppuVar2[1] < ppuVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (*(code *)(*param_2)[0x2e])(param_2,&local_1fc,4);
    }
    else {
      FUN_14572512c(param_2,&local_1fc);
    }
  }
  else {
    local_1fc = *(uint *)*pppuVar2;
    *pppuVar2 = ppuVar1;
  }
  pppuVar2 = param_2[1];
  ppuVar1 = (undefined **)((longlong)*pppuVar2 + 4);
  if (pppuVar2[1] < ppuVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (*(code *)(*param_2)[0x2e])(param_2,&local_200,4);
    }
    else {
      FUN_14572512c(param_2,&local_200);
    }
  }
  else {
    local_200 = *(uint *)*pppuVar2;
    *pppuVar2 = ppuVar1;
  }
  local_208 = (longlong *)(param_1 + 0xa0);
  if (((ulonglong)param_2[5] & 1) != 0) {
    FUN_1490785fc();
  }
  if (local_200 != 0) {
    uVar4 = 0;
    do {
      uVar3 = local_1fc;
      lVar7 = *local_208;
      local_20c = uVar4;
      (*(code *)(*param_2)[0x43])(param_2,&DAT_149e39130);
      local_1f4 = *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar4 * 0x30);
      pppuVar2 = param_2[1];
      ppuVar1 = (undefined **)((longlong)*pppuVar2 + 4);
      if (pppuVar2[1] < ppuVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (*(code *)(*param_2)[0x2e])(param_2,&local_1f4,4);
        }
        else {
          FUN_14572512c(param_2,&local_1f4);
        }
      }
      else {
        local_1f4 = *(undefined4 *)*pppuVar2;
        *pppuVar2 = ppuVar1;
      }
      puVar5 = (undefined8 *)(lVar7 + (longlong)(int)uVar4 * 0x30);
      if (((ulonglong)param_2[5] & 1) != 0) {
        FUN_1490789cc(puVar5,local_1f4);
      }
      if ((longlong)*(int *)(puVar5 + 1) != 0) {
        plVar8 = (longlong *)*puVar5;
        lVar7 = (longlong)*(int *)(puVar5 + 1) * 0x1d8;
        do {
          (**(code **)(*plVar8 + 8))(plVar8,param_2,param_1);
          (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
          local_1e8 = (undefined ****)0x0;
          pppuStack_1e0 = (undefined ***)0x0;
          local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
          local_1d8 = param_2;
          local_1d0 = param_1;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_1f0);
          plVar8 = plVar8 + 0x3b;
          lVar7 = lVar7 + -0x1d8;
        } while (lVar7 != 0);
      }
      (*(code *)(*param_2)[0x43])(param_2,&DAT_149e39130);
      if ((uVar3 & 4) == 0) {
        local_1f4 = *(undefined4 *)(puVar5 + 3);
        pppuVar2 = param_2[1];
        ppuVar1 = (undefined **)((longlong)*pppuVar2 + 4);
        if (pppuVar2[1] < ppuVar1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (*(code *)(*param_2)[0x2e])(param_2,&local_1f4,4);
          }
          else {
            FUN_14572512c(param_2,&local_1f4);
          }
        }
        else {
          local_1f4 = *(undefined4 *)*pppuVar2;
          *pppuVar2 = ppuVar1;
        }
        if (((ulonglong)param_2[5] & 1) != 0) {
          FUN_1490789cc(puVar5 + 2,local_1f4);
        }
        if ((longlong)*(int *)(puVar5 + 3) != 0) {
          plVar8 = (longlong *)puVar5[2];
          lVar7 = (longlong)*(int *)(puVar5 + 3) * 0x1d8;
          do {
            (**(code **)(*plVar8 + 8))(plVar8,param_2,param_1);
            (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
            local_1e8 = (undefined ****)0x0;
            pppuStack_1e0 = (undefined ***)0x0;
            local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
            local_1d8 = param_2;
            local_1d0 = param_1;
            (**(code **)(*plVar8 + 0x18))(plVar8,&local_1f0);
            plVar8 = plVar8 + 0x3b;
            lVar7 = lVar7 + -0x1d8;
          } while (lVar7 != 0);
        }
      }
      local_1f4 = *(undefined4 *)(puVar5 + 5);
      pppuVar2 = param_2[1];
      ppuVar1 = (undefined **)((longlong)*pppuVar2 + 4);
      if (pppuVar2[1] < ppuVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (*(code *)(*param_2)[0x2e])(param_2,&local_1f4,4);
        }
        else {
          FUN_14572512c(param_2,&local_1f4);
        }
      }
      else {
        local_1f4 = *(undefined4 *)*pppuVar2;
        *pppuVar2 = ppuVar1;
      }
      if (((ulonglong)param_2[5] & 1) != 0) {
        FUN_149078dfa(puVar5 + 4,local_1f4);
      }
      if ((longlong)*(int *)(puVar5 + 5) != 0) {
        puVar6 = (undefined8 *)puVar5[4];
        puVar5 = puVar6 + (longlong)*(int *)(puVar5 + 5) * 2;
        do {
          local_1f8 = *(undefined4 *)(puVar6 + 1);
          pppuVar2 = param_2[1];
          ppuVar1 = (undefined **)((longlong)*pppuVar2 + 4);
          if (pppuVar2[1] < ppuVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (*(code *)(*param_2)[0x2e])(param_2,&local_1f8,4);
            }
            else {
              FUN_14572512c(param_2,&local_1f8);
            }
          }
          else {
            local_1f8 = *(undefined4 *)*pppuVar2;
            *pppuVar2 = ppuVar1;
          }
          if (((ulonglong)param_2[5] & 1) != 0) {
            FUN_1490789cc(puVar6,local_1f8);
          }
          if ((longlong)*(int *)(puVar6 + 1) != 0) {
            plVar8 = (longlong *)*puVar6;
            lVar7 = (longlong)*(int *)(puVar6 + 1) * 0x1d8;
            do {
              (**(code **)(*plVar8 + 8))(plVar8,param_2,param_1);
              (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
              local_1e8 = (undefined ****)0x0;
              pppuStack_1e0 = (undefined ***)0x0;
              local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
              local_1d8 = param_2;
              local_1d0 = param_1;
              (**(code **)(*plVar8 + 0x18))(plVar8,&local_1f0);
              plVar8 = plVar8 + 0x3b;
              lVar7 = lVar7 + -0x1d8;
            } while (lVar7 != 0);
          }
          puVar6 = puVar6 + 2;
        } while (puVar6 != puVar5);
      }
      uVar4 = local_20c + 1;
    } while (uVar4 < local_200);
  }
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490735f6 FUN_1490735f6 body=59 status=ok
// SIG undefined FUN_1490735f6(void)

longlong FUN_1490735f6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14907b028(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_14907b01c(lVar2);
  return lVar2;
}



// FUNCTION 149073632 FUN_149073632 body=118 status=ok
// SIG undefined FUN_149073632(void)

void FUN_149073632(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14907b0ae(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14907b134(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490736aa FUN_1490736aa body=126 status=ok
// SIG undefined FUN_1490736aa(void)

longlong * FUN_1490736aa(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14586a468();
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



// FUNCTION 149073728 FUN_149073728 body=47 status=ok
// SIG undefined FUN_149073728(void)

void FUN_149073728(longlong param_1)

{
  FUN_149078ff9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a78554(param_1);
  return;
}



// FUNCTION 14907375e FUN_14907375e body=68 status=ok
// SIG undefined FUN_14907375e(void)

void FUN_14907375e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490737aa FUN_1490737aa body=68 status=ok
// SIG undefined FUN_1490737aa(void)

void FUN_1490737aa(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  switchD_143c3d4dc::caseD_15();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490737f0 FUN_1490737f0 body=328 status=ok
// SIG undefined FUN_1490737f0(void)

void FUN_1490737f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xac) * 0x30);
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x78);
    plVar6 = plVar8 + (longlong)*(int *)(param_1 + 0x80) * 4;
    do {
      plVar1 = (longlong *)*plVar8;
      if (plVar1 != (longlong *)0x0) {
        lVar4 = plVar1[1];
        if ((longlong)(int)lVar4 == 0) {
          iVar7 = 0;
        }
        else {
          lVar2 = *plVar1;
          lVar9 = 0;
          iVar7 = 0;
          do {
            iVar5 = FUN_149074758(*(undefined8 *)(lVar2 + lVar9));
            iVar7 = iVar7 + iVar5;
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar9);
        }
        FUN_146820164(param_2,iVar7);
      }
      plVar1 = (longlong *)plVar8[1];
      if (plVar1 != (longlong *)0x0) {
        lVar4 = plVar1[1];
        if ((longlong)(int)lVar4 == 0) {
          iVar7 = 0;
        }
        else {
          lVar2 = *plVar1;
          lVar9 = 0;
          iVar7 = 0;
          do {
            iVar5 = FUN_149074758(*(undefined8 *)(lVar2 + lVar9));
            iVar7 = iVar7 + iVar5;
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar9);
        }
        FUN_146820164(param_2,iVar7);
      }
      if ((longlong)(int)plVar8[3] != 0) {
        plVar10 = (longlong *)plVar8[2];
        plVar1 = plVar10 + (int)plVar8[3];
        do {
          plVar3 = (longlong *)*plVar10;
          if (plVar3 != (longlong *)0x0) {
            lVar4 = plVar3[1];
            if ((longlong)(int)lVar4 == 0) {
              iVar7 = 0;
            }
            else {
              lVar2 = *plVar3;
              lVar9 = 0;
              iVar7 = 0;
              do {
                iVar5 = FUN_149074758(*(undefined8 *)(lVar2 + lVar9));
                iVar7 = iVar7 + iVar5;
                lVar9 = lVar9 + 8;
              } while ((longlong)(int)lVar4 * 8 != lVar9);
            }
            FUN_146820164(param_2,iVar7);
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar1);
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != plVar6);
  }
  return;
}



// FUNCTION 149073938 FUN_149073938 body=190 status=ok
// SIG undefined FUN_149073938(void)

bool FUN_149073938(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *(undefined4 *)(lVar1 + 0xc);
    uVar4 = *(undefined4 *)(lVar1 + 0x10);
    uVar5 = *(undefined4 *)(lVar1 + 0x14);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
    if ((undefined8 *)(lVar1 + 8) != param_2) {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(lVar1 + 0x24);
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1490739f6 FUN_1490739f6 body=45 status=ok
// SIG undefined FUN_1490739f6(void)

longlong FUN_1490739f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c7e844(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149073a2a FUN_149073a2a body=41 status=ok
// SIG undefined FUN_149073a2a(void)

void FUN_149073a2a(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomAssetCards.h"
                ,0x65,L"Pure virtual not implemented (%s)",L"BuildDDCKey");
  return;
}



// FUNCTION 149073a54 FUN_149073a54 body=45 status=ok
// SIG undefined FUN_149073a54(void)

longlong FUN_149073a54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145beb8d2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149073b50 FUN_149073b50 body=142 status=ok
// SIG undefined FUN_149073b50(void)

undefined8 FUN_149073b50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar12);
      uVar3 = *puVar1;
      lVar2 = param_2 + 0x20 + lVar12;
      *(undefined8 *)(lVar2 + -0x1a) = *(undefined8 *)((longlong)puVar1 + 6);
      *(undefined8 *)(lVar2 + -0x20) = uVar3;
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar5 = *(undefined4 *)(puVar1 + 3);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0xc) = uVar4;
      *(undefined4 *)(lVar2 + -8) = uVar5;
      *(undefined4 *)(lVar2 + -4) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 4);
      uVar3 = puVar1[7];
      uVar4 = *(undefined4 *)(puVar1 + 8);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x44);
      uVar6 = *(undefined4 *)(puVar1 + 9);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x4c);
      uVar8 = *(undefined4 *)(puVar1 + 10);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x54);
      uVar10 = *(undefined4 *)(puVar1 + 0xb);
      uVar11 = *(undefined4 *)((longlong)puVar1 + 0x5c);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[6];
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      *(undefined4 *)(lVar2 + 0x28) = uVar6;
      *(undefined4 *)(lVar2 + 0x2c) = uVar7;
      *(undefined4 *)(lVar2 + 0x30) = uVar8;
      *(undefined4 *)(lVar2 + 0x34) = uVar9;
      *(undefined4 *)(lVar2 + 0x38) = uVar10;
      *(undefined4 *)(lVar2 + 0x3c) = uVar11;
      *(undefined8 *)(lVar2 + 0x40) = puVar1[0xc];
      lVar12 = lVar12 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149073c06 FUN_149073c06 body=59 status=ok
// SIG undefined FUN_149073c06(void)

undefined8 FUN_149073c06(longlong *param_1)

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



// FUNCTION 149073c4c FUN_149073c4c body=38 status=ok
// SIG undefined FUN_149073c4c(void)

void FUN_149073c4c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 149073dc4 FUN_149073dc4 body=59 status=ok
// SIG undefined FUN_149073dc4(void)

undefined8 FUN_149073dc4(longlong *param_1)

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



// FUNCTION 149073ed2 FUN_149073ed2 body=59 status=ok
// SIG undefined FUN_149073ed2(void)

undefined8 FUN_149073ed2(longlong *param_1)

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



// FUNCTION 149073fc6 FUN_149073fc6 body=84 status=ok
// SIG undefined FUN_149073fc6(void)

undefined8 FUN_149073fc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      uVar2 = *(undefined4 *)(param_3 + -0x24);
      uVar3 = *(undefined4 *)(param_3 + -0x20);
      uVar4 = *(undefined4 *)(param_3 + -0x1c);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      *(undefined4 *)(param_2 + -0x24) = uVar2;
      *(undefined4 *)(param_2 + -0x20) = uVar3;
      *(undefined4 *)(param_2 + -0x1c) = uVar4;
      FUN_1490740fc(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149074042 FUN_149074042 body=59 status=ok
// SIG undefined FUN_149074042(void)

undefined8 FUN_149074042(longlong *param_1)

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



// FUNCTION 149074088 FUN_149074088 body=38 status=ok
// SIG undefined FUN_149074088(void)

void FUN_149074088(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1490740fc FUN_1490740fc body=88 status=ok
// SIG undefined FUN_1490740fc(void)

undefined8 * FUN_1490740fc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149074154(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 149074154 FUN_149074154 body=98 status=ok
// SIG undefined FUN_149074154(void)

void FUN_149074154(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490741e0 FUN_1490741e0 body=100 status=ok
// SIG undefined FUN_1490741e0(void)

undefined1 FUN_1490741e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14907426c FUN_14907426c body=59 status=ok
// SIG undefined FUN_14907426c(void)

undefined8 FUN_14907426c(longlong *param_1)

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



// FUNCTION 149074364 FUN_149074364 body=90 status=ok
// SIG undefined FUN_149074364(void)

undefined8 FUN_149074364(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x28);
      uVar2 = *(undefined4 *)(param_3 + -0x24);
      uVar3 = *(undefined4 *)(param_3 + -0x20);
      uVar4 = *(undefined4 *)(param_3 + -0x1c);
      uVar5 = *(undefined4 *)(param_3 + -0x14);
      uVar6 = *(undefined4 *)(param_3 + -0x10);
      uVar7 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar5;
      *(undefined4 *)(param_2 + -0x10) = uVar6;
      *(undefined4 *)(param_2 + -0xc) = uVar7;
      *(undefined4 *)(param_2 + -0x28) = uVar1;
      *(undefined4 *)(param_2 + -0x24) = uVar2;
      *(undefined4 *)(param_2 + -0x20) = uVar3;
      *(undefined4 *)(param_2 + -0x1c) = uVar4;
      FUN_1490740fc(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490743e6 FUN_1490743e6 body=59 status=ok
// SIG undefined FUN_1490743e6(void)

undefined8 FUN_1490743e6(longlong *param_1)

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



// FUNCTION 14907442c FUN_14907442c body=38 status=ok
// SIG undefined FUN_14907442c(void)

void FUN_14907442c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1490744a2 FUN_1490744a2 body=354 status=ok
// SIG undefined FUN_1490744a2(void)

int FUN_1490744a2(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x6c);
  iVar5 = *(int *)(param_1 + 0xb4);
  cVar6 = FUN_1427d88f0(param_1 + 0x1b0);
  if (cVar6 == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_1427d8864(param_1 + 0x1b0);
  }
  cVar6 = FUN_1427d88f0(param_1 + 0x220);
  if (cVar6 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_1427d8864(param_1 + 0x220);
  }
  cVar6 = FUN_1427d88f0(param_1 + 600);
  if (cVar6 == '\0') {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_1427d8864(param_1 + 600);
  }
  cVar6 = FUN_1427d88f0(param_1 + 0x2c8);
  if (cVar6 == '\0') {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_1427d8864(param_1 + 0x2c8);
  }
  cVar6 = FUN_1427d88f0(param_1 + 0x290);
  if (cVar6 == '\0') {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_1427d8864(param_1 + 0x290);
  }
  cVar6 = FUN_1427d88f0(param_1 + 800);
  if (cVar6 == '\0') {
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_1427d8864(param_1 + 800);
  }
  cVar6 = FUN_1427d88f0(param_1 + 0x358);
  if (cVar6 == '\0') {
    iVar13 = 0;
  }
  else {
    iVar13 = FUN_1427d8864(param_1 + 0x358);
  }
  return (iVar3 + iVar1) * 0x10 + (iVar4 + iVar2 + iVar5) * 4 +
         iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8 + iVar7;
}



// FUNCTION 149074604 FUN_149074604 body=240 status=ok
// SIG undefined FUN_149074604(void)

int FUN_149074604(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    iVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*param_1 + 0x140);
    iVar5 = (*(int *)(lVar1 + 0x4c) + *(int *)(lVar1 + 0x2c)) * 0x10 +
            (*(int *)(lVar1 + 0x6c) + *(int *)(lVar1 + 0x3c) + *(int *)(lVar1 + 0x5c)) * 4;
  }
  if (param_1[1] != 0) {
    lVar1 = *(longlong *)(param_1[1] + 0x50);
    if (lVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    iVar5 = iVar5 + iVar3;
  }
  if (param_1[2] != 0) {
    iVar3 = FUN_14906fcbe();
    iVar5 = iVar5 + iVar3;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar3 = 0;
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    iVar5 = iVar4 + iVar5 + iVar3;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar3 = 0;
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    iVar5 = iVar4 + iVar5 + iVar3;
  }
  return iVar5;
}



// FUNCTION 1490746f4 FUN_1490746f4 body=99 status=ok
// SIG undefined FUN_1490746f4(void)

int FUN_1490746f4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    iVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*param_1 + 0x118);
    iVar5 = (*(int *)(lVar1 + 0x2c) + *(int *)(lVar1 + 0xc)) * 0x10 +
            (*(int *)(lVar1 + 0x3c) + *(int *)(lVar1 + 0x1c)) * 4;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x50);
    iVar3 = 0;
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    iVar5 = iVar4 + iVar5 + iVar3;
  }
  return iVar5;
}



// FUNCTION 149074758 FUN_149074758 body=184 status=ok
// SIG undefined FUN_149074758(void)

int FUN_149074758(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  iVar4 = 0;
  iVar5 = 0;
  if (lVar1 != 0) {
    iVar5 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    iVar4 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  iVar7 = 0;
  iVar6 = 0;
  if (lVar1 != 0) {
    iVar6 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    iVar7 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  iVar8 = 0;
  iVar2 = 0;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 != 0) {
    iVar8 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  return iVar2 + iVar8 + iVar3 + iVar6 + iVar7 + iVar4 + iVar5;
}



// FUNCTION 149074810 FUN_149074810 body=59 status=ok
// SIG undefined FUN_149074810(void)

longlong FUN_149074810(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149074862(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_14907484b(lVar2);
  return lVar2;
}



// FUNCTION 14907484b FUN_14907484b body=23 status=ok
// SIG undefined FUN_14907484b(void)

void FUN_14907484b(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x200000000;
  return;
}



// FUNCTION 149074862 FUN_149074862 body=143 status=ok
// SIG undefined FUN_149074862(void)

void FUN_149074862(longlong param_1,int param_2)

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



// FUNCTION 1490748f2 FUN_1490748f2 body=121 status=ok
// SIG undefined FUN_1490748f2(void)

void FUN_1490748f2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149074996(param_1,iVar1);
    }
    FUN_14907496c((longlong)iVar1 * 0x690 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149074a2a(param_1,param_2,iVar1 - param_2);
    FUN_149074a8c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14907496c FUN_14907496c body=41 status=ok
// SIG undefined FUN_14907496c(void)

void FUN_14907496c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490712be(param_1);
    param_1 = param_1 + 0x690;
  }
  return;
}



// FUNCTION 149074996 FUN_149074996 body=146 status=ok
// SIG undefined FUN_149074996(void)

void FUN_149074996(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x690,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x690)) {
      uVar5 = uVar4 / 0x690 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x690,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149074a2a FUN_149074a2a body=98 status=ok
// SIG undefined FUN_149074a2a(void)

void FUN_149074a2a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x690 + *param_1);
  FUN_145c7ea20(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x690 + (longlong)_Dst),(longlong)iVar2 * 0x690);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149074a8c FUN_149074a8c body=62 status=ok
// SIG undefined FUN_149074a8c(void)

void FUN_149074a8c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149074aca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x690,0x10);
  }
  return;
}



// FUNCTION 149074aca FUN_149074aca body=110 status=ok
// SIG undefined FUN_149074aca(void)

ulonglong FUN_149074aca(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x690) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149074b03;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x690,0x10);
      param_2 = param_2 / 0x690;
    }
  }
LAB_149074b03:
  return param_2 & 0xffffffff;
}



// FUNCTION 149074b38 FUN_149074b38 body=587 status=ok
// SIG undefined FUN_149074b38(void)

undefined8 * FUN_149074b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba97db0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = DAT_14c846358;
  param_1[0x16] = DAT_14c846350;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_14c846350;
  *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_14c846358;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_149074d84(param_1 + 0x1e);
  param_1[0x48] = &PTR_FUN_14ba97de0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x279) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x275) = 0xffffffff;
  param_1[0x50] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 0x51) = DAT_14c845dc4;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ad) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x2b1) = 0xff;
  *(undefined4 *)(param_1 + 0x58) = DAT_14c845dc4;
  param_1[0x57] = DAT_14c845dbc;
  param_1[0x59] = 0;
  param_1[0x5a] = &PTR_FUN_14ba97e10;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x67] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined1 *)((longlong)param_1 + 0x339) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x335) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x69) = DAT_14c845dc4;
  param_1[0x68] = DAT_14c845dbc;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x36d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x371) = 0xff;
  param_1[0x6f] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 0x70) = DAT_14c845dc4;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a5) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3a9) = 0xff;
  param_1[0x76] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 0x77) = DAT_14c845dc4;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  return param_1;
}



// FUNCTION 149074d84 FUN_149074d84 body=368 status=ok
// SIG undefined FUN_149074d84(void)

void FUN_149074d84(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x15) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = DAT_14c845dbc;
  param_1[10] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x4d) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x16) = DAT_14c845dbc;
  param_1[0x18] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x85) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x89) = 0xff;
  *(undefined8 *)(param_1 + 0x24) = DAT_14c845dbc;
  param_1[0x26] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbd) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0xff;
  *(undefined8 *)(param_1 + 0x32) = DAT_14c845dbc;
  param_1[0x34] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf5) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0xff;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c845dbc;
  param_1[0x42] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x44) = 0;
  param_1[0x46] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x131) = 0xff;
  *(undefined8 *)(param_1 + 0x4e) = DAT_14c845dbc;
  param_1[0x50] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x52) = 0;
  return;
}



// FUNCTION 149074ef4 FUN_149074ef4 body=38 status=ok
// SIG undefined FUN_149074ef4(void)

undefined8 FUN_149074ef4(undefined8 param_1,int param_2)

{
  FUN_149074f1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149074f1c FUN_149074f1c body=76 status=ok
// SIG undefined FUN_149074f1c(void)

void FUN_149074f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba97db0;
  FUN_149074f68(param_1 + 0x1e);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149074f68 FUN_149074f68 body=97 status=ok
// SIG undefined FUN_149074f68(void)

void FUN_149074f68(longlong param_1)

{
  FUN_1400ea36e(param_1 + 0x120,param_1 + 0x120);
  FUN_1400ea36e(param_1 + 0xe8,param_1 + 0xe8);
  FUN_1400ea36e(param_1 + 0xb0,param_1 + 0xb0);
  FUN_1400ea36e(param_1 + 0x78,param_1 + 0x78);
  FUN_1400ea36e(param_1 + 0x40,param_1 + 0x40);
  FUN_1400ea36e(param_1 + 8,param_1 + 8);
  return;
}



// FUNCTION 149074fca FUN_149074fca body=67 status=ok
// SIG undefined FUN_149074fca(void)

undefined8 * FUN_149074fca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba97de0;
  FUN_1400ea36e(param_1 + 0xc,param_1 + 0xc);
  FUN_1400ea36e(param_1 + 5,param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907500e FUN_14907500e body=38 status=ok
// SIG undefined FUN_14907500e(void)

undefined8 FUN_14907500e(undefined8 param_1,int param_2)

{
  FUN_149075034();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149075034 FUN_149075034 body=86 status=ok
// SIG undefined FUN_149075034(void)

void FUN_149075034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba97e10;
  FUN_1400ea36e(param_1 + 0x19,param_1 + 0x19);
  FUN_1400ea36e(param_1 + 0x12,param_1 + 0x12);
  FUN_1400ea36e(param_1 + 0xb,param_1 + 0xb);
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14907508a FUN_14907508a body=121 status=ok
// SIG undefined FUN_14907508a(void)

void FUN_14907508a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14907512e(param_1,iVar1);
    }
    FUN_149075104((longlong)iVar1 * 0x390 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149075354(param_1,param_2,iVar1 - param_2);
    FUN_1490753b6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149075104 FUN_149075104 body=41 status=ok
// SIG undefined FUN_149075104(void)

void FUN_149075104(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490751c2(param_1);
    param_1 = param_1 + 0x390;
  }
  return;
}



// FUNCTION 14907512e FUN_14907512e body=146 status=ok
// SIG undefined FUN_14907512e(void)

void FUN_14907512e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x390,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x390)) {
      uVar5 = uVar4 / 0x390 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x390,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490751c2 FUN_1490751c2 body=401 status=ok
// SIG undefined FUN_1490751c2(void)

void * FUN_1490751c2(void *param_1)

{
  memset(param_1,0,0xa1);
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined ***)((longlong)param_1 + 0xb8) = &PTR_FUN_14ba97db0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = DAT_14c846358;
  *(undefined8 *)((longlong)param_1 + 0x168) = DAT_14c846350;
  *(undefined8 *)((longlong)param_1 + 0x174) = DAT_14c846350;
  *(undefined4 *)((longlong)param_1 + 0x17c) = DAT_14c846358;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  FUN_149074d84((longlong)param_1 + 0x1a8);
  *(undefined ***)((longlong)param_1 + 0x2f8) = &PTR_FUN_14ba97de0;
  *(undefined4 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 0x330) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined4 *)((longlong)param_1 + 0x310) = 0;
  *(undefined1 *)((longlong)param_1 + 0x331) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x32d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x338) = DAT_14c845dbc;
  *(undefined4 *)((longlong)param_1 + 0x340) = DAT_14c845dc4;
  *(undefined8 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x350) = 0;
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined8 *)((longlong)param_1 + 0x368) = 0;
  *(undefined4 *)((longlong)param_1 + 0x365) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x369) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x378) = DAT_14c845dc4;
  *(undefined8 *)((longlong)param_1 + 0x370) = DAT_14c845dbc;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined1 *)((longlong)param_1 + 0x388) = 0;
  return param_1;
}



// FUNCTION 149075354 FUN_149075354 body=98 status=ok
// SIG undefined FUN_149075354(void)

void FUN_149075354(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x390 + *param_1);
  FUN_1490753f4(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x390 + (longlong)_Dst),(longlong)iVar2 * 0x390);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1490753b6 FUN_1490753b6 body=62 status=ok
// SIG undefined FUN_1490753b6(void)

void FUN_1490753b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1490754d6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x390,8);
  }
  return;
}



// FUNCTION 1490753f4 FUN_1490753f4 body=41 status=ok
// SIG undefined FUN_1490753f4(void)

void FUN_1490753f4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14907541e(param_1);
    param_1 = param_1 + 0x390;
  }
  return;
}



// FUNCTION 14907541e FUN_14907541e body=94 status=ok
// SIG undefined FUN_14907541e(void)

void FUN_14907541e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x2f8) = &PTR_FUN_14ba97de0;
  FUN_1400ea36e(param_1 + 0x358,param_1 + 0x358);
  FUN_1400ea36e(param_1 + 800,param_1 + 800);
  FUN_149074f1c(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_14907547c(param_1);
  return;
}



// FUNCTION 14907547c FUN_14907547c body=90 status=ok
// SIG undefined FUN_14907547c(void)

void FUN_14907547c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490754d6 FUN_1490754d6 body=110 status=ok
// SIG undefined FUN_1490754d6(void)

ulonglong FUN_1490754d6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x390) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14907550f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x390,8);
      param_2 = param_2 / 0x390;
    }
  }
LAB_14907550f:
  return param_2 & 0xffffffff;
}



// FUNCTION 149075544 FUN_149075544 body=175 status=ok
// SIG undefined FUN_149075544(void)

void FUN_149075544(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1490755f4(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x80 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)(puVar2 + 0xf) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(undefined1 *)(puVar2 + 0xe) = 0;
      puVar2 = puVar2 + 0x10;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14907567a(param_1,param_2,iVar1 - param_2);
    FUN_1490756d4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490755f4 FUN_1490755f4 body=132 status=ok
// SIG undefined FUN_1490755f4(void)

void FUN_1490755f4(longlong param_1,int param_2)

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



// FUNCTION 14907567a FUN_14907567a body=89 status=ok
// SIG undefined FUN_14907567a(void)

void FUN_14907567a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x80 + *param_1);
  FUN_149075712(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar2 << 7);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1490756d4 FUN_1490756d4 body=62 status=ok
// SIG undefined FUN_1490756d4(void)

void FUN_1490756d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149075784(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}



// FUNCTION 149075712 FUN_149075712 body=38 status=ok
// SIG undefined FUN_149075712(void)

void FUN_149075712(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149075738(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 149075738 FUN_149075738 body=75 status=ok
// SIG undefined FUN_149075738(void)

void FUN_149075738(longlong *param_1)

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



// FUNCTION 149075784 FUN_149075784 body=93 status=ok
// SIG undefined FUN_149075784(void)

ulonglong FUN_149075784(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,8);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 14907584e FUN_14907584e body=59 status=ok
// SIG undefined FUN_14907584e(void)

undefined8 FUN_14907584e(longlong *param_1)

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



// FUNCTION 149075948 FUN_149075948 body=54 status=ok
// SIG undefined FUN_149075948(void)

undefined1 FUN_149075948(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149075a60(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1490759a6 FUN_1490759a6 body=59 status=ok
// SIG undefined FUN_1490759a6(void)

undefined8 FUN_1490759a6(longlong *param_1)

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



// FUNCTION 1490759ec FUN_1490759ec body=38 status=ok
// SIG undefined FUN_1490759ec(void)

void FUN_1490759ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 149075a60 FUN_149075a60 body=279 status=ok
// SIG undefined FUN_149075a60(void)

undefined1 * FUN_149075a60(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  FUN_1474512d8(param_1 + 8,param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x20);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x20);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x20) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x28);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x28);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x30);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x38);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x38);
      bVar1 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x40);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar2;
  param_1[0x48] = param_2[0x48];
  return param_1;
}



// FUNCTION 149075c18 FUN_149075c18 body=51 status=ok
// SIG undefined FUN_149075c18(void)

void FUN_149075c18(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149075c62 FUN_149075c62 body=63 status=ok
// SIG undefined FUN_149075c62(void)

undefined1 FUN_149075c62(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149075d6c(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 149075cca FUN_149075cca body=59 status=ok
// SIG undefined FUN_149075cca(void)

undefined8 FUN_149075cca(longlong *param_1)

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



// FUNCTION 149075d6c FUN_149075d6c body=207 status=ok
// SIG undefined FUN_149075d6c(void)

longlong * FUN_149075d6c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[1] = param_2[1];
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[3] = lVar2;
  *(short *)(param_1 + 4) = (short)param_2[4];
  lVar2 = param_2[5];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[5];
    }
  }
  param_1[5] = lVar2;
  FUN_149075a60(param_1 + 6,param_2 + 6);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



// FUNCTION 149075e3c FUN_149075e3c body=61 status=ok
// SIG undefined FUN_149075e3c(void)

void FUN_149075e3c(longlong param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 149075f20 FUN_149075f20 body=59 status=ok
// SIG undefined FUN_149075f20(void)

undefined8 FUN_149075f20(longlong *param_1)

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



// FUNCTION 14907603a FUN_14907603a body=59 status=ok
// SIG undefined FUN_14907603a(void)

undefined8 FUN_14907603a(longlong *param_1)

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



// FUNCTION 149076186 FUN_149076186 body=59 status=ok
// SIG undefined FUN_149076186(void)

undefined8 FUN_149076186(longlong *param_1)

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



// FUNCTION 1490762b0 FUN_1490762b0 body=59 status=ok
// SIG undefined FUN_1490762b0(void)

undefined8 FUN_1490762b0(longlong *param_1)

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



// FUNCTION 149076428 FUN_149076428 body=59 status=ok
// SIG undefined FUN_149076428(void)

undefined8 FUN_149076428(longlong *param_1)

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



// FUNCTION 1490764fe FUN_1490764fe body=54 status=ok
// SIG undefined FUN_1490764fe(void)

undefined1 FUN_1490764fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149076616(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14907655c FUN_14907655c body=59 status=ok
// SIG undefined FUN_14907655c(void)

undefined8 FUN_14907655c(longlong *param_1)

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



// FUNCTION 1490765a2 FUN_1490765a2 body=37 status=ok
// SIG undefined FUN_1490765a2(void)

void FUN_1490765a2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 149076616 FUN_149076616 body=92 status=ok
// SIG undefined FUN_149076616(void)

undefined8 * FUN_149076616(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149076672(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 149076672 FUN_149076672 body=121 status=ok
// SIG undefined FUN_149076672(void)

void FUN_149076672(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149076750 FUN_149076750 body=48 status=ok
// SIG undefined FUN_149076750(void)

void FUN_149076750(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149076796 FUN_149076796 body=63 status=ok
// SIG undefined FUN_149076796(void)

undefined1 FUN_149076796(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490768a0(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 1490767fe FUN_1490767fe body=59 status=ok
// SIG undefined FUN_1490767fe(void)

undefined8 FUN_1490767fe(longlong *param_1)

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



// FUNCTION 1490768a0 FUN_1490768a0 body=136 status=ok
// SIG undefined FUN_1490768a0(void)

longlong * FUN_1490768a0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  FUN_149075a60(param_1 + 3,param_2 + 3);
  param_1[0xd] = param_2[0xd];
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 14907692a FUN_14907692a body=58 status=ok
// SIG undefined FUN_14907692a(void)

void FUN_14907692a(longlong param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1490769ec FUN_1490769ec body=122 status=ok
// SIG undefined FUN_1490769ec(void)

undefined8 FUN_1490769ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined2 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x20 + lVar7;
      *(undefined2 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 4);
      uVar4 = *(undefined4 *)(puVar1 + 10);
      uVar5 = *(undefined4 *)(puVar1 + 0xc);
      uVar6 = *(undefined4 *)(puVar1 + 0xe);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + -0xc) = uVar4;
      *(undefined4 *)(lVar2 + -8) = uVar5;
      *(undefined4 *)(lVar2 + -4) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 0x10);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0x35);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x15) = uVar3;
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149076a8e FUN_149076a8e body=59 status=ok
// SIG undefined FUN_149076a8e(void)

undefined8 FUN_149076a8e(longlong *param_1)

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



// FUNCTION 149076ad4 FUN_149076ad4 body=38 status=ok
// SIG undefined FUN_149076ad4(void)

void FUN_149076ad4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 149076c16 FUN_149076c16 body=59 status=ok
// SIG undefined FUN_149076c16(void)

undefined8 FUN_149076c16(longlong *param_1)

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



// FUNCTION 149076cc8 FUN_149076cc8 body=64 status=ok
// SIG undefined FUN_149076cc8(void)

void FUN_149076cc8(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x18);
  return;
}



// FUNCTION 149076d1e FUN_149076d1e body=81 status=ok
// SIG undefined FUN_149076d1e(void)

undefined8 FUN_149076d1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_14115e0ba();
      lVar2 = lVar2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149076d98 FUN_149076d98 body=59 status=ok
// SIG undefined FUN_149076d98(void)

undefined8 FUN_149076d98(longlong *param_1)

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



// FUNCTION 149076e3c FUN_149076e3c body=78 status=ok
// SIG undefined FUN_149076e3c(void)

void FUN_149076e3c(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 149076e9a FUN_149076e9a body=64 status=ok
// SIG undefined FUN_149076e9a(void)

void FUN_149076e9a(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x18);
  return;
}



// FUNCTION 149076ef0 FUN_149076ef0 body=81 status=ok
// SIG undefined FUN_149076ef0(void)

undefined8 FUN_149076ef0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_14115e0ba();
      lVar2 = lVar2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149076f6a FUN_149076f6a body=59 status=ok
// SIG undefined FUN_149076f6a(void)

undefined8 FUN_149076f6a(longlong *param_1)

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



// FUNCTION 14907700e FUN_14907700e body=78 status=ok
// SIG undefined FUN_14907700e(void)

void FUN_14907700e(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14907706c FUN_14907706c body=64 status=ok
// SIG undefined FUN_14907706c(void)

void FUN_14907706c(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x20) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x20) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x28);
  return;
}



// FUNCTION 1490770c2 FUN_1490770c2 body=86 status=ok
// SIG undefined FUN_1490770c2(void)

undefined1 FUN_1490770c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar7;
      puVar2[6] = uVar8;
      puVar2[7] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_14115e0ba();
      lVar10 = lVar10 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149077140 FUN_149077140 body=59 status=ok
// SIG undefined FUN_149077140(void)

undefined8 FUN_149077140(longlong *param_1)

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



// FUNCTION 1490771e4 FUN_1490771e4 body=78 status=ok
// SIG undefined FUN_1490771e4(void)

void FUN_1490771e4(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined **)(param_1 + 0x20) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 149077260 FUN_149077260 body=224 status=ok
// SIG undefined FUN_149077260(void)

undefined8 FUN_149077260(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar10);
      lVar2 = param_2 + 0x10 + lVar10;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_14115e0ba(lVar2,puVar1 + 2);
      *(undefined8 *)(lVar2 + 0x88) = puVar1[0x13];
      *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(puVar1 + 0x14);
      FUN_14115e0ba(param_2 + lVar10 + 0xa8,param_3 + lVar10 + 0xa8);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x134);
      uVar4 = *(undefined4 *)(puVar1 + 0x27);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x13c);
      uVar6 = *(undefined4 *)(puVar1 + 0x28);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x144);
      uVar8 = *(undefined4 *)(puVar1 + 0x29);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x14c);
      *(undefined4 *)(lVar2 + 0x120) = *(undefined4 *)(puVar1 + 0x26);
      *(undefined4 *)(lVar2 + 0x124) = uVar3;
      *(undefined4 *)(lVar2 + 0x128) = uVar4;
      *(undefined4 *)(lVar2 + 300) = uVar5;
      *(undefined4 *)(lVar2 + 0x130) = uVar6;
      *(undefined4 *)(lVar2 + 0x134) = uVar7;
      *(undefined4 *)(lVar2 + 0x138) = uVar8;
      *(undefined4 *)(lVar2 + 0x13c) = uVar9;
      FUN_14115e0ba(param_2 + lVar10 + 0x150,param_3 + lVar10 + 0x150);
      lVar10 = lVar10 + 0x1d8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149077368 FUN_149077368 body=59 status=ok
// SIG undefined FUN_149077368(void)

undefined8 FUN_149077368(longlong *param_1)

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



// FUNCTION 1490773b4 FUN_1490773b4 body=40 status=ok
// SIG undefined FUN_1490773b4(void)

void FUN_1490773b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_14907288c(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 14907743c FUN_14907743c body=64 status=ok
// SIG undefined FUN_14907743c(void)

void FUN_14907743c(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x18);
  return;
}



// FUNCTION 149077492 FUN_149077492 body=78 status=ok
// SIG undefined FUN_149077492(void)

undefined1 FUN_149077492(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_14115e0ba();
      lVar6 = lVar6 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149077508 FUN_149077508 body=59 status=ok
// SIG undefined FUN_149077508(void)

undefined8 FUN_149077508(longlong *param_1)

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



// FUNCTION 1490775ac FUN_1490775ac body=78 status=ok
// SIG undefined FUN_1490775ac(void)

void FUN_1490775ac(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 149077628 FUN_149077628 body=63 status=ok
// SIG undefined FUN_149077628(void)

undefined1 FUN_149077628(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149077752(param_2,param_3);
    param_3 = param_3 + 0x2e8;
    param_2 = param_2 + 0x2e8;
  }
  return 1;
}



// FUNCTION 149077690 FUN_149077690 body=59 status=ok
// SIG undefined FUN_149077690(void)

undefined8 FUN_149077690(longlong *param_1)

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



// FUNCTION 1490776dc FUN_1490776dc body=40 status=ok
// SIG undefined FUN_1490776dc(void)

void FUN_1490776dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_149071688(param_2);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 149077752 FUN_149077752 body=264 status=ok
// SIG undefined FUN_149077752(void)

undefined2 * FUN_149077752(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
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
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 10);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 10) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x35) = *(undefined8 *)((longlong)param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x22);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x26);
  uVar6 = *(undefined4 *)(param_2 + 0x2a);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 0x2e);
  uVar9 = *(undefined4 *)(param_2 + 0x30);
  uVar10 = *(undefined4 *)(param_2 + 0x32);
  uVar11 = *(undefined4 *)(param_2 + 0x34);
  uVar12 = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2a) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x2e) = uVar8;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x32) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = uVar11;
  *(undefined4 *)(param_1 + 0x36) = uVar12;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x26) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  FUN_14115e0ba(param_1 + 0x44,param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  FUN_14115e0ba(param_1 + 0x90,param_2 + 0x90);
  uVar2 = *(undefined4 *)(param_2 + 0xd6);
  uVar3 = *(undefined4 *)(param_2 + 0xd8);
  uVar4 = *(undefined4 *)(param_2 + 0xda);
  uVar5 = *(undefined4 *)(param_2 + 0xdc);
  uVar6 = *(undefined4 *)(param_2 + 0xde);
  uVar7 = *(undefined4 *)(param_2 + 0xe0);
  uVar8 = *(undefined4 *)(param_2 + 0xe2);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd6) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined4 *)(param_1 + 0xda) = uVar4;
  *(undefined4 *)(param_1 + 0xdc) = uVar5;
  *(undefined4 *)(param_1 + 0xde) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  *(undefined4 *)(param_1 + 0xe2) = uVar8;
  FUN_14115e0ba(param_1 + 0xe4,param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0x12a);
  uVar3 = *(undefined4 *)(param_2 + 300);
  uVar4 = *(undefined4 *)(param_2 + 0x12e);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x12a) = uVar2;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x12e) = uVar4;
  FUN_14115e0ba(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}



// FUNCTION 1490778c0 FUN_1490778c0 body=59 status=ok
// SIG undefined FUN_1490778c0(void)

undefined8 FUN_1490778c0(longlong *param_1)

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



// FUNCTION 149077a32 FUN_149077a32 body=59 status=ok
// SIG undefined FUN_149077a32(void)

undefined8 FUN_149077a32(longlong *param_1)

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



// FUNCTION 149077b68 FUN_149077b68 body=59 status=ok
// SIG undefined FUN_149077b68(void)

undefined8 FUN_149077b68(longlong *param_1)

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



// FUNCTION 149077c0a FUN_149077c0a body=73 status=ok
// SIG undefined FUN_149077c0a(void)

void FUN_149077c0a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)((longlong)param_2 + 2) = 1;
  *(undefined1 **)((longlong)param_2 + 4) = &DAT_3f8000003f800000;
  FUN_1400b22c2(param_2 + 2,&DAT_14a418301);
  *(undefined4 *)(param_2 + 4) = 0x42480000;
  return;
}



// FUNCTION 149077c54 FUN_149077c54 body=60 status=ok
// SIG undefined FUN_149077c54(void)

void FUN_149077c54(undefined8 param_1,undefined2 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined1 **)(param_2 + 2) = &DAT_3f8000003f800000;
  FUN_1400b22c2(param_2 + 8,&DAT_14a418301);
  *(undefined4 *)(param_2 + 0x10) = 0x42480000;
  return;
}



// FUNCTION 149077cb4 FUN_149077cb4 body=106 status=ok
// SIG undefined FUN_149077cb4(void)

undefined8 FUN_149077cb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x10 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 2);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 4);
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149077d46 FUN_149077d46 body=59 status=ok
// SIG undefined FUN_149077d46(void)

undefined8 FUN_149077d46(longlong *param_1)

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



// FUNCTION 149077d8c FUN_149077d8c body=38 status=ok
// SIG undefined FUN_149077d8c(void)

void FUN_149077d8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149077e02 FUN_149077e02 body=37 status=ok
// SIG undefined FUN_149077e02(void)

void FUN_149077e02(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  FUN_1460b2790(param_2);
  return;
}



// FUNCTION 149077e54 FUN_149077e54 body=135 status=ok
// SIG undefined FUN_149077e54(void)

undefined8 FUN_149077e54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar5);
      lVar2 = param_2 + 0x18 + lVar5;
      *(undefined1 *)(lVar2 + -0x18) = *puVar1;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 0x10);
      FUN_144a787a6(lVar2,puVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x28);
      puVar3 = (undefined8 *)(param_3 + lVar5 + 0x30);
      puVar4 = (undefined8 *)(param_2 + lVar5 + 0x30);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar5 = lVar5 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149077f04 FUN_149077f04 body=59 status=ok
// SIG undefined FUN_149077f04(void)

undefined8 FUN_149077f04(longlong *param_1)

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



// FUNCTION 149077f50 FUN_149077f50 body=44 status=ok
// SIG undefined FUN_149077f50(void)

void FUN_149077f50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14907805c FUN_14907805c body=59 status=ok
// SIG undefined FUN_14907805c(void)

undefined8 FUN_14907805c(longlong *param_1)

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



// FUNCTION 14907818a FUN_14907818a body=59 status=ok
// SIG undefined FUN_14907818a(void)

undefined8 FUN_14907818a(longlong *param_1)

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



// FUNCTION 149078296 FUN_149078296 body=59 status=ok
// SIG undefined FUN_149078296(void)

undefined8 FUN_149078296(longlong *param_1)

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



// FUNCTION 1490783a4 FUN_1490783a4 body=128 status=ok
// SIG undefined FUN_1490783a4(void)

undefined1 FUN_1490783a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar13) = *(undefined8 *)(param_3 + lVar13);
      lVar12 = *(longlong *)(param_3 + 8 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + 8 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar13;
      *(longlong *)(lVar1 + 8) = lVar12;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x1e + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar4;
      *(undefined4 *)(lVar1 + 0x18) = uVar5;
      *(undefined4 *)(lVar1 + 0x1c) = uVar6;
      *(undefined4 *)(lVar1 + 0x1e) = uVar7;
      *(undefined4 *)(lVar1 + 0x22) = uVar8;
      *(undefined4 *)(lVar1 + 0x26) = uVar9;
      *(undefined4 *)(lVar1 + 0x2a) = uVar10;
      lVar13 = lVar13 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14907844c FUN_14907844c body=59 status=ok
// SIG undefined FUN_14907844c(void)

undefined8 FUN_14907844c(longlong *param_1)

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



// FUNCTION 14907855a FUN_14907855a body=59 status=ok
// SIG undefined FUN_14907855a(void)

undefined8 FUN_14907855a(longlong *param_1)

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



// FUNCTION 1490785fc FUN_1490785fc body=144 status=ok
// SIG undefined FUN_1490785fc(void)

void FUN_1490785fc(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14907868e(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x30 + *param_1),0,(ulonglong)uVar2 * 0x30);
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
  FUN_149078722(param_1,param_2,iVar1 - param_2);
  FUN_149078788(param_1);
  return;
}



// FUNCTION 14907868e FUN_14907868e body=147 status=ok
// SIG undefined FUN_14907868e(void)

void FUN_14907868e(longlong param_1,int param_2)

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



// FUNCTION 149078722 FUN_149078722 body=101 status=ok
// SIG undefined FUN_149078722(void)

void FUN_149078722(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_145beb95c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149078788 FUN_149078788 body=62 status=ok
// SIG undefined FUN_149078788(void)

void FUN_149078788(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907895c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1490787c6 FUN_1490787c6 body=96 status=ok
// SIG undefined FUN_1490787c6(void)

void FUN_1490787c6(longlong *param_1)

{
  FUN_149078826(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14907885c(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14907885c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


