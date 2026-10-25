// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f67fb8 FUN_146f67fb8 body=48 status=ok
// SIG undefined FUN_146f67fb8(void)

void FUN_146f67fb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 146f67fe8 FUN_146f67fe8 body=54 status=ok
// SIG undefined FUN_146f67fe8(void)

void FUN_146f67fe8(longlong *param_1)

{
  FUN_146f6801e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f6801e FUN_146f6801e body=117 status=ok
// SIG undefined FUN_146f6801e(void)

void FUN_146f6801e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 146f68094 FUN_146f68094 body=52 status=ok
// SIG undefined FUN_146f68094(void)

void FUN_146f68094(longlong *param_1)

{
  FUN_146f680c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f680c8 FUN_146f680c8 body=317 status=ok
// SIG undefined FUN_146f680c8(void)

void FUN_146f680c8(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f68206 FUN_146f68206 body=108 status=ok
// SIG undefined FUN_146f68206(void)

void FUN_146f68206(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (3 < param_2) {
    uVar1 = (param_2 | 1) + 0xe;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = 1 << ((byte)iVar2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar2 && 0 < (int)param_2 || iVar2 < *(int *)(param_1 + 0x48)) {
    FUN_146f6801e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar2;
    FUN_146f683b6(param_1);
    return;
  }
  FUN_146f68272(param_1);
  FUN_146f6801e(param_1,param_2);
  return;
}



// FUNCTION 146f68272 FUN_146f68272 body=322 status=ok
// SIG undefined FUN_146f68272(void)

void FUN_146f68272(longlong *param_1)

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



// FUNCTION 146f683b6 FUN_146f683b6 body=461 status=ok
// SIG undefined FUN_146f683b6(void)

void FUN_146f683b6(longlong *param_1)

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
  uVar4 = local_78;
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5 * 0x10;
        uVar4 = **(undefined8 **)(lVar3 + lVar10);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f68584 FUN_146f68584 body=63 status=ok
// SIG undefined FUN_146f68584(void)

void FUN_146f68584(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146f62278(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146f68708(param_1);
    return;
  }
  FUN_146f685c4(param_1);
  FUN_146f62278(param_1);
  return;
}



// FUNCTION 146f685c4 FUN_146f685c4 body=322 status=ok
// SIG undefined FUN_146f685c4(void)

void FUN_146f685c4(longlong *param_1)

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



// FUNCTION 146f68708 FUN_146f68708 body=455 status=ok
// SIG undefined FUN_146f68708(void)

void FUN_146f68708(longlong *param_1)

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
  uVar4 = local_78;
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
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f688d0 FUN_146f688d0 body=596 status=ok
// SIG undefined FUN_146f688d0(void)

undefined4 * FUN_146f688d0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  void *pvVar14;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146f68b26(param_1,local_50);
  local_80 = *param_3;
  *local_48 = local_80;
  uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar8 = *(undefined4 *)(param_3 + 2);
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar7;
  *(undefined4 *)(local_48 + 2) = uVar8;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar1;
  local_48[3] = 0;
  iVar11 = *(int *)(param_3 + 4);
  pvVar14 = (void *)param_3[3];
  *(int *)(local_48 + 4) = iVar11;
  if ((longlong)iVar11 == 0) {
    *(undefined4 *)((longlong)local_48 + 0x24) = 0;
    pvVar14 = (void *)0x0;
    iVar11 = 0;
  }
  else {
    FUN_1446dd670(local_48 + 3,iVar11,0);
    memcpy((void *)local_48[3],pvVar14,(longlong)iVar11 * 2);
    local_80 = *local_48;
    pvVar14 = (void *)local_48[3];
    iVar11 = *(int *)(local_48 + 4);
  }
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  local_78 = *(undefined4 *)(local_48 + 1);
  iStack_74 = *(int *)((longlong)local_48 + 0xc);
  uStack_70 = *(undefined4 *)(local_48 + 2);
  iStack_6c = *(int *)((longlong)local_48 + 0x14);
  local_68 = (undefined2 *)0x0;
  local_60 = iVar11;
  if (iVar11 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,iVar11,0);
    memcpy(local_68,pvVar14,(longlong)iVar11 * 2);
  }
  iVar3 = iStack_6c;
  iVar5 = FUN_144a788f7();
  iVar11 = iStack_74;
  iVar6 = FUN_144a788f7();
  uVar13 = iVar11 + iVar6;
  uVar7 = FUN_144a78877(0,(uVar13 >> 2) + iVar5 + iVar3 + uVar13 * 0x40 + 0x9e3779b9 ^ uVar13);
  iVar11 = local_60 + -1;
  puVar2 = local_68;
  if (local_60 == 0) {
    iVar11 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar8 = FUN_144a49b4a(iVar11,puVar2);
  uVar13 = FUN_144a78877(uVar7,uVar8);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar4 = FUN_146f68c14(param_1,uVar13,local_48,&local_54);
  uVar7 = local_54;
  if (cVar4 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar13 = *(int *)(param_1 + 0x48) - 1U & uVar13;
      *(uint *)((longlong)local_48 + 0x2c) = uVar13;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar13) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_146f68f60(param_1);
    }
  }
  *param_2 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f68b26 FUN_146f68b26 body=238 status=ok
// SIG undefined FUN_146f68b26(void)

int * FUN_146f68b26(longlong *param_1,int *param_2)

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



// FUNCTION 146f68c14 FUN_146f68c14 body=301 status=ok
// SIG undefined FUN_146f68c14(void)

undefined8 FUN_146f68c14(longlong *param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *param_3;
    local_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_58 = *(undefined4 *)(param_3 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 4);
    lVar12 = (longlong)local_48;
    _Src = (void *)param_3[3];
    if (lVar12 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar12 * 2);
    }
    iVar10 = FUN_146f68d42(param_1,param_2,&local_68);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar10 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 2);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar8 = *(undefined4 *)(param_3 + 3);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined8 *)(puVar1 + 8) = param_3[4];
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_146f68ee6(param_1,*param_4);
      *param_4 = iVar10;
      uVar11 = 1;
      goto LAB_146f68c3e;
    }
  }
  uVar11 = 0;
LAB_146f68c3e:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f68d42 FUN_146f68d42 body=419 status=ok
// SIG undefined FUN_146f68d42(void)

int FUN_146f68d42(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        local_70 = *param_3;
        local_68 = *(undefined4 *)(param_3 + 1);
        uStack_64 = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_60 = *(undefined4 *)(param_3 + 2);
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x14);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 4);
        lVar6 = (longlong)local_50;
        pvVar2 = (void *)param_3[3];
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar2,lVar6 * 2);
        }
        lVar6 = *param_1;
        lVar8 = (longlong)iVar5 * 0x30;
        local_98 = *(undefined8 *)(lVar6 + lVar8);
        puVar1 = (undefined4 *)(lVar6 + 8 + lVar8);
        local_90 = *puVar1;
        uStack_8c = puVar1[1];
        uStack_88 = puVar1[2];
        uStack_84 = puVar1[3];
        local_80 = (void *)0x0;
        local_78 = *(int *)(lVar6 + 0x20 + lVar8);
        lVar7 = (longlong)local_78;
        pvVar2 = *(void **)(lVar6 + 0x18 + lVar8);
        if (lVar7 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar7 * 2);
        }
        cVar3 = FUN_144a7afa6(&local_90,&local_68);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_146f68d6e;
        iVar5 = *(int *)(*param_1 + 0x28 + lVar8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_146f68d6e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 146f68ee6 FUN_146f68ee6 body=122 status=ok
// SIG undefined FUN_146f68ee6(void)

void FUN_146f68ee6(longlong *param_1,int param_2)

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



// FUNCTION 146f68f60 FUN_146f68f60 body=671 status=ok
// SIG undefined FUN_146f68f60(void)

void FUN_146f68f60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    uVar12 = 0;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4)
             = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while (uVar13 != uVar12);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    lStack_60 = 0xffffffff;
    local_58 = (undefined2 *)((ulonglong)local_58 & 0xffffffff00000000);
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = lStack_60;
    local_78 = (undefined4)local_58;
    local_74 = local_58._4_4_;
    local_98 = param_1;
    while (iVar3 = local_80._4_4_, local_80._4_4_ < (int)local_88[3]) {
      lVar2 = *local_98;
      lVar11 = (longlong)local_80._4_4_ * 0x30;
      local_70 = *(undefined8 *)(lVar2 + lVar11);
      plVar8 = (longlong *)(lVar2 + 8 + lVar11);
      local_68 = (longlong *)*plVar8;
      lStack_60 = plVar8[1];
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(lVar2 + 0x20 + lVar11);
      lVar14 = (longlong)local_50;
      _Src = *(void **)(lVar2 + 0x18 + lVar11);
      if (lVar14 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar14 * 2);
      }
      lVar14 = lStack_60;
      iVar4 = FUN_144a788f7();
      plVar8 = local_68;
      iVar5 = FUN_144a788f7();
      uVar13 = (int)((ulonglong)plVar8 >> 0x20) + iVar5;
      uVar6 = FUN_144a78877(0,(uVar13 >> 2) +
                              iVar4 + (int)((ulonglong)lVar14 >> 0x20) + uVar13 * 0x40 + 0x9e3779b9
                              ^ uVar13);
      puVar10 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar10 = local_58;
      }
      iVar4 = local_50 + -1;
      if (local_50 == 0) {
        iVar4 = 0;
      }
      uVar7 = FUN_144a49b4a(iVar4,puVar10);
      iVar4 = FUN_144a78877(uVar6,uVar7);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar9;
      *(int *)(lVar2 + lVar11 + 0x2c) = iVar4;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar2 + lVar11 + 0x28) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar3;
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
      FUN_1449c0562(&local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f69200 FUN_146f69200 body=125 status=ok
// SIG undefined FUN_146f69200(void)

void FUN_146f69200(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_144a788f7(param_2 & 0xffffffff);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(iVar1 + (int)(param_2 >> 0x20)) & (longlong)(int)param_1[9] - 1U) *
                    4);
    if (iVar1 != -1) {
      do {
        if (**(ulonglong **)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_146f6927e(param_1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f6927e FUN_146f6927e body=90 status=ok
// SIG undefined FUN_146f6927e(void)

void FUN_146f6927e(longlong *param_1,int param_2)

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
  FUN_146f692d8();
  return;
}



// FUNCTION 146f692d8 FUN_146f692d8 body=114 status=ok
// SIG undefined FUN_146f692d8(void)

void FUN_146f692d8(longlong *param_1,int param_2)

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



// FUNCTION 146f6934a FUN_146f6934a body=295 status=ok
// SIG undefined FUN_146f6934a(void)

undefined4 * FUN_146f6934a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f69472(param_1,local_48);
  param_3 = (undefined8 *)*param_3;
  *local_40 = param_3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *param_3;
  iVar4 = FUN_144a788f7();
  uVar8 = iVar4 + (int)((ulonglong)uVar1 >> 0x20);
  cVar3 = FUN_146f69558(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
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
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146f683b6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f69472 FUN_146f69472 body=229 status=ok
// SIG undefined FUN_146f69472(void)

int * FUN_146f69472(longlong *param_1,int *param_2)

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



// FUNCTION 146f69558 FUN_146f69558 body=130 status=ok
// SIG undefined FUN_146f69558(void)

undefined8 FUN_146f69558(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (**(longlong **)(*param_1 + (longlong)iVar3 * 0x10) == *(longlong *)*param_3) {
          *puVar1 = (longlong *)*param_3;
          FUN_146f692d8(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f695da FUN_146f695da body=331 status=ok
// SIG undefined FUN_146f695da(void)

undefined4 * FUN_146f695da(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f69726(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar6 = *(undefined8 *)*param_3;
  *local_40 = uVar6;
  lVar8 = *plVar1;
  local_40[1] = lVar8;
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0xb8) & 8) != 0)) {
    LOCK();
    *(int *)(lVar8 + 0xbc) = *(int *)(lVar8 + 0xbc) + 1;
    UNLOCK();
    uVar6 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  iVar4 = FUN_144a788f7();
  uVar9 = iVar4 + (int)((ulonglong)uVar6 >> 0x20);
  cVar3 = FUN_146f6980c(param_1,uVar9,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
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
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146f68708(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f69726 FUN_146f69726 body=230 status=ok
// SIG undefined FUN_146f69726(void)

int * FUN_146f69726(longlong *param_1,int *param_2)

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



// FUNCTION 146f6980c FUN_146f6980c body=152 status=ok
// SIG undefined FUN_146f6980c(void)

undefined8 FUN_146f6980c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == *param_3) {
          if (plVar4[1] != 0) {
            FUN_146f11920();
          }
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar3 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar4 = (int)*param_3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar1;
          *(int *)(plVar4 + 1) = (int)lVar3;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar2;
          FUN_146f698a4(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f698a4 FUN_146f698a4 body=114 status=ok
// SIG undefined FUN_146f698a4(void)

void FUN_146f698a4(longlong *param_1,int param_2)

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



// FUNCTION 146f69916 FUN_146f69916 body=116 status=ok
// SIG undefined FUN_146f69916(void)

void FUN_146f69916(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_146f639b0(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f6998c FUN_146f6998c body=166 status=ok
// SIG undefined FUN_146f6998c(void)

void FUN_146f6998c(void *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  
  pvVar2 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 5) {
    if (pvVar2 != (void *)0x0) {
      uVar3 = 4;
      if (param_2 < 4) {
        uVar3 = param_2;
      }
      memmove(param_1,pvVar2,(ulonglong)(uVar3 << 4));
      if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
        (**(code **)(*DAT_14c872d28 + 0x48))();
        *(undefined8 *)((longlong)param_1 + 0x40) = 0;
      }
    }
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)(**(code **)(*DAT_14c872d28 + 0x38))
                                 (DAT_14c872d28,0,(ulonglong)param_3 << 4,8);
      *(void **)((longlong)param_1 + 0x40) = pvVar2;
      memmove(pvVar2,param_1,(ulonglong)param_2 << 4);
      return;
    }
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x38))();
    *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  }
  return;
}



// FUNCTION 146f69a32 FUN_146f69a32 body=174 status=ok
// SIG undefined FUN_146f69a32(void)

void FUN_146f69a32(void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)((longlong)param_1 + 0x60);
  if (param_3 < 5) {
    if (pvVar3 != (void *)0x0) {
      uVar1 = 4;
      if (param_2 < 4) {
        uVar1 = param_2;
      }
      memmove(param_1,pvVar3,(ulonglong)(uVar1 * 0x18));
      if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
        (**(code **)(*DAT_14c872d28 + 0x48))();
        *(undefined8 *)((longlong)param_1 + 0x60) = 0;
      }
    }
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)(**(code **)(*DAT_14c872d28 + 0x38))
                                 (DAT_14c872d28,0,(ulonglong)param_3 * 0x18,8);
      *(void **)((longlong)param_1 + 0x60) = pvVar3;
      memmove(pvVar3,param_1,(ulonglong)param_2 * 0x18);
      return;
    }
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x38))();
    *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
  }
  return;
}



// FUNCTION 146f69ae0 FUN_146f69ae0 body=166 status=ok
// SIG undefined FUN_146f69ae0(void)

void FUN_146f69ae0(void *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  
  pvVar2 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 5) {
    if (pvVar2 != (void *)0x0) {
      uVar3 = 4;
      if (param_2 < 4) {
        uVar3 = param_2;
      }
      memmove(param_1,pvVar2,(ulonglong)(uVar3 << 2));
      if (*(longlong *)((longlong)param_1 + 0x10) != 0) {
        (**(code **)(*DAT_14c872d28 + 0x48))();
        *(undefined8 *)((longlong)param_1 + 0x10) = 0;
      }
    }
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)(**(code **)(*DAT_14c872d28 + 0x38))
                                 (DAT_14c872d28,0,(ulonglong)param_3 << 2,4);
      *(void **)((longlong)param_1 + 0x10) = pvVar2;
      memmove(pvVar2,param_1,(ulonglong)param_2 << 2);
      return;
    }
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x38))();
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 146f69b86 FUN_146f69b86 body=58 status=ok
// SIG undefined FUN_146f69b86(void)

void FUN_146f69b86(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f69bc0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_146f639b0(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,8);
  return;
}



// FUNCTION 146f69bc0 FUN_146f69bc0 body=108 status=ok
// SIG undefined FUN_146f69bc0(void)

ulonglong FUN_146f69bc0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f69c2c FUN_146f69c2c body=117 status=ok
// SIG undefined FUN_146f69c2c(void)

void FUN_146f69c2c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x400;
    if (0x400 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x400 < *(uint *)(param_1 + 0x40c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar4;
    FUN_146f69ca2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f69ca2 FUN_146f69ca2 body=136 status=ok
// SIG undefined FUN_146f69ca2(void)

void FUN_146f69ca2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x401) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,1);
  return;
}



// FUNCTION 146f69d2a FUN_146f69d2a body=138 status=ok
// SIG undefined FUN_146f69d2a(void)

void FUN_146f69d2a(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  uVar2 = *(uint *)(param_1 + 0x40c);
  if (uVar1 < 0x401) {
    uVar1 = 0x400;
  }
  else {
    uVar3 = uVar2 - uVar1;
    if (uVar3 < 0x4000) {
      if (uVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if ((int)uVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar1 = FUN_144a3809e(uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x40c);
    }
  }
  if (uVar1 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x40c) = uVar1;
  FUN_146f69ca2(param_1,*(undefined4 *)(param_1 + 0x408),uVar1);
  return;
}



// FUNCTION 146f69db4 FUN_146f69db4 body=117 status=ok
// SIG undefined FUN_146f69db4(void)

void FUN_146f69db4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x400;
    if (0x400 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x400 < *(uint *)(param_1 + 0x40c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar4;
    FUN_146f69e2a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f69e2a FUN_146f69e2a body=136 status=ok
// SIG undefined FUN_146f69e2a(void)

void FUN_146f69e2a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x401) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,1);
  return;
}



// FUNCTION 146f69eb2 FUN_146f69eb2 body=138 status=ok
// SIG undefined FUN_146f69eb2(void)

void FUN_146f69eb2(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  uVar2 = *(uint *)(param_1 + 0x40c);
  if (uVar1 < 0x401) {
    uVar1 = 0x400;
  }
  else {
    uVar3 = uVar2 - uVar1;
    if (uVar3 < 0x4000) {
      if (uVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if ((int)uVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar1 = FUN_144a3809e(uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x40c);
    }
  }
  if (uVar1 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x40c) = uVar1;
  FUN_146f69e2a(param_1,*(undefined4 *)(param_1 + 0x408),uVar1);
  return;
}



// FUNCTION 146f69f3c FUN_146f69f3c body=101 status=ok
// SIG undefined FUN_146f69f3c(void)

void FUN_146f69f3c(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(*param_2 + 0x1a);
  if (0xf < bVar2) {
    FUN_146f5435e(uVar3,cVar1 == '\0',1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_146f5435e(uVar3,cVar1,bVar2);
  return;
}



// FUNCTION 146f69fa2 FUN_146f69fa2 body=71 status=ok
// SIG undefined FUN_146f69fa2(void)

void FUN_146f69fa2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined1 *)param_2[3];
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(*param_2 + 0x1a);
  if (0xf < bVar1) {
    uVar5 = FUN_146f546d2(uVar3,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      goto LAB_146f69fdf;
    }
  }
  uVar4 = FUN_146f546d2(uVar3,bVar1);
LAB_146f69fdf:
  *puVar2 = uVar4;
  return;
}



// FUNCTION 146f6a002 FUN_146f6a002 body=93 status=ok
// SIG undefined FUN_146f6a002(void)

void FUN_146f6a002(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f9fd60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f6a060 FUN_146f6a060 body=93 status=ok
// SIG undefined FUN_146f6a060(void)

void FUN_146f6a060(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f9fd60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146f6a0be FUN_146f6a0be body=126 status=ok
// SIG undefined FUN_146f6a0be(void)

void FUN_146f6a0be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f9fd60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f6a12d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f6a148 FUN_146f6a148 body=21 status=ok
// SIG undefined FUN_146f6a148(void)

undefined8 FUN_146f6a148(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146f6a15e FUN_146f6a15e body=86 status=ok
// SIG undefined FUN_146f6a15e(void)

void FUN_146f6a15e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146f6a1b4 FUN_146f6a1b4 body=132 status=ok
// SIG undefined FUN_146f6a1b4(void)

void FUN_146f6a1b4(longlong param_1,int param_2)

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



// FUNCTION 146f6a23a FUN_146f6a23a body=178 status=ok
// SIG undefined FUN_146f6a23a(void)

void FUN_146f6a23a(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1008);
  uVar1 = (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar3 = 0x800;
  if (0x800 < uVar2) {
    if (0x800 < *(uint *)(param_1 + 0x100c)) {
      uVar1 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
    }
    uVar1 = FUN_144a3809e(uVar1 * 2,0);
    uVar3 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar1 >> 1)) {
      uVar3 = uVar1 >> 1 & 0xffffffff;
    }
  }
  uVar2 = (uint)uVar3;
  *(uint *)(param_1 + 0x100c) = uVar2;
  if ((uVar2 < 0x801) && (*(longlong *)(param_1 + 0x1000) == 0)) {
    return;
  }
  if (uVar2 < 0x801) {
    uVar3 = 0;
  }
  FUN_1446efa72(param_1 + 0x1000,0,uVar3,2);
  return;
}



// FUNCTION 146f6a2ed FUN_146f6a2ed body=19 status=ok
// SIG undefined FUN_146f6a2ed(void)

void FUN_146f6a2ed(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 7);
    return;
  }
  return;
}



// FUNCTION 146f6a300 FUN_146f6a300 body=132 status=ok
// SIG undefined FUN_146f6a300(void)

void FUN_146f6a300(longlong param_1,int param_2)

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



// FUNCTION 146f6a386 FUN_146f6a386 body=62 status=ok
// SIG undefined FUN_146f6a386(void)

void FUN_146f6a386(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f6a3c4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}



// FUNCTION 146f6a3c4 FUN_146f6a3c4 body=93 status=ok
// SIG undefined FUN_146f6a3c4(void)

ulonglong FUN_146f6a3c4(uint param_1,uint param_2)

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



// FUNCTION 146f6a421 FUN_146f6a421 body=470 status=ok
// SIG undefined FUN_146f6a421(void)

longlong * FUN_146f6a421(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(undefined4 *)(*param_2 + 8);
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    local_20 = *(undefined4 *)(*param_2 + 0xc);
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    goto LAB_146f6a4d0;
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  local_20 = 1;
  iVar3 = FUN_1448332aa(param_1,&DAT_149e31250);
  if (iVar3 == 0x1f) {
LAB_146f6a588:
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
  }
  else {
    iVar3 = FUN_1448332aa(param_1,&DAT_149e3cc78);
    if (3 < iVar3) goto LAB_146f6a588;
  }
  FUN_146f6a5f8(param_2,local_1c,local_20);
LAB_146f6a4d0:
  (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6a5f8 FUN_146f6a5f8 body=137 status=ok
// SIG undefined FUN_146f6a5f8(void)

void FUN_146f6a5f8(undefined8 **param_1,ulonglong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (*(code *)(&PTR_FUN_149fa7590)[param_2 & 0xffffffff])(&local_20,param_3);
  if (&local_20 != param_1) {
    puVar1 = *param_1;
    *param_1 = local_20;
    local_20 = (undefined8 *)0x0;
    if (puVar1 == (undefined8 *)0x0) goto LAB_146f6a664;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (local_20 != (undefined8 *)0x0) {
    (**(code **)*local_20)(local_20,1);
  }
LAB_146f6a664:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6a682 FUN_146f6a682 body=915 status=ok
// SIG undefined FUN_146f6a682(void)

longlong * FUN_146f6a682(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc28);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e31250);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar6 = FUN_1448332aa(param_1,&DAT_149e3cc28);
    if (iVar6 < 0x1a) {
      puVar1 = (ulonglong *)param_1[1];
      puVar2 = (undefined4 *)*puVar1 + 1;
      if ((undefined4 *)puVar1[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_b8,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_b8);
        }
      }
      else {
        local_b8 = (longlong *)CONCAT44(local_b8._4_4_,*(undefined4 *)*puVar1);
        *puVar1 = (ulonglong)puVar2;
      }
      FUN_146f93950(param_2);
      FUN_146f6aa16(param_1,param_2);
      FUN_146f6acf7(param_1,param_2);
      FUN_146f6afd2(param_1,param_2);
      FUN_146f6b29f(param_1,param_2);
      FUN_146f6b568(param_1,param_2);
      FUN_146f6b82d(param_1,param_2);
      FUN_146f6baf5(param_1,param_2);
      goto LAB_146f6a7a6;
    }
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  uVar5 = local_a0;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    local_58 = param_2 + 2;
    local_60 = (longlong *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_b0 = local_60;
    local_a8 = local_58;
    local_a0 = local_50;
    uVar5 = local_a0;
    local_98 = local_48;
    local_94 = local_44;
    local_80 = 0;
    local_a0._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_b8 = param_2;
    local_90 = param_2;
    local_88 = param_2;
    if (local_a0._4_4_ < (int)local_58[3]) {
      iVar6 = local_a0._4_4_;
      local_a0 = uVar5;
      do {
        uVar8 = uStack_70;
        lVar3 = *(longlong *)(*local_b8 + 8 + (longlong)iVar6 * 0x18);
        if ((*(byte *)(lVar3 + 0x14) & 8) != 0) {
          plVar9 = (longlong *)(*local_b8 + (longlong)iVar6 * 0x18);
          lVar4 = *plVar9;
          plVar9[1] = 0;
          lVar11 = (longlong)(int)uStack_70;
          uVar7 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
          if (uStack_70._4_4_ < uVar7) {
            FUN_146f97df2(&local_78,uVar8 & 0xffffffff);
          }
          local_78[lVar11 * 2] = lVar4;
          local_78[lVar11 * 2 + 1] = lVar3;
          FUN_146f913a2(local_90,local_a0._4_4_);
          local_80 = CONCAT11(local_80._1_1_,1);
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
        FUN_1449c0562(&local_b0);
        iVar6 = local_a0._4_4_;
      } while (local_a0._4_4_ < (int)local_a8[3]);
      uVar5 = local_a0;
      if (((local_80 & 1) != 0) && (local_80._1_1_ == '\x01')) {
        FUN_146f944b4(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34));
        uVar5 = local_a0;
      }
    }
  }
  local_a0 = uVar5;
  FUN_146f97e78(param_1,param_2);
  uVar8 = uStack_70 & 0xffffffff;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    if ((int)uStack_70 == 0) {
      uVar8 = 0;
    }
    else {
      plVar10 = local_78 + (longlong)(int)uStack_70 * 2;
      plVar9 = local_78;
      do {
        local_b0 = plVar9 + 1;
        local_b8 = plVar9;
        FUN_146f98186(param_2,&local_60,&local_b8);
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar10);
      uVar8 = uStack_70 & 0xffffffff;
    }
  }
  FUN_146f97dbe(local_78,uVar8);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146f6a7a6:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6aa16 FUN_146f6aa16 body=736 status=ok
// SIG undefined FUN_146f6aa16(void)

void FUN_146f6aa16(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_146f93ad8(param_1,local_b8);
  puStack_d0 = local_a8;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  iVar12 = 0;
  if (local_90 != 0) {
    FUN_1449c0562(&local_d8);
    iVar12 = local_90;
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = local_d8;
  local_f0 = puStack_d0;
  local_100 = local_b8;
  if ((iStack_c4 != iVar12) || (puStack_d0 != local_a8)) {
    do {
      lVar11 = *local_100;
      lVar10 = (longlong)iStack_e4 * 0x70;
      local_d8 = 0;
      puStack_d0 = (undefined1 *)0x3f80000000000000;
      local_110 = 0;
      local_118 = &local_d8;
      FUN_146f9423a(param_2,local_108,*(undefined8 *)(lVar11 + lVar10),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar11 + lVar10);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6ac4c;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6ac4c:
      lVar11 = lVar11 + lVar10;
      lVar10 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar11 + 0x1c);
      uVar5 = *(undefined4 *)(lVar11 + 0x20);
      uVar6 = *(undefined4 *)(lVar11 + 0x24);
      *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar10 + 0xc) = uVar4;
      *(undefined4 *)(lVar10 + 0x10) = uVar5;
      *(undefined4 *)(lVar10 + 0x14) = uVar6;
      FUN_146f944fa(lVar10 + 0x18,lVar11 + 0x28);
      uVar4 = *(undefined4 *)(lVar11 + 0x54);
      uVar5 = *(undefined4 *)(lVar11 + 0x58);
      uVar6 = *(undefined4 *)(lVar11 + 0x5c);
      *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(lVar11 + 0x50);
      *(undefined4 *)(lVar10 + 0x44) = uVar4;
      *(undefined4 *)(lVar10 + 0x48) = uVar5;
      *(undefined4 *)(lVar10 + 0x4c) = uVar6;
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (local_100 != local_b8 || (local_f0 != local_a8 || iStack_e4 != iVar12));
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146f94546(local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6acf7 FUN_146f6acf7 body=730 status=ok
// SIG undefined FUN_146f6acf7(void)

void FUN_146f6acf7(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146f9457c(param_1,local_98);
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar12 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar12) || (local_b0 != local_88)) {
    do {
      lVar10 = *local_e0;
      lVar11 = (longlong)iStack_c4 * 0x60;
      local_b0 = (undefined1 *)((ulonglong)local_b0 & 0xffffffff00000000);
      local_b8 = 0;
      local_f0 = 0;
      local_f8 = &local_b8;
      FUN_1458c2ed2(param_2,local_e8,*(undefined8 *)(lVar10 + lVar11),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar10 + lVar11);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6af20;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6af20:
      lVar10 = lVar10 + lVar11;
      lVar11 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar10 + 0x14);
      uVar5 = *(undefined4 *)(lVar10 + 0x18);
      uVar6 = *(undefined4 *)(lVar10 + 0x1c);
      *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(lVar10 + 0x10);
      *(undefined4 *)(lVar11 + 0xc) = uVar4;
      *(undefined4 *)(lVar11 + 0x10) = uVar5;
      *(undefined4 *)(lVar11 + 0x14) = uVar6;
      FUN_146f94cf8(lVar11 + 0x18,lVar10 + 0x20);
      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(lVar10 + 0x48);
      *(undefined4 *)(lVar11 + 0x48) = *(undefined4 *)(lVar10 + 0x50);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar12));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146f94d44(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6afd2 FUN_146f6afd2 body=716 status=ok
// SIG undefined FUN_146f6afd2(void)

void FUN_146f6afd2(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146f94d7a(param_1,local_98);
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar12 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar12) || (local_b0 != local_88)) {
    do {
      lVar11 = *local_e0;
      lVar10 = (longlong)iStack_c4 * 0x58;
      local_b8 = 0;
      local_f0 = 0;
      local_f8 = &local_b8;
      FUN_1458c326a(param_2,local_e8,*(undefined8 *)(lVar11 + lVar10),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar11 + lVar10);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6b1f5;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6b1f5:
      lVar11 = lVar11 + lVar10;
      lVar10 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar11 + 0x14);
      uVar5 = *(undefined4 *)(lVar11 + 0x18);
      uVar6 = *(undefined4 *)(lVar11 + 0x1c);
      *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar11 + 0x10);
      *(undefined4 *)(lVar10 + 0xc) = uVar4;
      *(undefined4 *)(lVar10 + 0x10) = uVar5;
      *(undefined4 *)(lVar10 + 0x14) = uVar6;
      FUN_146f954d6(lVar10 + 0x18,lVar11 + 0x20);
      *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar11 + 0x48);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar12));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146f95522(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6b29f FUN_146f6b29f body=712 status=ok
// SIG undefined FUN_146f6b29f(void)

void FUN_146f6b29f(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined4 local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146f95558(param_1,local_98);
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar12 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar12) || (local_b0 != local_88)) {
    do {
      lVar10 = *local_e0;
      lVar11 = (longlong)iStack_c4 * 0x58;
      local_e4 = 0;
      local_f0 = 0;
      local_f8 = &local_e4;
      FUN_146f95cb4(param_2,&local_b8,*(undefined8 *)(lVar10 + lVar11),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar10 + lVar11);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6b4bb;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6b4bb:
      lVar10 = lVar10 + lVar11;
      lVar11 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar10 + 0x14);
      uVar5 = *(undefined4 *)(lVar10 + 0x18);
      uVar6 = *(undefined4 *)(lVar10 + 0x1c);
      *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(lVar10 + 0x10);
      *(undefined4 *)(lVar11 + 0xc) = uVar4;
      *(undefined4 *)(lVar11 + 0x10) = uVar5;
      *(undefined4 *)(lVar11 + 0x14) = uVar6;
      FUN_146f95f24(lVar11 + 0x18,lVar10 + 0x20);
      *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(lVar10 + 0x48);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar12));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146f95f70(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6b568 FUN_146f6b568 body=708 status=ok
// SIG undefined FUN_146f6b568(void)

void FUN_146f6b568(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined4 local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146f95fa6(param_1,local_98);
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar12 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar12) || (local_b0 != local_88)) {
    do {
      lVar10 = *local_e0;
      lVar11 = (longlong)iStack_c4 * 0x58;
      local_e4 = 0;
      local_f0 = 0;
      local_f8 = &local_e4;
      FUN_146f96702(param_2,&local_b8,*(undefined8 *)(lVar10 + lVar11),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar10 + lVar11);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6b784;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6b784:
      lVar10 = lVar10 + lVar11;
      lVar11 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar10 + 0x14);
      uVar5 = *(undefined4 *)(lVar10 + 0x18);
      uVar6 = *(undefined4 *)(lVar10 + 0x1c);
      *(undefined4 *)(lVar11 + 8) = *(undefined4 *)(lVar10 + 0x10);
      *(undefined4 *)(lVar11 + 0xc) = uVar4;
      *(undefined4 *)(lVar11 + 0x10) = uVar5;
      *(undefined4 *)(lVar11 + 0x14) = uVar6;
      FUN_146f96890(lVar11 + 0x18,lVar10 + 0x20);
      *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(lVar10 + 0x48);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar12));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146f968dc(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6b82d FUN_146f6b82d body=711 status=ok
// SIG undefined FUN_146f6b82d(void)

void FUN_146f6b82d(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_e1;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146f96912(param_1,local_98);
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar12 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar12) || (local_b0 != local_88)) {
    do {
      lVar11 = *local_e0;
      lVar10 = (longlong)iStack_c4 * 0x58;
      local_e1 = 0;
      local_f0 = 0;
      local_f8 = &local_e1;
      FUN_146f9706e(param_2,&local_b8,*(undefined8 *)(lVar11 + lVar10),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar11 + lVar10);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6ba4c;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6ba4c:
      lVar11 = lVar11 + lVar10;
      lVar10 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar11 + 0x14);
      uVar5 = *(undefined4 *)(lVar11 + 0x18);
      uVar6 = *(undefined4 *)(lVar11 + 0x1c);
      *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar11 + 0x10);
      *(undefined4 *)(lVar10 + 0xc) = uVar4;
      *(undefined4 *)(lVar10 + 0x10) = uVar5;
      *(undefined4 *)(lVar10 + 0x14) = uVar6;
      FUN_146f972d6(lVar10 + 0x18,lVar11 + 0x20);
      *(undefined1 *)(lVar10 + 0x40) = *(undefined1 *)(lVar11 + 0x48);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar12));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146f97322(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6baf5 FUN_146f6baf5 body=716 status=ok
// SIG undefined FUN_146f6baf5(void)

void FUN_146f6baf5(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146f97358(param_1,local_98);
  local_b0 = local_88;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar12 = 0;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar12 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar12) || (local_b0 != local_88)) {
    do {
      lVar11 = *local_e0;
      lVar10 = (longlong)iStack_c4 * 0x58;
      local_b8 = 0;
      local_f0 = 0;
      local_f8 = &local_b8;
      FUN_146f97abe(param_2,local_e8,*(undefined8 *)(lVar11 + lVar10),0);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar2 = *(longlong *)(lVar11 + lVar10);
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar8 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar8 = param_2 + 7;
        }
        iVar7 = *(int *)((longlong)plVar8 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar8 = (longlong *)(*param_2 + (longlong)iVar7 * 0x18);
            if (*plVar8 == lVar2) goto LAB_146f6bd18;
            iVar7 = (int)plVar8[2];
          } while (iVar7 != -1);
        }
      }
      plVar8 = (longlong *)0x0;
