// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1471ce3fa FUN_1471ce3fa body=139 status=ok
// SIG undefined FUN_1471ce3fa(void)

void FUN_1471ce3fa(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1471ce486(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1471ce461;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1471ce461:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1471ce486 FUN_1471ce486 body=114 status=ok
// SIG undefined FUN_1471ce486(void)

void FUN_1471ce486(longlong *param_1,int param_2)

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



// FUNCTION 1471ce4f8 FUN_1471ce4f8 body=68 status=ok
// SIG undefined FUN_1471ce4f8(void)

void FUN_1471ce4f8(longlong param_1,uint param_2)

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
  FUN_1471ce53c(param_1);
  return;
}



// FUNCTION 1471ce53c FUN_1471ce53c body=419 status=ok
// SIG undefined FUN_1471ce53c(void)

void FUN_1471ce53c(longlong *param_1)

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



// FUNCTION 1471ce6e0 FUN_1471ce6e0 body=326 status=ok
// SIG undefined FUN_1471ce6e0(void)

undefined4 * FUN_1471ce6e0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1471ce828(param_1,local_48);
  puVar9 = (undefined8 *)*param_3;
  puVar8 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar9 + 1);
  *local_40 = *puVar9;
  puVar9 = local_40 + 2;
  for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1448eb174(local_40,0xc,0);
  cVar2 = FUN_1471ce916(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x5c) = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1471ce974(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471ce828 FUN_1471ce828 body=238 status=ok
// SIG undefined FUN_1471ce828(void)

int * FUN_1471ce828(longlong *param_1,int *param_2)

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



// FUNCTION 1471ce916 FUN_1471ce916 body=94 status=ok
// SIG undefined FUN_1471ce916(void)

undefined8 FUN_1471ce916(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1471ce00e(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0x60 + *param_1),param_3,0x58);
    FUN_1471ce16c(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1471ce974 FUN_1471ce974 body=453 status=ok
// SIG undefined FUN_1471ce974(void)

void FUN_1471ce974(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
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



// FUNCTION 1471ceb3a FUN_1471ceb3a body=87 status=ok
// SIG undefined FUN_1471ceb3a(void)

void FUN_1471ceb3a(longlong *param_1,int param_2)

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
  FUN_1471ce486();
  return;
}



// FUNCTION 1471ceb92 FUN_1471ceb92 body=114 status=ok
// SIG undefined FUN_1471ceb92(void)

void FUN_1471ceb92(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_142cbf292(param_1[0x15],param_1[0x16],param_1[0x17],*(undefined1 *)(param_1 + 0x1b),
                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x19),param_1[0x1a]);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001471cebfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1471cec04 FUN_1471cec04 body=326 status=ok
// SIG undefined FUN_1471cec04(void)

undefined4 * FUN_1471cec04(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1471ced4c(param_1,local_48);
  puVar9 = (undefined8 *)*param_3;
  puVar8 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar9 + 1);
  *local_40 = *puVar9;
  puVar9 = local_40 + 2;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1448eb174(local_40,0xc,0);
  cVar2 = FUN_1471cee2e(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 100) = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1471cef62(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471ced4c FUN_1471ced4c body=226 status=ok
// SIG undefined FUN_1471ced4c(void)

int * FUN_1471ced4c(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 1471cee2e FUN_1471cee2e body=90 status=ok
// SIG undefined FUN_1471cee2e(void)

undefined8 FUN_1471cee2e(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1471cee88(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0x68 + *param_1),param_3,0x60);
    FUN_1471ceeee(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1471cee88 FUN_1471cee88 body=101 status=ok
// SIG undefined FUN_1471cee88(void)

int FUN_1471cee88(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x68;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x60 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1471ceeee FUN_1471ceeee body=116 status=ok
// SIG undefined FUN_1471ceeee(void)

void FUN_1471ceeee(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1471cef62 FUN_1471cef62 body=449 status=ok
// SIG undefined FUN_1471cef62(void)

void FUN_1471cef62(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x68;
        iVar6 = FUN_1448eb174(lVar3 + lVar10,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 100 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar10) =
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



// FUNCTION 1471cf124 FUN_1471cf124 body=107 status=ok
// SIG undefined FUN_1471cf124(void)

void FUN_1471cf124(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1471cf190(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 1471cf190 FUN_1471cf190 body=132 status=ok
// SIG undefined FUN_1471cf190(void)

void FUN_1471cf190(longlong param_1,int param_2)

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



// FUNCTION 1471cf216 FUN_1471cf216 body=79 status=ok
// SIG undefined FUN_1471cf216(void)

void FUN_1471cf216(longlong *param_1,int *param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == *param_2) {
          FUN_1471ceb3a();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1471cf266 FUN_1471cf266 body=296 status=ok
// SIG undefined FUN_1471cf266(void)

undefined4 * FUN_1471cf266(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1471ce314(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar3 = FUN_1471ce3fa(param_1,uVar5,local_40,&local_4c);
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
      FUN_1471ce53c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471cf390 FUN_1471cf390 body=120 status=ok
// SIG undefined FUN_1471cf390(void)

void FUN_1471cf390(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14c9e44ac) {
    DAT_14c9e44ac = (int)uVar2;
    FUN_1446f8d3c(&DAT_14c9e44a0,DAT_14c9e44a8,uVar2,0x30,0x10);
  }
  return;
}



// FUNCTION 1471cf408 FUN_1471cf408 body=159 status=ok
// SIG undefined FUN_1471cf408(void)

void FUN_1471cf408(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9e44a8;
  if (param_1 <= (int)DAT_14c9e44a8) {
    if (DAT_14c9e44ac == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9e44a8) {
        uVar2 = DAT_14c9e44a8;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9e44a8 * 3) >> 3) + (longlong)(int)DAT_14c9e44a8 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    DAT_14c9e44ac = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9e44a0,param_1,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1471cf4a8 FUN_1471cf4a8 body=96 status=ok
// SIG undefined FUN_1471cf4a8(void)

void FUN_1471cf4a8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,2);
  }
  return;
}



// FUNCTION 1471cf508 FUN_1471cf508 body=440 status=ok
// SIG undefined FUN_1471cf508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1471cf508(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  float local_d8 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7080) {
    FUN_144b3d300(&DAT_14c9e7080);
    if (DAT_14c9e7080 == -1) {
      FUN_1467f5600(&DAT_14c9e7070);
      _Init_thread_footer(&DAT_14c9e7080);
    }
  }
  local_d8[0x24] = 0.0;
  local_d8[0x25] = 0.0;
  local_d8[0x26] = 0.0;
  local_d8[0x27] = 0.0;
  local_d8[0x28] = 0.0;
  local_d8[0x29] = 0.0;
  local_d8[0x2a] = 0.0;
  local_d8[0x2b] = 0.0;
  local_d8[0x2c] = 0.0;
  local_d8[0x2d] = 0.0;
  local_d8[0x2e] = 0.0;
  local_d8[0x2f] = 0.0;
  lVar8 = 0;
  do {
    pfVar1 = (float *)(param_1 + 0x60 + lVar8);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *(float *)((longlong)local_d8 + lVar8 + 0x90) = *pfVar1 * DAT_14c9e7078;
    *(float *)((longlong)local_d8 + lVar8 + 0x94) = fVar2 * DAT_14c9e7078;
    *(float *)((longlong)local_d8 + lVar8 + 0x98) = fVar3 * DAT_14c9e7078;
    *(float *)((longlong)local_d8 + lVar8 + 0x9c) = fVar4 * DAT_14c9e7078;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  local_d8[0xc] = 0.0;
  local_d8[0xd] = 0.0;
  local_d8[0xe] = 0.0;
  local_d8[0xf] = 0.0;
  local_d8[0x10] = 0.0;
  local_d8[0x11] = 0.0;
  local_d8[0x12] = 0.0;
  local_d8[0x13] = 0.0;
  local_d8[0x14] = 0.0;
  local_d8[0x15] = 0.0;
  local_d8[0x16] = 0.0;
  local_d8[0x17] = 0.0;
  lVar8 = 0;
  do {
    pfVar1 = (float *)(param_1 + 0x30 + lVar8);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *(float *)((longlong)local_d8 + lVar8 + 0x30) = *pfVar1 * DAT_14c9e7074;
    *(float *)((longlong)local_d8 + lVar8 + 0x34) = fVar2 * DAT_14c9e7074;
    *(float *)((longlong)local_d8 + lVar8 + 0x38) = fVar3 * DAT_14c9e7074;
    *(float *)((longlong)local_d8 + lVar8 + 0x3c) = fVar4 * DAT_14c9e7074;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  local_d8[0] = 0.0;
  local_d8[1] = 0.0;
  local_d8[2] = 0.0;
  local_d8[3] = 0.0;
  local_d8[4] = 0.0;
  local_d8[5] = 0.0;
  local_d8[6] = 0.0;
  local_d8[7] = 0.0;
  local_d8[8] = 0.0;
  local_d8[9] = 0.0;
  local_d8[10] = 0.0;
  local_d8[0xb] = 0.0;
  lVar8 = 0;
  do {
    pfVar1 = (float *)(param_1 + lVar8);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *(float *)((longlong)local_d8 + lVar8) = *pfVar1 * _DAT_14c9e7070;
    *(float *)((longlong)local_d8 + lVar8 + 4) = fVar2 * _DAT_14c9e7070;
    *(float *)((longlong)local_d8 + lVar8 + 8) = fVar3 * _DAT_14c9e7070;
    *(float *)((longlong)local_d8 + lVar8 + 0xc) = fVar4 * _DAT_14c9e7070;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  local_d8[0x20] = 0.0;
  local_d8[0x21] = 0.0;
  local_d8[0x22] = 0.0;
  local_d8[0x23] = 0.0;
  local_d8[0x1c] = 0.0;
  local_d8[0x1d] = 0.0;
  local_d8[0x1e] = 0.0;
  local_d8[0x1f] = 0.0;
  local_d8[0x18] = 0.0;
  local_d8[0x19] = 0.0;
  local_d8[0x1a] = 0.0;
  local_d8[0x1b] = 0.0;
  lVar8 = 0;
  do {
    *(float *)((longlong)local_d8 + lVar8 + 0x60) =
         *(float *)((longlong)local_d8 + lVar8 + 0x30) + *(float *)((longlong)local_d8 + lVar8);
    *(float *)((longlong)local_d8 + lVar8 + 100) =
         *(float *)((longlong)local_d8 + lVar8 + 0x34) + *(float *)((longlong)local_d8 + lVar8 + 4);
    *(float *)((longlong)local_d8 + lVar8 + 0x68) =
         *(float *)((longlong)local_d8 + lVar8 + 0x38) + *(float *)((longlong)local_d8 + lVar8 + 8);
    *(float *)((longlong)local_d8 + lVar8 + 0x6c) =
         *(float *)((longlong)local_d8 + lVar8 + 0x3c) +
         *(float *)((longlong)local_d8 + lVar8 + 0xc);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar8 = 0;
  do {
    fVar2 = *(float *)((longlong)local_d8 + lVar8 + 0x94);
    fVar3 = *(float *)((longlong)local_d8 + lVar8 + 0x98);
    fVar4 = *(float *)((longlong)local_d8 + lVar8 + 0x9c);
    fVar5 = *(float *)((longlong)local_d8 + lVar8 + 100);
    fVar6 = *(float *)((longlong)local_d8 + lVar8 + 0x68);
    fVar7 = *(float *)((longlong)local_d8 + lVar8 + 0x6c);
    pfVar1 = (float *)((longlong)param_2 + lVar8);
    *pfVar1 = *(float *)((longlong)local_d8 + lVar8 + 0x90) +
              *(float *)((longlong)local_d8 + lVar8 + 0x60);
    pfVar1[1] = fVar2 + fVar5;
    pfVar1[2] = fVar3 + fVar6;
    pfVar1[3] = fVar4 + fVar7;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x30);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471cf6c2 FUN_1471cf6c2 body=480 status=ok
// SIG undefined FUN_1471cf6c2(void)

void FUN_1471cf6c2(longlong param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  float local_f8 [12];
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[8] = 0.0;
  local_f8[9] = 0.0;
  local_f8[10] = 0.0;
  local_f8[0xb] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  local_f8[0] = 0.28209478;
  local_f8[1] = 0.0;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  lVar9 = 0;
  do {
    fVar6 = *(float *)((longlong)local_f8 + lVar9 + 4);
    fVar7 = *(float *)((longlong)local_f8 + lVar9 + 8);
    fVar8 = *(float *)((longlong)local_f8 + lVar9 + 0xc);
    *(float *)((longlong)&local_38 + lVar9) = *(float *)((longlong)local_f8 + lVar9) * fVar3;
    *(float *)((longlong)&local_38 + lVar9 + 4) = fVar6 * fVar3;
    *(float *)((longlong)&uStack_30 + lVar9) = fVar7 * fVar3;
    *(float *)((longlong)&uStack_30 + lVar9 + 4) = fVar8 * fVar3;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x30);
  local_a8 = local_18;
  uStack_a0 = uStack_10;
  local_b8 = local_28;
  uStack_b0 = uStack_20;
  local_c8 = local_38;
  uStack_c0 = uStack_30;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  lVar9 = 0;
  do {
    fVar3 = *(float *)((longlong)local_f8 + lVar9 + 4);
    fVar6 = *(float *)((longlong)local_f8 + lVar9 + 8);
    fVar7 = *(float *)((longlong)local_f8 + lVar9 + 0xc);
    *(float *)((longlong)&local_38 + lVar9) = *(float *)((longlong)local_f8 + lVar9) * fVar4;
    *(float *)((longlong)&local_38 + lVar9 + 4) = fVar3 * fVar4;
    *(float *)((longlong)&uStack_30 + lVar9) = fVar6 * fVar4;
    *(float *)((longlong)&uStack_30 + lVar9 + 4) = fVar7 * fVar4;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x30);
  local_78 = (undefined4)local_18;
  uStack_74 = local_18._4_4_;
  uStack_70 = (undefined4)uStack_10;
  uStack_6c = uStack_10._4_4_;
  local_88 = local_28;
  uStack_80 = uStack_20;
  local_98 = local_38;
  uStack_90 = uStack_30;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  lVar9 = 0;
  do {
    fVar3 = *(float *)((longlong)local_f8 + lVar9 + 4);
    fVar4 = *(float *)((longlong)local_f8 + lVar9 + 8);
    fVar6 = *(float *)((longlong)local_f8 + lVar9 + 0xc);
    *(float *)((longlong)&local_38 + lVar9) = *(float *)((longlong)local_f8 + lVar9) * fVar5;
    *(float *)((longlong)&local_38 + lVar9 + 4) = fVar3 * fVar5;
    *(float *)((longlong)&uStack_30 + lVar9) = fVar4 * fVar5;
    *(float *)((longlong)&uStack_30 + lVar9 + 4) = fVar6 * fVar5;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x30);
  local_48 = (undefined4)local_18;
  uStack_44 = local_18._4_4_;
  uStack_40 = (undefined4)uStack_10;
  uStack_3c = uStack_10._4_4_;
  local_58 = (undefined4)local_28;
  uStack_54 = local_28._4_4_;
  uStack_50 = (undefined4)uStack_20;
  uStack_4c = uStack_20._4_4_;
  local_68 = local_38;
  uStack_60 = uStack_30;
  lVar9 = 0;
  do {
    fVar3 = *(float *)((longlong)&local_c8 + lVar9 + 4);
    fVar4 = *(float *)((longlong)&uStack_c0 + lVar9);
    fVar5 = *(float *)((longlong)&uStack_c0 + lVar9 + 4);
    pfVar1 = (float *)(param_1 + lVar9);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar2 = (float *)(param_1 + lVar9);
    *pfVar2 = *(float *)((longlong)&local_c8 + lVar9) + *pfVar1;
    pfVar2[1] = fVar3 + fVar6;
    pfVar2[2] = fVar4 + fVar7;
    pfVar2[3] = fVar5 + fVar8;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x30);
  lVar9 = 0x30;
  do {
    fVar3 = *(float *)((longlong)&local_c8 + lVar9 + 4);
    fVar4 = *(float *)((longlong)&uStack_c0 + lVar9);
    fVar5 = *(float *)((longlong)&uStack_c0 + lVar9 + 4);
    pfVar1 = (float *)(param_1 + lVar9);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar2 = (float *)(param_1 + lVar9);
    *pfVar2 = *(float *)((longlong)&local_c8 + lVar9) + *pfVar1;
    pfVar2[1] = fVar3 + fVar6;
    pfVar2[2] = fVar4 + fVar7;
    pfVar2[3] = fVar5 + fVar8;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x60);
  lVar9 = 0x60;
  do {
    fVar3 = *(float *)((longlong)&local_c8 + lVar9 + 4);
    fVar4 = *(float *)((longlong)&uStack_c0 + lVar9);
    fVar5 = *(float *)((longlong)&uStack_c0 + lVar9 + 4);
    pfVar1 = (float *)(param_1 + lVar9);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar2 = (float *)(param_1 + lVar9);
    *pfVar2 = *(float *)((longlong)&local_c8 + lVar9) + *pfVar1;
    pfVar2[1] = fVar3 + fVar6;
    pfVar2[2] = fVar4 + fVar7;
    pfVar2[3] = fVar5 + fVar8;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x90);
  if ((local_8 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471cf8a4 FUN_1471cf8a4 body=164 status=ok
// SIG undefined FUN_1471cf8a4(void)

void FUN_1471cf8a4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1471cf924;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1471cf924:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1471cf948 FUN_1471cf948 body=175 status=ok
// SIG undefined FUN_1471cf948(void)

void FUN_1471cf948(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1471cf9d1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1471cf9d1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1471cf9f8 FUN_1471cf9f8 body=210 status=ok
// SIG undefined FUN_1471cf9f8(void)

void FUN_1471cf9f8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1471cfa9c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1471cfa9c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1471cfaca FUN_1471cfaca body=38 status=ok
// SIG undefined FUN_1471cfaca(void)

undefined8 FUN_1471cfaca(undefined8 param_1,int param_2)

{
  FUN_1462d1378();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471cfb24 FUN_1471cfb24 body=38 status=ok
// SIG undefined FUN_1471cfb24(void)

undefined8 FUN_1471cfb24(undefined8 param_1,int param_2)

{
  FUN_1462d13c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471cfb50 FUN_1471cfb50 body=38 status=ok
// SIG undefined FUN_1471cfb50(void)

undefined8 FUN_1471cfb50(undefined8 param_1,int param_2)

{
  FUN_1462d1408();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471cfb7c FUN_1471cfb7c body=93 status=ok
// SIG undefined FUN_1471cfb7c(void)

void FUN_1471cfb7c(longlong param_1,int param_2)

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
  FUN_140064328();
  return;
}



// FUNCTION 1471cfbda FUN_1471cfbda body=93 status=ok
// SIG undefined FUN_1471cfbda(void)

void FUN_1471cfbda(longlong param_1,int param_2)

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
  FUN_1400644fe();
  return;
}



// FUNCTION 1471cfc38 FUN_1471cfc38 body=384 status=ok
// SIG undefined FUN_1471cfc38(void)

void FUN_1471cfc38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9e69b8;
  if (DAT_14c9e69b8 != 0) {
    LOCK();
    *(int *)(DAT_14c9e69b8 + 8) = *(int *)(DAT_14c9e69b8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e6970;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a240bc0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471cfdba FUN_1471cfdba body=38 status=ok
// SIG undefined FUN_1471cfdba(void)

undefined8 FUN_1471cfdba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471cfde0 FUN_1471cfde0 body=384 status=ok
// SIG undefined FUN_1471cfde0(void)

void FUN_1471cfde0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9e6a40;
  if (DAT_14c9e6a40 != 0) {
    LOCK();
    *(int *)(DAT_14c9e6a40 + 8) = *(int *)(DAT_14c9e6a40 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9e69f8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a240be0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471cff62 FUN_1471cff62 body=38 status=ok
// SIG undefined FUN_1471cff62(void)

undefined8 FUN_1471cff62(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471cff88 FUN_1471cff88 body=29 status=ok
// SIG undefined FUN_1471cff88(void)

undefined8 FUN_1471cff88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471cffa6 FUN_1471cffa6 body=231 status=ok
// SIG undefined FUN_1471cffa6(void)

undefined8 *
FUN_1471cffa6(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_144a92736();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9e5468;
  puVar6[4] = DAT_14c9e5468;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9e5420;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a241858;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1471d008e FUN_1471d008e body=38 status=ok
// SIG undefined FUN_1471d008e(void)

undefined8 FUN_1471d008e(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d00b4 FUN_1471d00b4 body=93 status=ok
// SIG undefined FUN_1471d00b4(void)

void FUN_1471d00b4(longlong param_1,int param_2)

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
  FUN_1400610c4();
  return;
}



// FUNCTION 1471d0112 FUN_1471d0112 body=93 status=ok
// SIG undefined FUN_1471d0112(void)

void FUN_1471d0112(longlong param_1,int param_2)

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
  FUN_1400646d4();
  return;
}



// FUNCTION 1471d0270 FUN_1471d0270 body=42 status=ok
// SIG undefined FUN_1471d0270(void)

void FUN_1471d0270(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d02ba FUN_1471d02ba body=96 status=ok
// SIG undefined FUN_1471d02ba(void)

undefined8 FUN_1471d02ba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e850f4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e9c68,1);
  return uVar3;
}



// FUNCTION 1471d031a FUN_1471d031a body=52 status=ok
// SIG undefined FUN_1471d031a(void)

void FUN_1471d031a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d034e FUN_1471d034e body=42 status=ok
// SIG undefined FUN_1471d034e(void)

void FUN_1471d034e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d0398 FUN_1471d0398 body=96 status=ok
// SIG undefined FUN_1471d0398(void)

undefined8 FUN_1471d0398(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2dba2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e9cf0,1);
  return uVar3;
}



// FUNCTION 1471d03f8 FUN_1471d03f8 body=52 status=ok
// SIG undefined FUN_1471d03f8(void)

void FUN_1471d03f8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d042c FUN_1471d042c body=42 status=ok
// SIG undefined FUN_1471d042c(void)

void FUN_1471d042c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d0476 FUN_1471d0476 body=96 status=ok
// SIG undefined FUN_1471d0476(void)

undefined8 FUN_1471d0476(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f917a2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e9d78,1);
  return uVar3;
}



// FUNCTION 1471d04d6 FUN_1471d04d6 body=52 status=ok
// SIG undefined FUN_1471d04d6(void)

void FUN_1471d04d6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d050a FUN_1471d050a body=132 status=ok
// SIG undefined FUN_1471d050a(void)

int FUN_1471d050a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_2 + 0x10);
  iVar3 = 0;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x58) == (code *)&LAB_144b15db2) {
      local_1c = (int)plVar1[4];
    }
    else {
      local_1c = (**(code **)(*plVar1 + 0x58))();
    }
    iVar3 = 0;
    if ((local_1c != 0) && (*(uint *)(param_1 + 0x20) < 8)) {
      bVar2 = FUN_144aa71ce(param_1 + 0x18,&local_1c);
      iVar3 = 1 << (bVar2 & 0x1f);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471d0590 FUN_1471d0590 body=42 status=ok
// SIG undefined FUN_1471d0590(void)

void FUN_1471d0590(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d05da FUN_1471d05da body=96 status=ok
// SIG undefined FUN_1471d05da(void)

undefined8 FUN_1471d05da(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0485e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e9e40,1);
  return uVar3;
}



// FUNCTION 1471d063a FUN_1471d063a body=52 status=ok
// SIG undefined FUN_1471d063a(void)

void FUN_1471d063a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d066e FUN_1471d066e body=42 status=ok
// SIG undefined FUN_1471d066e(void)

void FUN_1471d066e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d06b8 FUN_1471d06b8 body=96 status=ok
// SIG undefined FUN_1471d06b8(void)

undefined8 FUN_1471d06b8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14604640a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9e9ec8,1);
  return uVar3;
}



// FUNCTION 1471d0718 FUN_1471d0718 body=52 status=ok
// SIG undefined FUN_1471d0718(void)

void FUN_1471d0718(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d074c FUN_1471d074c body=54 status=ok
// SIG undefined FUN_1471d074c(void)

void FUN_1471d074c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1471d078a FUN_1471d078a body=89 status=ok
// SIG undefined FUN_1471d078a(void)

undefined8 FUN_1471d078a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  FUN_144a937ae();
  FUN_147440c52(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28),
                &DAT_14c9e9f50,0);
  return uVar1;
}



// FUNCTION 1471d07e4 FUN_1471d07e4 body=31 status=ok
// SIG undefined FUN_1471d07e4(void)

void FUN_1471d07e4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea222(uVar1);
  return;
}



// FUNCTION 1471d0804 FUN_1471d0804 body=54 status=ok
// SIG undefined FUN_1471d0804(void)

void FUN_1471d0804(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1471d0842 FUN_1471d0842 body=39 status=ok
// SIG undefined FUN_1471d0842(void)

void FUN_1471d0842(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471d488e(uVar1,param_1);
  return;
}



// FUNCTION 1471d086a FUN_1471d086a body=59 status=ok
// SIG undefined FUN_1471d086a(void)

longlong FUN_1471d086a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined2 *)(lVar1 + 0x108) = 0;
  return lVar1;
}



// FUNCTION 1471d08a5 FUN_1471d08a5 body=798 status=ok
// SIG undefined FUN_1471d08a5(void)

void FUN_1471d08a5(float *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_2f8 [32];
  double local_2d8 [6];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [128];
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined1 local_158 [136];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar1 = *(longlong *)(param_3 + 0x28);
  local_188 = 1.0 / *(double *)(lVar1 + 0x1a0);
  local_1b0 = 1.0 / *(double *)(lVar1 + 0x1a8);
  local_1d8 = 1.0 / *(double *)(lVar1 + 0x1b0);
  local_1d0 = 0.0;
  dStack_1c8 = 0.0;
  local_1c0 = 0.0;
  dStack_1b8 = 0.0;
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_198 = 0.0;
  dStack_190 = 0.0;
  local_180 = 0.0;
  dStack_178 = 0.0;
  local_170 = 0.0;
  dStack_168 = 0.0;
  local_160 = 1.0;
  FUN_1447fea8d(local_158,lVar1 + 0x50);
  dVar3 = 1.0 / (double)(*(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc));
  dVar4 = 1.0 / (double)(*(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8));
  dVar2 = (double)*(int *)(param_2 + 0x30fc);
  local_2d8[5] = dVar3 * -2.0;
  local_2d8[0] = dVar4 + dVar4;
  local_278 = (double)*(int *)(param_2 + 0x30f8) * -2.0 * dVar4 + -1.0;
  local_270 = (dVar2 + dVar2) * dVar3 + 1.0;
  local_2d8[1] = 0.0;
  local_2d8[2] = 0.0;
  local_2d8[3] = 0.0;
  local_2d8[4] = 0.0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0x3ff0000000000000;
  local_280 = 0;
  local_268 = 0;
  local_260 = 0x3ff0000000000000;
  FUN_1447fea8d(local_258,local_2d8,param_2 + 0xb30);
  FUN_1447fea8d(&local_1d8,local_258,local_158);
  *param_1 = (float)local_1d8;
  param_1[1] = (float)local_1d0;
  param_1[2] = (float)dStack_1c8;
  param_1[3] = (float)local_1c0;
  param_1[4] = (float)dStack_1b8;
  param_1[5] = (float)local_1b0;
  param_1[6] = (float)local_1a8;
  param_1[7] = (float)dStack_1a0;
  param_1[8] = (float)local_198;
  param_1[9] = (float)dStack_190;
  param_1[10] = (float)local_188;
  param_1[0xb] = (float)local_180;
  param_1[0xc] = (float)dStack_178;
  param_1[0xd] = (float)local_170;
  param_1[0xe] = (float)dStack_168;
  param_1[0xf] = (float)local_160;
  if ((local_d0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471d0bc4 FUN_1471d0bc4 body=54 status=ok
// SIG undefined FUN_1471d0bc4(void)

void FUN_1471d0bc4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1471d0c02 FUN_1471d0c02 body=39 status=ok
// SIG undefined FUN_1471d0c02(void)

void FUN_1471d0c02(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1471d4918(uVar1,param_1);
  return;
}



// FUNCTION 1471d0c2a FUN_1471d0c2a body=57 status=ok
// SIG undefined FUN_1471d0c2a(void)

longlong FUN_1471d0c2a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x104) = 0;
  *(undefined8 *)(lVar1 + 0x10c) = 0;
  return lVar1;
}



// FUNCTION 1471d0c63 FUN_1471d0c63 body=73 status=ok
// SIG undefined FUN_1471d0c63(void)

void FUN_1471d0c63(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14068a8e1();
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar4 = 0;
    do {
      *(longlong *)(lVar1 + 0x13780 + lVar4) = lVar3;
      *(undefined8 *)(lVar1 + 0x13778 + lVar4) = *(undefined8 *)(lVar3 + 0x40);
      lVar4 = lVar4 + 0x13c10;
    } while ((longlong)(int)lVar2 * 0x13c10 - lVar4 != 0);
  }
  return;
}



// FUNCTION 1471d0cac FUN_1471d0cac body=42 status=ok
// SIG undefined FUN_1471d0cac(void)

void FUN_1471d0cac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d0cda FUN_1471d0cda body=96 status=ok
// SIG undefined FUN_1471d0cda(void)

undefined8 FUN_1471d0cda(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141594fa4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ea0f8,1);
  return uVar3;
}



// FUNCTION 1471d0d3a FUN_1471d0d3a body=52 status=ok
// SIG undefined FUN_1471d0d3a(void)

void FUN_1471d0d3a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d0d6e FUN_1471d0d6e body=42 status=ok
// SIG undefined FUN_1471d0d6e(void)

void FUN_1471d0d6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d0dd0 FUN_1471d0dd0 body=96 status=ok
// SIG undefined FUN_1471d0dd0(void)

undefined8 FUN_1471d0dd0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7a090();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ea180,1);
  return uVar3;
}



// FUNCTION 1471d0e30 FUN_1471d0e30 body=52 status=ok
// SIG undefined FUN_1471d0e30(void)

void FUN_1471d0e30(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d0e64 FUN_1471d0e64 body=248 status=ok
// SIG undefined FUN_1471d0e64(void)

void FUN_1471d0e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145f7a090();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,&DAT_14c9ea180,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = param_7;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_b0 = param_2;
  FUN_145f7a090();
  FUN_1471d9e6e(param_1,param_3,param_5,&local_b8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471d0f5e FUN_1471d0f5e body=42 status=ok
// SIG undefined FUN_1471d0f5e(void)

void FUN_1471d0f5e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d0f94 FUN_1471d0f94 body=96 status=ok
// SIG undefined FUN_1471d0f94(void)

undefined8 FUN_1471d0f94(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14154104e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ea208,1);
  return uVar3;
}



// FUNCTION 1471d0ff4 FUN_1471d0ff4 body=52 status=ok
// SIG undefined FUN_1471d0ff4(void)

void FUN_1471d0ff4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d1028 FUN_1471d1028 body=54 status=ok
// SIG undefined FUN_1471d1028(void)

void FUN_1471d1028(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1471d1066 FUN_1471d1066 body=39 status=ok
// SIG undefined FUN_1471d1066(void)

void FUN_1471d1066(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471d9ff8(uVar1,param_1);
  return;
}



// FUNCTION 1471d108e FUN_1471d108e body=79 status=ok
// SIG undefined FUN_1471d108e(void)

longlong FUN_1471d108e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1471d10de FUN_1471d10de body=54 status=ok
// SIG undefined FUN_1471d10de(void)

void FUN_1471d10de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 1471d111c FUN_1471d111c body=39 status=ok
// SIG undefined FUN_1471d111c(void)

void FUN_1471d111c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1471da082(uVar1,param_1);
  return;
}



// FUNCTION 1471d1144 FUN_1471d1144 body=98 status=ok
// SIG undefined FUN_1471d1144(void)

longlong FUN_1471d1144(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined2 *)(lVar1 + 0x11e) = 0;
  return lVar1;
}



// FUNCTION 1471d11a6 FUN_1471d11a6 body=54 status=ok
// SIG undefined FUN_1471d11a6(void)

void FUN_1471d11a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1471d11e4 FUN_1471d11e4 body=39 status=ok
// SIG undefined FUN_1471d11e4(void)

void FUN_1471d11e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471da184(uVar1,param_1);
  return;
}



// FUNCTION 1471d120c FUN_1471d120c body=79 status=ok
// SIG undefined FUN_1471d120c(void)

longlong FUN_1471d120c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1471d125c FUN_1471d125c body=54 status=ok
// SIG undefined FUN_1471d125c(void)

void FUN_1471d125c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 1471d129a FUN_1471d129a body=39 status=ok
// SIG undefined FUN_1471d129a(void)

void FUN_1471d129a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1471da20e(uVar1,param_1);
  return;
}



// FUNCTION 1471d12c2 FUN_1471d12c2 body=98 status=ok
// SIG undefined FUN_1471d12c2(void)

longlong FUN_1471d12c2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined2 *)(lVar1 + 0x11e) = 0;
  return lVar1;
}



// FUNCTION 1471d1324 FUN_1471d1324 body=54 status=ok
// SIG undefined FUN_1471d1324(void)

void FUN_1471d1324(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1471d1362 FUN_1471d1362 body=39 status=ok
// SIG undefined FUN_1471d1362(void)

void FUN_1471d1362(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471da310(uVar1,param_1);
  return;
}



// FUNCTION 1471d138a FUN_1471d138a body=79 status=ok
// SIG undefined FUN_1471d138a(void)

longlong FUN_1471d138a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1471d13da FUN_1471d13da body=54 status=ok
// SIG undefined FUN_1471d13da(void)

void FUN_1471d13da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 1471d1418 FUN_1471d1418 body=39 status=ok
// SIG undefined FUN_1471d1418(void)

void FUN_1471d1418(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1471da39a(uVar1,param_1);
  return;
}



// FUNCTION 1471d1440 FUN_1471d1440 body=98 status=ok
// SIG undefined FUN_1471d1440(void)

longlong FUN_1471d1440(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined2 *)(lVar1 + 0x11e) = 0;
  return lVar1;
}



// FUNCTION 1471d14a2 FUN_1471d14a2 body=54 status=ok
// SIG undefined FUN_1471d14a2(void)

void FUN_1471d14a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1471d14e0 FUN_1471d14e0 body=39 status=ok
// SIG undefined FUN_1471d14e0(void)

void FUN_1471d14e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1471da49c(uVar1,param_1);
  return;
}



// FUNCTION 1471d1508 FUN_1471d1508 body=79 status=ok
// SIG undefined FUN_1471d1508(void)

longlong FUN_1471d1508(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1471d1558 FUN_1471d1558 body=54 status=ok
// SIG undefined FUN_1471d1558(void)

void FUN_1471d1558(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x120);
  return;
}



// FUNCTION 1471d1596 FUN_1471d1596 body=39 status=ok
// SIG undefined FUN_1471d1596(void)

void FUN_1471d1596(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1471da526(uVar1,param_1);
  return;
}



// FUNCTION 1471d15be FUN_1471d15be body=98 status=ok
// SIG undefined FUN_1471d15be(void)

longlong FUN_1471d15be(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  *(undefined8 *)(lVar1 + 0x10e) = 0;
  *(undefined8 *)(lVar1 + 0x116) = 0;
  *(undefined2 *)(lVar1 + 0x11e) = 0;
  return lVar1;
}



// FUNCTION 1471d1632 FUN_1471d1632 body=4 status=ok
// SIG undefined FUN_1471d1632(void)

undefined8 FUN_1471d1632(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1471d1636 FUN_1471d1636 body=248 status=ok
// SIG undefined FUN_1471d1636(void)

void FUN_1471d1636(longlong param_1,longlong *param_2,short *param_3,undefined8 param_4)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + 0x28);
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x50);
      goto LAB_1471d166a;
    }
  }
  lVar3 = 0;
LAB_1471d166a:
  if (lVar2 == 0) {
    lVar2 = DAT_14c9e9108;
  }
  if (lVar3 == 0) {
    lVar3 = DAT_14cb05400;
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xc0);
  }
  if (lVar4 == 0) {
    lVar4 = DAT_14c9e9130;
  }
  if (*param_3 != -1) {
    FUN_144b11088(param_4,lVar2);
  }
  if (param_3[1] != -1) {
    FUN_144b11088(param_4,lVar4);
  }
  if (param_3[2] != -1) {
    FUN_144b11088(param_4,lVar3);
  }
  psVar1 = param_3 + 3;
  if (param_3 == (short *)0x0) {
    psVar1 = (short *)0x0;
  }
  if (*psVar1 != -1) {
    FUN_144b11088(param_4,param_2[1]);
    return;
  }
  return;
}



