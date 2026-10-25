// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489efa9a FUN_1489efa9a body=230 status=ok
// SIG undefined FUN_1489efa9a(void)

int * FUN_1489efa9a(longlong *param_1,int *param_2)

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



// FUNCTION 1489efb80 FUN_1489efb80 body=160 status=ok
// SIG undefined FUN_1489efb80(void)

undefined8 FUN_1489efb80(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_14018802a();
          }
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
          FUN_1489ef8f2(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489efc20 FUN_1489efc20 body=419 status=ok
// SIG undefined FUN_1489efc20(void)

void FUN_1489efc20(longlong *param_1)

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



// FUNCTION 1489efdc4 FUN_1489efdc4 body=310 status=ok
// SIG undefined FUN_1489efdc4(void)

undefined4 * FUN_1489efdc4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1489efefc(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1489effe2(param_1,uVar5,local_40,&local_4c);
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
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1489f0082(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489efefc FUN_1489efefc body=229 status=ok
// SIG undefined FUN_1489efefc(void)

int * FUN_1489efefc(longlong *param_1,int *param_2)

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



// FUNCTION 1489effe2 FUN_1489effe2 body=159 status=ok
// SIG undefined FUN_1489effe2(void)

undefined8 FUN_1489effe2(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489ef7a2(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489f0082 FUN_1489f0082 body=422 status=ok
// SIG undefined FUN_1489f0082(void)

void FUN_1489f0082(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1489f022a FUN_1489f022a body=328 status=ok
// SIG undefined FUN_1489f022a(void)

undefined4 * FUN_1489f022a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489f0374(param_1,local_48);
  FUN_1489f04ee(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0x1c) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1489f0462(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0xe4) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1c) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489f06aa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f0374 FUN_1489f0374 body=237 status=ok
// SIG undefined FUN_1489f0374(void)

int * FUN_1489f0374(longlong *param_1,int *param_2)

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
      FUN_147de7f3c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xf0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xf0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xf0 + *param_1;
  return param_2;
}



// FUNCTION 1489f0462 FUN_1489f0462 body=139 status=ok
// SIG undefined FUN_1489f0462(void)

undefined8 FUN_1489f0462(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *_Dst;
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1489f05d8(), iVar1 != -1)) {
    _Dst = (longlong *)(*param_1 + (longlong)iVar1 * 0xf0);
    if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar1 * 0xf0) != 0) {
      FUN_1400020a8();
    }
    if (*_Dst != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0xe0);
    FUN_1489d850c(param_1,*param_4,1);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1489f04ee FUN_1489f04ee body=233 status=ok
// SIG undefined FUN_1489f04ee(void)

void FUN_1489f04ee(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *param_3;
  param_1[3] = 0;
  param_1[3] = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3[5];
  *(undefined8 *)(param_3 + 4) = 0;
  puVar9 = (undefined8 *)(param_3 + 6);
  puVar10 = param_1 + 5;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x1c);
  uVar2 = *(undefined8 *)(param_3 + 0x1e);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x22);
  uVar5 = *(undefined8 *)(param_3 + 0x24);
  uVar6 = *(undefined8 *)(param_3 + 0x26);
  uVar7 = *(undefined8 *)(param_3 + 0x2a);
  param_1[0x16] = *(undefined8 *)(param_3 + 0x28);
  param_1[0x17] = uVar7;
  param_1[0x14] = uVar5;
  param_1[0x15] = uVar6;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  *(undefined4 *)(param_1 + 0x18) = param_3[0x2c];
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_3[0x2d];
  *(undefined4 *)(param_1 + 0x19) = param_3[0x2e];
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)(param_3 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0xd4) = param_3[0x31];
  return;
}



// FUNCTION 1489f05d8 FUN_1489f05d8 body=209 status=ok
// SIG undefined FUN_1489f05d8(void)

int FUN_1489f05d8(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1489f0622:
      lVar10 = (longlong)iVar1 * 0xf0;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1489f069e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1489f069e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1489f068c;
    }
  }
  return -1;
LAB_1489f069e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1489f068c:
  iVar1 = *(int *)(lVar4 + 0xe0 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1489f0622;
}



// FUNCTION 1489f06aa FUN_1489f06aa body=485 status=ok
// SIG undefined FUN_1489f06aa(void)

void FUN_1489f06aa(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0xf0;
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
        *(int *)(lVar3 + 0xe4 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xe0 + lVar11) =
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



// FUNCTION 1489f0890 FUN_1489f0890 body=147 status=ok
// SIG undefined FUN_1489f0890(void)

void FUN_1489f0890(longlong param_1,int param_2)

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



// FUNCTION 1489f0924 FUN_1489f0924 body=67 status=ok
// SIG undefined FUN_1489f0924(void)

void FUN_1489f0924(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145ec0696(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1489f0aac(param_1);
    return;
  }
  FUN_1489f0968(param_1);
  FUN_145ec0696(param_1,0);
  return;
}



// FUNCTION 1489f0968 FUN_1489f0968 body=322 status=ok
// SIG undefined FUN_1489f0968(void)

void FUN_1489f0968(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 1489f0aac FUN_1489f0aac body=476 status=ok
// SIG undefined FUN_1489f0aac(void)

void FUN_1489f0aac(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x38;
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
        *(int *)(lVar3 + 0x34 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar11) =
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



// FUNCTION 1489f0c8a FUN_1489f0c8a body=67 status=ok
// SIG undefined FUN_1489f0c8a(void)

void FUN_1489f0c8a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a3f2aa(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1489f06aa(param_1);
    return;
  }
  FUN_1489f0cce(param_1);
  FUN_145a3f2aa(param_1,0);
  return;
}



// FUNCTION 1489f0cce FUN_1489f0cce body=328 status=ok
// SIG undefined FUN_1489f0cce(void)

void FUN_1489f0cce(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xe4 + (longlong)iVar4 * 0xf0) * 4) =
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



// FUNCTION 1489f0e18 FUN_1489f0e18 body=446 status=ok
// SIG undefined FUN_1489f0e18(void)

undefined4 * FUN_1489f0e18(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong lVar17;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489f0fd8(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_48 = 0;
  iVar15 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_48 + 1) = iVar15;
  if ((longlong)iVar15 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    uVar7 = puVar2[4];
    uVar8 = puVar2[5];
    uVar9 = puVar2[6];
    uVar10 = puVar2[7];
    *(undefined4 *)(local_48 + 2) = *puVar2;
    *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
    *(undefined4 *)(local_48 + 3) = uVar5;
    *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
    *(undefined4 *)(local_48 + 4) = uVar7;
    *(undefined4 *)((longlong)local_48 + 0x24) = uVar8;
    *(undefined4 *)(local_48 + 5) = uVar9;
    *(undefined4 *)((longlong)local_48 + 0x2c) = uVar10;
    *(undefined4 *)(local_48 + 6) = 0xffffffff;
    puVar16 = &DAT_149dfb77a;
    iVar15 = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar15,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar15 * 2);
    iVar15 = *(int *)(local_48 + 1);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    uVar7 = puVar2[4];
    uVar8 = puVar2[5];
    uVar9 = puVar2[6];
    uVar10 = puVar2[7];
    *(undefined4 *)(local_48 + 2) = *puVar2;
    *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
    *(undefined4 *)(local_48 + 3) = uVar5;
    *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
    *(undefined4 *)(local_48 + 4) = uVar7;
    *(undefined4 *)((longlong)local_48 + 0x24) = uVar8;
    *(undefined4 *)(local_48 + 5) = uVar9;
    *(undefined4 *)((longlong)local_48 + 0x2c) = uVar10;
    *(undefined4 *)(local_48 + 6) = 0xffffffff;
    if (iVar15 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    else {
      puVar16 = (undefined2 *)*local_48;
    }
  }
  local_54 = local_50[0];
  iVar3 = iVar15 + -1;
  if (iVar15 == 0) {
    iVar3 = 0;
  }
  uVar12 = FUN_144a49b4a(iVar3,puVar16);
  cVar11 = FUN_1489f10ba(param_1,uVar12,local_48,&local_54);
  uVar4 = local_54;
  if (cVar11 == '\0') {
    uVar13 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar15 = 1;
    if (3 < uVar13) {
      uVar14 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar15 <= *(int *)(param_1 + 0x48))) {
      uVar12 = *(int *)(param_1 + 0x48) - 1U & uVar12;
      *(uint *)((longlong)local_48 + 0x34) = uVar12;
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar12) * 4);
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar17 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar17 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar12) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar15;
      FUN_1489f0aac(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f0fd8 FUN_1489f0fd8 body=226 status=ok
// SIG undefined FUN_1489f0fd8(void)

int * FUN_1489f0fd8(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1489f10ba FUN_1489f10ba body=124 status=ok
// SIG undefined FUN_1489f10ba(void)

undefined8 FUN_1489f10ba(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_1489f1136(), iVar13 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
    if (*(longlong *)(*param_1 + (longlong)iVar13 * 0x38) != 0) {
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
    uVar10 = param_3[9];
    uVar11 = param_3[10];
    uVar12 = param_3[0xb];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar10;
    puVar1[10] = uVar11;
    puVar1[0xb] = uVar12;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1489f1202(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 1489f1136 FUN_1489f1136 body=203 status=ok
// SIG undefined FUN_1489f1136(void)

int FUN_1489f1136(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1489f1180:
      lVar10 = (longlong)iVar1 * 0x38;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1489f11f6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1489f11f6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1489f11e7;
    }
  }
  return -1;
LAB_1489f11f6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1489f11e7:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1489f1180;
}



// FUNCTION 1489f1202 FUN_1489f1202 body=116 status=ok
// SIG undefined FUN_1489f1202(void)

void FUN_1489f1202(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1489f1276 FUN_1489f1276 body=87 status=ok
// SIG undefined FUN_1489f1276(void)

void FUN_1489f1276(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1489f12ce();
  return;
}



// FUNCTION 1489f12ce FUN_1489f12ce body=51 status=ok
// SIG undefined FUN_1489f12ce(void)

void FUN_1489f12ce(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1489f1202(param_1,param_2);
  return;
}



// FUNCTION 1489f1302 FUN_1489f1302 body=164 status=ok
// SIG undefined FUN_1489f1302(void)

void FUN_1489f1302(longlong *param_1,undefined8 param_2)

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
        goto LAB_1489f1382;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489f1382:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489f13a6 FUN_1489f13a6 body=164 status=ok
// SIG undefined FUN_1489f13a6(void)

void FUN_1489f13a6(longlong *param_1,undefined8 param_2)

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
        goto LAB_1489f1426;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1489f1426:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1489f144a FUN_1489f144a body=115 status=ok
// SIG undefined FUN_1489f144a(void)

undefined8
FUN_1489f144a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  pcVar1 = (code *)*param_2;
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_1,uVar2,&local_30,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f14be FUN_1489f14be body=68 status=ok
// SIG undefined FUN_1489f14be(void)

undefined8 * FUN_1489f14be(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4574e0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 1489f1506 FUN_1489f1506 body=81 status=ok
// SIG undefined FUN_1489f1506(void)

undefined8 FUN_1489f1506(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1489f155e FUN_1489f155e body=89 status=ok
// SIG undefined FUN_1489f155e(void)

bool FUN_1489f155e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1489f15a9;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1489f15a9:
  return lVar6 == param_2;
}



// FUNCTION 1489f15b8 FUN_1489f15b8 body=118 status=ok
// SIG undefined FUN_1489f15b8(void)

void FUN_1489f15b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4574e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489f162e FUN_1489f162e body=118 status=ok
// SIG undefined FUN_1489f162e(void)

void FUN_1489f162e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4574e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1489f16a4 FUN_1489f16a4 body=156 status=ok
// SIG undefined FUN_1489f16a4(void)

void FUN_1489f16a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4574e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f1740 FUN_1489f1740 body=104 status=ok
// SIG undefined FUN_1489f1740(void)

void FUN_1489f1740(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001489f178d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489f179e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1489f17a8 FUN_1489f17a8 body=207 status=ok
// SIG undefined FUN_1489f17a8(void)

int FUN_1489f17a8(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1489f17f2:
      lVar10 = (longlong)iVar1 * 0x60;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1489f186c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1489f186c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1489f185d;
    }
  }
  return -1;
LAB_1489f186c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1489f185d:
  iVar1 = *(int *)(lVar4 + 0x58 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1489f17f2;
}



// FUNCTION 1489f1878 FUN_1489f1878 body=319 status=ok
// SIG undefined FUN_1489f1878(void)

undefined4 * FUN_1489f1878(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489f19b8(param_1,local_48);
  FUN_1489f1b32(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1489f1aa6(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x5c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489f1c44(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f19b8 FUN_1489f19b8 body=238 status=ok
// SIG undefined FUN_1489f19b8(void)

int * FUN_1489f19b8(longlong *param_1,int *param_2)

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



// FUNCTION 1489f1aa6 FUN_1489f1aa6 body=140 status=ok
// SIG undefined FUN_1489f1aa6(void)

undefined8 FUN_1489f1aa6(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1489f17a8(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x60);
    FUN_1489c9ef6(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x60),param_3,0x58);
    FUN_1489f1bca(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1489f1b32 FUN_1489f1b32 body=151 status=ok
// SIG undefined FUN_1489f1b32(void)

void FUN_1489f1b32(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 3);
  param_1[6] = 0;
  param_1[6] = param_3[4];
  param_3[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_3 + 0x2c);
  param_3[5] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 7);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_3 + 0x3c);
  return;
}



// FUNCTION 1489f1bca FUN_1489f1bca body=122 status=ok
// SIG undefined FUN_1489f1bca(void)

void FUN_1489f1bca(longlong *param_1,int param_2)

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



// FUNCTION 1489f1c44 FUN_1489f1c44 body=480 status=ok
// SIG undefined FUN_1489f1c44(void)

void FUN_1489f1c44(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x60;
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
        *(int *)(lVar3 + 0x5c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar11) =
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



// FUNCTION 1489f1e26 FUN_1489f1e26 body=257 status=ok
// SIG undefined FUN_1489f1e26(void)

void FUN_1489f1e26(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1489f1e9c:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x60);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x60);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1489f1f0f;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1489f1f0f;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1489f1f15;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1489f1f15;
      goto LAB_1489f1f01;
    }
  }
  return;
LAB_1489f1f0f:
  if (uVar7 == uVar6) {
LAB_1489f1f15:
    FUN_1489f1f28(param_1);
    return;
  }
LAB_1489f1f01:
  iVar2 = (int)plVar3[0xb];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1489f1e9c;
}



// FUNCTION 1489f1f28 FUN_1489f1f28 body=95 status=ok
// SIG undefined FUN_1489f1f28(void)

void FUN_1489f1f28(longlong *param_1,int param_2)

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
  FUN_1489f1f88();
  return;
}



// FUNCTION 1489f1f88 FUN_1489f1f88 body=73 status=ok
// SIG undefined FUN_1489f1f88(void)

void FUN_1489f1f88(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x60);
  FUN_1489c9ef6(plVar1 + 2);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_1489f1bca(param_1,param_2);
  return;
}



// FUNCTION 1489f1fd2 FUN_1489f1fd2 body=113 status=ok
// SIG undefined FUN_1489f1fd2(void)

void FUN_1489f1fd2(IClientSideSocket *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_14b454960;
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001489f203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::IClientSideSocket::~IClientSideSocket(param_1);
  return;
}



// FUNCTION 1489f2092 FUN_1489f2092 body=72 status=ok
// SIG undefined FUN_1489f2092(void)

void FUN_1489f2092(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001489f20cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489f20da FUN_1489f20da body=192 status=ok
// SIG undefined FUN_1489f20da(void)

void FUN_1489f20da(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409f0fb8(param_1,local_28);
  cVar1 = FUN_144729dda(local_28);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(local_28);
    plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x30) + 0x18))(lVar2 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_1409f0ca6();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x15) == '\x01')) &&
         ((longlong)(int)plVar4[1] != 0)) {
        lVar2 = *plVar4;
        lVar6 = (longlong)(int)plVar4[1] * 0x28;
        do {
          uVar5 = FUN_1409f0d56(lVar2);
          (**(code **)(*plVar3 + 0x330))(plVar3,uVar5);
          lVar2 = lVar2 + 0x28;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f21b0 FUN_1489f21b0 body=87 status=ok
// SIG undefined FUN_1489f21b0(void)

undefined8 * FUN_1489f21b0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x50);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    FUN_140002266(param_2,L"Triggers:%d/%d, NextPulseTime:%.2f, HeldDuration:%.2f",
                  *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x7c),
                  (double)*(float *)(param_1 + 0x60),(double)fVar1);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1489f223c FUN_1489f223c body=54 status=ok