LAB_146f6bd18:
      lVar11 = lVar11 + lVar10;
      lVar10 = plVar8[1];
      uVar4 = *(undefined4 *)(lVar11 + 0x14);
      uVar5 = *(undefined4 *)(lVar11 + 0x18);
      uVar6 = *(undefined4 *)(lVar11 + 0x1c);
      *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar11 + 0x10);
      *(undefined4 *)(lVar10 + 0xc) = uVar4;
      *(undefined4 *)(lVar10 + 0x10) = uVar5;
      *(undefined4 *)(lVar10 + 0x14) = uVar6;
      FUN_146f97d3c(lVar10 + 0x18,lVar11 + 0x20);
      *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar11 + 0x48);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar12));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146f97d88(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6bdc2 FUN_146f6bdc2 body=483 status=ok
// SIG undefined FUN_146f6bdc2(void)

void FUN_146f6bdc2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *plStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *plStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  plVar1 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  plStack_58 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = (int)param_2[5];
  }
  local_80 = local_60;
  plStack_78 = plStack_58;
  local_70 = local_50;
  iStack_6c = iStack_4c;
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_88 = param_2;
  if ((iStack_4c != iVar6) || (plStack_58 != plVar1)) {
    do {
      iVar4 = *(int *)(*local_88 + (longlong)iStack_6c * 8) + 1;
      if (iVar4 <= (int)param_1[10]) {
        iVar4 = (int)param_1[10];
      }
      *(int *)(param_1 + 10) = iVar4;
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_2 || (plStack_78 != plVar1 || iStack_6c != iVar6));
  }
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  plStack_58 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = (int)param_1[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = local_60;
  plStack_78 = plStack_58;
  local_88 = param_1;
  if ((iStack_4c != iVar6) || (plStack_58 != plVar1)) {
    do {
      lVar2 = *local_88;
      lVar5 = (longlong)iStack_6c;
      iVar4 = (**(code **)(**(longlong **)(lVar2 + 8 + lVar5 * 0x18) + 0x68))();
      if (0 < iVar4) {
        plVar3 = *(longlong **)(lVar2 + lVar5 * 0x18 + 8);
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 || (plStack_78 != plVar1 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6bfa6 FUN_146f6bfa6 body=1 status=ok
// SIG undefined FUN_146f6bfa6(void)

void FUN_146f6bfa6(void)

{
  return;
}



// FUNCTION 146f6bfa8 FUN_146f6bfa8 body=513 status=ok
// SIG undefined FUN_146f6bfa8(void)

undefined8 * FUN_146f6bfa8(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  param_1[0x25] = 0x800000001;
  *(undefined4 *)(param_1 + 0x26) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x100;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 1;
  param_1[0x2c] = 0x800000001;
  *(undefined4 *)(param_1 + 0x2d) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x100;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x32) = 1;
  param_1[0x33] = 0x800000001;
  *(undefined4 *)(param_1 + 0x34) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0x100;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x39) = 1;
  param_1[0x3a] = 0x800000001;
  *(undefined4 *)(param_1 + 0x3b) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 0x100;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  param_1[0x41] = 0x800000001;
  *(undefined4 *)(param_1 + 0x42) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x214) = 0x100;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x47) = 1;
  param_1[0x48] = 0x800000001;
  *(undefined4 *)(param_1 + 0x49) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x24c) = 0x100;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 1;
  param_1[0x4f] = 0x800000001;
  *(undefined4 *)(param_1 + 0x50) = 0xff;
  *(undefined2 *)((longlong)param_1 + 0x284) = 0x100;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x55) = 1;
  param_1[0x56] = 0x800000001;
  *(undefined4 *)(param_1 + 0x57) = 0xff;
  *(undefined2 *)((longlong)param_1 + 700) = 0x100;
  FUN_146f90cc4(param_1);
  FUN_146f6c1aa(param_1);
  return param_1;
}



// FUNCTION 146f6c1aa FUN_146f6c1aa body=1544 status=ok
// SIG undefined FUN_146f6c1aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f6c1aa(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  lVar7 = _DAT_00000000;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    param_1[10] = _DAT_00000000;
    param_1[0xb] = lVar7;
    lVar7 = _DAT_00000000;
    param_1[0xc] = _DAT_00000000;
    param_1[0xd] = lVar7;
    lVar7 = _DAT_00000000;
    param_1[0xe] = _DAT_00000000;
    param_1[0xf] = lVar7;
  }
  else {
    uVar1 = (uint)((ulonglong)DAT_14c99c140 >> 0x10);
    uVar3 = (uint)DAT_14c99c140 & 0xffff;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar4 = (int)param_1[9] - 1;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c140 >> 0x20) + ((uint)DAT_14c99c140 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 == -1) {
      plVar8 = (longlong *)0x0;
    }
    else {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar5 == DAT_14c99c140) goto LAB_146f6c4c5;
        iVar9 = (int)plVar5[2];
      } while (iVar9 != -1);
      plVar5 = (longlong *)0x0;
LAB_146f6c4c5:
      plVar8 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
    }
    param_1[10] = *plVar8;
    uVar1 = (uint)((ulonglong)DAT_14c99c148 >> 0x10);
    uVar3 = (uint)DAT_14c99c148 & 0xffff;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c148 >> 0x20) + ((uint)DAT_14c99c148 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 == -1) {
      plVar8 = (longlong *)0x0;
    }
    else {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar5 == DAT_14c99c148) goto LAB_146f6c542;
        iVar9 = (int)plVar5[2];
      } while (iVar9 != -1);
      plVar5 = (longlong *)0x0;
LAB_146f6c542:
      plVar8 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
    }
    param_1[0xb] = *plVar8;
    uVar1 = (uint)((ulonglong)DAT_14c99c150 >> 0x10);
    uVar3 = (uint)DAT_14c99c150 & 0xffff;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c150 >> 0x20) + ((uint)DAT_14c99c150 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 == -1) {
      plVar8 = (longlong *)0x0;
    }
    else {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar5 == DAT_14c99c150) goto LAB_146f6c5bf;
        iVar9 = (int)plVar5[2];
      } while (iVar9 != -1);
      plVar5 = (longlong *)0x0;
LAB_146f6c5bf:
      plVar8 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
    }
    param_1[0xc] = *plVar8;
    uVar1 = (uint)((ulonglong)DAT_14c99c158 >> 0x10);
    uVar3 = (uint)DAT_14c99c158 & 0xffff;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c158 >> 0x20) + ((uint)DAT_14c99c158 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 == -1) {
      plVar8 = (longlong *)0x0;
    }
    else {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar5 == DAT_14c99c158) goto LAB_146f6c63c;
        iVar9 = (int)plVar5[2];
      } while (iVar9 != -1);
      plVar5 = (longlong *)0x0;
LAB_146f6c63c:
      plVar8 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
    }
    param_1[0xd] = *plVar8;
    uVar1 = (uint)((ulonglong)DAT_14c99c160 >> 0x10);
    uVar3 = (uint)DAT_14c99c160 & 0xffff;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c160 >> 0x20) + ((uint)DAT_14c99c160 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 == -1) {
      plVar8 = (longlong *)0x0;
    }
    else {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar5 == DAT_14c99c160) goto LAB_146f6c6b9;
        iVar9 = (int)plVar5[2];
      } while (iVar9 != -1);
      plVar5 = (longlong *)0x0;
LAB_146f6c6b9:
      plVar8 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
    }
    lVar7 = *plVar8;
    param_1[0xe] = lVar7;
    uVar1 = (uint)((ulonglong)DAT_14c99c168 >> 0x10);
    uVar3 = (uint)DAT_14c99c168 & 0xffff;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c168 >> 0x20) + ((uint)DAT_14c99c168 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 == -1) {
      plVar8 = (longlong *)0x0;
    }
    else {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar5 == DAT_14c99c168) goto LAB_146f6c736;
        iVar9 = (int)plVar5[2];
      } while (iVar9 != -1);
      plVar5 = (longlong *)0x0;
LAB_146f6c736:
      plVar8 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
      }
    }
    param_1[0xf] = *plVar8;
    uVar1 = (uint)((ulonglong)DAT_14c99c170 >> 0x10);
    uVar3 = (uint)DAT_14c99c170 & 0xffff;
    iVar9 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14c99c170 >> 0x20) + ((uint)DAT_14c99c170 << 0x10 | uVar3)
                     + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4) & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar9 * 0x18);
        if (*plVar2 == DAT_14c99c170) goto LAB_146f6c202;
        iVar9 = (int)plVar2[2];
      } while (iVar9 != -1);
    }
  }
  plVar2 = (longlong *)0x0;
LAB_146f6c202:
  plVar5 = plVar2 + 1;
  if (plVar2 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  param_1[0x10] = *plVar5;
  lVar6 = *(longlong *)(lVar7 + 0x80);
  if (*(longlong *)(lVar7 + 0x80) == 0) {
    lVar6 = lVar7;
  }
  local_2c = 0xffffffff;
  FUN_1458c2a18(lVar6 + 0x20,&local_40,DAT_14c99c100,&local_2c);
  *(undefined4 *)(param_1 + 0x19) = local_40;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_3c;
  *(undefined4 *)(param_1 + 0x1a) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_34;
  lVar7 = *(longlong *)(param_1[0xe] + 0x80);
  if (lVar7 == 0) {
    lVar7 = param_1[0xe];
  }
  local_2c = 0xffffffff;
  FUN_1458c2baa(lVar7 + 0x20,&local_40,DAT_14c99c0f8,&local_2c);
  *(undefined4 *)(param_1 + 0x17) = local_40;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_3c;
  *(undefined4 *)(param_1 + 0x18) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_34;
  lVar7 = *(longlong *)(param_1[0xb] + 0x80);
  if (lVar7 == 0) {
    lVar7 = param_1[0xb];
  }
  FUN_146f6c7dc(lVar7 + 0x20,&local_40,DAT_14c99c0d8);
  param_1[0x11] = CONCAT44(uStack_3c,local_40);
  lVar7 = *(longlong *)(param_1[0xd] + 0x80);
  if (lVar7 == 0) {
    lVar7 = param_1[0xd];
  }
  FUN_146f6c890(lVar7 + 0x20,&local_40,DAT_14c99c0e0);
  *(undefined4 *)(param_1 + 0x12) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x94) = uStack_3c;
  *(undefined4 *)(param_1 + 0x13) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_34;
  lVar7 = param_1[0xe];
  lVar6 = *(longlong *)(lVar7 + 0x80);
  if (*(longlong *)(lVar7 + 0x80) == 0) {
    lVar6 = lVar7;
  }
  FUN_146f6c950(lVar6 + 0x20,&local_40,DAT_14c99c0e8);
  *(undefined4 *)(param_1 + 0x14) = local_40;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_3c;
  *(undefined4 *)(param_1 + 0x15) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xac) = uStack_34;
  lVar6 = *(longlong *)(lVar7 + 0x80);
  if (*(longlong *)(lVar7 + 0x80) == 0) {
    lVar6 = lVar7;
  }
  FUN_146f6ca10(lVar6 + 0x20,&local_40,DAT_14c99c0f0);
  param_1[0x16] = CONCAT44(uStack_3c,local_40);
  lVar6 = *(longlong *)(lVar7 + 0x80);
  if (*(longlong *)(lVar7 + 0x80) == 0) {
    lVar6 = lVar7;
  }
  FUN_146f6cac4(lVar6 + 0x20,&local_40,DAT_14c99c110);
  param_1[0x1d] = CONCAT44(uStack_3c,local_40);
  lVar6 = *(longlong *)(lVar7 + 0x80);
  if (*(longlong *)(lVar7 + 0x80) == 0) {
    lVar6 = lVar7;
  }
  FUN_146f6cb78(lVar6 + 0x20,&local_40,DAT_14c99c108);
  *(undefined4 *)(param_1 + 0x1b) = local_40;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uStack_3c;
  *(undefined4 *)(param_1 + 0x1c) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uStack_34;
  lVar7 = *(longlong *)(param_1[0xf] + 0x80);
  if (lVar7 == 0) {
    lVar7 = param_1[0xf];
  }
  FUN_146f6cac4(lVar7 + 0x20,&local_40,DAT_14c99c120);
  param_1[0x1e] = CONCAT44(uStack_3c,local_40);
  lVar7 = *(longlong *)(param_1[10] + 0x80);
  if (lVar7 == 0) {
    lVar7 = param_1[10];
  }
  FUN_146f6cc38(lVar7 + 0x20,&local_40,DAT_14c99c0d0);
  param_1[0x1f] = CONCAT44(uStack_3c,local_40);
  FUN_1458c25d2(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6c7b4 FUN_146f6c7b4 body=40 status=ok
// SIG undefined FUN_146f6c7b4(void)

longlong FUN_146f6c7b4(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146f90cc4(param_1);
    FUN_146f6c1aa(param_1);
  }
  return param_1;
}



// FUNCTION 146f6c7dc FUN_146f6c7dc body=180 status=ok
// SIG undefined FUN_146f6c7dc(void)

void FUN_146f6c7dc(longlong *param_1,longlong *param_2,longlong param_3)

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
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146f6c7e9;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146f6c7e9:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146f6c890 FUN_146f6c890 body=192 status=ok
// SIG undefined FUN_146f6c890(void)

void FUN_146f6c890(longlong *param_1,longlong *param_2,longlong param_3)

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
             (lVar1 = plVar4[1], *(int *)(lVar1 + 8) != 4)) goto LAB_146f6c8a3;
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          break;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      goto LAB_146f6c8a5;
    }
  }
LAB_146f6c8a3:
  lVar1 = 0;
LAB_146f6c8a5:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 146f6c950 FUN_146f6c950 body=192 status=ok
// SIG undefined FUN_146f6c950(void)

void FUN_146f6c950(longlong *param_1,longlong *param_2,longlong param_3)

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
             (lVar1 = plVar4[1], *(int *)(lVar1 + 8) != 4)) goto LAB_146f6c963;
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          break;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      goto LAB_146f6c965;
    }
  }
LAB_146f6c963:
  lVar1 = 0;
LAB_146f6c965:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 146f6ca10 FUN_146f6ca10 body=180 status=ok
// SIG undefined FUN_146f6ca10(void)

void FUN_146f6ca10(longlong *param_1,longlong *param_2,longlong param_3)

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
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146f6ca1d;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146f6ca1d:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146f6cac4 FUN_146f6cac4 body=180 status=ok
// SIG undefined FUN_146f6cac4(void)

void FUN_146f6cac4(longlong *param_1,longlong *param_2,longlong param_3)

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
              (lVar1 = plVar4[1], *(int *)(lVar1 + 8) == 4)) && (*(int *)(lVar1 + 0xc) == 1))
          goto LAB_146f6cad1;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146f6cad1:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146f6cb78 FUN_146f6cb78 body=192 status=ok
// SIG undefined FUN_146f6cb78(void)

void FUN_146f6cb78(longlong *param_1,longlong *param_2,longlong param_3)

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
             (lVar1 = plVar4[1], *(int *)(lVar1 + 8) != 4)) goto LAB_146f6cb8b;
          uVar2 = *(undefined4 *)(lVar1 + 0xc);
          break;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      goto LAB_146f6cb8d;
    }
  }
LAB_146f6cb8b:
  lVar1 = 0;
LAB_146f6cb8d:
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 146f6cc38 FUN_146f6cc38 body=180 status=ok
// SIG undefined FUN_146f6cc38(void)

void FUN_146f6cc38(longlong *param_1,longlong *param_2,longlong param_3)

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
          goto LAB_146f6cc45;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146f6cc45:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146f6ccec FUN_146f6ccec body=4482 status=ok
// SIG undefined FUN_146f6ccec(void)

