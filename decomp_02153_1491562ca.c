// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1491562ca FUN_1491562ca body=174 status=ok
// SIG undefined FUN_1491562ca(void)

undefined8 FUN_1491562ca(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_149154680(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_149156378(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149156378 FUN_149156378 body=114 status=ok
// SIG undefined FUN_149156378(void)

void FUN_149156378(longlong *param_1,int param_2)

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



// FUNCTION 1491563ea FUN_1491563ea body=476 status=ok
// SIG undefined FUN_1491563ea(void)

void FUN_1491563ea(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1491565c8 FUN_1491565c8 body=147 status=ok
// SIG undefined FUN_1491565c8(void)

void FUN_1491565c8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14915665c FUN_14915665c body=365 status=ok
// SIG undefined FUN_14915665c(void)

undefined4 * FUN_14915665c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1491567ca(param_1,local_40);
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
  cVar3 = FUN_1491568b0(param_1,uVar4,local_38,&local_44);
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
      FUN_1491569c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491567ca FUN_1491567ca body=229 status=ok
// SIG undefined FUN_1491567ca(void)

int * FUN_1491567ca(longlong *param_1,int *param_2)

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



// FUNCTION 1491568b0 FUN_1491568b0 body=164 status=ok
// SIG undefined FUN_1491568b0(void)

undefined8 FUN_1491568b0(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_1408cc6da(param_1,param_2,&local_30);
    if (iVar1 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_149156956(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_1491568d4;
    }
  }
  uVar2 = 0;
LAB_1491568d4:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149156956 FUN_149156956 body=114 status=ok
// SIG undefined FUN_149156956(void)

void FUN_149156956(longlong *param_1,int param_2)

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



// FUNCTION 1491569c8 FUN_1491569c8 body=510 status=ok
// SIG undefined FUN_1491569c8(void)

void FUN_1491569c8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x10);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x10;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0xc) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 8) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149156bc8 FUN_149156bc8 body=90 status=ok
// SIG undefined FUN_149156bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149156bc8(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_1 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_1 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(&DAT_14cc017e8,0,uVar3,0x20,8);
  }
  _DAT_14cc017f4 = iVar2;
  return;
}



// FUNCTION 149156c22 FUN_149156c22 body=47 status=ok
// SIG undefined FUN_149156c22(void)