// SIG undefined FUN_1489f223c(void)

undefined1 FUN_1489f223c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f98248(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1489f229a FUN_1489f229a body=59 status=ok
// SIG undefined FUN_1489f229a(void)

undefined8 FUN_1489f229a(longlong *param_1)

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



// FUNCTION 1489f22e0 FUN_1489f22e0 body=37 status=ok
// SIG undefined FUN_1489f22e0(void)

void FUN_1489f22e0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1489f23a4 FUN_1489f23a4 body=59 status=ok
// SIG undefined FUN_1489f23a4(void)

undefined8 FUN_1489f23a4(longlong *param_1)

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



// FUNCTION 1489f2442 FUN_1489f2442 body=48 status=ok
// SIG undefined FUN_1489f2442(void)

void FUN_1489f2442(longlong *param_1)

{
  if ((char)param_1[3] == '\x01') {
    FUN_140cc83f7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1489f2472 FUN_1489f2472 body=107 status=ok
// SIG undefined FUN_1489f2472(void)

/* WARNING: Removing unreachable block (ram,0x0001489f24a4) */
/* WARNING: Removing unreachable block (ram,0x0001489f2480) */
/* WARNING: Removing unreachable block (ram,0x0001489f2496) */
/* WARNING: Removing unreachable block (ram,0x0001489f24af) */
/* WARNING: Removing unreachable block (ram,0x0001489f2498) */

void FUN_1489f2472(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb91658;
  LOCK();
  UNLOCK();
  DAT_14cb91658 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb91660 = DAT_14cb91660 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    DAT_14cb91660 = DAT_14cb91660 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1489f24de FUN_1489f24de body=136 status=ok
// SIG undefined FUN_1489f24de(void)

void FUN_1489f24de(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb915c0;
  if (DAT_14cb915f4 != 0) {
    *(int *)(DAT_14cb915c0 + (longlong)DAT_14cb915f0 * 0x50) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x50) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb915f4) {
    iVar4 = DAT_14cb915f0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x50) = iVar4;
  DAT_14cb915f4 = DAT_14cb915f4 + 1;
  puVar3 = &DAT_14cb915d0;
  if (DAT_14cb915e0 != (undefined *)0x0) {
    puVar3 = DAT_14cb915e0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb915f0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1489f2566 FUN_1489f2566 body=31 status=ok
// SIG undefined FUN_1489f2566(void)

undefined8 FUN_1489f2566(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f25a2 FUN_1489f25a2 body=93 status=ok
// SIG undefined FUN_1489f25a2(void)

void FUN_1489f25a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b45bb00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f2600 FUN_1489f2600 body=126 status=ok
// SIG undefined FUN_1489f2600(void)

void FUN_1489f2600(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b45bb00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f266f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f267e FUN_1489f267e body=21 status=ok
// SIG undefined FUN_1489f267e(void)

undefined8 FUN_1489f267e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489f2694 FUN_1489f2694 body=122 status=ok
// SIG undefined FUN_1489f2694(void)

void FUN_1489f2694(longlong *param_1,int param_2)

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



// FUNCTION 1489f271a FUN_1489f271a body=176 status=ok
// SIG undefined FUN_1489f271a(void)

void FUN_1489f271a(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24[0] = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_24;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14598420a(puVar1);
  FUN_14598420a(local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f27cc FUN_1489f27cc body=184 status=ok
// SIG undefined FUN_1489f27cc(void)

void FUN_1489f27cc(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_2c;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146003630(param_1,puVar1);
  FUN_14598420a(local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f2890 FUN_1489f2890 body=179 status=ok
// SIG undefined FUN_1489f2890(void)

void FUN_1489f2890(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  if (*(undefined4 **)(param_2 + 0x38) == (undefined4 *)0x0) {
    puVar1 = &local_24;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489f3122(puVar1);
  FUN_1489f3122(&local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f2944 FUN_1489f2944 body=325 status=ok
// SIG undefined FUN_1489f2944(void)

void FUN_1489f2944(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [188];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_3c = 0xffffffff;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  FUN_1489f2a8a(local_f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = &local_3c;
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489f2b10(param_1,puVar2,puVar1);
  FUN_143eaaf3e(local_f8);
  FUN_1489f3122(&local_3c);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f2a8a FUN_1489f2a8a body=134 status=ok
// SIG undefined FUN_1489f2a8a(void)

undefined8 * FUN_1489f2a8a(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_144a5dc74(param_1 + 1);
  FUN_144a5dc74(param_1 + 3);
  FUN_144a5dc74(param_1 + 5);
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  FUN_144a5dc74(param_1 + 0xb);
  FUN_144a5dc74(param_1 + 0xd);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return param_1;
}



// FUNCTION 1489f2b10 FUN_1489f2b10 body=1008 status=ok
// SIG undefined FUN_1489f2b10(void)

void FUN_1489f2b10(longlong param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  void *_Src;
  void *_Src_00;
  int iVar15;
  void *pvVar16;
  undefined1 auStack_248 [44];
  uint local_21c;
  uint local_218;
  uint local_214;
  longlong local_210;
  ulonglong local_208;
  longlong local_200;
  PSRWLOCK local_1f8;
  void *local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  void *local_1d8;
  void *local_1d0;
  int local_1c8;
  undefined1 local_1c0 [184];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  LOCK();
  piVar1 = (int *)(param_1 + 0x4c);
  iVar13 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  FUN_1489f3122(param_2);
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 != 0) {
    lVar6 = FUN_1449db7f2();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_1489f2b7e;
  }
  lVar8 = 0;
LAB_1489f2b7e:
  FUN_14485c47a(param_2 + 1,lVar8);
  *param_2 = iVar13 + 1;
  FUN_1489f2a8a(local_1c0);
  local_1c8 = iVar13 + 1;
  FUN_143eab346(local_1c0,param_3);
  local_1f8 = (PSRWLOCK)(param_1 + 0x40);
  AcquireSRWLockExclusive(local_1f8);
  iVar13 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar13 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar13 + 1U) {
    FUN_1489f6754(param_1 + 0x30,iVar13);
  }
  *(int *)((longlong)iVar13 * 0xc0 + *(longlong *)(param_1 + 0x30)) = local_1c8;
  FUN_143eacec4();
  iVar13 = *(int *)(param_1 + 0x38);
  uVar11 = (ulonglong)iVar13;
  local_210 = param_1;
  if (0 < (longlong)uVar11) {
    pvVar16 = *(void **)(param_1 + 0x30);
    uVar9 = 0;
    local_1f0 = pvVar16;
    do {
      if ((uVar9 + 1 < uVar11) &&
         (*(byte *)((longlong)pvVar16 + 0x91) < *(byte *)((longlong)pvVar16 + 0x151))) {
        memcpy(local_108,pvVar16,0xc0);
        memcpy(pvVar16,(void *)((longlong)pvVar16 + 0xc0),0xc0);
        memcpy((void *)((longlong)pvVar16 + 0xc0),local_108,0xc0);
      }
      uVar9 = uVar9 + 2;
      pvVar16 = (void *)((longlong)pvVar16 + 0x180);
    } while (uVar9 < uVar11);
    if (2 < iVar13) {
      uVar9 = 2;
      local_1e8 = uVar11;
      do {
        local_21c = (int)uVar9 * 2;
        local_1e0 = (longlong)(int)local_21c;
        lVar8 = 0;
        local_208 = uVar9;
        do {
          uVar10 = (int)local_1e8 - (int)lVar8;
          if ((int)local_21c <= (int)uVar10) {
            uVar10 = local_21c;
          }
          local_200 = lVar8;
          if ((int)local_208 < (int)uVar10 && 0 < (int)local_208) {
            pvVar16 = (void *)(lVar8 * 0xc0 + (longlong)local_1f0);
            iVar13 = 0;
            uVar11 = local_208 & 0xffffffff;
            local_218 = uVar10;
            local_1d8 = pvVar16;
            while( true ) {
              iVar15 = (int)uVar11;
              iVar14 = 0;
              if (iVar15 - iVar13 != 0 && iVar13 <= iVar15) {
                iVar14 = 0;
                uVar7 = iVar15 - iVar13;
                do {
                  iVar2 = (uVar7 >> 1) + iVar14;
                  if (*(byte *)((longlong)pvVar16 + (longlong)iVar15 * 0xc0 + 0x91) <=
                      *(byte *)((longlong)pvVar16 +
                               (longlong)iVar2 * 0xc0 + (longlong)iVar13 * 0xc0 + 0x91)) {
                    iVar14 = iVar2 + (uVar7 & 1);
                  }
                  bVar5 = 1 < uVar7;
                  uVar7 = uVar7 >> 1;
                } while (bVar5);
              }
              iVar14 = iVar14 + iVar13;
              if (iVar15 - iVar14 == 0 || iVar15 < iVar14) break;
              uVar7 = uVar10 - iVar15;
              if (uVar7 == 0 || (int)uVar10 < iVar15) {
                iVar13 = 0;
              }
              else {
                _Src_00 = (void *)((longlong)iVar14 * 0xc0 + (longlong)pvVar16);
                iVar13 = 0;
                uVar11 = (ulonglong)uVar7;
                do {
                  uVar11 = uVar11 >> 1;
                  uVar12 = (uint)uVar11 + iVar13;
                  if (*(byte *)((longlong)_Src_00 + 0x91) <
                      *(byte *)((longlong)pvVar16 +
                               (ulonglong)uVar12 * 0xc0 + (longlong)iVar15 * 0xc0 + 0x91)) {
                    iVar13 = uVar12 + (uVar7 & 1);
                  }
                  bVar5 = 1 < uVar7;
                  uVar7 = (uint)uVar11;
                } while (bVar5);
                uVar7 = iVar15 + iVar13;
                uVar11 = (ulonglong)uVar7;
                if (0 < iVar13) {
                  pvVar16 = (void *)((longlong)(iVar15 - iVar14) * 0xc0 + (longlong)_Src_00);
                  local_1d0 = (void *)((longlong)(int)(uVar7 - iVar14) * 0xc0 + (longlong)_Src_00);
                  _Src = pvVar16;
                  local_214 = uVar7;
                  do {
                    while( true ) {
                      pvVar3 = (void *)((longlong)_Src + 0xc0);
                      pvVar4 = (void *)((longlong)_Src_00 + 0xc0);
                      memcpy(local_108,_Src_00,0xc0);
                      memcpy(_Src_00,_Src,0xc0);
                      memcpy(_Src,local_108,0xc0);
                      if (pvVar3 == local_1d0) break;
                      if (pvVar4 == pvVar16) {
                        pvVar16 = pvVar3;
                      }
                      _Src_00 = (void *)((longlong)_Src_00 + 0xc0);
                      _Src = pvVar3;
                    }
                    _Src = pvVar16;
                    _Src_00 = pvVar4;
                  } while (pvVar4 != pvVar16);
                  uVar11 = (ulonglong)local_214;
                  pvVar16 = local_1d8;
                  uVar10 = local_218;
                }
              }
              if (((int)uVar10 <= (int)uVar11) ||
                 (iVar13 = iVar13 + iVar14 + 1, (int)uVar11 <= iVar13)) break;
            }
          }
          lVar8 = local_200 + local_1e0;
        } while (lVar8 < (longlong)local_1e8);
        uVar9 = (ulonglong)local_21c;
      } while ((int)local_21c < (int)local_1e8);
    }
  }
  ReleaseSRWLockExclusive(local_1f8);
  FUN_1489f34fa(local_210);
  FUN_143eaaf3e(local_1c0);
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489f2f02 FUN_1489f2f02 body=325 status=ok
// SIG undefined FUN_1489f2f02(void)

void FUN_1489f2f02(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [188];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_3c = 0xffffffff;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  FUN_1489f2a8a(local_f8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = &local_3c;
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1489f3048(param_1,puVar2,puVar1);
  FUN_143eaaf3e(local_f8);
  FUN_1489f3122(&local_3c);
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f3048 FUN_1489f3048 body=113 status=ok
// SIG undefined FUN_1489f3048(void)

void FUN_1489f3048(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 8));
  lVar1 = (ulonglong)*(uint *)(param_1 + 7) * 0xc0;
  iVar2 = *(uint *)(param_1 + 7) + 1;
  do {
    lVar1 = lVar1 + -0xc0;
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) goto LAB_1489f30a6;
  } while (*(int *)(param_1[6] + lVar1) != *param_2);
  (**(code **)(*param_1 + 0x2d8))(param_1,*param_2,param_3);
LAB_1489f30a6:
                    /* WARNING: Could not recover jumptable at 0x0001489f30b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 8));
  return;
}



// FUNCTION 1489f3122 FUN_1489f3122 body=73 status=ok
// SIG undefined FUN_1489f3122(void)

void FUN_1489f3122(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != -1) {
    lVar1 = FUN_14479d2ce(param_1 + 1);
    if (lVar1 != 0) {
      lVar1 = FUN_1489f316c(lVar1);
      if (lVar1 != 0) {
        FUN_143eab4fa(lVar1,*param_1);
      }
    }
    param_1[2] = 0;
    param_1[0] = -1;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1489f316c FUN_1489f316c body=103 status=ok
// SIG undefined FUN_1489f316c(void)

void FUN_1489f316c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a85f2e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1489f61fe(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f31d4 FUN_1489f31d4 body=338 status=ok
// SIG undefined FUN_1489f31d4(void)

void FUN_1489f31d4(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(*param_1 + 0x2e8))();
  FUN_14485c47a(param_1 + 10,uVar3);
  lVar4 = FUN_14479d2ce(param_1 + 10);
  if (lVar4 != 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar1 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b465f50;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar1[4] = FUN_143eab06a;
    FUN_1446ddc76(&local_48,"FGbxUIEvent_PopupResult",1);
    FUN_140391af6(lVar4,&local_30,local_48,&local_40);
    param_1[0xb] = local_30;
    FUN_1449db362(&local_40);
  }
  FUN_1489f3328(&local_40,param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f3328 FUN_1489f3328 body=239 status=ok
// SIG undefined FUN_1489f3328(void)

undefined8 FUN_1489f3328(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e063e0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b465fc0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1489f3418;
  FUN_14134bd86(&DAT_14c964278,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f3418 FUN_1489f3418 body=79 status=ok
// SIG undefined FUN_1489f3418(void)

void FUN_1489f3418(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
  FUN_145aff4a3(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1489f6896(param_1 + 0x30);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
  FUN_1489f34fa(param_1);
  return;
}



// FUNCTION 1489f3468 FUN_1489f3468 body=145 status=ok
// SIG undefined FUN_1489f3468(void)

void FUN_1489f3468(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x50);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x50);
    FUN_1446ddc76(&local_30,"FGbxUIEvent_PopupResult",1);
    FUN_1401cd85c(uVar2,local_30,param_1 + 0x58);
  }
  FUN_140457ffc(&DAT_14c964278,param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f34fa FUN_1489f34fa body=224 status=ok
// SIG undefined FUN_1489f34fa(void)

ulonglong FUN_1489f34fa(longlong *param_1)

{
  PSRWLOCK SRWLock;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  SRWLock = (PSRWLOCK)(param_1 + 8);
  AcquireSRWLockShared(SRWLock);
  lVar2 = param_1[7];
  ReleaseSRWLockShared(SRWLock);
  if ((int)lVar2 == 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 9);
    if (*(uint *)(param_1 + 9) != 0) {
      (**(code **)(*param_1 + 0x2c8))(param_1);
      LOCK();
      uVar1 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = 0;
      uVar3 = (ulonglong)uVar1;
      UNLOCK();
    }
  }
  else {
    AcquireSRWLockShared(SRWLock);
    local_e0 = *(undefined4 *)param_1[6];
    FUN_143eacec4(local_d8,(undefined4 *)param_1[6] + 2);
    ReleaseSRWLockShared(SRWLock);
    if ((int)param_1[9] == 0) {
      (**(code **)(*param_1 + 0x2c0))(param_1);
      LOCK();
      *(undefined4 *)(param_1 + 9) = 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x2e0))(param_1,local_e0,local_d8);
    uVar3 = FUN_143eaaf3e(local_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f35dc FUN_1489f35dc body=102 status=ok
// SIG undefined FUN_1489f35dc(void)

void FUN_1489f35dc(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_143eaaf3e(lVar1 + (longlong)(int)param_2 * 0xc0 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0xc0);
    memmove(_Dst,(void *)((longlong)_Dst + 0xc0),(longlong)(int)(~param_2 + iVar2) * 0xc0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1489f67e8(param_1);
  return;
}



// FUNCTION 1489f3642 FUN_1489f3642 body=151 status=ok
// SIG undefined FUN_1489f3642(void)

void FUN_1489f3642(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  if (0 < *(int *)(param_1 + 1)) {
    puVar1 = (undefined8 *)*param_1;
    iVar4 = *(int *)(puVar1 + 1);
    if (iVar4 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*puVar1;
    }
    iVar2 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar2 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar2,puVar6);
    iVar4 = FUN_1489f6bf4(uVar3,puVar1);
    lVar5 = (longlong)iVar4 * 0x20 + DAT_14cb91a90;
    if (((lVar5 != 0 && iVar4 != -1) && (param_2 != 0)) &&
       (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 != 0)) {
      FUN_1489f3122(lVar5);
      FUN_1489f3122(lVar5);
      FUN_1400020a8(lVar5);
      FUN_1489f6f14(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1489f36da FUN_1489f36da body=305 status=ok
// SIG undefined FUN_1489f36da(void)

void FUN_1489f36da(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    FUN_144a8b2a0(&local_30,param_1,&DAT_149e001d8);
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(local_50,L"%s %s",L"gbx.ui.umg.togglevisibility ",puVar1);
    (**(code **)(*param_2 + 0xd40))(param_2,local_40,local_50,1);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    puVar1 = local_30;
    if (local_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(local_50,L"%s %s",L"gbx.ui.coherent.togglevisibility ",puVar1);
    (**(code **)(*param_2 + 0xd40))(param_2,local_60,local_50,1);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489f380c FUN_1489f380c body=42 status=ok
// SIG undefined FUN_1489f380c(void)

void FUN_1489f380c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14485c47a(param_1 + 0x30);
  FUN_14485c47a(param_1 + 0x28,param_3);
  return;
}



// FUNCTION 1489f383e FUN_1489f383e body=59 status=ok
// SIG undefined FUN_1489f383e(void)

void FUN_1489f383e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14485c47a(param_1 + 0x28);
  FUN_14485c47a(param_1 + 0x30,param_3);
  FUN_14485c47a(param_1 + 0x38,param_4);
  return;
}



// FUNCTION 1489f388a FUN_1489f388a body=84 status=ok
// SIG undefined FUN_1489f388a(void)

void FUN_1489f388a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_14485c47a(param_1 + 0x30);
  FUN_14485c47a(param_1 + 0x28,param_3);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f38d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2,param_3,param_1);
    return;
  }
  return;
}



// FUNCTION 1489f38de FUN_1489f38de body=39 status=ok
// SIG undefined FUN_1489f38de(void)

void FUN_1489f38de(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a8))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1489f395a FUN_1489f395a body=121 status=ok
// SIG undefined FUN_1489f395a(void)

void FUN_1489f395a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14485c47a(param_1 + 0x28);
  FUN_14485c47a(param_1 + 0x30,param_3);
  FUN_14485c47a(param_1 + 0x38,param_4);
  if (param_3 != 0) {
    FUN_1489f39d4(param_3 + 0x28,local_28,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f39d4 FUN_1489f39d4 body=244 status=ok
// SIG undefined FUN_1489f39d4(void)

undefined8 FUN_1489f39d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4660e0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_1489f3aca;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f3ad2 FUN_1489f3ad2 body=58 status=ok
// SIG undefined FUN_1489f3ad2(void)

void FUN_1489f3ad2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x28,param_1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1489f3b0c FUN_1489f3b0c body=66 status=ok
// SIG undefined FUN_1489f3b0c(void)

void FUN_1489f3b0c(longlong param_1,float param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_1449e6cbc(*(longlong *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_3 + 0x68) = uVar1;
    *(float *)(param_1 + 0x48) = param_2 + *(float *)(param_1 + 0x48);
  }
  return;
}



// FUNCTION 1489f3b4e FUN_1489f3b4e body=84 status=ok
// SIG undefined FUN_1489f3b4e(void)

void FUN_1489f3b4e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_14485c47a(param_1 + 0x30);
  FUN_14485c47a(param_1 + 0x28,param_3);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f3b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2,param_3,param_1);
    return;
  }
  return;
}



// FUNCTION 1489f3ba2 FUN_1489f3ba2 body=39 status=ok
// SIG undefined FUN_1489f3ba2(void)

void FUN_1489f3ba2(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a8))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1489f3c1a FUN_1489f3c1a body=57 status=ok
// SIG undefined FUN_1489f3c1a(void)

void FUN_1489f3c1a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    uVar2 = FUN_140636ec6(lVar1);
    FUN_14485c47a(param_1 + 9,uVar2);
    return;
  }
  return;
}



// FUNCTION 1489f3c56 FUN_1489f3c56 body=218 status=ok
// SIG undefined FUN_1489f3c56(void)

void FUN_1489f3c56(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if (cVar1 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 0x48);
      if (*(longlong *)(lVar3 + 0x3d0) != 0) {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x3d0) + 0x1c8);
        if (lVar3 == 0) {
          pdVar4 = (double *)&DAT_14c8464e0;
          dVar8 = DAT_14c8464f0;
        }
        else {
          pdVar4 = (double *)(lVar3 + 0x260);
          dVar8 = *(double *)(lVar3 + 0x270);
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
          dVar8 = *(double *)(lVar2 + 0x270) - dVar8;
          dVar6 = *(double *)(lVar2 + 0x260) - *pdVar4;
          dVar7 = *(double *)(lVar2 + 0x268) - pdVar4[1];
          uVar5 = FUN_1449e6cbc(*(longlong *)(param_1 + 0x40),
                                (float)SQRT(dVar8 * dVar8 + dVar6 * dVar6 + dVar7 * dVar7));
          *(undefined4 *)(param_3 + 100) = uVar5;
        }
      }
    }
  }
  return;
}



// FUNCTION 1489f3d30 FUN_1489f3d30 body=599 status=ok
// SIG undefined FUN_1489f3d30(void)

void FUN_1489f3d30(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined1 local_61;
  longlong local_60;
  longlong *local_58;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14485c47a(param_1 + 0x11);
  (**(code **)(*param_1 + 0x2d0))(param_1,local_50);
  if (local_50[0] != 0) {
    FUN_14050fd64();
    lVar6 = FUN_14050fd64();
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar5 = local_78;
    local_70 = 3;
    *local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_78[2] = lVar7;
    *local_78 = &PTR_FUN_14b466150;
    local_78[3] = 0;
    FUN_14485c47a(local_78 + 3,param_1);
    puVar5[4] = FUN_1489f3f88;
    local_80 = &local_61;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    FUN_147b8fd50(lVar6 + 0x1e8,&local_60,local_50,&local_78);
    plVar2 = local_58;
    if (param_1 + 0xf != &local_60) {
      param_1[0xf] = local_60;
      local_60 = 0;
      plVar3 = (longlong *)param_1[0x10];
      if (local_58 != plVar3) {
        local_58 = (longlong *)0x0;
        param_1[0x10] = (longlong)plVar2;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
    }
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_1449db362(&local_78);
  }
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,param_1);
  }
  lVar4 = param_1[0xd];
  if ((longlong)(int)lVar4 != 0) {
    lVar6 = param_1[0xc];
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar7);
      if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2,param_1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f3f88 FUN_1489f3f88 body=167 status=ok
// SIG undefined FUN_1489f3f88(void)

void FUN_1489f3f88(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if ((param_1[0xf] != 0) && (lVar1 = FUN_1409be8d8(), lVar1 != 0)) {
    uVar2 = FUN_145a8601a();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar4 = FUN_14594c4dc();
      lVar1 = FUN_14092e757(uVar4,uVar2,param_1,0);
      if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
        param_1[0xe] = lVar1;
        if (lVar1 == 0) {
          return;
        }
      }
      else {
        FUN_1456cec3c(lVar1);
        param_1[0xe] = lVar1;
      }
      if ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f401e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2d8))(param_1,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489f4030 FUN_1489f4030 body=140 status=ok
// SIG undefined FUN_1489f4030(void)

void FUN_1489f4030(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((char)param_1[0x12] == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  lVar2 = param_1[0xd];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0xc];
    lVar3 = 0;
    do {
      if (*(longlong **)(lVar1 + lVar3) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x2a8))();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x2a8))();
  }
  if (param_1[0xf] != 0) {
    FUN_1401a5e92();
  }
  param_1[0x11] = 0;
  return;
}



// FUNCTION 1489f40bc FUN_1489f40bc body=82 status=ok
// SIG undefined FUN_1489f40bc(void)

void FUN_1489f40bc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x2b0))();
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f410e FUN_1489f410e body=113 status=ok
// SIG undefined FUN_1489f410e(void)

void FUN_1489f410e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f416f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
    return;
  }
  return;
}



// FUNCTION 1489f4198 FUN_1489f4198 body=83 status=ok
// SIG undefined FUN_1489f4198(void)

void FUN_1489f4198(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_14134c582();
  iVar1 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f41ec FUN_1489f41ec body=82 status=ok
// SIG undefined FUN_1489f41ec(void)

void FUN_1489f41ec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_140674fee(param_1);
  return;
}



// FUNCTION 1489f423e FUN_1489f423e body=116 status=ok
// SIG undefined FUN_1489f423e(void)

void FUN_1489f423e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    iVar1 = FUN_1489f76e2(param_1 + 0x48,&local_28);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f42c2 FUN_1489f42c2 body=123 status=ok
// SIG undefined FUN_1489f42c2(void)

void FUN_1489f42c2(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_30 = &local_38;
    iVar2 = FUN_1489f781c(param_1 + 0x48);
    if (iVar1 != iVar2) {
      FUN_1447f69b6(param_1 + 0x30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f433e FUN_1489f433e body=91 status=ok
// SIG undefined FUN_1489f433e(void)

void FUN_1489f433e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_144a7e84a();
  iVar1 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f439a FUN_1489f439a body=42 status=ok
// SIG undefined FUN_1489f439a(void)

void FUN_1489f439a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14485c47a(param_1 + 0x30);
  FUN_14485c47a(param_1 + 0x28,param_3);
  return;
}



// FUNCTION 1489f43c4 FUN_1489f43c4 body=8 status=ok
// SIG undefined FUN_1489f43c4(void)

void FUN_1489f43c4(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1489f43cc FUN_1489f43cc body=106 status=ok
// SIG undefined FUN_1489f43cc(void)

void FUN_1489f43cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_14485c47a(param_1 + 0x30);
  FUN_14485c47a(param_1 + 0x28,param_3);
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f4436 FUN_1489f4436 body=76 status=ok
// SIG undefined FUN_1489f4436(void)

void FUN_1489f4436(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1489f4482 FUN_1489f4482 body=61 status=ok
// SIG undefined FUN_1489f4482(void)

void FUN_1489f4482(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f44c2 FUN_1489f44c2 body=70 status=ok
// SIG undefined FUN_1489f44c2(void)

void FUN_1489f44c2(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f450a FUN_1489f450a body=87 status=ok
// SIG undefined FUN_1489f450a(void)

ulonglong FUN_1489f450a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        if (cVar4 == (char)plVar3[7]) {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1489f4562 FUN_1489f4562 body=106 status=ok
// SIG undefined FUN_1489f4562(void)

void FUN_1489f4562(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_14485c47a(param_1 + 0x30);
  FUN_14485c47a(param_1 + 0x28,param_3);
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f45cc FUN_1489f45cc body=76 status=ok
// SIG undefined FUN_1489f45cc(void)

void FUN_1489f45cc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1489f4618 FUN_1489f4618 body=61 status=ok
// SIG undefined FUN_1489f4618(void)

void FUN_1489f4618(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f4656 FUN_1489f4656 body=70 status=ok
// SIG undefined FUN_1489f4656(void)

void FUN_1489f4656(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1489f469c FUN_1489f469c body=85 status=ok
// SIG undefined FUN_1489f469c(void)

ulonglong FUN_1489f469c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x48);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
        if (cVar4 != (char)plVar3[7]) goto LAB_1489f46e3;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
    uVar5 = 0;
  }
LAB_1489f46e3:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1489f46f2 FUN_1489f46f2 body=57 status=ok
// SIG undefined FUN_1489f46f2(void)

void FUN_1489f46f2(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    uVar2 = FUN_140636ec6(lVar1);
    FUN_14485c47a(param_1 + 9,uVar2);
    return;
  }
  return;
}



// FUNCTION 1489f472c FUN_1489f472c body=202 status=ok
// SIG undefined FUN_1489f472c(void)

void FUN_1489f472c(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 != '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0x48);
    lVar3 = *(longlong *)(lVar3 + 0x3d0);
    if (lVar3 != 0) {
      lVar4 = FUN_14479d2ce(param_1 + 0x30);
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar3 == 0) {
          pdVar5 = (double *)&DAT_14c8464e0;
          dVar6 = DAT_14c8464f0;
        }
        else {
          pdVar5 = (double *)(lVar3 + 0x260);
          dVar6 = *(double *)(lVar3 + 0x270);
        }
        dVar6 = dVar6 - *(double *)(lVar4 + 0x270);
        dVar7 = *pdVar5 - *(double *)(lVar4 + 0x260);
        dVar8 = pdVar5[1] - *(double *)(lVar4 + 0x268);
        fVar9 = *(float *)(param_1 + 0x40);
        if (*(char *)(param_1 + 0x50) == '\x01') {
          fVar9 = fVar9 + *(float *)(param_1 + 0x44);
        }
        uVar2 = 1;
        if (dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8 < (double)(fVar9 * fVar9))
        goto LAB_1489f47db;
      }
    }
  }
  uVar2 = 0;
LAB_1489f47db:
  *(undefined1 *)(param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 1489f47f6 FUN_1489f47f6 body=103 status=ok
// SIG undefined FUN_1489f47f6(void)

void FUN_1489f47f6(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b82bf6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1489f7696(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f4862 FUN_1489f4862 body=66 status=ok
// SIG undefined FUN_1489f4862(void)

void FUN_1489f4862(longlong param_1,undefined8 param_2)

{
  FUN_1467cf814(param_1 + 0x10);
  FUN_1467cf814(param_1 + 0x20,param_2);
  FUN_1467cf814(param_1 + 0x30,param_2);
  FUN_1467cf814(param_1 + 0x40,param_2);
  return;
}



// FUNCTION 1489f48d8 FUN_1489f48d8 body=63 status=ok
// SIG undefined FUN_1489f48d8(void)

undefined8 * FUN_1489f48d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1488e8eaa(&DAT_14cb91de0);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b465ec0;
  memset(puVar1 + 3,0,0x90);
  return puVar1;
}



// FUNCTION 1489f4918 FUN_1489f4918 body=44 status=ok
// SIG undefined FUN_1489f4918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489f4918(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb91dec = _DAT_14cb91dec + -1;
  *param_1 = DAT_14cb91de0;
  DAT_14cb91de0 = param_1;
  return;
}



// FUNCTION 1489f4944 FUN_1489f4944 body=57 status=ok
// SIG undefined FUN_1489f4944(void)

void FUN_1489f4944(undefined8 *param_1)

{
  (**(code **)*param_1)();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b465ec0;
  memset(param_1 + 3,0,0x90);
  return;
}



// FUNCTION 1489f4998 FUN_1489f4998 body=41 status=ok
// SIG undefined FUN_1489f4998(void)

void FUN_1489f4998(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxUICore\\Source\\GbxUICore/Public/Icons/GbxUIIconAction.h",
                0x1d,L"Pure virtual not implemented (%s)",L"UGbxUIIconAction::ExecuteIconAction");
  return;
}



// FUNCTION 1489f49c4 FUN_1489f49c4 body=41 status=ok
// SIG undefined FUN_1489f49c4(void)

void FUN_1489f49c4(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxUICore\\Source\\GbxUICore/Public/Icons/GbxUIIconAction_BaseModifier.h"
                ,0x18,L"Pure virtual not implemented (%s)",L"UGbxUIIconAction_BaseModifier::Execute"
               );
  return;
}



// FUNCTION 1489f49ee FUN_1489f49ee body=58 status=ok
// SIG undefined FUN_1489f49ee(void)

undefined8 * FUN_1489f49ee(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxUICore\\Source\\GbxUICore/Public/Icons/GbxUIIconBehavior.h"
                ,0x30,L"Pure virtual not implemented (%s)",
                L"UGbxUIIconBehavior::GetIconDataAssetSoftObjectPath");
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1489f4a38 FUN_1489f4a38 body=42 status=ok
// SIG undefined FUN_1489f4a38(void)

undefined1 FUN_1489f4a38(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxUICore\\Source\\GbxUICore/Public/Icons/GbxUIIconCondition.h"
                ,0x2b,L"Pure virtual not implemented (%s)",L"UGbxUIIconCondition::TestCondition");
  return 1;
}



// FUNCTION 1489f4a62 FUN_1489f4a62 body=45 status=ok
// SIG undefined FUN_1489f4a62(void)

longlong FUN_1489f4a62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f4aa0 FUN_1489f4aa0 body=38 status=ok
// SIG undefined FUN_1489f4aa0(void)

undefined8 FUN_1489f4aa0(undefined8 param_1,int param_2)

{
  FUN_145a9ecbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f4ac6 FUN_1489f4ac6 body=55 status=ok
// SIG undefined FUN_1489f4ac6(void)

void FUN_1489f4ac6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb916b8 == 0) {
    uVar1 = FUN_1410a124d();
    DAT_14cb916b8 = FUN_140002ddd(FUN_146569d65,uVar1,L"GbxGlobalsUI");
  }
  return;
}



// FUNCTION 1489f4b58 FUN_1489f4b58 body=78 status=ok
// SIG undefined FUN_1489f4b58(void)

undefined1 FUN_1489f4b58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x13);
      uVar6 = *(undefined4 *)(param_3 + -0xf);
      uVar7 = *(undefined4 *)(param_3 + -0xb);
      *(undefined4 *)(param_2 + -0x17) = *(undefined4 *)(param_3 + -0x17);
      *(undefined4 *)(param_2 + -0x13) = uVar5;
      *(undefined4 *)(param_2 + -0xf) = uVar6;
      *(undefined4 *)(param_2 + -0xb) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1403de7ba(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f4bce FUN_1489f4bce body=59 status=ok
// SIG undefined FUN_1489f4bce(void)

undefined8 FUN_1489f4bce(longlong *param_1)

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



// FUNCTION 1489f4c6c FUN_1489f4c6c body=62 status=ok
// SIG undefined FUN_1489f4c6c(void)

void FUN_1489f4c6c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 9) == '\x01') {
    *param_1 = &PTR_FUN_14b4665c8;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1489f4d0e FUN_1489f4d0e body=115 status=ok
// SIG undefined FUN_1489f4d0e(void)

undefined1 FUN_1489f4d0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1 + 8) = *(undefined1 *)(param_3 + lVar1 + 8);
      FUN_1406fa324();
      FUN_140bee9ec(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      FUN_140bee9ec(param_2 + lVar1 + 0x30,param_3 + lVar1 + 0x30);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f4daa FUN_1489f4daa body=59 status=ok
// SIG undefined FUN_1489f4daa(void)

undefined8 FUN_1489f4daa(longlong *param_1)

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



// FUNCTION 1489f4df0 FUN_1489f4df0 body=34 status=ok
// SIG undefined FUN_1489f4df0(void)

void FUN_1489f4df0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_145a9ee04(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1489f4e62 FUN_1489f4e62 body=38 status=ok
// SIG undefined FUN_1489f4e62(void)

undefined8 FUN_1489f4e62(undefined8 param_1,int param_2)

{
  FUN_145a9ee04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f4eb4 FUN_1489f4eb4 body=75 status=ok
// SIG undefined FUN_1489f4eb4(void)

undefined1 FUN_1489f4eb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f4f28 FUN_1489f4f28 body=59 status=ok
// SIG undefined FUN_1489f4f28(void)

undefined8 FUN_1489f4f28(longlong *param_1)

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



// FUNCTION 1489f4f6e FUN_1489f4f6e body=38 status=ok
// SIG undefined FUN_1489f4f6e(void)

void FUN_1489f4f6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1489f5118 FUN_1489f5118 body=63 status=ok
// SIG undefined FUN_1489f5118(void)

undefined1 FUN_1489f5118(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f5246(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 1489f5180 FUN_1489f5180 body=59 status=ok
// SIG undefined FUN_1489f5180(void)

undefined8 FUN_1489f5180(longlong *param_1)

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



// FUNCTION 1489f51cc FUN_1489f51cc body=40 status=ok
// SIG undefined FUN_1489f51cc(void)

void FUN_1489f51cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_145a9ecbc(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1489f5246 FUN_1489f5246 body=260 status=ok
// SIG undefined FUN_1489f5246(void)

longlong FUN_1489f5246(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  uVar9 = *(undefined4 *)(param_2 + 0x45);
  uVar10 = *(undefined4 *)(param_2 + 0x49);
  uVar11 = *(undefined4 *)(param_2 + 0x4d);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)(param_1 + 0x45) = uVar9;
  *(undefined4 *)(param_1 + 0x49) = uVar10;
  *(undefined4 *)(param_1 + 0x4d) = uVar11;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  FUN_1403de7ba(param_1 + 0x58,param_2 + 0x58);
  FUN_1489f534a(param_1 + 0x78,param_2 + 0x78);
  FUN_1489f534a(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  FUN_1406fa324(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140bee9ec(param_1 + 0xb8,param_2 + 0xb8);
  FUN_140bee9ec(param_1 + 200,param_2 + 200);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  FUN_1403de7ba(param_1 + 0xe0,param_2 + 0xe0);
  FUN_1489f53aa(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 1489f534a FUN_1489f534a body=95 status=ok
// SIG undefined FUN_1489f534a(void)

undefined8 * FUN_1489f534a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a9edbe(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489f5408(param_1,iVar1);
      FUN_1489f547b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f53aa FUN_1489f53aa body=93 status=ok
// SIG undefined FUN_1489f53aa(void)

undefined8 * FUN_1489f53aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141488962(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489f54ea(param_1,iVar1);
      FUN_1489f554c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f5408 FUN_1489f5408 body=115 status=ok
// SIG undefined FUN_1489f5408(void)

void FUN_1489f5408(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489f547b FUN_1489f547b body=111 status=ok
// SIG undefined FUN_1489f547b(void)

void FUN_1489f547b(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  if (param_3 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x28);
    param_2 = param_2 + 0x28;
    do {
      puVar8[-5] = &PTR_FUN_14b4665c8;
      uVar1 = *(undefined4 *)(param_2 + -0x1c);
      uVar2 = *(undefined4 *)(param_2 + -0x18);
      uVar3 = *(undefined4 *)(param_2 + -0x14);
      uVar4 = *(undefined4 *)(param_2 + -0x17);
      uVar5 = *(undefined4 *)(param_2 + -0x13);
      uVar6 = *(undefined4 *)(param_2 + -0xf);
      uVar7 = *(undefined4 *)(param_2 + -0xb);
      *(undefined4 *)(puVar8 + -4) = *(undefined4 *)(param_2 + -0x20);
      *(undefined4 *)((longlong)puVar8 + -0x1c) = uVar1;
      *(undefined4 *)(puVar8 + -3) = uVar2;
      *(undefined4 *)((longlong)puVar8 + -0x14) = uVar3;
      *(undefined4 *)((longlong)puVar8 + -0x17) = uVar4;
      *(undefined4 *)((longlong)puVar8 + -0x13) = uVar5;
      *(undefined4 *)((longlong)puVar8 + -0xf) = uVar6;
      *(undefined4 *)((longlong)puVar8 + -0xb) = uVar7;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      FUN_1403de7ba(puVar8,param_2);
      puVar8 = puVar8 + 9;
      param_2 = param_2 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f54ea FUN_1489f54ea body=98 status=ok
// SIG undefined FUN_1489f54ea(void)

void FUN_1489f54ea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489f554c FUN_1489f554c body=126 status=ok
// SIG undefined FUN_1489f554c(void)

void FUN_1489f554c(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x10);
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -2) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 8;
      puVar5 = puVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f55d0 FUN_1489f55d0 body=28 status=ok
// SIG undefined FUN_1489f55d0(void)

undefined8 FUN_1489f55d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 1489f5684 FUN_1489f5684 body=59 status=ok
// SIG undefined FUN_1489f5684(void)

undefined8 FUN_1489f5684(longlong *param_1)

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



// FUNCTION 1489f56ca FUN_1489f56ca body=34 status=ok
// SIG undefined FUN_1489f56ca(void)

void FUN_1489f56ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    FUN_14598420a(param_2);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1489f57c6 FUN_1489f57c6 body=59 status=ok
// SIG undefined FUN_1489f57c6(void)

undefined8 FUN_1489f57c6(longlong *param_1)

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



// FUNCTION 1489f580c FUN_1489f580c body=34 status=ok
// SIG undefined FUN_1489f580c(void)

void FUN_1489f580c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    FUN_1489f3122(param_2);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1489f587e FUN_1489f587e body=69 status=ok
// SIG undefined FUN_1489f587e(void)

void FUN_1489f587e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  param_2[2] = 0;
  return;
}



// FUNCTION 1489f58c4 FUN_1489f58c4 body=55 status=ok
// SIG undefined FUN_1489f58c4(void)

void FUN_1489f58c4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar2[1];
  param_2[2] = 0;
  return;
}



// FUNCTION 1489f5922 FUN_1489f5922 body=112 status=ok
// SIG undefined FUN_1489f5922(void)

undefined8 FUN_1489f5922(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f59ba FUN_1489f59ba body=59 status=ok
// SIG undefined FUN_1489f59ba(void)

undefined8 FUN_1489f59ba(longlong *param_1)

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



// FUNCTION 1489f5a00 FUN_1489f5a00 body=38 status=ok
// SIG undefined FUN_1489f5a00(void)

void FUN_1489f5a00(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1489f5a76 FUN_1489f5a76 body=37 status=ok
// SIG undefined FUN_1489f5a76(void)

void FUN_1489f5a76(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1489f2a8a(param_2);
  return;
}



// FUNCTION 1489f5ac2 FUN_1489f5ac2 body=63 status=ok
// SIG undefined FUN_1489f5ac2(void)

undefined1 FUN_1489f5ac2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_143eab346(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 1489f5b2a FUN_1489f5b2a body=59 status=ok
// SIG undefined FUN_1489f5b2a(void)

undefined8 FUN_1489f5b2a(longlong *param_1)

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



// FUNCTION 1489f5b76 FUN_1489f5b76 body=38 status=ok
// SIG undefined FUN_1489f5b76(void)

void FUN_1489f5b76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_143eaaf3e(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1489f5beb FUN_1489f5beb body=44 status=ok
// SIG undefined FUN_1489f5beb(void)

void FUN_1489f5beb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1489f5c60 FUN_1489f5c60 body=59 status=ok
// SIG undefined FUN_1489f5c60(void)

undefined8 FUN_1489f5c60(longlong *param_1)

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



// FUNCTION 1489f5d40 FUN_1489f5d40 body=63 status=ok
// SIG undefined FUN_1489f5d40(void)

undefined1 FUN_1489f5d40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f5e60(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1489f5da8 FUN_1489f5da8 body=59 status=ok
// SIG undefined FUN_1489f5da8(void)

undefined8 FUN_1489f5da8(longlong *param_1)

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



// FUNCTION 1489f5df4 FUN_1489f5df4 body=38 status=ok
// SIG undefined FUN_1489f5df4(void)

void FUN_1489f5df4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_140c60da2(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1489f5e60 FUN_1489f5e60 body=99 status=ok
// SIG undefined FUN_1489f5e60(void)

longlong FUN_1489f5e60(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_1403de7ba(param_1 + 0x28,param_2 + 0x28);
  FUN_1403de7ba(param_1 + 0x48,param_2 + 0x48);
  FUN_1403de7ba(param_1 + 0x68,param_2 + 0x68);
  FUN_1403de7ba(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



// FUNCTION 1489f5ec4 FUN_1489f5ec4 body=219 status=ok
// SIG undefined FUN_1489f5ec4(void)

longlong * FUN_1489f5ec4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4665d0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  puVar1[2] = &PTR_FUN_14b466590;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = &PTR_FUN_14b4665c8;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x51) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x59) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = &PTR_FUN_14b4665c0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x23] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  FUN_1489f5fc8(param_1);
  return param_1;
}



// FUNCTION 1489f5faa FUN_1489f5faa body=29 status=ok
// SIG undefined FUN_1489f5faa(void)

undefined8 FUN_1489f5faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f5fc8 FUN_1489f5fc8 body=158 status=ok
// SIG undefined FUN_1489f5fc8(void)

void FUN_1489f5fc8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_1489f603a;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_1489f603a;
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
LAB_1489f603a:
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
                    /* WARNING: Could not recover jumptable at 0x0001489f605a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489f6066 FUN_1489f6066 body=95 status=ok
// SIG undefined FUN_1489f6066(void)

undefined8 * FUN_1489f6066(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1489f5beb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1489f60c6(param_1,iVar1);
      FUN_1489f6139(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1489f60c6 FUN_1489f60c6 body=115 status=ok
// SIG undefined FUN_1489f60c6(void)

void FUN_1489f60c6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489f6139 FUN_1489f6139 body=83 status=ok
// SIG undefined FUN_1489f6139(void)

void FUN_1489f6139(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489f618c FUN_1489f618c body=114 status=ok
// SIG undefined FUN_1489f618c(void)

void FUN_1489f618c(longlong *param_1,int param_2)

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



// FUNCTION 1489f61fe FUN_1489f61fe body=76 status=ok
// SIG undefined FUN_1489f61fe(void)

void FUN_1489f61fe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a85f2e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1489f6212;
    }
  }
  lVar2 = 0;
LAB_1489f6212:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1489f624a FUN_1489f624a body=29 status=ok
// SIG undefined FUN_1489f624a(void)

undefined8 FUN_1489f624a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f6282 FUN_1489f6282 body=29 status=ok
// SIG undefined FUN_1489f6282(void)

bool FUN_1489f6282(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489f62a0 FUN_1489f62a0 body=26 status=ok
// SIG undefined FUN_1489f62a0(void)

bool FUN_1489f62a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489f62ba FUN_1489f62ba body=24 status=ok
// SIG undefined FUN_1489f62ba(void)

bool FUN_1489f62ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489f62d2 FUN_1489f62d2 body=93 status=ok
// SIG undefined FUN_1489f62d2(void)

void FUN_1489f62d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b465f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f6330 FUN_1489f6330 body=93 status=ok
// SIG undefined FUN_1489f6330(void)

void FUN_1489f6330(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b465f50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f638e FUN_1489f638e body=126 status=ok
// SIG undefined FUN_1489f638e(void)

void FUN_1489f638e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b465f50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f63fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f640c FUN_1489f640c body=40 status=ok
// SIG undefined FUN_1489f640c(void)

void FUN_1489f640c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489f6431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489f6434 FUN_1489f6434 body=152 status=ok
// SIG undefined FUN_1489f6434(void)

bool FUN_1489f6434(longlong param_1,undefined8 param_2)

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



// FUNCTION 1489f64d0 FUN_1489f64d0 body=29 status=ok
// SIG undefined FUN_1489f64d0(void)

undefined8 FUN_1489f64d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f6508 FUN_1489f6508 body=29 status=ok
// SIG undefined FUN_1489f6508(void)

bool FUN_1489f6508(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489f6526 FUN_1489f6526 body=26 status=ok
// SIG undefined FUN_1489f6526(void)

bool FUN_1489f6526(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489f6540 FUN_1489f6540 body=24 status=ok
// SIG undefined FUN_1489f6540(void)

bool FUN_1489f6540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489f6558 FUN_1489f6558 body=93 status=ok
// SIG undefined FUN_1489f6558(void)

void FUN_1489f6558(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b465fc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f65b6 FUN_1489f65b6 body=93 status=ok
// SIG undefined FUN_1489f65b6(void)

void FUN_1489f65b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b465fc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f6614 FUN_1489f6614 body=126 status=ok
// SIG undefined FUN_1489f6614(void)

void FUN_1489f6614(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b465fc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f6683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f6692 FUN_1489f6692 body=40 status=ok
// SIG undefined FUN_1489f6692(void)

void FUN_1489f6692(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489f66b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489f66ba FUN_1489f66ba body=152 status=ok
// SIG undefined FUN_1489f66ba(void)

bool FUN_1489f66ba(longlong param_1,undefined8 param_2)

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



// FUNCTION 1489f6754 FUN_1489f6754 body=147 status=ok
// SIG undefined FUN_1489f6754(void)

void FUN_1489f6754(longlong param_1,int param_2)

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



// FUNCTION 1489f67e8 FUN_1489f67e8 body=62 status=ok
// SIG undefined FUN_1489f67e8(void)

void FUN_1489f67e8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489f6826(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc0,8);
  }
  return;
}



// FUNCTION 1489f6826 FUN_1489f6826 body=112 status=ok
// SIG undefined FUN_1489f6826(void)

ulonglong FUN_1489f6826(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1489f6860;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc0,8);
      param_2 = param_2 / 0xc0;
    }
  }
LAB_1489f6860:
  return param_2 & 0xffffffff;
}



// FUNCTION 1489f6896 FUN_1489f6896 body=48 status=ok
// SIG undefined FUN_1489f6896(void)

void FUN_1489f6896(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,8);
  }
  return;
}



// FUNCTION 1489f68c6 FUN_1489f68c6 body=327 status=ok
// SIG undefined FUN_1489f68c6(void)

undefined4 * FUN_1489f68c6(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1489f6a0e(local_40);
  FUN_1489f6b90(param_2,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar2 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar10);
  cVar4 = FUN_1489f6b1c(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cb91a98 - DAT_14cb91ac4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb91ad8)) {
      uVar5 = DAT_14cb91ad8 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      puVar7 = DAT_14cb91ad0;
      if (DAT_14cb91ad0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb91ac8;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb91ad8 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cb91ad0;
      if (DAT_14cb91ad0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb91ac8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb91ad8 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cb91ad8 = iVar9;
      FUN_1489f6d10();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f6a0e FUN_1489f6a0e body=269 status=ok
// SIG undefined FUN_1489f6a0e(void)

int * FUN_1489f6a0e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb91ac0;
  iVar4 = DAT_14cb91a98;
  if (DAT_14cb91ac4 == 0) {
    iVar2 = DAT_14cb91a98 + 1;
    bVar7 = DAT_14cb91a9c == DAT_14cb91a98;
    DAT_14cb91a98 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb91a90,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb91aa0,1);
    puVar3 = DAT_14cb91ab0;
    if (DAT_14cb91ab0 == (undefined *)0x0) {
      puVar3 = &DAT_14cb91aa0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb91ac0;
    DAT_14cb91ac0 = *(int *)(DAT_14cb91a90 + 4 + lVar6 * 0x20);
    DAT_14cb91ac4 = DAT_14cb91ac4 + -1;
    iVar4 = iVar2;
    if (DAT_14cb91ac4 != 0) {
      *(undefined4 *)(DAT_14cb91a90 + (longlong)DAT_14cb91ac0 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb91aa0;
  if (DAT_14cb91ab0 != (undefined *)0x0) {
    puVar3 = DAT_14cb91ab0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb91a90;
  return param_1;
}



// FUNCTION 1489f6b1c FUN_1489f6b1c body=116 status=ok
// SIG undefined FUN_1489f6b1c(void)

undefined8 FUN_1489f6b1c(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((DAT_14cb91a98 - DAT_14cb91ac4 != 1) && (iVar6 = FUN_1489f6bf4(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(DAT_14cb91a90 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(DAT_14cb91a90 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1489f6c90(*param_3);
    *param_3 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1489f6b90 FUN_1489f6b90 body=100 status=ok
// SIG undefined FUN_1489f6b90(void)

undefined8 * FUN_1489f6b90(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1489f6bf4 FUN_1489f6bf4 body=156 status=ok
// SIG undefined FUN_1489f6bf4(void)

int FUN_1489f6bf4(uint param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  
  if (DAT_14cb91a98 != DAT_14cb91ac4) {
    puVar4 = &DAT_14cb91ac8;
    if (DAT_14cb91ad0 != (undefined *)0x0) {
      puVar4 = DAT_14cb91ad0;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(DAT_14cb91ad8 - 1U & param_1) * 4);
    lVar3 = DAT_14cb91a90;
    while (iVar1 != -1) {
      lVar5 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      if (iVar2 == *(int *)(param_2 + 1)) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar2 = FUN_144a80a00(*(undefined8 *)(lVar3 + lVar5),*param_2);
        lVar3 = DAT_14cb91a90;
        if (iVar2 == 0) {
          return iVar1;
        }
      }
      else if (*(int *)(param_2 + 1) + iVar2 == 1) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar3 + 0x18 + lVar5);
    }
  }
  return -1;
}



// FUNCTION 1489f6c90 FUN_1489f6c90 body=128 status=ok
// SIG undefined FUN_1489f6c90(void)

void FUN_1489f6c90(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb91a90;
  if (DAT_14cb91ac4 != 0) {
    *(int *)(DAT_14cb91a90 + (longlong)DAT_14cb91ac0 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb91ac4) {
    iVar4 = DAT_14cb91ac0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb91ac4 = DAT_14cb91ac4 + 1;
  puVar3 = &DAT_14cb91aa0;
  if (DAT_14cb91ab0 != (undefined *)0x0) {
    puVar3 = DAT_14cb91ab0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb91ac0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1489f6d10 FUN_1489f6d10 body=515 status=ok
// SIG undefined FUN_1489f6d10(void)

void FUN_1489f6d10(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb91ad0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb91ad0,0,0,4);
  }
  uVar2 = DAT_14cb91ad8;
  uVar3 = local_70;
  if (DAT_14cb91ad8 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14cb91ac8,0,DAT_14cb91ad8,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cb91ad0;
        if (DAT_14cb91ad0 == (undefined *)0x0) {
          puVar7 = &DAT_14cb91ac8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb91ad8 + 0x7fffffff & uVar9) * 4) = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cb91aa0;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cb91ab8 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14cb91a90;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar11 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar1 = *local_88;
        lVar10 = (longlong)iVar11 * 0x20;
        iVar4 = *(int *)(lVar1 + 8 + lVar10);
        puVar8 = &DAT_149dfb77a;
        iVar6 = 0;
        if (iVar4 != 0) {
          puVar8 = *(undefined2 **)(lVar1 + lVar10);
          iVar6 = iVar4 + -1;
        }
        iVar4 = FUN_144a49b4a(iVar6,puVar8);
        uVar5 = (longlong)iVar4 & (longlong)(int)DAT_14cb91ad8 - 1U;
        iVar4 = (int)uVar5;
        *(int *)(lVar1 + 0x1c + lVar10) = iVar4;
        puVar7 = DAT_14cb91ad0;
        if (DAT_14cb91ad0 == (undefined *)0x0) {
          puVar7 = &DAT_14cb91ac8;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar10) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cb91ad8 - 1U & uVar5) * 4);
        puVar7 = DAT_14cb91ad0;
        if (DAT_14cb91ad0 == (undefined *)0x0) {
          puVar7 = &DAT_14cb91ac8;
        }
        *(int *)(puVar7 + ((longlong)iVar4 & (longlong)(int)DAT_14cb91ad8 - 1U) * 4) = iVar11;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f6f14 FUN_1489f6f14 body=311 status=ok
// SIG undefined FUN_1489f6f14(void)

void FUN_1489f6f14(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  
  if (DAT_14cb91a98 != DAT_14cb91ac4) {
    iVar2 = *(int *)(param_1 + 1);
    if (iVar2 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar8,puVar5);
    puVar6 = &DAT_14cb91ac8;
    if (DAT_14cb91ad0 != (undefined *)0x0) {
      puVar6 = DAT_14cb91ad0;
    }
    uVar3 = (longlong)iVar2 & (longlong)DAT_14cb91ad8 - 1U;
    iVar2 = *(int *)(puVar6 + uVar3 * 4);
    if (iVar2 != -1) {
      piVar7 = (int *)(puVar6 + uVar3 * 4);
      lVar9 = DAT_14cb91a90;
      do {
        puVar1 = (undefined8 *)(lVar9 + (longlong)iVar2 * 0x20);
        iVar8 = *(int *)(lVar9 + 8 + (longlong)iVar2 * 0x20);
        if (iVar8 == *(int *)(param_1 + 1)) {
          if (iVar8 < 2) {
LAB_1489f6fdf:
            puVar6 = &DAT_14cb91ac8;
            if (DAT_14cb91ad0 != (undefined *)0x0) {
              puVar6 = DAT_14cb91ad0;
            }
            lVar9 = (longlong)*(int *)(DAT_14cb91a90 + 0x1c + (longlong)iVar2 * 0x20);
            iVar8 = *(int *)(puVar6 + lVar9 * 4);
            if (iVar8 == iVar2) {
              puVar4 = (undefined4 *)(puVar6 + lVar9 * 4);
            }
            else {
              do {
                lVar9 = (longlong)iVar8;
                iVar8 = *(int *)(DAT_14cb91a90 + 0x18 + lVar9 * 0x20);
              } while (iVar8 != iVar2);
              puVar4 = (undefined4 *)(DAT_14cb91a90 + lVar9 * 0x20 + 0x18);
            }
            *puVar4 = *(undefined4 *)(DAT_14cb91a90 + (longlong)iVar2 * 0x20 + 0x18);
            FUN_1489f704c();
            return;
          }
          iVar2 = FUN_144a80a00(*puVar1,*param_1);
          lVar9 = DAT_14cb91a90;
          if (iVar2 == 0) {
            iVar2 = *piVar7;
            goto LAB_1489f6fdf;
          }
        }
        else if (*(int *)(param_1 + 1) + iVar8 == 1) goto LAB_1489f6fdf;
        iVar2 = *(int *)(puVar1 + 3);
        piVar7 = (int *)(puVar1 + 3);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1489f704c FUN_1489f704c body=47 status=ok
// SIG undefined FUN_1489f704c(void)

void FUN_1489f704c(int param_1)

{
  if (*(longlong *)(DAT_14cb91a90 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1489f6c90(param_1);
  return;
}



// FUNCTION 1489f707c FUN_1489f707c body=31 status=ok
// SIG undefined FUN_1489f707c(void)

undefined8 FUN_1489f707c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f70b8 FUN_1489f70b8 body=93 status=ok
// SIG undefined FUN_1489f70b8(void)

void FUN_1489f70b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b466030;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f7116 FUN_1489f7116 body=126 status=ok
// SIG undefined FUN_1489f7116(void)

void FUN_1489f7116(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b466030;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f7185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f7194 FUN_1489f7194 body=21 status=ok
// SIG undefined FUN_1489f7194(void)

undefined8 FUN_1489f7194(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489f71aa FUN_1489f71aa body=29 status=ok
// SIG undefined FUN_1489f71aa(void)

undefined8 FUN_1489f71aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f71e2 FUN_1489f71e2 body=29 status=ok
// SIG undefined FUN_1489f71e2(void)

bool FUN_1489f71e2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489f7200 FUN_1489f7200 body=26 status=ok
// SIG undefined FUN_1489f7200(void)

bool FUN_1489f7200(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489f721a FUN_1489f721a body=24 status=ok
// SIG undefined FUN_1489f721a(void)

bool FUN_1489f721a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489f7232 FUN_1489f7232 body=93 status=ok
// SIG undefined FUN_1489f7232(void)

void FUN_1489f7232(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4660e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f7290 FUN_1489f7290 body=93 status=ok
// SIG undefined FUN_1489f7290(void)

void FUN_1489f7290(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4660e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f72ee FUN_1489f72ee body=126 status=ok
// SIG undefined FUN_1489f72ee(void)

void FUN_1489f72ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4660e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f735d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f736c FUN_1489f736c body=35 status=ok
// SIG undefined FUN_1489f736c(void)

void FUN_1489f736c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489f738b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1489f7390 FUN_1489f7390 body=142 status=ok
// SIG undefined FUN_1489f7390(void)

bool FUN_1489f7390(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 1489f7420 FUN_1489f7420 body=29 status=ok
// SIG undefined FUN_1489f7420(void)

undefined8 FUN_1489f7420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f7458 FUN_1489f7458 body=29 status=ok
// SIG undefined FUN_1489f7458(void)

bool FUN_1489f7458(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489f7476 FUN_1489f7476 body=26 status=ok
// SIG undefined FUN_1489f7476(void)

bool FUN_1489f7476(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489f7490 FUN_1489f7490 body=24 status=ok
// SIG undefined FUN_1489f7490(void)

bool FUN_1489f7490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489f74a8 FUN_1489f74a8 body=93 status=ok
// SIG undefined FUN_1489f74a8(void)

void FUN_1489f74a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b466150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f7506 FUN_1489f7506 body=93 status=ok
// SIG undefined FUN_1489f7506(void)

void FUN_1489f7506(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b466150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489f7564 FUN_1489f7564 body=126 status=ok
// SIG undefined FUN_1489f7564(void)

void FUN_1489f7564(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b466150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489f75d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489f75e2 FUN_1489f75e2 body=35 status=ok
// SIG undefined FUN_1489f75e2(void)

void FUN_1489f75e2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489f7601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1489f7606 FUN_1489f7606 body=142 status=ok
// SIG undefined FUN_1489f7606(void)

bool FUN_1489f7606(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 1489f7696 FUN_1489f7696 body=76 status=ok
// SIG undefined FUN_1489f7696(void)

void FUN_1489f7696(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b82bf6();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1489f76aa;
    }
  }
  lVar2 = 0;
LAB_1489f76aa:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1489f76e2 FUN_1489f76e2 body=125 status=ok
// SIG undefined FUN_1489f76e2(void)

int FUN_1489f76e2(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_1489f7760(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1489f7796(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 1489f7760 FUN_1489f7760 body=53 status=ok
// SIG undefined FUN_1489f7760(void)

ulonglong FUN_1489f7760(int *param_1,int *param_2)

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



// FUNCTION 1489f7796 FUN_1489f7796 body=132 status=ok
// SIG undefined FUN_1489f7796(void)

void FUN_1489f7796(longlong param_1,int param_2)

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



// FUNCTION 1489f781c FUN_1489f781c body=270 status=ok
// SIG undefined FUN_1489f781c(void)

int FUN_1489f781c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar14 = (longlong)(int)uVar1;
  iVar13 = 0;
  if (lVar14 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_1489f7760(lVar2,*param_2);
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar11 = (ulonglong)uVar7;
      uVar3 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar8 = uVar7;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar3;
        if (lVar14 <= (longlong)uVar6) break;
        bVar5 = FUN_1489f7760(lVar12,*param_2);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 8;
        uVar9 = uVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar10 != uVar7) {
          memmove((void *)(lVar2 + (longlong)(int)uVar10 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar10 = uVar10 + (uVar9 - uVar7);
      }
      uVar7 = uVar9;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar14);
    *(uint *)(param_1 + 1) = uVar10;
    iVar13 = uVar1 - uVar10;
  }
  return iVar13;
}



// FUNCTION 1489f792a FUN_1489f792a body=116 status=ok
// SIG undefined FUN_1489f792a(void)

void FUN_1489f792a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1489f799e FUN_1489f799e body=68 status=ok
// SIG undefined FUN_1489f799e(void)

void FUN_1489f799e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1489f79e2();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1489f79e2 FUN_1489f79e2 body=322 status=ok
// SIG undefined FUN_1489f79e2(void)

void FUN_1489f79e2(longlong *param_1)

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



// FUNCTION 1489f7b26 FUN_1489f7b26 body=114 status=ok
// SIG undefined FUN_1489f7b26(void)

void FUN_1489f7b26(longlong *param_1,int param_2)

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



// FUNCTION 1489f7ba0 FUN_1489f7ba0 body=387 status=ok
// SIG undefined FUN_1489f7ba0(void)

void FUN_1489f7ba0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined8 local_d0;
  longlong lStack_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1489f439a();
  if ((int)param_1[9] != 0) {
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0;
    FUN_1446efa72(&local_f8,0,3,0x10);
    puVar1 = local_f8;
    local_f0 = 3;
    *local_f8 = &PTR_LAB_149e020b0;
    uVar2 = FUN_144a3f946();
    puVar1[2] = uVar2;
    *puVar1 = &PTR_FUN_14b467760;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3);
    puVar1[4] = &DAT_1489f7d24;
    memset(local_e8,0,0xa0);
    FUN_144a7a8f6(local_e8);
    FUN_144a7a8f6(local_dc);
    local_b8 = (longlong *)0x0;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_d0 = 0;
    lStack_c8 = 0;
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    local_108 = &local_f8;
    FUN_1411cff2e(param_1 + 10,param_1 + 8,uVar2,local_e8);
    if (local_88 != 0) {
      plVar3 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar3 = local_68;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (lStack_c8 != 0) {
      plVar3 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar3 = local_a8;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    FUN_1449db362(&local_f8);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489f7d26 FUN_1489f7d26 body=30 status=ok
// SIG undefined FUN_1489f7d26(void)

void FUN_1489f7d26(longlong param_1)

{
  FUN_1408256d2(param_1 + 0x50);
  FUN_1489f43c4(param_1);
  return;
}



// FUNCTION 1489f7d44 FUN_1489f7d44 body=45 status=ok
// SIG undefined FUN_1489f7d44(void)

undefined8 FUN_1489f7d44(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143d3798a(param_1 + 0x50);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_140a262da(param_1 + 0x50);
  return uVar2;
}



// FUNCTION 1489f7dc0 FUN_1489f7dc0 body=62 status=ok
// SIG undefined FUN_1489f7dc0(void)

undefined1 FUN_1489f7dc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_141289ada(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1489f7e26 FUN_1489f7e26 body=59 status=ok
// SIG undefined FUN_1489f7e26(void)

undefined8 FUN_1489f7e26(longlong *param_1)

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



// FUNCTION 1489f7e6c FUN_1489f7e6c body=43 status=ok
// SIG undefined FUN_1489f7e6c(void)

void FUN_1489f7e6c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1489f7ede FUN_1489f7ede body=52 status=ok
// SIG undefined FUN_1489f7ede(void)

undefined8 * FUN_1489f7ede(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489f7f12 FUN_1489f7f12 body=57 status=ok
// SIG undefined FUN_1489f7f12(void)

void FUN_1489f7f12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91e98 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91e98 = FUN_140002ddd(FUN_14656b4fb,uVar1,L"GbxUIDisplayDataDef");
  }
  return;
}



// FUNCTION 1489f7f82 FUN_1489f7f82 body=54 status=ok
// SIG undefined FUN_1489f7f82(void)

undefined1 FUN_1489f7f82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1489f7fe0 FUN_1489f7fe0 body=59 status=ok
// SIG undefined FUN_1489f7fe0(void)

undefined8 FUN_1489f7fe0(longlong *param_1)

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



// FUNCTION 1489f8026 FUN_1489f8026 body=32 status=ok
// SIG undefined FUN_1489f8026(void)

void FUN_1489f8026(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1489f8080 FUN_1489f8080 body=85 status=ok
// SIG undefined FUN_1489f8080(void)

longlong FUN_1489f8080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}