// FUNCTION 1471d172e FUN_1471d172e body=4 status=ok
// SIG undefined FUN_1471d172e(void)

undefined8 FUN_1471d172e(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1471d1732 FUN_1471d1732 body=248 status=ok
// SIG undefined FUN_1471d1732(void)

void FUN_1471d1732(longlong param_1,longlong *param_2,short *param_3,undefined8 param_4)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + 0x28);
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x50);
      goto LAB_1471d1766;
    }
  }
  lVar3 = 0;
LAB_1471d1766:
  if (lVar2 == 0) {
    lVar2 = DAT_14c9e9108;
  }
  if (lVar3 == 0) {
    lVar3 = DAT_14cb05400;
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xc0);
  }
  if (lVar4 == 0) {
    lVar4 = DAT_14c9e9130;
  }
  if (*param_3 != -1) {
    FUN_144b11088(param_4,lVar2);
  }
  if (param_3[1] != -1) {
    FUN_144b11088(param_4,lVar4);
  }
  if (param_3[2] != -1) {
    FUN_144b11088(param_4,lVar3);
  }
  psVar1 = param_3 + 3;
  if (param_3 == (short *)0x0) {
    psVar1 = (short *)0x0;
  }
  if (*psVar1 != -1) {
    FUN_144b11088(param_4,param_2[1]);
    return;
  }
  return;
}