void FUN_149156c22(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_14058ae9c(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 149156c51 FUN_149156c51 body=41 status=ok
// SIG undefined FUN_149156c51(void)

void FUN_149156c51(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14083ed00(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 149156c7a FUN_149156c7a body=124 status=ok
// SIG undefined FUN_149156c7a(void)

void FUN_149156c7a(longlong param_1,int param_2)

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



// FUNCTION 149156cf7 FUN_149156cf7 body=87 status=ok
// SIG undefined FUN_149156cf7(void)

void FUN_149156cf7(longlong param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_1 + 0x24);
    do {
      if (*piVar1 != -1) {
        if (*(longlong *)(piVar1 + -3) != 0) {
          FUN_1400020a8();
        }
        piVar1[-3] = 0;
        piVar1[-2] = 0;
        piVar1[-1] = 0;
        piVar1[0] = -1;
      }
      if ((char)piVar1[-5] == '\x01') {
        *(undefined1 *)(piVar1 + -5) = 0;
      }
      piVar1 = piVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149156d4e FUN_149156d4e body=42 status=ok
// SIG undefined FUN_149156d4e(void)

void FUN_149156d4e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 149156d78 FUN_149156d78 body=147 status=ok
// SIG undefined FUN_149156d78(void)

void FUN_149156d78(longlong param_1,int param_2)

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



// FUNCTION 149156e0c FUN_149156e0c body=101 status=ok
// SIG undefined FUN_149156e0c(void)

void FUN_149156e0c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x28 + *param_1);
  FUN_149156cf7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149156e72 FUN_149156e72 body=62 status=ok
// SIG undefined FUN_149156e72(void)

void FUN_149156e72(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149156eb0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 149156eb0 FUN_149156eb0 body=112 status=ok
// SIG undefined FUN_149156eb0(void)

ulonglong FUN_149156eb0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149156eea;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_149156eea:
  return param_2 & 0xffffffff;
}



// FUNCTION 149156f20 FUN_149156f20 body=373 status=ok
// SIG undefined FUN_149156f20(void)

undefined8 * FUN_149156f20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_149157122(param_1 + 2,iVar1);
    FUN_149157187(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1490f2264(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 << 4);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_1483fefd0(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14447b7a0(param_1 + 0x13,param_2 + 0x13);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_14912c082(param_1 + 0x15,param_2 + 0x15);
  return param_1;
}



// FUNCTION 149157096 FUN_149157096 body=139 status=ok
// SIG undefined FUN_149157096(void)

int FUN_149157096(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar3 = (int)((ulonglong)((longlong)(iVar1 + 0x59) * -0x47e8fd1f) >> 0x20) + iVar1 + 0x59;
  iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar4 = iVar3 - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar3) {
    do {
      uVar2 = FUN_14001cc68(0x3ff8,0x10);
      FUN_1491558c2(uVar2);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 149157122 FUN_149157122 body=101 status=ok
// SIG undefined FUN_149157122(void)

undefined8 FUN_149157122(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 5;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0xe0,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 149157187 FUN_149157187 body=55 status=ok
// SIG undefined FUN_149157187(void)

void FUN_149157187(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1491571be(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1491571be FUN_1491571be body=347 status=ok
// SIG undefined FUN_1491571be(void)

undefined8 * FUN_1491571be(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  uVar3 = *param_2;
  *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 5);
  *param_1 = uVar3;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  pvVar4 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar4,(longlong)iVar2 << 2);
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_14447e8aa(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  pvVar4 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_149157980(param_1 + 0xf,iVar2,0);
    memcpy((void *)param_1[0xf],pvVar4,(longlong)iVar2);
  }
  lVar5 = param_2[0x12];
  param_1[0x12] = lVar5;
  param_1[0x14] = 0;
  if (lVar5 != 0) {
    puVar6 = param_2 + 0x16;
    if ((undefined8 *)param_2[0x14] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_2[0x14];
    }
    (**(code **)*puVar6)(puVar6,param_1 + 0x14);
  }
  cVar1 = *(char *)((longlong)param_2 + 0xd4);
  *(char *)((longlong)param_1 + 0xd4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  }
  return param_1;
}



// FUNCTION 14915731a FUN_14915731a body=31 status=ok
// SIG undefined FUN_14915731a(void)

undefined8 FUN_14915731a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149157356 FUN_149157356 body=93 status=ok
// SIG undefined FUN_149157356(void)

void FUN_149157356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2b960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491573b4 FUN_1491573b4 body=93 status=ok
// SIG undefined FUN_1491573b4(void)

void FUN_1491573b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2b960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149157412 FUN_149157412 body=126 status=ok
// SIG undefined FUN_149157412(void)

void FUN_149157412(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb2b960;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149157481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14915749e FUN_14915749e body=21 status=ok
// SIG undefined FUN_14915749e(void)

undefined8 FUN_14915749e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1491574b4 FUN_1491574b4 body=31 status=ok
// SIG undefined FUN_1491574b4(void)

undefined8 FUN_1491574b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491574f0 FUN_1491574f0 body=93 status=ok
// SIG undefined FUN_1491574f0(void)

void FUN_1491574f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2b9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14915754e FUN_14915754e body=93 status=ok
// SIG undefined FUN_14915754e(void)

void FUN_14915754e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2b9d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491575ac FUN_1491575ac body=126 status=ok
// SIG undefined FUN_1491575ac(void)

void FUN_1491575ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a975710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb2b9d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014915761b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149157638 FUN_149157638 body=21 status=ok
// SIG undefined FUN_149157638(void)

undefined8 FUN_149157638(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14915764e FUN_14915764e body=31 status=ok
// SIG undefined FUN_14915764e(void)

undefined8 FUN_14915764e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14915768a FUN_14915768a body=93 status=ok
// SIG undefined FUN_14915768a(void)

void FUN_14915768a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a395890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2ba40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491576e8 FUN_1491576e8 body=93 status=ok
// SIG undefined FUN_1491576e8(void)

void FUN_1491576e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a395890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2ba40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149157746 FUN_149157746 body=126 status=ok
// SIG undefined FUN_149157746(void)

void FUN_149157746(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a395890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb2ba40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491577b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1491577d2 FUN_1491577d2 body=21 status=ok
// SIG undefined FUN_1491577d2(void)

undefined8 FUN_1491577d2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1491577e8 FUN_1491577e8 body=31 status=ok
// SIG undefined FUN_1491577e8(void)

undefined8 FUN_1491577e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149157820 FUN_149157820 body=93 status=ok
// SIG undefined FUN_149157820(void)

void FUN_149157820(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb2bb20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2bab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14915787e FUN_14915787e body=93 status=ok
// SIG undefined FUN_14915787e(void)

void FUN_14915787e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bb2bb20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2bab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1491578dc FUN_1491578dc body=126 status=ok
// SIG undefined FUN_1491578dc(void)

void FUN_1491578dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bb2bb20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb2bab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014915794b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149157968 FUN_149157968 body=21 status=ok
// SIG undefined FUN_149157968(void)

undefined8 FUN_149157968(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149157980 FUN_149157980 body=90 status=ok
// SIG undefined FUN_149157980(void)

void FUN_149157980(longlong param_1,int param_2,int param_3)

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
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491579da FUN_1491579da body=146 status=ok
// SIG undefined FUN_1491579da(void)

void FUN_1491579da(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149157a6e FUN_149157a6e body=132 status=ok
// SIG undefined FUN_149157a6e(void)

void FUN_149157a6e(longlong param_1,int param_2)

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



// FUNCTION 149157af4 FUN_149157af4 body=389 status=ok
// SIG undefined FUN_149157af4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_149157af4(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491561e4(&DAT_14cc013e8,local_48);
  puVar1 = (undefined8 *)param_2[1];
  *local_40 = *(undefined8 *)*param_2;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1491562ca(&DAT_14cc013e8,uVar10,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cc013f0 - _DAT_14cc0141c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cc01430)) {
      uVar10 = DAT_14cc01430 - 1U & uVar10;
      *(uint *)((longlong)local_40 + 0x1c) = uVar10;
      puVar7 = DAT_14cc01428;
      if (DAT_14cc01428 == (undefined *)0x0) {
        puVar7 = &DAT_14cc01420;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cc01430 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cc01428;
      if (DAT_14cc01428 == (undefined *)0x0) {
        puVar7 = &DAT_14cc01420;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cc01430 - 1U & (longlong)(int)uVar10) * 4) =
           local_4c;
    }
    else {
      DAT_14cc01430 = iVar9;
      FUN_1491563ea(&DAT_14cc013e8);
    }
  }
  *param_1 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149157c7a FUN_149157c7a body=181 status=ok
// SIG undefined FUN_149157c7a(void)

longlong FUN_149157c7a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_149157d12;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_149157d30(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_149157d12:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 149157d30 FUN_149157d30 body=274 status=ok
// SIG undefined FUN_149157d30(void)

undefined4 * FUN_149157d30(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409e7252(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined1 *)(local_40 + 1) = 0;
  local_40[2] = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_1409e71ba(param_1,param_3,local_40,local_48);
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
      local_40[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_145cff422(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149157e44 FUN_149157e44 body=293 status=ok
// SIG undefined FUN_149157e44(void)

undefined4 * FUN_149157e44(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14028411c(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_140284086(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1402843ec(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149157f6a FUN_149157f6a body=68 status=ok
// SIG undefined FUN_149157f6a(void)

void FUN_149157f6a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1467af0ba();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149157fae FUN_149157fae body=121 status=ok
// SIG undefined FUN_149157fae(void)

undefined8 * FUN_149157fae(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  lVar1 = *param_3;
  param_1[6] = lVar1;
  param_1[8] = 0;
  if (lVar1 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)*plVar6)(uVar2,param_1 + 8);
  }
  FUN_1491586ea(param_1);
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return param_1;
}



// FUNCTION 149158028 FUN_149158028 body=627 status=ok
// SIG undefined FUN_149158028(void)

void FUN_149158028(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [39];
  char local_81;
  undefined8 local_80;
  ulonglong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *(uint *)(param_1 + 4);
  uVar12 = (ulonglong)uVar4;
  if ((char)param_1[2] == '\0') {
    local_78[0] = local_78[0] & 0xffffffff00000000;
    FUN_1448158c6(param_2,local_78,uVar12);
  }
  else if ((int)uVar4 < 2) {
    uVar5 = *(uint *)((longlong)param_2 + 0xc);
    if (uVar4 == 1) {
      iVar11 = 0;
      if ((int)uVar5 < 1) {
        *(undefined4 *)(param_2 + 1) = 0;
        FUN_14482f6fa(param_2,1);
        iVar11 = (int)param_2[1];
        uVar5 = *(uint *)((longlong)param_2 + 0xc);
      }
      *(uint *)(param_2 + 1) = iVar11 + 1U;
      if (uVar5 < iVar11 + 1U) {
        FUN_14475e4ac(param_2,iVar11);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar11 * 4) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
      }
    }
  }
  else {
    local_78[0] = 0;
    local_78[1] = 0;
    local_81 = param_4;
    local_80 = param_3;
    FUN_1405f4806(local_78,uVar12,1);
    lVar10 = 0;
    uVar9 = 0;
    do {
      lVar1 = param_1[3];
      pcVar2 = (code *)param_1[6];
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 10;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      uVar13 = (*pcVar2)(uVar6,local_80,lVar1 + lVar10);
      *(undefined4 *)(local_78[0] + uVar9 * 4) = uVar13;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while (uVar12 != uVar9);
    FUN_14005ea14(param_2);
    cVar3 = local_81;
    lVar10 = 0;
    uVar9 = 0;
    do {
      fVar15 = 0.0;
      uVar8 = 0;
      do {
        fVar15 = fVar15 + *(float *)(*param_1 + lVar10 + uVar8 * 4) *
                          *(float *)(local_78[0] + uVar8 * 4);
        uVar8 = uVar8 + 1;
      } while (uVar12 != uVar8);
      lVar1 = param_2[1];
      uVar4 = (int)lVar1 + 1;
      *(uint *)(param_2 + 1) = uVar4;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
        FUN_14475e4ac();
      }
      *(float *)(*param_2 + (longlong)(int)lVar1 * 4) = fVar15;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + uVar12 * 4;
    } while (uVar9 != uVar12);
    if (cVar3 == '\0') {
      uVar9 = 0;
      do {
        fVar15 = *(float *)(*param_2 + uVar9 * 4);
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        *(float *)(*param_2 + uVar9 * 4) = fVar15;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    else {
      uVar9 = 0;
      fVar15 = 0.0;
      do {
        fVar14 = *(float *)(*param_2 + uVar9 * 4);
        if (fVar15 <= fVar14) {
          fVar14 = fVar15;
        }
        uVar9 = uVar9 + 1;
        fVar15 = fVar14;
      } while (uVar12 != uVar9);
      uVar9 = 0;
      do {
        *(float *)(*param_2 + uVar9 * 4) = *(float *)(*param_2 + uVar9 * 4) - fVar14;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
      fVar15 = 0.0;
      uVar9 = 0;
      do {
        fVar15 = fVar15 + *(float *)(*param_2 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
      uVar9 = 0;
      do {
        fVar14 = *(float *)(*param_2 + uVar9 * 4) / fVar15;
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        *(float *)(*param_2 + uVar9 * 4) = fVar14;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491582f4 FUN_1491582f4 body=29 status=ok
// SIG undefined FUN_1491582f4(void)

undefined8 FUN_1491582f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149158312 FUN_149158312 body=776 status=ok
// SIG undefined FUN_149158312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149158312(undefined1 *param_1,undefined8 param_2,double *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *in_RDX;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  switch(*param_1) {
  case 0:
    dVar8 = SQRT((in_RDX[3] - param_3[3]) * (in_RDX[3] - param_3[3]) +
                 (in_RDX[2] - param_3[2]) * (in_RDX[2] - param_3[2]) +
                 (*in_RDX - *param_3) * (*in_RDX - *param_3) +
                 (in_RDX[1] - param_3[1]) * (in_RDX[1] - param_3[1]));
    goto LAB_1491585b6;
  case 1:
    dVar2 = *in_RDX;
    dVar3 = in_RDX[1];
    dVar8 = in_RDX[2];
    dVar9 = in_RDX[3];
    dVar12 = dVar8 * dVar8 + dVar2 * dVar2;
    dVar15 = dVar9 * dVar9 + dVar3 * dVar3;
    auVar13._0_8_ = dVar12 + dVar15;
    auVar13._8_8_ = dVar12 + dVar15;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
    auVar14 = sqrtpd(auVar13,auVar13);
    auVar19 = divpd(_DAT_149934d80,auVar14);
    auVar20._0_8_ = auVar19._0_8_ * dVar8;
    auVar20._8_8_ = auVar19._8_8_ * dVar9;
    auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar16);
    dVar15 = *param_3;
    dVar4 = param_3[1];
    dVar5 = param_3[2];
    dVar6 = param_3[3];
    auVar21._0_8_ = dVar15 * dVar15;
    auVar21._8_8_ = dVar4 * dVar4;
    dVar8 = dVar5 * dVar5 + auVar21._0_8_;
    dVar9 = dVar6 * dVar6 + auVar21._8_8_;
    auVar14._8_4_ = SUB84(dVar9,0);
    auVar14._0_8_ = dVar8;
    auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar12 = dVar8 + auVar14._8_8_;
    uVar7 = -(ulonglong)(9.99999993922529e-09 <= dVar8 + dVar9);
    auVar17._8_4_ = SUB84(dVar12,0);
    auVar17._0_8_ = dVar8 + dVar9;
    auVar17._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar14 = sqrtpd(auVar21,auVar17);
    auVar17 = divpd(_DAT_149934d80,auVar14);
    auVar18._0_8_ = auVar17._0_8_ * dVar5;
    auVar18._8_8_ = auVar17._8_8_ * dVar6;
    auVar10._8_8_ = -(ulonglong)(9.99999993922529e-09 <= dVar12);
    auVar10._0_8_ = uVar7;
    auVar14 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar10);
    dVar8 = auVar14._8_8_ * auVar16._8_8_ +
            auVar16._0_8_ * auVar14._0_8_ +
            (double)((ulonglong)(dVar15 * auVar17._0_8_) & uVar7) *
            (double)((ulonglong)(dVar2 * auVar19._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_)) +
            (double)((ulonglong)(dVar3 * auVar19._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_)) *
            (double)((ulonglong)(dVar4 * auVar17._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= dVar12));
    dVar9 = (dVar8 + dVar8) * dVar8 + -1.0;
    dVar8 = dVar9;
    if (1.0 <= dVar9) {
      dVar8 = 1.0;
    }
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_144afe582(in_RDX,uVar1,&local_a8,local_e8);
    FUN_144afe582(param_3,uVar1,&local_c8,local_e8);
    dVar8 = local_90 * local_b0 + local_98 * local_b8 + local_a8 * local_c8 + local_a0 * local_c0;
    dVar9 = (dVar8 + dVar8) * dVar8 + -1.0;
    dVar8 = dVar9;
    if (1.0 <= dVar9) {
      dVar8 = 1.0;
    }
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 8);
    dVar8 = (double)FUN_14010169e(in_RDX,uVar1);
    dVar9 = (double)FUN_14010169e(param_3,uVar1);
    uVar7 = CONCAT44(uVar11,(float)(dVar8 - dVar9)) & 0x7fffffff7fffffff;
    goto LAB_1491585bd;
  default:
    uVar7 = 0;
    goto LAB_1491585bd;
  }
  dVar8 = acos((double)(-(ulonglong)(dVar9 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar9 < -1.0) & (ulonglong)dVar8));
LAB_1491585b6:
  uVar7 = (ulonglong)(uint)(float)dVar8;
LAB_1491585bd:
  FUN_14915861c(param_1 + 0x10,uVar7);
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14915861c FUN_14915861c body=206 status=ok
// SIG undefined FUN_14915861c(void)

float FUN_14915861c(undefined1 *param_1,float param_2)

{
  float fVar1;
  
  switch(*param_1) {
  case 0:
    fVar1 = (1.0 / *(float *)(param_1 + 4)) * (1.0 / *(float *)(param_1 + 4)) * -param_2;
    break;
  case 1:
    fVar1 = (param_2 * -2.0) / *(float *)(param_1 + 4);
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 4);
    if (fVar1 <= param_2) {
      param_2 = fVar1;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    return (fVar1 - param_2) / fVar1;
  case 3:
    param_2 = param_2 / *(float *)(param_1 + 4);
    param_2 = param_2 * param_2 * param_2;
    goto LAB_1491586be;
  case 4:
    param_2 = powf(param_2 / *(float *)(param_1 + 4),5.0);
LAB_1491586be:
    param_2 = 1.0 - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    return param_2;
  default:
    return 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001491586de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = expf(fVar1);
  return fVar1;
}



// FUNCTION 1491586ea FUN_1491586ea body=342 status=ok
// SIG undefined FUN_1491586ea(void)

void FUN_1491586ea(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar10 = (ulonglong)iVar1;
  if ((longlong)uVar10 < 2) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    FUN_140eb7228(&local_78,(uint)((iVar1 + -1) * iVar1) >> 1);
    lVar9 = 0;
    uVar7 = 0;
    local_a8 = uVar10;
    do {
      local_a0 = uVar7;
      local_98 = uVar10;
      local_90 = lVar9;
      do {
        lVar11 = *(longlong *)(param_1 + 0x18);
        pcVar2 = *(code **)(param_1 + 0x30);
        plVar8 = *(longlong **)(param_1 + 0x40);
        if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
          plVar8 = (longlong *)(param_1 + 0x50);
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        uVar12 = (*pcVar2)(uVar6,lVar11 + uVar7 * 0x20,lVar11 + lVar9);
        uVar3 = uStack_70;
        lVar11 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_14481013a(&local_78,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_78 + lVar11 * 4) = uVar12;
        lVar9 = lVar9 + 0x20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar7 = local_a0 + 1;
      uVar10 = local_98 - 1;
      lVar9 = local_90 + 0x20;
    } while (uVar7 != local_a8);
    local_88 = local_78;
    local_80 = (int)uStack_70;
    uVar4 = FUN_140eb73ae(param_1,&local_88,local_a8 & 0xffffffff);
    *(undefined1 *)(param_1 + 0x10) = uVar4;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149158842 FUN_149158842 body=121 status=ok
// SIG undefined FUN_149158842(void)

undefined8 * FUN_149158842(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  lVar1 = *param_3;
  param_1[6] = lVar1;
  param_1[8] = 0;
  if (lVar1 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)*plVar6)(uVar2,param_1 + 8);
  }
  FUN_149158dd8(param_1);
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return param_1;
}



// FUNCTION 1491588bc FUN_1491588bc body=627 status=ok
// SIG undefined FUN_1491588bc(void)

void FUN_1491588bc(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [39];
  char local_81;
  undefined8 local_80;
  ulonglong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *(uint *)(param_1 + 4);
  uVar12 = (ulonglong)uVar4;
  if ((char)param_1[2] == '\0') {
    local_78[0] = local_78[0] & 0xffffffff00000000;
    FUN_1448158c6(param_2,local_78,uVar12);
  }
  else if ((int)uVar4 < 2) {
    uVar5 = *(uint *)((longlong)param_2 + 0xc);
    if (uVar4 == 1) {
      iVar11 = 0;
      if ((int)uVar5 < 1) {
        *(undefined4 *)(param_2 + 1) = 0;
        FUN_14482f6fa(param_2,1);
        iVar11 = (int)param_2[1];
        uVar5 = *(uint *)((longlong)param_2 + 0xc);
      }
      *(uint *)(param_2 + 1) = iVar11 + 1U;
      if (uVar5 < iVar11 + 1U) {
        FUN_14475e4ac(param_2,iVar11);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar11 * 4) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
      }
    }
  }
  else {
    local_78[0] = 0;
    local_78[1] = 0;
    local_81 = param_4;
    local_80 = param_3;
    FUN_1405f4806(local_78,uVar12,1);
    lVar10 = 0;
    uVar9 = 0;
    do {
      lVar1 = param_1[3];
      pcVar2 = (code *)param_1[6];
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 10;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      uVar13 = (*pcVar2)(uVar6,local_80,lVar1 + lVar10);
      *(undefined4 *)(local_78[0] + uVar9 * 4) = uVar13;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar12 != uVar9);
    FUN_14005ea14(param_2);
    cVar3 = local_81;
    lVar10 = 0;
    uVar9 = 0;
    do {
      fVar15 = 0.0;
      uVar8 = 0;
      do {
        fVar15 = fVar15 + *(float *)(*param_1 + lVar10 + uVar8 * 4) *
                          *(float *)(local_78[0] + uVar8 * 4);
        uVar8 = uVar8 + 1;
      } while (uVar12 != uVar8);
      lVar1 = param_2[1];
      uVar4 = (int)lVar1 + 1;
      *(uint *)(param_2 + 1) = uVar4;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
        FUN_14475e4ac();
      }
      *(float *)(*param_2 + (longlong)(int)lVar1 * 4) = fVar15;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + uVar12 * 4;
    } while (uVar9 != uVar12);
    if (cVar3 == '\0') {
      uVar9 = 0;
      do {
        fVar15 = *(float *)(*param_2 + uVar9 * 4);
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        *(float *)(*param_2 + uVar9 * 4) = fVar15;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    else {
      uVar9 = 0;
      fVar15 = 0.0;
      do {
        fVar14 = *(float *)(*param_2 + uVar9 * 4);
        if (fVar15 <= fVar14) {
          fVar14 = fVar15;
        }
        uVar9 = uVar9 + 1;
        fVar15 = fVar14;
      } while (uVar12 != uVar9);
      uVar9 = 0;
      do {
        *(float *)(*param_2 + uVar9 * 4) = *(float *)(*param_2 + uVar9 * 4) - fVar14;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
      fVar15 = 0.0;
      uVar9 = 0;
      do {
        fVar15 = fVar15 + *(float *)(*param_2 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
      uVar9 = 0;
      do {
        fVar14 = *(float *)(*param_2 + uVar9 * 4) / fVar15;
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        *(float *)(*param_2 + uVar9 * 4) = fVar14;
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149158b86 FUN_149158b86 body=29 status=ok
// SIG undefined FUN_149158b86(void)

undefined8 FUN_149158b86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149158ba4 FUN_149158ba4 body=563 status=ok
// SIG undefined FUN_149158ba4(void)

void FUN_149158ba4(char *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    dVar4 = *param_3;
    dVar6 = param_3[1];
    dVar1 = param_3[2];
    dVar2 = *param_2;
    dVar9 = param_2[1];
    dVar10 = param_2[2];
    dVar11 = dVar10 * dVar10 + dVar2 * dVar2 + dVar9 * dVar9;
    if (((dVar11 != 1.0) || (dVar8 = dVar2, dVar12 = dVar10, dVar5 = dVar9, NAN(dVar11))) &&
       (dVar8 = DAT_14c8464e0, dVar12 = DAT_14c8464f0, dVar5 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar8 = dVar2 * dVar11;
      dVar12 = dVar10 * dVar11;
      dVar5 = dVar9 * dVar11;
    }
    dVar2 = dVar1 * dVar1 + dVar4 * dVar4 + dVar6 * dVar6;
    if (((dVar2 != 1.0) || (dVar9 = dVar6, dVar10 = dVar4, dVar11 = dVar1, NAN(dVar2))) &&
       (dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0, dVar11 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar2)) {
      dVar2 = 1.0 / SQRT(dVar2);
      dVar9 = dVar6 * dVar2;
      dVar10 = dVar4 * dVar2;
      dVar11 = dVar1 * dVar2;
    }
    dVar6 = dVar5 * dVar9 + dVar8 * dVar10 + dVar12 * dVar11;
    dVar4 = dVar6;
    if (1.0 <= dVar6) {
      dVar4 = 1.0;
    }
    dVar4 = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar4));
  }
  else {
    if (cVar3 == '\x01') {
      dVar4 = ABS(*param_2 - *param_3) + ABS(param_2[1] - param_3[1]) + ABS(param_2[2] - param_3[2])
      ;
      uVar7 = CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
      goto LAB_149158d24;
    }
    uVar7 = 0;
    if (cVar3 != '\0') goto LAB_149158d24;
    dVar4 = SQRT((param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) +
                 (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                 (*param_3 - *param_2) * (*param_3 - *param_2));
  }
  uVar7 = (ulonglong)(uint)(float)dVar4;
LAB_149158d24:
  FUN_14915861c(param_1 + 4,uVar7);
  return;
}



// FUNCTION 149158dd8 FUN_149158dd8 body=338 status=ok
// SIG undefined FUN_149158dd8(void)

void FUN_149158dd8(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar11 = (ulonglong)iVar1;
  if ((longlong)uVar11 < 2) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    FUN_140eb7228(&local_78,(uint)((iVar1 + -1) * iVar1) >> 1);
    lVar10 = 0;
    uVar8 = 0;
    local_a8 = uVar11;
    uVar3 = uVar8;
    uVar4 = uVar11;
    lVar12 = lVar10;
    do {
      do {
        local_90 = lVar12;
        local_98 = uVar4;
        local_a0 = uVar3;
        lVar12 = *(longlong *)(param_1 + 0x18);
        pcVar2 = *(code **)(param_1 + 0x30);
        plVar9 = *(longlong **)(param_1 + 0x40);
        if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
          plVar9 = (longlong *)(param_1 + 0x50);
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        uVar13 = (*pcVar2)(uVar7,lVar12 + uVar8 * 0x18,lVar12 + lVar10);
        uVar3 = uStack_70;
        lVar12 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_14481013a(&local_78,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_78 + lVar12 * 4) = uVar13;
        lVar10 = lVar10 + 0x18;
        uVar11 = uVar11 - 1;
        uVar3 = local_a0;
        uVar4 = local_98;
        lVar12 = local_90;
      } while (uVar11 != 0);
      uVar8 = local_a0 + 1;
      uVar11 = local_98 - 1;
      lVar10 = local_90 + 0x18;
      uVar3 = uVar8;
      uVar4 = uVar11;
      lVar12 = lVar10;
    } while (uVar8 != local_a8);
    local_88 = local_78;
    local_80 = (int)uStack_70;
    uVar5 = FUN_140eb73ae(param_1,&local_88,local_a8 & 0xffffffff);
    *(undefined1 *)(param_1 + 0x10) = uVar5;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149158f2c FUN_149158f2c body=249 status=ok
// SIG undefined FUN_149158f2c(void)

void FUN_149158f2c(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  
  param_2 = (undefined8 *)*param_2;
  fVar8 = *(float *)*param_2;
  fVar1 = *(float *)param_2[0xc];
  fVar2 = *(float *)param_2[0x10];
  pfVar5 = (float *)param_2[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  fVar3 = *(float *)param_2[8];
  fVar4 = *(float *)param_2[4];
  pfVar6 = (float *)FUN_144828ac0(param_2 + 0x18,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = *(longlong *)(param_1 + 0xc0);
  fVar8 = (float)FUN_140073f12(fVar8 * fVar3 + *pfVar6);
  *pfVar5 = (fVar2 - fVar1) * (fVar8 + 0.5) + fVar1;
  *pfVar6 = (float)((double)fVar4 * *(double *)(lVar7 + 0x20) + (double)*pfVar6);
  return;
}



// FUNCTION 149159026 FUN_149159026 body=356 status=ok
// SIG undefined FUN_149159026(void)

void FUN_149159026(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = local_f8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1490d751a(&local_168);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar7 = (float)FUN_140073f12(*(float *)(param_1 + 8) * *(float *)(param_1 + 0x10) +
                               *(float *)(param_1 + 0x20));
  *(float *)(param_1 + 0x1c) = (fVar1 - fVar2) * (fVar7 + 0.5) + fVar2;
  *(float *)(param_1 + 0x20) =
       (float)((double)fVar3 * (double)CONCAT44(uStack_144,uStack_148) +
              (double)*(float *)(param_1 + 0x20));
  FUN_140f8ceac(&local_168);
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915918c FUN_14915918c body=233 status=ok
// SIG undefined FUN_14915918c(void)

void FUN_14915918c(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  longlong lVar8;
  float fVar9;
  
  param_2 = (undefined8 *)*param_2;
  dVar1 = *(double *)*param_2;
  dVar2 = *(double *)param_2[4];
  dVar3 = *(double *)param_2[0xc];
  dVar4 = *(double *)param_2[0x10];
  pdVar6 = (double *)param_2[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  dVar5 = *(double *)param_2[8];
  pdVar7 = (double *)
           FUN_144828ac0(param_2 + 0x18,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = *(longlong *)(param_1 + 0xc0);
  fVar9 = (float)FUN_140073f12((float)(dVar1 * dVar5 + *pdVar7));
  *pdVar6 = (dVar4 - dVar3) * ((double)fVar9 + 0.5) + dVar3;
  *pdVar7 = dVar2 * *(double *)(lVar8 + 0x20) + *pdVar7;
  return;
}



// FUNCTION 149159276 FUN_149159276 body=346 status=ok
// SIG undefined FUN_149159276(void)

void FUN_149159276(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_188 [32];
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = &PTR_FUN_14bad5c20;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_13c = 0;
  local_138 = 0x3f91111111111111;
  local_130 = 0x800;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  puVar5 = &DAT_14c846480;
  puVar6 = local_f8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1490d751a(&local_168);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar3 = *(double *)(param_1 + 0x10);
  fVar7 = (float)FUN_140073f12((float)(*(double *)(param_1 + 8) * *(double *)(param_1 + 0x18) +
                                      *(double *)(param_1 + 0x38)));
  *(double *)(param_1 + 0x30) = (dVar1 - dVar2) * ((double)fVar7 + 0.5) + dVar2;
  *(double *)(param_1 + 0x38) =
       dVar3 * (double)CONCAT44(uStack_144,uStack_148) + *(double *)(param_1 + 0x38);
  FUN_140f8ceac(&local_168);
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491593d2 FUN_1491593d2 body=183 status=ok
// SIG undefined FUN_1491593d2(void)

void FUN_1491593d2(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar6 = puVar3[8];
  uVar7 = puVar3[0x14];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  fVar1 = *(float *)puVar3[0x10];
  fVar2 = *(float *)puVar3[0xc];
  uVar8 = FUN_144828ac0(puVar3 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_149159750(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar6,(double)fVar2,(double)fVar1,uVar7,
                uVar8);
  return;
}



// FUNCTION 14915948a FUN_14915948a body=272 status=ok
// SIG undefined FUN_14915948a(void)

void FUN_14915948a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  double local_158;
  double local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x70;
  local_148 = param_1 + 0x58;
  local_150 = (double)*(float *)(param_1 + 0x54);
  local_158 = (double)*(float *)(param_1 + 0x50);
  FUN_149159750(&local_138,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915959c FUN_14915959c body=175 status=ok
// SIG undefined FUN_14915959c(void)

void FUN_14915959c(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar6 = puVar3[8];
  uVar1 = *(undefined8 *)puVar3[0xc];
  uVar2 = *(undefined8 *)puVar3[0x10];
  uVar7 = puVar3[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar3 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_149159750(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar6,uVar1,uVar2,uVar7,uVar9);
  return;
}



// FUNCTION 14915964c FUN_14915964c body=259 status=ok
// SIG undefined FUN_14915964c(void)

void FUN_14915964c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x78;
  local_148 = param_1 + 0x60;
  local_158 = *(undefined4 *)(param_1 + 0x50);
  uStack_154 = *(undefined4 *)(param_1 + 0x54);
  uStack_150 = *(undefined4 *)(param_1 + 0x58);
  uStack_14c = *(undefined4 *)(param_1 + 0x5c);
  FUN_149159750(&local_138,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149159750 FUN_149159750 body=363 status=ok
// SIG undefined FUN_149159750(void)

void FUN_149159750(longlong param_1,double *param_2,double *param_3,double *param_4,double param_5,
                  double param_6,double *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  dVar6 = *param_2 * *param_4 + *param_8;
  fVar3 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6));
  dVar6 = param_2[1] * param_4[1] + param_8[1];
  fVar4 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6));
  dVar6 = param_2[2] * param_4[2] + param_8[2];
  fVar5 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6));
  param_6 = param_6 - param_5;
  *param_7 = ((double)fVar3 + 0.5) * param_6 + param_5;
  param_7[1] = ((double)fVar4 + 0.5) * param_6 + param_5;
  param_7[2] = param_6 * ((double)fVar5 + 0.5) + param_5;
  dVar6 = *(double *)(param_1 + 0x20);
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  *param_8 = dVar6 * *param_3 + *param_8;
  param_8[1] = dVar2 * dVar6 + param_8[1];
  param_8[2] = dVar1 * dVar6 + param_8[2];
  return;
}



// FUNCTION 1491598bc FUN_1491598bc body=290 status=ok
// SIG undefined FUN_1491598bc(void)

undefined8 FUN_1491598bc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_d0 [2];
  longlong local_c0 [2];
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = &PTR_FUN_14bb3b490;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_28 = DAT_14c8464f0;
  local_40 = DAT_14c8464f0;
  local_50 = DAT_14c8464e0;
  uStack_48 = DAT_14c8464e8;
  local_98 = *(undefined8 *)(param_1 + 0x18);
  local_a8 = *(undefined8 *)(param_1 + 8);
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0x30);
  local_90 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  local_60 = (double)*(float *)(param_1 + 0x50);
  local_58 = (double)*(float *)(param_1 + 0x54);
  FUN_1491599e0(param_2);
  FUN_140056680(local_c0,L"Value");
  FUN_140056680(local_d0,L"Position");
  local_d8 = 1;
  FUN_1490fb142(param_2,local_d0,local_c0,1);
  if (local_d0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491599e0 FUN_1491599e0 body=211 status=ok
// SIG undefined FUN_1491599e0(void)

undefined8 * FUN_1491599e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
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
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466b73ce();
  param_1[2] = uVar1;
  uVar1 = FUN_1466b7754();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149159ab4 FUN_149159ab4 body=359 status=ok
// SIG undefined FUN_149159ab4(void)

void FUN_149159ab4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = (undefined8 *)*param_2;
  uVar4 = *(undefined4 *)*puVar5;
  uVar1 = *(undefined4 *)puVar5[4];
  uVar2 = *(undefined4 *)puVar5[8];
  uVar3 = *(undefined4 *)puVar5[0xc];
  uVar6 = puVar5[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar5 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149159d90(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar1,uVar2,uVar3,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 149159c1c FUN_149159c1c body=370 status=ok
// SIG undefined FUN_149159c1c(void)

void FUN_149159c1c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x24) != iVar1) {
    *(int *)(param_1 + 0x24) = iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
  }
  fVar6 = (float)((double)*(float *)(param_1 + 0x28) - (double)CONCAT44(uStack_114,uStack_118));
  *(float *)(param_1 + 0x28) = fVar6;
  if (fVar6 <= 0.0) {
    uVar2 = *(int *)(param_1 + 0x20) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0x20) = uVar2;
    fVar6 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    auVar7 = roundss(ZEXT816(0),ZEXT416((uint)fVar6),0xb);
    fVar6 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) * (fVar6 - auVar7._0_4_) +
            *(float *)(param_1 + 0xc);
    uVar2 = -(uint)(*(float *)(param_1 + 0x14) < -1e-08);
    *(uint *)(param_1 + 0x28) = ~uVar2 & (uint)*(float *)(param_1 + 0x14) | uVar2 & 0x7f7fffff;
    *(float *)(param_1 + 0x1c) = fVar6;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x1c);
  }
  *(float *)(param_1 + 0x18) = fVar6;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149159d90 FUN_149159d90 body=179 status=ok
// SIG undefined FUN_149159d90(void)

void FUN_149159d90(longlong param_1,uint param_2,float param_3,float param_4,float param_5,
                  float *param_6,float *param_7,uint *param_8,uint *param_9,float *param_10)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  undefined1 in_XMM4 [16];
  undefined1 auVar4 [16];
  
  if (*param_9 != param_2) {
    *param_9 = param_2;
    *param_8 = param_2;
  }
  fVar3 = (float)((double)*param_10 - *(double *)(param_1 + 0x20));
  *param_10 = fVar3;
  pfVar1 = param_7;
  if (fVar3 <= 0.0) {
    uVar2 = *param_8 * 0xbb38435 + 0x3619636b;
    *param_8 = uVar2;
    fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    auVar4 = roundss(in_XMM4,ZEXT416((uint)fVar3),0xb);
    *param_6 = (param_4 - param_3) * (fVar3 - auVar4._0_4_) + param_3;
    *param_10 = (float)(~-(uint)(param_5 < -1e-08) & (uint)param_5 |
                       -(uint)(param_5 < -1e-08) & 0x7f7fffff);
    pfVar1 = param_6;
    param_6 = param_7;
  }
  *param_6 = *pfVar1;
  return;
}



// FUNCTION 149159e44 FUN_149159e44 body=359 status=ok
// SIG undefined FUN_149159e44(void)

void FUN_149159e44(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = (undefined8 *)*param_2;
  uVar4 = *(undefined4 *)*puVar5;
  uVar1 = *(undefined4 *)puVar5[4];
  uVar2 = *(undefined4 *)puVar5[8];
  uVar3 = *(undefined4 *)puVar5[0xc];
  uVar6 = puVar5[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar5 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14915a0cc(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar1,uVar2,uVar3,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 149159fac FUN_149159fac body=286 status=ok
// SIG undefined FUN_149159fac(void)

void FUN_149159fac(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x50;
  local_148 = param_1 + 0x4c;
  local_150 = param_1 + 0x48;
  local_158 = param_1 + 0x30;
  local_160 = param_1 + 0x18;
  local_168 = *(undefined4 *)(param_1 + 0x14);
  FUN_14915a0cc(&local_138,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(undefined4 *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915a0cc FUN_14915a0cc body=314 status=ok
// SIG undefined FUN_14915a0cc(void)

void FUN_14915a0cc(longlong param_1,uint param_2,float param_3,float param_4,float param_5,
                  double *param_6,double *param_7,uint *param_8,uint *param_9,float *param_10)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM4 [16];
  
  if (*param_9 != param_2) {
    *param_9 = param_2;
    *param_8 = param_2;
  }
  fVar3 = (float)((double)*param_10 - *(double *)(param_1 + 0x20));
  *param_10 = fVar3;
  if (fVar3 <= 0.0) {
    uVar2 = *param_8 * 0xbb38435 + 0x3619636b;
    *param_8 = uVar2;
    fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    auVar4 = roundss(ZEXT816(0),ZEXT416((uint)fVar3),0xb);
    param_4 = param_4 - param_3;
    *param_6 = (double)((fVar3 - auVar4._0_4_) * param_4 + param_3);
    uVar2 = *param_8 * 0xbb38435 + 0x3619636b;
    *param_8 = uVar2;
    fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    auVar4 = roundss(ZEXT816(0),ZEXT416((uint)fVar3),0xb);
    param_6[1] = (double)((fVar3 - auVar4._0_4_) * param_4 + param_3);
    uVar2 = *param_8 * 0xbb38435 + 0x3619636b;
    *param_8 = uVar2;
    fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    auVar4 = roundss(in_XMM4,ZEXT416((uint)fVar3),0xb);
    param_6[2] = (double)((fVar3 - auVar4._0_4_) * param_4 + param_3);
    *param_10 = (float)(~-(uint)(param_5 < -1e-08) & (uint)param_5 |
                       -(uint)(param_5 < -1e-08) & 0x7f7fffff);
    param_7[2] = param_6[2];
    dVar1 = param_6[1];
    *param_7 = *param_6;
    param_7[1] = dVar1;
  }
  else {
    param_6[2] = param_7[2];
    dVar1 = param_7[1];
    *param_6 = *param_7;
    param_6[1] = dVar1;
  }
  return;
}



// FUNCTION 14915a206 FUN_14915a206 body=3031 status=ok
// SIG undefined FUN_14915a206(void)

double * FUN_14915a206(char *param_1,double *param_2,double *param_3)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
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
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [136];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  pdVar7 = param_2;
  for (lVar6 = 0xc; dVar13 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar15 = DAT_14c8464e0,
      lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_3;
    param_3 = param_3 + 1;
    pdVar7 = pdVar7 + 1;
  }
  dVar11 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = param_2[3];
  uVar19 = SUB84(DAT_14c8464e0,0);
  uVar21 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
  uVar24 = SUB84(DAT_14c8464f0,0);
  uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  cVar1 = *param_1;
  uVar26 = SUB84(DAT_14c8464e8,0);
  uVar27 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  uVar18 = uVar26;
  uVar20 = uVar27;
  uVar22 = uVar19;
  uVar23 = uVar21;
  if (cVar1 == '\x03') {
    uVar16 = 0;
    uVar17 = 0x3ff00000;
  }
  else {
    uVar16 = uVar24;
    uVar17 = uVar25;
    if (cVar1 == '\x02') {
      uVar18 = 0;
      uVar20 = 0x3ff00000;
    }
    else if (cVar1 == '\x01') {
      uVar22 = 0;
      uVar23 = 0x3ff00000;
    }
  }
  dVar2 = param_2[6] * (double)CONCAT44(uVar17,uVar16) +
          param_2[4] * (double)CONCAT44(uVar23,uVar22) +
          param_2[5] * (double)CONCAT44(uVar20,uVar18);
  dVar2 = dVar2 + dVar2;
  param_2[4] = param_2[4] - dVar2 * (double)CONCAT44(uVar23,uVar22);
  param_2[5] = param_2[5] - (double)CONCAT44(uVar20,uVar18) * dVar2;
  param_2[6] = param_2[6] - (double)CONCAT44(uVar17,uVar16) * dVar2;
  param_2[7] = 0.0;
  dVar2 = -dVar3;
  local_1b8._0_8_ = dVar14;
  local_1c8 = dVar13;
  local_1c0 = dVar15;
  if (param_1[1] == '\x02') {
    dVar12 = dVar4 - dVar11 * 0.0;
    dVar9 = dVar11 * 0.0 + dVar2;
    dVar8 = dVar3 * 0.0 + dVar4 * -0.0;
    dVar9 = dVar9 + dVar9;
    dVar12 = dVar12 + dVar12;
    dVar8 = dVar8 + dVar8;
    local_150 = dVar11 * dVar12 + dVar8 * dVar2 + dVar5 * dVar9 + 0.0;
    local_158 = (dVar4 * dVar8 - dVar9 * dVar11) + dVar5 * dVar12 + 0.0;
    local_160 = (dVar3 * dVar9 - dVar12 * dVar4) + dVar5 * dVar8 + 1.0;
    dVar9 = dVar15;
    if (cVar1 == '\x03') {
      uVar24 = 0;
      uVar25 = 0x3ff00000;
    }
    else if (cVar1 == '\x02') {
      uVar26 = 0;
      uVar27 = 0x3ff00000;
    }
    else if (cVar1 == '\x01') {
      dVar9 = 1.0;
    }
    dVar12 = local_150 * (double)CONCAT44(uVar25,uVar24) +
             local_160 * dVar9 + local_158 * (double)CONCAT44(uVar27,uVar26);
    dVar12 = dVar12 + dVar12;
    local_150 = local_150 - (double)CONCAT44(uVar25,uVar24) * dVar12;
    local_158 = local_158 - (double)CONCAT44(uVar27,uVar26) * dVar12;
    local_160 = local_160 - dVar12 * dVar9;
    dVar12 = dVar11 * 0.0 + dVar3 * -0.0;
    dVar8 = dVar4 * 0.0 + -dVar11;
    dVar9 = dVar4 * -0.0 + dVar3;
    dVar12 = dVar12 + dVar12;
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    local_168 = dVar11 * dVar8 + dVar2 * dVar9 + dVar5 * dVar12 + 1.0;
    local_170 = dVar9 * dVar4 + -dVar11 * dVar12 + dVar5 * dVar8 + 0.0;
    local_178 = dVar12 * dVar3 + dVar8 * -dVar4 + dVar5 * dVar9 + 0.0;
    if (cVar1 == '\x03') {
      dVar13 = 1.0;
    }
    else if (cVar1 == '\x02') {
      dVar14 = 1.0;
    }
    else if (cVar1 == '\x01') {
      dVar15 = 1.0;
    }
    dVar11 = local_168 * dVar13 + local_178 * dVar15 + local_170 * dVar14;
    dVar11 = dVar11 + dVar11;
    local_168 = local_168 - dVar13 * dVar11;
    local_170 = local_170 - dVar14 * dVar11;
    local_178 = local_178 - dVar11 * dVar15;
    FUN_14099e850(local_148,&local_160);
  }
  else if (param_1[1] == '\x01') {
    local_1a8 = dVar3 * -0.0;
    dVar9 = -dVar11;
    local_1b8._8_4_ = SUB84(dVar3,0);
    local_1b8._0_8_ = dVar9;
    local_1b8._12_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
    dVar8 = dVar4 * 0.0 + dVar11 * -0.0;
    dVar10 = dVar3 * 0.0 - dVar4;
    dVar12 = dVar11 + local_1a8 + dVar11 + local_1a8;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar10 + dVar10;
    local_150 = dVar11 * dVar8 + dVar10 * dVar2 + dVar5 * dVar12 + 0.0;
    local_158 = (dVar4 * dVar10 - dVar12 * dVar11) + dVar5 * dVar8 + 1.0;
    local_160 = (dVar3 * dVar12 - dVar8 * dVar4) + dVar5 * dVar10 + 0.0;
    if (cVar1 == '\x03') {
      uVar24 = 0;
      uVar25 = 0x3ff00000;
    }
    else if (cVar1 == '\x02') {
      uVar26 = 0;
      uVar27 = 0x3ff00000;
    }
    else if (cVar1 == '\x01') {
      uVar19 = 0;
      uVar21 = 0x3ff00000;
    }
    dVar12 = local_150 * (double)CONCAT44(uVar25,uVar24) +
             local_160 * (double)CONCAT44(uVar21,uVar19) +
             local_158 * (double)CONCAT44(uVar27,uVar26);
    dVar12 = dVar12 + dVar12;
    local_150 = local_150 - (double)CONCAT44(uVar25,uVar24) * dVar12;
    local_158 = local_158 - (double)CONCAT44(uVar27,uVar26) * dVar12;
    local_160 = local_160 - dVar12 * (double)CONCAT44(uVar21,uVar19);
    dVar8 = dVar11 * 0.0 + local_1a8;
    dVar12 = dVar3 - dVar4 * 0.0;
    dVar10 = dVar4 * 0.0 + dVar9;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    local_168 = dVar11 * dVar10 + dVar2 * dVar12 + dVar5 * dVar8 + 1.0;
    local_170 = dVar12 * dVar4 + dVar9 * dVar8 + dVar5 * dVar10 + 0.0;
    local_178 = dVar8 * dVar3 + dVar10 * -dVar4 + dVar5 * dVar12 + 0.0;
    if (cVar1 == '\x03') {
      dVar13 = 1.0;
    }
    else if (cVar1 == '\x02') {
      dVar14 = 1.0;
    }
    else if (cVar1 == '\x01') {
      dVar15 = 1.0;
    }
    dVar11 = local_168 * dVar13 + local_178 * dVar15 + local_170 * dVar14;
    dVar11 = dVar11 + dVar11;
    local_168 = local_168 - dVar13 * dVar11;
    local_170 = local_170 - dVar14 * dVar11;
    local_178 = local_178 - dVar11 * dVar15;
    FUN_147b4d2d0(local_148,&local_160);
  }
  else {
    dVar9 = dVar11 * 0.0 + dVar2;
    dVar12 = dVar4 + dVar11 * -0.0;
    local_1a8 = -dVar4;
    dStack_1a0 = -dVar5;
    dVar8 = dVar3 * 0.0 + dVar4 * -0.0;
    dVar9 = dVar9 + dVar9;
    dVar12 = dVar12 + dVar12;
    dVar8 = dVar8 + dVar8;
    local_150 = dVar11 * dVar12 + dVar8 * dVar2 + dVar5 * dVar9 + 0.0;
    local_158 = (dVar4 * dVar8 - dVar9 * dVar11) + dVar5 * dVar12 + 0.0;
    local_160 = (dVar3 * dVar9 - dVar12 * dVar4) + dVar5 * dVar8 + 1.0;
    dVar9 = dVar15;
    if (cVar1 == '\x03') {
      uVar24 = 0;
      uVar25 = 0x3ff00000;
    }
    else if (cVar1 == '\x02') {
      uVar26 = 0;
      uVar27 = 0x3ff00000;
    }
    else if (cVar1 == '\x01') {
      dVar9 = 1.0;
    }
    dVar12 = local_150 * (double)CONCAT44(uVar25,uVar24) +
             local_160 * dVar9 + local_158 * (double)CONCAT44(uVar27,uVar26);
    dVar12 = dVar12 + dVar12;
    local_150 = local_150 - (double)CONCAT44(uVar25,uVar24) * dVar12;
    local_158 = local_158 - (double)CONCAT44(uVar27,uVar26) * dVar12;
    local_160 = local_160 - dVar12 * dVar9;
    dVar12 = dVar11 - dVar3 * 0.0;
    dVar8 = dVar4 * 0.0 + dVar11 * -0.0;
    dVar9 = dVar3 * 0.0 + local_1a8;
    dVar12 = dVar12 + dVar12;
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    local_168 = dVar11 * dVar8 + dVar2 * dVar9 + dVar5 * dVar12 + 0.0;
    local_170 = dVar9 * dVar4 + -dVar11 * dVar12 + dVar5 * dVar8 + 1.0;
    local_178 = dVar12 * dVar3 + dVar8 * local_1a8 + dVar5 * dVar9 + 0.0;
    if (cVar1 == '\x03') {
      dVar13 = 1.0;
    }
    else if (cVar1 == '\x02') {
      dVar14 = 1.0;
    }
    else if (cVar1 == '\x01') {
      dVar15 = 1.0;
    }
    dVar11 = local_168 * dVar13 + local_178 * dVar15 + local_170 * dVar14;
    dVar11 = dVar11 + dVar11;
    local_168 = local_168 - dVar13 * dVar11;
    local_170 = local_170 - dVar14 * dVar11;
    local_178 = local_178 - dVar11 * dVar15;
    FUN_147298f40(local_148,&local_160);
  }
  FUN_14481fd10(&local_198,local_148);
  *(undefined4 *)param_2 = local_198;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_194;
  *(undefined4 *)(param_2 + 1) = uStack_190;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_18c;
  *(undefined4 *)(param_2 + 2) = local_188;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_184;
  *(undefined4 *)(param_2 + 3) = uStack_180;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_17c;
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14915adde FUN_14915adde body=335 status=ok
// SIG undefined FUN_14915adde(void)

void FUN_14915adde(undefined8 *param_1,float *param_2,double *param_3,float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = param_1[7];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 2) = uVar3;
  *(undefined8 *)(param_2 + 0xc) = uVar8;
  *(undefined8 *)(param_2 + 0xe) = uVar9;
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_2 + 10) = uVar7;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *(undefined8 *)(param_2 + 6) = uVar5;
  if (1e-08 < *param_2) {
    param_4 = param_4 * param_5;
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
    dVar1 = 1.0 / (double)*param_2;
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    dVar11 = (double)param_4;
    fVar10 = 1.0 - *(float *)(param_1 + 1);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    dVar12 = (double)fVar10;
    dVar2 = ((param_3[2] * dVar1 - *(double *)(param_2 + 0xe)) * dVar11 + *(double *)(param_2 + 0xe)
            ) * dVar12;
    dVar13 = ((param_3[1] * dVar1 - *(double *)(param_2 + 0xc)) * dVar11 +
             *(double *)(param_2 + 0xc)) * dVar12;
    dVar12 = ((dVar1 * *param_3 - *(double *)(param_2 + 10)) * dVar11 + *(double *)(param_2 + 10)) *
             dVar12;
    *(double *)(param_2 + 10) = dVar12;
    *(double *)(param_2 + 0xc) = dVar13;
    *(double *)(param_2 + 0xe) = dVar2;
    dVar1 = (double)param_5;
    *(double *)(param_2 + 4) = dVar12 * dVar1 + *(double *)(param_2 + 4);
    *(double *)(param_2 + 6) = dVar13 * dVar1 + *(double *)(param_2 + 6);
    *(double *)(param_2 + 8) = dVar2 * dVar1 + *(double *)(param_2 + 8);
  }
  return;
}



// FUNCTION 14915af2e FUN_14915af2e body=234 status=ok
// SIG undefined FUN_14915af2e(void)

void FUN_14915af2e(undefined8 *param_1,float *param_2,double *param_3,float param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 2) = uVar2;
  *(undefined8 *)(param_2 + 0xc) = uVar7;
  *(undefined8 *)(param_2 + 0xe) = uVar8;
  *(undefined8 *)(param_2 + 8) = uVar5;
  *(undefined8 *)(param_2 + 10) = uVar6;
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)(param_2 + 6) = uVar4;
  if (1e-08 < *param_2) {
    dVar1 = (double)param_4;
    dVar11 = 1.0 / (double)*param_2;
    dVar12 = (double)*(float *)(param_1 + 1);
    dVar9 = (param_3[2] * dVar1 * dVar11 + *(double *)(param_2 + 0xe)) - (double)param_1[7] * dVar12
    ;
    dVar10 = (param_3[1] * dVar1 * dVar11 + *(double *)(param_2 + 0xc)) -
             (double)param_1[6] * dVar12;
    dVar12 = (dVar11 * *param_3 * dVar1 + *(double *)(param_2 + 10)) - dVar12 * (double)param_1[5];
    *(double *)(param_2 + 10) = dVar12;
    *(double *)(param_2 + 0xc) = dVar10;
    *(double *)(param_2 + 0xe) = dVar9;
    *(double *)(param_2 + 4) = dVar12 * dVar1 + *(double *)(param_2 + 4);
    *(double *)(param_2 + 6) = dVar10 * dVar1 + *(double *)(param_2 + 6);
    *(double *)(param_2 + 8) = dVar9 * dVar1 + *(double *)(param_2 + 8);
  }
  return;
}



// FUNCTION 14915b018 FUN_14915b018 body=329 status=ok
// SIG undefined FUN_14915b018(void)

undefined8 FUN_14915b018(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 extraout_XMM0_Qb;
  
  dVar9 = *param_1;
  if (((9.999999747378752e-05 < ABS(dVar9)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
     (uVar5 = 0, 9.999999747378752e-05 < ABS(param_1[2]))) {
    dVar6 = *param_2;
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    if (((9.999999747378752e-05 < ABS(dVar6)) || (9.999999747378752e-05 < ABS(dVar1))) ||
       (uVar5 = 0, 9.999999747378752e-05 < ABS(dVar2))) {
      dVar3 = param_1[1];
      dVar4 = param_1[2];
      dVar6 = (dVar4 * dVar2 + dVar9 * dVar6 + dVar1 * dVar3) /
              (SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1) *
              SQRT(dVar4 * dVar4 + dVar9 * dVar9 + dVar3 * dVar3));
      dVar9 = dVar6;
      if (1.0 <= dVar6) {
        dVar9 = 1.0;
      }
      auVar7._0_8_ = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar9));
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar8._4_12_ = auVar7._4_12_;
      auVar8._0_4_ = (float)auVar7._0_8_;
      uVar5 = auVar8._0_8_;
    }
  }
  return uVar5;
}



// FUNCTION 14915b162 FUN_14915b162 body=1911 status=ok
// SIG undefined FUN_14915b162(void)

float FUN_14915b162(float param_1,undefined1 param_2)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 1:
    param_1 = param_1 * param_1;
    break;
  case 2:
    fVar1 = -(param_1 + -2.0);
    goto LAB_14915b258;
  case 3:
    if (0.5 <= param_1) {
      return param_1 * 4.0 + param_1 * -2.0 * param_1 + -1.0;
    }
    fVar1 = param_1 + param_1;
    goto LAB_14915b258;
  case 4:
    fVar1 = param_1;
    goto LAB_14915b254;
  case 5:
    fVar1 = param_1 + -1.0;
    param_1 = fVar1;
    goto LAB_14915b4e5;
  case 6:
    if (0.5 <= param_1) {
      param_1 = param_1 + param_1 + -2.0;
      fVar1 = 0.5;
      goto LAB_14915b4e1;
    }
    fVar1 = 4.0;
    goto LAB_14915b250;
  case 7:
    fVar1 = param_1;
    goto LAB_14915b250;
  case 8:
    fVar1 = param_1 + -1.0;
    param_1 = (1.0 - param_1) * fVar1 * fVar1 * fVar1 + 1.0;
    break;
  case 9:
    if (0.5 <= param_1) {
      param_1 = param_1 + -1.0;
      fVar1 = -8.0;
      goto LAB_14915b4dd;
    }
    fVar1 = 8.0;
    goto LAB_14915b24c;
  case 10:
    fVar1 = param_1;
    goto LAB_14915b24c;
  case 0xb:
    fVar1 = param_1 + -1.0;
    param_1 = fVar1;
LAB_14915b4dd:
    fVar1 = fVar1 * param_1;
LAB_14915b4e1:
    fVar1 = fVar1 * param_1;
LAB_14915b4e5:
    param_1 = fVar1 * param_1 * param_1;
LAB_14915b4ed:
    param_1 = param_1 + 1.0;
    break;
  case 0xc:
    if (0.5 <= param_1) {
      param_1 = param_1 + param_1 + -2.0;
      fVar1 = param_1 * 0.5;
      goto LAB_14915b4dd;
    }
    fVar1 = param_1 * 16.0;
LAB_14915b24c:
    fVar1 = fVar1 * param_1;
LAB_14915b250:
    fVar1 = fVar1 * param_1;
LAB_14915b254:
    fVar1 = fVar1 * param_1;
LAB_14915b258:
    param_1 = fVar1 * param_1;
    break;
  case 0xd:
    param_1 = sinf((param_1 + -1.0) * 1.5707964);
    param_1 = param_1 + 1.0;
    break;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x00014915b483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = sinf(param_1 * 1.5707964);
    return fVar1;
  case 0xf:
    fVar1 = cosf(param_1 * 3.1415927);
LAB_14915b1de:
    param_1 = 1.0;
    goto LAB_14915b1e6;
  case 0x10:
    fVar2 = 1.0;
    fVar1 = 1.0 - param_1 * param_1;
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    goto LAB_14915b2dc;
  case 0x11:
    param_1 = (2.0 - param_1) * param_1;
    if (param_1 < 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00014915b646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar1 = sqrtf(param_1);
      return fVar1;
    }
    param_1 = SQRT(param_1);
    break;
  case 0x12:
    if (param_1 < 0.5) {
      fVar1 = param_1 * param_1 * -4.0 + 1.0;
      if (fVar1 < 0.0) {
        fVar1 = sqrtf(fVar1);
      }
      else {
        fVar1 = SQRT(fVar1);
      }
      goto LAB_14915b1de;
    }
    param_1 = (param_1 + param_1 + -1.0) * -(param_1 + param_1 + -3.0);
    if (param_1 < 0.0) {
      param_1 = sqrtf(param_1);
    }
    else {
      param_1 = SQRT(param_1);
    }
    param_1 = param_1 + 1.0;
    goto LAB_14915b1ea;
  case 0x13:
    if ((param_1 != 0.0) || (NAN(param_1))) {
      fVar1 = (float)exp2f((param_1 + -1.0) * 10.0);
      return fVar1;
    }
    break;
  case 0x14:
    if ((param_1 == 1.0) && (!NAN(param_1))) {
      return 1.0;
    }
    fVar1 = (float)exp2f(param_1 * -10.0);
    fVar2 = 1.0;
    goto LAB_14915b2dc;
  case 0x15:
    if ((param_1 == 0.0) && (!NAN(param_1))) {
      return param_1;
    }
    if ((param_1 == 1.0) && (!NAN(param_1))) {
      return param_1;
    }
    if (param_1 < 0.5) {
      param_1 = (float)exp2f(param_1 * 20.0 + -10.0);
      goto LAB_14915b1ea;
    }
    param_1 = (float)exp2f(param_1 * -20.0 + 10.0);
    param_1 = param_1 * -0.5;
    goto LAB_14915b4ed;
  case 0x16:
    fVar1 = sinf(param_1 * 20.420353);
    goto LAB_14915b439;
  case 0x17:
    fVar1 = sinf((param_1 + 1.0) * -20.420353);
    fVar2 = (float)exp2f(param_1 * -10.0);
    param_1 = fVar2 * fVar1 + 1.0;
    break;
  case 0x18:
    if (0.5 <= param_1) {
      fVar2 = param_1 + param_1 + -1.0;
      fVar1 = sinf((fVar2 + 1.0) * -20.420353);
      fVar2 = (float)exp2f(fVar2 * -10.0);
      param_1 = fVar2 * fVar1 + 2.0;
      goto LAB_14915b1ea;
    }
    param_1 = param_1 + param_1;
    fVar1 = sinf(param_1 * 20.420353);
    fVar1 = fVar1 * 0.5;
LAB_14915b439:
    param_1 = (float)exp2f((param_1 + -1.0) * 10.0);
    param_1 = param_1 * fVar1;
    break;
  case 0x19:
    fVar1 = sinf(param_1 * 3.1415927);
    fVar1 = fVar1 * param_1;
    fVar2 = param_1 * param_1 * param_1;
LAB_14915b2dc:
    param_1 = fVar2 - fVar1;
    break;
  case 0x1a:
    param_1 = 1.0 - param_1;
    fVar1 = sinf(param_1 * 3.1415927);
    param_1 = 1.0 - (param_1 * param_1 * param_1 - fVar1 * param_1);
    break;
  case 0x1b:
    if (0.5 <= param_1) {
      fVar2 = 1.0 - (param_1 + param_1 + -1.0);
      fVar1 = sinf(fVar2 * 3.1415927);
      return (1.0 - (fVar2 * fVar2 * fVar2 - fVar1 * fVar2)) * 0.5 + 0.5;
    }
    param_1 = param_1 + param_1;
    fVar1 = sinf(param_1 * 3.1415927);
    fVar1 = fVar1 * param_1;
    param_1 = param_1 * param_1 * param_1;
LAB_14915b1e6:
    param_1 = param_1 - fVar1;
LAB_14915b1ea:
    param_1 = param_1 * 0.5;
    break;
  case 0x1c:
    fVar1 = (float)FUN_1469a379a(param_1);
    return fVar1;
  case 0x1d:
    if (0.36363637 <= param_1) {
      if (0.72727275 <= param_1) {
        if (0.9 <= param_1) {
          param_1 = param_1 * -20.52 + param_1 * 10.8 * param_1 + 10.72;
        }
        else {
          param_1 = param_1 * -19.635458 + param_1 * 12.066482 * param_1 + 8.898061;
        }
      }
      else {
        param_1 = param_1 * -9.9 + param_1 * 9.075 * param_1 + 3.4;
      }
    }
    else {
      param_1 = param_1 * 12.0 * param_1 * 0.0625;
    }
    break;
  case 0x1e:
    fVar1 = (float)FUN_1469a3865(param_1);
    return fVar1;
  }
  return param_1;
}



// FUNCTION 14915b8da FUN_14915b8da body=422 status=ok
// SIG undefined FUN_14915b8da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_14915b8da(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3,float param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar4 = (double)param_2[6];
  dVar7 = (double)param_3[6];
  dVar2 = (double)param_4;
  dVar10 = ((double)param_3[5] - (double)param_2[5]) * dVar2 + (double)param_2[5];
  auVar6._8_4_ = SUB84(dVar10,0);
  auVar6._0_8_ = ((double)param_3[4] - (double)param_2[4]) * dVar2 + (double)param_2[4];
  auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar6;
  param_1[6] = (ulonglong)((dVar7 - dVar4) * dVar2 + dVar4);
  param_1[7] = 0;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  uStack_70 = param_3[3];
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = *(undefined4 *)(param_2 + 2);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_90 = *(undefined4 *)(param_2 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_144a44da6(&local_68);
  dVar4 = local_58 * local_58 + local_68 * local_68;
  dVar7 = dStack_50 * dStack_50 + dStack_60 * dStack_60;
  auVar5._0_8_ = dVar4 + dVar7;
  auVar5._8_8_ = dVar4 + dVar7;
  uVar3 = -(ulonglong)(9.99999993922529e-09 <= auVar5._8_8_);
  auVar6 = sqrtpd(auVar5,auVar5);
  auVar8 = divpd(_DAT_149934d80,auVar6);
  auVar9._0_8_ = auVar8._0_8_ * local_58;
  auVar9._8_8_ = auVar8._8_8_ * dStack_50;
  auVar1._8_4_ = (int)uVar3;
  auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar5._0_8_);
  auVar1._12_4_ = (int)(uVar3 >> 0x20);
  auVar6 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar9,auVar1);
  *param_1 = (ulonglong)(local_68 * auVar8._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar5._0_8_);
  param_1[1] = (ulonglong)(dStack_60 * auVar8._8_8_) & uVar3;
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  dVar4 = (double)param_2[10];
  dVar7 = (double)param_3[10];
  dVar10 = ((double)param_3[9] - (double)param_2[9]) * dVar2 + (double)param_2[9];
  auVar8._8_4_ = SUB84(dVar10,0);
  auVar8._0_8_ = ((double)param_3[8] - (double)param_2[8]) * dVar2 + (double)param_2[8];
  auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar8;
  param_1[10] = (ulonglong)((dVar7 - dVar4) * dVar2 + dVar4);
  param_1[0xb] = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915ba82 FUN_14915ba82 body=3085 status=ok
// SIG undefined FUN_14915ba82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_14915ba82(undefined1 (*param_1) [16],double *param_2,int param_3,int param_4,float param_5,
             float param_6,double *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auStack_318 [32];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [8];
  undefined1 *local_290;
  float local_288;
  undefined4 *local_280;
  undefined1 local_278 [8];
  undefined1 *local_270;
  int local_268;
  float local_264;
  undefined4 *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  undefined1 local_178 [16];
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
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  pdVar7 = param_7;
  auVar35 = _DAT_149934d80;
  local_280 = &param_6;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  dVar34 = *param_7;
  dVar13 = param_7[1];
  dVar16 = param_7[2];
  dVar26 = param_7[3];
  auVar14 = *(undefined1 (*) [16])(param_7 + 4);
  dVar6 = param_7[6];
  dVar20 = *param_2 - auVar14._0_8_;
  dVar24 = param_2[1] - auVar14._8_8_;
  dVar15 = param_2[2] - dVar6;
  dVar30 = -dVar34;
  dVar32 = -dVar13;
  dVar27 = dVar16 * -1.0;
  dVar21 = dVar26 * 1.0;
  dVar29 = dVar20 * dVar27 - dVar30 * dVar15;
  dVar33 = dVar24 * dVar30 - dVar20 * dVar32;
  dVar36 = dVar15 * dVar32 - dVar24 * dVar27;
  dVar36 = dVar36 + dVar36;
  dVar29 = dVar29 + dVar29;
  dVar33 = dVar33 + dVar33;
  auVar1 = *(undefined1 (*) [16])(param_7 + 8);
  dVar17 = auVar1._0_8_;
  dVar25 = auVar1._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_7 + 10);
  dVar19 = auVar2._0_8_;
  auVar22 = divpd(_DAT_149934d80,auVar1);
  dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar17)) & auVar22._0_8_);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar25)) & auVar22._8_8_);
  local_2d8._0_8_ = ((dVar33 * dVar32 - dVar29 * dVar27) + dVar21 * dVar36 + dVar20) * dVar3;
  local_2d8._8_8_ = (dVar34 * dVar33 + dVar27 * dVar36 + dVar21 * dVar29 + dVar24) * dVar4;
  local_290 = local_2d8;
  local_2c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar19)) & (ulonglong)(1.0 / dVar19))
              * (dVar21 * dVar33 + dVar15 + (dVar29 * dVar30 - dVar36 * dVar32));
  local_264 = param_5;
  local_288 = param_5;
  local_270 = local_290;
  local_268 = param_3;
  local_260 = local_280;
  if (param_4 == 3) {
    fVar12 = param_5 + param_5;
    if (fVar12 <= param_6) {
      fVar5 = param_6;
      if (param_6 <= fVar12) {
        fVar5 = fVar12;
      }
      param_5 = fVar5 * 0.5 - param_5;
      if (param_3 == 1) {
        pdVar9 = (double *)&DAT_14c8463a0;
      }
      else if (param_3 == 2) {
        pdVar9 = (double *)&DAT_14c846388;
      }
      else {
        pdVar9 = (double *)&DAT_14c8463b8;
      }
      fVar12 = (float)(local_2c8 * pdVar9[2] +
                      *pdVar9 * (double)local_2d8._0_8_ + (double)local_2d8._8_8_ * pdVar9[1]);
      if (ABS(fVar12) < param_5) {
        param_6 = 0.0;
        goto LAB_14915c01c;
      }
      dVar15 = (double)(float)(-(uint)(0.0 < fVar12) & 0x3f800000 |
                              ~-(uint)(0.0 < fVar12) & -(uint)(fVar12 < 0.0) & 0xbf800000);
      dVar27 = (double)param_5;
      local_2f8 = pdVar9[2] * dVar15 * dVar27;
      dVar21 = pdVar9[1] * dVar15 * dVar27;
      dVar27 = *pdVar9 * dVar15 * dVar27;
      auVar22 = minpd(_DAT_149934d80,auVar1);
      auVar28 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
      auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      iVar8 = movmskpd((int)pdVar9,auVar23);
      auVar22._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
      auVar22._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
      uVar10 = movmskpd((int)local_290,auVar22);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        dVar24 = dVar16 * 0.0 * -1.0 + dVar13 * 0.0 + dVar34 * 1.0 * 1.0 + dVar26 * 0.0;
        dVar15 = dVar16 * 0.0 * 1.0 + dVar13 * 1.0 + dVar34 * 0.0 * -1.0 + dVar26 * 0.0;
        auVar35._0_8_ = dVar16 * 1.0 * 1.0 + ((dVar34 * 0.0 * 1.0 + dVar26 * 0.0) - dVar13 * 0.0);
        auVar35._8_8_ = dVar16 * 0.0 * -1.0 + ((dVar34 * 0.0 * -1.0 + dVar26 * 1.0) - dVar13 * 0.0);
        dVar27 = dVar27 * dVar17;
        dVar21 = dVar21 * dVar25;
        local_2f8 = local_2f8 * dVar19;
        dVar29 = auVar2._8_8_ * 0.0;
        dVar17 = dVar21 * dVar34 - dVar13 * dVar27;
        dVar25 = local_2f8 * dVar13 - dVar16 * dVar21;
        dVar20 = dVar27 * dVar16 - dVar34 * local_2f8;
        dVar33 = dVar29 * dVar26 - dVar26 * dVar29;
        dVar25 = dVar25 + dVar25;
        dVar20 = dVar20 + dVar20;
        dVar17 = dVar17 + dVar17;
        dVar33 = dVar33 + dVar33;
        local_f8 = auVar14._0_8_ + (dVar17 * dVar13 - dVar16 * dVar20) + dVar26 * dVar25 + dVar27;
        dStack_f0 = auVar14._8_8_ + (dVar25 * dVar16 - dVar17 * dVar34) + dVar26 * dVar20 + dVar21;
        local_e8 = dVar6 + (dVar20 * dVar34 - dVar13 * dVar25) + dVar26 * dVar17 + local_2f8;
        dVar17 = param_7[7] + (dVar33 * dVar26 - dVar33 * dVar26) + dVar26 * dVar33 + dVar29;
        local_2f8 = dVar26;
        dStack_2f0 = dVar26;
        local_2e8 = dVar34;
        dStack_2e0 = dVar26;
      }
      else {
        dVar24 = dVar13 + dVar13;
        dVar15 = dVar16 + dVar16;
        dStack_2f0 = 0.0;
        dVar33 = dVar34 * (dVar34 + dVar34);
        local_1d8 = ((double)DAT_149934d80 - (dVar16 * dVar15 + dVar13 * dVar24)) * dVar17;
        dVar16 = (DAT_149934d80._8_8_ - (dVar16 * dVar15 + dVar33)) * dVar25;
        dVar20 = (dVar34 + dVar34) * dVar26;
        dStack_190 = (dVar15 * dVar13 - dVar20) * dVar19;
        local_198 = (dVar24 * dVar26 + dVar34 * dVar15) * dVar19;
        dStack_1d0 = (dVar24 * dVar34 + dVar15 * dVar26) * dVar17;
        local_1a8 = (dVar15 * dVar13 + dVar20) * dVar25;
        local_1c8 = (dVar34 * dVar15 - dVar24 * dVar26) * dVar17;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar16,0);
        local_1b8._0_8_ = (dVar24 * dVar34 - dVar15 * dVar26) * dVar25;
        local_1b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        uStack_1a0 = 0;
        local_188 = (1.0 - (dVar33 + dVar13 * dVar24)) * dVar19;
        uStack_180 = 0;
        uStack_160 = 0x3ff0000000000000;
        local_258 = 0x3ff0000000000000;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0x3ff0000000000000;
        uStack_200 = 0;
        local_1f8._8_4_ = SUB84(dVar21,0);
        local_1f8._0_8_ = dVar27;
        local_1f8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
        uStack_1e0 = 0x3ff0000000000000;
        local_238 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_1e8 = local_2f8;
        local_178 = auVar14;
        local_168 = dVar6;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar14._8_8_ = -(ulonglong)(0.0 <= dVar25);
        auVar14._0_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar14 = blendvpd(_DAT_149936790,auVar35,auVar14);
        uVar11 = -(ulonglong)(0.0 <= dVar19 * 1.0);
        dVar17 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
        dVar25 = auVar14._0_8_;
        local_148 = local_148 * dVar25;
        local_150 = local_150 * dVar25;
        local_158 = local_158 * dVar25;
        dVar25 = auVar14._8_8_;
        local_128 = local_128 * dVar25;
        local_130 = local_130 * dVar25;
        local_138 = dVar25 * local_138;
        local_108 = local_108 * dVar17;
        local_110 = local_110 * dVar17;
        local_118 = dVar17 * local_118;
        FUN_14481fd10(&local_2b8,&local_158);
        dVar17 = local_2a8 * local_2a8 + local_2b8 * local_2b8;
        dVar25 = dStack_2a0 * dStack_2a0 + dStack_2b0 * dStack_2b0;
        auVar18._0_8_ = dVar17 + dVar25;
        auVar18._8_8_ = dVar17 + dVar25;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
        auVar14 = sqrtpd(auVar18,auVar18);
        auVar14 = divpd(auVar35,auVar14);
        auVar31._0_8_ = auVar14._0_8_ * local_2a8;
        auVar31._8_8_ = auVar14._8_8_ * dStack_2a0;
        dVar24 = (double)((ulonglong)(local_2b8 * auVar14._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
        dVar15 = (double)((ulonglong)(dStack_2b0 * auVar14._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
        auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar28);
        dVar17 = 0.0;
      }
      dVar25 = auVar2._8_8_ * 0.0;
      dVar19 = dVar19 * 1.0;
      *pdVar7 = dVar24;
      pdVar7[1] = dVar15;
      *(undefined1 (*) [16])(pdVar7 + 2) = auVar35;
      pdVar7[4] = local_f8;
      pdVar7[5] = dStack_f0;
      pdVar7[6] = local_e8;
      pdVar7[7] = dVar17;
      *(undefined1 (*) [16])(pdVar7 + 8) = auVar1;
      auVar1._8_4_ = SUB84(dVar25,0);
      auVar1._0_8_ = dVar19;
      auVar1._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      *(undefined1 (*) [16])(pdVar7 + 10) = auVar1;
      local_f8 = *param_2 - local_f8;
      dStack_f0 = param_2[1] - dStack_f0;
      local_e8 = param_2[2] - local_e8;
      dVar17 = -dVar24;
      dVar15 = -dVar15;
      dVar34 = auVar35._0_8_ * -1.0;
      dVar13 = auVar35._8_8_ * 1.0;
      dVar21 = local_f8 * dVar34 - dVar17 * local_e8;
      dVar25 = dStack_f0 * dVar17 - dVar15 * local_f8;
      dVar27 = local_e8 * dVar15 - dVar34 * dStack_f0;
      dVar27 = dVar27 + dVar27;
      dVar21 = dVar21 + dVar21;
      dVar25 = dVar25 + dVar25;
      dVar4 = dVar4 * (dVar24 * dVar25 + dVar34 * dVar27 + dVar13 * dVar21 + dStack_f0);
      local_2c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar19)) &
                          (ulonglong)(1.0 / dVar19)) *
                  (dVar13 * dVar25 + local_e8 + (dVar21 * dVar17 - dVar27 * dVar15));
      local_2d8._8_4_ = SUB84(dVar4,0);
      local_2d8._0_8_ = dVar3 * ((dVar25 * dVar15 - dVar21 * dVar34) + dVar13 * dVar27 + local_f8);
      local_2d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    }
    else {
      param_6 = 0.0;
    }
  }
  else {
    if (param_4 == 1) {
LAB_14915c01c:
      FUN_1444817c0(local_278);
      goto LAB_14915bd82;
    }
    if (param_4 == 0) {
      if (param_3 == 2) {
        fVar12 = (float)(double)local_2d8._8_8_;
        if (1e-08 <= param_6 && param_6 <= fVar12) {
          fVar12 = (float)(-(uint)(param_6 <= param_5) & (uint)fVar12 |
                          ~-(uint)(param_6 <= param_5) & (uint)param_6);
        }
        if (fVar12 <= param_5) {
          fVar12 = param_5;
        }
        local_2d8._8_8_ = (double)fVar12;
      }
      else if (param_3 == 1) {
        fVar12 = (float)(double)local_2d8._0_8_;
        if (1e-08 <= param_6 && param_6 <= fVar12) {
          fVar12 = (float)(-(uint)(param_6 <= param_5) & (uint)fVar12 |
                          ~-(uint)(param_6 <= param_5) & (uint)param_6);
        }
        if (fVar12 <= param_5) {
          fVar12 = param_5;
        }
        local_2d8._0_8_ = (double)fVar12;
      }
      else {
        fVar12 = (float)local_2c8;
        if (1e-08 <= param_6 && param_6 <= fVar12) {
          fVar12 = (float)(-(uint)(param_6 <= param_5) & (uint)fVar12 |
                          ~-(uint)(param_6 <= param_5) & (uint)param_6);
        }
        if (fVar12 <= param_5) {
          fVar12 = param_5;
        }
        local_2c8 = (double)fVar12;
      }
      goto LAB_14915bd82;
    }
  }
  FUN_1444816ce(local_298);
LAB_14915bd82:
  dVar16 = (double)local_2d8._0_8_ * pdVar7[8];
  dVar19 = (double)local_2d8._8_8_ * pdVar7[9];
  dVar13 = local_2c8 * pdVar7[10];
  dVar21 = *pdVar7;
  dVar4 = pdVar7[1];
  dVar34 = pdVar7[2];
  dVar17 = pdVar7[3];
  dVar25 = dVar19 * dVar21 - dVar16 * dVar4;
  dVar26 = dVar13 * dVar4 - dVar19 * dVar34;
  dVar27 = dVar16 * dVar34 - dVar21 * dVar13;
  dVar26 = dVar26 + dVar26;
  dVar27 = dVar27 + dVar27;
  dVar25 = dVar25 + dVar25;
  dVar3 = (dVar34 * dVar26 - dVar21 * dVar25) + pdVar7[3] * dVar27 + dVar19 + pdVar7[5];
  dVar19 = pdVar7[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar25 * dVar4 - dVar27 * dVar34) + dVar17 * dVar26 + dVar16 + pdVar7[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_1 = auVar2;
  *(double *)param_1[1] = dVar25 * dVar17 + dVar13 + (dVar27 * dVar21 - dVar26 * dVar4) + dVar19;
  if ((local_d0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915c690 FUN_14915c690 body=415 status=ok
// SIG undefined FUN_14915c690(void)

undefined8 FUN_14915c690(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_3;
  dStack_20 = param_3[1];
  local_18 = param_3[2];
  dVar1 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    if (dVar1 < 9.99999993922529e-09) {
      local_18 = DAT_14c8464f0;
      local_28 = DAT_14c8464e0;
      dStack_20 = DAT_14c8464e8;
    }
    else {
      dVar1 = 1.0 / SQRT(dVar1);
      local_18 = local_18 * dVar1;
      dStack_20 = dStack_20 * dVar1;
      local_28 = local_28 * dVar1;
    }
  }
  else {
    local_18 = param_3[2];
    local_28 = *param_3;
    dStack_20 = param_3[1];
  }
  local_48 = *param_2;
  dStack_40 = param_2[1];
  local_38 = param_2[2];
  dVar1 = local_38 * local_38 + local_48 * local_48 + dStack_40 * dStack_40;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    if (9.99999993922529e-09 <= dVar1) {
      dVar1 = 1.0 / SQRT(dVar1);
      local_38 = local_38 * dVar1;
      dStack_40 = dStack_40 * dVar1;
      local_48 = local_48 * dVar1;
    }
    else {
      local_38 = DAT_14c8464f0;
      local_48 = DAT_14c8464e0;
      dStack_40 = DAT_14c8464e8;
    }
  }
  else {
    local_38 = param_2[2];
    local_48 = *param_2;
    dStack_40 = param_2[1];
  }
  FUN_14915c830(param_1,&local_48,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14915c830 FUN_14915c830 body=802 status=ok
// SIG undefined FUN_14915c830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14915c830(double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar2 = *param_3;
  dVar11 = param_3[1];
  dVar4 = param_2[2];
  dVar14 = param_3[2];
  dVar10 = dVar4 * dVar14 + dVar8 * dVar2 + dVar9 * dVar11 + 1.0;
  if (9.99999993922529e-09 <= dVar10) {
    *param_1 = dVar9 * dVar14 - dVar11 * dVar4;
    param_1[1] = dVar4 * dVar2 - dVar14 * dVar8;
    param_1[2] = dVar8 * dVar11 - dVar2 * dVar9;
    param_1[3] = dVar10;
    dVar8 = *param_1;
    dVar9 = param_1[1];
    dVar2 = param_1[2];
    dVar11 = param_1[3];
  }
  else {
    dVar10 = 2.0 - dVar10;
    dVar7 = dVar2 * dVar9 - dVar8 * dVar11;
    dVar15 = dVar8 * dVar14 - dVar4 * dVar2;
    dVar2 = dVar11 * dVar4 - dVar14 * dVar9;
    dVar11 = dVar7 * dVar7 + dVar2 * dVar2;
    dVar14 = dVar10 * dVar10 + dVar15 * dVar15;
    auVar12._0_8_ = dVar11 + dVar14;
    auVar12._8_8_ = dVar11 + dVar14;
    auVar13 = sqrtpd(auVar12,auVar12);
    auVar16 = divpd(_DAT_149934d80,auVar13);
    auVar17._0_8_ = auVar16._0_8_ * dVar7;
    auVar17._8_8_ = auVar16._8_8_ * dVar10;
    dVar14 = 1.0;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar13);
    dVar2 = (double)((ulonglong)(dVar2 * auVar16._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
    dVar11 = (double)((ulonglong)(dVar15 * auVar16._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_));
    dVar10 = (double)(~-(ulonglong)(ABS(dVar9) < ABS(dVar8)) & 0x3ff0000000000000);
    if (ABS(dVar8) <= ABS(dVar9)) {
      dVar14 = 0.0;
    }
    dVar7 = dVar8 * dVar14 - dVar10 * dVar9;
    dVar15 = dVar8 * -0.0 + dVar4 * dVar10;
    dVar14 = dVar9 * 0.0 - dVar14 * dVar4;
    dVar10 = (dVar9 * dVar7 - dVar15 * dVar4) * 0.999999999999999;
    dVar7 = (dVar4 * dVar14 - dVar7 * dVar8) * 0.999999999999999;
    dVar4 = (dVar8 * dVar15 - dVar14 * dVar9) * 0.999999999999999;
    dVar15 = auVar13._8_8_;
    auVar16._8_4_ = SUB84(dVar11,0);
    auVar16._12_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar5._8_4_ = SUB84(dVar2,0);
    auVar5._0_8_ = dVar2;
    auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar16._0_8_ = dVar11;
    dVar14 = auVar13._0_8_;
    dVar8 = dVar7 * dVar14 * -1.0 +
            dVar4 * dVar11 + dVar2 * -4.371139000186241e-08 * 1.0 + dVar10 * dVar15;
    dVar9 = dVar10 * dVar14 * 1.0 +
            auVar16._8_8_ * -4.371139000186241e-08 + dVar4 * auVar5._8_8_ * -1.0 + dVar7 * dVar15;
    dVar2 = dVar14 * -4.371139000186241e-08 * 1.0 +
            ((dVar2 * dVar7 * 1.0 + dVar15 * dVar4) - dVar10 * dVar11);
    dVar11 = dVar4 * dVar14 * -1.0 +
             ((auVar5._8_8_ * dVar10 * -1.0 + dVar15 * -4.371139000186241e-08) -
             dVar7 * auVar16._8_8_);
  }
  dVar4 = dVar2 * dVar2 + dVar8 * dVar8;
  dVar14 = dVar11 * dVar11 + dVar9 * dVar9;
  auVar3._0_8_ = dVar4 + dVar14;
  auVar3._8_8_ = dVar4 + dVar14;
  auVar13 = sqrtpd(auVar3,auVar3);
  auVar13 = divpd(_DAT_149934d80,auVar13);
  auVar6._0_8_ = auVar13._0_8_ * dVar2;
  auVar6._8_8_ = auVar13._8_8_ * dVar11;
  *param_1 = (double)((ulonglong)(dVar8 * auVar13._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar3._0_8_));
  param_1[1] = (double)((ulonglong)(dVar9 * auVar13._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar3._8_8_));
  auVar1._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar3._8_8_);
  auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar3._0_8_);
  auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar6,auVar1);
  *(undefined1 (*) [16])(param_1 + 2) = auVar13;
  return;
}



// FUNCTION 14915cb52 FUN_14915cb52 body=304 status=ok
// SIG undefined FUN_14915cb52(void)

double * FUN_14915cb52(double *param_1,double *param_2,undefined1 *param_3)

{
  switch(*param_3) {
  case 0:
    *param_1 = *param_2 + 180.0;
    param_1[1] = 180.0 - param_2[1];
    break;
  case 1:
    *param_1 = *param_2 + 180.0;
    param_1[2] = 180.0 - param_2[2];
    goto LAB_14915cc39;
  case 2:
    param_1[1] = param_2[1] + 180.0;
    *param_1 = 180.0 - *param_2;
    break;
  case 3:
    param_1[1] = param_2[1] + 180.0;
    param_1[2] = 180.0 - param_2[2];
    goto LAB_14915cc69;
  case 4:
    param_1[2] = param_2[2] + 180.0;
    *param_1 = 180.0 - *param_2;
LAB_14915cc39:
    param_1[1] = param_2[1] + 180.0;
    goto switchD_14915cb76_default;
  case 5:
    param_1[2] = param_2[2] + 180.0;
    param_1[1] = 180.0 - param_2[1];
LAB_14915cc69:
    *param_1 = *param_2 + 180.0;
  default:
    goto switchD_14915cb76_default;
  }
  param_1[2] = param_2[2] + 180.0;
switchD_14915cb76_default:
  FUN_1467fc4d4(param_1);
  return param_1;
}



// FUNCTION 14915cc82 FUN_14915cc82 body=243 status=ok
// SIG undefined FUN_14915cc82(void)

double * FUN_14915cc82(double *param_1,double *param_2,double *param_3)

{
  if ((float)(ABS(param_2[2] - param_1[2]) * DAT_14c846520 +
             ABS(*param_2 - *param_1) * DAT_14c846510 + ABS(param_2[1] - param_1[1]) * DAT_14c846518
             ) <
      (float)(ABS(param_3[2] - param_1[2]) * DAT_14c846520 +
             ABS(*param_3 - *param_1) * DAT_14c846510 + ABS(param_3[1] - param_1[1]) * DAT_14c846518
             )) {
    param_3 = param_2;
  }
  return param_3;
}



// FUNCTION 14915cd76 FUN_14915cd76 body=49 status=ok
// SIG undefined FUN_14915cd76(void)

void FUN_14915cd76(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14915cda8(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2,param_3,param_4);
  return;
}



// FUNCTION 14915cda8 FUN_14915cda8 body=575 status=ok
// SIG undefined FUN_14915cda8(void)

void FUN_14915cda8(double *param_1,double *param_2,double *param_3,double *param_4,float param_5,
                  double *param_6,double *param_7)

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
  
  dVar10 = param_2[2];
  dVar5 = (double)param_5;
  dVar3 = param_3[2];
  dVar9 = (dVar3 - dVar10) * dVar5 + dVar10;
  dVar4 = *param_2;
  dVar7 = param_2[1];
  dVar6 = param_3[1];
  dVar1 = (dVar6 - dVar7) * dVar5 + dVar7;
  dVar8 = *param_3;
  dVar2 = (dVar8 - dVar4) * dVar5 + dVar4;
  dVar10 = (dVar10 - param_1[2]) * dVar5 + param_1[2];
  dVar7 = (dVar7 - param_1[1]) * dVar5 + param_1[1];
  dVar4 = (dVar4 - *param_1) * dVar5 + *param_1;
  dVar10 = (dVar9 - dVar10) * dVar5 + dVar10;
  dVar7 = (dVar1 - dVar7) * dVar5 + dVar7;
  dVar4 = (dVar2 - dVar4) * dVar5 + dVar4;
  dVar3 = ((((param_4[2] - dVar3) * dVar5 + dVar3) - dVar9) * dVar5 + dVar9) - dVar10;
  dVar6 = ((((param_4[1] - dVar6) * dVar5 + dVar6) - dVar1) * dVar5 + dVar1) - dVar7;
  dVar8 = ((((*param_4 - dVar8) * dVar5 + dVar8) - dVar2) * dVar5 + dVar2) - dVar4;
  *param_6 = dVar5 * dVar8 + dVar4;
  param_6[1] = dVar6 * dVar5 + dVar7;
  param_6[2] = dVar3 * dVar5 + dVar10;
  dVar10 = dVar3 * dVar3 + dVar8 * dVar8 + dVar6 * dVar6;
  if (((dVar10 != 1.0) || (dVar4 = dVar3, dVar7 = dVar6, dVar9 = dVar8, NAN(dVar10))) &&
     (dVar4 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar4 = dVar3 * dVar10;
    dVar7 = dVar6 * dVar10;
    dVar9 = dVar8 * dVar10;
  }
  *param_7 = dVar9;
  param_7[1] = dVar7;
  param_7[2] = dVar4;
  return;
}



// FUNCTION 14915cfe8 FUN_14915cfe8 body=711 status=ok
// SIG undefined FUN_14915cfe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915cfe8(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc045d0) && (FUN_144b3d300(&DAT_14cc045d0), DAT_14cc045d0 == -1)) {
    DAT_14cc045c0 = (undefined1 *)0x0;
    _DAT_14cc045c8 = 1;
    FUN_149157980(&DAT_14cc045c0,1,0);
    *DAT_14cc045c0 = 2;
    atexit((_func_5014 *)&LAB_1444819cf);
    _Init_thread_footer(&DAT_14cc045d0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc045e8) && (FUN_144b3d300(&DAT_14cc045e8), DAT_14cc045e8 == -1)) {
    DAT_14cc045d8 = (undefined1 *)0x0;
    _DAT_14cc045e0 = 1;
    FUN_149157980(&DAT_14cc045d8,1,0);
    *DAT_14cc045d8 = 1;
    atexit((_func_5014 *)&LAB_1444819e0);
    _Init_thread_footer(&DAT_14cc045e8);
  }
  cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04330);
  if ((((cVar1 == '\0') && (cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04340), cVar1 == '\0')) &&
      (cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04390), cVar1 == '\0')) &&
     ((cVar1 = FUN_1403f35db(*param_2,&DAT_14cc043a0), cVar1 == '\0' &&
      (cVar1 = FUN_1403f35db(*param_2,&DAT_14cc043d0), cVar1 == '\0')))) {
    cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04370);
    if (cVar1 == '\0') {
      cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04350);
      uVar3 = DAT_14c764f14;
      if (((cVar1 == '\0') &&
          (cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04360), uVar3 = DAT_14c764f14, cVar1 == '\0')) &&
         ((cVar1 = FUN_1403f35db(*param_2,&DAT_14cc043b0), uVar3 = DAT_14c764f14, cVar1 == '\0' &&
          ((cVar1 = FUN_1403f35db(*param_2,&DAT_14cc04380), uVar3 = DAT_14c764f08, cVar1 == '\0' &&
           (cVar1 = FUN_1403f35db(*param_2,&DAT_14cc043c0), uVar3 = DAT_14c764f0c, cVar1 == '\0'))))
         )) {
        uVar2 = 0;
        param_3 = 5;
        uVar3 = 0xffffffff;
      }
      else {
        uVar2 = *param_2;
      }
      FUN_144478fc0(param_1,uVar2,param_3,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
    }
    local_b8 = local_a8;
    local_a8[0] = 0;
    local_98 = 0;
    uVar2 = *param_2;
    puVar4 = &DAT_14cc045d8;
  }
  else {
    local_b8 = local_68;
    local_68[0] = 0;
    local_58 = 0;
    uVar2 = *param_2;
    puVar4 = &DAT_14cc045c0;
  }
  FUN_144478fee(param_1,uVar2,param_3,puVar4);
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14915d2b6 FUN_14915d2b6 body=721 status=ok
// SIG undefined FUN_14915d2b6(void)

longlong * FUN_14915d2b6(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  uint *local_88;
  undefined8 uStack_80;
  uint local_78;
  int local_74;
  uint *local_70;
  int *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar8 = *(uint *)(*(longlong *)(param_2 + 8) + 8);
  if ((longlong)(int)uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_14917ef66(param_1,uVar8);
    iVar2 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1402843ec(param_1);
    }
  }
  plVar1 = *(longlong **)(param_3 + 0x78);
  local_74 = 0;
  puVar3 = *(ulonglong **)(param_2 + 8);
  if (0 < (int)puVar3[1]) {
    iVar2 = 1;
    do {
      if ((*(byte *)((longlong)plVar1 + 0x3e) & 8) == 0) {
        local_88 = (uint *)0x0;
        uStack_80 = 0;
        if ((int)puVar3[1] == 0) {
          lVar7 = 0;
        }
        else {
          if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
            uVar4 = *puVar3;
          }
          else {
            uVar4 = *puVar3;
            if ((uVar4 & 1) != 0) {
              uVar4 = (longlong)puVar3 + ((longlong)uVar4 >> 0x18);
            }
          }
          lVar7 = (longlong)*(int *)(param_2 + 0x10) * (longlong)local_74 + uVar4;
        }
        local_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_90 = 0;
        (**(code **)(*plVar1 + 0xf0))(plVar1,&local_88,lVar7,0);
        uVar8 = (int)uStack_80 - 1;
        if ((int)uStack_80 == 0) {
          uVar8 = 0;
        }
        local_70 = (uint *)&DAT_149dfb77a;
        if ((int)uStack_80 != 0) {
          local_70 = local_88;
        }
        uVar6 = 0;
        if (((local_70 != (uint *)0x0) && (uVar6 = uVar8, 0 < (int)uVar8)) &&
           (*(short *)((longlong)local_70 + (ulonglong)(uVar8 - 1) * 2) == 0)) {
          uVar6 = uVar8 - 1;
        }
        local_68 = (int *)CONCAT44(local_68._4_4_,uVar6);
        local_78 = FUN_1467e781c(&local_70);
        if (local_88 != (uint *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (iVar2 == 0) {
          lVar7 = 0;
        }
        else {
          if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
            uVar4 = *puVar3;
          }
          else {
            uVar4 = *puVar3;
            if ((uVar4 & 1) != 0) {
              uVar4 = (longlong)puVar3 + ((longlong)uVar4 >> 0x18);
            }
          }
          lVar7 = (longlong)*(int *)(param_2 + 0x10) * (longlong)local_74 + uVar4;
        }
        local_78 = FUN_1449b1a2a(plVar1,lVar7);
      }
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & local_78) * 4);
        if (iVar2 != -1) {
          do {
            if (*(uint *)(*param_1 + (longlong)iVar2 * 0x10) == local_78) goto LAB_14915d467;
            iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
          } while (iVar2 != -1);
        }
      }
      local_70 = &local_78;
      local_68 = &local_74;
      FUN_14012212c(param_1,&local_88,&local_70);
LAB_14915d467:
      local_74 = local_74 + 1;
      puVar3 = *(ulonglong **)(param_2 + 8);
      iVar2 = (int)puVar3[1];
    } while (local_74 < iVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14915d58a FUN_14915d58a body=223 status=ok
// SIG undefined FUN_14915d58a(void)

undefined8 * FUN_14915d58a(void)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04600) {
    FUN_144b3d300(&DAT_14cc04600);
    if (DAT_14cc04600 == -1) {
      FUN_1446f57c6(&DAT_14cc00d40,&local_18);
      DAT_14cc045f0 = (undefined8 *)0x0;
      DAT_14cc045f8 = 1;
      FUN_1490f2264(&DAT_14cc045f0,1,0);
      puVar1 = DAT_14cc045f0;
      *DAT_14cc045f0 = local_18;
      *(undefined1 *)(puVar1 + 1) = 2;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      atexit((_func_5014 *)&LAB_1444819f1);
      _Init_thread_footer(&DAT_14cc04600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14cc045f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915d66a FUN_14915d66a body=579 status=ok
// SIG undefined FUN_14915d66a(void)

/* WARNING: Removing unreachable block (ram,0x00014915d849) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915d792 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915d66a(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04618) && (FUN_144b3d300(&DAT_14cc04618), DAT_14cc04618 == -1)) {
    DAT_14cc04608 = 0;
    _DAT_14cc04610 = 0;
    atexit(FUN_144481a02);
    _Init_thread_footer(&DAT_14cc04618);
  }
  if (DAT_14cc04610 == 0) {
    FUN_1446f57c6(&DAT_14cc04340,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04610;
    lVar5 = (longlong)DAT_14cc04610;
    uVar4 = DAT_14cc04610 + 1;
    _DAT_14cc04610 = CONCAT44(DAT_14cc04614,uVar4);
    if (DAT_14cc04614 < uVar4) {
      FUN_1490f2336(&DAT_14cc04608,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04608;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04608 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04610;
    lVar5 = (longlong)DAT_14cc04610;
    uVar4 = DAT_14cc04610 + 1;
    _DAT_14cc04610 = CONCAT44(DAT_14cc04614,uVar4);
    if (DAT_14cc04614 < uVar4) {
      FUN_1490f2336(&DAT_14cc04608,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04608;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04608 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04608;
}



// FUNCTION 14915d8ae FUN_14915d8ae body=207 status=ok
// SIG undefined FUN_14915d8ae(void)

undefined8 FUN_14915d8ae(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 < param_4 + -1) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,param_3 + -1);
    puVar1 = local_38;
    if ((int)uStack_30 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_28,puVar1,1);
    FUN_1446f57c6(&DAT_14cc04340,local_40);
    FUN_14915d984(param_2,local_40,local_28);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1446f57c6(&DAT_14cc04330,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14915d984 FUN_14915d984 body=219 status=ok
// SIG undefined FUN_14915d984(void)

undefined8 FUN_14915d984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_3,&local_40);
  FUN_1400021e4(param_2,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_140002266(&local_30,L"%s_%s",puVar2,puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar1 = local_30;
  }
  FUN_1446f470e(param_1,puVar1,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915da60 FUN_14915da60 body=340 status=ok
// SIG undefined FUN_14915da60(void)

void FUN_14915da60(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = (longlong)((int)param_2[1] + -1) * 0x20;
  lVar3 = *(longlong *)(*param_2 + 8 + lVar5);
  puVar4 = *(ulonglong **)(*param_2 + lVar5);
  bVar1 = *(byte *)(lVar3 + 0x70);
  local_4c = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  local_60 = *(longlong *)(lVar3 + 0x78);
  local_50 = *(int *)(local_60 + 0x34);
  iVar2 = (int)param_2[1];
  uVar8 = (ulonglong)(iVar2 - 1U);
  local_58 = puVar4;
  local_48 = bVar1;
  if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) < (int)(iVar2 - 1U) || iVar2 < 1) {
    local_40 = 1;
    local_3c = 1;
    FUN_1444879a2(*(longlong *)(param_1 + 0xc0),&local_40,uVar8);
    FUN_144a8a902(&local_60,0);
  }
  else {
    FUN_144a8a902(&local_60,uVar8);
    if (iVar2 != 1) {
      lVar5 = 8;
      uVar9 = 0;
      do {
        if ((int)local_58[1] == 0) {
          lVar7 = 0;
        }
        else {
          if ((local_48 & 1) == 0) {
            uVar6 = *local_58;
          }
          else {
            uVar6 = *local_58;
            if ((uVar6 & 1) != 0) {
              uVar6 = (longlong)local_58 + ((longlong)uVar6 >> 0x18);
            }
          }
          lVar7 = (longlong)local_50 * uVar9 + uVar6;
        }
        FUN_14446f40e(*(undefined8 *)(lVar3 + 0x78),lVar7,*(undefined8 *)(*param_2 + lVar5),
                      *(undefined8 *)(*param_2 + -8 + lVar5));
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar8 != uVar9);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14915dbb6 FUN_14915dbb6 body=29 status=ok
// SIG undefined FUN_14915dbb6(void)

undefined8 FUN_14915dbb6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc04330);
  return param_2;
}



// FUNCTION 14915dbd4 FUN_14915dbd4 body=392 status=ok
// SIG undefined FUN_14915dbd4(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915dcff */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915dbd4(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04630) && (FUN_144b3d300(&DAT_14cc04630), DAT_14cc04630 == -1)) {
    DAT_14cc04620 = 0;
    _DAT_14cc04628 = 0;
    atexit(FUN_144481cd9);
    _Init_thread_footer(&DAT_14cc04630);
  }
  if (DAT_14cc04628 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc04628;
    lVar5 = (longlong)DAT_14cc04628;
    uVar4 = DAT_14cc04628 + 1;
    _DAT_14cc04628 = CONCAT44(DAT_14cc0462c,uVar4);
    if (DAT_14cc0462c < uVar4) {
      FUN_1490f2336(&DAT_14cc04620,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04620;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04620 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04620;
}



// FUNCTION 14915dd5e FUN_14915dd5e body=115 status=ok
// SIG undefined FUN_14915dd5e(void)

void FUN_14915dd5e(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = ((undefined8 *)*param_2)[1];
  uVar3 = *(undefined8 *)*param_2;
  uVar1 = *(undefined1 *)(lVar2 + 0x70);
  local_2c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
  local_40 = *(longlong *)(lVar2 + 0x78);
  local_30 = *(undefined4 *)(local_40 + 0x34);
  local_38 = uVar3;
  local_28 = uVar1;
  FUN_144a8a902(&local_40,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915ddd2 FUN_14915ddd2 body=143 status=ok
// SIG undefined FUN_14915ddd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915ddd2(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04660) {
    FUN_144b3d300(&DAT_14cc04660);
    if (DAT_14cc04660 == -1) {
      _DAT_14cc04640 = DAT_14cc04330;
      uRam000000014cc04648 = _DAT_14cc04338;
      _DAT_14cc04650 = (undefined4)DAT_14cc04350;
      uRam000000014cc04654 = DAT_14cc04350._4_4_;
      uRam000000014cc04658 = DAT_14cc04358;
      uRam000000014cc0465c = _DAT_14cc0435c;
      _Init_thread_footer(&DAT_14cc04660);
    }
  }
  FUN_1446f57c6(&DAT_14cc04640 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915de62 FUN_14915de62 body=579 status=ok
// SIG undefined FUN_14915de62(void)

/* WARNING: Removing unreachable block (ram,0x00014915e041) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915df8a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915de62(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04678) && (FUN_144b3d300(&DAT_14cc04678), DAT_14cc04678 == -1)) {
    DAT_14cc04668 = 0;
    _DAT_14cc04670 = 0;
    atexit(FUN_144481e05);
    _Init_thread_footer(&DAT_14cc04678);
  }
  if (DAT_14cc04670 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04670;
    lVar5 = (longlong)DAT_14cc04670;
    uVar4 = DAT_14cc04670 + 1;
    _DAT_14cc04670 = CONCAT44(DAT_14cc04674,uVar4);
    if (DAT_14cc04674 < uVar4) {
      FUN_1490f2336(&DAT_14cc04668,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04668;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04668 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04350,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04670;
    lVar5 = (longlong)DAT_14cc04670;
    uVar4 = DAT_14cc04670 + 1;
    _DAT_14cc04670 = CONCAT44(DAT_14cc04674,uVar4);
    if (DAT_14cc04674 < uVar4) {
      FUN_1490f2336(&DAT_14cc04668,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04668;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04668 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04668;
}



// FUNCTION 14915e0a6 FUN_14915e0a6 body=51 status=ok
// SIG undefined FUN_14915e0a6(void)

void FUN_14915e0a6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)*param_2;
  (**(code **)(**(longlong **)(((longlong *)*param_2)[1] + 0x78) + 0x178))();
  **(undefined4 **)(*param_2 + 0x20) = *(undefined4 *)(lVar1 + 8);
  return;
}



// FUNCTION 14915e0da FUN_14915e0da body=143 status=ok
// SIG undefined FUN_14915e0da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915e0da(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc046a0) {
    FUN_144b3d300(&DAT_14cc046a0);
    if (DAT_14cc046a0 == -1) {
      _DAT_14cc04680 = DAT_14cc04330;
      uRam000000014cc04688 = _DAT_14cc04338;
      _DAT_14cc04690 = (undefined4)DAT_14cc04350;
      uRam000000014cc04694 = DAT_14cc04350._4_4_;
      uRam000000014cc04698 = DAT_14cc04358;
      uRam000000014cc0469c = _DAT_14cc0435c;
      _Init_thread_footer(&DAT_14cc046a0);
    }
  }
  FUN_1446f57c6(&DAT_14cc04680 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915e16a FUN_14915e16a body=579 status=ok
// SIG undefined FUN_14915e16a(void)

/* WARNING: Removing unreachable block (ram,0x00014915e349) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915e292 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915e16a(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc046b8) && (FUN_144b3d300(&DAT_14cc046b8), DAT_14cc046b8 == -1)) {
    DAT_14cc046a8 = 0;
    _DAT_14cc046b0 = 0;
    atexit(FUN_144481ff0);
    _Init_thread_footer(&DAT_14cc046b8);
  }
  if (DAT_14cc046b0 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc046b0;
    lVar5 = (longlong)DAT_14cc046b0;
    uVar4 = DAT_14cc046b0 + 1;
    _DAT_14cc046b0 = CONCAT44(DAT_14cc046b4,uVar4);
    if (DAT_14cc046b4 < uVar4) {
      FUN_1490f2336(&DAT_14cc046a8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc046a8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc046a8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04350,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc046b0;
    lVar5 = (longlong)DAT_14cc046b0;
    uVar4 = DAT_14cc046b0 + 1;
    _DAT_14cc046b0 = CONCAT44(DAT_14cc046b4,uVar4);
    if (DAT_14cc046b4 < uVar4) {
      FUN_1490f2336(&DAT_14cc046a8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc046a8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc046a8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc046a8;
}



// FUNCTION 14915e3ae FUN_14915e3ae body=196 status=ok
// SIG undefined FUN_14915e3ae(void)

void FUN_14915e3ae(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = ((undefined8 *)*param_2)[1];
  uVar4 = *(undefined8 *)*param_2;
  uVar1 = *(undefined1 *)(lVar3 + 0x70);
  local_44 = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  local_58 = *(longlong *)(lVar3 + 0x78);
  local_48 = *(undefined4 *)(local_58 + 0x34);
  iVar2 = **(int **)(*param_2 + 0x20);
  local_50 = uVar4;
  local_40 = uVar1;
  if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) < iVar2 || iVar2 < 0) {
    local_38 = 1;
    local_34 = 1;
    FUN_1444879a2();
  }
  else {
    FUN_144a8a902(&local_58,iVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915e474 FUN_14915e474 body=157 status=ok
// SIG undefined FUN_14915e474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915e474(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc046f0) {
    FUN_144b3d300(&DAT_14cc046f0);
    if (DAT_14cc046f0 == -1) {
      _DAT_14cc046c0 = DAT_14cc04330;
      uRam000000014cc046c8 = _DAT_14cc04338;
      _DAT_14cc046d0 = DAT_14cc04350;
      uRam000000014cc046d8 = _DAT_14cc04358;
      _DAT_14cc046e0 = (undefined4)DAT_14cc04370;
      uRam000000014cc046e4 = DAT_14cc04370._4_4_;
      uRam000000014cc046e8 = DAT_14cc04378;
      uRam000000014cc046ec = _DAT_14cc0437c;
      _Init_thread_footer(&DAT_14cc046f0);
    }
  }
  FUN_1446f57c6(&DAT_14cc046c0 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915e512 FUN_14915e512 body=768 status=ok
// SIG undefined FUN_14915e512(void)

/* WARNING: Removing unreachable block (ram,0x00014915e7ae) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915e63a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915e512(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04708) && (FUN_144b3d300(&DAT_14cc04708), DAT_14cc04708 == -1)) {
    DAT_14cc046f8 = 0;
    _DAT_14cc04700 = 0;
    atexit(FUN_1444821dc);
    _Init_thread_footer(&DAT_14cc04708);
  }
  if (DAT_14cc04700 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc04700;
    lVar5 = (longlong)DAT_14cc04700;
    uVar4 = DAT_14cc04700 + 1;
    _DAT_14cc04700 = CONCAT44(DAT_14cc04704,uVar4);
    if (DAT_14cc04704 < uVar4) {
      FUN_1490f2336(&DAT_14cc046f8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc046f8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc046f8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04350,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04700;
    lVar5 = (longlong)DAT_14cc04700;
    uVar4 = DAT_14cc04700 + 1;
    _DAT_14cc04700 = CONCAT44(DAT_14cc04704,uVar4);
    if (DAT_14cc04704 < uVar4) {
      FUN_1490f2336(&DAT_14cc046f8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc046f8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc046f8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04370,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04700;
    lVar5 = (longlong)DAT_14cc04700;
    uVar4 = DAT_14cc04700 + 1;
    _DAT_14cc04700 = CONCAT44(DAT_14cc04704,uVar4);
    if (DAT_14cc04704 < uVar4) {
      FUN_1490f2336(&DAT_14cc046f8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc046f8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc046f8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc046f8;
}



// FUNCTION 14915e814 FUN_14915e814 body=341 status=ok
// SIG undefined FUN_14915e814(void)

void FUN_14915e814(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong *local_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = ((undefined8 *)*param_2)[1];
  puVar4 = *(ulonglong **)*param_2;
  bVar1 = *(byte *)(lVar3 + 0x70);
  local_54 = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  local_68 = *(longlong *)(lVar3 + 0x78);
  local_58 = *(int *)(local_68 + 0x34);
  lVar9 = *param_2;
  iVar2 = **(int **)(lVar9 + 0x20);
  local_60 = puVar4;
  local_50 = bVar1;
  if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) < iVar2 || iVar2 < 0) {
    local_48 = (longlong *)CONCAT35(local_48._5_3_,0x100000001);
    FUN_1444879a2(*(longlong *)(param_1 + 0xc0),&local_48,iVar2);
  }
  else {
    uVar5 = *(undefined8 *)(lVar9 + 0x48);
    uVar6 = *(undefined8 *)(lVar9 + 0x40);
    FUN_14474d2ba(&local_68,iVar2);
    local_48 = &local_68;
    local_40 = iVar2;
    uVar7 = FUN_144a482cc(&local_68);
    FUN_144ae1314(&local_68,uVar7,iVar2);
    if (0 < (int)local_60[1]) {
      lVar9 = 0;
      do {
        if ((local_50 & 1) == 0) {
          uVar8 = *local_60;
        }
        else {
          uVar8 = *local_60;
          if ((uVar8 & 1) != 0) {
            uVar8 = (longlong)local_60 + ((longlong)uVar8 >> 0x18);
          }
        }
        FUN_14446f40e(*(undefined8 *)(lVar3 + 0x78),local_58 * lVar9 + uVar8,uVar5,uVar6);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)local_60[1]);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14915e96a FUN_14915e96a body=157 status=ok
// SIG undefined FUN_14915e96a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915e96a(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04740) {
    FUN_144b3d300(&DAT_14cc04740);
    if (DAT_14cc04740 == -1) {
      _DAT_14cc04710 = DAT_14cc04330;
      uRam000000014cc04718 = _DAT_14cc04338;
      _DAT_14cc04720 = DAT_14cc04360;
      uRam000000014cc04728 = _DAT_14cc04368;
      _DAT_14cc04730 = (undefined4)DAT_14cc04370;
      uRam000000014cc04734 = DAT_14cc04370._4_4_;
      uRam000000014cc04738 = DAT_14cc04378;
      uRam000000014cc0473c = _DAT_14cc0437c;
      _Init_thread_footer(&DAT_14cc04740);
    }
  }
  FUN_1446f57c6(&DAT_14cc04710 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915ea08 FUN_14915ea08 body=768 status=ok
// SIG undefined FUN_14915ea08(void)

/* WARNING: Removing unreachable block (ram,0x00014915eca4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915eb30 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915ea08(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04758) && (FUN_144b3d300(&DAT_14cc04758), DAT_14cc04758 == -1)) {
    DAT_14cc04748 = 0;
    _DAT_14cc04750 = 0;
    atexit(FUN_1444824a6);
    _Init_thread_footer(&DAT_14cc04758);
  }
  if (DAT_14cc04750 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04750;
    lVar5 = (longlong)DAT_14cc04750;
    uVar4 = DAT_14cc04750 + 1;
    _DAT_14cc04750 = CONCAT44(DAT_14cc04754,uVar4);
    if (DAT_14cc04754 < uVar4) {
      FUN_1490f2336(&DAT_14cc04748,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04748;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04748 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04360,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04750;
    lVar5 = (longlong)DAT_14cc04750;
    uVar4 = DAT_14cc04750 + 1;
    _DAT_14cc04750 = CONCAT44(DAT_14cc04754,uVar4);
    if (DAT_14cc04754 < uVar4) {
      FUN_1490f2336(&DAT_14cc04748,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04748;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04748 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04370,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04750;
    lVar5 = (longlong)DAT_14cc04750;
    uVar4 = DAT_14cc04750 + 1;
    _DAT_14cc04750 = CONCAT44(DAT_14cc04754,uVar4);
    if (DAT_14cc04754 < uVar4) {
      FUN_1490f2336(&DAT_14cc04748,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04748;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04748 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04748;
}



// FUNCTION 14915ed0a FUN_14915ed0a body=250 status=ok
// SIG undefined FUN_14915ed0a(void)

void FUN_14915ed0a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(ulonglong **)*param_2;
  lVar4 = ((longlong *)*param_2)[1];
  bVar1 = *(byte *)(lVar4 + 0x70);
  (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x178))();
  lVar5 = *param_2;
  uVar2 = (uint)puVar3[1];
  uVar6 = (**(int **)(lVar5 + 0x20) >> 0x1f & uVar2) + **(int **)(lVar5 + 0x20);
  if ((int)uVar6 < 0 || (int)uVar2 <= (int)uVar6) {
    local_38 = 1;
    local_34 = 1;
    FUN_144487a36(*(undefined8 *)(param_1 + 0xc0));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if (uVar2 == 0) {
    lVar8 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      uVar7 = *puVar3;
    }
    else {
      uVar7 = *puVar3;
      if ((uVar7 & 1) != 0) {
        uVar7 = (longlong)puVar3 + ((longlong)uVar7 >> 0x18);
      }
    }
    lVar8 = (ulonglong)uVar6 * (longlong)*(int *)(*(longlong *)(lVar4 + 0x78) + 0x34) + uVar7;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58,*(undefined8 *)(lVar5 + 0x40),
                  *(longlong *)(lVar4 + 0x78),lVar8);
  }
  FUN_14446f40e(*(undefined8 *)(lVar5 + 0x48));
  return;
}



// FUNCTION 14915ee12 FUN_14915ee12 body=157 status=ok
// SIG undefined FUN_14915ee12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915ee12(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04790) {
    FUN_144b3d300(&DAT_14cc04790);
    if (DAT_14cc04790 == -1) {
      _DAT_14cc04760 = DAT_14cc04330;
      uRam000000014cc04768 = _DAT_14cc04338;
      _DAT_14cc04770 = DAT_14cc04360;
      uRam000000014cc04778 = _DAT_14cc04368;
      _DAT_14cc04780 = (undefined4)DAT_14cc04370;
      uRam000000014cc04784 = DAT_14cc04370._4_4_;
      uRam000000014cc04788 = DAT_14cc04378;
      uRam000000014cc0478c = _DAT_14cc0437c;
      _Init_thread_footer(&DAT_14cc04790);
    }
  }
  FUN_1446f57c6(&DAT_14cc04760 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915eeb0 FUN_14915eeb0 body=768 status=ok
// SIG undefined FUN_14915eeb0(void)

/* WARNING: Removing unreachable block (ram,0x00014915f14c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915efd8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915eeb0(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc047a8) && (FUN_144b3d300(&DAT_14cc047a8), DAT_14cc047a8 == -1)) {
    DAT_14cc04798 = 0;
    _DAT_14cc047a0 = 0;
    atexit(FUN_144482a04);
    _Init_thread_footer(&DAT_14cc047a8);
  }
  if (DAT_14cc047a0 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc047a0;
    lVar5 = (longlong)DAT_14cc047a0;
    uVar4 = DAT_14cc047a0 + 1;
    _DAT_14cc047a0 = CONCAT44(DAT_14cc047a4,uVar4);
    if (DAT_14cc047a4 < uVar4) {
      FUN_1490f2336(&DAT_14cc04798,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04798;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04798 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04360,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc047a0;
    lVar5 = (longlong)DAT_14cc047a0;
    uVar4 = DAT_14cc047a0 + 1;
    _DAT_14cc047a0 = CONCAT44(DAT_14cc047a4,uVar4);
    if (DAT_14cc047a4 < uVar4) {
      FUN_1490f2336(&DAT_14cc04798,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04798;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04798 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04370,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc047a0;
    lVar5 = (longlong)DAT_14cc047a0;
    uVar4 = DAT_14cc047a0 + 1;
    _DAT_14cc047a0 = CONCAT44(DAT_14cc047a4,uVar4);
    if (DAT_14cc047a4 < uVar4) {
      FUN_1490f2336(&DAT_14cc04798,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04798;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04798 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04798;
}



// FUNCTION 14915f1b2 FUN_14915f1b2 body=247 status=ok
// SIG undefined FUN_14915f1b2(void)

void FUN_14915f1b2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = *(ulonglong **)*param_2;
  lVar7 = ((longlong *)*param_2)[1];
  bVar1 = *(byte *)(lVar7 + 0x70);
  (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x178))();
  lVar5 = *param_2;
  iVar2 = **(int **)(lVar5 + 0x20);
  uVar3 = (uint)puVar4[1];
  uVar6 = (iVar2 >> 0x1f & uVar3) + iVar2;
  if ((int)uVar6 < 0 || (int)uVar3 <= (int)uVar6) {
    local_38 = 1;
    local_34 = 1;
    FUN_144487a36(*(undefined8 *)(param_1 + 0xc0),&local_38,iVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if (uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      uVar8 = *puVar4;
    }
    else {
      uVar8 = *puVar4;
      if ((uVar8 & 1) != 0) {
        uVar8 = (longlong)puVar4 + ((longlong)uVar8 >> 0x18);
      }
    }
    lVar7 = (ulonglong)uVar6 * (longlong)*(int *)(*(longlong *)(lVar7 + 0x78) + 0x34) + uVar8;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58,lVar7,*(undefined8 *)(lVar5 + 0x48),
                  *(undefined8 *)(lVar5 + 0x40));
  }
  FUN_14446f40e();
  return;
}



// FUNCTION 14915f2b6 FUN_14915f2b6 body=157 status=ok
// SIG undefined FUN_14915f2b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915f2b6(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc047e0) {
    FUN_144b3d300(&DAT_14cc047e0);
    if (DAT_14cc047e0 == -1) {
      _DAT_14cc047b0 = DAT_14cc04330;
      uRam000000014cc047b8 = _DAT_14cc04338;
      _DAT_14cc047c0 = DAT_14cc04370;
      uRam000000014cc047c8 = _DAT_14cc04378;
      _DAT_14cc047d0 = (undefined4)DAT_14cc04360;
      uRam000000014cc047d4 = DAT_14cc04360._4_4_;
      uRam000000014cc047d8 = DAT_14cc04368;
      uRam000000014cc047dc = _DAT_14cc0436c;
      _Init_thread_footer(&DAT_14cc047e0);
    }
  }
  FUN_1446f57c6(&DAT_14cc047b0 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915f354 FUN_14915f354 body=768 status=ok
// SIG undefined FUN_14915f354(void)

/* WARNING: Removing unreachable block (ram,0x00014915f5f0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915f47c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915f354(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc047f8) && (FUN_144b3d300(&DAT_14cc047f8), DAT_14cc047f8 == -1)) {
    DAT_14cc047e8 = 0;
    _DAT_14cc047f0 = 0;
    atexit(FUN_144482f62);
    _Init_thread_footer(&DAT_14cc047f8);
  }
  if (DAT_14cc047f0 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc047f0;
    lVar5 = (longlong)DAT_14cc047f0;
    uVar4 = DAT_14cc047f0 + 1;
    _DAT_14cc047f0 = CONCAT44(DAT_14cc047f4,uVar4);
    if (DAT_14cc047f4 < uVar4) {
      FUN_1490f2336(&DAT_14cc047e8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc047e8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc047e8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04370,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc047f0;
    lVar5 = (longlong)DAT_14cc047f0;
    uVar4 = DAT_14cc047f0 + 1;
    _DAT_14cc047f0 = CONCAT44(DAT_14cc047f4,uVar4);
    if (DAT_14cc047f4 < uVar4) {
      FUN_1490f2336(&DAT_14cc047e8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc047e8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc047e8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04360,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc047f0;
    lVar5 = (longlong)DAT_14cc047f0;
    uVar4 = DAT_14cc047f0 + 1;
    _DAT_14cc047f0 = CONCAT44(DAT_14cc047f4,uVar4);
    if (DAT_14cc047f4 < uVar4) {
      FUN_1490f2336(&DAT_14cc047e8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc047e8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc047e8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc047e8;
}



// FUNCTION 14915f656 FUN_14915f656 body=340 status=ok
// SIG undefined FUN_14915f656(void)

void FUN_14915f656(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong *local_68;
  int local_60;
  undefined4 local_5c;
  byte local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = ((longlong *)*param_2)[1];
  puVar3 = *(ulonglong **)*param_2;
  bVar1 = *(byte *)(lVar2 + 0x70);
  local_5c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
  local_70 = *(longlong *)(lVar2 + 0x78);
  local_60 = *(int *)(local_70 + 0x34);
  piVar4 = *(int **)(*param_2 + 0x40);
  iVar6 = (int)puVar3[1];
  local_68 = puVar3;
  local_58 = bVar1;
  if (iVar6 < -1 || *(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) <= iVar6) {
    local_50 = (longlong *)CONCAT35(local_50._5_3_,0x100000001);
    FUN_1444879a2(*(longlong *)(param_1 + 0xc0),&local_50,iVar6 + 1);
    *piVar4 = -1;
  }
  else {
    uVar5 = *(undefined8 *)(*param_2 + 0x20);
    local_48 = 1;
    local_50 = &local_70;
    iVar6 = FUN_144a482cc(&local_70);
    FUN_144ae1314(&local_70,iVar6,1);
    *piVar4 = iVar6;
    if ((int)local_68[1] == 0) {
      lVar8 = 0;
    }
    else {
      if ((local_58 & 1) == 0) {
        uVar7 = *local_68;
      }
      else {
        uVar7 = *local_68;
        if ((uVar7 & 1) != 0) {
          uVar7 = (longlong)local_68 + ((longlong)uVar7 >> 0x18);
        }
      }
      lVar8 = (longlong)local_60 * (longlong)iVar6 + uVar7;
    }
    FUN_14446f40e(*(undefined8 *)(lVar2 + 0x78),lVar8,*(undefined8 *)(*param_2 + 0x28),uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14915f7ac FUN_14915f7ac body=357 status=ok
// SIG undefined FUN_14915f7ac(void)

void FUN_14915f7ac(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong *local_68;
  int local_60;
  undefined4 local_5c;
  byte local_58;
  longlong *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = ((longlong *)*param_2)[1];
  puVar5 = *(ulonglong **)*param_2;
  bVar1 = *(byte *)(lVar4 + 0x70);
  local_5c = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x178))();
  local_70 = *(longlong *)(lVar4 + 0x78);
  local_60 = *(int *)(local_70 + 0x34);
  uVar2 = (uint)puVar5[1];
  local_68 = puVar5;
  local_58 = bVar1;
  if ((int)uVar2 < -1 || *(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) <= (int)uVar2) {
    local_50 = (longlong *)CONCAT35(local_50._5_3_,0x100000001);
    FUN_1444879a2(*(longlong *)(param_1 + 0xc0),&local_50,uVar2 + 1);
  }
  else {
    uVar6 = *(undefined8 *)(*param_2 + 0x40);
    iVar3 = **(int **)(*param_2 + 0x20);
    uVar8 = (iVar3 >> 0x1f & uVar2) + iVar3;
    if ((int)uVar2 <= (int)uVar8) {
      uVar8 = uVar2;
    }
    lVar9 = 0;
    if ((int)uVar8 < 1) {
      uVar8 = 0;
    }
    local_44 = 1;
    local_50 = &local_70;
    local_48 = uVar8;
    FUN_147b4c6b4(&local_70);
    FUN_144ae1314(&local_70,uVar8,1);
    if ((int)local_68[1] != 0) {
      if ((local_58 & 1) == 0) {
        uVar7 = *local_68;
      }
      else {
        uVar7 = *local_68;
        if ((uVar7 & 1) != 0) {
          uVar7 = (longlong)local_68 + ((longlong)uVar7 >> 0x18);
        }
      }
      lVar9 = (longlong)local_60 * (ulonglong)uVar8 + uVar7;
    }
    FUN_14446f40e(*(undefined8 *)(lVar4 + 0x78),lVar9,*(undefined8 *)(*param_2 + 0x48),uVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14915f912 FUN_14915f912 body=143 status=ok
// SIG undefined FUN_14915f912(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915f912(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04820) {
    FUN_144b3d300(&DAT_14cc04820);
    if (DAT_14cc04820 == -1) {
      _DAT_14cc04800 = DAT_14cc04330;
      uRam000000014cc04808 = _DAT_14cc04338;
      _DAT_14cc04810 = (undefined4)DAT_14cc04360;
      uRam000000014cc04814 = DAT_14cc04360._4_4_;
      uRam000000014cc04818 = DAT_14cc04368;
      uRam000000014cc0481c = _DAT_14cc0436c;
      _Init_thread_footer(&DAT_14cc04820);
    }
  }
  FUN_1446f57c6(&DAT_14cc04800 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915f9a2 FUN_14915f9a2 body=579 status=ok
// SIG undefined FUN_14915f9a2(void)

/* WARNING: Removing unreachable block (ram,0x00014915fb81) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915faca */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915f9a2(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04838) && (FUN_144b3d300(&DAT_14cc04838), DAT_14cc04838 == -1)) {
    DAT_14cc04828 = 0;
    _DAT_14cc04830 = 0;
    atexit(FUN_144482f93);
    _Init_thread_footer(&DAT_14cc04838);
  }
  if (DAT_14cc04830 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc04830;
    lVar5 = (longlong)DAT_14cc04830;
    uVar4 = DAT_14cc04830 + 1;
    _DAT_14cc04830 = CONCAT44(DAT_14cc04834,uVar4);
    if (DAT_14cc04834 < uVar4) {
      FUN_1490f2336(&DAT_14cc04828,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04828;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04828 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04360,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04830;
    lVar5 = (longlong)DAT_14cc04830;
    uVar4 = DAT_14cc04830 + 1;
    _DAT_14cc04830 = CONCAT44(DAT_14cc04834,uVar4);
    if (DAT_14cc04834 < uVar4) {
      FUN_1490f2336(&DAT_14cc04828,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04828;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04828 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04828;
}



// FUNCTION 14915fbe6 FUN_14915fbe6 body=236 status=ok
// SIG undefined FUN_14915fbe6(void)

void FUN_14915fbe6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  longlong *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = ((longlong *)*param_2)[1];
  lVar3 = *(longlong *)*param_2;
  uVar1 = *(undefined1 *)(lVar2 + 0x70);
  local_4c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
  local_60 = *(longlong *)(lVar2 + 0x78);
  local_50 = *(undefined4 *)(local_60 + 0x34);
  iVar4 = (**(int **)(*param_2 + 0x20) >> 0x1f & *(uint *)(lVar3 + 8)) + **(int **)(*param_2 + 0x20)
  ;
  local_58 = lVar3;
  local_48 = uVar1;
  if (iVar4 < 0 || (int)*(uint *)(lVar3 + 8) <= iVar4) {
    local_40 = (longlong *)CONCAT35(local_40._5_3_,0x100000001);
    FUN_144487a36(*(undefined8 *)(param_1 + 0xc0));
  }
  else {
    FUN_143419704(&local_60,iVar4,1);
    local_34 = 1;
    local_40 = &local_60;
    local_38 = iVar4;
    FUN_140eff44e(&local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915fcd4 FUN_14915fcd4 body=179 status=ok
// SIG undefined FUN_14915fcd4(void)

void FUN_14915fcd4(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  longlong *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = ((longlong *)*param_2)[1];
  lVar3 = *(longlong *)*param_2;
  uVar1 = *(undefined1 *)(lVar2 + 0x70);
  local_44 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
  local_58 = *(longlong *)(lVar2 + 0x78);
  local_48 = *(undefined4 *)(local_58 + 0x34);
  local_50 = lVar3;
  local_40 = uVar1;
  if (1 < *(int *)(lVar3 + 8)) {
    iVar5 = *(int *)(lVar3 + 8) + -1;
    iVar6 = 1;
    do {
      local_30 = iVar6 + -1;
      local_38 = &local_58;
      local_2c = iVar5;
      FUN_145de6008(&local_58,&local_38);
      iVar5 = iVar5 + -1;
      bVar4 = iVar6 < iVar5;
      iVar6 = iVar6 + 1;
    } while (bVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14915fd88 FUN_14915fd88 body=171 status=ok
// SIG undefined FUN_14915fd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14915fd88(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04880) {
    FUN_144b3d300(&DAT_14cc04880);
    if (DAT_14cc04880 == -1) {
      _DAT_14cc04840 = DAT_14cc04330;
      uRam000000014cc04848 = _DAT_14cc04338;
      _DAT_14cc04850 = DAT_14cc04370;
      uRam000000014cc04858 = _DAT_14cc04378;
      _DAT_14cc04860 = DAT_14cc04360;
      uRam000000014cc04868 = _DAT_14cc04368;
      _DAT_14cc04870 = (undefined4)DAT_14cc04380;
      uRam000000014cc04874 = DAT_14cc04380._4_4_;
      uRam000000014cc04878 = DAT_14cc04388;
      uRam000000014cc0487c = _DAT_14cc0438c;
      _Init_thread_footer(&DAT_14cc04880);
    }
  }
  FUN_1446f57c6(&DAT_14cc04840 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 14915fe34 FUN_14915fe34 body=957 status=ok
// SIG undefined FUN_14915fe34(void)

/* WARNING: Removing unreachable block (ram,0x00014916018d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014915ff5c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14915fe34(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04898) && (FUN_144b3d300(&DAT_14cc04898), DAT_14cc04898 == -1)) {
    DAT_14cc04888 = 0;
    _DAT_14cc04890 = 0;
    atexit(FUN_14448317e);
    _Init_thread_footer(&DAT_14cc04898);
  }
  if (DAT_14cc04890 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04890;
    lVar5 = (longlong)DAT_14cc04890;
    uVar4 = DAT_14cc04890 + 1;
    _DAT_14cc04890 = CONCAT44(DAT_14cc04894,uVar4);
    if (DAT_14cc04894 < uVar4) {
      FUN_1490f2336(&DAT_14cc04888,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04888;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04888 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04370,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04890;
    lVar5 = (longlong)DAT_14cc04890;
    uVar4 = DAT_14cc04890 + 1;
    _DAT_14cc04890 = CONCAT44(DAT_14cc04894,uVar4);
    if (DAT_14cc04894 < uVar4) {
      FUN_1490f2336(&DAT_14cc04888,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04888;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04888 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04360,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04890;
    lVar5 = (longlong)DAT_14cc04890;
    uVar4 = DAT_14cc04890 + 1;
    _DAT_14cc04890 = CONCAT44(DAT_14cc04894,uVar4);
    if (DAT_14cc04894 < uVar4) {
      FUN_1490f2336(&DAT_14cc04888,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04888;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04888 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04380,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04890;
    lVar5 = (longlong)DAT_14cc04890;
    uVar4 = DAT_14cc04890 + 1;
    _DAT_14cc04890 = CONCAT44(DAT_14cc04894,uVar4);
    if (DAT_14cc04894 < uVar4) {
      FUN_1490f2336(&DAT_14cc04888,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04888;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04888 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04888;
}



// FUNCTION 1491601f2 FUN_1491601f2 body=428 status=ok
// SIG undefined FUN_1491601f2(void)

void FUN_1491601f2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = *(ulonglong **)*param_2;
  lVar9 = ((longlong *)*param_2)[1];
  bVar1 = *(byte *)(lVar9 + 0x70);
  (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x178))();
  iVar2 = *(int *)(*(longlong *)(lVar9 + 0x78) + 0x34);
  local_78 = *(undefined4 **)(*param_2 + 0x40);
  puVar4 = *(undefined1 **)(*param_2 + 0x60);
  *local_78 = 0xffffffff;
  *puVar4 = 0;
  plVar5 = *(longlong **)(*param_2 + 0x28);
  plVar6 = *(longlong **)(lVar9 + 0x78);
  cVar8 = (**(code **)(*plVar5 + 0x1b0))(plVar5,plVar6);
  if (cVar8 == '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0xc0);
    (**(code **)(*plVar5 + 0x70))(plVar5,&local_58,0,0);
    puVar10 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar10 = local_58;
    }
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_68,0,0);
    puVar13 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar13 = local_68;
    }
    local_70 = 1;
    local_6c = 1;
    FUN_144483856(uVar7,&local_70,puVar13,puVar10);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (0 < (int)puVar3[1]) {
    uVar7 = *(undefined8 *)(*param_2 + 0x20);
    lVar9 = 0;
    lVar12 = 0;
    do {
      if ((bVar1 & 1) == 0) {
        uVar11 = *puVar3;
      }
      else {
        uVar11 = *puVar3;
        if ((uVar11 & 1) != 0) {
          uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar3;
        }
      }
      cVar8 = (**(code **)(*plVar5 + 200))(plVar5,uVar7,uVar11 + lVar9,0);
      if (cVar8 != '\0') {
        *local_78 = (int)lVar12;
        *puVar4 = 1;
        break;
      }
      lVar12 = lVar12 + 1;
      lVar9 = lVar9 + iVar2;
    } while (lVar12 < (int)puVar3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491603a0 FUN_1491603a0 body=143 status=ok
// SIG undefined FUN_1491603a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1491603a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc048c0) {
    FUN_144b3d300(&DAT_14cc048c0);
    if (DAT_14cc048c0 == -1) {
      _DAT_14cc048a0 = DAT_14cc04330;
      uRam000000014cc048a8 = _DAT_14cc04338;
      _DAT_14cc048b0 = (undefined4)DAT_14cc04390;
      uRam000000014cc048b4 = DAT_14cc04390._4_4_;
      uRam000000014cc048b8 = DAT_14cc04398;
      uRam000000014cc048bc = _DAT_14cc0439c;
      _Init_thread_footer(&DAT_14cc048c0);
    }
  }
  FUN_1446f57c6(&DAT_14cc048a0 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149160430 FUN_149160430 body=579 status=ok
// SIG undefined FUN_149160430(void)

/* WARNING: Removing unreachable block (ram,0x00014916060f) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x000149160558 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_149160430(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc048d8) && (FUN_144b3d300(&DAT_14cc048d8), DAT_14cc048d8 == -1)) {
    DAT_14cc048c8 = 0;
    _DAT_14cc048d0 = 0;
    atexit(FUN_1444838ea);
    _Init_thread_footer(&DAT_14cc048d8);
  }
  if (DAT_14cc048d0 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,2);
    uVar3 = _DAT_14cc048d0;
    lVar5 = (longlong)DAT_14cc048d0;
    uVar4 = DAT_14cc048d0 + 1;
    _DAT_14cc048d0 = CONCAT44(DAT_14cc048d4,uVar4);
    if (DAT_14cc048d4 < uVar4) {
      FUN_1490f2336(&DAT_14cc048c8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc048c8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc048c8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04390,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc048d0;
    lVar5 = (longlong)DAT_14cc048d0;
    uVar4 = DAT_14cc048d0 + 1;
    _DAT_14cc048d0 = CONCAT44(DAT_14cc048d4,uVar4);
    if (DAT_14cc048d4 < uVar4) {
      FUN_1490f2336(&DAT_14cc048c8,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc048c8;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc048c8 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc048c8;
}



// FUNCTION 149160674 FUN_149160674 body=414 status=ok
// SIG undefined FUN_149160674(void)

void FUN_149160674(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong *local_70;
  int local_68;
  undefined4 local_64;
  byte local_60;
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = *(ulonglong **)(*param_2 + 0x20);
  lVar10 = *(longlong *)(*param_2 + 0x28);
  bVar1 = *(byte *)(lVar10 + 0x70);
  (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x178))();
  if (0 < (int)puVar5[1]) {
    iVar3 = *(int *)(*(longlong *)(lVar10 + 0x78) + 0x34);
    lVar6 = ((longlong *)*param_2)[1];
    puVar7 = *(ulonglong **)*param_2;
    bVar2 = *(byte *)(lVar6 + 0x70);
    local_64 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x178))();
    lVar6 = *(longlong *)(lVar6 + 0x78);
    local_68 = *(int *)(lVar6 + 0x34);
    uVar4 = (uint)puVar5[1];
    uVar11 = (ulonglong)uVar4;
    iVar12 = (int)puVar7[1] + uVar4;
    local_78 = lVar6;
    local_70 = puVar7;
    local_60 = bVar2;
    if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) < iVar12 || iVar12 < 0) {
      local_58 = (longlong *)CONCAT35(local_58._5_3_,0x100000001);
      FUN_1444879a2();
    }
    else {
      uVar8 = *(undefined8 *)(lVar10 + 0x78);
      local_58 = &local_78;
      local_50 = uVar4;
      iVar12 = FUN_144a482cc(&local_78);
      FUN_144ae1314(&local_78,iVar12,uVar4);
      if (0 < (int)uVar4) {
        lVar15 = (longlong)iVar12;
        lVar10 = 0;
        do {
          if ((int)local_70[1] == 0) {
            lVar9 = 0;
          }
          else {
            if ((local_60 & 1) == 0) {
              uVar14 = *local_70;
            }
            else {
              uVar14 = *local_70;
              if ((uVar14 & 1) != 0) {
                uVar14 = (longlong)local_70 + ((longlong)uVar14 >> 0x18);
              }
            }
            lVar9 = local_68 * lVar15 + uVar14;
          }
          if ((int)puVar5[1] == 0) {
            lVar13 = 0;
          }
          else {
            if ((bVar1 & 1) == 0) {
              uVar14 = *puVar5;
            }
            else {
              uVar14 = *puVar5;
              if ((uVar14 & 1) != 0) {
                uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar5;
              }
            }
            lVar13 = uVar14 + lVar10;
          }
          FUN_14446f40e(lVar6,lVar9,uVar8,lVar13);
          lVar15 = lVar15 + 1;
          lVar10 = lVar10 + iVar3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149160814 FUN_149160814 body=143 status=ok
// SIG undefined FUN_149160814(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149160814(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04900) {
    FUN_144b3d300(&DAT_14cc04900);
    if (DAT_14cc04900 == -1) {
      _DAT_14cc048e0 = DAT_14cc04330;
      uRam000000014cc048e8 = _DAT_14cc04338;
      _DAT_14cc048f0 = (undefined4)DAT_14cc043a0;
      uRam000000014cc048f4 = DAT_14cc043a0._4_4_;
      uRam000000014cc048f8 = DAT_14cc043a8;
      uRam000000014cc048fc = _DAT_14cc043ac;
      _Init_thread_footer(&DAT_14cc04900);
    }
  }
  FUN_1446f57c6(&DAT_14cc048e0 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 1491608a4 FUN_1491608a4 body=579 status=ok
// SIG undefined FUN_1491608a4(void)

/* WARNING: Removing unreachable block (ram,0x000149160a83) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0001491609cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_1491608a4(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04918) && (FUN_144b3d300(&DAT_14cc04918), DAT_14cc04918 == -1)) {
    DAT_14cc04908 = 0;
    _DAT_14cc04910 = 0;
    atexit(FUN_144483ac8);
    _Init_thread_footer(&DAT_14cc04918);
  }
  if (DAT_14cc04910 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04910;
    lVar5 = (longlong)DAT_14cc04910;
    uVar4 = DAT_14cc04910 + 1;
    _DAT_14cc04910 = CONCAT44(DAT_14cc04914,uVar4);
    if (DAT_14cc04914 < uVar4) {
      FUN_1490f2336(&DAT_14cc04908,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04908;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04908 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc043a0,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04910;
    lVar5 = (longlong)DAT_14cc04910;
    uVar4 = DAT_14cc04910 + 1;
    _DAT_14cc04910 = CONCAT44(DAT_14cc04914,uVar4);
    if (DAT_14cc04914 < uVar4) {
      FUN_1490f2336(&DAT_14cc04908,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04908;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04908 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04908;
}



// FUNCTION 149160ae8 FUN_149160ae8 body=312 status=ok
// SIG undefined FUN_149160ae8(void)

void FUN_149160ae8(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = *(ulonglong **)*param_2;
  lVar10 = ((longlong *)*param_2)[1];
  bVar1 = *(byte *)(lVar10 + 0x70);
  (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x178))();
  iVar3 = *(int *)(*(longlong *)(lVar10 + 0x78) + 0x34);
  lVar11 = *(longlong *)(*param_2 + 0x28);
  puVar5 = *(ulonglong **)(*param_2 + 0x20);
  bVar2 = *(byte *)(lVar11 + 0x70);
  local_4c = (**(code **)(**(longlong **)(lVar11 + 0x78) + 0x178))();
  local_60 = *(longlong *)(lVar11 + 0x78);
  local_50 = *(int *)(local_60 + 0x34);
  local_58 = puVar5;
  local_48 = bVar2;
  FUN_144a8a902(&local_60,(int)puVar4[1]);
  if (0 < (int)puVar4[1]) {
    uVar6 = *(undefined8 *)(lVar11 + 0x78);
    uVar7 = *(undefined8 *)(lVar10 + 0x78);
    lVar11 = 0;
    lVar10 = 0;
    do {
      if ((int)local_58[1] == 0) {
        lVar8 = 0;
      }
      else {
        if ((local_48 & 1) == 0) {
          uVar9 = *local_58;
        }
        else {
          uVar9 = *local_58;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)local_58 + ((longlong)uVar9 >> 0x18);
          }
        }
        lVar8 = local_50 * lVar10 + uVar9;
      }
      if ((bVar1 & 1) == 0) {
        uVar9 = *puVar4;
      }
      else {
        uVar9 = *puVar4;
        if ((uVar9 & 1) != 0) {
          uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar4;
        }
      }
      FUN_14446f40e(uVar6,lVar8,uVar7,uVar9 + lVar11);
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + iVar3;
    } while (lVar10 < (int)puVar4[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149160c22 FUN_149160c22 body=2193 status=ok
// SIG undefined FUN_149160c22(void)

void FUN_149160c22(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *_Src;
  undefined1 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  size_t _Size;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  void *pvVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_1c8 [36];
  int local_1a4;
  undefined8 local_1a0;
  void *local_198;
  ulonglong uStack_190;
  longlong **local_180;
  undefined8 local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong *local_148;
  ulonglong *local_140;
  int local_138;
  undefined4 local_134;
  byte local_130;
  longlong local_128;
  ulonglong *local_120;
  int local_118;
  undefined4 local_114;
  byte local_110;
  longlong **local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  int local_e0;
  undefined1 local_d8 [24];
  int local_c0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  int local_90;
  undefined1 local_88 [24];
  int local_70;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar14 = *(longlong *)(*param_2 + 0x28);
  puVar4 = *(ulonglong **)(*param_2 + 0x20);
  bVar1 = *(byte *)(lVar14 + 0x70);
  local_114 = (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x178))();
  local_128 = *(longlong *)(lVar14 + 0x78);
  local_118 = *(int *)(local_128 + 0x34);
  local_120 = puVar4;
  local_110 = bVar1;
  if ((int)puVar4[1] < 1) goto LAB_149160c9e;
  lVar17 = ((undefined8 *)*param_2)[1];
  puVar4 = *(ulonglong **)*param_2;
  bVar1 = *(byte *)(lVar17 + 0x70);
  local_134 = (**(code **)(**(longlong **)(lVar17 + 0x78) + 0x178))();
  plVar5 = *(longlong **)(lVar17 + 0x78);
  local_138 = *(int *)((longlong)plVar5 + 0x34);
  uVar6 = *(undefined8 *)(lVar14 + 0x78);
  local_148 = plVar5;
  local_140 = puVar4;
  local_130 = bVar1;
  FUN_14915d2b6(&local_98,&local_148,lVar17);
  FUN_14915d2b6(&local_e8,&local_128);
  iVar15 = local_90 - local_64;
  local_158 = 0;
  uStack_150 = 0;
  local_e0 = local_e0 - local_b4;
  if (local_e0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_e0);
  }
  if (local_e0 != 0) {
    FUN_14481578e(&local_158);
  }
  puStack_100 = local_d8;
  local_108 = (longlong **)&DAT_100000000;
  local_f8 = 0xffffffff;
  uStack_f0 = 0;
  local_1a0 = uVar6;
  if (local_c0 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_108);
    iVar10 = local_c0;
  }
  uStack_160 = CONCAT44(uStack_ec,uStack_f0);
  local_168 = local_f8;
  uVar6 = local_168;
  local_178 = local_108;
  puStack_170 = puStack_100;
  local_168._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
  iVar9 = local_168._4_4_;
  local_180 = &local_e8;
  if ((local_168._4_4_ != iVar10) || (local_168 = uVar6, puStack_100 != local_d8)) {
    do {
      local_168 = uVar6;
      uVar22 = uStack_150;
      plVar7 = *local_180;
      if (local_90 != local_64) {
        uVar16 = *(uint *)(plVar7 + (longlong)iVar9 * 2);
        puVar11 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar11 = local_60;
        }
        for (iVar2 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & uVar16) * 4); iVar2 != -1;
            iVar2 = (int)local_98[(longlong)iVar2 * 2 + 1]) {
          if (*(uint *)(local_98 + (longlong)iVar2 * 2) == uVar16) goto LAB_149160f1e;
        }
      }
      if ((iVar15 < -1) || (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x38) <= iVar15)) {
        local_108 = (longlong **)CONCAT35(local_108._5_3_,0x100000001);
        FUN_1444879a2();
        iVar15 = iVar15 + 1;
        break;
      }
      lVar14 = (longlong)(int)uStack_150;
      uVar16 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
      if (uStack_150._4_4_ < uVar16) {
        FUN_1446f48e2(&local_158,uVar22 & 0xffffffff);
      }
      *(undefined4 *)(local_158 + lVar14 * 4) =
           *(undefined4 *)((longlong)plVar7 + (longlong)iVar9 * 0x10 + 4);
      iVar15 = iVar15 + 1;
LAB_149160f1e:
      local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
      FUN_1449c0562(&local_178);
      bVar23 = local_168._4_4_ != iVar10;
      iVar9 = local_168._4_4_;
      uVar6 = local_168;
    } while (local_180 != &local_e8 || (puStack_170 != local_d8 || bVar23));
  }
  uVar16 = *(int *)((longlong)plVar5 + 0x34) * (int)plVar5[6];
  if (uVar16 == 0) {
    lVar14 = *(longlong *)(param_1 + 0xc0);
    if (*(int *)(lVar14 + 0x38) < iVar15 || iVar15 < 0) goto LAB_149160e30;
    uStack_190 = 0;
    uVar20 = (uint)local_140[1];
LAB_149161002:
    local_198 = (void *)0x0;
    _Size = 0;
LAB_149161007:
    local_1a4 = 0;
    memset(local_198,0,_Size);
    if (0 < (int)uVar20) {
      uVar22 = 0;
      pvVar21 = local_198;
      do {
        if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
          (**(code **)(*plVar5 + 0x160))(plVar5);
        }
        else {
          memset(pvVar21,0,(longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
        }
        if ((int)local_140[1] == 0) {
          _Src = (void *)0x0;
        }
        else {
          if ((local_130 & 1) == 0) {
            uVar12 = *local_140;
          }
          else {
            uVar12 = *local_140;
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)local_140 + ((longlong)uVar12 >> 0x18);
            }
          }
          _Src = (void *)((longlong)local_138 * uVar22 + uVar12);
        }
        if (pvVar21 != _Src) {
          if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar5 + 0x100))(plVar5,pvVar21,_Src,(int)plVar5[6]);
          }
          else {
            memcpy(pvVar21,_Src,
                   (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
          }
        }
        pvVar21 = (void *)((longlong)pvVar21 +
                          (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]);
        uVar22 = uVar22 + 1;
      } while (uVar20 != uVar22);
    }
    FUN_144a8a902(&local_148,0);
    puStack_100 = local_88;
    local_108 = (longlong **)&DAT_100000000;
    local_f8 = 0xffffffff;
    uStack_f0 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_108);
      local_1a4 = local_70;
    }
    local_168 = local_f8;
    uVar6 = local_168;
    uStack_160 = CONCAT44(uStack_ec,uStack_f0);
    local_178 = local_108;
    puStack_170 = puStack_100;
    local_180 = &local_98;
    local_168._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    if ((local_168._4_4_ != local_1a4) || (puStack_100 != local_88)) {
      iVar15 = local_168._4_4_;
      local_168 = uVar6;
      do {
        plVar7 = *local_180;
        puStack_100 = (undefined1 *)CONCAT44(puStack_100._4_4_,1);
        local_108 = &local_148;
        iVar10 = FUN_144a482cc(&local_148,&local_108);
        FUN_144ae1314(&local_148,iVar10,1);
        if ((int)local_140[1] == 0) {
          lVar14 = 0;
        }
        else {
          if ((local_130 & 1) == 0) {
            uVar22 = *local_140;
          }
          else {
            uVar22 = *local_140;
            if ((uVar22 & 1) != 0) {
              uVar22 = (longlong)local_140 + ((longlong)uVar22 >> 0x18);
            }
          }
          lVar14 = (longlong)local_138 * (longlong)iVar10 + uVar22;
        }
        FUN_14446f40e(plVar5,lVar14,plVar5,
                      (longlong)
                      ((int)plVar5[6] * *(int *)((longlong)plVar7 + (longlong)iVar15 * 0x10 + 4) *
                      *(int *)((longlong)plVar5 + 0x34)) + (longlong)local_198);
        local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
        FUN_1449c0562(&local_178);
        iVar15 = local_168._4_4_;
        uVar6 = local_168;
      } while (local_180 != &local_98 || (puStack_170 != local_88 || local_168._4_4_ != local_1a4));
    }
    local_168 = uVar6;
    pvVar21 = local_198;
    if (0 < (int)uVar20) {
      do {
        if ((*(byte *)((longlong)plVar5 + 0x3c) & 0x10) == 0) {
          (**(code **)(*plVar5 + 0x148))(plVar5,pvVar21);
        }
        uVar20 = uVar20 - 1;
        pvVar21 = (void *)((longlong)pvVar21 +
                          (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]);
      } while (uVar20 != 0);
    }
    lVar14 = local_158;
    uVar6 = local_1a0;
    lVar17 = (longlong)(int)uStack_150;
    if (lVar17 != 0) {
      lVar19 = 0;
      do {
        local_178 = (longlong **)CONCAT44(local_178._4_4_,1);
        local_180 = &local_148;
        iVar15 = FUN_144a482cc(&local_148,&local_180);
        FUN_144ae1314(&local_148,iVar15,1);
        if ((int)local_120[1] == 0) {
          lVar18 = 0;
        }
        else {
          if ((local_110 & 1) == 0) {
            uVar22 = *local_120;
          }
          else {
            uVar22 = *local_120;
            if ((uVar22 & 1) != 0) {
              uVar22 = (longlong)local_120 + ((longlong)uVar22 >> 0x18);
            }
          }
          lVar18 = (longlong)local_118 * (longlong)*(int *)(lVar14 + lVar19) + uVar22;
        }
        if ((int)local_140[1] == 0) {
          lVar13 = 0;
        }
        else {
          if ((local_130 & 1) == 0) {
            uVar22 = *local_140;
          }
          else {
            uVar22 = *local_140;
            if ((uVar22 & 1) != 0) {
              uVar22 = (longlong)local_140 + ((longlong)uVar22 >> 0x18);
            }
          }
          lVar13 = (longlong)local_138 * (longlong)iVar15 + uVar22;
        }
        FUN_14446f40e(plVar5,lVar13,uVar6,lVar18);
        lVar19 = lVar19 + 4;
      } while (lVar17 * 4 != lVar19);
    }
    if (local_198 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0xc0);
    if (*(int *)(lVar14 + 0x38) < iVar15 || iVar15 < 0) {
LAB_149160e30:
      local_180 = (longlong **)CONCAT35(local_180._5_3_,0x100000001);
      FUN_1444879a2(lVar14,&local_180,iVar15);
    }
    else {
      uVar3 = (uint)local_140[1];
      uVar20 = -uVar3;
      if ((int)-uVar3 < 0) {
        uVar20 = uVar3;
      }
      uVar8 = -uVar16;
      if ((int)-uVar16 < 0) {
        uVar8 = uVar16;
      }
      if (uVar20 <= (0x7fffffffU - ((int)(uVar3 ^ uVar16) >> 0x1f)) / uVar8) {
        local_198 = (void *)0x0;
        uVar20 = (uint)local_140[1];
        uStack_190 = (ulonglong)(uVar16 * uVar3);
        if (uVar3 == 0) goto LAB_149161002;
        FUN_1400ef140(&local_198);
        _Size = (size_t)(int)(uVar16 * uVar3);
        goto LAB_149161007;
      }
    }
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&local_e8);
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&local_98);
LAB_149160c9e:
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491614b6 FUN_1491614b6 body=157 status=ok
// SIG undefined FUN_1491614b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1491614b6(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04950) {
    FUN_144b3d300(&DAT_14cc04950);
    if (DAT_14cc04950 == -1) {
      _DAT_14cc04920 = DAT_14cc04330;
      uRam000000014cc04928 = _DAT_14cc04338;
      _DAT_14cc04930 = DAT_14cc04390;
      uRam000000014cc04938 = _DAT_14cc04398;
      _DAT_14cc04940 = (undefined4)DAT_14cc043d0;
      uRam000000014cc04944 = DAT_14cc043d0._4_4_;
      uRam000000014cc04948 = DAT_14cc043d8;
      uRam000000014cc0494c = _DAT_14cc043dc;
      _Init_thread_footer(&DAT_14cc04950);
    }
  }
  FUN_1446f57c6(&DAT_14cc04920 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149161554 FUN_149161554 body=768 status=ok
// SIG undefined FUN_149161554(void)

/* WARNING: Removing unreachable block (ram,0x0001491617f0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00014916167c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_149161554(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04968) && (FUN_144b3d300(&DAT_14cc04968), DAT_14cc04968 == -1)) {
    DAT_14cc04958 = 0;
    _DAT_14cc04960 = 0;
    atexit(FUN_144483ca6);
    _Init_thread_footer(&DAT_14cc04968);
  }
  if (DAT_14cc04960 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04960;
    lVar5 = (longlong)DAT_14cc04960;
    uVar4 = DAT_14cc04960 + 1;
    _DAT_14cc04960 = CONCAT44(DAT_14cc04964,uVar4);
    if (DAT_14cc04964 < uVar4) {
      FUN_1490f2336(&DAT_14cc04958,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04958;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04958 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04390,local_70);
    FUN_14915cfe8(&local_68,local_70,0);
    uVar3 = _DAT_14cc04960;
    lVar5 = (longlong)DAT_14cc04960;
    uVar4 = DAT_14cc04960 + 1;
    _DAT_14cc04960 = CONCAT44(DAT_14cc04964,uVar4);
    if (DAT_14cc04964 < uVar4) {
      FUN_1490f2336(&DAT_14cc04958,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04958;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04958 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc043d0,local_70);
    FUN_14915cfe8(&local_68,local_70,1);
    uVar3 = _DAT_14cc04960;
    lVar5 = (longlong)DAT_14cc04960;
    uVar4 = DAT_14cc04960 + 1;
    _DAT_14cc04960 = CONCAT44(DAT_14cc04964,uVar4);
    if (DAT_14cc04964 < uVar4) {
      FUN_1490f2336(&DAT_14cc04958,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04958;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04958 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))(&local_38);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04958;
}



// FUNCTION 149161856 FUN_149161856 body=1654 status=ok
// SIG undefined FUN_149161856(void)

void FUN_149161856(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined1 *puStack_180;
  uint local_178;
  int iStack_174;
  undefined8 uStack_170;
  longlong local_168;
  ulonglong *local_160;
  int local_158;
  undefined4 local_154;
  byte local_150;
  longlong local_148;
  ulonglong *local_140;
  int local_138;
  undefined4 local_134;
  byte local_130;
  longlong local_128;
  ulonglong *local_120;
  int local_118;
  undefined4 local_114;
  byte local_110;
  longlong *local_108;
  undefined1 *puStack_100;
  uint local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  int local_e0;
  undefined1 local_d8 [24];
  int local_c0;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined1 local_88 [24];
  int local_70;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar11 = ((undefined8 *)*param_2)[1];
  puVar4 = *(ulonglong **)*param_2;
  bVar1 = *(byte *)(lVar11 + 0x70);
  local_114 = (**(code **)(**(longlong **)(lVar11 + 0x78) + 0x178))();
  local_128 = *(longlong *)(lVar11 + 0x78);
  local_118 = *(int *)(local_128 + 0x34);
  lVar13 = *(longlong *)(*param_2 + 0x28);
  puVar5 = *(ulonglong **)(*param_2 + 0x20);
  bVar2 = *(byte *)(lVar13 + 0x70);
  local_120 = puVar4;
  local_110 = bVar1;
  local_134 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x178))();
  local_148 = *(longlong *)(lVar13 + 0x78);
  local_138 = *(int *)(local_148 + 0x34);
  lVar6 = *(longlong *)(*param_2 + 0x48);
  puVar4 = *(ulonglong **)(*param_2 + 0x40);
  bVar1 = *(byte *)(lVar6 + 0x70);
  local_140 = puVar5;
  local_130 = bVar2;
  local_154 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x178))();
  lVar6 = *(longlong *)(lVar6 + 0x78);
  local_158 = *(int *)(lVar6 + 0x34);
  uVar7 = *(undefined8 *)(lVar11 + 0x78);
  local_198 = *(undefined8 *)(lVar13 + 0x78);
  local_168 = lVar6;
  local_160 = puVar4;
  local_150 = bVar1;
  FUN_144a8a902(&local_168,0);
  FUN_14915d2b6(&local_98,&local_128,lVar11);
  FUN_14915d2b6(&local_e8,&local_148,lVar13);
  puStack_100 = local_88;
  local_108 = (longlong *)&DAT_100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  uStack_f0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_108);
    iVar12 = local_70;
  }
  local_178 = local_f8;
  iStack_174 = iStack_f4;
  uStack_170 = CONCAT44(uStack_ec,uStack_f0);
  local_188 = local_108;
  puStack_180 = puStack_100;
  local_190 = &local_98;
  if ((iStack_f4 != iVar12) || (puStack_100 != local_88)) {
    do {
      lVar11 = *local_190;
      lVar13 = (longlong)iStack_174;
      if (local_e0 != local_b4) {
        uVar3 = *(uint *)(lVar11 + lVar13 * 0x10);
        puVar10 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar10 = local_b0;
        }
        for (iVar8 = *(int *)(puVar10 + (ulonglong)(local_a0 - 1U & uVar3) * 4); iVar8 != -1;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + local_e8 + 8)) {
          if (*(uint *)(local_e8 + (longlong)iVar8 * 0x10) == uVar3) goto LAB_149161c13;
        }
      }
      puStack_100 = (undefined1 *)CONCAT44(puStack_100._4_4_,1);
      local_108 = &local_168;
      iVar8 = FUN_144a482cc(&local_168,&local_108);
      FUN_144ae1314(&local_168,iVar8,1);
      if ((int)local_120[1] == 0) {
        lVar11 = 0;
      }
      else {
        if ((local_110 & 1) == 0) {
          uVar9 = *local_120;
        }
        else {
          uVar9 = *local_120;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)local_120 + ((longlong)uVar9 >> 0x18);
          }
        }
        lVar11 = (longlong)local_118 * (longlong)*(int *)(lVar11 + lVar13 * 0x10 + 4) + uVar9;
      }
      if ((int)local_160[1] == 0) {
        lVar13 = 0;
      }
      else {
        if ((local_150 & 1) == 0) {
          uVar9 = *local_160;
        }
        else {
          uVar9 = *local_160;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)local_160 + ((longlong)uVar9 >> 0x18);
          }
        }
        lVar13 = (longlong)local_158 * (longlong)iVar8 + uVar9;
      }
      FUN_14446f40e(lVar6,lVar13,uVar7,lVar11);
LAB_149161c13:
      local_178 = local_178 & ~local_188._4_4_;
      FUN_1449c0562(&local_188);
    } while (local_190 != &local_98 || (puStack_180 != local_88 || iStack_174 != iVar12));
  }
  local_108 = (longlong *)&DAT_100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  uStack_f0 = 0;
  puStack_100 = local_d8;
  if (local_c0 == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_108);
    iVar12 = local_c0;
  }
  uStack_170 = CONCAT44(uStack_ec,uStack_f0);
  local_178 = local_f8;
  iStack_174 = iStack_f4;
  local_188 = local_108;
  puStack_180 = puStack_100;
  local_190 = &local_e8;
  if ((iStack_f4 != iVar12) || (puStack_100 != local_d8)) {
    do {
      lVar11 = *local_190;
      lVar13 = (longlong)iStack_174;
      if (local_90 != local_64) {
        uVar3 = *(uint *)(lVar11 + lVar13 * 0x10);
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_60;
        }
        for (iVar8 = *(int *)(puVar10 + (ulonglong)(local_50 - 1U & uVar3) * 4); iVar8 != -1;
            iVar8 = *(int *)((longlong)iVar8 * 0x10 + local_98 + 8)) {
          if (*(uint *)(local_98 + (longlong)iVar8 * 0x10) == uVar3) goto LAB_149161dd4;
        }
      }
      puStack_100 = (undefined1 *)CONCAT44(puStack_100._4_4_,1);
      local_108 = &local_168;
      iVar8 = FUN_144a482cc(&local_168,&local_108);
      FUN_144ae1314(&local_168,iVar8,1);
      if ((int)local_140[1] == 0) {
        lVar11 = 0;
      }
      else {
        if ((local_130 & 1) == 0) {
          uVar9 = *local_140;
        }
        else {
          uVar9 = *local_140;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)local_140 + ((longlong)uVar9 >> 0x18);
          }
        }
        lVar11 = (longlong)local_138 * (longlong)*(int *)(lVar11 + lVar13 * 0x10 + 4) + uVar9;
      }
      if ((int)local_160[1] == 0) {
        lVar13 = 0;
      }
      else {
        if ((local_150 & 1) == 0) {
          uVar9 = *local_160;
        }
        else {
          uVar9 = *local_160;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)local_160 + ((longlong)uVar9 >> 0x18);
          }
        }
        lVar13 = (longlong)local_158 * (longlong)iVar8 + uVar9;
      }
      FUN_14446f40e(lVar6,lVar13,local_198,lVar11);
LAB_149161dd4:
      local_178 = local_178 & ~local_188._4_4_;
      FUN_1449c0562(&local_188);
    } while (local_190 != &local_e8 || (puStack_180 != local_d8 || iStack_174 != iVar12));
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&local_e8);
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&local_98);
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149161ece FUN_149161ece body=986 status=ok
// SIG undefined FUN_149161ece(void)

void FUN_149161ece(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [40];
  undefined8 local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  uint local_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  ulonglong *local_160;
  int local_158;
  undefined4 local_154;
  byte local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  longlong local_128;
  ulonglong *local_120;
  int local_118;
  undefined4 local_114;
  byte local_110;
  longlong *local_108;
  undefined1 *local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  int local_e0;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98 [2];
  undefined1 local_88 [24];
  int local_70;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar12 = ((undefined8 *)*param_2)[1];
  puVar4 = *(ulonglong **)*param_2;
  bVar1 = *(byte *)(lVar12 + 0x70);
  local_114 = (**(code **)(**(longlong **)(lVar12 + 0x78) + 0x178))();
  local_128 = *(longlong *)(lVar12 + 0x78);
  local_118 = *(int *)(local_128 + 0x34);
  lVar9 = *(longlong *)(*param_2 + 0x28);
  uVar5 = *(undefined8 *)(*param_2 + 0x20);
  uVar2 = *(undefined1 *)(lVar9 + 0x70);
  local_120 = puVar4;
  local_110 = bVar1;
  local_134 = (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x178))();
  local_148 = *(longlong *)(lVar9 + 0x78);
  local_138 = *(undefined4 *)(local_148 + 0x34);
  lVar6 = *(longlong *)(*param_2 + 0x48);
  puVar4 = *(ulonglong **)(*param_2 + 0x40);
  bVar1 = *(byte *)(lVar6 + 0x70);
  local_140 = uVar5;
  local_130 = uVar2;
  local_154 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x178))();
  local_198 = *(longlong *)(lVar6 + 0x78);
  local_158 = *(int *)(local_198 + 0x34);
  local_1a0 = *(undefined8 *)(lVar12 + 0x78);
  local_168 = local_198;
  local_160 = puVar4;
  local_150 = bVar1;
  FUN_144a8a902(&local_168,0);
  FUN_14915d2b6(local_98,&local_128,lVar12);
  FUN_14915d2b6(&local_e8,&local_148,lVar9);
  local_108 = (longlong *)&DAT_100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  local_f0 = 0;
  iVar11 = 0;
  local_100 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_108);
    iVar11 = local_70;
  }
  local_178 = local_f8;
  iStack_174 = iStack_f4;
  local_170 = local_f0;
  local_16c = local_ec;
  local_188 = local_108;
  local_180 = local_100;
  local_190 = local_98;
  if ((iStack_f4 != iVar11) || (local_100 != local_88)) {
    do {
      if (local_e0 != local_b4) {
        lVar12 = *local_190;
        lVar9 = (longlong)iStack_174;
        uVar3 = *(uint *)(lVar12 + lVar9 * 0x10);
        puVar10 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar10 = local_b0;
        }
        iVar7 = *(int *)(puVar10 + (ulonglong)(local_a0 - 1U & uVar3) * 4);
        if (iVar7 != -1) {
          do {
            if (*(uint *)(local_e8 + (longlong)iVar7 * 0x10) == uVar3) {
              local_100 = (undefined1 *)CONCAT44(local_100._4_4_,1);
              local_108 = &local_168;
              iVar7 = FUN_144a482cc(&local_168,&local_108);
              FUN_144ae1314(&local_168,iVar7,1);
              if ((int)local_120[1] == 0) {
                lVar12 = 0;
              }
              else {
                if ((local_110 & 1) == 0) {
                  uVar8 = *local_120;
                }
                else {
                  uVar8 = *local_120;
                  if ((uVar8 & 1) != 0) {
                    uVar8 = (longlong)local_120 + ((longlong)uVar8 >> 0x18);
                  }
                }
                lVar12 = (longlong)local_118 * (longlong)*(int *)(lVar12 + lVar9 * 0x10 + 4) + uVar8
                ;
              }
              if ((int)local_160[1] == 0) {
                lVar9 = 0;
              }
              else {
                if ((local_150 & 1) == 0) {
                  uVar8 = *local_160;
                }
                else {
                  uVar8 = *local_160;
                  if ((uVar8 & 1) != 0) {
                    uVar8 = (longlong)local_160 + ((longlong)uVar8 >> 0x18);
                  }
                }
                lVar9 = (longlong)local_158 * (longlong)iVar7 + uVar8;
              }
              FUN_14446f40e(local_198,lVar9,local_1a0,lVar12);
              break;
            }
            iVar7 = *(int *)((longlong)iVar7 * 0x10 + local_e8 + 8);
          } while (iVar7 != -1);
        }
      }
      local_178 = local_178 & ~local_188._4_4_;
      FUN_1449c0562(&local_188);
    } while (local_190 != local_98 || (local_180 != local_88 || iStack_174 != iVar11));
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1409da246(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(local_98);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491622aa FUN_1491622aa body=202 status=ok
// SIG undefined FUN_1491622aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1491622aa(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc049d0) {
    FUN_144b3d300(&DAT_14cc049d0);
    if (DAT_14cc049d0 == -1) {
      _DAT_14cc04970 = DAT_14cc04330;
      uRam000000014cc04978 = _DAT_14cc04338;
      _DAT_14cc04980 = DAT_14cc04370;
      uRam000000014cc04988 = _DAT_14cc04378;
      _DAT_14cc04990 = DAT_14cc04360;
      uRam000000014cc04998 = _DAT_14cc04368;
      _DAT_14cc049a0 = DAT_14cc043b0;
      uRam000000014cc049a8 = _DAT_14cc043b8;
      _DAT_14cc049b0 = DAT_14cc043c0;
      uRam000000014cc049b8 = _DAT_14cc043c8;
      _DAT_14cc049c0 = (undefined4)DAT_14cc00da0;
      uRam000000014cc049c4 = DAT_14cc00da0._4_4_;
      uRam000000014cc049c8 = DAT_14cc00da8;
      uRam000000014cc049cc = _DAT_14cc00dac;
      _Init_thread_footer(&DAT_14cc049d0);
    }
  }
  FUN_1446f57c6(&DAT_14cc04970 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149162374 FUN_149162374 body=1238 status=ok
// SIG undefined FUN_149162374(void)

/* WARNING: Removing unreachable block (ram,0x000149162784) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x00014916249e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_149162374(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc049e8) && (FUN_144b3d300(&DAT_14cc049e8), DAT_14cc049e8 == -1)) {
    DAT_14cc049d8 = 0;
    _DAT_14cc049e0 = 0;
    atexit(FUN_144483f4a);
    _Init_thread_footer(&DAT_14cc049e8);
  }
  if (DAT_14cc049e0 == 0) {
    FUN_1446f57c6(&DAT_14cc04330,local_80);
    FUN_14915cfe8(&local_78,local_80,0);
    uVar4 = _DAT_14cc049e0;
    lVar6 = (longlong)DAT_14cc049e0;
    uVar5 = DAT_14cc049e0 + 1;
    _DAT_14cc049e0 = CONCAT44(DAT_14cc049e4,uVar5);
    if (DAT_14cc049e4 < uVar5) {
      FUN_1490f2336(&DAT_14cc049d8,uVar4 & 0xffffffff);
    }
    lVar3 = DAT_14cc049d8;
    lVar6 = lVar6 * 0x50;
    *(undefined1 *)(DAT_14cc049d8 + 8 + lVar6) = local_70;
    *(undefined8 *)(lVar3 + lVar6) = local_78;
    *(longlong *)(lVar3 + 0x10 + lVar6) = local_68;
    *(undefined8 *)(lVar3 + 0x20 + lVar6) = local_58;
    local_58 = 0;
    puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar6);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar6);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    if ((*(longlong *)(lVar3 + 0x10 + lVar6) == 0) && (local_68 != 0)) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04370,local_80);
    FUN_14915cfe8(&local_78,local_80,1);
    uVar4 = _DAT_14cc049e0;
    lVar6 = (longlong)DAT_14cc049e0;
    uVar5 = DAT_14cc049e0 + 1;
    _DAT_14cc049e0 = CONCAT44(DAT_14cc049e4,uVar5);
    if (DAT_14cc049e4 < uVar5) {
      FUN_1490f2336(&DAT_14cc049d8,uVar4 & 0xffffffff);
    }
    lVar3 = DAT_14cc049d8;
    lVar6 = lVar6 * 0x50;
    *(undefined1 *)(DAT_14cc049d8 + 8 + lVar6) = local_70;
    *(undefined8 *)(lVar3 + lVar6) = local_78;
    *(longlong *)(lVar3 + 0x10 + lVar6) = local_68;
    *(undefined8 *)(lVar3 + 0x20 + lVar6) = local_58;
    local_58 = 0;
    puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar6);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar6);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    if ((*(longlong *)(lVar3 + 0x10 + lVar6) == 0) && (local_68 != 0)) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc04360,local_80);
    FUN_14915cfe8(&local_78,local_80,1);
    uVar4 = _DAT_14cc049e0;
    lVar6 = (longlong)DAT_14cc049e0;
    uVar5 = DAT_14cc049e0 + 1;
    _DAT_14cc049e0 = CONCAT44(DAT_14cc049e4,uVar5);
    if (DAT_14cc049e4 < uVar5) {
      FUN_1490f2336(&DAT_14cc049d8,uVar4 & 0xffffffff);
    }
    lVar3 = DAT_14cc049d8;
    lVar6 = lVar6 * 0x50;
    *(undefined1 *)(DAT_14cc049d8 + 8 + lVar6) = local_70;
    *(undefined8 *)(lVar3 + lVar6) = local_78;
    *(longlong *)(lVar3 + 0x10 + lVar6) = local_68;
    *(undefined8 *)(lVar3 + 0x20 + lVar6) = local_58;
    local_58 = 0;
    puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar6);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar6);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    if ((*(longlong *)(lVar3 + 0x10 + lVar6) == 0) && (local_68 != 0)) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc043b0,local_80);
    FUN_14915cfe8(&local_78,local_80,1);
    uVar4 = _DAT_14cc049e0;
    lVar6 = (longlong)DAT_14cc049e0;
    uVar5 = DAT_14cc049e0 + 1;
    _DAT_14cc049e0 = CONCAT44(DAT_14cc049e4,uVar5);
    if (DAT_14cc049e4 < uVar5) {
      FUN_1490f2336(&DAT_14cc049d8,uVar4 & 0xffffffff);
    }
    lVar3 = DAT_14cc049d8;
    lVar6 = lVar6 * 0x50;
    *(undefined1 *)(DAT_14cc049d8 + 8 + lVar6) = local_70;
    *(undefined8 *)(lVar3 + lVar6) = local_78;
    *(longlong *)(lVar3 + 0x10 + lVar6) = local_68;
    *(undefined8 *)(lVar3 + 0x20 + lVar6) = local_58;
    local_58 = 0;
    puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar6);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar6);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    if ((*(longlong *)(lVar3 + 0x10 + lVar6) == 0) && (local_68 != 0)) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
    FUN_1446f57c6(&DAT_14cc043c0,local_80);
    FUN_14915cfe8(&local_78,local_80,1);
    uVar4 = _DAT_14cc049e0;
    lVar6 = (longlong)DAT_14cc049e0;
    uVar5 = DAT_14cc049e0 + 1;
    _DAT_14cc049e0 = CONCAT44(DAT_14cc049e4,uVar5);
    if (DAT_14cc049e4 < uVar5) {
      FUN_1490f2336(&DAT_14cc049d8,uVar4 & 0xffffffff);
    }
    lVar3 = DAT_14cc049d8;
    lVar6 = lVar6 * 0x50;
    *(undefined1 *)(DAT_14cc049d8 + 8 + lVar6) = local_70;
    *(undefined8 *)(lVar3 + lVar6) = local_78;
    *(longlong *)(lVar3 + 0x10 + lVar6) = local_68;
    *(undefined8 *)(lVar3 + 0x20 + lVar6) = local_58;
    local_58 = 0;
    puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar6);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar6);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    if ((*(longlong *)(lVar3 + 0x10 + lVar6) == 0) && (local_68 != 0)) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))(&local_48);
    }
    uVar4 = _DAT_14cc049e0;
    lVar6 = (longlong)DAT_14cc049e0;
    uVar5 = DAT_14cc049e0 + 1;
    _DAT_14cc049e0 = CONCAT44(DAT_14cc049e4,uVar5);
    if (DAT_14cc049e4 < uVar5) {
      FUN_1490f2336(&DAT_14cc049d8,uVar4 & 0xffffffff);
    }
    uVar2 = DAT_14c764f18;
    lVar6 = lVar6 * 0x50 + DAT_14cc049d8;
    FUN_1446f57c6(&DAT_14cc00da0,&local_78);
    FUN_144478fc0(lVar6,local_78,4,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc049d8;
}



// FUNCTION 14916284c FUN_14916284c body=356 status=ok
// SIG undefined FUN_14916284c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14916284c(void)

{
  void *pvVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04a00) {
    FUN_144b3d300(&DAT_14cc04a00);
    if (DAT_14cc04a00 == -1) {
      DAT_14cc049f0 = (void *)0x0;
      _DAT_14cc049f8 = 0;
      atexit((_func_5014 *)&LAB_144483f7b);
      _Init_thread_footer(&DAT_14cc04a00);
    }
  }
  if (DAT_14cc049f8 == 0) {
    FUN_14915d58a();
    uVar3 = DAT_14cc045f8;
    pvVar1 = DAT_14cc045f0;
    lVar4 = (longlong)(int)DAT_14cc045f8;
    _DAT_14cc049f8 = CONCAT44(DAT_14cc049fc,DAT_14cc045f8);
    if (DAT_14cc045f8 == 0 && DAT_14cc049fc == 0) {
      _DAT_14cc049f8 = (ulonglong)DAT_14cc045f8;
    }
    else {
      FUN_1490f2264(&DAT_14cc049f0,DAT_14cc045f8);
      if (uVar3 != 0) {
        memcpy(DAT_14cc049f0,pvVar1,lVar4 << 4);
      }
    }
    uVar2 = _DAT_14cc049f8;
    lVar4 = (longlong)DAT_14cc049f8;
    uVar3 = DAT_14cc049f8 + 1;
    _DAT_14cc049f8 = CONCAT44(DAT_14cc049fc,uVar3);
    if (DAT_14cc049fc < uVar3) {
      FUN_149157a6e(&DAT_14cc049f0,uVar2 & 0xffffffff);
    }
    pvVar1 = DAT_14cc049f0;
    lVar4 = lVar4 * 0x10;
    FUN_1446f57c6(&DAT_14cc00db0,&local_28);
    *(undefined8 *)((longlong)pvVar1 + lVar4) = local_28;
    *(undefined1 *)((longlong)pvVar1 + lVar4 + 8) = 1;
    *(undefined4 *)((longlong)pvVar1 + lVar4 + 0xc) = 0xffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc049f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491629b2 FUN_1491629b2 body=230 status=ok
// SIG undefined FUN_1491629b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1491629b2(void)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04a18) {
    FUN_144b3d300(&DAT_14cc04a18);
    if (DAT_14cc04a18 == -1) {
      FUN_1446f57c6(&DAT_14cc00d40,&local_20);
      FUN_1446f57c6(&DAT_14cc00db0,&uStack_18);
      DAT_14cc04a08 = (undefined8 *)0x0;
      _DAT_14cc04a10 = 2;
      FUN_1401b309e(&DAT_14cc04a08,2,0);
      puVar1 = DAT_14cc04a08;
      *DAT_14cc04a08 = local_20;
      puVar1[1] = uStack_18;
      atexit((_func_5014 *)&LAB_144483f8c);
      _Init_thread_footer(&DAT_14cc04a18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc04a08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149162aaa FUN_149162aaa body=390 status=ok
// SIG undefined FUN_149162aaa(void)

void FUN_149162aaa(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar11 = *(ulonglong **)*param_2;
  lVar3 = ((undefined8 *)*param_2)[1];
  bVar1 = *(byte *)(lVar3 + 0x70);
  (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x34);
  lVar10 = *param_2;
  piVar4 = *(int **)(lVar10 + 0x40);
  piVar5 = *(int **)(lVar10 + 0x60);
  pfVar6 = *(float **)(lVar10 + 0x80);
  plVar7 = *(longlong **)(lVar10 + 0xa0);
  if (*plVar7 == 0) {
    local_58 = puVar11;
    FUN_1446f57c6(&DAT_14cc00d40,&local_50);
    *plVar7 = local_50;
    *piVar5 = (int)local_58[1];
    *piVar4 = -1;
    *pfVar6 = 0.0;
    puVar11 = local_58;
  }
  iVar8 = *piVar4 + 1;
  *piVar4 = iVar8;
  iVar9 = *piVar5;
  if (0 < iVar9) {
    *pfVar6 = (float)iVar8 / (float)(iVar9 + -1);
    iVar8 = *piVar4;
    iVar9 = *piVar5;
  }
  if (iVar9 <= iVar8) {
    FUN_1446f57c6(&DAT_14cc00db0,&local_50);
    *plVar7 = local_50;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  if ((int)puVar11[1] == 0) {
    lVar10 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      uVar12 = *puVar11;
    }
    else {
      uVar12 = *puVar11;
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)puVar11 + ((longlong)uVar12 >> 0x18);
      }
    }
    lVar10 = (longlong)iVar8 * (longlong)iVar2 + uVar12;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78,*(undefined8 *)(*param_2 + 0x20),
                  *(undefined8 *)(lVar3 + 0x78),lVar10);
  }
  FUN_14446f40e(*(undefined8 *)(*param_2 + 0x28));
  return;
}



// FUNCTION 149162c44 FUN_149162c44 body=542 status=ok
// SIG undefined FUN_149162c44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149162c44(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04a30) {
    FUN_144b3d300(&DAT_14cc04a30);
    if (DAT_14cc04a30 == -1) {
      DAT_14cc04a20 = 0;
      _DAT_14cc04a28 = 0;
      atexit(FUN_1444849b4);
      _Init_thread_footer(&DAT_14cc04a30);
    }
  }
  if (DAT_14cc04a28 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04a48) {
      FUN_144b3d300(&DAT_14cc04a48);
      if (DAT_14cc04a48 == -1) {
        DAT_14cc04a38 = (undefined1 *)0x0;
        _DAT_14cc04a40 = 1;
        FUN_149157980(&DAT_14cc04a38,1,0);
        *DAT_14cc04a38 = 0xd;
        atexit((_func_5014 *)&LAB_1444849e5);
        _Init_thread_footer(&DAT_14cc04a48);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc04a28;
    uVar2 = DAT_14cc04a28 + 1;
    if (DAT_14cc04a2c < uVar2) {
      uVar4 = _DAT_14cc04a28 & 0xffffffff;
      DAT_14cc04a28 = uVar2;
      FUN_1490f2336(&DAT_14cc04a20,uVar4);
      uVar2 = DAT_14cc04a28;
    }
    DAT_14cc04a28 = uVar2;
    lVar5 = lVar5 * 0x50 + DAT_14cc04a20;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc00de0,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04a38);
    uVar2 = DAT_14cc04a28;
    lVar5 = (longlong)(int)DAT_14cc04a28;
    uVar3 = DAT_14cc04a28 + 1;
    _DAT_14cc04a28 = CONCAT44(DAT_14cc04a2c,uVar3);
    if (DAT_14cc04a2c < uVar3) {
      FUN_1490f2336(&DAT_14cc04a20,uVar2);
    }
    uVar1 = DAT_14c764f14;
    lVar5 = lVar5 * 0x50 + DAT_14cc04a20;
    FUN_1446f57c6(&DAT_14cc00df0,local_68);
    FUN_144478fc0(lVar5,local_68[0],1,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04a20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149162e64 FUN_149162e64 body=242 status=ok
// SIG undefined FUN_149162e64(void)

void FUN_149162e64(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  param_2 = (longlong *)*param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if (param_2[5] == 0) {
    return;
  }
  lVar1 = *param_2;
  puVar2 = (undefined4 *)param_2[4];
  if (puVar2 == (undefined4 *)0x0 || lVar1 == 0) {
    return;
  }
  lVar6 = plVar5[1];
  lVar4 = FUN_144a7add4();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar6 != 0;
    if (lVar6 != lVar4 && bVar7) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar7 = lVar6 != 0;
        if (lVar6 == lVar4) break;
      } while (lVar6 != 0);
    }
    if (!bVar7) goto LAB_149162f04;
LAB_149162eaf:
    plVar5 = (longlong *)plVar5[0xe];
LAB_149162eb3:
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x220))(plVar5,lVar1);
      goto LAB_149162ecb;
    }
  }
  else {
    if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_149162eaf;
LAB_149162f04:
    lVar6 = plVar5[1];
    lVar4 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar7 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar7) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar7 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (!bVar7) goto LAB_149162f4f;
      goto LAB_149162eb3;
    }
    if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_149162eb3;
  }
LAB_149162f4f:
  uVar3 = 0;
LAB_149162ecb:
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149162f56 FUN_149162f56 body=540 status=ok
// SIG undefined FUN_149162f56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149162f56(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04a60) {
    FUN_144b3d300(&DAT_14cc04a60);
    if (DAT_14cc04a60 == -1) {
      DAT_14cc04a50 = 0;
      _DAT_14cc04a58 = 0;
      atexit(FUN_144484c20);
      _Init_thread_footer(&DAT_14cc04a60);
    }
  }
  if (DAT_14cc04a58 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04a78) {
      FUN_144b3d300(&DAT_14cc04a78);
      if (DAT_14cc04a78 == -1) {
        DAT_14cc04a68 = (undefined1 *)0x0;
        _DAT_14cc04a70 = 1;
        FUN_149157980(&DAT_14cc04a68,1,0);
        *DAT_14cc04a68 = 0xd;
        atexit((_func_5014 *)&LAB_144484c51);
        _Init_thread_footer(&DAT_14cc04a78);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc04a58;
    uVar2 = DAT_14cc04a58 + 1;
    if (DAT_14cc04a5c < uVar2) {
      uVar4 = _DAT_14cc04a58 & 0xffffffff;
      DAT_14cc04a58 = uVar2;
      FUN_1490f2336(&DAT_14cc04a50,uVar4);
      uVar2 = DAT_14cc04a58;
    }
    DAT_14cc04a58 = uVar2;
    uVar1 = DAT_14c764f14;
    lVar5 = lVar5 * 0x50 + DAT_14cc04a50;
    FUN_1446f57c6(&DAT_14cc00de0,local_68);
    FUN_144478fc0(lVar5,local_68[0],0,uVar1);
    uVar2 = DAT_14cc04a58;
    lVar5 = (longlong)(int)DAT_14cc04a58;
    uVar3 = DAT_14cc04a58 + 1;
    _DAT_14cc04a58 = CONCAT44(DAT_14cc04a5c,uVar3);
    if (DAT_14cc04a5c < uVar3) {
      FUN_1490f2336(&DAT_14cc04a50,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04a50;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc00df0,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,1,&DAT_14cc04a68);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04a50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149163174 FUN_149163174 body=263 status=ok
// SIG undefined FUN_149163174(void)

void FUN_149163174(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  param_2 = (undefined8 *)*param_2;
  plVar4 = (longlong *)param_2[5];
  if (param_2[1] == 0 || plVar4 == (longlong *)0x0) {
    return;
  }
  piVar1 = (int *)*param_2;
  puVar2 = (undefined1 *)param_2[4];
  if (puVar2 == (undefined1 *)0x0 || piVar1 == (int *)0x0) {
    return;
  }
  lVar5 = plVar4[1];
  lVar3 = FUN_144a7add4();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar6 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (!bVar6) goto LAB_149163228;
LAB_1491631cf:
    plVar4 = (longlong *)plVar4[0xe];
  }
  else {
    if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1491631cf;
LAB_149163228:
    lVar5 = plVar4[1];
    lVar3 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_149163273;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_149163273;
  }
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001491631f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x1f8))(plVar4,puVar2,(longlong)*piVar1);
    return;
  }
LAB_149163273:
  *puVar2 = 0;
  return;
}



// FUNCTION 14916327c FUN_14916327c body=716 status=ok
// SIG undefined FUN_14916327c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14916327c(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04a90) {
    FUN_144b3d300(&DAT_14cc04a90);
    if (DAT_14cc04a90 == -1) {
      DAT_14cc04a80 = 0;
      _DAT_14cc04a88 = 0;
      atexit(FUN_144484e8c);
      _Init_thread_footer(&DAT_14cc04a90);
    }
  }
  if (DAT_14cc04a88 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04aa8) {
      FUN_144b3d300(&DAT_14cc04aa8);
      if (DAT_14cc04aa8 == -1) {
        DAT_14cc04a98 = (undefined1 *)0x0;
        _DAT_14cc04aa0 = 1;
        FUN_149157980(&DAT_14cc04a98,1,0);
        *DAT_14cc04a98 = 0x10;
        atexit((_func_5014 *)&LAB_144484ebd);
        _Init_thread_footer(&DAT_14cc04aa8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04ac0) {
      FUN_144b3d300(&DAT_14cc04ac0);
      if (DAT_14cc04ac0 == -1) {
        DAT_14cc04ab0 = 0;
        _DAT_14cc04ab8 = 0;
        atexit(FUN_144484ece);
        _Init_thread_footer(&DAT_14cc04ac0);
      }
    }
    lVar4 = (longlong)(int)DAT_14cc04ab8;
    uVar1 = DAT_14cc04ab8 + 1;
    if (DAT_14cc04abc < uVar1) {
      uVar3 = _DAT_14cc04ab8 & 0xffffffff;
      DAT_14cc04ab8 = uVar1;
      FUN_1490f2336(&DAT_14cc04ab0,uVar3);
      uVar1 = DAT_14cc04ab8;
    }
    DAT_14cc04ab8 = uVar1;
    lVar4 = lVar4 * 0x50 + DAT_14cc04ab0;
    local_68 = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc00e00,&local_70);
    local_78 = &local_68;
    FUN_144478fee(lVar4,local_70,0,&DAT_14cc04a98);
    uVar1 = DAT_14cc04ab8;
    lVar4 = (longlong)(int)DAT_14cc04ab8;
    uVar2 = DAT_14cc04ab8 + 1;
    _DAT_14cc04ab8 = CONCAT44(DAT_14cc04abc,uVar2);
    if (DAT_14cc04abc < uVar2) {
      FUN_1490f2336(&DAT_14cc04ab0,uVar1);
    }
    lVar4 = lVar4 * 0x50 + DAT_14cc04ab0;
    FUN_1446f57c6(&DAT_14cc00e10,&local_68);
    FUN_144478fc0(lVar4,local_68,1,0xffffffff);
    FUN_1446f57c6(&DAT_14cc00e00,&local_70);
    FUN_1490de612(param_1,&local_68,&DAT_14cc04ab0,&local_70);
    FUN_14916354a(&local_68);
    FUN_1457f2ec5(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04a80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916354a FUN_14916354a body=100 status=ok
// SIG undefined FUN_14916354a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916354a(longlong *param_1)

{
  if (param_1 != &DAT_14cc04a80) {
    FUN_1457f2ec5(DAT_14cc04a80,DAT_14cc04a88);
    if (DAT_14cc04a80 != 0) {
      FUN_1400020a8();
    }
    DAT_14cc04a80 = *param_1;
    *param_1 = 0;
    DAT_14cc04a88 = (undefined4)param_1[1];
    _DAT_14cc04a8c = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 14916363a FUN_14916363a body=583 status=ok
// SIG undefined FUN_14916363a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x0001491637bb */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14916363a(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04b00) && (FUN_144b3d300(&DAT_14cc04b00), DAT_14cc04b00 == -1)) {
    DAT_14cc04af0 = 0;
    _DAT_14cc04af8 = 0;
    atexit(FUN_144485395);
    _Init_thread_footer(&DAT_14cc04b00);
  }
  if (DAT_14cc04af8 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc04b18) && (FUN_144b3d300(&DAT_14cc04b18), DAT_14cc04b18 == -1)) {
      DAT_14cc04b08 = (undefined1 *)0x0;
      _DAT_14cc04b10 = 1;
      FUN_149157980(&DAT_14cc04b08,1,0);
      *DAT_14cc04b08 = 1;
      atexit((_func_5014 *)&LAB_1444853c6);
      _Init_thread_footer(&DAT_14cc04b18);
    }
    local_a8[0] = 0;
    local_98 = 0;
    FUN_1446f57c6(&DAT_14cc04ac8,&local_b0);
    local_b8 = local_a8;
    FUN_144478fee(&local_68,local_b0,2,&DAT_14cc04b08);
    uVar3 = _DAT_14cc04af8;
    lVar5 = (longlong)DAT_14cc04af8;
    uVar4 = DAT_14cc04af8 + 1;
    _DAT_14cc04af8 = CONCAT44(DAT_14cc04afc,uVar4);
    if (DAT_14cc04afc < uVar4) {
      FUN_1490f2336(&DAT_14cc04af0,uVar3 & 0xffffffff);
    }
    lVar2 = DAT_14cc04af0;
    lVar5 = lVar5 * 0x50;
    *(undefined1 *)(DAT_14cc04af0 + 8 + lVar5) = local_60;
    *(undefined8 *)(lVar2 + lVar5) = local_68;
    *(longlong *)(lVar2 + 0x10 + lVar5) = local_58;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
    local_48 = 0;
    puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar5);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
    puVar1[3] = uStack_1c;
    puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    if ((*(longlong *)(lVar2 + 0x10 + lVar5) == 0) && (local_58 != 0)) {
      (**(code **)(CONCAT44(uStack_34,local_38) + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14cc04af0;
}



// FUNCTION 149163884 FUN_149163884 body=157 status=ok
// SIG undefined FUN_149163884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149163884(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04ba0) {
    FUN_144b3d300(&DAT_14cc04ba0);
    if (DAT_14cc04ba0 == -1) {
      _DAT_14cc04b70 = DAT_14cc041f8;
      uRam000000014cc04b78 = _DAT_14cc04200;
      _DAT_14cc04b80 = DAT_14cc04208;
      uRam000000014cc04b88 = _DAT_14cc04210;
      _DAT_14cc04b90 = (undefined4)DAT_14cc04218;
      uRam000000014cc04b94 = DAT_14cc04218._4_4_;
      uRam000000014cc04b98 = DAT_14cc04220;
      uRam000000014cc04b9c = _DAT_14cc04224;
      _Init_thread_footer(&DAT_14cc04ba0);
    }
  }
  FUN_1446f57c6(&DAT_14cc04b70 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149163922 FUN_149163922 body=664 status=ok
// SIG undefined FUN_149163922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149163922(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04bb8) {
    FUN_144b3d300(&DAT_14cc04bb8);
    if (DAT_14cc04bb8 == -1) {
      DAT_14cc04ba8 = 0;
      _DAT_14cc04bb0 = 0;
      atexit(FUN_1444854d3);
      _Init_thread_footer(&DAT_14cc04bb8);
    }
  }
  if (DAT_14cc04bb0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04bd0) {
      FUN_144b3d300(&DAT_14cc04bd0);
      if (DAT_14cc04bd0 == -1) {
        DAT_14cc04bc0 = (undefined2 *)0x0;
        _DAT_14cc04bc8 = 2;
        FUN_149157980(&DAT_14cc04bc0,2,0);
        *DAT_14cc04bc0 = 0x201;
        atexit((_func_5014 *)&LAB_144485504);
        _Init_thread_footer(&DAT_14cc04bd0);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc04bb0;
    uVar2 = DAT_14cc04bb0 + 1;
    if (DAT_14cc04bb4 < uVar2) {
      uVar4 = _DAT_14cc04bb0 & 0xffffffff;
      DAT_14cc04bb0 = uVar2;
      FUN_1490f2336(&DAT_14cc04ba8,uVar4);
      uVar2 = DAT_14cc04bb0;
    }
    DAT_14cc04bb0 = uVar2;
    lVar5 = lVar5 * 0x50 + DAT_14cc04ba8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc041f8,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04bc0);
    uVar2 = DAT_14cc04bb0;
    lVar5 = (longlong)(int)DAT_14cc04bb0;
    DAT_14cc04bb0 = DAT_14cc04bb0 + 1;
    if (DAT_14cc04bb4 < DAT_14cc04bb0) {
      FUN_1490f2336(&DAT_14cc04ba8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04ba8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04208,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04bc0);
    uVar2 = DAT_14cc04bb0;
    lVar5 = (longlong)(int)DAT_14cc04bb0;
    uVar3 = DAT_14cc04bb0 + 1;
    _DAT_14cc04bb0 = CONCAT44(DAT_14cc04bb4,uVar3);
    if (DAT_14cc04bb4 < uVar3) {
      FUN_1490f2336(&DAT_14cc04ba8,uVar2);
    }
    uVar1 = DAT_14c764f08;
    lVar5 = lVar5 * 0x50 + DAT_14cc04ba8;
    FUN_1446f57c6(&DAT_14cc04218,local_68);
    FUN_144478fc0(lVar5,local_68[0],1,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04ba8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149163bbc FUN_149163bbc body=55 status=ok
// SIG undefined FUN_149163bbc(void)

void FUN_149163bbc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined1 *)param_2[8];
  uVar2 = FUN_1491641f2(-(*(float *)param_2[4] == *(float *)*param_2) & 1,param_1);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 149163bf4 FUN_149163bf4 body=56 status=ok
// SIG undefined FUN_149163bf4(void)

void FUN_149163bf4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined1 *)param_2[8];
  uVar2 = FUN_1491641f2(-(*(double *)param_2[4] == *(double *)*param_2) & 1,param_1);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 149163c2c FUN_149163c2c body=46 status=ok
// SIG undefined FUN_149163c2c(void)

void FUN_149163c2c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = (undefined1 *)param_2[8];
  uVar2 = FUN_1491641f2(CONCAT31((int3)((uint)*(int *)*param_2 >> 8),
                                 *(int *)*param_2 == *(int *)param_2[4]),param_1);
  *puVar1 = uVar2;
  return;
}



// FUNCTION 149163c5a FUN_149163c5a body=59 status=ok
// SIG undefined FUN_149163c5a(void)

void FUN_149163c5a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  param_2 = (undefined8 *)*param_2;
  puVar2 = (undefined1 *)param_2[8];
  if (*(int *)*param_2 == *(int *)param_2[4]) {
    iVar1 = ((int *)*param_2)[1];
    uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == ((int *)param_2[4])[1]);
  }
  else {
    uVar4 = 0;
  }
  uVar3 = FUN_1491641f2(uVar4,param_1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149163c96 FUN_149163c96 body=85 status=ok
// SIG undefined FUN_149163c96(void)

void FUN_149163c96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  
  param_2 = (longlong *)*param_2;
  puVar2 = (undefined1 *)param_2[8];
  iVar4 = *(int *)((undefined8 *)*param_2 + 1);
  iVar1 = *(int *)((undefined8 *)param_2[4] + 1);
  if (iVar4 == iVar1) {
    bVar5 = true;
    if (1 < iVar4) {
      iVar4 = wcscmp(*(wchar_t **)*param_2,*(wchar_t **)param_2[4]);
      bVar5 = iVar4 == 0;
    }
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  uVar3 = FUN_1491641f2(bVar5,param_1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149163cec FUN_149163cec body=121 status=ok
// SIG undefined FUN_149163cec(void)

void FUN_149163cec(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  param_2 = (undefined8 *)*param_2;
  pdVar1 = (double *)*param_2;
  pdVar2 = (double *)param_2[4];
  puVar3 = (undefined1 *)param_2[8];
  if ((9.999999747378752e-05 < ABS(*pdVar1 - *pdVar2)) ||
     (9.999999747378752e-05 < ABS(pdVar1[1] - pdVar2[1]))) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)pdVar2 >> 8),
                     ABS(pdVar1[2] - pdVar2[2]) <= 9.999999747378752e-05);
  }
  uVar4 = FUN_1491641f2(uVar5,param_1);
  *puVar3 = uVar4;
  return;
}



// FUNCTION 149163d66 FUN_149163d66 body=97 status=ok
// SIG undefined FUN_149163d66(void)

void FUN_149163d66(undefined8 param_1,undefined8 *param_2)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  param_2 = (undefined8 *)*param_2;
  pdVar1 = (double *)param_2[4];
  puVar2 = (undefined1 *)param_2[8];
  if (ABS(*(double *)*param_2 - *pdVar1) <= 9.999999747378752e-05) {
    uVar4 = CONCAT71((int7)((ulonglong)pdVar1 >> 8),
                     ABS(((double *)*param_2)[1] - pdVar1[1]) <= 9.999999747378752e-05);
  }
  else {
    uVar4 = 0;
  }
  uVar3 = FUN_1491641f2(uVar4,param_1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149163dc8 FUN_149163dc8 body=276 status=ok
// SIG undefined FUN_149163dc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149163dc8(undefined8 param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  param_2 = (longlong *)*param_2;
  pdVar1 = (double *)*param_2;
  pdVar2 = (double *)param_2[4];
  puVar3 = (undefined1 *)param_2[8];
  dVar4 = (double)DAT_1499387d0;
  dVar5 = DAT_1499387d0._8_8_;
  auVar15._8_8_ = pdVar1[1] - pdVar2[1];
  auVar15._0_8_ = *pdVar1 - *pdVar2;
  auVar16 = divpd(auVar15,_DAT_1499387d0);
  auVar9._0_8_ = (pdVar1[2] - pdVar2[2]) / 360.0;
  auVar9._8_8_ = 0;
  auVar17 = roundpd(auVar16,auVar16,3);
  auVar16 = roundpd(auVar9,auVar9,3);
  auVar23._0_8_ = (pdVar1[2] - pdVar2[2]) - auVar16._0_8_ * dVar4;
  auVar23._8_8_ = 0.0 - auVar16._8_8_ * dVar5;
  dVar21 = (*pdVar1 - *pdVar2) - auVar17._0_8_ * dVar4;
  dVar22 = (pdVar1[1] - pdVar2[1]) - auVar17._8_8_ * dVar5;
  auVar20._0_8_ = dVar21 + dVar4;
  auVar20._8_8_ = dVar22 + dVar5;
  auVar19._0_8_ = dVar4 + auVar23._0_8_;
  auVar19._8_8_ = dVar5 + auVar23._8_8_;
  auVar10._8_8_ = -(ulonglong)(0.0 <= dVar22);
  auVar10._0_8_ = -(ulonglong)(0.0 <= dVar21);
  auVar16._8_8_ = dVar22;
  auVar16._0_8_ = dVar21;
  auVar17 = blendvpd(auVar20,auVar16,auVar10);
  auVar11._8_8_ = -(ulonglong)(0.0 <= auVar23._8_8_);
  auVar11._0_8_ = -(ulonglong)(0.0 <= auVar23._0_8_);
  auVar16 = blendvpd(auVar19,auVar23,auVar11);
  auVar24._0_8_ = auVar17._0_8_ + -360.0;
  auVar24._8_8_ = auVar17._8_8_ + -360.0;
  auVar12._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
  auVar12._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
  auVar9 = blendvpd(auVar17,auVar24,auVar12);
  auVar13._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
  auVar13._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
  auVar17._8_8_ = auVar16._8_8_ + -360.0;
  auVar17._0_8_ = auVar16._0_8_ + -360.0;
  auVar16 = blendvpd(auVar16,auVar17,auVar13);
  auVar18._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar9._8_8_));
  auVar18._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar9._0_8_));
  iVar7 = movmskpd((int)param_2,auVar18);
  auVar14._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar16._8_8_));
  auVar14._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar16._0_8_));
  uVar8 = movmskpd((int)pdVar1,auVar14);
  uVar6 = FUN_1491641f2(CONCAT71((int7)(CONCAT44((int)((ulonglong)param_2 >> 0x20),iVar7) >> 8),
                                 (uVar8 & 0x3fffffff) == 0 && iVar7 == 0),param_1);
  *puVar3 = uVar6;
  return;
}



// FUNCTION 149163edc FUN_149163edc body=217 status=ok
// SIG undefined FUN_149163edc(void)

void FUN_149163edc(undefined8 param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  param_2 = (longlong *)*param_2;
  pdVar1 = (double *)*param_2;
  pdVar2 = (double *)param_2[4];
  puVar3 = (undefined1 *)param_2[8];
  lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - pdVar2[1]));
  auVar7._8_4_ = (int)lVar13;
  auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - *pdVar2));
  auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar11 = movmskpd((int)pdVar1,auVar7);
  lVar13 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[3] - pdVar2[3]));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[2] - pdVar2[2]));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar12 = movmskpd((int)pdVar2,auVar6);
  uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if ((uVar12 & 0x3fffffff) != 0 || iVar11 != 0) {
    auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] + pdVar2[1]));
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 + *pdVar2));
    iVar9 = movmskpd((int)uVar10,auVar4);
    auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[3] + pdVar2[3]));
    auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[2] + pdVar2[2]));
    uVar12 = movmskpd(iVar11,auVar5);
    uVar10 = CONCAT71((int7)(CONCAT44((int)((ulonglong)param_2 >> 0x20),iVar9) >> 8),
                      (uVar12 & 0x3fffffff) == 0 && iVar9 == 0);
  }
  uVar8 = FUN_1491641f2(uVar10,param_1);
  *puVar3 = uVar8;
  return;
}



