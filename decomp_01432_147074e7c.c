// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147074e7c FUN_147074e7c body=230 status=ok
// SIG undefined FUN_147074e7c(void)

int * FUN_147074e7c(longlong *param_1,int *param_2)

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



// FUNCTION 147074f62 FUN_147074f62 body=199 status=ok
// SIG undefined FUN_147074f62(void)

undefined8 FUN_147074f62(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if ((*plVar11 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar12 * 0x28) == param_3[1])) {
          plVar3 = (longlong *)plVar11[3];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_14707502a(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 14707502a FUN_14707502a body=114 status=ok
// SIG undefined FUN_14707502a(void)

void FUN_14707502a(longlong *param_1,int param_2)

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



// FUNCTION 14707509c FUN_14707509c body=574 status=ok
// SIG undefined FUN_14707509c(void)

void FUN_14707509c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
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
      iVar6 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *local_80;
        lVar7 = (longlong)iVar6;
        uVar4 = *(undefined8 *)(lVar3 + lVar7 * 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar7 * 0x28);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
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



// FUNCTION 1470752dc FUN_1470752dc body=9 status=ok
// SIG undefined FUN_1470752dc(void)

void FUN_1470752dc(longlong param_1)

{
  FUN_147075304(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1470752e6 FUN_1470752e6 body=29 status=ok
// SIG undefined FUN_1470752e6(void)

undefined8 FUN_1470752e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147075304 FUN_147075304 body=56 status=ok
// SIG undefined FUN_147075304(void)

void FUN_147075304(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_14596b11c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14707533c FUN_14707533c body=269 status=ok
// SIG undefined FUN_14707533c(void)

void FUN_14707533c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_1470753f1;
          goto LAB_147075400;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1470753f1:
    FUN_14474d06a(param_1,0);
  }
LAB_147075400:
  plVar4 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707544a FUN_14707544a body=269 status=ok
// SIG undefined FUN_14707544a(void)

void FUN_14707544a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_1470754ff;
          goto LAB_14707550e;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1470754ff:
    FUN_14474d06a(param_1,0);
  }
LAB_14707550e:
  plVar4 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147075558 FUN_147075558 body=68 status=ok
// SIG undefined FUN_147075558(void)

void FUN_147075558(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14707559d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1470755e6(param_1,param_2);
  return;
}



// FUNCTION 14707559d FUN_14707559d body=73 status=ok
// SIG undefined FUN_14707559d(void)

void FUN_14707559d(longlong param_1,int param_2)

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



// FUNCTION 1470755e6 FUN_1470755e6 body=95 status=ok
// SIG undefined FUN_1470755e6(void)

void FUN_1470755e6(longlong param_1,uint param_2)

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



// FUNCTION 147075646 FUN_147075646 body=132 status=ok
// SIG undefined FUN_147075646(void)

void FUN_147075646(longlong param_1,int param_2)

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



// FUNCTION 1470756cc FUN_1470756cc body=68 status=ok
// SIG undefined FUN_1470756cc(void)

void FUN_1470756cc(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14596b11c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147075712(param_1,param_2);
  return;
}



// FUNCTION 147075712 FUN_147075712 body=95 status=ok
// SIG undefined FUN_147075712(void)

void FUN_147075712(longlong param_1,uint param_2)

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



// FUNCTION 147075772 FUN_147075772 body=68 status=ok
// SIG undefined FUN_147075772(void)

void FUN_147075772(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1470757b7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147075800(param_1,param_2);
  return;
}



// FUNCTION 1470757b7 FUN_1470757b7 body=73 status=ok
// SIG undefined FUN_1470757b7(void)

void FUN_1470757b7(longlong param_1,int param_2)

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



// FUNCTION 147075800 FUN_147075800 body=95 status=ok
// SIG undefined FUN_147075800(void)

void FUN_147075800(longlong param_1,uint param_2)

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



// FUNCTION 147075860 FUN_147075860 body=132 status=ok
// SIG undefined FUN_147075860(void)

void FUN_147075860(longlong param_1,int param_2)

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



// FUNCTION 1470758e6 FUN_1470758e6 body=322 status=ok
// SIG undefined FUN_1470758e6(void)

void FUN_1470758e6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147075a2a FUN_147075a2a body=279 status=ok
// SIG undefined FUN_147075a2a(void)

void FUN_147075a2a(longlong *param_1)

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
      FUN_14707141e((longlong)iStack_44 * 0x28 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147075b42 FUN_147075b42 body=322 status=ok
// SIG undefined FUN_147075b42(void)

void FUN_147075b42(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 147075c86 FUN_147075c86 body=311 status=ok
// SIG undefined FUN_147075c86(void)

void FUN_147075c86(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      plVar3 = *(longlong **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147075dbe FUN_147075dbe body=31 status=ok
// SIG undefined FUN_147075dbe(void)

undefined8 FUN_147075dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147075dfa FUN_147075dfa body=93 status=ok
// SIG undefined FUN_147075dfa(void)

void FUN_147075dfa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1587a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147075e58 FUN_147075e58 body=126 status=ok
// SIG undefined FUN_147075e58(void)

void FUN_147075e58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1587a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147075ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147075ed6 FUN_147075ed6 body=21 status=ok
// SIG undefined FUN_147075ed6(void)

undefined8 FUN_147075ed6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147075eec FUN_147075eec body=38 status=ok
// SIG undefined FUN_147075eec(void)

undefined8 FUN_147075eec(undefined8 param_1,int param_2)

{
  FUN_145cedfb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147075f22 FUN_147075f22 body=248 status=ok
// SIG undefined FUN_147075f22(void)

longlong *
FUN_147075f22(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_14001cc68(0xf0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a158a40;
  plVar1 = plVar4 + 2;
  local_48 = (longlong *)*param_3;
  plStack_40 = (longlong *)param_3[1];
  FUN_14706c056(plVar1,&local_48,param_4,param_5);
  local_48 = plVar1;
  plStack_40 = plVar4;
  FUN_1470761c2(&local_48,plVar1);
  plVar3 = plStack_40;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707601e FUN_14707601e body=129 status=ok
// SIG undefined FUN_14707601e(void)

undefined8 FUN_14707601e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e3d1e(local_58);
  local_48 = 0;
  uStack_40 = 0;
  FUN_1407c869a(local_58,&local_48,0);
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_48,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470760bc FUN_1470760bc body=221 status=ok
// SIG undefined FUN_1470760bc(void)

longlong * FUN_1470760bc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x18);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_14707616d;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar10 = iVar7 == iVar6;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar10);
        lVar4 = *plVar9;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_147076454(param_2,iVar7);
          }
          lVar5 = *param_2;
          *(longlong *)(lVar5 + (longlong)iVar7 * 0x10) = lVar4;
          *(longlong **)(lVar5 + 8 + (longlong)iVar7 * 0x10) = plVar3;
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
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
LAB_14707616d:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  return param_2;
}



// FUNCTION 14707619a FUN_14707619a body=9 status=ok
// SIG undefined FUN_14707619a(void)

void FUN_14707619a(longlong param_1)

{
  FUN_14706c320(param_1 + 0x10);
  return;
}



// FUNCTION 1470761a4 FUN_1470761a4 body=29 status=ok
// SIG undefined FUN_1470761a4(void)

undefined8 FUN_1470761a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470761c2 FUN_1470761c2 body=167 status=ok
// SIG undefined FUN_1470761c2(void)

void FUN_1470761c2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14707623d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14707623d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14707623d:
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
                    /* WARNING: Could not recover jumptable at 0x00014707625d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14707626a FUN_14707626a body=68 status=ok
// SIG undefined FUN_14707626a(void)

undefined8 * FUN_14707626a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a158a80;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470762c2 FUN_1470762c2 body=118 status=ok
// SIG undefined FUN_1470762c2(void)

void FUN_1470762c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a158a80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147076338 FUN_147076338 body=118 status=ok
// SIG undefined FUN_147076338(void)

void FUN_147076338(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a158a80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1470763ae FUN_1470763ae body=156 status=ok
// SIG undefined FUN_1470763ae(void)

void FUN_1470763ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a158a80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014707643a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147076454 FUN_147076454 body=132 status=ok
// SIG undefined FUN_147076454(void)

void FUN_147076454(longlong param_1,int param_2)

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



// FUNCTION 147076560 FUN_147076560 body=59 status=ok
// SIG undefined FUN_147076560(void)

undefined8 FUN_147076560(longlong *param_1)

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



// FUNCTION 14707663c FUN_14707663c body=47 status=ok
// SIG undefined FUN_14707663c(void)

void FUN_14707663c(undefined8 param_1,longlong *param_2)

{
  if (param_2[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147076682 FUN_147076682 body=97 status=ok
// SIG undefined FUN_147076682(void)

undefined8 FUN_147076682(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x3c);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = uVar2;
    *(undefined4 *)(param_2 + 0x44) = uVar3;
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x48);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 14707670c FUN_14707670c body=59 status=ok
// SIG undefined FUN_14707670c(void)

undefined8 FUN_14707670c(longlong *param_1)

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



// FUNCTION 1470767aa FUN_1470767aa body=51 status=ok
// SIG undefined FUN_1470767aa(void)

void FUN_1470767aa(longlong *param_1)

{
  if ((char)param_1[10] == '\x01') {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



// FUNCTION 1470767f6 FUN_1470767f6 body=47 status=ok
// SIG undefined FUN_1470767f6(void)

void FUN_1470767f6(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14707683c FUN_14707683c body=67 status=ok
// SIG undefined FUN_14707683c(void)

undefined1 FUN_14707683c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1470768a8 FUN_1470768a8 body=59 status=ok
// SIG undefined FUN_1470768a8(void)

undefined8 FUN_1470768a8(longlong *param_1)

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



// FUNCTION 147076946 FUN_147076946 body=51 status=ok
// SIG undefined FUN_147076946(void)

void FUN_147076946(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147076992 FUN_147076992 body=47 status=ok
// SIG undefined FUN_147076992(void)

void FUN_147076992(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470769d8 FUN_1470769d8 body=67 status=ok
// SIG undefined FUN_1470769d8(void)

undefined1 FUN_1470769d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147076a44 FUN_147076a44 body=59 status=ok
// SIG undefined FUN_147076a44(void)

undefined8 FUN_147076a44(longlong *param_1)

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



// FUNCTION 147076ae2 FUN_147076ae2 body=51 status=ok
// SIG undefined FUN_147076ae2(void)

void FUN_147076ae2(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147076b2e FUN_147076b2e body=47 status=ok
// SIG undefined FUN_147076b2e(void)

void FUN_147076b2e(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147076b74 FUN_147076b74 body=67 status=ok
// SIG undefined FUN_147076b74(void)

undefined1 FUN_147076b74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147076be0 FUN_147076be0 body=59 status=ok
// SIG undefined FUN_147076be0(void)

undefined8 FUN_147076be0(longlong *param_1)

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



// FUNCTION 147076c7e FUN_147076c7e body=51 status=ok
// SIG undefined FUN_147076c7e(void)

void FUN_147076c7e(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147076ce6 FUN_147076ce6 body=54 status=ok
// SIG undefined FUN_147076ce6(void)

undefined1 FUN_147076ce6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147076d44 FUN_147076d44 body=59 status=ok
// SIG undefined FUN_147076d44(void)

undefined8 FUN_147076d44(longlong *param_1)

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



// FUNCTION 147076d8a FUN_147076d8a body=37 status=ok
// SIG undefined FUN_147076d8a(void)

void FUN_147076d8a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147076e44 FUN_147076e44 body=64 status=ok
// SIG undefined FUN_147076e44(void)

undefined1 FUN_147076e44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147076eac FUN_147076eac body=59 status=ok
// SIG undefined FUN_147076eac(void)

undefined8 FUN_147076eac(longlong *param_1)

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



// FUNCTION 147076ef2 FUN_147076ef2 body=37 status=ok
// SIG undefined FUN_147076ef2(void)

void FUN_147076ef2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147076fb0 FUN_147076fb0 body=59 status=ok
// SIG undefined FUN_147076fb0(void)

undefined8 FUN_147076fb0(longlong *param_1)

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



// FUNCTION 1470770c0 FUN_1470770c0 body=86 status=ok
// SIG undefined FUN_1470770c0(void)

undefined1 FUN_1470770c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x10);
    puVar3 = (undefined8 *)(param_2 + 0x10);
    for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_3 + 0x60);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 14707713e FUN_14707713e body=59 status=ok
// SIG undefined FUN_14707713e(void)

undefined8 FUN_14707713e(longlong *param_1)

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



// FUNCTION 147077184 FUN_147077184 body=37 status=ok
// SIG undefined FUN_147077184(void)

void FUN_147077184(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0xd] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 147077242 FUN_147077242 body=59 status=ok
// SIG undefined FUN_147077242(void)

undefined8 FUN_147077242(longlong *param_1)

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



// FUNCTION 147077308 FUN_147077308 body=47 status=ok
// SIG undefined FUN_147077308(void)

void FUN_147077308(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14707734e FUN_14707734e body=73 status=ok
// SIG undefined FUN_14707734e(void)

undefined1 FUN_14707734e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1470773c0 FUN_1470773c0 body=59 status=ok
// SIG undefined FUN_1470773c0(void)

undefined8 FUN_1470773c0(longlong *param_1)

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



// FUNCTION 14707745e FUN_14707745e body=51 status=ok
// SIG undefined FUN_14707745e(void)

void FUN_14707745e(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470774b6 FUN_1470774b6 body=46 status=ok
// SIG undefined FUN_1470774b6(void)

void FUN_1470774b6(undefined8 param_1,longlong param_2)

{
  FUN_147077604(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470774fa FUN_1470774fa body=70 status=ok
// SIG undefined FUN_1470774fa(void)

undefined8 FUN_1470774fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_147077642(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147077568 FUN_147077568 body=59 status=ok
// SIG undefined FUN_147077568(void)

undefined8 FUN_147077568(longlong *param_1)

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



// FUNCTION 147077604 FUN_147077604 body=61 status=ok
// SIG undefined FUN_147077604(void)

void FUN_147077604(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147077642 FUN_147077642 body=95 status=ok
// SIG undefined FUN_147077642(void)

undefined8 * FUN_147077642(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147077604(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470776a2(param_1,iVar1);
      FUN_147077715(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470776a2 FUN_1470776a2 body=115 status=ok
// SIG undefined FUN_1470776a2(void)

void FUN_1470776a2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147077715 FUN_147077715 body=52 status=ok
// SIG undefined FUN_147077715(void)

void FUN_147077715(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14707774a(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 14707774a FUN_14707774a body=166 status=ok
// SIG undefined FUN_14707774a(void)

undefined8 * FUN_14707774a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1470777f2 FUN_1470777f2 body=52 status=ok
// SIG undefined FUN_1470777f2(void)

void FUN_1470777f2(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_147077604(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147077892 FUN_147077892 body=59 status=ok
// SIG undefined FUN_147077892(void)

undefined8 FUN_147077892(longlong *param_1)

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



// FUNCTION 14707797a FUN_14707797a body=54 status=ok
// SIG undefined FUN_14707797a(void)

undefined1 FUN_14707797a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147077af0(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1470779d8 FUN_1470779d8 body=59 status=ok
// SIG undefined FUN_1470779d8(void)

undefined8 FUN_1470779d8(longlong *param_1)

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



// FUNCTION 147077a1e FUN_147077a1e body=34 status=ok
// SIG undefined FUN_147077a1e(void)

void FUN_147077a1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_147077a8e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147077a8e FUN_147077a8e body=98 status=ok
// SIG undefined FUN_147077a8e(void)

void FUN_147077a8e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147077af0 FUN_147077af0 body=69 status=ok
// SIG undefined FUN_147077af0(void)

longlong FUN_147077af0(longlong param_1,longlong param_2)

{
  FUN_140bee9ec();
  FUN_1447bdc4c(param_1 + 0x10,param_2 + 0x10);
  FUN_140bee9ec(param_1 + 0x20,param_2 + 0x20);
  FUN_1447bdc4c(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 147077b6a FUN_147077b6a body=54 status=ok
// SIG undefined FUN_147077b6a(void)

undefined1 FUN_147077b6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447bdc4c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147077bc8 FUN_147077bc8 body=59 status=ok
// SIG undefined FUN_147077bc8(void)

undefined8 FUN_147077bc8(longlong *param_1)

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



// FUNCTION 147077c0e FUN_147077c0e body=37 status=ok
// SIG undefined FUN_147077c0e(void)

void FUN_147077c0e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147077c9c FUN_147077c9c body=47 status=ok
// SIG undefined FUN_147077c9c(void)

void FUN_147077c9c(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147077ce2 FUN_147077ce2 body=67 status=ok
// SIG undefined FUN_147077ce2(void)

undefined1 FUN_147077ce2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447bdc4c(param_2,param_3);
    FUN_1447bdc4c(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147077d4e FUN_147077d4e body=59 status=ok
// SIG undefined FUN_147077d4e(void)

undefined8 FUN_147077d4e(longlong *param_1)

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



// FUNCTION 147077dec FUN_147077dec body=51 status=ok
// SIG undefined FUN_147077dec(void)

void FUN_147077dec(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147077ea0 FUN_147077ea0 body=59 status=ok
// SIG undefined FUN_147077ea0(void)

undefined8 FUN_147077ea0(longlong *param_1)

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



// FUNCTION 147077fa4 FUN_147077fa4 body=114 status=ok
// SIG undefined FUN_147077fa4(void)

undefined1 FUN_147077fa4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    puVar9 = (undefined8 *)(param_3 + 0x10);
    puVar10 = (undefined8 *)(param_2 + 0x10);
    for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_3 + 0x60);
    uVar1 = *(undefined4 *)(param_3 + 0x68);
    uVar2 = *(undefined4 *)(param_3 + 0x6c);
    uVar3 = *(undefined4 *)(param_3 + 0x70);
    uVar4 = *(undefined4 *)(param_3 + 0x74);
    uVar5 = *(undefined4 *)(param_3 + 0x7c);
    uVar6 = *(undefined4 *)(param_3 + 0x80);
    uVar7 = *(undefined4 *)(param_3 + 0x84);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_3 + 0x78);
    *(undefined4 *)(param_2 + 0x7c) = uVar5;
    *(undefined4 *)(param_2 + 0x80) = uVar6;
    *(undefined4 *)(param_2 + 0x84) = uVar7;
    *(undefined4 *)(param_2 + 0x68) = uVar1;
    *(undefined4 *)(param_2 + 0x6c) = uVar2;
    *(undefined4 *)(param_2 + 0x70) = uVar3;
    *(undefined4 *)(param_2 + 0x74) = uVar4;
    param_2 = param_2 + 0x88;
    param_3 = param_3 + 0x88;
  }
  return 1;
}



// FUNCTION 14707803e FUN_14707803e body=59 status=ok
// SIG undefined FUN_14707803e(void)

undefined8 FUN_14707803e(longlong *param_1)

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



// FUNCTION 14707808a FUN_14707808a body=43 status=ok
// SIG undefined FUN_14707808a(void)

void FUN_14707808a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x11] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 14707814e FUN_14707814e body=59 status=ok
// SIG undefined FUN_14707814e(void)

undefined8 FUN_14707814e(longlong *param_1)

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



// FUNCTION 147078230 FUN_147078230 body=60 status=ok
// SIG undefined FUN_147078230(void)

undefined1 FUN_147078230(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147078294 FUN_147078294 body=59 status=ok
// SIG undefined FUN_147078294(void)

undefined8 FUN_147078294(longlong *param_1)

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



// FUNCTION 1470782da FUN_1470782da body=37 status=ok
// SIG undefined FUN_1470782da(void)

void FUN_1470782da(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147078374 FUN_147078374 body=47 status=ok
// SIG undefined FUN_147078374(void)

void FUN_147078374(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470783ba FUN_1470783ba body=73 status=ok
// SIG undefined FUN_1470783ba(void)

undefined1 FUN_1470783ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14707842c FUN_14707842c body=59 status=ok
// SIG undefined FUN_14707842c(void)

undefined8 FUN_14707842c(longlong *param_1)

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



// FUNCTION 1470784ca FUN_1470784ca body=51 status=ok
// SIG undefined FUN_1470784ca(void)

void FUN_1470784ca(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147078522 FUN_147078522 body=47 status=ok
// SIG undefined FUN_147078522(void)

void FUN_147078522(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147078568 FUN_147078568 body=79 status=ok
// SIG undefined FUN_147078568(void)

undefined1 FUN_147078568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x18,param_3 + 0x18);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1470785e0 FUN_1470785e0 body=59 status=ok
// SIG undefined FUN_1470785e0(void)

undefined8 FUN_1470785e0(longlong *param_1)

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



// FUNCTION 14707867e FUN_14707867e body=51 status=ok
// SIG undefined FUN_14707867e(void)

void FUN_14707867e(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1470786fa FUN_1470786fa body=59 status=ok
// SIG undefined FUN_1470786fa(void)

undefined8 FUN_1470786fa(longlong *param_1)

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



// FUNCTION 1470787e4 FUN_1470787e4 body=59 status=ok
// SIG undefined FUN_1470787e4(void)

undefined8 FUN_1470787e4(longlong *param_1)

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



// FUNCTION 1470788ba FUN_1470788ba body=54 status=ok
// SIG undefined FUN_1470788ba(void)

undefined1 FUN_1470788ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147078918 FUN_147078918 body=59 status=ok
// SIG undefined FUN_147078918(void)

undefined8 FUN_147078918(longlong *param_1)

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



// FUNCTION 14707895e FUN_14707895e body=37 status=ok
// SIG undefined FUN_14707895e(void)

void FUN_14707895e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147078a08 FUN_147078a08 body=54 status=ok
// SIG undefined FUN_147078a08(void)

undefined1 FUN_147078a08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147078a66 FUN_147078a66 body=59 status=ok
// SIG undefined FUN_147078a66(void)

undefined8 FUN_147078a66(longlong *param_1)

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



// FUNCTION 147078aac FUN_147078aac body=37 status=ok
// SIG undefined FUN_147078aac(void)

void FUN_147078aac(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147078b56 FUN_147078b56 body=54 status=ok
// SIG undefined FUN_147078b56(void)

undefined1 FUN_147078b56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147078bb4 FUN_147078bb4 body=59 status=ok
// SIG undefined FUN_147078bb4(void)

undefined8 FUN_147078bb4(longlong *param_1)

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



// FUNCTION 147078bfa FUN_147078bfa body=37 status=ok
// SIG undefined FUN_147078bfa(void)

void FUN_147078bfa(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147078cb4 FUN_147078cb4 body=60 status=ok
// SIG undefined FUN_147078cb4(void)

undefined1 FUN_147078cb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 147078d18 FUN_147078d18 body=59 status=ok
// SIG undefined FUN_147078d18(void)

undefined8 FUN_147078d18(longlong *param_1)

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



// FUNCTION 147078d5e FUN_147078d5e body=37 status=ok
// SIG undefined FUN_147078d5e(void)

void FUN_147078d5e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 147078e38 FUN_147078e38 body=59 status=ok
// SIG undefined FUN_147078e38(void)

undefined8 FUN_147078e38(longlong *param_1)

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



// FUNCTION 147078eda FUN_147078eda body=29 status=ok
// SIG undefined FUN_147078eda(void)

void FUN_147078eda(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a15dc00;
  return;
}



// FUNCTION 147078ef8 FUN_147078ef8 body=36 status=ok
// SIG undefined FUN_147078ef8(void)

undefined8 FUN_147078ef8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147078f38 FUN_147078f38 body=93 status=ok
// SIG undefined FUN_147078f38(void)

void FUN_147078f38(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a15db90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147078f96 FUN_147078f96 body=123 status=ok
// SIG undefined FUN_147078f96(void)

void FUN_147078f96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a15db90;
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



// FUNCTION 14707901e FUN_14707901e body=21 status=ok
// SIG undefined FUN_14707901e(void)

undefined8 FUN_14707901e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147079034 FUN_147079034 body=34 status=ok
// SIG undefined FUN_147079034(void)

undefined8 FUN_147079034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14707905e FUN_14707905e body=144 status=ok
// SIG undefined FUN_14707905e(void)

undefined8 * FUN_14707905e(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,L"ReliabilityHandlerComponent",1);
  FUN_147079dbe(param_1,local_20);
  *param_1 = &PTR_FUN_14a15dc80;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0x3fb999999999999a;
  param_1[10] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470790f0 FUN_1470790f0 body=159 status=ok
// SIG undefined FUN_1470790f0(void)

void FUN_1470790f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  FUN_147079b30();
  (**(code **)(*param_2 + 0x10))(param_2,0x30,0x30);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x30) << 3,(longlong)*(int *)(param_1 + 0x34) << 3
            );
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,0x48,0x48);
        uVar4 = *(int *)(lVar3 + 8) + 7U >> 3;
        (**(code **)(*param_2 + 0x10))(param_2,uVar4,uVar4);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147079190 FUN_147079190 body=34 status=ok
// SIG undefined FUN_147079190(void)

void FUN_147079190(longlong *param_1)

{
  (**(code **)(*param_1 + 0x68))(param_1,1);
  FUN_145dcbe6a(param_1);
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



// FUNCTION 1470791b6 FUN_1470791b6 body=299 status=ok
// SIG undefined FUN_1470791b6(void)

void FUN_1470791b6(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  double dVar7;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_38);
  dVar7 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  if (*(double *)(param_1 + 0x48) <= dVar7 - *(double *)(param_1 + 0x50)) {
    *(double *)(param_1 + 0x50) = dVar7;
    iVar4 = *(int *)(param_1 + 0x30);
    if (0 < iVar4) {
      uVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar6 * 8);
        if (*(uint *)(param_1 + 0x3c) < *(uint *)(lVar1 + 0x28)) {
          lVar2 = *(longlong *)(param_1 + 8);
          puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar5 = 0;
          puVar5[1] = lVar1;
          if (puVar5 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(lVar2 + 0x1f0);
            *(undefined8 **)(lVar2 + 0x1f0) = puVar5;
            *puVar3 = puVar5;
          }
        }
        else {
          if (~uVar6 + iVar4 != 0) {
            _Dst = (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar6 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar6 + iVar4) << 3);
            iVar4 = *(int *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = iVar4 + -1;
          FUN_14707968c(param_1 + 0x28);
          uVar6 = uVar6 - 1;
          if (lVar1 != 0) {
            FUN_1470797e8(lVar1);
            FUN_1400020a8(lVar1);
          }
        }
        uVar6 = uVar6 + 1;
        iVar4 = *(int *)(param_1 + 0x30);
      } while ((int)uVar6 < iVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470792e2 FUN_1470792e2 body=260 status=ok
// SIG undefined FUN_1470792e2(void)

void FUN_1470792e2(longlong param_1,void *param_2,int param_3,undefined4 *param_4)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  void *_Dst;
  ulonglong _Size;
  double dVar7;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  QueryPerformanceCounter(&local_50);
  dVar7 = (double)local_50.QuadPart * DAT_14c83f420;
  dVar1 = *(double *)(param_1 + 0x48);
  *(int *)(puVar6 + 1) = param_3;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)((longlong)puVar6 + 0xc) = *param_4;
  *(undefined4 *)(puVar6 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
  *(undefined4 *)(puVar6 + 3) = uVar5;
  puVar6[4] = dVar7 + 16777216.0 + dVar1;
  *(int *)(puVar6 + 5) = iVar2;
  _Size = (ulonglong)(param_3 + 7U >> 3);
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  _Dst = (void *)FUN_144a7d36f(_Size);
  *puVar6 = _Dst;
  memcpy(_Dst,param_2,_Size);
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_147079728((longlong *)(param_1 + 0x28),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 8) = puVar6;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470793ee FUN_1470793ee body=214 status=ok
// SIG undefined FUN_1470793ee(void)

undefined8 * FUN_1470793ee(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_1446f470e(&local_28,L"ReliabilityHandlerComponent",1);
  FUN_147079dbe(puVar1,local_28);
  *puVar1 = &PTR_FUN_14a15dc80;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 1;
  puVar1[8] = 0;
  puVar1[9] = 0x3fb999999999999a;
  puVar1[10] = 0;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a15ddf0;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470794c6 FUN_1470794c6 body=65 status=ok
// SIG undefined FUN_1470794c6(void)

undefined8 * FUN_1470794c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a15dc80;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_14597f13e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147079514 FUN_147079514 body=34 status=ok
// SIG undefined FUN_147079514(void)

void FUN_147079514(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a15dda0;
  return;
}



// FUNCTION 147079536 FUN_147079536 body=31 status=ok
// SIG undefined FUN_147079536(void)

undefined8 FUN_147079536(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147079572 FUN_147079572 body=93 status=ok
// SIG undefined FUN_147079572(void)

void FUN_147079572(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a15dd30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470795d0 FUN_1470795d0 body=123 status=ok
// SIG undefined FUN_1470795d0(void)

void FUN_1470795d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a15dd30;
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



// FUNCTION 147079658 FUN_147079658 body=21 status=ok
// SIG undefined FUN_147079658(void)

undefined8 FUN_147079658(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14707966e FUN_14707966e body=29 status=ok
// SIG undefined FUN_14707966e(void)

undefined8 FUN_14707966e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707968c FUN_14707968c body=62 status=ok
// SIG undefined FUN_14707968c(void)

void FUN_14707968c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470796ca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1470796ca FUN_1470796ca body=93 status=ok
// SIG undefined FUN_1470796ca(void)

ulonglong FUN_1470796ca(uint param_1,uint param_2)

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



// FUNCTION 147079728 FUN_147079728 body=132 status=ok
// SIG undefined FUN_147079728(void)

void FUN_147079728(longlong param_1,int param_2)

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



// FUNCTION 1470797ae FUN_1470797ae body=24 status=ok
// SIG undefined FUN_1470797ae(void)

void FUN_1470797ae(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470797c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1470797c6 FUN_1470797c6 body=29 status=ok
// SIG undefined FUN_1470797c6(void)

undefined8 FUN_1470797c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470797e8 FUN_1470797e8 body=72 status=ok
// SIG undefined FUN_1470797e8(void)

void FUN_1470797e8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    thunk_FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x000147079825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147079830 FUN_147079830 body=365 status=ok
// SIG undefined FUN_147079830(void)

void FUN_147079830(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = uVar4;
  *(longlong *)(param_1 + 0x248) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  uVar4 = *param_3;
  lVar5 = param_3[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x250) = uVar4;
  *(longlong *)(param_1 + 600) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((*(char *)(param_1 + 1) != '\0') && (iVar3 = *(int *)(param_1 + 0x1b0), (longlong)iVar3 != 0))
  {
    lVar5 = *(longlong *)(param_1 + 0x1a8);
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar7);
      if (*(char *)((longlong)plVar6 + 0x1b) == '\x01') {
        (**(code **)(*plVar6 + 0x78))();
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147079999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14707999e FUN_14707999e body=402 status=ok
// SIG undefined FUN_14707999e(void)

void FUN_14707999e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  (**(code **)(*param_2 + 0x10))(param_2,0x260,0x260);
  FUN_146821de0(param_1 + 0x40,param_2);
  FUN_146821cfa(param_1 + 0xf8,param_2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1b0) << 4,
             (longlong)*(int *)(param_1 + 0x1b4) << 4);
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1d0) << 3,
             (longlong)*(int *)(param_1 + 0x1d4) << 3);
  iVar1 = *(int *)(param_1 + 0x1d0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,0x48,0x48);
        uVar5 = *(int *)(lVar4 + 8) + 7U >> 3;
        (**(code **)(*param_2 + 0x10))(param_2,uVar5,uVar5);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x218) << 3,
             (longlong)*(int *)(param_1 + 0x21c) << 3);
  iVar1 = *(int *)(param_1 + 0x218);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x210);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        (**(code **)(*param_2 + 0x10))(param_2,0x48,0x48);
        uVar5 = *(int *)(lVar4 + 8) + 7U >> 3;
        (**(code **)(*param_2 + 0x10))(param_2,uVar5,uVar5);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147079b30 FUN_147079b30 body=24 status=ok
// SIG undefined FUN_147079b30(void)

void FUN_147079b30(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147079b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0x28,0x28);
  return;
}



// FUNCTION 147079b48 FUN_147079b48 body=227 status=ok
// SIG undefined FUN_147079b48(void)

undefined8 *
FUN_147079b48(undefined8 *param_1,undefined8 *param_2,void *param_3,int param_4,undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Dst;
  ulonglong _Size;
  
  *(int *)(param_1 + 1) = param_4;
  uVar3 = param_5[1];
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  _Size = (ulonglong)(param_4 + 7U >> 3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0),0x10);
  *param_1 = _Dst;
  memcpy(_Dst,param_3,_Size);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    param_1[6] = uVar3;
    param_1[7] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[7];
    param_1[6] = uVar3;
    param_1[7] = lVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 147079c2c FUN_147079c2c body=367 status=ok
// SIG undefined FUN_147079c2c(void)

ulonglong FUN_147079c2c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined2 *puVar3;
  wchar_t *_Str;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = param_1;
  FUN_14029eeae(&local_40,&local_78);
  puVar3 = local_78;
  if (local_70 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_68,L"%s PacketHandlerProfileConfig",puVar3);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = local_68;
  if (local_60 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_88 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,puVar3,L"Components",&local_58);
  if ((longlong)(int)uStack_50 != 0) {
    lVar6 = (longlong)(int)uStack_50 << 4;
    lVar5 = local_58;
    do {
      _Str = L"";
      if (*(int *)(param_2 + 1) != 0) {
        _Str = (wchar_t *)*param_2;
      }
      if (_Str != (wchar_t *)0x0) {
        sVar2 = wcslen(_Str);
        local_80 = 0xffffffff;
        local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
        iVar1 = FUN_1447ee042(lVar5,_Str,sVar2 & 0xffffffff,0);
        if (iVar1 != -1) {
          uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          goto LAB_147079d44;
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  uVar4 = 0;
LAB_147079d44:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147079d9c FUN_147079d9c body=33 status=ok
// SIG undefined FUN_147079d9c(void)

void FUN_147079d9c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a15e620;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 147079dbe FUN_147079dbe body=32 status=ok
// SIG undefined FUN_147079dbe(void)

void FUN_147079dbe(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_14a15e620;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = param_2;
  return;
}



// FUNCTION 147079dde FUN_147079dde body=4 status=ok
// SIG undefined FUN_147079dde(void)

void FUN_147079dde(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1a) = param_2;
  return;
}



// FUNCTION 147079de6 FUN_147079de6 body=54 status=ok
// SIG undefined FUN_147079de6(void)

undefined8 * FUN_147079de6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\PacketHandlers\\PacketHandler\\Classes\\HandlerComponentFactory.h",0x17,
                L"Pure virtual not implemented (%s)",
                L"UHandlerComponentFactory::CreateComponentInstance");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147079e24 FUN_147079e24 body=31 status=ok
// SIG undefined FUN_147079e24(void)

undefined8 FUN_147079e24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147079e60 FUN_147079e60 body=93 status=ok
// SIG undefined FUN_147079e60(void)

void FUN_147079e60(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a15ea90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147079ebe FUN_147079ebe body=126 status=ok
// SIG undefined FUN_147079ebe(void)

void FUN_147079ebe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a15ea90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147079f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147079f3c FUN_147079f3c body=21 status=ok
// SIG undefined FUN_147079f3c(void)

undefined8 FUN_147079f3c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147079f5c FUN_147079f5c body=48 status=ok
// SIG undefined FUN_147079f5c(void)

void FUN_147079f5c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147079f8c FUN_147079f8c body=224 status=ok
// SIG undefined FUN_147079f8c(void)

undefined8 FUN_147079f8c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99fdb0) {
    FUN_144b3d300(&DAT_14c99fdb0);
    if (DAT_14c99fdb0 == -1) {
      uVar1 = FUN_1448c2e86();
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8451bc) {
        FUN_144b3d300(&DAT_14c8451bc);
        if (DAT_14c8451bc == -1) {
          FUN_1446f470e(&DAT_14c8451b4,L"EngineCryptoFeature",1);
          _Init_thread_footer(&DAT_14c8451bc);
        }
      }
      FUN_1467eea62(uVar1,&DAT_14c99fda0,DAT_14c8451b4);
      atexit((_func_5014 *)&LAB_142b056a2);
      _Init_thread_footer(&DAT_14c99fdb0);
    }
  }
  return *DAT_14c99fda0;
}



// FUNCTION 14707a06c FUN_14707a06c body=138 status=ok
// SIG undefined FUN_14707a06c(void)

undefined8 FUN_14707a06c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)FUN_147079f8c();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    local_30 = *param_3;
    local_28 = *(undefined4 *)(param_3 + 1);
    local_40 = *param_2;
    local_38 = *(undefined4 *)(param_2 + 1);
    local_50 = *param_1;
    local_48 = *(undefined4 *)(param_1 + 1);
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707a0f8 FUN_14707a0f8 body=133 status=ok
// SIG undefined FUN_14707a0f8(void)

longlong FUN_14707a0f8(uint *param_1,ulonglong param_2)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*param_1;
  if (uVar4 != 0) {
    uVar3 = (ulonglong)
            *(uint *)(*(longlong *)(param_1 + 2) +
                     (param_2 >> (-(char)param_1[1] & 0x3fU) & 0xffffffff) * 4);
    lVar1 = *(longlong *)(param_1 + 4) + uVar4 * 2;
    if (uVar3 != 0xffffffff) {
      do {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 4) + uVar3 * 2);
        if ((((uint)uVar2 ^ (uint)param_2) & 0x7fff) == 0) {
          if (*(int *)(lVar1 + uVar3 * 4) == (int)(param_2 >> 0xf)) {
            return lVar1 + uVar4 * 4 + uVar3 * 4;
          }
        }
        else if ((short)uVar2 < 0) {
          return 0;
        }
        uVar3 = (ulonglong)((int)uVar3 + 1);
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 14707a17e FUN_14707a17e body=133 status=ok
// SIG undefined FUN_14707a17e(void)

void FUN_14707a17e(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *_Dst;
  ulonglong uVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  uVar1 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar1) {
    _Dst = *(longlong **)(param_1 + 0x38);
    uVar2 = 0;
    do {
      if (*_Dst == param_2) {
        if (uVar1 - 1 != (int)uVar2) {
          memmove(_Dst,_Dst + 4,(longlong)(int)((uVar1 - 1) - (int)uVar2) << 5);
          uVar1 = *(uint *)(param_1 + 0x40);
        }
        *(uint *)(param_1 + 0x40) = uVar1 - 1;
        FUN_14707ff52((undefined8 *)(param_1 + 0x38));
        *(undefined1 *)(param_1 + 0x118) = 1;
        break;
      }
      uVar2 = uVar2 + 1;
      _Dst = _Dst + 4;
    } while (uVar1 != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00014707a1c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  return;
}



// FUNCTION 14707a204 FUN_14707a204 body=313 status=ok
// SIG undefined FUN_14707a204(void)

uint * FUN_14707a204(longlong param_1,uint *param_2,ulonglong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *_Src;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  uVar5 = *(uint *)(param_1 + 0x70);
  uVar6 = (uint)param_3;
  *param_2 = uVar6 & 0xc0000000 | uVar5 & 0x3fffffff;
  if ((param_3 >> 0x1f & 1) == 0 && (param_3 >> 0x1e & 1) == 0) {
    *(uint *)(param_1 + 0x70) = uVar5 + 1;
    if (*(uint *)(param_1 + 0x74) < uVar5 + 1) {
      FUN_1447808da(plVar1,uVar5);
    }
    *(undefined4 *)(*plVar1 + (longlong)(int)uVar5 * 4) = 0;
  }
  else {
    _Src = (int *)((ulonglong)(uVar6 * 4) + *param_4);
    if ((uVar6 >> 0x1e & 1) == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = *_Src;
      uVar4 = iVar2 * 2 + 1;
      *(uint *)(param_1 + 0x70) = uVar5 + iVar2 * 2 + 1;
      if (*(int *)(param_1 + 0x74) - uVar5 <= (uint)(iVar2 * 2)) {
        FUN_1447808da(plVar1,uVar5);
      }
      memcpy((void *)((longlong)(int)uVar5 * 4 + *plVar1),_Src,(longlong)(int)uVar4 * 4);
    }
    if ((int)uVar6 < 0) {
      iVar2 = _Src[uVar4];
      uVar5 = iVar2 * 5 + 1;
      iVar3 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar3 + iVar2 * 5 + 1;
      if ((uint)(*(int *)(param_1 + 0x74) - iVar3) < uVar5) {
        FUN_1447808da(plVar1,iVar3);
      }
      else if (uVar5 == 0) {
        return param_2;
      }
      memcpy((void *)((longlong)iVar3 * 4 + *plVar1),_Src + uVar4,(longlong)(int)uVar5 << 2);
    }
  }
  return param_2;
}



// FUNCTION 14707a33d FUN_14707a33d body=235 status=ok
// SIG undefined FUN_14707a33d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14707a33d(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99fef0) {
    FUN_144b3d300(&DAT_14c99fef0);
    if (DAT_14c99fef0 == -1) {
      _DAT_14c99feb8 = 0;
      uRam000000014c99fec0 = 0;
      _DAT_14c99fec8 = 0;
      DAT_14c99fed0 = 0;
      uRam000000014c99fed8 = 0;
      _DAT_14c99fedc = 0;
      DAT_14c99fee0._0_4_ = 0;
      ram0x00014c99fee4 = 0;
      atexit(FUN_142b05f06);
      _Init_thread_footer(&DAT_14c99fef0);
    }
  }
  if ((longlong)*(int *)(param_2 + 0x88) == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x80);
    lVar6 = (longlong)*(int *)(param_2 + 0x88) * 0x38 + lVar5;
    iVar4 = 0;
    do {
      lVar3 = param_1[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = *param_1;
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar7);
          if (*(longlong *)(lVar2 + 0x10) == lVar5) {
            *(undefined1 *)(lVar2 + 0xc5) = 1;
            *(undefined **)(lVar2 + 0x10) = &DAT_14c99feb8;
            iVar4 = iVar4 + 1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar3 * 8 != lVar7);
      }
      lVar5 = lVar5 + 0x38;
    } while (lVar5 != lVar6);
  }
  return iVar4;
}



// FUNCTION 14707a428 FUN_14707a428 body=193 status=ok
// SIG undefined FUN_14707a428(void)

void FUN_14707a428(char *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*param_1 == '\x01') {
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar3 = 0;
      do {
        local_48 = *(undefined8 *)(lVar2 + 8 + lVar3);
        local_40 = *(undefined4 *)(lVar2 + 0x10 + lVar3);
        FUN_14707a33d(&local_48,param_2);
        lVar3 = lVar3 + 0x28;
      } while ((longlong)iVar1 * 0x28 != lVar3);
    }
  }
  else {
    local_58 = *(undefined8 *)(param_1 + 8);
    local_50 = *(undefined4 *)(param_1 + 0x10);
    FUN_14707a33d(&local_58,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014707a4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707a4ea FUN_14707a4ea body=187 status=ok
// SIG undefined FUN_14707a4ea(void)

void FUN_14707a4ea(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  
  lVar3 = (longlong)(int)(param_2 / *(ulonglong *)(param_1 + 0x90)) * 0x38;
  lVar1 = *(longlong *)(param_1 + 0x110) + lVar3;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x28 + lVar3) == 0) &&
     ((*(byte *)(param_1 + 0x100) & 2) == 0)) {
    plVar5 = (longlong *)FUN_1400dbadc();
    plVar7 = (longlong *)*plVar5;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)FUN_140e92164();
      *plVar5 = (longlong)plVar7;
    }
    if (*(int *)(lVar1 + 0x20) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(lVar1 + 0x18);
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x188))(plVar7,puVar8);
    puVar4 = *(undefined8 **)(lVar1 + 0x28);
    if ((puVar4 != puVar6) && (*(undefined8 **)(lVar1 + 0x28) = puVar6, puVar4 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  puVar4[1] = *(undefined8 *)(lVar1 + 8);
  *puVar4 = &PTR_FUN_14a1612d0;
  puVar4[2] = uVar2;
  return;
}



// FUNCTION 14707a5a6 FUN_14707a5a6 body=100 status=ok
// SIG undefined FUN_14707a5a6(void)

void FUN_14707a5a6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)*param_2;
    do {
      plVar1 = (longlong *)*plVar4;
      *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
      puVar2 = (undefined8 *)FUN_144aa748c(*param_1 + 0x18);
      *puVar2 = 0;
      puVar2[1] = plVar4;
      *(int *)(plVar4 + 7) = (int)plVar4[7] + 1;
      puVar3 = *(undefined8 **)(param_3 + 0x18);
      if (*(undefined8 **)(param_3 + 0x18) == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)(param_3 + 0x10);
      }
      *puVar3 = puVar2;
      *(undefined8 **)(param_3 + 0x18) = puVar2;
      plVar4 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14707a60a FUN_14707a60a body=114 status=ok
// SIG undefined FUN_14707a60a(void)

ulonglong FUN_14707a60a(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  QueryPerformanceCounter(&local_30);
  local_28 = 0xffffffffffffffff;
  FUN_14002f804(lVar1,&local_30,0);
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined1 *)(lVar1 + 0xa0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),uVar2) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707a67e FUN_14707a67e body=384 status=ok
// SIG undefined FUN_14707a67e(void)

undefined4 *
FUN_14707a67e(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_4[2] == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x270));
    iVar1 = *(int *)(param_1 + 0x280);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x278);
      lVar8 = 0;
      do {
        lVar4 = *(longlong *)(lVar7 + lVar8);
        puVar5 = (undefined1 *)FUN_1447a8686(lVar4,param_3);
        if (puVar5 != (undefined1 *)0x0) {
          uVar2 = *(uint *)(puVar5 + 1);
          uVar3 = *(uint *)(puVar5 + 6);
          uVar10 = (ulonglong)
                   CONCAT14(puVar5[5],
                            uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                            uVar3 << 0x18);
          if ((ulonglong)param_4[1] < uVar10) {
            uVar10 = param_4[1];
          }
          uVar9 = *(ulonglong *)
                   (*(longlong *)(lVar4 + 0xb0) +
                   (longlong)
                   (int)((ulonglong)
                         CONCAT14(*puVar5,uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                          (uVar2 & 0xff00) << 8 | uVar2 << 0x18) /
                        *(ulonglong *)(lVar4 + 0x98)) * 0xc) & 0xffffffffff;
          plVar6 = (longlong *)FUN_14707a4ea(lVar4,uVar9);
          lVar7 = (**(code **)(*plVar6 + 8))(plVar6,uVar9 + *param_4,uVar10,0);
          if (lVar7 != 0) {
            *param_2 = DAT_14c845dc8;
            memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
            *(longlong **)(param_2 + 0x42) = plVar6;
            *(longlong *)(param_2 + 0x44) = lVar7;
            goto LAB_14707a738;
          }
          *param_2 = 6;
          goto LAB_14707a732;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    *param_2 = 8;
LAB_14707a732:
    *(undefined2 *)(param_2 + 1) = 0;
LAB_14707a738:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x270));
  }
  else {
    *param_2 = 0xb;
    builtin_wcsncpy((wchar_t *)(param_2 + 1),L"Inva",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 3),L"lid ",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 5),L"read",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 7),L" opt",4);
    *(undefined8 *)(param_2 + 9) = 0x73006e006f0069;
    *(undefined2 *)(param_2 + 0xb) = 0;
  }
  return param_2;
}



// FUNCTION 14707a802 FUN_14707a802 body=112 status=ok
// SIG undefined FUN_14707a802(void)

void FUN_14707a802(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0170) {
    FUN_144b3d300(&DAT_14c9a0170);
    if (DAT_14c9a0170 == -1) {
      DAT_14c9a0160 = 0;
      DAT_14c9a0168 = 0;
      atexit(FUN_142b0a7cd);
      _Init_thread_footer(&DAT_14c9a0170);
      return;
    }
  }
  return;
}



// FUNCTION 14707a872 FUN_14707a872 body=270 status=ok
// SIG undefined FUN_14707a872(void)

void FUN_14707a872(undefined8 *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_14150a8f4();
  cVar1 = FUN_1412c2af4(uVar2,param_2,param_1);
  if (cVar1 == '\0') {
    if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
      plVar3 = (longlong *)FUN_14150a960();
      if (((longlong *)*plVar3 != (longlong *)0x0 && (int)plVar3[1] != 0) &&
         (cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x30))(), cVar1 != '\0')) {
        FUN_14150a960();
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_1407c869a(param_2,&local_38,0);
    puVar4 = local_38;
    if ((int)uStack_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0x12f4,
                  L"Failed to find requested encryption key %s",puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707a994 FUN_14707a994 body=61 status=ok
// SIG undefined FUN_14707a994(void)

void FUN_14707a994(undefined8 param_1)

{
  FUN_14707af8e();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
  FUN_1470823d0(&DAT_14c9a01a0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014707a9ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
  return;
}



// FUNCTION 14707a9d2 FUN_14707a9d2 body=409 status=ok
// SIG undefined FUN_14707a9d2(void)

void FUN_14707a9d2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined1 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong **local_70;
  undefined8 local_68;
  longlong **local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  *param_6 = 1;
  iVar4 = (int)(param_4 / (longlong)(ulonglong)*(uint *)(param_1 + 0x70));
  iVar6 = (int)((param_4 + param_5 + -1) / (longlong)(ulonglong)*(uint *)(param_1 + 0x70));
  if (iVar4 <= iVar6) {
    uVar7 = (ulonglong)iVar4;
    lVar5 = param_1 + 0x170;
    do {
      pplVar3 = (longlong **)FUN_140320e50(param_1,uVar7 & 0xffffffff);
      piVar1 = (int *)((longlong)pplVar3 + 0x2c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if ((*(char *)((longlong)pplVar3 + 0x34) == '\x01') &&
           (*(char *)((longlong)pplVar3 + 0x35) == '\0')) {
          local_78 = lVar5;
          local_60 = pplVar3;
          FUN_14707dd1a(param_2,&local_70,&local_60);
          lVar5 = local_78;
          *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + uVar7 * 8) = 0;
          local_58 = &local_68;
          local_70 = pplVar3;
          local_60 = (longlong **)&local_70;
          FUN_14707e206(local_78,local_4c,&local_60);
          *(undefined1 *)((longlong)pplVar3 + 0x36) = 1;
          plVar2 = *pplVar3;
          if (*(char *)((longlong)plVar2 + 0x53) == '\0') {
            *(undefined1 *)((longlong)plVar2 + 0x53) = 1;
            *(undefined1 *)(plVar2 + 10) = 1;
            if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
        }
        else {
          FUN_140320ec2(pplVar3);
        }
      }
      uVar7 = uVar7 + 1;
    } while (iVar6 + 1 != (int)uVar7);
  }
  if (*(int *)(param_2 + 8) == *(int *)(param_2 + 0x34)) {
    FUN_140320f38(param_1 + 0x80,local_68);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14707ab6c FUN_14707ab6c body=50 status=ok
// SIG undefined FUN_14707ab6c(void)

void FUN_14707ab6c(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144a53f06();
  if ((cVar1 != '\0') && (0 < DAT_14c75f5f4)) {
    FUN_14707ab9e(DAT_14c9a0260,param_2);
    return;
  }
  return;
}



// FUNCTION 14707ab9e FUN_14707ab9e body=120 status=ok
// SIG undefined FUN_14707ab9e(void)

void FUN_14707ab9e(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x298);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x290);
  if (iVar1 != param_2) {
    *(int *)(param_1 + 0x290) = param_2;
    LeaveCriticalSection(lpCriticalSection);
    if (iVar1 <= param_2) {
      return;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    cVar2 = FUN_144976b20(param_1);
    if (cVar2 != '\0') {
      FUN_1449d54ce(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014707abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14707ac16 FUN_14707ac16 body=309 status=ok
// SIG undefined FUN_14707ac16(void)

void FUN_14707ac16(undefined4 *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x73832daa;
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (local_1c == 0x73832daa)) {
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_140077068(param_2,param_1 + 2);
    FUN_1447a84cc(param_2,param_1 + 0x10);
  }
  else {
    *param_1 = 0;
    param_1[4] = 0;
    if (param_1[5] != 0) {
      FUN_144893a1c(param_1 + 2,0);
    }
    param_1[0x12] = 0;
    if (param_1[0x13] != 0) {
      FUN_14480809c(param_1 + 0x10,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707ad4c FUN_14707ad4c body=105 status=ok
// SIG undefined FUN_14707ad4c(void)

void FUN_14707ad4c(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_20,param_1,1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
  FUN_147082294(local_20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99ffc8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707adbe FUN_14707adbe body=340 status=ok
// SIG undefined FUN_14707adbe(void)

undefined4 FUN_14707adbe(longlong param_1,undefined8 param_2,undefined ***param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined **local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined **local_b0;
  longlong local_a8;
  undefined ***local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = &PTR_FUN_14a161860;
  uVar2 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8 = &local_98;
  local_a8 = param_1;
  local_a0 = param_3;
  cVar1 = FUN_1408910dc();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2)
    ;
    uVar2 = 1;
    if (cVar1 != '\0') {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = &PTR_FUN_14a161880;
      pppuVar3 = param_3;
      if ((int)uStack_90 != local_64) {
        pppuVar3 = &local_d8;
      }
      lVar4 = 0x140;
      if (param_4 != '\0') {
        lVar4 = 0x1b8;
      }
      local_d0 = &local_98;
      local_b8 = param_3;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + lVar4))
                        (*(longlong **)(param_1 + 8),param_2,pppuVar3);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707af1c FUN_14707af1c body=96 status=ok
// SIG undefined FUN_14707af1c(void)

void FUN_14707af1c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x1c8))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  FUN_141401f60(param_1,param_2,param_3,param_4,1);
  return;
}



// FUNCTION 14707af8e FUN_14707af8e body=101 status=ok
// SIG undefined FUN_14707af8e(void)

undefined * FUN_14707af8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a01d0) {
    FUN_144b3d300(&DAT_14c9a01d0);
    if (DAT_14c9a01d0 == -1) {
      FUN_14707aff4();
      atexit((_func_5014 *)&LAB_142b0a828);
      _Init_thread_footer(&DAT_14c9a01d0);
    }
  }
  return &DAT_14c9a0178;
}



// FUNCTION 14707aff4 FUN_14707aff4 body=89 status=ok
// SIG undefined FUN_14707aff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14707aff4(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9a0178,4000);
  DAT_14c9a01a0 = 0;
  _DAT_14c9a01a8 = 0;
  _DAT_14c9a01b0 = 2;
  _DAT_14c9a01b4 = 0;
  ram0x00014c9a01bc = 0;
  _DAT_14c9a01c4 = 0;
  _DAT_14c9a01c8 = 2;
  return;
}



// FUNCTION 14707b04e FUN_14707b04e body=92 status=ok
// SIG undefined FUN_14707b04e(void)

void FUN_14707b04e(void)

{
  FUN_144760e21(DAT_14c9a01b8,DAT_14c9a01c0);
  if (DAT_14c9a01b8 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c9a01a0,DAT_14c9a01a8);
  if (DAT_14c9a01a0 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014707b0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a0178);
  return;
}



// FUNCTION 14707b0bc FUN_14707b0bc body=71 status=ok
// SIG undefined FUN_14707b0bc(void)

void FUN_14707b0bc(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = &DAT_149dfb77a;
  puVar1 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_145d03cb4(L"Unmounting pak file: %s \n",puVar1);
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_14707bdda(param_1,puVar2);
  return;
}



// FUNCTION 14707b104 FUN_14707b104 body=3195 status=ok
// SIG undefined FUN_14707b104(void)

void FUN_14707b104(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  longlong lVar18;
  ushort uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  uint local_204;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined2 *local_1c8;
  int local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong *local_190;
  longlong *local_188;
  undefined2 local_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined2 *local_168;
  int local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong *local_130;
  longlong *local_128;
  undefined2 local_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong *local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_218 = &DAT_14c872ce8;
  local_1f0 = param_1;
  FUN_14105aa76(DAT_14c872ce0,&DAT_14a16120a,L"DirectoryIndexKeepFiles",&local_f8);
  local_218 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,&DAT_14a16120a,L"DirectoryIndexKeepEmptyDirectories",&local_108);
  local_218 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,&DAT_14a16120a,
                L"DirectoryRootsToKeepInMemoryWhenUnloadingPakEntryFilenames",&local_118);
  FUN_140b7fa3a(&local_108,&local_118);
  FUN_140b7fa3a(&local_f8,&local_118);
  local_200 = param_2;
  if (param_2 != (longlong *)0x0) {
    FUN_147082d9e(param_2);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (((int)uStack_100 < 1) && ((int)uStack_f0 < 1)) {
    uVar8 = local_140;
    if (local_200 == (longlong *)0x0) {
      FUN_147082d9e(local_1f0);
      uVar8 = local_140;
    }
  }
  else {
    local_1b0 = local_1f0 + 2;
    local_1b8 = (longlong *)&DAT_100000000;
    local_1a8 = 0xffffffff;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    if ((int)local_1f0[5] != 0) {
      FUN_1449c0562(&local_1b8);
    }
    local_140 = local_1a8;
    lVar18 = local_140;
    local_138 = (uint)local_1a0;
    local_134 = local_1a0._4_4_;
    local_150 = local_1b8;
    local_148 = local_1b0;
    local_158 = local_1f0;
    local_130 = local_1f0;
    local_128 = local_1f0;
    local_120 = 0;
    local_140._4_4_ = (int)((ulonglong)local_1a8 >> 0x20);
    if (local_140._4_4_ < (int)local_1b0[3]) {
      iVar22 = 0;
      iVar5 = local_140._4_4_;
      local_1e8 = param_3;
      local_140 = lVar18;
      do {
        local_1d0 = *local_158;
        local_1d8 = (longlong)iVar5 * 0x68;
        local_1f8 = (longlong *)(local_1d0 + local_1d8);
        FUN_1404740bc(&local_168,local_1e8);
        local_178 = 0;
        uStack_170 = 0;
        lVar11 = (longlong)local_140._4_4_;
        lVar23 = *local_158;
        lVar18 = lVar23 + lVar11 * 0x68;
        lStack_e0 = lVar18 + 0x20;
        local_e8 = (longlong *)&DAT_100000000;
        local_d8 = 0xffffffff;
        local_d0 = 0;
        if (*(int *)(lVar18 + 0x38) != 0) {
          FUN_1449c0562(&local_e8);
        }
        local_1b8 = (longlong *)(lVar23 + lVar11 * 0x68 + 0x10);
        local_1a0 = local_d8;
        uVar15 = local_1a0;
        local_198 = local_d0;
        local_194 = local_cc;
        local_1b0 = local_e8;
        local_1a8 = lStack_e0;
        local_180 = 0;
        local_1a0._4_4_ = (int)(local_d8 >> 0x20);
        local_1a0 = uVar15;
        local_190 = local_1b8;
        local_188 = local_1b8;
        if (local_1a0._4_4_ < *(int *)(lStack_e0 + 0x18)) {
          local_1e0 = 0;
          local_204 = 0;
          iVar5 = local_1a0._4_4_;
          do {
            plVar16 = (longlong *)((longlong)iVar5 * 0x20 + *local_1b8);
            FUN_1404740bc(&local_1c8,&local_168,plVar16);
            lVar18 = local_f8;
            lVar23 = (longlong)(int)uStack_f0;
            if (lVar23 != 0) {
              iVar5 = local_1c0 + -1;
              puVar14 = local_1c8;
              if (local_1c0 == 0) {
                iVar5 = iVar22;
                puVar14 = &DAT_149dfb77a;
              }
              lVar11 = 0;
              do {
                iVar1 = *(int *)(lVar18 + 8 + lVar11);
                iVar20 = iVar1 + -1;
                if (iVar1 == 0) {
                  iVar20 = iVar22;
                }
                puVar17 = &DAT_149dfb77a;
                if (iVar1 != 0) {
                  puVar17 = *(undefined2 **)(lVar18 + lVar11);
                }
                uVar8 = FUN_14038a9c4(puVar14,iVar5,puVar17,iVar20);
                plVar3 = local_200;
                if ((char)uVar8 != '\0') {
                  local_204 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                  if (local_200 != (longlong *)0x0) {
                    if (local_1e0 == 0) {
                      local_e8 = local_1f8;
                      FUN_147084628(local_200,&local_bc,&local_e8);
                      local_1e0 = *plVar3 + (longlong)local_bc * 0x68 + 0x10;
                    }
                    lStack_e0 = *local_1b8 + (longlong)local_1a0._4_4_ * 0x20 + 0x10;
                    local_e8 = plVar16;
                    FUN_147084b34(local_1e0,&local_bc,&local_e8);
                  }
                  goto LAB_14707b51c;
                }
                lVar11 = lVar11 + 0x10;
              } while (lVar23 * 0x10 != lVar11);
            }
            uVar15 = uStack_170;
            if (local_200 == (longlong *)0x0) {
              lVar18 = (longlong)(int)uStack_170;
              uVar6 = (int)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,uVar6);
              if (uStack_170._4_4_ < uVar6) {
                FUN_1447a1bd6(&local_178,uVar15 & 0xffffffff);
              }
              lVar18 = lVar18 * 0x10;
              puVar12 = (undefined8 *)(local_178 + lVar18);
              *(undefined8 *)(local_178 + lVar18) = 0;
              iVar5 = (int)plVar16[1];
              pvVar2 = (void *)*plVar16;
              *(int *)(local_178 + 8 + lVar18) = iVar5;
              if ((longlong)iVar5 == 0) {
                *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar12,iVar5,0);
                memcpy((void *)*puVar12,pvVar2,(longlong)iVar5 * 2);
              }
            }
LAB_14707b51c:
            if (local_1c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_1a0 & ~local_1b0._4_4_);
            FUN_1449c0562(&local_1b0);
            iVar5 = local_1a0._4_4_;
          } while (local_1a0._4_4_ < *(int *)(local_1a8 + 0x18));
          if (((local_180 & 1) != 0) && (local_180._1_1_ == '\x01')) {
            FUN_14708438a(local_188,(int)local_188[1] - *(int *)((longlong)local_188 + 0x34));
          }
        }
        else {
          local_204 = 0;
        }
        if (local_200 == (longlong *)0x0) {
          if ((longlong)(int)uStack_170 != 0) {
            lVar18 = local_1d0 + local_1d8;
            lVar11 = (longlong)(int)uStack_170 << 4;
            lVar23 = local_178;
            do {
              FUN_147084db2(lVar18 + 0x10,lVar23);
              lVar23 = lVar23 + 0x10;
              lVar11 = lVar11 + -0x10;
            } while (lVar11 != 0);
          }
        }
        lVar18 = local_108;
        if ((local_204 & 1) == 0) {
          lVar23 = (longlong)(int)uStack_100;
          if (lVar23 != 0) {
            iVar5 = local_160 + -1;
            puVar14 = local_168;
            if (local_160 == 0) {
              iVar5 = iVar22;
              puVar14 = &DAT_149dfb77a;
            }
            lVar11 = 0;
            do {
              iVar1 = *(int *)(lVar18 + 8 + lVar11);
              iVar20 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar20 = iVar22;
              }
              puVar17 = &DAT_149dfb77a;
              if (iVar1 != 0) {
                puVar17 = *(undefined2 **)(lVar18 + lVar11);
              }
              uVar8 = FUN_14038a9c4(puVar14,iVar5,puVar17,iVar20);
              if ((char)uVar8 != '\0') {
                local_204 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                break;
              }
              lVar11 = lVar11 + 0x10;
            } while (lVar23 * 0x10 != lVar11);
          }
        }
        puVar14 = &DAT_149dfb77a;
        iVar5 = iVar22;
        if ((int)local_1f8[1] != 0) {
          puVar14 = (undefined2 *)*local_1f8;
          iVar5 = (int)local_1f8[1] + -1;
        }
        uVar7 = FUN_144a49b4a(iVar5,puVar14);
        pbVar9 = (byte *)FUN_147084f3e(local_b8,uVar7);
        *pbVar9 = (byte)local_204 & 1;
        FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        if (local_168 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_140 = CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
        FUN_1449c0562(&local_150);
        param_3 = local_1e8;
        iVar5 = local_140._4_4_;
      } while (local_140._4_4_ < (int)local_148[3]);
      lVar18 = local_140;
      if (((local_120 & 1) != 0) && (local_120._1_1_ == '\x01')) {
        FUN_147084344(local_128,(int)local_128[1] - *(int *)((longlong)local_128 + 0x34));
        lVar18 = local_140;
      }
    }
    local_140 = lVar18;
    local_1b8 = (longlong *)&DAT_100000000;
    local_1a8._0_4_ = 0xffffffff;
    local_1a8._4_4_ = 0;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    iVar5 = 0;
    local_1b0 = (longlong *)local_a8;
    if (local_90 != 0) {
      FUN_1449c0562(&local_1b8);
      iVar5 = local_90;
    }
    local_140._0_4_ = (uint)local_1a8;
    local_140._4_4_ = local_1a8._4_4_;
    local_138 = (uint)local_1a0;
    local_134 = local_1a0._4_4_;
    local_150 = local_1b8;
    local_148 = local_1b0;
    local_158 = local_b8;
    if ((local_1a8._4_4_ != iVar5) || (iVar22 = iVar5, local_1b0 != (longlong *)local_a8)) {
      do {
        if (*(char *)(*local_158 + 0x10 + (longlong)local_140._4_4_ * 0x20) == '\x01') {
          puVar12 = (undefined8 *)(*local_158 + (longlong)local_140._4_4_ * 0x20);
          local_1b8 = (longlong *)0x0;
          uVar6 = *(uint *)(puVar12 + 1);
          pvVar2 = (void *)*puVar12;
          local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,uVar6);
          if ((longlong)(int)uVar6 == 0) {
            local_1b0 = (longlong *)(ulonglong)uVar6;
          }
          else {
            FUN_1446dd670(&local_1b8,uVar6,0);
            memcpy(local_1b8,pvVar2,(longlong)(int)uVar6 * 2);
          }
          local_e8 = (longlong *)0x0;
          lStack_e0 = 0;
LAB_14707b9c3:
          if ((int)local_1b0 == (int)param_3[1]) {
            if (1 < (int)local_1b0) {
              lVar18 = 0;
              do {
                uVar13 = *(ushort *)((longlong)local_1b8 + lVar18);
                uVar15 = (ulonglong)uVar13;
                uVar19 = *(ushort *)(*param_3 + lVar18);
                if (uVar13 == uVar19) {
                  if (uVar13 == 0) break;
                }
                else {
                  if (0x7f < (uVar19 | uVar13)) goto LAB_14707baa2;
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  uVar21 = (ulonglong)uVar19;
                  uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                  if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar21]) goto LAB_14707baa2;
                }
                lVar18 = lVar18 + 2;
              } while( true );
            }
          }
          else if ((int)param_3[1] + (int)local_1b0 != 1) goto LAB_14707ba3a;
LAB_14707baa9:
          if (local_e8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_1b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        local_140._0_4_ = (uint)local_140 & ~local_150._4_4_;
        FUN_1449c0562(&local_150);
        iVar22 = local_90;
      } while (local_158 != local_b8 ||
               (local_148 != (longlong *)local_a8 || local_140._4_4_ != iVar5));
    }
    plVar16 = local_1f0;
    local_1b8 = (longlong *)0x100000000;
    local_1a8 = 0xffffffff;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    iVar5 = 0;
    local_1b0 = (longlong *)local_a8;
    if (iVar22 != 0) {
      FUN_1449c0562(&local_1b8);
      iVar5 = local_90;
    }
    local_140 = local_1a8;
    uVar8 = local_140;
    local_138 = (uint)local_1a0;
    local_134 = local_1a0._4_4_;
    local_150 = local_1b8;
    local_148 = local_1b0;
    local_140._4_4_ = (int)((ulonglong)local_1a8 >> 0x20);
    local_158 = local_b8;
    if ((local_140._4_4_ != iVar5) || (local_1b0 != (longlong *)local_a8)) {
      iVar22 = local_140._4_4_;
      local_140 = uVar8;
      do {
        puVar12 = (undefined8 *)(*local_158 + (longlong)iVar22 * 0x20);
        if (*(char *)(*local_158 + 0x10 + (longlong)iVar22 * 0x20) == '\x01') {
          if (local_200 != (longlong *)0x0) {
            puVar14 = &DAT_149dfb77a;
            iVar22 = 0;
            if (*(int *)(puVar12 + 1) != 0) {
              puVar14 = (undefined2 *)*puVar12;
              iVar22 = *(int *)(puVar12 + 1) + -1;
            }
            uVar7 = FUN_144a49b4a(iVar22,puVar14);
            FUN_14708511c(local_200,uVar7,puVar12);
          }
        }
        else if (local_200 == (longlong *)0x0) {
          FUN_147085292(plVar16,puVar12);
        }
        local_140 = CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
        FUN_1449c0562(&local_150);
        iVar22 = local_140._4_4_;
        uVar8 = local_140;
      } while (local_158 != local_b8 ||
               (local_148 != (longlong *)local_a8 || local_140._4_4_ != iVar5));
    }
  }
  local_140 = uVar8;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ec70(local_b8);
  FUN_1447a1747(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14707baa2:
  if (uVar13 == uVar19) goto LAB_14707baa9;
LAB_14707ba3a:
  cVar4 = FUN_14474156a(&local_1b8,&local_e8);
  if (cVar4 == '\0') goto LAB_14707baa9;
  plVar16 = (longlong *)&DAT_149dfb77a;
  if ((int)local_1b0 != 0) {
    plVar16 = local_1b8;
  }
  iVar22 = (int)local_1b0 + -1;
  if ((int)local_1b0 == 0) {
    iVar22 = 0;
  }
  uVar7 = FUN_144a49b4a(iVar22,plVar16);
  pcVar10 = (char *)FUN_147084f3e(local_b8,uVar7);
  if (*pcVar10 != '\0') goto LAB_14707baa9;
  *pcVar10 = '\x01';
  goto LAB_14707b9c3;
}



// FUNCTION 14707bd80 FUN_14707bd80 body=89 status=ok
// SIG undefined FUN_14707bd80(void)

void FUN_14707bd80(longlong param_1)

{
  uint uVar1;
  
  FUN_14020fad6();
  uVar1 = *(int *)(param_1 + 0xd0) - 1;
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar1 = 0;
  }
  if ((0 < (int)uVar1) &&
     (*(short *)(*(longlong *)(param_1 + 200) + -2 + (ulonglong)uVar1 * 2) != 0x2f)) {
    FUN_1400020e8((longlong *)(param_1 + 200),&DAT_149e065c6,1);
    return;
  }
  return;
}



// FUNCTION 14707bdda FUN_14707bdda body=651 status=ok
// SIG undefined FUN_14707bdda(void)

bool FUN_14707bdda(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  if (0 < (longlong)*(int *)(param_1 + 0x18)) {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar8 = 0;
LAB_14707be29:
    puVar9 = *(undefined8 **)(*plVar1 + 8 + lVar8 * 0x10);
    puVar7 = &DAT_149dfb77a;
    if (*(int *)(puVar9 + 4) != 0) {
      puVar7 = (undefined2 *)puVar9[3];
    }
    lVar11 = 0;
    do {
      uVar3 = *(ushort *)((longlong)puVar7 + lVar11);
      uVar4 = *(ushort *)(param_2 + lVar11);
      if (uVar3 == uVar4) {
        if (uVar3 == 0) goto LAB_14707bead;
      }
      else {
        if (0x7f < (uVar4 | uVar3)) {
          iVar10 = (uint)uVar3 - (uint)uVar4;
          goto LAB_14707be92;
        }
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x00014707be8f;
      }
      lVar11 = lVar11 + 2;
    } while( true );
  }
LAB_14707bea2:
  LeaveCriticalSection(lpCriticalSection);
LAB_14707bed6:
  puVar9 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
LAB_14707bf56:
    bVar5 = true;
    if (DAT_14c75f5f4 == 0) goto LAB_14707bff8;
LAB_14707bfb5:
    uVar6 = DAT_14c9a0260;
    FUN_1446f470e(&local_80,param_2,1);
    FUN_142b0c026(uVar6,local_80,puVar9);
    if (bVar5) goto LAB_14707bff8;
  }
  else {
    bVar5 = true;
LAB_14707beec:
    local_68 = 0;
    uStack_60 = 0;
    FUN_140056680(local_78,param_2);
    FUN_14170b210(&local_58,local_78,&local_68);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    puVar7 = local_58;
    if (local_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_142b07dd0(*(undefined8 *)(param_1 + 0xd0),puVar7);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar5) goto LAB_14707bf56;
LAB_14707bf8d:
    FUN_141119393(puVar9[7],*(undefined4 *)(puVar9 + 8));
    *(undefined4 *)(puVar9 + 8) = 0;
    if (*(int *)((longlong)puVar9 + 0x44) != 0) {
      FUN_147083236(puVar9 + 7);
    }
    if (DAT_14c75f5f4 != 0) {
      bVar5 = false;
      goto LAB_14707bfb5;
    }
    *(undefined1 *)((longlong)puVar9 + 0x259) = 0;
  }
  LOCK();
  piVar2 = (int *)(puVar9 + 1);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 == 0) {
    (**(code **)*puVar9)(puVar9,1);
  }
LAB_14707bff8:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar9 != (undefined8 *)0x0;
code_r0x00014707be8f:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_14707be92:
  if (iVar10 == 0) {
LAB_14707bead:
    *(undefined8 *)(lVar8 * 0x10 + *plVar1 + 8) = 0;
    FUN_147083136(plVar1);
    FUN_14708319a(plVar1);
    LeaveCriticalSection(lpCriticalSection);
    if (puVar9 == (undefined8 *)0x0) goto LAB_14707bed6;
    if (*(int *)(puVar9 + 4) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)puVar9[3];
    }
    FUN_14707ad4c(puVar7);
    if (*(longlong *)(param_1 + 0xd0) == 0) goto LAB_14707bf8d;
    FUN_14707a17e(*(undefined8 *)(param_1 + 0xe0),puVar9[0x4c]);
    bVar5 = false;
    goto LAB_14707beec;
  }
  lVar8 = lVar8 + 1;
  if (lVar8 == *(int *)(param_1 + 0x18)) goto LAB_14707bea2;
  goto LAB_14707be29;
}



// FUNCTION 14707c066 FUN_14707c066 body=136 status=ok
// SIG undefined FUN_14707c066(void)

undefined8 FUN_14707c066(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar1) + 0x218) == param_2) {
        uVar2 = 3;
        goto LAB_14707c0cd;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x10 != lVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x34 + lVar1) == param_2) {
        uVar2 = 1;
        goto LAB_14707c0cd;
      }
      lVar1 = lVar1 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x28) * 0x38 - lVar1 != 0);
  }
  uVar2 = 0;
LAB_14707c0cd:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return uVar2;
}



// FUNCTION 14707c0ee FUN_14707c0ee body=138 status=ok
// SIG undefined FUN_14707c0ee(void)

ulonglong FUN_14707c0ee(ulonglong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar3) + 0x218) != -1) {
        param_1 = CONCAT71((int7)(param_1 >> 8),1);
        goto LAB_14707c162;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x10 != lVar3);
  }
  piVar1 = (int *)(param_1 + 0x28);
  if ((longlong)*piVar1 == 0) {
    param_1 = 0;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      bVar4 = *(int *)(*plVar2 + 0x34 + lVar3) != -1;
      param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
      if (bVar4) break;
      bVar4 = (longlong)*piVar1 * 0x38 + -0x38 != lVar3;
      lVar3 = lVar3 + 0x38;
    } while (bVar4);
  }
LAB_14707c162:
  LeaveCriticalSection(lpCriticalSection);
  return param_1 & 0xffffffff;
}



// FUNCTION 14707c178 FUN_14707c178 body=833 status=ok
// SIG undefined FUN_14707c178(void)

void FUN_14707c178(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_e0;
  longlong local_d0;
  longlong local_c8 [2];
  undefined8 *local_b8;
  undefined1 local_b0 [48];
  longlong local_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < (int)param_2[1]) {
    lVar13 = 0;
    do {
      lVar8 = lVar13 * 0x10;
      if (0 < *(int *)(*param_2 + 8 + lVar8)) {
        lVar12 = 0;
        puVar11 = (undefined8 *)0x0;
        local_d0 = lVar13;
        do {
          local_80 = 0;
          uStack_78 = 0;
          FUN_142b0faf8(local_b0);
          local_b8 = (undefined8 *)0x0;
          lVar13 = lVar12 * 0x10;
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)(*param_2 + lVar8) + 8 + lVar13) != 0) {
            puVar6 = *(undefined2 **)(*(longlong *)(*param_2 + lVar8) + lVar13);
          }
          cVar4 = FUN_1401154ee(param_1,puVar6,&local_b8,local_b0);
          if (cVar4 == '\0') {
LAB_14707c38e:
            if (local_b8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_b8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_b8)(local_b8,1);
              }
            }
          }
          else if (local_b8 != (undefined8 *)0x0) {
            if (local_b8[5] != 0) {
              if (puVar11 == (undefined8 *)0x0) {
                puVar6 = &DAT_149dfb77a;
                if (*(int *)(local_b8 + 0x1a) != 0) {
                  puVar6 = (undefined2 *)local_b8[0x19];
                }
                puVar7 = &DAT_149dfb77a;
                if (*(int *)(local_b8 + 4) != 0) {
                  puVar7 = (undefined2 *)local_b8[3];
                }
                local_e0 = 0;
                local_e8 = 0;
                cVar4 = FUN_1416bd1f2(param_1,puVar7,500,puVar6);
                if ((cVar4 == '\0') || (iVar5 = *(int *)(param_1 + 0x18), iVar5 < 1)) {
                  puVar11 = (undefined8 *)0x0;
                }
                else {
                  lVar14 = 0;
                  do {
                    puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8 + lVar14 * 0x10);
                    iVar9 = *(int *)(puVar11 + 4);
                    if (iVar9 == *(int *)(local_b8 + 4)) {
                      if (1 < iVar9) {
                        lVar10 = 0;
                        while( true ) {
                          uVar2 = *(ushort *)(puVar11[3] + lVar10);
                          uVar3 = *(ushort *)(local_b8[3] + lVar10);
                          if (uVar2 != uVar3) break;
                          if (uVar2 == 0) goto LAB_14707c345;
LAB_14707c2fc:
                          lVar10 = lVar10 + 2;
                        }
                        if ((uVar3 | uVar2) < 0x80) {
                          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3])
                          goto LAB_14707c2fc;
                          iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                                  (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                        }
                        else {
                          iVar9 = (uint)uVar2 - (uint)uVar3;
                        }
                        if (iVar9 != 0) goto LAB_14707c36a;
                      }
LAB_14707c345:
                      if (puVar11[0x41] == local_b8[0x41]) {
                        iVar5 = (**(code **)(puVar11[2] + 0x28))(puVar11 + 2);
                        if (iVar5 == 0) {
                          if (puVar11 != (undefined8 *)0x0) {
                            LOCK();
                            *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
                            UNLOCK();
                            *(undefined1 *)(puVar11 + 0x4a) = 1;
                            goto LAB_14707c3da;
                          }
                          break;
                        }
                        iVar5 = *(int *)(param_1 + 0x18);
                      }
                    }
                    else if (*(int *)(local_b8 + 4) + iVar9 == 1) goto LAB_14707c345;
LAB_14707c36a:
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < iVar5);
                  puVar11 = (undefined8 *)0x0;
                }
              }
              else {
LAB_14707c3da:
                puVar6 = &DAT_149dfb77a;
                if (*(int *)(*(longlong *)(*param_2 + lVar8) + 8 + lVar13) != 0) {
                  puVar6 = *(undefined2 **)(*(longlong *)(*param_2 + lVar8) + lVar13);
                }
                FUN_140056680(local_c8,puVar6);
                FUN_14707c4ba(puVar11,local_b0,local_c8);
                if (local_c8[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
            goto LAB_14707c38e;
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          lVar13 = local_d0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(*param_2 + 8 + lVar8));
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar11 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar11)(puVar11,1);
          }
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14707c4ba FUN_14707c4ba body=768 status=ok
// SIG undefined FUN_14707c4ba(void)

void FUN_14707c4ba(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
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
  char cVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  size_t _Size;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined **local_110 [18];
  undefined8 local_80;
  void **local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 uStack_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)(param_1 + 200);
  uVar19 = *(int *)(param_1 + 0xd0) - 1;
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar19 = 0;
  }
  if ((0 < (int)uVar19) && (*(short *)(*plVar1 + -2 + (ulonglong)uVar19 * 2) != 0x2f)) {
    FUN_1400020e8(plVar1,&DAT_149e065c6,1);
  }
  local_4c = 0x80000000;
  if ((*(byte *)(param_2 + 0x12) & 2) == 0) {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    memset(local_110,0,0x90);
    FUN_144869430(local_110);
    local_80 = 0;
    local_110[0] = &PTR_FUN_149e1e590;
    local_70 = 0;
    local_78 = &local_68;
    FUN_144a69558(local_110,1);
    (*(code *)local_110[0][0x1e])(local_110,0);
    local_110[0] = &PTR_FUN_149e1e330;
    local_4c = *(uint *)(param_1 + 0x1e8);
    cVar18 = FUN_14707ce2a(local_110,param_2,param_1 + 0x78);
    if (cVar18 == '\0') {
      plVar2 = (longlong *)(param_1 + 0xd8);
      uVar19 = *(uint *)(param_1 + 0xe0);
      local_4c = ~uVar19;
      *(uint *)(param_1 + 0xe0) = uVar19 + 1;
      if (*(uint *)(param_1 + 0xe4) < uVar19 + 1) {
        FUN_147083b10(plVar2,uVar19);
      }
      lVar6 = *plVar2;
      lVar20 = (longlong)(int)uVar19 * 0x50;
      lVar3 = lVar6 + lVar20;
      uVar7 = *param_2;
      uVar8 = param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[3];
      uVar11 = param_2[4];
      uVar12 = param_2[5];
      uVar13 = param_2[6];
      uVar14 = param_2[7];
      uVar15 = param_2[8];
      uVar16 = param_2[9];
      uVar17 = param_2[10];
      puVar4 = (undefined4 *)(lVar6 + 0x1c + lVar20);
      *puVar4 = param_2[7];
      puVar4[1] = uVar15;
      puVar4[2] = uVar16;
      puVar4[3] = uVar17;
      puVar4 = (undefined4 *)(lVar6 + 0x10 + lVar20);
      *puVar4 = uVar11;
      puVar4[1] = uVar12;
      puVar4[2] = uVar13;
      puVar4[3] = uVar14;
      puVar4 = (undefined4 *)(lVar6 + lVar20);
      *puVar4 = uVar7;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      *(undefined8 *)(lVar6 + 0x30 + lVar20) = 0;
      iVar5 = param_2[0xe];
      _Src = *(void **)(param_2 + 0xc);
      *(int *)(lVar6 + 0x38 + lVar20) = iVar5;
      if ((longlong)iVar5 == 0) {
        *(undefined4 *)(lVar3 + 0x3c) = 0;
      }
      else {
        puVar21 = (undefined8 *)(lVar6 + lVar20 + 0x30);
        local_118 = param_3;
        FUN_1417367c6(puVar21,iVar5,0);
        param_3 = local_118;
        memcpy((void *)*puVar21,_Src,(longlong)iVar5 << 4);
      }
      *(undefined2 *)(lVar3 + 0x48) = *(undefined2 *)(param_2 + 0x12);
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_2 + 0x10);
      if (*(int *)(param_1 + 0xe4) != *(int *)(param_1 + 0xe0)) {
        FUN_1470845b6(plVar2);
      }
    }
    else {
      plVar2 = (longlong *)(param_1 + 0x1e0);
      _Size = (size_t)(int)(uint)uStack_60;
      if (_Size != 0) {
        iVar5 = *(int *)(param_1 + 0x1e8);
        *(uint *)(param_1 + 0x1e8) = iVar5 + (uint)uStack_60;
        if ((uint)(*(int *)(param_1 + 0x1ec) - iVar5) < (uint)uStack_60) {
          FUN_1447403be(plVar2,iVar5);
        }
        memcpy((void *)((longlong)iVar5 + *plVar2),local_68,_Size);
      }
      if (*(int *)(param_1 + 0x1ec) != *(int *)(param_1 + 0x1e8)) {
        FUN_144893a1c(plVar2);
      }
    }
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
    FUN_144a7fc42(local_110);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_130 = 0;
  if (*(char *)(param_1 + 0x212) != '\0') {
    local_130 = param_1 + 400;
  }
  local_120 = *(undefined4 *)(param_1 + 0x7c);
  local_138 = param_1 + 0xe8;
  local_128 = 0;
  FUN_14707d28e(param_3,&local_4c,plVar1,*(undefined8 *)(param_1 + 0x1f0));
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707c7bc FUN_14707c7bc body=573 status=ok
// SIG undefined FUN_14707c7bc(void)

void FUN_14707c7bc(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1408383eb(param_2,param_1);
  FUN_1408383eb(param_2,param_1 + 8);
  FUN_1408383eb(param_2,param_1 + 0x10);
  if (param_3 < 8) {
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
      uVar5 = (uint)local_28;
    }
    else {
      uVar5 = *(uint *)*puVar2;
      local_28 = CONCAT44(local_28._4_4_,uVar5);
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else if ((uVar5 & 1) == 0) {
      if ((uVar5 & 2) == 0) {
        if ((uVar5 & 4) == 0) {
          FUN_140033559("Runtime\\PakFile\\Public\\IPlatformFilePak.h",0x20a,
                        L"Found an unknown compression type in pak file, will need to be supported for legacy files"
                       );
        }
        else {
          *(undefined4 *)(param_1 + 0x44) = 3;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
    if (param_3 < 2) {
      local_28 = 0;
      FUN_1408383eb(param_2);
    }
  }
  else {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x44),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x18,0x14);
  if (2 < param_3) {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_14707f740(param_2,param_1 + 0x30);
    }
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x48),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar6 = (undefined4 *)(param_1 + 0x40);
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
      }
      else {
        FUN_14572512c(param_2,puVar6);
      }
    }
    else {
      *puVar6 = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707c9fa FUN_14707c9fa body=849 status=ok
// SIG undefined FUN_14707c9fa(void)

void FUN_14707c9fa(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6,int *param_7,ulonglong *param_8,undefined8 param_9
                  ,longlong param_10,longlong param_11,longlong *param_12,undefined8 param_13,
                  undefined4 param_14)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  void *_Src;
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
  char cVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined **ppuVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  ulonglong local_120;
  longlong *local_118;
  uint local_10c;
  undefined **local_108;
  int local_100;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_8 == (ulonglong *)0x0 && param_10 == 0) {
    uVar24 = 0;
  }
  else {
    FUN_140056680(&local_108);
    FUN_1414c0540(&local_108);
    ppuVar22 = local_108;
    if (local_100 == 0) {
      ppuVar22 = (undefined **)&DAT_149dfb77a;
    }
    uVar18 = FUN_144a1ccda(ppuVar22);
    uVar24 = (ulonglong)uVar18;
    if (param_8 != (ulonglong *)0x0) {
      *param_8 = uVar24;
    }
    if (local_108 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  *param_6 = 0;
  *param_7 = 0;
  memset(&local_108,0,0x90);
  FUN_144869430(&local_108);
  local_78 = 0;
  local_108 = &PTR_FUN_149e1e590;
  local_70 = param_11;
  local_68 = 0;
  FUN_144a69558(&local_108,1);
  (*(code *)local_108[0x1e])(&local_108,0);
  local_108 = &PTR_FUN_149e1e330;
  if (0 < param_1) {
    local_118 = param_2 + 4;
    do {
      pcVar4 = (code *)*param_2;
      plVar21 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar21 = local_118;
      }
      uVar19 = (**(code **)(*plVar21 + 8))();
      lVar20 = (*pcVar4)(uVar19);
      local_10c = 0x80000000;
      if ((*(byte *)(lVar20 + 0x58) & 2) == 0) {
        local_10c = *(uint *)(param_11 + 8);
        cVar17 = FUN_14707ce2a(&local_108,(undefined4 *)(lVar20 + 0x10),param_4);
        if (cVar17 == '\0') {
          uVar18 = *(uint *)(param_12 + 1);
          local_10c = ~uVar18;
          *(uint *)(param_12 + 1) = uVar18 + 1;
          local_120 = uVar24;
          if (*(uint *)((longlong)param_12 + 0xc) < uVar18 + 1) {
            FUN_147083b10(param_12,uVar18);
          }
          lVar5 = *param_12;
          lVar25 = (longlong)(int)uVar18 * 0x50;
          lVar1 = lVar5 + lVar25;
          uVar6 = *(undefined4 *)(lVar20 + 0x10);
          uVar7 = *(undefined4 *)(lVar20 + 0x14);
          uVar8 = *(undefined4 *)(lVar20 + 0x18);
          uVar9 = *(undefined4 *)(lVar20 + 0x1c);
          uVar10 = *(undefined4 *)(lVar20 + 0x20);
          uVar11 = *(undefined4 *)(lVar20 + 0x24);
          uVar12 = *(undefined4 *)(lVar20 + 0x28);
          uVar13 = *(undefined4 *)(lVar20 + 0x2c);
          uVar14 = *(undefined4 *)(lVar20 + 0x30);
          uVar15 = *(undefined4 *)(lVar20 + 0x34);
          uVar16 = *(undefined4 *)(lVar20 + 0x38);
          puVar2 = (undefined4 *)(lVar5 + 0x1c + lVar25);
          *puVar2 = *(undefined4 *)(lVar20 + 0x2c);
          puVar2[1] = uVar14;
          puVar2[2] = uVar15;
          puVar2[3] = uVar16;
          puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar25);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar13;
          puVar2 = (undefined4 *)(lVar5 + lVar25);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined8 *)(lVar5 + 0x30 + lVar25) = 0;
          iVar3 = *(int *)(lVar20 + 0x48);
          _Src = *(void **)(lVar20 + 0x40);
          *(int *)(lVar5 + 0x38 + lVar25) = iVar3;
          if ((longlong)iVar3 == 0) {
            *(undefined4 *)(lVar1 + 0x3c) = 0;
          }
          else {
            puVar23 = (undefined8 *)(lVar5 + lVar25 + 0x30);
            local_128 = param_4;
            FUN_1417367c6(puVar23,iVar3,0);
            param_4 = local_128;
            memcpy((void *)*puVar23,_Src,(longlong)iVar3 << 4);
          }
          *(undefined2 *)(lVar1 + 0x48) = *(undefined2 *)(lVar20 + 0x58);
          *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar20 + 0x50);
          lVar1 = *param_12;
          puVar23 = (undefined8 *)(lVar1 + 0x18 + lVar25);
          *puVar23 = 0;
          puVar23[1] = 0;
          *(undefined4 *)(lVar1 + 0x28 + lVar25) = 0;
          *(undefined1 *)(lVar1 + 0x49 + lVar25) = 1;
          uVar24 = local_120;
        }
        else {
          *param_6 = *param_6 + 1;
        }
      }
      else {
        *param_7 = *param_7 + 1;
      }
      local_138 = param_13;
      local_148 = param_9;
      local_140 = param_10;
      local_130 = param_14;
      FUN_14707d28e(lVar20,&local_10c,param_5,uVar24);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FUN_144a7fc42(&local_108);
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14707cd4c FUN_14707cd4c body=221 status=ok
// SIG undefined FUN_14707cd4c(void)

ulonglong FUN_14707cd4c(undefined8 param_1,longlong param_2,int param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_30,param_1);
  FUN_1414c0540();
  iVar3 = local_28 + -1;
  if (local_28 == 0) {
    iVar3 = 0;
  }
  iVar3 = iVar3 * 2;
  if (param_3 < 0xb) {
    uVar2 = param_2 + 0x100000001b3;
    if (iVar3 != 0) {
      puVar1 = &DAT_149dfb77a;
      if (local_28 != 0) {
        puVar1 = local_30;
      }
      lVar4 = 0;
      do {
        uVar2 = (uVar2 ^ *(byte *)((longlong)puVar1 + lVar4)) * -0x340d631b7bdddcdb;
        lVar4 = lVar4 + 1;
      } while (iVar3 != (int)lVar4);
    }
  }
  else {
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    uVar2 = FUN_146811c1e(puVar1,iVar3,param_2);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14707ce2a FUN_14707ce2a body=1123 status=ok
// SIG undefined FUN_14707ce2a(void)

ulonglong FUN_14707ce2a(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_3 + 4);
  uVar5 = *(uint *)((longlong)param_2 + 0x44);
  lVar6 = 0x30;
  if (iVar2 < 3) {
LAB_14707ce79:
    lVar10 = lVar6 + 8;
    if (1 < iVar2) {
      lVar10 = lVar6;
    }
    if (uVar5 < 0x40) goto LAB_14707ce8a;
  }
  else {
    if (uVar5 != 0) {
      lVar6 = (longlong)(int)param_2[7] * 0x10 + 0x39;
      goto LAB_14707ce79;
    }
    uVar5 = 0;
    lVar10 = 0x35;
LAB_14707ce8a:
    uVar3 = *(uint *)(param_2 + 7);
    if ((int)uVar3 < 0x10000) {
      lVar6 = *param_2;
      if ((int)uVar3 < 1 || uVar5 == 0) {
LAB_14707cf86:
        uVar8 = param_2[1];
        lVar10 = param_2[2];
        uVar12 = 0;
        if (1 < (int)uVar3) {
          uVar7 = *(uint *)(param_2 + 8) >> 0xb & 0x3f;
          uVar12 = 0x3f;
          if (uVar7 << 0xb == *(uint *)(param_2 + 8)) {
            uVar12 = (ulonglong)uVar7;
          }
        }
      }
      else {
        uVar12 = 0;
        lVar9 = 0;
        if (iVar2 < 5) {
          lVar9 = lVar6;
        }
        puVar4 = (ulonglong *)param_2[6];
        if (lVar9 + lVar10 != *puVar4) goto LAB_14707ce98;
        bVar13 = (char)(*(byte *)(param_2 + 9) & 1) == '\0';
        lVar11 = 0x10;
        if (bVar13) {
          lVar11 = 1;
        }
        uVar8 = (ulonglong)-(uint)bVar13 | 0xfffffffffffffff0;
        if (uVar3 != 1) {
          lVar10 = (ulonglong)uVar3 - 1;
          do {
            if (puVar4[2] != ((puVar4[1] + lVar11 + -1) - *puVar4 & uVar8) + *puVar4)
            goto LAB_14707ce95;
            lVar10 = lVar10 + -1;
            puVar4 = puVar4 + 2;
          } while (lVar10 != 0);
          goto LAB_14707cf86;
        }
        uVar8 = lVar11 + ~(lVar9 + lVar10) + puVar4[1] & uVar8;
        uVar12 = 0;
        if (param_2[1] != uVar8) goto LAB_14707ce98;
        lVar10 = param_2[2];
      }
      local_4c = uVar3 << 6 | (uint)(lVar10 < 0x100000000) << 0x1e |
                 (*(byte *)(param_2 + 9) & 1) << 0x16 | uVar5 << 0x17 |
                 (uint)(lVar6 < 0x100000000) << 0x1f | (uint)((longlong)uVar8 < 0x100000000) << 0x1d
                 | (uint)uVar12;
      puVar4 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
        }
        else {
          FUN_14572512c(param_1,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      if ((uint)uVar12 == 0x3f) {
        local_50 = (int)param_2[8];
        puVar4 = (ulonglong *)param_1[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
          }
          else {
            FUN_14572512c(param_1,&local_50);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      if (lVar6 < 0x100000000) {
        local_50 = (int)*param_2;
        puVar4 = (ulonglong *)param_1[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
          }
          else {
            FUN_14572512c(param_1,&local_50);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      else {
        FUN_1408383eb(param_1,param_2);
      }
      if (lVar10 < 0x100000000) {
        local_50 = (int)param_2[2];
        puVar4 = (ulonglong *)param_1[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
          }
          else {
            FUN_14572512c(param_1,&local_50);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      else {
        FUN_1408383eb(param_1,param_2 + 2);
      }
      if (*(int *)((longlong)param_2 + 0x44) != 0) {
        if ((longlong)uVar8 < 0x100000000) {
          local_50 = (int)param_2[1];
          puVar4 = (ulonglong *)param_1[1];
          if (puVar4[1] < *puVar4 + 4) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
            }
            else {
              FUN_14572512c(param_1,&local_50);
            }
          }
          else {
            *puVar4 = *puVar4 + 4;
          }
        }
        else {
          FUN_1408383eb(param_1,param_2 + 1);
        }
        if ((1 < (int)param_2[7]) || (((int)param_2[7] == 1 && ((*(byte *)(param_2 + 9) & 1) != 0)))
           ) {
          lVar6 = 8;
          uVar12 = 0;
          do {
            local_50 = *(int *)(param_2[6] + lVar6) - *(int *)(param_2[6] + -8 + lVar6);
            puVar4 = (ulonglong *)param_1[1];
            if (puVar4[1] < *puVar4 + 4) {
              if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
              }
              else {
                FUN_14572512c(param_1,&local_50);
              }
            }
            else {
              *puVar4 = *puVar4 + 4;
            }
            uVar12 = uVar12 + 1;
            lVar6 = lVar6 + 0x10;
          } while ((longlong)uVar12 < (longlong)(int)param_2[7]);
        }
      }
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      goto LAB_14707ce98;
    }
  }
LAB_14707ce95:
  uVar12 = 0;
LAB_14707ce98:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14707d28e FUN_14707d28e body=860 status=ok
// SIG undefined FUN_14707d28e(void)

void FUN_14707d28e(undefined8 param_1,undefined2 **param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6,longlong param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 **ppuVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  ulonglong uStack_70;
  undefined2 **local_68;
  int local_5c;
  undefined2 **local_58;
  undefined2 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  cVar1 = FUN_1401aeb9c();
  FUN_144a787a6(&local_78,param_1);
  if (cVar1 == '\0') {
    FUN_1448b5408(&local_78,param_3);
  }
  puVar4 = local_78;
  if (param_5 == (longlong *)0x0) goto LAB_14707d30b;
  local_88 = (undefined2 *)0x0;
  lVar6 = (longlong)(int)(uint)uStack_70;
  local_80 = (uint)uStack_70;
  if (lVar6 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,uStack_70 & 0xffffffff,0);
    memcpy(local_88,puVar4,lVar6 * 2);
  }
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  FUN_14474156a(&local_88,local_a8 + 2);
  puVar4 = local_88;
  if (local_80 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar3 = local_80 - 1;
  if (local_80 == 0) {
    iVar3 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar3,puVar4);
  iVar3 = FUN_1447413de(param_5,uVar2,&local_88);
  puVar4 = local_88;
  if (iVar3 == -1) {
LAB_14707d463:
    local_58 = (undefined2 **)0x0;
    lVar6 = (longlong)(int)local_80;
    local_50 = (undefined2 **)CONCAT44(local_50._4_4_,local_80);
    if (lVar6 == 0) {
      local_50 = (undefined2 **)(ulonglong)local_80;
      local_a8[0] = 0;
      local_a8[1] = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_80,0);
      memcpy(local_58,puVar4,lVar6 * 2);
      local_a8[0] = 0;
      local_a8[1] = 0;
      if (1 < (int)local_50) {
        do {
          cVar1 = FUN_14474156a(&local_58,local_a8);
          if (cVar1 == '\0') break;
          ppuVar5 = (undefined2 **)&DAT_149dfb77a;
          if ((int)local_50 != 0) {
            ppuVar5 = local_58;
          }
          iVar3 = (int)local_50 + -1;
          if ((int)local_50 == 0) {
            iVar3 = 0;
          }
          uVar2 = FUN_144a49b4a(iVar3,ppuVar5);
          FUN_14708511c(param_5,uVar2,&local_58);
        } while (1 < (int)local_50);
      }
    }
    local_68 = &local_88;
    FUN_147084628(param_5,&local_5c);
    lVar6 = *param_5;
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + (longlong)local_5c * 0x68;
  }
  else {
    if (*param_5 + (longlong)iVar3 * 0x68 == 0) goto LAB_14707d463;
    lVar6 = *param_5 + (longlong)iVar3 * 0x68;
  }
  local_58 = (undefined2 **)(local_a8 + 2);
  local_50 = param_2;
  FUN_147084b34(lVar6 + 0x10,local_a8);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14707d30b:
  if (param_6 != 0 || param_7 != 0) {
    puVar4 = local_78;
    if ((uint)uStack_70 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_88 = (undefined2 *)FUN_14707cd4c(puVar4,param_4,param_8);
    if (param_7 != 0) {
      local_58 = &local_88;
      local_50 = &local_78;
      FUN_147085402(param_7,local_a8 + 2);
    }
    if (param_6 != 0) {
      local_58 = &local_88;
      local_50 = param_2;
      FUN_1470855aa(param_6,local_a8 + 2);
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14707d5ec FUN_14707d5ec body=88 status=ok
// SIG undefined FUN_14707d5ec(void)

undefined8 * FUN_14707d5ec(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1417367c6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14707d644 FUN_14707d644 body=160 status=ok
// SIG undefined FUN_14707d644(void)

longlong * FUN_14707d644(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  if ((char)param_1[0x1c] == '\x01') {
    puVar2 = (undefined4 *)
             (*(longlong *)param_1[0xb] + (longlong)*(int *)((longlong)param_1 + 0x74) * 0x18 + 8);
  }
  else {
    puVar2 = (undefined4 *)
             (*(longlong *)param_1[6] + (longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + 0x10);
  }
  local_14 = *puVar2;
  local_28 = lVar1 + 0x78;
  FUN_1407fa642(&local_14,param_1 + 0x12,lVar1 + 0x1e0,lVar1 + 0xd8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 + 0x12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707d6e6 FUN_14707d6e6 body=70 status=ok
// SIG undefined FUN_14707d6e6(void)

undefined8 FUN_14707d6e6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((((*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) &&
       (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))) &&
      (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44))) &&
     (((*(char *)(param_1 + 0x48) == *(char *)(param_2 + 0x48) &&
       (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) &&
      (*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38))))) {
    uVar1 = FUN_14707fe87(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
    return uVar1;
  }
  return 0;
}



// FUNCTION 14707d72c FUN_14707d72c body=587 status=ok
// SIG undefined FUN_14707d72c(void)

longlong FUN_14707d72c(longlong param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)(param_1 + 0x38);
  puVar8 = (uint *)(param_1 + 100);
  bVar10 = *(char *)(param_1 + 0xe0) == '\0';
  puVar3 = (undefined8 *)(param_1 + 0x60);
  if (bVar10) {
    puVar8 = (uint *)(param_1 + 0x3c);
    puVar3 = puVar1;
  }
  puVar5 = (uint *)(param_1 + 0x70);
  if (bVar10) {
    puVar5 = (uint *)(param_1 + 0x48);
  }
  *puVar5 = *puVar5 & ~*puVar8;
  FUN_1449c0562(puVar3);
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (*(int *)(param_1 + 0x24) < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18)) {
      do {
        iVar4 = *(int *)(param_1 + 0x4c);
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x18);
        if (iVar4 < iVar7) {
          if ((*(char *)(param_1 + 0xe1) != '\0') ||
             (lVar6 = FUN_14707d644(param_1), (*(byte *)(lVar6 + 0x48) & 2) == 0)) break;
          iVar4 = *(int *)(param_1 + 0x4c);
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x18);
        }
        if (iVar4 < iVar7) {
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & ~*(uint *)(param_1 + 0x3c);
          FUN_1449c0562(puVar1);
        }
        else {
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~*(uint *)(param_1 + 0x14);
          FUN_1449c0562(param_1 + 0x10);
          if (*(int *)(param_1 + 0x24) < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18)) {
            lVar6 = **(longlong **)(param_1 + 8);
            lVar9 = (longlong)*(int *)(param_1 + 0x24) * 0x68;
            local_60 = lVar9 + 0x20 + lVar6;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            local_50 = 0;
            if (*(int *)(local_60 + 0x18) != 0) {
              FUN_1449c0562(&local_68);
            }
            local_88 = local_68;
            local_80 = local_60;
            local_78 = local_58;
            local_70 = local_50;
            *(longlong *)(param_1 + 0x30) = lVar9 + 0x10 + lVar6;
            *(undefined8 *)(param_1 + 0x48) = local_58;
            *(undefined4 *)(param_1 + 0x50) = local_50;
            *(undefined4 *)(param_1 + 0x54) = local_4c;
            *puVar1 = local_68;
            *(longlong *)(param_1 + 0x40) = local_60;
          }
        }
      } while (*(int *)(param_1 + 0x24) < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18));
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x80),0);
    }
    puVar2 = *(undefined2 **)(param_1 + 0x80);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    while (((*(int *)(param_1 + 0x74) < *(int *)(*(longlong *)(param_1 + 0x68) + 0x18) &&
            (*(char *)(param_1 + 0xe1) == '\0')) &&
           (lVar6 = FUN_14707d644(param_1), (*(byte *)(lVar6 + 0x48) & 2) != 0))) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & ~*(uint *)(param_1 + 100);
      FUN_1449c0562((undefined8 *)(param_1 + 0x60));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707d978 FUN_14707d978 body=201 status=ok
// SIG undefined FUN_14707d978(void)

longlong FUN_14707d978(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0xe0) == '\0') && (*(int *)(param_1 + 0x88) < 2)) {
    FUN_1404740bc(&local_30,(longlong)*(int *)(param_1 + 0x24) * 0x68 + **(longlong **)(param_1 + 8)
                  ,(longlong)*(int *)(param_1 + 0x4c) * 0x20 + **(longlong **)(param_1 + 0x30));
    if ((longlong *)(param_1 + 0x80) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x80) = local_30;
      *(undefined4 *)(param_1 + 0x88) = local_28;
      *(undefined4 *)(param_1 + 0x8c) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1 + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707da42 FUN_14707da42 body=77 status=ok
// SIG undefined FUN_14707da42(void)

void FUN_14707da42(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0xe2) == '\x01') {
    ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 0x188));
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14707da90 FUN_14707da90 body=151 status=ok
// SIG undefined FUN_14707da90(void)

longlong *
FUN_14707da90(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar1 = FUN_14707db28();
  if (lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    lVar1 = FUN_14707cd4c(lVar1,param_4,param_5);
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      plVar4 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_3[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) *
                      4);
      if (iVar3 != -1) {
        do {
          plVar4 = (longlong *)(*param_3 + (longlong)iVar3 * 0x18);
          if (*plVar4 == lVar1) goto LAB_14707dac9;
          iVar3 = (int)plVar4[2];
        } while (iVar3 != -1);
      }
    }
    plVar4 = (longlong *)0x0;
LAB_14707dac9:
    plVar2 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}



// FUNCTION 14707db28 FUN_14707db28 body=118 status=ok
// SIG undefined FUN_14707db28(void)

short * FUN_14707db28(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  short *psVar4;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
    psVar4 = (short *)0x0;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
    psVar4 = (short *)(ulonglong)(*(int *)(param_2 + 1) - 1);
  }
  cVar1 = FUN_144a791f8(param_1,puVar2,psVar4,1);
  psVar4 = (short *)0x0;
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    iVar3 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar3 = 0;
    }
    psVar4 = (short *)0x0;
    if (puVar2[iVar3] != 0) {
      psVar4 = puVar2 + iVar3;
    }
  }
  return psVar4;
}



// FUNCTION 14707dba2 FUN_14707dba2 body=38 status=ok
// SIG undefined FUN_14707dba2(void)

undefined8 FUN_14707dba2(undefined8 param_1,int param_2)

{
  FUN_1458536e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707dbe8 FUN_14707dbe8 body=26 status=ok
// SIG undefined FUN_14707dbe8(void)

bool FUN_14707dbe8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142b0a888(param_1 + -0x10,param_2,0);
  return cVar1 == '\x01';
}



// FUNCTION 14707dc02 FUN_14707dc02 body=189 status=ok
// SIG undefined FUN_14707dc02(void)

void FUN_14707dc02(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [24];
  longlong local_f0;
  int local_e4;
  longlong local_a0;
  int local_94;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14707f99c(local_108,param_1 + -0x10,0,0);
  while( true ) {
    lVar3 = local_f0;
    iVar1 = local_e4;
    if (local_28 == '\x01') {
      lVar3 = local_a0;
      iVar1 = local_94;
    }
    if (*(int *)(lVar3 + 0x18) <= iVar1) break;
    puVar2 = (undefined8 *)FUN_14707d978(local_108);
    puVar4 = &DAT_149dfb77a;
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    FUN_140115ae4(param_2,puVar4,0);
    FUN_14707d72c(local_108);
  }
  FUN_14707da42(local_108);
  if ((local_20 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14707dcd4 FUN_14707dcd4 body=39 status=ok
// SIG undefined FUN_14707dcd4(void)

undefined8 * FUN_14707dcd4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e41c08;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707dd1a FUN_14707dd1a body=312 status=ok
// SIG undefined FUN_14707dd1a(void)

undefined4 * FUN_14707dd1a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14707de54(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14707df3a(param_1,uVar3,local_40,&local_4c);
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
      FUN_14707e028(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707de54 FUN_14707de54 body=229 status=ok
// SIG undefined FUN_14707de54(void)

int * FUN_14707de54(longlong *param_1,int *param_2)

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



// FUNCTION 14707df3a FUN_14707df3a body=124 status=ok
// SIG undefined FUN_14707df3a(void)

undefined8 FUN_14707df3a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14707dfb6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14707dfb6 FUN_14707dfb6 body=114 status=ok
// SIG undefined FUN_14707dfb6(void)

void FUN_14707dfb6(longlong *param_1,int param_2)

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



// FUNCTION 14707e028 FUN_14707e028 body=477 status=ok
// SIG undefined FUN_14707e028(void)

void FUN_14707e028(longlong *param_1)

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



// FUNCTION 14707e206 FUN_14707e206 body=326 status=ok
// SIG undefined FUN_14707e206(void)

undefined4 * FUN_14707e206(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14707e34e(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14707e434(param_1,uVar4,local_40,&local_4c);
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
      FUN_14707e526(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14707e34e FUN_14707e34e body=230 status=ok
// SIG undefined FUN_14707e34e(void)

int * FUN_14707e34e(longlong *param_1,int *param_2)

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



// FUNCTION 14707e434 FUN_14707e434 body=128 status=ok
// SIG undefined FUN_14707e434(void)

undefined8 FUN_14707e434(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14707e4b4((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14707e4b4 FUN_14707e4b4 body=114 status=ok
// SIG undefined FUN_14707e4b4(void)

void FUN_14707e4b4(longlong *param_1,int param_2)

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



// FUNCTION 14707e526 FUN_14707e526 body=474 status=ok
// SIG undefined FUN_14707e526(void)

void FUN_14707e526(longlong *param_1)

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



// FUNCTION 14707e702 FUN_14707e702 body=529 status=ok
// SIG undefined FUN_14707e702(void)

void FUN_14707e702(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)FUN_140e92164();
  lVar1 = param_1 + 0x98;
  FUN_1400021e4(lVar1,&local_50);
  puVar6 = local_50;
  if (local_48 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0xe8))(plVar5,puVar6,0);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar5 == (longlong *)0x0) {
    FUN_1400021e4(lVar1,&local_50);
    puVar6 = local_50;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xad1,
                  L"PanicSyncRead failed to open pak file %s",puVar6);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  cVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x78));
  if (cVar4 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    FUN_1400021e4(lVar1,&local_50);
    puVar6 = local_50;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_68 = uVar3;
    local_60 = uVar2;
    FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xad4,
                  L"PanicSyncRead failed to seek pak file %s   %d bytes at %lld ",puVar6);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2,*(undefined8 *)(param_1 + 0x80));
  if (cVar4 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    FUN_1400021e4(lVar1,&local_50);
    puVar6 = local_50;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_68 = uVar3;
    local_60 = uVar2;
    FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xad9,
                  L"PanicSyncRead failed to read pak file %s   %d bytes at %lld ",puVar6);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)*plVar5)(plVar5,1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14707e914 FUN_14707e914 body=114 status=ok
// SIG undefined FUN_14707e914(void)

bool FUN_14707e914(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_14707eb56(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar1 == iVar2) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    *(undefined1 *)(param_1 + 0x80) = 0;
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
    }
    FUN_14009bf40(param_1);
    *(undefined1 *)(param_1 + 0x51) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  }
  return iVar1 == iVar2;
}



// FUNCTION 14707e986 FUN_14707e986 body=110 status=ok
// SIG undefined FUN_14707e986(void)

void FUN_14707e986(longlong param_1,int param_2)

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
    FUN_14707e9f6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14707e9f6 FUN_14707e9f6 body=132 status=ok
// SIG undefined FUN_14707e9f6(void)

void FUN_14707e9f6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 14707ea7a FUN_14707ea7a body=132 status=ok
// SIG undefined FUN_14707ea7a(void)

void FUN_14707ea7a(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14707eafe(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14707eafe FUN_14707eafe body=87 status=ok
// SIG undefined FUN_14707eafe(void)

void FUN_14707eafe(longlong *param_1,int param_2)

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
  FUN_14707e4b4();
  return;
}



// FUNCTION 14707eb56 FUN_14707eb56 body=132 status=ok
// SIG undefined FUN_14707eb56(void)

void FUN_14707eb56(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14707ebda(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14707ebda FUN_14707ebda body=90 status=ok
// SIG undefined FUN_14707ebda(void)

void FUN_14707ebda(longlong *param_1,int param_2)

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
  FUN_14707dfb6();
  return;
}



// FUNCTION 14707ec34 FUN_14707ec34 body=275 status=ok
// SIG undefined FUN_14707ec34(void)

void FUN_14707ec34(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_1400020a8();
  }
  FUN_14707ed47(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_14707ed72(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14707ee29(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14707ee78(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00014707ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14707ed47 FUN_14707ed47 body=43 status=ok
// SIG undefined FUN_14707ed47(void)

void FUN_14707ed47(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14707ed72 FUN_14707ed72 body=54 status=ok
// SIG undefined FUN_14707ed72(void)

void FUN_14707ed72(longlong *param_1)

{
  FUN_14707eda8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14707eda8 FUN_14707eda8 body=128 status=ok
// SIG undefined FUN_14707eda8(void)

void FUN_14707eda8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14707ee29 FUN_14707ee29 body=79 status=ok
// SIG undefined FUN_14707ee29(void)

void FUN_14707ee29(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x90);
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
      plVar4 = plVar4 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14707ee78 FUN_14707ee78 body=52 status=ok
// SIG undefined FUN_14707ee78(void)

void FUN_14707ee78(longlong *param_1)

{
  FUN_14707eeac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14707eeac FUN_14707eeac body=89 status=ok
// SIG undefined FUN_14707eeac(void)

void FUN_14707eeac(longlong param_1)

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



// FUNCTION 14707ef06 FUN_14707ef06 body=57 status=ok
// SIG undefined FUN_14707ef06(void)

undefined8 * FUN_14707ef06(undefined8 *param_1,int param_2)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e41c08;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707ef64 FUN_14707ef64 body=48 status=ok
// SIG undefined FUN_14707ef64(void)

void FUN_14707ef64(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_142b10064(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14707ef94 FUN_14707ef94 body=38 status=ok
// SIG undefined FUN_14707ef94(void)

undefined8 FUN_14707ef94(undefined8 param_1,int param_2)

{
  FUN_1400e0f74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707efc6 FUN_14707efc6 body=307 status=ok
// SIG undefined FUN_14707efc6(void)

undefined8 *
FUN_14707efc6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,ulonglong param_7,longlong param_8,
             undefined4 param_9,undefined8 param_10,undefined4 *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  uint in_stack_ffffffffffffffb0;
  
  FUN_140473580(param_1,param_3,param_5,param_7 + param_6,param_8,param_9,param_10,
                in_stack_ffffffffffffffb0 & 0xffffff00,0);
  *param_1 = &PTR_FUN_14a161710;
  param_1[0xb] = &PTR_FUN_14a161738;
  param_1[0x15] = param_7 + param_6;
  param_1[0x16] = param_8;
  uVar1 = param_11[1];
  uVar2 = param_11[2];
  uVar3 = param_11[3];
  *(undefined4 *)(param_1 + 0x17) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
  param_6 = param_6 + (param_7 & 0xfffffffffffffff0);
  param_1[0xf] = param_6;
  lVar5 = (param_8 + 0xf + param_7 & 0xfffffffffffffff0) - (param_7 & 0xfffffffffffffff0);
  param_1[0x10] = lVar5;
  cVar4 = FUN_140473682(DAT_14c9a0260,param_1 + 0xb,param_2,param_3,param_4,param_6,lVar5,param_9);
  if (cVar4 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
    FUN_14009bf40(param_1);
    *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  }
  return param_1;
}



// FUNCTION 14707f0fa FUN_14707f0fa body=38 status=ok
// SIG undefined FUN_14707f0fa(void)

undefined8 FUN_14707f0fa(undefined8 param_1,int param_2)

{
  FUN_1400ef000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f120 FUN_14707f120 body=68 status=ok
// SIG undefined FUN_14707f120(void)

void FUN_14707f120(longlong param_1)

{
  FUN_14039d2ba(DAT_14c9a0260,param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xa5) = 0;
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    *(undefined1 *)(param_1 + 0xa4) = 0;
    FUN_14009bf40(param_1);
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



// FUNCTION 14707f164 FUN_14707f164 body=45 status=ok
// SIG undefined FUN_14707f164(void)

longlong FUN_14707f164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_1400ef000(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f192 FUN_14707f192 body=38 status=ok
// SIG undefined FUN_14707f192(void)

undefined8 FUN_14707f192(undefined8 param_1,int param_2)

{
  FUN_1400ef000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f1b8 FUN_14707f1b8 body=45 status=ok
// SIG undefined FUN_14707f1b8(void)

longlong FUN_14707f1b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_1400ef000(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f20e FUN_14707f20e body=114 status=ok
// SIG undefined FUN_14707f20e(void)

void FUN_14707f20e(longlong *param_1,int param_2)

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



// FUNCTION 14707f280 FUN_14707f280 body=45 status=ok
// SIG undefined FUN_14707f280(void)

longlong FUN_14707f280(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_1400ef000(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14707f2ae FUN_14707f2ae body=119 status=ok
// SIG undefined FUN_14707f2ae(void)

void FUN_14707f2ae(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x78);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x80) == '\x01')) {
    FUN_14707a9d2(*(undefined8 *)(param_1 + 0x58),param_1 + 0x88,param_1,
                  *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_1 + 0x81);
    if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0xbc)) {
      *(undefined1 *)(param_1 + 0x80) = 0;
      FUN_14009bf40(param_1);
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
  }
  return;
}



// FUNCTION 14707f326 FUN_14707f326 body=29 status=ok
// SIG undefined FUN_14707f326(void)

undefined8 FUN_14707f326(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