// FUNCTION 1471d182a FUN_1471d182a body=984 status=ok
// SIG undefined FUN_1471d182a(void)

void FUN_1471d182a(float *param_1,double *param_2,uint *param_3,longlong param_4)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  ulonglong uVar18;
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1a8 [44];
  int local_17c;
  int local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  float *local_168;
  ulonglong local_160;
  double local_158;
  ulonglong local_150;
  double local_148;
  double local_140;
  double local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  double local_118;
  ulonglong uStack_110;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_138 = param_2[2];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_138;
  auVar14 = roundsd(in_XMM0,auVar14,9);
  dVar1 = *param_2;
  dVar21 = param_2[1];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar21;
  auVar16 = roundsd(in_XMM1,auVar16,9);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar1;
  auVar19 = roundsd(in_XMM2,auVar19,9);
  dVar3 = dVar1 - auVar19._0_8_;
  local_170 = (int)dVar21;
  dVar21 = dVar21 - auVar16._0_8_;
  local_178 = (int)local_138;
  local_138 = local_138 - auVar14._0_8_;
  local_118 = 1.0;
  uStack_110 = 0;
  local_158 = 1.0 - local_138;
  local_148 = 1.0 - dVar21;
  local_140 = 1.0 - dVar3;
  local_150 = (ulonglong)*param_3;
  local_160 = (ulonglong)param_3[1];
  iVar9 = *param_3 - 1;
  iVar11 = param_3[1] - 1;
  local_17c = param_3[2] - 1;
  fVar30 = 0.0;
  iVar8 = 0;
  uVar7 = CONCAT71((uint7)(uint3)((uint)local_17c >> 8),1);
  uStack_130 = 0;
  local_128 = -(ulonglong)(0.0010000000474974513 < local_138);
  uStack_120 = 0;
  uVar23 = 0;
  uVar24 = 0x3ff00000;
  uVar25 = 0;
  uVar26 = 0;
  dVar13 = 1.0;
  fVar27 = 0.0;
  fVar22 = 0.0;
  fVar29 = 0.0;
  local_168 = param_1;
  do {
    local_174 = (undefined4)uVar7;
    dVar15 = local_158;
    uVar18 = 0;
    if ((char)uVar7 == '\0') {
      dVar15 = local_138;
      uVar18 = uStack_130;
    }
    local_118 = (double)(~local_128 & (ulonglong)local_118 | (ulonglong)dVar15 & local_128);
    uStack_110 = ~uStack_120 & uStack_110 | uVar18 & uStack_120;
    fVar28 = (float)local_118;
    local_16c = iVar8 + local_178;
    if (local_17c <= iVar8 + local_178) {
      local_16c = local_17c;
    }
    iVar8 = 0;
    if (local_16c < 1) {
      local_16c = 0;
    }
    local_16c = local_16c * (int)local_160;
    bVar5 = true;
    do {
      dVar15 = local_148;
      if (!bVar5) {
        dVar15 = dVar21;
      }
      auVar17._0_8_ = (ulonglong)dVar15 & -(ulonglong)(0.0010000000474974513 < dVar21);
      auVar17._8_8_ = 0;
      auVar20._0_8_ = ~-(ulonglong)(0.0010000000474974513 < dVar21) & CONCAT44(uVar24,uVar23);
      auVar20._12_4_ = uVar26;
      auVar20._8_4_ = uVar25;
      auVar20 = auVar20 | auVar17;
      fVar31 = (float)auVar20._0_8_;
      iVar10 = iVar8 + local_170;
      if (iVar11 <= iVar8 + local_170) {
        iVar10 = iVar11;
      }
      iVar8 = 0;
      if (iVar10 < 1) {
        iVar10 = 0;
      }
      uVar23 = auVar20._0_4_;
      uVar24 = auVar20._4_4_;
      uVar25 = auVar20._8_4_;
      uVar26 = auVar20._12_4_;
      iVar10 = (iVar10 + local_16c) * (int)local_150;
      bVar4 = true;
      do {
        dVar15 = local_140;
        if (!bVar4) {
          dVar15 = dVar3;
        }
        if (dVar3 <= 0.0010000000474974513) {
          dVar15 = dVar13;
        }
        dVar13 = dVar15;
        iVar6 = iVar8 + (int)dVar1;
        if (iVar9 <= iVar8 + (int)dVar1) {
          iVar6 = iVar9;
        }
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        FUN_1471da834(&local_100,*(undefined4 *)(param_4 + (longlong)(iVar6 + iVar10) * 4));
        fVar12 = (float)dVar13;
        fVar29 = fVar29 + local_f4 * fVar12 * fVar31 * fVar28;
        fVar22 = fVar22 + local_f8 * fVar12 * fVar31 * fVar28;
        fVar27 = fVar27 + local_fc * fVar12 * fVar31 * fVar28;
        fVar30 = fVar30 + fVar12 * local_100 * fVar31 * fVar28;
        iVar8 = 1;
        bVar2 = (bool)(bVar4 & 0.0010000000474974513 < dVar3);
        bVar4 = false;
      } while (bVar2);
      iVar8 = 1;
      bVar4 = (bool)(0.0010000000474974513 < dVar21 & bVar5);
      bVar5 = false;
    } while (bVar4);
    iVar8 = 1;
    uVar7 = 0;
  } while (((byte)local_174 & 0.0010000000474974513 < local_138) != 0);
  *local_168 = fVar30;
  local_168[1] = fVar27;
  local_168[2] = fVar22;
  local_168[3] = fVar29;
  if ((local_f0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471d1c03 FUN_1471d1c03 body=966 status=ok
// SIG undefined FUN_1471d1c03(void)

void FUN_1471d1c03(float *param_1,double *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  double dVar19;
  undefined1 in_XMM0 [16];
  undefined1 auVar20 [16];
  double dVar21;
  float fVar22;
  double dVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 local_f8;
  undefined4 uStack_f4;
  
  dVar2 = param_2[2];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar2;
  auVar20 = roundsd(in_XMM0,auVar20,9);
  dVar3 = *param_2;
  dVar4 = param_2[1];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar4;
  auVar24 = roundsd(in_XMM3,auVar24,9);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar3;
  auVar25 = roundsd(in_XMM4,auVar25,9);
  dVar21 = dVar3 - auVar25._0_8_;
  dVar28 = dVar4 - auVar24._0_8_;
  dVar7 = dVar2 - auVar20._0_8_;
  dVar23 = 1.0;
  iVar1 = *param_3 + -1;
  iVar14 = param_3[1] + -1;
  fVar26 = 0.0;
  iVar16 = 0;
  bVar12 = true;
  local_f8 = 0;
  uStack_f4 = 0x3ff00000;
  uVar33 = 0;
  uVar34 = 0x3ff00000;
  uVar35 = 0;
  uVar36 = 0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  do {
    dVar19 = 1.0 - dVar7;
    if (!bVar12) {
      dVar19 = dVar7;
    }
    dVar23 = (double)(~-(ulonglong)(0.0010000000474974513 < dVar7) & (ulonglong)dVar23 |
                     (ulonglong)dVar19 & -(ulonglong)(0.0010000000474974513 < dVar7));
    iVar17 = iVar16 + (int)dVar2;
    if (param_3[2] + -1 <= iVar16 + (int)dVar2) {
      iVar17 = param_3[2] + -1;
    }
    iVar16 = 0;
    if (iVar17 < 1) {
      iVar17 = 0;
    }
    fVar22 = (float)dVar23;
    bVar10 = true;
    do {
      dVar19 = 1.0 - dVar28;
      if (!bVar10) {
        dVar19 = dVar28;
      }
      dVar19 = (double)(~-(ulonglong)(0.0010000000474974513 < dVar28) & CONCAT44(uStack_f4,local_f8)
                       | (ulonglong)dVar19 & -(ulonglong)(0.0010000000474974513 < dVar28));
      iVar15 = iVar16 + (int)dVar4;
      if (iVar14 <= iVar16 + (int)dVar4) {
        iVar15 = iVar14;
      }
      iVar16 = 0;
      if (iVar15 < 1) {
        iVar15 = 0;
      }
      fVar18 = (float)dVar19;
      bVar9 = true;
      do {
        bVar11 = bVar9;
        dVar8 = 1.0 - dVar21;
        if (!bVar11) {
          dVar8 = dVar21;
        }
        iVar13 = iVar16 + (int)dVar3;
        if (iVar1 <= iVar16 + (int)dVar3) {
          iVar13 = iVar1;
        }
        if (iVar13 < 1) {
          iVar13 = 0;
        }
        uVar5 = *(uint *)(param_4 +
                         (longlong)(iVar13 + (iVar15 + iVar17 * param_3[1]) * *param_3) * 4);
        auVar29._0_8_ = ~-(ulonglong)(0.0010000000474974513 < dVar21) & CONCAT44(uVar34,uVar33);
        auVar29._12_4_ = uVar36;
        auVar29._8_4_ = uVar35;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulonglong)dVar8 & -(ulonglong)(0.0010000000474974513 < dVar21);
        auVar29 = auVar29 | auVar6;
        uVar33 = auVar29._0_4_;
        uVar34 = auVar29._4_4_;
        uVar35 = auVar29._8_4_;
        uVar36 = auVar29._12_4_;
        fVar27 = (float)auVar29._0_8_;
        fVar32 = fVar32 + (float)(uVar5 >> 0x18) * 0.003921569 * fVar27 * fVar18 * fVar22;
        fVar31 = fVar31 + (float)(uVar5 & 0xff) * 0.003921569 * fVar27 * fVar18 * fVar22;
        fVar30 = fVar30 + (float)(uVar5 >> 8 & 0xff) * 0.003921569 * fVar27 * fVar18 * fVar22;
        fVar26 = fVar26 + (float)(uVar5 >> 0x10 & 0xff) * 0.003921569 * fVar27 * fVar18 * fVar22;
        if (dVar21 <= 0.0010000000474974513) break;
        iVar16 = 1;
        bVar9 = false;
      } while (bVar11);
      iVar16 = 1;
      bVar9 = (bool)(0.0010000000474974513 < dVar28 & bVar10);
      bVar10 = false;
      local_f8 = SUB84(dVar19,0);
      uStack_f4 = (undefined4)((ulonglong)dVar19 >> 0x20);
    } while (bVar9);
    iVar16 = 1;
    bVar10 = (bool)(bVar12 & 0.0010000000474974513 < dVar7);
    bVar12 = false;
    if (!bVar10) {
      *param_1 = fVar26;
      param_1[1] = fVar30;
      param_1[2] = fVar31;
      param_1[3] = fVar32;
      return;
    }
  } while( true );
}



// FUNCTION 1471d1fc9 FUN_1471d1fc9 body=825 status=ok
// SIG undefined FUN_1471d1fc9(void)

void FUN_1471d1fc9(float *param_1,double *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  
  dVar3 = param_2[2];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar3;
  auVar15 = roundsd(in_XMM0,auVar15,9);
  dVar4 = *param_2;
  dVar5 = param_2[1];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar5;
  auVar19 = roundsd(in_XMM3,auVar19,9);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar4;
  auVar21 = roundsd(in_XMM4,auVar21,9);
  dVar16 = dVar4 - auVar21._0_8_;
  dVar17 = dVar5 - auVar19._0_8_;
  dVar22 = dVar3 - auVar15._0_8_;
  dVar18 = 1.0;
  iVar1 = *param_3 + -1;
  iVar2 = param_3[1] + -1;
  iVar11 = 0;
  bVar8 = true;
  uVar30 = 0;
  uVar31 = 0x3ff00000;
  uVar32 = 0;
  uVar33 = 0;
  dVar23 = 1.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  fVar29 = 0.0;
  do {
    dVar14 = 1.0 - dVar22;
    if (!bVar8) {
      dVar14 = dVar22;
    }
    dVar18 = (double)(~-(ulonglong)(0.0010000000474974513 < dVar22) & (ulonglong)dVar18 |
                     (ulonglong)dVar14 & -(ulonglong)(0.0010000000474974513 < dVar22));
    iVar12 = iVar11 + (int)dVar3;
    if (param_3[2] + -1 <= iVar11 + (int)dVar3) {
      iVar12 = param_3[2] + -1;
    }
    iVar11 = 0;
    if (iVar12 < 1) {
      iVar12 = 0;
    }
    bVar7 = true;
    do {
      dVar14 = 1.0 - dVar17;
      if (!bVar7) {
        dVar14 = dVar17;
      }
      auVar20._0_8_ = (ulonglong)dVar14 & -(ulonglong)(0.0010000000474974513 < dVar17);
      auVar20._8_8_ = 0;
      auVar24._0_8_ = ~-(ulonglong)(0.0010000000474974513 < dVar17) & CONCAT44(uVar31,uVar30);
      auVar24._12_4_ = uVar33;
      auVar24._8_4_ = uVar32;
      auVar24 = auVar24 | auVar20;
      uVar30 = auVar24._0_4_;
      uVar31 = auVar24._4_4_;
      uVar32 = auVar24._8_4_;
      uVar33 = auVar24._12_4_;
      iVar13 = iVar11 + (int)dVar5;
      if (iVar2 <= iVar11 + (int)dVar5) {
        iVar13 = iVar2;
      }
      iVar11 = 0;
      if (iVar13 < 1) {
        iVar13 = 0;
      }
      bVar6 = true;
      do {
        bVar9 = bVar6;
        dVar14 = 1.0 - dVar16;
        if (!bVar9) {
          dVar14 = dVar16;
        }
        iVar10 = iVar11 + (int)dVar4;
        if (iVar1 <= iVar11 + (int)dVar4) {
          iVar10 = iVar1;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        dVar23 = (double)(~-(ulonglong)(0.0010000000474974513 < dVar16) & (ulonglong)dVar23 |
                         (ulonglong)dVar14 & -(ulonglong)(0.0010000000474974513 < dVar16));
        fVar25 = (float)dVar23 * 0.0 * (float)auVar24._0_8_ * (float)dVar18;
        fVar26 = fVar26 + (float)*(byte *)(param_4 +
                                          (iVar10 + (iVar13 + iVar12 * param_3[1]) * *param_3)) *
                          0.003921569 * (float)dVar23 * (float)auVar24._0_8_ * (float)dVar18;
        fVar27 = fVar27 + fVar25;
        fVar28 = fVar28 + fVar25;
        fVar29 = fVar29 + fVar25;
        if (dVar16 <= 0.0010000000474974513) break;
        iVar11 = 1;
        bVar6 = false;
      } while (bVar9);
      iVar11 = 1;
      bVar6 = (bool)(0.0010000000474974513 < dVar17 & bVar7);
      bVar7 = false;
    } while (bVar6);
    iVar11 = 1;
    bVar7 = (bool)(0.0010000000474974513 < dVar22 & bVar8);
    bVar8 = false;
    if (!bVar7) {
      *param_1 = fVar26;
      param_1[1] = fVar27;
      param_1[2] = fVar28;
      param_1[3] = fVar29;
      return;
    }
  } while( true );
}



// FUNCTION 1471d235d FUN_1471d235d body=96 status=ok
// SIG undefined FUN_1471d235d(void)

void FUN_1471d235d(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
    uVar3 = (ulonglong)uVar2;
  }
  bVar1 = FUN_144b0f89b(0,0x9b);
  FUN_144aaa900(CONCAT71((int7)(uVar3 >> 8),
                         ((byte)uVar3 & bVar1 ^ 1) & 0 < *(int *)(DAT_14c9e93c8 + 4)),3,param_1);
  return;
}



// FUNCTION 1471d23bd FUN_1471d23bd body=181 status=ok
// SIG undefined FUN_1471d23bd(void)

byte FUN_1471d23bd(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  bVar1 = FUN_144aaa900(1,3,param_1);
  if (*(char *)(param_2 + 0x3d) != '\x02') {
    if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
      uVar5 = (ulonglong)uVar4;
    }
    bVar2 = FUN_144b0f89b(0,0x9b);
    cVar3 = FUN_144aaa900(CONCAT71((int7)(uVar5 >> 8),
                                   ((byte)uVar5 & bVar2 ^ 1) & 0 < *(int *)(DAT_14c9e93c8 + 4)),3,
                          param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0x3d) != '\x01') {
      return 0;
    }
  }
  return bVar1 & *(int *)(*(longlong *)(&PTR_DAT_14a249150)[*(uint *)(param_2 + 0x38) & 3] + 4) != 0
  ;
}