// FUNCTION 149163fb6 FUN_149163fb6 body=354 status=ok
// SIG undefined FUN_149163fb6(void)

void FUN_149163fb6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  param_2 = (longlong *)*param_2;
  pdVar1 = (double *)*param_2;
  pdVar2 = (double *)param_2[4];
  puVar3 = (undefined1 *)param_2[8];
  auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[5] - pdVar2[5]));
  auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[4] - pdVar2[4]));
  iVar14 = movmskpd((int)param_2,auVar8);
  auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[7] - pdVar2[7]));
  auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[6] - pdVar2[6]));
  uVar15 = movmskpd(param_4,auVar6);
  if ((uVar15 & 0x3fffffff) == 0 && iVar14 == 0) {
    lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - pdVar2[1]));
    auVar11._8_4_ = (int)lVar17;
    auVar11._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - *pdVar2));
    auVar11._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar15 = movmskpd(iVar14,auVar11);
    lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[3] - pdVar2[3]));
    auVar10._8_4_ = (int)lVar17;
    auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[2] - pdVar2[2]));
    auVar10._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar14 = movmskpd(0,auVar10);
    uVar16 = iVar14 << 2 | uVar15;
    if (uVar16 != 0) {
      auVar9._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] + pdVar2[1]));
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 + *pdVar2));
      iVar14 = movmskpd(uVar15,auVar9);
      auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[3] + pdVar2[3]));
      auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[2] + pdVar2[2]));
      uVar15 = movmskpd(uVar16,auVar7);
      if ((uVar15 & 0x3fffffff) != 0 || iVar14 != 0) goto LAB_1491640f6;
    }
    auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[9] - pdVar2[9]));
    auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[8] - pdVar2[8]));
    iVar14 = movmskpd((int)pdVar2,auVar5);
    auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[0xb] - pdVar2[0xb]));
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[10] - pdVar2[10]));
    uVar15 = movmskpd((int)pdVar1,auVar4);
    uVar13 = CONCAT71((int7)(CONCAT44((int)((ulonglong)pdVar2 >> 0x20),iVar14) >> 8),
                      (uVar15 & 0x3fffffff) == 0 && iVar14 == 0);
  }
  else {
LAB_1491640f6:
    uVar13 = 0;
  }
  uVar12 = FUN_1491641f2(uVar13,param_1);
  *puVar3 = uVar12;
  return;
}