void FUN_146f6ccec(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_4a8 [40];
  undefined8 local_480;
  int local_474;
  longlong local_470;
  longlong local_468;
  undefined8 local_460;
  undefined4 local_458;
  longlong *local_450;
  undefined8 local_448;
  undefined1 *local_440;
  uint local_438;
  uint uStack_434;
  undefined4 local_430;
  undefined4 local_42c;
  ulonglong local_428;
  undefined1 *local_420;
  uint local_418;
  uint uStack_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined4 local_3d4;
  longlong local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  longlong local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_31c;
  undefined4 local_314;
  longlong local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  int local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  longlong local_188;
  ulonglong uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  int local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  int local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_208 = 0;
  local_200 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_1fc = 0xffffffff00000080;
  local_1f4 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_268 = 0;
  local_260 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_25c = 0xffffffff00000080;
  local_254 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2bc = 0xffffffff00000080;
  local_2b4 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_328 = 0;
  local_320 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_31c = 0xffffffff00000080;
  local_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_388 = 0;
  local_380 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_37c = 0xffffffff00000080;
  local_374 = 0;
  local_368 = 0;
  local_360 = 0;
  local_358 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0xffffffff00000080;
  local_3d4 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  FUN_146f992d9(param_2,&local_88);
  FUN_146f99d85(param_2,&local_c8);
  FUN_146f9a556(param_2,&local_108);
  FUN_146f9ab6f(param_2,&local_188);
  FUN_146f9b7e5(param_2,&local_1c8);
  FUN_146f6a682(param_2,&local_228);
  FUN_146f6a682(param_2,&local_288);
  FUN_146f6a682(param_2,&local_2e8);
  FUN_146f6a682(param_2,&local_3a8);
  FUN_146f6a682(param_2,&local_408);
  uVar7 = uStack_80 & 0xffffffff;
  FUN_146f9bdc0(&local_228,uVar7 | 0x100000000);
  FUN_146f9bed0(&local_228,uVar7);
  uVar7 = uStack_c0 & 0xffffffff;
  FUN_146f9c1ec(&local_288,uVar7 | 0x100000000);
  FUN_146f9bed0(&local_288,uVar7);
  uVar7 = uStack_100 & 0xffffffff;
  FUN_146f9c514(&local_2e8,uVar7 | 0x100000000);
  FUN_146f9bed0(&local_2e8,uVar7);
  uVar7 = uStack_180 & 0xffffffff;
  FUN_146f9c83c(&local_3a8,uVar7 | 0x100000000);
  FUN_146f9bed0(&local_3a8,uVar7);
  uVar7 = uStack_1c0 & 0xffffffff;
  FUN_146f9cb64(&local_408,uVar7 | 0x100000000);
  FUN_146f9bed0(&local_408,uVar7);
  local_480 = param_2;
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc28);
  uVar4 = local_480;
  if (0x22 < iVar5) {
    FUN_146f9ce8c(local_480,&local_148);
    FUN_146f6a682(uVar4,&local_348);
    uVar7 = uStack_140 & 0xffffffff;
    FUN_146f9d37c(&local_348,uVar7 | 0x100000000);
    FUN_146f9bed0(&local_348,uVar7);
  }
  FUN_1458c1fc4(param_1);
  local_428 = 0x100000000;
  local_418 = 0xffffffff;
  uStack_414 = 0;
  local_410 = 0;
  iVar5 = 0;
  local_420 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_428);
    iVar5 = local_60;
  }
  local_438 = local_418;
  uStack_434 = uStack_414;
  local_430 = local_410;
  local_42c = local_40c;
  local_448 = local_428;
  local_440 = local_420;
  local_450 = &local_88;
  if (local_420 != local_78 || uStack_414 != iVar5) {
    do {
      uVar11 = uStack_434;
      if (*(int *)(local_440 + 0x18) <= (int)uStack_434) {
        uVar11 = -1;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x50);
      }
      FUN_146f6e144(lVar9,uVar11);
      local_438 = local_438 & ~local_448._4_4_;
      FUN_1449c0562(&local_448);
    } while (((uStack_434 != iVar5) || (local_440 != local_78)) || (local_450 != &local_88));
  }
  local_428 = 0x100000000;
  local_418 = 0xffffffff;
  uStack_414 = 0;
  local_410 = 0;
  iVar5 = 0;
  local_420 = local_b8;
  if (local_a0 != 0) {
    FUN_1449c0562(&local_428);
    iVar5 = local_a0;
  }
  local_438 = local_418;
  uStack_434 = uStack_414;
  local_430 = local_410;
  local_42c = local_40c;
  local_448 = local_428;
  local_440 = local_420;
  local_450 = &local_c8;
  if (local_420 != local_b8 || uStack_414 != iVar5) {
    do {
      uVar11 = uStack_434;
      if (*(int *)(local_440 + 0x18) <= (int)uStack_434) {
        uVar11 = -1;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x58);
      }
      FUN_146f6e144(lVar9,uVar11);
      uVar1 = *(undefined4 *)(local_c8 + (longlong)(int)uVar11 * 0x18);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar8 = plVar3;
      }
      *(undefined4 *)(*plVar8 + (longlong)(int)((int)plVar8[2] * uVar11) * 4) = uVar1;
      FUN_146f6de70(param_1 + 0x100,uVar1,(longlong)(int)uVar11,0);
      local_438 = local_438 & ~local_448._4_4_;
      FUN_1449c0562(&local_448);
    } while (((uStack_434 != iVar5) || (local_440 != local_b8)) || (local_450 != &local_c8));
  }
  local_428 = 0x100000000;
  local_418 = 0xffffffff;
  uStack_414 = 0;
  local_410 = 0;
  uVar11 = 0;
  local_420 = local_f8;
  if (local_e0 != 0) {
    FUN_1449c0562(&local_428);
    uVar11 = local_e0;
  }
  local_438 = local_418;
  uStack_434 = uStack_414;
  local_430 = local_410;
  local_42c = local_40c;
  local_448 = local_428;
  local_440 = local_420;
  local_450 = &local_108;
  if (local_420 != local_f8 || uStack_414 != uVar11) {
    do {
      uVar7 = (ulonglong)uStack_434;
      if (*(int *)(local_440 + 0x18) <= (int)uStack_434) {
        uVar7 = 0xffffffff;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x68);
      }
      iVar5 = (int)uVar7;
      FUN_146f6e144(lVar9,uVar7);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar8 = plVar3;
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar8 = (longlong *)((longlong)(iVar5 >> 8) * 0xc18 + *plVar8);
        iVar6 = *(int *)((longlong)plVar8 + (uVar7 & 0xff) * 4 + 0x10);
      }
      else {
        iVar6 = (int)plVar8[2] * iVar5;
      }
      uVar1 = *(undefined4 *)(local_108 + (longlong)iVar5 * 0x18);
      uVar2 = *(undefined4 *)(local_108 + 4 + (longlong)iVar5 * 0x18);
      *(undefined4 *)(*plVar8 + (longlong)iVar6 * 4) = uVar1;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar8 = plVar3;
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar8 = (longlong *)((longlong)(iVar5 >> 8) * 0xc18 + *plVar8);
        iVar5 = *(int *)((longlong)plVar8 + (uVar7 & 0xff) * 4 + 0x10);
      }
      else {
        iVar5 = (int)plVar8[2] * iVar5;
      }
      *(undefined4 *)(*plVar8 + 4 + (longlong)iVar5 * 4) = uVar2;
      FUN_146f6de70(param_1 + 0x138,uVar1,uVar7,0);
      FUN_146f6de70(param_1 + 0x138,uVar2,uVar7,0);
      local_438 = local_438 & ~local_448._4_4_;
      FUN_1449c0562(&local_448);
    } while (((uStack_434 != uVar11) || (local_440 != local_f8)) || (local_450 != &local_108));
  }
  local_428 = 0x100000000;
  local_418 = 0xffffffff;
  uStack_414 = 0;
  local_410 = 0;
  iVar5 = 0;
  local_420 = local_1b8;
  if (local_1a0 != 0) {
    FUN_1449c0562(&local_428);
    iVar5 = local_1a0;
  }
  local_438 = local_418;
  uStack_434 = uStack_414;
  local_430 = local_410;
  local_42c = local_40c;
  local_448 = local_428;
  local_440 = local_420;
  local_450 = &local_1c8;
  if (local_420 != local_1b8 || uStack_414 != iVar5) {
    do {
      uVar11 = uStack_434;
      if (*(int *)(local_440 + 0x18) <= (int)uStack_434) {
        uVar11 = -1;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x80);
      }
      FUN_146f6e144(lVar9,uVar11);
      local_438 = local_438 & ~local_448._4_4_;
      FUN_1449c0562(&local_448);
    } while (((uStack_434 != iVar5) || (local_440 != local_1b8)) || (local_450 != &local_1c8));
  }
  local_420 = local_178;
  local_428 = 0x100000000;
  local_418 = 0xffffffff;
  uStack_414 = 0;
  local_410 = 0;
  iVar5 = 0;
  if (local_160 != 0) {
    FUN_1449c0562(&local_428);
    iVar5 = local_160;
  }
  local_438 = local_418;
  uStack_434 = uStack_414;
  local_430 = local_410;
  local_42c = local_40c;
  local_448 = local_428;
  local_440 = local_420;
  local_450 = &local_188;
  if (local_420 != local_178 || uStack_414 != iVar5) {
    do {
      uVar11 = uStack_434;
      if (*(int *)(local_440 + 0x18) <= (int)uStack_434) {
        uVar11 = -1;
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x78);
      }
      FUN_146f6e144(lVar9,uVar11);
      lVar9 = (longlong)(int)uVar11;
      uVar1 = *(undefined4 *)(local_188 + 0x20 + lVar9 * 0x28);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar8 = plVar3;
      }
      *(undefined4 *)(*plVar8 + (longlong)(int)((int)plVar8[2] * uVar11) * 4) = uVar1;
      FUN_146f6de70(param_1 + 0x288,uVar1,lVar9,0);
      iVar6 = FUN_1448332aa(local_480,&DAT_149e3cc28);
      if (iVar6 < 0x23) {
        local_460 = *(undefined8 *)(local_188 + lVar9 * 0x28);
        local_458 = *(undefined4 *)(local_188 + 8 + lVar9 * 0x28);
        FUN_146f6e1e4(param_1,uVar11);
      }
      local_438 = local_438 & ~local_448._4_4_;
      FUN_1449c0562(&local_448);
    } while (((uStack_434 != iVar5) || (local_440 != local_178)) || (local_450 != &local_188));
  }
  iVar5 = FUN_1448332aa(local_480,&DAT_149e3cc28);
  if (0x22 < iVar5) {
    local_420 = local_138;
    local_428 = 0x100000000;
    local_418 = 0xffffffff;
    uStack_414 = 0;
    local_410 = 0;
    iVar5 = 0;
    if (local_120 != 0) {
      FUN_1449c0562(&local_428);
      iVar5 = local_120;
    }
    local_438 = local_418;
    uStack_434 = uStack_414;
    local_430 = local_410;
    local_42c = local_40c;
    local_448 = local_428;
    local_440 = local_420;
    local_450 = &local_148;
    if (local_420 != local_138 || uStack_414 != iVar5) {
      local_468 = param_1 + 0x218;
      local_470 = param_1 + 0x250;
      local_474 = iVar5;
      do {
        uVar11 = uStack_434;
        if (*(int *)(local_440 + 0x18) <= (int)uStack_434) {
          uVar11 = -1;
        }
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(param_1 + 0x70);
        }
        FUN_146f6e144(lVar9,uVar11);
        iVar5 = *(int *)(local_148 + 0xc + (longlong)(int)uVar11 * 0x10);
        uVar1 = *(undefined4 *)(local_188 + 0x20 + (longlong)iVar5 * 0x28);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
        if (plVar3 != (longlong *)0x0) {
          plVar8 = plVar3;
        }
        *(int *)(*plVar8 + (longlong)(int)((int)plVar8[2] * uVar11) * 4) = iVar5;
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
        if (plVar3 != (longlong *)0x0) {
          plVar8 = plVar3;
        }
        *(undefined4 *)(*plVar8 + (longlong)(int)((int)plVar8[2] * uVar11) * 4) = uVar1;
        FUN_146f6de70(local_468,(longlong)iVar5,uVar11,0);
        FUN_146f6de70(local_470,uVar1,uVar11,0);
        uVar7 = (ulonglong)(byte)uVar11;
        lVar12 = (longlong)((int)uVar11 >> 8);
        lVar9 = 0;
        do {
          iVar5 = *(int *)(local_148 + (longlong)(int)uVar11 * 0x10 + lVar9 * 4);
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
          if (plVar3 != (longlong *)0x0) {
            plVar8 = plVar3;
          }
          if (*(int *)(param_1 + 0xa8) == 0) {
            plVar8 = (longlong *)(lVar12 * 0xc18 + *plVar8);
            iVar6 = *(int *)((longlong)plVar8 + uVar7 * 4 + 0x10);
          }
          else {
            iVar6 = (int)plVar8[2] * uVar11;
          }
          *(int *)((longlong)iVar6 * 4 + *plVar8 + lVar9 * 4) = iVar5;
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
          if (plVar3 != (longlong *)0x0) {
            plVar8 = plVar3;
          }
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
          plVar10 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
          if (plVar3 != (longlong *)0x0) {
            plVar10 = plVar3;
          }
          if (*(int *)(param_1 + 0xd0) == 0) {
            plVar10 = (longlong *)(lVar12 * 0xc18 + *plVar10);
            iVar6 = *(int *)((longlong)plVar10 + uVar7 * 4 + 0x10);
          }
          else {
            iVar6 = (int)plVar10[2] * uVar11;
          }
          *(undefined4 *)((longlong)iVar6 * 4 + *plVar10 + lVar9 * 4) =
               *(undefined4 *)(*plVar8 + (longlong)((int)plVar8[2] * iVar5) * 4);
          FUN_146f6de70(param_1 + 0x170,iVar5,uVar11,0);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        lVar9 = 1;
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
          plVar8 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
          if (plVar3 != (longlong *)0x0) {
            plVar8 = plVar3;
          }
          if (*(int *)(param_1 + 0xd0) == 0) {
            plVar8 = (longlong *)(lVar12 * 0xc18 + *plVar8);
            iVar5 = *(int *)((longlong)plVar8 + uVar7 * 4 + 0x10);
          }
          else {
            iVar5 = (int)plVar8[2] * uVar11;
          }
          FUN_146f6df8a(param_1,&local_428,
                        *(undefined4 *)((longlong)iVar5 * 4 + *plVar8 + -4 + lVar9 * 4));
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
          if (plVar3 != (longlong *)0x0) {
            plVar8 = plVar3;
          }
          if (*(int *)(param_1 + 0xc0) == 0) {
            plVar8 = (longlong *)(lVar12 * 0xc18 + *plVar8);
            iVar5 = *(int *)((longlong)plVar8 + uVar7 * 4 + 0x10);
          }
          else {
            iVar5 = (int)plVar8[2] * uVar11;
          }
          *(undefined4 *)((longlong)iVar5 * 4 + *plVar8 + -4 + lVar9 * 4) = (undefined4)local_428;
          FUN_146f6de70(param_1 + 0x1a8,local_428 & 0xffffffff,uVar11,0);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 4);
        local_438 = local_438 & ~local_448._4_4_;
        FUN_1449c0562(&local_448);
      } while (((uStack_434 != local_474) || (local_440 != local_138)) || (local_450 != &local_148))
      ;
    }
  }
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146f91306(lVar9 + 0x20,DAT_14c99c0d0);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
  }
  FUN_142aa7ba8(lVar9 + 0x20,&local_228);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x58);
  }
  FUN_142aa7ba8(lVar9 + 0x20,&local_288);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x68);
  }
  FUN_142aa7ba8(lVar9 + 0x20,&local_2e8);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x78);
  }
  FUN_142aa7ba8(lVar9 + 0x20,&local_3a8);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x80);
  }
  FUN_142aa7ba8(lVar9 + 0x20,&local_408);
  iVar5 = FUN_1448332aa(local_480,&DAT_149e3cc28);
  if (0x22 < iVar5) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x70);
    }
    FUN_142aa7ba8(lVar9 + 0x20,&local_348);
  }
  FUN_146f6c1aa(param_1);
  FUN_146f6f194(param_1);
  local_3c0 = 0;
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411db5ac(&local_408);
  local_360 = 0;
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  FUN_1411db5ac(&local_3a8);
  local_300 = 0;
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  FUN_1411db5ac(&local_348);
  local_2a0 = 0;
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411db5ac(&local_2e8);
  local_240 = 0;
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  FUN_1411db5ac(&local_288);
  local_1e0 = 0;
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411db5ac(&local_228);
  FUN_146f914e6(&local_1c8);
  FUN_146f91682(&local_188);
  FUN_146f9183c(&local_148);
  FUN_146f918f4(&local_108);
  FUN_146f91a90(&local_c8);
  FUN_146f91c2c(&local_88);
  if ((local_48 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6de70 FUN_146f6de70 body=255 status=ok
// SIG undefined FUN_146f6de70(void)

void FUN_146f6de70(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_2c = param_3;
  if ((*(char *)((longlong)param_1 + 0x34) == '\0') && (*(char *)((longlong)param_1 + 0x35) == '\0')
     ) {
    if ((int)param_1[1] <= param_4) {
      FUN_1412e7bec(param_1,param_4 + 1,1);
    }
    if (*(int *)((longlong)param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    iVar3 = (int)param_2 >> ((byte)*(int *)((longlong)param_1 + 0x2c) & 0x1f);
    lVar2 = *param_1;
    lVar4 = (longlong)param_4 * 0xb0;
    if (iVar3 < *(int *)(lVar2 + 8 + lVar4)) {
      cVar1 = FUN_146f79c32((longlong)iVar3 * 0x58 + *(longlong *)(lVar2 + lVar4),
                            param_2 & *(uint *)(param_1 + 6),param_3);
      if (cVar1 != '\0') goto LAB_146f6dea0;
      lVar2 = *param_1;
    }
    FUN_1447cbafe(lVar2 + lVar4 + 0x10,local_34,&local_30,0);
    FUN_1447cbafe(*param_1 + lVar4 + 0x60,local_34,&local_2c,0);
  }
LAB_146f6dea0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6df8a FUN_146f6df8a body=266 status=ok
// SIG undefined FUN_146f6df8a(void)

uint * FUN_146f6df8a(longlong param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f7176e(param_1 + 0x138,&local_48,param_3,0);
  if ((longlong)local_40 != 0) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
    if (plVar6 != (longlong *)0x0) {
      plVar2 = plVar6;
    }
    lVar3 = 0;
    do {
      uVar4 = *(uint *)(local_48 + lVar3);
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar6 = (longlong *)((longlong)((int)uVar4 >> 8) * 0xc18 + *plVar2);
        iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar4 & 0xff) * 4 + 0x10);
      }
      else {
        iVar5 = (int)plVar2[2] * uVar4;
        plVar6 = plVar2;
      }
      iVar1 = *(int *)(*plVar6 + (longlong)iVar5 * 4);
      iVar5 = *(int *)(*plVar6 + 4 + (longlong)iVar5 * 4);
      if ((iVar5 == param_4 && iVar1 == (int)param_3) || (iVar5 == (int)param_3 && iVar1 == param_4)
         ) goto LAB_146f6e06b;
      lVar3 = lVar3 + 4;
    } while ((longlong)local_40 * 4 != lVar3);
  }
  uVar4 = 0xffffffff;
LAB_146f6e06b:
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f6e096 FUN_146f6e096 body=174 status=ok
// SIG undefined FUN_146f6e096(void)

void FUN_146f6e096(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x134) = 0x100;
  FUN_146f6f2e8(param_1 + 0x100);
  *(undefined2 *)(param_1 + 0x16c) = 0x100;
  FUN_146f6f2e8(param_1 + 0x138);
  *(undefined2 *)(param_1 + 0x1a4) = 0x100;
  FUN_146f6f2e8(param_1 + 0x170);
  *(undefined2 *)(param_1 + 0x1dc) = 0x100;
  FUN_146f6f2e8(param_1 + 0x1a8);
  *(undefined2 *)(param_1 + 0x214) = 0x100;
  FUN_146f6f2e8(param_1 + 0x1e0);
  *(undefined2 *)(param_1 + 0x24c) = 0x100;
  FUN_146f6f2e8(param_1 + 0x218);
  *(undefined2 *)(param_1 + 0x284) = 0x100;
  FUN_146f6f2e8(param_1 + 0x250);
  *(undefined2 *)(param_1 + 700) = 0x100;
  FUN_146f6f2e8(param_1 + 0x288);
  return;
}



// FUNCTION 146f6e144 FUN_146f6e144 body=160 status=ok
// SIG undefined FUN_146f6e144(void)

void FUN_146f6e144(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar3) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    iVar3 = param_2 + 0x1f;
    if (-1 < param_2) {
      iVar3 = param_2;
    }
    puVar1 = (uint *)(lVar2 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    return;
  }
  FUN_144a686e6(param_1,param_2 + 1);
  FUN_1447c6044(param_1,iVar3,param_2 - iVar3,0);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = param_1;
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  puVar1 = (uint *)(lVar2 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + (param_2 - iVar3);
  FUN_146f911f8(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 146f6e1e4 FUN_146f6e1e4 body=4014 status=ok
// SIG undefined FUN_146f6e1e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146f6e1e4(longlong param_1,int param_2,longlong *param_3)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  longlong lVar23;
  double dVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  int iVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_348 [32];
  double local_328;
  double local_320;
  double local_318;
  longlong local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined4 local_2e0;
  int local_2dc;
  longlong *local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  double local_290;
  int *local_288;
  double local_280;
  double local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 uStack_150;
  int local_13c;
  longlong local_138 [4];
  int *local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar27 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar2 != (longlong *)0x0) {
    plVar27 = plVar2;
  }
  uVar30 = *(undefined4 *)(*plVar27 + (longlong)((int)plVar27[2] * param_2) * 4);
  uVar15 = *(uint *)(param_3 + 1);
  dVar24 = (double)(ulonglong)uVar15;
  local_310 = param_1;
  local_2d8 = param_3;
  if (dVar24 == 1.48219693752374e-323) {
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
    if (lVar21 == 0) {
      lVar21 = *(longlong *)(param_1 + 0x70);
    }
    uVar15 = FUN_146f70732(lVar21);
    uVar25 = (ulonglong)uVar15;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    plVar27 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar27 = plVar2;
    }
    iVar20 = (int)uVar15 >> 8;
    if (*(int *)(param_1 + 0xa8) == 0) {
      plVar27 = (longlong *)((longlong)iVar20 * 0xc18 + *plVar27);
      iVar19 = *(int *)((longlong)plVar27 + (uVar25 & 0xff) * 4 + 0x10);
    }
    else {
      iVar19 = (int)plVar27[2] * uVar15;
    }
    lVar21 = *plVar27;
    lVar23 = (longlong)iVar19;
    *(undefined4 *)(lVar21 + lVar23 * 4) = *(undefined4 *)*local_2d8;
    *(undefined4 *)(lVar21 + 4 + lVar23 * 4) = *(undefined4 *)(*local_2d8 + 4);
    *(undefined4 *)(lVar21 + 8 + lVar23 * 4) = *(undefined4 *)(*local_2d8 + 8);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
    plVar27 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar27 = plVar2;
    }
    *(undefined4 *)(*plVar27 + (longlong)(int)((int)plVar27[2] * uVar15) * 4) = uVar30;
    FUN_146f6de70(param_1 + 0x250,uVar30,uVar15,0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
    plVar27 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar27 = plVar2;
    }
    *(int *)(*plVar27 + (longlong)(int)((int)plVar27[2] * uVar15) * 4) = param_2;
    FUN_146f6de70(param_1 + 0x218,param_2,uVar15,0);
    lVar3 = local_310;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
    plVar27 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar27 = plVar2;
    }
    if (*(int *)(param_1 + 0xd0) == 0) {
      plVar27 = (longlong *)((longlong)iVar20 * 0xc18 + *plVar27);
      iVar19 = *(int *)((longlong)plVar27 + (uVar25 & 0xff) * 4 + 0x10);
    }
    else {
      iVar19 = (int)plVar27[2] * uVar15;
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
    plVar28 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar28 = plVar2;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      plVar28 = (longlong *)((longlong)iVar20 * 0xc18 + *plVar28);
      iVar20 = *(int *)((longlong)plVar28 + (uVar25 & 0xff) * 4 + 0x10);
    }
    else {
      iVar20 = (int)plVar28[2] * uVar15;
    }
    lVar21 = lVar21 + lVar23 * 4;
    lVar23 = *plVar27;
    lVar17 = *plVar28;
    local_320 = (double)(local_310 + 0x170);
    local_328 = (double)(local_310 + 0x1a8);
    lVar26 = 1;
    do {
      lVar18 = 0;
      if (lVar26 != 3) {
        lVar18 = lVar26;
      }
      lVar4 = *(longlong *)(lVar3 + 0x88);
      plVar2 = *(longlong **)(lVar4 + 0x30);
      plVar27 = (longlong *)(lVar4 + 0x18);
      if (plVar2 != (longlong *)0x0) {
        plVar27 = plVar2;
      }
      iVar29 = *(int *)(lVar21 + -4 + lVar26 * 4);
      uVar30 = *(undefined4 *)(*plVar27 + (longlong)((int)plVar27[2] * iVar29) * 4);
      uVar31 = *(undefined4 *)
                (*plVar27 + (longlong)((int)plVar27[2] * *(int *)(lVar21 + lVar18 * 4)) * 4);
      *(undefined4 *)((longlong)iVar19 * 4 + lVar23 + -4 + lVar26 * 4) = uVar30;
      FUN_146f6df8a(lVar3,&local_118,uVar30,uVar31);
      piVar14 = local_118;
      *(undefined4 *)((longlong)iVar20 * 4 + lVar17 + -4 + lVar26 * 4) = local_118._0_4_;
      FUN_146f6de70(local_320,iVar29,uVar25,0);
      FUN_146f6de70(local_328,(ulonglong)piVar14 & 0xffffffff,uVar25,0);
      lVar26 = lVar26 + 1;
    } while (lVar26 != 4);
  }
  else {
    local_138[2] = *param_3;
    local_138[3] = param_3[1];
    FUN_146f71dae(param_1,&local_118,local_138 + 2);
    local_280 = local_108;
    local_288 = local_118;
    local_290 = dStack_110;
    local_118 = (int *)0x0;
    dStack_110 = 0.0;
    local_138[2] = 0;
    local_138[3] = 0;
    local_138[0] = 0;
    local_138[1] = 0;
    FUN_144a127d2(&local_118,uVar15,0);
    FUN_144a127d2(local_138 + 2,uVar15,0);
    FUN_146bfab7c(local_138,uVar15,0);
    if (0 < (int)uVar15) {
      dVar22 = 0.0;
      do {
        local_118[(longlong)dVar22] = SUB84(dVar22,0) + -1;
        dVar1 = (double)((longlong)dVar22 + 1);
        *(int *)(local_138[2] + (longlong)dVar22 * 4) = SUB84(dVar1,0);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
        plVar27 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar27 = plVar2;
        }
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x30);
        plVar28 = (longlong *)(*(longlong *)(param_1 + 0xf8) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar28 = plVar2;
        }
        lVar21 = *plVar28;
        lVar23 = (longlong)
                 ((int)plVar28[2] *
                 *(int *)(*plVar27 +
                         (longlong)((int)plVar27[2] * *(int *)(*param_3 + (longlong)dVar22 * 4)) * 4
                         ));
        *(undefined4 *)(local_138[0] + 8 + (longlong)dVar22 * 0xc) =
             *(undefined4 *)(lVar21 + 8 + lVar23 * 0xc);
        *(undefined8 *)(local_138[0] + (longlong)dVar22 * 0xc) =
             *(undefined8 *)(lVar21 + lVar23 * 0xc);
        dVar22 = dVar1;
      } while (dVar1 != dVar24);
    }
    *local_118 = uVar15 - 1;
    *(undefined4 *)(local_138[2] + -4 + (longlong)(int)uVar15 * 4) = 0;
    if (2 < (int)uVar15) {
      local_2a8 = param_1 + 0x250;
      local_2b0 = param_1 + 0x218;
      local_2a0 = param_1 + 0x170;
      local_298 = param_1 + 0x1a8;
      iVar20 = 0;
      iVar19 = 0;
      local_2e0 = uVar30;
      local_2dc = param_2;
      do {
        dVar22 = (double)(longlong)iVar20;
        if ((SUB84(dVar24,0) == 3) || (SUB84(dVar24,0) <= iVar19)) {
LAB_146f6eb14:
          lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
          if (lVar21 == 0) {
            lVar21 = *(longlong *)(param_1 + 0x70);
          }
          uVar15 = FUN_146f70732(lVar21);
          uVar25 = (ulonglong)uVar15;
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
          plVar27 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
          if (plVar2 != (longlong *)0x0) {
            plVar27 = plVar2;
          }
          iVar20 = (int)uVar15 >> 8;
          if (*(int *)(param_1 + 0xa8) == 0) {
            plVar27 = (longlong *)((longlong)iVar20 * 0xc18 + *plVar27);
            iVar19 = *(int *)((longlong)plVar27 + (uVar25 & 0xff) * 4 + 0x10);
          }
          else {
            iVar19 = (int)plVar27[2] * uVar15;
          }
          lVar21 = *plVar27;
          lVar23 = (longlong)iVar19;
          *(undefined4 *)(lVar21 + lVar23 * 4) =
               *(undefined4 *)(*param_3 + (longlong)local_118[(longlong)dVar22] * 4);
          *(undefined4 *)(lVar21 + 4 + lVar23 * 4) =
               *(undefined4 *)(*param_3 + (longlong)dVar22 * 4);
          *(undefined4 *)(lVar21 + 8 + lVar23 * 4) =
               *(undefined4 *)
                (*param_3 + (longlong)*(int *)(local_138[2] + (longlong)dVar22 * 4) * 4);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
          plVar27 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
          if (plVar2 != (longlong *)0x0) {
            plVar27 = plVar2;
          }
          *(undefined4 *)(*plVar27 + (longlong)(int)((int)plVar27[2] * uVar15) * 4) = uVar30;
          local_2c8 = dVar22;
          FUN_146f6de70(local_2a8,uVar30,uVar15,0);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
          plVar27 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
          if (plVar2 != (longlong *)0x0) {
            plVar27 = plVar2;
          }
          *(int *)(*plVar27 + (longlong)(int)((int)plVar27[2] * uVar15) * 4) = param_2;
          FUN_146f6de70(local_2b0,param_2,uVar15,0);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
          plVar27 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
          if (plVar2 != (longlong *)0x0) {
            plVar27 = plVar2;
          }
          if (*(int *)(param_1 + 0xd0) == 0) {
            plVar27 = (longlong *)((longlong)iVar20 * 0xc18 + *plVar27);
            iVar19 = *(int *)((longlong)plVar27 + (uVar25 & 0xff) * 4 + 0x10);
          }
          else {
            iVar19 = (int)plVar27[2] * uVar15;
          }
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
          lVar3 = *plVar27;
          plVar27 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
          if (plVar2 != (longlong *)0x0) {
            plVar27 = plVar2;
          }
          local_320 = (double)CONCAT44(local_320._4_4_,uVar15);
          if (*(int *)(param_1 + 0xc0) == 0) {
            plVar27 = (longlong *)((longlong)iVar20 * 0xc18 + *plVar27);
            iVar20 = *(int *)((longlong)plVar27 + (uVar25 & 0xff) * 4 + 0x10);
          }
          else {
            iVar20 = (int)plVar27[2] * uVar15;
          }
          local_328 = (double)(lVar21 + lVar23 * 4);
          lVar21 = *plVar27;
          lVar23 = 1;
          local_318 = dVar24;
          do {
            lVar17 = 0;
            if (lVar23 != 3) {
              lVar17 = lVar23;
            }
            plVar2 = *(longlong **)(*(longlong *)(local_310 + 0x88) + 0x30);
            plVar27 = (longlong *)(*(longlong *)(local_310 + 0x88) + 0x18);
            if (plVar2 != (longlong *)0x0) {
              plVar27 = plVar2;
            }
            iVar29 = *(int *)((longlong)local_328 + -4 + lVar23 * 4);
            uVar30 = *(undefined4 *)(*plVar27 + (longlong)((int)plVar27[2] * iVar29) * 4);
            uVar31 = *(undefined4 *)
                      (*plVar27 +
                      (longlong)((int)plVar27[2] * *(int *)((longlong)local_328 + lVar17 * 4)) * 4);
            *(undefined4 *)((longlong)iVar19 * 4 + lVar3 + -4 + lVar23 * 4) = uVar30;
            FUN_146f6df8a(local_310,&local_13c,uVar30,uVar31);
            lVar17 = local_310;
            iVar16 = local_13c;
            if (local_13c == -1) {
              lVar26 = *(longlong *)(*(longlong *)(local_310 + 0x68) + 0x80);
              if (lVar26 == 0) {
                lVar26 = *(longlong *)(local_310 + 0x68);
              }
              iVar16 = FUN_146f70732(lVar26);
              FUN_146f70188(lVar17,iVar16,uVar30,uVar31);
            }
            dVar24 = local_320;
            *(int *)((longlong)iVar20 * 4 + lVar21 + -4 + lVar23 * 4) = iVar16;
            FUN_146f6de70(local_2a0,iVar29,(ulonglong)local_320 & 0xffffffff,0);
            FUN_146f6de70(local_298,iVar16,(ulonglong)dVar24 & 0xffffffff,0);
            lVar23 = lVar23 + 1;
          } while (lVar23 != 4);
          *(undefined4 *)(local_138[2] + (longlong)local_118[(longlong)local_2c8] * 4) =
               *(undefined4 *)(local_138[2] + (longlong)local_2c8 * 4);
          local_118[*(int *)(local_138[2] + (longlong)local_2c8 * 4)] =
               local_118[(longlong)local_2c8];
          dVar24 = (double)(ulonglong)(SUB84(local_318,0) - 1);
          iVar20 = local_118[(longlong)local_2c8];
          iVar19 = 0;
          param_1 = local_310;
          param_3 = local_2d8;
          uVar30 = local_2e0;
          param_2 = local_2dc;
        }
        else {
          lVar21 = (longlong)local_118[(longlong)dVar22];
          local_320 = (double)*(float *)(local_138[0] + 8 + lVar21 * 0xc);
          local_328 = (double)*(float *)(local_138[0] + 4 + lVar21 * 0xc);
          local_318 = (double)*(float *)(local_138[0] + lVar21 * 0xc);
          local_2e8 = (double)*(float *)(local_138[0] + 8 + (longlong)dVar22 * 0xc);
          local_2d0 = (double)*(float *)(local_138[0] + 4 + (longlong)dVar22 * 0xc);
          local_2f0 = (double)*(float *)(local_138[0] + (longlong)dVar22 * 0xc);
          iVar20 = *(int *)(local_138[2] + (longlong)dVar22 * 4);
          lVar21 = (longlong)iVar20;
          local_2f8 = (double)*(float *)(local_138[0] + 8 + lVar21 * 0xc);
          local_300 = (double)*(float *)(local_138[0] + 4 + lVar21 * 0xc);
          local_308 = (double)*(float *)(local_138[0] + lVar21 * 0xc);
          local_2c8 = local_2e8 - local_320;
          dVar8 = local_2d0 - local_328;
          local_258 = local_2f0 - local_318;
          dVar36 = local_258 * (local_300 - local_328);
          dVar34 = local_2c8 * (local_308 - local_318);
          dVar35 = dVar8 * (local_2f8 - local_320);
          uStack_250 = 0;
          dVar1 = (local_2f8 - local_320) * local_258;
          dVar6 = dVar1 - dVar34;
          uStack_2c0 = 0;
          dVar9 = (local_300 - local_328) * local_2c8;
          dVar7 = dVar9 - dVar35;
          dVar33 = (local_308 - local_318) * dVar8;
          dVar10 = dVar33 - dVar36;
          dVar5 = dVar10 * dVar10 + dVar7 * dVar7 + dVar6 * dVar6;
          if (((dVar5 != 1.0) || (dVar11 = dVar6, dVar12 = dVar7, dVar13 = dVar10, NAN(dVar5))) &&
             (dVar11 = DAT_14c8464e8, dVar12 = DAT_14c8464e0, dVar13 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar5)) {
            dVar5 = 1.0 / SQRT(dVar5);
            dVar11 = dVar6 * dVar5;
            dVar12 = dVar7 * dVar5;
            dVar13 = dVar10 * dVar5;
          }
          if (0.0 < dVar11 * local_290 + dVar12 * (double)local_288 + dVar13 * local_280) {
            iVar29 = *(int *)(local_138[2] + lVar21 * 4);
            local_268 = local_2f8 - local_2e8;
            local_278 = local_300 - local_2d0;
            local_158 = local_308 - local_2f0;
            uStack_260 = 0;
            uStack_270 = 0;
            local_178 = local_158 * (local_328 - local_2d0) - (local_318 - local_2f0) * local_278;
            uStack_170 = 0;
            local_168 = local_268 * (local_318 - local_2f0) - (local_320 - local_2e8) * local_158;
            uStack_160 = 0;
            local_188 = local_278 * (local_320 - local_2e8) - (local_328 - local_2d0) * local_268;
            uStack_180 = 0;
            local_1c8 = local_320 - local_2f8;
            local_1d8 = local_328 - local_300;
            local_1e8 = local_318 - local_308;
            local_208 = local_1e8 * (local_2d0 - local_300) - (local_2f0 - local_308) * local_1d8;
            uStack_200 = 0;
            local_1f8 = local_1c8 * (local_2f0 - local_308) - (local_2e8 - local_2f8) * local_1e8;
            uStack_1f0 = 0;
            uVar25 = DAT_149931e80;
            local_218 = local_1d8 * (local_2e8 - local_2f8) - (local_2d0 - local_300) * local_1c8;
            uStack_210 = 0;
            uVar31 = DAT_149931e80._8_4_;
            uVar32 = DAT_149931e80._12_4_;
            local_198._8_4_ = uVar31;
            local_198._0_8_ = (ulonglong)local_278 ^ uVar25;
            local_198._12_4_ = uVar32;
            uStack_150 = 0;
            local_1a8._8_4_ = uVar31;
            local_1a8._0_8_ = (ulonglong)local_158 ^ uVar25;
            local_1a8._12_4_ = uVar32;
            local_1b8._8_4_ = uVar31;
            local_1b8._0_8_ = (ulonglong)local_268 ^ uVar25;
            local_1b8._12_4_ = uVar32;
            uStack_1d0 = 0;
            local_228._8_4_ = uVar31;
            local_228._0_8_ = (ulonglong)local_1d8 ^ uVar25;
            local_228._12_4_ = uVar32;
            uStack_1e0 = 0;
            local_238._8_4_ = uVar31;
            local_238._0_8_ = (ulonglong)local_1e8 ^ uVar25;
            local_238._12_4_ = uVar32;
            uStack_1c0 = 0;
            local_248._8_4_ = uVar31;
            local_248._0_8_ = (ulonglong)local_1c8 ^ uVar25;
            local_248._12_4_ = uVar32;
            do {
              lVar21 = (longlong)iVar29;
              dVar6 = (double)*(float *)(local_138[0] + 8 + lVar21 * 0xc);
              dVar5 = (double)*(float *)(local_138[0] + 4 + lVar21 * 0xc);
              dVar7 = (double)*(float *)(local_138[0] + lVar21 * 0xc);
              if (((0.0 <= (float)(((dVar5 - local_328) * (double)((ulonglong)local_2c8 ^ uVar25) +
                                   dVar8 * (dVar6 - local_320)) * (dVar35 - dVar9) +
                                   ((dVar6 - local_320) * -local_258 +
                                   local_2c8 * (dVar7 - local_318)) * (dVar34 - dVar1) +
                                   (local_258 * (dVar5 - local_328) + (dVar7 - local_318) * -dVar8)
                                   * (dVar36 - dVar33) + 9.99999993922529e-09)) &&
                  (0.0 <= (float)(((dVar5 - local_2d0) * (double)((ulonglong)local_268 ^ uVar25) +
                                  local_278 * (dVar6 - local_2e8)) * local_188 +
                                  ((dVar6 - local_2e8) * (double)((ulonglong)local_158 ^ uVar25) +
                                  local_268 * (dVar7 - local_2f0)) * local_168 +
                                  (local_158 * (dVar5 - local_2d0) +
                                  (dVar7 - local_2f0) * (double)((ulonglong)local_278 ^ uVar25)) *
                                  local_178 + 9.99999993922529e-09))) &&
                 (0.0 <= (float)(((dVar5 - local_300) * (double)((ulonglong)local_1c8 ^ uVar25) +
                                 local_1d8 * (dVar6 - local_2f8)) * local_218 +
                                 ((dVar6 - local_2f8) * (double)((ulonglong)local_1e8 ^ uVar25) +
                                 local_1c8 * (dVar7 - local_308)) * local_1f8 +
                                 (local_1e8 * (dVar5 - local_300) +
                                 (dVar7 - local_308) * (double)((ulonglong)local_1d8 ^ uVar25)) *
                                 local_208 + 9.99999993922529e-09))) goto LAB_146f6eb77;
              iVar29 = *(int *)(local_138[2] + lVar21 * 4);
            } while (iVar29 != local_118[(longlong)dVar22]);
            goto LAB_146f6eb14;
          }
LAB_146f6eb77:
          iVar19 = iVar19 + 1;
        }
      } while (2 < SUB84(dVar24,0));
    }
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
    if (local_138[2] != 0) {
      FUN_1400020a8();
    }
    if (local_118 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6f194 FUN_146f6f194 body=112 status=ok
// SIG undefined FUN_146f6f194(void)

void FUN_146f6f194(longlong param_1)

{
  FUN_146f6f2e8(param_1 + 0x100);
  FUN_146f6f2e8(param_1 + 0x138);
  FUN_146f6f2e8(param_1 + 0x170);
  FUN_146f6f2e8(param_1 + 0x1a8);
  FUN_146f6f2e8(param_1 + 0x1e0);
  FUN_146f6f2e8(param_1 + 0x218);
  FUN_146f6f2e8(param_1 + 0x250);
  FUN_146f6f2e8(param_1 + 0x288);
  return;
}



// FUNCTION 146f6f204 FUN_146f6f204 body=112 status=ok
// SIG undefined FUN_146f6f204(void)

void FUN_146f6f204(longlong param_1)

{
  FUN_146f6f274(param_1 + 0x100);
  FUN_146f6f274(param_1 + 0x138);
  FUN_146f6f274(param_1 + 0x170);
  FUN_146f6f274(param_1 + 0x1a8);
  FUN_146f6f274(param_1 + 0x1e0);
  FUN_146f6f274(param_1 + 0x218);
  FUN_146f6f274(param_1 + 0x250);
  FUN_146f6f274(param_1 + 0x288);
  return;
}



// FUNCTION 146f6f274 FUN_146f6f274 body=115 status=ok
// SIG undefined FUN_146f6f274(void)

void FUN_146f6f274(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1412e7bc0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_146f9eab4(param_1,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  if ((param_1[2] != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    iVar2 = (**(code **)(*(longlong *)param_1[3] + 0x68))();
    iVar1 = *(int *)(param_1[2] + 0x88);
    if (iVar2 < *(int *)(param_1[2] + 0x88)) {
      iVar1 = iVar2;
    }
    FUN_1412e7bec(param_1,iVar1,1);
    *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  }
  return;
}



// FUNCTION 146f6f2e8 FUN_146f6f2e8 body=194 status=ok
// SIG undefined FUN_146f6f2e8(void)

void FUN_146f6f2e8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_1[2] == 0) || ((longlong *)param_1[3] == (longlong *)0x0)) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    FUN_1412e7bc0(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
      FUN_146f9eab4(param_1,0);
      return;
    }
  }
  else {
    iVar2 = (**(code **)(*(longlong *)param_1[3] + 0x68))();
    iVar1 = *(int *)(param_1[2] + 0x88);
    if (iVar2 < *(int *)(param_1[2] + 0x88)) {
      iVar1 = iVar2;
    }
    FUN_1412e7bec(param_1,iVar1,1);
    if (0 < (int)param_1[1]) {
      lVar3 = 0x44;
      uVar4 = 0;
      do {
        if (*(char *)((longlong)param_1 + 0x35) == '\x01') {
          FUN_146f7a63a(param_1,uVar4 & 0xffffffff);
        }
        else if (*(int *)(*param_1 + lVar3) < *(int *)(*param_1 + -0x2c + lVar3)) {
          FUN_146f79d90(param_1,uVar4 & 0xffffffff);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0xb0;
      } while ((longlong)uVar4 < (longlong)(int)param_1[1]);
    }
    *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  }
  return;
}