// FUNCTION 1471d2472 FUN_1471d2472 body=504 status=ok
// SIG undefined FUN_1471d2472(void)

void FUN_1471d2472(longlong param_1,float *param_2,byte *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  
  *param_2 = *(float *)(param_1 + 0x168);
  *param_3 = *(byte *)(param_1 + 0x1d0) & 1;
  *param_4 = *(undefined4 *)(param_1 + 0x16c);
  *param_5 = *(undefined4 *)(param_1 + 0x170);
  pfVar2 = DAT_14c9e94e0;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (*piVar1 == 0x40000002) {
    if (0.0 <= *DAT_14c9e94e0) {
LAB_1471d25d9:
      uVar6 = 0;
      pfVar8 = DAT_14c9e94e0;
      goto LAB_1471d2628;
    }
  }
  else {
    bVar4 = FUN_144a61b4f();
    pfVar8 = DAT_14c9e94e0;
    iVar5 = *piVar1;
    if (0.0 <= pfVar2[bVar4 ^ 1]) {
      if (iVar5 == 0x40000002) goto LAB_1471d25d9;
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
LAB_1471d2628:
      *param_2 = pfVar8[uVar6];
      lVar7 = DAT_14c9e94f8;
      if (*piVar1 == 0x40000002) {
        uVar6 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar6 = (ulonglong)(bVar4 ^ 1);
      }
      *param_3 = *(byte *)(lVar7 + uVar6);
      iVar5 = *piVar1;
    }
    lVar7 = DAT_14c9e9510;
    if (iVar5 != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
      iVar5 = *piVar1;
      goto LAB_1471d252e;
    }
  }
  iVar5 = 0x40000002;
  uVar6 = 0;
  lVar7 = DAT_14c9e9510;
LAB_1471d252e:
  lVar3 = DAT_14c9e9510;
  if (0.0 <= *(float *)(lVar7 + uVar6 * 4)) {
    if (iVar5 == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    *param_4 = *(undefined4 *)(lVar3 + uVar6 * 4);
    iVar5 = *piVar1;
  }
  lVar7 = DAT_14c9e9528;
  if (iVar5 == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14c9e9528;
  if (0.0 <= *(float *)(lVar7 + uVar6 * 4)) {
    if (*piVar1 == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    *param_5 = *(undefined4 *)(lVar3 + uVar6 * 4);
  }
  if (*param_3 == 0) {
    *param_2 = *param_2 + *param_2;
  }
  return;
}



// FUNCTION 1471d266a FUN_1471d266a body=80 status=ok
// SIG undefined FUN_1471d266a(void)

void FUN_1471d266a(longlong param_1,undefined8 param_2)

{
  FUN_1474409b8(param_1,param_2,L"StencilingGeometryPosAndScale",0);
  FUN_1474409b8(param_1 + 6,param_2,L"StencilingConeParameters",0);
  FUN_1474409b8(param_1 + 0xc,param_2,L"StencilingConeTransform",0);
  return;
}



// FUNCTION 1471d26ba FUN_1471d26ba body=179 status=ok
// SIG undefined FUN_1471d26ba(void)

void FUN_1471d26ba(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144b11afc(local_88,param_3,param_4);
  cVar1 = *(char *)(*(longlong *)(param_4 + 0x28) + 0x1e8);
  if (cVar1 == '\x03') {
LAB_1471d2709:
    FUN_1449dacb8(param_2,param_1,local_88,0);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') goto LAB_1471d2733;
      goto LAB_1471d2709;
    }
    FUN_1447f9c4a(param_2,param_1 + 0xc,local_68,0);
  }
  FUN_1449dacb8(param_2,param_1 + 6,local_78,0);
LAB_1471d2733:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471d276e FUN_1471d276e body=346 status=ok
// SIG undefined FUN_1471d276e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1471d276e(undefined8 *param_1,longlong param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  
  dVar1 = param_3[3];
  dVar2 = param_3[2];
  dVar3 = *(double *)(param_2 + 0x1040);
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = *(double *)(param_2 + 0x1030);
  dVar7 = *(double *)(param_2 + 0x1038);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  if (param_4 != '\0') {
    lVar9 = FUN_1447e4f80();
    cVar10 = '\x02';
    if (*(char *)(lVar9 + 0x41) != '\x03') {
      cVar10 = *(char *)(lVar9 + 0x41);
    }
    *param_1 = *(undefined8 *)(param_2 + 0x18);
    *(char *)(param_1 + 1) = cVar10;
  }
  uVar8 = _DAT_14c846288;
  param_1[0x12] = _DAT_14c846280;
  param_1[0x13] = uVar8;
  uVar8 = _DAT_14c846278;
  param_1[0x10] = _DAT_14c846270;
  param_1[0x11] = uVar8;
  uVar8 = _DAT_14c846268;
  param_1[0xe] = _DAT_14c846260;
  param_1[0xf] = uVar8;
  uVar8 = DAT_14c846258;
  param_1[0xc] = _DAT_14c846250;
  param_1[0xd] = uVar8;
  *(float *)(param_1 + 8) = (float)(dVar4 + dVar6);
  *(float *)((longlong)param_1 + 0x44) = (float)(dVar5 + dVar7);
  *(float *)(param_1 + 9) = (float)(dVar2 + dVar3);
  *(float *)((longlong)param_1 + 0x4c) = (float)dVar1 / 0.9659258;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 1471d28c8 FUN_1471d28c8 body=146 status=ok
// SIG undefined FUN_1471d28c8(void)

undefined8 * FUN_1471d28c8(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  if (param_4 != '\0') {
    lVar1 = FUN_1447e4f80();
    cVar2 = '\x02';
    if (*(char *)(lVar1 + 0x41) != '\x03') {
      cVar2 = *(char *)(lVar1 + 0x41);
    }
    *param_1 = *(undefined8 *)(param_2 + 0x18);
    *(char *)(param_1 + 1) = cVar2;
  }
  FUN_144b11afc(param_1 + 8,param_2,param_3);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 1471d295a FUN_1471d295a body=284 status=ok
// SIG undefined FUN_1471d295a(void)

void FUN_1471d295a(ulonglong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = DAT_14c9e95e0;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 5;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x30);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 5;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[3] = uVar1;
  *(undefined4 *)(puVar4 + 4) = 0;
  uVar3 = DAT_14c9e95e8;
  iVar2 = DAT_14c9e95c8;
  uVar1 = DAT_14c9e95c0;
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 6;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x38);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 6;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb5b0;
  puVar4[2] = uVar1;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
  *(int *)(puVar4 + 5) = iVar2 / 3;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = 1;
  return;
}



// FUNCTION 1471d2a76 FUN_1471d2a76 body=42 status=ok
// SIG undefined FUN_1471d2a76(void)

void FUN_1471d2a76(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d2ae4 FUN_1471d2ae4 body=89 status=ok
// SIG undefined FUN_1471d2ae4(void)

undefined8 FUN_1471d2ae4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_144a8d90e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 1471d2b3e FUN_1471d2b3e body=52 status=ok
// SIG undefined FUN_1471d2b3e(void)

void FUN_1471d2b3e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d2b72 FUN_1471d2b72 body=42 status=ok
// SIG undefined FUN_1471d2b72(void)

void FUN_1471d2b72(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d2bbc FUN_1471d2bbc body=96 status=ok
// SIG undefined FUN_1471d2bbc(void)

undefined8 FUN_1471d2bbc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f8dbee();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ea7a0,1);
  return uVar3;
}



// FUNCTION 1471d2c1c FUN_1471d2c1c body=52 status=ok
// SIG undefined FUN_1471d2c1c(void)

void FUN_1471d2c1c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d2c50 FUN_1471d2c50 body=42 status=ok
// SIG undefined FUN_1471d2c50(void)

void FUN_1471d2c50(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d2c7e FUN_1471d2c7e body=289 status=ok
// SIG undefined FUN_1471d2c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1471d2c7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9950) {
    FUN_144b3d300(&DAT_14c9e9950);
    if (DAT_14c9e9950 == -1) {
      FUN_144a8da38();
      FUN_1461e8dc2();
      FUN_140db5666(&DAT_14c9e98a8,0,&DAT_14c9e9840,L"FDeferredLightPS",
                    L"/Engine/Private/DeferredLightPixelShaders.usf",L"DeferredLightPixelMain",3,
                    0xc000,FUN_1471d2e00,FUN_1471d2da0,FUN_140919a30,&LAB_142ce8692,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ea828);
      _DAT_14c9e98a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce86b6);
      _Init_thread_footer(&DAT_14c9e9950);
    }
  }
  return &DAT_14c9e98a8;
}