// FUNCTION 149164118 FUN_149164118 body=137 status=ok
// SIG undefined FUN_149164118(void)

void FUN_149164118(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  param_2 = (undefined8 *)*param_2;
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)param_2[4];
  puVar3 = (undefined1 *)param_2[8];
  if (((0.0001 <= ABS(*pfVar1 - *pfVar2)) || (0.0001 <= ABS(pfVar1[1] - pfVar2[1]))) ||
     (0.0001 <= ABS(pfVar1[2] - pfVar2[2]))) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)pfVar2 >> 8),ABS(pfVar1[3] - pfVar2[3]) < 0.0001);
  }
  uVar4 = FUN_1491641f2(uVar5,param_1);
  *puVar3 = uVar4;
  return;
}



// FUNCTION 1491641a2 FUN_1491641a2 body=79 status=ok
// SIG undefined FUN_1491641a2(void)

void FUN_1491641a2(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1[2] == 0) {
    plVar5 = (longlong *)puVar1[1];
  }
  else {
    plVar5 = (longlong *)FUN_1490f79e6();
  }
  puVar2 = (undefined1 *)puVar1[8];
  uVar4 = (**(code **)(*plVar5 + 200))(plVar5,*puVar1,puVar1[4],0);
  *puVar2 = (char)uVar4;
  uVar3 = FUN_1491641f2(uVar4,param_1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 1491641f2 FUN_1491641f2 body=80 status=ok
// SIG undefined FUN_1491641f2(void)

byte FUN_1491641f2(byte param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x100) + 8);
  if (DAT_14cc04b58 == 0) {
    uVar2 = FUN_1408ed7fc();
    DAT_14cc04b58 = FUN_140002ddd(FUN_1466b974d,uVar2,L"RigVMDispatch_CoreNotEquals");
  }
  return lVar1 == DAT_14cc04b58 ^ param_1;
}