// FUNCTION 146f6f3aa FUN_146f6f3aa body=321 status=ok
// SIG undefined FUN_146f6f3aa(void)

void FUN_146f6f3aa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      lVar4 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      lVar2 = *(longlong *)(lVar4 + 0x80);
      if (*(longlong *)(lVar4 + 0x80) == 0) {
        lVar2 = lVar4;
      }
      if ((longlong)*(int *)(lVar4 + 0x88) != 0) {
        lVar4 = (longlong)*(int *)(lVar4 + 0x88) << 7;
        do {
          FUN_146f91de6(lVar2,0);
          lVar2 = lVar2 + 0x80;
          lVar4 = lVar4 + -0x80;
        } while (lVar4 != 0);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 || (local_70 != plVar1 || iStack_64 != iVar3));
  }
  FUN_146f6f204(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f6f4ec FUN_146f6f4ec body=322 status=ok
// SIG undefined FUN_146f6f4ec(void)

ulonglong FUN_146f6f4ec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
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
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  local_78 = param_1;
  if ((iStack_3c != iVar5) || (uStack_48 != plVar1)) {
    do {
      lVar2 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      lVar3 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar3 = lVar2;
      }
      if ((longlong)*(int *)(lVar2 + 0x88) != 0) {
        lVar4 = 0;
        do {
          if (*(int *)(lVar3 + 0x18 + lVar4) != 0) {
            uVar6 = 0;
            goto LAB_146f6f574;
          }
          lVar4 = lVar4 + 0x80;
        } while ((longlong)*(int *)(lVar2 + 0x88) * 0x80 != lVar4);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar5));
  }
LAB_146f6f574:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146f6f630 FUN_146f6f630 body=160 status=ok
// SIG undefined FUN_146f6f630(void)

undefined8 FUN_146f6f630(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)(lVar3 + 0x80);
  if (*(longlong *)(lVar3 + 0x80) == 0) {
    lVar2 = lVar3;
  }
  uVar1 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  if (*(int *)(lVar2 + 0x78) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    if (*(int *)(lVar3 + 0x78) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x68);
      }
      if (*(int *)(lVar3 + 0x78) == 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(param_1 + 0x70);
        }
        if (*(int *)(lVar3 + 0x78) == 0) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
          if (lVar3 == 0) {
            lVar3 = *(longlong *)(param_1 + 0x78);
          }
          if (*(int *)(lVar3 + 0x78) == 0) {
            lVar3 = *(longlong *)(param_1 + 0x80);
            lVar2 = *(longlong *)(lVar3 + 0x80);
            if (*(longlong *)(lVar3 + 0x80) == 0) {
              lVar2 = lVar3;
            }
            uVar1 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(int *)(lVar2 + 0x78) != 0);
          }
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 146f6f6d0 FUN_146f6f6d0 body=199 status=ok
// SIG undefined FUN_146f6f6d0(void)

void FUN_146f6f6d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146f6f798(lVar1);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
  }
  FUN_146f6f798(lVar1,param_2 + 0x38);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  FUN_146f6f798(lVar1,param_2 + 0x70);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x70);
  }
  FUN_146f6f798(lVar1,param_2 + 0xa8);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  FUN_146f6f798(lVar1,param_2 + 0x118);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  FUN_146f6f798(lVar1,param_2 + 0x150);
  FUN_146f6f9c8(param_1,param_2);
  return;
}



// FUNCTION 146f6f798 FUN_146f6f798 body=559 status=ok
// SIG undefined FUN_146f6f798(void)

void FUN_146f6f798(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  int *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = *(uint *)(param_1 + 3);
  iVar3 = *(int *)(param_1 + 0xf);
  puVar4 = (undefined1 *)(ulonglong)uVar5;
  FUN_146f799d6(param_2,puVar4);
  local_60 = 0x100000000;
  local_50._0_4_ = 0xffffffff;
  local_50._4_4_ = 0;
  local_48 = 0;
  uStack_58 = param_1;
  if ((*(int *)(param_1 + 3) != 0) &&
     (FUN_1449c0562(&local_60), local_50._4_4_ < *(int *)(uStack_58 + 3))) {
    iVar6 = 0;
    do {
      puVar4 = local_70;
      FUN_146f9e8f0(param_2,local_70);
      *local_68 = iVar6;
      iVar6 = iVar6 + 1;
      local_50._0_4_ = (uint)local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (local_50._4_4_ < *(int *)(uStack_58 + 3));
  }
  local_48 = uVar5 - iVar3;
  local_50 = (undefined8 *)0x0;
  local_44 = 0x80;
  uVar5 = local_48 + 0x1f;
  if (uVar5 < 0x20) {
    if (&local_60 == param_1) goto LAB_146f6f8b8;
LAB_146f6f880:
    *(undefined4 *)param_1 = (undefined4)local_60;
    *(uint *)((longlong)param_1 + 4) = local_60._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_58;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_58._4_4_;
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if (uVar5 < 0xa0) {
      puVar1 = &local_60;
LAB_146f6f947:
      uVar5 = uVar5 >> 3 & 0xfffffffc;
      iVar3 = (int)CONCAT71((int7)((ulonglong)puVar4 >> 8),0xff);
    }
    else {
      puVar4 = (undefined1 *)0x0;
      FUN_14499171c(&local_60,0,uVar5 >> 5,4);
      local_44 = uVar5 & 0xffffffe0;
      puVar1 = local_50;
      if (local_50 == (undefined8 *)0x0) {
        puVar1 = &local_60;
      }
      if (uVar5 < 0x120) goto LAB_146f6f947;
      uVar5 = (uVar5 >> 5) << 2;
      iVar3 = (int)CONCAT71((int7)((ulonglong)puVar4 >> 8),0xff);
    }
    memset(puVar1,iVar3,(ulonglong)uVar5);
    iVar3 = local_48 + 0x1f;
    if (-1 < local_48) {
      iVar3 = local_48;
    }
    if (local_48 % 0x20 != 0) {
      puVar1 = local_50;
      if (local_50 == (undefined8 *)0x0) {
        puVar1 = &local_60;
      }
      bVar2 = -(char)(local_48 % 0x20);
      *(uint *)((longlong)puVar1 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar3 >> 5) * 4) << (bVar2 & 0x1f)) >>
           (bVar2 & 0x1f);
    }
    if (&local_60 == param_1) {
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8(local_50);
      }
      goto LAB_146f6f8b8;
    }
    puVar1 = local_50;
    if (local_50 == (undefined8 *)0x0) goto LAB_146f6f880;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    puVar1 = local_50;
  }
  param_1[2] = puVar1;
  local_50 = (undefined8 *)0x0;
  *(int *)(param_1 + 3) = local_48;
  *(uint *)((longlong)param_1 + 0x1c) = local_44;
LAB_146f6f8b8:
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_146f6bdc2(param_1 + 4,param_2);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f6f9c8 FUN_146f6f9c8 body=1612 status=ok
// SIG undefined FUN_146f6f9c8(void)

void FUN_146f6f9c8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x58);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  iVar10 = 0;
  local_60 = lVar12;
  if (*(int *)(lVar12 + 0x18) != 0) {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(lVar12 + 0x18);
  }
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  if (local_60 != lVar12 || uStack_54 != iVar10) {
    do {
      uVar7 = uStack_74;
      if (*(int *)(local_80 + 0x18) <= (int)uStack_74) {
        uVar7 = -1;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar8 = plVar1;
      }
      lVar4 = (longlong)(int)(uVar7 * (int)plVar8[2]);
      *(undefined4 *)(*plVar8 + lVar4 * 4) =
           *(undefined4 *)(*param_2 + (longlong)*(int *)(*plVar8 + lVar4 * 4) * 8);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_80 != lVar12 || uStack_74 != iVar10);
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x68);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_60 = lVar12;
  if (*(int *)(lVar12 + 0x18) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  uStack_54 = *(uint *)(lVar12 + 0x18);
  local_68 = CONCAT44(1 << ((byte)uStack_54 & 0x1f),(int)uStack_54 >> 5);
  local_58 = -1 << ((byte)uStack_54 & 0x1f);
  local_50 = uStack_54 & 0xffffffe0;
  local_60 = lVar12;
  if (*(uint *)(lVar12 + 0x18) != uStack_54) {
    FUN_1449c0562(&local_68);
  }
  uVar7 = uStack_54;
  lVar12 = local_60;
  if (local_80 != local_60 || uStack_74 != uStack_54) {
    do {
      uVar3 = uStack_74;
      if (*(int *)(local_80 + 0x18) <= (int)uStack_74) {
        uVar3 = 0xffffffff;
      }
      lVar4 = 0;
      bVar2 = true;
      do {
        bVar6 = bVar2;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
        if (plVar1 != (longlong *)0x0) {
          plVar8 = plVar1;
        }
        if (*(int *)(param_1 + 0x98) == 0) {
          plVar8 = (longlong *)(*plVar8 + (longlong)((int)uVar3 >> 8) * 0xc18);
          iVar10 = *(int *)((longlong)plVar8 + (ulonglong)(uVar3 & 0xff) * 4 + 0x10);
        }
        else {
          iVar10 = (int)plVar8[2] * uVar3;
        }
        lVar11 = (longlong)iVar10 * 4 + *plVar8;
        *(undefined4 *)(lVar11 + lVar4 * 4) =
             *(undefined4 *)(*param_2 + (longlong)*(int *)(lVar11 + lVar4 * 4) * 8);
        lVar4 = 1;
        bVar2 = false;
      } while (bVar6);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_80 != lVar12 || uStack_74 != uVar7);
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x70);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  uVar7 = 0;
  local_60 = lVar12;
  if (*(int *)(lVar12 + 0x18) != 0) {
    FUN_1449c0562(&local_68);
    uVar7 = *(uint *)(lVar12 + 0x18);
  }
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  if (local_60 != lVar12 || uStack_54 != uVar7) {
    do {
      uVar3 = uStack_74;
      if (*(int *)(local_80 + 0x18) <= (int)uStack_74) {
        uVar3 = 0xffffffff;
      }
      uVar5 = (ulonglong)(uVar3 & 0xff);
      lVar4 = (longlong)((int)uVar3 >> 8) * 0xc18;
      lVar11 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
        if (plVar1 != (longlong *)0x0) {
          plVar8 = plVar1;
        }
        if (*(int *)(param_1 + 0xa8) == 0) {
          plVar8 = (longlong *)(*plVar8 + lVar4);
          iVar10 = *(int *)((longlong)plVar8 + uVar5 * 4 + 0x10);
        }
        else {
          iVar10 = (int)plVar8[2] * uVar3;
        }
        lVar9 = (longlong)iVar10 * 4 + *plVar8;
        *(undefined4 *)(lVar9 + lVar11 * 4) =
             *(undefined4 *)(param_2[7] + (longlong)*(int *)(lVar9 + lVar11 * 4) * 8);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
        if (plVar1 != (longlong *)0x0) {
          plVar8 = plVar1;
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          plVar8 = (longlong *)(*plVar8 + lVar4);
          iVar10 = *(int *)((longlong)plVar8 + uVar5 * 4 + 0x10);
        }
        else {
          iVar10 = (int)plVar8[2] * uVar3;
        }
        lVar9 = (longlong)iVar10 * 4 + *plVar8;
        *(undefined4 *)(lVar9 + lVar11 * 4) =
             *(undefined4 *)(param_2[0xe] + (longlong)*(int *)(lVar9 + lVar11 * 4) * 8);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
        if (plVar1 != (longlong *)0x0) {
          plVar8 = plVar1;
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          plVar8 = (longlong *)(*plVar8 + lVar4);
          iVar10 = *(int *)((longlong)plVar8 + uVar5 * 4 + 0x10);
        }
        else {
          iVar10 = (int)plVar8[2] * uVar3;
        }
        lVar9 = (longlong)iVar10 * 4 + *plVar8;
        *(undefined4 *)(lVar9 + lVar11 * 4) =
             *(undefined4 *)(*param_2 + (longlong)*(int *)(lVar9 + lVar11 * 4) * 8);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar8 = plVar1;
      }
      lVar4 = (longlong)(int)((int)plVar8[2] * uVar3);
      *(undefined4 *)(*plVar8 + lVar4 * 4) =
           *(undefined4 *)(param_2[0x23] + (longlong)*(int *)(*plVar8 + lVar4 * 4) * 8);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar8 = plVar1;
      }
      lVar4 = (longlong)(int)(uVar3 * (int)plVar8[2]);
      *(undefined4 *)(*plVar8 + lVar4 * 4) =
           *(undefined4 *)(param_2[0x2a] + (longlong)*(int *)(*plVar8 + lVar4 * 4) * 8);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_80 != lVar12 || uStack_74 != uVar7);
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_1 + 0x78);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  iVar10 = 0;
  local_60 = lVar12;
  if (*(int *)(lVar12 + 0x18) != 0) {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(lVar12 + 0x18);
  }
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  if (local_60 != lVar12 || uStack_54 != iVar10) {
    do {
      uVar7 = uStack_74;
      if (*(int *)(local_80 + 0x18) <= (int)uStack_74) {
        uVar7 = -1;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar8 = plVar1;
      }
      lVar4 = (longlong)(int)(uVar7 * (int)plVar8[2]);
      *(undefined4 *)(*plVar8 + lVar4 * 4) =
           *(undefined4 *)(param_2[0x2a] + (longlong)*(int *)(*plVar8 + lVar4 * 4) * 8);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_80 != lVar12 || uStack_74 != iVar10);
  }
  FUN_146f6e096(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f70016 FUN_146f70016 body=63 status=ok
// SIG undefined FUN_146f70016(void)

void FUN_146f70016(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  *(undefined4 *)(*plVar2 + (longlong)((int)plVar2[2] * param_2) * 4) = param_3;
  FUN_146f6de70(param_1 + 0x100,param_3,param_2,0);
  return;
}



// FUNCTION 146f70056 FUN_146f70056 body=304 status=ok
// SIG undefined FUN_146f70056(void)

void FUN_146f70056(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_50 [8];
  int local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar5 = plVar3;
  }
  uVar2 = *(undefined4 *)(*plVar5 + (longlong)(int)((int)plVar5[2] * param_2) * 4);
  local_3c = uVar2;
  FUN_146f71930(param_1 + 0x100,uVar2,param_2,0);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  lVar7 = *(longlong *)(lVar6 + 0x10);
  if (*(longlong *)(lVar6 + 0x10) == 0) {
    lVar7 = lVar6;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar7 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  FUN_146f91f46(lVar6 + 0x20,param_2);
  FUN_146f728ae(param_1 + 0x170,param_2,0);
  if (param_3 != 0) {
    FUN_146f92b68(param_1 + 0x100,local_50,uVar2,0);
    if (local_48 == 0) {
      FUN_146f92b68(param_1 + 0x138,local_60,uVar2,0);
      if (local_58 == 0) {
        FUN_146f9d6a4(param_3,&local_3c);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f70188 FUN_146f70188 body=145 status=ok
// SIG undefined FUN_146f70188(void)

void FUN_146f70188(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar4 = (ulonglong)param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    plVar5 = (longlong *)((longlong)((int)param_2 >> 8) * 0xc18 + *plVar5);
    iVar3 = *(int *)((longlong)plVar5 + (uVar4 & 0xff) * 4 + 0x10);
  }
  else {
    iVar3 = (int)plVar5[2] * param_2;
  }
  lVar2 = *plVar5;
  *(undefined4 *)(lVar2 + (longlong)iVar3 * 4) = param_3;
  *(undefined4 *)(lVar2 + 4 + (longlong)iVar3 * 4) = param_4;
  FUN_146f6de70(param_1 + 0x138,param_3,uVar4,0);
  FUN_146f6de70(param_1 + 0x138,param_4,uVar4,0);
  return;
}



// FUNCTION 146f7021a FUN_146f7021a body=383 status=ok
// SIG undefined FUN_146f7021a(void)

void FUN_146f7021a(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  uVar12 = (ulonglong)param_2;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar7 = plVar5;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    lVar10 = (ulonglong)(param_2 >> 8) * 0xc18;
    lVar8 = *(longlong *)(*plVar7 + lVar10);
    iVar9 = *(int *)(*plVar7 + lVar10 + 0x10 + (uVar12 & 0xff) * 4);
  }
  else {
    iVar9 = (int)plVar7[2] * param_2;
    lVar8 = *plVar7;
  }
  puVar1 = (undefined4 *)(lVar8 + (longlong)iVar9 * 4);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  lVar8 = param_1 + 0x138;
  local_40 = uVar4;
  local_3c = uVar3;
  FUN_146f71930(lVar8,uVar3,uVar12,0);
  FUN_146f71930(lVar8,uVar4,uVar12,0);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x68);
  }
  lVar11 = *(longlong *)(lVar10 + 0x10);
  if (*(longlong *)(lVar10 + 0x10) == 0) {
    lVar11 = lVar10;
  }
  bVar6 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar11 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
  FUN_146f91f46(lVar10 + 0x20,uVar12);
  FUN_146f728ae(param_1 + 0x1a8,uVar12,0);
  if (param_3 != 0) {
    FUN_146f92b68(lVar8,local_50,uVar3,0);
    if (local_48 == 0) {
      FUN_146f9d6a4(param_3,&local_3c);
    }
    FUN_146f92b68(lVar8,local_50,uVar4,0);
    if (local_48 == 0) {
      FUN_146f9d6a4(param_3,&local_40);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7039a FUN_146f7039a body=918 status=ok
// SIG undefined FUN_146f7039a(void)

void FUN_146f7039a(longlong param_1,uint param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  uVar14 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_5 != (longlong *)0x0) &&
     (*(undefined4 *)(param_5 + 1) = 0, *(int *)((longlong)param_5 + 0xc) != 0)) {
    FUN_146f9d792(param_5,0);
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  iVar11 = (int)param_2 >> 8;
  if (*(int *)(param_1 + 0xa8) == 0) {
    plVar12 = (longlong *)((longlong)iVar11 * 0xc18 + *plVar12);
    iVar8 = *(int *)((longlong)plVar12 + (uVar14 & 0xff) * 4 + 0x10);
  }
  else {
    iVar8 = (int)plVar12[2] * param_2;
  }
  lVar6 = *plVar12;
  lVar16 = (longlong)iVar8;
  *(undefined4 *)(lVar6 + lVar16 * 4) = *(undefined4 *)*param_4;
  *(undefined4 *)(lVar6 + 4 + lVar16 * 4) = *(undefined4 *)(*param_4 + 4);
  *(undefined4 *)(lVar6 + 8 + lVar16 * 4) = *(undefined4 *)(*param_4 + 8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  *(undefined4 *)(*plVar12 + (longlong)(int)((int)plVar12[2] * param_2) * 4) = param_3;
  FUN_146f6de70(param_1 + 0x250,param_3,param_2,0);
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(param_1 + 0x78);
  }
  iVar8 = FUN_146f70732(lVar15);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  *(undefined4 *)(*plVar12 + (longlong)((int)plVar12[2] * iVar8) * 4) = param_3;
  FUN_146f6de70(param_1 + 0x288,param_3,iVar8,0);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  *(int *)(*plVar12 + (longlong)(int)((int)plVar12[2] * param_2) * 4) = iVar8;
  FUN_146f6de70(param_1 + 0x218,iVar8,param_2,0);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    plVar12 = (longlong *)((longlong)iVar11 * 0xc18 + *plVar12);
    iVar8 = *(int *)((longlong)plVar12 + (uVar14 & 0xff) * 4 + 0x10);
  }
  else {
    iVar8 = (int)plVar12[2] * param_2;
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar13 = plVar5;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    plVar13 = (longlong *)((longlong)iVar11 * 0xc18 + *plVar13);
    iVar11 = *(int *)((longlong)plVar13 + (uVar14 & 0xff) * 4 + 0x10);
  }
  else {
    iVar11 = (int)plVar13[2] * param_2;
  }
  local_58 = lVar6 + lVar16 * 4;
  lVar6 = *plVar12;
  lVar16 = *plVar13;
  local_60 = param_1 + 0x170;
  local_68 = param_1 + 0x1a8;
  lVar15 = 1;
  local_6c = param_2;
  do {
    lVar10 = lVar15;
    if (lVar15 == 3) {
      lVar10 = 0;
    }
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
    if (plVar5 != (longlong *)0x0) {
      plVar12 = plVar5;
    }
    iVar1 = *(int *)(local_58 + -4 + lVar15 * 4);
    uVar2 = *(undefined4 *)(*plVar12 + (longlong)((int)plVar12[2] * iVar1) * 4);
    uVar3 = *(undefined4 *)
             (*plVar12 + (longlong)((int)plVar12[2] * *(int *)(local_58 + lVar10 * 4)) * 4);
    *(undefined4 *)((longlong)iVar8 * 4 + lVar6 + -4 + lVar15 * 4) = uVar2;
    FUN_146f6df8a(param_1,&local_4c,uVar2,uVar3);
    iVar9 = local_4c;
    if (local_4c == -1) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(param_1 + 0x68);
      }
      iVar9 = FUN_146f70732(lVar10);
      FUN_146f70188(param_1,iVar9,uVar2,uVar3);
      if (param_5 != (longlong *)0x0) {
        iVar4 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar4 + 1U) {
          FUN_146f99d00(param_5,iVar4);
        }
        *(int *)(*param_5 + (longlong)iVar4 * 4) = iVar9;
      }
    }
    uVar7 = local_6c;
    *(int *)((longlong)iVar11 * 4 + lVar16 + -4 + lVar15 * 4) = iVar9;
    FUN_146f6de70(local_60,iVar1,local_6c,0);
    FUN_146f6de70(local_68,iVar9,uVar7,0);
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f70732 FUN_146f70732 body=245 status=ok
// SIG undefined FUN_146f70732(void)

ulonglong FUN_146f70732(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar1 = param_1[0x1e];
  if ((int)uVar1 < 1) {
    uVar1 = FUN_144a54ea4(param_1,1);
    uVar5 = (ulonglong)uVar1;
    puVar2 = *(uint **)(param_1 + 4);
    if (*(uint **)(param_1 + 4) == (uint *)0x0) {
      puVar2 = param_1;
    }
    uVar4 = uVar1 + 0x1f;
    if (-1 < (int)uVar1) {
      uVar4 = uVar1;
    }
    puVar2[(int)uVar4 >> 5] = puVar2[(int)uVar4 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    FUN_146f911f8(param_1 + 8,uVar1);
  }
  else {
    puVar2 = *(uint **)(param_1 + 4);
    if (*(uint **)(param_1 + 4) == (uint *)0x0) {
      puVar2 = param_1;
    }
    uVar4 = param_1[6] + 0x1f;
    uVar5 = 0xffffffff;
    if (0x1f < uVar4) {
      lVar6 = 0;
      puVar8 = puVar2;
LAB_146f7077c:
      if (*puVar8 == 0xffffffff) goto code_r0x000146f70785;
      uVar9 = ~*puVar8;
      uVar4 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      iVar7 = (int)((ulonglong)uVar4 - lVar6);
      if (uVar4 + 1 != (int)lVar6 && iVar7 < (int)param_1[6]) {
        iVar3 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar3 = iVar7;
        }
        puVar2[iVar3 >> 5] = puVar2[iVar3 >> 5] | 1 << ((byte)uVar4 & 0x1f);
        uVar1 = param_1[0x1e];
        uVar5 = (ulonglong)uVar4 - lVar6 & 0xffffffff;
      }
    }
LAB_146f70764:
    param_1[0x1e] = uVar1 - 1;
  }
  return uVar5;
code_r0x000146f70785:
  lVar6 = lVar6 + -0x20;
  puVar8 = puVar8 + 1;
  if ((ulonglong)(uVar4 & 0xffffffe0) + lVar6 == 0) goto LAB_146f70764;
  goto LAB_146f7077c;
}



// FUNCTION 146f70828 FUN_146f70828 body=194 status=ok
// SIG undefined FUN_146f70828(void)

void FUN_146f70828(longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f708ec(param_1 + 0xd8,local_40,param_2);
  *local_40[0] = *(undefined4 *)*param_3;
  local_40[0][1] = *(undefined4 *)(*param_3 + 4);
  local_40[0][2] = *(undefined4 *)(*param_3 + 8);
  param_1 = param_1 + 0x1e0;
  FUN_146f6de70(param_1,*(undefined4 *)*param_3,param_2,param_4);
  FUN_146f6de70(param_1,*(undefined4 *)(*param_3 + 4),param_2,param_4);
  FUN_146f6de70(param_1,*(undefined4 *)(*param_3 + 8),param_2,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f708ec FUN_146f708ec body=102 status=ok
// SIG undefined FUN_146f708ec(void)

void FUN_146f708ec(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar3 = (int)param_1[1];
  lVar1 = *(longlong *)(*param_1 + 0x30);
  lVar2 = *param_1 + 0x18;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  if (iVar3 == 0) {
    plVar5 = (longlong *)
             ((longlong)((int)param_3 >> 8) * 0xc18 +
             *(longlong *)(lVar2 + (longlong)param_4 * 0x18));
    iVar3 = *(int *)((longlong)plVar5 + (param_3 & 0xff) * 4 + 0x410);
    iVar4 = *(int *)((longlong)plVar5 + (param_3 & 0xff) * 4 + 0x10);
  }
  else {
    plVar5 = (longlong *)(lVar2 + (longlong)param_4 * 0x18);
    iVar4 = (int)param_3 * (int)plVar5[2];
  }
  *param_2 = (longlong)iVar4 * 4 + *plVar5;
  *(int *)(param_2 + 1) = iVar3;
  return;
}



// FUNCTION 146f70952 FUN_146f70952 body=1024 status=ok
// SIG undefined FUN_146f70952(void)

void FUN_146f70952(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar12 = plVar4;
  }
  local_ac = *(undefined4 *)(*plVar12 + (longlong)(int)((int)plVar12[2] * param_2) * 4);
  local_98 = param_1 + 0x250;
  local_a8 = param_3;
  local_a0 = param_4;
  local_4c = local_ac;
  FUN_146f71930(local_98,local_ac,param_2,0);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar12 = plVar4;
  }
  local_88 = (ulonglong)*(uint *)(*plVar12 + (longlong)(int)((int)plVar12[2] * param_2) * 4);
  FUN_146f71930(param_1 + 0x218,local_88,param_2,0);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  plVar12 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar12 = plVar4;
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    plVar12 = (longlong *)((ulonglong)(param_2 >> 8) * 0xc18 + *plVar12);
    iVar8 = *(int *)((longlong)plVar12 + (ulonglong)(param_2 & 0xff) * 4 + 0x10);
  }
  else {
    iVar8 = (int)plVar12[2] * param_2;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar13 = plVar4;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    plVar13 = (longlong *)((ulonglong)(param_2 >> 8) * 0xc18 + *plVar13);
    iVar9 = *(int *)((longlong)plVar13 + (ulonglong)(param_2 & 0xff) * 4 + 0x10);
  }
  else {
    iVar9 = (int)plVar13[2] * param_2;
  }
  local_b8 = (longlong)iVar8 * 4 + *plVar12;
  lVar11 = (longlong)iVar9 * 4 + *plVar13;
  local_70 = param_1 + 0x170;
  local_78 = param_1 + 0x1a8;
  puVar1 = (undefined8 *)(param_1 + 0xd8);
  lVar14 = 0;
  local_90 = param_1 + 0x218;
  local_80 = param_1;
  do {
    lVar10 = local_70;
    lVar6 = local_b8;
    local_50 = *(undefined4 *)(local_b8 + lVar14 * 4);
    FUN_146f71930(local_70,local_50,param_2,0);
    *(undefined4 *)(lVar6 + lVar14 * 4) = 0xffffffff;
    if (local_a0 != 0) {
      FUN_146f92b68(lVar10,&local_60,local_50);
      if (local_58 == 0) {
        FUN_146f9d7f2(local_a0,&local_50);
      }
    }
    lVar6 = local_78;
    uVar3 = *(undefined4 *)(lVar11 + lVar14 * 4);
    local_64 = uVar3;
    FUN_146f71930(local_78,uVar3,param_2,0);
    *(undefined4 *)(lVar11 + lVar14 * 4) = 0xffffffff;
    if (local_a8 != 0) {
      FUN_146f92b68(lVar6,&local_60,uVar3);
      if (local_58 == 0) {
        FUN_146f9d858(local_a8,&local_64);
      }
    }
    iVar8 = (**(code **)(*(longlong *)*puVar1 + 0x68))();
    if (0 < iVar8) {
      iVar8 = 0;
      do {
        FUN_146f708ec(puVar1,&local_60,param_2,iVar8);
        FUN_146f71930(param_1 + 0x1e0,*(undefined4 *)(local_60 + lVar14 * 4),param_2,iVar8);
        iVar8 = iVar8 + 1;
        iVar9 = (**(code **)(*(longlong *)*puVar1 + 0x68))();
      } while (iVar8 < iVar9);
    }
    uVar7 = local_88;
    lVar6 = local_90;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  FUN_146f92b68(local_90,&local_60,local_88 & 0xffffffff,0);
  lVar11 = local_80;
  if (local_58 == 0) {
    FUN_146f71930(local_80 + 0x288,local_ac,uVar7 & 0xffffffff,0);
    lVar14 = *(longlong *)(lVar11 + 0x78);
    lVar10 = *(longlong *)(lVar14 + 0x80);
    if (lVar10 == 0) {
      lVar10 = lVar14;
    }
    lVar14 = *(longlong *)(lVar10 + 0x10);
    if (*(longlong *)(lVar10 + 0x10) == 0) {
      lVar14 = lVar10;
    }
    iVar8 = (int)uVar7;
    iVar9 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar9 = iVar8;
    }
    bVar5 = (byte)uVar7 & 0x1f;
    puVar2 = (uint *)(lVar14 + (longlong)(iVar9 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
    FUN_146f91f46(lVar10 + 0x20,uVar7 & 0xffffffff);
    FUN_146f728ae(lVar6,uVar7 & 0xffffffff,0);
  }
  lVar11 = *(longlong *)(lVar11 + 0x70);
  lVar14 = *(longlong *)(lVar11 + 0x80);
  if (lVar14 == 0) {
    lVar14 = lVar11;
  }
  lVar11 = *(longlong *)(lVar14 + 0x10);
  if (*(longlong *)(lVar14 + 0x10) == 0) {
    lVar11 = lVar14;
  }
  bVar5 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar11 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 1;
  FUN_146f91f46(lVar14 + 0x20,param_2);
  if (param_5 != 0) {
    FUN_146f92b68(local_98,&local_60,local_4c,0);
    if (local_58 == 0) {
      FUN_146f9d8c0(param_5,&local_4c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f70d54 FUN_146f70d54 body=135 status=ok
// SIG undefined FUN_146f70d54(void)

void FUN_146f70d54(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    lVar4 = lVar3;
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
  FUN_146f91f46(lVar3 + 0x20,param_2);
  FUN_146f728ae(param_1 + 0x288,param_2,0);
  FUN_146f728ae(param_1 + 0x250,param_2,0);
  return;
}



// FUNCTION 146f70ddc FUN_146f70ddc body=122 status=ok
// SIG undefined FUN_146f70ddc(void)

void FUN_146f70ddc(longlong param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
  }
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    lVar4 = lVar3;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
  FUN_146f91f46(lVar3 + 0x20,param_2);
  FUN_146f728ae(param_1 + 0x100,param_2,0);
  FUN_146f728ae(param_1 + 0x138,param_2,0);
  return;
}



// FUNCTION 146f70e56 FUN_146f70e56 body=433 status=ok
// SIG undefined FUN_146f70e56(void)

void FUN_146f70e56(longlong param_1,int param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_5 != (longlong *)0x0) &&
     (*(undefined4 *)(param_5 + 1) = 0, *(int *)((longlong)param_5 + 0xc) != 0)) {
    FUN_146f9d792(param_5,0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar6 = plVar4;
  }
  *(undefined4 *)(*plVar6 + (longlong)((int)plVar6[2] * param_2) * 4) = param_3;
  local_6c = param_2;
  FUN_146f6de70(param_1 + 0x288,param_3,param_2,0);
  lVar8 = (longlong)(int)param_4[1];
  if (0 < lVar8) {
    lVar9 = 1;
    do {
      lVar7 = lVar9;
      if (lVar9 == lVar8) {
        lVar7 = 0;
      }
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar6 = plVar4;
      }
      uVar1 = *(undefined4 *)
               (*plVar6 + (longlong)(*(int *)(*param_4 + -4 + lVar9 * 4) * (int)plVar6[2]) * 4);
      uVar2 = *(undefined4 *)
               (*plVar6 + (longlong)((int)plVar6[2] * *(int *)(*param_4 + lVar7 * 4)) * 4);
      FUN_146f6df8a(param_1,&local_4c,uVar1,uVar2);
      if (local_4c == -1) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
        if (lVar7 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x68);
        }
        uVar5 = FUN_146f70732(lVar7);
        FUN_146f70188(param_1,uVar5,uVar1,uVar2);
        if (param_5 != (longlong *)0x0) {
          iVar3 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
            FUN_146f99d00(param_5,iVar3);
          }
          *(undefined4 *)(*param_5 + (longlong)iVar3 * 4) = uVar5;
        }
      }
      bVar10 = lVar9 != lVar8;
      lVar9 = lVar9 + 1;
    } while (bVar10);
  }
  local_68 = (undefined4)*param_4;
  uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_60 = (undefined4)param_4[1];
  uStack_5c = *(undefined4 *)((longlong)param_4 + 0xc);
  FUN_146f6e1e4(param_1,local_6c);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f71008 FUN_146f71008 body=1415 status=ok
// SIG undefined FUN_146f71008(void)

void FUN_146f71008(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_dc;
  uint *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [8];
  int local_a0;
  undefined4 local_94;
  uint *local_90;
  uint local_88;
  undefined4 local_7c;
  uint local_78 [8];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar14 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar14 = plVar5;
  }
  local_7c = *(undefined4 *)(*plVar14 + (longlong)(int)((int)plVar14[2] * param_2) * 4);
  lVar17 = param_1 + 0x218;
  local_d0 = param_3;
  local_c8 = param_4;
  FUN_146f716d6(lVar17,&local_90,param_2,0);
  local_58 = (uint *)0x0;
  local_50 = 0x800000000;
  lVar8 = (longlong)(int)local_88;
  if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_88 - 1);
  }
  local_e8 = param_1;
  local_dc = param_2;
  local_b8 = lVar17;
  if (9 < local_88) {
    FUN_146f9df2c(local_78);
    lVar8 = (longlong)(int)local_88;
    if (lVar8 == 0) goto LAB_146f71352;
  }
  local_d8 = local_90 + lVar8;
  lVar17 = param_1 + 0x1a8;
  local_c0 = param_1 + 0x170;
  puVar11 = local_90;
  do {
    uVar3 = *puVar11;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (plVar5 != (longlong *)0x0) {
      plVar14 = plVar5;
    }
    if (*(int *)(param_1 + 0xa8) == 0) {
      plVar14 = (longlong *)((longlong)((int)uVar3 >> 8) * 0xc18 + *plVar14);
      iVar9 = *(int *)((longlong)plVar14 + (ulonglong)(uVar3 & 0xff) * 4 + 0x10);
    }
    else {
      iVar9 = (int)plVar14[2] * uVar3;
    }
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
    plVar16 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
    if (plVar5 != (longlong *)0x0) {
      plVar16 = plVar5;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      plVar16 = (longlong *)((longlong)((int)uVar3 >> 8) * 0xc18 + *plVar16);
      iVar12 = *(int *)((longlong)plVar16 + (ulonglong)(uVar3 & 0xff) * 4 + 0x10);
    }
    else {
      iVar12 = (int)plVar16[2] * uVar3;
    }
    lVar20 = (longlong)iVar9 * 4 + *plVar14;
    lVar8 = (longlong)iVar12 * 4 + *plVar16;
    lVar18 = 0;
    do {
      uVar4 = *(undefined4 *)(lVar8 + lVar18 * 4);
      local_94 = uVar4;
      cVar7 = FUN_146f72814(param_1,uVar4);
      if (cVar7 == '\0') {
        FUN_146f71930(lVar17,uVar4,uVar3,0);
        *(undefined4 *)(lVar8 + lVar18 * 4) = 0xffffffff;
        param_1 = local_e8;
        if ((local_d0 != 0) &&
           (FUN_146f92b68(lVar17,local_a8,uVar4), param_1 = local_e8, local_a0 == 0)) {
          FUN_146f9d858(local_d0,&local_94);
        }
      }
      else {
        FUN_146f9e010(local_78,&local_94);
      }
      local_ac = *(undefined4 *)(lVar20 + lVar18 * 4);
      FUN_146f71930(local_c0,local_ac,uVar3,0);
      *(undefined4 *)(lVar20 + lVar18 * 4) = 0xffffffff;
      if ((local_c8 != 0) && (FUN_146f92b68(local_c0,local_a8,local_ac), local_a0 == 0)) {
        FUN_146f9d7f2(local_c8,&local_ac);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 3);
    puVar11 = puVar11 + 1;
  } while (puVar11 != local_d8);
  if ((longlong)(int)local_88 != 0) {
    lVar17 = 0;
    do {
      iVar9 = *(int *)((longlong)local_90 + lVar17);
      FUN_146f71930(param_1 + 0x250,local_7c,iVar9,0);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x70);
      }
      lVar18 = *(longlong *)(lVar8 + 0x10);
      if (*(longlong *)(lVar8 + 0x10) == 0) {
        lVar18 = lVar8;
      }
      iVar12 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar12 = iVar9;
      }
      bVar6 = (byte)iVar9 & 0x1f;
      puVar11 = (uint *)(lVar18 + (longlong)(iVar12 >> 5) * 4);
      *puVar11 = *puVar11 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      *(int *)(lVar8 + 0x78) = *(int *)(lVar8 + 0x78) + 1;
      FUN_146f91f46(lVar8 + 0x20,iVar9);
      lVar17 = lVar17 + 4;
    } while ((longlong)(int)local_88 * 4 != lVar17);
  }