// FUNCTION 1471d2da0 FUN_1471d2da0 body=96 status=ok
// SIG undefined FUN_1471d2da0(void)

undefined8 FUN_1471d2da0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_144a8da38();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ea828,1);
  return uVar3;
}



// FUNCTION 1471d2e00 FUN_1471d2e00 body=52 status=ok
// SIG undefined FUN_1471d2e00(void)

void FUN_1471d2e00(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d2e34 FUN_1471d2e34 body=42 status=ok
// SIG undefined FUN_1471d2e34(void)

void FUN_1471d2e34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d2e7e FUN_1471d2e7e body=96 status=ok
// SIG undefined FUN_1471d2e7e(void)

undefined8 FUN_1471d2e7e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e70a1c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ea8b0,1);
  return uVar3;
}



// FUNCTION 1471d2ede FUN_1471d2ede body=52 status=ok
// SIG undefined FUN_1471d2ede(void)

void FUN_1471d2ede(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d2f12 FUN_1471d2f12 body=42 status=ok
// SIG undefined FUN_1471d2f12(void)

void FUN_1471d2f12(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1471d2f44 FUN_1471d2f44 body=96 status=ok
// SIG undefined FUN_1471d2f44(void)

undefined8 FUN_1471d2f44(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141576fc6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9eaad0,1);
  return uVar3;
}



// FUNCTION 1471d2fa4 FUN_1471d2fa4 body=52 status=ok
// SIG undefined FUN_1471d2fa4(void)

void FUN_1471d2fa4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1471d2fd8 FUN_1471d2fd8 body=38 status=ok
// SIG undefined FUN_1471d2fd8(void)

undefined8 FUN_1471d2fd8(undefined8 param_1,int param_2)

{
  FUN_14002d5c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d2ffe FUN_1471d2ffe body=138 status=ok
// SIG undefined FUN_1471d2ffe(void)

code * FUN_1471d2ffe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x940000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3088;
}



// FUNCTION 1471d3088 FUN_1471d3088 body=138 status=ok
// SIG undefined FUN_1471d3088(void)

code * FUN_1471d3088(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionSlop";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3112;
}



// FUNCTION 1471d3112 FUN_1471d3112 body=138 status=ok
// SIG undefined FUN_1471d3112(void)

code * FUN_1471d3112(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewRectSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d4aa8;
}



// FUNCTION 1471d319c FUN_1471d319c body=138 status=ok
// SIG undefined FUN_1471d319c(void)

code * FUN_1471d319c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e85288;
}