// FUNCTION 149164242 FUN_149164242 body=664 status=ok
// SIG undefined FUN_149164242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149164242(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04be8) {
    FUN_144b3d300(&DAT_14cc04be8);
    if (DAT_14cc04be8 == -1) {
      DAT_14cc04bd8 = 0;
      _DAT_14cc04be0 = 0;
      atexit(FUN_144485ad4);
      _Init_thread_footer(&DAT_14cc04be8);
    }
  }
  if (DAT_14cc04be0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04c00) {
      FUN_144b3d300(&DAT_14cc04c00);
      if (DAT_14cc04c00 == -1) {
        DAT_14cc04bf0 = (undefined2 *)0x0;
        _DAT_14cc04bf8 = 2;
        FUN_149157980(&DAT_14cc04bf0,2,0);
        *DAT_14cc04bf0 = 0x201;
        atexit((_func_5014 *)&LAB_144485b05);
        _Init_thread_footer(&DAT_14cc04c00);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc04be0;
    uVar2 = DAT_14cc04be0 + 1;
    if (DAT_14cc04be4 < uVar2) {
      uVar4 = _DAT_14cc04be0 & 0xffffffff;
      DAT_14cc04be0 = uVar2;
      FUN_1490f2336(&DAT_14cc04bd8,uVar4);
      uVar2 = DAT_14cc04be0;
    }
    DAT_14cc04be0 = uVar2;
    lVar5 = lVar5 * 0x50 + DAT_14cc04bd8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc041f8,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04bf0);
    uVar2 = DAT_14cc04be0;
    lVar5 = (longlong)(int)DAT_14cc04be0;
    DAT_14cc04be0 = DAT_14cc04be0 + 1;
    if (DAT_14cc04be4 < DAT_14cc04be0) {
      FUN_1490f2336(&DAT_14cc04bd8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04bd8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04208,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04bf0);
    uVar2 = DAT_14cc04be0;
    lVar5 = (longlong)(int)DAT_14cc04be0;
    uVar3 = DAT_14cc04be0 + 1;
    _DAT_14cc04be0 = CONCAT44(DAT_14cc04be4,uVar3);
    if (DAT_14cc04be4 < uVar3) {
      FUN_1490f2336(&DAT_14cc04bd8,uVar2);
    }
    uVar1 = DAT_14c764f08;
    lVar5 = lVar5 * 0x50 + DAT_14cc04bd8;
    FUN_1446f57c6(&DAT_14cc04218,local_68);
    FUN_144478fc0(lVar5,local_68[0],1,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04bd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491644dc FUN_1491644dc body=171 status=ok
// SIG undefined FUN_1491644dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1491644dc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04ca0) {
    FUN_144b3d300(&DAT_14cc04ca0);
    if (DAT_14cc04ca0 == -1) {
      _DAT_14cc04c60 = DAT_14cc04c08;
      uRam000000014cc04c68 = _DAT_14cc04c10;
      _DAT_14cc04c70 = DAT_14cc04c18;
      uRam000000014cc04c78 = _DAT_14cc04c20;
      _DAT_14cc04c80 = DAT_14cc04c28;
      uRam000000014cc04c88 = _DAT_14cc04c30;
      _DAT_14cc04c90 = (undefined4)DAT_14cc04c38;
      uRam000000014cc04c94 = DAT_14cc04c38._4_4_;
      uRam000000014cc04c98 = DAT_14cc04c40;
      uRam000000014cc04c9c = _DAT_14cc04c44;
      _Init_thread_footer(&DAT_14cc04ca0);
    }
  }
  FUN_1446f57c6(&DAT_14cc04c60 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149164588 FUN_149164588 body=789 status=ok
// SIG undefined FUN_149164588(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149164588(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04cb8) {
    FUN_144b3d300(&DAT_14cc04cb8);
    if (DAT_14cc04cb8 == -1) {
      DAT_14cc04ca8 = 0;
      _DAT_14cc04cb0 = 0;
      atexit(FUN_144485b16);
      _Init_thread_footer(&DAT_14cc04cb8);
    }
  }
  if (DAT_14cc04cb0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04cd0) {
      FUN_144b3d300(&DAT_14cc04cd0);
      if (DAT_14cc04cd0 == -1) {
        DAT_14cc04cc0 = (undefined2 *)0x0;
        _DAT_14cc04cc8 = 2;
        FUN_149157980(&DAT_14cc04cc0,2,0);
        *DAT_14cc04cc0 = 0x201;
        atexit((_func_5014 *)&LAB_144485b47);
        _Init_thread_footer(&DAT_14cc04cd0);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc04cb0;
    uVar2 = DAT_14cc04cb0 + 1;
    if (DAT_14cc04cb4 < uVar2) {
      uVar4 = _DAT_14cc04cb0 & 0xffffffff;
      DAT_14cc04cb0 = uVar2;
      FUN_1490f2336(&DAT_14cc04ca8,uVar4);
      uVar2 = DAT_14cc04cb0;
    }
    DAT_14cc04cb0 = uVar2;
    uVar1 = DAT_14c764f08;
    lVar5 = lVar5 * 0x50 + DAT_14cc04ca8;
    FUN_1446f57c6(&DAT_14cc04c08,local_68);
    FUN_144478fc0(lVar5,local_68[0],0,uVar1);
    uVar2 = DAT_14cc04cb0;
    lVar5 = (longlong)(int)DAT_14cc04cb0;
    DAT_14cc04cb0 = DAT_14cc04cb0 + 1;
    if (DAT_14cc04cb4 < DAT_14cc04cb0) {
      FUN_1490f2336(&DAT_14cc04ca8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04ca8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04c18,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04cc0);
    uVar2 = DAT_14cc04cb0;
    lVar5 = (longlong)(int)DAT_14cc04cb0;
    DAT_14cc04cb0 = DAT_14cc04cb0 + 1;
    if (DAT_14cc04cb4 < DAT_14cc04cb0) {
      FUN_1490f2336(&DAT_14cc04ca8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04ca8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04c28,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04cc0);
    uVar2 = DAT_14cc04cb0;
    lVar5 = (longlong)(int)DAT_14cc04cb0;
    uVar3 = DAT_14cc04cb0 + 1;
    _DAT_14cc04cb0 = CONCAT44(DAT_14cc04cb4,uVar3);
    if (DAT_14cc04cb4 < uVar3) {
      FUN_1490f2336(&DAT_14cc04ca8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04ca8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04c38,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,1,&DAT_14cc04cc0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916489e FUN_14916489e body=102 status=ok
// SIG undefined FUN_14916489e(void)

void FUN_14916489e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)*param_2;
  uVar3 = (ulonglong)((*(byte *)*puVar1 ^ 1) << 5);
  puVar4 = puVar1;
  if (*(longlong *)((longlong)puVar1 + uVar3 + 0x38) != 0) {
    uVar2 = FUN_1490daa46();
    FUN_1490f5b06(*(undefined8 *)((longlong)puVar1 + uVar3 + 0x38),param_1,uVar2);
    puVar4 = (undefined8 *)*param_2;
  }
  FUN_14446f40e(puVar4[0xd],puVar4[0xc],*(undefined8 *)((longlong)puVar1 + uVar3 + 0x28),
                *(undefined8 *)((longlong)puVar1 + uVar3 + 0x20));
  return;
}



// FUNCTION 149164904 FUN_149164904 body=557 status=ok
// SIG undefined FUN_149164904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149164904(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04d38) {
    FUN_144b3d300(&DAT_14cc04d38);
    if (DAT_14cc04d38 == -1) {
      DAT_14cc04d28 = 0;
      _DAT_14cc04d30 = 0;
      atexit(FUN_144485ebe);
      _Init_thread_footer(&DAT_14cc04d38);
    }
  }
  if (DAT_14cc04d30 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04d50) {
      FUN_144b3d300(&DAT_14cc04d50);
      if (DAT_14cc04d50 == -1) {
        DAT_14cc04d40 = (undefined1 *)0x0;
        _DAT_14cc04d48 = 1;
        FUN_149157980(&DAT_14cc04d40,1,0);
        *DAT_14cc04d40 = 10;
        atexit((_func_5014 *)&LAB_144485eef);
        _Init_thread_footer(&DAT_14cc04d50);
      }
    }
    lVar4 = (longlong)(int)DAT_14cc04d30;
    uVar1 = DAT_14cc04d30 + 1;
    if (DAT_14cc04d34 < uVar1) {
      uVar3 = _DAT_14cc04d30 & 0xffffffff;
      DAT_14cc04d30 = uVar1;
      FUN_1490f2336(&DAT_14cc04d28,uVar3);
      uVar1 = DAT_14cc04d30;
    }
    DAT_14cc04d30 = uVar1;
    lVar4 = lVar4 * 0x50 + DAT_14cc04d28;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04cd8,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar4,local_70,0,&DAT_14cc04d40);
    uVar1 = DAT_14cc04d30;
    lVar4 = (longlong)(int)DAT_14cc04d30;
    uVar2 = DAT_14cc04d30 + 1;
    _DAT_14cc04d30 = CONCAT44(DAT_14cc04d34,uVar2);
    if (DAT_14cc04d34 < uVar2) {
      FUN_1490f2336(&DAT_14cc04d28,uVar1);
    }
    lVar4 = lVar4 * 0x50 + DAT_14cc04d28;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04ce8,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar4,local_70,1,&DAT_14cc04d40);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04d28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149164b4a FUN_149164b4a body=557 status=ok
// SIG undefined FUN_149164b4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149164b4a(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04d68) {
    FUN_144b3d300(&DAT_14cc04d68);
    if (DAT_14cc04d68 == -1) {
      DAT_14cc04d58 = 0;
      _DAT_14cc04d60 = 0;
      atexit(FUN_1444860ac);
      _Init_thread_footer(&DAT_14cc04d68);
    }
  }
  if (DAT_14cc04d60 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04d80) {
      FUN_144b3d300(&DAT_14cc04d80);
      if (DAT_14cc04d80 == -1) {
        DAT_14cc04d70 = (undefined1 *)0x0;
        _DAT_14cc04d78 = 1;
        FUN_149157980(&DAT_14cc04d70,1,0);
        *DAT_14cc04d70 = 10;
        atexit((_func_5014 *)&LAB_1444860dd);
        _Init_thread_footer(&DAT_14cc04d80);
      }
    }
    lVar4 = (longlong)(int)DAT_14cc04d60;
    uVar1 = DAT_14cc04d60 + 1;
    if (DAT_14cc04d64 < uVar1) {
      uVar3 = _DAT_14cc04d60 & 0xffffffff;
      DAT_14cc04d60 = uVar1;
      FUN_1490f2336(&DAT_14cc04d58,uVar3);
      uVar1 = DAT_14cc04d60;
    }
    DAT_14cc04d60 = uVar1;
    lVar4 = lVar4 * 0x50 + DAT_14cc04d58;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04ce8,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar4,local_70,0,&DAT_14cc04d70);
    uVar1 = DAT_14cc04d60;
    lVar4 = (longlong)(int)DAT_14cc04d60;
    uVar2 = DAT_14cc04d60 + 1;
    _DAT_14cc04d60 = CONCAT44(DAT_14cc04d64,uVar2);
    if (DAT_14cc04d64 < uVar2) {
      FUN_1490f2336(&DAT_14cc04d58,uVar1);
    }
    lVar4 = lVar4 * 0x50 + DAT_14cc04d58;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04cd8,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar4,local_70,1,&DAT_14cc04d70);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04d58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149164d78 FUN_149164d78 body=188 status=ok
