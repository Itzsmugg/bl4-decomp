// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b6f260 FUN_148b6f260 body=165 status=ok
// SIG undefined FUN_148b6f260(void)

bool FUN_148b6f260(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6f306 FUN_148b6f306 body=147 status=ok
// SIG undefined FUN_148b6f306(void)

void FUN_148b6f306(longlong param_1,int param_2)

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



// FUNCTION 148b6f39a FUN_148b6f39a body=207 status=ok
// SIG undefined FUN_148b6f39a(void)

int FUN_148b6f39a(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
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



// FUNCTION 148b6f46a FUN_148b6f46a body=315 status=ok
// SIG undefined FUN_148b6f46a(void)

void FUN_148b6f46a(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_148b6f5a6(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[2];
        puVar8 = puVar7 + 2;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 148b6f5a6 FUN_148b6f5a6 body=87 status=ok
// SIG undefined FUN_148b6f5a6(void)

void FUN_148b6f5a6(longlong *param_1,int param_2)

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
  FUN_148b6f5fe();
  return;
}



// FUNCTION 148b6f5fe FUN_148b6f5fe body=114 status=ok
// SIG undefined FUN_148b6f5fe(void)

void FUN_148b6f5fe(longlong *param_1,int param_2)

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



// FUNCTION 148b6f670 FUN_148b6f670 body=351 status=ok
// SIG undefined FUN_148b6f670(void)

undefined4 * FUN_148b6f670(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148b6f7d0(param_1,local_48);
  FUN_148b6f95a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_148b6f8b6(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_148b6f9b2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6f7d0 FUN_148b6f7d0 body=230 status=ok
// SIG undefined FUN_148b6f7d0(void)

int * FUN_148b6f7d0(longlong *param_1,int *param_2)

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



// FUNCTION 148b6f8b6 FUN_148b6f8b6 body=162 status=ok
// SIG undefined FUN_148b6f8b6(void)

undefined8 FUN_148b6f8b6(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_148b6f39a(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_148b6f5fe(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148b6f8da;
    }
  }
  uVar6 = 0;
LAB_148b6f8da:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6f95a FUN_148b6f95a body=87 status=ok
// SIG undefined FUN_148b6f95a(void)

longlong * FUN_148b6f95a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148b6f9b2 FUN_148b6f9b2 body=510 status=ok
// SIG undefined FUN_148b6f9b2(void)

void FUN_148b6f9b2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b6fbb2 FUN_148b6fbb2 body=29 status=ok
// SIG undefined FUN_148b6fbb2(void)

undefined8 FUN_148b6fbb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b6fbea FUN_148b6fbea body=29 status=ok
// SIG undefined FUN_148b6fbea(void)

bool FUN_148b6fbea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b6fc08 FUN_148b6fc08 body=26 status=ok
// SIG undefined FUN_148b6fc08(void)

bool FUN_148b6fc08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b6fc22 FUN_148b6fc22 body=24 status=ok
// SIG undefined FUN_148b6fc22(void)

bool FUN_148b6fc22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b6fc3a FUN_148b6fc3a body=101 status=ok
// SIG undefined FUN_148b6fc3a(void)

void FUN_148b6fc3a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b6fca0 FUN_148b6fca0 body=101 status=ok
// SIG undefined FUN_148b6fca0(void)

void FUN_148b6fca0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b6fd06 FUN_148b6fd06 body=134 status=ok
// SIG undefined FUN_148b6fd06(void)

void FUN_148b6fd06(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4790;
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
                    /* WARNING: Could not recover jumptable at 0x000148b6fd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b6fd8c FUN_148b6fd8c body=39 status=ok
// SIG undefined FUN_148b6fd8c(void)

void FUN_148b6fd8c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b6fdaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b6fdb4 FUN_148b6fdb4 body=146 status=ok
// SIG undefined FUN_148b6fdb4(void)

bool FUN_148b6fdb4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6fe48 FUN_148b6fe48 body=230 status=ok
// SIG undefined FUN_148b6fe48(void)

undefined8 * FUN_148b6fe48(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b6ff30 FUN_148b6ff30 body=29 status=ok
// SIG undefined FUN_148b6ff30(void)

undefined8 FUN_148b6ff30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b6ff68 FUN_148b6ff68 body=29 status=ok
// SIG undefined FUN_148b6ff68(void)

bool FUN_148b6ff68(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b6ff86 FUN_148b6ff86 body=26 status=ok
// SIG undefined FUN_148b6ff86(void)

bool FUN_148b6ff86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b6ffa0 FUN_148b6ffa0 body=24 status=ok
// SIG undefined FUN_148b6ffa0(void)

bool FUN_148b6ffa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b6ffc4 FUN_148b6ffc4 body=101 status=ok
// SIG undefined FUN_148b6ffc4(void)

void FUN_148b6ffc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a4870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a4800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7002a FUN_148b7002a body=101 status=ok
// SIG undefined FUN_148b7002a(void)

void FUN_148b7002a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5a4870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a4800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b70090 FUN_148b70090 body=134 status=ok
// SIG undefined FUN_148b70090(void)

void FUN_148b70090(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5a4870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4800;
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
                    /* WARNING: Could not recover jumptable at 0x000148b70107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b70116 FUN_148b70116 body=52 status=ok
// SIG undefined FUN_148b70116(void)

void FUN_148b70116(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b70147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b7014a FUN_148b7014a body=167 status=ok
// SIG undefined FUN_148b7014a(void)

bool FUN_148b7014a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b701f4 FUN_148b701f4 body=360 status=ok
// SIG undefined FUN_148b701f4(void)

undefined4 * FUN_148b701f4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148b7035e(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_148b70444(param_1,uVar8,local_40,&local_4c);
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
      FUN_148b70534(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7035e FUN_148b7035e body=230 status=ok
// SIG undefined FUN_148b7035e(void)

int * FUN_148b7035e(longlong *param_1,int *param_2)

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



// FUNCTION 148b70444 FUN_148b70444 body=125 status=ok
// SIG undefined FUN_148b70444(void)

undefined8 FUN_148b70444(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_148b704c2((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148b704c2 FUN_148b704c2 body=114 status=ok
// SIG undefined FUN_148b704c2(void)

void FUN_148b704c2(longlong *param_1,int param_2)

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



// FUNCTION 148b70534 FUN_148b70534 body=473 status=ok
// SIG undefined FUN_148b70534(void)

void FUN_148b70534(longlong *param_1)

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



// FUNCTION 148b7070e FUN_148b7070e body=29 status=ok
// SIG undefined FUN_148b7070e(void)

undefined8 FUN_148b7070e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b70746 FUN_148b70746 body=29 status=ok
// SIG undefined FUN_148b70746(void)

bool FUN_148b70746(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b70764 FUN_148b70764 body=26 status=ok
// SIG undefined FUN_148b70764(void)

bool FUN_148b70764(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b7077e FUN_148b7077e body=24 status=ok
// SIG undefined FUN_148b7077e(void)

bool FUN_148b7077e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b70796 FUN_148b70796 body=101 status=ok
// SIG undefined FUN_148b70796(void)

void FUN_148b70796(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a48e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b707fc FUN_148b707fc body=101 status=ok
// SIG undefined FUN_148b707fc(void)

void FUN_148b707fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a48e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b70862 FUN_148b70862 body=134 status=ok
// SIG undefined FUN_148b70862(void)

void FUN_148b70862(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a48e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b708d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b708e8 FUN_148b708e8 body=39 status=ok
// SIG undefined FUN_148b708e8(void)

void FUN_148b708e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b7090b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b70910 FUN_148b70910 body=146 status=ok
// SIG undefined FUN_148b70910(void)

bool FUN_148b70910(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b709a4 FUN_148b709a4 body=29 status=ok
// SIG undefined FUN_148b709a4(void)

undefined8 FUN_148b709a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b709dc FUN_148b709dc body=29 status=ok
// SIG undefined FUN_148b709dc(void)

bool FUN_148b709dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b709fa FUN_148b709fa body=26 status=ok
// SIG undefined FUN_148b709fa(void)

bool FUN_148b709fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b70a14 FUN_148b70a14 body=24 status=ok
// SIG undefined FUN_148b70a14(void)

bool FUN_148b70a14(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b70a2c FUN_148b70a2c body=101 status=ok
// SIG undefined FUN_148b70a2c(void)

void FUN_148b70a2c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b70a92 FUN_148b70a92 body=101 status=ok
// SIG undefined FUN_148b70a92(void)

void FUN_148b70a92(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a4950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b70af8 FUN_148b70af8 body=134 status=ok
// SIG undefined FUN_148b70af8(void)

void FUN_148b70af8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a4950;
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
                    /* WARNING: Could not recover jumptable at 0x000148b70b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b70b7e FUN_148b70b7e body=39 status=ok
// SIG undefined FUN_148b70b7e(void)

void FUN_148b70b7e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b70ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b70ba6 FUN_148b70ba6 body=146 status=ok
// SIG undefined FUN_148b70ba6(void)

bool FUN_148b70ba6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b70c3a FUN_148b70c3a body=29 status=ok
// SIG undefined FUN_148b70c3a(void)

undefined8 FUN_148b70c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b70c72 FUN_148b70c72 body=29 status=ok
// SIG undefined FUN_148b70c72(void)

bool FUN_148b70c72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b70c90 FUN_148b70c90 body=26 status=ok
// SIG undefined FUN_148b70c90(void)

bool FUN_148b70c90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b70caa FUN_148b70caa body=24 status=ok
// SIG undefined FUN_148b70caa(void)

bool FUN_148b70caa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b70cc2 FUN_148b70cc2 body=101 status=ok
// SIG undefined FUN_148b70cc2(void)

void FUN_148b70cc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a49c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b70d28 FUN_148b70d28 body=101 status=ok
// SIG undefined FUN_148b70d28(void)

void FUN_148b70d28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b538b70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5a49c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b70d8e FUN_148b70d8e body=134 status=ok
// SIG undefined FUN_148b70d8e(void)

void FUN_148b70d8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b538b70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a49c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b70e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b70e14 FUN_148b70e14 body=52 status=ok
// SIG undefined FUN_148b70e14(void)

void FUN_148b70e14(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b70e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b70e48 FUN_148b70e48 body=167 status=ok
// SIG undefined FUN_148b70e48(void)

bool FUN_148b70e48(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b70f06 FUN_148b70f06 body=88 status=ok
// SIG undefined FUN_148b70f06(void)

void FUN_148b70f06(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b70f60(&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b70f60 FUN_148b70f60 body=222 status=ok
// SIG undefined FUN_148b70f60(void)

longlong * FUN_148b70f60(longlong *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = 0.0;
  if ((DAT_14cb9e638 != 0) && (*(longlong *)(DAT_14cb9e638 + 0x70) != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(DAT_14cb9e638 + 0x70),&local_78);
    dVar1 = ((double)(uStack_50 & 0xffffffff) * (double)(uStack_60 & 0xffffffff) * 1000.0) /
            (double)(local_58 >> 0x20);
  }
  auVar2._0_8_ = dVar1 * 10000.0 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  *param_1 = (longlong)auVar2._0_8_;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71040 FUN_148b71040 body=88 status=ok
// SIG undefined FUN_148b71040(void)

void FUN_148b71040(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b7109a(&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7109a FUN_148b7109a body=222 status=ok
// SIG undefined FUN_148b7109a(void)

longlong * FUN_148b7109a(longlong *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = 0.0;
  if ((DAT_14cb9e638 != 0) && (*(longlong *)(DAT_14cb9e638 + 0x70) != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(DAT_14cb9e638 + 0x70),&local_78);
    dVar1 = ((double)(uStack_50 & 0xffffffff) * (double)(uStack_60 >> 0x20) * 1000.0) /
            (double)(local_58 >> 0x20);
  }
  auVar2._0_8_ = dVar1 * 10000.0 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  *param_1 = (longlong)auVar2._0_8_;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7117c FUN_148b7117c body=96 status=ok
// SIG undefined FUN_148b7117c(void)

void FUN_148b7117c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b711e2 FUN_148b711e2 body=155 status=ok
// SIG undefined FUN_148b711e2(void)

void FUN_148b711e2(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 auStack_98 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    if (uStack_30._4_4_ == 0) {
      bVar1 = *(byte *)(param_1 + 0x100) ^ 1;
      goto LAB_148b71250;
    }
  }
  bVar1 = 0;
LAB_148b71250:
  *param_3 = bVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b712b6 FUN_148b712b6 body=168 status=ok
// SIG undefined FUN_148b712b6(void)

void FUN_148b712b6(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x98) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x98) = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0xa0) = local_20;
    *(undefined4 *)(param_1 + 0xa4) = local_1c;
  }
  FUN_148b724da(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71372 FUN_148b71372 body=601 status=ok
// SIG undefined FUN_148b71372(void)

void FUN_148b71372(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar1 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  local_60 = iVar1 != 0;
  local_68 = local_3c;
  FUN_143fe776a(param_1,local_30,iVar2 != 0,local_38);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b715cc FUN_148b715cc body=88 status=ok
// SIG undefined FUN_148b715cc(void)

void FUN_148b715cc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b71626(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71626 FUN_148b71626 body=213 status=ok
// SIG undefined FUN_148b71626(void)

longlong * FUN_148b71626(longlong param_1,longlong *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    dVar1 = 0.0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    dVar1 = ((double)(uStack_50 & 0xffffffff) * (double)(uStack_60 & 0xffffffff) * 1000.0) /
            (double)(local_58 >> 0x20);
  }
  auVar2._0_8_ = dVar1 * 10000.0 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  *param_2 = (longlong)auVar2._0_8_;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b716fc FUN_148b716fc body=171 status=ok
// SIG undefined FUN_148b716fc(void)

void FUN_148b716fc(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  undefined1 auStack_98 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    fVar1 = 0.0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    fVar1 = 0.0;
    if (uStack_30._4_4_ == 0) {
      fVar1 = (float)(*(byte *)(param_1 + 0x100) ^ 1);
    }
  }
  *param_3 = fVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b717a8 FUN_148b717a8 body=88 status=ok
// SIG undefined FUN_148b717a8(void)

void FUN_148b717a8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b71802(param_1,&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71802 FUN_148b71802 body=213 status=ok
// SIG undefined FUN_148b71802(void)

longlong * FUN_148b71802(longlong param_1,longlong *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    dVar1 = 0.0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    dVar1 = ((double)(uStack_50 & 0xffffffff) * (double)(uStack_60 >> 0x20) * 1000.0) /
            (double)(local_58 >> 0x20);
  }
  auVar2._0_8_ = dVar1 * 10000.0 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  *param_2 = (longlong)auVar2._0_8_;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7191e FUN_148b7191e body=155 status=ok
// SIG undefined FUN_148b7191e(void)

void FUN_148b7191e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    if ((uStack_30._4_4_ < 3) && (uVar1 = 1, uStack_50._4_4_ == 0)) goto LAB_148b71994;
  }
  uVar1 = 0;
LAB_148b71994:
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b719be FUN_148b719be body=155 status=ok
// SIG undefined FUN_148b719be(void)

void FUN_148b719be(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_98 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    uVar1 = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    uVar1 = 1;
    if (uStack_30._4_4_ != 1) {
      uVar1 = *(undefined1 *)(param_1 + 0x100);
    }
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71a5e FUN_148b71a5e body=155 status=ok
// SIG undefined FUN_148b71a5e(void)

void FUN_148b71a5e(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 auStack_98 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_28 = 0;
    FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_78);
    if (uStack_30._4_4_ == 0) {
      bVar1 = *(byte *)(param_1 + 0x100) ^ 1;
      goto LAB_148b71acc;
    }
  }
  bVar1 = 0;
LAB_148b71acc:
  *param_3 = bVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71b22 FUN_148b71b22 body=178 status=ok
// SIG undefined FUN_148b71b22(void)

void FUN_148b71b22(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b71bd6(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71bd6 FUN_148b71bd6 body=167 status=ok
// SIG undefined FUN_148b71bd6(void)

undefined8 FUN_148b71bd6(longlong param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  if ((int)param_2[1] < 2) {
    uVar5 = 0;
  }
  else {
    FUN_144a787a6(param_1 + 0x98);
    FUN_148b724da(param_1);
    iVar7 = *(int *)(param_1 + 200);
    iVar3 = (int)param_2[1];
    if (iVar7 == iVar3) {
      if (iVar7 < 2) {
        return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      }
      uVar4 = *param_2;
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + lVar8);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)(uVar4 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b71c41;
          }
          iVar7 = uVar6 - uVar9;
          goto LAB_148b71c79;
        }
        if (uVar1 == 0) break;
LAB_148b71c41:
        lVar8 = lVar8 + 2;
      }
      iVar7 = 0;
LAB_148b71c79:
      bVar10 = iVar7 == 0;
    }
    else {
      uVar4 = (ulonglong)(uint)(iVar3 + iVar7);
      bVar10 = iVar3 + iVar7 == 1;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),bVar10);
  }
  return uVar5;
}



// FUNCTION 148b71c82 FUN_148b71c82 body=40 status=ok
// SIG undefined FUN_148b71c82(void)

void FUN_148b71c82(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b7203c(param_1,0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b71cae FUN_148b71cae body=45 status=ok
// SIG undefined FUN_148b71cae(void)

void FUN_148b71cae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b7203c(param_1,0x3f800000);
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b71ce0 FUN_148b71ce0 body=86 status=ok
// SIG undefined FUN_148b71ce0(void)

void FUN_148b71ce0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_18 = 0;
  uVar1 = FUN_148b71df0();
  *param_3 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71d3e FUN_148b71d3e body=176 status=ok
// SIG undefined FUN_148b71d3e(void)

void FUN_148b71d3e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b71df0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71df0 FUN_148b71df0 body=227 status=ok
// SIG undefined FUN_148b71df0(void)

bool FUN_148b71df0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_38 = 0;
    FUN_144d6e1b0(lVar1,&local_88);
    iVar2 = (int)(longlong)
                 (((double)(local_68 >> 0x20) * ((double)*param_2 / 10000.0)) /
                 ((double)(uStack_60 & 0xffffffff) * 1000.0)) + 1;
    if (uStack_70._4_4_ != iVar2) {
      FUN_144d6e760(*(undefined8 *)(param_1 + 0xf8),iVar2,0xffffffff);
      *(undefined1 *)(param_1 + 0x101) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71ede FUN_148b71ede body=178 status=ok
// SIG undefined FUN_148b71ede(void)

void FUN_148b71ede(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_144d6e890(*(longlong *)(param_1 + 0xf8),local_24 == 0);
  }
  *param_3 = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b71f98 FUN_148b71f98 body=163 status=ok
// SIG undefined FUN_148b71f98(void)

void FUN_148b71f98(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b7203c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7203c FUN_148b7203c body=332 status=ok
// SIG undefined FUN_148b7203c(void)

undefined8 FUN_148b7203c(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
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
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
LAB_148b7215e:
    uVar1 = 0;
    goto LAB_148b72160;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_38 = 0;
  FUN_144d6e1b0(*(longlong *)(param_1 + 0xf8),&local_88);
  if (uStack_40._4_4_ == 1) {
    if ((param_2 != 1.0) || (NAN(param_2))) goto LAB_148b7215e;
LAB_148b720b8:
    FUN_144d6e6e0(*(undefined8 *)(param_1 + 0xf8),0);
    *(undefined2 *)(param_1 + 0x100) = 0;
  }
  else {
    if (((param_2 == 1.0) && (!NAN(param_2))) && (*(char *)(param_1 + 0x100) != '\0'))
    goto LAB_148b720b8;
    if (uStack_40._4_4_ == 3 && param_2 == 1.0) {
      FUN_144d6e760(*(undefined8 *)(param_1 + 0xf8),1,0xffffffff);
      goto LAB_148b720b8;
    }
    if (param_2 != 0.0 || uStack_40._4_4_ != 0) goto LAB_148b7215e;
    FUN_144d6e6e0(*(undefined8 *)(param_1 + 0xf8),0xffffffff);
    *(undefined1 *)(param_1 + 0x100) = 1;
    FUN_1447cd2ec(param_1 + 0x60,0);
  }
  uVar1 = 1;
LAB_148b72160:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7218a FUN_148b7218a body=188 status=ok
// SIG undefined FUN_148b7218a(void)

void FUN_148b7218a(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    fVar1 = 1.0;
    if (local_1c <= 1.0) {
      fVar1 = local_1c;
    }
    FUN_144d6e7f0(*(longlong *)(param_1 + 0xf8),~-(uint)(local_1c < 0.0) & (uint)fVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7226a FUN_148b7226a body=241 status=ok
// SIG undefined FUN_148b7226a(void)

void FUN_148b7226a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c == 1.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b723ba FUN_148b723ba body=46 status=ok
// SIG undefined FUN_148b723ba(void)

void FUN_148b723ba(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447b4020();
  if (lVar1 != 0) {
    uVar2 = FUN_1447b4020(param_1);
    FUN_143fe9b12(uVar2);
    return;
  }
  return;
}



// FUNCTION 148b723e8 FUN_148b723e8 body=185 status=ok
// SIG undefined FUN_148b723e8(void)

void FUN_148b723e8(longlong param_1,longlong param_2)

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
  *(longlong *)(param_1 + 0x140) = lVar1;
  FUN_148b72c66(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b724ba FUN_148b724ba body=32 status=ok
// SIG undefined FUN_148b724ba(void)

undefined8 FUN_148b724ba(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UBinkMediaPlayer");
  return param_2;
}



// FUNCTION 148b724da FUN_148b724da body=847 status=ok
// SIG undefined FUN_148b724da(void)

void FUN_148b724da(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined1 local_80 [16];
  longlong local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x98);
  iVar10 = *(int *)(param_1 + 0xa0);
  if (iVar10 == *(int *)(param_1 + 200)) {
    if (1 < iVar10) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*plVar1 + lVar4);
        uVar7 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + lVar4);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_148b72579;
LAB_148b72544:
        lVar4 = lVar4 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148b72544;
      }
      if (uVar6 != uVar8) goto LAB_148b725c4;
    }
LAB_148b72579:
    if ((((*(char *)(param_1 + 0xa8) != *(char *)(param_1 + 0xb8)) ||
         (*(char *)(param_1 + 0xa9) != *(char *)(param_1 + 0xb9))) ||
        (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xbc))) ||
       ((*(uint *)(param_1 + 0xd0) != (uint)*(byte *)(param_1 + 0xb0) ||
        (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xd4))))) goto LAB_148b725c4;
  }
  else {
    if (*(int *)(param_1 + 200) + iVar10 == 1) goto LAB_148b72579;
LAB_148b725c4:
    FUN_14168f7ce(param_1);
    if (*(int *)(param_1 + 0xa0) < 2) goto LAB_148b725d5;
    plVar3 = (longlong *)FUN_1400dbadc();
    if (*plVar3 == 0) {
      lVar4 = FUN_140e92164();
      *plVar3 = lVar4;
    }
    cVar2 = FUN_1401aeb9c(plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_1 + 0xa0);
      lVar4 = (longlong)local_58;
      _Src = *(void **)(param_1 + 0x98);
      if (lVar4 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,_Src,lVar4 * 2);
      }
    }
    else {
      FUN_1410f2562(&local_70);
      iVar10 = *(int *)(param_1 + 0xa0) + -1;
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar10 = 0;
      }
      FUN_1412cfe60(&local_60,&local_70,iVar10 + 1 + (uint)(local_68 == 0));
      FUN_1401aebe8(&local_60,*(undefined8 *)(param_1 + 0x98),iVar10);
    }
    FUN_140aa5ef8(local_50,&local_60);
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((cVar2 != '\0') && (local_70 != 0)) {
      FUN_1400020a8();
    }
    cVar2 = FUN_143fe82a6(param_1,local_50);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0xa0) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*plVar1;
      }
      FUN_1410f2562(local_90);
      FUN_140aa5ef8(local_80,local_90);
      FUN_148b7291f(&local_60,local_80,puVar5);
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      cVar2 = FUN_143fe82a6(param_1,&local_60);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar2 != '\0') goto LAB_148b726b3;
    }
    else {
LAB_148b726b3:
      iVar10 = *(int *)(param_1 + 0xa0) + -1;
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar10 = 0;
      }
      FUN_1402980a2((longlong *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x98),iVar10);
      *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xac);
      *(uint *)(param_1 + 0xd0) = (uint)*(byte *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xb4);
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_144d6e890(*(longlong *)(param_1 + 0xf8),~*(uint *)(param_1 + 0x70) & 1);
  }
  FUN_148b7203c(param_1,(float)(*(uint *)(param_1 + 0x70) >> 1 & 1));
LAB_148b725d5:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b7282a FUN_148b7282a body=50 status=ok
// SIG undefined FUN_148b7282a(void)

void FUN_148b7282a(longlong param_1)

{
  FUN_1446e0b6e();
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && ((*(uint *)(param_1 + 0x70) & 6) != 4)) {
    FUN_148b724da(param_1);
    return;
  }
  return;
}



// FUNCTION 148b7285c FUN_148b7285c body=194 status=ok
// SIG undefined FUN_148b7285c(void)

void FUN_148b7285c(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447f69b6(param_1 + 0xe0);
  local_40 = (void *)0x0;
  local_38 = (int)param_2[1];
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_148b7117c(param_1 + 0x40,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7291f FUN_148b7291f body=462 status=ok
// SIG undefined FUN_148b7291f(void)

longlong * FUN_148b7291f(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  uint local_68;
  longlong local_60 [2];
  undefined8 local_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(local_60,uVar1,L"Bink/");
  FUN_140aa5ef8(&local_50,local_60);
  FUN_144a882a8(&local_40,&local_50,param_3);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(param_1,param_2,param_3);
  local_68 = 1;
  FUN_140807d8e(&local_40,&local_50,&DAT_14b5a807a,&DAT_149e065c6);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  local_40 = (undefined4)local_50;
  uStack_3c = local_50._4_4_;
  iStack_38 = iStack_48;
  uStack_34 = uStack_44;
  local_68 = 1;
  FUN_140807d8e(param_1,&local_50,&DAT_14b5a807a,&DAT_149e065c6);
  if (&local_50 == param_1) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
    local_50 = 0;
    *(int *)(param_1 + 1) = iStack_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_44;
  }
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar3;
  }
  puVar4 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if ((int)param_1[1] != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  if (iStack_38 != 0) {
    puVar4 = (undefined2 *)CONCAT44(uStack_3c,local_40);
  }
  local_68 = local_68 & 0xffffff00;
  (**(code **)(*plVar3 + 0x1e0))(plVar3,puVar4,puVar5,0);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b72aee FUN_148b72aee body=376 status=ok
// SIG undefined FUN_148b72aee(void)

void FUN_148b72aee(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
                  undefined1 param_9)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(char *)(param_1 + 0xb0) == '\0')) {
    FUN_144d6e8f0(*(longlong *)(param_1 + 0xf8),param_5,0x3f800000,param_6);
    FUN_144d6e970(*(undefined8 *)(param_1 + 0xf8),param_7);
    FUN_144d6ea00(*(undefined8 *)(param_1 + 0xf8),(uint)param_8 << 0x1f);
    FUN_144d6e9c0(*(undefined8 *)(param_1 + 0xf8),param_9);
    FUN_144d6e390(*(undefined8 *)(param_1 + 0xf8),(float)*(double *)(param_1 + 0x78),
                  (float)*(double *)(param_1 + 0x80),(float)*(double *)(param_1 + 0x88),
                  (float)*(double *)(param_1 + 0x90),0,*param_2,param_3,param_4);
    uVar2 = DAT_14cb9e630;
    lVar4 = (longlong)(int)DAT_14cb9e630;
    DAT_14cb9e630 = DAT_14cb9e630 + 1;
    if (DAT_14cb9e634 < DAT_14cb9e630) {
      FUN_14632596a(&DAT_14cb9e628,uVar2);
    }
    lVar3 = *param_2;
    *(longlong *)(DAT_14cb9e628 + lVar4 * 8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
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



// FUNCTION 148b72c66 FUN_148b72c66 body=349 status=ok
// SIG undefined FUN_148b72c66(void)

void FUN_148b72c66(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined1 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[0x28];
  lVar1 = param_1[0x2c];
  if (lVar4 == lVar1) {
LAB_148b72d45:
    if (lVar4 == 0) goto LAB_148b72cc4;
    if (*(longlong *)(lVar4 + 0xf8) == 0) {
      iVar3 = 0;
      iVar2 = 0;
    }
    else {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (undefined1 *)0x0;
      uStack_70 = 0;
      local_28 = 0;
      FUN_144d6e1b0(*(longlong *)(lVar4 + 0xf8),&local_78);
      iVar3 = (int)local_68;
      iVar2 = local_68._4_4_;
    }
    if (((iVar3 == (int)param_1[0x2b]) && (iVar2 == *(int *)((longlong)param_1 + 0x15c))) ||
       (iVar3 == 0 && iVar2 == 0)) goto LAB_148b72ce4;
    param_1[0x2b] = CONCAT44(iVar2,iVar3);
  }
  else {
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0xe0,param_1);
      lVar4 = param_1[0x28];
    }
    param_1[0x2c] = lVar4;
    if (lVar4 != 0) {
      local_78 = &LAB_148b72f38;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      FUN_148b72e38(lVar4 + 0xe0,local_80,param_1);
      lVar4 = param_1[0x28];
      goto LAB_148b72d45;
    }
LAB_148b72cc4:
    if (((int)param_1[0x2b] == 0) && (*(int *)((longlong)param_1 + 0x15c) == 0)) goto LAB_148b72ce4;
    param_1[0x2b] = 0;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
LAB_148b72ce4:
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b72dc4 FUN_148b72dc4 body=76 status=ok
// SIG undefined FUN_148b72dc4(void)

undefined8 FUN_148b72dc4(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%dx%d [%s]",*(undefined4 *)(param_1 + 0x158),
                *(undefined4 *)(param_1 + 0x15c),
                *(undefined8 *)
                 ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(param_1 + 0x148) * 0x30)));
  return param_2;
}



// FUNCTION 148b72e10 FUN_148b72e10 body=39 status=ok
// SIG undefined FUN_148b72e10(void)

void FUN_148b72e10(longlong param_1)

{
  FUN_140265b64();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    return;
  }
  FUN_148b72c66(param_1);
  return;
}



// FUNCTION 148b72e38 FUN_148b72e38 body=254 status=ok
// SIG undefined FUN_148b72e38(void)

undefined8
FUN_148b72e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b5a8a90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b72f3e FUN_148b72f3e body=136 status=ok
// SIG undefined FUN_148b72f3e(void)

undefined8 * FUN_148b72f3e(longlong param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x148);
  FUN_1414e9958(puVar2);
  *puVar2 = &PTR_FUN_14a3cb4f0;
  puVar2[9] = 0;
  FUN_145db65c4(puVar2 + 10);
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x71) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x79) = 0;
  *puVar2 = &PTR_FUN_14b5a8590;
  puVar2[10] = &PTR_LAB_14b5a8630;
  puVar2[0xc] = &PTR_FUN_14b5a86b0;
  puVar2[0x11] = param_1;
  *(undefined1 *)(puVar2 + 0x12) = uVar1;
  return puVar2;
}



// FUNCTION 148b72fc6 FUN_148b72fc6 body=72 status=ok
// SIG undefined FUN_148b72fc6(void)

void FUN_148b72fc6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_14047a8f2();
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147d713aa(param_1 + 0x60);
  return;
}



// FUNCTION 148b7300e FUN_148b7300e body=494 status=ok
// SIG undefined FUN_148b7300e(void)

void FUN_148b7300e(longlong param_1)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong *local_c0;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x140);
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar10);
  }
  else if (lVar10 == 0) goto LAB_148b73116;
  if (*(longlong *)(lVar10 + 0xf8) == 0) goto LAB_148b73116;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_68 = 0;
  FUN_144d6e1b0(*(longlong *)(lVar10 + 0xf8),&local_b8);
  if ((uStack_70._4_4_ != 0) || (*(char *)(lVar10 + 0x100) != '\0')) {
    if (*(longlong *)(lVar10 + 0xf8) == 0) goto LAB_148b73116;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_68 = 0;
    FUN_144d6e1b0(*(longlong *)(lVar10 + 0xf8),&local_b8);
    if ((uStack_70._4_4_ != 1) && (*(char *)(lVar10 + 0x100) == '\0')) goto LAB_148b73116;
  }
  plVar11 = *(longlong **)(param_1 + -0x50);
  if (plVar11 != (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    if (*(char *)((longlong)plVar11 + 0x52) == '\0') {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      plVar12 = plVar11;
    }
    if (plVar12 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
      uVar8 = *(undefined4 *)(lVar13 + 0x24);
      lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
      uVar9 = *(undefined4 *)(lVar13 + 0x28);
      cVar5 = *(char *)(param_1 + 0x30);
      lVar13 = *(longlong *)(param_1 + 0x28);
      fVar2 = *(float *)(lVar13 + 0x14c);
      uVar6 = *(undefined1 *)(lVar13 + 0x154);
      uVar3 = *(undefined4 *)(lVar13 + 0x150);
      uVar7 = *(undefined1 *)(lVar13 + 0x149);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      local_c8 = cVar5 != '\x02';
      local_e8 = uVar7;
      local_e0 = (int)fVar2;
      local_d8 = uVar3;
      local_d0 = uVar6;
      local_c0 = plVar12;
      FUN_148b72aee(lVar10,&local_c0,uVar8,uVar9);
      LOCK();
      puVar1 = (uint *)(plVar12 + 1);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812(plVar12);
      }
    }
  }
LAB_148b73116:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b731fd FUN_148b731fd body=35 status=ok
// SIG undefined FUN_148b731fd(void)

void FUN_148b731fd(void)

{
  if (DAT_14cb9e6c0 != 0) {
    (**(code **)(DAT_14cb9e6c0 + 8))();
    DAT_14cb9e6c0 = 0;
  }
  return;
}



// FUNCTION 148b7325a FUN_148b7325a body=45 status=ok
// SIG undefined FUN_148b7325a(void)

longlong FUN_148b7325a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145fdbd4c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b732b2 FUN_148b732b2 body=48 status=ok
// SIG undefined FUN_148b732b2(void)

longlong FUN_148b732b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b732e2 FUN_148b732e2 body=48 status=ok
// SIG undefined FUN_148b732e2(void)

longlong FUN_148b732e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7335a FUN_148b7335a body=107 status=ok
// SIG undefined FUN_148b7335a(void)

longlong * FUN_148b7335a(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14590a1bc();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
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



// FUNCTION 148b733c6 FUN_148b733c6 body=50 status=ok
// SIG undefined FUN_148b733c6(void)

longlong FUN_148b733c6(longlong param_1,int param_2)

{
  FUN_145de9554(param_1 + 0x50);
  FUN_1401c04d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b73414 FUN_148b73414 body=29 status=ok
// SIG undefined FUN_148b73414(void)

undefined8 FUN_148b73414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7344c FUN_148b7344c body=29 status=ok
// SIG undefined FUN_148b7344c(void)

bool FUN_148b7344c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b7346a FUN_148b7346a body=26 status=ok
// SIG undefined FUN_148b7346a(void)

bool FUN_148b7346a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b73484 FUN_148b73484 body=24 status=ok
// SIG undefined FUN_148b73484(void)

bool FUN_148b73484(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b7349c FUN_148b7349c body=101 status=ok
// SIG undefined FUN_148b7349c(void)

void FUN_148b7349c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a8a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b73502 FUN_148b73502 body=101 status=ok
// SIG undefined FUN_148b73502(void)

void FUN_148b73502(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a8a90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b73568 FUN_148b73568 body=134 status=ok
// SIG undefined FUN_148b73568(void)

void FUN_148b73568(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a8a90;
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
                    /* WARNING: Could not recover jumptable at 0x000148b735df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b735ee FUN_148b735ee body=39 status=ok
// SIG undefined FUN_148b735ee(void)

void FUN_148b735ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b73611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148b73616 FUN_148b73616 body=146 status=ok
// SIG undefined FUN_148b73616(void)

bool FUN_148b73616(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b736aa FUN_148b736aa body=31 status=ok
// SIG undefined FUN_148b736aa(void)

undefined8 FUN_148b736aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b736e6 FUN_148b736e6 body=93 status=ok
// SIG undefined FUN_148b736e6(void)

void FUN_148b736e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a8b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b73744 FUN_148b73744 body=126 status=ok
// SIG undefined FUN_148b73744(void)

void FUN_148b73744(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a8b80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b737b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b737c2 FUN_148b737c2 body=21 status=ok
// SIG undefined FUN_148b737c2(void)

undefined8 FUN_148b737c2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b737d8 FUN_148b737d8 body=39 status=ok
// SIG undefined FUN_148b737d8(void)

longlong FUN_148b737d8(longlong param_1,int param_2)

{
  FUN_140af926c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 148b7381c FUN_148b7381c body=101 status=ok
// SIG undefined FUN_148b7381c(void)

void FUN_148b7381c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a8cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b73882 FUN_148b73882 body=101 status=ok
// SIG undefined FUN_148b73882(void)

void FUN_148b73882(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5a8cb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b738e8 FUN_148b738e8 body=134 status=ok
// SIG undefined FUN_148b738e8(void)

void FUN_148b738e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5a8cb0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b7395f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7397e FUN_148b7397e body=158 status=ok
// SIG undefined FUN_148b7397e(void)

void FUN_148b7397e(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144b3d940();
  FUN_144b3d920(0);
  FUN_144b3d960();
  if (DAT_14cb9e630 != 0) {
    FUN_144d6e130(1,0);
    FUN_1461e29ae(DAT_14cb9e628,DAT_14cb9e630);
    DAT_14cb9e630 = 0;
    if (DAT_14cb9e634 != 0x100) {
      FUN_147461ee0(&DAT_14cb9e628,0x100);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b73a1e FUN_148b73a1e body=79 status=ok
// SIG undefined FUN_148b73a1e(void)

void FUN_148b73a1e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148b7397e();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148b7397e();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148b73a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148b73a6e FUN_148b73a6e body=122 status=ok
// SIG undefined FUN_148b73a6e(void)

void FUN_148b73a6e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 148b73ae8 FUN_148b73ae8 body=156 status=ok
// SIG undefined FUN_148b73ae8(void)

void FUN_148b73ae8(undefined8 param_1,longlong param_2)

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
  FUN_143ff111c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b73b9c FUN_148b73b9c body=210 status=ok
// SIG undefined FUN_148b73b9c(void)

void FUN_148b73b9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x488) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x490), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    *(undefined1 *)(param_1 + 0x5c9) = 0;
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1404d222a(0,*(undefined4 *)(param_1 + 0x5c4),0);
        goto LAB_148b73c2d;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_1404d222a(*(undefined8 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x5c4),0);
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
LAB_148b73c2d:
    plVar3 = *(longlong **)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  FUN_143ffcbb0(*(undefined8 *)(param_1 + 0x458));
  FUN_140aeefbc(param_1,0,1);
  return;
}



// FUNCTION 148b73c72 FUN_148b73c72 body=195 status=ok
// SIG undefined FUN_148b73c72(void)

void FUN_148b73c72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  FUN_143ff1654(param_1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b73d36 FUN_148b73d36 body=96 status=ok
// SIG undefined FUN_148b73d36(void)

void FUN_148b73d36(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_148b73d98(param_1,&local_30);
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



// FUNCTION 148b73d98 FUN_148b73d98 body=138 status=ok
// SIG undefined FUN_148b73d98(void)

undefined8 * FUN_148b73d98(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x450) != 0) {
    lVar4 = FUN_144a7cacc();
    lVar1 = *(longlong *)(param_1 + 0x450);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      (**(code **)(**(longlong **)(lVar1 + 0x428) + 0x4b0))
                (*(longlong **)(lVar1 + 0x428),param_2,DAT_14cb9e9f8);
      return param_2;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x628);
  *param_2 = *(undefined8 *)(param_1 + 0x620);
  param_2[1] = uVar3;
  param_2[2] = *(undefined8 *)(param_1 + 0x630);
  return param_2;
}



// FUNCTION 148b73e4e FUN_148b73e4e body=156 status=ok
// SIG undefined FUN_148b73e4e(void)

void FUN_148b73e4e(undefined8 param_1,longlong param_2)

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
  FUN_143ff467a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b73eec FUN_148b73eec body=156 status=ok
// SIG undefined FUN_148b73eec(void)

void FUN_148b73eec(undefined8 param_1,longlong param_2)

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
  FUN_143ff4952(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b73fa0 FUN_148b73fa0 body=312 status=ok
// SIG undefined FUN_148b73fa0(void)

void FUN_148b73fa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    iVar4 = 0;
    if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) {
      uVar3 = 0;
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8);
      uVar3 = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
        uVar3 = local_28;
        iVar4 = (int)((ulonglong)local_28 >> 0x20);
        FUN_1434fef78(*(undefined8 *)(DAT_14cb0d2b0 + 0xc20),1);
      }
    }
    if (DAT_14cb0d2b0 != 0 && (iVar4 < 1 || (int)uVar3 < 1)) {
      lVar2 = FUN_141283ace();
      if (lVar2 != 0) {
        uVar3 = FUN_141283ace(DAT_14cb0d2b0);
        FUN_1459c9ffc(uVar3,&local_28);
        iVar4 = (int)((ulonglong)local_28 >> 0x20);
        uVar3 = local_28;
      }
    }
    if ((0 < (int)uVar3) && (0 < iVar4)) {
      *(float *)(*(longlong *)(param_1 + 0x460) + 0xc48) =
           *(float *)(*(longlong *)(param_1 + 0x460) + 0xc44) / ((float)(int)uVar3 / (float)iVar4);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x460) + 0x5d8))
            (*(longlong **)(param_1 + 0x460),0x42b40000);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b740de FUN_148b740de body=162 status=ok
// SIG undefined FUN_148b740de(void)

void FUN_148b740de(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x5e0) = local_1c != 0;
  FUN_143ffb8d0(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74186 FUN_148b74186 body=158 status=ok
// SIG undefined FUN_148b74186(void)

void FUN_148b74186(undefined8 param_1,longlong param_2)

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
  FUN_143ff5ede(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74226 FUN_148b74226 body=260 status=ok
// SIG undefined FUN_148b74226(void)

void FUN_148b74226(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_143ff7144(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7432c FUN_148b7432c body=154 status=ok
// SIG undefined FUN_148b7432c(void)

void FUN_148b7432c(undefined8 param_1,longlong param_2)

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
  FUN_143ff72c2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b743cc FUN_148b743cc body=158 status=ok
// SIG undefined FUN_148b743cc(void)

void FUN_148b743cc(undefined8 param_1,longlong param_2)

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
  FUN_143ff7fae(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7446c FUN_148b7446c body=260 status=ok
// SIG undefined FUN_148b7446c(void)

void FUN_148b7446c(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_143ff9202(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74576 FUN_148b74576 body=158 status=ok
// SIG undefined FUN_148b74576(void)

void FUN_148b74576(undefined8 param_1,longlong param_2)

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
  FUN_143ff95c6(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74630 FUN_148b74630 body=158 status=ok
// SIG undefined FUN_148b74630(void)

void FUN_148b74630(undefined8 param_1,longlong param_2)

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
  FUN_143ffab78(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b746d0 FUN_148b746d0 body=156 status=ok
// SIG undefined FUN_148b746d0(void)

void FUN_148b746d0(undefined8 param_1,longlong param_2)

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
  FUN_148b7476e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7476e FUN_148b7476e body=150 status=ok
// SIG undefined FUN_148b7476e(void)

void FUN_148b7476e(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((((*(longlong *)(param_1 + 0x488) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x490), plVar3 != (longlong *)0x0)) &&
      (0 < (int)plVar3[1])) && (*(char *)(param_1 + 0x5c8) == '\x01')) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1457d922a(0,param_2 / 24.0,0);
        goto LAB_148b747ed;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_1457d922a(*(undefined8 *)(param_1 + 0x488),param_2 / 24.0,0);
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
LAB_148b747ed:
  if (*(char *)(param_1 + 0x5c8) == '\0') {
    *(undefined1 *)(param_1 + 0x5c8) = 1;
  }
  return;
}



// FUNCTION 148b74820 FUN_148b74820 body=50 status=ok
// SIG undefined FUN_148b74820(void)

void FUN_148b74820(longlong param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141498992();
  *(bool *)param_3 = *(int *)(param_1 + 0x88) != 0;
  return;
}



// FUNCTION 148b74852 FUN_148b74852 body=38 status=ok
// SIG undefined FUN_148b74852(void)

void FUN_148b74852(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b74878();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b74878 FUN_148b74878 body=169 status=ok
// SIG undefined FUN_148b74878(void)

undefined8 FUN_148b74878(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x58);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x58);
    return uVar2;
  }
  cVar1 = FUN_144729dda(param_1 + 0x40);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x40);
LAB_148b748b7:
                    /* WARNING: Could not recover jumptable at 0x000148b748c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x6b8))(plVar3);
    return uVar2;
  }
  cVar1 = FUN_144729dda(param_1 + 0x50);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x50);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_144a78b9e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x5d0))(plVar3);
        goto LAB_148b748b7;
      }
    }
  }
  return 0;
}



// FUNCTION 148b74922 FUN_148b74922 body=179 status=ok
// SIG undefined FUN_148b74922(void)

void FUN_148b74922(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b749d6(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b749d6 FUN_148b749d6 body=1165 status=ok
// SIG undefined FUN_148b749d6(void)

undefined8 FUN_148b749d6(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x98) == 0) {
    FUN_145ac5b92(param_1);
    if (*(int *)(param_1 + 0x98) != 0) goto LAB_148b749ff;
LAB_148b74d62:
    uVar5 = 0;
  }
  else {
LAB_148b749ff:
    FUN_140056680(&local_30,L"pose_1");
    iVar4 = (int)param_2[1];
    if (iVar4 == local_28) {
      bVar8 = true;
      if (1 < iVar4) {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_2 + lVar6);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(local_30 + lVar6);
          uVar7 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b74a4e;
            }
            iVar4 = uVar3 - uVar7;
            goto LAB_148b74be3;
          }
          if (uVar1 == 0) break;
LAB_148b74a4e:
          lVar6 = lVar6 + 2;
        }
        iVar4 = 0;
LAB_148b74be3:
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = local_28 + iVar4 == 1;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar8) {
      lVar6 = *(longlong *)(param_1 + 0x90);
    }
    else {
      FUN_140056680(&local_30,L"pose_2");
      iVar4 = (int)param_2[1];
      if (iVar4 == local_28) {
        bVar8 = true;
        if (1 < iVar4) {
          lVar6 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*param_2 + lVar6);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(local_30 + lVar6);
            uVar7 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b74b0f;
              }
              iVar4 = uVar3 - uVar7;
              goto LAB_148b74c95;
            }
            if (uVar1 == 0) break;
LAB_148b74b0f:
            lVar6 = lVar6 + 2;
          }
          iVar4 = 0;
LAB_148b74c95:
          bVar8 = iVar4 == 0;
        }
      }
      else {
        bVar8 = local_28 + iVar4 == 1;
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (bVar8) {
        lVar6 = *(longlong *)(param_1 + 0x90) + 8;
      }
      else {
        FUN_140056680(&local_30,L"pose_3");
        iVar4 = (int)param_2[1];
        if (iVar4 == local_28) {
          bVar8 = true;
          if (1 < iVar4) {
            lVar6 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*param_2 + lVar6);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)(local_30 + lVar6);
              uVar7 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b74bb5;
                }
                iVar4 = uVar3 - uVar7;
                goto LAB_148b74d6b;
              }
              if (uVar1 == 0) break;
LAB_148b74bb5:
              lVar6 = lVar6 + 2;
            }
            iVar4 = 0;
LAB_148b74d6b:
            bVar8 = iVar4 == 0;
          }
        }
        else {
          bVar8 = local_28 + iVar4 == 1;
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if (bVar8) {
          lVar6 = *(longlong *)(param_1 + 0x90) + 0x10;
        }
        else {
          FUN_140056680(&local_30,L"pose_4");
          iVar4 = (int)param_2[1];
          if (iVar4 == local_28) {
            bVar8 = true;
            if (1 < iVar4) {
              lVar6 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*param_2 + lVar6);
                uVar3 = (uint)uVar1;
                uVar2 = *(ushort *)(local_30 + lVar6);
                uVar7 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b74c67;
                  }
                  iVar4 = uVar3 - uVar7;
                  goto LAB_148b74e16;
                }
                if (uVar1 == 0) break;
LAB_148b74c67:
                lVar6 = lVar6 + 2;
              }
              iVar4 = 0;
LAB_148b74e16:
              bVar8 = iVar4 == 0;
            }
          }
          else {
            bVar8 = local_28 + iVar4 == 1;
          }
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          if (bVar8) {
            lVar6 = *(longlong *)(param_1 + 0x90) + 0x18;
          }
          else {
            FUN_140056680(&local_30,L"pose_5");
            iVar4 = (int)param_2[1];
            if (iVar4 == local_28) {
              bVar8 = true;
              if (1 < iVar4) {
                lVar6 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(*param_2 + lVar6);
                  uVar3 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_30 + lVar6);
                  uVar7 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b74d21;
                    }
                    iVar4 = uVar3 - uVar7;
                    goto LAB_148b74e51;
                  }
                  if (uVar1 == 0) break;
LAB_148b74d21:
                  lVar6 = lVar6 + 2;
                }
                iVar4 = 0;
LAB_148b74e51:
                bVar8 = iVar4 == 0;
              }
            }
            else {
              bVar8 = local_28 + iVar4 == 1;
            }
            if (local_30 != 0) {
              FUN_1400020a8();
            }
            if (bVar8) {
              lVar6 = *(longlong *)(param_1 + 0x90) + 0x20;
            }
            else {
              FUN_140056680(&local_30,L"pose_6");
              iVar4 = (int)param_2[1];
              if (iVar4 == local_28) {
                bVar8 = true;
                if (1 < iVar4) {
                  lVar6 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)(*param_2 + lVar6);
                    uVar3 = (uint)uVar1;
                    uVar2 = *(ushort *)(local_30 + lVar6);
                    uVar7 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b74deb;
                      }
                      iVar4 = uVar3 - uVar7;
                      goto LAB_148b74e5d;
                    }
                    if (uVar1 == 0) break;
LAB_148b74deb:
                    lVar6 = lVar6 + 2;
                  }
                  iVar4 = 0;
LAB_148b74e5d:
                  bVar8 = iVar4 == 0;
                }
              }
              else {
                bVar8 = local_28 + iVar4 == 1;
              }
              if (local_30 != 0) {
                FUN_1400020a8();
              }
              if (!bVar8) goto LAB_148b74d62;
              lVar6 = *(longlong *)(param_1 + 0x90) + 0x28;
            }
          }
        }
      }
    }
    uVar5 = FUN_14479d2ce(lVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74e64 FUN_148b74e64 body=205 status=ok
// SIG undefined FUN_148b74e64(void)

void FUN_148b74e64(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  int local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = (longlong)local_24;
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_141498992(param_1);
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar1 = 0;
      goto LAB_148b74eda;
    }
  }
  uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x80) + lVar2 * 8 + -8);
LAB_148b74eda:
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74f32 FUN_148b74f32 body=38 status=ok
// SIG undefined FUN_148b74f32(void)

void FUN_148b74f32(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145ac5a08();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b74f58 FUN_148b74f58 body=38 status=ok
// SIG undefined FUN_148b74f58(void)

void FUN_148b74f58(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414987b4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b74f7e FUN_148b74f7e body=117 status=ok
// SIG undefined FUN_148b74f7e(void)

void FUN_148b74f7e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ffc38c(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b74ff4 FUN_148b74ff4 body=179 status=ok
// SIG undefined FUN_148b74ff4(void)

void FUN_148b74ff4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b750a8(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b750a8 FUN_148b750a8 body=351 status=ok
// SIG undefined FUN_148b750a8(void)

undefined8 FUN_148b750a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 0) {
    FUN_141498992(param_1);
    iVar5 = *(int *)(param_1 + 0x88);
    if (iVar5 == 0) goto LAB_148b751d9;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x80);
  puVar1 = puVar9 + iVar5;
  do {
    local_58 = *puVar9;
    lVar6 = FUN_14479d2ce(&local_58);
    local_50 = *(undefined8 *)(lVar6 + 0x18);
    FUN_1400021e4(&local_50,&local_68);
    if (local_60 == (int)param_2[1]) {
      bVar10 = true;
      if (1 < local_60) {
        lVar6 = 0;
        while( true ) {
          uVar2 = *(ushort *)(local_68 + lVar6);
          uVar4 = (uint)uVar2;
          uVar3 = *(ushort *)(*param_2 + lVar6);
          uVar8 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_148b75155;
            }
            iVar5 = uVar4 - uVar8;
            goto LAB_148b751af;
          }
          if (uVar2 == 0) break;
LAB_148b75155:
          lVar6 = lVar6 + 2;
        }
        iVar5 = 0;
LAB_148b751af:
        bVar10 = iVar5 == 0;
      }
    }
    else {
      bVar10 = (int)param_2[1] + local_60 == 1;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (bVar10) {
      uVar7 = FUN_14479d2ce(&local_58);
      goto LAB_148b751db;
    }
    puVar9 = puVar9 + 1;
  } while (puVar9 != puVar1);
LAB_148b751d9:
  uVar7 = 0;
LAB_148b751db:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 148b75208 FUN_148b75208 body=179 status=ok
// SIG undefined FUN_148b75208(void)

void FUN_148b75208(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b752bc(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b752bc FUN_148b752bc body=3682 status=ok
// SIG undefined FUN_148b752bc(void)

undefined8 FUN_148b752bc(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x88) == 0) && (FUN_141498992(param_1), *(int *)(param_1 + 0x88) == 0)) {
LAB_148b75f5b:
    uVar5 = 0;
  }
  else {
    FUN_140056680(&local_30,L"Jakobs Authentic");
    iVar4 = (int)param_2[1];
    if (iVar4 == local_28) {
      bVar9 = true;
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_2 + lVar7);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(local_30 + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b75334;
            }
            iVar4 = uVar3 - uVar8;
            goto LAB_148b75b4e;
          }
          if (uVar1 == 0) break;
LAB_148b75334:
          lVar7 = lVar7 + 2;
        }
        iVar4 = 0;
LAB_148b75b4e:
        bVar9 = iVar4 == 0;
      }
    }
    else {
      bVar9 = local_28 + iVar4 == 1;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar9) {
      pwVar6 = L"T_Sepia";
    }
    else {
      FUN_140056680(&local_30,L"Sexwash");
      iVar4 = (int)param_2[1];
      if (iVar4 == local_28) {
        bVar9 = true;
        if (1 < iVar4) {
          lVar7 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*param_2 + lVar7);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(local_30 + lVar7);
            uVar8 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b753ce;
              }
              iVar4 = uVar3 - uVar8;
              goto LAB_148b75bf4;
            }
            if (uVar1 == 0) break;
LAB_148b753ce:
            lVar7 = lVar7 + 2;
          }
          iVar4 = 0;
LAB_148b75bf4:
          bVar9 = iVar4 == 0;
        }
      }
      else {
        bVar9 = local_28 + iVar4 == 1;
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (bVar9) {
        pwVar6 = L"T_Lomo";
      }
      else {
        FUN_140056680(&local_30,L"Art House");
        iVar4 = (int)param_2[1];
        if (iVar4 == local_28) {
          bVar9 = true;
          if (1 < iVar4) {
            lVar7 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*param_2 + lVar7);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)(local_30 + lVar7);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b75468;
                }
                iVar4 = uVar3 - uVar8;
                goto LAB_148b75c9a;
              }
              if (uVar1 == 0) break;
LAB_148b75468:
              lVar7 = lVar7 + 2;
            }
            iVar4 = 0;
LAB_148b75c9a:
            bVar9 = iVar4 == 0;
          }
        }
        else {
          bVar9 = local_28 + iVar4 == 1;
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if (bVar9) {
          pwVar6 = L"T_BlackAndWhite";
        }
        else {
          FUN_140056680(&local_30,L"Cinematic");
          iVar4 = (int)param_2[1];
          if (iVar4 == local_28) {
            bVar9 = true;
            if (1 < iVar4) {
              lVar7 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*param_2 + lVar7);
                uVar3 = (uint)uVar1;
                uVar2 = *(ushort *)(local_30 + lVar7);
                uVar8 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b75502;
                  }
                  iVar4 = uVar3 - uVar8;
                  goto LAB_148b75d40;
                }
                if (uVar1 == 0) break;
LAB_148b75502:
                lVar7 = lVar7 + 2;
              }
              iVar4 = 0;
LAB_148b75d40:
              bVar9 = iVar4 == 0;
            }
          }
          else {
            bVar9 = local_28 + iVar4 == 1;
          }
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          if (bVar9) {
            pwVar6 = L"T_Film";
          }
          else {
            FUN_140056680(&local_30,L"Moody");
            iVar4 = (int)param_2[1];
            if (iVar4 == local_28) {
              bVar9 = true;
              if (1 < iVar4) {
                lVar7 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(*param_2 + lVar7);
                  uVar3 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_30 + lVar7);
                  uVar8 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b755b6;
                    }
                    iVar4 = uVar3 - uVar8;
                    goto LAB_148b75de6;
                  }
                  if (uVar1 == 0) break;
LAB_148b755b6:
                  lVar7 = lVar7 + 2;
                }
                iVar4 = 0;
LAB_148b75de6:
                bVar9 = iVar4 == 0;
              }
            }
            else {
              bVar9 = local_28 + iVar4 == 1;
            }
            if (local_30 != 0) {
              FUN_1400020a8();
            }
            if (bVar9) {
              pwVar6 = L"T_Moonlight";
            }
            else {
              FUN_140056680(&local_30,L"No Rest");
              iVar4 = (int)param_2[1];
              if (iVar4 == local_28) {
                bVar9 = true;
                if (1 < iVar4) {
                  lVar7 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)(*param_2 + lVar7);
                    uVar3 = (uint)uVar1;
                    uVar2 = *(ushort *)(local_30 + lVar7);
                    uVar8 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148b75650;
                      }
                      iVar4 = uVar3 - uVar8;
                      goto LAB_148b75e8c;
                    }
                    if (uVar1 == 0) break;
LAB_148b75650:
                    lVar7 = lVar7 + 2;
                  }
                  iVar4 = 0;
LAB_148b75e8c:
                  bVar9 = iVar4 == 0;
                }
              }
              else {
                bVar9 = local_28 + iVar4 == 1;
              }
              if (local_30 != 0) {
                FUN_1400020a8();
              }
              if (bVar9) {
                pwVar6 = L"T_Sunset";
              }
              else {
                FUN_140056680(&local_30,L"Cyanoscope");
                iVar4 = (int)param_2[1];
                if (iVar4 == local_28) {
                  bVar9 = true;
                  if (1 < iVar4) {
                    lVar7 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)(*param_2 + lVar7);
                      uVar3 = (uint)uVar1;
                      uVar2 = *(ushort *)(local_30 + lVar7);
                      uVar8 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_148b756ea;
                        }
                        iVar4 = uVar3 - uVar8;
                        goto LAB_148b75f32;
                      }
                      if (uVar1 == 0) break;
LAB_148b756ea:
                      lVar7 = lVar7 + 2;
                    }
                    iVar4 = 0;
LAB_148b75f32:
                    bVar9 = iVar4 == 0;
                  }
                }
                else {
                  bVar9 = local_28 + iVar4 == 1;
                }
                if (local_30 != 0) {
                  FUN_1400020a8();
                }
                if (bVar9) {
                  pwVar6 = L"T_Teal";
                }
                else {
                  FUN_140056680(&local_30,L"Drowned");
                  iVar4 = (int)param_2[1];
                  if (iVar4 == local_28) {
                    bVar9 = true;
                    if (1 < iVar4) {
                      lVar7 = 0;
                      while( true ) {
                        uVar1 = *(ushort *)(*param_2 + lVar7);
                        uVar3 = (uint)uVar1;
                        uVar2 = *(ushort *)(local_30 + lVar7);
                        uVar8 = (uint)uVar2;
                        if (uVar1 != uVar2) {
                          if ((uVar2 | uVar1) < 0x80) {
                            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                            goto LAB_148b75784;
                          }
                          iVar4 = uVar3 - uVar8;
                          goto LAB_148b75f81;
                        }
                        if (uVar1 == 0) break;
LAB_148b75784:
                        lVar7 = lVar7 + 2;
                      }
                      iVar4 = 0;
LAB_148b75f81:
                      bVar9 = iVar4 == 0;
                    }
                  }
                  else {
                    bVar9 = local_28 + iVar4 == 1;
                  }
                  if (local_30 != 0) {
                    FUN_1400020a8();
                  }
                  if (bVar9) {
                    pwVar6 = L"T_Underwater";
                  }
                  else {
                    FUN_140056680(&local_30,L"Meaty");
                    iVar4 = (int)param_2[1];
                    if (iVar4 == local_28) {
                      bVar9 = true;
                      if (1 < iVar4) {
                        lVar7 = 0;
                        while( true ) {
                          uVar1 = *(ushort *)(*param_2 + lVar7);
                          uVar3 = (uint)uVar1;
                          uVar2 = *(ushort *)(local_30 + lVar7);
                          uVar8 = (uint)uVar2;
                          if (uVar1 != uVar2) {
                            if ((uVar2 | uVar1) < 0x80) {
                              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                              goto LAB_148b7581e;
                            }
                            iVar4 = uVar3 - uVar8;
                            goto LAB_148b75f8d;
                          }
                          if (uVar1 == 0) break;
LAB_148b7581e:
                          lVar7 = lVar7 + 2;
                        }
                        iVar4 = 0;
LAB_148b75f8d:
                        bVar9 = iVar4 == 0;
                      }
                    }
                    else {
                      bVar9 = local_28 + iVar4 == 1;
                    }
                    if (local_30 != 0) {
                      FUN_1400020a8();
                    }
                    if (bVar9) {
                      pwVar6 = L"T_Warm";
                    }
                    else {
                      FUN_140056680(&local_30,L"Negaton");
                      iVar4 = (int)param_2[1];
                      if (iVar4 == local_28) {
                        bVar9 = true;
                        if (1 < iVar4) {
                          lVar7 = 0;
                          while( true ) {
                            uVar1 = *(ushort *)(*param_2 + lVar7);
                            uVar3 = (uint)uVar1;
                            uVar2 = *(ushort *)(local_30 + lVar7);
                            uVar8 = (uint)uVar2;
                            if (uVar1 != uVar2) {
                              if ((uVar2 | uVar1) < 0x80) {
                                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                goto LAB_148b758b8;
                              }
                              iVar4 = uVar3 - uVar8;
                              goto LAB_148b75f99;
                            }
                            if (uVar1 == 0) break;
LAB_148b758b8:
                            lVar7 = lVar7 + 2;
                          }
                          iVar4 = 0;
LAB_148b75f99:
                          bVar9 = iVar4 == 0;
                        }
                      }
                      else {
                        bVar9 = local_28 + iVar4 == 1;
                      }
                      if (local_30 != 0) {
                        FUN_1400020a8();
                      }
                      if (bVar9) {
                        pwVar6 = L"T_Negative";
                      }
                      else {
                        FUN_140056680(&local_30,L"Lowlight");
                        iVar4 = (int)param_2[1];
                        if (iVar4 == local_28) {
                          bVar9 = true;
                          if (1 < iVar4) {
                            lVar7 = 0;
                            while( true ) {
                              uVar1 = *(ushort *)(*param_2 + lVar7);
                              uVar3 = (uint)uVar1;
                              uVar2 = *(ushort *)(local_30 + lVar7);
                              uVar8 = (uint)uVar2;
                              if (uVar1 != uVar2) {
                                if ((uVar2 | uVar1) < 0x80) {
                                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                  goto LAB_148b75952;
                                }
                                iVar4 = uVar3 - uVar8;
                                goto LAB_148b75fa5;
                              }
                              if (uVar1 == 0) break;
LAB_148b75952:
                              lVar7 = lVar7 + 2;
                            }
                            iVar4 = 0;
LAB_148b75fa5:
                            bVar9 = iVar4 == 0;
                          }
                        }
                        else {
                          bVar9 = local_28 + iVar4 == 1;
                        }
                        if (local_30 != 0) {
                          FUN_1400020a8();
                        }
                        if (bVar9) {
                          pwVar6 = L"T_Cold_Darkness";
                        }
                        else {
                          FUN_140056680(&local_30,L"Acid Funk");
                          iVar4 = (int)param_2[1];
                          if (iVar4 == local_28) {
                            bVar9 = true;
                            if (1 < iVar4) {
                              lVar7 = 0;
                              while( true ) {
                                uVar1 = *(ushort *)(*param_2 + lVar7);
                                uVar3 = (uint)uVar1;
                                uVar2 = *(ushort *)(local_30 + lVar7);
                                uVar8 = (uint)uVar2;
                                if (uVar1 != uVar2) {
                                  if ((uVar2 | uVar1) < 0x80) {
                                    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                    uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                    goto LAB_148b759ec;
                                  }
                                  iVar4 = uVar3 - uVar8;
                                  goto LAB_148b75fb1;
                                }
                                if (uVar1 == 0) break;
LAB_148b759ec:
                                lVar7 = lVar7 + 2;
                              }
                              iVar4 = 0;
LAB_148b75fb1:
                              bVar9 = iVar4 == 0;
                            }
                          }
                          else {
                            bVar9 = local_28 + iVar4 == 1;
                          }
                          if (local_30 != 0) {
                            FUN_1400020a8();
                          }
                          if (bVar9) {
                            pwVar6 = L"T_Trip";
                          }
                          else {
                            FUN_140056680(&local_30,L"Predatory");
                            iVar4 = (int)param_2[1];
                            if (iVar4 == local_28) {
                              bVar9 = true;
                              if (1 < iVar4) {
                                lVar7 = 0;
                                while( true ) {
                                  uVar1 = *(ushort *)(*param_2 + lVar7);
                                  uVar3 = (uint)uVar1;
                                  uVar2 = *(ushort *)(local_30 + lVar7);
                                  uVar8 = (uint)uVar2;
                                  if (uVar1 != uVar2) {
                                    if ((uVar2 | uVar1) < 0x80) {
                                      uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                      goto LAB_148b75a86;
                                    }
                                    iVar4 = uVar3 - uVar8;
                                    goto LAB_148b75fbd;
                                  }
                                  if (uVar1 == 0) break;
LAB_148b75a86:
                                  lVar7 = lVar7 + 2;
                                }
                                iVar4 = 0;
LAB_148b75fbd:
                                bVar9 = iVar4 == 0;
                              }
                            }
                            else {
                              bVar9 = local_28 + iVar4 == 1;
                            }
                            if (local_30 != 0) {
                              FUN_1400020a8();
                            }
                            if (bVar9) {
                              pwVar6 = L"T_Ultraheat";
                            }
                            else {
                              FUN_140056680(&local_30,L"Dark Start");
                              iVar4 = (int)param_2[1];
                              if (iVar4 == local_28) {
                                bVar9 = true;
                                if (1 < iVar4) {
                                  lVar7 = 0;
                                  while( true ) {
                                    uVar1 = *(ushort *)(*param_2 + lVar7);
                                    uVar3 = (uint)uVar1;
                                    uVar2 = *(ushort *)(local_30 + lVar7);
                                    uVar8 = (uint)uVar2;
                                    if (uVar1 != uVar2) {
                                      if ((uVar2 | uVar1) < 0x80) {
                                        uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                        goto LAB_148b75b20;
                                      }
                                      iVar4 = uVar3 - uVar8;
                                      goto LAB_148b75fc9;
                                    }
                                    if (uVar1 == 0) break;
LAB_148b75b20:
                                    lVar7 = lVar7 + 2;
                                  }
                                  iVar4 = 0;
LAB_148b75fc9:
                                  bVar9 = iVar4 == 0;
                                }
                              }
                              else {
                                bVar9 = local_28 + iVar4 == 1;
                              }
                              if (local_30 != 0) {
                                FUN_1400020a8();
                              }
                              if (bVar9) {
                                pwVar6 = L"T_Nucleon";
                              }
                              else {
                                FUN_140056680(&local_30,L"Toxin");
                                iVar4 = (int)param_2[1];
                                if (iVar4 == local_28) {
                                  bVar9 = true;
                                  if (1 < iVar4) {
                                    lVar7 = 0;
                                    while( true ) {
                                      uVar1 = *(ushort *)(*param_2 + lVar7);
                                      uVar3 = (uint)uVar1;
                                      uVar2 = *(ushort *)(local_30 + lVar7);
                                      uVar8 = (uint)uVar2;
                                      if (uVar1 != uVar2) {
                                        if ((uVar2 | uVar1) < 0x80) {
                                          uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                          goto LAB_148b75bc6;
                                        }
                                        iVar4 = uVar3 - uVar8;
                                        goto LAB_148b75fd5;
                                      }
                                      if (uVar1 == 0) break;
LAB_148b75bc6:
                                      lVar7 = lVar7 + 2;
                                    }
                                    iVar4 = 0;
LAB_148b75fd5:
                                    bVar9 = iVar4 == 0;
                                  }
                                }
                                else {
                                  bVar9 = local_28 + iVar4 == 1;
                                }
                                if (local_30 != 0) {
                                  FUN_1400020a8();
                                }
                                if (bVar9) {
                                  pwVar6 = L"T_Hell";
                                }
                                else {
                                  FUN_140056680(&local_30,L"Pinky Dink");
                                  iVar4 = (int)param_2[1];
                                  if (iVar4 == local_28) {
                                    bVar9 = true;
                                    if (1 < iVar4) {
                                      lVar7 = 0;
                                      while( true ) {
                                        uVar1 = *(ushort *)(*param_2 + lVar7);
                                        uVar3 = (uint)uVar1;
                                        uVar2 = *(ushort *)(local_30 + lVar7);
                                        uVar8 = (uint)uVar2;
                                        if (uVar1 != uVar2) {
                                          if ((uVar2 | uVar1) < 0x80) {
                                            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                                            goto LAB_148b75c6c;
                                          }
                                          iVar4 = uVar3 - uVar8;
                                          goto LAB_148b75fe1;
                                        }
                                        if (uVar1 == 0) break;
LAB_148b75c6c:
                                        lVar7 = lVar7 + 2;
                                      }
                                      iVar4 = 0;
LAB_148b75fe1:
                                      bVar9 = iVar4 == 0;
                                    }
                                  }
                                  else {
                                    bVar9 = local_28 + iVar4 == 1;
                                  }
                                  if (local_30 != 0) {
                                    FUN_1400020a8();
                                  }
                                  if (bVar9) {
                                    pwVar6 = L"T_Pinky";
                                  }
                                  else {
                                    FUN_140056680(&local_30,L"Blue Shift");
                                    iVar4 = (int)param_2[1];
                                    if (iVar4 == local_28) {
                                      bVar9 = true;
                                      if (1 < iVar4) {
                                        lVar7 = 0;
                                        while( true ) {
                                          uVar1 = *(ushort *)(*param_2 + lVar7);
                                          uVar3 = (uint)uVar1;
                                          uVar2 = *(ushort *)(local_30 + lVar7);
                                          uVar8 = (uint)uVar2;
                                          if (uVar1 != uVar2) {
                                            if ((uVar2 | uVar1) < 0x80) {
                                              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]
                                                 ) goto LAB_148b75d12;
                                            }
                                            iVar4 = uVar3 - uVar8;
                                            goto LAB_148b75fed;
                                          }
                                          if (uVar1 == 0) break;
LAB_148b75d12:
                                          lVar7 = lVar7 + 2;
                                        }
                                        iVar4 = 0;
LAB_148b75fed:
                                        bVar9 = iVar4 == 0;
                                      }
                                    }
                                    else {
                                      bVar9 = local_28 + iVar4 == 1;
                                    }
                                    if (local_30 != 0) {
                                      FUN_1400020a8();
                                    }
                                    if (bVar9) {
                                      pwVar6 = L"T_Neon";
                                    }
                                    else {
                                      FUN_140056680(&local_30,L"Ultrasonic");
                                      iVar4 = (int)param_2[1];
                                      if (iVar4 == local_28) {
                                        bVar9 = true;
                                        if (1 < iVar4) {
                                          lVar7 = 0;
                                          while( true ) {
                                            uVar1 = *(ushort *)(*param_2 + lVar7);
                                            uVar3 = (uint)uVar1;
                                            uVar2 = *(ushort *)(local_30 + lVar7);
                                            uVar8 = (uint)uVar2;
                                            if (uVar1 != uVar2) {
                                              if ((uVar2 | uVar1) < 0x80) {
                                                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                                if ((&DAT_149e05da0)[uVar1] ==
                                                    (&DAT_149e05da0)[uVar2]) goto LAB_148b75db8;
                                              }
                                              iVar4 = uVar3 - uVar8;
                                              goto LAB_148b75ff9;
                                            }
                                            if (uVar1 == 0) break;
LAB_148b75db8:
                                            lVar7 = lVar7 + 2;
                                          }
                                          iVar4 = 0;
LAB_148b75ff9:
                                          bVar9 = iVar4 == 0;
                                        }
                                      }
                                      else {
                                        bVar9 = local_28 + iVar4 == 1;
                                      }
                                      if (local_30 != 0) {
                                        FUN_1400020a8();
                                      }
                                      if (bVar9) {
                                        pwVar6 = L"T_Ultrasonic";
                                      }
                                      else {
                                        FUN_140056680(&local_30,L"Shades of Gray");
                                        iVar4 = (int)param_2[1];
                                        if (iVar4 == local_28) {
                                          bVar9 = true;
                                          if (1 < iVar4) {
                                            lVar7 = 0;
                                            while( true ) {
                                              uVar1 = *(ushort *)(*param_2 + lVar7);
                                              uVar3 = (uint)uVar1;
                                              uVar2 = *(ushort *)(local_30 + lVar7);
                                              uVar8 = (uint)uVar2;
                                              if (uVar1 != uVar2) {
                                                if ((uVar2 | uVar1) < 0x80) {
                                                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                                  if ((&DAT_149e05da0)[uVar1] ==
                                                      (&DAT_149e05da0)[uVar2]) goto LAB_148b75e5e;
                                                }
                                                iVar4 = uVar3 - uVar8;
                                                goto LAB_148b76005;
                                              }
                                              if (uVar1 == 0) break;
LAB_148b75e5e:
                                              lVar7 = lVar7 + 2;
                                            }
                                            iVar4 = 0;
LAB_148b76005:
                                            bVar9 = iVar4 == 0;
                                          }
                                        }
                                        else {
                                          bVar9 = local_28 + iVar4 == 1;
                                        }
                                        if (local_30 != 0) {
                                          FUN_1400020a8();
                                        }
                                        if (bVar9) {
                                          pwVar6 = L"T_ShadesOfGray";
                                        }
                                        else {
                                          FUN_140056680(&local_30,L"Shades of Atlas");
                                          iVar4 = (int)param_2[1];
                                          if (iVar4 == local_28) {
                                            bVar9 = true;
                                            if (1 < iVar4) {
                                              lVar7 = 0;
                                              while( true ) {
                                                uVar1 = *(ushort *)(*param_2 + lVar7);
                                                uVar3 = (uint)uVar1;
                                                uVar2 = *(ushort *)(local_30 + lVar7);
                                                uVar8 = (uint)uVar2;
                                                if (uVar1 != uVar2) {
                                                  if ((uVar2 | uVar1) < 0x80) {
                                                    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                                                    uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                                                    if ((&DAT_149e05da0)[uVar1] ==
                                                        (&DAT_149e05da0)[uVar2]) goto LAB_148b75f04;
                                                  }
                                                  iVar4 = uVar3 - uVar8;
                                                  goto LAB_148b76011;
                                                }
                                                if (uVar1 == 0) break;
LAB_148b75f04:
                                                lVar7 = lVar7 + 2;
                                              }
                                              iVar4 = 0;
LAB_148b76011:
                                              bVar9 = iVar4 == 0;
                                            }
                                          }
                                          else {
                                            bVar9 = local_28 + iVar4 == 1;
                                          }
                                          if (local_30 != 0) {
                                            FUN_1400020a8();
                                          }
                                          if (!bVar9) goto LAB_148b75f5b;
                                          pwVar6 = L"T_Red_Alert";
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_140056680(&local_30,pwVar6);
    uVar5 = FUN_148b750a8(param_1,&local_30);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148b76120 FUN_148b76120 body=38 status=ok
// SIG undefined FUN_148b76120(void)

void FUN_148b76120(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145ac5b3e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148b76146 FUN_148b76146 body=315 status=ok
// SIG undefined FUN_148b76146(void)

void FUN_148b76146(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b76282(local_28,puVar1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b76282 FUN_148b76282 body=490 status=ok
// SIG undefined FUN_148b76282(void)

void FUN_148b76282(longlong *param_1,double *param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double dVar8;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x718))(param_1,&local_78,&local_90);
  cVar7 = (**(code **)(*param_1 + 0x788))(param_1);
  if (cVar7 == '\0') {
    param_2[2] = local_68;
    *param_2 = local_78;
    param_2[1] = dStack_70;
  }
  else {
    dVar3 = (double)CONCAT44(uStack_84,uStack_88) * 0.01745329238474369;
    dVar1 = sin(0.0);
    dVar2 = sin(dVar3);
    dVar8 = cos(0.0);
    dVar3 = cos(dVar3);
    dVar3 = dVar3 * dVar8;
    dVar2 = dVar2 * dVar8;
    dVar8 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
    if (((dVar8 != 1.0) || (dVar4 = dVar3, dVar5 = dVar2, dVar6 = dVar1, NAN(dVar8))) &&
       (dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar8)) {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar4 = dVar3 * dVar8;
      dVar5 = dVar2 * dVar8;
      dVar6 = dVar1 * dVar8;
    }
    *param_2 = local_78 - dVar4 * 50.0;
    param_2[1] = dStack_70 - dVar5 * 50.0;
    param_2[2] = local_68 - dVar6 * 50.0;
  }
  *(undefined8 *)(param_3 + 4) = local_80;
  *param_3 = local_90;
  param_3[1] = uStack_8c;
  param_3[2] = uStack_88;
  param_3[3] = uStack_84;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b7646e FUN_148b7646e body=264 status=ok
// SIG undefined FUN_148b7646e(void)

void FUN_148b7646e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143ffc502(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b76578 FUN_148b76578 body=156 status=ok
// SIG undefined FUN_148b76578(void)

void FUN_148b76578(undefined8 param_1,longlong param_2)

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
  FUN_143ffcaee(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7664c FUN_148b7664c body=51 status=ok
// SIG undefined FUN_148b7664c(void)

void FUN_148b7664c(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0x78);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148b76680 FUN_148b76680 body=51 status=ok
// SIG undefined FUN_148b76680(void)

void FUN_148b76680(longlong param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0x68);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148b76704 FUN_148b76704 body=156 status=ok
// SIG undefined FUN_148b76704(void)

void FUN_148b76704(undefined8 param_1,longlong param_2)

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
  FUN_143ffcd2e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b767a4 FUN_148b767a4 body=71 status=ok
// SIG undefined FUN_148b767a4(void)

void FUN_148b767a4(longlong param_1,undefined4 param_2)

{
  FUN_1448e423c();
  if ((*(longlong *)(param_1 + 0x450) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x450) + 8) >> 0x1e & 1) == 0)) {
    FUN_143ff3f7e(param_1);
  }
  FUN_143ffdc58(param_1,param_2);
  return;
}



// FUNCTION 148b767ec FUN_148b767ec body=26 status=ok
// SIG undefined FUN_148b767ec(void)

void FUN_148b767ec(undefined8 param_1)

{
  FUN_147a5ecc4();
  FUN_143ff3f7e(param_1);
  return;
}



// FUNCTION 148b76806 FUN_148b76806 body=26 status=ok
// SIG undefined FUN_148b76806(void)

void FUN_148b76806(undefined8 param_1)

{
  FUN_147a5eebc();
  FUN_143ff3f7e(param_1);
  return;
}



// FUNCTION 148b76820 FUN_148b76820 body=26 status=ok
// SIG undefined FUN_148b76820(void)

void FUN_148b76820(undefined8 param_1)

{
  FUN_147a5f06a();
  FUN_143ff3f7e(param_1);
  return;
}



// FUNCTION 148b7683a FUN_148b7683a body=70 status=ok
// SIG undefined FUN_148b7683a(void)

void FUN_148b7683a(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0 && param_2 == '\0') {
    cVar1 = FUN_140ae0922(lVar2);
    if (cVar1 != '\0') {
      FUN_1463cd9b8(lVar2,0);
    }
  }
  *(char *)(param_1 + 0x22) = param_2;
  return;
}



// FUNCTION 148b76880 FUN_148b76880 body=560 status=ok
// SIG undefined FUN_148b76880(void)

void FUN_148b76880(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144729dda(param_1 + 0x60);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x40);
    if (*(longlong *)(lVar4 + 0x188) != 0) {
      lVar5 = FUN_14119cfbe();
      lVar4 = *(longlong *)(lVar4 + 0x188);
      if ((((lVar4 != 0) && (lVar5 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        plVar2 = *(longlong **)(param_1 + 0xd0);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0xd0));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0xd8);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0xd8));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0xe0);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0xe0));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0xe8);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0xe8));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0xf0);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0xf0));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0xf8);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0xf8));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0x100);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0x100));
          }
        }
        plVar2 = *(longlong **)(param_1 + 0x108);
        if (plVar2 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
          if (cVar3 != '\0') {
            FUN_147f8e828(lVar4,*(undefined8 *)(param_1 + 0x108));
          }
        }
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
    }
    lVar4 = FUN_14479d2ce(param_1 + 0x60);
    local_29 = 1;
    uVar6 = FUN_1414987b4(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x30) + 0xa0))(lVar4 + 0x30,uVar6,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b76ab2 FUN_148b76ab2 body=67 status=ok
// SIG undefined FUN_148b76ab2(void)

bool FUN_148b76ab2(longlong param_1)

{
  longlong lVar1;
  
  FUN_145ac59b2();
  lVar1 = FUN_145ac5a08(param_1);
  if ((lVar1 != 0) && (lVar1 = FUN_1414987b4(param_1), lVar1 != 0)) {
    FUN_141498992(param_1);
    return *(int *)(param_1 + 0x88) != 0;
  }
  return false;
}



// FUNCTION 148b76af6 FUN_148b76af6 body=228 status=ok
// SIG undefined FUN_148b76af6(void)

void FUN_148b76af6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = FUN_1449f3324();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      != lVar2 + 0x30)) {
    param_2 = 0;
  }
  lVar2 = param_1 + 0x40;
  FUN_14485c47a(lVar2,param_2);
  cVar1 = FUN_144729dda(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  lVar3 = FUN_14479d2ce(lVar2);
  lVar3 = *(longlong *)(lVar3 + 0xa08);
  if (lVar3 != 0) {
    lVar4 = FUN_144a78b9e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_148b76b83;
  }
  lVar3 = 0;
LAB_148b76b83:
  FUN_14485c47a(param_1 + 0x48,lVar3);
  lVar3 = FUN_14479d2ce(lVar2);
  FUN_14485c47a(param_1 + 0x50,*(undefined8 *)(lVar3 + 0x3d0));
  plVar5 = (longlong *)FUN_14479d2ce(lVar2);
  uVar6 = (**(code **)(*plVar5 + 0x6b8))(plVar5);
  FUN_14485c47a(param_1 + 0x58,uVar6);
  return;
}



// FUNCTION 148b76bda FUN_148b76bda body=773 status=ok
// SIG undefined FUN_148b76bda(void)

void FUN_148b76bda(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1 + 0x40;
  cVar2 = FUN_144729dda(lVar5);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(lVar5);
    lVar4 = FUN_144a7ba4c(uVar3);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1400b6e86(lVar4);
    }
    lVar4 = param_1 + 0x60;
    FUN_14485c47a(lVar4,uVar3);
    cVar2 = FUN_144729dda(lVar4);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(lVar4);
      local_49 = 1;
      uVar3 = FUN_1414987b4(param_1);
      (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x98))(lVar4 + 0x30,uVar3,100,&local_49);
      lVar5 = FUN_14479d2ce(lVar5);
      if (*(longlong *)(lVar5 + 0x188) != 0) {
        lVar4 = FUN_14119cfbe();
        lVar5 = *(longlong *)(lVar5 + 0x188);
        if ((((lVar5 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
           ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)))) {
          lVar4 = FUN_145ac5b3e(param_1);
          uVar3 = FUN_148b588f4(lVar4 + 0xb0);
          local_68 = FUN_144000e02;
          local_58 = FUN_148b76ee0(lVar5,uVar3,1,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar3 = FUN_148b588f4(lVar4 + 0xd8);
          local_68 = FUN_144000ea6;
          uVar3 = FUN_148b76ee0(lVar5,uVar3,1,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar6 = FUN_148b588f4(lVar4 + 0x100);
          local_68 = (code *)&LAB_144000f4a;
          uVar6 = FUN_148b76ee0(lVar5,uVar6,2,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar7 = FUN_148b588f4(lVar4 + 0x100);
          local_68 = (code *)&LAB_144000f58;
          uVar7 = FUN_148b76ee0(lVar5,uVar7,0x10,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar8 = FUN_148b588f4(lVar4 + 0x128);
          local_68 = (code *)&LAB_144000f66;
          uVar8 = FUN_148b76ee0(lVar5,uVar8,1,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar9 = FUN_148b588f4(lVar4 + 0x150);
          local_68 = (code *)&LAB_144000f66;
          uVar9 = FUN_148b76ee0(lVar5,uVar9,1,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar10 = FUN_148b588f4(lVar4 + 0x1a0);
          local_68 = FUN_148b76fac;
          uVar10 = FUN_148b76ee0(lVar5,uVar10,2,param_1);
          lVar4 = FUN_145ac5b3e(param_1);
          uVar11 = FUN_148b588f4(lVar4 + 0x1f0);
          local_68 = FUN_144000fcc;
          uVar11 = FUN_148b76ee0(lVar5,uVar11,2,param_1);
          *(undefined8 *)(param_1 + 0xd0) = local_58;
          *(undefined8 *)(param_1 + 0xe8) = uVar3;
          *(undefined8 *)(param_1 + 0xd8) = uVar6;
          *(undefined8 *)(param_1 + 0xe0) = uVar7;
          *(undefined8 *)(param_1 + 0xf0) = uVar8;
          *(undefined8 *)(param_1 + 0xf8) = uVar9;
          *(undefined8 *)(param_1 + 0x100) = uVar10;
          *(undefined8 *)(param_1 + 0x108) = uVar11;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b76ee0 FUN_148b76ee0 body=203 status=ok
// SIG undefined FUN_148b76ee0(void)

undefined8 *
FUN_148b76ee0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  FUN_1414a725e(puVar2);
  *puVar2 = &PTR_LAB_14acd0ae0;
  puVar2[2] = 0;
  FUN_14485c47a(puVar2 + 2,param_2);
  *(undefined1 *)(puVar2 + 3) = param_3;
  *puVar2 = &PTR_FUN_14b5afc70;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_148b77080(puVar2 + 4,param_4,param_5);
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 148b76fac FUN_148b76fac body=63 status=ok
// SIG undefined FUN_148b76fac(void)

void FUN_148b76fac(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((char)param_1[0x22] == '\x01') {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      uVar1 = FUN_140ae0922(lVar2);
      FUN_1463cd9b8(lVar2,uVar1 ^ 1);
      return;
    }
  }
  return;
}



// FUNCTION 148b76fef FUN_148b76fef body=49 status=ok
// SIG undefined FUN_148b76fef(void)

void FUN_148b76fef(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148b77020 FUN_148b77020 body=96 status=ok
// SIG undefined FUN_148b77020(void)

void FUN_148b77020(longlong param_1,int param_2)

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



// FUNCTION 148b77080 FUN_148b77080 body=467 status=ok
// SIG undefined FUN_148b77080(void)

void FUN_148b77080(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410534e0();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar6;
  *local_40 = &PTR_FUN_14b5afb50;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  puVar3[4] = param_3;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b5afca0;
  plVar5[2] = (longlong)local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(plVar5 + 3) = local_38;
  local_38 = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_148b771d8;
    param_1[1] = 0;
LAB_148b77199:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_148b771d8;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_148b77199;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_148b771d8:
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b77258 FUN_148b77258 body=29 status=ok
// SIG undefined FUN_148b77258(void)

undefined8 FUN_148b77258(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b77290 FUN_148b77290 body=29 status=ok
// SIG undefined FUN_148b77290(void)

bool FUN_148b77290(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b772ae FUN_148b772ae body=26 status=ok
// SIG undefined FUN_148b772ae(void)

bool FUN_148b772ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148b772c8 FUN_148b772c8 body=24 status=ok
// SIG undefined FUN_148b772c8(void)

bool FUN_148b772c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148b772ec FUN_148b772ec body=93 status=ok
// SIG undefined FUN_148b772ec(void)

void FUN_148b772ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5afb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b7734a FUN_148b7734a body=93 status=ok
// SIG undefined FUN_148b7734a(void)

void FUN_148b7734a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5afcc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5afb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b773a8 FUN_148b773a8 body=126 status=ok
// SIG undefined FUN_148b773a8(void)

void FUN_148b773a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5afcc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5afb50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b77417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b77426 FUN_148b77426 body=40 status=ok
// SIG undefined FUN_148b77426(void)

void FUN_148b77426(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b7744b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b7744e FUN_148b7744e body=152 status=ok
// SIG undefined FUN_148b7744e(void)

bool FUN_148b7744e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b774ea FUN_148b774ea body=31 status=ok
// SIG undefined FUN_148b774ea(void)

undefined8 FUN_148b774ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b77526 FUN_148b77526 body=93 status=ok
// SIG undefined FUN_148b77526(void)

void FUN_148b77526(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5afbc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b77584 FUN_148b77584 body=126 status=ok
// SIG undefined FUN_148b77584(void)

void FUN_148b77584(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5afbc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b775f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b77602 FUN_148b77602 body=21 status=ok
// SIG undefined FUN_148b77602(void)

undefined8 FUN_148b77602(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b77618 FUN_148b77618 body=640 status=ok
// SIG undefined FUN_148b77618(void)

longlong * FUN_148b77618(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4();
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    FUN_140056680(local_48,L"Shift+");
    FUN_144a7dea0(&local_38,local_48,param_2);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 & 4) != 0) {
    FUN_140056680(local_48,L"Alt+");
    FUN_144a7dea0(&local_38,local_48,param_2);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 & 2) != 0) {
    FUN_140056680(local_48,L"Ctrl+");
    FUN_144a7dea0(&local_38,local_48,param_2);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    uVar1 = *(uint *)(param_1 + 8);
  }
  if ((uVar1 & 8) != 0) {
    FUN_140056680(local_48,L"Cmd+");
    FUN_144a7dea0(&local_38,local_48,param_2);
    if (&local_38 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b778ac FUN_148b778ac body=139 status=ok
// SIG undefined FUN_148b778ac(void)

void FUN_148b778ac(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x34) & 0x50) != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x50),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar4 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar4);
    *(undefined8 *)(lVar3 + lVar4) = 0;
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar3 + 8 + lVar4) = iVar2;
    if ((longlong)iVar2 != 0) {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      return;
    }
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 148b77938 FUN_148b77938 body=79 status=ok
// SIG undefined FUN_148b77938(void)

void FUN_148b77938(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x34) & 0x50) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
    FUN_148b7b8b0((longlong *)(param_1 + 0x60),iVar1);
  }
  FUN_148b7a56c((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x60),param_2);
  return;
}



// FUNCTION 148b7798e FUN_148b7798e body=141 status=ok
// SIG undefined FUN_148b7798e(void)

void FUN_148b7798e(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  uStack_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  FUN_1447a122a(local_28,param_2 + 8);
  uVar1 = FUN_14477b072(param_1,DAT_14cb9eb60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_48);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b77a1c FUN_148b77a1c body=186 status=ok
// SIG undefined FUN_148b77a1c(void)

void FUN_148b77a1c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_38 = 0;
  uStack_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x638))(param_1,&local_48);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b77ad8 FUN_148b77ad8 body=61 status=ok
// SIG undefined FUN_148b77ad8(void)

void FUN_148b77ad8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1405f1a34();
  if (lVar1 != 0) {
    FUN_14400406e(param_1 + 0x3a0);
    return;
  }
  return;
}



// FUNCTION 148b77b16 FUN_148b77b16 body=72 status=ok
// SIG undefined FUN_148b77b16(void)

void FUN_148b77b16(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x670))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148b77b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x678))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerResetViewPoint_Validate");
  return;
}



// FUNCTION 148b77b5e FUN_148b77b5e body=286 status=ok
// SIG undefined FUN_148b77b5e(void)

void FUN_148b77b5e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  cVar1 = (**(code **)(*param_1 + 0x650))(param_1,local_1c,local_20);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSendCategoryInputEvent_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x658))(param_1,local_1c,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b77c7e FUN_148b77c7e body=286 status=ok
// SIG undefined FUN_148b77c7e(void)

void FUN_148b77c7e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  cVar1 = (**(code **)(*param_1 + 0x640))(param_1,local_1c,local_20);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSendExtensionInputEvent_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x648))(param_1,local_1c,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b77da4 FUN_148b77da4 body=294 status=ok
// SIG undefined FUN_148b77da4(void)

void FUN_148b77da4(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  int local_28;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x660))(param_1,local_24,local_28 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSetCategoryEnabled_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x668))(param_1,local_24,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b77ed2 FUN_148b77ed2 body=297 status=ok
// SIG undefined FUN_148b77ed2(void)

void FUN_148b77ed2(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x690))(param_1,local_28,local_2c != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSetDebugActor_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x698))(param_1,local_28,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78000 FUN_148b78000 body=203 status=ok
// SIG undefined FUN_148b78000(void)

void FUN_148b78000(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x6a0))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSetEnabled_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6a8))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b780cc FUN_148b780cc body=272 status=ok
// SIG undefined FUN_148b780cc(void)

void FUN_148b780cc(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x680))(param_1,local_30,local_48);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetViewPoint_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x688))(param_1,local_30,local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b781e8 FUN_148b781e8 body=342 status=ok
// SIG undefined FUN_148b781e8(void)

void FUN_148b781e8(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  if ((((lVar7 != 0) && (*(char *)(lVar7 + 0x398) == '\x01')) && (0 < *(int *)(lVar7 + 0x3f0))) &&
     (*(int *)(lVar7 + 0x3f0) == (int)param_1[2])) {
    lVar7 = 0;
    do {
      lVar4 = param_1[1];
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 1000) + lVar7 * 0x10);
      puVar5 = (undefined8 *)(lVar4 + lVar7 * 0x40);
      *puVar5 = *(undefined8 *)(lVar1 + 0x48);
      *(byte *)(puVar5 + 7) = *(byte *)(lVar1 + 0x34) >> 7;
      if (*(int *)(puVar5 + 2) == *(int *)(lVar1 + 0x58)) {
        cVar2 = FUN_1405d12b4(puVar5[1],*(undefined8 *)(lVar1 + 0x50));
        if (cVar2 == '\0') goto LAB_148b78288;
      }
      else {
LAB_148b78288:
        FUN_140bee9ec(puVar5 + 1,(undefined8 *)(lVar1 + 0x50));
      }
      lVar4 = lVar4 + lVar7 * 0x40;
      puVar5 = (undefined8 *)(lVar4 + 0x18);
      if (*(int *)(lVar4 + 0x20) == *(int *)(lVar1 + 0x68)) {
        cVar2 = FUN_145725518(*puVar5,*(undefined8 *)(lVar1 + 0x60));
        if (cVar2 == '\0') goto LAB_148b782b9;
      }
      else {
LAB_148b782b9:
        FUN_1457255b8(puVar5,(undefined8 *)(lVar1 + 0x60));
      }
      if ((*(byte *)(*param_1 + 0x448) & 0x10) != 0) {
        iVar3 = *(int *)(lVar1 + 0x78);
        if (0 < iVar3) {
          lVar4 = 0;
          uVar6 = 0;
          do {
            if (((*(byte *)(lVar1 + 0x34) & 0x20) == 0) &&
               ((*(uint *)(*(longlong *)(lVar1 + 0x70) + 0x28 + lVar4) & 6) == 2)) {
              FUN_1440041ce(*param_1,*(undefined8 *)(lVar1 + 0x48),uVar6 & 0xffffffff,
                            *(longlong *)(lVar1 + 0x70) + lVar4);
              iVar3 = *(int *)(lVar1 + 0x78);
            }
            uVar6 = uVar6 + 1;
            lVar4 = lVar4 + 0x50;
          } while ((longlong)uVar6 < (longlong)iVar3);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[2]);
  }
  return;
}



// FUNCTION 148b7835a FUN_148b7835a body=175 status=ok
// SIG undefined FUN_148b7835a(void)

void FUN_148b7835a(longlong *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x89) & 2) == 0) {
    local_30 = param_2;
    local_28 = param_3;
    uVar2 = FUN_14477b072(param_1,DAT_14cb9ebb8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_30);
  }
  else {
    cVar1 = FUN_14069eaf4(param_1 + 0x77,param_2);
    if (cVar1 == '\0') {
      FUN_14485c47a(param_1 + 0x77,param_2);
      if (param_2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(param_2 + 0x18);
      }
      param_1[0x78] = lVar3;
      *(short *)(param_1 + 0x79) = (short)param_1[0x79] + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78414 FUN_148b78414 body=198 status=ok
// SIG undefined FUN_148b78414(void)

void FUN_148b78414(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 + 0x81 != param_2) {
    param_1[0x83] = param_2[2];
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    lVar3 = param_2[1];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 0x81) = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 0x40c) = uVar1;
    *(int *)(param_1 + 0x82) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x414) = uVar2;
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  if (param_1 + 0x85 != param_3) {
    param_1[0x87] = param_3[2];
    uVar1 = *(undefined4 *)((longlong)param_3 + 4);
    lVar3 = param_3[1];
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(int *)(param_1 + 0x85) = (int)*param_3;
    *(undefined4 *)((longlong)param_1 + 0x42c) = uVar1;
    *(int *)(param_1 + 0x86) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x434) = uVar2;
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  if ((*(byte *)(param_1 + 0x89) & 2) == 0) {
    local_38 = param_2[2];
    local_48 = *param_2;
    lStack_40 = param_2[1];
    local_30 = (undefined4)*param_3;
    uStack_2c = *(undefined4 *)((longlong)param_3 + 4);
    uStack_28 = (undefined4)param_3[1];
    uStack_24 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_20 = param_3[2];
    uVar4 = FUN_14477b072(param_1,DAT_14cb9ebd8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b784e6 FUN_148b784e6 body=98 status=ok
// SIG undefined FUN_148b784e6(void)

void FUN_148b784e6(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((char)param_1[0x84] == '\x01') {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  if ((char)param_1[0x88] == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if ((*(byte *)(param_1 + 0x89) & 2) == 0) {
    uVar1 = FUN_14477b072(param_1,DAT_14cb9eb78);
                    /* WARNING: Could not recover jumptable at 0x000148b7853e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
    return;
  }
  return;
}



// FUNCTION 148b78552 FUN_148b78552 body=178 status=ok
// SIG undefined FUN_148b78552(void)

void FUN_148b78552(longlong *param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x89) & 2) == 0) {
    local_20 = param_2;
    local_1c = param_3;
    uVar2 = FUN_14477b072(param_1,DAT_14cb9eba8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_20);
  }
  else if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0x7e])) {
    lVar1 = *(longlong *)(param_1[0x7d] + (ulonglong)param_2 * 0x10);
    *(uint *)(lVar1 + 0x34) = *(uint *)(lVar1 + 0x34) & 0xffffff7f | (uint)param_3 << 7;
    FUN_145725226(param_1);
  }
  FUN_1405d0f74(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78610 FUN_148b78610 body=214 status=ok
// SIG undefined FUN_148b78610(void)

void FUN_148b78610(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((-1 < (int)param_3) && (-1 < (int)param_2)) && ((int)param_2 < (int)param_1[0x7e])) &&
      (lVar1 = *(longlong *)(param_1[0x7d] + (ulonglong)param_2 * 0x10),
      (int)param_3 < *(int *)(lVar1 + 0x20))) &&
     (((*(uint *)(param_1 + 0x89) & 4) == 0 || ((*(byte *)(lVar1 + 0x34) & 0x80) != 0)))) {
    if (((*(uint *)(param_1 + 0x89) & 2) == 0) &&
       (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x20 + (ulonglong)param_3 * 0x28) != '\0')) {
      local_20 = param_2;
      local_1c = param_3;
      uVar2 = FUN_14477b072(param_1,DAT_14cb9eb88);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_20);
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x18) + (ulonglong)param_3 * 0x28;
      if ((*(int *)(lVar1 + 0x18) != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78702 FUN_148b78702 body=200 status=ok
// SIG undefined FUN_148b78702(void)

void FUN_148b78702(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((-1 < (int)param_3) && (-1 < (int)param_2)) && ((int)param_2 < (int)param_1[0x80])) &&
     (lVar1 = *(longlong *)(param_1[0x7f] + (ulonglong)param_2 * 0x10),
     (int)param_3 < *(int *)(lVar1 + 0x20))) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    if ((*(char *)(lVar1 + 0x20 + (ulonglong)param_3 * 0x28) == '\0') ||
       ((*(byte *)(param_1 + 0x89) & 2) != 0)) {
      lVar1 = lVar1 + (ulonglong)param_3 * 0x28;
      if ((*(int *)(lVar1 + 0x18) != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
    else {
      local_20 = param_2;
      local_1c = param_3;
      uVar2 = FUN_14477b072(param_1,DAT_14cb9eb98);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b787dc FUN_148b787dc body=571 status=ok
// SIG undefined FUN_148b787dc(void)

void FUN_148b787dc(longlong *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined **local_100 [18];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  if ((*(byte *)((longlong)param_1 + 0x1c) & 1) == 0) {
    plVar5 = (longlong *)0x0;
    memset(local_100,0,0x90);
    FUN_144869430(local_100);
    local_70 = 0;
    local_100[0] = &PTR_FUN_149e1e050;
    local_60 = 0x7fffffffffffffff;
    local_68 = param_1;
    FUN_140996f94(local_100,1);
    (*(code *)local_100[0][0x1e])(local_100,0);
    if ((int)param_1[9] != 0) {
      plVar5 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,local_100);
    FUN_144a7fc42(local_100);
  }
  else {
    puVar2 = (uint *)*param_1;
    uVar1 = *puVar2;
    lVar3 = param_1[1];
    local_58 = 0;
    uStack_50 = (ulonglong)uVar1;
    if ((longlong)(int)uVar1 != 0) {
      FUN_1447403be(&local_58,0);
    }
    lVar4 = local_58;
    FUN_1401a700c(local_100,0x101);
    plVar5 = (longlong *)0x0;
    local_108 = 0;
    local_110 = 0;
    local_118 = (longlong)(int)lVar3 + -4;
    FUN_140aa9920((ulonglong)local_100[0] & 0xffffffff,lVar4,(longlong)(int)uVar1,puVar2 + 1);
    memset(local_100,0,0x90);
    FUN_144869430(local_100);
    local_70 = 0;
    local_100[0] = &PTR_FUN_149e1e050;
    local_68 = &local_58;
    local_60 = 0x7fffffffffffffff;
    FUN_140996f94(local_100,1);
    (*(code *)local_100[0][0x1e])(local_100,0);
    if ((int)param_1[9] != 0) {
      plVar5 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,local_100);
    FUN_144a7fc42(local_100);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)((longlong)param_1 + 0x14);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78a34 FUN_148b78a34 body=51 status=ok
// SIG undefined FUN_148b78a34(void)

void FUN_148b78a34(longlong param_1)

{
  FUN_1404d1fb0();
  if ((*(longlong *)(param_1 + 0x390) == 0) && ((*(byte *)(param_1 + 0x448) & 8) == 0)) {
    return;
  }
  FUN_1440042d4(param_1);
  return;
}



// FUNCTION 148b78a68 FUN_148b78a68 body=281 status=ok
// SIG undefined FUN_148b78a68(void)

ulonglong FUN_148b78a68(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [40];
  undefined **local_e0 [18];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_38 = 0;
  uStack_30 = 0;
  plVar3 = (longlong *)0x0;
  memset(local_e0,0,0x90);
  FUN_144869430(local_e0);
  local_50 = 0;
  local_e0[0] = &PTR_FUN_149e1e590;
  local_40 = 0;
  local_48 = &local_38;
  FUN_144a69558(local_e0,1);
  (*(code *)local_e0[0][0x1e])(local_e0,0);
  local_e0[0] = &PTR_FUN_149e1e330;
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,local_e0);
  iVar1 = (*(code *)PTR_FUN_14c75b148)(local_38,uStack_30 & 0xffffffff,0);
  if ((iVar1 == *(int *)(param_1 + 0x24)) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x24) = iVar1;
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  FUN_144a7fc42(local_e0);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78b82 FUN_148b78b82 body=632 status=ok
// SIG undefined FUN_148b78b82(void)

ulonglong FUN_148b78b82(void **param_1,undefined2 param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  size_t _Size;
  undefined1 auStack_158 [32];
  int local_138;
  undefined4 local_130;
  undefined4 local_128;
  int local_114;
  undefined **local_110 [18];
  undefined8 local_80;
  void **local_78;
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((ulonglong)param_1[5] & 6) == 2) {
    uVar6 = 0;
  }
  else {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    plVar5 = (longlong *)0x0;
    memset(local_110,0,0x90);
    FUN_144869430(local_110);
    local_80 = 0;
    local_110[0] = &PTR_FUN_149e1e590;
    local_70 = 0;
    local_78 = &local_68;
    FUN_144a69558(local_110,1);
    (*(code *)local_110[0][0x1e])(local_110,0);
    local_110[0] = &PTR_FUN_149e1e330;
    if (*(int *)(param_1 + 9) != 0) {
      plVar5 = param_1[8];
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,local_110);
    iVar4 = (*(code *)PTR_FUN_14c75b148)(local_68,uStack_60 & 0xffffffff,0);
    pvVar2 = local_68;
    if ((iVar4 == *(int *)((longlong)param_1 + 0x24)) && (((ulonglong)param_1[5] & 1) == 0)) {
      uVar6 = 0;
    }
    else {
      iVar3 = (int)uStack_60;
      _Size = (size_t)(int)uStack_60;
      *(uint *)((longlong)param_1 + 0x1c) =
           *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffe | (uint)(0x200 < (longlong)_Size);
      if ((longlong)_Size < 0x201) {
        if (&local_68 != param_1) {
          *(int *)(param_1 + 1) = (int)uStack_60;
          if (*(int *)((longlong)param_1 + 0xc) == 0 && (int)uStack_60 == 0) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          }
          else {
            FUN_1447a127e(param_1,uStack_60 & 0xffffffff);
            if (iVar3 != 0) {
              memcpy(*param_1,pvVar2,_Size);
            }
          }
        }
      }
      else {
        local_114 = (int)((float)(int)uStack_60 * 1.1);
        FUN_144a5eaa2(param_1,local_114 + 4,1);
        pvVar2 = local_68;
        piVar1 = *param_1;
        *piVar1 = iVar3;
        FUN_1401a700c(&local_4c,0x101);
        local_138 = iVar3;
        local_128 = 0;
        local_130 = 0x10;
        FUN_1427731c2(local_4c,piVar1 + 1,&local_114,pvVar2);
        FUN_144a5eaa2(param_1,local_114 + 4,1);
      }
      *(uint *)(param_1 + 5) =
           (*(uint *)(param_1 + 5) & 0xfffffff8) + (uint)(0x200 < *(int *)(param_1 + 1)) * 2;
      *(int *)((longlong)param_1 + 0x24) = iVar4;
      *(undefined4 *)(param_1 + 3) = 0;
      *(int *)((longlong)param_1 + 0x14) = *(int *)(param_1 + 1);
      *(undefined2 *)((longlong)param_1 + 0x12) = param_2;
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
      uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    FUN_144a7fc42(local_110);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78e26 FUN_148b78e26 body=96 status=ok
// SIG undefined FUN_148b78e26(void)

void FUN_148b78e26(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  if ((*(byte *)(lVar1 + 0x28) & 4) != 0) {
    FUN_148b78ec0(param_1);
  }
  switchD_143c3d4dc::caseD_21(param_1,lVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b78e88 FUN_148b78e88 body=45 status=ok
// SIG undefined FUN_148b78e88(void)

void FUN_148b78e88(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
    FUN_148b78ec0(param_1);
  }
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 148b78ec0 FUN_148b78ec0 body=945 status=ok
// SIG undefined FUN_148b78ec0(void)

void FUN_148b78ec0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (longlong)*(int *)(param_1 + 0x180)) {
    local_78 = param_1 + 0x1b8;
    uVar12 = (longlong)*(int *)(param_1 + 0x180);
    do {
      uVar5 = uVar12 - 1;
      lVar11 = *(longlong *)(param_1 + 0x178);
      lVar8 = uVar5 * 0x30;
      puVar1 = (undefined8 *)(lVar11 + lVar8);
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(lVar11 + 8 + lVar8) != 0) {
        puVar9 = (undefined2 *)*puVar1;
      }
      iVar7 = *(int *)(param_1 + 0x1a0);
      if ((longlong)iVar7 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x198);
        lVar6 = 0;
        local_80 = uVar5;
        do {
          cVar3 = FUN_1402ca022(*(undefined8 *)(lVar11 + lVar6),puVar9);
          uVar5 = local_80;
          if (cVar3 != '\0') {
            uVar10 = (ulonglong)*(int *)(puVar1 + 5);
            if (0 < (longlong)uVar10) {
              iVar7 = -*(int *)(puVar1 + 5);
              lVar11 = uVar10 * 0x30;
              do {
                lVar11 = lVar11 + -0x30;
                puVar9 = &DAT_149dfb77a;
                if (*(int *)(puVar1[4] + 8 + lVar11) != 0) {
                  puVar9 = *(undefined2 **)(puVar1[4] + lVar11);
                }
                FUN_1446f470e(&local_50,puVar9,1);
                puVar9 = &DAT_149dfb77a;
                if (*(int *)(puVar1 + 1) != 0) {
                  puVar9 = (undefined2 *)*puVar1;
                }
                FUN_1446f470e(&local_58,puVar9,1);
                lVar8 = FUN_1469ea76a(local_78,local_58,local_50);
                if (lVar8 == 0) {
                  lVar8 = puVar1[4];
                  pvVar13 = (void *)(lVar8 + lVar11);
                  FUN_1456f46c6(pvVar13);
                  uVar4 = *(uint *)(puVar1 + 5);
                  if (uVar10 != uVar4) {
                    memmove(pvVar13,(void *)(lVar8 + lVar11 + 0x30),
                            (longlong)(int)(uVar4 + iVar7) * 0x30);
                    uVar4 = *(uint *)(puVar1 + 5);
                  }
                  *(uint *)(puVar1 + 5) = uVar4 - 1;
                  uVar5 = local_80;
                }
                iVar7 = iVar7 + 1;
                bVar2 = 1 < uVar10;
                uVar10 = uVar10 - 1;
              } while (bVar2);
            }
            goto LAB_148b78fa9;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar7 * 8 != lVar6);
        lVar11 = *(longlong *)(param_1 + 0x178);
      }
      pvVar13 = (void *)(lVar11 + lVar8);
      FUN_146174426(pvVar13);
      uVar4 = *(uint *)(param_1 + 0x180);
      if (uVar12 != uVar4) {
        memmove(pvVar13,(void *)((longlong)pvVar13 + 0x30),
                (longlong)(int)(uVar4 - (int)uVar12) * 0x30);
        uVar4 = *(uint *)(param_1 + 0x180);
      }
      *(uint *)(param_1 + 0x180) = uVar4 - 1;
LAB_148b78fa9:
      bVar2 = 1 < (longlong)uVar12;
      uVar12 = uVar5;
    } while (bVar2);
  }
  if (0 < (longlong)*(int *)(param_1 + 400)) {
    local_70 = param_1 + 0x208;
    local_78 = (longlong)*(int *)(param_1 + 400);
    do {
      uVar12 = local_78 - 1;
      lVar11 = *(longlong *)(param_1 + 0x188);
      puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x28);
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(puVar1 + 1) != 0) {
        puVar9 = (undefined2 *)*puVar1;
      }
      iVar7 = *(int *)(param_1 + 0x1b0);
      local_80 = local_78;
      local_78 = uVar12;
      if ((longlong)iVar7 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x1a8);
        lVar8 = 0;
        do {
          cVar3 = FUN_1402ca022(*(undefined8 *)(lVar11 + lVar8),puVar9);
          if (cVar3 != '\0') {
            uVar12 = (ulonglong)*(int *)(puVar1 + 4);
            if (0 < (longlong)uVar12) {
              iVar7 = -*(int *)(puVar1 + 4);
              lVar11 = uVar12 * 0x30;
              do {
                lVar11 = lVar11 + -0x30;
                puVar9 = &DAT_149dfb77a;
                if (*(int *)(puVar1[3] + 8 + lVar11) != 0) {
                  puVar9 = *(undefined2 **)(puVar1[3] + lVar11);
                }
                FUN_1446f470e(&local_60,puVar9,1);
                puVar9 = &DAT_149dfb77a;
                if (*(int *)(puVar1 + 1) != 0) {
                  puVar9 = (undefined2 *)*puVar1;
                }
                FUN_1446f470e(&local_68,puVar9,1);
                lVar8 = FUN_1469ea76a(local_70,local_68,local_60);
                if (lVar8 == 0) {
                  lVar8 = puVar1[3];
                  pvVar13 = (void *)(lVar8 + lVar11);
                  FUN_1456f46c6(pvVar13);
                  uVar4 = *(uint *)(puVar1 + 4);
                  if (uVar12 != uVar4) {
                    memmove(pvVar13,(void *)(lVar8 + lVar11 + 0x30),
                            (longlong)(int)(uVar4 + iVar7) * 0x30);
                    uVar4 = *(uint *)(puVar1 + 4);
                  }
                  *(uint *)(puVar1 + 4) = uVar4 - 1;
                }
                iVar7 = iVar7 + 1;
                bVar2 = 1 < uVar12;
                uVar12 = uVar12 - 1;
              } while (bVar2);
            }
            goto LAB_148b79239;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)iVar7 * 8 != lVar8);
        lVar11 = *(longlong *)(param_1 + 0x188);
      }
      uVar5 = local_80;
      pvVar13 = (void *)(lVar11 + uVar12 * 0x28);
      FUN_145cdc2a4(pvVar13);
      uVar4 = *(uint *)(param_1 + 400);
      if (uVar5 != uVar4) {
        memmove(pvVar13,(void *)((longlong)pvVar13 + 0x28),
                (longlong)(int)(uVar4 - (int)uVar5) * 0x28);
        uVar4 = *(uint *)(param_1 + 400);
      }
      *(uint *)(param_1 + 400) = uVar4 - 1;
LAB_148b79239:
    } while (1 < (longlong)local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b79272 FUN_148b79272 body=52 status=ok
// SIG undefined FUN_148b79272(void)

void FUN_148b79272(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 5);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x448) & 4) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148b792a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 148b7930a FUN_148b7930a body=48 status=ok
// SIG undefined FUN_148b7930a(void)

void FUN_148b7930a(longlong param_1)

{
  FUN_1457ded34(param_1,*(byte *)(param_1 + 0x30) & 1);
  if (DAT_14cb0d2b0 != 0) {
    *(byte *)(DAT_14cb0d2b0 + 0xe10) = *(byte *)(DAT_14cb0d2b0 + 0xe10) & 0xfe;
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xeb;
  return;
}



// FUNCTION 148b7933a FUN_148b7933a body=748 status=ok
// SIG undefined FUN_148b7933a(void)

undefined8 * FUN_148b7933a(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + 0x30) & 0x10) != 0) goto LAB_148b79567;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((ulonglong)uVar1 == 0xffffffff) {
    lVar8 = 0;
    iVar3 = 0;
  }
  else {
    puVar2 = &DAT_14cb9ea68;
    piVar6 = &DAT_14cb9ea70;
    if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
      piVar6 = &DAT_14cb9ea80;
      puVar2 = &DAT_14cb9ea78;
    }
    if (*piVar6 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*puVar2;
    }
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x20) <= (int)uVar1)) {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
LAB_148b793d0:
      puVar7 = &DAT_149dfb77a;
    }
    else {
      FUN_148b77618((ulonglong)uVar1 * 0x28 + *(longlong *)(param_1 + 0x18),&local_68);
      puVar7 = local_68;
      if ((int)uStack_60 == 0) goto LAB_148b793d0;
    }
    puVar5 = DAT_14cb9ea58;
    if (DAT_14cb9ea60 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    local_78 = puVar9;
    FUN_140002266(&local_58,L"{%s}%s:{%s}HUD",puVar5,puVar7);
    lVar8 = local_58;
    iVar3 = (int)local_50;
    local_48 = local_58;
    local_58 = 0;
    uStack_40 = local_50;
    local_50 = 0;
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0xffffffff) {
    if (iVar3 - 2U < 0x7fffffff) {
      iVar3 = DAT_14cb9eac0 + -1;
      if (DAT_14cb9eac0 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_48,DAT_14cb9eab8,iVar3);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    puVar2 = &DAT_14cb9ea68;
    piVar6 = &DAT_14cb9ea70;
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      piVar6 = &DAT_14cb9ea80;
      puVar2 = &DAT_14cb9ea78;
    }
    if (*piVar6 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*puVar2;
    }
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x20) <= (int)uVar1)) {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
LAB_148b794c4:
      puVar7 = &DAT_149dfb77a;
    }
    else {
      FUN_148b77618((ulonglong)uVar1 * 0x28 + *(longlong *)(param_1 + 0x18),&local_68);
      puVar7 = local_68;
      if ((int)uStack_60 == 0) goto LAB_148b794c4;
    }
    puVar5 = DAT_14cb9ea58;
    if (DAT_14cb9ea60 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    local_78 = puVar9;
    FUN_140002266(&local_58,L"{%s}%s:{%s}DebugMessages",puVar5,puVar7);
    iVar3 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(&local_48,local_58,iVar3);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar8 = local_48;
    iVar3 = (int)uStack_40;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(param_1 + 0x40,lVar8,iVar4);
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x10;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_148b79567:
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(param_2 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b79628 FUN_148b79628 body=615 status=ok
// SIG undefined FUN_148b79628(void)

void FUN_148b79628(longlong param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar4 == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(lVar4 + 0x390);
  }
  uVar5 = FUN_1447210f0(plVar9);
  uVar5 = FUN_1456f33b6(uVar5);
  uVar5 = FUN_148b79a54(uVar5,plVar9);
  puVar1 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (longlong *)FUN_14479d2ce(puVar1);
  if (plVar6 == (longlong *)0x0) {
    FUN_1411371f6(local_b8);
    local_88 = 1;
    local_a8 = FUN_14093f908(plVar9);
    local_a0 = FUN_144a5270a(plVar9);
    uVar7 = FUN_1447210f0(plVar9);
    uVar8 = FUN_14129154a();
    local_c8 = local_b8;
    plVar6 = (longlong *)FUN_141137228(uVar7,uVar8,0,0);
    if (plVar6 != (longlong *)0x0) {
      plVar3 = (longlong *)plVar9[0x7a];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x318))(plVar3,plVar9);
      }
      (**(code **)(*plVar9 + 0xce8))(plVar9,uVar5);
      (**(code **)(*plVar6 + 0xf38))(plVar6,plVar9);
      (**(code **)(*(longlong *)plVar9[0x86] + 0x2a0))((longlong *)plVar9[0x86],plVar6);
      (**(code **)(*plVar6 + 0xce0))(plVar6,uVar5);
      FUN_1401a700c(&local_bc,0xcc);
      (**(code **)(*plVar6 + 0x678))(plVar6,local_bc);
      FUN_1401a700c(&local_bc,0x142);
      (**(code **)(*plVar6 + 0x678))(plVar6,local_bc);
      if (plVar6[0x88] != 0) {
        pbVar2 = (byte *)(plVar6[0x88] + 0x398);
        *pbVar2 = *pbVar2 & 0xfd;
      }
      FUN_14485c47a(puVar1,plVar6);
    }
    if (local_78 != 0) {
      if (local_68 == (longlong *)0x0) {
        local_68 = local_58;
      }
      (**(code **)(*local_68 + 0x10))();
    }
  }
  else {
    (**(code **)(*plVar6 + 0xce8))(plVar6,uVar5);
    plVar3 = (longlong *)plVar6[0x150];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2a0))(plVar3,plVar9);
    }
    (**(code **)(*plVar6 + 0xf40))(plVar6,plVar9);
    (**(code **)(*plVar9 + 0xce0))(plVar9,uVar5);
    plVar3 = (longlong *)plVar9[0x7a];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x308))(plVar3,plVar9);
    }
    (**(code **)(*plVar6 + 0x6d0))(plVar6);
    uVar5 = FUN_1447210f0(plVar6);
    FUN_1412f3774(uVar5,plVar6,0,0);
    *puVar1 = 0;
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd;
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b79890 FUN_148b79890 body=451 status=ok
// SIG undefined FUN_148b79890(void)

undefined8 * FUN_148b79890(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 & 2) != 0) goto LAB_148b799b4;
  if ((uVar1 & 1) == 0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    cVar3 = FUN_144729dda(param_1 + 0x48);
    puVar4 = &DAT_14cb9ea78;
    piVar6 = &DAT_14cb9ea80;
    if (cVar3 != '\0') {
      piVar6 = &DAT_14cb9ea70;
      puVar4 = &DAT_14cb9ea68;
    }
    if (*piVar6 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    if (*(int *)(param_1 + 0x20) < 1) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
LAB_148b79922:
      puVar7 = &DAT_149dfb77a;
    }
    else {
      FUN_148b77618(*(undefined8 *)(param_1 + 0x18),&local_58);
      puVar7 = local_58;
      if ((int)uStack_50 == 0) goto LAB_148b79922;
    }
    puVar5 = DAT_14cb9ea58;
    if (DAT_14cb9ea60 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    local_68 = puVar8;
    FUN_140002266(&local_48,L"{%s}%s:{%s}Spectator",puVar5,puVar7);
  }
  if ((longlong *)(param_1 + 0x38) == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x38) = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0x44) = uStack_40._4_4_;
    uStack_40 = 0;
  }
  if (((uVar1 & 1) != 0) && (local_58 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
LAB_148b799b4:
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b79a54 FUN_148b79a54 body=99 status=ok
// SIG undefined FUN_148b79a54(void)

longlong FUN_148b79a54(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x3a0);
  if (0 < lVar2) {
    lVar1 = *(longlong *)(param_1 + 0x398);
    do {
      if ((*(longlong *)(lVar1 + 0x10) != 0) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x390) == param_2)) {
        if (lVar1 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar1 + 8);
        if (DAT_14c950c29 == '\x01') {
          if (lVar2 == 0) {
            return 0;
          }
          FUN_1456cec3c(lVar2);
          return lVar2;
        }
        return lVar2;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 148b79aca FUN_148b79aca body=43 status=ok
// SIG undefined FUN_148b79aca(void)

void FUN_148b79aca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != param_2) {
    return;
  }
  FUN_140e1f5ec(param_1);
  return;
}



// FUNCTION 148b79afe FUN_148b79afe body=64 status=ok
// SIG undefined FUN_148b79afe(void)

void FUN_148b79afe(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar1 = 0;
      do {
        FUN_147a593b8(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar1 * 8),0);
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  return;
}



// FUNCTION 148b79b3e FUN_148b79b3e body=63 status=ok
// SIG undefined FUN_148b79b3e(void)

void FUN_148b79b3e(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar1 = 0;
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + lVar1 * 8) + 0x20))();
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 148b79b7e FUN_148b79b7e body=126 status=ok
// SIG undefined FUN_148b79b7e(void)

void FUN_148b79b7e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x390);
    *(uint *)(param_1 + 0x390) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x394) - iVar2) < uVar1) {
      FUN_148b7b37c((longlong *)(param_1 + 0x388),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x388)),(void *)*param_2,
           (longlong)(int)uVar1 << 3);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b79bfc FUN_148b79bfc body=194 status=ok
// SIG undefined FUN_148b79bfc(void)

double * FUN_148b79bfc(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = DAT_14c8464f0 + -1000000.0;
  dVar5 = DAT_14c8464e8 + -1000000.0;
  dVar1 = ((DAT_14c8464f0 + 1000000.0) - dVar4) * 0.5;
  dVar3 = ((DAT_14c8464e8 + 1000000.0) - dVar5) * 0.5;
  dVar2 = ((DAT_14c8464e0 + 1000000.0) - (DAT_14c8464e0 + -1000000.0)) * 0.5;
  *param_2 = DAT_14c8464e0 + -1000000.0 + dVar2;
  param_2[1] = dVar5 + dVar3;
  param_2[2] = dVar4 + dVar1;
  param_2[3] = dVar2;
  param_2[4] = dVar3;
  param_2[5] = dVar1;
  param_2[6] = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
  return param_2;
}



// FUNCTION 148b79cc3 FUN_148b79cc3 body=152 status=ok
// SIG undefined FUN_148b79cc3(void)

longlong * FUN_148b79cc3(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1436364e8();
  FUN_14021219d(param_1,param_2 + 0x10);
  FUN_1400751dc(param_1,param_2 + 0x20);
  local_21 = *(undefined1 *)(param_2 + 0x24);
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_21,1);
    uVar3 = local_21;
  }
  else {
    uVar3 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b79d5c FUN_148b79d5c body=43 status=ok
// SIG undefined FUN_148b79d5c(void)

undefined8 FUN_148b79d5c(undefined8 param_1,int param_2)

{
  FUN_1405d0dec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 148b79d94 FUN_148b79d94 body=38 status=ok
// SIG undefined FUN_148b79d94(void)

undefined8 FUN_148b79d94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Advanced",1);
  return param_2;
}



// FUNCTION 148b79dfe FUN_148b79dfe body=43 status=ok
// SIG undefined FUN_148b79dfe(void)

undefined8 FUN_148b79dfe(undefined8 param_1,int param_2)

{
  FUN_1405d0ec2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148b79e76 FUN_148b79e76 body=83 status=ok
// SIG undefined FUN_148b79e76(void)

undefined1 FUN_148b79e76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[3] = puVar1[3];
      puVar2[4] = uVar7;
      puVar2[5] = uVar8;
      puVar2[6] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1447a122a();
      lVar10 = lVar10 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b79ef2 FUN_148b79ef2 body=59 status=ok
// SIG undefined FUN_148b79ef2(void)

undefined8 FUN_148b79ef2(longlong *param_1)

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



// FUNCTION 148b79f38 FUN_148b79f38 body=38 status=ok
// SIG undefined FUN_148b79f38(void)

void FUN_148b79f38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b79ff4 FUN_148b79ff4 body=102 status=ok
// SIG undefined FUN_148b79ff4(void)

undefined8 FUN_148b79ff4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      FUN_140bee9ec(param_2 + -0x10,param_3 + -0x10);
      FUN_1457255b8(param_2,param_3);
      FUN_148b7a190(param_2 + 0x10,param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7a082 FUN_148b7a082 body=59 status=ok
// SIG undefined FUN_148b7a082(void)

undefined8 FUN_148b7a082(longlong *param_1)

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



// FUNCTION 148b7a0c8 FUN_148b7a0c8 body=32 status=ok
// SIG undefined FUN_148b7a0c8(void)

void FUN_148b7a0c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148b7a136(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148b7a136 FUN_148b7a136 body=89 status=ok
// SIG undefined FUN_148b7a136(void)

void FUN_148b7a136(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1405d0e5d(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148b7a190 FUN_148b7a190 body=88 status=ok
// SIG undefined FUN_148b7a190(void)

undefined8 * FUN_148b7a190(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b7a1e8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b7a1e8 FUN_148b7a1e8 body=98 status=ok
// SIG undefined FUN_148b7a1e8(void)

void FUN_148b7a1e8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b7a2a6 FUN_148b7a2a6 body=59 status=ok
// SIG undefined FUN_148b7a2a6(void)

undefined8 FUN_148b7a2a6(longlong *param_1)

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



// FUNCTION 148b7a342 FUN_148b7a342 body=98 status=ok
// SIG undefined FUN_148b7a342(void)

void FUN_148b7a342(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