// FUNCTION 1471d3226 FUN_1471d3226 body=138 status=ok
// SIG undefined FUN_1471d3226(void)

code * FUN_1471d3226(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUScenePrimitiveSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d32b0;
}



// FUNCTION 1471d32b0 FUN_1471d32b0 body=138 status=ok
// SIG undefined FUN_1471d32b0(void)

code * FUN_1471d32b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstancePayloadData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d333a;
}



// FUNCTION 1471d333a FUN_1471d333a body=138 status=ok
// SIG undefined FUN_1471d333a(void)

code * FUN_1471d333a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstanceSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d33c4;
}



// FUNCTION 1471d33c4 FUN_1471d33c4 body=138 status=ok
// SIG undefined FUN_1471d33c4(void)

code * FUN_1471d33c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceSceneDataSOAStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d344e;
}



// FUNCTION 1471d344e FUN_1471d344e body=138 status=ok
// SIG undefined FUN_1471d344e(void)

code * FUN_1471d344e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisibilityMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d34d8;
}



// FUNCTION 1471d34d8 FUN_1471d34d8 body=138 status=ok
// SIG undefined FUN_1471d34d8(void)

code * FUN_1471d34d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutInstanceIdBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3562;
}



// FUNCTION 1471d3562 FUN_1471d3562 body=132 status=ok
// SIG undefined FUN_1471d3562(void)