// SIG undefined FUN_149164d78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149164d78(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04e40) {
    FUN_144b3d300(&DAT_14cc04e40);
    if (DAT_14cc04e40 == -1) {
      _DAT_14cc04df0 = DAT_14cc04d88;
      uRam000000014cc04df8 = _DAT_14cc04d90;
      _DAT_14cc04e00 = DAT_14cc04d98;
      uRam000000014cc04e08 = _DAT_14cc04da0;
      _DAT_14cc04e10 = DAT_14cc04da8;
      uRam000000014cc04e18 = _DAT_14cc04db0;
      _DAT_14cc04e20 = DAT_14cc04db8;
      uRam000000014cc04e28 = _DAT_14cc04dc0;
      _DAT_14cc04e30 = (undefined4)DAT_14cc04dc8;
      uRam000000014cc04e34 = DAT_14cc04dc8._4_4_;
      uRam000000014cc04e38 = DAT_14cc04dd0;
      uRam000000014cc04e3c = _DAT_14cc04dd4;
      _Init_thread_footer(&DAT_14cc04e40);
    }
  }
  FUN_1446f57c6(&DAT_14cc04df0 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149164e34 FUN_149164e34 body=909 status=ok
// SIG undefined FUN_149164e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149164e34(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04e58) {
    FUN_144b3d300(&DAT_14cc04e58);
    if (DAT_14cc04e58 == -1) {
      DAT_14cc04e48 = 0;
      _DAT_14cc04e50 = 0;
      atexit(FUN_1444860ee);
      _Init_thread_footer(&DAT_14cc04e58);
    }
  }
  if (DAT_14cc04e50 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04e70) {
      FUN_144b3d300(&DAT_14cc04e70);
      if (DAT_14cc04e70 == -1) {
        DAT_14cc04e60 = (undefined2 *)0x0;
        _DAT_14cc04e68 = 2;
        FUN_149157980(&DAT_14cc04e60,2,0);
        *DAT_14cc04e60 = 0x201;
        atexit((_func_5014 *)&LAB_14448611f);
        _Init_thread_footer(&DAT_14cc04e70);
      }
    }
    lVar6 = (longlong)(int)DAT_14cc04e50;
    uVar1 = DAT_14cc04e50 + 1;
    if (DAT_14cc04e54 < uVar1) {
      uVar5 = _DAT_14cc04e50 & 0xffffffff;
      DAT_14cc04e50 = uVar1;
      FUN_1490f2336(&DAT_14cc04e48,uVar5);
      uVar1 = DAT_14cc04e50;
    }
    DAT_14cc04e50 = uVar1;
    uVar2 = DAT_14c764f1c;
    lVar6 = lVar6 * 0x50 + DAT_14cc04e48;
    FUN_1446f57c6(&DAT_14cc04d88,local_68);
    FUN_144478fc0(lVar6,local_68[0],0,uVar2);
    uVar1 = DAT_14cc04e50;
    lVar6 = (longlong)(int)DAT_14cc04e50;
    DAT_14cc04e50 = DAT_14cc04e50 + 1;
    if (DAT_14cc04e54 < DAT_14cc04e50) {
      FUN_1490f2336(&DAT_14cc04e48,uVar1);
    }
    lVar6 = lVar6 * 0x50 + DAT_14cc04e48;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04d98,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar6,local_70,0,&DAT_14cc04e60);
    uVar1 = DAT_14cc04e50;
    lVar6 = (longlong)(int)DAT_14cc04e50;
    DAT_14cc04e50 = DAT_14cc04e50 + 1;
    if (DAT_14cc04e54 < DAT_14cc04e50) {
      FUN_1490f2336(&DAT_14cc04e48,uVar1);
    }
    uVar2 = DAT_14c764f08;
    lVar6 = lVar6 * 0x50 + DAT_14cc04e48;
    FUN_1446f57c6(&DAT_14cc04da8,local_68);
    FUN_144478fc0(lVar6,local_68[0],0,uVar2);
    uVar1 = DAT_14cc04e50;
    lVar6 = (longlong)(int)DAT_14cc04e50;
    DAT_14cc04e50 = DAT_14cc04e50 + 1;
    if (DAT_14cc04e54 < DAT_14cc04e50) {
      FUN_1490f2336(&DAT_14cc04e48,uVar1);
    }
    uVar2 = DAT_14c764f0c;
    lVar6 = lVar6 * 0x50 + DAT_14cc04e48;
    FUN_1446f57c6(&DAT_14cc04db8,local_68);
    FUN_144478fc0(lVar6,local_68[0],0,uVar2);
    FUN_14001a7b2();
    uVar4 = FUN_140bf8bc4();
    FUN_1408ccbd2(local_68,uVar4);
    uVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_68);
    uVar1 = DAT_14cc04e50;
    lVar6 = (longlong)(int)DAT_14cc04e50;
    uVar3 = DAT_14cc04e50 + 1;
    _DAT_14cc04e50 = CONCAT44(DAT_14cc04e54,uVar3);
    if (DAT_14cc04e54 < uVar3) {
      FUN_1490f2336(&DAT_14cc04e48,uVar1);
    }
    lVar6 = lVar6 * 0x50 + DAT_14cc04e48;
    FUN_1446f57c6(&DAT_14cc04dc8,local_68);
    FUN_144478fc0(lVar6,local_68[0],0,uVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04e48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491651c2 FUN_1491651c2 body=229 status=ok
// SIG undefined FUN_1491651c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1491651c2(void)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04e88) {
    FUN_144b3d300(&DAT_14cc04e88);
    if (DAT_14cc04e88 == -1) {
      FUN_1446f470e(&local_18,L"ExecuteContext",1);
      DAT_14cc04e78 = (undefined8 *)0x0;
      _DAT_14cc04e80 = 1;
      FUN_1490f2264(&DAT_14cc04e78,1,0);
      puVar1 = DAT_14cc04e78;
      *DAT_14cc04e78 = local_18;
      *(undefined1 *)(puVar1 + 1) = 2;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
      atexit((_func_5014 *)&LAB_144486130);
      _Init_thread_footer(&DAT_14cc04e88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14cc04e78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491652aa FUN_1491652aa body=235 status=ok
// SIG undefined FUN_1491652aa(void)

undefined8 FUN_1491652aa(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 < param_4 + -1 && 0 < param_3) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,param_3 + -1);
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_28,puVar2,1);
    FUN_1446f57c6(&DAT_14cc04ea0,local_40);
    FUN_14915d984(param_2,local_40,local_28);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  puVar1 = &DAT_14cc04eb0;
  if (param_3 == 0) {
    puVar1 = &DAT_14cc04e90;
  }
  FUN_1446f57c6(puVar1,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14916539c FUN_14916539c body=809 status=ok
// SIG undefined FUN_14916539c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14916539c(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04ee8) {
    FUN_144b3d300(&DAT_14cc04ee8);
    if (DAT_14cc04ee8 == -1) {
      DAT_14cc04ed8 = 0;
      _DAT_14cc04ee0 = 0;
      atexit(FUN_1444865a0);
      _Init_thread_footer(&DAT_14cc04ee8);
    }
  }
  if (DAT_14cc04ee0 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04f00) {
      FUN_144b3d300(&DAT_14cc04f00);
      if (DAT_14cc04f00 == -1) {
        DAT_14cc04ef0 = (undefined2 *)0x0;
        _DAT_14cc04ef8 = 2;
        FUN_149157980(&DAT_14cc04ef0,2,0);
        *DAT_14cc04ef0 = 0x302;
        atexit((_func_5014 *)&LAB_1444865d1);
        _Init_thread_footer(&DAT_14cc04f00);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc04f18) {
      FUN_144b3d300(&DAT_14cc04f18);
      if (DAT_14cc04f18 == -1) {
        DAT_14cc04f08 = (undefined2 *)0x0;
        _DAT_14cc04f10 = 2;
        FUN_149157980(&DAT_14cc04f08,2,0);
        *DAT_14cc04f08 = 0x201;
        atexit((_func_5014 *)&LAB_1444865e2);
        _Init_thread_footer(&DAT_14cc04f18);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc04ee0;
    uVar2 = DAT_14cc04ee0 + 1;
    if (DAT_14cc04ee4 < uVar2) {
      uVar4 = _DAT_14cc04ee0 & 0xffffffff;
      DAT_14cc04ee0 = uVar2;
      FUN_1490f2336(&DAT_14cc04ed8,uVar4);
      uVar2 = DAT_14cc04ee0;
    }
    DAT_14cc04ee0 = uVar2;
    uVar1 = DAT_14c764f14;
    lVar5 = lVar5 * 0x50 + DAT_14cc04ed8;
    FUN_1446f57c6(&DAT_14cc04e90,local_68);
    FUN_144478fc0(lVar5,local_68[0],0,uVar1);
    uVar2 = DAT_14cc04ee0;
    lVar5 = (longlong)(int)DAT_14cc04ee0;
    DAT_14cc04ee0 = DAT_14cc04ee0 + 1;
    if (DAT_14cc04ee4 < DAT_14cc04ee0) {
      FUN_1490f2336(&DAT_14cc04ed8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04ed8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04ea0,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc04ef0);
    uVar2 = DAT_14cc04ee0;
    lVar5 = (longlong)(int)DAT_14cc04ee0;
    uVar3 = DAT_14cc04ee0 + 1;
    _DAT_14cc04ee0 = CONCAT44(DAT_14cc04ee4,uVar3);
    if (DAT_14cc04ee4 < uVar3) {
      FUN_1490f2336(&DAT_14cc04ed8,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc04ed8;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f57c6(&DAT_14cc04eb0,&local_70);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,1,&DAT_14cc04f08);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc04ed8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491656c6 FUN_1491656c6 body=143 status=ok
// SIG undefined FUN_1491656c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1491656c6(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04f80) {
    FUN_144b3d300(&DAT_14cc04f80);
    if (DAT_14cc04f80 == -1) {
      _DAT_14cc04f60 = _DAT_14cc04f20;
      uRam000000014cc04f68 = _DAT_14cc04f28;
      _DAT_14cc04f70 = (undefined4)DAT_14cc00da0;
      uRam000000014cc04f74 = DAT_14cc00da0._4_4_;
      uRam000000014cc04f78 = DAT_14cc00da8;
      uRam000000014cc04f7c = _DAT_14cc00dac;
      _Init_thread_footer(&DAT_14cc04f80);
    }
  }
  FUN_1446f57c6(&DAT_14cc04f60 + (longlong)param_3 * 0x10,param_2);
  return param_2;
}



// FUNCTION 149165756 FUN_149165756 body=364 status=ok
// SIG undefined FUN_149165756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149165756(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04f98) {
    FUN_144b3d300(&DAT_14cc04f98);
    if (DAT_14cc04f98 == -1) {
      DAT_14cc04f88 = 0;
      _DAT_14cc04f90 = 0;
      atexit(FUN_144486c25);
      _Init_thread_footer(&DAT_14cc04f98);
    }
  }
  if (DAT_14cc04f90 == 0) {
    DAT_14cc04f90 = 1;
    if (DAT_14cc04f94 == 0) {
      FUN_1490f2336(&DAT_14cc04f88,0);
    }
    lVar4 = DAT_14cc04f88;
    uVar1 = DAT_14c764f14;
    FUN_1446f57c6(&DAT_14cc04f20,&local_28);
    FUN_144478fc0(lVar4,local_28,0,uVar1);
    iVar2 = DAT_14cc04f90;
    lVar4 = (longlong)DAT_14cc04f90;
    uVar3 = DAT_14cc04f90 + 1;
    _DAT_14cc04f90 = CONCAT44(DAT_14cc04f94,uVar3);
    if (DAT_14cc04f94 < uVar3) {
      FUN_1490f2336(&DAT_14cc04f88,iVar2);
    }
    uVar1 = DAT_14c764f18;
    lVar4 = lVar4 * 0x50 + DAT_14cc04f88;
    FUN_1446f57c6(&DAT_14cc00da0,&local_28);
    FUN_144478fc0(lVar4,local_28,4,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc04f88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491658c4 FUN_1491658c4 body=304 status=ok
// SIG undefined FUN_1491658c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1491658c4(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc04fb0) {
    FUN_144b3d300(&DAT_14cc04fb0);
    if (DAT_14cc04fb0 == -1) {
      FUN_1446f57c6(&DAT_14cc00d40,&local_30);
      FUN_1446f57c6(&DAT_14cc04f30,&local_38);
      uVar1 = DAT_14c764f04;
      FUN_1446f57c6(&DAT_14cc00db0,&local_40);
      DAT_14cc04fa0 = (undefined8 *)0x0;
      _DAT_14cc04fa8 = 3;
      FUN_1490f2264(&DAT_14cc04fa0,3,0);
      puVar2 = DAT_14cc04fa0;
      *DAT_14cc04fa0 = local_30;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0xffffffff;
      puVar2[2] = local_38;
      *(undefined1 *)(puVar2 + 3) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar1;
      puVar2[4] = local_40;
      *(undefined1 *)(puVar2 + 5) = 1;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
      atexit((_func_5014 *)&LAB_144486c56);
      _Init_thread_footer(&DAT_14cc04fb0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14cc04fa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491659f6 FUN_1491659f6 body=1171 status=ok
// SIG undefined FUN_1491659f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1491659f6(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  int local_80;
  undefined4 uStack_7c;
  undefined2 **local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04fc8) && (FUN_144b3d300(&DAT_14cc04fc8), DAT_14cc04fc8 == -1)) {
    FUN_1446f57c6(&DAT_14cc00db0,&local_58);
    DAT_14cc04fb8 = (undefined8 *)0x0;
    DAT_14cc04fc0 = 1;
    FUN_1401b309e(&DAT_14cc04fb8,1,0);
    *DAT_14cc04fb8 = local_58;
    atexit((_func_5014 *)&LAB_144486c67);
    _Init_thread_footer(&DAT_14cc04fc8);
  }
  if (1 < *(int *)(param_2 + 0x20)) {
    plVar10 = (longlong *)(param_2 + 0x18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc04fe0) && (FUN_144b3d300(&DAT_14cc04fe0), DAT_14cc04fe0 == -1)) {
      FUN_1446f57c6(&DAT_14cc04f30,&local_68);
      FUN_1400021e4(&local_68,&local_58);
      FUN_144a882a8(&DAT_14cc04fd0,&local_58,&DAT_149e06162);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144486c78);
      _Init_thread_footer(&DAT_14cc04fe0);
    }
    FUN_149165e8a(&local_58,plVar10);
    if ((longlong)local_50 != 0) {
      lVar13 = (longlong)local_50 << 4;
      plVar11 = local_58;
LAB_149165ac7:
      iVar4 = DAT_14cc04fd8 + -1;
      if (DAT_14cc04fd8 == 0) {
        iVar4 = 0;
      }
      puVar8 = &DAT_149dfb77a;
      if (DAT_14cc04fd8 != 0) {
        puVar8 = DAT_14cc04fd0;
      }
      bVar1 = FUN_144a791f8(plVar11,puVar8,iVar4,1);
      if (bVar1 == 0) goto code_r0x000149165afa;
      uVar7 = 0;
      uVar2 = DAT_14cc04fd8 - 1;
      if (DAT_14cc04fd8 == 0) {
        uVar2 = uVar7;
      }
      if ((int)plVar11[1] == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*plVar11;
        uVar7 = (int)plVar11[1] - 1;
      }
      if ((int)uVar7 <= (int)uVar2) {
        uVar2 = uVar7;
      }
      uVar5 = (ulonglong)uVar2;
      if ((int)uVar2 < 1) {
        uVar5 = 0;
      }
      FUN_14006620a(&local_68,puVar8 + uVar5,uVar7 - (int)uVar5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc05038) && (FUN_144b3d300(&DAT_14cc05038), DAT_14cc05038 == -1))
      {
        DAT_14cc05008 = 0;
        DAT_14cc05010 = 0;
        DAT_14cc04fe8 = 0;
        _DAT_14cc04ff0 = 0;
        _DAT_14cc05014 = 0xffffffff00000080;
        DAT_14cc0501c = 0;
        DAT_14cc05028 = 0;
        DAT_14cc05030 = 0;
        atexit(FUN_144486c89);
        _Init_thread_footer(&DAT_14cc05038);
      }
      puVar8 = local_68;
      if (local_60 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      uVar5 = (ulonglong)(local_60 - 1);
      if (local_60 == 0) {
        uVar5 = 0;
      }
      uVar3 = FUN_144a49b4a(uVar5,puVar8);
      iVar4 = FUN_14917f0fc(uVar3,&local_68);
      uVar5 = 0;
      if (iVar4 != -1) {
        uVar5 = (longlong)iVar4 * 0x28 + DAT_14cc04fe8;
      }
      if (uVar5 == 0) {
        local_78 = &local_68;
        FUN_14917f19a(&local_80);
        lVar13 = DAT_14cc04fe8;
        lVar6 = (longlong)local_80;
        plVar10 = (longlong *)(DAT_14cc04fe8 + lVar6 * 0x28 + 0x10);
        FUN_149165e8a(&local_78,&local_68);
        if (0 < local_70) {
          lVar12 = lVar13 + lVar6 * 0x28;
          puVar9 = (uint *)(lVar12 + 0x18);
          iVar4 = 0;
          do {
            FUN_149166102(&local_80,iVar4);
            uVar2 = *puVar9;
            *puVar9 = uVar2 + 1;
            if (*(uint *)(lVar12 + 0x1c) < uVar2 + 1) {
              FUN_1446f84a2(plVar10,uVar2);
            }
            *(ulonglong *)(*plVar10 + (longlong)(int)uVar2 * 8) = CONCAT44(uStack_7c,local_80);
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_70);
        }
        uVar2 = DAT_14cc04fc0;
        lVar12 = (longlong)(int)DAT_14cc04fc0;
        if (lVar12 != 0) {
          iVar4 = *(int *)(lVar13 + 0x18 + lVar6 * 0x28);
          *(uint *)(lVar13 + 0x18 + lVar6 * 0x28) = iVar4 + DAT_14cc04fc0;
          if ((uint)(*(int *)(lVar13 + 0x1c + lVar6 * 0x28) - iVar4) < uVar2) {
            FUN_1446f84a2(plVar10,iVar4);
          }
          memcpy((void *)((longlong)iVar4 * 8 + *plVar10),DAT_14cc04fb8,lVar12 << 3);
        }
        FUN_1447a1747(local_78,local_70);
        if (local_78 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        plVar10 = (longlong *)(uVar5 + 0x10);
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
LAB_149165b04:
      bVar1 = bVar1 ^ 1;
      goto LAB_149165b10;
    }
    local_50 = 0;
    bVar1 = 1;
LAB_149165b10:
    FUN_1447a1747(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (bVar1 == 0) goto LAB_149165a4a;
  }
  plVar10 = (longlong *)&DAT_14cc04fb8;
LAB_149165a4a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000149165afa:
  plVar11 = plVar11 + 2;
  lVar13 = lVar13 + -0x10;
  if (lVar13 == 0) goto LAB_149165b04;
  goto LAB_149165ac7;
}



// FUNCTION 149165e8a FUN_149165e8a body=630 status=ok
// SIG undefined FUN_149165e8a(void)

/* WARNING: Removing unreachable block (ram,0x000149166018) */

longlong * FUN_149165e8a(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = *(int *)(param_2 + 1);
  if (((1 < (longlong)iVar5) && (*(short *)*param_2 == 0x28)) &&
     (((short *)*param_2)[(longlong)iVar5 + -2] == 0x29)) {
    FUN_144a63a7c(param_2,&local_58,1,iVar5 + -3);
    if (local_50 - 2U < 0x7fffffff) {
      lVar11 = 0;
      iVar8 = 0;
      iVar6 = 0;
      iVar5 = local_50;
      bVar9 = 1;
      do {
        sVar1 = *(short *)(local_58 + lVar11 * 2);
        bVar10 = sVar1 == 0x22 ^ bVar9;
        if (sVar1 == 0x29) {
          if (bVar10 != 0) {
            if (iVar6 < 2) {
              iVar6 = 1;
            }
            iVar6 = iVar6 + -1;
          }
        }
        else if (sVar1 == 0x28) {
          iVar6 = iVar6 + (uint)bVar10;
        }
        else if ((bVar9 & iVar6 == 0 & sVar1 == 0x2c) == 1) {
          FUN_144a63a7c(&local_58,local_78,iVar8,(int)lVar11 - iVar8);
          local_88 = 1;
          FUN_1414bc8e4(local_78,&local_68,&DAT_149e001d8,&DAT_149dfb77a);
          lVar7 = param_1[1];
          uVar4 = (int)lVar7 + 1;
          *(uint *)(param_1 + 1) = uVar4;
          if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
            FUN_1447a1bd6(param_1);
          }
          lVar2 = *param_1;
          lVar7 = (longlong)(int)lVar7 * 0x10;
          *(undefined8 *)(lVar2 + lVar7) = 0;
          *(undefined8 *)(lVar2 + lVar7) = local_68;
          *(undefined4 *)(lVar2 + 8 + lVar7) = (undefined4)local_60;
          *(undefined4 *)(lVar2 + 0xc + lVar7) = local_60._4_4_;
          local_60 = 0;
          local_68 = 0;
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          iVar8 = (int)lVar11 + 1;
          iVar6 = 0;
          iVar5 = local_50;
        }
        lVar11 = lVar11 + 1;
        iVar3 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar3 = 0;
        }
        bVar9 = bVar10;
      } while (lVar11 < iVar3);
      if (1 < iVar5) {
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
        iVar5 = 0;
        if (0 < iVar8) {
          iVar5 = iVar8;
        }
        FUN_14006620a(local_78,(ulonglong)(uint)(iVar5 * 2) + local_58,iVar3 - iVar5);
        FUN_140e64772(local_78,&local_68);
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1447a1bd6(param_1,iVar5);
        }
        lVar11 = *param_1;
        lVar7 = (longlong)iVar5 * 0x10;
        *(undefined8 *)(lVar11 + lVar7) = local_68;
        *(undefined4 *)(lVar11 + 8 + lVar7) = (undefined4)local_60;
        *(undefined4 *)(lVar11 + 0xc + lVar7) = local_60._4_4_;
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149166102 FUN_149166102 body=165 status=ok
// SIG undefined FUN_149166102(void)

undefined8 FUN_149166102(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a83b10(&local_38);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_28,puVar1,1);
  FUN_1446f57c6(&DAT_14cc04f30,local_40);
  FUN_14915d984(param_1,local_40,local_28);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1491661a8 FUN_1491661a8 body=109 status=ok
// SIG undefined FUN_1491661a8(void)

void FUN_1491661a8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)((undefined8 *)*param_2)[4];
  if (*plVar1 == 0) {
    FUN_149166102(&local_20,**(undefined4 **)*param_2);
  }
  else {
    FUN_1446f57c6(&DAT_14cc00db0,&local_20);
  }
  *plVar1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166230 FUN_149166230 body=45 status=ok
// SIG undefined FUN_149166230(void)

void FUN_149166230(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14916625e(*(undefined1 *)(param_1 + 0x120),param_1 + 0x460);
  return;
}



// FUNCTION 14916625e FUN_14916625e body=331 status=ok
// SIG undefined FUN_14916625e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916625e(char param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if (param_1 == '\0') {
      if (iVar1 < DAT_14cc05098) {
        FUN_144b3d300(&DAT_14cc05098);
        if (DAT_14cc05098 == -1) {
          FUN_1446f470e(&local_30,L"False",1);
          _DAT_14cc05088 = local_30 & 0xffffffff;
          _DAT_14cc05090 = (undefined4)(local_30 >> 0x20);
          DAT_14cc05094 = 0;
          _Init_thread_footer(&DAT_14cc05098);
        }
      }
      puVar2 = (undefined8 *)&DAT_14cc05088;
    }
    else {
      if (iVar1 < DAT_14cc05080) {
        FUN_144b3d300(&DAT_14cc05080);
        if (DAT_14cc05080 == -1) {
          FUN_1446f470e(&local_20,&DAT_149e0617a,1);
          _DAT_14cc05070 = local_20 & 0xffffffff;
          _DAT_14cc05078 = (undefined4)(local_20 >> 0x20);
          DAT_14cc0507c = 0;
          _Init_thread_footer(&DAT_14cc05080);
        }
      }
      puVar2 = (undefined8 *)&DAT_14cc05070;
    }
  }
  else {
    puVar2 = &DAT_14cc00db0;
  }
  FUN_1446f57c6(puVar2,&local_28);
  *param_2 = local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491663aa FUN_1491663aa body=94 status=ok
// SIG undefined FUN_1491663aa(void)

void FUN_1491663aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)puVar1[8];
  FUN_1490f692c(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x50),&local_20,*puVar1,puVar1[4]);
  *puVar2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916640a FUN_14916640a body=244 status=ok
// SIG undefined FUN_14916640a(void)

void FUN_14916640a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1490f692c(local_e8,&local_28,param_1 + 8,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166500 FUN_149166500 body=63 status=ok
// SIG undefined FUN_149166500(void)

void FUN_149166500(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149166642(*(undefined8 *)(param_1 + 0xc0),*puVar1,*(undefined4 *)puVar1[4],
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                puVar1[0x10]);
  return;
}



// FUNCTION 149166546 FUN_149166546 body=250 status=ok
// SIG undefined FUN_149166546(void)

void FUN_149166546(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x20;
  local_148 = param_1 + 0x18;
  FUN_149166642(&local_138,param_1 + 8,*(undefined4 *)(param_1 + 0x10),
                *(undefined1 *)(param_1 + 0x14));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166642 FUN_149166642 body=237 status=ok
// SIG undefined FUN_149166642(void)

void FUN_149166642(longlong param_1,longlong *param_2,int param_3,char param_4,longlong *param_5,
                  longlong *param_6)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_5 = *param_2;
  *param_6 = 0;
  if ((0 < param_3) && (*param_2 != 0)) {
    if (param_4 == '\0') {
      FUN_1490f6fca(*(undefined8 *)(param_1 + 0x50),&local_40,param_2,param_3);
      *param_5 = local_40;
      FUN_1490f6ab4(*(undefined8 *)(param_1 + 0x50),&local_40,param_2,param_3);
    }
    else {
      FUN_1490f6e18(*(undefined8 *)(param_1 + 0x50),&local_40,param_2,param_3);
      *param_5 = local_40;
      FUN_1490f6c6c(*(undefined8 *)(param_1 + 0x50),&local_40,param_2,param_3);
    }
    *param_6 = local_40;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166730 FUN_149166730 body=111 status=ok
// SIG undefined FUN_149166730(void)

void FUN_149166730(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  local_38 = puVar1[8];
  puVar2 = (undefined8 *)puVar1[0xc];
  local_30 = 1;
  FUN_1490f715e(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x50),&local_20,*puVar1,puVar1[4]);
  *puVar2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491667a0 FUN_1491667a0 body=261 status=ok
// SIG undefined FUN_1491667a0(void)

void FUN_1491667a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined4 local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x18;
  local_140 = 1;
  FUN_1490f715e(local_e8,&local_28,param_1 + 8,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = local_28;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491668a6 FUN_1491668a6 body=103 status=ok
// SIG undefined FUN_1491668a6(void)

void FUN_1491668a6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 1;
  local_38 = param_4;
  FUN_1490f715e(*(undefined8 *)(param_1 + 0x50),&local_20,param_2,param_3);
  *param_5 = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916690e FUN_14916690e body=49 status=ok
// SIG undefined FUN_14916690e(void)

void FUN_14916690e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined1 *)puVar1[8];
  uVar3 = FUN_1490f73c0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x50),*puVar1,puVar1[4],1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149166946 FUN_149166946 body=235 status=ok
// SIG undefined FUN_149166946(void)

void FUN_149166946(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar1 = FUN_1490f73c0(local_e8,param_1 + 8,param_1 + 0x10,1);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166a32 FUN_149166a32 body=49 status=ok
// SIG undefined FUN_149166a32(void)

void FUN_149166a32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined1 *)puVar1[8];
  uVar3 = FUN_1490f755e(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x50),*puVar1,puVar1[4],1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149166a6a FUN_149166a6a body=235 status=ok
// SIG undefined FUN_149166a6a(void)

void FUN_149166a6a(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar1 = FUN_1490f755e(local_e8,param_1 + 8,param_1 + 0x10,1);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166b56 FUN_149166b56 body=49 status=ok
// SIG undefined FUN_149166b56(void)

void FUN_149166b56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined1 *)puVar1[8];
  uVar3 = FUN_1490f76fc(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x50),*puVar1,puVar1[4],1);
  *puVar2 = uVar3;
  return;
}



// FUNCTION 149166b8e FUN_149166b8e body=235 status=ok
// SIG undefined FUN_149166b8e(void)

void FUN_149166b8e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  uVar1 = FUN_1490f76fc(local_e8,param_1 + 8,param_1 + 0x10,1);
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166c8e FUN_149166c8e body=229 status=ok
// SIG undefined FUN_149166c8e(void)

void FUN_149166c8e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149166d74(param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166d74 FUN_149166d74 body=129 status=ok
// SIG undefined FUN_149166d74(void)

void FUN_149166d74(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140474144(&local_28,param_1,param_2);
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



// FUNCTION 149166df6 FUN_149166df6 body=50 status=ok
// SIG undefined FUN_149166df6(void)

void FUN_149166df6(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149166f20(*puVar1,*(undefined4 *)puVar1[4],
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                puVar1[0x10]);
  return;
}



// FUNCTION 149166e2e FUN_149166e2e body=241 status=ok
// SIG undefined FUN_149166e2e(void)

void FUN_149166e2e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x30;
  FUN_149166f20(param_1 + 8,*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1c),
                param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149166f20 FUN_149166f20 body=547 status=ok
// SIG undefined FUN_149166f20(void)

void FUN_149166f20(longlong *param_1,uint param_2,char param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a787a6(param_4,param_1);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  *param_5 = 0;
  param_5[1] = 0;
  if (0 < (int)param_2 && 1 < (int)param_1[1]) {
    uVar4 = (int)param_1[1] - 1;
    if (param_3 == '\0') {
      uVar3 = uVar4;
      if (param_2 < uVar4) {
        uVar3 = param_2;
      }
      FUN_14006620a(&local_48,(ulonglong)uVar3 * 2 + *param_1,uVar4 - uVar3);
      if (&local_48 == param_4) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = local_48;
        local_48 = 0;
        *(undefined4 *)(param_4 + 1) = local_40;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_3c;
      }
      uVar4 = (int)param_1[1] - 1;
      if ((int)param_1[1] == 0) {
        puVar2 = &DAT_149dfb77a;
        uVar4 = 0;
      }
      else {
        puVar2 = (undefined2 *)*param_1;
      }
      if ((int)param_2 < (int)uVar4) {
        uVar4 = param_2;
      }
      if ((int)uVar4 < 1) {
        uVar4 = 0;
      }
      FUN_14006620a(&local_48,puVar2,uVar4);
    }
    else {
      FUN_14006620a(&local_48,*param_1);
      if (&local_48 == param_4) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = local_48;
        local_48 = 0;
        *(undefined4 *)(param_4 + 1) = local_40;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_3c;
      }
      iVar1 = (int)param_1[1];
      if (iVar1 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_1;
      }
      uVar4 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      uVar3 = uVar4;
      if ((int)param_2 < (int)uVar4) {
        uVar3 = param_2;
      }
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      FUN_140056680(&local_48,(longlong)puVar2 + ((longlong)(int)uVar4 * 2 - (ulonglong)(uVar3 * 2))
                   );
    }
    if (&local_48 == param_5) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_5 != 0) {
        FUN_1400020a8();
      }
      *param_5 = local_48;
      *(undefined4 *)(param_5 + 1) = local_40;
      *(undefined4 *)((longlong)param_5 + 0xc) = local_3c;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14916715c FUN_14916715c body=233 status=ok
// SIG undefined FUN_14916715c(void)

void FUN_14916715c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149167246(param_1 + 8,param_1 + 0x18,param_1 + 0x28,param_1 + 0x38);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167246 FUN_149167246 body=162 status=ok
// SIG undefined FUN_149167246(void)

void FUN_149167246(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = &DAT_149dfb77a;
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar2 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined2 *)*param_2;
  }
  local_38 = 0;
  FUN_140807d8e(param_1,&local_28,puVar1,puVar2);
  if (&local_28 == param_4) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_28;
    *(undefined4 *)(param_4 + 1) = local_20;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491672ea FUN_1491672ea body=68 status=ok
// SIG undefined FUN_1491672ea(void)

void FUN_1491672ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined1 *)puVar2[8];
  iVar1 = *(int *)((undefined8 *)puVar2[4] + 1);
  iVar6 = 0;
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)puVar2[4];
    iVar6 = iVar1 + -1;
  }
  uVar4 = FUN_144a38768(*puVar2,puVar5,iVar6,0);
  *puVar3 = uVar4;
  return;
}