LAB_146f71352:
  puVar11 = local_58;
  if (local_58 == (uint *)0x0) {
    puVar11 = local_78;
  }
  if ((longlong)(int)local_50 != 0) {
    puVar1 = puVar11 + (int)local_50;
    lVar17 = param_1 + 0x138;
    lVar8 = param_1 + 0x1a8;
    do {
      uVar3 = *puVar11;
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
      plVar14 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar14 = plVar5;
      }
      if ((longlong)*(int *)(param_1 + 0x98) == 0) {
        lVar20 = (longlong)((int)uVar3 >> 8) * 0xc18;
        lVar18 = *plVar14 + lVar20;
        lVar15 = (longlong)*(int *)(lVar18 + 0x410 + (ulonglong)(uVar3 & 0xff) * 4);
        if (lVar15 != 0) {
          puVar10 = (undefined4 *)
                    ((longlong)*(int *)(lVar18 + 0x10 + (ulonglong)(uVar3 & 0xff) * 4) * 4 +
                    *(longlong *)(*plVar14 + lVar20));
          puVar19 = puVar10 + lVar15;
          goto LAB_146f7140b;
        }
      }
      else {
        puVar10 = (undefined4 *)((longlong)(int)((int)plVar14[2] * uVar3) * 4 + *plVar14);
        puVar19 = puVar10 + *(int *)(param_1 + 0x98);
LAB_146f7140b:
        do {
          FUN_146f71930(lVar17,*puVar10,uVar3,0);
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar19);
      }
      param_1 = local_e8;
      lVar18 = *(longlong *)(*(longlong *)(local_e8 + 0x68) + 0x80);
      if (lVar18 == 0) {
        lVar18 = *(longlong *)(local_e8 + 0x68);
      }
      lVar20 = *(longlong *)(lVar18 + 0x10);
      if (*(longlong *)(lVar18 + 0x10) == 0) {
        lVar20 = lVar18;
      }
      uVar13 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar13 = uVar3;
      }
      bVar6 = (byte)uVar3 & 0x1f;
      puVar2 = (uint *)(lVar20 + (longlong)((int)uVar13 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      *(int *)(lVar18 + 0x78) = *(int *)(lVar18 + 0x78) + 1;
      FUN_146f91f46(lVar18 + 0x20,uVar3);
      FUN_146f728ae(lVar8,uVar3,0);
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
  uVar3 = local_dc;
  FUN_146f71930(param_1 + 0x288,local_7c,local_dc,0);
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(param_1 + 0x78);
  }
  lVar8 = *(longlong *)(lVar17 + 0x10);
  if (*(longlong *)(lVar17 + 0x10) == 0) {
    lVar8 = lVar17;
  }
  bVar6 = (byte)uVar3 & 0x1f;
  puVar11 = (uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar11 = *puVar11 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  *(int *)(lVar17 + 0x78) = *(int *)(lVar17 + 0x78) + 1;
  FUN_146f91f46(lVar17 + 0x20,uVar3);
  FUN_146f728ae(local_b8,uVar3,0);
  if ((param_5 != 0) && (FUN_146f92b68(param_1 + 0x288,local_a8,local_7c,0), local_a0 == 0)) {
    FUN_146f9d8c0(param_5,&local_7c);
  }
  if (local_58 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f71592 FUN_146f71592 body=170 status=ok
// SIG undefined FUN_146f71592(void)

bool FUN_146f71592(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f7163e(param_1 + 0x100,&local_40,param_2,0);
  if ((longlong)local_38 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = 0;
    do {
      FUN_146f716d6(param_1 + 0x170,local_50,*(undefined4 *)(local_40 + lVar2),0);
      bVar1 = local_48 < 1;
      if (0 < local_48) break;
      bVar3 = (longlong)local_38 * 4 + -4 != lVar2;
      lVar2 = lVar2 + 4;
    } while (bVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 146f7163e FUN_146f7163e body=151 status=ok
// SIG undefined FUN_146f7163e(void)

ulonglong * FUN_146f7163e(longlong *param_1,ulonglong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_146f79d12(param_1,param_3,param_4);
  bVar2 = *(byte *)((longlong)param_1 + 0x2c) & 0x1f;
  iVar3 = (int)param_3 >> bVar2;
  if (iVar3 < *(int *)(*param_1 + 8 + (longlong)param_4 * 0xb0)) {
    lVar7 = *(longlong *)(*param_1 + (longlong)param_4 * 0xb0);
    lVar8 = (longlong)iVar3 * 0x58;
    plVar1 = (longlong *)(lVar7 + lVar8);
    plVar4 = (longlong *)plVar1[3];
    if ((longlong *)plVar1[3] == (longlong *)0x0) {
      plVar4 = plVar1 + 2;
    }
    uVar5 = (longlong)
            *(int *)((longlong)plVar4 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4) * 4 +
            *plVar1;
    lVar7 = lVar7 + lVar8 + 0x28;
    if (plVar1[6] != 0) {
      lVar7 = plVar1[6];
    }
    uVar6 = *(undefined4 *)(lVar7 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4);
  }
  else {
    uVar5 = (ulonglong)(uint)(0 >> bVar2);
    uVar6 = 0;
  }
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  return param_2;
}



// FUNCTION 146f716d6 FUN_146f716d6 body=151 status=ok
// SIG undefined FUN_146f716d6(void)

ulonglong * FUN_146f716d6(longlong *param_1,ulonglong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_146f79d12(param_1,param_3,param_4);
  bVar2 = *(byte *)((longlong)param_1 + 0x2c) & 0x1f;
  iVar3 = (int)param_3 >> bVar2;
  if (iVar3 < *(int *)(*param_1 + 8 + (longlong)param_4 * 0xb0)) {
    lVar7 = *(longlong *)(*param_1 + (longlong)param_4 * 0xb0);
    lVar8 = (longlong)iVar3 * 0x58;
    plVar1 = (longlong *)(lVar7 + lVar8);
    plVar4 = (longlong *)plVar1[3];
    if ((longlong *)plVar1[3] == (longlong *)0x0) {
      plVar4 = plVar1 + 2;
    }
    uVar5 = (longlong)
            *(int *)((longlong)plVar4 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4) * 4 +
            *plVar1;
    lVar7 = lVar7 + lVar8 + 0x28;
    if (plVar1[6] != 0) {
      lVar7 = plVar1[6];
    }
    uVar6 = *(undefined4 *)(lVar7 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4);
  }
  else {
    uVar5 = (ulonglong)(uint)(0 >> bVar2);
    uVar6 = 0;
  }
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  return param_2;
}



// FUNCTION 146f7176e FUN_146f7176e body=151 status=ok
// SIG undefined FUN_146f7176e(void)

ulonglong * FUN_146f7176e(longlong *param_1,ulonglong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_146f79d12(param_1,param_3,param_4);
  bVar2 = *(byte *)((longlong)param_1 + 0x2c) & 0x1f;
  iVar3 = (int)param_3 >> bVar2;
  if (iVar3 < *(int *)(*param_1 + 8 + (longlong)param_4 * 0xb0)) {
    lVar7 = *(longlong *)(*param_1 + (longlong)param_4 * 0xb0);
    lVar8 = (longlong)iVar3 * 0x58;
    plVar1 = (longlong *)(lVar7 + lVar8);
    plVar4 = (longlong *)plVar1[3];
    if ((longlong *)plVar1[3] == (longlong *)0x0) {
      plVar4 = plVar1 + 2;
    }
    uVar5 = (longlong)
            *(int *)((longlong)plVar4 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4) * 4 +
            *plVar1;
    lVar7 = lVar7 + lVar8 + 0x28;
    if (plVar1[6] != 0) {
      lVar7 = plVar1[6];
    }
    uVar6 = *(undefined4 *)(lVar7 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4);
  }
  else {
    uVar5 = (ulonglong)(uint)(0 >> bVar2);
    uVar6 = 0;
  }
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  return param_2;
}



// FUNCTION 146f71806 FUN_146f71806 body=297 status=ok
// SIG undefined FUN_146f71806(void)

uint * FUN_146f71806(longlong param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar4 = plVar5;
  }
  iVar1 = *(int *)(*plVar4 + (longlong)(param_3 * (int)plVar4[2]) * 4);
  iVar2 = *(int *)(*plVar4 + (longlong)(param_4 * (int)plVar4[2]) * 4);
  FUN_146f7176e(param_1 + 0x138,&local_40,iVar1,0);
  if ((longlong)local_38 != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
    if (plVar5 != (longlong *)0x0) {
      plVar4 = plVar5;
    }
    lVar6 = 0;
    do {
      uVar7 = *(uint *)(local_40 + lVar6);
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar5 = (longlong *)((longlong)((int)uVar7 >> 8) * 0xc18 + *plVar4);
        iVar8 = *(int *)((longlong)plVar5 + (ulonglong)(uVar7 & 0xff) * 4 + 0x10);
      }
      else {
        iVar8 = (int)plVar4[2] * uVar7;
        plVar5 = plVar4;
      }
      iVar3 = *(int *)(*plVar5 + (longlong)iVar8 * 4);
      iVar8 = *(int *)(*plVar5 + 4 + (longlong)iVar8 * 4);
      if (((iVar3 == iVar1) && (iVar8 == iVar2)) || ((iVar3 == iVar2 && (iVar8 == iVar1))))
      goto LAB_146f71908;
      lVar6 = lVar6 + 4;
    } while ((longlong)local_38 * 4 != lVar6);
  }
  uVar7 = 0xffffffff;
LAB_146f71908:
  *param_2 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f71930 FUN_146f71930 body=123 status=ok
// SIG undefined FUN_146f71930(void)

void FUN_146f71930(longlong *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(char *)((longlong)param_1 + 0x34) == '\0') && (*(char *)((longlong)param_1 + 0x35) == '\0')
     ) {
    if ((int)param_1[1] <= param_4) {
      FUN_1412e7bec(param_1,param_4 + 1,1);
    }
    iVar1 = (int)param_2 >> (*(byte *)((longlong)param_1 + 0x2c) & 0x1f);
    if (iVar1 < *(int *)(*param_1 + 8 + (longlong)param_4 * 0xb0)) {
      FUN_146f79a5a((longlong)iVar1 * 0x58 + *(longlong *)(*param_1 + (longlong)param_4 * 0xb0),
                    param_2 & *(uint *)(param_1 + 6),param_3);
      return;
    }
  }
  return;
}



// FUNCTION 146f719ac FUN_146f719ac body=1024 status=ok
// SIG undefined FUN_146f719ac(void)

void FUN_146f719ac(longlong param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_94;
  uint *local_90;
  longlong local_88;
  longlong local_80;
  uint *local_78;
  longlong local_70;
  uint *local_68;
  undefined8 uStack_60;
  uint *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = param_1 + 0x218;
  FUN_146f716d6(lVar9,&local_58,param_2,0);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar16 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  local_94 = *(undefined4 *)(*plVar16 + (longlong)((int)plVar16[2] * param_2) * 4);
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  if (local_50 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_50 + -1);
  }
  local_98 = param_2;
  local_88 = lVar9;
  if (local_50 == 1) {
    local_90 = local_58 + 1;
  }
  else {
    FUN_146f9d792(&local_68);
    if ((longlong)local_50 == 0) goto LAB_146f71c16;
    local_90 = local_58 + local_50;
  }
  local_80 = param_1 + 0x250;
  do {
    uVar3 = *local_58;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    plVar16 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (plVar4 != (longlong *)0x0) {
      plVar16 = plVar4;
    }
    if (*(int *)(param_1 + 0xa8) == 0) {
      plVar16 = (longlong *)((longlong)((int)uVar3 >> 8) * 0xc18 + *plVar16);
      iVar10 = *(int *)((longlong)plVar16 + (ulonglong)(uVar3 & 0xff) * 4 + 0x10);
    }
    else {
      iVar10 = (int)plVar16[2] * uVar3;
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
    plVar17 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
    if (plVar4 != (longlong *)0x0) {
      plVar17 = plVar4;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      plVar17 = (longlong *)((longlong)((int)uVar3 >> 8) * 0xc18 + *plVar17);
      iVar14 = *(int *)((longlong)plVar17 + (ulonglong)(uVar3 & 0xff) * 4 + 0x10);
    }
    else {
      iVar14 = (int)plVar17[2] * uVar3;
    }
    lVar9 = *plVar16;
    lVar18 = (longlong)iVar14 * 4 + *plVar17;
    lVar11 = 0;
    local_78 = local_58;
    local_70 = lVar18;
    do {
      FUN_146f71930(param_1 + 0x170,*(undefined4 *)((longlong)iVar10 * 4 + lVar9 + lVar11 * 4),uVar3
                    ,0);
      uVar15 = *(uint *)(lVar18 + lVar11 * 4);
      cVar7 = FUN_146f72814(param_1,uVar15);
      uVar6 = uStack_60;
      if (cVar7 != '\0') {
        lVar18 = (longlong)(int)uStack_60;
        uVar8 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
        if (uStack_60._4_4_ < uVar8) {
          FUN_146f99d00(&local_68,uVar6 & 0xffffffff);
        }
        local_68[lVar18] = uVar15;
        lVar18 = local_70;
      }
      FUN_146f71930(param_1 + 0x1a8,uVar15,uVar3,0);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    FUN_146f71930(local_80,local_94,uVar3,0);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x70);
    }
    lVar18 = *(longlong *)(lVar9 + 0x10);
    if (*(longlong *)(lVar9 + 0x10) == 0) {
      lVar18 = lVar9;
    }
    uVar15 = uVar3 + 0x1f;
    if (-1 < (int)uVar3) {
      uVar15 = uVar3;
    }
    bVar5 = (byte)uVar3 & 0x1f;
    puVar1 = (uint *)(lVar18 + (longlong)((int)uVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
    FUN_146f91f46(lVar9 + 0x20,uVar3);
    local_58 = local_78 + 1;
  } while (local_58 != local_90);
LAB_146f71c16:
  FUN_146f728ae(local_88,local_98,0);
  if ((longlong)(int)uStack_60 != 0) {
    puVar1 = local_68 + (int)uStack_60;
    puVar13 = local_68;
    do {
      uVar3 = *puVar13;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
      plVar16 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar16 = plVar4;
      }
      if ((longlong)*(int *)(param_1 + 0x98) == 0) {
        lVar18 = (longlong)((int)uVar3 >> 8) * 0xc18;
        lVar9 = *plVar16 + lVar18;
        lVar11 = (longlong)*(int *)(lVar9 + 0x410 + (ulonglong)(uVar3 & 0xff) * 4);
        if (lVar11 != 0) {
          puVar12 = (undefined4 *)
                    ((longlong)*(int *)(lVar9 + 0x10 + (ulonglong)(uVar3 & 0xff) * 4) * 4 +
                    *(longlong *)(*plVar16 + lVar18));
          puVar19 = puVar12 + lVar11;
          goto LAB_146f71cc1;
        }
      }
      else {
        puVar12 = (undefined4 *)((longlong)(int)((int)plVar16[2] * uVar3) * 4 + *plVar16);
        puVar19 = puVar12 + *(int *)(param_1 + 0x98);
LAB_146f71cc1:
        do {
          FUN_146f71930(param_1 + 0x138,*puVar12,uVar3,0);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar19);
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x80);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x68);
      }
      lVar18 = *(longlong *)(lVar9 + 0x10);
      if (*(longlong *)(lVar9 + 0x10) == 0) {
        lVar18 = lVar9;
      }
      uVar15 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar15 = uVar3;
      }
      bVar5 = (byte)uVar3 & 0x1f;
      puVar2 = (uint *)(lVar18 + (longlong)((int)uVar15 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
      *(int *)(lVar9 + 0x78) = *(int *)(lVar9 + 0x78) + 1;
      FUN_146f91f46(lVar9 + 0x20,uVar3);
      FUN_146f728ae(param_1 + 0x1a8,uVar3,0);
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1);
  }
  if (local_68 != (uint *)0x0) {
    FUN_1400020a8(local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f71dae FUN_146f71dae body=595 status=ok
// SIG undefined FUN_146f71dae(void)

void FUN_146f71dae(longlong param_1,double *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar7 = (int)param_3[1];
  dVar16 = DAT_14c8464e0;
  dVar17 = DAT_14c8464e8;
  dVar18 = DAT_14c8464f0;
  fVar19 = (float)DAT_14c846330;
  fVar20 = DAT_14c846330._4_4_;
  fVar21 = DAT_14c846338;
  if (0 < (longlong)iVar7) {
    iVar12 = iVar7 + -1;
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
    if (plVar8 != (longlong *)0x0) {
      plVar14 = plVar8;
    }
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x30);
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0xf8) + 0x18);
    if (plVar8 != (longlong *)0x0) {
      plVar15 = plVar8;
    }
    lVar9 = *plVar15;
    lVar11 = 0;
    do {
      lVar13 = (longlong)
               (*(int *)(*plVar14 +
                        (longlong)(*(int *)(*param_3 + (longlong)iVar12 * 4) * (int)plVar14[2]) * 4)
               * (int)plVar15[2]);
      fVar1 = *(float *)(lVar9 + lVar13 * 0xc);
      fVar2 = *(float *)(lVar9 + 4 + lVar13 * 0xc);
      fVar3 = *(float *)(lVar9 + 8 + lVar13 * 0xc);
      lVar13 = (longlong)
               (*(int *)(*plVar14 +
                        (longlong)(*(int *)(*param_3 + lVar11 * 4) * (int)plVar14[2]) * 4) *
               (int)plVar15[2]);
      fVar4 = *(float *)(lVar9 + lVar13 * 0xc);
      fVar5 = *(float *)(lVar9 + 4 + lVar13 * 0xc);
      fVar6 = *(float *)(lVar9 + 8 + lVar13 * 0xc);
      fVar19 = fVar19 + fVar4;
      fVar20 = fVar20 + fVar5;
      fVar21 = fVar21 + fVar6;
      dVar16 = dVar16 + (double)((fVar3 + fVar6) * (fVar5 - fVar2));
      dVar17 = dVar17 + (double)((fVar1 + fVar4) * (fVar6 - fVar3));
      dVar18 = dVar18 + (double)((fVar2 + fVar5) * (fVar4 - fVar1));
      iVar12 = (int)lVar11;
      lVar11 = lVar11 + 1;
    } while (iVar7 != lVar11);
  }
  dVar10 = dVar18 * dVar18 + dVar16 * dVar16 + dVar17 * dVar17;
  if (9.99999993922529e-09 < dVar10) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar16 = dVar16 * dVar10;
    dVar17 = dVar17 * dVar10;
    dVar18 = dVar18 * dVar10;
  }
  *param_2 = dVar16;
  param_2[1] = dVar17;
  param_2[2] = dVar18;
  param_2[3] = ((double)fVar21 * dVar18 + (double)fVar19 * dVar16 + (double)fVar20 * dVar17) /
               (double)iVar7;
  return;
}



// FUNCTION 146f72002 FUN_146f72002 body=1858 status=ok
// SIG undefined FUN_146f72002(void)

void FUN_146f72002(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  int local_c8 [16];
  int *local_88;
  undefined8 local_80;
  int local_78 [8];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_1;
  if ((int)param_2[1] == 1) {
    *(undefined8 *)*param_3 = 0;
    *(undefined8 *)(*param_3 + 8) = 0x100000000;
    *(undefined8 *)(*param_3 + 0x10) = 0x200000000;
    goto LAB_146f72063;
  }
  local_58 = (int *)0x0;
  local_50 = 0x800000000;
  local_88 = (int *)0x0;
  local_80 = 0x800000000;
  local_d0 = param_2;
  if (0 < (int)param_2[1]) {
    lVar9 = 0;
    local_d8 = param_3;
    do {
      uVar5 = *(uint *)(*local_d0 + lVar9 * 4);
      plVar11 = *(longlong **)(*(longlong *)(local_e0 + 0xb8) + 0x30);
      plVar20 = (longlong *)(*(longlong *)(local_e0 + 0xb8) + 0x18);
      if (plVar11 != (longlong *)0x0) {
        plVar20 = plVar11;
      }
      if (*(int *)(local_e0 + 0xc0) == 0) {
        plVar20 = (longlong *)((longlong)((int)uVar5 >> 8) * 0xc18 + *plVar20);
        iVar17 = *(int *)((longlong)plVar20 + (ulonglong)(uVar5 & 0xff) * 4 + 0x10);
      }
      else {
        iVar17 = uVar5 * (int)plVar20[2];
      }
      lVar16 = *plVar20;
      lVar12 = 0;
      do {
        uVar7 = local_50;
        piVar6 = local_58;
        if (local_58 == (int *)0x0) {
          piVar6 = local_78;
        }
        iVar13 = *(int *)((longlong)iVar17 * 4 + lVar16 + lVar12 * 4);
        lVar21 = (longlong)(int)(uint)local_50;
        if (lVar21 != 0) {
          lVar14 = lVar21 * 4;
          lVar24 = 0;
          lVar10 = 0;
          do {
            if (piVar6[lVar24] == iVar13) {
              iVar8 = (int)lVar24;
              if (iVar8 != -1) {
                if ((uint)local_50 + -1 != iVar8) {
                  iVar13 = ((uint)local_50 + -1) - iVar8;
                  if (0 < iVar13) {
                    iVar13 = 1;
                  }
                  memmove(piVar6 + (lVar10 >> 0x20),piVar6 + (int)((uint)local_50 - iVar13),
                          (longlong)iVar13 << 2);
                }
                local_50 = CONCAT44(local_50._4_4_,(uint)local_50 + -1);
                if ((int)local_80 + -1 != iVar8) {
                  iVar8 = ((int)local_80 + -1) - iVar8;
                  if (0 < iVar8) {
                    iVar8 = 1;
                  }
                  piVar6 = local_88;
                  if (local_88 == (int *)0x0) {
                    piVar6 = local_c8;
                  }
                  memmove(piVar6 + (lVar10 >> 0x20) * 2,
                          piVar6 + (longlong)((int)local_80 - iVar8) * 2,(longlong)iVar8 << 3);
                }
                local_80 = CONCAT44(local_80._4_4_,(int)local_80 + -1);
                goto LAB_146f721c9;
              }
              break;
            }
            lVar10 = lVar10 + 0x100000000;
            lVar24 = lVar24 + 1;
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
        }
        uVar5 = (uint)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_146f9e542(local_78,uVar7 & 0xffffffff);
        }
        uVar7 = local_80;
        piVar6 = local_58;
        if (local_58 == (int *)0x0) {
          piVar6 = local_78;
        }
        piVar6[lVar21] = iVar13;
        lVar21 = (longlong)(int)local_80;
        uVar5 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,uVar5);
        if (local_80._4_4_ < uVar5) {
          FUN_146f92674(local_c8,uVar7 & 0xffffffff);
        }
        piVar6 = local_88;
        if (local_88 == (int *)0x0) {
          piVar6 = local_c8;
        }
        *(longlong *)(piVar6 + lVar21 * 2) = (lVar12 << 0x20) + lVar9;
LAB_146f721c9:
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)local_d0[1]);
    param_3 = local_d8;
    if (2 < (int)(uint)local_50) {
      uVar7 = 1;
      uVar23 = 0;
      uVar5 = (uint)local_50;
      do {
        piVar6 = local_58;
        if (local_58 == (int *)0x0) {
          piVar6 = local_78;
        }
        uVar1 = piVar6[uVar23];
        plVar11 = *(longlong **)(*(longlong *)(local_e0 + 0x90) + 0x30);
        plVar20 = (longlong *)(*(longlong *)(local_e0 + 0x90) + 0x18);
        if (plVar11 != (longlong *)0x0) {
          plVar20 = plVar11;
        }
        if (*(int *)(local_e0 + 0x98) == 0) {
          plVar11 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar20);
          iVar17 = *(int *)((longlong)plVar11 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
        }
        else {
          iVar17 = uVar1 * (int)plVar20[2];
          plVar11 = plVar20;
        }
        uVar23 = uVar23 + 1;
        if ((longlong)uVar23 < (longlong)(int)uVar5) {
          iVar13 = *(int *)(*plVar11 + (longlong)iVar17 * 4);
          uVar19 = uVar7;
          do {
            uVar1 = piVar6[uVar19];
            if (*(int *)(local_e0 + 0x98) == 0) {
              plVar22 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar20);
              iVar8 = *(int *)((longlong)plVar22 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
            }
            else {
              iVar8 = (int)plVar20[2] * uVar1;
              plVar22 = plVar20;
            }
            iVar2 = *(int *)(*plVar22 + (longlong)iVar8 * 4);
            if ((((iVar13 == iVar2) ||
                 (iVar8 = *(int *)(*plVar22 + 4 + (longlong)iVar8 * 4), iVar13 == iVar8)) ||
                (iVar3 = *(int *)(*plVar11 + 4 + (longlong)iVar17 * 4), iVar3 == iVar2)) ||
               (iVar3 == iVar8)) {
              if (uVar23 < (uVar19 & 0xffffffff)) {
                iVar17 = piVar6[uVar23];
                piVar6[uVar23] = uVar1;
                piVar6[uVar19] = iVar17;
                piVar6 = local_88;
                if (local_88 == (int *)0x0) {
                  piVar6 = local_c8;
                }
                uVar4 = *(undefined8 *)(piVar6 + uVar23 * 2);
                *(undefined8 *)(piVar6 + uVar23 * 2) = *(undefined8 *)(piVar6 + uVar19 * 2);
                *(undefined8 *)(piVar6 + uVar19 * 2) = uVar4;
                uVar5 = (uint)local_50;
              }
              break;
            }
            uVar19 = uVar19 + 1;
          } while (uVar5 != uVar19);
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar23 < (longlong)(int)(uVar5 - 2));
    }
  }
  piVar6 = local_78;
  if (local_58 != (int *)0x0) {
    piVar6 = local_58;
  }
  piVar15 = local_88;
  if (local_88 == (int *)0x0) {
    piVar15 = local_c8;
  }
  uVar5 = *(uint *)(*local_d0 + (longlong)*piVar15 * 4);
  plVar11 = *(longlong **)(*(longlong *)(local_e0 + 0xb8) + 0x30);
  plVar20 = (longlong *)(*(longlong *)(local_e0 + 0xb8) + 0x18);
  if (plVar11 != (longlong *)0x0) {
    plVar20 = plVar11;
  }
  if ((longlong)*(int *)(local_e0 + 0xc0) == 0) {
    lVar16 = (longlong)((int)uVar5 >> 8) * 0xc18;
    lVar9 = *plVar20 + lVar16;
    lVar12 = (longlong)*(int *)(lVar9 + 0x410 + (ulonglong)(uVar5 & 0xff) * 4);
    if (lVar12 != 0) {
      piVar18 = (int *)((longlong)*(int *)(lVar9 + 0x10 + (ulonglong)(uVar5 & 0xff) * 4) * 4 +
                       *(longlong *)(*plVar20 + lVar16));
      piVar15 = piVar18 + lVar12;
      goto LAB_146f7250a;
    }
    lVar9 = 0;
  }
  else {
    piVar18 = (int *)((longlong)(int)((int)plVar20[2] * uVar5) * 4 + *plVar20);
    piVar15 = piVar18 + *(int *)(local_e0 + 0xc0);
LAB_146f7250a:
    iVar17 = 1;
    lVar9 = 0;
    do {
      if (*piVar18 == *piVar6) {
        lVar9 = (longlong)(iVar17 % 3);
        break;
      }
      piVar18 = piVar18 + 1;
      iVar17 = iVar17 + 1;
    } while (piVar18 != piVar15);
  }
  uVar1 = piVar6[1];
  plVar11 = *(longlong **)(*(longlong *)(local_e0 + 200) + 0x30);
  plVar20 = (longlong *)(*(longlong *)(local_e0 + 200) + 0x18);
  if (plVar11 != (longlong *)0x0) {
    plVar20 = plVar11;
  }
  if (*(int *)(local_e0 + 0xd0) == 0) {
    plVar20 = (longlong *)((longlong)((int)uVar5 >> 8) * 0xc18 + *plVar20);
    iVar17 = *(int *)((longlong)plVar20 + (ulonglong)(uVar5 & 0xff) * 4 + 0x10);
  }
  else {
    iVar17 = uVar5 * (int)plVar20[2];
  }
  iVar17 = *(int *)((longlong)iVar17 * 4 + *plVar20 + lVar9 * 4);
  plVar11 = *(longlong **)(*(longlong *)(local_e0 + 0x90) + 0x30);
  plVar20 = (longlong *)(*(longlong *)(local_e0 + 0x90) + 0x18);
  if (plVar11 != (longlong *)0x0) {
    plVar20 = plVar11;
  }
  if (*(int *)(local_e0 + 0x98) == 0) {
    lVar16 = (longlong)((int)uVar1 >> 8) * 0xc18;
    lVar9 = *(longlong *)(*plVar20 + lVar16);
    lVar16 = (longlong)*(int *)(*plVar20 + lVar16 + 0x10 + (ulonglong)(uVar1 & 0xff) * 4);
    if (*(int *)(lVar9 + lVar16 * 4) != iVar17) {
      lVar9 = lVar9 + lVar16 * 4;
      goto LAB_146f726c7;
    }
  }
  else {
    lVar9 = (longlong)(int)(uVar1 * (int)plVar20[2]);
    if (*(int *)(*plVar20 + lVar9 * 4) != iVar17) {
      lVar9 = *plVar20 + lVar9 * 4;
LAB_146f726c7:
      if ((*(int *)(lVar9 + 4) != iVar17) && (1 < (int)local_80)) {
        iVar17 = -1;
        lVar9 = 0;
        do {
          iVar13 = (uint)local_50 + iVar17;
          piVar6 = local_88;
          if (local_88 == (int *)0x0) {
            piVar6 = local_c8;
          }
          uVar4 = *(undefined8 *)(piVar6 + lVar9 * 2);
          *(undefined8 *)(piVar6 + lVar9 * 2) = *(undefined8 *)(piVar6 + (longlong)iVar13 * 2);
          *(undefined8 *)(piVar6 + (longlong)iVar13 * 2) = uVar4;
          lVar9 = lVar9 + 1;
          iVar17 = iVar17 + -1;
        } while (lVar9 < (int)local_80 / 2);
      }
    }
  }
  if (0 < (int)local_80) {
    lVar9 = 0;
    do {
      piVar6 = local_88;
      if (local_88 == (int *)0x0) {
        piVar6 = local_c8;
      }
      *(undefined8 *)(*param_3 + lVar9 * 8) = *(undefined8 *)(piVar6 + lVar9 * 2);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)local_80);
  }
  if (local_88 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (int *)0x0) {
    FUN_1400020a8();
  }
LAB_146f72063:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f72746 FUN_146f72746 body=204 status=ok
// SIG undefined FUN_146f72746(void)

void FUN_146f72746(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_50 [32];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146f716d6(param_1 + 0x218,local_60,param_2,0);
  if (local_58 != 1) {
    local_30 = (undefined1 *)0x0;
    local_28 = 0x800000000;
    FUN_146f9e08c(param_1,param_2,local_50);
    FUN_146f719ac(param_1,param_2);
    local_70 = local_30;
    if (local_30 == (undefined1 *)0x0) {
      local_70 = local_50;
    }
    local_68 = (undefined4)local_28;
    FUN_146f6e1e4(param_1,param_2);
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f72814 FUN_146f72814 body=152 status=ok
// SIG undefined FUN_146f72814(void)

bool FUN_146f72814(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  int *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = false;
  FUN_146f716d6(param_1 + 0x1a8,&local_30,param_2,0);
  if (local_28 == 2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    bVar3 = *(int *)(*plVar2 + (longlong)(*local_30 * (int)plVar2[2]) * 4) ==
            *(int *)(*plVar2 + (longlong)((int)plVar2[2] * local_30[1]) * 4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f728ae FUN_146f728ae body=126 status=ok
// SIG undefined FUN_146f728ae(void)

void FUN_146f728ae(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)((longlong)param_1 + 0x34) == '\0') && (*(char *)((longlong)param_1 + 0x35) == '\0')
     ) {
    if ((int)param_1[1] <= param_3) {
      FUN_1412e7bec(param_1,param_3 + 1,1);
    }
    iVar1 = (int)param_2 >> (*(byte *)((longlong)param_1 + 0x2c) & 0x1f);
    if (iVar1 < *(int *)(*param_1 + 8 + (longlong)param_3 * 0xb0)) {
      lVar2 = (longlong)iVar1 * 0x58 + *(longlong *)(*param_1 + (longlong)param_3 * 0xb0);
      lVar3 = *(longlong *)(lVar2 + 0x30);
      if (lVar3 == 0) {
        lVar3 = lVar2 + 0x28;
      }
      *(undefined4 *)(lVar3 + (longlong)(int)(param_2 & *(uint *)(param_1 + 6)) * 4) = 0;
    }
  }
  return;
}



// FUNCTION 146f7292c FUN_146f7292c body=1030 status=ok
// SIG undefined FUN_146f7292c(void)

double * FUN_146f7292c(longlong param_1,double *param_2)

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
  bool bVar12;
  bool bVar13;
  char cVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  
  dVar3 = DAT_14c8464f0;
  dVar23 = DAT_14c8464e8;
  dVar4 = DAT_14c8464e0;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_1 + 0x50);
  }
  local_d0 = 0x100000000;
  local_c0 = 0xffffffff;
  iStack_bc = 0;
  uStack_b8 = 0;
  uStack_c8 = lVar20;
  if (*(int *)(lVar20 + 0x18) == 0) {
    iVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_d0);
    iVar19 = *(int *)(lVar20 + 0x18);
  }
  uStack_e0 = CONCAT44(uStack_b4,uStack_b8);
  local_e8 = local_c0;
  iStack_e4 = iStack_bc;
  local_f8 = (undefined4)local_d0;
  uStack_f4 = local_d0._4_4_;
  uStack_f0 = (undefined4)uStack_c8;
  uStack_ec = uStack_c8._4_4_;
  dVar22 = dVar4;
  dVar5 = dVar23;
  dVar6 = dVar3;
  if (uStack_c8 != lVar20 || iStack_bc != iVar19) {
    bVar12 = false;
    lVar15 = uStack_c8;
    dVar7 = dVar4;
    dVar8 = dVar3;
    dVar9 = dVar23;
    dVar10 = dVar4;
    dVar11 = dVar23;
    do {
      uVar21 = SUB84(dVar6,0);
      iVar18 = iStack_e4;
      if (*(int *)(lVar15 + 0x18) <= iStack_e4) {
        iVar18 = -1;
      }
      cVar14 = FUN_146f71592(param_1,iVar18);
      dVar2 = (double)((ulonglong)dVar6 & 0xffffffff00000000);
      dVar3 = dVar8;
      dVar22 = dVar7;
      dVar4 = dVar10;
      dVar5 = dVar9;
      dVar23 = dVar11;
      bVar13 = bVar12;
      if (cVar14 == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x30);
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0xf8) + 0x18);
        if (plVar1 != (longlong *)0x0) {
          plVar16 = plVar1;
        }
        lVar15 = *plVar16;
        lVar17 = (longlong)(iVar18 * (int)plVar16[2]);
        dVar2 = (double)*(float *)(lVar15 + 8 + lVar17 * 0xc);
        uVar21 = SUB84(dVar2,0);
        dVar5 = (double)*(float *)(lVar15 + 4 + lVar17 * 0xc);
        dVar22 = (double)*(float *)(lVar15 + lVar17 * 0xc);
        dVar3 = dVar2;
        dVar4 = dVar22;
        dVar23 = dVar5;
        bVar13 = true;
        if (bVar12) {
          if (dVar22 <= dVar10) {
            dVar10 = dVar22;
          }
          if (dVar5 <= dVar11) {
            dVar11 = dVar5;
          }
          if (dVar2 <= dVar8) {
            dVar8 = dVar2;
          }
          if (dVar7 <= dVar22) {
            dVar7 = dVar22;
          }
          if (dVar9 <= dVar5) {
            dVar9 = dVar5;
          }
          if (dVar6 <= dVar2) {
            dVar6 = dVar2;
          }
          dVar2 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uVar21);
          uVar21 = SUB84(dVar6,0);
          dVar3 = dVar8;
          dVar22 = dVar7;
          dVar4 = dVar10;
          dVar5 = dVar9;
          dVar23 = dVar11;
        }
      }
      bVar12 = bVar13;
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),uVar21);
      local_e8 = local_e8 & ~uStack_f4;
      FUN_1449c0562(&local_f8);
      lVar15 = CONCAT44(uStack_ec,uStack_f0);
      dVar7 = dVar22;
      dVar8 = dVar3;
      dVar9 = dVar5;
      dVar10 = dVar4;
      dVar11 = dVar23;
    } while (lVar15 != lVar20 || iStack_e4 != iVar19);
  }
  dVar7 = (dVar6 - dVar3) * 0.5;
  dVar6 = (dVar5 - dVar23) * 0.5;
  dVar5 = (dVar22 - dVar4) * 0.5;
  param_2[3] = dVar5;
  param_2[4] = dVar6;
  param_2[5] = dVar7;
  dVar7 = dVar7 + dVar3;
  dVar6 = dVar6 + dVar23;
  dVar5 = dVar5 + dVar4;
  *param_2 = dVar5;
  param_2[1] = dVar6;
  param_2[2] = dVar7;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_1 + 0x50);
  }
  local_d0 = 0x100000000;
  local_c0 = 0xffffffff;
  iStack_bc = 0;
  uStack_b8 = 0;
  uStack_c8 = lVar20;
  if (*(int *)(lVar20 + 0x18) == 0) {
    iVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_d0);
    iVar19 = *(int *)(lVar20 + 0x18);
  }
  uStack_e0 = CONCAT44(uStack_b4,uStack_b8);
  local_e8 = local_c0;
  iStack_e4 = iStack_bc;
  local_f8 = (undefined4)local_d0;
  uStack_f4 = local_d0._4_4_;
  uStack_f0 = (undefined4)uStack_c8;
  uStack_ec = uStack_c8._4_4_;
  uVar21 = 0;
  uVar24 = 0;
  if (uStack_c8 != lVar20 || iStack_bc != iVar19) {
    lVar15 = uStack_c8;
    do {
      iVar18 = iStack_e4;
      if (*(int *)(lVar15 + 0x18) <= iStack_e4) {
        iVar18 = -1;
      }
      cVar14 = FUN_146f71592(param_1,iVar18);
      dVar3 = (double)((ulonglong)uVar24 << 0x20);
      if (cVar14 == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x30);
        plVar16 = (longlong *)(*(longlong *)(param_1 + 0xf8) + 0x18);
        if (plVar1 != (longlong *)0x0) {
          plVar16 = plVar1;
        }
        lVar15 = *plVar16;
        lVar17 = (longlong)(iVar18 * (int)plVar16[2]);
        dVar3 = (double)*(float *)(lVar15 + 8 + lVar17 * 0xc) - dVar7;
        dVar4 = (double)*(float *)(lVar15 + 4 + lVar17 * 0xc) - dVar6;
        dVar23 = (double)*(float *)(lVar15 + lVar17 * 0xc) - dVar5;
        dVar3 = SQRT(dVar3 * dVar3 + dVar23 * dVar23 + dVar4 * dVar4);
        if (dVar3 <= (double)CONCAT44(uVar24,uVar21)) {
          dVar3 = (double)CONCAT44(uVar24,uVar21);
        }
        uVar21 = SUB84(dVar3,0);
      }
      uVar24 = (uint)((ulonglong)dVar3 >> 0x20);
      local_e8 = local_e8 & ~uStack_f4;
      FUN_1449c0562(&local_f8);
      lVar15 = CONCAT44(uStack_ec,uStack_f0);
    } while (lVar15 != lVar20 || iStack_e4 != iVar19);
  }
  param_2[6] = (double)CONCAT44(uVar24,uVar21);
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f72d34 FUN_146f72d34 body=249 status=ok
// SIG undefined FUN_146f72d34(void)