undefined1 * FUN_1471d3562(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutIndirectArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e851fa;
}



// FUNCTION 1471d35e6 FUN_1471d35e6 body=138 status=ok
// SIG undefined FUN_1471d35e6(void)

code * FUN_1471d35e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionSlop";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3670;
}



// FUNCTION 1471d3670 FUN_1471d3670 body=138 status=ok
// SIG undefined FUN_1471d3670(void)

code * FUN_1471d3670(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewRectSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2de9e;
}



// FUNCTION 1471d36fa FUN_1471d36fa body=138 status=ok
// SIG undefined FUN_1471d36fa(void)

code * FUN_1471d36fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d4cd8;
}



// FUNCTION 1471d3784 FUN_1471d3784 body=138 status=ok
// SIG undefined FUN_1471d3784(void)

code * FUN_1471d3784(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisibilityMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2de14;
}



// FUNCTION 1471d380e FUN_1471d380e body=138 status=ok
// SIG undefined FUN_1471d380e(void)

code * FUN_1471d380e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUScenePrimitiveSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000009d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3898;
}



// FUNCTION 1471d3898 FUN_1471d3898 body=138 status=ok
// SIG undefined FUN_1471d3898(void)

code * FUN_1471d3898(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstancePayloadData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3922;
}



// FUNCTION 1471d3922 FUN_1471d3922 body=138 status=ok
// SIG undefined FUN_1471d3922(void)

code * FUN_1471d3922(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstanceSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d39ac;
}



// FUNCTION 1471d39ac FUN_1471d39ac body=138 status=ok
// SIG undefined FUN_1471d39ac(void)

code * FUN_1471d39ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceSceneDataSOAStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d3a36;
}



// FUNCTION 1471d3a36 FUN_1471d3a36 body=132 status=ok
// SIG undefined FUN_1471d3a36(void)

undefined1 * FUN_1471d3a36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDrawArgsBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471d3aba;
}



// FUNCTION 1471d3abe FUN_1471d3abe body=28 status=ok
// SIG undefined FUN_1471d3abe(void)

undefined4 FUN_1471d3abe(longlong *param_1)

{
  FUN_142cf42ba(*param_1);
  return *(undefined4 *)(*param_1 + 0x48);
}



// FUNCTION 1471d3b04 FUN_1471d3b04 body=29 status=ok
// SIG undefined FUN_1471d3b04(void)

undefined8 FUN_1471d3b04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3b22 FUN_1471d3b22 body=31 status=ok
// SIG undefined FUN_1471d3b22(void)

int FUN_1471d3b22(longlong *param_1)

{
  FUN_142cf42ba(*param_1);
  return *(int *)(*param_1 + 0x48) << 2;
}



// FUNCTION 1471d3b60 FUN_1471d3b60 body=12 status=ok
// SIG undefined FUN_1471d3b60(void)

void FUN_1471d3b60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001471d3b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1471d3b6c FUN_1471d3b6c body=29 status=ok
// SIG undefined FUN_1471d3b6c(void)

undefined8 FUN_1471d3b6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3b8a FUN_1471d3b8a body=29 status=ok
// SIG undefined FUN_1471d3b8a(void)

undefined8 FUN_1471d3b8a(longlong *param_1)

{
  FUN_142cf42ba(*param_1);
  return *(undefined8 *)(*param_1 + 0x40);
}



// FUNCTION 1471d3bc6 FUN_1471d3bc6 body=12 status=ok
// SIG undefined FUN_1471d3bc6(void)

void FUN_1471d3bc6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001471d3bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1471d3bd2 FUN_1471d3bd2 body=29 status=ok
// SIG undefined FUN_1471d3bd2(void)

undefined8 FUN_1471d3bd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3bf0 FUN_1471d3bf0 body=28 status=ok
// SIG undefined FUN_1471d3bf0(void)

undefined4 FUN_1471d3bf0(longlong *param_1)

{
  FUN_142cf42ba(*param_1);
  return *(undefined4 *)(*param_1 + 0x2c);
}



// FUNCTION 1471d3c36 FUN_1471d3c36 body=29 status=ok
// SIG undefined FUN_1471d3c36(void)

undefined8 FUN_1471d3c36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3c54 FUN_1471d3c54 body=86 status=ok
// SIG undefined FUN_1471d3c54(void)

int FUN_1471d3c54(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  iVar1 = *(int *)(lVar4 + 8);
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar3);
  return iVar1 << 2;
}



// FUNCTION 1471d3caa FUN_1471d3caa body=106 status=ok
// SIG undefined FUN_1471d3caa(void)

undefined8 * FUN_1471d3caa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a245fc0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1471d3d1a FUN_1471d3d1a body=29 status=ok
// SIG undefined FUN_1471d3d1a(void)

void FUN_1471d3d1a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1471d3d38 FUN_1471d3d38 body=71 status=ok
// SIG undefined FUN_1471d3d38(void)

undefined8 * FUN_1471d3d38(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a245fc0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3d80 FUN_1471d3d80 body=43 status=ok
// SIG undefined FUN_1471d3d80(void)

undefined8 FUN_1471d3d80(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return *puVar3;
}



// FUNCTION 1471d3dac FUN_1471d3dac body=106 status=ok
// SIG undefined FUN_1471d3dac(void)

undefined8 * FUN_1471d3dac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a245fe0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1471d3e1c FUN_1471d3e1c body=29 status=ok
// SIG undefined FUN_1471d3e1c(void)

void FUN_1471d3e1c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1471d3e3a FUN_1471d3e3a body=71 status=ok
// SIG undefined FUN_1471d3e3a(void)

undefined8 * FUN_1471d3e3a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a245fe0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3e82 FUN_1471d3e82 body=43 status=ok
// SIG undefined FUN_1471d3e82(void)

undefined4 FUN_1471d3e82(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(undefined4 *)(lVar3 + 8);
}



// FUNCTION 1471d3eae FUN_1471d3eae body=106 status=ok
// SIG undefined FUN_1471d3eae(void)

undefined8 * FUN_1471d3eae(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a246000;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1471d3f1e FUN_1471d3f1e body=29 status=ok
// SIG undefined FUN_1471d3f1e(void)

void FUN_1471d3f1e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1471d3f3c FUN_1471d3f3c body=71 status=ok
// SIG undefined FUN_1471d3f3c(void)

undefined8 * FUN_1471d3f3c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a246000;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d3f84 FUN_1471d3f84 body=86 status=ok
// SIG undefined FUN_1471d3f84(void)

int FUN_1471d3f84(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  iVar1 = *(int *)(lVar4 + 8);
  pcVar2 = (code *)*param_1;
  plVar5 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar5 = param_1 + 4;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar3);
  return iVar1 << 3;
}



// FUNCTION 1471d3fda FUN_1471d3fda body=106 status=ok
// SIG undefined FUN_1471d3fda(void)

undefined8 * FUN_1471d3fda(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a246040;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1471d404a FUN_1471d404a body=29 status=ok
// SIG undefined FUN_1471d404a(void)

void FUN_1471d404a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1471d4068 FUN_1471d4068 body=71 status=ok
// SIG undefined FUN_1471d4068(void)

undefined8 * FUN_1471d4068(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a246040;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d40b0 FUN_1471d40b0 body=43 status=ok
// SIG undefined FUN_1471d40b0(void)

undefined8 FUN_1471d40b0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return *puVar3;
}



// FUNCTION 1471d40dc FUN_1471d40dc body=106 status=ok
// SIG undefined FUN_1471d40dc(void)

undefined8 * FUN_1471d40dc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a246060;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1471d414c FUN_1471d414c body=29 status=ok
// SIG undefined FUN_1471d414c(void)

void FUN_1471d414c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1471d416a FUN_1471d416a body=71 status=ok
// SIG undefined FUN_1471d416a(void)

undefined8 * FUN_1471d416a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a246060;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d41b2 FUN_1471d41b2 body=43 status=ok
// SIG undefined FUN_1471d41b2(void)

undefined4 FUN_1471d41b2(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pcVar1 = (code *)*param_1;
  plVar4 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(undefined4 *)(lVar3 + 8);
}



// FUNCTION 1471d41de FUN_1471d41de body=106 status=ok
// SIG undefined FUN_1471d41de(void)

undefined8 * FUN_1471d41de(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a246080;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 1471d424e FUN_1471d424e body=29 status=ok
// SIG undefined FUN_1471d424e(void)

void FUN_1471d424e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1471d426c FUN_1471d426c body=71 status=ok
// SIG undefined FUN_1471d426c(void)

undefined8 * FUN_1471d426c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a246080;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471d42b4 FUN_1471d42b4 body=138 status=ok
// SIG undefined FUN_1471d42b4(void)

code * FUN_1471d42b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionSlop";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000036b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d433e;
}



// FUNCTION 1471d433e FUN_1471d433e body=138 status=ok
// SIG undefined FUN_1471d433e(void)

code * FUN_1471d433e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewRectSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000036a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d43c8;
}



// FUNCTION 1471d43c8 FUN_1471d43c8 body=138 status=ok
// SIG undefined FUN_1471d43c8(void)

code * FUN_1471d43c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000369;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f04acc;
}



// FUNCTION 1471d4452 FUN_1471d4452 body=138 status=ok
// SIG undefined FUN_1471d4452(void)

code * FUN_1471d4452(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000367;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d44dc;
}



// FUNCTION 1471d44dc FUN_1471d44dc body=138 status=ok
// SIG undefined FUN_1471d44dc(void)

code * FUN_1471d44dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisibilityMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000366;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4566;
}



// FUNCTION 1471d4566 FUN_1471d4566 body=138 status=ok
// SIG undefined FUN_1471d4566(void)

code * FUN_1471d4566(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceOcclusionQueryBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000365;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d4e72;
}



// FUNCTION 1471d45f0 FUN_1471d45f0 body=138 status=ok
// SIG undefined FUN_1471d45f0(void)

code * FUN_1471d45f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUScenePrimitiveSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000363;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f04b54;
}



// FUNCTION 1471d467a FUN_1471d467a body=138 status=ok
// SIG undefined FUN_1471d467a(void)

code * FUN_1471d467a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstanceSceneData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000361;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f04a48;
}



// FUNCTION 1471d4708 FUN_1471d4708 body=3 status=ok
// SIG undefined FUN_1471d4708(void)

undefined8 FUN_1471d4708(void)

{
  return 0;
}



// FUNCTION 1471d470c FUN_1471d470c body=138 status=ok
// SIG undefined FUN_1471d470c(void)

code * FUN_1471d470c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightInfoDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14570a83a;
}



// FUNCTION 1471d4796 FUN_1471d4796 body=114 status=ok
// SIG undefined FUN_1471d4796(void)

void FUN_1471d4796(longlong *param_1,int param_2)

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



// FUNCTION 1471d4808 FUN_1471d4808 body=132 status=ok
// SIG undefined FUN_1471d4808(void)

void FUN_1471d4808(longlong param_1,int param_2)

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



// FUNCTION 1471d488e FUN_1471d488e body=137 status=ok
// SIG undefined FUN_1471d488e(void)