// FUNCTION 149167334 FUN_149167334 body=255 status=ok
// SIG undefined FUN_149167334(void)

void FUN_149167334(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar6 = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar6 = 0;
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x18);
  }
  uVar1 = FUN_144a38768(param_1 + 8,puVar3,iVar6,0);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149167434 FUN_149167434 body=98 status=ok
// SIG undefined FUN_149167434(void)

void FUN_149167434(undefined8 param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  wchar_t *_Str1;
  wchar_t *_Str2;
  bool bVar4;
  
  param_2 = (longlong *)*param_2;
  iVar3 = *(int *)((undefined8 *)param_2[4] + 1);
  bVar4 = false;
  uVar2 = 0;
  if (iVar3 == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = *(wchar_t **)param_2[4];
    uVar2 = iVar3 - 1;
  }
  puVar1 = (undefined1 *)param_2[8];
  if (0 < (int)uVar2) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = *(wchar_t **)*param_2;
    }
    iVar3 = wcsncmp(_Str1,_Str2,(ulonglong)uVar2);
    bVar4 = iVar3 == 0;
  }
  *puVar1 = bVar4;
  return;
}



// FUNCTION 14916749c FUN_14916749c body=278 status=ok
// SIG undefined FUN_14916749c(void)

void FUN_14916749c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Str1;
  wchar_t *_Str2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  bVar6 = false;
  uVar3 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(int *)(param_1 + 0x20) == 0) {
    _Str2 = L"";
  }
  else {
    _Str2 = *(wchar_t **)(param_1 + 0x18);
    uVar3 = *(int *)(param_1 + 0x20) - 1;
  }
  if (0 < (int)uVar3) {
    if (*(int *)(param_1 + 0x10) == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = *(wchar_t **)(param_1 + 8);
    }
    iVar1 = wcsncmp(_Str1,_Str2,(ulonglong)uVar3);
    bVar6 = iVar1 == 0;
  }
  *(bool *)(param_1 + 0x28) = bVar6;
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491675ce FUN_1491675ce body=229 status=ok
// SIG undefined FUN_1491675ce(void)

