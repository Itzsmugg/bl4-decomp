// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f94dfd FUN_146f94dfd body=696 status=ok
// SIG undefined FUN_146f94dfd(void)

longlong * FUN_146f94dfd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x58,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x58);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x58);
        FUN_146f80dda(param_1,lVar5 + (longlong)iVar8 * 0x58 + 8);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f950b6(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f9521a(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 1;
        local_a8[2] = &DAT_100000002;
        local_a8[3] = 0;
        local_a8[1] = &PTR_FUN_149fa7810;
        local_a8[7] = 0;
        local_a8[8] = 0x100000000;
        *(undefined4 *)(local_a8 + 10) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f80dda(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f950b6 FUN_146f950b6 body=353 status=ok
// SIG undefined FUN_146f950b6(void)

void FUN_146f950b6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_14583903a(*local_70 + (longlong)iStack_54 * 0x58 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e91948(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f9521a FUN_146f9521a body=226 status=ok
// SIG undefined FUN_146f9521a(void)

int * FUN_146f9521a(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 146f952fc FUN_146f952fc body=473 status=ok
// SIG undefined FUN_146f952fc(void)

void FUN_146f952fc(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146f954d6 FUN_146f954d6 body=75 status=ok
// SIG undefined FUN_146f954d6(void)

longlong FUN_146f954d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_14583906e(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f80b92(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f95522 FUN_146f95522 body=54 status=ok
// SIG undefined FUN_146f95522(void)

void FUN_146f95522(longlong *param_1)

{
  FUN_146f950b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f95558 FUN_146f95558 body=131 status=ok
// SIG undefined FUN_146f95558(void)

longlong FUN_146f95558(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f955db();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146f95ada(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f955db FUN_146f955db body=696 status=ok
// SIG undefined FUN_146f955db(void)

longlong * FUN_146f955db(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x58,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x58);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x58);
        FUN_146f838b8(param_1,lVar5 + (longlong)iVar8 * 0x58 + 8);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f95894(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f959f8(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 1;
        local_a8[2] = &DAT_100000003;
        local_a8[3] = 0;
        local_a8[1] = &PTR_FUN_149fa7930;
        local_a8[7] = 0;
        local_a8[8] = 0x100000000;
        *(undefined4 *)(local_a8 + 10) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f838b8(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f95894 FUN_146f95894 body=353 status=ok
// SIG undefined FUN_146f95894(void)

void FUN_146f95894(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_146f83536(*local_70 + (longlong)iStack_54 * 0x58 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e91948(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f959f8 FUN_146f959f8 body=226 status=ok
// SIG undefined FUN_146f959f8(void)

int * FUN_146f959f8(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 146f95ada FUN_146f95ada body=473 status=ok
// SIG undefined FUN_146f95ada(void)

void FUN_146f95ada(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146f95cb4 FUN_146f95cb4 body=374 status=ok
// SIG undefined FUN_146f95cb4(void)

longlong *
FUN_146f95cb4(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar6 == param_3) {
          if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
            plVar1 = (longlong *)*plVar6;
            if (((int)plVar1[1] == 3) && (*(int *)((longlong)plVar1 + 0xc) == 1)) {
              (**(code **)(*plVar1 + 0x70))(plVar1,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_146f95d7f;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_146f95e2c(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar2 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar2 + (longlong)local_34 * 0x18 + 8);
LAB_146f95d7f:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f95e2c FUN_146f95e2c body=248 status=ok
// SIG undefined FUN_146f95e2c(void)

longlong *
FUN_146f95e2c(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 3;
  if (param_6 < 1) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa79c0;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    *(undefined4 *)(puVar2 + 8) = *param_3;
    FUN_146f8447a(puVar2,param_2);
  }
  else {
    *(int *)((longlong)puVar2 + 0xc) = param_6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7930;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    *(undefined4 *)(puVar2 + 8) = *param_3;
    FUN_146f83390(puVar2,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 146f95f24 FUN_146f95f24 body=75 status=ok
// SIG undefined FUN_146f95f24(void)

longlong FUN_146f95f24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_146f8356b(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f83596(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f95f70 FUN_146f95f70 body=54 status=ok
// SIG undefined FUN_146f95f70(void)

void FUN_146f95f70(longlong *param_1)

{
  FUN_146f95894(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f95fa6 FUN_146f95fa6 body=131 status=ok
// SIG undefined FUN_146f95fa6(void)

longlong FUN_146f95fa6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f96029();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146f96528(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f96029 FUN_146f96029 body=696 status=ok
// SIG undefined FUN_146f96029(void)

longlong * FUN_146f96029(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x58,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x58);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x58);
        FUN_146f86366(param_1,lVar5 + (longlong)iVar8 * 0x58 + 8);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f962e2(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f96446(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 1;
        local_a8[2] = &DAT_100000004;
        local_a8[3] = 0;
        local_a8[1] = &PTR_FUN_149fa7a50;
        local_a8[7] = 0;
        local_a8[8] = 0x100000000;
        *(undefined4 *)(local_a8 + 10) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f86366(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f962e2 FUN_146f962e2 body=353 status=ok
// SIG undefined FUN_146f962e2(void)

void FUN_146f962e2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1411db80e(*local_70 + (longlong)iStack_54 * 0x58 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e91948(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f96446 FUN_146f96446 body=226 status=ok
// SIG undefined FUN_146f96446(void)

int * FUN_146f96446(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 146f96528 FUN_146f96528 body=473 status=ok
// SIG undefined FUN_146f96528(void)

void FUN_146f96528(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146f96702 FUN_146f96702 body=396 status=ok
// SIG undefined FUN_146f96702(void)

longlong *
FUN_146f96702(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == param_3) {
          plVar6 = plVar3 + 1;
          if (plVar6 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            plVar3 = (longlong *)*plVar6;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_146f967ad;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_1412e701c(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar1 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar1 + (longlong)local_34 * 0x18 + 8);
LAB_146f967ad:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f96890 FUN_146f96890 body=75 status=ok
// SIG undefined FUN_146f96890(void)

longlong FUN_146f96890(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_1411db842(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f86054(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f968dc FUN_146f968dc body=54 status=ok
// SIG undefined FUN_146f968dc(void)

void FUN_146f968dc(longlong *param_1)

{
  FUN_146f962e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f96912 FUN_146f96912 body=131 status=ok
// SIG undefined FUN_146f96912(void)

longlong FUN_146f96912(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f96995();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146f96e94(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f96995 FUN_146f96995 body=696 status=ok
// SIG undefined FUN_146f96995(void)

longlong * FUN_146f96995(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x58,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x58);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x58);
        FUN_146f88e78(param_1,lVar5 + (longlong)iVar8 * 0x58 + 8);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f96c4e(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f96db2(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 1;
        local_a8[2] = 0x100000005;
        local_a8[3] = 0;
        local_a8[1] = &PTR_FUN_149fa7b70;
        local_a8[7] = 0;
        local_a8[8] = 0x100000000;
        *(undefined4 *)(local_a8 + 10) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f88e78(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f96c4e FUN_146f96c4e body=353 status=ok
// SIG undefined FUN_146f96c4e(void)

void FUN_146f96c4e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_146f88bd4(*local_70 + (longlong)iStack_54 * 0x58 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e91948(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f96db2 FUN_146f96db2 body=226 status=ok
// SIG undefined FUN_146f96db2(void)

int * FUN_146f96db2(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 146f96e94 FUN_146f96e94 body=473 status=ok
// SIG undefined FUN_146f96e94(void)

void FUN_146f96e94(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146f9706e FUN_146f9706e body=374 status=ok
// SIG undefined FUN_146f9706e(void)

longlong *
FUN_146f9706e(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar6 == param_3) {
          if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
            plVar1 = (longlong *)*plVar6;
            if (((int)plVar1[1] == 5) && (*(int *)((longlong)plVar1 + 0xc) == 1)) {
              (**(code **)(*plVar1 + 0x70))(plVar1,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_146f97139;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_146f971e6(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar2 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar2 + (longlong)local_34 * 0x18 + 8);
LAB_146f97139:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f971e6 FUN_146f971e6 body=240 status=ok
// SIG undefined FUN_146f971e6(void)

longlong *
FUN_146f971e6(longlong *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 5;
  if (param_6 < 1) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7c00;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    *(undefined1 *)(puVar2 + 8) = *param_3;
    FUN_146f89a6c(puVar2,param_2);
  }
  else {
    *(int *)((longlong)puVar2 + 0xc) = param_6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7b70;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    *(undefined1 *)(puVar2 + 8) = *param_3;
    FUN_146f88a2e(puVar2,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 146f972d6 FUN_146f972d6 body=75 status=ok
// SIG undefined FUN_146f972d6(void)

longlong FUN_146f972d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_146f88c09(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f88c34(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f97322 FUN_146f97322 body=54 status=ok
// SIG undefined FUN_146f97322(void)

void FUN_146f97322(longlong *param_1)

{
  FUN_146f96c4e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f97358 FUN_146f97358 body=131 status=ok
// SIG undefined FUN_146f97358(void)

longlong FUN_146f97358(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f973db();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_146f978e4(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f973db FUN_146f973db body=706 status=ok
// SIG undefined FUN_146f973db(void)

longlong * FUN_146f973db(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x58,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x58);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = (undefined8 *)&DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar7 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar8 = local_98._4_4_;
      local_98 = uVar7;
      do {
        lVar5 = *local_b0;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x58);
        FUN_146f8baf6(param_1,lVar5 + (longlong)iVar8 * 0x58 + 8);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar8 = local_98._4_4_;
        uVar7 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined8 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_146f9769e(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar7 = local_98;
    if (0 < (int)local_80) {
      iVar8 = 0;
      do {
        FUN_146f97802(param_2,&local_b0);
        *local_a8 = 0;
        puVar3 = local_a8 + 1;
        local_a8[2] = 0x100000006;
        local_a8[3] = 0;
        local_a8[1] = &PTR_FUN_149fa7c90;
        local_a8[7] = 0;
        local_a8[8] = 0x100000000;
        local_a8[9] = 0;
        *(undefined4 *)(local_a8 + 10) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f8baf6(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_98;
      } while (iVar8 < (int)local_80);
    }
  }
  local_98 = uVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9769e FUN_146f9769e body=353 status=ok
// SIG undefined FUN_146f9769e(void)

void FUN_146f9769e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_146f8b7a4(*local_70 + (longlong)iStack_54 * 0x58 + 0x20);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e91948(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f97802 FUN_146f97802 body=226 status=ok
// SIG undefined FUN_146f97802(void)

int * FUN_146f97802(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 146f978e4 FUN_146f978e4 body=473 status=ok
// SIG undefined FUN_146f978e4(void)

void FUN_146f978e4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 146f97abe FUN_146f97abe body=374 status=ok
// SIG undefined FUN_146f97abe(void)

longlong *
FUN_146f97abe(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar4 = (uint)param_3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar4) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar6 == param_3) {
          if ((plVar6 != (longlong *)0x0) && (plVar6 = plVar6 + 1, plVar6 != (longlong *)0x0)) {
            plVar1 = (longlong *)*plVar6;
            if (((int)plVar1[1] == 6) && (*(int *)((longlong)plVar1 + 0xc) == 1)) {
              (**(code **)(*plVar1 + 0x70))(plVar1,param_4);
              *(undefined4 *)(*plVar6 + 0x14) = param_6;
              goto LAB_146f97b89;
            }
            FUN_146f91306(param_1,param_3);
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  local_68 = (undefined4)param_1[10];
  local_60 = 1;
  FUN_146f97c36(&local_58,param_4,param_5,param_6);
  local_48 = &local_50;
  local_40 = &local_58;
  FUN_1412e71e2(param_1,&local_34,&local_48,0);
  lVar2 = *param_1;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  plVar6 = (longlong *)(lVar2 + (longlong)local_34 * 0x18 + 8);
LAB_146f97b89:
  *param_2 = *plVar6;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f97c36 FUN_146f97c36 body=261 status=ok
// SIG undefined FUN_146f97c36(void)

longlong *
FUN_146f97c36(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  if (param_6 < 1) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar2[1] = 6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7d20;
    puVar2[7] = 0;
    puVar2[8] = 0x100000000;
    puVar2[9] = *param_3;
    FUN_146f8c63c(puVar2,param_2);
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *(undefined4 *)(puVar2 + 1) = 6;
    *(int *)((longlong)puVar2 + 0xc) = param_6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7c90;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    puVar2[8] = *param_3;
    FUN_146f8b5fe(puVar2,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 146f97d3c FUN_146f97d3c body=75 status=ok
// SIG undefined FUN_146f97d3c(void)

longlong FUN_146f97d3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1;
    }
    FUN_146f8b7d9(lVar1,*(undefined4 *)(param_1 + 0x20));
    lVar1 = *(longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      lVar1 = param_2;
    }
    FUN_146f8b804(param_1,lVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}



// FUNCTION 146f97d88 FUN_146f97d88 body=54 status=ok
// SIG undefined FUN_146f97d88(void)

void FUN_146f97d88(longlong *param_1)

{
  FUN_146f9769e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f97dbe FUN_146f97dbe body=52 status=ok
// SIG undefined FUN_146f97dbe(void)

void FUN_146f97dbe(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f97df2 FUN_146f97df2 body=132 status=ok
// SIG undefined FUN_146f97df2(void)

void FUN_146f97df2(longlong param_1,int param_2)

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



// FUNCTION 146f97e78 FUN_146f97e78 body=129 status=ok
// SIG undefined FUN_146f97e78(void)

longlong FUN_146f97e78(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f97ef9();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1412e75ea(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f97ef9 FUN_146f97ef9 body=651 status=ok
// SIG undefined FUN_146f97ef9(void)

longlong * FUN_146f97ef9(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar8 * 0x18);
        FUN_146f6a421(param_1,lVar5 + (longlong)iVar8 * 0x18 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1411db5e4(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1412e740e(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1);
        FUN_146f6a421(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f98186 FUN_146f98186 body=348 status=ok
// SIG undefined FUN_146f98186(void)

undefined4 * FUN_146f98186(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e740e(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  local_38[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar2 = *local_38;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_1412e734e(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1412e75ea(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f982e4 FUN_146f982e4 body=370 status=ok
// SIG undefined FUN_146f982e4(void)

undefined4 * FUN_146f982e4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412e740e(param_1,local_38);
  plVar1 = (longlong *)param_3[1];
  uVar8 = *(undefined8 *)*param_3;
  *local_30 = uVar8;
  if ((longlong *)*plVar1 == (longlong *)0x0) {
    local_30[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)*plVar1 + 8))();
    uVar8 = *local_30;
  }
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  local_3c = local_38[0];
  uVar7 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar4 = (uint)uVar8 & 0xffff;
  uVar7 = ((uint)uVar8 << 0x10 | uVar4) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_48 = 0;
  cVar2 = FUN_1412e734e(param_1,uVar7,local_30);
  if (cVar2 == '\0') {
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
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_30 + 0x14) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_30 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_3c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1412e75ea(param_1);
    }
  }
  *param_2 = local_3c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f98458 FUN_146f98458 body=41 status=ok
// SIG undefined FUN_146f98458(void)

void FUN_146f98458(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146f98482();
  return;
}



// FUNCTION 146f98482 FUN_146f98482 body=96 status=ok
// SIG undefined FUN_146f98482(void)

void FUN_146f98482(longlong param_1,int param_2)

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



// FUNCTION 146f984e2 FUN_146f984e2 body=132 status=ok
// SIG undefined FUN_146f984e2(void)

void FUN_146f984e2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f98568 FUN_146f98568 body=41 status=ok
// SIG undefined FUN_146f98568(void)

void FUN_146f98568(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146f98592();
  return;
}



// FUNCTION 146f98592 FUN_146f98592 body=96 status=ok
// SIG undefined FUN_146f98592(void)

void FUN_146f98592(longlong param_1,int param_2)

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



// FUNCTION 146f985f2 FUN_146f985f2 body=101 status=ok
// SIG undefined FUN_146f985f2(void)

ulonglong FUN_146f985f2(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_146f98635;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f98658(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_146f98635:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146f98658 FUN_146f98658 body=132 status=ok
// SIG undefined FUN_146f98658(void)

void FUN_146f98658(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f986de FUN_146f986de body=98 status=ok
// SIG undefined FUN_146f986de(void)

void FUN_146f986de(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146f98740 FUN_146f98740 body=98 status=ok
// SIG undefined FUN_146f98740(void)

void FUN_146f98740(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146f987a2 FUN_146f987a2 body=41 status=ok
// SIG undefined FUN_146f987a2(void)

void FUN_146f987a2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146f9d792();
  return;
}



// FUNCTION 146f987cc FUN_146f987cc body=612 status=ok
// SIG undefined FUN_146f987cc(void)

void FUN_146f987cc(longlong param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  void *pvVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  int local_80;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146f716d6(param_1 + 0x218,local_88,param_2,0);
  FUN_146f98a32(param_3,local_80 + 2);
  FUN_146f716d6(param_1 + 0x218,&local_98,param_2,0);
  if (iStack_90 == 1) {
    uVar1 = *(uint *)CONCAT44(uStack_94,local_98);
    iVar8 = *(int *)(param_1 + 0xc0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    if (iVar8 == 0) {
      plVar7 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar7);
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)(uVar1 & 0xff) * 4 + 0x410);
      iVar3 = *(int *)((longlong)plVar7 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
    }
    else {
      iVar3 = uVar1 * (int)plVar7[2];
    }
    lVar4 = *plVar7;
    *(int *)((longlong)param_3 + 0x48) = iVar8;
    if (*(int *)((longlong)param_3 + 0x4c) == 0 && iVar8 == 0) {
      *(undefined4 *)((longlong)param_3 + 0x4c) = 0x10;
    }
    else {
      FUN_146f98c0e(param_3,iVar8);
      if (iVar8 != 0) {
        pvVar6 = *(void **)((longlong)param_3 + 0x40);
        if (*(void **)((longlong)param_3 + 0x40) == (void *)0x0) {
          pvVar6 = param_3;
        }
        memcpy(pvVar6,(void *)((longlong)iVar3 * 4 + lVar4),(longlong)iVar8 << 2);
      }
    }
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x800000000;
    FUN_146f9249a(local_88,iStack_90 + 2,1);
    local_a8 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      local_a8 = local_88;
    }
    local_a0 = (int)local_40;
    local_b8 = local_98;
    uStack_b4 = uStack_94;
    iStack_b0 = iStack_90;
    uStack_ac = uStack_8c;
    FUN_146f72002(param_1);
    if (0 < (int)local_40) {
      lVar4 = 0;
      do {
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_88;
        }
        uVar1 = *(uint *)(CONCAT44(uStack_94,local_98) + (longlong)*(int *)(puVar5 + lVar4 * 8) * 4)
        ;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar7 = plVar2;
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          plVar7 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar7);
          iVar8 = *(int *)((longlong)plVar7 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
        }
        else {
          iVar8 = uVar1 * (int)plVar7[2];
        }
        pvVar6 = *(void **)((longlong)param_3 + 0x40);
        if (*(void **)((longlong)param_3 + 0x40) == (void *)0x0) {
          pvVar6 = param_3;
        }
        *(undefined4 *)((longlong)pvVar6 + lVar4 * 4) =
             *(undefined4 *)
              ((longlong)iVar8 * 4 + *plVar7 + (longlong)*(int *)(puVar5 + lVar4 * 8 + 4) * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)local_40);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f98a32 FUN_146f98a32 body=71 status=ok
// SIG undefined FUN_146f98a32(void)

void FUN_146f98a32(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f98a7a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x48) = param_2;
      FUN_146f98b6e();
      return;
    }
  }
  return;
}



// FUNCTION 146f98a7a FUN_146f98a7a body=110 status=ok
// SIG undefined FUN_146f98a7a(void)

void FUN_146f98a7a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_146f98aea(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f98aea FUN_146f98aea body=132 status=ok
// SIG undefined FUN_146f98aea(void)

void FUN_146f98aea(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,4);
  return;
}



// FUNCTION 146f98b6e FUN_146f98b6e body=52 status=ok
// SIG undefined FUN_146f98b6e(void)

void FUN_146f98b6e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f98ba2(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_146f98aea(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 146f98ba2 FUN_146f98ba2 body=108 status=ok
// SIG undefined FUN_146f98ba2(void)

ulonglong FUN_146f98ba2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f98c0e FUN_146f98c0e body=95 status=ok
// SIG undefined FUN_146f98c0e(void)

void FUN_146f98c0e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146f98aea(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 146f98c6e FUN_146f98c6e body=138 status=ok
// SIG undefined FUN_146f98c6e(void)

void FUN_146f98c6e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f98cf8 FUN_146f98cf8 body=129 status=ok
// SIG undefined FUN_146f98cf8(void)

longlong FUN_146f98cf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_146f98d79();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1412e789a(param_2);
    }
  }
  return param_1;
}



// FUNCTION 146f98d79 FUN_146f98d79 body=650 status=ok
// SIG undefined FUN_146f98d79(void)

longlong * FUN_146f98d79(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar7 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar8 = local_68._4_4_;
      local_68 = uVar7;
      do {
        lVar3 = *local_80 + (longlong)iVar8 * 0x18;
        (**(code **)(*param_1 + 0x160))(param_1,lVar3);
        FUN_146f99004(param_1,*(undefined8 *)(lVar3 + 8));
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar7 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1411db320(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar7 = local_68;
    if (0 < (int)local_50) {
      iVar8 = 0;
      do {
        FUN_1412e6e32(param_2,&local_80);
        puVar5 = local_78;
        *local_78 = 0;
        FUN_1412e6c00(local_78 + 1,1);
        *(undefined4 *)(puVar5 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1,puVar5);
        FUN_146f99004(param_1,puVar5[1]);
        iVar8 = iVar8 + 1;
        uVar7 = local_68;
      } while (iVar8 < (int)local_50);
    }
  }
  local_68 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f99004 FUN_146f99004 body=351 status=ok
// SIG undefined FUN_146f99004(void)

longlong * FUN_146f99004(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x88) << 7,(longlong)*(int *)(param_2 + 0x8c) << 7
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x88);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f99164(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x20000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x88) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x80);
      if (*(longlong *)(param_2 + 0x80) == 0) {
        lVar4 = param_2;
      }
      FUN_146f991b1(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x80;
    } while (lVar7 < *(int *)(param_2 + 0x88));
  }
  else {
    FUN_146f99164(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_146f99222(param_2);
        FUN_146f991b1(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f99164 FUN_146f99164 body=77 status=ok
// SIG undefined FUN_146f99164(void)

void FUN_146f99164(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_1411db55b(lVar1,*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) == param_2) {
    return;
  }
  FUN_146f9927c(param_1,param_2);
  return;
}



// FUNCTION 146f991b1 FUN_146f991b1 body=113 status=ok
// SIG undefined FUN_146f991b1(void)

void FUN_146f991b1(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_146897be2(param_2,param_1);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x78),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x78) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_146f6a682(param_1,param_2 + 0x20);
  return;
}



// FUNCTION 146f99222 FUN_146f99222 body=89 status=ok
// SIG undefined FUN_146f99222(void)

longlong FUN_146f99222(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_146f92046(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x80 + lVar2;
  FUN_1412e6d16(lVar2,1);
  return lVar2;
}



// FUNCTION 146f9927c FUN_146f9927c body=93 status=ok
// SIG undefined FUN_146f9927c(void)

void FUN_146f9927c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((ulonglong)param_2 << 7,0);
    uVar1 = (uint)(uVar2 >> 7);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x8c)) {
    return;
  }
  *(uint *)(param_1 + 0x8c) = uVar3;
  FUN_146f90f94(param_1,*(undefined4 *)(param_1 + 0x88),uVar3,0x80);
  return;
}



// FUNCTION 146f992d9 FUN_146f992d9 body=982 status=ok
// SIG undefined FUN_146f992d9(void)

longlong * FUN_146f992d9(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  longlong **pplVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong **local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  undefined8 local_98;
  longlong **local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  longlong **local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_90 = (longlong **)0x0;
    local_88 = 0;
    iStack_84 = 0x80;
    FUN_146897be2(&local_a0,param_1);
    FUN_146f91c62(param_2,local_88);
    local_c0 = 0x100000000;
    local_b0 = 0xffffffff;
    iStack_ac = 0;
    local_a8 = 0;
    pplVar6 = local_90;
    local_b8 = &local_a0;
    if ((local_88 != 0) &&
       (FUN_1449c0562(&local_c0), pplVar6 = local_90, iStack_ac < *(int *)(local_b8 + 3))) {
      do {
        local_68 = (longlong **)0x0;
        uStack_60 = 0;
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        FUN_146f996f4(param_2,local_d0);
        FUN_146f99842(local_c8,&local_78);
        FUN_146f996b0(param_1,(longlong)iStack_ac * 0x20 + *param_2);
        local_b0 = local_b0 & ~local_c0._4_4_;
        FUN_1449c0562(&local_c0);
        pplVar6 = local_90;
      } while (iStack_ac < *(int *)(local_b8 + 3));
    }
    goto LAB_146f9955f;
  }
  uVar2 = *(uint *)(param_2 + 1);
  local_68 = (longlong **)0x0;
  uStack_60 = CONCAT44(0x80,uVar2);
  uVar9 = uVar2 + 0x1f;
  iVar7 = 1;
  if (0x1f < uVar9) {
    if (uVar9 < 0xa0) {
      pplVar6 = &local_78;
LAB_146f995ff:
      uVar9 = uVar9 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_78,0,uVar9 >> 5,4);
      uStack_60 = CONCAT44(uVar9,(int)uStack_60) & 0xffffffe0ffffffff;
      pplVar6 = local_68;
      if (local_68 == (longlong **)0x0) {
        pplVar6 = &local_78;
      }
      if (uVar9 < 0x120) goto LAB_146f995ff;
      uVar9 = (uVar9 >> 5) << 2;
    }
    memset(pplVar6,0,(ulonglong)uVar9);
    iVar3 = (int)uStack_60 + 0x1f;
    if (-1 < (int)uStack_60) {
      iVar3 = (int)uStack_60;
    }
    if ((int)uStack_60 % 0x20 != 0) {
      pplVar6 = local_68;
      if (local_68 == (longlong **)0x0) {
        pplVar6 = &local_78;
      }
      bVar4 = -(char)((int)uStack_60 % 0x20);
      *(uint *)((longlong)pplVar6 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)pplVar6 + (longlong)(iVar3 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
    if (0 < (int)uVar2) {
      uVar5 = 0;
      uVar9 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
        {
          pplVar6 = local_68;
          if (local_68 == (longlong **)0x0) {
            pplVar6 = &local_78;
          }
          puVar1 = (uint *)((longlong)pplVar6 + (ulonglong)(uVar5 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
          uVar9 = uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
      iVar7 = uVar9 + 1;
    }
  }
  FUN_144a686e6(&local_78,iVar7);
  FUN_146897be2(&local_78,param_1);
  local_b8 = (longlong **)(param_2 + 2);
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  local_a8 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_c0);
  }
  local_98 = local_c0;
  local_90 = local_b8;
  local_88 = local_b0;
  iStack_84 = iStack_ac;
  local_80 = local_a8;
  local_7c = local_a4;
  pplVar6 = local_68;
  local_a0 = param_2;
  if (iStack_ac < *(int *)(local_b8 + 3)) {
    do {
      FUN_146f996b0(param_1,(longlong)iStack_84 * 0x20 + *local_a0);
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      pplVar6 = local_68;
    } while (iStack_84 < *(int *)(local_90 + 3));
  }
LAB_146f9955f:
  if (pplVar6 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f996b0 FUN_146f996b0 body=67 status=ok
// SIG undefined FUN_146f996b0(void)

undefined8 FUN_146f996b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_1448332aa(param_1,&DAT_149e31250);
  if (iVar1 < 0x11) {
    FUN_146f998e0(param_1,param_2);
    FUN_146f99b52(param_1,param_2 + 0x10);
  }
  return param_1;
}



// FUNCTION 146f996f4 FUN_146f996f4 body=333 status=ok
// SIG undefined FUN_146f996f4(void)

int * FUN_146f996f4(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1447711aa(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x20) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x20) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x20) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x20;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x20) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x20) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 146f99842 FUN_146f99842 body=158 status=ok
// SIG undefined FUN_146f99842(void)

undefined8 * FUN_146f99842(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f92612(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146f98740(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 146f998e0 FUN_146f998e0 body=362 status=ok
// SIG undefined FUN_146f998e0(void)

longlong * FUN_146f998e0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146f99ade(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f99a4b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146f99ade(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f99a9e(param_2);
        FUN_146f99a4b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f99a4b FUN_146f99a4b body=82 status=ok
// SIG undefined FUN_146f99a4b(void)

longlong * FUN_146f99a4b(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 146f99a9e FUN_146f99a9e body=64 status=ok
// SIG undefined FUN_146f99a9e(void)

longlong FUN_146f99a9e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f924ea(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_146f99b3e(lVar2,1);
  return lVar2;
}



// FUNCTION 146f99ade FUN_146f99ade body=96 status=ok
// SIG undefined FUN_146f99ade(void)

void FUN_146f99ade(longlong param_1,int param_2)

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



// FUNCTION 146f99b3e FUN_146f99b3e body=19 status=ok
// SIG undefined FUN_146f99b3e(void)

void FUN_146f99b3e(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 146f99b52 FUN_146f99b52 body=362 status=ok
// SIG undefined FUN_146f99b52(void)

longlong * FUN_146f99b52(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146f9d792(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f99a4b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146f9d792(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f99cbe(param_2);
        FUN_146f99a4b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f99cbe FUN_146f99cbe body=59 status=ok
// SIG undefined FUN_146f99cbe(void)

longlong FUN_146f99cbe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f99d00(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_146f99cf9(lVar2);
  return lVar2;
}



// FUNCTION 146f99cf9 FUN_146f99cf9 body=7 status=ok
// SIG undefined FUN_146f99cf9(void)

void FUN_146f99cf9(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 146f99d00 FUN_146f99d00 body=132 status=ok
// SIG undefined FUN_146f99d00(void)

void FUN_146f99d00(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f99d85 FUN_146f99d85 body=948 status=ok
// SIG undefined FUN_146f99d85(void)

longlong * FUN_146f99d85(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong **local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong **local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong **pplStack_60;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_88 = (longlong **)0x0;
    local_80 = 0;
    iStack_7c = 0x80;
    FUN_146897be2(&local_98,param_1);
    FUN_146f91ac6(param_2,local_80);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    iStack_a4 = 0;
    local_a0 = 0;
    pplVar5 = local_88;
    local_b0 = &local_98;
    if ((local_80 != 0) &&
       (FUN_1449c0562(&local_b8), pplVar5 = local_88, iStack_a4 < *(int *)(local_b0 + 3))) {
      do {
        local_70 = (longlong *)0xffffffff;
        local_68 = 0;
        pplStack_60 = (longlong **)0x0;
        FUN_146f9a13a(param_2,iStack_a4,&local_70);
        FUN_146f9a1e3(param_1,(longlong)iStack_a4 * 0x18 + *param_2);
        local_a8 = local_a8 & ~local_b8._4_4_;
        FUN_1449c0562(&local_b8);
        pplVar5 = local_88;
      } while (iStack_a4 < *(int *)(local_b0 + 3));
    }
    goto LAB_146f99ff8;
  }
  uVar2 = *(uint *)(param_2 + 1);
  pplStack_60 = (longlong **)0x0;
  local_54 = 0x80;
  uVar8 = uVar2 + 0x1f;
  iVar6 = 1;
  local_58 = uVar2;
  if (0x1f < uVar8) {
    if (uVar8 < 0xa0) {
      pplVar5 = &local_70;
LAB_146f9a092:
      uVar8 = uVar8 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_70,0,uVar8 >> 5,4);
      local_54 = uVar8 & 0xffffffe0;
      pplVar5 = pplStack_60;
      if (pplStack_60 == (longlong **)0x0) {
        pplVar5 = &local_70;
      }
      if (uVar8 < 0x120) goto LAB_146f9a092;
      uVar8 = (uVar8 >> 5) << 2;
    }
    memset(pplVar5,0,(ulonglong)uVar8);
    uVar8 = local_58 + 0x1f;
    if (-1 < (int)local_58) {
      uVar8 = local_58;
    }
    if ((int)local_58 % 0x20 != 0) {
      pplVar5 = pplStack_60;
      if (pplStack_60 == (longlong **)0x0) {
        pplVar5 = &local_70;
      }
      bVar3 = -(char)((int)local_58 % 0x20);
      *(uint *)((longlong)pplVar5 + (longlong)((int)uVar8 >> 5) * 4) =
           (uint)(*(int *)((longlong)pplVar5 + (longlong)((int)uVar8 >> 5) * 4) << (bVar3 & 0x1f))
           >> (bVar3 & 0x1f);
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      uVar8 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
        {
          pplVar5 = pplStack_60;
          if (pplStack_60 == (longlong **)0x0) {
            pplVar5 = &local_70;
          }
          puVar1 = (uint *)((longlong)pplVar5 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          uVar8 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      iVar6 = uVar8 + 1;
    }
  }
  FUN_144a686e6(&local_70,iVar6);
  FUN_146897be2(&local_70,param_1);
  local_b0 = (longlong **)(param_2 + 2);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_90 = local_b8;
  local_88 = local_b0;
  local_80 = local_a8;
  iStack_7c = iStack_a4;
  local_78 = local_a0;
  local_74 = local_9c;
  pplVar5 = pplStack_60;
  local_98 = param_2;
  if (iStack_a4 < *(int *)(local_b0 + 3)) {
    do {
      FUN_146f9a1e3(param_1,(longlong)iStack_7c * 0x18 + *local_98);
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
      pplVar5 = pplStack_60;
    } while (iStack_7c < *(int *)(local_88 + 3));
  }
LAB_146f99ff8:
  if (pplVar5 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9a13a FUN_146f9a13a body=147 status=ok
// SIG undefined FUN_146f9a13a(void)

void FUN_146f9a13a(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f9a25a(param_1,local_30,param_2);
  *local_28 = *param_3;
  *(undefined8 *)(local_28 + 2) = 0;
  iVar1 = param_3[4];
  local_28[4] = iVar1;
  if (iVar1 != 0) {
    FUN_146f92816(local_28 + 2,iVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_28[5] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9a1e3 FUN_146f9a1e3 body=118 status=ok
// SIG undefined FUN_146f9a1e3(void)

undefined8 FUN_146f9a1e3(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f99a4b();
  iVar1 = FUN_1448332aa(param_1,&DAT_149e31250);
  if (iVar1 < 0x11) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_146f9a3a8(param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9a25a FUN_146f9a25a body=333 status=ok
// SIG undefined FUN_146f9a25a(void)

int * FUN_146f9a25a(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_14482b872(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x18) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x18) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 0x18);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 0x18);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x18) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146f9a3a8 FUN_146f9a3a8 body=362 status=ok
// SIG undefined FUN_146f9a3a8(void)

longlong * FUN_146f9a3a8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146f98592(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f99a4b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146f98592(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f9a514(param_2);
        FUN_146f99a4b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9a514 FUN_146f9a514 body=59 status=ok
// SIG undefined FUN_146f9a514(void)

longlong FUN_146f9a514(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f98658(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_146f9a54f(lVar2);
  return lVar2;
}



// FUNCTION 146f9a54f FUN_146f9a54f body=7 status=ok
// SIG undefined FUN_146f9a54f(void)

void FUN_146f9a54f(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 146f9a556 FUN_146f9a556 body=985 status=ok
// SIG undefined FUN_146f9a556(void)

longlong * FUN_146f9a556(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong **local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong **local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong **pplStack_60;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_88 = (longlong **)0x0;
    local_80 = 0;
    iStack_7c = 0x80;
    FUN_146897be2(&local_98,param_1);
    FUN_146f9192a(param_2,local_80);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    iStack_a4 = 0;
    local_a0 = 0;
    pplVar5 = local_88;
    local_b0 = &local_98;
    if ((local_80 != 0) &&
       (FUN_1449c0562(&local_b8), pplVar5 = local_88, iStack_a4 < *(int *)(local_b0 + 3))) {
      do {
        local_70 = (longlong *)0xffffffffffffffff;
        local_68 = 0;
        pplStack_60 = (longlong **)0x0;
        FUN_146f9a9ba(param_2,local_c8);
        FUN_146f9ab08(local_c0,&local_70);
        FUN_146f9a930(param_1,(longlong)iStack_a4 * 0x18 + *param_2);
        local_a8 = local_a8 & ~local_b8._4_4_;
        FUN_1449c0562(&local_b8);
        pplVar5 = local_88;
      } while (iStack_a4 < *(int *)(local_b0 + 3));
    }
    goto LAB_146f9a7eb;
  }
  uVar2 = *(uint *)(param_2 + 1);
  pplStack_60 = (longlong **)0x0;
  local_54 = 0x80;
  uVar8 = uVar2 + 0x1f;
  iVar6 = 1;
  local_58 = uVar2;
  if (0x1f < uVar8) {
    if (uVar8 < 0xa0) {
      pplVar5 = &local_70;
LAB_146f9a885:
      uVar8 = uVar8 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_70,0,uVar8 >> 5,4);
      local_54 = uVar8 & 0xffffffe0;
      pplVar5 = pplStack_60;
      if (pplStack_60 == (longlong **)0x0) {
        pplVar5 = &local_70;
      }
      if (uVar8 < 0x120) goto LAB_146f9a885;
      uVar8 = (uVar8 >> 5) << 2;
    }
    memset(pplVar5,0,(ulonglong)uVar8);
    uVar8 = local_58 + 0x1f;
    if (-1 < (int)local_58) {
      uVar8 = local_58;
    }
    if ((int)local_58 % 0x20 != 0) {
      pplVar5 = pplStack_60;
      if (pplStack_60 == (longlong **)0x0) {
        pplVar5 = &local_70;
      }
      bVar3 = -(char)((int)local_58 % 0x20);
      *(uint *)((longlong)pplVar5 + (longlong)((int)uVar8 >> 5) * 4) =
           (uint)(*(int *)((longlong)pplVar5 + (longlong)((int)uVar8 >> 5) * 4) << (bVar3 & 0x1f))
           >> (bVar3 & 0x1f);
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      uVar8 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
        {
          pplVar5 = pplStack_60;
          if (pplStack_60 == (longlong **)0x0) {
            pplVar5 = &local_70;
          }
          puVar1 = (uint *)((longlong)pplVar5 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          uVar8 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      iVar6 = uVar8 + 1;
    }
  }
  FUN_144a686e6(&local_70,iVar6);
  FUN_146897be2(&local_70,param_1);
  local_b0 = (longlong **)(param_2 + 2);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_90 = local_b8;
  local_88 = local_b0;
  local_80 = local_a8;
  iStack_7c = iStack_a4;
  local_78 = local_a0;
  local_74 = local_9c;
  pplVar5 = pplStack_60;
  local_98 = param_2;
  if (iStack_a4 < *(int *)(local_b0 + 3)) {
    do {
      FUN_146f9a930(param_1,(longlong)iStack_7c * 0x18 + *local_98);
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
      pplVar5 = pplStack_60;
    } while (iStack_7c < *(int *)(local_88 + 3));
  }
LAB_146f9a7eb:
  if (pplVar5 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9a930 FUN_146f9a930 body=136 status=ok
// SIG undefined FUN_146f9a930(void)

undefined8 FUN_146f9a930(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f99a4b();
  FUN_146f99a4b(param_1,param_2 + 4);
  iVar1 = FUN_1448332aa(param_1,&DAT_149e31250);
  if (iVar1 < 0x11) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_146f9a3a8(param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9a9ba FUN_146f9a9ba body=333 status=ok
// SIG undefined FUN_146f9a9ba(void)

int * FUN_146f9a9ba(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_14482b872(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x18) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x18) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 0x18);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 0x18);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x18) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x18) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146f9ab08 FUN_146f9ab08 body=103 status=ok
// SIG undefined FUN_146f9ab08(void)

undefined4 * FUN_146f9ab08(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_146f92816(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 146f9ab6f FUN_146f9ab6f body=996 status=ok
// SIG undefined FUN_146f9ab6f(void)

longlong * FUN_146f9ab6f(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 *local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    uStack_54 = 0x80;
    FUN_146897be2(&local_70,param_1);
    FUN_146f916b8(param_2,local_58);
    local_90 = 0x100000000;
    local_80 = (undefined8 *)&DAT_ffffffff;
    local_78 = 0;
    puVar5 = local_60;
    puVar6 = uStack_b0;
    local_88 = &local_70;
    if (local_58 != 0) {
      FUN_1449c0562(&local_90);
      puVar5 = local_60;
      puVar6 = uStack_b0;
      if (local_80._4_4_ < *(int *)(local_88 + 3)) {
        do {
          local_b8 = (longlong *)0x0;
          uStack_b0 = (undefined8 *)0x0;
          local_c8 = (longlong *)0x0;
          uStack_c0 = 0;
          local_a8 = 0xffffffff;
          FUN_146f9b020(param_2,local_a0);
          FUN_146f9b16e(local_98,&local_c8);
          FUN_146f9af54(param_1,(longlong)local_80._4_4_ * 0x28 + *param_2);
          local_80 = (undefined8 *)CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
          FUN_1449c0562(&local_90);
          puVar5 = local_60;
          puVar6 = uStack_b0;
        } while (local_80._4_4_ < *(int *)(local_88 + 3));
      }
    }
    goto LAB_146f9ae15;
  }
  uVar2 = *(uint *)(param_2 + 1);
  local_80 = (undefined8 *)0x0;
  local_74 = 0x80;
  uVar9 = uVar2 + 0x1f;
  iVar7 = 1;
  local_78 = uVar2;
  if (0x1f < uVar9) {
    if (uVar9 < 0xa0) {
      puVar6 = &local_90;
LAB_146f9aeaf:
      uVar9 = uVar9 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_90,0,uVar9 >> 5,4);
      local_74 = uVar9 & 0xffffffe0;
      puVar6 = local_80;
      if (local_80 == (undefined8 *)0x0) {
        puVar6 = &local_90;
      }
      if (uVar9 < 0x120) goto LAB_146f9aeaf;
      uVar9 = (uVar9 >> 5) << 2;
    }
    memset(puVar6,0,(ulonglong)uVar9);
    uVar9 = local_78 + 0x1f;
    if (-1 < (int)local_78) {
      uVar9 = local_78;
    }
    if ((int)local_78 % 0x20 != 0) {
      puVar6 = local_80;
      if (local_80 == (undefined8 *)0x0) {
        puVar6 = &local_90;
      }
      bVar3 = -(char)((int)local_78 % 0x20);
      *(uint *)((longlong)puVar6 + (longlong)((int)uVar9 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar6 + (longlong)((int)uVar9 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      uVar9 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
        {
          puVar6 = local_80;
          if (local_80 == (undefined8 *)0x0) {
            puVar6 = &local_90;
          }
          puVar1 = (uint *)((longlong)puVar6 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          uVar9 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      iVar7 = uVar9 + 1;
    }
  }
  FUN_144a686e6(&local_90,iVar7);
  FUN_146897be2(&local_90,param_1);
  local_68 = param_2 + 2;
  local_70 = 0x100000000;
  local_60 = (undefined8 *)&DAT_ffffffff;
  local_58 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_70);
  }
  uStack_c0 = local_70;
  local_b8 = local_68;
  uStack_b0 = local_60;
  puVar6 = uStack_b0;
  local_a8 = CONCAT44(uStack_54,local_58);
  uStack_b0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
  puVar5 = local_80;
  local_c8 = param_2;
  if (uStack_b0._4_4_ < (int)local_68[3]) {
    iVar7 = uStack_b0._4_4_;
    uStack_b0 = puVar6;
    do {
      FUN_146f9af54(param_1,(longlong)iVar7 * 0x28 + *local_c8);
      uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      FUN_1449c0562(&uStack_c0);
      puVar5 = local_80;
      iVar7 = uStack_b0._4_4_;
      puVar6 = uStack_b0;
    } while (uStack_b0._4_4_ < (int)local_b8[3]);
  }
LAB_146f9ae15:
  uStack_b0 = puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9af54 FUN_146f9af54 body=202 status=ok
// SIG undefined FUN_146f9af54(void)

undefined8 FUN_146f9af54(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f998e0();
  iVar1 = FUN_1448332aa(param_1,&DAT_149e3cc28);
  if (iVar1 < 0x1e) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_146f9b216(param_1,&local_38);
    FUN_146f9b3e7(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = FUN_1448332aa(param_1,&DAT_149e31250);
  if (iVar1 < 0x11) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_146f9b4f8(param_1,&local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146f99a4b(param_1,param_2 + 0x20);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9b020 FUN_146f9b020 body=333 status=ok
// SIG undefined FUN_146f9b020(void)

int * FUN_146f9b020(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_140549c28(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x28) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x28) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x28) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 0x28);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 0x28);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x28) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x28) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146f9b16e FUN_146f9b16e body=168 status=ok
// SIG undefined FUN_146f9b16e(void)

undefined8 * FUN_146f9b16e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146f92612(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146f92816(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 146f9b216 FUN_146f9b216 body=407 status=ok
// SIG undefined FUN_146f9b216(void)

longlong * FUN_146f9b216(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146f9b3e7(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146f9b412(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_146f998e0(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_146f9b3ae(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_146f9b472(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_146f998e0(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9b3ae FUN_146f9b3ae body=57 status=ok
// SIG undefined FUN_146f9b3ae(void)

void FUN_146f9b3ae(undefined8 *param_1,int param_2)

{
  FUN_146f9b3e7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146f9b412(param_1,param_2);
  return;
}



// FUNCTION 146f9b3e7 FUN_146f9b3e7 body=43 status=ok
// SIG undefined FUN_146f9b3e7(void)

void FUN_146f9b3e7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146f9b412 FUN_146f9b412 body=95 status=ok
// SIG undefined FUN_146f9b412(void)

void FUN_146f9b412(longlong param_1,uint param_2)

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



// FUNCTION 146f9b472 FUN_146f9b472 body=132 status=ok
// SIG undefined FUN_146f9b472(void)

void FUN_146f9b472(longlong param_1,int param_2)

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



// FUNCTION 146f9b4f8 FUN_146f9b4f8 body=362 status=ok
// SIG undefined FUN_146f9b4f8(void)

longlong * FUN_146f9b4f8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146f9b6f8(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_146f9b663(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146f9b6f8(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f9b6bc(param_2);
        FUN_146f9b663(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9b663 FUN_146f9b663 body=88 status=ok
// SIG undefined FUN_146f9b663(void)

undefined8 FUN_146f9b663(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_146f99a4b();
  FUN_146f99a4b(param_1,param_2 + 4);
  FUN_146f99a4b(param_1,param_2 + 8);
  iVar1 = FUN_1448332aa(param_1,&DAT_149e3cc28);
  if (0x22 < iVar1) {
    FUN_146f99a4b(param_1,param_2 + 0xc);
  }
  return param_1;
}



// FUNCTION 146f9b6bc FUN_146f9b6bc body=59 status=ok
// SIG undefined FUN_146f9b6bc(void)

longlong FUN_146f9b6bc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f9b760(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_146f9b757(lVar2);
  return lVar2;
}



// FUNCTION 146f9b6f8 FUN_146f9b6f8 body=95 status=ok
// SIG undefined FUN_146f9b6f8(void)

void FUN_146f9b6f8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 146f9b757 FUN_146f9b757 body=9 status=ok
// SIG undefined FUN_146f9b757(void)

void FUN_146f9b757(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  return;
}



// FUNCTION 146f9b760 FUN_146f9b760 body=132 status=ok
// SIG undefined FUN_146f9b760(void)

void FUN_146f9b760(longlong param_1,int param_2)

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



// FUNCTION 146f9b7e5 FUN_146f9b7e5 body=1003 status=ok
// SIG undefined FUN_146f9b7e5(void)

longlong * FUN_146f9b7e5(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  longlong **local_c8;
  uint local_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  longlong **local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined8 uStack_80;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_a0 = (longlong **)0x0;
    local_98 = 0;
    iStack_94 = 0x80;
    FUN_146897be2(&local_b0,param_1);
    FUN_146f9151c(param_2,local_98);
    local_d0 = 0x100000000;
    local_c0 = 0xffffffff;
    iStack_bc = 0;
    local_b8 = 0;
    pplVar7 = local_a0;
    local_c8 = &local_b0;
    if ((local_98 != 0) &&
       (FUN_1449c0562(&local_d0), pplVar7 = local_a0, iStack_bc < *(int *)(local_c8 + 3))) {
      do {
        local_88 = (longlong *)0x0;
        uStack_80 = 0;
        FUN_146f9bbd2(param_2,iStack_bc,&local_88);
        lVar10 = (longlong)iStack_bc;
        lVar3 = *param_2;
        iVar8 = FUN_1448332aa(param_1,&DAT_149e31250);
        if (iVar8 < 0x11) {
          FUN_146f9a3a8(param_1,lVar3 + lVar10 * 0x10);
        }
        local_c0 = local_c0 & ~local_d0._4_4_;
        FUN_1449c0562(&local_d0);
        pplVar7 = local_a0;
      } while (iStack_bc < *(int *)(local_c8 + 3));
    }
    goto LAB_146f9ba8b;
  }
  uVar2 = *(uint *)(param_2 + 1);
  local_78 = (longlong **)0x0;
  local_6c = 0x80;
  uVar11 = uVar2 + 0x1f;
  iVar8 = 1;
  local_70 = uVar2;
  if (0x1f < uVar11) {
    if (uVar11 < 0xa0) {
      pplVar7 = &local_88;
LAB_146f9bb26:
      uVar11 = uVar11 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_88,0,uVar11 >> 5,4);
      local_6c = uVar11 & 0xffffffe0;
      pplVar7 = local_78;
      if (local_78 == (longlong **)0x0) {
        pplVar7 = &local_88;
      }
      if (uVar11 < 0x120) goto LAB_146f9bb26;
      uVar11 = (uVar11 >> 5) << 2;
    }
    memset(pplVar7,0,(ulonglong)uVar11);
    uVar11 = local_70 + 0x1f;
    if (-1 < (int)local_70) {
      uVar11 = local_70;
    }
    if ((int)local_70 % 0x20 != 0) {
      pplVar7 = local_78;
      if (local_78 == (longlong **)0x0) {
        pplVar7 = &local_88;
      }
      bVar5 = -(char)((int)local_70 % 0x20);
      *(uint *)((longlong)pplVar7 + (longlong)((int)uVar11 >> 5) * 4) =
           (uint)(*(int *)((longlong)pplVar7 + (longlong)((int)uVar11 >> 5) * 4) << (bVar5 & 0x1f))
           >> (bVar5 & 0x1f);
    }
    if (0 < (int)uVar2) {
      uVar6 = 0;
      uVar11 = 0;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)
        {
          pplVar7 = local_78;
          if (local_78 == (longlong **)0x0) {
            pplVar7 = &local_88;
          }
          puVar1 = (uint *)((longlong)pplVar7 + (ulonglong)(uVar6 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
          uVar11 = uVar6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      iVar8 = uVar11 + 1;
    }
  }
  FUN_144a686e6(&local_88,iVar8);
  FUN_146897be2(&local_88,param_1);
  local_c8 = (longlong **)(param_2 + 2);
  local_d0 = 0x100000000;
  local_c0 = 0xffffffff;
  iStack_bc = 0;
  local_b8 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_d0);
  }
  local_a8 = local_d0;
  local_a0 = local_c8;
  local_98 = local_c0;
  iStack_94 = iStack_bc;
  local_90 = local_b8;
  local_8c = local_b4;
  pplVar7 = local_78;
  local_b0 = param_2;
  if (iStack_bc < *(int *)(local_c8 + 3)) {
    do {
      iVar8 = iStack_94;
      lVar3 = *local_b0;
      iVar4 = FUN_1448332aa(param_1,&DAT_149e31250);
      if (iVar4 < 0x11) {
        FUN_146f9a3a8(param_1,lVar3 + (longlong)iVar8 * 0x10);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
      pplVar7 = local_78;
    } while (iStack_94 < *(int *)(local_a0 + 3));
  }
LAB_146f9ba8b:
  if (pplVar7 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9bbd2 FUN_146f9bbd2 body=137 status=ok
// SIG undefined FUN_146f9bbd2(void)

void FUN_146f9bbd2(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f9bc72(param_1,local_30,param_2);
  *local_28 = 0;
  iVar1 = *(int *)(param_3 + 8);
  *(int *)(local_28 + 1) = iVar1;
  if (iVar1 != 0) {
    FUN_146f92878(local_28,iVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)((longlong)local_28 + 0xc) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9bc72 FUN_146f9bc72 body=333 status=ok
// SIG undefined FUN_146f9bc72(void)

int * FUN_146f9bc72(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1446efaca(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x10) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x10) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x10;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x10) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 146f9bdc0 FUN_146f9bdc0 body=270 status=ok
// SIG undefined FUN_146f9bdc0(void)

void FUN_146f9bdc0(longlong *param_1,undefined8 param_2)

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
      (*(code *)(&PTR_FUN_149fa8a90)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9bed0 FUN_146f9bed0 body=258 status=ok
// SIG undefined FUN_146f9bed0(void)

void FUN_146f9bed0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
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
  *(undefined4 *)(param_1 + 10) = param_2;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      plVar2 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9bfd4 FUN_146f9bfd4 body=204 status=ok
// SIG undefined FUN_146f9bfd4(void)

void FUN_146f9bfd4(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5 * 0x10;
          if (((((*(float *)(lVar4 + lVar8) != *(float *)(param_2 + 0x40)) ||
                (NAN(*(float *)(lVar4 + lVar8)) || NAN(*(float *)(param_2 + 0x40)))) ||
               (fVar1 = *(float *)(lVar4 + 4 + lVar8), fVar1 != *(float *)(param_2 + 0x44))) ||
              ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8), fVar1 != *(float *)(param_2 + 0x48))))) ||
             ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)) ||
              ((fVar1 = *(float *)(lVar4 + 0xc + lVar8), fVar1 != *(float *)(param_2 + 0x4c) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x4c)))))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c0a0 FUN_146f9c0a0 body=181 status=ok
// SIG undefined FUN_146f9c0a0(void)

void FUN_146f9c0a0(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5;
          fVar1 = *(float *)(lVar4 + lVar8 * 0xc);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x44))) ||
             (((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x48)))
              || (NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c156 FUN_146f9c156 body=150 status=ok
// SIG undefined FUN_146f9c156(void)

void FUN_146f9c156(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          fVar1 = *(float *)(lVar4 + (longlong)iVar5 * 8);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 8),
              fVar1 != *(float *)(param_2 + 0x44))) ||
             (NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c1ec FUN_146f9c1ec body=270 status=ok
// SIG undefined FUN_146f9c1ec(void)

void FUN_146f9c1ec(longlong *param_1,undefined8 param_2)

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
      (*(code *)(&PTR_FUN_149fa8ad0)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9c2fc FUN_146f9c2fc body=204 status=ok
// SIG undefined FUN_146f9c2fc(void)

void FUN_146f9c2fc(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5 * 0x10;
          if (((((*(float *)(lVar4 + lVar8) != *(float *)(param_2 + 0x40)) ||
                (NAN(*(float *)(lVar4 + lVar8)) || NAN(*(float *)(param_2 + 0x40)))) ||
               (fVar1 = *(float *)(lVar4 + 4 + lVar8), fVar1 != *(float *)(param_2 + 0x44))) ||
              ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8), fVar1 != *(float *)(param_2 + 0x48))))) ||
             ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)) ||
              ((fVar1 = *(float *)(lVar4 + 0xc + lVar8), fVar1 != *(float *)(param_2 + 0x4c) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x4c)))))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c3c8 FUN_146f9c3c8 body=181 status=ok
// SIG undefined FUN_146f9c3c8(void)

void FUN_146f9c3c8(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5;
          fVar1 = *(float *)(lVar4 + lVar8 * 0xc);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x44))) ||
             (((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x48)))
              || (NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c47e FUN_146f9c47e body=150 status=ok
// SIG undefined FUN_146f9c47e(void)

void FUN_146f9c47e(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          fVar1 = *(float *)(lVar4 + (longlong)iVar5 * 8);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 8),
              fVar1 != *(float *)(param_2 + 0x44))) ||
             (NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c514 FUN_146f9c514 body=270 status=ok
// SIG undefined FUN_146f9c514(void)

void FUN_146f9c514(longlong *param_1,undefined8 param_2)

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
      (*(code *)(&PTR_FUN_149fa8b10)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9c624 FUN_146f9c624 body=204 status=ok
// SIG undefined FUN_146f9c624(void)

void FUN_146f9c624(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5 * 0x10;
          if (((((*(float *)(lVar4 + lVar8) != *(float *)(param_2 + 0x40)) ||
                (NAN(*(float *)(lVar4 + lVar8)) || NAN(*(float *)(param_2 + 0x40)))) ||
               (fVar1 = *(float *)(lVar4 + 4 + lVar8), fVar1 != *(float *)(param_2 + 0x44))) ||
              ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8), fVar1 != *(float *)(param_2 + 0x48))))) ||
             ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)) ||
              ((fVar1 = *(float *)(lVar4 + 0xc + lVar8), fVar1 != *(float *)(param_2 + 0x4c) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x4c)))))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c6f0 FUN_146f9c6f0 body=181 status=ok
// SIG undefined FUN_146f9c6f0(void)

void FUN_146f9c6f0(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5;
          fVar1 = *(float *)(lVar4 + lVar8 * 0xc);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x44))) ||
             (((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x48)))
              || (NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c7a6 FUN_146f9c7a6 body=150 status=ok
// SIG undefined FUN_146f9c7a6(void)

void FUN_146f9c7a6(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          fVar1 = *(float *)(lVar4 + (longlong)iVar5 * 8);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 8),
              fVar1 != *(float *)(param_2 + 0x44))) ||
             (NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9c83c FUN_146f9c83c body=270 status=ok
// SIG undefined FUN_146f9c83c(void)

void FUN_146f9c83c(longlong *param_1,undefined8 param_2)

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
      (*(code *)(&PTR_FUN_149fa8b50)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9c94c FUN_146f9c94c body=204 status=ok
// SIG undefined FUN_146f9c94c(void)

void FUN_146f9c94c(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5 * 0x10;
          if (((((*(float *)(lVar4 + lVar8) != *(float *)(param_2 + 0x40)) ||
                (NAN(*(float *)(lVar4 + lVar8)) || NAN(*(float *)(param_2 + 0x40)))) ||
               (fVar1 = *(float *)(lVar4 + 4 + lVar8), fVar1 != *(float *)(param_2 + 0x44))) ||
              ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8), fVar1 != *(float *)(param_2 + 0x48))))) ||
             ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)) ||
              ((fVar1 = *(float *)(lVar4 + 0xc + lVar8), fVar1 != *(float *)(param_2 + 0x4c) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x4c)))))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9ca18 FUN_146f9ca18 body=181 status=ok
// SIG undefined FUN_146f9ca18(void)

void FUN_146f9ca18(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5;
          fVar1 = *(float *)(lVar4 + lVar8 * 0xc);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x44))) ||
             (((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x48)))
              || (NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9cace FUN_146f9cace body=150 status=ok
// SIG undefined FUN_146f9cace(void)

void FUN_146f9cace(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          fVar1 = *(float *)(lVar4 + (longlong)iVar5 * 8);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 8),
              fVar1 != *(float *)(param_2 + 0x44))) ||
             (NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9cb64 FUN_146f9cb64 body=270 status=ok
// SIG undefined FUN_146f9cb64(void)

void FUN_146f9cb64(longlong *param_1,undefined8 param_2)

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
      (*(code *)(&PTR_FUN_149fa8b90)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9cc74 FUN_146f9cc74 body=204 status=ok
// SIG undefined FUN_146f9cc74(void)

void FUN_146f9cc74(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5 * 0x10;
          if (((((*(float *)(lVar4 + lVar8) != *(float *)(param_2 + 0x40)) ||
                (NAN(*(float *)(lVar4 + lVar8)) || NAN(*(float *)(param_2 + 0x40)))) ||
               (fVar1 = *(float *)(lVar4 + 4 + lVar8), fVar1 != *(float *)(param_2 + 0x44))) ||
              ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8), fVar1 != *(float *)(param_2 + 0x48))))) ||
             ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)) ||
              ((fVar1 = *(float *)(lVar4 + 0xc + lVar8), fVar1 != *(float *)(param_2 + 0x4c) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x4c)))))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9cd40 FUN_146f9cd40 body=181 status=ok
// SIG undefined FUN_146f9cd40(void)

void FUN_146f9cd40(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5;
          fVar1 = *(float *)(lVar4 + lVar8 * 0xc);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x44))) ||
             (((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x48)))
              || (NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9cdf6 FUN_146f9cdf6 body=150 status=ok
// SIG undefined FUN_146f9cdf6(void)

void FUN_146f9cdf6(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          fVar1 = *(float *)(lVar4 + (longlong)iVar5 * 8);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 8),
              fVar1 != *(float *)(param_2 + 0x44))) ||
             (NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9ce8c FUN_146f9ce8c body=928 status=ok
// SIG undefined FUN_146f9ce8c(void)

longlong * FUN_146f9ce8c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong **local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong **local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined4 *local_68;
  longlong **local_60;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_88 = (longlong **)0x0;
    local_80 = 0;
    iStack_7c = 0x80;
    FUN_146897be2(&local_98,param_1);
    FUN_146f91872(param_2,local_80);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    iStack_a4 = 0;
    local_a0 = 0;
    pplVar5 = local_88;
    local_b0 = &local_98;
    if ((local_80 != 0) &&
       (FUN_1449c0562(&local_b8), pplVar5 = local_88, iStack_a4 < *(int *)(local_b0 + 3))) {
      do {
        FUN_146f9d22e(param_2,&local_70);
        *local_68 = 0xffffffff;
        local_68[1] = 0xffffffff;
        local_68[2] = 0xffffffff;
        local_68[3] = 0xffffffff;
        FUN_146f9b663(param_1,(longlong)iStack_a4 * 0x10 + *param_2);
        local_a8 = local_a8 & ~local_b8._4_4_;
        FUN_1449c0562(&local_b8);
        pplVar5 = local_88;
      } while (iStack_a4 < *(int *)(local_b0 + 3));
    }
    goto LAB_146f9d0eb;
  }
  uVar2 = *(uint *)(param_2 + 1);
  local_60 = (longlong **)0x0;
  local_54 = 0x80;
  uVar8 = uVar2 + 0x1f;
  iVar6 = 1;
  local_58 = uVar2;
  if (0x1f < uVar8) {
    if (uVar8 < 0xa0) {
      pplVar5 = &local_70;
LAB_146f9d185:
      uVar8 = uVar8 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_70,0,uVar8 >> 5,4);
      local_54 = uVar8 & 0xffffffe0;
      pplVar5 = local_60;
      if (local_60 == (longlong **)0x0) {
        pplVar5 = &local_70;
      }
      if (uVar8 < 0x120) goto LAB_146f9d185;
      uVar8 = (uVar8 >> 5) << 2;
    }
    memset(pplVar5,0,(ulonglong)uVar8);
    uVar8 = local_58 + 0x1f;
    if (-1 < (int)local_58) {
      uVar8 = local_58;
    }
    if ((int)local_58 % 0x20 != 0) {
      pplVar5 = local_60;
      if (local_60 == (longlong **)0x0) {
        pplVar5 = &local_70;
      }
      bVar3 = -(char)((int)local_58 % 0x20);
      *(uint *)((longlong)pplVar5 + (longlong)((int)uVar8 >> 5) * 4) =
           (uint)(*(int *)((longlong)pplVar5 + (longlong)((int)uVar8 >> 5) * 4) << (bVar3 & 0x1f))
           >> (bVar3 & 0x1f);
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      uVar8 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)
        {
          pplVar5 = local_60;
          if (local_60 == (longlong **)0x0) {
            pplVar5 = &local_70;
          }
          puVar1 = (uint *)((longlong)pplVar5 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          uVar8 = uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
      iVar6 = uVar8 + 1;
    }
  }
  FUN_144a686e6(&local_70,iVar6);
  FUN_146897be2(&local_70,param_1);
  local_b0 = (longlong **)(param_2 + 2);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_90 = local_b8;
  local_88 = local_b0;
  local_80 = local_a8;
  iStack_7c = iStack_a4;
  local_78 = local_a0;
  local_74 = local_9c;
  pplVar5 = local_60;
  local_98 = param_2;
  if (iStack_a4 < *(int *)(local_b0 + 3)) {
    do {
      FUN_146f9b663(param_1,(longlong)iStack_7c * 0x10 + *local_98);
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
      pplVar5 = local_60;
    } while (iStack_7c < *(int *)(local_88 + 3));
  }
LAB_146f9d0eb:
  if (pplVar5 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9d22e FUN_146f9d22e body=333 status=ok
// SIG undefined FUN_146f9d22e(void)

int * FUN_146f9d22e(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_144869a3c(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 0x10) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 0x10) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3 * 0x10;
  iVar3 = *(int *)(lVar7 + lVar4);
  iVar5 = *(int *)(lVar7 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 0x10) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 0x10) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 + *param_1;
  return param_2;
}



// FUNCTION 146f9d37c FUN_146f9d37c body=270 status=ok
// SIG undefined FUN_146f9d37c(void)

void FUN_146f9d37c(longlong *param_1,undefined8 param_2)

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
      (*(code *)(&PTR_FUN_149fa8bd0)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9d48c FUN_146f9d48c body=204 status=ok
// SIG undefined FUN_146f9d48c(void)

void FUN_146f9d48c(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5 * 0x10;
          if (((((*(float *)(lVar4 + lVar8) != *(float *)(param_2 + 0x40)) ||
                (NAN(*(float *)(lVar4 + lVar8)) || NAN(*(float *)(param_2 + 0x40)))) ||
               (fVar1 = *(float *)(lVar4 + 4 + lVar8), fVar1 != *(float *)(param_2 + 0x44))) ||
              ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8), fVar1 != *(float *)(param_2 + 0x48))))) ||
             ((NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)) ||
              ((fVar1 = *(float *)(lVar4 + 0xc + lVar8), fVar1 != *(float *)(param_2 + 0x4c) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x4c)))))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9d558 FUN_146f9d558 body=181 status=ok
// SIG undefined FUN_146f9d558(void)

void FUN_146f9d558(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          lVar8 = (longlong)iVar5;
          fVar1 = *(float *)(lVar4 + lVar8 * 0xc);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x44))) ||
             (((NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)) ||
               (fVar1 = *(float *)(lVar4 + 8 + lVar8 * 0xc), fVar1 != *(float *)(param_2 + 0x48)))
              || (NAN(fVar1) || NAN(*(float *)(param_2 + 0x48)))))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9d60e FUN_146f9d60e body=150 status=ok
// SIG undefined FUN_146f9d60e(void)

void FUN_146f9d60e(int *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (((char)param_1[1] == '\x01') && (0 < (longlong)*(int *)(param_2 + 0x38))) {
    iVar2 = *param_1;
    lVar6 = 0;
    do {
      if (iVar2 < *(int *)(param_2 + 0x10)) {
        lVar4 = *(longlong *)(param_2 + 0x30);
        if (*(longlong *)(param_2 + 0x30) == 0) {
          lVar4 = param_2 + 0x18;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
        lVar4 = *(longlong *)(lVar4 + lVar6 * 0x18);
        iVar5 = iVar2 * iVar3;
        iVar7 = *(int *)(param_2 + 0x10) - iVar2;
        do {
          fVar1 = *(float *)(lVar4 + (longlong)iVar5 * 8);
          if ((((fVar1 != *(float *)(param_2 + 0x40)) ||
               (NAN(fVar1) || NAN(*(float *)(param_2 + 0x40)))) ||
              (fVar1 = *(float *)(lVar4 + 4 + (longlong)iVar5 * 8),
              fVar1 != *(float *)(param_2 + 0x44))) ||
             (NAN(fVar1) || NAN(*(float *)(param_2 + 0x44)))) {
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
          iVar5 = iVar5 + iVar3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 146f9d6a4 FUN_146f9d6a4 body=103 status=ok
// SIG undefined FUN_146f9d6a4(void)

void FUN_146f9d6a4(longlong *param_1,int *param_2)

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
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f9d70c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 146f9d70c FUN_146f9d70c body=132 status=ok
// SIG undefined FUN_146f9d70c(void)

void FUN_146f9d70c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f9d792 FUN_146f9d792 body=96 status=ok
// SIG undefined FUN_146f9d792(void)

void FUN_146f9d792(longlong param_1,int param_2)

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



// FUNCTION 146f9d7f2 FUN_146f9d7f2 body=101 status=ok
// SIG undefined FUN_146f9d7f2(void)

ulonglong FUN_146f9d7f2(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_146f9d835;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f924ea(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_146f9d835:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146f9d858 FUN_146f9d858 body=103 status=ok
// SIG undefined FUN_146f9d858(void)

void FUN_146f9d858(longlong *param_1,int *param_2)

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
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f99d00(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 146f9d8c0 FUN_146f9d8c0 body=103 status=ok
// SIG undefined FUN_146f9d8c0(void)

void FUN_146f9d8c0(longlong *param_1,int *param_2)

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
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f9d928(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 146f9d928 FUN_146f9d928 body=132 status=ok
// SIG undefined FUN_146f9d928(void)

void FUN_146f9d928(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f9d9ae FUN_146f9d9ae body=54 status=ok
// SIG undefined FUN_146f9d9ae(void)

void FUN_146f9d9ae(longlong *param_1)

{
  FUN_146f9d9e4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f9d9e4 FUN_146f9d9e4 body=128 status=ok
// SIG undefined FUN_146f9d9e4(void)

void FUN_146f9d9e4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 146f9da66 FUN_146f9da66 body=294 status=ok
// SIG undefined FUN_146f9da66(void)

undefined4 * FUN_146f9da66(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f9db8e(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  local_48[1] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_146f9dc74(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146f9dd88(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9db8e FUN_146f9db8e body=230 status=ok
// SIG undefined FUN_146f9db8e(void)

int * FUN_146f9db8e(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 146f9dc74 FUN_146f9dc74 body=138 status=ok
// SIG undefined FUN_146f9dc74(void)

void FUN_146f9dc74(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_146f9dcfe(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146f9dcdc;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146f9dcdc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146f9dcfe FUN_146f9dcfe body=138 status=ok
// SIG undefined FUN_146f9dcfe(void)

void FUN_146f9dcfe(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f9dd88 FUN_146f9dd88 body=419 status=ok
// SIG undefined FUN_146f9dd88(void)

void FUN_146f9dd88(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
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



// FUNCTION 146f9df2c FUN_146f9df2c body=95 status=ok
// SIG undefined FUN_146f9df2c(void)

void FUN_146f9df2c(longlong param_1,uint param_2)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar3;
    FUN_146f9df8c(param_1,*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 146f9df8c FUN_146f9df8c body=132 status=ok
// SIG undefined FUN_146f9df8c(void)

void FUN_146f9df8c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,4);
  return;
}



// FUNCTION 146f9e010 FUN_146f9e010 body=124 status=ok
// SIG undefined FUN_146f9e010(void)

void FUN_146f9e010(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 4;
    } while (lVar5 * 4 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_146f9e542(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(int *)(param_1 + lVar5 * 4) = *param_2;
  return;
}



// FUNCTION 146f9e08c FUN_146f9e08c body=612 status=ok
// SIG undefined FUN_146f9e08c(void)

void FUN_146f9e08c(longlong param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  void *pvVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  int local_80;
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146f716d6(param_1 + 0x218,local_88,param_2,0);
  FUN_146f9e2f2(param_3,local_80 + 2);
  FUN_146f716d6(param_1 + 0x218,&local_98,param_2,0);
  if (iStack_90 == 1) {
    uVar1 = *(uint *)CONCAT44(uStack_94,local_98);
    iVar8 = *(int *)(param_1 + 0xa8);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    if (iVar8 == 0) {
      plVar7 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar7);
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)(uVar1 & 0xff) * 4 + 0x410);
      iVar3 = *(int *)((longlong)plVar7 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
    }
    else {
      iVar3 = uVar1 * (int)plVar7[2];
    }
    lVar4 = *plVar7;
    *(int *)((longlong)param_3 + 0x28) = iVar8;
    if (*(int *)((longlong)param_3 + 0x2c) == 0 && iVar8 == 0) {
      *(undefined4 *)((longlong)param_3 + 0x2c) = 8;
    }
    else {
      FUN_146f9e4dc(param_3,iVar8);
      if (iVar8 != 0) {
        pvVar6 = *(void **)((longlong)param_3 + 0x20);
        if (*(void **)((longlong)param_3 + 0x20) == (void *)0x0) {
          pvVar6 = param_3;
        }
        memcpy(pvVar6,(void *)((longlong)iVar3 * 4 + lVar4),(longlong)iVar8 << 2);
      }
    }
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x800000000;
    FUN_146f9249a(local_88,iStack_90 + 2,1);
    local_a8 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      local_a8 = local_88;
    }
    local_a0 = (int)local_40;
    local_b8 = local_98;
    uStack_b4 = uStack_94;
    iStack_b0 = iStack_90;
    uStack_ac = uStack_8c;
    FUN_146f72002(param_1);
    if (0 < (int)local_40) {
      lVar4 = 0;
      do {
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_88;
        }
        uVar1 = *(uint *)(CONCAT44(uStack_94,local_98) + (longlong)*(int *)(puVar5 + lVar4 * 8) * 4)
        ;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar7 = plVar2;
        }
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar7 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar7);
          iVar8 = *(int *)((longlong)plVar7 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
        }
        else {
          iVar8 = uVar1 * (int)plVar7[2];
        }
        pvVar6 = *(void **)((longlong)param_3 + 0x20);
        if (*(void **)((longlong)param_3 + 0x20) == (void *)0x0) {
          pvVar6 = param_3;
        }
        *(undefined4 *)((longlong)pvVar6 + lVar4 * 4) =
             *(undefined4 *)
              ((longlong)iVar8 * 4 + *plVar7 + (longlong)*(int *)(puVar5 + lVar4 * 8 + 4) * 4);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)local_40);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f9e2f2 FUN_146f9e2f2 body=71 status=ok
// SIG undefined FUN_146f9e2f2(void)

void FUN_146f9e2f2(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f9e33a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x28) = param_2;
      FUN_146f9e436();
      return;
    }
  }
  return;
}



// FUNCTION 146f9e33a FUN_146f9e33a body=116 status=ok
// SIG undefined FUN_146f9e33a(void)

void FUN_146f9e33a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_146f9e3b0(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f9e3b0 FUN_146f9e3b0 body=133 status=ok
// SIG undefined FUN_146f9e3b0(void)

void FUN_146f9e3b0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f9e436 FUN_146f9e436 body=58 status=ok
// SIG undefined FUN_146f9e436(void)

void FUN_146f9e436(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f9e470(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_146f9e3b0(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,4);
  return;
}



// FUNCTION 146f9e470 FUN_146f9e470 body=108 status=ok
// SIG undefined FUN_146f9e470(void)

ulonglong FUN_146f9e470(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f9e4dc FUN_146f9e4dc body=101 status=ok
// SIG undefined FUN_146f9e4dc(void)

void FUN_146f9e4dc(longlong param_1,uint param_2,int param_3)

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
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146f9e3b0(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 146f9e542 FUN_146f9e542 body=110 status=ok
// SIG undefined FUN_146f9e542(void)

void FUN_146f9e542(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_146f9df8c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f9e5b2 FUN_146f9e5b2 body=29 status=ok
// SIG undefined FUN_146f9e5b2(void)

undefined8 FUN_146f9e5b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f9e5d0 FUN_146f9e5d0 body=63 status=ok
// SIG undefined FUN_146f9e5d0(void)

void FUN_146f9e5d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f9e610(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146f9e610 FUN_146f9e610 body=97 status=ok
// SIG undefined FUN_146f9e610(void)

ulonglong FUN_146f9e610(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f9e672 FUN_146f9e672 body=63 status=ok
// SIG undefined FUN_146f9e672(void)

void FUN_146f9e672(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f9e6b2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146f9e6b2 FUN_146f9e6b2 body=97 status=ok
// SIG undefined FUN_146f9e6b2(void)

ulonglong FUN_146f9e6b2(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146f9e714 FUN_146f9e714 body=34 status=ok
// SIG undefined FUN_146f9e714(void)

void FUN_146f9e714(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149fa8c90;
  return;
}



// FUNCTION 146f9e736 FUN_146f9e736 body=31 status=ok
// SIG undefined FUN_146f9e736(void)

undefined8 FUN_146f9e736(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f9e772 FUN_146f9e772 body=93 status=ok
// SIG undefined FUN_146f9e772(void)

void FUN_146f9e772(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fa8c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f9e7d0 FUN_146f9e7d0 body=123 status=ok
// SIG undefined FUN_146f9e7d0(void)

void FUN_146f9e7d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fa8c20;
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



// FUNCTION 146f9e858 FUN_146f9e858 body=21 status=ok
// SIG undefined FUN_146f9e858(void)

undefined8 FUN_146f9e858(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f9e86e FUN_146f9e86e body=29 status=ok
// SIG undefined FUN_146f9e86e(void)

undefined8 FUN_146f9e86e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f9e890 FUN_146f9e890 body=96 status=ok
// SIG undefined FUN_146f9e890(void)

void FUN_146f9e890(longlong param_1,int param_2)

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



// FUNCTION 146f9e8f0 FUN_146f9e8f0 body=318 status=ok
// SIG undefined FUN_146f9e8f0(void)

int * FUN_146f9e8f0(longlong *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar3 = (int)param_1[1];
  if (param_3 < iVar3) {
    lVar7 = *param_1;
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 1) = iVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_146f9ea2e(param_1);
      iVar5 = (int)param_1[1];
    }
    lVar7 = *param_1;
    iVar3 = (int)param_1[5];
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar7 + (longlong)iVar3 * 8) = 0xffffffff;
        lVar4 = param_1[6];
        *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) = (int)lVar4;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)lVar4 * 8) = iVar3;
        }
        *(int *)(param_1 + 6) = iVar3;
        iVar3 = FUN_144a54ea4(param_1 + 2,1);
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = (int)param_1[5];
      } while (iVar3 < (int)param_1[1]);
    }
  }
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  lVar4 = (longlong)param_3;
  iVar3 = *(int *)(lVar7 + lVar4 * 8);
  iVar5 = *(int *)(lVar7 + 4 + lVar4 * 8);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 6) = iVar5;
  }
  else {
    *(int *)(lVar7 + 4 + (longlong)iVar3 * 8) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar7 + (longlong)iVar5 * 8) = iVar3;
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar3 = param_3 + 0x1f;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  *(longlong *)(param_2 + 2) = lVar4 * 8 + *param_1;
  return param_2;
}



// FUNCTION 146f9ea2e FUN_146f9ea2e body=132 status=ok
// SIG undefined FUN_146f9ea2e(void)

void FUN_146f9ea2e(longlong param_1,int param_2)

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



// FUNCTION 146f9eab4 FUN_146f9eab4 body=112 status=ok
// SIG undefined FUN_146f9eab4(void)

void FUN_146f9eab4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 146f9eb24 FUN_146f9eb24 body=98 status=ok
// SIG undefined FUN_146f9eb24(void)

void FUN_146f9eb24(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xb0 + *param_1);
  FUN_1412e7bc0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xb0 + (longlong)_Dst),(longlong)iVar2 * 0xb0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f9eb86 FUN_146f9eb86 body=62 status=ok
// SIG undefined FUN_146f9eb86(void)

void FUN_146f9eb86(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f9ebc4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,8);
  }
  return;
}



// FUNCTION 146f9ebc4 FUN_146f9ebc4 body=110 status=ok
// SIG undefined FUN_146f9ebc4(void)

ulonglong FUN_146f9ebc4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f9ebfd;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb0,8);
      param_2 = param_2 / 0xb0;
    }
  }
LAB_146f9ebfd:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f9ec32 FUN_146f9ec32 body=108 status=ok
// SIG undefined FUN_146f9ec32(void)

void FUN_146f9ec32(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 146f9ec9e FUN_146f9ec9e body=225 status=ok
// SIG undefined FUN_146f9ec9e(void)

undefined8 * FUN_146f9ec9e(undefined8 *param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  param_1[3] = 0;
  param_1[4] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0x100000000;
  param_1[9] = 0;
  param_1[10] = 0x100000000;
  FUN_144a127d2(0,param_3 * param_2,0);
  FUN_146f9ee10(param_1 + 2,param_3);
  FUN_146f9ee10(param_1 + 5,param_3);
  FUN_146f9ee10();
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      puVar2 = (undefined8 *)param_1[3];
      if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
        puVar2 = param_1 + 2;
      }
      *(int *)((longlong)puVar2 + uVar1 * 4) = iVar3;
      iVar3 = iVar3 + param_2;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
    uVar1 = 0;
    do {
      puVar2 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar2 = param_1 + 8;
      }
      *(int *)((longlong)puVar2 + uVar1 * 4) = param_2;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  puVar2 = param_1 + 5;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[6];
  }
  memset(puVar2,0,(longlong)(int)param_3 << 2);
  return param_1;
}



// FUNCTION 146f9ed80 FUN_146f9ed80 body=143 status=ok
// SIG undefined FUN_146f9ed80(void)

void FUN_146f9ed80(longlong param_1,int param_2)

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



// FUNCTION 146f9ee10 FUN_146f9ee10 body=71 status=ok
// SIG undefined FUN_146f9ee10(void)

void FUN_146f9ee10(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141733800();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x10) = param_2;
      FUN_146f9ee58();
      return;
    }
  }
  return;
}



// FUNCTION 146f9ee58 FUN_146f9ee58 body=52 status=ok
// SIG undefined FUN_146f9ee58(void)

void FUN_146f9ee58(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f9ee8c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_144aa714a(param_1,*(undefined4 *)(param_1 + 0x10),iVar1);
  return;
}



// FUNCTION 146f9ee8c FUN_146f9ee8c body=108 status=ok
// SIG undefined FUN_146f9ee8c(void)

ulonglong FUN_146f9ee8c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f9eef8 FUN_146f9eef8 body=89 status=ok
// SIG undefined FUN_146f9eef8(void)

void FUN_146f9eef8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
  FUN_1412e7f46(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f9ef52 FUN_146f9ef52 body=125 status=ok
// SIG undefined FUN_146f9ef52(void)

void FUN_146f9ef52(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x100;
    if (0x100 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_146f9efd0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f9efd0 FUN_146f9efd0 body=144 status=ok
// SIG undefined FUN_146f9efd0(void)

void FUN_146f9efd0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,4);
  return;
}



// FUNCTION 146f9f060 FUN_146f9f060 body=153 status=ok
// SIG undefined FUN_146f9f060(void)

longlong * FUN_146f9f060(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1427d8864(param_2);
  lVar2 = FUN_140fc05d0(param_2,1);
  FUN_144869430(param_1);
  *param_1 = (longlong)&PTR__purecall_149e30ac0;
  param_1[0x12] = lVar2;
  param_1[0x13] = 0;
  param_1[0x14] = lVar1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_140996f94(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,param_3);
  *param_1 = (longlong)&PTR_FUN_149fa8d20;
  param_1[0x16] = param_2;
  return param_1;
}



// FUNCTION 146f9f0fa FUN_146f9f0fa body=65 status=ok
// SIG undefined FUN_146f9f0fa(void)

void FUN_146f9f0fa(longlong param_1)

{
  FUN_1427d8a52(*(undefined8 *)(param_1 + 0xb0));
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 146f9f13c FUN_146f9f13c body=43 status=ok
// SIG undefined FUN_146f9f13c(void)

undefined8 FUN_146f9f13c(undefined8 param_1,int param_2)

{
  FUN_146f9f0fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 146f9f168 FUN_146f9f168 body=32 status=ok
// SIG undefined FUN_146f9f168(void)

undefined8 FUN_146f9f168(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FBulkDataReader");
  return param_2;
}



// FUNCTION 146f9f188 FUN_146f9f188 body=140 status=ok
// SIG undefined FUN_146f9f188(void)

undefined8 FUN_146f9f188(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_14021219d(0,&local_38);
  puVar1 = local_38;
  if ((int)uStack_30 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  *param_2 = local_40;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146f9f216 FUN_146f9f216 body=64 status=ok
// SIG undefined FUN_146f9f216(void)

longlong FUN_146f9f216(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14602b1fc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_14698d2a7(lVar2,1);
  return lVar2;
}



// FUNCTION 146f9f256 FUN_146f9f256 body=877 status=ok
// SIG undefined FUN_146f9f256(void)

void FUN_146f9f256(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_68 [32];
  undefined1 **local_48;
  undefined4 local_40;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  bVar2 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c620);
  bVar5 = (byte)param_2;
  if ((bVar2 & bVar5) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = (undefined1 **)&DAT_14c84635c;
    local_40 = 0x21;
    FUN_1458c326a(lVar4 + 0x20,&local_28,DAT_14c99c620,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) + 0x88));
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  bVar2 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c628);
  if ((bVar2 & bVar5) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = (undefined1 **)&DAT_14c846330;
    local_40 = 0x22;
    FUN_1458c2ed2(lVar4 + 0x20,&local_28,DAT_14c99c628,1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  bVar2 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c630);
  if ((bVar2 & bVar5) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = (undefined1 **)&DAT_14c846330;
    local_40 = 0x22;
    FUN_1458c2ed2(lVar4 + 0x20,&local_28,DAT_14c99c630,1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  bVar2 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c638);
  if ((bVar2 & bVar5) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = &local_30;
    local_30._0_4_ = 0;
    local_40 = 0x22;
    FUN_146f95cb4(lVar4 + 0x20,&local_28,DAT_14c99c638,1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  bVar2 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c640);
  if ((bVar2 & bVar5) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x58);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = &local_28;
    local_28 = &DAT_3f8000003f800000;
    uStack_20 = 0x3f800000;
    uStack_1c = 0x3f800000;
    local_40 = 0x21;
    FUN_146f9423a(lVar4 + 0x20,&local_30,DAT_14c99c640,1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  bVar2 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c648);
  if ((bVar2 & bVar5) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = &local_30;
    local_30._0_4_ = (uint)local_30 & 0xffffff00;
    local_40 = 0x20;
    FUN_146f9706e(lVar4 + 0x20,&local_28,DAT_14c99c648,1);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  cVar3 = FUN_146f787ac(lVar4 + 0x20,DAT_14c99c688);
  if ((cVar3 == '\0') || (bVar5 == 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
    lVar4 = *(longlong *)(lVar1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    local_48 = &local_28;
    local_28 = (undefined1 *)0x0;
    local_40 = 0x20;
    FUN_146f97abe(lVar4 + 0x20,&local_30,DAT_14c99c688,1);
  }
  FUN_146f6bfa6(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9f5c4 FUN_146f9f5c4 body=241 status=ok
// SIG undefined FUN_146f9f5c4(void)

void FUN_146f9f5c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  lVar2 = *(longlong *)(lVar1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  local_30 = 8;
  local_38 = &DAT_14c846330;
  FUN_1458c2ed2(lVar2 + 0x20,local_28,DAT_14c99c650,1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  lVar2 = *(longlong *)(lVar1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  local_30 = 8;
  local_38 = &DAT_14c846330;
  FUN_1458c2ed2(lVar2 + 0x20,local_28,DAT_14c99c658,1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  lVar2 = *(longlong *)(lVar1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = lVar1;
  }
  local_30 = 8;
  local_38 = &DAT_14c846330;
  FUN_1458c2ed2(lVar2 + 0x20,local_28,DAT_14c99c660,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9f6b6 FUN_146f9f6b6 body=1026 status=ok
// SIG undefined FUN_146f9f6b6(void)

void FUN_146f9f6b6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0xffffffff;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_84 = 0xffffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_88 = 0xffffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_8c = 0xffffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_90 = 0xffffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  puVar6 = *(undefined4 **)(param_2 + 0x38);
  local_94 = 0xffffffff;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_e8 = &local_90;
  if (puVar6 != (undefined4 *)0x0) {
    local_e8 = puVar6;
  }
  local_f0 = &local_8c;
  if (puVar5 != (undefined4 *)0x0) {
    local_f0 = puVar5;
  }
  local_f8 = &local_88;
  if (puVar4 != (undefined4 *)0x0) {
    local_f8 = puVar4;
  }
  local_100 = &local_84;
  if (puVar3 != (undefined4 *)0x0) {
    local_100 = puVar3;
  }
  local_108 = &local_80;
  if (puVar2 != (undefined4 *)0x0) {
    local_108 = puVar2;
  }
  local_e0 = &local_94;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_e0 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_a8 = local_68;
  local_d8 = local_60;
  uStack_d4 = uStack_5c;
  uStack_d0 = uStack_58;
  uStack_cc = uStack_54;
  local_c8 = local_50;
  FUN_146f9faba(param_1,&local_d8,&local_b8,local_7c);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9faba FUN_146f9faba body=1103 status=ok
// SIG undefined FUN_146f9faba(void)

void FUN_146f9faba(longlong *param_1,double *param_2,double *param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  int *local_80;
  undefined4 local_78;
  longlong local_70;
  int local_68 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = (**(code **)(*param_1 + 0x2b0))();
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x50);
  lVar5 = *(longlong *)(lVar3 + 0x80);
  if (lVar5 == 0) {
    lVar5 = lVar3;
  }
  FUN_146fa1f1e(lVar5 + 0x20,&local_70,DAT_14c99c0d0);
  local_68[4] = -1;
  local_68[5] = -1;
  local_68[6] = -1;
  local_68[7] = -1;
  local_68[0] = -1;
  local_68[1] = -1;
  local_68[2] = -1;
  local_68[3] = -1;
  lVar3 = *(longlong *)(param_1[0xf] + 0x80);
  if (lVar3 == 0) {
    lVar3 = param_1[0xf];
  }
  FUN_1456bd906(0xffffffff,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x78)) + 8);
  lVar3 = 0;
  do {
    lVar5 = *(longlong *)(param_1[0xf] + 0x80);
    if (lVar5 == 0) {
      lVar5 = param_1[0xf];
    }
    iVar2 = FUN_146f70732(lVar5);
    local_68[lVar3] = iVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  fVar6 = (float)(param_2[2] + param_3[2]);
  fVar7 = (float)(param_2[1] + param_3[1]);
  fVar8 = (float)(*param_2 + *param_3);
  fVar9 = -fVar7;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  local_80 = local_68;
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[0]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar8;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar9;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[1]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar8;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar7;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  fVar10 = -fVar8;
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[2]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar10;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar7;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[3]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar10;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar9;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  fVar6 = -fVar6;
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[4]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar10;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar7;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[5]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar10;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar9;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[6]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar8;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar9;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  plVar4 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(local_70 + 0x30);
  }
  plVar1 = param_1 + 5;
  lVar3 = *plVar4;
  lVar5 = (longlong)((int)plVar4[2] * local_68[7]);
  *(float *)(lVar3 + lVar5 * 0xc) = fVar8;
  *(float *)(lVar3 + 4 + lVar5 * 0xc) = fVar7;
  *(float *)(lVar3 + 8 + lVar5 * 0xc) = fVar6;
  local_a0 = 6;
  local_a8 = 7;
  local_90 = param_1;
  local_88 = plVar1;
  local_78 = param_4;
  FUN_142aacb5e(&local_90,&local_94,0,1);
  *param_5 = local_94;
  local_a0 = 4;
  local_a8 = 5;
  FUN_142aacb5e(&local_90,&local_94,2,3);
  *param_6 = local_94;
  local_a0 = 7;
  local_a8 = 4;
  FUN_142aacb5e(&local_90,&local_94,1,2);
  *param_7 = local_94;
  local_a0 = 5;
  local_a8 = 6;
  FUN_142aacb5e(&local_90,&local_94,3,0);
  *param_8 = local_94;
  local_a0 = 2;
  local_a8 = 3;
  FUN_142aacb5e(&local_90,&local_94,1,0);
  *param_9 = local_94;
  local_a0 = 5;
  local_a8 = 4;
  FUN_142aacb5e(&local_90,&local_94,6,7);
  *param_10 = local_94;
  FUN_142aacf6e(plVar1,0,0);
  FUN_142aad194(plVar1,3);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f9ff0a FUN_146f9ff0a body=263 status=ok
// SIG undefined FUN_146f9ff0a(void)

void FUN_146f9ff0a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aac900(param_1,&local_38,local_24,local_28);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa0012 FUN_146fa0012 body=253 status=ok
// SIG undefined FUN_146fa0012(void)

void FUN_146fa0012(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = &local_24;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aac9f2(param_1,local_1c,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa0110 FUN_146fa0110 body=326 status=ok
// SIG undefined FUN_146fa0110(void)

void FUN_146fa0110(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_142aaca84(param_1,local_1c,&local_48,local_34);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa025a FUN_146fa025a body=99 status=ok
// SIG undefined FUN_146fa025a(void)

void FUN_146fa025a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = param_1 + 0x28;
  ppuVar3 = &PTR_FUN_149fa9f00;
  *puVar2 = &PTR_FUN_149fa9f00;
  puVar1 = *(undefined8 **)(param_1 + 0x2e8);
  *(undefined8 **)(param_1 + 0x2e8) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    puVar2 = *(undefined8 **)(param_1 + 0x2e8);
    ppuVar3 = (undefined **)*puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146fa02ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar3[1])(puVar2,0,ppuVar3[1]);
  return;
}



// FUNCTION 146fa02be FUN_146fa02be body=196 status=ok
// SIG undefined FUN_146fa02be(void)

void FUN_146fa02be(longlong *param_1,undefined8 *param_2,int param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_4 >> 0x10);
    uVar5 = (uint)param_4 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar3 == param_4) goto LAB_146fa02d3;
        iVar6 = (int)plVar3[2];
      } while (iVar6 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_146fa02d3:
  lVar1 = *(longlong *)(plVar3[1] + 0x30);
  lVar4 = plVar3[1] + 0x18;
  if (lVar1 != 0) {
    lVar4 = lVar1;
  }
  *param_2 = *(undefined8 *)
              (*(longlong *)(lVar4 + (longlong)param_5 * 0x18) +
              (longlong)(param_3 * *(int *)(lVar4 + 0x10 + (longlong)param_5 * 0x18)) * 8);
  return;
}



// FUNCTION 146fa0382 FUN_146fa0382 body=194 status=ok
// SIG undefined FUN_146fa0382(void)

void FUN_146fa0382(longlong *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar3 == param_3) goto LAB_146fa0395;
        iVar6 = (int)plVar3[2];
      } while (iVar6 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_146fa0395:
  lVar1 = *(longlong *)(plVar3[1] + 0x30);
  lVar4 = plVar3[1] + 0x18;
  if (lVar1 != 0) {
    lVar4 = lVar1;
  }
  *(undefined8 *)
   (*(longlong *)(lVar4 + (longlong)param_4 * 0x18) +
   (longlong)(param_2 * *(int *)(lVar4 + 0x10 + (longlong)param_4 * 0x18)) * 8) = *param_5;
  return;
}



// FUNCTION 146fa0444 FUN_146fa0444 body=166 status=ok
// SIG undefined FUN_146fa0444(void)

void FUN_146fa0444(longlong *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) goto LAB_146fa044f;
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_146fa044f:
  plVar1 = *(longlong **)(plVar4[1] + 0x30);
  plVar4 = (longlong *)(plVar4[1] + 0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  *(undefined8 *)(*plVar4 + (longlong)(param_2 * (int)plVar4[2]) * 8) = *param_4;
  return;
}



// FUNCTION 146fa04ea FUN_146fa04ea body=87 status=ok
// SIG undefined FUN_146fa04ea(void)

void FUN_146fa04ea(longlong param_1)

{
  FUN_146fa217e(param_1 + 0x150);
  FUN_146fa217e(param_1 + 0x118);
  FUN_146fa217e(param_1 + 0xe0);
  FUN_146fa217e(param_1 + 0xa8);
  FUN_146fa217e(param_1 + 0x70);
  FUN_146fa217e(param_1 + 0x38);
  FUN_146fa217e(param_1);
  return;
}



// FUNCTION 146fa0542 FUN_146fa0542 body=180 status=ok
// SIG undefined FUN_146fa0542(void)

void FUN_146fa0542(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 5)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa054f;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa054f:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa05f6 FUN_146fa05f6 body=180 status=ok
// SIG undefined FUN_146fa05f6(void)

void FUN_146fa05f6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 5)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa0603;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa0603:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa06aa FUN_146fa06aa body=180 status=ok
// SIG undefined FUN_146fa06aa(void)

void FUN_146fa06aa(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 1)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa06b7;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa06b7:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa075e FUN_146fa075e body=180 status=ok
// SIG undefined FUN_146fa075e(void)

void FUN_146fa075e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 3)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa076b;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa076b:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa0812 FUN_146fa0812 body=180 status=ok
// SIG undefined FUN_146fa0812(void)

void FUN_146fa0812(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 0)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa081f;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa081f:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa08c6 FUN_146fa08c6 body=180 status=ok
// SIG undefined FUN_146fa08c6(void)

void FUN_146fa08c6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 2)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa08d3;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa08d3:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa097a FUN_146fa097a body=180 status=ok
// SIG undefined FUN_146fa097a(void)

void FUN_146fa097a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 2)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa0987;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa0987:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa0a2e FUN_146fa0a2e body=180 status=ok
// SIG undefined FUN_146fa0a2e(void)

void FUN_146fa0a2e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 2)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa0a3b;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa0a3b:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa0ae2 FUN_146fa0ae2 body=134 status=ok
// SIG undefined FUN_146fa0ae2(void)

void FUN_146fa0ae2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 1;
  FUN_146fa4b10(&local_38,1,0);
  *local_38 = param_1;
  FUN_142aadb28(&local_38,param_2,param_3);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa0b69 FUN_146fa0b69 body=641 status=ok
// SIG undefined FUN_146fa0b69(void)

void FUN_146fa0b69(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != '\0') || (uVar1 = local_78, param_3 != '\0')) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    FUN_146fa06aa(lVar5 + 0x20,&local_68,DAT_14c99c628);
    if ((local_68 == 0) || (*(int *)(local_68 + 0x10) == 0)) {
      lVar5 = 0;
    }
    else {
      plVar3 = (longlong *)(local_68 + 0x18);
      if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
        plVar3 = *(longlong **)(local_68 + 0x30);
      }
      lVar5 = *plVar3;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_1 + 0x58);
    }
    FUN_146fa06aa(lVar6 + 0x20,&local_68,DAT_14c99c630);
    if ((local_68 == 0) || (*(int *)(local_68 + 0x10) == 0)) {
      lVar6 = 0;
    }
    else {
      plVar3 = (longlong *)(local_68 + 0x18);
      if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
        plVar3 = *(longlong **)(local_68 + 0x30);
      }
      lVar6 = *plVar3;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x58);
    }
    FUN_146fa075e(lVar7 + 0x20,&local_68,DAT_14c99c638);
    iVar9 = 0;
    if ((local_68 == 0) || (*(int *)(local_68 + 0x10) == 0)) {
      lVar7 = 0;
    }
    else {
      plVar3 = (longlong *)(local_68 + 0x18);
      if (*(longlong **)(local_68 + 0x30) != (longlong *)0x0) {
        plVar3 = *(longlong **)(local_68 + 0x30);
      }
      lVar7 = *plVar3;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(param_1 + 0x58);
    }
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar8;
    if (*(int *)(lVar8 + 0x18) != 0) {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(lVar8 + 0x18);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar1 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (local_60 != lVar8 || local_78._4_4_ != iVar9) {
      iVar2 = local_78._4_4_;
      local_78 = uVar1;
      do {
        if (*(int *)(local_80 + 0x18) <= iVar2) {
          iVar2 = -1;
        }
        if (param_2 != '\0') {
          *(undefined4 *)(lVar5 + 8 + (longlong)iVar2 * 0xc) = DAT_14c846338;
          *(undefined8 *)(lVar5 + (longlong)iVar2 * 0xc) = DAT_14c846330;
        }
        if (param_3 != '\0') {
          lVar4 = (longlong)iVar2;
          *(undefined4 *)(lVar7 + lVar4 * 4) = 0;
          *(undefined4 *)(lVar6 + 8 + lVar4 * 0xc) = DAT_14c846338;
          *(undefined8 *)(lVar6 + lVar4 * 0xc) = DAT_14c846330;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar2 = local_78._4_4_;
        uVar1 = local_78;
      } while (local_80 != lVar8 || local_78._4_4_ != iVar9);
    }
  }
  local_78 = uVar1;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fa0ee6 FUN_146fa0ee6 body=3970 status=ok
// SIG undefined FUN_146fa0ee6(void)

void FUN_146fa0ee6(longlong param_1,double *param_2,longlong param_3)

{
  longlong *plVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  longlong *plVar20;
  double *pdVar21;
  float *pfVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  double *pdVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  int *piVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_298 [32];
  longlong local_278;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  float local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  uint local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  undefined8 uStack_140;
  undefined8 *local_138;
  uint uStack_130;
  uint uStack_12c;
  float *local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f4 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar2 = param_2[2];
  dVar3 = param_2[0xe];
  dVar4 = param_2[1];
  dVar5 = param_2[0xd];
  dVar6 = *param_2;
  dVar7 = param_2[0xc];
  lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
  if (lVar30 == 0) {
    lVar30 = *(longlong *)(param_1 + 0x58);
  }
  local_278 = *(longlong *)(param_1 + 0xf8);
  uVar35 = (longlong)*(int *)(lVar30 + 0x18) - (longlong)*(int *)(lVar30 + 0x78);
  uVar33 = (uint)uVar35;
  if ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) < uVar33) {
    if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar35);
    }
    FUN_146fa6a18(param_3,uVar35 & 0xffffffff);
    iVar19 = 1;
    if (3 < uVar33) {
      uVar33 = (uVar33 | 1) + 0xe;
      iVar19 = 0x1f;
      if (uVar33 != 0) {
        for (; uVar33 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      iVar19 = 1 << ((byte)iVar19 & 0x1f);
    }
    if ((*(int *)(param_3 + 0x48) == 0) || (*(int *)(param_3 + 0x48) < iVar19)) {
      *(int *)(param_3 + 0x48) = iVar19;
      FUN_146fa6bb6(param_3);
    }
  }
  local_128 = (float *)0x0;
  uStack_110._0_4_ = DAT_14c84618c;
  local_118._0_4_ = (float)DAT_14c846184;
  local_118._4_4_ = DAT_14c846184._4_4_;
  uStack_110._4_4_ = (float)DAT_14c84619c;
  fStack_108 = DAT_14c84619c._4_4_;
  fStack_104 = DAT_14c8461a4;
  uStack_120 = 1;
  uStack_11c = 0;
  FUN_146fa705c(&local_128,0);
  uVar33 = uStack_120;
  *(ulonglong *)(local_128 + 4) = CONCAT44(fStack_104,fStack_108);
  *local_128 = (float)local_118;
  local_128[1] = local_118._4_4_;
  local_128[2] = (float)uStack_110;
  local_128[3] = uStack_110._4_4_;
  uStack_110._0_4_ = DAT_14c846198;
  local_118._0_4_ = (float)DAT_14c846190;
  local_118._4_4_ = DAT_14c846190._4_4_;
  uStack_110._4_4_ = (float)DAT_14c84619c;
  fStack_108 = DAT_14c84619c._4_4_;
  fStack_104 = DAT_14c8461a4;
  lVar30 = (longlong)(int)uStack_120;
  uStack_120 = uStack_120 + 1;
  uVar34 = uStack_120;
  if (uStack_11c < uStack_120) {
    FUN_146fa705c(&local_128,uVar33);
    uVar34 = uStack_120;
  }
  *(ulonglong *)(local_128 + lVar30 * 6 + 4) = CONCAT44(fStack_104,fStack_108);
  pfVar22 = local_128 + lVar30 * 6;
  *pfVar22 = (float)local_118;
  pfVar22[1] = local_118._4_4_;
  pfVar22[2] = (float)uStack_110;
  pfVar22[3] = uStack_110._4_4_;
  uStack_110._0_4_ = DAT_14c84618c;
  local_118._0_4_ = (float)DAT_14c846184;
  local_118._4_4_ = DAT_14c846184._4_4_;
  uStack_110._4_4_ = (float)DAT_14c846178;
  fStack_108 = DAT_14c846178._4_4_;
  fStack_104 = DAT_14c846180;
  uStack_120 = uVar34 + 1;
  uVar33 = uStack_120;
  if (uStack_11c < uStack_120) {
    FUN_146fa705c(&local_128,uVar34);
    uVar33 = uStack_120;
  }
  *(ulonglong *)(local_128 + (longlong)(int)uVar34 * 6 + 4) = CONCAT44(fStack_104,fStack_108);
  pfVar22 = local_128 + (longlong)(int)uVar34 * 6;
  *pfVar22 = (float)local_118;
  pfVar22[1] = local_118._4_4_;
  pfVar22[2] = (float)uStack_110;
  pfVar22[3] = uStack_110._4_4_;
  uStack_110._0_4_ = DAT_14c846198;
  local_118._0_4_ = (float)DAT_14c846190;
  local_118._4_4_ = DAT_14c846190._4_4_;
  uStack_110._4_4_ = (float)DAT_14c846178;
  fStack_108 = DAT_14c846178._4_4_;
  fStack_104 = DAT_14c846180;
  uStack_120 = uVar33 + 1;
  uVar34 = uStack_120;
  if (uStack_11c < uStack_120) {
    FUN_146fa705c(&local_128,uVar33);
    uVar34 = uStack_120;
  }
  local_238 = ZEXT416((uint)(float)(dVar2 * dVar3));
  *(ulonglong *)(local_128 + (longlong)(int)uVar33 * 6 + 4) = CONCAT44(fStack_104,fStack_108);
  pfVar22 = local_128 + (longlong)(int)uVar33 * 6;
  *pfVar22 = (float)local_118;
  pfVar22[1] = local_118._4_4_;
  pfVar22[2] = (float)uStack_110;
  pfVar22[3] = uStack_110._4_4_;
  uStack_110._0_4_ = DAT_14c8461b0;
  local_118._0_4_ = (float)DAT_14c8461a8;
  local_118._4_4_ = DAT_14c8461a8._4_4_;
  uStack_110._4_4_ = (float)DAT_14c846178;
  fStack_108 = DAT_14c846178._4_4_;
  fStack_104 = DAT_14c846180;
  uStack_120 = uVar34 + 1;
  uVar33 = uStack_120;
  if (uStack_11c < uStack_120) {
    FUN_146fa705c(&local_128,uVar34);
    uVar33 = uStack_120;
  }
  local_258._0_8_ = dVar6 * dVar7;
  local_248 = ZEXT416((uint)(float)(dVar4 * dVar5));
  uVar16 = local_238._4_4_;
  uVar17 = local_238._8_4_;
  uVar18 = local_238._12_4_;
  fVar47 = (float)local_238._0_4_ * 0.5;
  *(ulonglong *)(local_128 + (longlong)(int)uVar34 * 6 + 4) = CONCAT44(fStack_104,fStack_108);
  pfVar22 = local_128 + (longlong)(int)uVar34 * 6;
  *pfVar22 = (float)local_118;
  pfVar22[1] = local_118._4_4_;
  pfVar22[2] = (float)uStack_110;
  pfVar22[3] = uStack_110._4_4_;
  uStack_110._0_4_ = DAT_14c8461a4;
  local_118 = (int *)CONCAT44(DAT_14c84619c._4_4_,(float)DAT_14c84619c);
  uStack_110._4_4_ = (float)DAT_14c846178;
  fStack_108 = DAT_14c846178._4_4_;
  fStack_104 = DAT_14c846180;
  _uStack_120 = CONCAT44(uStack_11c,uVar33 + 1);
  if (uStack_11c < uVar33 + 1) {
    FUN_146fa705c(&local_128,uVar33);
  }
  *(ulonglong *)(local_128 + (longlong)(int)uVar33 * 6 + 4) = CONCAT44(fStack_104,fStack_108);
  *(int **)(local_128 + (longlong)(int)uVar33 * 6) = local_118;
  *(ulonglong *)(local_128 + (longlong)(int)uVar33 * 6 + 2) =
       CONCAT44(uStack_110._4_4_,(float)uStack_110);
  local_138 = (undefined8 *)0x0;
  fVar44 = (float)param_2[7];
  uVar13 = local_248._4_4_;
  uVar14 = local_248._8_4_;
  uVar15 = local_248._12_4_;
  fVar46 = (float)param_2[6];
  fVar43 = (float)local_248._0_4_ * 0.5;
  fVar45 = (float)param_2[5];
  uStack_110._0_4_ = DAT_14c846174;
  local_118 = (int *)CONCAT44(DAT_14c846170,DAT_14c84616c);
  fVar37 = DAT_14c846170 * (fVar46 + 0.0);
  fVar38 = DAT_14c84616c * (fVar45 + 0.0);
  fVar42 = (fVar47 + fVar44) * DAT_14c846174;
  uStack_130 = 1;
  uStack_12c = 0;
  FUN_146bfad7a(&local_138,0);
  uVar33 = uStack_130;
  *(float *)(local_138 + 1) = (float)uStack_110;
  *local_138 = local_118;
  *(float *)((longlong)local_138 + 0xc) = fVar42 + fVar38 + fVar37;
  uStack_110._0_4_ = DAT_14c846180;
  local_118 = (int *)CONCAT44(DAT_14c846178._4_4_,(float)DAT_14c846178);
  fVar37 = DAT_14c846178._4_4_ * fVar46;
  fVar38 = (float)DAT_14c846178 * fVar45;
  fVar42 = (fVar44 - fVar47) * DAT_14c846180;
  lVar30 = (longlong)(int)uStack_130;
  uStack_130 = uStack_130 + 1;
  if (uStack_12c < uStack_130) {
    FUN_146bfad7a(&local_138,uVar33);
  }
  uVar33 = uStack_130;
  fVar39 = (float)(double)local_258._0_8_;
  *(float *)(local_138 + lVar30 * 2 + 1) = (float)uStack_110;
  local_138[lVar30 * 2] = local_118;
  *(float *)((longlong)local_138 + lVar30 * 0x10 + 0xc) = fVar42 + fVar38 + fVar37;
  uStack_110._0_4_ = DAT_14c8461a4;
  local_118 = (int *)CONCAT44(DAT_14c84619c._4_4_,(float)DAT_14c84619c);
  fVar37 = (fVar43 + fVar46) * DAT_14c84619c._4_4_;
  fVar38 = (fVar45 + 0.0) * (float)DAT_14c84619c;
  fVar42 = DAT_14c8461a4 * (fVar44 + 0.0);
  lVar30 = (longlong)(int)uStack_130;
  uStack_130 = uStack_130 + 1;
  if (uStack_12c < uStack_130) {
    FUN_146bfad7a(&local_138,uVar33);
  }
  uVar33 = uStack_130;
  local_258 = ZEXT416((uint)fVar39);
  fVar39 = fVar39 * 0.5;
  *(float *)(local_138 + lVar30 * 2 + 1) = (float)uStack_110;
  local_138[lVar30 * 2] = local_118;
  *(float *)((longlong)local_138 + lVar30 * 0x10 + 0xc) = fVar42 + fVar38 + fVar37;
  uStack_224 = uVar13;
  uStack_220 = uVar14;
  uStack_21c = uVar15;
  uStack_110._0_4_ = DAT_14c8461b0;
  local_118 = (int *)CONCAT44(DAT_14c8461a8._4_4_,(float)DAT_14c8461a8);
  fVar37 = (fVar46 - fVar43) * DAT_14c8461a8._4_4_;
  fVar38 = (float)DAT_14c8461a8 * fVar45;
  fVar42 = DAT_14c8461b0 * fVar44;
  lVar30 = (longlong)(int)uStack_130;
  uStack_130 = uStack_130 + 1;
  local_228 = fVar43;
  if (uStack_12c < uStack_130) {
    FUN_146bfad7a(&local_138,uVar33);
  }
  uVar33 = uStack_130;
  *(float *)(local_138 + lVar30 * 2 + 1) = (float)uStack_110;
  local_138[lVar30 * 2] = local_118;
  *(float *)((longlong)local_138 + lVar30 * 0x10 + 0xc) = fVar42 + fVar38 + fVar37;
  uStack_110._0_4_ = DAT_14c84618c;
  local_118 = (int *)CONCAT44(DAT_14c846184._4_4_,(float)DAT_14c846184);
  fVar42 = (fVar46 + 0.0) * DAT_14c846184._4_4_;
  fVar37 = (fVar39 + fVar45) * (float)DAT_14c846184;
  fVar38 = (fVar44 + 0.0) * DAT_14c84618c;
  lVar30 = (longlong)(int)uStack_130;
  uStack_130 = uStack_130 + 1;
  if (uStack_12c < uStack_130) {
    FUN_146bfad7a(&local_138,uVar33);
  }
  uVar33 = uStack_130;
  *(float *)(local_138 + lVar30 * 2 + 1) = (float)uStack_110;
  local_138[lVar30 * 2] = local_118;
  *(float *)((longlong)local_138 + lVar30 * 0x10 + 0xc) = fVar38 + fVar37 + fVar42;
  uStack_110._0_4_ = DAT_14c846198;
  local_118 = (int *)CONCAT44(DAT_14c846190._4_4_,(float)DAT_14c846190);
  fVar46 = fVar46 * DAT_14c846190._4_4_;
  fVar37 = (fVar45 - fVar39) * (float)DAT_14c846190;
  fVar44 = fVar44 * DAT_14c846198;
  lVar30 = (longlong)(int)uStack_130;
  uStack_130 = uStack_130 + 1;
  if (uStack_12c < uStack_130) {
    FUN_146bfad7a(&local_138,uVar33);
  }
  *(float *)(local_138 + lVar30 * 2 + 1) = (float)uStack_110;
  local_138[lVar30 * 2] = local_118;
  *(float *)((longlong)local_138 + lVar30 * 0x10 + 0xc) = fVar44 + fVar37 + fVar46;
  pdVar31 = (double *)(*(double **)(param_1 + 0x70))[0x10];
  if (pdVar31 == (double *)0x0) {
    pdVar31 = *(double **)(param_1 + 0x70);
  }
  local_118 = (int *)&DAT_100000000;
  uStack_110._0_4_ = SUB84(pdVar31,0);
  uStack_110._4_4_ = (float)((ulonglong)pdVar31 >> 0x20);
  fStack_108 = -NAN;
  fStack_104 = 0.0;
  uStack_100 = 0;
  uStack_214 = uVar16;
  uStack_210 = uVar17;
  uStack_20c = uVar18;
  local_26c = fVar39;
  local_218 = fVar47;
  if (*(int *)(pdVar31 + 3) == 0) {
    uVar33 = 0;
  }
  else {
    FUN_1449c0562(&local_118);
    uVar33 = *(uint *)(pdVar31 + 3);
  }
  local_148 = (uint)fStack_108;
  uStack_144 = (uint)fStack_104;
  uStack_140 = CONCAT44(uStack_fc,uStack_100);
  local_158 = (float)local_118;
  uStack_154 = (uint)local_118._4_4_;
  uStack_150 = (float)uStack_110;
  uStack_14c = uStack_110._4_4_;
  pdVar21 = (double *)CONCAT44(uStack_110._4_4_,(float)uStack_110);
  uStack_110 = pdVar21;
  if (pdVar21 != pdVar31 || fStack_104 != (float)uVar33) {
    plVar1 = (longlong *)(local_278 + 0x18);
    uStack_1f4 = local_258._4_4_ & 0x7fffffff;
    uStack_1f0 = local_258._8_4_ & 0x7fffffff;
    uStack_1ec = local_258._12_4_ & 0x7fffffff;
    uStack_204 = local_248._4_4_ & 0x7fffffff;
    uStack_200 = local_248._8_4_ & 0x7fffffff;
    uStack_1fc = local_248._12_4_ & 0x7fffffff;
    uStack_1e4 = local_238._4_4_ & 0x7fffffff;
    uStack_1e0 = local_238._8_4_ & 0x7fffffff;
    uStack_1dc = local_238._12_4_ & 0x7fffffff;
    local_1f8 = -(uint)(ABS((float)local_258._0_4_) <= 1e-08);
    local_208 = -(uint)(ABS((float)local_248._0_4_) <= 1e-08);
    local_1e8 = -(uint)(ABS((float)local_238._0_4_) <= 1e-08);
    do {
      uVar35 = (ulonglong)uStack_144;
      if (*(int *)(pdVar21 + 3) <= (int)uStack_144) {
        uVar35 = 0xffffffff;
      }
      plVar20 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
      plVar27 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
      if (plVar20 != (longlong *)0x0) {
        plVar27 = plVar20;
      }
      iVar19 = (int)uVar35;
      if (*(int *)(param_1 + 0xd0) == 0) {
        plVar27 = (longlong *)((longlong)(iVar19 >> 8) * 0xc18 + *plVar27);
        iVar24 = *(int *)((longlong)plVar27 + (uVar35 & 0xff) * 4 + 0x10);
      }
      else {
        iVar24 = (int)plVar27[2] * iVar19;
      }
      iVar32 = *(int *)(param_1 + 0xa8);
      plVar20 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
      plVar28 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      if (plVar20 != (longlong *)0x0) {
        plVar28 = plVar20;
      }
      if (iVar32 == 0) {
        plVar28 = (longlong *)((longlong)(iVar19 >> 8) * 0xc18 + *plVar28);
        iVar32 = *(int *)((longlong)plVar28 + (uVar35 & 0xff) * 4 + 0x410);
        iVar19 = *(int *)((longlong)plVar28 + (uVar35 & 0xff) * 4 + 0x10);
      }
      else {
        iVar19 = iVar19 * (int)plVar28[2];
      }
      lVar30 = *plVar27;
      lVar25 = (longlong)iVar24;
      piVar36 = (int *)((longlong)iVar19 * 4 + *plVar28);
      plVar20 = *(longlong **)(local_278 + 0x30);
      if (*(longlong **)(local_278 + 0x30) == (longlong *)0x0) {
        plVar20 = plVar1;
      }
      iVar19 = (int)plVar20[2];
      lVar23 = *plVar20;
      lVar29 = (longlong)(*(int *)(lVar30 + lVar25 * 4) * iVar19);
      local_1c0 = *(undefined4 *)(lVar23 + 8 + lVar29 * 0xc);
      local_1c8 = *(undefined8 *)(lVar23 + lVar29 * 0xc);
      lVar29 = (longlong)(*(int *)(lVar30 + 4 + lVar25 * 4) * iVar19);
      local_1a0 = *(undefined4 *)(lVar23 + 8 + lVar29 * 0xc);
      local_1a8 = *(undefined8 *)(lVar23 + lVar29 * 0xc);
      lVar30 = (longlong)(iVar19 * *(int *)(lVar30 + 8 + lVar25 * 4));
      local_1b0 = *(undefined4 *)(lVar23 + 8 + lVar30 * 0xc);
      local_1b8 = *(undefined8 *)(lVar23 + lVar30 * 0xc);
      local_188 = local_1b8;
      local_180 = local_1b0;
      local_178 = local_1a8;
      local_170 = local_1a0;
      local_168 = local_1c8;
      local_160 = local_1c0;
      FUN_1467fbf90(&local_198,&local_1c8,&local_1b8,&local_1a8);
      if ((longlong)(int)uStack_130 < 1) {
        iVar19 = 0;
      }
      else {
        pfVar22 = (float *)(local_138 + 1);
        uVar26 = 0;
        fVar47 = 0.0;
        uVar35 = 0;
        do {
          fVar37 = *pfVar22 * local_190 + pfVar22[-2] * local_198 + pfVar22[-1] * local_194;
          if (fVar47 < fVar37) {
            uVar35 = uVar26 & 0xffffffff;
            fVar47 = fVar37;
          }
          iVar19 = (int)uVar35;
          uVar26 = uVar26 + 1;
          pfVar22 = pfVar22 + 4;
        } while ((longlong)(int)uStack_130 != uVar26);
      }
      if (iVar32 != 0) {
        lVar30 = (longlong)iVar19;
        local_25c = local_128[lVar30 * 6];
        local_260 = local_128[lVar30 * 6 + 1];
        dVar2 = param_2[7];
        local_264 = local_128[lVar30 * 6 + 2];
        dVar3 = param_2[6];
        local_268 = local_128[lVar30 * 6 + 3];
        dVar4 = param_2[5];
        fVar47 = local_128[lVar30 * 6 + 4];
        fVar37 = local_128[lVar30 * 6 + 5];
        fVar38 = (local_264 + fVar37) * local_218;
        fVar42 = (local_260 + fVar47) * local_228;
        fVar43 = (local_25c + local_268) * local_26c;
        lVar30 = (longlong)iVar32 << 2;
        do {
          plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
          plVar27 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
          if (plVar20 != (longlong *)0x0) {
            plVar27 = plVar20;
          }
          plVar20 = *(longlong **)(local_278 + 0x30);
          if (*(longlong **)(local_278 + 0x30) == (longlong *)0x0) {
            plVar20 = plVar1;
          }
          lVar25 = *plVar20;
          lVar23 = (longlong)
                   ((int)plVar20[2] *
                   *(int *)(*plVar27 + (longlong)((int)plVar27[2] * *piVar36) * 4));
          dVar41 = (double)*(float *)(lVar25 + 8 + lVar23 * 0xc);
          dVar40 = (double)*(float *)(lVar25 + 4 + lVar23 * 0xc);
          dVar12 = (double)*(float *)(lVar25 + lVar23 * 0xc);
          dVar5 = param_2[10];
          dVar6 = param_2[8];
          dVar7 = param_2[9];
          dVar9 = dVar7 * dVar41 - dVar40 * dVar5;
          dVar9 = dVar9 + dVar9;
          dVar8 = param_2[0xb];
          dVar10 = dVar6 * dVar40 - dVar12 * dVar7;
          dVar10 = dVar10 + dVar10;
          dVar11 = dVar5 * dVar12 - dVar41 * dVar6;
          dVar11 = dVar11 + dVar11;
          fVar44 = (float)(~local_1f8 &
                          (uint)(((float)((dVar7 * dVar10 - dVar11 * dVar5) + dVar9 * dVar8 + dVar12
                                         ) - ((float)dVar4 - fVar43)) / (float)local_258._0_4_));
          fVar46 = (float)(~local_208 &
                          (uint)(((float)((dVar5 * dVar9 - dVar10 * dVar6) + dVar8 * dVar11 + dVar40
                                         ) - ((float)dVar3 - fVar42)) / (float)local_248._0_4_));
          fVar45 = (float)(~local_1e8 &
                          (uint)(((float)((dVar6 * dVar11 - dVar9 * dVar7) + dVar8 * dVar10 + dVar41
                                         ) - ((float)dVar2 - fVar38)) / (float)local_238._0_4_));
          local_1d8 = (double)(float)((double)(fVar45 * local_264 +
                                              fVar44 * local_25c + local_260 * fVar46) * param_2[3])
          ;
          local_1d0 = (double)(float)((double)(fVar45 * fVar37 +
                                              fVar44 * local_268 + fVar46 * fVar47) * param_2[4]);
          uStack_110 = &local_1d8;
          local_118 = piVar36;
          FUN_146fa6d5e(param_3,local_f4,&local_118);
          piVar36 = piVar36 + 1;
          lVar30 = lVar30 + -4;
        } while (lVar30 != 0);
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
      pdVar21 = (double *)CONCAT44(uStack_14c,uStack_150);
    } while (pdVar21 != pdVar31 || uStack_144 != uVar33);
  }
  if (local_138 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa1e6a FUN_146fa1e6a body=180 status=ok
// SIG undefined FUN_146fa1e6a(void)

void FUN_146fa1e6a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 0)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa1e77;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa1e77:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa1f1e FUN_146fa1f1e body=180 status=ok
// SIG undefined FUN_146fa1f1e(void)

void FUN_146fa1f1e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 1)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa1f2b;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa1f2b:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa206e FUN_146fa206e body=39 status=ok
// SIG undefined FUN_146fa206e(void)

undefined8 FUN_146fa206e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146fa20be FUN_146fa20be body=59 status=ok
// SIG undefined FUN_146fa20be(void)

undefined8 FUN_146fa20be(longlong *param_1)

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



// FUNCTION 146fa2160 FUN_146fa2160 body=29 status=ok
// SIG undefined FUN_146fa2160(void)

undefined8 FUN_146fa2160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fa217e FUN_146fa217e body=54 status=ok
// SIG undefined FUN_146fa217e(void)

void FUN_146fa217e(longlong *param_1)

{
  FUN_146f799d6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa21b4 FUN_146fa21b4 body=180 status=ok
// SIG undefined FUN_146fa21b4(void)

void FUN_146fa21b4(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 1)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa21c1;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa21c1:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa2268 FUN_146fa2268 body=180 status=ok
// SIG undefined FUN_146fa2268(void)

void FUN_146fa2268(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 1)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa2275;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa2275:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa231c FUN_146fa231c body=180 status=ok
// SIG undefined FUN_146fa231c(void)

void FUN_146fa231c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 3)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa2329;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa2329:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa23d0 FUN_146fa23d0 body=180 status=ok
// SIG undefined FUN_146fa23d0(void)

void FUN_146fa23d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 2)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa23dd;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa23dd:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa2484 FUN_146fa2484 body=180 status=ok
// SIG undefined FUN_146fa2484(void)

void FUN_146fa2484(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar4 == param_3) {
          if (((plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) &&
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 6)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146fa2491;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146fa2491:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146fa2538 FUN_146fa2538 body=54 status=ok
// SIG undefined FUN_146fa2538(void)

void FUN_146fa2538(longlong *param_1)

{
  FUN_146fa256e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa256e FUN_146fa256e body=128 status=ok
// SIG undefined FUN_146fa256e(void)

void FUN_146fa256e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 146fa25f0 FUN_146fa25f0 body=52 status=ok
// SIG undefined FUN_146fa25f0(void)

void FUN_146fa25f0(longlong *param_1)

{
  FUN_146fa2624();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa2624 FUN_146fa2624 body=89 status=ok
// SIG undefined FUN_146fa2624(void)

void FUN_146fa2624(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 146fa267e FUN_146fa267e body=52 status=ok
// SIG undefined FUN_146fa267e(void)

void FUN_146fa267e(longlong *param_1)

{
  FUN_146fa26b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa26b2 FUN_146fa26b2 body=89 status=ok
// SIG undefined FUN_146fa26b2(void)

void FUN_146fa26b2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 146fa270c FUN_146fa270c body=54 status=ok
// SIG undefined FUN_146fa270c(void)

void FUN_146fa270c(longlong *param_1)

{
  FUN_146fa2742(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fa2742 FUN_146fa2742 body=117 status=ok
// SIG undefined FUN_146fa2742(void)

void FUN_146fa2742(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 146fa27b8 FUN_146fa27b8 body=192 status=ok
// SIG undefined FUN_146fa27b8(void)

void FUN_146fa27b8(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar2 = 1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar3 << 0x13 | uVar3) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = 0;
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == param_3) {
          if ((plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) ||
             (lVar1 = plVar4[1], *(int *)(lVar1 + 8) != 4)) goto LAB_146fa27cb;
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          break;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      goto LAB_146fa27cd;
    }
  }
LAB_146fa27cb:
  lVar1 = 0;
LAB_146fa27cd:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 146fa2878 FUN_146fa2878 body=192 status=ok
// SIG undefined FUN_146fa2878(void)

void FUN_146fa2878(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar2 = 1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar3 << 0x13 | uVar3) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = 0;
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == param_3) {
          if ((plVar4 + 1 == (longlong *)0x0 || plVar4 == (longlong *)0x0) ||
             (lVar1 = plVar4[1], *(int *)(lVar1 + 8) != 4)) goto LAB_146fa288b;
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          break;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      goto LAB_146fa288d;
    }
  }
LAB_146fa288b:
  lVar1 = 0;
LAB_146fa288d:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 146fa2938 FUN_146fa2938 body=63 status=ok
// SIG undefined FUN_146fa2938(void)

void FUN_146fa2938(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fa2978(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146fa2978 FUN_146fa2978 body=97 status=ok
// SIG undefined FUN_146fa2978(void)

ulonglong FUN_146fa2978(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146fa29da FUN_146fa29da body=768 status=ok
// SIG undefined FUN_146fa29da(void)

undefined4 FUN_146fa29da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x18);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_146fa2b86;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 * 0x18 + lVar1);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_146fa2b86:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  lVar1 = param_2[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return (int)lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fa2cdc FUN_146fa2cdc body=34 status=ok
// SIG undefined FUN_146fa2cdc(void)

void FUN_146fa2cdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149fa9f80;
  return;
}



// FUNCTION 146fa2cfe FUN_146fa2cfe body=31 status=ok
// SIG undefined FUN_146fa2cfe(void)

undefined8 FUN_146fa2cfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fa2d3a FUN_146fa2d3a body=93 status=ok
// SIG undefined FUN_146fa2d3a(void)

void FUN_146fa2d3a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fa9f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fa2d98 FUN_146fa2d98 body=123 status=ok
// SIG undefined FUN_146fa2d98(void)

void FUN_146fa2d98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fa9f10;
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