void FUN_146f72d34(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e6c76(*(undefined8 *)(param_1 + 0x60),param_2,1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  local_58 = (undefined8 *)&local_34;
  local_34 = 0xffffffff;
  local_50 = 0x10;
  FUN_1458c288e(lVar2 + 0x20,&local_48,DAT_14c99c108,param_2 & 0xffffffff);
  *(undefined4 *)(param_1 + 0xd8) = local_48;
  *(undefined4 *)(param_1 + 0xdc) = uStack_44;
  *(undefined4 *)(param_1 + 0xe0) = uStack_40;
  *(undefined4 *)(param_1 + 0xe4) = uStack_3c;
  if (0 < (int)param_2) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x80);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x60);
      }
      local_58 = &DAT_14c84635c;
      local_50 = 1;
      FUN_1458c326a(lVar1 + lVar2 + 0x20,&local_48,DAT_14c99c118,1);
      lVar2 = lVar2 + 0x80;
    } while ((param_2 & 0xffffffff) << 7 != lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f72e2e FUN_146f72e2e body=567 status=ok
// SIG undefined FUN_146f72e2e(void)

double * FUN_146f72e2e(longlong param_1,double *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(param_1 + 0x50);
  }
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  uStack_78 = 0;
  uStack_88 = lVar14;
  if (*(int *)(lVar14 + 0x18) == 0) {
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar13 = *(int *)(lVar14 + 0x18);
  }
  uStack_a0 = CONCAT44(uStack_74,uStack_78);
  local_a8 = local_80;
  iStack_a4 = iStack_7c;
  local_b8 = (undefined4)local_90;
  uStack_b4 = local_90._4_4_;
  uStack_b0 = (undefined4)uStack_88;
  uStack_ac = uStack_88._4_4_;
  if (uStack_88 == lVar14 && iStack_7c == iVar13) {
    uVar7 = 0;
  }
  else {
    bVar10 = true;
    lVar11 = uStack_88;
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    do {
      iVar8 = iStack_a4;
      if (*(int *)(lVar11 + 0x18) <= iStack_a4) {
        iVar8 = -1;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x30);
      plVar12 = (longlong *)(*(longlong *)(param_1 + 0xf8) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar12 = plVar1;
      }
      lVar11 = *plVar12;
      lVar9 = (longlong)(iVar8 * (int)plVar12[2]);
      dVar2 = (double)*(float *)(lVar11 + 8 + lVar9 * 0xc);
      dVar3 = (double)*(float *)(lVar11 + 4 + lVar9 * 0xc);
      dVar15 = (double)*(float *)(lVar11 + lVar9 * 0xc);
      if (bVar10) {
        param_2[3] = dVar15;
        param_2[4] = dVar3;
        param_2[5] = dVar2;
        *param_2 = param_2[3];
        param_2[1] = param_2[4];
        param_2[2] = param_2[5];
      }
      else {
        dVar16 = *param_2;
        if (dVar15 <= *param_2) {
          dVar16 = dVar15;
        }
        *param_2 = dVar16;
        dVar16 = param_2[1];
        if (dVar3 <= param_2[1]) {
          dVar16 = dVar3;
        }
        param_2[1] = dVar16;
        dVar16 = param_2[2];
        if (dVar2 <= param_2[2]) {
          dVar16 = dVar2;
        }
        param_2[2] = dVar16;
        if (dVar4 <= dVar15) {
          dVar4 = dVar15;
        }
        dVar15 = dVar4;
        param_2[3] = dVar15;
        if (dVar5 <= dVar3) {
          dVar5 = dVar3;
        }
        dVar3 = dVar5;
        param_2[4] = dVar3;
        if (dVar6 <= dVar2) {
          dVar6 = dVar2;
        }
        dVar2 = dVar6;
        param_2[5] = dVar2;
      }
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562();
      lVar11 = CONCAT44(uStack_ac,uStack_b0);
      bVar10 = false;
      dVar4 = dVar15;
      dVar5 = dVar3;
      dVar6 = dVar2;
    } while (lVar11 != lVar14 || iStack_a4 != iVar13);
    uVar7 = 1;
  }
  *(undefined1 *)(param_2 + 6) = uVar7;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73066 FUN_146f73066 body=203 status=ok
// SIG undefined FUN_146f73066(void)

void FUN_146f73066(undefined8 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146f921fc(0,param_2,&local_38);
  if (1 < (int)uStack_30) {
    iVar2 = -1;
    lVar3 = 0;
    do {
      uVar1 = *(undefined4 *)(local_38 + lVar3 * 4);
      *(undefined4 *)(local_38 + lVar3 * 4) =
           *(undefined4 *)(local_38 + (longlong)((int)uStack_30 + iVar2) * 4);
      *(undefined4 *)(local_38 + (longlong)((int)uStack_30 + iVar2) * 4) = uVar1;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (lVar3 < (int)uStack_30 / 2);
  }
  FUN_146f719ac(param_1,param_2 & 0xffffffff);
  local_48 = local_38;
  local_40 = (int)uStack_30;
  FUN_146f6e1e4(param_1,param_2 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73132 FUN_146f73132 body=260 status=ok
// SIG undefined FUN_146f73132(void)

void FUN_146f73132(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar3;
  if (*(int *)(lVar3 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(lVar3 + 0x18);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  if (uStack_40 != lVar3 || iStack_34 != iVar4) {
    lVar1 = uStack_40;
    do {
      iVar2 = iStack_54;
      if (*(int *)(lVar1 + 0x18) <= iStack_54) {
        iVar2 = -1;
      }
      FUN_146f73066(param_1,iVar2);
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
      lVar1 = CONCAT44(uStack_5c,uStack_60);
    } while (lVar1 != lVar3 || iStack_54 != iVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73238 FUN_146f73238 body=180 status=ok
// SIG undefined FUN_146f73238(void)

void FUN_146f73238(longlong *param_1,longlong *param_2,longlong param_3)

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
          goto LAB_146f73245;
          break;
        }
        iVar3 = (int)plVar4[2];
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_146f73245:
  *param_2 = lVar1;
  return;
}



// FUNCTION 146f732ec FUN_146f732ec body=151 status=ok
// SIG undefined FUN_146f732ec(void)

ulonglong * FUN_146f732ec(longlong *param_1,ulonglong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_146f79d12(param_1,param_3,param_4);
  bVar2 = *(byte *)((longlong)param_1 + 0x2c) & 0x1f;
  iVar3 = (int)param_3 >> bVar2;
  if (iVar3 < *(int *)(*param_1 + 8 + (longlong)param_4 * 0xb0)) {
    lVar7 = *(longlong *)(*param_1 + (longlong)param_4 * 0xb0);
    lVar8 = (longlong)iVar3 * 0x58;
    plVar1 = (longlong *)(lVar7 + lVar8);
    plVar4 = (longlong *)plVar1[3];
    if ((longlong *)plVar1[3] == (longlong *)0x0) {
      plVar4 = plVar1 + 2;
    }
    uVar5 = (longlong)
            *(int *)((longlong)plVar4 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4) * 4 +
            *plVar1;
    lVar7 = lVar7 + lVar8 + 0x28;
    if (plVar1[6] != 0) {
      lVar7 = plVar1[6];
    }
    uVar6 = *(undefined4 *)(lVar7 + (longlong)(int)(param_3 & *(uint *)(param_1 + 6)) * 4);
  }
  else {
    uVar5 = (ulonglong)(uint)(0 >> bVar2);
    uVar6 = 0;
  }
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  return param_2;
}



// FUNCTION 146f73384 FUN_146f73384 body=154 status=ok
// SIG undefined FUN_146f73384(void)

void FUN_146f73384(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa85e0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73420 FUN_146f73420 body=261 status=ok
// SIG undefined FUN_146f73420(void)

void FUN_146f73420(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8622(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73526 FUN_146f73526 body=325 status=ok
// SIG undefined FUN_146f73526(void)

void FUN_146f73526(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
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
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa86ca(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7366c FUN_146f7366c body=411 status=ok
// SIG undefined FUN_146f7366c(void)

void FUN_146f7366c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_5c;
  longlong local_58 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_68 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8792(param_1,&local_5c,local_34,plVar1);
  *param_3 = local_5c;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73808 FUN_146f73808 body=58 status=ok
// SIG undefined FUN_146f73808(void)

void FUN_146f73808(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
  }
  uVar1 = FUN_146f70732(lVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 146f73842 FUN_146f73842 body=154 status=ok
// SIG undefined FUN_146f73842(void)

void FUN_146f73842(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa886a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f738de FUN_146f738de body=473 status=ok
// SIG undefined FUN_146f738de(void)

void FUN_146f738de(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [5];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_68 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa88b0(param_1,local_2c,local_30,plVar1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73ab8 FUN_146f73ab8 body=411 status=ok
// SIG undefined FUN_146f73ab8(void)

void FUN_146f73ab8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_5c;
  longlong local_58 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_68 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa899e(param_1,&local_5c,local_34,plVar1);
  *param_3 = local_5c;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73c54 FUN_146f73c54 body=473 status=ok
// SIG undefined FUN_146f73c54(void)

void FUN_146f73c54(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [5];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_68 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8a76(param_1,local_2c,local_30,plVar1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73e2e FUN_146f73e2e body=55 status=ok
// SIG undefined FUN_146f73e2e(void)

void FUN_146f73e2e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
  }
  uVar1 = FUN_146f70732(lVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 146f73e66 FUN_146f73e66 body=172 status=ok
// SIG undefined FUN_146f73e66(void)

void FUN_146f73e66(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8b64(param_1,&local_28,local_24);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f73f14 FUN_146f73f14 body=235 status=ok
// SIG undefined FUN_146f73f14(void)

void FUN_146f73f14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8c14(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74000 FUN_146f74000 body=154 status=ok
// SIG undefined FUN_146f74000(void)

void FUN_146f74000(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8ce0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7409c FUN_146f7409c body=268 status=ok
// SIG undefined FUN_146f7409c(void)

void FUN_146f7409c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa8d24(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f741aa FUN_146f741aa body=505 status=ok
// SIG undefined FUN_146f741aa(void)

void FUN_146f741aa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68 [6];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar1 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_78 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8d66(param_1,local_34,plVar1,plVar2);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f743a4 FUN_146f743a4 body=154 status=ok
// SIG undefined FUN_146f743a4(void)

void FUN_146f743a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8da8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74440 FUN_146f74440 body=505 status=ok
// SIG undefined FUN_146f74440(void)

void FUN_146f74440(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68 [6];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar1 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_78 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8dea(param_1,local_34,plVar1,plVar2);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7463a FUN_146f7463a body=154 status=ok
// SIG undefined FUN_146f7463a(void)

void FUN_146f7463a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa8e2c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f746d6 FUN_146f746d6 body=268 status=ok
// SIG undefined FUN_146f746d6(void)

void FUN_146f746d6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa8e6a(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f747fe FUN_146f747fe body=268 status=ok
// SIG undefined FUN_146f747fe(void)

void FUN_146f747fe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa8eac(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7490c FUN_146f7490c body=268 status=ok
// SIG undefined FUN_146f7490c(void)

void FUN_146f7490c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa8eee(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74a4a FUN_146f74a4a body=261 status=ok
// SIG undefined FUN_146f74a4a(void)

void FUN_146f74a4a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  FUN_142aa8fba(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74b50 FUN_146f74b50 body=268 status=ok
// SIG undefined FUN_146f74b50(void)

void FUN_146f74b50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9064(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74c5e FUN_146f74c5e body=161 status=ok
// SIG undefined FUN_146f74c5e(void)

void FUN_146f74c5e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa9152(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74d00 FUN_146f74d00 body=161 status=ok
// SIG undefined FUN_146f74d00(void)

void FUN_146f74d00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa9196(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74da2 FUN_146f74da2 body=161 status=ok
// SIG undefined FUN_146f74da2(void)

void FUN_146f74da2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa9224(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74e44 FUN_146f74e44 body=161 status=ok
// SIG undefined FUN_146f74e44(void)

void FUN_146f74e44(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa92b2(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74ee6 FUN_146f74ee6 body=161 status=ok
// SIG undefined FUN_146f74ee6(void)

void FUN_146f74ee6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa9342(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f74f88 FUN_146f74f88 body=161 status=ok
// SIG undefined FUN_146f74f88(void)

void FUN_146f74f88(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa93d0(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7502a FUN_146f7502a body=161 status=ok
// SIG undefined FUN_146f7502a(void)

void FUN_146f7502a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa9460(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f750cc FUN_146f750cc body=161 status=ok
// SIG undefined FUN_146f750cc(void)

void FUN_146f750cc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa94ea(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7516e FUN_146f7516e body=161 status=ok
// SIG undefined FUN_146f7516e(void)

void FUN_146f7516e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa952a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75210 FUN_146f75210 body=161 status=ok
// SIG undefined FUN_146f75210(void)

void FUN_146f75210(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa956a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f752b2 FUN_146f752b2 body=161 status=ok
// SIG undefined FUN_146f752b2(void)

void FUN_146f752b2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa95ae(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75354 FUN_146f75354 body=161 status=ok
// SIG undefined FUN_146f75354(void)

void FUN_146f75354(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aa963c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f753f6 FUN_146f753f6 body=268 status=ok
// SIG undefined FUN_146f753f6(void)

void FUN_146f753f6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa96c6(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75564 FUN_146f75564 body=268 status=ok
// SIG undefined FUN_146f75564(void)

void FUN_146f75564(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9708(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75672 FUN_146f75672 body=268 status=ok
// SIG undefined FUN_146f75672(void)

void FUN_146f75672(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa97d4(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75780 FUN_146f75780 body=268 status=ok
// SIG undefined FUN_146f75780(void)

void FUN_146f75780(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9816(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7588e FUN_146f7588e body=172 status=ok
// SIG undefined FUN_146f7588e(void)

void FUN_146f7588e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa9858(param_1,&local_28,local_24);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7593c FUN_146f7593c body=268 status=ok
// SIG undefined FUN_146f7593c(void)

void FUN_146f7593c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa98c4(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75a4a FUN_146f75a4a body=268 status=ok
// SIG undefined FUN_146f75a4a(void)

void FUN_146f75a4a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9990(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75b58 FUN_146f75b58 body=268 status=ok
// SIG undefined FUN_146f75b58(void)

void FUN_146f75b58(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9a50(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75c66 FUN_146f75c66 body=268 status=ok
// SIG undefined FUN_146f75c66(void)

void FUN_146f75c66(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9a92(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75da4 FUN_146f75da4 body=268 status=ok
// SIG undefined FUN_146f75da4(void)

void FUN_146f75da4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9ad4(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75eb2 FUN_146f75eb2 body=172 status=ok
// SIG undefined FUN_146f75eb2(void)

void FUN_146f75eb2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa9bd4(param_1,&local_28,local_24);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f75f60 FUN_146f75f60 body=172 status=ok
// SIG undefined FUN_146f75f60(void)

void FUN_146f75f60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aa9c40(param_1,&local_28,local_24);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7600e FUN_146f7600e body=261 status=ok
// SIG undefined FUN_146f7600e(void)

void FUN_146f7600e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  FUN_142aa9cac(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76114 FUN_146f76114 body=268 status=ok
// SIG undefined FUN_146f76114(void)

void FUN_146f76114(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9d56(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76222 FUN_146f76222 body=268 status=ok
// SIG undefined FUN_146f76222(void)

void FUN_146f76222(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9e44(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76330 FUN_146f76330 body=268 status=ok
// SIG undefined FUN_146f76330(void)

void FUN_146f76330(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9f44(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7643e FUN_146f7643e body=268 status=ok
// SIG undefined FUN_146f7643e(void)

void FUN_146f7643e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aa9f82(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7654c FUN_146f7654c body=268 status=ok
// SIG undefined FUN_146f7654c(void)

void FUN_146f7654c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aaa04c(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7665a FUN_146f7665a body=268 status=ok
// SIG undefined FUN_146f7665a(void)

void FUN_146f7665a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aaa08a(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76794 FUN_146f76794 body=268 status=ok
// SIG undefined FUN_146f76794(void)

void FUN_146f76794(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aaa0c8(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f768a2 FUN_146f768a2 body=268 status=ok
// SIG undefined FUN_146f768a2(void)

void FUN_146f768a2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aaa10a(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f769e0 FUN_146f769e0 body=261 status=ok
// SIG undefined FUN_146f769e0(void)

void FUN_146f769e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa1d6(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76ae6 FUN_146f76ae6 body=261 status=ok
// SIG undefined FUN_146f76ae6(void)

void FUN_146f76ae6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa236(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76bec FUN_146f76bec body=261 status=ok
// SIG undefined FUN_146f76bec(void)

void FUN_146f76bec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa296(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76cf2 FUN_146f76cf2 body=172 status=ok
// SIG undefined FUN_146f76cf2(void)

void FUN_146f76cf2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa314(param_1,&local_28,local_24);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76da0 FUN_146f76da0 body=261 status=ok
// SIG undefined FUN_146f76da0(void)

void FUN_146f76da0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
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
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa380(param_1,&local_2c,local_24,local_28);
  *param_3 = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76ea6 FUN_146f76ea6 body=182 status=ok
// SIG undefined FUN_146f76ea6(void)

void FUN_146f76ea6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa3fa(param_1,&local_40,local_24);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f76f5e FUN_146f76f5e body=268 status=ok
// SIG undefined FUN_146f76f5e(void)

void FUN_146f76f5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aaa4f0(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77072 FUN_146f77072 body=161 status=ok
// SIG undefined FUN_146f77072(void)

void FUN_146f77072(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aaa5ba(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7711a FUN_146f7711a body=242 status=ok
// SIG undefined FUN_146f7711a(void)

void FUN_146f7711a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aaa5fe(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77214 FUN_146f77214 body=219 status=ok
// SIG undefined FUN_146f77214(void)

void FUN_146f77214(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if (((int)local_24 < 0) || (*(int *)(lVar1 + 0x18) <= (int)local_24)) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(local_24 >> 5) * 4) >> (local_24 & 0x1f) & 1) != 0;
  }
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f772f4 FUN_146f772f4 body=41 status=ok
// SIG undefined FUN_146f772f4(void)

void FUN_146f772f4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146f6f4ec(param_1 + 0x28);
  *param_3 = uVar1;
  return;
}



// FUNCTION 146f77324 FUN_146f77324 body=219 status=ok
// SIG undefined FUN_146f77324(void)

void FUN_146f77324(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
  }
  if (((int)local_24 < 0) || (*(int *)(lVar1 + 0x18) <= (int)local_24)) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(local_24 >> 5) * 4) >> (local_24 & 0x1f) & 1) != 0;
  }
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77406 FUN_146f77406 body=219 status=ok
// SIG undefined FUN_146f77406(void)

void FUN_146f77406(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if (((int)local_24 < 0) || (*(int *)(lVar1 + 0x18) <= (int)local_24)) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(local_24 >> 5) * 4) >> (local_24 & 0x1f) & 1) != 0;
  }
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f774e8 FUN_146f774e8 body=161 status=ok
// SIG undefined FUN_146f774e8(void)

void FUN_146f774e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aaa67c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77590 FUN_146f77590 body=219 status=ok
// SIG undefined FUN_146f77590(void)

void FUN_146f77590(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if (((int)local_24 < 0) || (*(int *)(lVar1 + 0x18) <= (int)local_24)) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(local_24 >> 5) * 4) >> (local_24 & 0x1f) & 1) != 0;
  }
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77672 FUN_146f77672 body=219 status=ok
// SIG undefined FUN_146f77672(void)

void FUN_146f77672(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  if (((int)local_24 < 0) || (*(int *)(lVar1 + 0x18) <= (int)local_24)) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(local_24 >> 5) * 4) >> (local_24 & 0x1f) & 1) != 0;
  }
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77754 FUN_146f77754 body=161 status=ok
// SIG undefined FUN_146f77754(void)

void FUN_146f77754(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_142aaa72a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f777fc FUN_146f777fc body=212 status=ok
// SIG undefined FUN_146f777fc(void)

void FUN_146f777fc(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if (((int)local_24 < 0) || (*(int *)(lVar1 + 0x18) <= (int)local_24)) {
    bVar3 = false;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    bVar3 = (*(uint *)(lVar2 + (ulonglong)(local_24 >> 5) * 4) >> (local_24 & 0x1f) & 1) != 0;
  }
  *param_3 = bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f778d2 FUN_146f778d2 body=178 status=ok
// SIG undefined FUN_146f778d2(void)

void FUN_146f778d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  FUN_1456bd906(lVar1,(*(int *)(lVar1 + 0x18) + local_1c) - *(int *)(lVar1 + 0x78));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77986 FUN_146f77986 body=178 status=ok
// SIG undefined FUN_146f77986(void)

void FUN_146f77986(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
  }
  FUN_1456bd906(lVar1,(*(int *)(lVar1 + 0x18) + local_1c) - *(int *)(lVar1 + 0x78));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77a3a FUN_146f77a3a body=178 status=ok
// SIG undefined FUN_146f77a3a(void)

void FUN_146f77a3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  FUN_1456bd906(lVar1,(*(int *)(lVar1 + 0x18) + local_1c) - *(int *)(lVar1 + 0x78));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77aee FUN_146f77aee body=178 status=ok
// SIG undefined FUN_146f77aee(void)

void FUN_146f77aee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  FUN_1456bd906(lVar1,(*(int *)(lVar1 + 0x18) + local_1c) - *(int *)(lVar1 + 0x78));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77ba2 FUN_146f77ba2 body=178 status=ok
// SIG undefined FUN_146f77ba2(void)

void FUN_146f77ba2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  FUN_1456bd906(lVar1,(*(int *)(lVar1 + 0x18) + local_1c) - *(int *)(lVar1 + 0x78));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77c56 FUN_146f77c56 body=175 status=ok
// SIG undefined FUN_146f77c56(void)

void FUN_146f77c56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  FUN_1456bd906(lVar1,(*(int *)(lVar1 + 0x18) + local_1c) - *(int *)(lVar1 + 0x78));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77d06 FUN_146f77d06 body=154 status=ok
// SIG undefined FUN_146f77d06(void)

void FUN_146f77d06(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa76a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77da2 FUN_146f77da2 body=235 status=ok
// SIG undefined FUN_146f77da2(void)

void FUN_146f77da2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa7ac(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77e8e FUN_146f77e8e body=268 status=ok
// SIG undefined FUN_146f77e8e(void)

void FUN_146f77e8e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
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
  FUN_142aaa828(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f77f9c FUN_146f77f9c body=240 status=ok
// SIG undefined FUN_146f77f9c(void)

void FUN_146f77f9c(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [28];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_142aaa92c(param_1,local_1c,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78090 FUN_146f78090 body=75 status=ok
// SIG undefined FUN_146f78090(void)

void FUN_146f78090(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_146f780dc(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f780dc FUN_146f780dc body=97 status=ok
// SIG undefined FUN_146f780dc(void)

void FUN_146f780dc(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar1 < 0x19) {
      return;
    }
  }
  FUN_142aa7e42(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 146f7813e FUN_146f7813e body=99 status=ok
// SIG undefined FUN_146f7813e(void)

void FUN_146f7813e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  ppuVar3 = &PTR_FUN_149fa8c10;
  *puVar2 = &PTR_FUN_149fa8c10;
  puVar2[1] = param_1 + 0x28;
  puVar1 = *(undefined8 **)(param_1 + 0x2e8);
  *(undefined8 **)(param_1 + 0x2e8) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    puVar2 = *(undefined8 **)(param_1 + 0x2e8);
    ppuVar3 = (undefined **)*puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f7819e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar3[1])(puVar2,0,ppuVar3[1]);
  return;
}



// FUNCTION 146f781a2 FUN_146f781a2 body=518 status=ok
// SIG undefined FUN_146f781a2(void)

longlong FUN_146f781a2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_146f92926();
  memcpy((void *)(param_1 + 0x50),(void *)(param_2 + 0x50),0xb0);
  FUN_146f92b1a(param_1 + 0x100,param_2 + 0x100);
  uVar1 = *(undefined4 *)(param_2 + 0x114);
  uVar2 = *(undefined4 *)(param_2 + 0x118);
  uVar3 = *(undefined4 *)(param_2 + 0x11c);
  uVar4 = *(undefined4 *)(param_2 + 0x120);
  uVar5 = *(undefined4 *)(param_2 + 0x124);
  uVar6 = *(undefined4 *)(param_2 + 0x128);
  uVar7 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  *(undefined4 *)(param_1 + 0x128) = uVar6;
  *(undefined4 *)(param_1 + 300) = uVar7;
  *(undefined8 *)(param_1 + 0x12e) = *(undefined8 *)(param_2 + 0x12e);
  FUN_146f92b1a(param_1 + 0x138,param_2 + 0x138);
  uVar1 = *(undefined4 *)(param_2 + 0x14c);
  uVar2 = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x154);
  uVar4 = *(undefined4 *)(param_2 + 0x158);
  uVar5 = *(undefined4 *)(param_2 + 0x15c);
  uVar6 = *(undefined4 *)(param_2 + 0x160);
  uVar7 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  *(undefined4 *)(param_1 + 0x158) = uVar4;
  *(undefined4 *)(param_1 + 0x15c) = uVar5;
  *(undefined4 *)(param_1 + 0x160) = uVar6;
  *(undefined4 *)(param_1 + 0x164) = uVar7;
  *(undefined8 *)(param_1 + 0x166) = *(undefined8 *)(param_2 + 0x166);
  FUN_146f92b1a(param_1 + 0x170,param_2 + 0x170);
  uVar1 = *(undefined4 *)(param_2 + 0x184);
  uVar2 = *(undefined4 *)(param_2 + 0x188);
  uVar3 = *(undefined4 *)(param_2 + 0x18c);
  uVar4 = *(undefined4 *)(param_2 + 400);
  uVar5 = *(undefined4 *)(param_2 + 0x194);
  uVar6 = *(undefined4 *)(param_2 + 0x198);
  uVar7 = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = uVar1;
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  *(undefined4 *)(param_1 + 400) = uVar4;
  *(undefined4 *)(param_1 + 0x194) = uVar5;
  *(undefined4 *)(param_1 + 0x198) = uVar6;
  *(undefined4 *)(param_1 + 0x19c) = uVar7;
  *(undefined8 *)(param_1 + 0x19e) = *(undefined8 *)(param_2 + 0x19e);
  FUN_146f92b1a(param_1 + 0x1a8,param_2 + 0x1a8);
  uVar1 = *(undefined4 *)(param_2 + 0x1bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c0);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  uVar4 = *(undefined4 *)(param_2 + 0x1c8);
  uVar5 = *(undefined4 *)(param_2 + 0x1cc);
  uVar6 = *(undefined4 *)(param_2 + 0x1d0);
  uVar7 = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  *(undefined4 *)(param_1 + 0x1c8) = uVar4;
  *(undefined4 *)(param_1 + 0x1cc) = uVar5;
  *(undefined4 *)(param_1 + 0x1d0) = uVar6;
  *(undefined4 *)(param_1 + 0x1d4) = uVar7;
  *(undefined8 *)(param_1 + 0x1d6) = *(undefined8 *)(param_2 + 0x1d6);
  FUN_146f92b1a(param_1 + 0x1e0,param_2 + 0x1e0);
  uVar1 = *(undefined4 *)(param_2 + 500);
  uVar2 = *(undefined4 *)(param_2 + 0x1f8);
  uVar3 = *(undefined4 *)(param_2 + 0x1fc);
  uVar4 = *(undefined4 *)(param_2 + 0x200);
  uVar5 = *(undefined4 *)(param_2 + 0x204);
  uVar6 = *(undefined4 *)(param_2 + 0x208);
  uVar7 = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 500) = uVar1;
  *(undefined4 *)(param_1 + 0x1f8) = uVar2;
  *(undefined4 *)(param_1 + 0x1fc) = uVar3;
  *(undefined4 *)(param_1 + 0x200) = uVar4;
  *(undefined4 *)(param_1 + 0x204) = uVar5;
  *(undefined4 *)(param_1 + 0x208) = uVar6;
  *(undefined4 *)(param_1 + 0x20c) = uVar7;
  *(undefined8 *)(param_1 + 0x20e) = *(undefined8 *)(param_2 + 0x20e);
  FUN_146f92b1a(param_1 + 0x218,param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x22c);
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar3 = *(undefined4 *)(param_2 + 0x234);
  uVar4 = *(undefined4 *)(param_2 + 0x238);
  uVar5 = *(undefined4 *)(param_2 + 0x23c);
  uVar6 = *(undefined4 *)(param_2 + 0x240);
  uVar7 = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  *(undefined4 *)(param_1 + 0x234) = uVar3;
  *(undefined4 *)(param_1 + 0x238) = uVar4;
  *(undefined4 *)(param_1 + 0x23c) = uVar5;
  *(undefined4 *)(param_1 + 0x240) = uVar6;
  *(undefined4 *)(param_1 + 0x244) = uVar7;
  *(undefined8 *)(param_1 + 0x246) = *(undefined8 *)(param_2 + 0x246);
  FUN_146f92b1a(param_1 + 0x250,param_2 + 0x250);
  uVar1 = *(undefined4 *)(param_2 + 0x264);
  uVar2 = *(undefined4 *)(param_2 + 0x268);
  uVar3 = *(undefined4 *)(param_2 + 0x26c);
  uVar4 = *(undefined4 *)(param_2 + 0x270);
  uVar5 = *(undefined4 *)(param_2 + 0x274);
  uVar6 = *(undefined4 *)(param_2 + 0x278);
  uVar7 = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = uVar1;
  *(undefined4 *)(param_1 + 0x268) = uVar2;
  *(undefined4 *)(param_1 + 0x26c) = uVar3;
  *(undefined4 *)(param_1 + 0x270) = uVar4;
  *(undefined4 *)(param_1 + 0x274) = uVar5;
  *(undefined4 *)(param_1 + 0x278) = uVar6;
  *(undefined4 *)(param_1 + 0x27c) = uVar7;
  *(undefined8 *)(param_1 + 0x27e) = *(undefined8 *)(param_2 + 0x27e);
  FUN_146f92b1a(param_1 + 0x288,param_2 + 0x288);
  uVar8 = *(undefined8 *)(param_2 + 0x2a0);
  uVar9 = *(undefined8 *)(param_2 + 0x2a8);
  uVar10 = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2a0) = uVar8;
  *(undefined8 *)(param_1 + 0x2a8) = uVar9;
  *(undefined8 *)(param_1 + 0x2b0) = uVar10;
  *(undefined8 *)(param_1 + 0x2b6) = *(undefined8 *)(param_2 + 0x2b6);
  return param_1;
}



// FUNCTION 146f783a8 FUN_146f783a8 body=253 status=ok
// SIG undefined FUN_146f783a8(void)

void FUN_146f783a8(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_146f784a6();
  FUN_146f98458(param_3,uVar2);
  FUN_146f7163e(param_1 + 0x100,&local_58,param_2,0);
  if ((longlong)local_50 != 0) {
    lVar3 = 0;
    do {
      FUN_146f716d6(param_1 + 0x170,&local_68,*(undefined4 *)(local_58 + lVar3),0);
      _Src = local_68;
      lVar4 = (longlong)(int)local_60;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + local_60;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar1) < local_60) {
        FUN_146f984e2(param_3,iVar1);
LAB_146f7844d:
        memcpy((void *)((longlong)iVar1 * 4 + *param_3),_Src,lVar4 << 2);
      }
      else if (local_60 != 0) goto LAB_146f7844d;
      lVar3 = lVar3 + 4;
    } while ((longlong)local_50 * 4 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f784a6 FUN_146f784a6 body=163 status=ok
// SIG undefined FUN_146f784a6(void)

int FUN_146f784a6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined1 local_48 [8];
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = 0;
  FUN_146f7163e(param_1 + 0x100,&local_58,param_2,0);
  if ((longlong)local_50 != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      FUN_146f92b68(param_1 + 0x170,local_48,*(undefined4 *)(local_58 + lVar2),0);
      iVar1 = iVar1 + local_40;
      lVar2 = lVar2 + 4;
    } while ((longlong)local_50 * 4 != lVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f7854a FUN_146f7854a body=262 status=ok
// SIG undefined FUN_146f7854a(void)

void FUN_146f7854a(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined4 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_146f98592(param_3,0);
  }
  FUN_146f7163e(param_1 + 0x100,&local_58,param_2,0);
  if ((longlong)local_50 != 0) {
    puVar6 = local_58;
    do {
      FUN_146f716d6(param_1 + 0x170,&local_68,*puVar6,0);
      lVar2 = local_68;
      lVar4 = (longlong)local_60;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
          if (plVar1 != (longlong *)0x0) {
            plVar3 = plVar1;
          }
          FUN_146f985f2(param_3,(longlong)((int)plVar3[2] * *(int *)(lVar2 + lVar5)) * 4 + *plVar3);
          lVar5 = lVar5 + 4;
        } while (lVar4 * 4 != lVar5);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != local_58 + local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78652 FUN_146f78652 body=104 status=ok
// SIG undefined FUN_146f78652(void)

ulonglong FUN_146f78652(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x800000000;
  FUN_146f92c04(param_1,param_2,local_48);
  uVar1 = local_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f786bc FUN_146f786bc body=238 status=ok
// SIG undefined FUN_146f786bc(void)

void FUN_146f786bc(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146f7176e(param_1 + 0x138,&local_38,param_2,0);
  FUN_146f78cc2(param_3,local_30,1);
  if ((longlong)local_30 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(uint *)(local_38 + lVar4);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x30);
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar6 = plVar3;
      }
      if (*(int *)(param_1 + 0x98) == 0) {
        plVar6 = (longlong *)((longlong)((int)uVar2 >> 8) * 0xc18 + *plVar6);
        iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar2 & 0xff) * 4 + 0x10);
      }
      else {
        iVar5 = uVar2 * (int)plVar6[2];
      }
      piVar1 = (int *)(*plVar6 + (longlong)iVar5 * 4);
      *(int *)(*param_3 + lVar4) = piVar1[*piVar1 == param_2];
      lVar4 = lVar4 + 4;
    } while ((longlong)local_30 * 4 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f787ac FUN_146f787ac body=128 status=ok
// SIG undefined FUN_146f787ac(void)

undefined8 FUN_146f787ac(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar1 << 0x13 | uVar1) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146f7882c FUN_146f7882c body=191 status=ok
// SIG undefined FUN_146f7882c(void)

void FUN_146f7882c(longlong *param_1,undefined8 *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (uint)(ushort)((ulonglong)param_4 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_4 >> 0x20) +
                    ((int)param_4 << 0x10 | (uint)(ushort)param_4) + (uVar4 << 0x13 | uVar4) +
                    (uint)(ushort)((ushort)param_4 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar3 == param_4) goto LAB_146f7883a;
        iVar6 = (int)plVar3[2];
      } while (iVar6 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_146f7883a:
  plVar1 = *(longlong **)(plVar3[1] + 0x30);
  plVar3 = (longlong *)(plVar3[1] + 0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  lVar2 = *plVar3;
  lVar5 = (longlong)(param_3 * (int)plVar3[2]);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 8 + lVar5 * 0xc);
  *param_2 = *(undefined8 *)(lVar2 + lVar5 * 0xc);
  return;
}



// FUNCTION 146f788ec FUN_146f788ec body=182 status=ok
// SIG undefined FUN_146f788ec(void)

void FUN_146f788ec(longlong *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar3 << 0x13 | uVar3) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*plVar5 == param_3) goto LAB_146f788f7;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_146f788f7:
  plVar1 = *(longlong **)(plVar5[1] + 0x30);
  plVar5 = (longlong *)(plVar5[1] + 0x18);
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  lVar2 = *plVar5;
  lVar6 = (longlong)(param_2 * (int)plVar5[2]);
  *(undefined4 *)(lVar2 + 8 + lVar6 * 0xc) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(lVar2 + lVar6 * 0xc) = *param_4;
  return;
}



// FUNCTION 146f789a2 FUN_146f789a2 body=209 status=ok
// SIG undefined FUN_146f789a2(void)

void FUN_146f789a2(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f92b68(param_1 + 0x170,&local_40,param_2,0);
  FUN_146f98568(param_3,local_38);
  FUN_146f716d6(param_1 + 0x170,&local_40,param_2,0);
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      FUN_146f985f2(param_3,(longlong)((int)plVar2[2] * *(int *)(local_40 + lVar3)) * 4 + *plVar2);
      lVar3 = lVar3 + 4;
    } while ((longlong)local_38 * 4 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78a74 FUN_146f78a74 body=104 status=ok
// SIG undefined FUN_146f78a74(void)

ulonglong FUN_146f78a74(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x800000000;
  FUN_146f92f12(param_1,param_2,local_48);
  uVar1 = local_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78ade FUN_146f78ade body=166 status=ok
// SIG undefined FUN_146f78ade(void)

bool FUN_146f78ade(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = false;
  FUN_146f716d6(param_1 + 0x1a8,&local_38,param_2,0);
  if (local_30 == 2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    if (*(int *)(*plVar2 + (longlong)(*local_38 * (int)plVar2[2]) * 4) == param_3) {
      bVar3 = *(int *)(*plVar2 + (longlong)((int)plVar2[2] * local_38[1]) * 4) == param_3;
    }
    else {
      bVar3 = false;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78b86 FUN_146f78b86 body=209 status=ok
// SIG undefined FUN_146f78b86(void)

void FUN_146f78b86(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f92b68(param_1 + 0x1a8,&local_40,param_2,0);
  FUN_146f98568(param_3,local_38);
  FUN_146f716d6(param_1 + 0x1a8,&local_40,param_2,0);
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      FUN_146f985f2(param_3,(longlong)((int)plVar2[2] * *(int *)(local_40 + lVar3)) * 4 + *plVar2);
      lVar3 = lVar3 + 4;
    } while ((longlong)local_38 * 4 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78c58 FUN_146f78c58 body=104 status=ok
// SIG undefined FUN_146f78c58(void)

ulonglong FUN_146f78c58(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x800000000;
  FUN_146f92fe4(param_1,param_2,local_48);
  uVar1 = local_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f78cc2 FUN_146f78cc2 body=78 status=ok
// SIG undefined FUN_146f78cc2(void)

void FUN_146f78cc2(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f9d70c();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146f9e5d0();
      return;
    }
  }
  return;
}



// FUNCTION 146f78d12 FUN_146f78d12 body=78 status=ok
// SIG undefined FUN_146f78d12(void)

void FUN_146f78d12(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f99d00();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146f9e672();
      return;
    }
  }
  return;
}



// FUNCTION 146f78d62 FUN_146f78d62 body=358 status=ok
// SIG undefined FUN_146f78d62(void)

void FUN_146f78d62(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_146f98482(param_3,0);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
  if (plVar4 != (longlong *)0x0) {
    plVar5 = plVar4;
  }
  if ((longlong)*(int *)(param_1 + 0xc0) == 0) {
    lVar6 = (ulonglong)(param_2 >> 8) * 0xc18;
    lVar1 = *plVar5 + lVar6;
    lVar8 = (longlong)*(int *)(lVar1 + 0x410 + ((ulonglong)param_2 & 0xff) * 4);
    if (lVar8 == 0) goto LAB_146f78e58;
    puVar7 = (undefined4 *)
             ((longlong)*(int *)(lVar1 + 0x10 + ((ulonglong)param_2 & 0xff) * 4) * 4 +
             *(longlong *)(*plVar5 + lVar6));
    local_68 = puVar7 + lVar8;
  }
  else {
    puVar7 = (undefined4 *)((longlong)(int)((int)plVar5[2] * param_2) * 4 + *plVar5);
    local_68 = puVar7 + *(int *)(param_1 + 0xc0);
  }
  local_60 = param_1 + 0x1a8;
  do {
    FUN_146f92b68(local_60,&local_58,*puVar7,0);
    lVar1 = local_58;
    lVar6 = (longlong)local_50;
    if (lVar6 != 0) {
      lVar8 = 0;
      do {
        uVar2 = *(uint *)(lVar1 + lVar8);
        if (uVar2 != param_2) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_146f984e2(param_3,iVar3);
          }
          *(uint *)(*param_3 + (longlong)iVar3 * 4) = uVar2;
        }
        lVar8 = lVar8 + 4;
      } while (lVar6 * 4 != lVar8);
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != local_68);
LAB_146f78e58:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f78eca FUN_146f78eca body=191 status=ok
// SIG undefined FUN_146f78eca(void)

void FUN_146f78eca(longlong param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)*(int *)(param_1 + 0xa8);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x30);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  if (lVar8 == 0) {
    lVar7 = (ulonglong)(param_3 >> 8) * 0xc18;
    lVar2 = *plVar6 + lVar7;
    lVar8 = (longlong)*(int *)(lVar2 + 0x410 + (ulonglong)(param_3 & 0xff) * 4);
    if (lVar8 == 0) goto LAB_146f78f3b;
    puVar5 = (uint *)((longlong)*(int *)(lVar2 + 0x10 + (ulonglong)(param_3 & 0xff) * 4) * 4 +
                     *(longlong *)(*plVar6 + lVar7));
  }
  else {
    puVar5 = (uint *)((longlong)(int)(param_3 * (int)plVar6[2]) * 4 + *plVar6);
  }
  puVar1 = puVar5 + lVar8;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  do {
    if (*(int *)(*plVar6 + (longlong)(int)(*puVar5 * (int)plVar6[2]) * 4) == param_4) {
      uVar4 = -(uint)(puVar5 == (uint *)0x0) | *puVar5;
      goto LAB_146f78f40;
    }
    puVar5 = puVar5 + 1;
  } while (puVar5 != puVar1);
LAB_146f78f3b:
  uVar4 = 0xffffffff;
LAB_146f78f40:
  *param_2 = uVar4;
  return;
}



// FUNCTION 146f78f8a FUN_146f78f8a body=599 status=ok
// SIG undefined FUN_146f78f8a(void)

void FUN_146f78f8a(longlong param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
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
  FUN_146f78cc2(param_3,local_80 + 2,1);
  FUN_146f716d6(param_1 + 0x218,&local_98,param_2,0);
  if (iStack_90 == 1) {
    uVar1 = *(uint *)CONCAT44(uStack_94,local_98);
    iVar7 = *(int *)(param_1 + 0xd0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
    plVar6 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (iVar7 == 0) {
      plVar6 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar6);
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x410);
      iVar3 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
    }
    else {
      iVar3 = uVar1 * (int)plVar6[2];
    }
    lVar4 = *plVar6;
    *(int *)(param_3 + 1) = iVar7;
    if (*(int *)((longlong)param_3 + 0xc) == 0 && iVar7 == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_146f986de(param_3,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)*param_3,(void *)((longlong)iVar3 * 4 + lVar4),(longlong)iVar7 << 2);
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
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
        plVar6 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar6 = plVar2;
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          plVar6 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar6);
          iVar7 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
        }
        else {
          iVar7 = uVar1 * (int)plVar6[2];
        }
        *(undefined4 *)(*param_3 + lVar4 * 4) =
             *(undefined4 *)
              ((longlong)iVar7 * 4 + *plVar6 + (longlong)*(int *)(puVar5 + lVar4 * 8 + 4) * 4);
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



// FUNCTION 146f791e2 FUN_146f791e2 body=599 status=ok
// SIG undefined FUN_146f791e2(void)

void FUN_146f791e2(longlong param_1,undefined4 param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
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
  FUN_146f78d12(param_3,local_80 + 2,1);
  FUN_146f716d6(param_1 + 0x218,&local_98,param_2,0);
  if (iStack_90 == 1) {
    uVar1 = *(uint *)CONCAT44(uStack_94,local_98);
    iVar7 = *(int *)(param_1 + 0xc0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (iVar7 == 0) {
      plVar6 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar6);
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x410);
      iVar3 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
    }
    else {
      iVar3 = uVar1 * (int)plVar6[2];
    }
    lVar4 = *plVar6;
    *(int *)(param_3 + 1) = iVar7;
    if (*(int *)((longlong)param_3 + 0xc) == 0 && iVar7 == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_146f98740(param_3,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)*param_3,(void *)((longlong)iVar3 * 4 + lVar4),(longlong)iVar7 << 2);
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
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
        if (plVar2 != (longlong *)0x0) {
          plVar6 = plVar2;
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          plVar6 = (longlong *)((longlong)((int)uVar1 >> 8) * 0xc18 + *plVar6);
          iVar7 = *(int *)((longlong)plVar6 + (ulonglong)(uVar1 & 0xff) * 4 + 0x10);
        }
        else {
          iVar7 = uVar1 * (int)plVar6[2];
        }
        *(undefined4 *)(*param_3 + lVar4 * 4) =
             *(undefined4 *)
              ((longlong)iVar7 * 4 + *plVar6 + (longlong)*(int *)(puVar5 + lVar4 * 8 + 4) * 4);
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



// FUNCTION 146f7943a FUN_146f7943a body=431 status=ok
// SIG undefined FUN_146f7943a(void)

void FUN_146f7943a(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_98 [40];
  int *local_70;
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146f716d6(param_1 + 0x218,&local_58,param_2,0);
  FUN_146f987a2(param_3,(int)uStack_50 + -1);
  FUN_146f716d6(param_1 + 0x218,&local_58,param_2,0);
  if (1 < (int)uStack_50) {
    local_58 = (int *)0x0;
    uStack_50 = 0;
    FUN_146f921fc(param_1,param_2,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      local_70 = local_58 + (int)uStack_50;
      piVar8 = local_58;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
        if (plVar3 != (longlong *)0x0) {
          plVar5 = plVar3;
        }
        FUN_146f7176e(param_1 + 0x138,&local_68,
                      *(undefined4 *)(*plVar5 + (longlong)((int)plVar5[2] * *piVar8) * 4),0);
        if ((longlong)local_60 != 0) {
          piVar1 = local_68 + local_60;
          piVar7 = local_68;
          do {
            if ((longlong)(int)param_3[1] != 0) {
              lVar6 = 0;
              do {
                if (*(int *)(*param_3 + lVar6) == *piVar7) goto LAB_146f795a8;
                lVar6 = lVar6 + 4;
              } while ((longlong)(int)param_3[1] * 4 != lVar6);
            }
            cVar4 = FUN_146f78ade(param_1,*piVar7);
            if (cVar4 != '\0') {
              iVar2 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                FUN_146f99d00(param_3,iVar2);
              }
              *(int *)(*param_3 + (longlong)iVar2 * 4) = *piVar7;
            }
LAB_146f795a8:
            piVar7 = piVar7 + 1;
          } while (piVar7 != piVar1);
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != local_70);
    }
    if (local_58 != (int *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f795ea FUN_146f795ea body=393 status=ok
// SIG undefined FUN_146f795ea(void)

void FUN_146f795ea(undefined8 param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined1 local_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [16];
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_146f98592(param_3,0);
  }
  local_58 = (undefined4 *)0x0;
  local_50 = 0x1000000000;
  FUN_146f987cc(param_1,param_2,local_98);
  puVar4 = local_58;
  if (local_58 == (undefined4 *)0x0) {
    puVar4 = local_98;
  }
  if ((longlong)(int)local_50 != 0) {
    puVar1 = puVar4 + (int)local_50;
    local_d0 = param_1;
    do {
      local_a8 = (undefined1 *)0x0;
      local_a0 = 0x800000000;
      FUN_146f92fe4(param_1,*puVar4,local_c8);
      puVar3 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar3 = local_c8;
      }
      lVar6 = (longlong)(int)local_a0;
      if (lVar6 != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(puVar3 + lVar5) != param_2) {
            iVar2 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
              FUN_146f98658(param_3,iVar2);
            }
            *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(puVar3 + lVar5);
          }
          lVar5 = lVar5 + 4;
          param_1 = local_d0;
        } while (lVar6 * 4 != lVar5);
      }
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  if (local_58 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f79774 FUN_146f79774 body=198 status=ok
// SIG undefined FUN_146f79774(void)

uint * FUN_146f79774(longlong param_1,uint *param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  undefined1 auStack_58 [32];
  uint *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (uint *)0x0;
  uStack_30 = 0;
  FUN_146f921fc(0,param_3,&local_38);
  uVar2 = 0xffffffff;
  if ((longlong)(int)uStack_30 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x30);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x88) + 0x18);
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    lVar3 = (longlong)(int)uStack_30 << 2;
    puVar5 = local_38;
    do {
      if (*(int *)(*plVar4 + (longlong)(int)(*puVar5 * (int)plVar4[2]) * 4) == param_4) {
        uVar2 = -(uint)(puVar5 == (uint *)0x0) | *puVar5;
        break;
      }
      puVar5 = puVar5 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  *param_2 = uVar2;
  if (local_38 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f7983c FUN_146f7983c body=327 status=ok
// SIG undefined FUN_146f7983c(void)

void FUN_146f7983c(longlong param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3;
  }
  uVar1 = *(undefined4 *)(*plVar4 + (longlong)((int)plVar4[2] * param_2) * 4);
  FUN_146f71930(param_1 + 0x288,uVar1,param_2,0);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3;
  }
  *(undefined4 *)(*plVar4 + (longlong)((int)plVar4[2] * param_2) * 4) = param_3;
  FUN_146f6de70(param_1 + 0x288,param_3,param_2,0);
  FUN_146f92b68(param_1 + 0x218,&local_58,param_2,0);
  if ((longlong)local_50 != 0) {
    lVar5 = 0;
    do {
      iVar2 = *(int *)(local_58 + lVar5);
      FUN_146f71930(param_1 + 0x250,uVar1,iVar2,0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
      }
      *(undefined4 *)(*plVar4 + (longlong)((int)plVar4[2] * iVar2) * 4) = param_3;
      FUN_146f6de70(param_1 + 0x250,param_3,iVar2);
      lVar5 = lVar5 + 4;
    } while ((longlong)local_50 * 4 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f79988 FUN_146f79988 body=59 status=ok
// SIG undefined FUN_146f79988(void)

void FUN_146f79988(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144aff0e0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f799d6 FUN_146f799d6 body=130 status=ok
// SIG undefined FUN_146f799d6(void)

void FUN_146f799d6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_146f9e890(param_1,param_2);
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



// FUNCTION 146f79a5a FUN_146f79a5a body=165 status=ok
// SIG undefined FUN_146f79a5a(void)

void FUN_146f79a5a(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  void *_Dst;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[3];
  }
  lVar7 = (longlong)param_2;
  lVar6 = (longlong)*(int *)((longlong)plVar5 + lVar7 * 4) * 4 + *param_1;
  plVar5 = (longlong *)param_1[6];
  if ((longlong *)param_1[6] == (longlong *)0x0) {
    plVar5 = param_1 + 5;
  }
  uVar3 = *(uint *)((longlong)plVar5 + lVar7 * 4);
  uVar9 = 0;
  uVar8 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar8 >> 1) + uVar9;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 4) < param_3) {
        uVar9 = uVar1 + (uVar8 & 1);
      }
      bVar4 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar4);
  }
  if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar6 + (ulonglong)uVar9 * 4) == param_3)) {
    _Dst = (void *)(lVar6 + (ulonglong)uVar9 * 4);
    memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)(int)(uVar3 + ~uVar9) << 2);
    plVar5 = param_1 + 5;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[6];
    }
    piVar2 = (int *)((longlong)plVar5 + lVar7 * 4);
    *piVar2 = *piVar2 + -1;
  }
  return;
}



// FUNCTION 146f79c32 FUN_146f79c32 body=224 status=ok
// SIG undefined FUN_146f79c32(void)

undefined8 FUN_146f79c32(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  plVar6 = (longlong *)param_1[6];
  if ((longlong *)param_1[6] == (longlong *)0x0) {
    plVar6 = param_1 + 5;
  }
  lVar11 = (longlong)param_2;
  uVar3 = *(uint *)((longlong)plVar6 + lVar11 * 4);
  plVar6 = param_1 + 8;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[9];
  }
  iVar4 = *(int *)((longlong)plVar6 + lVar11 * 4);
  if ((int)uVar3 < iVar4) {
    plVar6 = param_1 + 2;
    if ((longlong *)param_1[3] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[3];
    }
    plVar6 = (longlong *)((longlong)*(int *)((longlong)plVar6 + lVar11 * 4) * 4 + *param_1);
    uVar8 = 0;
    uVar7 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar7 >> 1) + uVar8;
        if (*(int *)((longlong)plVar6 + (ulonglong)uVar1 * 4) < param_3) {
          uVar8 = uVar1 + (uVar7 & 1);
        }
        bVar5 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar5);
    }
    uVar9 = (ulonglong)uVar8;
    if (((int)uVar3 <= (int)uVar8) || (*(int *)((longlong)plVar6 + uVar9 * 4) != param_3)) {
      piVar2 = (int *)((longlong)plVar6 + uVar9 * 4);
      memmove(piVar2 + 1,(void *)((longlong)plVar6 + uVar9 * 4),(longlong)(int)(uVar3 - uVar8) << 2)
      ;
      *piVar2 = param_3;
      plVar6 = (longlong *)param_1[6];
      plVar10 = param_1 + 5;
      if (plVar6 != (longlong *)0x0) {
        plVar10 = plVar6;
      }
      piVar2 = (int *)((longlong)plVar10 + lVar11 * 4);
      *piVar2 = *piVar2 + 1;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar6 >> 8),(int)uVar3 < iVar4);
}



// FUNCTION 146f79d12 FUN_146f79d12 body=126 status=ok
// SIG undefined FUN_146f79d12(void)

void FUN_146f79d12(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_3 < (int)param_1[1]) && (*(char *)((longlong)param_1 + 0x35) != '\x01')) {
    lVar2 = *param_1;
    lVar5 = (longlong)param_3 * 0xb0;
    if (*(int *)(lVar2 + 0x18 + lVar5) != *(int *)(lVar2 + 0x44 + lVar5)) {
      lVar2 = lVar2 + lVar5;
      lVar5 = lVar2 + 0x48;
      if (*(longlong *)(lVar2 + 0x50) != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x50);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xc) == param_2) {
            FUN_146f79d90(param_1,param_3);
            return;
          }
          iVar4 = *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
    return;
  }
  if ((param_1[2] == 0) || ((longlong *)param_1[3] == (longlong *)0x0)) {
    iVar4 = *(int *)((longlong)param_1 + 0xc);
    FUN_1412e7bc0(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
      FUN_146f9eab4(param_1,0);
      return;
    }
  }
  else {
    iVar1 = (**(code **)(*(longlong *)param_1[3] + 0x68))();
    iVar4 = *(int *)(param_1[2] + 0x88);
    if (iVar1 < *(int *)(param_1[2] + 0x88)) {
      iVar4 = iVar1;
    }
    FUN_1412e7bec(param_1,iVar4,1);
    if (0 < (int)param_1[1]) {
      lVar2 = 0x44;
      uVar3 = 0;
      do {
        if (*(char *)((longlong)param_1 + 0x35) == '\x01') {
          FUN_146f7a63a(param_1,uVar3 & 0xffffffff);
        }
        else if (*(int *)(*param_1 + lVar2) < *(int *)(*param_1 + -0x2c + lVar2)) {
          FUN_146f79d90(param_1,uVar3 & 0xffffffff);
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0xb0;
      } while ((longlong)uVar3 < (longlong)(int)param_1[1]);
    }
    *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  }
  return;
}



// FUNCTION 146f79d90 FUN_146f79d90 body=2216 status=ok
// SIG undefined FUN_146f79d90(void)

void FUN_146f79d90(longlong *param_1,int param_2)

{
  uint *puVar1;
  void *_Src;
  int *piVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined1 auStack_528 [32];
  longlong *local_508;
  longlong *local_500;
  ulonglong local_4f8;
  int local_4ec;
  longlong *local_4e8;
  longlong *local_4e0;
  uint local_4d8;
  int local_4d4;
  ulonglong local_4d0;
  longlong local_4c8;
  longlong *local_4c0;
  longlong *local_4b8;
  longlong local_4b0;
  ulonglong local_4a8;
  longlong *local_4a0;
  undefined4 local_498;
  uint uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  uint local_488;
  int iStack_484;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  uint local_468;
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 local_458 [1024];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  plVar18 = (longlong *)((longlong)param_2 * 0xb0 + *param_1);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x10000000000;
  lVar3 = *(longlong *)(param_1[2] + 0x80);
  if (lVar3 == 0) {
    lVar3 = param_1[2];
  }
  uVar14 = (int)param_1[6] + *(int *)(lVar3 + 0x18 + (longlong)param_2 * 0x80);
  bVar6 = *(byte *)((longlong)param_1 + 0x2c) & 0x1f;
  uVar15 = uVar14 >> bVar6;
  local_508 = param_1;
  local_4ec = param_2;
  if ((int)(uVar14 >> bVar6) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  if (*(int *)((longlong)plVar18 + 0xc) < (int)uVar15) {
    FUN_146f9ec32(plVar18,uVar15);
  }
  while (iVar10 = (int)plVar18[1], iVar10 < (int)uVar15) {
    bVar6 = *(byte *)((longlong)local_508 + 0x2c);
    *(uint *)(plVar18 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar18 + 0xc) < iVar10 + 1U) {
      FUN_146f9ed80(plVar18,iVar10);
    }
    FUN_146f9ec9e((longlong)iVar10 * 0x58 + *plVar18,(int)local_508[5],1 << (bVar6 & 0x1f));
  }
  if (iVar10 - uVar15 != 0 && (int)uVar15 <= iVar10) {
    FUN_146f9eef8(plVar18,uVar15,iVar10 - uVar15);
  }
  plVar9 = plVar18 + 0xc;
  local_500 = plVar18 + 0xe;
  local_478 = (uint *)&DAT_100000000;
  local_468 = 0xffffffff;
  iStack_464 = 0;
  uStack_460 = 0;
  local_4e0 = plVar18;
  uStack_470 = local_500;
  if ((int)plVar18[0x11] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_478);
    iVar10 = (int)plVar18[0x11];
  }
  uStack_480 = CONCAT44(uStack_45c,uStack_460);
  local_488 = local_468;
  iStack_484 = iStack_464;
  local_498 = (undefined4)local_478;
  uStack_494 = local_478._4_4_;
  uStack_490 = (int)uStack_470;
  uStack_48c = uStack_470._4_4_;
  local_4e8 = plVar9;
  local_4a0 = plVar9;
  if ((iStack_464 != iVar10) || (uStack_470 != local_500)) {
    plVar18 = local_508 + 3;
    do {
      iVar19 = *(int *)(*local_4a0 + (longlong)iStack_484 * 0xc);
      FUN_146f7a990(plVar18,&local_478,iVar19,local_4ec);
      if ((longlong)(int)uStack_470 != 0) {
        puVar1 = local_478 + (int)uStack_470;
        puVar12 = local_478;
        do {
          uVar25 = local_50;
          uVar14 = *puVar12;
          if (uVar14 != 0xffffffff) {
            lVar8 = *local_4e0;
            lVar20 = (longlong)((int)uVar14 >> (*(byte *)((longlong)local_508 + 0x2c) & 0x1f)) *
                     0x58;
            lVar3 = lVar8 + lVar20;
            lVar22 = *(longlong *)(lVar3 + 0x18);
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              lVar22 = lVar3 + 0x10;
            }
            lVar7 = lVar8 + lVar20 + 0x28;
            if (*(longlong *)(lVar3 + 0x30) != 0) {
              lVar7 = *(longlong *)(lVar3 + 0x30);
            }
            lVar3 = (longlong)
                    *(int *)(lVar7 + (longlong)(int)(*(uint *)(local_508 + 6) & uVar14) * 4);
            if (lVar3 != 0) {
              lVar7 = 0;
              do {
                if (*(int *)((longlong)
                             *(int *)(lVar22 + (longlong)(int)(*(uint *)(local_508 + 6) & uVar14) *
                                               4) * 4 + *(longlong *)(lVar8 + lVar20) + lVar7) ==
                    iVar19) goto LAB_146f7a027;
                lVar7 = lVar7 + 4;
              } while (lVar3 * 4 != lVar7);
            }
            lVar3 = (longlong)(int)local_50;
            uVar15 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar15);
            if (local_50._4_4_ < uVar15) {
              FUN_146f9ef52(local_458,uVar25 & 0xffffffff);
            }
            puVar4 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar4 = local_458;
            }
            *(uint *)(puVar4 + lVar3 * 4) = uVar14;
          }
LAB_146f7a027:
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar1);
      }
      local_488 = local_488 & ~uStack_494;
      FUN_1449c0562(&local_498);
    } while (local_4a0 != local_4e8 ||
             ((longlong *)CONCAT44(uStack_48c,uStack_490) != local_500 || iStack_484 != iVar10));
  }
  puVar4 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar4 = local_458;
  }
  FUN_1406de246(puVar4,local_50 & 0xffffffff);
  if (0 < (int)local_50) {
    uVar25 = 0;
    do {
      uVar14 = (uint)local_50;
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_458;
      }
      iVar19 = (int)uVar25;
      local_4c8 = (longlong)iVar19;
      bVar6 = (byte)*(undefined4 *)((longlong)local_508 + 0x2c);
      iVar10 = *(int *)(puVar4 + local_4c8 * 4) >> (bVar6 & 0x1f);
      uVar15 = iVar19 + 1U;
      if ((int)(iVar19 + 1U) < (int)uVar14) {
        uVar15 = uVar14;
      }
      local_4d0 = uVar25 & 0xffffffff;
      lVar3 = local_4c8;
      do {
        lVar3 = lVar3 + 1;
        if ((int)uVar14 <= lVar3) {
          local_4d0 = (ulonglong)uVar15;
          uVar16 = uVar15;
          break;
        }
        uVar16 = (int)local_4d0 + 1;
        local_4d0 = (ulonglong)uVar16;
      } while (*(int *)(puVar4 + lVar3 * 4) >> (bVar6 & 0x1f) == iVar10);
      uVar14 = uVar16 - 1;
      plVar18 = (longlong *)((longlong)iVar10 * 0x58 + *local_4e0);
      if ((int)uVar14 < iVar19) {
        iVar10 = (int)plVar18[1];
        uVar13 = 0;
      }
      else {
        plVar9 = plVar18 + 8;
        if ((longlong *)plVar18[9] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar18[9];
        }
        plVar5 = plVar18 + 5;
        if ((longlong *)plVar18[6] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar18[6];
        }
        uVar13 = 0;
        uVar24 = uVar25 & 0xffffffff;
        do {
          iVar10 = (int)uVar24;
          lVar8 = (longlong)iVar10;
          lVar3 = lVar8 * 4;
          if (iVar10 < (int)uVar14) {
            iVar17 = uVar16 - iVar10;
            iVar26 = -1;
            do {
              if (*(uint *)(puVar4 + lVar8 * 4 + 4) != *(uint *)(puVar4 + lVar3)) {
                uVar24 = (ulonglong)(uint)(iVar10 - iVar26);
                iVar17 = -iVar26;
                goto LAB_146f7a387;
              }
              lVar8 = lVar8 + 1;
              iVar26 = iVar26 + -1;
            } while ((int)uVar14 != lVar8);
            uVar24 = (ulonglong)uVar16;
          }
          else {
            uVar24 = (ulonglong)(iVar10 + 1);
            iVar17 = 1;
          }
LAB_146f7a387:
          lVar3 = (longlong)(int)(*(uint *)(puVar4 + lVar3) & *(uint *)(local_508 + 6));
          iVar10 = (iVar17 - *(int *)((longlong)plVar9 + lVar3 * 4)) +
                   *(int *)((longlong)plVar5 + lVar3 * 4);
          if (iVar10 < 1) {
            iVar10 = 0;
          }
          uVar15 = (int)uVar13 + iVar10;
          uVar13 = (ulonglong)uVar15;
        } while ((int)uVar24 <= (int)uVar14);
        iVar10 = (int)plVar18[1];
        *(uint *)(plVar18 + 1) = iVar10 + uVar15;
        if ((uint)(*(int *)((longlong)plVar18 + 0xc) - iVar10) < uVar15) {
          FUN_1446f48e2(plVar18);
        }
      }
      memset((void *)((longlong)iVar10 * 4 + *plVar18),0,uVar13 << 2);
      if (iVar19 <= (int)uVar14) {
        local_4b0 = *plVar18;
        iVar10 = 1 << (*(byte *)((longlong)local_508 + 0x2c) & 0x1f);
        local_4d4 = (int)plVar18[1];
        local_4b8 = plVar18 + 8;
        local_4c0 = plVar18 + 5;
        local_4d8 = iVar19 - 1;
        local_4f8 = (ulonglong)uVar14;
        local_4a8 = uVar25;
        do {
          plVar9 = local_4b8;
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_458;
          }
          iVar17 = (int)local_4f8;
          lVar3 = (longlong)iVar17;
          uVar14 = *(uint *)(puVar4 + lVar3 * 4);
          iVar19 = iVar17 - (int)local_4a8;
          if (iVar19 == 0 || iVar17 < (int)local_4a8) {
            iVar19 = 1;
            uVar15 = iVar17 - 1;
          }
          else {
            iVar19 = iVar19 + 1;
            iVar26 = 1;
            do {
              if (*(uint *)(puVar4 + lVar3 * 4 + -4) != uVar14) {
                iVar19 = iVar26;
                uVar15 = iVar17 - iVar26;
                break;
              }
              lVar3 = lVar3 + -1;
              iVar26 = iVar26 + 1;
              uVar15 = local_4d8;
            } while (local_4c8 < lVar3);
          }
          local_4f8 = (ulonglong)uVar15;
          lVar3 = (longlong)(int)(*(uint *)(local_508 + 6) & uVar14);
          plVar5 = (longlong *)plVar18[3];
          if ((longlong *)plVar18[3] == (longlong *)0x0) {
            plVar5 = plVar18 + 2;
          }
          plVar21 = (longlong *)plVar18[9];
          if ((longlong *)plVar18[9] == (longlong *)0x0) {
            plVar21 = local_4b8;
          }
          iVar17 = *(int *)((longlong)plVar21 + lVar3 * 4);
          lVar8 = (longlong)*(int *)((longlong)plVar5 + lVar3 * 4) + (longlong)iVar17;
          plVar5 = (longlong *)plVar18[6];
          if ((longlong *)plVar18[6] == (longlong *)0x0) {
            plVar5 = local_4c0;
          }
          iVar19 = (iVar19 - iVar17) + *(int *)((longlong)plVar5 + lVar3 * 4);
          if (iVar19 < 1) {
            iVar19 = 0;
          }
          iVar17 = (int)uVar13;
          iVar11 = (int)lVar8 + iVar17;
          iVar26 = local_4d4 - iVar11;
          _Src = (void *)(local_4b0 + lVar8 * 4);
          local_4d4 = iVar11;
          memmove((void *)((longlong)_Src + (longlong)iVar17 * 4),_Src,(longlong)iVar26 << 2);
          plVar5 = (longlong *)plVar18[9];
          if ((longlong *)plVar18[9] == (longlong *)0x0) {
            plVar5 = plVar9;
          }
          piVar2 = (int *)((longlong)plVar5 + lVar3 * 4);
          *piVar2 = *piVar2 + iVar19;
          iVar26 = (*(uint *)(local_508 + 6) & uVar14) + 1;
          if (iVar26 < iVar10) {
            lVar3 = (longlong)(int)(*(uint *)(local_508 + 6) & uVar14);
            do {
              plVar9 = (longlong *)plVar18[3];
              if ((longlong *)plVar18[3] == (longlong *)0x0) {
                plVar9 = plVar18 + 2;
              }
              piVar2 = (int *)((longlong)plVar9 + lVar3 * 4 + 4);
              *piVar2 = *piVar2 + iVar17;
              lVar3 = lVar3 + 1;
            } while (iVar10 + -1 != (int)lVar3);
            iVar26 = (uVar14 & *(uint *)(local_508 + 6)) + 1;
          }
          iVar10 = iVar26;
          uVar13 = (ulonglong)(uint)(iVar17 - iVar19);
        } while ((int)local_4a8 <= (int)local_4f8);
      }
      uVar25 = local_4d0;
    } while ((int)local_4d0 < (int)local_50);
  }
  plVar18 = local_4e0;
  local_478 = (uint *)&DAT_100000000;
  uStack_470 = local_500;
  local_468 = 0xffffffff;
  iStack_464 = 0;
  uStack_460 = 0;
  if ((int)local_4e0[0x11] == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_478);
    iVar10 = (int)plVar18[0x11];
  }
  uStack_480 = CONCAT44(uStack_45c,uStack_460);
  local_488 = local_468;
  iStack_484 = iStack_464;
  local_498 = (undefined4)local_478;
  uStack_494 = local_478._4_4_;
  uStack_490 = (int)uStack_470;
  uStack_48c = uStack_470._4_4_;
  local_4a0 = local_4e8;
  if ((iStack_464 != iVar10) || (uStack_470 != local_500)) {
    plVar9 = local_508 + 3;
    do {
      iVar19 = *(int *)(*local_4a0 + (longlong)iStack_484 * 0xc);
      FUN_146f7a990(plVar9,&local_478,iVar19,local_4ec);
      if ((longlong)(int)uStack_470 != 0) {
        puVar1 = local_478 + (int)uStack_470;
        puVar12 = local_478;
        do {
          uVar14 = *puVar12;
          if (uVar14 != 0xffffffff) {
            lVar7 = (longlong)(int)(*(uint *)(local_508 + 6) & uVar14);
            lVar8 = *plVar18;
            lVar20 = (longlong)((int)uVar14 >> (*(byte *)((longlong)local_508 + 0x2c) & 0x1f)) *
                     0x58;
            lVar3 = lVar8 + lVar20;
            lVar22 = *(longlong *)(lVar3 + 0x18);
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              lVar22 = lVar3 + 0x10;
            }
            lVar23 = lVar8 + lVar20 + 0x28;
            if (*(longlong *)(lVar3 + 0x30) != 0) {
              lVar23 = *(longlong *)(lVar3 + 0x30);
            }
            lVar3 = (longlong)*(int *)(lVar23 + lVar7 * 4);
            if (lVar3 != 0) {
              lVar23 = 0;
              do {
                if (*(int *)((longlong)*(int *)(lVar22 + lVar7 * 4) * 4 +
                             *(longlong *)(lVar8 + lVar20) + lVar23) == iVar19) goto LAB_146f7a55d;
                lVar23 = lVar23 + 4;
              } while (lVar3 * 4 != lVar23);
            }
            FUN_146f79c32(lVar8 + lVar20,lVar7,iVar19);
          }
LAB_146f7a55d:
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar1);
      }
      local_488 = local_488 & ~uStack_494;
      FUN_1449c0562(&local_498);
    } while (local_4a0 != local_4e8 ||
             ((longlong *)CONCAT44(uStack_48c,uStack_490) != local_500 || iStack_484 != iVar10));
  }
  plVar9 = local_4e8;
  FUN_1402226aa(plVar18 + 2);
  FUN_1402226aa(plVar9);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f7a63a FUN_146f7a63a body=852 status=ok
// SIG undefined FUN_146f7a63a(void)

void FUN_146f7a63a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong local_48;
  
  lVar13 = *param_1;
  lVar19 = *(longlong *)(param_1[2] + 0x80);
  if (lVar19 == 0) {
    lVar19 = param_1[2];
  }
  lVar21 = (longlong)param_2;
  iVar17 = *(int *)(lVar19 + 0x18 + lVar21 * 0x80);
  uVar11 = (int)param_1[6] + iVar17;
  bVar5 = *(byte *)((longlong)param_1 + 0x2c) & 0x1f;
  uVar12 = uVar11 >> bVar5;
  lVar19 = lVar21 * 0xb0;
  plVar1 = (longlong *)(lVar13 + lVar19);
  iVar8 = *(int *)(lVar13 + 0xc + lVar19);
  FUN_1412e7f46(*(undefined8 *)(lVar13 + lVar19),*(undefined4 *)(lVar13 + 8 + lVar19));
  *(undefined4 *)(lVar13 + 8 + lVar19) = 0;
  if ((iVar8 < 0) && (*(int *)((longlong)plVar1 + 0xc) != 0)) {
    FUN_146f9ec32(plVar1,0);
  }
  if (-1 < (int)(uVar11 >> bVar5)) {
    if (*(int *)((longlong)plVar1 + 0xc) < (int)uVar12) {
      FUN_146f9ec32(plVar1,uVar12);
    }
    while( true ) {
      iVar8 = (int)plVar1[1];
      if ((int)uVar12 <= iVar8) break;
      *(uint *)(plVar1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
        FUN_146f9ed80(plVar1,iVar8);
      }
      FUN_146f9ec9e((longlong)iVar8 * 0x58 + *plVar1,0);
    }
    lVar13 = param_1[3];
    iVar3 = *(int *)(lVar13 + 0x10);
    if (0 < iVar17 && 0 < iVar3) {
      if (lVar13 == 0) {
        iVar17 = (int)param_1[4];
        local_48 = 0;
      }
      else {
        lVar19 = lVar13 + 0x18;
        if (*(longlong *)(lVar13 + 0x30) != 0) {
          lVar19 = *(longlong *)(lVar13 + 0x30);
        }
        local_48 = *(longlong *)(lVar19 + lVar21 * 0x18);
        iVar17 = (int)param_1[4];
        if (0 < iVar17 * iVar3) {
          uVar9 = 0;
          do {
            uVar11 = *(uint *)(local_48 + uVar9 * 4);
            if (uVar11 != 0xffffffff) {
              lVar19 = *plVar1 + (longlong)
                                 ((int)uVar11 >> (*(byte *)((longlong)param_1 + 0x2c) & 0x1f)) *
                                 0x58;
              lVar13 = *(longlong *)(lVar19 + 0x48);
              if (lVar13 == 0) {
                lVar13 = lVar19 + 0x40;
              }
              piVar2 = (int *)(lVar13 + (longlong)(int)(*(uint *)(param_1 + 6) & uVar11) * 4);
              *piVar2 = *piVar2 + 1;
            }
            uVar9 = uVar9 + 1;
          } while ((uint)(iVar17 * iVar3) != uVar9);
          iVar8 = (int)plVar1[1];
        }
      }
      if (iVar8 != 0) {
        lVar13 = *plVar1;
        lVar19 = (longlong)iVar8 * 0x58 + lVar13;
        do {
          iVar8 = *(int *)((longlong)param_1 + 0x2c);
          if (iVar8 != 0x1f) {
            lVar21 = 0;
            iVar7 = 0;
            do {
              lVar15 = *(longlong *)(lVar13 + 0x18);
              if (*(longlong *)(lVar13 + 0x18) == 0) {
                lVar15 = lVar13 + 0x10;
              }
              *(int *)(lVar15 + lVar21 * 4) = iVar7;
              lVar15 = *(longlong *)(lVar13 + 0x48);
              if (*(longlong *)(lVar13 + 0x48) == 0) {
                lVar15 = lVar13 + 0x40;
              }
              iVar4 = *(int *)(lVar15 + lVar21 * 4);
              iVar18 = (int)param_1[5];
              if ((int)param_1[5] < iVar4) {
                iVar18 = iVar4;
              }
              *(int *)(lVar15 + lVar21 * 4) = iVar18;
              lVar15 = *(longlong *)(lVar13 + 0x48);
              if (*(longlong *)(lVar13 + 0x48) == 0) {
                lVar15 = lVar13 + 0x40;
              }
              iVar7 = iVar7 + *(int *)(lVar15 + lVar21 * 4);
              lVar21 = lVar21 + 1;
            } while (1L << ((byte)iVar8 & 0x3f) != lVar21);
          }
          FUN_144a127d2(lVar13);
          lVar13 = lVar13 + 0x58;
        } while (lVar13 != lVar19);
      }
      iVar8 = 0;
      iVar7 = 0;
      do {
        if (iVar17 != 0) {
          lVar13 = 0;
          do {
            uVar11 = *(uint *)(local_48 + (longlong)iVar8 * 4 + lVar13 * 4);
            if (uVar11 != 0xffffffff) {
              lVar19 = (longlong)(int)(*(uint *)(param_1 + 6) & uVar11);
              lVar21 = (longlong)((int)uVar11 >> (*(byte *)((longlong)param_1 + 0x2c) & 0x1f)) *
                       0x58;
              plVar14 = (longlong *)(*plVar1 + lVar21);
              plVar20 = (longlong *)plVar14[3];
              if ((longlong *)plVar14[3] == (longlong *)0x0) {
                plVar20 = plVar14 + 2;
              }
              lVar21 = *plVar1 + lVar21;
              lVar16 = lVar21 + 0x28;
              lVar15 = plVar14[6];
              if (plVar14[6] == 0) {
                lVar15 = lVar16;
              }
              *(int *)((longlong)*(int *)((longlong)plVar20 + lVar19 * 4) * 4 + *plVar14 +
                      (longlong)*(int *)(lVar15 + lVar19 * 4) * 4) = iVar7;
              lVar21 = *(longlong *)(lVar21 + 0x30);
              if (lVar21 == 0) {
                lVar21 = lVar16;
              }
              piVar2 = (int *)(lVar21 + lVar19 * 4);
              *piVar2 = *piVar2 + 1;
            }
            lVar13 = lVar13 + 1;
          } while (iVar17 != (int)lVar13);
          iVar8 = iVar8 + (int)lVar13;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar3);
      if ((longlong)(int)plVar1[1] != 0) {
        plVar14 = (longlong *)*plVar1;
        plVar20 = plVar14 + (longlong)(int)plVar1[1] * 0xb;
        do {
          iVar17 = *(int *)((longlong)param_1 + 0x2c);
          if (iVar17 != 0x1f) {
            lVar13 = 0;
            do {
              plVar6 = (longlong *)plVar14[3];
              if ((longlong *)plVar14[3] == (longlong *)0x0) {
                plVar6 = plVar14 + 2;
              }
              plVar10 = (longlong *)plVar14[6];
              if ((longlong *)plVar14[6] == (longlong *)0x0) {
                plVar10 = plVar14 + 5;
              }
              FUN_1406de246((longlong)*(int *)((longlong)plVar6 + lVar13 * 4) * 4 + *plVar14,
                            *(undefined4 *)((longlong)plVar10 + lVar13 * 4));
              lVar13 = lVar13 + 1;
            } while (1L << ((byte)iVar17 & 0x3f) != lVar13);
          }
          plVar14 = plVar14 + 0xb;
        } while (plVar14 != plVar20);
      }
    }
    FUN_1402226aa(plVar1 + 2);
    FUN_1402226aa(plVar1 + 0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar12);
}



// FUNCTION 146f7a990 FUN_146f7a990 body=102 status=ok
// SIG undefined FUN_146f7a990(void)

void FUN_146f7a990(longlong *param_1,longlong *param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar3 = (int)param_1[1];
  lVar1 = *(longlong *)(*param_1 + 0x30);
  lVar2 = *param_1 + 0x18;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  if (iVar3 == 0) {
    plVar5 = (longlong *)
             ((longlong)((int)param_3 >> 8) * 0xc18 +
             *(longlong *)(lVar2 + (longlong)param_4 * 0x18));
    iVar3 = *(int *)((longlong)plVar5 + (param_3 & 0xff) * 4 + 0x410);
    iVar4 = *(int *)((longlong)plVar5 + (param_3 & 0xff) * 4 + 0x10);
  }
  else {
    plVar5 = (longlong *)(lVar2 + (longlong)param_4 * 0x18);
    iVar4 = (int)param_3 * (int)plVar5[2];
  }
  *param_2 = (longlong)iVar4 * 4 + *plVar5;
  *(int *)(param_2 + 1) = iVar3;
  return;
}



// FUNCTION 146f7aa06 FUN_146f7aa06 body=42 status=ok
// SIG undefined FUN_146f7aa06(void)

longlong FUN_146f7aa06(longlong param_1,int param_2)

{
  FUN_146f7aec8(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f7aa30 FUN_146f7aa30 body=110 status=ok
// SIG undefined FUN_146f7aa30(void)

undefined8 * FUN_146f7aa30(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar1;
  *(undefined4 *)(puVar5 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar3;
  *puVar5 = &PTR_FUN_149fa75d0;
  puVar5[6] = 0;
  lVar6 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x30);
  }
  FUN_146f7af28(puVar5 + 3,lVar6,*(undefined4 *)(param_1 + 0x38),0);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  puVar5[8] = *(undefined8 *)(param_1 + 0x40);
  puVar5[9] = uVar4;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146f7aa9e FUN_146f7aa9e body=100 status=ok
// SIG undefined FUN_146f7aa9e(void)

void FUN_146f7aa9e(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7b0f0(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  iVar2 = param_2 + 1;
  if (param_2 + 1 <= *(int *)(param_1 + 0x10)) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return;
}



// FUNCTION 146f7ab62 FUN_146f7ab62 body=113 status=ok
// SIG undefined FUN_146f7ab62(void)

void FUN_146f7ab62(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7b152(lVar1,*(int *)(lVar1 + 0x10) * param_2);
      if (0 < param_2) {
        FUN_146f7b0f0(lVar1,param_2 + -1,param_1 + 0x40);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7abd4 FUN_146f7abd4 body=86 status=ok
// SIG undefined FUN_146f7abd4(void)

void FUN_146f7abd4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  lVar1 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7b17e(lVar1,param_2,param_1 + 0x40);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 146f7ac2a FUN_146f7ac2a body=84 status=ok
// SIG undefined FUN_146f7ac2a(void)

ulonglong FUN_146f7ac2a(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = (*(code *)PTR_FUN_14c75b148)
                        (*(undefined8 *)(lVar4 + lVar3),*(int *)(lVar4 + 8 + lVar3) << 4,
                         uVar2 & 0xffffffff);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  return uVar2;
}



// FUNCTION 146f7ac8c FUN_146f7ac8c body=99 status=ok
// SIG undefined FUN_146f7ac8c(void)

void FUN_146f7ac8c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x38) * 0x18;
    do {
      FUN_146f7b844(lVar2,param_2,param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(lVar2 + 8) / *(uint *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 146f7ad00 FUN_146f7ad00 body=33 status=ok
// SIG undefined FUN_146f7ad00(void)

void FUN_146f7ad00(longlong param_1)

{
  FUN_146f7bbb4(param_1 + 0x18);
  FUN_146f7bafa(param_1 + 0x18);
  return;
}



// FUNCTION 146f7ad26 FUN_146f7ad26 body=198 status=ok
// SIG undefined FUN_146f7ad26(void)

void FUN_146f7ad26(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = param_1 + 0x18;
  iVar5 = *(int *)(param_1 + 0x38);
  if (param_2 < iVar5) {
    FUN_146f7b9fc(lVar1,param_2,1);
    return;
  }
  if (iVar5 < param_2) {
    do {
      *(uint *)(param_1 + 0x38) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
        FUN_146f7b7b2(lVar1,iVar5);
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = lVar1;
      }
      puVar2 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x18);
      iVar5 = *(int *)(param_1 + 0xc);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(int *)(puVar2 + 2) = iVar5;
      iVar3 = *(int *)(param_1 + 0x10);
      FUN_146f7b152(puVar2,iVar5 * iVar3);
      if (0 < iVar3) {
        FUN_146f7b0f0(puVar2,iVar3 + -1,param_1 + 0x40);
      }
      iVar5 = *(int *)(param_1 + 0x38);
    } while (iVar5 < param_2);
  }
  return;
}