void FUN_1491675ce(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491676b4(param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491676b4 FUN_1491676b4 body=98 status=ok
// SIG undefined FUN_1491676b4(void)

void FUN_1491676b4(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  bool bVar3;
  
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  if (_Str == (wchar_t *)0x0) {
    bVar3 = false;
  }
  else {
    sVar2 = wcslen(_Str);
    iVar1 = FUN_1447ee042(param_1,_Str,sVar2 & 0xffffffff,0,0,0xffffffff);
    bVar3 = iVar1 != -1;
  }
  *param_3 = bVar3;
  return;
}



// FUNCTION 14916772e FUN_14916772e body=221 status=ok
// SIG undefined FUN_14916772e(void)

void FUN_14916772e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916780c FUN_14916780c body=36 status=ok
// SIG undefined FUN_14916780c(void)

void FUN_14916780c(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ((undefined8 *)*param_2)[4];
  FUN_144a787a6(uVar1,*(undefined8 *)*param_2);
  FUN_14033cb48(uVar1);
  return;
}



// FUNCTION 149167830 FUN_149167830 body=217 status=ok
// SIG undefined FUN_149167830(void)

void FUN_149167830(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14916790a(param_1);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916790a FUN_14916790a body=88 status=ok
// SIG undefined FUN_14916790a(void)

void FUN_14916790a(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2);
    if (iVar2 != 0) {
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
  }
  FUN_14033cb48(puVar1);
  return;
}



// FUNCTION 149167972 FUN_149167972 body=225 status=ok
// SIG undefined FUN_149167972(void)

void FUN_149167972(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149167a54(param_1 + 8,param_1 + 0x18);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167a54 FUN_149167a54 body=123 status=ok
// SIG undefined FUN_149167a54(void)

void FUN_149167a54(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400d3e84(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167ae0 FUN_149167ae0 body=225 status=ok
// SIG undefined FUN_149167ae0(void)

void FUN_149167ae0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149167bc2(param_1 + 8,param_1 + 0x18);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167bc2 FUN_149167bc2 body=123 status=ok
// SIG undefined FUN_149167bc2(void)

void FUN_149167bc2(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a2b0a4(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167c4e FUN_149167c4e body=225 status=ok
// SIG undefined FUN_149167c4e(void)

void FUN_149167c4e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149167d30(param_1 + 8,param_1 + 0x18);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167d30 FUN_149167d30 body=123 status=ok
// SIG undefined FUN_149167d30(void)

void FUN_149167d30(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14020fe2a(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167dc2 FUN_149167dc2 body=228 status=ok
// SIG undefined FUN_149167dc2(void)

void FUN_149167dc2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149167ea8(param_1 + 8,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149167ea8 FUN_149167ea8 body=171 status=ok
// SIG undefined FUN_149167ea8(void)

void FUN_149167ea8(undefined8 *param_1,int param_2,longlong *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
    iVar2 = 0;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  FUN_14006620a(&local_28,puVar1,iVar2);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149167f6a FUN_149167f6a body=228 status=ok
// SIG undefined FUN_149167f6a(void)

void FUN_149167f6a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149168050(param_1 + 8,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149168050 FUN_149168050 body=182 status=ok
// SIG undefined FUN_149168050(void)

void FUN_149168050(undefined8 *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  iVar3 = iVar1;
  if (param_2 < iVar1) {
    iVar3 = param_2;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  FUN_140056680(&local_28,(longlong)puVar2 + ((longlong)iVar1 * 2 - (ulonglong)(uint)(iVar3 * 2)));
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



// FUNCTION 149168124 FUN_149168124 body=232 status=ok
// SIG undefined FUN_149168124(void)

void FUN_149168124(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14916820e(param_1 + 8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                param_1 + 0x20);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916820e FUN_14916820e body=204 status=ok
// SIG undefined FUN_14916820e(void)

void FUN_14916820e(undefined8 *param_1,uint param_2,int param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 < 0) {
    uVar3 = *(int *)(param_1 + 1) - 1;
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
      uVar3 = 0;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    if ((int)uVar3 <= (int)param_2) {
      param_2 = uVar3;
    }
    uVar1 = (ulonglong)param_2;
    if ((int)param_2 < 1) {
      uVar1 = 0;
    }
    FUN_14006620a(&local_28,puVar2 + uVar1,uVar3 - (int)uVar1);
  }
  else {
    FUN_144a63a7c(param_1,&local_28,param_2,param_3);
  }
  if (&local_28 == param_4) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_28;
    *(undefined4 *)(param_4 + 1) = local_20;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491682fa FUN_1491682fa body=233 status=ok
// SIG undefined FUN_1491682fa(void)

void FUN_1491682fa(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_1491683e4(param_1 + 8,param_1 + 0x18,param_1 + 0x28,param_1 + 0x2c);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491683e4 FUN_1491683e4 body=86 status=ok
// SIG undefined FUN_1491683e4(void)

void FUN_1491683e4(longlong param_1,undefined8 *param_2,undefined1 *param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  
  *param_4 = -1;
  if ((*(int *)(param_1 + 8) < 2) || (*(int *)(param_2 + 1) < 2)) {
    bVar2 = false;
  }
  else {
    iVar1 = FUN_1447ee042(param_1,*param_2,*(int *)(param_2 + 1) + -1,0,0,0xffffffff);
    *param_4 = iVar1;
    bVar2 = iVar1 != -1;
  }
  *param_3 = bVar2;
  return;
}



// FUNCTION 14916844e FUN_14916844e body=229 status=ok
// SIG undefined FUN_14916844e(void)

void FUN_14916844e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149168534(param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149168534 FUN_149168534 body=606 status=ok
// SIG undefined FUN_149168534(void)

void FUN_149168534(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  longlong local_80;
  void *local_78;
  ulonglong uStack_70;
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = *(int *)((longlong)param_3 + 0xc);
  local_80 = param_2;
  FUN_1447a1747(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_1408be2c4(param_3,0);
  }
  uVar3 = *(uint *)(param_1 + 1);
  if ((1 < (int)uVar3) && (1 < *(int *)(local_80 + 8))) {
    local_58 = (void *)0x0;
    pvVar4 = (void *)*param_1;
    local_50 = uVar3;
    FUN_1446dd670(&local_58,(ulonglong)uVar3,0);
    memcpy(local_58,pvVar4,(ulonglong)uVar3 * 2);
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_90 = 0;
    local_98 = 0;
    cVar6 = FUN_1407cdbc6(&local_58,local_80);
    if (cVar6 != '\0') {
      do {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(param_3,iVar2);
        }
        pvVar4 = local_68;
        lVar5 = *param_3;
        lVar7 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar5 + lVar7);
        *(undefined8 *)(lVar5 + lVar7) = 0;
        lVar8 = (longlong)(int)uStack_60;
        *(int *)(lVar5 + 8 + lVar7) = (int)uStack_60;
        if (lVar8 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,uStack_60 & 0xffffffff,0);
          memcpy((void *)*puVar1,pvVar4,lVar8 * 2);
        }
        FUN_144a7e010(&local_68);
        iVar2 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(&local_58,local_78,iVar2);
        local_90 = 0;
        local_98 = 0;
        cVar6 = FUN_1407cdbc6(&local_58,local_80,&local_68,&local_78);
      } while (cVar6 != '\0');
    }
    if (1 < (int)uStack_70) {
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_3,iVar2);
      }
      pvVar4 = local_78;
      lVar5 = *param_3;
      lVar8 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      *(undefined8 *)(lVar5 + lVar8) = 0;
      lVar7 = (longlong)(int)uStack_70;
      *(int *)(lVar5 + 8 + lVar8) = (int)uStack_70;
      if (lVar7 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_70 & 0xffffffff,0);
        memcpy((void *)*puVar1,pvVar4,lVar7 * 2);
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149168794 FUN_149168794 body=83 status=ok
// SIG undefined FUN_149168794(void)

void FUN_149168794(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2 = (longlong *)*param_2;
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_1491688e0(&local_18,param_2[4],param_2[8]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491687e8 FUN_1491687e8 body=246 status=ok
// SIG undefined FUN_1491687e8(void)

void FUN_1491687e8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = &PTR_FUN_14bad5c20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_11c = 0;
  local_118 = 0x3f91111111111111;
  local_110 = 0x800;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1490d751a(&local_148);
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  FUN_1491688e0(&local_30,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ceac(&local_148);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491688e0 FUN_1491688e0 body=198 status=ok
// SIG undefined FUN_1491688e0(void)

void FUN_1491688e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1446f8c06(param_3,0);
  }
  if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
    *(undefined2 *)*param_3 = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = (undefined2 *)*param_2;
    }
    FUN_1470b21fe(&local_30,param_1,puVar1);
    if (&local_30 == param_3) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_30;
      *(undefined4 *)(param_3 + 1) = local_28;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491689c0 FUN_1491689c0 body=224 status=ok
// SIG undefined FUN_1491689c0(void)

void FUN_1491689c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_149168aa2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1 + 0x10);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149168aa2 FUN_149168aa2 body=307 status=ok
// SIG undefined FUN_149168aa2(void)

void FUN_149168aa2(undefined4 param_1,undefined4 param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switch(param_2) {
  case 2:
    pwVar1 = L"%02d";
    break;
  case 3:
    pwVar1 = L"%03d";
    break;
  case 4:
    pwVar1 = L"%04d";
    break;
  case 5:
    pwVar1 = L"%05d";
    break;
  case 6:
    pwVar1 = L"%06d";
    break;
  case 7:
    pwVar1 = L"%07d";
    break;
  case 8:
    pwVar1 = L"%08d";
    break;
  case 9:
    pwVar1 = L"%09d";
    break;
  case 10:
    pwVar1 = L"%10d";
    break;
  case 0xb:
    pwVar1 = L"%11d";
    break;
  case 0xc:
    pwVar1 = L"%12d";
    break;
  case 0xd:
    pwVar1 = L"%13d";
    break;
  case 0xe:
    pwVar1 = L"%14d";
    break;
  case 0xf:
    pwVar1 = L"%15d";
    break;
  case 0x10:
    pwVar1 = L"%16d";
    break;
  default:
    FUN_1448f870c(&local_28,param_1);
    goto LAB_149168b7f;
  }
  FUN_140002266(&local_28,pwVar1);
LAB_149168b7f:
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149168bd6 FUN_149168bd6 body=556 status=ok
// SIG undefined FUN_149168bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149168bd6(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc05350) {
    FUN_144b3d300(&DAT_14cc05350);
    if (DAT_14cc05350 == -1) {
      DAT_14cc05340 = 0;
      _DAT_14cc05348 = 0;
      atexit(FUN_144486cc0);
      _Init_thread_footer(&DAT_14cc05350);
    }
  }
  if (DAT_14cc05348 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc05368) {
      FUN_144b3d300(&DAT_14cc05368);
      if (DAT_14cc05368 == -1) {
        DAT_14cc05358 = (undefined2 *)0x0;
        _DAT_14cc05360 = 2;
        FUN_149157980(&DAT_14cc05358,2,0);
        *DAT_14cc05358 = 0x201;
        atexit((_func_5014 *)&LAB_144486cf1);
        _Init_thread_footer(&DAT_14cc05368);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc05348;
    uVar2 = DAT_14cc05348 + 1;
    if (DAT_14cc0534c < uVar2) {
      uVar4 = _DAT_14cc05348 & 0xffffffff;
      DAT_14cc05348 = uVar2;
      FUN_1490f2336(&DAT_14cc05340,uVar4);
      uVar2 = DAT_14cc05348;
    }
    DAT_14cc05348 = uVar2;
    lVar5 = lVar5 * 0x50 + DAT_14cc05340;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f470e(&local_70,L"Value",1);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,0,&DAT_14cc05358);
    uVar2 = DAT_14cc05348;
    lVar5 = (longlong)(int)DAT_14cc05348;
    uVar3 = DAT_14cc05348 + 1;
    _DAT_14cc05348 = CONCAT44(DAT_14cc0534c,uVar3);
    if (DAT_14cc0534c < uVar3) {
      FUN_1490f2336(&DAT_14cc05340,uVar2);
    }
    uVar1 = DAT_14c764f1c;
    lVar5 = lVar5 * 0x50 + DAT_14cc05340;
    FUN_1446f470e(local_68,L"Result",1);
    FUN_144478fc0(lVar5,local_68[0],1,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc05340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149168e04 FUN_149168e04 body=122 status=ok
// SIG undefined FUN_149168e04(void)

void FUN_149168e04(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1[2] == 0) {
    uVar3 = puVar1[1];
  }
  else {
    uVar3 = FUN_1490f79e6();
  }
  uVar2 = *puVar1;
  puVar1 = (undefined8 *)puVar1[4];
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(int *)((longlong)puVar1 + 0xc) < 0) {
    FUN_1446f8c06(puVar1,0);
  }
  if ((undefined2 *)*puVar1 != (undefined2 *)0x0) {
    *(undefined2 *)*puVar1 = 0;
  }
  FUN_14280c87e(uVar3,puVar1,uVar2,uVar2,0,0,0);
  return;
}



// FUNCTION 149168e7e FUN_149168e7e body=554 status=ok
// SIG undefined FUN_149168e7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149168e7e(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc05380) {
    FUN_144b3d300(&DAT_14cc05380);
    if (DAT_14cc05380 == -1) {
      DAT_14cc05370 = 0;
      _DAT_14cc05378 = 0;
      atexit(FUN_144486ece);
      _Init_thread_footer(&DAT_14cc05380);
    }
  }
  if (DAT_14cc05378 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc05398) {
      FUN_144b3d300(&DAT_14cc05398);
      if (DAT_14cc05398 == -1) {
        DAT_14cc05388 = (undefined2 *)0x0;
        _DAT_14cc05390 = 2;
        FUN_149157980(&DAT_14cc05388,2,0);
        *DAT_14cc05388 = 0x201;
        atexit((_func_5014 *)&LAB_144486eff);
        _Init_thread_footer(&DAT_14cc05398);
      }
    }
    lVar5 = (longlong)(int)DAT_14cc05378;
    uVar2 = DAT_14cc05378 + 1;
    if (DAT_14cc0537c < uVar2) {
      uVar4 = _DAT_14cc05378 & 0xffffffff;
      DAT_14cc05378 = uVar2;
      FUN_1490f2336(&DAT_14cc05370,uVar4);
      uVar2 = DAT_14cc05378;
    }
    DAT_14cc05378 = uVar2;
    uVar1 = DAT_14c764f1c;
    lVar5 = lVar5 * 0x50 + DAT_14cc05370;
    FUN_1446f470e(local_68,L"String",1);
    FUN_144478fc0(lVar5,local_68[0],0,uVar1);
    uVar2 = DAT_14cc05378;
    lVar5 = (longlong)(int)DAT_14cc05378;
    uVar3 = DAT_14cc05378 + 1;
    _DAT_14cc05378 = CONCAT44(DAT_14cc0537c,uVar3);
    if (DAT_14cc0537c < uVar3) {
      FUN_1490f2336(&DAT_14cc05370,uVar2);
    }
    lVar5 = lVar5 * 0x50 + DAT_14cc05370;
    local_68[0] = 0;
    local_58 = 0;
    FUN_1446f470e(&local_70,L"Result",1);
    local_78 = local_68;
    FUN_144478fee(lVar5,local_70,1,&DAT_14cc05388);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cc05370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491690b6 FUN_1491690b6 body=280 status=ok
// SIG undefined FUN_1491690b6(void)

void FUN_1491690b6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    fVar4 = *(float *)(param_1 + 0x18);
  }
  else {
    fVar4 = *(float *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    fVar4 = *(float *)(param_1 + 8) + fVar4;
  }
  else {
    fVar4 = (float)((double)*(float *)(param_1 + 8) * (double)CONCAT44(uStack_114,uStack_118) +
                   (double)fVar4);
  }
  *(float *)(param_1 + 0x18) = fVar4;
  *(float *)(param_1 + 0x14) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491691d0 FUN_1491691d0 body=187 status=ok
// SIG undefined FUN_1491691d0(void)

void FUN_1491691d0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  uVar5 = puVar2[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14916939c(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar5,uVar7,uVar8);
  return;
}



// FUNCTION 149169298 FUN_149169298 body=259 status=ok
// SIG undefined FUN_149169298(void)

void FUN_149169298(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x70;
  local_150 = param_1 + 0x58;
  local_158 = param_1 + 0x40;
  FUN_14916939c(&local_138,param_1 + 8,param_1 + 0x20,*(undefined1 *)(param_1 + 0x38));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916939c FUN_14916939c body=168 status=ok
// SIG undefined FUN_14916939c(void)

void FUN_14916939c(longlong param_1,double *param_2,double *param_3,char param_4,double *param_5,
                  double *param_6,char *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*param_7 == '\0') {
    param_6[2] = param_3[2];
    dVar1 = param_3[1];
    *param_6 = *param_3;
    param_6[1] = dVar1;
    dVar1 = *param_3;
    dVar2 = param_3[1];
    param_5[2] = param_3[2];
    *param_5 = dVar1;
    param_5[1] = dVar2;
    *param_7 = '\x01';
  }
  if (param_4 == '\0') {
    dVar1 = param_2[2] + param_6[2];
    dVar3 = param_6[1] + param_2[1];
    dVar2 = *param_6 + *param_2;
  }
  else {
    dVar2 = *(double *)(param_1 + 0x20);
    dVar1 = param_2[2] * dVar2 + param_6[2];
    dVar3 = param_2[1] * dVar2 + param_6[1];
    dVar2 = dVar2 * *param_2 + *param_6;
  }
  *param_6 = dVar2;
  param_6[1] = dVar3;
  param_6[2] = dVar1;
  param_5[2] = param_6[2];
  dVar1 = param_6[1];
  *param_5 = *param_6;
  param_5[1] = dVar1;
  return;
}



// FUNCTION 149169444 FUN_149169444 body=241 status=ok
// SIG undefined FUN_149169444(void)

void FUN_149169444(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  char *pcVar7;
  float fVar8;
  
  puVar3 = (undefined8 *)*param_2;
  fVar8 = *(float *)*puVar3;
  fVar1 = *(float *)puVar3[4];
  cVar2 = *(char *)puVar3[8];
  pfVar4 = (float *)puVar3[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar6 = (float *)FUN_144828ac0(puVar3 + 0x10,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar7 = (char *)FUN_144828ac0(*param_2 + 0xa0,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar7 == '\0') {
    *pfVar6 = fVar1;
    *pfVar4 = fVar1;
    *pcVar7 = '\x01';
  }
  if (cVar2 != '\0') {
    fVar8 = (float)((double)(fVar8 + -1.0) * *(double *)(lVar5 + 0x20) + 1.0);
  }
  fVar1 = *pfVar6;
  *pfVar6 = fVar8 * fVar1;
  *pfVar4 = fVar8 * fVar1;
  return;
}



// FUNCTION 149169542 FUN_149169542 body=285 status=ok
// SIG undefined FUN_149169542(void)

void FUN_149169542(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  fVar4 = *(float *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) != '\0') {
    fVar4 = (float)((double)(fVar4 + -1.0) * (double)CONCAT44(uStack_114,uStack_118) + 1.0);
  }
  fVar4 = fVar4 * *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = fVar4;
  *(float *)(param_1 + 0x14) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149169660 FUN_149169660 body=187 status=ok
// SIG undefined FUN_149169660(void)

void FUN_149169660(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  uVar5 = puVar2[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14916982c(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar5,uVar7,uVar8);
  return;
}



// FUNCTION 149169728 FUN_149169728 body=259 status=ok
// SIG undefined FUN_149169728(void)

void FUN_149169728(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x70;
  local_150 = param_1 + 0x58;
  local_158 = param_1 + 0x40;
  FUN_14916982c(&local_138,param_1 + 8,param_1 + 0x20,*(undefined1 *)(param_1 + 0x38));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