longlong FUN_1471d488e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1474409b8(param_1 + 0xf8,uVar1,L"StencilingGeometryPosAndScale",0);
  FUN_1474409b8(param_1 + 0xfe,uVar1,L"StencilingConeParameters",0);
  FUN_1474409b8(param_1 + 0x104,uVar1,L"StencilingConeTransform",0);
  return param_1;
}



// FUNCTION 1471d4918 FUN_1471d4918 body=200 status=ok
// SIG undefined FUN_1471d4918(void)

longlong FUN_1471d4918(longlong param_1,longlong param_2)

{
  FUN_1472ea2b4();
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  FUN_1474409b8(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"SvPositionToLight",0);
  FUN_1474409b8(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"LightFunctionParameters",0);
  FUN_1474409b8(param_1 + 0x104,*(undefined8 *)(param_2 + 0x28),L"LightFunctionParameters2",0);
  FUN_147440a6c(param_1 + 0x10a,*(undefined8 *)(param_2 + 0x28),L"HairOnlyDepthTexture",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"CameraRelativeLightPosition",0);
  return param_1;
}



// FUNCTION 1471d49e0 FUN_1471d49e0 body=138 status=ok
// SIG undefined FUN_1471d49e0(void)

code * FUN_1471d49e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CulledLightDataGrid32Bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a0000002b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4a6a;
}



// FUNCTION 1471d4a6a FUN_1471d4a6a body=138 status=ok
// SIG undefined FUN_1471d4a6a(void)

code * FUN_1471d4a6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumCulledLightsGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x298000002b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4af4;
}



// FUNCTION 1471d4af4 FUN_1471d4af4 body=138 status=ok
// SIG undefined FUN_1471d4af4(void)

code * FUN_1471d4af4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ForwardLocalLightBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x290000002b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d50a0;
}



// FUNCTION 1471d4b7e FUN_1471d4b7e body=138 status=ok
// SIG undefined FUN_1471d4b7e(void)

code * FUN_1471d4b7e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightStaticShadowmap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000002b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4c08;
}



// FUNCTION 1471d4c08 FUN_1471d4c08 body=138 status=ok
// SIG undefined FUN_1471d4c08(void)

code * FUN_1471d4c08(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowmapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x278000002b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4c92;
}



// FUNCTION 1471d4c92 FUN_1471d4c92 body=138 status=ok
// SIG undefined FUN_1471d4c92(void)

code * FUN_1471d4c92(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowmapAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x270000002b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4d1c;
}



// FUNCTION 1471d4d1c FUN_1471d4d1c body=138 status=ok
// SIG undefined FUN_1471d4d1c(void)

code * FUN_1471d4d1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bAffectsTranslucentLighting";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x268000002af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4da6;
}



// FUNCTION 1471d4da6 FUN_1471d4da6 body=138 status=ok
// SIG undefined FUN_1471d4da6(void)

code * FUN_1471d4da6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionAtlasLightIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x264000002ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4e30;
}



// FUNCTION 1471d4e30 FUN_1471d4e30 body=138 status=ok
// SIG undefined FUN_1471d4e30(void)

code * FUN_1471d4e30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectLightingShowFlag";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x260000002ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4eba;
}



// FUNCTION 1471d4eba FUN_1471d4eba body=138 status=ok
// SIG undefined FUN_1471d4eba(void)

code * FUN_1471d4eba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightTranslatedWorldToStaticShadow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000002ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145733896;
}



// FUNCTION 1471d4f44 FUN_1471d4f44 body=138 status=ok
// SIG undefined FUN_1471d4f44(void)

code * FUN_1471d4f44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClusteredDeferredSupportedEndIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1fc000002a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d4fce;
}



// FUNCTION 1471d4fce FUN_1471d4fce body=138 status=ok
// SIG undefined FUN_1471d4fce(void)

code * FUN_1471d4fce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleLightsEndIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f8000002a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5058;
}



// FUNCTION 1471d5058 FUN_1471d5058 body=138 status=ok
// SIG undefined FUN_1471d5058(void)

code * FUN_1471d5058(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightUseStaticShadowing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f4000002a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d50e2;
}



// FUNCTION 1471d50e2 FUN_1471d50e2 body=138 status=ok
// SIG undefined FUN_1471d50e2(void)

code * FUN_1471d50e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightDepthBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f0000002a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d516c;
}



// FUNCTION 1471d516c FUN_1471d516c body=138 status=ok
// SIG undefined FUN_1471d516c(void)

code * FUN_1471d516c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowmapAtlasBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e0000002a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d51f6;
}



// FUNCTION 1471d51f6 FUN_1471d51f6 body=138 status=ok
// SIG undefined FUN_1471d51f6(void)

code * FUN_1471d51f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowmapMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a0000002a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5280;
}



// FUNCTION 1471d5280 FUN_1471d5280 body=138 status=ok
// SIG undefined FUN_1471d5280(void)

code * FUN_1471d5280(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightTranslatedWorldToShadowMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000002a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d530a;
}



// FUNCTION 1471d530a FUN_1471d530a body=138 status=ok
// SIG undefined FUN_1471d530a(void)

code * FUN_1471d530a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CascadeEndDepths";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5394;
}



// FUNCTION 1471d5394 FUN_1471d5394 body=138 status=ok
// SIG undefined FUN_1471d5394(void)

code * FUN_1471d5394(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightVSM";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c000002a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d541e;
}



// FUNCTION 1471d541e FUN_1471d541e body=138 status=ok
// SIG undefined FUN_1471d541e(void)

code * FUN_1471d541e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumDirectionalLightCascades";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000002a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d5128;
}



// FUNCTION 1471d54a8 FUN_1471d54a8 body=138 status=ok
// SIG undefined FUN_1471d54a8(void)

code * FUN_1471d54a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowMapChannelMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000029e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5532;
}



// FUNCTION 1471d5532 FUN_1471d5532 body=138 status=ok
// SIG undefined FUN_1471d5532(void)

code * FUN_1471d5532(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightDiffuseScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x740000029d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d55bc;
}



// FUNCTION 1471d55bc FUN_1471d55bc body=138 status=ok
// SIG undefined FUN_1471d55bc(void)

code * FUN_1471d55bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightSpecularScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000029c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5646;
}



// FUNCTION 1471d5646 FUN_1471d5646 body=138 status=ok
// SIG undefined FUN_1471d5646(void)

code * FUN_1471d5646(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightVolumetricScatteringIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c0000029b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d56d0;
}



// FUNCTION 1471d56d0 FUN_1471d56d0 body=138 status=ok
// SIG undefined FUN_1471d56d0(void)

code * FUN_1471d56d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000029a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d575a;
}



// FUNCTION 1471d575a FUN_1471d575a body=138 status=ok
// SIG undefined FUN_1471d575a(void)

code * FUN_1471d575a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightSoftSourceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000299;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d57e4;
}



// FUNCTION 1471d57e4 FUN_1471d57e4 body=138 status=ok
// SIG undefined FUN_1471d57e4(void)

code * FUN_1471d57e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightSourceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c00000298;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d586e;
}



// FUNCTION 1471d586e FUN_1471d586e body=138 status=ok
// SIG undefined FUN_1471d586e(void)

code * FUN_1471d586e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000297;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d58f8;
}



// FUNCTION 1471d58f8 FUN_1471d58f8 body=138 status=ok
// SIG undefined FUN_1471d58f8(void)

code * FUN_1471d58f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridZParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000296;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5982;
}



// FUNCTION 1471d5982 FUN_1471d5982 body=138 status=ok
// SIG undefined FUN_1471d5982(void)

code * FUN_1471d5982(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridPixelSizeShift";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000295;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5a0c;
}



// FUNCTION 1471d5a0c FUN_1471d5a0c body=138 status=ok
// SIG undefined FUN_1471d5a0c(void)

code * FUN_1471d5a0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCulledLightsPerCell";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000294;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5a96;
}



// FUNCTION 1471d5a96 FUN_1471d5a96 body=138 status=ok
// SIG undefined FUN_1471d5a96(void)

code * FUN_1471d5a96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CulledGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000293;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5b20;
}



// FUNCTION 1471d5b20 FUN_1471d5b20 body=138 status=ok
// SIG undefined FUN_1471d5b20(void)

code * FUN_1471d5b20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumGridCells";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000292;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5baa;
}



// FUNCTION 1471d5baa FUN_1471d5baa body=138 status=ok
// SIG undefined FUN_1471d5baa(void)

code * FUN_1471d5baa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HasDirectionalLight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000291;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5c34;
}



// FUNCTION 1471d5c34 FUN_1471d5c34 body=138 status=ok
// SIG undefined FUN_1471d5c34(void)

code * FUN_1471d5c34(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumReflectionCaptures";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000290;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5cbe;
}



// FUNCTION 1471d5cbe FUN_1471d5cbe body=132 status=ok
// SIG undefined FUN_1471d5cbe(void)

undefined1 * FUN_1471d5cbe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumLocalLights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145733808;
}



// FUNCTION 1471d5d42 FUN_1471d5d42 body=138 status=ok
// SIG undefined FUN_1471d5d42(void)

code * FUN_1471d5d42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000128;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5dcc;
}



// FUNCTION 1471d5dcc FUN_1471d5dcc body=138 status=ok
// SIG undefined FUN_1471d5dcc(void)

code * FUN_1471d5dcc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000126;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5e56;
}



// FUNCTION 1471d5e56 FUN_1471d5e56 body=138 status=ok
// SIG undefined FUN_1471d5e56(void)

code * FUN_1471d5e56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HZBViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d5238;
}



// FUNCTION 1471d5ee0 FUN_1471d5ee0 body=138 status=ok
// SIG undefined FUN_1471d5ee0(void)

code * FUN_1471d5ee0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumParentGridCells";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfc00000121;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5f6a;
}



// FUNCTION 1471d5f6a FUN_1471d5f6a body=138 status=ok
// SIG undefined FUN_1471d5f6a(void)

code * FUN_1471d5f6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParentGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000120;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5ff4;
}



// FUNCTION 1471d5ff4 FUN_1471d5ff4 body=138 status=ok
// SIG undefined FUN_1471d5ff4(void)

code * FUN_1471d5ff4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParentCulledLightDataGrid16Bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000011f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d607e;
}



// FUNCTION 1471d607e FUN_1471d607e body=138 status=ok
// SIG undefined FUN_1471d607e(void)

code * FUN_1471d607e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParentCulledLightDataGrid32Bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000011e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6108;
}



// FUNCTION 1471d6108 FUN_1471d6108 body=138 status=ok
// SIG undefined FUN_1471d6108(void)

code * FUN_1471d6108(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParentNumCulledLightsGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6192;
}



// FUNCTION 1471d6192 FUN_1471d6192 body=138 status=ok
// SIG undefined FUN_1471d6192(void)

code * FUN_1471d6192(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridCullMaxZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcc0000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d621c;
}



// FUNCTION 1471d621c FUN_1471d621c body=138 status=ok
// SIG undefined FUN_1471d621c(void)

code * FUN_1471d621c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridCullMarginZParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000011a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d62a6;
}



// FUNCTION 1471d62a6 FUN_1471d62a6 body=138 status=ok
// SIG undefined FUN_1471d62a6(void)

code * FUN_1471d62a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridCullMarginZ";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbc00000119;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6330;
}


