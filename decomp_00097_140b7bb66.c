// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b7bb66 FUN_140b7bb66 body=669 status=ok
// SIG undefined FUN_140b7bb66(void)

int FUN_140b7bb66(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined4 *puVar15;
  
  if (DAT_14cbcd9a8 != DAT_14cbcd9d4) {
    puVar15 = &DAT_14cbcd9d8;
    if (DAT_14cbcd9e0 != (undefined4 *)0x0) {
      puVar15 = DAT_14cbcd9e0;
    }
    for (iVar2 = puVar15[DAT_14cbcd9e8 - 1U & param_1]; iVar2 != -1;
        iVar2 = *(int *)(DAT_14cbcd9a0 + 0x20 + (longlong)iVar2 * 0x28)) {
      plVar1 = (longlong *)(DAT_14cbcd9a0 + (longlong)iVar2 * 0x28);
      if (plVar1[1] == 0) {
        uVar13 = FUN_140b7bb2c();
        lVar10 = FUN_14477b664(uVar13);
        plVar1[1] = lVar10;
      }
      lVar10 = param_2[1];
      if (lVar10 == 0) {
        lVar10 = FUN_140b7bb2c();
      }
      lVar3 = *param_2;
      lVar10 = FUN_14477b664(lVar10);
      iVar8 = 0;
      if ((lVar10 != 0) && (plVar4 = *(longlong **)(lVar10 + 0xb8), plVar4 != (longlong *)0x0)) {
        lVar11 = *plVar4;
        pcVar5 = *(code **)(lVar11 + 0x108);
        if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
          cVar7 = (*pcVar5)(plVar4);
          iVar8 = 0;
          if (cVar7 == '\0') goto LAB_140b7bc63;
          lVar11 = *plVar4;
        }
        pcVar5 = *(code **)(lVar11 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar5 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar5)(plVar4);
        }
        iVar8 = FUN_144aff48c(ppuVar14);
      }
LAB_140b7bc63:
      lVar11 = *plVar1;
      lVar6 = plVar1[1];
      iVar9 = 0;
      if ((lVar6 != 0) &&
         (plVar1 = *(longlong **)(lVar6 + 0xb8), iVar9 = 0, plVar1 != (longlong *)0x0)) {
        lVar12 = *plVar1;
        pcVar5 = *(code **)(lVar12 + 0x108);
        if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
          cVar7 = (*pcVar5)(plVar1);
          if (cVar7 == '\0') goto LAB_140b7bccd;
          lVar12 = *plVar1;
        }
        pcVar5 = *(code **)(lVar12 + 0x110);
        ppuVar14 = &PTR_PTR_14c763408;
        if ((pcVar5 != (code *)&LAB_144783426) &&
           (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
          ppuVar14 = (undefined **)(*pcVar5)(plVar1);
        }
        iVar9 = FUN_144aff48c(ppuVar14);
      }
LAB_140b7bccd:
      if ((iVar9 == iVar8) && (lVar11 == lVar3)) {
        if (lVar6 == lVar10) {
          return iVar2;
        }
        if ((lVar10 != 0) && (lVar6 != 0)) {
          iVar8 = *(int *)(lVar10 + 0x38);
          iVar9 = *(int *)(lVar6 + 0x38);
          if ((iVar8 <= iVar9) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar8 * 8) == lVar10 + 0x30)) {
            return iVar2;
          }
          if ((iVar9 <= iVar8) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) == lVar6 + 0x30)) {
            return iVar2;
          }
        }
      }
    }
  }
  return -1;
}



// FUNCTION 140b7be04 FUN_140b7be04 body=600 status=ok
// SIG undefined FUN_140b7be04(void)

void FUN_140b7be04(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cbcd9e0 != (undefined4 *)0x0) {
    FUN_1446efa72(&DAT_14cbcd9e0,0,0,4);
  }
  uVar4 = DAT_14cbcd9e8;
  uVar3 = local_60;
  if (DAT_14cbcd9e8 != 0) {
    uVar9 = 0;
    FUN_144a1cbf0(&DAT_14cbcd9d8,0,DAT_14cbcd9e8,4);
    if (0 < (int)uVar4) {
      do {
        puVar8 = DAT_14cbcd9e0;
        if (DAT_14cbcd9e0 == (undefined4 *)0x0) {
          puVar8 = &DAT_14cbcd9d8;
        }
        puVar8[DAT_14cbcd9e8 + 0x7fffffff & uVar9] = 0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cbcd9b0;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cbcd9c8 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cbcd9a0;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar10 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar2 = *local_78;
        lVar7 = *(longlong *)(lVar2 + 8 + (longlong)iVar10 * 0x28);
        if (lVar7 == 0) {
          lVar7 = FUN_140b7bb2c();
        }
        puVar1 = (undefined8 *)(lVar2 + (longlong)iVar10 * 0x28);
        uVar3 = *puVar1;
        uVar6 = FUN_14477b664(lVar7);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar11 = (uint)uVar3 & 0xffff;
        iVar5 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4),uVar9 >> 0x10 ^ uVar9
                             );
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14cbcd9e8 - 1U;
        iVar5 = (int)uVar6;
        *(int *)((longlong)puVar1 + 0x24) = iVar5;
        puVar8 = DAT_14cbcd9e0;
        if (DAT_14cbcd9e0 == (undefined4 *)0x0) {
          puVar8 = &DAT_14cbcd9d8;
        }
        *(undefined4 *)(puVar1 + 4) = puVar8[(longlong)(int)DAT_14cbcd9e8 - 1U & uVar6];
        puVar8 = DAT_14cbcd9e0;
        if (DAT_14cbcd9e0 == (undefined4 *)0x0) {
          puVar8 = &DAT_14cbcd9d8;
        }
        puVar8[(longlong)iVar5 & (longlong)(int)DAT_14cbcd9e8 - 1U] = iVar10;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar10 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b7c05e FUN_140b7c05e body=367 status=ok
// SIG undefined FUN_140b7c05e(void)

void FUN_140b7c05e(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14cbcd9d8;
  if (DAT_14cbcd9e0 != (undefined4 *)0x0) {
    puVar5 = DAT_14cbcd9e0;
  }
  iVar4 = DAT_14cbcd9e8 + 3;
  if (-1 < DAT_14cbcd9e8) {
    iVar4 = DAT_14cbcd9e8;
  }
  if (DAT_14cbcd9a8 - DAT_14cbcd9d4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cbcd9b0;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cbcd9c8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cbcd9c8;
    }
    local_78 = &DAT_14cbcd9a0;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cbcd9b0)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x24 + (longlong)iVar2 * 0x28)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cbcd9a0 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cbcd9b0 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cbcd9e8) {
      lVar3 = 0;
      do {
        puVar5[lVar3] = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cbcd9e8);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b7c1ce FUN_140b7c1ce body=333 status=ok
// SIG undefined FUN_140b7c1ce(void)

void FUN_140b7c1ce(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x480) = 2;
  if (*(char *)(param_1 + 0x360) == '\x01') {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  if (*(int *)(param_1 + 0x47c) < 0) {
    *(undefined4 *)(param_1 + 0x478) = 0;
    FUN_1403d6c30(param_1 + 0x470,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x478) = 0;
  }
  *(undefined8 *)(param_1 + 0x370) = 0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x378) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x380) = uVar2;
  *(undefined8 *)(param_1 + 0x388) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x390) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x394) = uVar3;
  *(undefined4 *)(param_1 + 0x398) = uVar4;
  *(undefined4 *)(param_1 + 0x39c) = uVar5;
  *(undefined8 *)(param_1 + 0x3a0) = DAT_14c8464f0;
  if (param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x414);
    FUN_140b7c31b(*(undefined8 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x410));
    *(undefined4 *)(param_1 + 0x410) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x414) != 0)) {
      FUN_147102e32(param_1 + 0x408,0);
    }
    FUN_140b7c47c(param_1 + 0x5e0);
    FUN_140b7c4f2(param_1 + 0x7c0);
  }
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FUN_140b7c348();
    return;
  }
  return;
}



// FUNCTION 140b7c31b FUN_140b7c31b body=45 status=ok
// SIG undefined FUN_140b7c31b(void)

void FUN_140b7c31b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140b7c348 FUN_140b7c348 body=76 status=ok
// SIG undefined FUN_140b7c348(void)

void FUN_140b7c348(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x1b0) != 0) && (*(PSRWLOCK *)(param_1 + 0x1b8) != (PSRWLOCK)0x0)) {
    AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
    FUN_140b7c394(*(undefined8 *)(param_1 + 0x1b0),0);
                    /* WARNING: Could not recover jumptable at 0x000140b7c386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
    return;
  }
  return;
}



// FUNCTION 140b7c394 FUN_140b7c394 body=107 status=ok
// SIG undefined FUN_140b7c394(void)

void FUN_140b7c394(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140b7c3e3:
      FUN_140b7c400(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140485442(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140b7c3e3;
  FUN_140b7c57e(param_1);
  FUN_140b7c400(param_1,param_2);
  return;
}



// FUNCTION 140b7c400 FUN_140b7c400 body=123 status=ok
// SIG undefined FUN_140b7c400(void)

void FUN_140b7c400(longlong param_1,int param_2)

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
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140b7c47c FUN_140b7c47c body=117 status=ok
// SIG undefined FUN_140b7c47c(void)

void FUN_140b7c47c(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_14482f6fa(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffff7fffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  if (*(char *)(param_1 + 0x45) == '\x01') {
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  FUN_140af34e6(param_1);
  return;
}



// FUNCTION 140b7c4f2 FUN_140b7c4f2 body=140 status=ok
// SIG undefined FUN_140b7c4f2(void)

void FUN_140b7c4f2(longlong param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != -1) {
    *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  }
  return;
}



// FUNCTION 140b7c57e FUN_140b7c57e body=327 status=ok
// SIG undefined FUN_140b7c57e(void)

void FUN_140b7c57e(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 140b7c6c6 FUN_140b7c6c6 body=1 status=ok
// SIG undefined FUN_140b7c6c6(void)

void FUN_140b7c6c6(void)

{
  return;
}



// FUNCTION 140b7c6c8 FUN_140b7c6c8 body=1 status=ok
// SIG undefined FUN_140b7c6c8(void)

void FUN_140b7c6c8(void)

{
  return;
}



// FUNCTION 140b7c6ca FUN_140b7c6ca body=39 status=ok
// SIG undefined FUN_140b7c6ca(void)

undefined8 FUN_140b7c6ca(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  return uVar2;
}



// FUNCTION 140b7c6f1 FUN_140b7c6f1 body=123 status=ok
// SIG undefined FUN_140b7c6f1(void)

void FUN_140b7c6f1(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_60 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_68 = &local_58;
  FUN_140b7c76e(&local_48);
  FUN_14071d490(&local_48,param_2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7c76e FUN_140b7c76e body=322 status=ok
// SIG undefined FUN_140b7c76e(void)

void FUN_140b7c76e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_168 [40];
  undefined1 *local_140;
  code *local_138;
  undefined1 **local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_110 [192];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  local_130 = &local_140;
  local_138 = FUN_143d24c56;
  puVar1 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  local_140 = local_110;
  uVar4 = FUN_140094010();
  if (puVar1 != puVar2) {
    do {
      puVar8 = puVar1 + 4;
      local_128 = *puVar1;
      uStack_124 = puVar1[1];
      uStack_120 = puVar1[2];
      uStack_11c = puVar1[3];
      bVar3 = FUN_140b7c8b1(uVar4,&local_128,&local_138,0);
      puVar1 = puVar8;
    } while ((bVar3 & puVar8 != puVar2) != 0);
  }
  FUN_1447a993c(param_1,local_48 & 0xffffffff);
  if (0 < (int)local_48) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar7 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar7 = local_110;
      }
      FUN_140093fc6(param_1,uVar6 & 0xffffffff,puVar7 + lVar5);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)(int)local_48);
  }
  FUN_14009404e(param_1);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7c8b1 FUN_140b7c8b1 body=45 status=ok
// SIG undefined FUN_140b7c8b1(void)

void FUN_140b7c8b1(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  short *psVar1;
  
  psVar1 = (short *)*param_2;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    FUN_1446df218(param_1,psVar1,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140b7c8db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_3[1],&DAT_14c948618);
  return;
}



// FUNCTION 140b7c8de FUN_140b7c8de body=141 status=ok
// SIG undefined FUN_140b7c8de(void)

undefined8 * FUN_140b7c8de(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140b7c96c();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140bb2e20(param_1 + 10,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 140b7c96c FUN_140b7c96c body=154 status=ok
// SIG undefined FUN_140b7c96c(void)

longlong FUN_140b7c96c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140b7c9c1;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140b7c9c1:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140b7ca06(param_1,param_2);
  return param_1;
}



// FUNCTION 140b7ca06 FUN_140b7ca06 body=390 status=ok
// SIG undefined FUN_140b7ca06(void)

longlong * FUN_140b7ca06(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140b7cc1c(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1406cd6a8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          FUN_140541a86(lVar9 + lVar4 + 8,lVar9 + lVar3 + 8);
          *(undefined8 *)(lVar4 + 0x38 + lVar9) = *(undefined8 *)(lVar3 + 0x38 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x40;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 140b7cb8c FUN_140b7cb8c body=87 status=ok
// SIG undefined FUN_140b7cb8c(void)

void FUN_140b7cb8c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140b7cbe4(param_1);
  return;
}



// FUNCTION 140b7cbe4 FUN_140b7cbe4 body=55 status=ok
// SIG undefined FUN_140b7cbe4(void)

void FUN_140b7cbe4(longlong *param_1)

{
  FUN_140b7cc1c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140b7cc1c FUN_140b7cc1c body=550 status=ok
// SIG undefined FUN_140b7cc1c(void)

void FUN_140b7cc1c(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140b7cd1b;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x20 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x40 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140b7cd1b;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140b7cd1b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140b7ce44 FUN_140b7ce44 body=209 status=ok
// SIG undefined FUN_140b7ce44(void)

void FUN_140b7ce44(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 140b7cf16 FUN_140b7cf16 body=90 status=ok
// SIG undefined FUN_140b7cf16(void)

undefined8 * FUN_140b7cf16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FUN_140ded312(param_2);
  return param_2;
}



// FUNCTION 140b7cf70 FUN_140b7cf70 body=186 status=ok
// SIG undefined FUN_140b7cf70(void)

undefined8 FUN_140b7cf70(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"nowrite");
  if (cVar1 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"Multiprocess");
    uVar2 = 1;
    if (cVar1 != '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      uVar2 = FUN_14054d46e(&DAT_14c846b20,L"MultiprocessSaveConfig");
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140b7d02a FUN_140b7d02a body=324 status=ok
// SIG undefined FUN_140b7d02a(void)

byte FUN_140b7d02a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  int local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14170a60e();
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
  *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4) = iVar2 + 1;
  uVar7 = (ulonglong)lpCriticalSection[1].LockCount;
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar9 = false;
    do {
      lVar11 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while (((*(int *)((longlong)&(lpCriticalSection[1].DebugInfo)->Type + lVar11) != 0 &&
              (plVar3 = *(longlong **)((longlong)lpCriticalSection[1].DebugInfo + lVar11 + -8),
              plVar3 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2,&local_44), cVar6 != '\0'
             ))) {
        lVar11 = lVar11 + -0x10;
        bVar4 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar9) goto LAB_140b7d151;
          goto LAB_140b7d07b;
        }
      }
      uVar7 = uVar10 - 1;
      bVar9 = true;
    } while (1 < uVar10);
    piVar1 = (int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_140b7d151:
    FUN_14109be94(lpCriticalSection,0);
  }
LAB_140b7d07b:
  LeaveCriticalSection(lpCriticalSection);
  uVar8 = FUN_14054d1d4();
  local_58 = *param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  local_68 = 0;
  bVar5 = FUN_1415d54ec(&local_58,param_1,4,uVar8);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < local_44 | bVar5;
}



// FUNCTION 140b7d170 FUN_140b7d170 body=646 status=ok
// SIG undefined FUN_140b7d170(void)

undefined8 FUN_140b7d170(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 == 0) {
LAB_140b7d213:
    *param_3 = 0x7fffffff;
  }
  else {
    iVar7 = (int)param_2[1];
    iVar3 = *(int *)(lVar2 + 0x10);
    if (iVar7 == iVar3) {
      if (1 < iVar7) {
        lVar8 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*param_2 + lVar8);
          uVar12 = (ulonglong)uVar10;
          uVar13 = *(ushort *)(*(longlong *)(lVar2 + 8) + lVar8);
          if (uVar10 != uVar13) {
            if ((uVar13 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar14 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_140b7d1e0;
            }
            *param_3 = 0x7fffffff;
            if (uVar10 != uVar13) goto LAB_140b7d257;
            goto LAB_140b7d219;
          }
          if (uVar10 == 0) break;
LAB_140b7d1e0:
          lVar8 = lVar8 + 2;
        }
      }
      goto LAB_140b7d213;
    }
    *param_3 = 0x7fffffff;
    if (iVar3 + iVar7 != 1) {
LAB_140b7d257:
      FUN_144a06ecc(&local_78);
      lVar8 = *(longlong *)(param_1 + 0x78);
      plVar1 = (longlong *)(lVar8 + 0x48);
      lVar2 = lVar8 + 0x58;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(lVar8 + 0x70) == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar7 = *(int *)(lVar8 + 0x70);
      }
      uStack_80 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_58;
      uVar6 = local_88;
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (int)uStack_60;
      uStack_8c = uStack_60._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_a0 = plVar1;
      if ((local_88._4_4_ != iVar7) || (uStack_60 != lVar2)) {
        iVar3 = local_88._4_4_;
        do {
          local_88 = uVar6;
          lVar8 = *local_a0;
          FUN_144a06ecc(&local_68,(longlong)iVar3 * 0x20 + lVar8 + 8);
          if ((int)uStack_60 == local_70) {
            bVar15 = true;
            if (1 < (int)uStack_60) {
              lVar9 = 0;
              while( true ) {
                uVar10 = *(ushort *)(local_68 + lVar9);
                uVar4 = (uint)uVar10;
                uVar13 = *(ushort *)(local_78 + lVar9);
                uVar11 = (uint)uVar13;
                if (uVar10 != uVar13) {
                  if ((uVar13 | uVar10) < 0x80) {
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                    uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar13];
                    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar13]) goto LAB_140b7d343;
                  }
                  iVar5 = uVar4 - uVar11;
                  goto LAB_140b7d3d5;
                }
                if (uVar10 == 0) break;
LAB_140b7d343:
                lVar9 = lVar9 + 2;
              }
              iVar5 = 0;
LAB_140b7d3d5:
              bVar15 = iVar5 == 0;
            }
          }
          else {
            bVar15 = local_70 + (int)uStack_60 == 1;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (bVar15) {
            *param_3 = *(undefined4 *)(lVar8 + (longlong)iVar3 * 0x20);
            uVar6 = local_88;
            break;
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          uVar6 = local_88;
          iVar3 = local_88._4_4_;
        } while (local_a0 != plVar1 ||
                 (CONCAT44(uStack_8c,uStack_90) != lVar2 || local_88._4_4_ != iVar7));
      }
      local_88 = uVar6;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      uVar6 = 1;
      goto LAB_140b7d21b;
    }
  }
LAB_140b7d219:
  uVar6 = 0;
LAB_140b7d21b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140b7d3f8 FUN_140b7d3f8 body=33 status=ok
// SIG undefined FUN_140b7d3f8(void)

undefined8 FUN_140b7d3f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b7d41a();
  FUN_140056680(param_1,uVar1);
  return param_1;
}



// FUNCTION 140b7d41a FUN_140b7d41a body=194 status=ok
// SIG undefined FUN_140b7d41a(void)

undefined2 * FUN_140b7d41a(void)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c83e748) && (FUN_144b3d300(), DAT_14c83e748 == -1)) {
    puVar2 = (undefined8 *)FUN_14047ac8c();
    DAT_14c83e738 = (undefined2 *)0x0;
    FUN_14125bce8(&DAT_14c83e738,*puVar2,*(int *)(puVar2 + 1),0,(*(int *)(puVar2 + 1) == 0) + '\b');
    FUN_1401aebe8(&DAT_14c83e738,L"Config/",7);
    atexit((_func_5014 *)&LAB_14274d7bb);
    _Init_thread_footer(&DAT_14c83e748);
  }
  puVar1 = DAT_14c83e738;
  if (DAT_14c83e740 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  return puVar1;
}



// FUNCTION 140b7d4dc FUN_140b7d4dc body=8840 status=ok
// SIG undefined FUN_140b7d4dc(void)

void FUN_140b7d4dc(longlong *param_1,longlong *param_2,char param_3,undefined4 param_4,
                  longlong *param_5,longlong param_6)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  void *pvVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  ushort uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint *puVar31;
  longlong lVar32;
  int iVar33;
  code *pcVar34;
  bool bVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  longlong **local_290;
  char local_286;
  byte local_285;
  uint local_284;
  longlong *local_280;
  int local_274;
  longlong *local_270;
  uint *local_268;
  uint local_260;
  int local_25c;
  longlong *local_258;
  longlong local_250;
  longlong local_248;
  ulonglong local_240;
  undefined4 local_238;
  uint local_234;
  ulonglong local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  uint *local_210;
  longlong *local_208;
  undefined4 local_1fc;
  ulonglong local_1f8;
  longlong *local_1f0;
  uint *local_1e8;
  ulonglong local_1e0;
  longlong **local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong *local_190;
  longlong *local_188;
  longlong **local_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined2 *local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong *plStack_130;
  ulonglong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f8;
  int local_f0;
  undefined8 local_ec;
  int local_e4;
  longlong local_d8;
  int local_d0;
  longlong **local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar27 = 0;
  local_284 = (int)param_2[1] - 1;
  if ((int)param_2[1] == 0) {
    local_284 = 0;
  }
  local_268 = (uint *)(param_1 + 2);
  iVar33 = (int)param_1[5];
  if (iVar33 == 0) {
    uVar13 = 1;
    uVar8 = 0;
    iVar19 = 0;
    iVar16 = 0;
  }
  else {
    puVar31 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar31 = local_268;
    }
    uVar30 = *puVar31;
    if (uVar30 == 0) {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      iVar26 = 0;
      uVar13 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar13 = 0;
      }
      uVar8 = 0;
      iVar16 = 0;
      do {
        if (uVar13 == uVar8) {
          uVar27 = 0;
          goto LAB_140b7d684;
        }
        iVar16 = iVar16 + 0x20;
        uVar30 = puVar31[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar8 = 0;
      iVar16 = 0;
    }
    uVar13 = (ulonglong)(-uVar30 & uVar30);
    uVar23 = uVar13 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar19 = (iVar16 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar19) {
      iVar19 = iVar33;
    }
  }
  iVar26 = 0;
  if (iVar19 < iVar33) {
    puVar31 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar31 = local_268;
    }
    iVar22 = iVar33 + 0x1e;
    if (-1 < iVar33 + -1) {
      iVar22 = iVar33 + -1;
    }
    iVar22 = iVar22 >> 5;
    uVar30 = 0xffffffff;
    iVar26 = 0;
    uVar27 = 0;
    do {
      uVar20 = *(int *)(*param_1 + 0x18 + (longlong)iVar19 * 0xc0) -
               *(int *)(*param_1 + 0x44 + (longlong)iVar19 * 0xc0);
      if ((int)uVar27 < (int)uVar20) {
        uVar27 = uVar20;
      }
      iVar26 = iVar26 + uVar20 * 0x5a + 0x5a;
      uVar30 = ~(uint)uVar13 & uVar30;
      iVar19 = (int)uVar8;
      lVar32 = (longlong)iVar19;
      uVar20 = puVar31[lVar32] & uVar30;
      if (uVar20 == 0) {
        iVar17 = iVar22;
        if (iVar22 < iVar19) {
          iVar17 = iVar19;
        }
        if (iVar22 <= iVar19) break;
        lVar18 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar20 = puVar31[lVar32 + lVar18 + 1];
          if (uVar20 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar17 - lVar32 == lVar18) goto LAB_140b7d684;
        }
        uVar8 = (ulonglong)(iVar19 + (int)lVar18 + 1);
        uVar30 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar20 & uVar20);
      uVar23 = uVar13 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar19 = (iVar16 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar33);
  }
LAB_140b7d684:
  iVar33 = 0x8000000;
  if (iVar26 < 0x8000000) {
    iVar33 = iVar26;
  }
  iVar19 = iVar33 + local_284;
  local_286 = param_3;
  local_280 = param_2;
  local_1fc = param_4;
  if ((iVar19 != 0 && SCARRY4(iVar33,local_284) == iVar19 < 0) &&
     (*(int *)((longlong)param_2 + 0xc) <= iVar19)) {
    FUN_1446f8c06(param_2,iVar19 + 1);
  }
  local_148 = 0;
  uStack_140 = 0;
  iVar33 = *(int *)(param_6 + 8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  lVar32 = param_1[1];
  iVar19 = *(int *)((longlong)param_1 + 0x34);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  iVar33 = ((int)lVar32 - iVar19) + iVar33;
  if (iVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar33);
  }
  if (iVar33 != 0) {
    FUN_1408be2c4(&local_148,iVar33);
  }
  FUN_140b7fa3a(&local_148);
  iVar33 = *(int *)(param_6 + 8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  lVar32 = ((longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34)) +
           (longlong)iVar33;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  puVar31 = local_268;
  uVar30 = (uint)lVar32;
  if ((uint)((int)param_5[1] - *(int *)((longlong)param_5 + 0x34)) < uVar30) {
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(lVar32);
    }
    FUN_140b80270(param_5);
    iVar33 = 1;
    if (3 < uVar30) {
      uVar30 = (uVar30 | 1) + 0xe;
      iVar33 = 0x1f;
      if (uVar30 != 0) {
        for (; uVar30 >> iVar33 == 0; iVar33 = iVar33 + -1) {
        }
      }
      iVar33 = 1 << ((byte)iVar33 & 0x1f);
    }
    if (((int)param_5[9] == 0) || ((int)param_5[9] < iVar33)) {
      *(int *)(param_5 + 9) = iVar33;
      FUN_140b7fdd8(param_5);
    }
  }
  local_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  local_168 = (undefined2 *)0x0;
  uStack_160 = 0;
  uVar8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  if (uVar27 != 0) {
    FUN_144732142(&local_b8);
    uVar8 = 1;
    if (3 < uVar27) {
      uVar27 = (uVar27 | 1) + 0xe;
      iVar33 = 0x1f;
      if (uVar27 != 0) {
        for (; uVar27 >> iVar33 == 0; iVar33 = iVar33 + -1) {
        }
      }
      uVar8 = (ulonglong)(uint)(1 << ((byte)iVar33 & 0x1f));
    }
    if ((local_70 == 0) || (local_70 < (int)uVar8)) {
      local_70 = (int)uVar8;
      uVar8 = FUN_144869b4a();
    }
  }
  local_228 = param_1;
  if ((local_286 == '\0') && ((*(byte *)(param_1 + 10) & 0x10) == 0)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    uVar8 = 0;
    iVar33 = DAT_14c866bf8 + -1;
    if (DAT_14c866bf8 == 0) {
      iVar33 = 0;
    }
    if (0 < iVar33) {
      puVar4 = DAT_14c866bf0;
      if (DAT_14c866bf8 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      lVar32 = 0;
      uVar8 = 0;
      do {
        uVar27 = ((uint)(0x19 < (ushort)puVar4[lVar32] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar32]
                 ) - 0x20;
        uVar30 = (uint)(uVar8 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar27) & 0xff) * 4);
        uVar8 = (ulonglong)
                (uVar30 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
        lVar32 = lVar32 + 1;
      } while (iVar33 != (int)lVar32);
    }
    iVar33 = FUN_14052bbf0(param_1,uVar8,&DAT_14c866bf0);
    if (iVar33 == -1) {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      uVar8 = extraout_RAX_00;
    }
    else {
      lVar18 = *param_1;
      lVar32 = lVar18 + (longlong)iVar33 * 0xc0;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      uVar8 = extraout_RAX;
      if (lVar32 != 0) {
        plVar25 = (longlong *)(lVar18 + (longlong)iVar33 * 0xc0 + 0x10);
        local_178 = (longlong *)0x0;
        uStack_170 = 0;
        if (plVar25 == (longlong *)0x0) {
          local_238 = (undefined4)CONCAT71((int7)(extraout_RAX >> 8),1);
          param_2 = local_280;
          puVar31 = local_268;
        }
        else {
          local_c8 = (longlong **)0x0;
          local_c0 = 0xa00000000;
          local_1d8 = (longlong **)0x149e27840;
          uStack_1d0 = CONCAT35(uStack_1d0._5_3_,7);
          uVar27 = FUN_14001a6c0(&local_1d8,1);
          if (*(int *)(lVar32 + 0x58) != 0) {
            lVar18 = lVar32 + 0x48;
            if (*(longlong *)(lVar32 + 0x50) != 0) {
              lVar18 = *(longlong *)(lVar32 + 0x50);
            }
            iVar33 = *(int *)(lVar18 + (longlong)
                                       (int)(*(int *)(lVar32 + 0x58) - 1U &
                                            (uVar27 << 0x10 | uVar27 & 0xffff) +
                                            ((uVar27 & 0xffff) >> 4) +
                                            ((uVar27 >> 0x10) << 0x13 | uVar27 >> 0x10)) * 4);
            while (iVar19 = iVar33, iVar19 != -1) {
              lVar32 = *plVar25;
              iVar33 = *(int *)(lVar32 + 0x38 + (longlong)iVar19 * 0x40);
              if (*(ulonglong *)(lVar32 + (longlong)iVar19 * 0x40) == (ulonglong)uVar27) {
                do {
                  uVar8 = local_c0;
                  lVar18 = (longlong)(int)local_c0;
                  uVar30 = (int)local_c0 + 1;
                  local_c0 = CONCAT44(local_c0._4_4_,uVar30);
                  if (local_c0._4_4_ < uVar30) {
                    FUN_14680a940(&local_118,uVar8 & 0xffffffff);
                  }
                  pplVar7 = local_c8;
                  if (local_c8 == (longlong **)0x0) {
                    pplVar7 = &local_118;
                  }
                  pplVar7[lVar18] = (longlong *)((longlong)iVar19 * 0x40 + lVar32 + 8);
                  do {
                    iVar19 = iVar33;
                    if (iVar19 == -1) goto LAB_140b7f004;
                    lVar32 = *plVar25;
                    iVar33 = *(int *)(lVar32 + 0x38 + (longlong)iVar19 * 0x40);
                  } while (*(ulonglong *)(lVar32 + (longlong)iVar19 * 0x40) != (ulonglong)uVar27);
                } while( true );
              }
            }
          }
LAB_140b7f004:
          if ((int)local_c0 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_c0 & 0xffffffff);
          }
          if ((int)uStack_170._4_4_ < (int)local_c0) {
            FUN_1408be2c4(&local_178);
          }
          pplVar7 = &local_118;
          if (local_c8 != (longlong **)0x0) {
            pplVar7 = local_c8;
          }
          if ((int)local_c0 != 0) {
            lVar18 = (longlong)(int)local_c0;
            lVar32 = 0;
            do {
              lVar5 = *(longlong *)((longlong)pplVar7 + lVar32);
              iVar33 = *(int *)(lVar5 + 0x20);
              lVar24 = (longlong)(int)uStack_170;
              uVar27 = (int)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,uVar27);
              if (uStack_170._4_4_ < uVar27) {
                FUN_1447a1bd6(&local_178);
              }
              uVar8 = (ulonglong)(iVar33 - 2U < 0x7fffffff) << 4 | 8;
              plVar25 = local_178 + lVar24 * 2;
              local_178[lVar24 * 2] = 0;
              iVar33 = *(int *)(lVar5 + 8 + uVar8);
              pvVar14 = *(void **)(lVar5 + uVar8);
              *(int *)(local_178 + lVar24 * 2 + 1) = iVar33;
              if ((longlong)iVar33 == 0) {
                *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(plVar25,iVar33,0);
                memcpy((void *)*plVar25,pvVar14,(longlong)iVar33 * 2);
              }
              lVar32 = lVar32 + 8;
            } while (lVar18 * 8 != lVar32);
          }
          puVar31 = local_268;
          param_2 = local_280;
          if (local_c8 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          local_238 = 0;
          param_1 = local_228;
        }
        goto LAB_140b7d852;
      }
    }
  }
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  local_238 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
LAB_140b7d852:
  iVar33 = (int)param_1[5];
  if (iVar33 == 0) {
    uVar13 = 1;
    uVar8 = 0;
    iVar16 = 0;
    iVar19 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar31;
    }
    uVar27 = *puVar10;
    if (uVar27 == 0) {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      uVar8 = 0;
      uVar13 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar13 = uVar8;
      }
      iVar19 = 0;
      do {
        if (uVar13 == uVar8) {
          local_240 = 0;
          goto LAB_140b7e96c;
        }
        iVar19 = iVar19 + 0x20;
        uVar27 = puVar10[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar8 = 0;
      iVar19 = 0;
    }
    uVar13 = (ulonglong)(-uVar27 & uVar27);
    uVar23 = uVar13 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar16 = (iVar19 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar16) {
      iVar16 = iVar33;
    }
  }
  local_240 = 0;
  if (iVar16 < iVar33) {
    local_240 = 0;
    pcVar34 = AcquireSRWLockShared_exref;
    uVar27 = 0xffffffff;
    do {
      local_260 = uVar27;
      local_25c = iVar19;
      local_248 = *param_1;
      local_250 = (longlong)iVar16 * 0xc0;
      plVar25 = (longlong *)(local_248 + local_250);
      if ((char)local_238 == '\0') {
        if ((longlong)(int)uStack_170 != 0) {
          iVar33 = (int)plVar25[1];
          plVar9 = local_178;
LAB_140b7d9f5:
          if ((int)plVar9[1] == iVar33) {
            if (1 < iVar33) {
              lVar32 = 0;
              do {
                uVar15 = *(ushort *)(*plVar9 + lVar32);
                uVar28 = *(ushort *)(*plVar25 + lVar32);
                if (uVar15 == uVar28) {
                  if (uVar15 == 0) break;
                }
                else {
                  pcVar34 = AcquireSRWLockShared_exref;
                  if (0x7f < (uVar28 | uVar15)) {
                    iVar19 = (uint)uVar15 - (uint)uVar28;
                    goto LAB_140b7f137;
                  }
                  if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[(uint)uVar28])
                  goto LAB_140b7f134;
                }
                lVar32 = lVar32 + 2;
              } while( true );
            }
          }
          else if ((int)plVar9[1] + iVar33 != 1) goto LAB_140b7da0f;
          goto LAB_140b7dadb;
        }
      }
      else {
LAB_140b7dadb:
        lVar32 = param_1[0xf];
        local_270 = plVar25;
        if (lVar32 == 0) {
LAB_140b7f1cc:
          local_258 = (longlong *)0x0;
          lVar32 = local_250;
          lVar18 = local_248;
        }
        else {
          (*pcVar34)(&DAT_14c866fe8);
          iVar33 = *(int *)(lVar32 + 0x2b8);
          iVar19 = *(int *)(lVar32 + 0x2e4);
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
          if (iVar33 <= iVar19) goto LAB_140b7f1cc;
          lVar5 = param_1[0xf];
          (*pcVar34)(&DAT_14c866fe8);
          plVar9 = local_270;
          iVar33 = (int)plVar25[1];
          uVar23 = 0;
          iVar19 = iVar33 + -1;
          if (iVar33 == 0) {
            iVar19 = 0;
          }
          if (0 < iVar19) {
            puVar4 = &DAT_149dfb77a;
            if (iVar33 != 0) {
              puVar4 = (undefined2 *)*local_270;
            }
            lVar32 = 0;
            uVar23 = 0;
            do {
              uVar27 = ((uint)(0x19 < (ushort)puVar4[lVar32] - 0x61) * 0x20 +
                       (uint)(ushort)puVar4[lVar32]) - 0x20;
              uVar30 = (uint)(uVar23 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar23 ^ uVar27) & 0xff) * 4);
              uVar23 = (ulonglong)
                       (uVar30 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar30 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
              lVar32 = lVar32 + 1;
            } while (iVar19 != (int)lVar32);
          }
          iVar33 = FUN_14052bbf0((longlong *)(lVar5 + 0x2b0),uVar23,local_270);
          lVar18 = local_248;
          lVar32 = local_250;
          if (iVar33 == -1) {
            lVar5 = 0;
          }
          else {
            lVar5 = (longlong)iVar33 * 0xc0 + *(longlong *)(lVar5 + 0x2b0);
          }
          local_258 = (longlong *)(lVar5 + 0x10);
          if (lVar5 == 0) {
            local_258 = (longlong *)0x0;
          }
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
          plVar25 = plVar9;
        }
        plVar9 = local_280;
        iVar33 = (int)local_280[1];
        uVar27 = iVar33 - 1;
        if (iVar33 == 0) {
          uVar27 = 0;
        }
        uVar30 = uVar27;
        if ((int)local_284 < (int)uVar27) {
          uVar30 = local_284;
        }
        if ((int)uVar30 < 1) {
          uVar30 = 0;
        }
        uVar27 = uVar27 - uVar30;
        if (0 < (int)uVar27) {
          iVar19 = iVar33 - (uVar27 + uVar30);
          if (iVar19 != 0) {
            pvVar14 = (void *)((ulonglong)uVar30 * 2 + *local_280);
            memmove(pvVar14,(void *)((longlong)pvVar14 + (ulonglong)uVar27 * 2),(longlong)iVar19 * 2
                   );
            iVar33 = (int)plVar9[1];
          }
          *(uint *)(plVar9 + 1) = iVar33 - uVar27;
        }
        FUN_1449ad616();
        puVar31 = (uint *)(lVar18 + lVar32 + 0x20);
        iVar33 = *(int *)(lVar18 + lVar32 + 0x38);
        if (iVar33 == 0) {
          uVar21 = 1;
          uVar23 = 0;
          iVar19 = 0;
          local_274 = 0;
        }
        else {
          puVar10 = *(uint **)(lVar18 + 0x30 + lVar32);
          if (puVar10 == (uint *)0x0) {
            puVar10 = puVar31;
          }
          uVar27 = *puVar10;
          if (uVar27 == 0) {
            iVar19 = iVar33 + 0x1e;
            if (-1 < iVar33 + -1) {
              iVar19 = iVar33 + -1;
            }
            uVar23 = 0;
            uVar21 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar21 = uVar23;
            }
            local_274 = 0;
            do {
              if (uVar21 == uVar23) goto LAB_140b7e48b;
              local_274 = local_274 + 0x20;
              uVar27 = puVar10[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar27 == 0);
          }
          else {
            uVar23 = 0;
            local_274 = 0;
          }
          uVar21 = (ulonglong)(-uVar27 & uVar27);
          uVar29 = uVar21 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          iVar19 = (local_274 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if (iVar33 <= iVar19) {
            iVar19 = iVar33;
          }
        }
        if (iVar19 < iVar33) {
          local_218 = (longlong *)(local_248 + local_250 + 0x10);
          local_1f0 = local_258 + 7;
          local_234 = 0xffffffff;
          local_230 = uVar13;
          local_1f8 = uVar8;
          local_1e8 = puVar31;
          do {
            plVar9 = local_270;
            lVar18 = (longlong)iVar19 * 0x40;
            local_138 = *(longlong *)(*local_218 + lVar18);
            lVar32 = *local_218;
            local_1e0 = uVar23;
            if ((int)uStack_b0 != local_84) {
              uVar27 = (uint)((ulonglong)local_138 >> 0x10);
              uVar30 = (uint)local_138 & 0xffff;
              puVar11 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar11 = local_80;
              }
              for (iVar33 = *(int *)(puVar11 +
                                    (ulonglong)
                                    (local_70 - 1U &
                                    (int)((ulonglong)local_138 >> 0x20) +
                                    ((uint)local_138 << 0x10 | uVar30) +
                                    (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar30 >> 4)) * 4);
                  iVar33 != -1; iVar33 = *(int *)((longlong)iVar33 * 0x10 + local_b8 + 8)) {
                if (*(longlong *)(local_b8 + (longlong)iVar33 * 0x10) == local_138)
                goto LAB_140b7e13d;
                plVar25 = local_270;
                param_1 = local_228;
              }
            }
            local_220 = (longlong *)(lVar32 + lVar18 + 0x10);
            uVar8 = 0;
            if (param_1[0xf] != 0) {
              iVar33 = (int)plVar25[1];
              iVar19 = iVar33 + -1;
              if (iVar33 == 0) {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                puVar4 = &DAT_149dfb77a;
                if (iVar33 != 0) {
                  puVar4 = (undefined2 *)*local_270;
                }
                lVar5 = 0;
                uVar8 = 0;
                do {
                  uVar27 = ((uint)(0x19 < (ushort)puVar4[lVar5] - 0x61) * 0x20 +
                           (uint)(ushort)puVar4[lVar5]) - 0x20;
                  uVar30 = (uint)(uVar8 >> 8) ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar27) & 0xff) * 4
                                    );
                  uVar8 = (ulonglong)
                          (uVar30 >> 8 ^
                          *(uint *)(&DAT_14c75d150 +
                                   (ulonglong)(uVar30 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
                  lVar5 = lVar5 + 1;
                } while (iVar19 != (int)lVar5);
              }
              plVar25 = (longlong *)(param_1[0xf] + 0x388);
              iVar33 = FUN_140b7f766(plVar25,uVar8);
              if (iVar33 == -1) {
                uVar8 = 0;
                plVar25 = plVar9;
              }
              else {
                lVar5 = (longlong)iVar33 * 0xb8 + *plVar25;
                lVar24 = lVar5 + 0x10;
                if (lVar24 == 0 || lVar5 == 0) {
                  uVar8 = 0;
                  plVar25 = local_270;
                  uVar13 = local_230;
                }
                else {
                  local_298 = (longlong *)CONCAT71(local_298._1_7_,7);
                  FUN_140de70ba(&local_118,0,0,local_220);
                  lVar5 = FUN_144a1cd4a(lVar24,local_138);
                  uVar8 = (ulonglong)(lVar5 != 0);
                  if (local_100 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  plVar25 = local_270;
                  uVar13 = local_230;
                  if (uStack_110 != (longlong **)0x0) {
                    FUN_1400020a8();
                    plVar25 = local_270;
                    uVar13 = local_230;
                  }
                }
              }
            }
            plVar9 = local_258;
            iVar33 = (int)plVar25[1];
            if (iVar33 == DAT_14c866be0) {
              if (1 < iVar33) {
                lVar5 = 0;
                while( true ) {
                  uVar15 = *(ushort *)(*plVar25 + lVar5);
                  uVar23 = (ulonglong)uVar15;
                  uVar28 = *(ushort *)(DAT_14c866bd8 + lVar5);
                  if (uVar15 != uVar28) break;
                  if (uVar15 == 0) goto LAB_140b7e4f8;
LAB_140b7e070:
                  lVar5 = lVar5 + 2;
                }
                if ((uVar28 | uVar15) < 0x80) {
                  uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                  uVar29 = (ulonglong)uVar28;
                  uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar29];
                  if ((&DAT_149e05da0)[uVar23] == (&DAT_149e05da0)[uVar29]) goto LAB_140b7e070;
                }
                if (uVar15 != uVar28) goto LAB_140b7de7e;
              }
LAB_140b7e4f8:
              bVar35 = local_138 == DAT_14c866be8;
            }
            else {
              if (DAT_14c866be0 + iVar33 == 1) goto LAB_140b7e4f8;
LAB_140b7de7e:
              bVar35 = false;
            }
            if ((bVar35) || (local_286 != '\0')) {
              if ((char)uVar8 == '\0') goto LAB_140b7e21b;
            }
            else {
              if (local_258 != (longlong *)0x0) {
                lVar5 = (longlong)*(int *)(lVar32 + 0x18 + lVar18);
                if (lVar5 < 2) {
                  bVar2 = 1;
                }
                else {
                  bVar2 = FUN_140b7f836(*local_220,*local_220 + lVar5 * 2 + -2);
                  bVar2 = bVar2 ^ 1;
                }
                lVar5 = local_138;
                if ((int)plVar9[9] != 0) {
                  puVar31 = (uint *)(lVar32 + lVar18 + 0x18);
                  uVar27 = (uint)((ulonglong)local_138 >> 0x10);
                  uVar30 = (uint)local_138 & 0xffff;
                  plVar25 = (longlong *)plVar9[8];
                  if ((longlong *)plVar9[8] == (longlong *)0x0) {
                    plVar25 = local_1f0;
                  }
                  iVar33 = *(int *)((longlong)plVar25 +
                                   (longlong)
                                   (int)((int)plVar9[9] - 1U &
                                        ((uint)local_138 << 0x10 | uVar30) +
                                        (int)((ulonglong)local_138 >> 0x20) +
                                        (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar30 >> 4)) * 4);
                  do {
                    iVar19 = iVar33;
                    if (iVar19 == -1) goto LAB_140b7e132;
                    lVar32 = *plVar9;
                    iVar33 = *(int *)(lVar32 + 0x38 + (longlong)iVar19 * 0x40);
                  } while (*(longlong *)(lVar32 + (longlong)iVar19 * 0x40) != local_138);
LAB_140b7df4e:
                  lVar18 = lVar32 + (longlong)iVar19 * 0x40;
                  plVar25 = (longlong *)(lVar18 + 0x10);
                  uVar27 = *(uint *)(lVar18 + 0x18);
                  bVar35 = false;
                  iVar16 = uVar27 - 1;
                  if (uVar27 == 0) {
                    iVar16 = 0;
                  }
                  uVar30 = *puVar31;
                  iVar26 = uVar30 - 1;
                  if (uVar30 == 0) {
                    iVar26 = 0;
                  }
                  if (iVar16 != iVar26) goto LAB_140b7e01c;
                  if (uVar27 != uVar30) {
                    bVar35 = uVar30 + uVar27 == 1;
                    goto LAB_140b7e01c;
                  }
                  if (1 < (int)uVar27) {
                    lVar18 = 0;
                    do {
                      uVar15 = *(ushort *)(*plVar25 + lVar18);
                      uVar28 = *(ushort *)(*local_220 + lVar18);
                      if (uVar15 == uVar28) {
                        if (uVar15 == 0) goto LAB_140b7e00d;
                      }
                      else {
                        uVar13 = local_230;
                        if (0x7f < (uVar28 | uVar15)) {
                          iVar16 = (uint)uVar15 - (uint)uVar28;
                          goto LAB_140b7e00f;
                        }
                        if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[(uint)uVar28]) {
                          iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar15] -
                                   (uint)(byte)(&DAT_149e05da0)[(uint)uVar28];
                          goto LAB_140b7e00f;
                        }
                      }
                      lVar18 = lVar18 + 2;
                    } while( true );
                  }
                  bVar35 = true;
                  goto LAB_140b7e02b;
                }
              }
LAB_140b7e132:
              bVar35 = false;
LAB_140b7e134:
              if ((char)uVar8 == '\0' && !bVar35) {
LAB_140b7e21b:
                lVar18 = local_248;
                lVar32 = local_250;
                uVar27 = (int)local_280[1] - 1;
                if ((int)local_280[1] == 0) {
                  uVar27 = 0;
                }
                if (uVar27 == local_284) {
                  puVar4 = &DAT_149dfb77a;
                  if ((int)local_270[1] != 0) {
                    puVar4 = (undefined2 *)*local_270;
                  }
                  lVar5 = local_248 + local_250;
                  lVar24 = lVar5 + 0x70;
                  FUN_1407c8b48(local_280,L"[%s]\r\n",puVar4);
                  local_1d8 = (longlong **)0x100000000;
                  local_1c8 = (longlong *)&DAT_ffffffff;
                  local_1c0 = local_1c0 & 0xffffffff00000000;
                  uStack_1d0 = lVar24;
                  if (*(int *)(lVar5 + 0x88) != 0) {
                    FUN_1449c0562(&local_1d8);
                  }
                  local_118 = (longlong *)(lVar18 + lVar32 + 0x60);
                  uStack_110 = local_1d8;
                  local_108 = uStack_1d0;
                  local_100 = local_1c8;
                  plVar25 = local_100;
                  local_f8 = local_1c0;
                  local_100._4_4_ = (int)((ulonglong)local_1c8 >> 0x20);
                  bVar35 = local_100._4_4_ < *(int *)(uStack_1d0 + 0x18);
                  iVar33 = local_100._4_4_;
                  local_100 = local_1c8;
                  if (bVar35) {
                    do {
                      lVar32 = *local_118;
                      lVar18 = (longlong)iVar33 * 0x20;
                      puVar4 = &DAT_149dfb77a;
                      if (*(int *)(lVar32 + 0x10 + lVar18) != 0) {
                        puVar4 = *(undefined2 **)(lVar32 + lVar18 + 8);
                      }
                      FUN_1400021e4(lVar32 + lVar18,&local_1d8);
                      pplVar7 = (longlong **)&DAT_149dfb77a;
                      if ((int)uStack_1d0 != 0) {
                        pplVar7 = local_1d8;
                      }
                      FUN_1407c8b48(local_280,L"@%s=%s\r\n",pplVar7,puVar4);
                      if (local_1d8 != (longlong **)0x0) {
                        FUN_1400020a8();
                      }
                      local_100 = (longlong *)
                                  CONCAT44(local_100._4_4_,(uint)local_100 & ~uStack_110._4_4_);
                      FUN_1449c0562(&uStack_110);
                      uVar13 = local_230;
                      iVar33 = local_100._4_4_;
                    } while (local_100._4_4_ < *(int *)(local_108 + 0x18));
                  }
                }
                bVar35 = (longlong)uStack_150 < 0;
                uStack_150 = uStack_150 & 0xffffffff00000000;
                if (bVar35) {
                  FUN_14680aa34(&local_158);
                }
                lVar32 = local_138;
                iVar33 = *(int *)(local_248 + 0x58 + local_250);
                if (iVar33 != 0) {
                  uVar27 = (uint)((ulonglong)local_138 >> 0x10);
                  uVar30 = (uint)local_138 & 0xffff;
                  lVar18 = *(longlong *)(local_248 + local_250 + 0x50);
                  if (lVar18 == 0) {
                    lVar18 = local_248 + local_250 + 0x48;
                  }
                  iVar33 = *(int *)(lVar18 + (longlong)
                                             (int)(iVar33 - 1U &
                                                  ((uint)local_138 << 0x10 | uVar30) +
                                                  (int)((ulonglong)local_138 >> 0x20) +
                                                  (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar30 >> 4)
                                                  ) * 4);
                  while (iVar19 = iVar33, iVar19 != -1) {
                    lVar18 = *local_218;
                    iVar33 = *(int *)(lVar18 + 0x38 + (longlong)iVar19 * 0x40);
                    if (*(longlong *)(lVar18 + (longlong)iVar19 * 0x40) == local_138) {
                      do {
                        uVar8 = uStack_150;
                        lVar5 = (longlong)(int)(uint)uStack_150;
                        uVar27 = (uint)uStack_150 + 1;
                        uStack_150 = CONCAT44(uStack_150._4_4_,uVar27);
                        if (uStack_150._4_4_ < uVar27) {
                          FUN_140b8062e(&local_158,uVar8 & 0xffffffff);
                        }
                        local_158[lVar5] = (longlong)iVar19 * 0x40 + lVar18 + 8;
                        do {
                          iVar19 = iVar33;
                          if (iVar19 == -1) goto LAB_140b7e359;
                          lVar18 = *local_218;
                          iVar33 = *(int *)(lVar18 + 0x38 + (longlong)iVar19 * 0x40);
                        } while (*(longlong *)(lVar18 + (longlong)iVar19 * 0x40) != lVar32);
                      } while( true );
                    }
                  }
                }
LAB_140b7e359:
                lVar32 = (longlong)(int)(uint)uStack_150;
                if (1 < lVar32) {
                  lVar18 = 0;
                  puVar6 = local_158;
                  do {
                    uVar1 = *puVar6;
                    *puVar6 = local_158[lVar32 + lVar18 + -1];
                    local_158[lVar32 + lVar18 + -1] = uVar1;
                    lVar18 = lVar18 + -1;
                    puVar6 = puVar6 + 1;
                  } while (-lVar18 != (ulonglong)((uint)uStack_150 >> 1));
                }
                if (local_286 == '\0') {
                  uVar27 = uStack_160._4_4_;
                  uStack_160 = (ulonglong)uStack_160._4_4_ << 0x20;
                  if ((int)uVar27 < 0x40c) {
                    FUN_1446f8c06(&local_168,0x40c);
                  }
                  if (local_168 != (undefined2 *)0x0) {
                    *local_168 = 0;
                  }
                  FUN_140180cec(&local_138,&local_168);
                  puVar6 = local_158;
                  lVar32 = (longlong)(int)(uint)uStack_150;
                  if (lVar32 != 0) {
                    lVar18 = 0;
                    do {
                      FUN_140b7fba4(local_280,&local_168,
                                    *(longlong *)((longlong)puVar6 + lVar18) + 8);
                      lVar18 = lVar18 + 8;
                    } while (lVar32 * 8 != lVar18);
                  }
                }
                else {
                  FUN_1400021e4(&local_138,&local_118);
                  local_298 = local_270;
                  local_290 = &local_118;
                  FUN_146802da0(local_228,local_1fc,&local_158,local_280);
                  uVar13 = local_230;
                  if (local_118 != (longlong *)0x0) {
                    FUN_1400020a8();
                    uVar13 = local_230;
                  }
                }
                FUN_144a13f80(&local_b8,&local_118,&local_138,0);
              }
            }
LAB_140b7e13d:
            uVar27 = local_234 & ~(uint)uVar21;
            puVar31 = (uint *)local_218[4];
            if ((uint *)local_218[4] == (uint *)0x0) {
              puVar31 = local_1e8;
            }
            iVar33 = (int)local_218[5];
            iVar19 = (int)local_1e0;
            lVar32 = (longlong)iVar19;
            uVar30 = puVar31[lVar32] & uVar27;
            uVar23 = local_1e0;
            plVar25 = local_270;
            uVar8 = local_1f8;
            param_1 = local_228;
            if (uVar30 == 0) {
              iVar16 = iVar33 + 0x1e;
              if (-1 < iVar33 + -1) {
                iVar16 = iVar33 + -1;
              }
              iVar16 = iVar16 >> 5;
              iVar26 = iVar16;
              if (iVar16 < iVar19) {
                iVar26 = iVar19;
              }
              if (iVar16 <= iVar19) break;
              local_274 = local_274 + 0x20;
              lVar18 = 0;
              while (uVar30 = puVar31[lVar32 + lVar18 + 1], uVar30 == 0) {
                local_274 = local_274 + 0x20;
                lVar18 = lVar18 + 1;
                if (iVar26 - lVar32 == lVar18) goto LAB_140b7e48b;
              }
              local_234 = 0xffffffff;
              uVar23 = (ulonglong)(iVar19 + (int)lVar18 + 1);
              uVar27 = local_234;
            }
            local_234 = uVar27;
            uVar21 = (ulonglong)(-uVar30 & uVar30);
            uVar29 = uVar21 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            iVar19 = (local_274 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          } while (iVar19 < iVar33);
        }
LAB_140b7e48b:
        puVar31 = local_268;
        param_2 = local_280;
        pcVar34 = AcquireSRWLockShared_exref;
        iVar33 = (int)local_280[1];
        iVar19 = iVar33 + -1;
        if (iVar33 == 0) {
          iVar19 = 0;
        }
        if ((int)local_284 < iVar19) {
          uVar27 = 0;
          uVar23 = 0;
          if (0 < (int)local_284) {
            uVar23 = (ulonglong)local_284;
          }
          puVar4 = &DAT_149dfb77a;
          if (iVar33 != 0) {
            puVar4 = (undefined2 *)*local_280;
          }
          FUN_14006620a(&local_118,puVar4 + uVar23,iVar19 - (int)uVar23);
          plVar9 = local_270;
          iVar33 = (int)plVar25[1];
          iVar19 = iVar33 + -1;
          if (iVar33 == 0) {
            iVar19 = 0;
          }
          if (0 < iVar19) {
            puVar4 = &DAT_149dfb77a;
            if (iVar33 != 0) {
              puVar4 = (undefined2 *)*local_270;
            }
            lVar32 = 0;
            uVar27 = 0;
            do {
              uVar30 = ((uint)(0x19 < (ushort)puVar4[lVar32] - 0x61) * 0x20 +
                       (uint)(ushort)puVar4[lVar32]) - 0x20;
              uVar27 = uVar27 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar27 ^ uVar30) & 0xff) * 4);
              uVar27 = uVar27 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar27 & 0xff ^ uVar30 >> 8 & 0xff) * 4);
              lVar32 = lVar32 + 1;
            } while (iVar19 != (int)lVar32);
          }
          pplVar7 = (longlong **)FUN_140b80422(param_5,uVar27,local_270);
          pcVar34 = AcquireSRWLockShared_exref;
          if (pplVar7 == &local_118) {
            if (local_118 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*pplVar7 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            *pplVar7 = local_118;
            local_118 = (longlong *)0x0;
            *(int *)(pplVar7 + 1) = (int)uStack_110;
            *(uint *)((longlong)pplVar7 + 0xc) = uStack_110._4_4_;
            pcVar34 = AcquireSRWLockShared_exref;
          }
          uVar23 = uStack_140;
          lVar32 = (longlong)(int)uStack_140;
          uVar27 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar27);
          if (uStack_140._4_4_ < uVar27) {
            FUN_1447a1bd6(&local_148,uVar23 & 0xffffffff);
          }
          lVar32 = lVar32 * 0x10;
          puVar6 = (undefined8 *)(local_148 + lVar32);
          *(undefined8 *)(local_148 + lVar32) = 0;
          iVar33 = (int)plVar9[1];
          pvVar14 = (void *)*plVar9;
          *(int *)(local_148 + 8 + lVar32) = iVar33;
          if ((longlong)iVar33 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar6,iVar33,0);
            memcpy((void *)*puVar6,pvVar14,(longlong)iVar33 * 2);
          }
          iVar33 = (int)param_2[1] + -1;
          if ((int)param_2[1] == 0) {
            iVar33 = 0;
          }
          local_240 = (ulonglong)(((int)local_240 - local_284) + iVar33 + 4);
          puVar31 = local_268;
          param_1 = local_228;
        }
        else {
          FUN_140b7fa98(param_5,plVar25);
        }
      }
LAB_140b7d93e:
      uVar27 = local_260 & ~(uint)uVar13;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar31;
      }
      iVar33 = (int)param_1[5];
      iVar16 = (int)uVar8;
      lVar32 = (longlong)iVar16;
      uVar30 = puVar10[lVar32] & uVar27;
      iVar19 = local_25c;
      if (uVar30 == 0) {
        iVar26 = iVar33 + 0x1e;
        if (-1 < iVar33 + -1) {
          iVar26 = iVar33 + -1;
        }
        iVar26 = iVar26 >> 5;
        iVar22 = iVar26;
        if (iVar26 < iVar16) {
          iVar22 = iVar16;
        }
        if (iVar26 <= iVar16) break;
        lVar18 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar30 = puVar10[lVar32 + lVar18 + 1];
          if (uVar30 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar22 - lVar32 == lVar18) goto LAB_140b7e96c;
        }
        uVar8 = (ulonglong)(iVar16 + (int)lVar18 + 1);
        uVar27 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar30 & uVar30);
      uVar23 = uVar13 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar16 = (iVar19 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar33);
  }
LAB_140b7e96c:
  uVar8 = local_240;
  iVar33 = (int)param_2[1];
  uVar27 = iVar33 - 1;
  if (iVar33 == 0) {
    uVar27 = 0;
  }
  uVar30 = uVar27;
  if ((int)local_284 < (int)uVar27) {
    uVar30 = local_284;
  }
  uVar13 = (ulonglong)uVar30;
  if ((int)uVar30 < 1) {
    uVar13 = 0;
  }
  uVar27 = uVar27 - (int)uVar13;
  uVar30 = uVar27;
  if ((int)uVar27 < 1) {
    uVar30 = 0;
  }
  if (0 < (int)uVar27) {
    iVar19 = iVar33 - (uVar30 + (int)uVar13);
    if (iVar19 != 0) {
      pvVar14 = (void *)(uVar13 * 2 + *param_2);
      memmove(pvVar14,(void *)((longlong)pvVar14 + (ulonglong)uVar30 * 2),(longlong)iVar19 * 2);
      iVar33 = (int)param_2[1];
    }
    *(uint *)(param_2 + 1) = iVar33 - uVar30;
  }
  iVar33 = (int)uVar8 + local_284;
  if ((iVar33 != 0 && SCARRY4((int)uVar8,local_284) == iVar33 < 0) &&
     (*(int *)((longlong)param_2 + 0xc) <= iVar33)) {
    FUN_1446f8c06(param_2,iVar33 + 1);
  }
  uVar8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = (longlong **)0x0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uVar27 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
  if (uVar27 != 0) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar27);
    }
    FUN_140e83416(&local_118,uVar27);
    iVar33 = 1;
    if (3 < uVar27) {
      uVar27 = (uVar27 | 1) + 0xe;
      iVar33 = 0x1f;
      if (uVar27 != 0) {
        for (; uVar27 >> iVar33 == 0; iVar33 = iVar33 + -1) {
        }
      }
      iVar33 = 1 << ((byte)iVar33 & 0x1f);
    }
    if ((local_d0 == 0) || (local_d0 < iVar33)) {
      local_d0 = iVar33;
      FUN_14482b9e8();
    }
  }
  iVar33 = (int)param_5[5];
  if (iVar33 == 0) {
    uVar13 = 1;
    iVar19 = 0;
    iVar16 = 0;
  }
  else {
    puVar31 = (uint *)param_5[4];
    if ((uint *)param_5[4] == (uint *)0x0) {
      puVar31 = (uint *)(param_5 + 2);
    }
    uVar27 = *puVar31;
    if (uVar27 == 0) {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      uVar8 = 0;
      uVar13 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar13 = uVar8;
      }
      iVar16 = 0;
      do {
        if (uVar13 == uVar8) goto LAB_140b7eab7;
        iVar16 = iVar16 + 0x20;
        uVar27 = puVar31[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar8 = 0;
      iVar16 = 0;
    }
    uVar13 = (ulonglong)(-uVar27 & uVar27);
    uVar23 = uVar13 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar19 = (iVar16 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar19) {
      iVar19 = iVar33;
    }
  }
  if (iVar19 != iVar33) {
    uVar27 = 0xffffffff;
    do {
      FUN_14482b35e(&local_118,&local_1d8,(longlong)iVar19 * 0x28 + *param_5,0);
      uVar27 = ~(uint)uVar13 & uVar27;
      puVar31 = (uint *)param_5[4];
      if ((uint *)param_5[4] == (uint *)0x0) {
        puVar31 = (uint *)(param_5 + 2);
      }
      iVar26 = (int)param_5[5];
      iVar19 = (int)uVar8;
      lVar32 = (longlong)iVar19;
      uVar30 = puVar31[lVar32] & uVar27;
      if (uVar30 == 0) {
        iVar22 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar22 = iVar26 + -1;
        }
        iVar22 = iVar22 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar17 = iVar22;
        if (iVar22 < iVar19) {
          iVar17 = iVar19;
        }
        if (iVar19 < iVar22) {
          lVar18 = 0;
          do {
            uVar30 = puVar31[lVar32 + lVar18 + 1];
            if (uVar30 != 0) {
              uVar8 = (ulonglong)(iVar19 + (int)lVar18 + 1);
              uVar27 = 0xffffffff;
              goto LAB_140b7ed91;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar17 - lVar32 != lVar18);
          uVar27 = 0xffffffff;
          iVar19 = iVar17;
        }
        uVar8 = (ulonglong)(iVar19 + 1);
        iVar19 = iVar26;
      }
      else {
LAB_140b7ed91:
        uVar13 = (ulonglong)(-uVar30 & uVar30);
        uVar23 = uVar13 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar19 = (iVar16 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar19) {
          iVar19 = iVar26;
        }
      }
    } while (iVar19 != iVar33);
  }
LAB_140b7eab7:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866d50) && (FUN_144b3d300(&DAT_14c866d50), DAT_14c866d50 == -1)) {
    FUN_140056680(&DAT_14c866d40,L"\r\n\r\n");
    atexit((_func_5014 *)&LAB_142773dac);
    _Init_thread_footer(&DAT_14c866d50);
  }
  local_190 = local_280;
  local_188 = param_5;
  local_1d8 = (longlong **)0x0;
  uStack_1d0 = 0;
  local_180 = &local_118;
  FUN_140b80100(&local_190,&local_1d8);
  if (local_1d8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_140 != 0) {
    lVar18 = (longlong)(int)uStack_140 << 4;
    lVar32 = local_148;
    do {
      FUN_140b80100(&local_190,lVar32);
      lVar32 = lVar32 + 0x10;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != 0);
  }
  iVar33 = (int)uStack_110 - local_e4;
  if (iVar33 != 0 && local_e4 <= (int)uStack_110) {
    local_1a8 = 0;
    uStack_1a0 = 0;
    if (iVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar33);
    }
    FUN_1408be2c4(&local_1a8);
    local_138 = 0x100000000;
    local_128 = 0xffffffff;
    uStack_120 = 0;
    plStack_130 = &local_108;
    if (local_f0 == 0) {
      iVar33 = 0;
    }
    else {
      FUN_1449c0562(&local_138);
      iVar33 = local_f0;
    }
    uStack_1b8 = CONCAT44(uStack_11c,uStack_120);
    local_1c0 = local_128;
    uVar8 = local_1c0;
    uStack_1d0 = local_138;
    local_1c8 = plStack_130;
    local_1c0._4_4_ = (int)(local_128 >> 0x20);
    local_1d8 = &local_118;
    if ((local_1c0._4_4_ != iVar33) || (plStack_130 != &local_108)) {
      iVar19 = local_1c0._4_4_;
      local_1c0 = uVar8;
      do {
        uVar8 = uStack_1a0;
        plVar25 = *local_1d8;
        lVar32 = (longlong)(int)uStack_1a0;
        uVar27 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar27);
        if (uStack_1a0._4_4_ < uVar27) {
          FUN_1447a1bd6(&local_1a8,uVar8 & 0xffffffff);
        }
        lVar32 = lVar32 * 0x10;
        puVar6 = (undefined8 *)(local_1a8 + lVar32);
        *(undefined8 *)(local_1a8 + lVar32) = 0;
        iVar16 = (int)(plVar25 + (longlong)iVar19 * 3)[1];
        pvVar14 = (void *)plVar25[(longlong)iVar19 * 3];
        *(int *)(local_1a8 + 8 + lVar32) = iVar16;
        if ((longlong)iVar16 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar6,iVar16,0);
          memcpy((void *)*puVar6,pvVar14,(longlong)iVar16 * 2);
        }
        local_1c0 = CONCAT44(local_1c0._4_4_,(uint)local_1c0 & ~uStack_1d0._4_4_);
        FUN_1449c0562(&uStack_1d0);
        iVar19 = local_1c0._4_4_;
        uVar8 = local_1c0;
      } while (local_1d8 != &local_118 || (local_1c8 != &local_108 || local_1c0._4_4_ != iVar33));
    }
    local_1c0 = uVar8;
    FUN_140e836da(local_1a8,uStack_1a0 & 0xffffffff);
    if ((longlong)(int)uStack_1a0 == 0) {
      uVar8 = 0;
    }
    else {
      lVar18 = (longlong)(int)uStack_1a0 << 4;
      lVar32 = local_1a8;
      do {
        FUN_140b80100(&local_190,lVar32);
        lVar32 = lVar32 + 0x10;
        lVar18 = lVar18 + -0x10;
      } while (lVar18 != 0);
      uVar8 = uStack_1a0 & 0xffffffff;
    }
    FUN_1447a1747(local_1a8,uVar8);
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
  }
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_118);
  FUN_1447a1747(local_178,uStack_170 & 0xffffffff);
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_148,uStack_140 & 0xffffffff);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140b7f134:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar15] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar28];
LAB_140b7f137:
  if (iVar19 == 0) goto LAB_140b7dadb;
LAB_140b7da0f:
  plVar9 = plVar9 + 2;
  if (plVar9 == local_178 + (longlong)(int)uStack_170 * 2) goto LAB_140b7d93e;
  goto LAB_140b7d9f5;
LAB_140b7e00d:
  iVar16 = 0;
LAB_140b7e00f:
  bVar35 = iVar16 == 0;
  local_208 = plVar25;
LAB_140b7e01c:
  if (bVar2 == 0 && !bVar35) {
    if ((int)uVar27 < 2) {
      bVar35 = false;
    }
    else {
      local_285 = bVar2;
      local_210 = puVar31;
      local_208 = plVar25;
      cVar3 = FUN_140b7f836(*plVar25,*plVar25 + (ulonglong)uVar27 * 2 + -2);
      if (cVar3 == '\0') {
        bVar35 = false;
        puVar31 = local_210;
        bVar2 = local_285;
      }
      else {
        pwVar12 = L"";
        if (*(int *)(lVar32 + (longlong)iVar19 * 0x40 + 0x18) != 0) {
          pwVar12 = (wchar_t *)*local_208;
        }
        dVar36 = _wtof(pwVar12);
        pwVar12 = L"";
        if (*local_210 != 0) {
          pwVar12 = (wchar_t *)*local_220;
        }
        dVar37 = _wtof(pwVar12);
        bVar35 = (float)dVar37 == (float)dVar36;
        puVar31 = local_210;
        bVar2 = local_285;
      }
    }
  }
LAB_140b7e02b:
  do {
    iVar19 = iVar33;
    if (iVar19 == -1) goto LAB_140b7e134;
    lVar32 = *local_258;
    iVar33 = *(int *)(lVar32 + 0x38 + (longlong)iVar19 * 0x40);
  } while (*(longlong *)(lVar32 + (longlong)iVar19 * 0x40) != lVar5);
  if (bVar35) goto LAB_140b7e13d;
  goto LAB_140b7df4e;
}



// FUNCTION 140b7f766 FUN_140b7f766 body=208 status=ok
// SIG undefined FUN_140b7f766(void)

int FUN_140b7f766(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_140b7f7b0:
      lVar10 = (longlong)iVar1 * 0xb8;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_140b7f80b;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140b7f80b;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140b7f815;
    }
  }
  return -1;
LAB_140b7f80b:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140b7f815:
  iVar1 = *(int *)(lVar4 + 0xb0 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140b7f7b0;
}



// FUNCTION 140b7f836 FUN_140b7f836 body=392 status=ok
// SIG undefined FUN_140b7f836(void)

ulonglong FUN_140b7f836(wint_t *param_1,wint_t *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  wint_t *pwVar4;
  wint_t *pwVar5;
  undefined1 auStack_48 [32];
  wint_t *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  cVar1 = FUN_140b7f9c0(&local_28);
  if (cVar1 != '\0') {
    if ((*local_28 == 0x2d) || (*local_28 == 0x2b)) {
      local_28 = local_28 + 1;
    }
    cVar1 = FUN_140b7f9c0(&local_28,param_2);
    pwVar4 = local_28;
    if (cVar1 != '\0') {
      while ((pwVar4 < param_2 && (iVar2 = iswdigit(*pwVar4), iVar2 != 0))) {
        pwVar4 = pwVar4 + 1;
      }
      local_28 = pwVar4;
      if (*pwVar4 == 0x2e) {
        pwVar4 = pwVar4 + 1;
        local_28 = pwVar4;
      }
      while ((pwVar4 < param_2 && (iVar2 = iswdigit(*pwVar4), iVar2 != 0))) {
        pwVar4 = pwVar4 + 1;
      }
      pwVar5 = pwVar4;
      local_28 = pwVar4;
      if ((*pwVar4 & 0xffdf) == 0x45) {
        if ((pwVar4[1] == 0x2d) || (pwVar5 = pwVar4 + 1, local_28 = pwVar4 + 1, pwVar4[1] == 0x2b))
        {
          pwVar5 = pwVar4 + 2;
          local_28 = pwVar5;
        }
      }
      while ((pwVar5 < param_2 && (iVar2 = iswdigit(*pwVar5), iVar2 != 0))) {
        pwVar5 = pwVar5 + 1;
      }
      local_28 = pwVar5;
      if ((*pwVar5 & 0xffdf) == 0x46) {
        local_28 = pwVar5 + 1;
      }
      uVar3 = FUN_140b7f9c0(&local_28,param_2);
      uVar3 = uVar3 ^ 1;
      goto LAB_140b7f933;
    }
  }
  uVar3 = 0;
LAB_140b7f933:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140b7f9c0 FUN_140b7f9c0 body=121 status=ok
// SIG undefined FUN_140b7f9c0(void)

undefined8 FUN_140b7f9c0(longlong *param_1,ushort *param_2)

{
  ushort _C;
  int iVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)*param_1;
  do {
    if (param_2 <= puVar2) {
LAB_140b7fa24:
      return CONCAT71((int7)((ulonglong)puVar2 >> 8),puVar2 < param_2);
    }
    _C = *puVar2;
    iVar1 = iswspace(_C);
    if ((((3 < _C - 10 && iVar1 == 0) && (1 < _C - 0x2028)) && (_C != 0xd)) && (_C != 0x85)) {
      puVar2 = (ushort *)*param_1;
      goto LAB_140b7fa24;
    }
    puVar2 = (ushort *)(*param_1 + 2);
    *param_1 = (longlong)puVar2;
  } while( true );
}



// FUNCTION 140b7fa3a FUN_140b7fa3a body=94 status=ok
// SIG undefined FUN_140b7fa3a(void)

void FUN_140b7fa3a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1447a1bd6(param_1,iVar2);
  }
  FUN_140b8566a((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 140b7fa98 FUN_140b7fa98 body=267 status=ok
// SIG undefined FUN_140b7fa98(void)

undefined4 FUN_140b7fa98(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar2,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_140b7fb0c:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      if ((int)plVar3[1] == iVar2) {
        if (1 < iVar2) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_140b7fb89;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_140b7fb89;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_140b7fb50;
      }
      if ((int)plVar3[1] + iVar2 == 1) goto LAB_140b7fb50;
      goto LAB_140b7fb8f;
    }
  }
  return 0;
LAB_140b7fb89:
  if (uVar5 == uVar7) {
LAB_140b7fb50:
    FUN_14577be04(param_1);
    return 1;
  }
LAB_140b7fb8f:
  iVar1 = (int)plVar3[4];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_140b7fb0c;
}



// FUNCTION 140b7fba4 FUN_140b7fba4 body=562 status=ok
// SIG undefined FUN_140b7fba4(void)

void FUN_140b7fba4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_1,*param_2,iVar2);
  FUN_140002184(param_1,0x3d);
  iVar2 = *(int *)(param_3 + 1);
  psVar3 = (short *)*param_3;
  psVar6 = &DAT_149dfb77a;
  if (iVar2 != 0) {
    psVar6 = psVar3;
  }
  if (*psVar6 == 0) {
LAB_140b7fd36:
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    FUN_1400020e8(param_1,psVar3,iVar5);
  }
  else {
    bVar9 = 1;
    lVar7 = 0;
    bVar10 = 0;
    sVar11 = *psVar6;
    while( true ) {
      sVar1 = *(short *)((longlong)psVar6 + lVar7 + 2);
      bVar8 = sVar11 == 0x22 & bVar9;
      if (sVar11 == 0x5c) {
        bVar9 = bVar9 & bVar10 != bVar8;
      }
      else {
        bVar9 = 0;
      }
      bVar4 = sVar1 == 0 || lVar7 == 0;
      if (sVar11 != 0x20) {
        bVar4 = sVar11 == 0x22 && lVar7 == 0;
      }
      if (((bVar4) || (sVar11 == 0x5c && sVar1 == 0)) ||
         (((sVar11 == 0x7d || ((sVar11 == 0x7b || (sVar1 == 0x2f && sVar11 == 0x2f)))) &&
          (bVar10 == bVar8)))) break;
      if (bVar9 == 0) {
        if (sVar1 == 0) goto LAB_140b7fd36;
        if ((sVar1 == 10) || (sVar1 == 0xd)) break;
      }
      else if (sVar1 == 0) goto LAB_140b7fd36;
      bVar10 = bVar10 ^ bVar8;
      bVar9 = bVar9 ^ 1;
      lVar7 = lVar7 + 2;
      sVar11 = sVar1;
    }
    FUN_140002184(param_1,CONCAT62((int6)((ulonglong)psVar3 >> 0x10),0x22));
    FUN_1467ce734(param_3,&local_58,0);
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_1,local_58,iVar2);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140002184(param_1,0x22);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c866d38) {
    FUN_144b3d300(&DAT_14c866d38);
    if (DAT_14c866d38 == -1) {
      DAT_14c866d34 = 2;
      _Init_thread_footer(&DAT_14c866d38);
    }
  }
  FUN_1400020e8(param_1,&DAT_149e02010,DAT_14c866d34);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b7fdd8 FUN_140b7fdd8 body=807 status=ok
// SIG undefined FUN_140b7fdd8(void)

void FUN_140b7fdd8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140b7fe3e;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_140b7fe3e:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar6 = 0;
    uVar11 = 1;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar6 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar6;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar6) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar6 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar8 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 < iVar7) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
      iVar7 = *(int *)(puVar2 + 1);
      iVar12 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        lVar15 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar17[lVar15] +
                  (uint)(0x19 < (ushort)puVar17[lVar15] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar15 = lVar15 + 1;
        } while (iVar12 != (int)lVar15);
      }
      uVar8 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0x24) = iVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 4) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar10 = (int)uVar6;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar3 = puVar14[lVar15 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar15 == lVar16) {
            return;
          }
        }
        uVar6 = (ulonglong)(iVar10 + (int)lVar16 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar7);
  }
  return;
}



// FUNCTION 140b80100 FUN_140b80100 body=368 status=ok
// SIG undefined FUN_140b80100(void)

void FUN_140b80100(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  wchar_t *_Str2;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  plVar1 = (longlong *)param_1[1];
  iVar2 = *(int *)(param_2 + 1);
  uVar5 = 0;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar7]) -
              0x20;
      uVar8 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar7 = lVar7 + 1;
    } while (iVar4 != (int)lVar7);
  }
  iVar2 = FUN_1457511aa(plVar1,uVar5,param_2);
  if (iVar2 != -1) {
    lVar7 = *plVar1;
    if (((lVar7 + (longlong)iVar2 * 0x28 + 0x10U & 0xffffffffffffffef) != 0) &&
       (iVar4 = FUN_1411a58b4(param_1[2],param_2), iVar4 != 0)) {
      FUN_1400020e8(*param_1,*(undefined8 *)(lVar7 + (longlong)iVar2 * 0x28 + 0x10));
      iVar2 = DAT_14c866d48 + -1;
      _Str2 = DAT_14c866d40;
      if (DAT_14c866d48 == 0) {
        iVar2 = 0;
        _Str2 = L"";
      }
      param_1 = (longlong *)*param_1;
      if (0 < iVar2) {
        iVar4 = (int)param_1[1] + -1;
        if ((int)param_1[1] == 0) {
          iVar4 = 0;
        }
        if ((iVar2 <= iVar4) &&
           (iVar2 = wcscmp((wchar_t *)((longlong)(iVar4 - iVar2) * 2 + *param_1),_Str2), iVar2 == 0)
           ) {
          return;
        }
      }
      FUN_1400020e8(param_1,&DAT_149e02010,2);
      return;
    }
  }
  return;
}



// FUNCTION 140b80270 FUN_140b80270 body=433 status=ok
// SIG undefined FUN_140b80270(void)

void FUN_140b80270(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x28 + -0x24);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 140b80422 FUN_140b80422 body=144 status=ok
// SIG undefined FUN_140b80422(void)

longlong FUN_140b80422(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1457511aa();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_140b80478;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140b804b4(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_140b80478:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 140b804b4 FUN_140b804b4 body=284 status=ok
// SIG undefined FUN_140b804b4(void)

undefined4 *
FUN_140b804b4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ac5f02(param_1,local_58);
  FUN_140b805d2(param_4,local_50);
  *(undefined4 *)(local_50 + 0x20) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140ac5e66(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140b7fdd8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b805d2 FUN_140b805d2 body=92 status=ok
// SIG undefined FUN_140b805d2(void)

undefined8 * FUN_140b805d2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
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
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 140b8062e FUN_140b8062e body=353 status=ok
// SIG undefined FUN_140b8062e(void)

void FUN_140b8062e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b806b3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140b806b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140b80790 FUN_140b80790 body=889 status=ok
// SIG undefined FUN_140b80790(void)

void FUN_140b80790(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  code *local_d0;
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
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3 & 2) != 0) {
    if (((((*(byte *)(param_1 + 0x30) & 1) != 0) || (0 < *(int *)(param_1 + 0x68))) &&
        (plVar4 = (longlong *)FUN_14084c0d2(param_2), plVar4 != (longlong *)0x0)) &&
       (lVar5 = (**(code **)(*plVar4 + 0x678))(plVar4,0,0,0), lVar5 != 0)) {
      if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
        iVar2 = *(int *)(param_1 + 0x48);
        if ((longlong)iVar2 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x40);
          lVar8 = 0;
          do {
            puVar1 = (undefined8 *)(lVar9 + 8 + lVar8);
            local_78 = *puVar1;
            uStack_70 = *(undefined4 *)(puVar1 + 1);
            uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
            local_d0 = *(code **)(lVar9 + lVar8);
            local_c8 = CONCAT71(local_c8._1_7_,2);
            local_c8 = CONCAT44(0xffffffff,(undefined4)local_c8);
            FUN_14016d7a8(lVar5,&local_d0,&local_78);
            lVar8 = lVar8 + 0x18;
          } while ((longlong)iVar2 * 0x18 != lVar8);
        }
        iVar2 = *(int *)(param_1 + 0x58);
        if ((longlong)iVar2 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x50);
          lVar8 = 0;
          do {
            FUN_14472da24(lVar5,*(undefined8 *)(lVar9 + lVar8),*(undefined4 *)(lVar9 + 8 + lVar8));
            lVar8 = lVar8 + 0xc;
          } while ((longlong)iVar2 * 0xc != lVar8);
        }
      }
      iVar2 = *(int *)(param_1 + 0x68);
      if ((longlong)iVar2 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x60);
        lVar8 = 0;
        do {
          local_78 = *(undefined8 *)(lVar9 + lVar8);
          uStack_70 = CONCAT31(uStack_70._1_3_,2);
          uStack_6c = 0xffffffff;
          local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_128 = &local_d0;
          FUN_140042bb4(lVar5,&local_78,*(undefined4 *)(lVar9 + 8 + lVar8),0);
          lVar8 = lVar8 + 0xc;
        } while ((longlong)iVar2 * 0xc != lVar8);
      }
    }
    if (param_2 != 0) {
      if (DAT_14cb939a8 == 0) {
        local_f0 = &local_d0;
        local_d0 = FUN_140940982;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_146522c26;
        local_f8 = &LAB_148a0db91;
        local_100 = &LAB_146572ba7;
        local_108 = L"Engine";
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 8;
        local_128 = (code **)CONCAT44(local_128._4_4_,0xdd8);
        FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      }
      if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
         (*(byte *)(param_1 + 0x30) != 0)) {
        cVar6 = '\0';
        bVar7 = *(byte *)(param_1 + 0x30);
        do {
          if ((bVar7 & 1) != 0) {
            if ((longlong)*(int *)(param_1 + 0x48) != 0) {
              lVar9 = *(longlong *)(param_1 + 0x40);
              lVar5 = lVar9 + (longlong)*(int *)(param_1 + 0x48) * 0x18;
              do {
                local_128 = (code **)CONCAT44(local_128._4_4_,*(undefined4 *)(param_1 + 0x3c));
                FUN_140b80b0a(param_2,cVar6,lVar9,lVar9 + 8);
                lVar9 = lVar9 + 0x18;
              } while (lVar9 != lVar5);
            }
            if ((longlong)*(int *)(param_1 + 0x58) != 0) {
              lVar5 = *(longlong *)(param_1 + 0x50);
              lVar9 = (longlong)*(int *)(param_1 + 0x58) * 0xc;
              do {
                local_128 = (code **)CONCAT44(local_128._4_4_,*(undefined4 *)(param_1 + 0x3c));
                FUN_14577bec6(param_2,cVar6,lVar5,*(undefined4 *)(lVar5 + 8));
                lVar5 = lVar5 + 0xc;
                lVar9 = lVar9 + -0xc;
              } while (lVar9 != 0);
            }
          }
          cVar6 = cVar6 + '\x01';
          bVar3 = 1 < bVar7;
          bVar7 = bVar7 >> 1;
        } while (bVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b80b0a FUN_140b80b0a body=197 status=ok
// SIG undefined FUN_140b80b0a(void)

void FUN_140b80b0a(longlong param_1,byte param_2,longlong *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) {
    lVar4 = *(longlong *)(param_1 + 0xbe8);
    lVar1 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8;
    plVar6 = *(longlong **)(lVar4 + 0x68 + lVar1);
    iVar3 = *(int *)(lVar4 + 0x70 + lVar1);
    lVar7 = (longlong)iVar3;
    if (lVar7 != 0) {
      lVar8 = lVar7 * 0x1c;
      plVar9 = plVar6;
      do {
        if (*plVar9 == *param_3) {
          if (plVar9 != (longlong *)0x0) {
            return;
          }
          break;
        }
        plVar9 = (longlong *)((longlong)plVar9 + 0x1c);
        lVar8 = lVar8 + -0x1c;
      } while (lVar8 != 0);
    }
    lVar4 = lVar4 + lVar1;
    *(uint *)(lVar4 + 0x70) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x74) < iVar3 + 1U) {
      FUN_140b80bd0((undefined8 *)(lVar4 + 0x68),iVar3);
      plVar6 = *(longlong **)(lVar4 + 0x68);
    }
    lVar7 = lVar7 * 0x1c;
    *(longlong *)((longlong)plVar6 + lVar7) = *param_3;
    uVar5 = param_4[1];
    puVar2 = (undefined8 *)((longlong)plVar6 + lVar7 + 8);
    *puVar2 = *param_4;
    puVar2[1] = uVar5;
    *(undefined4 *)((longlong)plVar6 + lVar7 + 0x18) = param_5;
  }
  return;
}



// FUNCTION 140b80bd0 FUN_140b80bd0 body=378 status=ok
// SIG undefined FUN_140b80bd0(void)

void FUN_140b80bd0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b80c5d;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140b80c5d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 140b80d58 FUN_140b80d58 body=40 status=ok
// SIG undefined FUN_140b80d58(void)

undefined8 FUN_140b80d58(undefined8 param_1,int param_2)

{
  FUN_140b80d80();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b80d80 FUN_140b80d80 body=69 status=ok
// SIG undefined FUN_140b80d80(void)

void FUN_140b80d80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b687a70;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  FUN_140c09192(param_1);
  return;
}



// FUNCTION 140b80dc6 FUN_140b80dc6 body=3930 status=ok
// SIG undefined FUN_140b80dc6(void)

double * FUN_140b80dc6(longlong *param_1,double *param_2,double *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  double *pdVar17;
  double extraout_RAX;
  uint uVar18;
  double *pdVar19;
  longlong *plVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  float local_198;
  float local_194;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  fVar30 = (float)param_4;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  bVar10 = true;
  if (*(int *)((longlong)param_1 + 0x524) == 0) {
LAB_140b818b1:
    plVar20 = (longlong *)0x0;
  }
  else {
    uVar18 = *(uint *)(param_1 + 0xa4);
    plVar20 = (longlong *)0x0;
    if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
      plVar16 = (longlong *)
                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if ((plVar16 != (longlong *)0x0) &&
         ((((int)plVar16[2] == *(int *)((longlong)param_1 + 0x524) &&
           ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) &&
          (plVar20 = (longlong *)*plVar16, plVar20 != (longlong *)0x0)))) {
        if ((char)plVar20[0x2e7] == '\x01') {
          plVar20[0x2e3] = 0;
          plVar20[0x2e4] = 0;
          plVar20[0x2e5] = 0;
          param_2[2] = 0.0;
          *param_2 = 0.0;
          param_2[1] = 0.0;
LAB_140b818d5:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_1c8);
        }
        if (((char)plVar20[0x2c8] != '\x04') || ((char)plVar20[0x2f5] != '\x01')) {
          bVar10 = false;
          goto LAB_140b814f9;
        }
        uVar18 = *(uint *)(plVar16 + 1);
        if ((uVar18 & 0x10200000) != 0) {
          *param_2 = 0.0;
          param_2[1] = 0.0;
          param_2[2] = 0.0;
          goto LAB_140b818d5;
        }
        if ((char)plVar20[0x2ee] == '\x01') {
          fVar34 = *(float *)((longlong)plVar20 + 0x176c);
          if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
            plVar16 = plVar20;
            (**(code **)(*plVar20 + 0x6f0))(plVar20,&local_118);
            uVar18 = (uint)plVar16;
            local_128 = local_108;
            local_138 = local_118;
            dStack_130 = dStack_110;
            pdVar17 = (double *)(plVar20 + 0x2ff);
            if (((double)plVar20[0x2ff] == DAT_14c8464e0) &&
               (!NAN((double)plVar20[0x2ff]) && !NAN(DAT_14c8464e0))) {
              if (((double)plVar20[0x300] == DAT_14c8464e8) &&
                 (!NAN((double)plVar20[0x300]) && !NAN(DAT_14c8464e8))) {
                if (((double)plVar20[0x301] == DAT_14c8464f0) &&
                   (!NAN((double)plVar20[0x301]) && !NAN(DAT_14c8464f0))) {
                  plVar20[0x301] = (longlong)local_108;
                  *pdVar17 = local_118;
                  plVar20[0x300] = (longlong)dStack_110;
                }
              }
            }
            fVar35 = fVar34;
            if (fVar34 <= 0.0) {
              fVar35 = 0.0;
            }
            fVar26 = 0.045;
            if (0.045 <= fVar30 / 20.0) {
              fVar26 = fVar30 / 20.0;
            }
            if ((fVar30 <= fVar26) || (fVar34 <= 0.0)) {
              pdVar19 = &local_f8;
              local_1a8 = fVar35;
              FUN_140b81d26(pdVar19,pdVar17,&local_138,param_4);
              uVar18 = (uint)pdVar19;
              local_128 = local_e8;
              local_138 = local_f8;
              dStack_130 = dStack_f0;
            }
            else {
              dVar31 = local_108 - (double)plVar20[0x301];
              dVar6 = dStack_110 - (double)plVar20[0x300];
              dVar29 = local_118 - (double)plVar20[0x2ff];
              dVar32 = (double)plVar20[0x301];
              dVar23 = *pdVar17;
              dVar3 = (double)plVar20[0x300];
              local_f8 = dVar23;
              dStack_f0 = dVar3;
              local_e8 = dVar32;
              if (0.0001 < fVar30) {
                dVar24 = (double)(1.0 / fVar30);
                fVar34 = fVar30;
                do {
                  fVar28 = fVar26;
                  if (fVar34 <= fVar26) {
                    fVar28 = fVar34;
                  }
                  dVar25 = (double)fVar28;
                  dVar32 = dVar32 + dVar31 * dVar24 * dVar25;
                  dVar3 = dVar3 + dVar6 * dVar24 * dVar25;
                  dVar23 = dVar23 + dVar25 * dVar29 * dVar24;
                  fVar34 = fVar34 - fVar28;
                  pdVar19 = &local_138;
                  local_1a8 = fVar35;
                  local_f8 = dVar23;
                  dStack_f0 = dVar3;
                  local_e8 = dVar32;
                  FUN_140b81d26(&local_138,pdVar17,&local_f8);
                  uVar18 = (uint)pdVar19;
                  plVar20[0x301] = (longlong)local_128;
                  *pdVar17 = local_138;
                  plVar20[0x300] = (longlong)dStack_130;
                } while (0.0001 < fVar34);
              }
            }
            plVar20[0x301] = (longlong)local_128;
            *pdVar17 = local_138;
            plVar20[0x300] = (longlong)dStack_130;
          }
          else {
            local_138 = 0.0;
            dStack_130 = 0.0;
            local_128 = 0.0;
          }
        }
        else {
          plVar16 = plVar20;
          (**(code **)(*plVar20 + 0x6f0))(plVar20,&local_138);
          uVar18 = (uint)plVar16;
        }
        lVar5 = plVar20[0x39];
        if (lVar5 == 0) {
          pdVar17 = &DAT_14c8464e0;
          local_190 = DAT_14c8464f0;
        }
        else {
          local_190 = *(double *)(lVar5 + 0x270);
          pdVar17 = (double *)(lVar5 + 0x260);
        }
        fVar34 = *(float *)((longlong)plVar20 + 0x17d4);
        fVar35 = *(float *)(plVar20 + 0x2fa);
        fVar26 = fVar35 - fVar34;
        fVar28 = fVar35;
        if (1e-08 <= fVar26 * fVar26) {
          fVar28 = *(float *)(plVar20 + 0x2f2) * fVar30;
          if (fVar28 <= fVar26) {
            fVar26 = fVar28;
          }
          if (fVar26 <= -fVar28) {
            fVar26 = -fVar28;
          }
          fVar28 = fVar26 + fVar34;
        }
        fVar26 = *(float *)((longlong)plVar20 + 0x17cc);
        fVar1 = *(float *)(plVar20 + 0x2f9);
        fVar2 = *(float *)(plVar20 + 0x2ed);
        dVar32 = *pdVar17;
        dVar31 = pdVar17[1];
        if (*(char *)((longlong)plVar20 + 0x178d) == '\x01') {
          if (ABS(fVar34 - fVar35) < 1.0) {
            fVar27 = *(float *)((longlong)plVar20 + 0x177c) + *(float *)(plVar20 + 0x2f0);
            uVar15 = -(uint)(ABS(fVar35 - fVar27) < 1e-08);
            *(uint *)(plVar20 + 0x2fa) =
                 ~uVar15 & (uint)fVar27 |
                 (uint)(*(float *)((longlong)plVar20 + 0x177c) - *(float *)(plVar20 + 0x2f0)) &
                 uVar15;
          }
          else if (((char)plVar20[0x2f3] == '\x01') &&
                  (fVar35 = *(float *)(plVar20 + 0x2fe),
                  *(float *)(plVar20 + 0x2fe) = fVar35 + fVar30,
                  *(float *)((longlong)plVar20 + 0x179c) <= fVar35 + fVar30)) {
            uVar15 = rand();
            fVar27 = (float)(uVar15 & 0x7fff) / 32767.0;
            fVar35 = *(float *)(plVar20 + 0x2f0);
            if (0 < (int)(fVar27 + fVar27)) {
              fVar35 = -fVar35;
            }
            *(float *)(plVar20 + 0x2fa) = fVar35 + *(float *)((longlong)plVar20 + 0x177c);
            *(undefined4 *)(plVar20 + 0x2fe) = 0;
          }
        }
        fVar35 = fVar1 - fVar26;
        fVar27 = fVar1;
        if (1e-08 <= fVar35 * fVar35) {
          fVar27 = *(float *)((longlong)plVar20 + 0x1794) * fVar30;
          if (fVar27 <= fVar35) {
            fVar35 = fVar27;
          }
          if (fVar35 <= -fVar27) {
            fVar35 = -fVar27;
          }
          fVar27 = fVar35 + fVar26;
        }
        if (*(char *)((longlong)plVar20 + 0x178e) == '\x01') {
          if (ABS(fVar26 - fVar1) < 1.0) {
            fVar35 = *(float *)((longlong)plVar20 + 0x1774) + *(float *)(plVar20 + 0x2ef);
            uVar15 = -(uint)(ABS(*(float *)(plVar20 + 0x2f9) - fVar35) < 1e-08);
            *(uint *)(plVar20 + 0x2f9) =
                 ~uVar15 & (uint)fVar35 |
                 (uint)(*(float *)((longlong)plVar20 + 0x1774) - *(float *)(plVar20 + 0x2ef)) &
                 uVar15;
          }
          else if ((*(char *)((longlong)plVar20 + 0x1799) == '\x01') &&
                  (fVar35 = *(float *)((longlong)plVar20 + 0x17f4) + fVar30,
                  *(float *)((longlong)plVar20 + 0x17f4) = fVar35,
                  *(float *)(plVar20 + 0x2f4) <= fVar35)) {
            uVar15 = rand();
            fVar26 = (float)(uVar15 & 0x7fff) / 32767.0;
            fVar35 = *(float *)(plVar20 + 0x2ef);
            if (0 < (int)(fVar26 + fVar26)) {
              fVar35 = -fVar35;
            }
            *(float *)(plVar20 + 0x2f9) = fVar35 + *(float *)((longlong)plVar20 + 0x1774);
            *(undefined4 *)((longlong)plVar20 + 0x17f4) = 0;
          }
        }
        *(float *)((longlong)plVar20 + 0x17d4) = fVar28;
        *(float *)((longlong)plVar20 + 0x17cc) = fVar27;
        dVar13 = DAT_14c8462d0;
        dVar12 = DAT_14c8462c8;
        dVar11 = DAT_14c8462c0;
        dVar29 = (double)((fVar2 / fVar34) * fVar30);
        local_198 = fVar28;
        local_194 = fVar27;
        dVar21 = sin(dVar29);
        dVar22 = cos(dVar29);
        dVar25 = 1.0 - dVar22;
        dVar9 = dVar11 * dVar13 * dVar25;
        dVar6 = dVar12 * dVar13 * dVar25;
        dVar29 = (double)plVar20[0x2f7];
        dVar23 = (double)plVar20[0x2f6];
        dVar3 = (double)plVar20[0x2f8];
        dVar33 = dVar11 * dVar12 * dVar25;
        dVar24 = (dVar6 - dVar11 * dVar21) * dVar3 +
                 (dVar33 + dVar13 * dVar21) * dVar23 + (dVar12 * dVar12 * dVar25 + dVar22) * dVar29;
        dVar33 = (dVar9 + dVar12 * dVar21) * dVar3 +
                 (dVar25 * dVar11 * dVar11 + dVar22) * dVar23 + (dVar33 - dVar13 * dVar21) * dVar29;
        plVar20[0x2f6] = (longlong)dVar33;
        plVar20[0x2f7] = (longlong)dVar24;
        plVar20[0x2f8] =
             (longlong)
             ((dVar13 * dVar13 * dVar25 + dVar22) * dVar3 +
             (dVar9 - dVar12 * dVar21) * dVar23 + (dVar6 + dVar11 * dVar21) * dVar29);
        local_148 = dVar24 * (double)local_198 + dStack_130;
        local_150 = dVar33 * (double)local_198 + local_138;
        local_140 = (double)local_194 + local_128;
        plVar20[0x2fb] = (longlong)dVar32;
        plVar20[0x2fc] = (longlong)dVar31;
        plVar20[0x2fd] = (longlong)local_190;
        local_158 = local_140 - local_190;
        local_168 = local_150 - dVar32;
        dStack_160 = local_148 - dVar31;
        dVar31 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
        dVar32 = extraout_RAX;
        if ((dVar31 != 1.0) || (NAN(dVar31))) {
          if (9.99999993922529e-09 <= dVar31) {
            dVar31 = 1.0 / SQRT(dVar31);
            local_158 = local_158 * dVar31;
            dStack_160 = dStack_160 * dVar31;
            local_168 = local_168 * dVar31;
          }
          else {
            local_158 = DAT_14c8464f0;
            local_168 = DAT_14c8464e0;
            dStack_160 = DAT_14c8464e8;
            dVar32 = DAT_14c8464f0;
          }
        }
        lVar5 = plVar20[0x39];
        if (lVar5 == 0) {
          local_e8 = DAT_14c846508;
          local_f8 = DAT_14c8464f8;
          dStack_f0 = DAT_14c846500;
        }
        else {
          dVar31 = *(double *)(lVar5 + 0x240);
          dVar29 = *(double *)(lVar5 + 0x248);
          dVar23 = *(double *)(lVar5 + 0x250);
          dVar3 = *(double *)(lVar5 + 600);
          pdVar17 = *(double **)(lVar5 + 0x228);
          local_118 = dVar31;
          dStack_110 = dVar29;
          local_108 = dVar23;
          uStack_100 = dVar3;
          if (pdVar17 == (double *)0x0) {
            uVar18 = 0x40;
            pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
            dVar32 = DAT_14c8463d8;
            *pdVar17 = DAT_14c8463d0;
            pdVar17[1] = dVar32;
            dVar32 = DAT_14c8463e8;
            pdVar17[2] = DAT_14c8463e0;
            pdVar17[3] = dVar32;
            dVar32 = DAT_14c846500;
            pdVar17[4] = DAT_14c8464f8;
            pdVar17[5] = dVar32;
            dVar32 = DAT_14c846508;
            pdVar17[6] = DAT_14c846508;
            *(double **)(lVar5 + 0x228) = pdVar17;
          }
          auVar7._8_4_ = (int)-(ulonglong)(dVar29 != pdVar17[1]);
          auVar7._0_8_ = -(ulonglong)(dVar31 != *pdVar17);
          auVar7._12_4_ = (int)(-(ulonglong)(dVar29 != pdVar17[1]) >> 0x20);
          iVar14 = movmskpd(SUB84(dVar32,0),auVar7);
          auVar8._8_4_ = (int)-(ulonglong)(dVar3 != pdVar17[3]);
          auVar8._0_8_ = -(ulonglong)(dVar23 != pdVar17[2]);
          auVar8._12_4_ = (int)(-(ulonglong)(dVar3 != pdVar17[3]) >> 0x20);
          uVar18 = movmskpd(uVar18,auVar8);
          if ((uVar18 & 0x3fffffff) != 0 || iVar14 != 0) {
            *(undefined4 *)(pdVar17 + 2) = (undefined4)local_108;
            *(undefined4 *)((longlong)pdVar17 + 0x14) = local_108._4_4_;
            *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_100;
            *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_100._4_4_;
            *pdVar17 = local_118;
            pdVar17[1] = dStack_110;
            FUN_1448052ee(&local_118,&local_f8);
            pdVar17[6] = local_e8;
            pdVar17[4] = local_f8;
            pdVar17[5] = dStack_f0;
          }
          local_e8 = pdVar17[6];
          local_f8 = pdVar17[4];
          dStack_f0 = pdVar17[5];
        }
        cVar4 = *(char *)((longlong)plVar20 + 0x1642);
        if (cVar4 == '\x02') {
          FUN_1407ef2d4(plVar20,&local_118);
          lVar5 = plVar20[0x39];
          if (lVar5 == 0) {
            pdVar17 = &DAT_14c8464e0;
            dVar32 = DAT_14c8464f0;
          }
          else {
            pdVar17 = (double *)(lVar5 + 0x260);
            dVar32 = *(double *)(lVar5 + 0x270);
          }
          dVar29 = dStack_110 - pdVar17[1];
          dVar31 = local_118 - *pdVar17;
          dVar32 = local_108 - dVar32;
          dVar23 = dVar32 * dVar32 + dVar31 * dVar31 + dVar29 * dVar29;
          if (((dVar23 != 1.0) || (dVar3 = dVar29, dVar6 = dVar31, dVar24 = dVar32, NAN(dVar23))) &&
             (dVar3 = DAT_14c8464e8, dVar6 = DAT_14c8464e0, dVar24 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar23)) {
            dVar23 = 1.0 / SQRT(dVar23);
            dVar3 = dVar29 * dVar23;
            dVar6 = dVar31 * dVar23;
            dVar24 = dVar32 * dVar23;
          }
          dVar32 = 0.0;
          if ((((dVar6 != 0.0) || (NAN(dVar6))) ||
              ((dVar3 != 0.0 || ((NAN(dVar3) || (dVar24 != 0.0)))))) || (NAN(dVar24))) {
            if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar6 != 0.0)) || (NAN(dVar6))) {
              dVar32 = atan2(dVar3,dVar6);
              dVar32 = dVar32 * 57.29577951308232;
            }
            dVar29 = 0.0;
            dVar31 = SQRT(dVar6 * dVar6 + dVar3 * dVar3);
            dStack_f0 = dVar32;
            if (((dVar24 != 0.0) || (NAN(dVar24))) || ((dVar31 != 0.0 || (NAN(dVar31))))) {
              dVar29 = atan2(dVar24,dVar31);
              dVar29 = dVar29 * 57.29577951308232;
            }
            local_e8 = 0.0;
            local_f8 = dVar29;
          }
        }
        else if (cVar4 == '\x03') {
          lVar5 = plVar20[0x39];
          if (lVar5 == 0) {
            pdVar17 = &DAT_14c8464e0;
            local_108 = DAT_14c8464f0;
          }
          else {
            pdVar17 = (double *)(lVar5 + 0x260);
            local_108 = *(double *)(lVar5 + 0x270);
          }
          dStack_110 = (double)plVar20[0x314] - pdVar17[1];
          local_118 = (double)plVar20[0x313] - *pdVar17;
          local_108 = (double)plVar20[0x315] - local_108;
          dVar32 = local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110;
          if ((dVar32 != 1.0) || (NAN(dVar32))) {
            if (9.99999993922529e-09 <= dVar32) {
              dVar32 = 1.0 / SQRT(dVar32);
              local_108 = local_108 * dVar32;
              dStack_110 = dStack_110 * dVar32;
              local_118 = local_118 * dVar32;
            }
            else {
              local_118 = DAT_14c8464e0;
              dStack_110 = DAT_14c8464e8;
              local_108 = DAT_14c8464f0;
            }
          }
          if ((((local_118 != 0.0) || (NAN(local_118))) || (dStack_110 != 0.0)) ||
             (((NAN(dStack_110) || (local_108 != 0.0)) || (NAN(local_108))))) {
            pdVar17 = &local_118;
            goto LAB_140b81c65;
          }
        }
        else if (cVar4 == '\x01') {
          pdVar17 = &local_168;
LAB_140b81c65:
          FUN_144a79a9c(pdVar17,&local_f8);
        }
        local_1a8 = (float)((uint)local_1a8 & 0xffffff00);
        (**(code **)(*plVar20 + 0x4d0))(plVar20,&local_150,&local_f8,0);
        *param_2 = 0.0;
        param_2[1] = 0.0;
        param_2[2] = 0.0;
        goto LAB_140b81472;
      }
      goto LAB_140b818b1;
    }
  }
LAB_140b814f9:
  local_188 = *param_3;
  dStack_180 = param_3[1];
  local_178 = param_3[2];
  (**(code **)(*param_1 + 0x588))(param_1,&local_118,&local_188,param_4);
  dVar32 = param_3[2];
  dVar29 = (double)fVar30;
  dVar31 = param_3[1];
  dVar23 = (double)(fVar30 * 0.5);
  *param_2 = (local_118 - *param_3) * dVar23 + dVar29 * *param_3;
  param_2[1] = (dStack_110 - dVar31) * dVar23 + dVar31 * dVar29;
  param_2[2] = (local_108 - dVar32) * dVar23 + dVar32 * dVar29;
  if ((!bVar10) && ((char)plVar20[0x2f] == '\x03')) {
    plVar20[0x2e5] = (longlong)local_108;
    plVar20[0x2e3] = (longlong)local_118;
    plVar20[0x2e4] = (longlong)dStack_110;
  }
LAB_140b81472:
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b81d26 FUN_140b81d26 body=254 status=ok
// SIG undefined FUN_140b81d26(void)

void FUN_140b81d26(double *param_1,double *param_2,double *param_3,float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (0.0 < param_5) {
    dVar1 = param_2[2];
    dVar4 = param_3[2] - dVar1;
    dVar2 = param_2[1];
    dVar3 = param_3[1] - dVar2;
    dVar5 = *param_3 - *param_2;
    if (9.999999747378752e-05 <= dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3) {
      param_4 = param_4 * param_5;
      if (1.0 <= param_4) {
        param_4 = 1.0;
      }
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      dVar6 = (double)param_4;
      *param_1 = *param_2 + dVar5 * dVar6;
      param_1[1] = dVar2 + dVar3 * dVar6;
      param_1[2] = dVar1 + dVar4 * dVar6;
      return;
    }
  }
  param_1[2] = param_3[2];
  dVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 140b81e24 FUN_140b81e24 body=305 status=ok
// SIG undefined FUN_140b81e24(void)

undefined8 *
FUN_140b81e24(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68 [8];
  undefined4 local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)((longlong)param_1 + 0x524) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0xa4), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x524))) &&
       (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar6 = *plVar8, lVar6 != 0)))) {
      if (*(char *)(lVar6 + 0x1760) == '\x01') {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
      cVar1 = *(char *)(lVar6 + 0x1640);
      if (cVar1 == '\x04') {
        lVar6 = 0x650;
      }
      else if (cVar1 == '\x02') {
        lVar6 = 0x628;
      }
      else {
        lVar6 = 0x630;
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            uVar7 = *(undefined8 *)(param_3 + 4);
            puVar9 = local_48;
            goto LAB_140b81ecb;
          }
          goto LAB_140b81ec2;
        }
      }
      (**(code **)(*param_1 + lVar6))(param_1,param_3,param_4);
    }
  }
LAB_140b81ec2:
  uVar7 = *(undefined8 *)(param_3 + 4);
  puVar9 = local_68;
LAB_140b81ecb:
  *(undefined8 *)(puVar9 + 4) = uVar7;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar9 = *param_3;
  puVar9[1] = uVar3;
  puVar9[2] = uVar4;
  puVar9[3] = uVar5;
  FUN_14011493a(param_1,param_2,puVar9,param_4);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b81f58 FUN_140b81f58 body=134 status=ok
// SIG undefined FUN_140b81f58(void)

void FUN_140b81f58(longlong *param_1)

{
  char cVar1;
  
  param_1[0x60] = 0;
  if ((*(byte *)(param_1 + 0x5a) & 8) != 0) {
    if (*(longlong *)(param_1[6] + 0xd60) == DAT_14cb95128) {
                    /* WARNING: Could not recover jumptable at 0x000140b81fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x398))(param_1);
      return;
    }
    cVar1 = FUN_1402273fc();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x400))(param_1);
      if (cVar1 != '\0') {
        FUN_140b820e8(param_1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140b81fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x420))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140b81fde FUN_140b81fde body=265 status=ok
// SIG undefined FUN_140b81fde(void)

void FUN_140b81fde(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  
  cVar3 = (**(code **)(*param_1 + 0x2b8))();
  if ((cVar3 != '\0') || (cVar3 = (**(code **)(*param_1 + 0x3f8))(param_1), cVar3 != '\0')) {
    bVar4 = *(byte *)(param_1 + 0x5a) & 0xef;
    *(byte *)(param_1 + 0x5a) = bVar4;
    *(int *)((longlong)param_1 + 0x32c) = *(int *)((longlong)param_1 + 0x32c) + 1;
    if (param_1[0x60] == 0) {
      cVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
      bVar4 = *(byte *)(param_1 + 0x5a);
      if (cVar3 == '\0') {
        *(byte *)(param_1 + 0x5a) = bVar4 & 0xf7;
        cVar3 = FUN_1406f1180(param_1[6]);
        if (cVar3 != '\0') {
          FUN_140e3bfea(param_1[6],(char)param_1[7],0);
          return;
        }
        cVar3 = (**(code **)(*param_1 + 0x400))(param_1);
        if (cVar3 == '\0') {
          return;
        }
        lVar1 = param_1[6];
        FUN_1447f69b6(param_1 + 0xb);
        if ((0 < *(int *)(lVar1 + 0xaa8)) && (*(char *)(lVar1 + 0x178) == '\x03')) {
          FUN_1418ba386(lVar1 + 0xaa0);
        }
        plVar2 = (longlong *)param_1[0x16];
        if (((plVar2 != (longlong *)0x0) && ((char)plVar2[0xc] == '\x01')) &&
           (cVar3 = (**(code **)(*plVar2 + 0x2e8))(), cVar3 != '\0')) {
          return;
        }
        FUN_140b820e8(param_1);
        return;
      }
    }
    *(byte *)(param_1 + 0x5a) = bVar4 | 8;
  }
  return;
}



// FUNCTION 140b820e8 FUN_140b820e8 body=143 status=ok
// SIG undefined FUN_140b820e8(void)

void FUN_140b820e8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 5;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
    if (param_1[6] != 0) {
      FUN_140b8222c(param_1[6],param_1,1);
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(byte *)(lVar2 + 0x151) < *(byte *)(param_1[6] + 0x38)) {
    *(undefined4 *)(param_1 + 0x5c) = 0x38d1b717;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    (**(code **)(*param_1 + 0x410))(param_1);
    cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (cVar1 != '\0') {
      FUN_1406f11e6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140b82178 FUN_140b82178 body=179 status=ok
// SIG undefined FUN_140b82178(void)

undefined8 FUN_140b82178(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  bVar1 = *(byte *)(param_1 + 7);
  if ((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1[6] + 0xbe8) + 0x10 +
              (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 == (longlong *)0x0) goto LAB_140b821b9;
    cVar3 = (**(code **)(*plVar2 + 0x338))(plVar2,0);
    if (cVar3 != '\0') goto LAB_140b821b9;
    iVar4 = (**(code **)(*param_1 + 0x310))(param_1);
    if (iVar4 < 1) goto LAB_140b821b9;
    if (param_1[6] != 0) {
      FUN_14577bf82(param_1[6],(char)param_1[7]);
    }
LAB_140b82227:
    uVar6 = 0;
  }
  else {
LAB_140b821b9:
    if ((0.0 < (double)param_1[0x5d]) && ((*(byte *)(param_1 + 0x5a) & 8) == 0)) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if (*(double *)(lVar5 + 0x6d0) - (double)param_1[0x5d] <= 9.999999747378752e-05)
      goto LAB_140b82227;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 140b8222c FUN_140b8222c body=253 status=ok
// SIG undefined FUN_140b8222c(void)

void FUN_140b8222c(longlong *param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if (param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((int)param_1[0x1b2] != *(int *)((longlong)param_1 + 0xdbc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 0x1b8;
    if ((longlong *)param_1[0x1b9] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x1b9];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[0x1ba] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar1 = param_1[0x1b1];
      do {
        if (*(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) == param_2) goto LAB_140b822ea;
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  FUN_140b824c0(param_1 + 0x1b1,local_2c,&local_28,0);
LAB_140b822ea:
  if (*(char *)((longlong)param_1 + 0x3b) == '\0') {
    (**(code **)(*param_1 + 0x400))(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8233c FUN_140b8233c body=154 status=ok
// SIG undefined FUN_140b8233c(void)

undefined8 FUN_140b8233c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_140b823d6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140b823d6 FUN_140b823d6 body=95 status=ok
// SIG undefined FUN_140b823d6(void)

void FUN_140b823d6(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_140b82436(param_1,param_2,1);
  return;
}



// FUNCTION 140b82436 FUN_140b82436 body=138 status=ok
// SIG undefined FUN_140b82436(void)

void FUN_140b82436(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140b824c0 FUN_140b824c0 body=1484 status=ok
// SIG undefined FUN_140b824c0(void)

void FUN_140b824c0(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_1446efaca(param_1,iVar21);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar8 = iVar18 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar10 = iVar18 + 1;
    iVar13 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar13 = iVar18;
    }
    if (iVar13 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar8 = iVar18;
        }
        else {
          uVar9 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar9) {
              uVar17 = uVar9;
            }
          }
          else {
            uVar17 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar17 << 2,0);
          iVar8 = (int)(uVar5 >> 2);
          iVar10 = -0x20;
          if ((int)uVar9 <= iVar8) {
            iVar10 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar12,iVar8);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar8 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar8 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        bVar7 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar8 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar18 & 0x1f;
    puVar2 = (uint *)((longlong)plVar12 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar20 = (longlong)iVar21;
    iVar18 = *(int *)(*param_1 + 4 + lVar20 * 0x10);
    *(int *)(param_1 + 6) = iVar18;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x10) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar2;
  }
  iVar18 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar18 = iVar21;
  }
  puVar11[iVar18 >> 5] = puVar11[iVar18 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  lVar19 = *param_1;
  lVar20 = lVar20 * 0x10;
  uVar5 = *param_3;
  *(ulonglong *)(lVar19 + lVar20) = uVar5;
  *(undefined4 *)(lVar19 + 8 + lVar20) = 0xffffffff;
  uVar9 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_140b8258e:
    cVar6 = '\0';
    iVar8 = iVar21;
  }
  else {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar18 == -1) goto LAB_140b8258e;
    do {
      iVar8 = iVar18;
      puVar1 = (ulonglong *)(*param_1 + (longlong)iVar8 * 0x10);
      if (*(ulonglong *)(*param_1 + (longlong)iVar8 * 0x10) == uVar5) {
        *puVar1 = uVar5;
        FUN_140b82436(param_1,iVar21,1);
        cVar6 = '\x01';
        break;
      }
      iVar18 = (int)puVar1[1];
      cVar6 = '\0';
      iVar8 = iVar21;
    } while (iVar18 != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar6;
  }
  if (cVar6 != '\0') goto LAB_140b82606;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar17 = 1;
  if (3 < uVar4) {
    uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar4 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)(lVar19 + lVar20 + 0xc) = uVar9;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(lVar19 + lVar20 + 8) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar8;
    goto LAB_140b82606;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_140b82722:
    uVar9 = 0;
    do {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar15;
      }
      *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
           0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar17 != uVar9);
  }
  else {
    if (uVar17 == 0) goto LAB_140b82606;
    FUN_1446efa72(plVar12,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_140b82722;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar5 = 0;
    uVar16 = 1;
    iVar18 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = *puVar11;
    if (uVar9 == 0) {
      iVar18 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar18 = iVar21 + -1;
      }
      uVar5 = 0;
      uVar16 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar16 = uVar5;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar5) goto LAB_140b82606;
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar11[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar9 & uVar9);
    uVar22 = uVar16 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar18 = (iVar10 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar18) {
      iVar18 = iVar21;
    }
  }
  if (iVar18 < iVar21) {
    uVar9 = 0xffffffff;
    do {
      lVar20 = *param_1;
      lVar19 = (longlong)iVar18 * 0x10;
      uVar17 = ((uint)(*(ulonglong *)(lVar20 + lVar19) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar20 + lVar19) >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar22 = (longlong)(int)(uVar17 >> 0x10 ^ uVar17) & (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar20 + 0xc + lVar19) = iVar21;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar15;
      }
      *(undefined4 *)(lVar20 + 8 + lVar19) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar15;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar18
      ;
      uVar9 = ~(uint)uVar16 & uVar9;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar2;
      }
      iVar21 = (int)param_1[5];
      iVar18 = (int)uVar5;
      lVar20 = (longlong)iVar18;
      uVar17 = puVar11[lVar20] & uVar9;
      if (uVar17 == 0) {
        iVar13 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar13 = iVar21 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar18) {
          iVar14 = iVar18;
        }
        if (iVar13 <= iVar18) break;
        lVar19 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar17 = puVar11[lVar20 + lVar19 + 1];
          if (uVar17 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar14 - lVar20 == lVar19) goto LAB_140b82606;
        }
        uVar5 = (ulonglong)(iVar18 + (int)lVar19 + 1);
        uVar9 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar22 = uVar16 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar18 = (iVar10 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar18 < iVar21);
  }
LAB_140b82606:
  *param_2 = iVar8;
  return;
}



// FUNCTION 140b82a8c FUN_140b82a8c body=189 status=ok
// SIG undefined FUN_140b82a8c(void)

void FUN_140b82a8c(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = (longlong)(int)param_1[0x14] * 8 - (longlong)(int)param_1[0x26];
  if (param_1[0xd9] == lVar1) {
    FUN_14493765a(param_1 + 0xc4);
  }
  else {
    FUN_1447400e4(local_d8,lVar1,0);
    FUN_140055966(param_1 + 0xc4,local_d8);
    FUN_144a8b786(local_d8);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  (**(code **)(*param_1 + 0x2e0))(param_1);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b82b4a FUN_140b82b4a body=795 status=ok
// SIG undefined FUN_140b82b4a(void)

ulonglong FUN_140b82b4a(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined2 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_78;
  int local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x4c) != '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 2;
    uVar6 = (undefined7)(local_40 >> 8);
    bVar4 = 1;
    goto LAB_140b82e29;
  }
  local_41 = 0;
  (**(code **)(*param_2 + 0x90))(param_2,&local_98);
  plVar8 = local_90;
  if (local_90 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x28) = local_98;
    plVar11 = *(longlong **)(param_1 + 0x30);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
LAB_140b82bf4:
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000140b82c26:
        if (iVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x28) = local_98;
    plVar11 = *(longlong **)(param_1 + 0x30);
    if (local_90 == plVar11) {
      LOCK();
      plVar11 = local_90 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar11 = plVar8;
        goto joined_r0x000140b82c26;
      }
    }
    else {
      *(longlong **)(param_1 + 0x30) = local_90;
      if (plVar11 != (longlong *)0x0) goto LAB_140b82bf4;
    }
  }
  puVar10 = (undefined8 *)(param_1 + 0x28);
  plVar8 = (longlong *)(param_1 + 0x30);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_90 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(param_4 + 0x10);
  }
  (**(code **)(*(longlong *)*puVar10 + 0x10))((longlong *)*puVar10,puVar9,&local_41);
  lVar3 = *(longlong *)(param_3 + 0x20);
  if (((local_41 != 1) ||
      ((**(code **)(*(longlong *)*puVar10 + 0xa8))((longlong *)*puVar10,&local_50),
      lVar3 != local_50)) || ((local_41 & 1) == 0)) {
    if (*(int *)(param_4 + 0x18) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)(param_4 + 0x10);
    }
    local_b8 = 0;
    local_c8 = 0x89;
    local_c0 = lVar3;
    (**(code **)(*param_2 + 0x40))(param_2,&local_98,puVar9,0);
    if (0 < local_58 && local_68 == 0) {
      (**(code **)(**(longlong **)(local_60 + 0x18) + 0xa0))
                (*(longlong **)(local_60 + 0x18),&local_a8);
      plVar11 = local_a0;
      if (local_a0 == (longlong *)0x0) {
        *puVar10 = local_a8;
        plVar7 = (longlong *)*plVar8;
        if (plVar7 != (longlong *)0x0) {
          *plVar8 = 0;
LAB_140b82d65:
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x000140b82d92:
            if (iVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
        *puVar10 = local_a8;
        plVar7 = (longlong *)*plVar8;
        if (local_a0 == plVar7) {
          LOCK();
          plVar8 = local_a0 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar7 = plVar11;
            goto joined_r0x000140b82d92;
          }
        }
        else {
          *plVar8 = (longlong)local_a0;
          if (plVar7 != (longlong *)0x0) goto LAB_140b82d65;
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_a0 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
          }
        }
      }
      local_41 = 1;
    }
    FUN_14135de18(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  uVar5 = (**(code **)(*(longlong *)*puVar10 + 0x28))
                    ((longlong *)*puVar10,*(undefined4 *)(param_4 + 0x20));
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar4 = local_41;
LAB_140b82e29:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar4) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b82e66 FUN_140b82e66 body=552 status=ok
// SIG undefined FUN_140b82e66(void)

void FUN_140b82e66(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  size_t _Size;
  ushort uVar6;
  uint uVar7;
  
  lVar2 = DAT_14caf1c88;
  if (*(int *)(param_1 + 0x13f8) == 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar5 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    uVar7 = *(uint *)(lVar2 + uVar5 * 4);
    if (((int)uVar7 < 1) &&
       (uVar7 = *(uint *)(*(longlong *)(param_1 + 0x58) + 0x280), (int)uVar7 < 1)) {
      uVar7 = *(uint *)(param_1 + 0x13e8);
    }
    iVar1 = *(int *)(param_1 + 0x13f8);
    *(uint *)(param_1 + 0x13f8) = iVar1 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x13fc) - iVar1) < uVar7) {
      FUN_1405f7400(param_1 + 0x13f0);
    }
    memset((void *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x13f0)),0,
           (longlong)(int)uVar7 * 8);
    iVar1 = *(int *)(param_1 + 0x1408);
    *(uint *)(param_1 + 0x1408) = iVar1 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x140c) - iVar1) < uVar7) {
      FUN_1446f48e2(param_1 + 0x1400);
    }
    _Size = (longlong)(int)uVar7 << 2;
    memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 0x1400)),0,_Size);
    iVar1 = *(int *)(param_1 + 0x1418);
    *(uint *)(param_1 + 0x1418) = iVar1 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x141c) - iVar1) < uVar7) {
      FUN_1446f48e2(param_1 + 0x1410);
    }
    memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 0x1410)),0,_Size);
    if ((*(byte *)(param_1 + 0xa4) & 2) == 0) {
      iVar1 = *(int *)(param_1 + 0x1428);
      *(uint *)(param_1 + 0x1428) = iVar1 + uVar7;
      if ((uint)(*(int *)(param_1 + 0x142c) - iVar1) < uVar7) {
        FUN_1446f48e2((longlong *)(param_1 + 0x1420));
      }
      memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 0x1420)),0,_Size);
    }
    uVar6 = *(ushort *)(param_1 + 0x13d8) & 0x3fff;
    *(undefined8 *)(param_1 + 0x1c64) = 0;
    *(undefined8 *)(param_1 + 0x1c6c) = 0;
    *(undefined8 *)(param_1 + 0x1c74) = 0;
    *(undefined8 *)(param_1 + 0x1c7c) = 0;
    *(ushort *)(param_1 + 0x1c84) = uVar6;
    *(ushort *)(param_1 + 0x1c86) = uVar6;
    *(ushort *)(param_1 + 0x1c88) = uVar6;
    *(ushort *)(param_1 + 0x1c8c) = *(ushort *)(param_1 + 0x13dc) & 0x3fff;
    uVar6 = *(ushort *)(param_1 + 0x13dc) - 1 & 0x3fff;
    *(ushort *)(param_1 + 0x1c8e) = uVar6;
    *(ushort *)(param_1 + 0x1c8a) = uVar6;
  }
  return;
}



// FUNCTION 140b8308e FUN_140b8308e body=1616 status=ok
// SIG undefined FUN_140b8308e(void)

void FUN_140b8308e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  int local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar10 = FUN_14001cc68(0x260,0x10);
  FUN_1461ce59a(lVar10,0);
  lVar15 = *(longlong *)(param_1 + 0x140);
  *(longlong *)(param_1 + 0x140) = lVar10;
  if (lVar15 != 0) {
    FUN_145c6ba12(lVar15);
    FUN_1400020a8(lVar15);
    lVar10 = *(longlong *)(param_1 + 0x140);
  }
  if (lVar10 == 0) goto LAB_140b830e8;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0);
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,2,0x10);
  *local_d8 = &PTR_LAB_14a9e4ce0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_d8[2] = lVar11;
  *local_d8 = &PTR_FUN_14a9e4c70;
  local_d8[3] = param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  local_e8 = local_d8;
  local_d8 = (undefined8 *)0x0;
  local_e0 = 2;
  local_d0 = 0;
  local_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  FUN_1446efa72(&local_f8,0,3,0x10);
  puVar4 = local_f8;
  local_f0 = 3;
  *local_f8 = &PTR_LAB_14a9e4dc0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  local_f8[2] = lVar11;
  *local_f8 = &PTR_FUN_14a9e4d50;
  local_f8[3] = 0;
  if (param_1 == 0) {
    iVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_f8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar8 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar8 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar8 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar14;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar8 = iVar14;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar8;
  puVar4[4] = &LAB_147bcc158;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_145d5acaa(uVar3,&local_f8,&local_e8);
  lVar16 = *(longlong *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  local_108 = *(undefined8 *)(lVar16 + 0x198);
  local_100 = *(longlong *)(lVar16 + 0x1a0);
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
    lVar16 = *(longlong *)(param_1 + 0x58);
  }
  local_118 = *(undefined8 *)(lVar16 + 0x188);
  local_110 = *(longlong *)(lVar16 + 400);
  if (local_110 != 0) {
    LOCK();
    *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
    UNLOCK();
  }
  FUN_147079830(uVar3,&local_118,&local_108);
  local_148 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x278);
  local_158 = &local_128;
  local_128 = 0;
  uStack_120 = 0;
  local_150 = 0;
  FUN_142b03fc8(*(undefined8 *)(param_1 + 0x140),
                CONCAT71((int7)((ulonglong)lVar15 >> 8),lVar10 == 0) & 0xffffffff,
                *(int *)(param_1 + 0xa0) << 3,0);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  FUN_140056680(&local_88,L"Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)")
  ;
  FUN_142b045d0(uVar3,&local_138,&local_88,1);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  plVar13 = local_130;
  if (local_130 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x148) = local_138;
    plVar12 = *(longlong **)(param_1 + 0x150);
    if (plVar12 != (longlong *)0x0) {
LAB_140b833fd:
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      *(longlong **)(param_1 + 0x150) = plVar13;
      if (plVar13 != (longlong *)0x0) goto LAB_140b83411;
      goto LAB_140b8342e;
    }
  }
  else {
    LOCK();
    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x148) = local_138;
    if (*(longlong **)(param_1 + 0x150) != local_130) {
      LOCK();
      *(int *)((longlong)local_130 + 0xc) = *(int *)((longlong)local_130 + 0xc) + 1;
      UNLOCK();
      plVar12 = *(longlong **)(param_1 + 0x150);
      if (plVar12 != (longlong *)0x0) goto LAB_140b833fd;
      *(longlong **)(param_1 + 0x150) = local_130;
    }
LAB_140b83411:
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
LAB_140b8342e:
    local_138 = *(longlong *)(param_1 + 0x148);
  }
  if (((local_138 != 0) && (plVar13 = *(longlong **)(param_1 + 0x150), plVar13 != (longlong *)0x0))
     && (0 < (int)plVar13[1])) {
    iVar8 = (int)plVar13[1];
    lVar15 = 0;
    do {
      if (iVar8 == 0) goto LAB_140b83483;
      LOCK();
      iVar14 = (int)plVar13[1];
      bVar17 = iVar8 == iVar14;
      if (bVar17) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar14 = iVar8;
      }
      iVar8 = iVar14;
      UNLOCK();
    } while (!bVar17);
    lVar15 = *(longlong *)(param_1 + 0x148);
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
LAB_140b83483:
    FUN_1435b3bea(lVar15,*(undefined8 *)(param_1 + 0x58));
    local_c8 = *(longlong *)(lVar15 + 0xa0);
    uStack_80 = *(undefined8 *)(lVar15 + 0xa8);
    local_b8 = *(longlong **)(lVar15 + 0xb0);
    uStack_70 = *(undefined8 *)(lVar15 + 0xb8);
    local_68 = *(longlong *)(lVar15 + 0xc0);
    uStack_60 = *(undefined8 *)(lVar15 + 200);
    local_58 = *(undefined8 *)(lVar15 + 0xd0);
    uStack_50 = *(undefined8 *)(lVar15 + 0xd8);
    uVar6 = local_58;
    uVar7 = uStack_50;
    local_78 = local_b8;
    uVar5 = uStack_70;
    local_88 = local_c8;
    uVar3 = uStack_80;
    *(ulonglong *)(lVar15 + 0xd0) = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(lVar15 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined ***)(lVar15 + 0xc0) = &PTR_LAB_14a9e4e30;
    *(longlong *)(lVar15 + 200) = param_1;
    *(undefined8 *)(lVar15 + 0xb0) = 0;
    *(ulonglong *)(lVar15 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
    *(code **)(lVar15 + 0xa0) = FUN_143592690;
    *(ulonglong *)(lVar15 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar3;
    uStack_70 = uVar5;
    local_58 = uVar6;
    uStack_50 = uVar7;
    if (local_c8 != 0) {
      plVar13 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar13 = &local_a8;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  FUN_145ae349a(*(undefined8 *)(param_1 + 0x140));
  uVar9 = FUN_145ae3518(*(undefined8 *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x130) = uVar9;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_130 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if (local_d0 != 0) {
    if (local_d8 == (undefined8 *)0x0) goto LAB_140b830e8;
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
  }
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140b830e8:
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b836e0 FUN_140b836e0 body=2958 status=ok
// SIG undefined FUN_140b836e0(void)

void FUN_140b836e0(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  bool bVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  wchar_t *pwVar12;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong *plVar22;
  ushort uVar23;
  ulonglong uVar24;
  LARGE_INTEGER LVar25;
  double dVar26;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined8 local_118;
  char local_10d;
  int local_10c;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  LARGE_INTEGER local_e8;
  int local_e0;
  int local_dc;
  wchar_t *local_d8;
  int local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8 [2];
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  LARGE_INTEGER local_88;
  undefined8 uStack_80;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = param_2;
  plVar8 = (longlong *)FUN_1462484ba(param_2);
  if (plVar8 != (longlong *)0x0) {
    *(char *)(param_1 + 0x10a8) = (char)plVar8[5];
    *(undefined1 *)(param_1 + 0x10a9) = *(undefined1 *)((longlong)plVar8 + 0x29);
    *(undefined4 *)(param_1 + 0x10ac) = *(undefined4 *)((longlong)plVar8 + 0x2c);
    *(int *)(param_1 + 0x10b0) = (int)plVar8[6];
    if (((*(double *)(param_1 + 0x1350) == 0.0) && (!NAN(*(double *)(param_1 + 0x1350)))) &&
       (0 < (int)plVar8[9])) {
      QueryPerformanceCounter(&local_78);
      *(double *)(param_1 + 0x1350) =
           (double)(int)plVar8[9] / 1000.0 + (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    FUN_1406fa324(param_1 + 0x10b8,plVar8 + 0xc);
  }
  FUN_14099d55c(DAT_14caf28e8,&local_d8,0);
  local_120 = 0xffffffff;
  local_128 = 0;
  iVar6 = FUN_1447ee042(&local_d8,&DAT_149e06196,1,1);
  if (iVar6 == -1) {
    local_120 = 0xffffffff;
    local_128 = 0;
    iVar6 = FUN_1447ee042(&local_d8,&DAT_149e06162,1,1);
    if (iVar6 != -1) goto LAB_140b838a9;
    if (1 < local_d0) {
      iVar6 = _wtoi(local_d8);
      if (iVar6 != 0) {
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        if (DAT_14c892fa8 != param_2) goto LAB_140b83a7b;
      }
      *(bool *)(param_1 + 0x10a8) = iVar6 != 0;
    }
  }
  else {
LAB_140b838a9:
    local_78.QuadPart = 0;
    uStack_70 = 0;
    FUN_1403de9f2(&local_d8,&local_78,&DAT_149e06196,1);
    uVar21 = 0;
    if ((longlong)(int)uStack_70 != 0) {
      plVar22 = (longlong *)((longlong)(int)uStack_70 * 0x10 + local_78.QuadPart);
      LVar25 = local_78;
      local_108 = plVar8;
      local_100 = param_1;
      do {
        local_88.QuadPart = 0;
        uStack_80 = 0;
        FUN_1403de9f2(LVar25.QuadPart,&local_88,&DAT_149e06162,1);
        LVar3 = local_88;
        if (1 < (int)uStack_80) {
          FUN_1400021e4(&local_c8,&local_98);
          iVar6 = *(int *)(LVar3.QuadPart + 8);
          if (iVar6 == (int)uStack_90) {
            if (1 < iVar6) {
              lVar20 = 0;
              while( true ) {
                uVar13 = *(ushort *)(*(longlong *)LVar3 + lVar20);
                uVar15 = (ulonglong)uVar13;
                uVar23 = *(ushort *)((longlong)local_98 + lVar20);
                if (uVar13 != uVar23) break;
                if (uVar13 == 0) goto LAB_140b839bc;
LAB_140b8397f:
                lVar20 = lVar20 + 2;
              }
              if ((uVar23 | uVar13) < 0x80) {
                uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                uVar24 = (ulonglong)uVar23;
                uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar24]) goto LAB_140b8397f;
              }
              if (uVar13 != uVar23) goto LAB_140b839b1;
            }
LAB_140b839bc:
            bVar2 = 1 < *(int *)(local_88.QuadPart + 0x18);
          }
          else {
            if ((int)uStack_90 + iVar6 == 1) goto LAB_140b839bc;
LAB_140b839b1:
            bVar2 = false;
          }
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (bVar2) {
            pwVar12 = L"";
            if (*(int *)(local_88.QuadPart + 0x18) != 0) {
              pwVar12 = *(wchar_t **)(local_88.QuadPart + 0x10);
            }
            iVar6 = _wtoi(pwVar12);
            *(bool *)(local_100 + 0x10a8) = iVar6 != 0;
          }
        }
        FUN_1447a1747(local_88.QuadPart,uStack_80 & 0xffffffff);
        if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        LVar25.QuadPart = LVar25.QuadPart + 0x10;
      } while ((longlong *)LVar25.QuadPart != plVar22);
      plVar8 = local_108;
      param_1 = local_100;
      uVar21 = (int)uStack_70;
    }
    FUN_1447a1747(local_78.QuadPart,uVar21);
    if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140b83a7b:
  lVar20 = param_1 + 0x11d0;
  FUN_146124e15(*(undefined8 *)(param_1 + 0x11d0),*(undefined4 *)(param_1 + 0x11d8));
  *(undefined4 *)(param_1 + 0x11d8) = 0;
  if (*(int *)(param_1 + 0x11dc) != 0) {
    FUN_147bef4a8(lVar20);
  }
  bVar5 = *(byte *)(param_1 + 0x10a8);
  if (bVar5 == 1) {
    iVar6 = 0;
    if ((plVar8 != (longlong *)0x0) && (iVar6 = 0, local_f0 = lVar20, (longlong)(int)plVar8[8] != 0)
       ) {
      plVar22 = (longlong *)plVar8[7];
      plVar8 = plVar22 + (longlong)(int)plVar8[8] * 2;
      iVar6 = 0;
      local_100 = param_1;
      local_f8 = plVar8;
      do {
        FUN_140056680(&local_88,L"RPCDoSDetection");
        iVar11 = (int)uStack_80;
        iVar7 = ((int)uStack_80 == 0) + 1;
        local_78 = local_88;
        local_88.QuadPart = 0;
        iVar18 = uStack_80._4_4_;
        uStack_70 = uStack_80;
        uStack_80 = 0;
        iVar14 = iVar7 + iVar11;
        if (iVar14 < iVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar14);
        }
        if (iVar18 < iVar14) {
          FUN_1446f8c06(&local_78);
        }
        FUN_1400020e8(&local_78,&DAT_149e0635c,1);
        iVar11 = (int)uStack_70;
        if ((int)uStack_70 < 2) {
          local_e8.QuadPart = 0;
          local_e0 = (int)plVar22[1];
          lVar20 = (longlong)local_e0;
          pvVar1 = (void *)*plVar22;
          local_10c = iVar6;
          if (lVar20 == 0) {
            local_dc = 0;
            plVar8 = local_f8;
          }
          else {
            FUN_1446dd670(&local_e8,local_e0,0);
            memcpy((void *)local_e8,pvVar1,lVar20 * 2);
            plVar8 = local_f8;
            iVar6 = local_10c;
          }
        }
        else {
          iVar18 = (int)plVar22[1] + -1;
          if ((int)plVar22[1] == 0) {
            iVar18 = 0;
          }
          local_e8.s = local_78.s;
          local_78.QuadPart = 0;
          local_e0 = (int)uStack_70;
          iVar14 = uStack_70._4_4_;
          local_dc = uStack_70._4_4_;
          uStack_70 = 0;
          iVar7 = iVar18 + iVar11;
          if (iVar7 < iVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar18);
          }
          if (iVar14 < iVar7) {
            FUN_1446f8c06(&local_e8);
          }
          FUN_1400020e8(&local_e8,*plVar22,iVar18);
        }
        if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        LVar25.QuadPart = (LONGLONG)&DAT_149dfb77a;
        if (local_e0 != 0) {
          LVar25 = local_e8;
        }
        cVar4 = FUN_1417072b0(DAT_14c872ce0,LVar25.QuadPart,&DAT_14c872ce8);
        if (cVar4 != '\0') {
          local_10c = iVar6;
          local_108 = (longlong *)FUN_147be419c(local_f0);
          plVar19 = local_108 + 9;
          if (plVar19 != plVar22) {
            iVar6 = (int)plVar22[1];
            pvVar1 = (void *)*plVar22;
            *(int *)(local_108 + 10) = iVar6;
            if (iVar6 == 0 && *(int *)((longlong)local_108 + 0x54) == 0) {
              *(undefined4 *)((longlong)local_108 + 0x54) = 0;
            }
            else {
              FUN_1446dd670(plVar19,iVar6);
              if (iVar6 != 0) {
                memcpy((void *)*plVar19,pvVar1,(longlong)iVar6 * 2);
              }
            }
          }
          puVar17 = DAT_14c872ce8;
          lVar20 = (longlong)DAT_14c872cf0;
          puVar16 = DAT_14c872ce8;
          if (lVar20 == 0) {
            puVar16 = &DAT_149dfb77a;
          }
          LVar25.QuadPart = (LONGLONG)&DAT_149dfb77a;
          if (local_e0 != 0) {
            LVar25 = local_e8;
          }
          if (puVar16 == (undefined2 *)0x0) {
            local_78.QuadPart = 0;
            uStack_70 = CONCAT44(uStack_70._4_4_,DAT_14c872cf0);
            if (DAT_14c872cf0 == 0) {
              uStack_70 = 0;
            }
            else {
              FUN_1446dd670(&local_78,DAT_14c872cf0,0);
              memcpy((void *)local_78,puVar17,lVar20 * 2);
            }
          }
          else {
            FUN_140056680(&local_78);
          }
          local_88.QuadPart = 0;
          uStack_80 = 0;
          local_10d = FUN_146220742(DAT_14c872ce0,LVar25.QuadPart,&local_88,&local_78);
          param_1 = local_100;
          if (local_10d != '\0') {
            if ((longlong)(int)uStack_80 != 0) {
              plVar8 = (longlong *)((longlong)(int)uStack_80 * 0x10 + local_88.QuadPart);
              LVar25 = local_88;
              do {
                local_98 = (undefined2 *)0x0;
                uStack_90 = 0;
                local_a8 = (undefined2 *)0x0;
                uStack_a0 = 0;
                FUN_140056680(local_b8,&DAT_149e06162);
                local_120 = 0;
                local_128 = 1;
                cVar4 = FUN_1407cdbc6(LVar25.QuadPart,local_b8,&local_98,&local_a8);
                if (local_b8[0] != 0) {
                  FUN_1400020a8();
                }
                if (cVar4 != '\0') {
                  if (DAT_14caf28c8 == 0) {
                    uVar9 = FUN_140002dac();
                    DAT_14caf28c8 = FUN_140002ddd(FUN_1463ed9a3,uVar9,L"RPCDoSStateConfig");
                  }
                  lVar20 = DAT_14caf28c8;
                  puVar17 = &DAT_149dfb77a;
                  if ((int)uStack_90 != 0) {
                    puVar17 = local_98;
                  }
                  FUN_1446f470e(&local_c0,puVar17,1);
                  for (plVar19 = *(longlong **)(lVar20 + 0x70); plVar19 != (longlong *)0x0;
                      plVar19 = (longlong *)plVar19[9]) {
                    if (plVar19[4] == local_c0) {
                      if ((*(byte *)((longlong)plVar19 + 0x39) & 0x40) != 0) {
                        puVar17 = local_a8;
                        if ((int)uStack_a0 == 0) {
                          puVar17 = &DAT_149dfb77a;
                        }
                        if (puVar17 != (undefined2 *)0x0) {
                          local_118 = DAT_14c872be8;
                          local_120 = 0x8000000;
                          local_128 = 0;
                          uStack_124 = 0;
                          (**(code **)(*plVar19 + 0xf8))(plVar19,puVar17,local_108,1);
                        }
                      }
                      break;
                    }
                  }
                }
                if (local_a8 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_a8);
                }
                if (local_98 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                LVar25.QuadPart = LVar25.QuadPart + 0x10;
              } while ((longlong *)LVar25.QuadPart != plVar8);
            }
            (**(code **)(*local_108 + 8))();
            plVar8 = local_f8;
          }
          FUN_1447a1747(local_88.QuadPart,uStack_80 & 0xffffffff);
          if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
            FUN_1400020a8();
          }
          iVar6 = local_10c;
          if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_10d != '\0') {
            cVar4 = (char)local_108[0xb];
            iVar11 = (int)*(short *)((longlong)local_108 + 0x1e) + (int)cVar4;
            if (iVar6 < iVar11) {
              iVar6 = iVar11;
            }
            cVar10 = *(char *)(param_1 + 0x1359);
            if (*(char *)(param_1 + 0x1359) < cVar4) {
              cVar10 = cVar4;
            }
            *(char *)(param_1 + 0x1359) = cVar10;
          }
        }
        if ((longlong *)local_e8.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar22 = plVar22 + 2;
      } while (plVar22 != plVar8);
    }
    if (*(int *)(param_1 + 0x11d8) < 1) {
      *(undefined1 *)(param_1 + 0x10a8) = 0;
      goto LAB_140b841fe;
    }
    FUN_147be412e((longlong)*(char *)(param_1 + 0x11e0) * 0x78 + *(longlong *)(param_1 + 0x11d0),
                  param_1);
    FUN_147be41d8(param_1 + 0x1218,iVar6);
    bVar5 = *(byte *)(param_1 + 0x10a8);
  }
  if ((bVar5 & 1) != 0) {
    if ((*(int *)(param_1 + 0x13b8) == 0) && (*(int *)(param_1 + 0x13bc) != 0x80)) {
      FUN_147bef6f6(param_1 + 0x13b0,0x80);
    }
    FUN_14099d55c(DAT_14caf2928,&local_78,0);
    if (1 < (int)uStack_70) {
      local_88.QuadPart = 0;
      uStack_80 = 0;
      FUN_1403de9f2(&local_78,&local_88,&DAT_149e06196,1);
      if (*(int *)(local_88.QuadPart + 8) == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = *(undefined2 **)local_88;
      }
      FUN_1446f470e(&local_98,puVar17,1);
      *(undefined2 **)(param_1 + 0x10c8) = local_98;
      uVar15 = uStack_80 & 0xffffffff;
      if ((int)uStack_80 < 2) {
        *(undefined8 *)(param_1 + 0x10d0) = 0x3ff0000000000000;
        dVar26 = 0.0;
      }
      else {
        if (*(int *)(local_88.QuadPart + 0x18) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)(local_88.QuadPart + 0x10);
        }
        dVar26 = _wtof(pwVar12);
        uVar15 = uStack_80 & 0xffffffff;
        *(double *)(param_1 + 0x10d0) = (double)(float)dVar26;
        dVar26 = 0.0;
        if (2 < (int)uStack_80) {
          if (*(int *)(local_88.QuadPart + 0x28) == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)(local_88.QuadPart + 0x20);
          }
          dVar26 = _wtof(pwVar12);
          dVar26 = (double)(float)dVar26;
          uVar15 = uStack_80 & 0xffffffff;
        }
      }
      *(double *)(param_1 + 0x10d8) = dVar26;
      FUN_1447a1747(local_88.QuadPart,uVar15);
      if ((longlong *)local_88.QuadPart != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140b841fe:
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b84270 FUN_140b84270 body=501 status=ok
// SIG undefined FUN_140b84270(void)

void FUN_140b84270(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_90;
  ulonglong local_88 [2];
  ulonglong local_78 [3];
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) {
    if (0 < (int)param_2[1]) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(*param_2 + lVar6 * 4);
        puVar3 = (uint *)FUN_140b84466(param_4);
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = param_1 + 0x10;
        }
        lVar2 = (longlong)iVar1 * 0x1c;
        *puVar3 = *(uint *)(lVar4 + 4 + lVar2) / 3;
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = param_1 + 0x10;
        }
        puVar3[1] = *(uint *)(lVar4 + 8 + lVar2);
        puVar3[2] = 0x3f800000;
        puVar3[3] = (uint)lVar6;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[1]);
    }
  }
  else {
    FUN_143785b7a(&local_90);
    local_90 = &PTR_LAB_14ad88a00;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_a8 = (undefined4)*param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = (undefined4)param_2[1];
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_1480b4d8e(&local_90,&local_a8,param_3);
    if (0 < (int)param_2[1]) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(*param_2 + lVar6 * 4);
        puVar3 = (uint *)FUN_140b84466(param_4);
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = param_1 + 0x10;
        }
        lVar2 = (longlong)iVar1 * 0x1c;
        *puVar3 = *(uint *)(lVar4 + 4 + lVar2) / 3;
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = param_1 + 0x10;
        }
        puVar3[1] = *(uint *)(lVar4 + 8 + lVar2);
        uVar5 = (longlong)local_88 + ((longlong)local_88[0] >> 0x18);
        if ((local_88[0] & 1) == 0) {
          uVar5 = local_88[0];
        }
        puVar3[2] = *(uint *)(uVar5 + lVar6 * 4);
        uVar5 = (longlong)local_78 + ((longlong)local_78[0] >> 0x18);
        if ((local_78[0] & 1) == 0) {
          uVar5 = local_78[0];
        }
        puVar3[3] = *(uint *)(uVar5 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[1]);
    }
    local_90 = &PTR_LAB_14ad88a00;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140296a6e(&local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b84466 FUN_140b84466 body=61 status=ok
// SIG undefined FUN_140b84466(void)

longlong FUN_140b84466(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1480b4ee0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_140b844a3(lVar2);
  return lVar2;
}



// FUNCTION 140b844a3 FUN_140b844a3 body=7 status=ok
// SIG undefined FUN_140b844a3(void)

void FUN_140b844a3(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 140b844aa FUN_140b844aa body=179 status=ok
// SIG undefined FUN_140b844aa(void)

undefined8 *
FUN_140b844aa(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149e46a40;
  FUN_140c50e9c(param_1 + 3,param_2,1);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_140b8455e(param_1 + 9,param_3);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(byte *)((longlong)param_1 + 0x244) = *(byte *)((longlong)param_1 + 0x244) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x245) = 0;
  return param_1;
}



// FUNCTION 140b8455e FUN_140b8455e body=1836 status=ok
// SIG undefined FUN_140b8455e(void)

undefined4 * FUN_140b8455e(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = param_2[4];
  pvVar3 = *(void **)(param_2 + 2);
  param_1[4] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy(*(void **)(param_1 + 2),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar2 = param_2[8];
  pvVar3 = *(void **)(param_2 + 6);
  param_1[8] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar2,0);
    memcpy(*(void **)(param_1 + 6),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar2 = param_2[0xc];
  pvVar3 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar2,0);
    memcpy(*(void **)(param_1 + 10),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar2 = param_2[0x10];
  pvVar3 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar2,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar2 = param_2[0x14];
  pvVar3 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar2,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar2 = param_2[0x18];
  pvVar3 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar2,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar2 = param_2[0x1c];
  pvVar3 = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar2,0);
    memcpy(*(void **)(param_1 + 0x1a),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar2 = param_2[0x20];
  pvVar3 = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar2,0);
    memcpy(*(void **)(param_1 + 0x1e),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x22) = 0;
  iVar2 = param_2[0x24];
  pvVar3 = *(void **)(param_2 + 0x22);
  param_1[0x24] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x25] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x22,iVar2,0);
    memcpy(*(void **)(param_1 + 0x22),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar2 = param_2[0x28];
  pvVar3 = *(void **)(param_2 + 0x26);
  param_1[0x28] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x29] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x26,iVar2,0);
    memcpy(*(void **)(param_1 + 0x26),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x2a) = 0;
  iVar2 = param_2[0x2c];
  pvVar3 = *(void **)(param_2 + 0x2a);
  param_1[0x2c] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2a,iVar2,0);
    memcpy(*(void **)(param_1 + 0x2a),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x2e) = 0;
  iVar2 = param_2[0x30];
  uVar4 = *(undefined8 *)(param_2 + 0x2e);
  param_1[0x30] = iVar2;
  if (iVar2 == 0) {
    param_1[0x31] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x2e,iVar2,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x2e),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x32) = 0;
  iVar2 = param_2[0x34];
  uVar4 = *(undefined8 *)(param_2 + 0x32);
  param_1[0x34] = iVar2;
  if (iVar2 == 0) {
    param_1[0x35] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x32,iVar2,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x32),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x36) = 0;
  iVar2 = param_2[0x38];
  pvVar3 = *(void **)(param_2 + 0x36);
  param_1[0x38] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x39] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x36,iVar2,0);
    memcpy(*(void **)(param_1 + 0x36),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined8 *)(param_1 + 0x3a) = 0;
  iVar2 = param_2[0x3c];
  uVar4 = *(undefined8 *)(param_2 + 0x3a);
  param_1[0x3c] = iVar2;
  if (iVar2 == 0) {
    param_1[0x3d] = 0;
  }
  else {
    FUN_140b85040(param_1 + 0x3a,iVar2,0);
    FUN_140b84c8a(*(undefined8 *)(param_1 + 0x3a),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x3e) = 0;
  iVar2 = param_2[0x40];
  uVar4 = *(undefined8 *)(param_2 + 0x3e);
  param_1[0x40] = iVar2;
  if (iVar2 == 0) {
    param_1[0x41] = 0;
  }
  else {
    FUN_140b85d28(param_1 + 0x3e,iVar2,0);
    FUN_140b85cab(*(undefined8 *)(param_1 + 0x3e),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x42) = 0;
  iVar2 = param_2[0x44];
  pvVar3 = *(void **)(param_2 + 0x42);
  param_1[0x44] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0x45] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x42,iVar2,0);
    memcpy(*(void **)(param_1 + 0x42),pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
  cVar1 = *(char *)(param_2 + 0x48);
  *(char *)(param_1 + 0x48) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x47] = param_2[0x47];
  }
  uVar4 = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)((longlong)param_1 + 299) = *(undefined8 *)((longlong)param_2 + 299);
  *(undefined8 *)(param_1 + 0x49) = uVar4;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0xffffffff00000080;
  param_1[0x5b] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  FUN_140b855d0(param_1 + 0x4e,param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0xffffffff00000080;
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  FUN_140b855d0(param_1 + 0x62,param_2 + 0x62);
  *(undefined8 *)(param_1 + 0x76) = 0;
  iVar2 = param_2[0x78];
  uVar4 = *(undefined8 *)(param_2 + 0x76);
  param_1[0x78] = iVar2;
  if (iVar2 == 0) {
    param_1[0x79] = 0;
  }
  else {
    FUN_140b85908(param_1 + 0x76,iVar2,0);
    FUN_140b84cc6(*(undefined8 *)(param_1 + 0x76),uVar4,iVar2);
  }
  *(undefined8 *)(param_1 + 0x7a) = 0;
  iVar2 = param_2[0x7c];
  uVar4 = *(undefined8 *)(param_2 + 0x7a);
  param_1[0x7c] = iVar2;
  if (iVar2 == 0) {
    param_1[0x7d] = 0;
  }
  else {
    FUN_14685045a(param_1 + 0x7a,iVar2,0);
    FUN_1468504bc(*(undefined8 *)(param_1 + 0x7a),uVar4,iVar2);
  }
  return param_1;
}



// FUNCTION 140b84c8a FUN_140b84c8a body=60 status=ok
// SIG undefined FUN_140b84c8a(void)

void FUN_140b84c8a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140b8518e(param_1,param_2);
    param_1 = param_1 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return;
}



// FUNCTION 140b84cc6 FUN_140b84cc6 body=60 status=ok
// SIG undefined FUN_140b84cc6(void)

void FUN_140b84cc6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140b84d02(param_1,param_2);
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return;
}



// FUNCTION 140b84d02 FUN_140b84d02 body=829 status=ok
// SIG undefined FUN_140b84d02(void)

undefined8 * FUN_140b84d02(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar2 * 2);
  }
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 4);
  pvVar3 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar2,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar2 * 2);
  }
  param_1[5] = 0;
  iVar2 = *(int *)(param_2 + 6);
  pvVar3 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar2,0);
    memcpy((void *)param_1[5],pvVar3,(longlong)iVar2 * 2);
  }
  param_1[7] = 0;
  iVar2 = *(int *)(param_2 + 8);
  uVar4 = param_2[7];
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140b856de(param_1 + 7,iVar2,0);
    FUN_140b8566a(param_1[7],uVar4,iVar2);
  }
  param_1[9] = 0;
  iVar2 = *(int *)(param_2 + 10);
  uVar4 = param_2[9];
  *(int *)(param_1 + 10) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_140b856de(param_1 + 9,iVar2,0);
    FUN_140b8566a(param_1[9],uVar4,iVar2);
  }
  param_1[0xb] = 0;
  iVar2 = *(int *)(param_2 + 0xc);
  pvVar3 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_140b85b82(param_1 + 0xb,iVar2);
    memcpy((void *)param_1[0xb],pvVar3,(longlong)iVar2);
  }
  param_1[0xd] = 0;
  iVar2 = *(int *)(param_2 + 0xe);
  pvVar3 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_140b85b82(param_1 + 0xd,iVar2);
    memcpy((void *)param_1[0xd],pvVar3,(longlong)iVar2);
  }
  param_1[0xf] = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  pvVar3 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_140b85a58(param_1 + 0xf,iVar2);
    memcpy((void *)param_1[0xf],pvVar3,(longlong)iVar2);
  }
  param_1[0x11] = 0;
  iVar2 = *(int *)(param_2 + 0x12);
  pvVar3 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_140b85a58(param_1 + 0x11,iVar2);
    memcpy((void *)param_1[0x11],pvVar3,(longlong)iVar2);
  }
  param_1[0x13] = 0;
  iVar2 = *(int *)(param_2 + 0x14);
  uVar4 = param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x13,iVar2,0);
    FUN_140b8566a(param_1[0x13],uVar4,iVar2);
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  cVar1 = *(char *)(param_2 + 0x16);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  }
  return param_1;
}



// FUNCTION 140b85040 FUN_140b85040 body=333 status=ok
// SIG undefined FUN_140b85040(void)

void FUN_140b85040(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x168;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b850b1;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140b850b1:
    iVar5 = (int)(uVar4 / 0x168);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x168,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b8518e FUN_140b8518e body=1089 status=ok
// SIG undefined FUN_140b8518e(void)

undefined4 * FUN_140b8518e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  uVar2 = *(undefined8 *)(param_2 + 4);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_140b856de(param_1 + 4,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[10] = iVar1;
  if (iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_140b856de(param_1 + 8,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  FUN_140b855d0(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x2b) = 0xffffffff00000080;
  param_1[0x2d] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  FUN_140b855d0(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x34) = 0;
  iVar1 = param_2[0x36];
  pvVar3 = *(void **)(param_2 + 0x34);
  param_1[0x36] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x37] = 0;
  }
  else {
    FUN_140b85a58(param_1 + 0x34,iVar1);
    memcpy(*(void **)(param_1 + 0x34),pvVar3,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = param_2[0x3a];
  pvVar3 = *(void **)(param_2 + 0x38);
  param_1[0x3a] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x3b] = 0;
  }
  else {
    FUN_140b85a58(param_1 + 0x38,iVar1);
    memcpy(*(void **)(param_1 + 0x38),pvVar3,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x3c) = 0;
  iVar1 = param_2[0x3e];
  pvVar3 = *(void **)(param_2 + 0x3c);
  param_1[0x3e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x3f] = 0;
  }
  else {
    FUN_140b85b82(param_1 + 0x3c,iVar1);
    memcpy(*(void **)(param_1 + 0x3c),pvVar3,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = param_2[0x42];
  pvVar3 = *(void **)(param_2 + 0x40);
  param_1[0x42] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x43] = 0;
  }
  else {
    FUN_140b85b82(param_1 + 0x40,iVar1);
    memcpy(*(void **)(param_1 + 0x40),pvVar3,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  iVar1 = param_2[0x46];
  uVar2 = *(undefined8 *)(param_2 + 0x44);
  param_1[0x46] = iVar1;
  if (iVar1 == 0) {
    param_1[0x47] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x44,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x44),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar1 = param_2[0x4a];
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[0x4a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x4b] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x48,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x48),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x4c) = 0;
  iVar1 = param_2[0x4e];
  uVar2 = *(undefined8 *)(param_2 + 0x4c);
  param_1[0x4e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x4f] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x4c,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x4c),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  iVar1 = param_2[0x52];
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x52] = iVar1;
  if (iVar1 == 0) {
    param_1[0x53] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x50,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x50),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x54) = 0;
  iVar1 = param_2[0x56];
  uVar2 = *(undefined8 *)(param_2 + 0x54);
  param_1[0x56] = iVar1;
  if (iVar1 == 0) {
    param_1[0x57] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x54,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x54),uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 140b855d0 FUN_140b855d0 body=154 status=ok
// SIG undefined FUN_140b855d0(void)

longlong FUN_140b855d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140b855fc;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140b855fc:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140b857c2(param_1,param_2);
  return param_1;
}



// FUNCTION 140b8566a FUN_140b8566a body=116 status=ok
// SIG undefined FUN_140b8566a(void)

void FUN_140b8566a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b856de FUN_140b856de body=228 status=ok
// SIG undefined FUN_140b856de(void)

void FUN_140b856de(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b857c2 FUN_140b857c2 body=325 status=ok
// SIG undefined FUN_140b857c2(void)

undefined8 * FUN_140b857c2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a4a140(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_1468503a2(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(puVar8 + 8);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 10;
        puVar7 = puVar7 + 10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140b85908 FUN_140b85908 body=336 status=ok
// SIG undefined FUN_140b85908(void)

void FUN_140b85908(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xb8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b85979;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140b85979:
    iVar5 = (int)(uVar4 / 0xb8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xb8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b85a58 FUN_140b85a58 body=297 status=ok
// SIG undefined FUN_140b85a58(void)

void FUN_140b85a58(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = param_2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (longlong)(int)param_2 + 0xf;
      if (param_2 < 0x7ff1) {
        uVar4 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar3) {
            uVar5 = (ulonglong)bVar3;
          }
          uVar7 = 0x32 - (ulonglong)bVar3;
          do {
            uVar4 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140b85ab5;
            lVar2 = uVar5 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar2 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((int)(uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
    }
  }
LAB_140b85ab5:
  uVar6 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar4) {
    uVar6 = uVar4;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
  }
  *(uint *)(param_1 + 0xc) = uVar6;
  return;
}



// FUNCTION 140b85b82 FUN_140b85b82 body=297 status=ok
// SIG undefined FUN_140b85b82(void)

void FUN_140b85b82(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = param_2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (longlong)(int)param_2 + 0xf;
      if (param_2 < 0x7ff1) {
        uVar4 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar3) {
            uVar5 = (ulonglong)bVar3;
          }
          uVar7 = 0x32 - (ulonglong)bVar3;
          do {
            uVar4 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140b85bdf;
            lVar2 = uVar5 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar2 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((int)(uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
    }
  }
LAB_140b85bdf:
  uVar6 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar4) {
    uVar6 = uVar4;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
  }
  *(uint *)(param_1 + 0xc) = uVar6;
  return;
}



// FUNCTION 140b85cab FUN_140b85cab body=124 status=ok
// SIG undefined FUN_140b85cab(void)

void FUN_140b85cab(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -1);
      _Src = (void *)puVar2[-2];
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1[2] = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b85d28 FUN_140b85d28 body=334 status=ok
// SIG undefined FUN_140b85d28(void)

void FUN_140b85d28(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b85d9a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140b85d9a:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140b85e76 FUN_140b85e76 body=25 status=ok
// SIG undefined FUN_140b85e76(void)

undefined8 FUN_140b85e76(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140b85e90 FUN_140b85e90 body=1760 status=ok
// SIG undefined FUN_140b85e90(void)

void FUN_140b85e90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_4 != 0) {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_50;
      local_50 = FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1464cee30;
      local_98 = &LAB_148bfac22;
      local_a0 = &LAB_140f21842;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar7 = FUN_140b86571(param_4), lVar7 != 0)) {
      uVar3 = *(uint *)(lVar7 + 0xc);
      local_50 = (code *)(ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar20 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar20 = *(int *)(lVar7 + 0x10);
        bVar23 = iVar20 == 0;
        if (bVar23) {
          *(int *)(lVar7 + 0x10) = iVar13;
          iVar20 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_50;
        if (bVar23) {
          iVar20 = iVar13;
        }
      }
      local_50._0_4_ = uVar3;
      local_50 = (code *)CONCAT44(iVar20,(uint)local_50);
      if ((longlong)*(int *)(param_1 + 0x38) != 0) {
        plVar19 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xd8);
        lVar7 = (longlong)*(int *)(param_1 + 0x38) * 0x150;
        do {
          cVar4 = FUN_14007c268(plVar19 + -0x1b,&local_50);
          if (cVar4 != '\0') {
            if (plVar19 != (longlong *)&DAT_000000d8) {
              uVar3 = *(uint *)(param_4 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              uVar21 = *(uint *)(lVar7 + 0x10);
              if (*(uint *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar20 = DAT_14c964868 + 1;
                UNLOCK();
                uVar17 = DAT_14c964868 + 1;
                bVar23 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar20;
                if (bVar23) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar17);
                }
                LOCK();
                uVar21 = *(uint *)(lVar7 + 0x10);
                bVar23 = uVar21 == 0;
                if (bVar23) {
                  *(uint *)(lVar7 + 0x10) = uVar17;
                  uVar21 = 0;
                }
                UNLOCK();
                if (bVar23) {
                  uVar21 = uVar17;
                }
              }
              local_68 = param_4;
              if (*(int *)((longlong)plVar19 + 0x34) == 0) {
                uVar17 = *(uint *)(plVar19 + 1);
                uVar15 = (ulonglong)uVar17;
                *(uint *)(plVar19 + 1) = uVar17 + 1;
                if (*(uint *)((longlong)plVar19 + 0xc) == uVar17) {
                  FUN_144869a3c(plVar19,uVar17);
                }
                iVar20 = (int)plVar19[5];
                if (iVar20 == 0) {
                  iVar13 = -1;
                }
                else {
                  iVar13 = iVar20 + 0x1e;
                  if (-1 < iVar20 + -1) {
                    iVar13 = iVar20 + -1;
                  }
                  iVar13 = iVar13 >> 5;
                }
                plVar11 = plVar19 + 2;
                iVar10 = iVar20 + 1;
                iVar18 = iVar20 + 0x1f;
                if (-1 < iVar20) {
                  iVar18 = iVar20;
                }
                if (iVar18 >> 5 == iVar13) {
                  *(int *)(plVar19 + 5) = iVar10;
                }
                else {
                  if (*(int *)((longlong)plVar19 + 0x2c) <= iVar20) {
                    if (iVar20 + 0x20U < 0xa0) {
                      iVar10 = 0x80;
                      iVar13 = iVar20;
                    }
                    else {
                      uVar5 = iVar20 + 0x20U >> 5;
                      if (*(int *)((longlong)plVar19 + 0x2c) + 0x1fU < 0xa0) {
                        uVar22 = 4;
                        if (4 < uVar5) {
                          uVar22 = uVar5;
                        }
                      }
                      else {
                        uVar22 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
                      }
                      uVar12 = FUN_144a3809e(uVar22 << 2,0);
                      iVar13 = (int)(uVar12 >> 2);
                      iVar10 = -0x20;
                      if ((int)uVar5 <= iVar13) {
                        iVar10 = iVar13 << 5;
                      }
                      iVar13 = (int)plVar19[5];
                    }
                    *(int *)((longlong)plVar19 + 0x2c) = iVar10;
                    FUN_1446efbd8(plVar11,iVar13);
                    iVar10 = (int)plVar19[5] + 1;
                  }
                  iVar13 = iVar10 + 0x1f;
                  if (-1 < iVar10) {
                    iVar13 = iVar10;
                  }
                  *(int *)(plVar19 + 5) = iVar10;
                  if (iVar10 % 0x20 != 0) {
                    plVar14 = (longlong *)plVar19[4];
                    if ((longlong *)plVar19[4] == (longlong *)0x0) {
                      plVar14 = plVar11;
                    }
                    bVar9 = -(char)(iVar10 % 0x20);
                    *(uint *)((longlong)plVar14 + (longlong)(iVar13 >> 5) * 4) =
                         (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar13 >> 5) * 4) <<
                               (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
                  }
                }
                lVar7 = (longlong)(int)uVar17;
                if ((longlong *)plVar19[4] != (longlong *)0x0) {
                  plVar11 = (longlong *)plVar19[4];
                }
                bVar9 = (byte)iVar20 & 0x1f;
                puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar18 >> 5) * 4);
                *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
              }
              else {
                uVar15 = (ulonglong)*(uint *)(plVar19 + 6);
                lVar7 = (longlong)(int)*(uint *)(plVar19 + 6);
                iVar20 = *(int *)(*plVar19 + 4 + lVar7 * 0x10);
                *(int *)(plVar19 + 6) = iVar20;
                iVar13 = *(int *)((longlong)plVar19 + 0x34) + -1;
                *(int *)((longlong)plVar19 + 0x34) = iVar13;
                if (iVar13 != 0) {
                  *(undefined4 *)(*plVar19 + (longlong)iVar20 * 0x10) = 0xffffffff;
                }
              }
              iVar20 = (int)uVar15;
              uVar17 = 1 << ((byte)uVar15 & 0x1f);
              plVar11 = (longlong *)plVar19[4];
              if ((longlong *)plVar19[4] == (longlong *)0x0) {
                plVar11 = plVar19 + 2;
              }
              iVar13 = iVar20 + 0x1f;
              if (-1 < iVar20) {
                iVar13 = iVar20;
              }
              puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
              *puVar1 = *puVar1 | uVar17;
              lVar16 = *plVar19;
              lVar7 = lVar7 * 0x10;
              puVar2 = (undefined8 *)(lVar16 + lVar7);
              *(ulonglong *)(lVar16 + lVar7) = CONCAT44(uVar21,uVar3);
              *(undefined4 *)(lVar16 + 8 + lVar7) = 0xffffffff;
              uVar22 = uVar3 ^ uVar21;
              uVar5 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
              if ((uVar5 == 0) || (uVar5 == 1)) goto LAB_140b86134;
              plVar11 = plVar19 + 7;
              if ((longlong *)plVar19[8] != (longlong *)0x0) {
                plVar11 = (longlong *)plVar19[8];
              }
              iVar20 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar19[9] - 1U & uVar22) * 4);
              if (iVar20 == -1) goto LAB_140b86134;
              lVar7 = *plVar19;
              local_78 = uVar15;
              local_70 = (ulonglong)uVar22;
              local_60 = (longlong)(iVar13 >> 5);
              goto LAB_140b860df;
            }
            break;
          }
          plVar19 = plVar19 + 0x2a;
          lVar7 = lVar7 + -0x150;
        } while (lVar7 != 0);
      }
    }
  }
  goto LAB_140b85ef8;
  while (iVar20 = *(int *)(lVar7 + 8 + lVar16), iVar20 != -1) {
LAB_140b860df:
    lVar16 = (longlong)iVar20 * 0x10;
    local_50 = *(code **)(lVar7 + lVar16);
    local_58 = CONCAT44(uVar21,uVar3);
    cVar4 = FUN_140b865d4(&local_50,&local_58);
    lVar7 = *plVar19;
    if (cVar4 != '\0') {
      *(undefined8 *)(lVar7 + lVar16) = *puVar2;
      lVar7 = *plVar19;
      iVar20 = (int)local_78;
      if (*(int *)((longlong)plVar19 + 0x34) != 0) {
        *(int *)(lVar7 + (longlong)(int)plVar19[6] * 0x10) = iVar20;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar20 * 0x10) = 0xffffffff;
      uVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)plVar19 + 0x34)) {
        uVar6 = (undefined4)plVar19[6];
      }
      *(undefined4 *)(lVar7 + (longlong)iVar20 * 0x10 + 4) = uVar6;
      *(int *)(plVar19 + 6) = iVar20;
      *(int *)((longlong)plVar19 + 0x34) = *(int *)((longlong)plVar19 + 0x34) + 1;
      plVar11 = plVar19 + 2;
      if ((longlong *)plVar19[4] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar19[4];
      }
      puVar1 = (uint *)((longlong)plVar11 + local_60 * 4);
      *puVar1 = *puVar1 & ~uVar17;
      goto LAB_140b85ef8;
    }
  }
  uVar5 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
  uVar22 = (uint)local_70;
  uVar15 = local_78;
LAB_140b86134:
  lVar7 = local_68;
  iVar20 = 1;
  if (3 < uVar5) {
    uVar12 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar20 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar20 <= (int)plVar19[9])) {
    uVar22 = (int)plVar19[9] - 1U & uVar22;
    *(uint *)((longlong)puVar2 + 0xc) = uVar22;
    plVar11 = (longlong *)plVar19[8];
    if ((longlong *)plVar19[8] == (longlong *)0x0) {
      plVar11 = plVar19 + 7;
    }
    *(undefined4 *)(puVar2 + 1) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)plVar19[9] - 1U & (longlong)(int)uVar22) * 4);
    plVar11 = (longlong *)plVar19[8];
    if ((longlong *)plVar19[8] == (longlong *)0x0) {
      plVar11 = plVar19 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)plVar19[9] - 1U & (longlong)(int)uVar22) * 4) =
         (int)uVar15;
  }
  else {
    *(int *)(plVar19 + 9) = iVar20;
    FUN_140b86678(plVar19);
  }
  *(int *)((longlong)plVar19 + 0x54) = *(int *)((longlong)plVar19 + 0x54) + 1;
  iVar13 = (**(code **)(*(longlong *)(lVar7 + 0x10c0) + 0x28))(lVar7 + 0x10c0);
  *(int *)(plVar19 + 10) = (int)plVar19[10] + iVar13;
  iVar20 = (int)plVar19[0xb];
  if (iVar13 <= (int)plVar19[0xb]) {
    iVar20 = iVar13;
  }
  iVar10 = *(int *)((longlong)plVar19 + 0x5c);
  if (*(int *)((longlong)plVar19 + 0x5c) < iVar13) {
    iVar10 = iVar13;
  }
  *(int *)(plVar19 + 0xb) = iVar20;
  *(int *)((longlong)plVar19 + 0x5c) = iVar10;
  if (*(longlong *)(lVar7 + 0x3f70) != 0) {
    local_50 = *(code **)(*(longlong *)(lVar7 + 0x3f70) + 0xfb0);
    uVar3 = (uint)((ulonglong)local_50 >> 0x10);
    uVar21 = (uint)local_50 & 0xffff;
    piVar8 = (int *)FUN_140dfb35a(plVar19[0xd] + 8,
                                  ((uint)local_50 << 0x10 | uVar21) +
                                  (int)((ulonglong)local_50 >> 0x20) +
                                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar21 >> 4));
    *piVar8 = *piVar8 + 1;
  }
LAB_140b85ef8:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b86571 FUN_140b86571 body=99 status=ok
// SIG undefined FUN_140b86571(void)

longlong FUN_140b86571(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_1401b0f18();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2), lVar3 != 0)) {
    return lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    uVar1 = FUN_1401b0f18();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b865c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140b865d4 FUN_140b865d4 body=164 status=ok
// SIG undefined FUN_140b865d4(void)

bool FUN_140b865d4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 140b86678 FUN_140b86678 body=448 status=ok
// SIG undefined FUN_140b86678(void)

void FUN_140b86678(longlong *param_1)

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



// FUNCTION 140b8683a FUN_140b8683a body=68 status=ok
// SIG undefined FUN_140b8683a(void)

longlong FUN_140b8683a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148e22f42(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  thunk_FUN_140b86884(lVar2);
  return lVar2;
}



// FUNCTION 140b8687e thunk_FUN_140b86884 body=5 status=ok
// SIG undefined thunk_FUN_140b86884(void)

undefined8 * thunk_FUN_140b86884(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  FUN_140056680(param_1 + 2,L"incomplete");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_1400b22c2(param_1 + 0xd,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  return param_1;
}



// FUNCTION 140b86884 FUN_140b86884 body=526 status=ok
// SIG undefined FUN_140b86884(void)

undefined8 * FUN_140b86884(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  FUN_140056680(param_1 + 2,L"incomplete");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_1400b22c2(param_1 + 0xd,&DAT_149e02088);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  return param_1;
}



// FUNCTION 140b86a92 FUN_140b86a92 body=38 status=ok
// SIG undefined FUN_140b86a92(void)

undefined8 FUN_140b86a92(undefined8 param_1,int param_2)

{
  FUN_140b86ab8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b86ab8 FUN_140b86ab8 body=170 status=ok
// SIG undefined FUN_140b86ab8(void)

void FUN_140b86ab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149e11c50;
  FUN_140b86b62();
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x16];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  lVar3 = param_1[0xf];
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 140b86b62 FUN_140b86b62 body=77 status=ok
// SIG undefined FUN_140b86b62(void)

bool FUN_140b86b62(longlong *param_1)

{
  char cVar1;
  
  FUN_1405b1996();
  cVar1 = (**(code **)(*param_1 + 0x268))(param_1);
  if (cVar1 == '\0') {
    FUN_14572541c(param_1);
    if (((char)param_1[0x1b] == '\0') && ((*(byte *)(param_1 + 0x14) & 0x20) == 0)) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
  }
  return (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
}



// FUNCTION 140b86bb0 FUN_140b86bb0 body=144 status=ok
// SIG undefined FUN_140b86bb0(void)

void FUN_140b86bb0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 8;
  plVar1 = *(longlong **)(param_1 + 0xaf8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,&local_28,param_1);
    if (DAT_14c950c29 == '\x01') {
      if (local_28 == 0) {
        local_28 = 0;
      }
      else {
        FUN_1456cec3c();
      }
    }
    *(longlong *)(param_1 + 0xfc0) = local_28;
    *(undefined8 *)(param_1 + 0xfc8) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b86c42 FUN_140b86c42 body=225 status=ok
// SIG undefined FUN_140b86c42(void)

longlong * FUN_140b86c42(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if ((((lVar2 == 0) || (lVar1 = FUN_145a81cc2(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30 || (lVar2 = *(longlong *)(param_1 + 0x2d0), lVar2 == 0)))) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar1 = FUN_145a81cc2();
  if ((lVar1 == 0) ||
     ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x2d0);
  }
  lVar2 = FUN_14892c85c(param_3,uVar3);
  *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0x20);
  FUN_140c6474a(lVar2);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_2 = lVar2;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_140b86d09;
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    *param_2 = lVar2;
  }
  lVar2 = lVar2 + 0xa0;
LAB_140b86d09:
  param_2[1] = lVar2;
  return param_2;
}



// FUNCTION 140b86d24 FUN_140b86d24 body=40 status=ok
// SIG undefined FUN_140b86d24(void)

undefined8 FUN_140b86d24(undefined8 param_1,int param_2)

{
  FUN_140b86d4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b86d4c FUN_140b86d4c body=288 status=ok
// SIG undefined FUN_140b86d4c(void)

void FUN_140b86d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b16b6e0;
  param_1[0x94] = &PTR_FUN_14b16bd40;
  param_1[0x95] = &PTR_FUN_14b16bde0;
  FUN_140b86e6c(param_1[0xc0],*(undefined4 *)(param_1 + 0xc1));
  if (param_1[0xc0] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x5f9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x5f9) = 0;
  }
  FUN_14028f4a8(param_1 + 0xa4);
  FUN_144760e21(param_1[0xa1],*(undefined4 *)(param_1 + 0xa2));
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  FUN_1404d595a(param_1 + 0x9d,1);
  param_1[0x97] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (*(int *)((longlong)param_1 + 0x4d4) != 0) {
    FUN_140115c12(param_1 + 0x99,0);
  }
  param_1[0x98] = 0;
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  param_1[0x96] = 0;
  FUN_140b86ea0(param_1);
  return;
}



// FUNCTION 140b86e6c FUN_140b86e6c body=51 status=ok
// SIG undefined FUN_140b86e6c(void)

void FUN_140b86e6c(longlong param_1,int param_2)

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



// FUNCTION 140b86ea0 FUN_140b86ea0 body=305 status=ok
// SIG undefined FUN_140b86ea0(void)

void FUN_140b86ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab517e0;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  FUN_1408105a2(param_1[0x8f],*(undefined4 *)(param_1 + 0x90));
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1408105a2(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86fd1(param_1[0x88],*(undefined4 *)(param_1 + 0x89));
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86ffc(param_1 + 0x7d,1);
  FUN_144760e21(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140b86fd1 FUN_140b86fd1 body=43 status=ok
// SIG undefined FUN_140b86fd1(void)

void FUN_140b86fd1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140b86ffc FUN_140b86ffc body=124 status=ok
// SIG undefined FUN_140b86ffc(void)

void FUN_140b86ffc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140b87078 FUN_140b87078 body=270 status=ok
// SIG undefined FUN_140b87078(void)

undefined8 FUN_140b87078(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140b87180;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b87180;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140b87180:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b8712e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140b8712e;
    }
  }
  uVar6 = 0;
LAB_140b8712e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b871a2 FUN_140b871a2 body=40 status=ok
// SIG undefined FUN_140b871a2(void)

undefined8 FUN_140b871a2(undefined8 param_1,int param_2)

{
  FUN_140b871ca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b871ca FUN_140b871ca body=345 status=ok
// SIG undefined FUN_140b871ca(void)

void FUN_140b871ca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1f2470;
  param_1[5] = &PTR_FUN_14b1f2aa0;
  param_1[6] = &PTR_LAB_14b1f2ae0;
  FUN_14068a6c6(param_1[0x96],*(undefined4 *)(param_1 + 0x97));
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_14082b712(param_1 + 0x7e,1);
  plVar3 = (longlong *)param_1[0x7c];
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
  FUN_144760e21(param_1[0x67],*(undefined4 *)(param_1 + 0x68));
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_140b87324(param_1);
  return;
}



// FUNCTION 140b87324 FUN_140b87324 body=91 status=ok
// SIG undefined FUN_140b87324(void)

void FUN_140b87324(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a863c70;
  param_1[5] = &PTR_FUN_14a864280;
  param_1[6] = &PTR_LAB_14a8642c0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140b87380 FUN_140b87380 body=130 status=ok
// SIG undefined FUN_140b87380(void)

undefined4 FUN_140b87380(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14047e0ee(local_28,&local_38,&local_28,0);
  uVar3 = FUN_140b87404(local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b87404 FUN_140b87404 body=105 status=ok
// SIG undefined FUN_140b87404(void)

undefined1 FUN_140b87404(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_11 = 0;
  cVar1 = (**(code **)(*param_1 + 0x60))();
  if (cVar1 == '\0') {
    FUN_140056680(local_28,L"Boolean");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8747c FUN_140b8747c body=31 status=ok
// SIG undefined FUN_140b8747c(void)

undefined8 FUN_140b8747c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b8749c FUN_140b8749c body=38 status=ok
// SIG undefined FUN_140b8749c(void)

undefined8 FUN_140b8749c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
  }
  return uVar2;
}



// FUNCTION 140b874c8 FUN_140b874c8 body=81 status=ok
// SIG undefined FUN_140b874c8(void)

undefined4 FUN_140b874c8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = FUN_140b8751a();
  uVar5 = FUN_1448093f4(uVar3,uVar6);
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
  return uVar5;
}



// FUNCTION 140b8751a FUN_140b8751a body=57 status=ok
// SIG undefined FUN_140b8751a(void)

void FUN_140b8751a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aa50 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aa50 = FUN_140002ddd(FUN_14641955c,uVar1,L"SpawnerStyleDef_Waves");
  }
  return;
}



// FUNCTION 140b87554 FUN_140b87554 body=794 status=ok
// SIG undefined FUN_140b87554(void)

void FUN_140b87554(longlong param_1,undefined4 *param_2,longlong *param_3,byte param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_118 [39];
  byte local_f1;
  void *local_f0;
  undefined4 *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 *puStack_78;
  void *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_88 = *(undefined8 *)(param_2 + 4);
  FUN_140b8797e();
  if ((longlong)(int)param_3[1] != 0) {
    local_d8 = *param_3;
    local_e0 = param_1 + 0x40;
    local_f1 = param_4 ^ 1;
    lVar8 = (longlong)(int)param_3[1] << 3;
    lVar9 = 0;
    local_e8 = param_2;
    local_d0 = lVar8;
    do {
      lVar4 = *(longlong *)(local_d8 + lVar9);
      if (lVar4 != 0) {
        local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x30));
        puStack_78 = &local_c8;
        local_80 = param_2;
        FUN_140b87870(local_e0,&local_b8,&local_80);
        local_c8 = (undefined4 *)0x0;
        uStack_c0 = (undefined8 *)0x0;
        local_b8 = *param_2;
        uStack_b4 = param_2[1];
        uStack_b0 = param_2[2];
        uStack_ac = param_2[3];
        local_a8 = *(undefined8 *)(param_2 + 4);
        FUN_1400bbfc4(&local_80,lVar4);
        iVar5 = local_68;
        local_c8 = local_80;
        uStack_c0 = puStack_78;
        local_f0 = local_70;
        cVar6 = (*(code *)PTR_FUN_14c758760)();
        uVar2 = *(uint *)(lVar4 + 0xc);
        if (cVar6 == '\0') {
LAB_140b8768d:
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          uVar10 = *(uint *)(lVar8 + 0x10);
          if (*(uint *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar10 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar10);
            }
            LOCK();
            uVar7 = *(uint *)(lVar8 + 0x10);
            bVar14 = uVar7 == 0;
            if (bVar14) {
              *(uint *)(lVar8 + 0x10) = uVar10;
              uVar7 = 0;
            }
            UNLOCK();
            if (!bVar14) {
              uVar10 = uVar7;
            }
          }
          uVar13 = (ulonglong)uVar2;
        }
        else {
          uVar13 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          uVar10 = 0;
          if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) goto LAB_140b8768d;
        }
        iVar3 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
          FUN_140b87bd2((longlong *)(param_1 + 0x28),iVar3);
        }
        lVar8 = *(longlong *)(param_1 + 0x28);
        puVar1 = (undefined8 *)(lVar8 + (longlong)iVar3 * 0x48);
        puVar1[2] = local_a8;
        *puVar1 = CONCAT44(uStack_b4,local_b8);
        puVar1[1] = CONCAT44(uStack_ac,uStack_b0);
        puVar1[3] = uVar13 | (ulonglong)uVar10 << 0x20;
        *(undefined4 *)(puVar1 + 4) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar1 + 0x24) = local_c8._4_4_;
        *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_c0._4_4_;
        puVar1[6] = 0;
        *(int *)(puVar1 + 7) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
          pvVar12 = local_f0;
        }
        else {
          puVar11 = (undefined8 *)(lVar8 + (longlong)iVar3 * 0x48 + 0x30);
          FUN_1446dd670(puVar11,iVar5,0);
          pvVar12 = local_f0;
          memcpy((void *)*puVar11,local_f0,(longlong)iVar5 * 2);
        }
        param_2 = local_e8;
        *(byte *)(puVar1 + 8) = local_f1;
        lVar8 = local_d0;
        if (pvVar12 != (void *)0x0) {
          FUN_1400020a8(pvVar12);
          lVar8 = local_d0;
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar8 != lVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b87870 FUN_140b87870 body=268 status=ok
// SIG undefined FUN_140b87870(void)

undefined4 * FUN_140b87870(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140133a0c(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  uVar6 = FUN_1447addd0(local_40,0x10);
  uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar10 = 1;
  if (3 < uVar8) {
    uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
    uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
    local_40[6] = uVar6;
    lVar9 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar9 = param_1 + 0x38;
    }
    local_40[5] = *(undefined4 *)
                   (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
    lVar9 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar9 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4) =
         local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar10;
    FUN_140b87d48(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8797e FUN_140b8797e body=596 status=ok
// SIG undefined FUN_140b8797e(void)

void FUN_140b8797e(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 == 0) {
    return;
  }
  iVar2 = *param_2;
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  iVar6 = param_2[4];
  iVar7 = param_2[5];
  piVar8 = *(int **)(param_1 + 0x28);
  uVar14 = 0;
  if (((iVar2 == *piVar8) && (iVar3 == piVar8[1])) && (iVar4 == piVar8[2])) {
    bVar20 = false;
    if (iVar5 != piVar8[3]) goto LAB_140b87a21;
    if (iVar6 == piVar8[4]) {
      bVar20 = iVar7 == piVar8[5];
      goto LAB_140b87a21;
    }
  }
  bVar20 = false;
LAB_140b87a21:
  uVar18 = 0;
  do {
    uVar19 = (ulonglong)uVar18;
LAB_140b87a3b:
    uVar10 = (uint)uVar19;
    if ((int)(uVar10 + 1) < (int)uVar1) {
      lVar11 = (longlong)(int)uVar10;
      lVar12 = lVar11 + 2;
      piVar17 = piVar8 + lVar11 * 0x12 + 0x17;
      bVar9 = true;
      lVar16 = -1;
      do {
        if (((iVar2 == piVar17[-5]) && (iVar3 == piVar17[-4])) &&
           ((iVar4 == piVar17[-3] && ((iVar5 == piVar17[-2] && (iVar6 == piVar17[-1])))))) {
          if ((bool)(iVar7 == *piVar17 ^ bVar20)) {
            uVar18 = uVar10 - (int)lVar16;
            break;
          }
        }
        else if (bVar20) {
          FUN_1407c9f3e(piVar8 + lVar11 * 0x12,-(int)lVar16);
          if (!bVar9) goto LAB_140b87b25;
          uVar19 = (uVar19 & 0xffffffff) - lVar16;
          bVar20 = false;
          goto LAB_140b87a3b;
        }
        bVar9 = lVar12 < lVar13;
        lVar16 = lVar16 + -1;
        lVar12 = lVar12 + 1;
        piVar17 = piVar17 + 0x12;
        uVar18 = uVar1;
      } while (lVar11 - lVar13 != lVar16);
    }
    else {
      bVar9 = false;
      uVar18 = uVar10 + 1;
    }
    iVar15 = uVar18 - uVar10;
    if (bVar20) {
      FUN_1407c9f3e(piVar8 + (longlong)(int)uVar10 * 0x12,iVar15);
      bVar20 = false;
      uVar19 = (ulonglong)uVar18;
      if (!bVar9) goto LAB_140b87b25;
      goto LAB_140b87a3b;
    }
    if (uVar14 != uVar10) {
      memmove(piVar8 + (longlong)(int)uVar14 * 0x12,piVar8 + (longlong)(int)uVar10 * 0x12,
              (longlong)iVar15 * 0x48);
    }
    uVar14 = uVar14 + iVar15;
    bVar20 = true;
    if (!bVar9) {
LAB_140b87b25:
      *(uint *)(param_1 + 0x30) = uVar14;
      if (uVar1 != uVar14) {
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
      return;
    }
  } while( true );
}



// FUNCTION 140b87bd2 FUN_140b87bd2 body=373 status=ok
// SIG undefined FUN_140b87bd2(void)

void FUN_140b87bd2(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x48;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140b87c5b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140b87c5b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140b87d48 FUN_140b87d48 body=691 status=ok
// SIG undefined FUN_140b87d48(void)

void FUN_140b87d48(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_140b87dae;
  }
  uVar2 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar14 != uVar2);
LAB_140b87dae:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar11 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar12 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar12 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar11) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar4 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar10 = (longlong)iVar5 * 0x1c;
      iVar3 = FUN_1447addd0(lVar13 + lVar10,0x10);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar13 + 0x18 + lVar10) = iVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar13 + 0x14 + lVar10) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar14 = ~(uint)uVar15 & uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar11;
      lVar13 = (longlong)iVar5;
      uVar2 = puVar8[lVar13] & uVar14;
      if (uVar2 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar5) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar2 = puVar8[lVar13 + lVar10 + 1];
          if (uVar2 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) {
            return;
          }
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 140b87ffc FUN_140b87ffc body=17 status=ok
// SIG undefined FUN_140b87ffc(void)

void FUN_140b87ffc(longlong param_1)

{
  FUN_140b8800e(*(undefined8 *)(param_1 + 0x40),0,0,0);
  return;
}



// FUNCTION 140b8800e FUN_140b8800e body=277 status=ok
// SIG undefined FUN_140b8800e(void)

void FUN_140b8800e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  plVar1 = (longlong *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_14481578e(plVar1,0);
  }
  iVar4 = *(int *)(param_1 + 0xac);
  FUN_144716727(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_1403b10bc(param_1 + 0xa0,0);
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_14481578e(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x80) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x84) < iVar3 + 1U) {
        FUN_1446f48e2(plVar1,iVar3);
      }
      *(int *)(*plVar1 + (longlong)iVar3 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  FUN_140b88124(param_1,plVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b88124 FUN_140b88124 body=701 status=ok
// SIG undefined FUN_140b88124(void)

/* WARNING: Removing unreachable block (ram,0x000140b88354) */

void FUN_140b88124(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *_Src;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)(param_1 + 0x90);
  iVar9 = *(int *)(param_1 + 0x9c);
  FUN_140191e42(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_146cb2342(plVar2,0);
  }
  lVar1 = param_1 + 0x28;
  FUN_142989b80(lVar1);
  if (*(int *)(param_2 + 1) != 0) {
    FUN_146ca0223(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
    FUN_146ca0365(&local_78,param_2,lVar1,&local_44);
    local_98 = local_68;
    local_a8 = local_78;
    uStack_a0 = uStack_70;
    uStack_90 = local_60;
    uStack_8c = uStack_5c;
    uStack_88 = uStack_58;
    uStack_84 = uStack_54;
    uStack_80 = local_50;
    iVar9 = *(int *)(param_1 + 0x98);
    uVar6 = iVar9 + 1;
    *(uint *)(param_1 + 0x98) = uVar6;
    if (*(uint *)(param_1 + 0x9c) < uVar6) {
      FUN_146cb23c6(plVar2);
    }
    lVar1 = *plVar2;
    lVar8 = (longlong)iVar9 * 0x50;
    puVar3 = (undefined4 *)(lVar1 + 0x20 + lVar8);
    *puVar3 = uStack_88;
    puVar3[1] = uStack_84;
    puVar3[2] = (undefined4)uStack_80;
    puVar3[3] = uStack_80._4_4_;
    puVar3 = (undefined4 *)(lVar1 + 0x10 + lVar8);
    *puVar3 = (undefined4)local_98;
    puVar3[1] = local_98._4_4_;
    puVar3[2] = uStack_90;
    puVar3[3] = uStack_8c;
    *(undefined8 *)(lVar1 + lVar8) = local_a8;
    ((undefined8 *)(lVar1 + lVar8))[1] = uStack_a0;
    *(int *)(lVar1 + 0x30 + lVar8) = local_44;
    puVar4 = (undefined8 *)(lVar1 + 0x38 + lVar8);
    *puVar4 = 0;
    puVar4[1] = 0;
    if (*(int *)(param_2 + 1) < 6) {
      iVar9 = *(int *)(param_1 + 0xa8);
      *(int *)(*(longlong *)(param_1 + 0x90) + 0x48) = iVar9;
      local_b8 = (void *)0x0;
      uVar6 = *(uint *)(param_2 + 1);
      _Src = (void *)*param_2;
      local_b0 = CONCAT44(local_b0._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        local_b0 = (ulonglong)uVar6;
      }
      else {
        FUN_144a06ca8(&local_b8,uVar6,0);
        memcpy(local_b8,_Src,(longlong)(int)uVar6 << 2);
        iVar9 = *(int *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar9 + 1U) {
        FUN_140bfc2d4((longlong *)(param_1 + 0xa0));
      }
      lVar1 = *(longlong *)(param_1 + 0xa0);
      lVar8 = (longlong)iVar9 * 0x10;
      *(undefined8 *)(lVar1 + lVar8) = 0;
      *(void **)(lVar1 + lVar8) = local_b8;
      local_b8 = (void *)0x0;
      *(undefined4 *)(lVar1 + 8 + lVar8) = (undefined4)local_b0;
      *(undefined4 *)(lVar1 + 0xc + lVar8) = local_b0._4_4_;
      local_b0 = 0;
    }
    else {
      local_d8 = local_44;
      local_d0 = 1;
      local_c8 = param_3;
      iVar7 = FUN_146ca06dc(param_1,&local_78,&local_60,param_2);
      iVar9 = 2;
      if (local_44 == -1) {
        iVar9 = 8;
      }
      do {
        lVar1 = *plVar2;
        iVar5 = *(int *)(lVar1 + 0x40);
        *(uint *)(lVar1 + 0x40) = iVar5 + 1U;
        if (*(uint *)(lVar1 + 0x44) < iVar5 + 1U) {
          FUN_1446f48e2((longlong *)(lVar1 + 0x38),iVar5);
        }
        *(int *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar5 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b883e2 FUN_140b883e2 body=5166 status=ok
// SIG undefined FUN_140b883e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b883e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double _Y;
  double _Y_00;
  double _X;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  undefined1 auStack_1a8 [32];
  uint local_188;
  longlong *local_180;
  longlong *local_178;
  ulonglong local_170;
  longlong *local_168;
  double local_160;
  float *local_158;
  longlong **local_150;
  longlong **local_148;
  longlong **local_140;
  longlong *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float local_11c;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((longlong)*(int *)(param_1 + 0x308) != 0) {
    plVar19 = *(longlong **)(param_1 + 0x300);
    plVar1 = plVar19 + (longlong)*(int *)(param_1 + 0x308) * 9;
    do {
      lVar16 = *(longlong *)(param_1 + 0x28);
      if ((lVar16 == 0) || (DAT_14cb259f8 == 0)) {
LAB_140b89515:
        cVar13 = FUN_144904448(plVar19 + 2);
        if (cVar13 != '\0') {
LAB_140b89529:
          FUN_14072d42a(plVar19 + 2,0);
        }
      }
      else {
        local_160 = (double)(*plVar19 + 0x3e0);
        local_11c = 3.4e+38;
        local_108 = 0;
        local_118 = (longlong *)0x0;
        uStack_110 = 0;
        local_128 = 0;
        local_138 = (longlong *)0x0;
        uStack_130 = 0;
        local_f8 = (longlong *)0x0;
        local_158 = &local_11c;
        local_150 = &local_f8;
        local_148 = &local_118;
        local_140 = &local_138;
        if (DAT_14cb25ab0 != '\x01') goto LAB_140b89515;
        lVar24 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
        if (lVar24 == 0) goto LAB_140b89515;
        plVar21 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
        plVar25 = plVar21 + lVar24 * 2;
        do {
          while ((*plVar21 != 0 && (*(longlong *)(*plVar21 + 8) == lVar16))) {
            bVar12 = FUN_140072078(&local_160);
            plVar21 = plVar21 + 2;
            if ((bVar12 & plVar21 != plVar25) == 0) goto LAB_140b885a5;
          }
          plVar21 = plVar21 + 2;
        } while (plVar21 != plVar25);
LAB_140b885a5:
        if (local_f8 == (longlong *)0x0) goto LAB_140b89515;
        if (local_11c < 0.0) {
          fVar46 = sqrtf(local_11c);
        }
        else {
          fVar46 = SQRT(local_11c);
        }
        lVar16 = plVar19[1];
        if ((lVar16 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          piVar2 = *(int **)(lVar16 + 0x50);
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          if (DAT_14cb259f8 == 0) {
            iVar14 = 5;
          }
          else {
            if ((char)piVar2[1] != '\x01') {
              FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar16);
              goto LAB_140b8861a;
            }
            iVar14 = 2;
          }
          LOCK();
          piVar2[2] = iVar14;
          UNLOCK();
        }
LAB_140b8861a:
        bVar26 = false;
        if ((lVar16 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          iVar14 = _finite((double)*(float *)(lVar16 + 0x4c));
          bVar26 = true;
          if ((iVar14 != 0) && (0.0001 < *(float *)(lVar16 + 0x4c))) {
            bVar26 = fVar46 < *(float *)(lVar16 + 0x4c) * 1.1;
          }
          if ((DAT_14cb26569 & 1) != 0) {
            FUN_1400848c0(*(undefined8 *)(lVar16 + 0x50),lVar16);
          }
          if (bVar26) {
            cVar13 = FUN_144904448(plVar19 + 2);
            bVar26 = true;
            if (cVar13 == '\0') {
              FUN_140056680(&local_160,L"Travelling");
              local_188 = local_188 & 0xffffff00;
              uVar31 = FUN_14084a140(param_1,&local_118,&local_160,0);
              if (local_160 != 0.0) {
                uVar31 = FUN_1400020a8();
              }
              if (local_118 != (longlong *)0x0) {
                if (*local_118 != -1) {
                  lVar16 = *plVar19;
                  local_168 = local_118;
                  *(int *)(local_118 + 0x21) = (int)local_118[0x21] + 1;
                  FUN_140b8992e(uVar31,&local_168,lVar16);
                  plVar25 = local_118;
                  lVar16 = *plVar19;
                  auVar36 = *(undefined1 (*) [16])(lVar16 + 0x410);
                  auVar41._12_4_ = 0x40768000;
                  auVar41._0_12_ = ZEXT812(0x4076800000000000);
                  auVar41 = divpd(auVar36,auVar41);
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = *(double *)(lVar16 + 0x420);
                  auVar39._12_4_ = 0x40768000;
                  auVar39._0_12_ = ZEXT812(0x4076800000000000);
                  auVar39 = divpd(auVar37,auVar39);
                  auVar41 = roundpd(auVar41,auVar41,3);
                  auVar39 = roundpd(auVar39,auVar39,3);
                  dVar28 = (auVar36._0_8_ - auVar41._0_8_ * 360.0) * 0.008726646259971648;
                  dVar29 = (auVar36._8_8_ - auVar41._8_8_ * 360.0) * 0.008726646259971648;
                  dVar30 = (*(double *)(lVar16 + 0x420) - auVar39._0_8_ * 360.0) *
                           0.008726646259971648;
                  dVar43 = (0.0 - auVar39._8_8_ * 360.0) * 0.008726646259971648;
                  dVar44 = sin(dVar28);
                  dVar45 = sin(dVar29);
                  dVar27 = sin(dVar30);
                  sin(dVar43);
                  dVar28 = cos(dVar28);
                  dVar29 = cos(dVar29);
                  dVar30 = cos(dVar30);
                  cos(dVar43);
                  uVar8 = *(undefined4 *)(lVar16 + 0x3e0);
                  uVar9 = *(undefined4 *)(lVar16 + 0x3e4);
                  uVar10 = *(undefined4 *)(lVar16 + 1000);
                  uVar11 = *(undefined4 *)(lVar16 + 0x3ec);
                  lVar16 = *(longlong *)(lVar16 + 0x3f0);
                  plVar21 = plVar25 + 0x28;
                  uVar15 = *(uint *)((longlong)plVar25 + 0x1d4);
                  plVar18 = (longlong *)0x0;
                  *(undefined4 *)(plVar25 + 0x3a) = 0;
                  if ((int)uVar15 < 0) {
                    FUN_147f80112(plVar21,0);
                    plVar18 = (longlong *)(ulonglong)*(uint *)(plVar25 + 0x3a);
                    uVar15 = *(uint *)((longlong)plVar25 + 0x1d4);
                  }
                  *(undefined1 *)((longlong)plVar25 + 0x26c) = 0;
                  uVar22 = (int)plVar18 + 1;
                  *(uint *)(plVar25 + 0x3a) = uVar22;
                  if (uVar15 < uVar22) {
                    local_180 = plVar18;
                    FUN_140089f7a(plVar21,plVar18);
                    plVar18 = local_180;
                  }
                  dVar43 = dVar45 * dVar44 * dVar27 + dVar29 * dVar28 * dVar30;
                  if ((longlong *)plVar25[0x38] != (longlong *)0x0) {
                    plVar21 = (longlong *)plVar25[0x38];
                  }
                  lVar24 = (longlong)(int)plVar18;
                  plVar21[lVar24 * 0x10] =
                       (longlong)(dVar44 * dVar45 * dVar30 - dVar28 * dVar29 * dVar27);
                  (plVar21 + lVar24 * 0x10)[1] =
                       (longlong)(-(dVar44 * dVar29 * dVar30) - dVar28 * dVar45 * dVar27);
                  auVar36._8_4_ = SUB84(dVar43,0);
                  auVar36._0_8_ = -(dVar29 * dVar44 * dVar27) + dVar45 * dVar28 * dVar30;
                  auVar36._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
                  *(undefined1 (*) [16])(plVar21 + lVar24 * 0x10 + 2) = auVar36;
                  plVar18 = plVar21 + lVar24 * 0x10 + 4;
                  *(undefined4 *)plVar18 = uVar8;
                  *(undefined4 *)((longlong)plVar18 + 4) = uVar9;
                  *(undefined4 *)(plVar18 + 1) = uVar10;
                  *(undefined4 *)((longlong)plVar18 + 0xc) = uVar11;
                  plVar21[lVar24 * 0x10 + 6] = lVar16;
                  (plVar21 + lVar24 * 0x10 + 6)[1] = 0;
                  plVar21[lVar24 * 0x10 + 8] = 0x3ff0000000000000;
                  (plVar21 + lVar24 * 0x10 + 8)[1] = 0x3ff0000000000000;
                  plVar21[lVar24 * 0x10 + 10] = 0x3ff0000000000000;
                  (plVar21 + lVar24 * 0x10 + 10)[1] = 0;
                  plVar21[lVar24 * 0x10 + 0xc] = 0x3f800000;
                  *(undefined2 *)(plVar21 + lVar24 * 0x10 + 0xd) = 0;
                  *(undefined8 *)((longlong)plVar21 + lVar24 * 0x80 + 0x6c) = 0;
                  FUN_1447906c0(plVar25,0);
                  local_188 = 0;
                  FUN_14084a448(local_118,&local_160,plVar19[1]);
                  plVar19[2] = (longlong)local_160;
                  plVar19[3] = (longlong)local_158;
                  plVar19[4] = (longlong)local_150;
                  lVar16 = plVar19[6];
                  if (lVar16 == 0) {
                    uVar31 = FUN_1407f787c();
                    lVar16 = FUN_14477b664(uVar31);
                    plVar19[6] = lVar16;
                  }
                  lVar24 = plVar19[7];
                  if (lVar24 == 0) {
                    if (plVar19[5] == 0) {
                      lVar24 = 0;
                    }
                    else if (lVar16 == 0) {
                      lVar24 = 0;
                    }
                    else {
                      plVar21 = *(longlong **)(lVar16 + 0xb8);
                      if ((plVar21 == (longlong *)0x0) ||
                         (cVar13 = (**(code **)(*plVar21 + 0x108))(), cVar13 == '\0')) {
                        lVar24 = 0;
                      }
                      else {
                        uVar31 = (**(code **)(*plVar21 + 0x110))(plVar21);
                        lVar24 = FUN_144aff482(uVar31,plVar19 + 5);
                      }
                      plVar19[7] = lVar24;
                    }
                  }
                  *(bool *)((longlong)plVar19 + 0x44) = lVar24 != 0;
                  if (local_118 == (longlong *)0x0) goto LAB_140b88672;
                }
                plVar21 = local_118;
                *(int *)(local_118 + 0x21) = (int)local_118[0x21] + -1;
                if (((int)local_118[0x26] < 1) &&
                   (FUN_1400847bc(local_118 + 0x17,0), (int)plVar21[0x21] == 0)) {
                  FUN_140087e46(plVar21);
                  if (*plVar21 != -1) {
                    if (DAT_14cb259f8 == 0) goto LAB_140b88672;
                    FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar21);
                  }
                  if (DAT_14cb259f8 != 0) {
                    FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar21);
                  }
                }
              }
            }
          }
          else {
            bVar26 = false;
          }
        }
LAB_140b88672:
        cVar13 = FUN_144904448(plVar19 + 2);
        if (cVar13 != '\0') {
          if (bVar26) {
            plVar21 = (longlong *)plVar19[2];
            if (((plVar21 != (longlong *)0x0) && (plVar19[3] != -1)) && (*plVar21 == plVar19[3])) {
              *(int *)(plVar21 + 0x21) = (int)plVar21[0x21] + 1;
              lVar16 = *plVar19;
              auVar36 = *(undefined1 (*) [16])(lVar16 + 0x410);
              auVar5._12_4_ = 0x40768000;
              auVar5._0_12_ = ZEXT812(0x4076800000000000);
              auVar41 = divpd(auVar36,auVar5);
              auVar38._8_8_ = 0;
              auVar38._0_8_ = *(double *)(lVar16 + 0x420);
              auVar6._12_4_ = 0x40768000;
              auVar6._0_12_ = ZEXT812(0x4076800000000000);
              auVar39 = divpd(auVar38,auVar6);
              auVar41 = roundpd(auVar41,auVar41,3);
              auVar39 = roundpd(auVar39,auVar39,3);
              dVar28 = (auVar36._0_8_ - auVar41._0_8_ * 360.0) * 0.008726646259971648;
              dVar29 = (auVar36._8_8_ - auVar41._8_8_ * 360.0) * 0.008726646259971648;
              dVar30 = (*(double *)(lVar16 + 0x420) - auVar39._0_8_ * 360.0) * 0.008726646259971648;
              dVar43 = (0.0 - auVar39._8_8_ * 360.0) * 0.008726646259971648;
              dVar44 = sin(dVar28);
              dVar45 = sin(dVar29);
              dVar27 = sin(dVar30);
              sin(dVar43);
              dVar28 = cos(dVar28);
              dVar29 = cos(dVar29);
              dVar30 = cos(dVar30);
              cos(dVar43);
              uVar8 = *(undefined4 *)(lVar16 + 0x3e0);
              uVar9 = *(undefined4 *)(lVar16 + 0x3e4);
              uVar10 = *(undefined4 *)(lVar16 + 1000);
              uVar11 = *(undefined4 *)(lVar16 + 0x3ec);
              lVar16 = *(longlong *)(lVar16 + 0x3f0);
              plVar25 = plVar21 + 0x28;
              uVar15 = *(uint *)((longlong)plVar21 + 0x1d4);
              iVar14 = 0;
              *(undefined4 *)(plVar21 + 0x3a) = 0;
              if ((int)uVar15 < 0) {
                FUN_147f80112(plVar25,0);
                iVar14 = (int)plVar21[0x3a];
                uVar15 = *(uint *)((longlong)plVar21 + 0x1d4);
              }
              *(undefined1 *)((longlong)plVar21 + 0x26c) = 0;
              *(uint *)(plVar21 + 0x3a) = iVar14 + 1U;
              if (uVar15 < iVar14 + 1U) {
                FUN_140089f7a(plVar25,iVar14);
              }
              dVar43 = dVar45 * dVar44 * dVar27 + dVar29 * dVar28 * dVar30;
              if ((longlong *)plVar21[0x38] != (longlong *)0x0) {
                plVar25 = (longlong *)plVar21[0x38];
              }
              lVar24 = (longlong)iVar14;
              plVar25[lVar24 * 0x10] =
                   (longlong)(dVar44 * dVar45 * dVar30 - dVar28 * dVar29 * dVar27);
              (plVar25 + lVar24 * 0x10)[1] =
                   (longlong)(-(dVar44 * dVar29 * dVar30) - dVar28 * dVar45 * dVar27);
              auVar4._8_4_ = SUB84(dVar43,0);
              auVar4._0_8_ = -(dVar29 * dVar44 * dVar27) + dVar45 * dVar28 * dVar30;
              auVar4._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
              *(undefined1 (*) [16])(plVar25 + lVar24 * 0x10 + 2) = auVar4;
              plVar18 = plVar25 + lVar24 * 0x10 + 4;
              *(undefined4 *)plVar18 = uVar8;
              *(undefined4 *)((longlong)plVar18 + 4) = uVar9;
              *(undefined4 *)(plVar18 + 1) = uVar10;
              *(undefined4 *)((longlong)plVar18 + 0xc) = uVar11;
              plVar25[lVar24 * 0x10 + 6] = lVar16;
              (plVar25 + lVar24 * 0x10 + 6)[1] = 0;
              plVar25[lVar24 * 0x10 + 8] = 0x3ff0000000000000;
              (plVar25 + lVar24 * 0x10 + 8)[1] = 0x3ff0000000000000;
              plVar25[lVar24 * 0x10 + 10] = 0x3ff0000000000000;
              (plVar25 + lVar24 * 0x10 + 10)[1] = 0;
              plVar25[lVar24 * 0x10 + 0xc] = 0x3f800000;
              *(undefined2 *)(plVar25 + lVar24 * 0x10 + 0xd) = 0;
              *(undefined8 *)((longlong)plVar25 + lVar24 * 0x80 + 0x6c) = 0;
              FUN_1447906c0(plVar21,0);
              if (*(char *)((longlong)plVar19 + 0x44) == '\x01') {
                lVar24 = plVar19[8];
                lVar16 = plVar19[6];
                if (lVar16 == 0) {
                  uVar31 = FUN_1407f787c();
                  lVar16 = FUN_14477b664(uVar31);
                  plVar19[6] = lVar16;
                }
                lVar17 = plVar19[7];
                if (lVar17 == 0) {
                  if (lVar16 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = 0;
                    if (plVar19[5] != 0) {
                      plVar25 = *(longlong **)(lVar16 + 0xb8);
                      if ((plVar25 == (longlong *)0x0) ||
                         (cVar13 = (**(code **)(*plVar25 + 0x108))(plVar25), cVar13 == '\0')) {
                        lVar17 = 0;
                      }
                      else {
                        uVar31 = (**(code **)(*plVar25 + 0x110))(plVar25);
                        lVar17 = FUN_144aff482(uVar31,plVar19 + 5);
                      }
                      plVar19[7] = lVar17;
                    }
                  }
                }
                local_188 = local_188 & 0xffffff00;
                FUN_1447997cc(plVar21,lVar17,(int)lVar24);
                *(undefined1 *)((longlong)plVar19 + 0x44) = 0;
              }
              *(int *)(plVar21 + 0x21) = (int)plVar21[0x21] + -1;
              if (((int)plVar21[0x26] < 1) &&
                 (FUN_1400847bc(plVar21 + 0x17,0), (int)plVar21[0x21] == 0)) {
                FUN_140087e46(plVar21);
                if (*plVar21 != -1) {
                  if (DAT_14cb259f8 == 0) goto LAB_140b88682;
                  FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar21);
                }
                if (DAT_14cb259f8 != 0) {
                  FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar21);
                }
              }
            }
            goto LAB_140b88682;
          }
          goto LAB_140b89529;
        }
      }
LAB_140b88682:
      plVar19 = plVar19 + 9;
    } while (plVar19 != plVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x318) != 0) {
    plVar1 = (longlong *)(param_1 + 0x310);
    plVar21 = *(longlong **)(param_1 + 0x310);
    plVar19 = plVar21 + (longlong)*(int *)(param_1 + 0x318) * 3;
    do {
      while ((((longlong *)*plVar21 == (longlong *)0x0 ||
              (lVar16 = (**(code **)(*(longlong *)*plVar21 + 0x180))(), lVar16 == 0)) ||
             (lVar16 = (**(code **)(*(longlong *)*plVar21 + 0x180))(),
             (float)*(double *)(lVar16 + 0x6d0) < *(float *)(plVar21 + 2) ||
             (float)*(double *)(lVar16 + 0x6d0) == *(float *)(plVar21 + 2)))) {
        plVar21 = plVar21 + 3;
        if (plVar21 == plVar19) goto LAB_140b88ae7;
      }
      lVar16 = plVar21[1];
      if ((lVar16 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        piVar2 = *(int **)(lVar16 + 0x50);
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar14 = 5;
        }
        else {
          if ((char)piVar2[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar16);
            goto LAB_140b88f17;
          }
          iVar14 = 2;
        }
        LOCK();
        piVar2[2] = iVar14;
        UNLOCK();
      }
LAB_140b88f17:
      plVar25 = (longlong *)*plVar21;
      bVar26 = false;
      if (((plVar25 != (longlong *)0x0) && (bVar26 = false, lVar16 != 0)) &&
         ((DAT_14cb26569 & 1) != 0)) {
        lVar24 = (**(code **)(*plVar25 + 0x180))(plVar25);
        if (lVar24 == 0) {
          bVar26 = false;
          bVar12 = 0;
        }
        else {
          if (((double)*(float *)(param_1 + 800) <=
               *(double *)(lVar24 + 0x6d0) - (double)*(float *)(param_1 + 0x32c)) &&
             (cVar13 = FUN_1407d6ed4(param_1,lVar24,plVar25 + 0x7c,&local_160), cVar13 != '\0')) {
            dVar28 = (double)plVar25[0x97];
            dVar43 = (double)local_150 - dVar28;
            dVar29 = (double)plVar25[0x95];
            dVar30 = (double)plVar25[0x96];
            dVar45 = (double)local_158 - dVar30;
            dVar44 = local_160 - dVar29;
            if (*(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x324) <=
                (float)(dVar43 * dVar43 + dVar44 * dVar44 + dVar45 * dVar45)) {
              dVar27 = (double)plVar25[0x7e] - dVar28;
              dVar33 = (double)plVar25[0x7d] - dVar30;
              dVar32 = (double)plVar25[0x7c] - dVar29;
              dVar34 = dVar27 * dVar27 + dVar32 * dVar32 + dVar33 * dVar33;
              if (((dVar34 != 1.0) || (_Y = dVar27, _Y_00 = dVar33, _X = dVar32, NAN(dVar34))) &&
                 (_Y = DAT_14c8464f0, _Y_00 = DAT_14c8464e8, _X = DAT_14c8464e0,
                 9.99999993922529e-09 <= dVar34)) {
                dVar34 = 1.0 / SQRT(dVar34);
                _Y = dVar27 * dVar34;
                _Y_00 = dVar33 * dVar34;
                _X = dVar32 * dVar34;
              }
              dVar43 = dVar43 * _Y + dVar44 * _X + dVar45 * _Y_00;
              if (0.0 <= dVar43) {
                dVar44 = _X * _X + _Y_00 * _Y_00;
                dVar43 = dVar43 / (_Y * _Y + dVar44);
                dVar28 = dVar28 + _Y * dVar43;
                dVar30 = dVar30 + _Y_00 * dVar43;
                dVar29 = dVar29 + dVar43 * _X;
                dVar45 = dVar28 - (double)local_150;
                dVar43 = dVar29 - local_160;
                fVar46 = (float)(dVar45 * dVar45 +
                                dVar43 * dVar43 +
                                (dVar30 - (double)local_158) * (dVar30 - (double)local_158));
                if (fVar46 < *(float *)(param_1 + 0x328) || fVar46 == *(float *)(param_1 + 0x328)) {
                  FUN_140056680(&local_118,L"BulletBy");
                  local_188 = local_188 & 0xffffff00;
                  uVar31 = FUN_14084a140(param_1,&local_138,&local_118,0);
                  if (local_118 != (longlong *)0x0) {
                    uVar31 = FUN_1400020a8();
                  }
                  bVar26 = local_138 != (longlong *)0x0;
                  if (bVar26) {
                    local_f8 = local_138;
                    *(int *)(local_138 + 0x21) = (int)local_138[0x21] + 1;
                    FUN_140b8992e(uVar31,&local_f8,plVar25);
                    dVar43 = 0.0;
                    if (((_X != 0.0) || (NAN(_X))) || ((_Y_00 != 0.0 || (NAN(_Y_00))))) {
                      dVar43 = atan2(_Y_00,_X);
                      dVar43 = dVar43 * 57.29577951308232;
                    }
                    auVar40._0_8_ = SQRT(dVar44);
                    auVar40._8_8_ = 0;
                    dVar44 = 0.0;
                    if (((_Y != 0.0) || (NAN(_Y))) ||
                       ((auVar40._0_8_ != 0.0 || (NAN(auVar40._0_8_))))) {
                      dVar44 = atan2(_Y,auVar40._0_8_);
                      dVar44 = dVar44 * 57.29577951308232;
                    }
                    auVar35._8_8_ = dVar43;
                    auVar35._0_8_ = dVar44;
                    auVar36 = divpd(auVar35,_DAT_1499387d0);
                    auVar36 = roundpd(auVar36,auVar36,3);
                    auVar41 = roundpd(auVar40,_DAT_149931140,3);
                    dVar44 = (dVar44 - auVar36._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
                    ;
                    dVar43 = (dVar43 - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar45 = (0.0 - auVar41._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
                    dVar27 = (0.0 - auVar41._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar32 = sin(dVar44);
                    dVar33 = sin(dVar43);
                    dVar34 = sin(dVar45);
                    sin(dVar27);
                    dVar44 = cos(dVar44);
                    dVar43 = cos(dVar43);
                    dVar45 = cos(dVar45);
                    cos(dVar27);
                    plVar18 = local_138 + 0x28;
                    uVar15 = *(uint *)((longlong)local_138 + 0x1d4);
                    uVar20 = 0;
                    *(undefined4 *)(local_138 + 0x3a) = 0;
                    plVar23 = local_138;
                    if ((int)uVar15 < 0) {
                      local_180 = local_138;
                      local_178 = plVar18;
                      FUN_147f80112(plVar18,0);
                      uVar20 = (ulonglong)*(uint *)(local_180 + 0x3a);
                      uVar15 = *(uint *)((longlong)local_180 + 0x1d4);
                      plVar18 = local_178;
                      plVar23 = local_180;
                    }
                    *(undefined1 *)((longlong)plVar23 + 0x26c) = 0;
                    uVar22 = (int)uVar20 + 1;
                    *(uint *)(plVar23 + 0x3a) = uVar22;
                    if (uVar15 < uVar22) {
                      local_180 = plVar23;
                      local_178 = plVar18;
                      local_170 = uVar20;
                      FUN_140089f7a();
                      plVar18 = local_178;
                      uVar20 = local_170;
                      plVar23 = local_180;
                    }
                    dVar27 = dVar33 * dVar32 * dVar34 + dVar43 * dVar44 * dVar45;
                    if ((longlong *)plVar23[0x38] != (longlong *)0x0) {
                      plVar18 = (longlong *)plVar23[0x38];
                    }
                    auVar42._8_8_ = 0;
                    auVar42._0_8_ = dVar28;
                    lVar17 = (longlong)(int)uVar20;
                    plVar18[lVar17 * 0x10] =
                         (longlong)(dVar32 * dVar33 * dVar45 - dVar44 * dVar43 * dVar34);
                    (plVar18 + lVar17 * 0x10)[1] =
                         (longlong)(-(dVar32 * dVar43 * dVar45) - dVar44 * dVar33 * dVar34);
                    auVar3._8_4_ = SUB84(dVar27,0);
                    auVar3._0_8_ = -(dVar43 * dVar32 * dVar34) + dVar33 * dVar44 * dVar45;
                    auVar3._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                    *(undefined1 (*) [16])(plVar18 + lVar17 * 0x10 + 2) = auVar3;
                    auVar7._8_4_ = SUB84(dVar30,0);
                    auVar7._0_8_ = dVar29;
                    auVar7._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                    *(undefined1 (*) [16])(plVar18 + lVar17 * 0x10 + 4) = auVar7;
                    *(undefined1 (*) [16])(plVar18 + lVar17 * 0x10 + 6) = auVar42;
                    plVar18[lVar17 * 0x10 + 8] = 0x3ff0000000000000;
                    (plVar18 + lVar17 * 0x10 + 8)[1] = 0x3ff0000000000000;
                    plVar18[lVar17 * 0x10 + 10] = 0x3ff0000000000000;
                    (plVar18 + lVar17 * 0x10 + 10)[1] = 0;
                    plVar18[lVar17 * 0x10 + 0xc] = 0x3f800000;
                    *(undefined2 *)(plVar18 + lVar17 * 0x10 + 0xd) = 0;
                    *(undefined8 *)((longlong)plVar18 + lVar17 * 0x80 + 0x6c) = 0;
                    FUN_1447906c0(plVar23,0);
                    local_188 = 0;
                    FUN_14084a448(local_138,&local_118,lVar16,plVar25[0x30]);
                    plVar25 = local_138;
                    local_118 = (longlong *)0x0;
                    uStack_110 = 0xffffffffffffffff;
                    *(float *)(param_1 + 0x32c) = (float)*(double *)(lVar24 + 0x6d0);
                    if (((local_138 != (longlong *)0x0) &&
                        (*(int *)(local_138 + 0x21) = (int)local_138[0x21] + -1,
                        (int)local_138[0x26] < 1)) &&
                       (FUN_1400847bc(local_138 + 0x17,0), (int)plVar25[0x21] == 0)) {
                      FUN_140087e46(plVar25);
                      if (*plVar25 != -1) {
                        if (DAT_14cb259f8 == 0) goto LAB_140b894f0;
                        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar25);
                      }
                      if (DAT_14cb259f8 != 0) {
                        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar25);
                      }
                    }
                  }
LAB_140b894f0:
                  bVar12 = 1;
                  goto LAB_140b89160;
                }
              }
            }
          }
          bVar26 = true;
          bVar12 = 0;
        }
LAB_140b89160:
        bVar26 = (bool)(bVar26 & bVar12);
      }
      if ((lVar16 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar16 + 0x50),lVar16);
      }
      plVar21 = plVar21 + 3;
    } while (!bVar26 && plVar21 != plVar19);
LAB_140b88ae7:
    if (0 < *(int *)(param_1 + 0x318)) {
      uVar20 = 0;
      bVar26 = false;
      do {
        while( true ) {
          plVar19 = *(longlong **)(*plVar1 + uVar20 * 0x18);
          if (((plVar19 != (longlong *)0x0) &&
              (lVar16 = *plVar1 + uVar20 * 0x18, *(longlong *)(lVar16 + 8) != 0)) &&
             (((DAT_14cb26569 & 1) != 0 &&
              ((fVar46 = *(float *)(lVar16 + 0x10),
               *(float *)(param_1 + 0x32c) + *(float *)(param_1 + 800) < fVar46 &&
               (dVar28 = (double)fVar46, lVar16 = (**(code **)(*plVar19 + 0x180))(),
               *(double *)(lVar16 + 0x6d0) <= dVar28 && dVar28 != *(double *)(lVar16 + 0x6d0)))))))
          break;
          FUN_140b89812(plVar1,uVar20 & 0xffffffff);
          bVar26 = true;
          if ((longlong)*(int *)(param_1 + 0x318) <= (longlong)uVar20) goto LAB_140b88c21;
        }
        uVar20 = uVar20 + 1;
      } while ((longlong)uVar20 < (longlong)*(int *)(param_1 + 0x318));
      if (bVar26) {
LAB_140b88c21:
        FUN_140b8988e(plVar1);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b89812 FUN_140b89812 body=124 status=ok
// SIG undefined FUN_140b89812(void)

void FUN_140b89812(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18);
  if ((lVar2 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar2 + 0x50));
  }
  iVar3 = (int)param_1[1];
  iVar4 = ~param_2 + iVar3;
  if (iVar4 != 0) {
    iVar5 = 1;
    if (iVar4 < 1) {
      iVar5 = iVar4;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar1 + (longlong)(iVar3 - iVar5) * 0x18),(longlong)iVar5 * 0x18);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 140b8988e FUN_140b8988e body=159 status=ok
// SIG undefined FUN_140b8988e(void)

void FUN_140b8988e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 140b8992e FUN_140b8992e body=558 status=ok
// SIG undefined FUN_140b8992e(void)

void FUN_140b8992e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) goto LAB_140b899f9;
  if (*plVar3 != -1) {
    plVar3 = (longlong *)FUN_1449e3f1e();
    if (plVar3 != (longlong *)0x0) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_40 = param_3;
      (**(code **)(*plVar3 + 0x2b8))(plVar3,&local_58);
      if (local_50 == 0) {
        uVar4 = FUN_1405b1a32();
        local_50 = FUN_14477b664(uVar4);
      }
      if (local_48 == 0) {
        if ((((local_50 != 0) && (local_58 != 0)) &&
            (plVar3 = *(longlong **)(local_50 + 0xb8), plVar3 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 != '\0')) {
          uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
          local_48 = FUN_144aff482(uVar4,&local_58);
          if (local_48 != 0) goto LAB_140b899b0;
        }
      }
      else {
LAB_140b899b0:
        lVar1 = *param_2;
        if (local_50 == 0) {
          uVar4 = FUN_1405b1a32();
          local_50 = FUN_14477b664(uVar4);
          if (((local_48 == 0) && (local_50 != 0)) && (local_58 != 0)) {
            plVar3 = *(longlong **)(local_50 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
              local_48 = 0;
            }
            else {
              uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
              local_48 = FUN_144aff482(uVar4,&local_58);
            }
          }
        }
        FUN_140849a08(lVar1);
      }
    }
    plVar3 = (longlong *)*param_2;
    if (plVar3 == (longlong *)0x0) goto LAB_140b899f9;
  }
  *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
  if (((int)plVar3[0x26] < 1) && (FUN_1400847bc(plVar3 + 0x17,0), (int)plVar3[0x21] == 0)) {
    FUN_140087e46(plVar3);
    if (*plVar3 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140b899f2;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
    }
  }
LAB_140b899f2:
  *param_2 = 0;
LAB_140b899f9:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b89b5e FUN_140b89b5e body=198 status=ok
// SIG undefined FUN_140b89b5e(void)

void FUN_140b89b5e(longlong *param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined2 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  undefined1 *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  ulonglong uStack_18;
  
  ppcStack_40 = (code **)0x140b89b6e;
  FUN_140b89e78();
  if ((param_1[0x15] != 0) && (1 < *(byte *)(param_1[0x15] + 0x178))) {
    bVar1 = *(byte *)(param_1 + 0x220);
    if (bVar1 < 6) {
      if ((0x33U >> (bVar1 & 0x1f) & 1) == 0) {
        if (bVar1 == 3) {
          *(undefined1 *)((longlong)param_1 + 0x422b) = 0;
          ppcStack_40 = (code **)0x140b89bad;
          cVar4 = FUN_140b89c26(param_1);
          if (cVar4 != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x422b) = 1;
          }
          ppcStack_40 = (code **)0x140b89bbd;
          (**(code **)(*param_1 + 0xef8))(param_1);
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x422b) = 0;
        ppcStack_40 = (code **)0x140b89bd2;
        (**(code **)(*param_1 + 0xef8))(param_1);
        ppcStack_40 = (code **)0x140b89bdc;
        FUN_140b89daa(param_1,0);
      }
    }
    ppcStack_40 = (code **)0x140b89be4;
    FUN_140b89c80(param_1);
  }
  plVar6 = param_1 + 0x89b;
  if (param_2 != (char)param_1[0x220]) {
    if ((char)param_1[0x220] == '\r') {
      uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
      if ((*plVar6 != 0) && (lVar2 = *(longlong *)(*plVar6 + 0x1f0), lVar2 != 0)) {
        if (DAT_14cba8288 == 0) {
          ppcStack_40 = &pcStack_20;
          pcStack_20 = FUN_141864c34;
          pcStack_30 = FUN_14081d0ea;
          puStack_38 = &LAB_1464cee30;
          puStack_48 = &LAB_148bfac22;
          puStack_50 = &LAB_140f21842;
          puStack_58 = &DAT_149e063b2;
          uStack_60 = 0;
          uStack_68 = 0x10000004;
          uStack_70 = 0x10;
          uStack_78 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
           (*plVar6 != 0)) {
          uVar5 = (**(code **)(*(longlong *)(lVar2 + 0x3b38) + 0x18))(lVar2 + 0x3b38);
          FUN_1409c9c98(uVar5,0);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_98);
        }
      }
      if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (param_2 == '\r') {
      pcStack_20 = (code *)(DAT_14c707940 ^ (ulonglong)auStack_98);
      if ((*plVar6 != 0) && (lVar2 = *(longlong *)(*plVar6 + 0x1f0), lVar2 != 0)) {
        if (DAT_14cba8288 == 0) {
          ppcStack_40 = &pcStack_28;
          pcStack_28 = FUN_141864c34;
          pcStack_30 = FUN_14081d0ea;
          puStack_38 = &LAB_1464cee30;
          puStack_48 = &LAB_148bfac22;
          puStack_50 = &LAB_140f21842;
          puStack_58 = &DAT_149e063b2;
          uStack_60 = 0;
          uStack_68 = 0x10000004;
          uStack_70 = 0x10;
          uStack_78 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
           (lVar3 = *plVar6, lVar3 != 0)) {
          if ((*(byte *)(lVar2 + 0x550) & 0x10) == 0) {
            param_1[0x89f] = param_1[0x89e];
          }
          *(undefined8 *)((longlong)param_1 + 0x4504) = 0xbf800000bf800000;
          *(undefined4 *)((longlong)param_1 + 0x450c) = 0xbf800000;
          bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x1f0) + 0x550);
          FUN_1409df526(lVar3,&DAT_14cbc6238);
          *(byte *)(*(longlong *)(*plVar6 + 0x1f0) + 0x550) =
               *(byte *)(*(longlong *)(*plVar6 + 0x1f0) + 0x550) & 0xf7 | bVar1 & 8;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0((ulonglong)pcStack_20 ^ (ulonglong)auStack_98);
        }
      }
      if (((ulonglong)pcStack_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  return;
}



// FUNCTION 140b89c26 FUN_140b89c26 body=89 status=ok
// SIG undefined FUN_140b89c26(void)

undefined8 FUN_140b89c26(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x42a0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x4298);
    lVar4 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if ((cVar1 != '\0') && (lVar2 = FUN_14479d2ce(lVar3), *(char *)(lVar2 + 0x116) != '\0')) {
        return 1;
      }
      lVar3 = lVar3 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 140b89c80 FUN_140b89c80 body=297 status=ok
// SIG undefined FUN_140b89c80(void)

void FUN_140b89c80(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar3;
  
  if (param_1[0x841] == 0) {
    return;
  }
  cVar1 = FUN_1414644bc();
  if (cVar1 != '\0') {
    return;
  }
  if (((char)param_1[0x220] == '\n') && (param_1[0x22] != 0)) {
    return;
  }
  plVar3 = param_1 + 0x2f;
  cVar1 = (**(code **)(param_1[0x2f] + 0xd8))(plVar3);
  if (cVar1 == '\0') {
    if (((char)param_1[0x840] == '\x01') &&
       (cVar1 = (**(code **)(*param_1 + 0x7f8))(param_1), cVar1 != '\0')) {
      cVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      if (cVar1 != '\0') {
        return;
      }
      plVar3 = (longlong *)param_1[0x841];
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x860);
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      if (cVar1 == '\0') {
        return;
      }
      plVar3 = (longlong *)param_1[0x841];
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x868);
    }
                    /* WARNING: Could not recover jumptable at 0x000140b89d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar3,0);
    return;
  }
  cVar1 = FUN_1414644bc(param_1[0x841]);
  if (cVar1 != '\0') {
    return;
  }
  if ((char)param_1[0x840] == '\x01') {
    plVar3 = (longlong *)param_1[0x841];
    if ((*(byte *)(plVar3 + 0xaa) & 8) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x4449) = 1;
      if (plVar3 == (longlong *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x700))(plVar3);
      }
      FUN_1459415be(plVar3,uVar2);
      *(undefined1 *)((longlong)param_1 + 0x4449) = 0;
      return;
    }
    return;
  }
  return;
}



// FUNCTION 140b89daa FUN_140b89daa body=206 status=ok
// SIG undefined FUN_140b89daa(void)

void FUN_140b89daa(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if (param_2 == 0) {
    param_2 = FUN_140bdfa08(param_1,0);
    if (param_2 == 0) {
      return;
    }
    if (*(char *)(param_2 + 0x11c) != '\0') {
      return;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x422c) != '\0') ||
     (cVar2 = (**(code **)(*param_1 + 0xf10))(param_1), cVar2 == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x118);
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      cVar2 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  cVar2 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
  if (cVar2 == '\0') {
    FUN_140d735ec(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x422b) = 1;
                    /* WARNING: Could not recover jumptable at 0x000140b89e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf18))(param_1,1);
  return;
}



// FUNCTION 140b89e78 FUN_140b89e78 body=1904 status=ok
// SIG undefined FUN_140b89e78(void)

void FUN_140b89e78(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar13;
  undefined8 *puVar14;
  double *pdVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined *puVar18;
  uint *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b0;
  double dStack_a8;
  double local_a0;
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  longlong *local_70;
  ulonglong local_50;
  double dVar12;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar20 = (longlong *)param_1[0x23];
  bVar21 = (byte)param_2;
  uVar11 = local_50;
  if ((plVar20 != (longlong *)0x0) && (param_1[0x3e] != 0)) {
    if ((char)param_1[0x220] == '\n') {
      uVar11 = CONCAT71((int7)(local_50 >> 8),param_1[0x22] != 0);
      if (param_1[0x22] == 0 || bVar21 == 10) goto LAB_140b89f2e;
      (**(code **)(*plVar20 + 0x938))(plVar20,2);
      *(byte *)((longlong)param_1 + 0x1d34) =
           *(byte *)((longlong)param_1 + 0x1d34) & 0xfb | ((byte)(bVar21 - 1) < 2) << 2;
      plVar20 = (longlong *)param_1[0x3e];
      uVar11 = 0xd10;
    }
    else {
      uVar11 = 0;
LAB_140b89f2e:
      if (bVar21 != 10 || (char)uVar11 != '\0') goto LAB_140b89f6b;
      (**(code **)(*plVar20 + 0x938))(plVar20,2);
      plVar20 = (longlong *)param_1[0x3e];
      uVar11 = 0xd18;
    }
    if ((*(byte *)(plVar20 + 0xaa) & 0x10) == 0) {
      plVar20 = param_1;
      uVar11 = (**(code **)(*param_1 + uVar11))();
    }
  }
LAB_140b89f6b:
  uVar16 = SUB84(plVar20,0);
  lVar13 = param_1[0x15];
  if ((lVar13 != 0) &&
     (bVar8 = (char)param_1[0x220] - 1, dVar12 = (double)CONCAT71((int7)(uVar11 >> 8),bVar8),
     bVar8 < 2)) {
    lVar1 = *(longlong *)(lVar13 + 0x1c8);
    if (lVar1 == 0) {
      local_f0 = 0;
      local_e8 = DAT_14c846500;
      local_e0 = 0;
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar15 = *(double **)(lVar1 + 0x228);
      local_d8 = dVar4;
      uStack_d0 = dVar5;
      local_c8 = dVar6;
      uStack_c0 = dVar7;
      if (pdVar15 == (double *)0x0) {
        uVar16 = 0x40;
        pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar15 = DAT_14c8463d0;
        pdVar15[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar15[2] = DAT_14c8463e0;
        pdVar15[3] = dVar12;
        dVar12 = DAT_14c846500;
        pdVar15[4] = DAT_14c8464f8;
        pdVar15[5] = dVar12;
        dVar12 = DAT_14c846508;
        pdVar15[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar15;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar15[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar15);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar15[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar12,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar15[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[3]) >> 0x20);
      uVar17 = movmskpd(uVar16,auVar3);
      if ((uVar17 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar15 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)pdVar15 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_c0._4_4_;
        *(undefined4 *)pdVar15 = (undefined4)local_d8;
        *(undefined4 *)((longlong)pdVar15 + 4) = local_d8._4_4_;
        *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_d0._4_4_;
        FUN_1448052ee(&local_d8,&local_b0);
        pdVar15[6] = local_a0;
        pdVar15[4] = local_b0;
        pdVar15[5] = dStack_a8;
      }
      local_e8 = pdVar15[5];
      local_f0 = 0;
      local_e0 = 0;
      if (*(longlong *)(lVar13 + 0x1c8) != 0) {
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        FUN_1407fd932(*(longlong *)(lVar13 + 0x1c8),&DAT_14c8464e0,&local_f0,1);
      }
    }
  }
  FUN_1409e8362();
  if ((8 < bVar21) || ((0x129U >> (param_2 & 0x1f) & 1) == 0)) goto LAB_140b8a223;
  param_1[0x60d] = 0x3f80000000000000;
  memset(param_1 + 0x60e,0,0x9c);
  *(undefined4 *)((longlong)param_1 + 0x310c) = 0xffffffff;
  param_1[0x622] = 0;
  param_1[0x623] = 0;
  param_1[0x624] = 0;
  param_1[0x625] = 0;
  param_1[0x626] = 0;
  *(undefined4 *)(param_1 + 0x627) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x313c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3154) = 0;
  param_1[0x62b] = 0;
  param_1[0x62c] = 0;
  cVar9 = (**(code **)(param_1[0x2f] + 0xe0))();
  if (cVar9 == '\0') {
    if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
      cVar9 = (char)param_1[0x3dc];
joined_r0x000140b8a2cb:
      if (cVar9 != '\0') goto LAB_140b8a125;
    }
    else {
      plVar20 = (longlong *)param_1[0x3d7];
      if (plVar20 != (longlong *)0x0) {
        if (*(code **)(*plVar20 + 0x40) != (code *)&LAB_1449cc0ea) {
          cVar9 = (**(code **)(*plVar20 + 0x40))();
          goto joined_r0x000140b8a2cb;
        }
        if ((*(char *)((longlong)plVar20 + 0xb2) == '\0') &&
           ((*(char *)((longlong)plVar20 + 0x79) != '\0' ||
            ((0 < (int)plVar20[4] && ((char)plVar20[0xf] == '\x01')))))) goto LAB_140b8a125;
      }
    }
  }
  else {
LAB_140b8a125:
    if ((int)param_1[0x576] != 0) {
      *(undefined4 *)(param_1 + 0x576) = 0;
      uVar11 = param_1[7];
      if (uVar11 < 0xffffffff00000000) {
        plVar20 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar20 = (longlong *)0x0;
        }
        (**(code **)(*plVar20 + 0x58))(plVar20,param_1,uVar11,10);
      }
      else {
        uVar17 = (uint)uVar11;
        if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c998088)) {
          puVar18 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar18 = DAT_14c998080;
          }
          if ((*(uint *)(puVar18 + ((uint)(uVar11 >> 3) & 0xffffffc)) >> (uVar17 & 0x1f) & 1) != 0)
          {
            lVar13 = DAT_14c998060 + (ulonglong)(uVar17 & 0x7fffffff) * 0x68;
            puVar19 = *(uint **)(lVar13 + 0x18);
            if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
              puVar19 = (uint *)(lVar13 + 8);
            }
            *puVar19 = *puVar19 | 0x400;
            *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
          }
        }
      }
    }
  }
LAB_140b8a223:
  if (((bVar21 != 6) && ((char)param_1[0x220] == '\x06')) &&
     (((param_1[0x39d] != 0 && (*(char *)(param_1[0x39d] + 0x178) == '\x01')) ||
      ((param_1[0x3e] != 0 && ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) != 0)))))) {
    FUN_146555e62();
  }
  if (bVar21 == 3) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] == '\x01') {
        plVar20 = param_1 + 0x642;
        goto LAB_140b8a28f;
      }
    }
    else {
      plVar20 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_140b8a28f:
      lVar13 = FUN_140153468(plVar20);
      if (((lVar13 != 0) && ((*(byte *)(plVar20 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] != '\x01') goto LAB_140b8a2f5;
          plVar20 = param_1 + 0x642;
        }
        else {
          plVar20 = (longlong *)(param_1[0x62e] + 0xd8);
        }
        FUN_143cf4ebc(plVar20);
      }
    }
LAB_140b8a2f5:
    param_1[0x60d] = 0x3f80000000000000;
    memset(param_1 + 0x60e,0,0x9c);
    *(undefined4 *)((longlong)param_1 + 0x310c) = 0xffffffff;
    param_1[0x622] = 0;
    param_1[0x623] = 0;
    param_1[0x624] = 0;
    param_1[0x625] = 0;
    param_1[0x626] = 0;
    *(undefined4 *)(param_1 + 0x627) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0x313c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3144) = 0;
    *(undefined8 *)((longlong)param_1 + 0x314c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3154) = 0;
    param_1[0x62b] = 0;
    param_1[0x62c] = 0;
  }
  bVar21 = *(byte *)(param_1 + 0x220);
  if (bVar21 < 6) {
    if ((0x33U >> (bVar21 & 0x1f) & 1) == 0) {
      if (bVar21 != 3) goto LAB_140b8a397;
      if (((0.0 < *(float *)(param_1 + 0x57a)) || (param_1[0x39e] == 0)) ||
         (*(char *)(param_1[0x39e] + 0x24) != '\x01')) goto LAB_140b8a463;
    }
    else {
      *(undefined1 *)(param_1 + 0x779) = 0;
    }
    puVar14 = (undefined8 *)(**(code **)(*param_1 + 0xe08))(param_1);
    FUN_140c07c00(param_1,*puVar14);
    if ((char)param_1[0x220] == '\x03') goto LAB_140b8a463;
  }
LAB_140b8a397:
  *(undefined1 *)(param_1 + 0x595) = 0;
  if ((char)param_1[0x596] != '\0') {
    *(undefined1 *)(param_1 + 0x596) = 0;
    uVar11 = param_1[7];
    if (uVar11 < 0xffffffff00000000) {
      plVar20 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar20 = (longlong *)0x0;
      }
      (**(code **)(*plVar20 + 0x58))(plVar20,param_1,uVar11,0xc);
    }
    else {
      uVar17 = (uint)uVar11;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c998088)) {
        puVar18 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar18 = DAT_14c998080;
        }
        if ((*(uint *)(puVar18 + ((uint)(uVar11 >> 3) & 0xffffffc)) >> (uVar17 & 0x1f) & 1) != 0) {
          lVar13 = DAT_14c998060 + (ulonglong)(uVar17 & 0x7fffffff) * 0x68;
          puVar19 = *(uint **)(lVar13 + 0x18);
          if (*(uint **)(lVar13 + 0x18) == (uint *)0x0) {
            puVar19 = (uint *)(lVar13 + 8);
          }
          *puVar19 = *puVar19 | 0x1000;
          *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
        }
      }
    }
  }
LAB_140b8a463:
  cVar9 = (**(code **)(*param_1 + 0xeb0))(param_1,param_2);
  if (cVar9 != '\0') {
    local_88 = 0;
    local_78 = &PTR_LAB_14b3f4fd0;
    local_98 = FUN_143ce8dc4;
    local_70 = param_1;
    FUN_1463b63b0(param_1);
  }
  *(byte *)(param_1 + 0x774) = *(byte *)(param_1 + 0x774) & 0xfd;
  if ((longlong)(int)param_1[0x834] != 0) {
    lVar13 = 0;
    do {
      if ((*(int *)(param_1[0x833] + 8 + lVar13) != 0) &&
         (*(longlong *)(param_1[0x833] + lVar13) != 0)) {
        FUN_1404f44a8(param_1 + 0x833,param_1);
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)(int)param_1[0x834] * 0x10 != lVar13);
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8a5ea FUN_140b8a5ea body=351 status=ok
// SIG undefined FUN_140b8a5ea(void)

void FUN_140b8a5ea(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 auStack_58 [43];
  byte local_2d;
  char local_2c;
  char local_2b;
  byte local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b8a814();
  local_2a = 0;
  local_2b = '\0';
  local_2c = '\0';
  local_2d = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_2a = *(char *)(param_1 + 0x28) == '\x01';
    local_2b = *(int *)(param_1 + 0x38) != 0;
    FUN_140b8a74a(param_1 + 0x44,&local_2c,&local_2d);
  }
  bVar1 = local_2d;
  (**(code **)(*param_2 + 0x178))(param_2,&local_2a,1);
  (**(code **)(*param_2 + 0x178))(param_2,&local_2b,1);
  (**(code **)(*param_2 + 0x178))(param_2,&local_2c,1);
  local_29 = bVar1;
  if (local_2c == '\x01') {
    (**(code **)(*param_2 + 0x178))(param_2,&local_29,4);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(&DAT_14cb87aa8 + (ulonglong)local_29 * 0xc);
      *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(&DAT_14cb87aa0 + (ulonglong)local_29 * 0xc);
    }
  }
  else {
    FUN_14011750a((undefined8 *)(param_1 + 0x44),param_2);
  }
  FUN_14011750a(param_1 + 0x2c,param_2);
  if (local_2b == '\x01') {
    FUN_14011750a(param_1 + 0x38,param_2);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(byte *)(param_1 + 0x28) = (local_2a ^ 1) * '\x02' + '\x01';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8a74a FUN_140b8a74a body=106 status=ok
// SIG undefined FUN_140b8a74a(void)

void FUN_140b8a74a(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1[2] == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = FUN_144a78877(*param_1,param_1[2]);
  }
  iVar1 = FUN_140b8a7b4(&DAT_14cb88698,uVar2,param_1);
  if ((iVar1 != -1) && (lVar3 = (longlong)iVar1 * 0x18 + DAT_14cb88698, lVar3 != 0)) {
    *param_2 = 1;
    *param_3 = *(undefined1 *)(lVar3 + 0xc);
  }
  return;
}



// FUNCTION 140b8a7b4 FUN_140b8a7b4 body=95 status=ok
// SIG undefined FUN_140b8a7b4(void)

int FUN_140b8a7b4(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x18) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x18 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b8a814 FUN_140b8a814 body=240 status=ok
// SIG undefined FUN_140b8a814(void)

void FUN_140b8a814(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  local_29 = 0;
  local_2a = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    FUN_140b8aa35(param_1 + 0x14,&local_2a,&local_29);
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)&local_29 >> 8),local_29);
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_2a,2);
  FUN_140b8a905(param_2,param_1 + 0x14,local_2a,uVar2);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0x24,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8a905 FUN_140b8a905 body=303 status=ok
// SIG undefined FUN_140b8a905(void)

void FUN_140b8a905(longlong *param_1,undefined8 param_2,char param_3,byte param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = param_4;
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x178))(param_1,&local_21,6);
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_140b8a948;
    uVar3 = *(undefined8 *)(&DAT_14cb87250 + (ulonglong)local_21 * 8);
  }
  else {
    if (param_3 == '\x01') {
      local_30 = FUN_140e195fa(param_2);
      puVar2 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_30);
        }
      }
      else {
        local_30 = *(undefined4 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        FUN_143d2742c(param_2,local_30);
      }
      goto LAB_140b8a948;
    }
    if (param_3 != '\x02') goto LAB_140b8a948;
    FUN_1403a0728(param_2,&local_30);
    (**(code **)(*param_1 + 0x160))(param_1,&local_30);
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_140b8a948;
    uVar3 = CONCAT44(uStack_2c,local_30);
  }
  FUN_144976b9c(param_2,uVar3);
LAB_140b8a948:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8aa35 FUN_140b8aa35 body=265 status=ok
// SIG undefined FUN_140b8aa35(void)

void FUN_140b8aa35(char *param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = *param_1;
  if ((cVar2 == '\x03') || (cVar2 == '\x01')) {
    FUN_1403a0728(param_1,&local_20);
    uVar5 = 2;
    if (DAT_14cb87a50 != DAT_14cb87a7c) {
      uVar4 = (uint)((ulonglong)local_20 >> 0x10);
      uVar6 = (uint)local_20 & 0xffff;
      puVar7 = &DAT_14cb87a80;
      if (DAT_14cb87a88 != (undefined *)0x0) {
        puVar7 = DAT_14cb87a88;
      }
      iVar3 = *(int *)(puVar7 + (ulonglong)
                                (DAT_14cb87a90 - 1U &
                                (int)((ulonglong)local_20 >> 0x20) +
                                ((uint)local_20 << 0x10 | uVar6) + (uVar4 << 0x13 | uVar4 & 0xffff)
                                + (uVar6 >> 4)) * 4);
      while (iVar3 != -1) {
        plVar1 = (longlong *)(DAT_14cb87a48 + (longlong)iVar3 * 0x14);
        if (*plVar1 == local_20) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            *param_3 = (char)plVar1[1];
            uVar5 = 0;
          }
          break;
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      }
    }
  }
  else {
    uVar5 = 1;
    if (cVar2 != '\x02') goto LAB_140b8ab0f;
  }
  *param_2 = uVar5;
LAB_140b8ab0f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8ab48 FUN_140b8ab48 body=381 status=ok
// SIG undefined FUN_140b8ab48(void)

void FUN_140b8ab48(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_140b8ac2a;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_140b8ac2a:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x210))(param_2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,1);
    (**(code **)(*plVar3 + 0x140))(plVar3,(char)param_1[2]);
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b8acc6 FUN_140b8acc6 body=365 status=ok
// SIG undefined FUN_140b8acc6(void)

void FUN_140b8acc6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x31c) >> 0x20);
  if ((*(byte *)(param_1 + 0x294) & 1) == 0) {
    fVar5 = fVar5 + 0.0;
    iVar3 = (int)ROUND(fVar5 + fVar5 + -0.5) >> 1;
    auVar7 = roundss(ZEXT416(0),ZEXT416((uint)fVar5),9);
    fVar5 = fVar5 - auVar7._0_4_;
    iVar4 = 1;
  }
  else {
    auVar7 = roundps(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5),1);
    iVar3 = (int)auVar7._0_4_;
    fVar5 = fVar5 - auVar7._0_4_;
    iVar4 = -1;
  }
  fVar5 = fVar5 + 0.5 + -0.5;
  if (0.99999994 <= fVar5) {
    fVar5 = 0.99999994;
  }
  uVar6 = (ulonglong)(uint)fVar5;
  if (fVar5 <= 0.0) {
    uVar6 = 0;
  }
  cVar2 = FUN_140b8ae34(param_1,(ulonglong)
                                (uint)((int)*(undefined8 *)(param_1 + 0x31c) + iVar4 + iVar3) |
                                uVar6 << 0x20);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 0x2d8) & 1) == 0) {
      FUN_140c7df7a(param_1,param_2);
    }
    else {
      FUN_140b8aeaa(param_1);
    }
    plVar1 = *(longlong **)(param_1 + 0x3d0);
    local_20 = *(undefined8 *)(param_1 + 0x308);
    local_28 = *(undefined8 *)(param_1 + 0x31c);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((char)plVar1[3] == '\x01') {
      *(undefined1 *)(plVar1 + 3) = 0;
    }
    if (0 < *(int *)(param_1 + 0x278)) {
      FUN_1447cd2ec(param_1 + 0x270,0);
    }
    if ((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x280) + 0x60))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8ae34 FUN_140b8ae34 body=117 status=ok
// SIG undefined FUN_140b8ae34(void)

bool FUN_140b8ae34(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = (int)param_2;
  if (*(char *)(param_1 + 0x290) == '\x01') {
    if ((*(byte *)(param_1 + 0x294) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x2a0) + *(int *)(param_1 + 0x2a4);
      if (iVar2 < iVar3) {
        bVar1 = true;
      }
      else {
        fVar4 = *(float *)(param_1 + 0x2a8) + 0.5 + -0.5;
        if (0.99999994 <= fVar4) {
          fVar4 = 0.99999994;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        bVar1 = fVar4 <= (float)((ulonglong)param_2 >> 0x20) && iVar2 == iVar3;
      }
    }
    else {
      bVar1 = iVar3 < *(int *)(param_1 + 0x2a0);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 140b8aeaa FUN_140b8aeaa body=1492 status=ok
// SIG undefined FUN_140b8aeaa(void)

void FUN_140b8aeaa(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 *local_128;
  int local_120;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined1 local_9c;
  longlong local_90;
  longlong lStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58 [2];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((param_1[0x44] != 0) && ((longlong *)param_1[0x45] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x45] + 0x10))(), cVar6 == '\0'))
  goto LAB_140b8b35a;
  cVar6 = FUN_1405246fa(param_1);
  if (cVar6 != '\0') {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar5 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_48[2] = lVar11;
    *local_48 = &PTR_FUN_14a491670;
    local_48[3] = 0;
    iVar8 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_48 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar8 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar8 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar9;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar8 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar8;
    puVar5[4] = FUN_140b8aeaa;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_14621550a(param_1,&local_48);
    goto LAB_140b8b35a;
  }
  FUN_14179f158(param_1,local_58,1);
  if ((char)param_1[0x52] == '\x01') {
    *(undefined1 *)(param_1 + 0x52) = 5;
    plVar4 = (longlong *)param_1[0x7a];
    lStack_110 = param_1[0x61];
    local_118 = *(longlong *)((longlong)param_1 + 0x31c);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if ((char)plVar4[3] == '\x01') {
      *(undefined1 *)(plVar4 + 3) = 0;
    }
    if ((char)param_1[0x89] == '\x01') {
      *(undefined1 *)(param_1 + 0x89) = 0;
    }
    if ((char)param_1[0x87] == '\x01') {
      *(undefined1 *)(param_1 + 0x87) = 0;
    }
    if (param_1[0x5d] == 0) {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
LAB_140b8b29d:
      FUN_140de91b2(param_1);
      cVar6 = FUN_1402d76c0(param_1);
      if (cVar6 != '\0') {
        *(undefined8 *)((longlong)param_1 + 0x38c) = *(undefined8 *)((longlong)param_1 + 0x31c);
        *(char *)((longlong)param_1 + 0x394) = (char)param_1[0x52];
        param_1[0x73] = *(longlong *)((longlong)param_1 + 0x2ac);
      }
      FUN_14179f158(param_1,&local_118,1);
      (**(code **)(*param_1 + 0x2e8))(param_1);
      lVar12 = local_118;
      if (0 < (int)param_1[0x4d]) {
        FUN_1447cd2ec(param_1 + 0x4c,0);
        lVar12 = local_118;
      }
    }
    else {
      FUN_140232b8e(param_1[0x5d],&local_68);
      lVar12 = local_68;
      if (local_68 == 0) goto LAB_140b8b29d;
      FUN_1432daeea(param_1 + 0x61,&local_90);
      if ((param_1[0x74] != 0) && (plVar4 = (longlong *)param_1[0x75], plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_90);
      }
      local_f8 = local_70;
      local_108 = local_80;
      uStack_104 = uStack_7c;
      uStack_100 = uStack_78;
      uStack_fc = uStack_74;
      local_118 = local_90;
      lStack_110 = lStack_88;
      local_f0 = 0x3f800000;
      local_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a4 = 0x80000000;
      local_9c = 0;
      local_128 = (undefined8 *)0x0;
      local_120 = 0;
      FUN_1446efa72(&local_128,0,3,0x10);
      puVar5 = local_128;
      local_120 = 3;
      *local_128 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_128[2] = lVar7;
      *local_128 = &PTR_FUN_14a4917c0;
      local_128[3] = 0;
      iVar8 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_128 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar8 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar8 = *(int *)(lVar11 + 0x10);
          bVar13 = iVar8 == 0;
          if (bVar13) {
            *(int *)(lVar11 + 0x10) = iVar9;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar8 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar8;
      puVar5[4] = param_1;
      if (param_1[0x5d] == 0) {
        uVar10 = 0xffff;
      }
      else {
        uVar10 = *(undefined4 *)(param_1[0x5d] + 0x30);
      }
      local_138 = 0;
      FUN_14179d4b8(lVar12,&local_118,uVar10,&local_128);
      if (local_120 == 0) {
LAB_140b8b16a:
        if (local_128 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_128 != (undefined8 *)0x0) {
        (**(code **)*local_128)(local_128,0);
        FUN_1446efa72(&local_128,0,0,0x10);
        local_120 = 0;
        goto LAB_140b8b16a;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1447bda9c(local_e0,uStack_d8 & 0xffffffff);
      lVar12 = local_e0;
    }
    if (lVar12 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_140b8b35a:
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b8b480 FUN_140b8b480 body=429 status=ok
// SIG undefined FUN_140b8b480(void)

void FUN_140b8b480(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    if ((*(longlong *)(param_1 + 0xe8) != 0) && (*(longlong *)(param_1 + 0xf0) != 0)) {
      lVar2 = 0xb8;
      do {
        if (*(longlong *)(param_1 + lVar2) != 0) {
          FUN_1470fa554(param_1);
          break;
        }
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0xe8);
    }
    *(longlong *)(param_1 + 0xe8) = param_2;
    lVar2 = FUN_14001cc68(0x2b0,0x10);
    FUN_140b5c6e4(lVar2);
    *(longlong *)(param_1 + 0xf0) = lVar2;
    *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | 1;
    uVar4 = 0;
    do {
      local_80 = 0;
      uStack_78 = 0;
      local_88 = &DAT_14c8464e0;
      uVar3 = FUN_140b8b9b0(uVar4 & 0xffffffff,*(undefined8 *)(param_1 + 0xe8),
                            *(undefined8 *)(param_1 + 0xf0),&DAT_14c8464e0);
      *(undefined8 *)(param_1 + 0xb8 + uVar4 * 8) = uVar3;
      FUN_140b8b62e(lVar1,uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 != 6);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      FUN_145c07562(&local_68);
      lVar1 = *(longlong *)(param_1 + 0x98);
      if (lVar1 == local_68) {
        if (local_60 != 0) {
          FUN_1470fb82e(&local_68);
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_1402c7646((longlong *)(param_1 + 0x98));
        }
        *(longlong *)(param_1 + 0x98) = local_68;
        *(longlong *)(param_1 + 0xa0) = local_60;
        *(undefined8 *)(param_1 + 0xa8) = local_58;
      }
    }
    FUN_140b8bf5e(param_1,param_3);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b8b62e FUN_140b8b62e body=117 status=ok
// SIG undefined FUN_140b8b62e(void)

void FUN_140b8b62e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b8b7d6(param_1 + 0xf0,local_30);
  *local_28 = param_2;
  *(undefined4 *)(param_2 + 0x240) = local_30[0];
  FUN_140b8b6a4(param_1,*(undefined8 *)(param_2 + 0x20));
  FUN_140b8b6a4(param_1,*(undefined8 *)(param_2 + 0x30));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8b6a4 FUN_140b8b6a4 body=305 status=ok
// SIG undefined FUN_140b8b6a4(void)

void FUN_140b8b6a4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((param_2 != (undefined8 *)0x0) && (param_2[1] == param_1)) &&
      ((*(byte *)(param_2 + 4) & 1) == 0)) &&
     ((((9.99999993922529e-09 < ABS((double)param_2[0xc]) ||
        (9.99999993922529e-09 < ABS((double)param_2[0xd]))) ||
       ((9.99999993922529e-09 < ABS((double)param_2[0xe]) ||
        ((9.99999993922529e-09 < ABS((double)param_2[9]) ||
         (9.99999993922529e-09 < ABS((double)param_2[10]))))))) ||
      (9.99999993922529e-09 < ABS((double)param_2[0xb]))))) {
    iVar3 = (**(code **)*param_2)(param_2);
    if (iVar3 == 1) {
      lVar4 = (longlong)*(int *)(param_2[0x56] + 0x10);
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(param_2[0x56] + 8);
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar5);
          *(undefined1 *)(lVar2 + 0x270) = 0;
          *(double *)(lVar2 + 0x268) = *(double *)(lVar2 + 0x278) * 10.0;
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x4e) = 0;
      param_2[0x4d] = (double)param_2[0x4f] * 10.0;
    }
  }
  return;
}



// FUNCTION 140b8b7d6 FUN_140b8b7d6 body=474 status=ok
// SIG undefined FUN_140b8b7d6(void)

int * FUN_140b8b7d6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14055ddfe(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 8);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 8) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 8 + *param_1;
  return param_2;
}



// FUNCTION 140b8b9b0 FUN_140b8b9b0 body=251 status=ok
// SIG undefined FUN_140b8b9b0(void)

undefined8
FUN_140b8b9b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = (undefined4)*(undefined8 *)(param_5 + 2);
  uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 2) >> 0x20);
  local_48 = *(undefined8 *)(param_5 + 4);
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = *param_4;
  uStack_b4 = param_4[1];
  uStack_b0 = (undefined4)*(undefined8 *)(param_4 + 2);
  uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
  local_a8 = *(undefined8 *)(param_4 + 4);
  uStack_a0 = 0;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  local_e8 = param_7;
  local_f0 = param_6;
  uVar1 = FUN_140b8baac(param_1,local_b8,(int)local_a8,&local_d8);
  FUN_140b8bcaf(param_1,uVar1);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8baac FUN_140b8baac body=515 status=ok
// SIG undefined FUN_140b8baac(void)

undefined8 *
FUN_140b8baac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *_Dst;
  
  _Dst = param_7;
  if (param_7 == (undefined8 *)0x0) {
    _Dst = (undefined8 *)FUN_14001cc68(0x2d0);
    memset(_Dst,0,0x2d0);
    *_Dst = &PTR_LAB_14a1e1990;
    _Dst[0x14] = 0;
    _Dst[0x15] = 0;
    _Dst[0x16] = 0;
    _Dst[0x17] = 0;
    _Dst[0x18] = 0;
    _Dst[0x19] = 0;
    _Dst[0x1a] = 0;
    _Dst[0x1b] = 0;
    _Dst[0x1c] = 0;
    _Dst[0x1d] = 0;
    _Dst[0x1e] = 0;
    _Dst[0x1f] = 0;
    *(undefined4 *)(_Dst + 0x30) = 0;
    *(undefined4 *)((longlong)_Dst + 0x184) = 0;
    *(undefined4 *)(_Dst + 0x31) = 0;
    *(undefined4 *)((longlong)_Dst + 0x18c) = 0x3ff00000;
    _Dst[0x32] = 0;
    _Dst[0x33] = 0;
    _Dst[0x34] = 0;
    _Dst[0x35] = 0;
    _Dst[0x36] = 0x3ff0000000000000;
    _Dst[0x37] = 0x3ff0000000000000;
    _Dst[0x38] = 0x3ff0000000000000;
    _Dst[0x39] = 0;
    _Dst[0x52] = 0;
  }
  *(undefined4 *)(_Dst + 3) = 0xffffffff;
  _Dst[4] = param_2;
  *(undefined4 *)(_Dst + 5) = 0xffffffff;
  _Dst[6] = param_3;
  *(undefined4 *)(_Dst + 7) = param_1;
  _Dst[0x3a] = param_6;
  uVar2 = param_4[5];
  uVar1 = param_4[6];
  _Dst[0x28] = param_4[4];
  _Dst[0x29] = uVar2;
  _Dst[0x2a] = uVar1;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  _Dst[0x20] = *param_4;
  _Dst[0x21] = uVar1;
  _Dst[0x22] = uVar2;
  _Dst[0x23] = uVar3;
  uVar2 = param_5[5];
  uVar1 = param_5[6];
  _Dst[0x2b] = param_5[4];
  _Dst[0x2c] = uVar2;
  _Dst[0x2d] = uVar1;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  _Dst[0x24] = *param_5;
  _Dst[0x25] = uVar1;
  _Dst[0x26] = uVar2;
  _Dst[0x27] = uVar3;
  _Dst[0x3b] = 0;
  _Dst[0x3c] = 0;
  _Dst[0x43] = 0;
  _Dst[0x44] = 0;
  if (param_7 == (undefined8 *)0x0) {
    _Dst[0x3d] = 0;
    _Dst[0x3e] = 0x47efffffe0000000;
    if (*(char *)(_Dst + 0x40) == '\x01') {
      *(undefined1 *)(_Dst + 0x40) = 0;
    }
    _Dst[0x41] = 0;
    *(undefined1 *)(_Dst + 0x42) = 0;
    _Dst[0x45] = 0x3f847ae147ae147b;
    _Dst[0x46] = 0x3ff0000000000000;
    _Dst[0x47] = 0x3ff0000000000000;
    *(undefined4 *)(_Dst + 0x48) = 0xffffffff;
  }
  return _Dst;
}



// FUNCTION 140b8bcaf FUN_140b8bcaf body=687 status=ok
// SIG undefined FUN_140b8bcaf(void)

void FUN_140b8bcaf(uint param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 < 6) {
    puVar1 = (undefined8 *)(param_2 + 0xa0);
    switch(param_1) {
    case 0:
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined8 *)(param_2 + 0xb8) = 0xbff0000000000000;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      *(undefined8 *)(param_2 + 200) = 0;
      *(undefined8 *)(param_2 + 0xd0) = 0;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 0xf0) = 0;
      *(undefined8 *)(param_2 + 0xf8) = 0;
      return;
    case 1:
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined8 *)(param_2 + 0xb8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0xbff0000000000000;
      *(undefined8 *)(param_2 + 200) = 0;
      *(undefined8 *)(param_2 + 0xd0) = 0;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      *(undefined8 *)(param_2 + 0xe0) = 0;
      uVar2 = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = 0x3ff0000000000000;
      break;
    case 2:
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined8 *)(param_2 + 0xb8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      *(undefined8 *)(param_2 + 200) = 0xbff0000000000000;
      *(undefined8 *)(param_2 + 0xd0) = 0;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = 0;
      uVar2 = 0x3ff0000000000000;
      break;
    case 3:
      *(undefined8 *)(param_2 + 0xa0) = 0xbff0000000000000;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined8 *)(param_2 + 0xb8) = 0;
      *(ulonglong *)(param_2 + 0xc0) = *(ulonglong *)(param_2 + 0x150) ^ 0x8000000000000000;
      *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0x148);
      *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_2 + 0x168);
      *(ulonglong *)(param_2 + 0xf8) = *(ulonglong *)(param_2 + 0x160) ^ 0x8000000000000000;
      return;
    case 4:
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0xbff0000000000000;
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_2 + 0x150);
      *(undefined8 *)(param_2 + 0xc0) = 0;
      *(ulonglong *)(param_2 + 200) = *(ulonglong *)(param_2 + 0x140) ^ 0x8000000000000000;
      *(undefined8 *)(param_2 + 0xd0) = 0;
      *(undefined8 *)(param_2 + 0xd8) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 0xe0) = 0;
      *(ulonglong *)(param_2 + 0xe8) = *(ulonglong *)(param_2 + 0x168) ^ 0x8000000000000000;
      *(undefined8 *)(param_2 + 0xf0) = 0;
      *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_2 + 0x158);
      return;
    case 5:
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(undefined8 *)(param_2 + 0xb0) = 0xbff0000000000000;
      *(ulonglong *)(param_2 + 0xb8) = *(ulonglong *)(param_2 + 0x148) ^ 0x8000000000000000;
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0x140);
      *(undefined8 *)(param_2 + 200) = 0;
      *(undefined8 *)(param_2 + 0xd0) = 0;
      uVar2 = 0;
      *(undefined8 *)(param_2 + 0xd8) = 0;
      *(undefined8 *)(param_2 + 0xe0) = 0x3ff0000000000000;
      *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_2 + 0x160);
      *(ulonglong *)(param_2 + 0xf0) = *(ulonglong *)(param_2 + 0x158) ^ 0x8000000000000000;
    }
    *(undefined8 *)(param_2 + 0xf8) = uVar2;
  }
  return;
}



// FUNCTION 140b8bf5e FUN_140b8bf5e body=2735 status=ok
// SIG undefined FUN_140b8bf5e(void)

void FUN_140b8bf5e(longlong param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  code *pcVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined1 auStack_298 [32];
  double local_278;
  char local_269;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [96];
  undefined1 local_1e8 [32];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  code *local_118;
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (*(int *)(param_1 + 0xb0) != 3) {
    local_180 = 1.0 / param_2;
    FUN_144941734(*(undefined8 *)(param_1 + 0xe8),local_1e8);
    FUN_144941734(*(undefined8 *)(param_1 + 0xf0),local_248);
    local_268 = 0.0;
    local_269 = '\0';
    local_118 = (code *)0x0;
    local_108 = (longlong *)0x0;
    local_108 = (longlong *)FUN_14001cc68(0x30,8);
    *local_108 = (longlong)&PTR_FUN_14a1dec50;
    local_108[1] = (longlong)local_1e8;
    local_108[2] = (longlong)&local_260;
    local_108[3] = (longlong)&local_180;
    local_108[4] = (longlong)&local_269;
    local_108[5] = (longlong)&local_268;
    if (local_108 + 1 != (longlong *)0x0) {
      local_118 = FUN_142b5177e;
    }
    AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
    pcVar12 = local_118;
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    plVar15 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar15 = local_f8;
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    (*pcVar12)(uVar14,uVar6);
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
    if (local_118 != (code *)0x0) {
      plVar15 = local_f8;
      if (local_108 != (longlong *)0x0) {
        plVar15 = local_108;
      }
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    if (local_269 == '\x01') {
      *(undefined4 *)(param_1 + 0xb0) = 3;
      lVar17 = 0;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8 + lVar17 * 8) + 0x1f0) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
    }
    else {
      if (*(int *)(param_1 + 0x48) == 0) {
        local_260 = *(double *)(param_1 + 0x50);
        local_258 = *(double *)(param_1 + 0x58);
        local_250 = *(double *)(param_1 + 0x60);
      }
      else {
        dVar21 = *(double *)(param_1 + 0x80);
        local_250 = *(double *)(param_1 + 0x78) * dVar21 + local_250;
        local_258 = *(double *)(param_1 + 0x70) * dVar21 + local_258;
        local_260 = dVar21 * *(double *)(param_1 + 0x68) + local_260;
      }
      local_250 = local_250 - local_1b8;
      local_258 = local_258 - local_1c0;
      local_260 = local_260 - local_1c8;
      dVar21 = local_250 * local_250 + local_260 * local_260 + local_258 * local_258;
      if (((dVar21 != 1.0) ||
          (dVar19 = local_250, dVar18 = local_258, dVar20 = local_260, NAN(dVar21))) &&
         (dVar19 = DAT_14c8464f0, dVar18 = DAT_14c8464e8, dVar20 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar21)) {
        dVar20 = 1.0 / SQRT(dVar21);
        dVar19 = local_250 * dVar20;
        dVar18 = local_258 * dVar20;
        dVar20 = local_260 * dVar20;
      }
      uVar29 = 0x3ff00000;
      lVar17 = *(longlong *)(param_1 + 0xe8);
      dVar1 = *(double *)(lVar17 + 0xf0);
      dVar24 = *(double *)(lVar17 + 0xf8);
      dVar2 = *(double *)(lVar17 + 0x100);
      dVar3 = *(double *)(param_1 + 0x28);
      local_278 = param_2;
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
      pdVar7 = *(double **)(param_1 + 0x98);
      if (dVar3 * dVar3 < dVar21) {
        if (*(char *)(pdVar7 + 1) != '\0') {
          *(undefined1 *)(pdVar7 + 1) = 0;
        }
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
        if (*(char *)(param_1 + 8) == '\x01') {
          dVar21 = *(double *)(param_1 + 0x10);
        }
        else {
          dVar21 = 3.4028234663852886e+38;
        }
        if (*(char *)(param_1 + 0x30) == '\x01') {
          local_268 = dVar21 * local_180 + local_268;
          if (*(double *)(param_1 + 0x38) <= local_268) {
            local_268 = *(double *)(param_1 + 0x38);
          }
        }
        else {
          local_268 = dVar21 * local_180 + SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar24 * dVar24);
        }
        uVar28 = SUB84(local_278,0);
        uVar30 = (undefined4)((ulonglong)local_278 >> 0x20);
      }
      else {
        if (*(char *)(pdVar7 + 1) == '\0') {
          lVar17 = *(longlong *)(param_1 + 0xe8);
          dVar1 = SQRT(*(double *)(lVar17 + 0x100) * *(double *)(lVar17 + 0x100) +
                       *(double *)(lVar17 + 0xf0) * *(double *)(lVar17 + 0xf0) +
                       *(double *)(lVar17 + 0xf8) * *(double *)(lVar17 + 0xf8));
          *pdVar7 = dVar1;
          *(undefined1 *)(pdVar7 + 1) = 1;
        }
        else {
          dVar1 = *pdVar7;
        }
        uVar28 = SUB84(local_278,0);
        uVar30 = (undefined4)((ulonglong)local_278 >> 0x20);
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
        if (*(char *)(param_1 + 0x18) == '\x01') {
          local_268 = *(double *)(param_1 + 0x20) * local_180 + local_268;
          if (local_268 <= 0.0) {
            local_268 = 0.0;
          }
        }
        else {
          local_268 = (SQRT(dVar21) / dVar3) * dVar1;
        }
      }
      dVar1 = dVar19 * local_268 * local_180;
      dVar20 = dVar20 * local_268 * local_180;
      lVar17 = *(longlong *)(param_1 + 0xe8);
      dVar21 = *(double *)(lVar17 + 0x160);
      dVar18 = dVar18 * local_268 * local_180 + *(double *)(lVar17 + 0x158);
      dVar19 = *(double *)(lVar17 + 0x150);
      dVar24 = *(double *)(lVar17 + 0x130);
      uVar6 = *(undefined8 *)(lVar17 + 0x138);
      uVar14 = *(undefined8 *)(lVar17 + 0x140);
      uVar11 = *(undefined8 *)(lVar17 + 0x148);
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x48))
                (*(longlong **)(param_1 + 0xf0),lVar17 + 0x130);
      local_158._8_4_ = SUB84(dVar18,0);
      local_158._0_8_ = dVar20 + dVar19;
      local_158._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      dStack_140 = 0.0;
      local_138 = 1.0;
      uStack_130 = 0x3ff0000000000000;
      local_128 = 0x3ff0000000000000;
      uStack_120 = 0;
      local_178 = dVar24;
      dStack_170 = (double)uVar6;
      local_168 = (double)uVar14;
      dStack_160 = (double)uVar11;
      local_148 = dVar1 + dVar21;
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x28))
                (*(longlong **)(param_1 + 0xf0),&local_178,CONCAT44(uVar30,uVar28));
      local_148 = 0.0;
      dStack_140 = 0.0;
      local_158 = ZEXT816(0);
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      local_138 = 0.0;
      puVar8 = *(undefined8 **)(param_1 + 0xe8);
      iVar13 = (**(code **)*puVar8)(puVar8);
      if ((puVar8 == (undefined8 *)0x0) || (iVar13 != 1)) {
        lVar17 = *(longlong *)(param_1 + 0xe8);
        bVar5 = *(byte *)(lVar17 + 0x21);
        dVar21 = 1.0;
        if ((bVar5 & 4) != 0) {
          dVar21 = 0.0;
        }
        dVar19 = 1.0;
        if ((bVar5 & 2) != 0) {
          dVar19 = 0.0;
        }
        if ((bVar5 & 1) != 0) {
          uVar29 = 0;
        }
        dVar21 = dVar21 * *(double *)(lVar17 + 0x88);
        dVar19 = dVar19 * *(double *)(lVar17 + 0x80);
        local_278 = (double)((ulonglong)uVar29 << 0x20) * *(double *)(lVar17 + 0x78);
        dVar10 = *(double *)(lVar17 + 400);
        dVar23 = *(double *)(lVar17 + 0x198);
        dVar25 = *(double *)(lVar17 + 0x1a0);
        dVar27 = *(double *)(lVar17 + 0x1a8);
        dVar18 = *(double *)(lVar17 + 0x148);
        dVar20 = *(double *)(lVar17 + 0x148);
        dVar24 = *(double *)(lVar17 + 0x138);
        dVar1 = *(double *)(lVar17 + 0x138);
        dVar2 = *(double *)(lVar17 + 0x130);
        dVar3 = *(double *)(lVar17 + 0x130);
        dVar22 = *(double *)(lVar17 + 0x140);
        dVar4 = *(double *)(lVar17 + 0x140);
        dVar26 = dVar23 * dVar22 * -1.0 + dVar25 * dVar24 + dVar2 * dVar27 * 1.0 + dVar18 * dVar10;
        dVar9 = dVar10 * dVar4 * 1.0 + dVar27 * dVar1 + dVar3 * dVar25 * -1.0 + dVar20 * dVar23;
        dVar18 = dVar27 * dVar22 * 1.0 +
                 ((dVar2 * dVar23 * 1.0 + dVar18 * dVar25) - dVar24 * dVar10);
        dVar20 = dVar25 * dVar4 * -1.0 +
                 ((dVar3 * dVar10 * -1.0 + dVar20 * dVar27) - dVar1 * dVar23);
        dVar25 = dVar9 + dVar9;
        dVar22 = dVar18 + dVar18;
        dVar2 = dVar26 * (dVar26 + dVar26);
        dVar24 = (dVar26 + dVar26) * dVar20;
        dVar10 = 1.0 - (dVar18 * dVar22 + dVar9 * dVar25);
        dVar4 = dVar20 * dVar22 + dVar26 * dVar25;
        dVar23 = dVar26 * dVar22 - dVar25 * dVar20;
        dVar27 = dVar26 * dVar25 - dVar20 * dVar22;
        dVar3 = 1.0 - (dVar18 * dVar22 + dVar2);
        dVar1 = dVar9 * dVar22 + dVar24;
        dVar26 = dVar25 * dVar20 + dVar26 * dVar22;
        dVar24 = dVar9 * dVar22 - dVar24;
        dVar18 = 1.0 - (dVar9 * dVar25 + dVar2);
        dVar20 = local_278 * dVar10;
        dVar2 = dVar19 * dVar4;
        dVar22 = dVar21 * dVar23;
        local_178 = dVar23 * dVar22 + dVar10 * dVar20 + dVar4 * dVar2;
        local_138 = dVar21 * dVar18 * dVar18 +
                    local_278 * dVar26 * dVar26 + dVar19 * dVar24 * dVar24;
        dStack_170 = dVar1 * dVar22 + dVar27 * dVar20 + dVar3 * dVar2;
        local_168 = dVar22 * dVar18 + dVar20 * dVar26 + dVar2 * dVar24;
        dStack_140 = dVar21 * dVar1 * dVar18 + local_278 * dVar27 * dVar26 + dVar19 * dVar3 * dVar24
        ;
        local_158._8_8_ = dStack_140;
        local_158._0_8_ =
             dVar21 * dVar1 * dVar1 + local_278 * dVar27 * dVar27 + dVar3 * dVar19 * dVar3;
        dStack_160 = dStack_170;
        local_148 = local_168;
      }
      else {
        FUN_140b8ccd6(puVar8[0x56],&local_178);
      }
      lVar17 = 0;
      do {
        FUN_140b8ca25(*(undefined4 *)(*(longlong *)(param_1 + 0xb8 + lVar17 * 8) + 0x38));
        lVar16 = *(longlong *)(param_1 + 0xb8 + lVar17 * 8);
        dVar21 = *(double *)(lVar16 + 0x58);
        dVar19 = *(double *)(lVar16 + 0x60);
        dVar18 = *(double *)(lVar16 + 0x68);
        dVar21 = 1.0 / ((local_138 * dVar18 + local_168 * dVar21 + (double)local_158._8_8_ * dVar19)
                        * dVar18 +
                       (local_148 * dVar18 + local_178 * dVar21 + dVar19 * dStack_160) * dVar21 +
                       (dStack_140 * dVar18 + dStack_170 * dVar21 + (double)local_158._0_8_ * dVar19
                       ) * dVar19);
        iVar13 = _finite(dVar21);
        lVar16 = *(longlong *)(param_1 + 0xb8 + lVar17 * 8);
        if (iVar13 == 0) {
          dVar21 = 3.4028234663852886e+38;
        }
        else {
          dVar18 = (double)FUN_140b8cb78();
          dVar19 = 0.0;
          if (0.0 <= *(double *)(param_1 + 0x40)) {
            dVar19 = *(double *)(param_1 + 0x40);
          }
          dVar21 = ABS(dVar19 * dVar21 * dVar18);
          lVar16 = *(longlong *)(param_1 + 0xb8 + lVar17 * 8);
        }
        *(double *)(lVar16 + 0x1f0) = dVar21;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
      *(double *)(*(longlong *)(param_1 + 0x98) + 0x30) = local_268;
      ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b8ca0e FUN_140b8ca0e body=23 status=ok
// SIG undefined FUN_140b8ca0e(void)

void FUN_140b8ca0e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x130);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 140b8ca25 FUN_140b8ca25 body=338 status=ok
// SIG undefined FUN_140b8ca25(void)

void FUN_140b8ca25(undefined4 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  longlong local_230;
  undefined4 local_228;
  undefined8 local_218 [12];
  undefined8 local_1b8 [12];
  undefined8 local_158 [12];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_144941734(*(undefined8 *)(param_2 + 0x20),local_f8);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    puVar2 = &DAT_14c846480;
    puVar3 = local_158;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    FUN_144941734(*(longlong *)(param_2 + 0x30),local_158);
  }
  local_230 = param_2 + 0x40;
  local_238 = &local_68;
  local_58 = *(undefined8 *)(param_2 + 0x110);
  uStack_50 = *(undefined8 *)(param_2 + 0x118);
  local_68 = *(undefined8 *)(param_2 + 0x100);
  uStack_60 = *(undefined8 *)(param_2 + 0x108);
  local_48 = *(undefined8 *)(param_2 + 0x120);
  uStack_40 = *(undefined8 *)(param_2 + 0x128);
  local_38 = *(undefined4 *)(param_2 + 0x130);
  uStack_34 = *(undefined4 *)(param_2 + 0x134);
  uStack_30 = *(undefined4 *)(param_2 + 0x138);
  uStack_2c = *(undefined4 *)(param_2 + 0x13c);
  local_88 = *(undefined8 *)(param_2 + 0x150);
  local_98 = *(undefined8 *)(param_2 + 0x140);
  uStack_90 = *(undefined8 *)(param_2 + 0x148);
  local_80 = *(undefined4 *)(param_2 + 0x158);
  uStack_7c = *(undefined4 *)(param_2 + 0x15c);
  uStack_78 = *(undefined4 *)(param_2 + 0x160);
  uStack_74 = *(undefined4 *)(param_2 + 0x164);
  local_70 = *(undefined8 *)(param_2 + 0x168);
  puVar2 = local_158;
  puVar3 = local_1b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_f8;
  puVar3 = local_218;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_228 = 0;
  FUN_14481ffa2(param_1);
  if ((local_28 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b8cb78 FUN_140b8cb78 body=349 status=ok
// SIG undefined FUN_140b8cb78(void)

double FUN_140b8cb78(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    dVar3 = 0.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    dVar6 = 0.0;
    uVar9 = 0;
    uVar10 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    dVar4 = *(double *)(lVar2 + 0xd8);
    dVar5 = *(double *)(lVar2 + 0xe0);
    dVar3 = *(double *)(lVar2 + 0xe8);
    uVar7 = (undefined4)*(undefined8 *)(lVar2 + 0xf0);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0xf0) >> 0x20);
    uVar9 = (undefined4)*(undefined8 *)(lVar2 + 0xf8);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0xf8) >> 0x20);
    dVar6 = *(double *)(lVar2 + 0x100);
  }
  return dVar3 * *(double *)(param_1 + 0x98) +
         dVar4 * *(double *)(param_1 + 0x88) + dVar5 * *(double *)(param_1 + 0x90) +
         dVar6 * *(double *)(param_1 + 0x80) +
         (double)CONCAT44(uVar8,uVar7) * *(double *)(param_1 + 0x70) +
         (double)CONCAT44(uVar10,uVar9) * *(double *)(param_1 + 0x78) +
         *(double *)(lVar1 + 0xe8) * *(double *)(param_1 + 0x68) +
         *(double *)(lVar1 + 0xd8) * *(double *)(param_1 + 0x58) +
         *(double *)(lVar1 + 0xe0) * *(double *)(param_1 + 0x60) +
         *(double *)(lVar1 + 0x100) * *(double *)(param_1 + 0x50) +
         *(double *)(lVar1 + 0xf0) * *(double *)(param_1 + 0x40) +
         *(double *)(lVar1 + 0xf8) * *(double *)(param_1 + 0x48);
}



// FUNCTION 140b8ccd6 FUN_140b8ccd6 body=843 status=ok
// SIG undefined FUN_140b8ccd6(void)

void FUN_140b8ccd6(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar2;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(longlong **)(param_1 + 8);
  }
  dVar3 = *(double *)(param_1 + 0x80);
  dVar4 = *(double *)(param_1 + 0x88);
  dVar11 = *(double *)(param_1 + 0x90);
  dVar12 = *(double *)(param_1 + 0x98);
  dVar7 = *(double *)(lVar5 + 0x148);
  dVar6 = *(double *)(lVar5 + 0x148);
  dVar13 = *(double *)(lVar5 + 0x138);
  dVar9 = *(double *)(lVar5 + 0x138);
  dVar1 = *(double *)(lVar5 + 0x130);
  dVar2 = *(double *)(lVar5 + 0x130);
  dVar16 = *(double *)(lVar5 + 0x140);
  dVar14 = *(double *)(lVar5 + 0x140);
  dVar8 = dVar4 * dVar16 * -1.0 + dVar11 * dVar13 + dVar1 * dVar12 * 1.0 + dVar7 * dVar3;
  dVar10 = dVar3 * dVar14 * 1.0 + dVar12 * dVar9 + dVar2 * dVar11 * -1.0 + dVar6 * dVar4;
  dVar13 = dVar12 * dVar16 * 1.0 + ((dVar1 * dVar4 * 1.0 + dVar7 * dVar11) - dVar13 * dVar3);
  dVar14 = dVar11 * dVar14 * -1.0 + ((dVar2 * dVar3 * -1.0 + dVar6 * dVar12) - dVar9 * dVar4);
  dVar7 = dVar10 + dVar10;
  dVar9 = dVar13 + dVar13;
  dVar6 = dVar8 * (dVar8 + dVar8);
  dVar1 = (dVar8 + dVar8) * dVar14;
  dVar3 = 1.0 - (dVar13 * dVar9 + dVar10 * dVar7);
  dVar16 = dVar14 * dVar9 + dVar8 * dVar7;
  dVar4 = dVar8 * dVar9 - dVar7 * dVar14;
  dVar12 = dVar8 * dVar7 - dVar14 * dVar9;
  dVar2 = 1.0 - (dVar13 * dVar9 + dVar6);
  dVar15 = dVar10 * dVar9 + dVar1;
  dVar8 = dVar7 * dVar14 + dVar8 * dVar9;
  dVar1 = dVar10 * dVar9 - dVar1;
  dVar10 = 1.0 - (dVar10 * dVar7 + dVar6);
  dVar6 = *(double *)(param_1 + 0x128);
  dVar13 = dVar6 * dVar3;
  dVar7 = *(double *)(param_1 + 0x130);
  dVar11 = dVar7 * dVar16;
  dVar9 = *(double *)(param_1 + 0x138);
  dVar14 = dVar9 * dVar4;
  *param_2 = dVar4 * dVar14 + dVar3 * dVar13 + dVar16 * dVar11;
  param_2[4] = dVar9 * dVar15 * dVar15 + dVar6 * dVar12 * dVar12 + dVar2 * dVar7 * dVar2;
  param_2[8] = dVar9 * dVar10 * dVar10 + dVar6 * dVar8 * dVar8 + dVar7 * dVar1 * dVar1;
  dVar16 = dVar15 * dVar14 + dVar12 * dVar13 + dVar2 * dVar11;
  param_2[1] = dVar16;
  param_2[3] = dVar16;
  dVar13 = dVar14 * dVar10 + dVar13 * dVar8 + dVar11 * dVar1;
  param_2[2] = dVar13;
  param_2[6] = dVar13;
  dVar6 = dVar9 * dVar15 * dVar10 + dVar6 * dVar12 * dVar8 + dVar7 * dVar2 * dVar1;
  param_2[5] = dVar6;
  param_2[7] = dVar6;
  return;
}



// FUNCTION 140b8d022 FUN_140b8d022 body=84 status=ok
// SIG undefined FUN_140b8d022(void)

void FUN_140b8d022(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a658e();
  local_20 = param_1;
  FUN_140b8d077(param_2,param_1 + 0x78);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8d077 FUN_140b8d077 body=485 status=ok
// SIG undefined FUN_140b8d077(void)

void FUN_140b8d077(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if (*param_2 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = **(longlong **)(*param_2 + 8);
    }
    (**(code **)(*param_1 + 0x160))(param_1);
    plVar3 = (longlong *)*param_2;
    if (plVar3 == (longlong *)0x0) goto LAB_140b8d142;
    lVar2 = *plVar3;
  }
  else {
    local_30 = 0;
    (**(code **)(*param_1 + 0x160))(param_1,&local_30);
    if (local_30 == 0) {
      *param_2 = 0;
      goto LAB_140b8d142;
    }
    local_38 = 0;
    plVar1 = (longlong *)FUN_1403a5e2e(&local_30,param_3,&local_38,0);
    plVar3 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined *)plVar1[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_48 = FUN_140342cba();
        local_40 = FUN_1468c7f1e;
        local_50 = 0;
        local_58 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      if (DAT_14c951a40 == 0) {
        bVar5 = puVar4 != (undefined *)0x0;
        if (puVar4 != &DAT_14c951a38 && bVar5) {
          do {
            puVar4 = *(undefined **)(puVar4 + 0x30);
            bVar5 = puVar4 != (undefined *)0x0;
            if (puVar4 == &DAT_14c951a38) break;
          } while (puVar4 != (undefined *)0x0);
        }
      }
      else {
        bVar5 = (*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a40) != 0;
      }
      plVar3 = (longlong *)0x0;
      if (bVar5) {
        plVar3 = plVar1;
      }
    }
    *param_2 = (longlong)plVar3;
    lVar2 = *plVar3;
  }
  (**(code **)(lVar2 + 0x10))(plVar3,param_1);
LAB_140b8d142:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b8d25e FUN_140b8d25e body=38 status=ok
// SIG undefined FUN_140b8d25e(void)

undefined8 FUN_140b8d25e(longlong *param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1[9] + 0x7b) == '\x01') &&
     (cVar1 = (**(code **)(*param_1 + 0x88))(), cVar1 != '\x02')) {
    return 2;
  }
  return 0;
}



// FUNCTION 140b8d284 FUN_140b8d284 body=3156 status=ok
// SIG undefined FUN_140b8d284(void)

ulonglong FUN_140b8d284(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 ****ppppuVar14;
  uint uVar15;
  undefined8 unaff_RBP;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  float local_bc;
  code *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  int local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar19 = *(longlong *)(param_1 + 0x48);
  local_bc = 0.0;
  lVar22 = *(longlong *)(param_1 + 0x40);
  local_b0 = param_1;
  if (lVar22 == 0) {
    lVar21 = 0;
    local_b0 = 0;
LAB_140b8dac5:
    local_a8 = (longlong *)0x0;
    lVar22 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  else {
    if (*(int *)(lVar22 + 0x4c) == 0) {
LAB_140b8d84e:
      lVar21 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar22 + 0x48);
      lVar21 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar18 == (longlong *)0x0) ||
           (((int)plVar18[2] != *(int *)(lVar22 + 0x4c) ||
            ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_140b8d84e;
        lVar21 = *plVar18;
      }
    }
    plVar18 = *(longlong **)(lVar22 + 0x118);
    if (plVar18 == (longlong *)0x0) goto LAB_140b8dac5;
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar18 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    LOCK();
    *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
    UNLOCK();
    lVar22 = 0;
    local_a8 = plVar18;
  }
  plVar18 = local_a8;
  local_b8 = (code *)CONCAT71(local_b8._1_7_,3);
  local_90 = 0;
  local_a0._0_4_ = 0;
  if (lVar21 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_a0;
  }
  else {
    uVar3 = *(uint *)(lVar21 + 0xc);
    local_a0 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    iVar8 = *(int *)(lVar21 + 0x10);
    if (*(int *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar8 = *(int *)(lVar21 + 0x10);
      bVar25 = iVar8 == 0;
      if (bVar25) {
        *(int *)(lVar21 + 0x10) = iVar17;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_a0;
      if (bVar25) {
        iVar8 = iVar17;
      }
    }
  }
  local_a0._0_4_ = uVar3;
  local_a0 = CONCAT44(iVar8,(uint)local_a0);
  local_98 = 2;
  if (local_90 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_90 + -1,1);
    local_90 = 0;
  }
  if ((char)lVar22 == '\0') {
    LOCK();
    piVar1 = (int *)((longlong)plVar18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  FUN_1447c3578(lVar19 + 0xc0,local_88,&local_b8);
  cVar7 = FUN_140a1daa8(local_88,&local_bc);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar14 = local_88;
    if (0x18 < local_70) {
      ppppuVar14 = (undefined8 ****)local_88[0];
    }
    (*pcVar4)(ppppuVar14);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  lVar21 = DAT_14c9a3da0;
  if ((longlong)local_90 != 0) {
    lVar20 = (longlong)local_90 + -1;
    lVar22 = lVar20 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
    if (*(longlong *)(lVar21 + lVar22) != 0) {
      FUN_1400020a8();
    }
    lVar24 = DAT_14c9a3da0;
    iVar8 = (int)lVar20;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar24 + lVar22) = 0xffffffff;
    iVar17 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar17 = DAT_14c9a3dd0;
    }
    *(int *)(lVar24 + 4 + lVar22) = iVar17;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar13 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3dc0;
    }
    iVar17 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar17 = iVar8;
    }
    bVar5 = (byte)lVar20 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar13 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_90 = 0;
    lVar22 = lVar21;
  }
  if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if ((cVar7 != '\0') && (plVar18 = (longlong *)FUN_140343d7a(param_1), plVar18 != (longlong *)0x0))
  {
    if (DAT_14cb22240 == 0) {
      local_b8 = FUN_1449e2820;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_1464376fa;
      local_e8 = &LAB_147f28935;
      local_f0 = FUN_146437c39;
      local_f8 = L"Engine";
      local_100 = 0;
      local_108 = 0x10004001;
      local_110 = 8;
      local_118 = 0x28;
      local_e0 = &local_b8;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb22240);
    if (plVar18 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_b8 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = &LAB_1464376fa;
        local_e8 = &LAB_147f28935;
        local_f0 = FUN_146437c39;
        local_f8 = L"Engine";
        local_100 = 0;
        local_108 = 0x10004001;
        local_110 = 8;
        local_118 = 0x28;
        local_e0 = &local_b8;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar10 = (longlong *)FUN_144718840(plVar18,DAT_14cb22240);
      if (plVar10 != (longlong *)0x0 && plVar18 != plVar10) {
        lVar21 = *(longlong *)(param_1 + 0x40);
        if (lVar21 == 0) {
          lVar20 = 0;
          param_1 = 0;
LAB_140b8ddcc:
          local_a8 = (longlong *)0x0;
          uVar16 = CONCAT71((int7)((ulonglong)lVar22 >> 8),1);
          local_b0 = param_1;
        }
        else {
          if (*(int *)(lVar21 + 0x4c) == 0) {
LAB_140b8daba:
            lVar20 = 0;
          }
          else {
            uVar3 = *(uint *)(lVar21 + 0x48);
            lVar20 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              plVar18 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((plVar18 == (longlong *)0x0) ||
                 (((int)plVar18[2] != *(int *)(lVar21 + 0x4c) ||
                  ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_140b8daba;
              lVar20 = *plVar18;
            }
          }
          plVar18 = *(longlong **)(lVar21 + 0x118);
          if (plVar18 == (longlong *)0x0) goto LAB_140b8ddcc;
          LOCK();
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar18 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
          LOCK();
          *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
          UNLOCK();
          uVar16 = 0;
          local_b0 = param_1;
          local_a8 = plVar18;
        }
        plVar18 = local_a8;
        local_b8 = (code *)CONCAT71(local_b8._1_7_,3);
        local_90 = 0;
        local_a0._0_4_ = 0;
        if (lVar20 == 0) {
          iVar8 = 0;
          uVar3 = (uint)local_a0;
        }
        else {
          uVar3 = *(uint *)(lVar20 + 0xc);
          local_a0 = (ulonglong)uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar22 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar22 = 0;
          }
          iVar8 = *(int *)(lVar22 + 0x10);
          if (*(int *)(lVar22 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar8 = *(int *)(lVar22 + 0x10);
            bVar25 = iVar8 == 0;
            if (bVar25) {
              *(int *)(lVar22 + 0x10) = iVar17;
              iVar8 = 0;
            }
            UNLOCK();
            uVar3 = (uint)local_a0;
            if (bVar25) {
              iVar8 = iVar17;
            }
          }
        }
        local_a0._0_4_ = uVar3;
        local_a0 = CONCAT44(iVar8,(uint)local_a0);
        local_98 = 2;
        if (local_90 != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_90 + -1,1);
          local_90 = 0;
        }
        if ((char)uVar16 == '\0') {
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
        FUN_1447c3578(lVar19 + 0x80,local_88,&local_b8);
        lVar22 = FUN_14030a32e(local_88);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar14 = local_88;
          if (0x18 < local_70) {
            ppppuVar14 = (undefined8 ****)local_88[0];
          }
          (*pcVar4)(ppppuVar14);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88[0]);
        }
        lVar21 = DAT_14c9a3da0;
        if ((longlong)local_90 != 0) {
          lVar20 = (longlong)local_90 + -1;
          lVar24 = lVar20 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar24),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar24));
          if (*(longlong *)(lVar21 + lVar24) != 0) {
            FUN_1400020a8();
          }
          lVar21 = DAT_14c9a3da0;
          iVar8 = (int)lVar20;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
          }
          *(undefined4 *)(lVar21 + lVar24) = 0xffffffff;
          iVar17 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar17 = DAT_14c9a3dd0;
          }
          *(int *)(lVar21 + 4 + lVar24) = iVar17;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar13 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar13 = DAT_14c9a3dc0;
          }
          iVar17 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar17 = iVar8;
          }
          bVar5 = (byte)lVar20 & 0x1f;
          DAT_14c9a3dd0 = iVar8;
          *(uint *)(puVar13 + (longlong)(iVar17 >> 5) * 4) =
               *(uint *)(puVar13 + (longlong)(iVar17 >> 5) * 4) &
               (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          local_90 = 0;
        }
        if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
        if (lVar22 != 0) {
          lVar21 = (**(code **)(*plVar10 + 0x28))(plVar10);
          fVar6 = local_bc;
          if (*(char *)(lVar19 + 0xb8) == '\x01') {
            uVar3 = *(uint *)(lVar22 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            uVar23 = (ulonglong)*(uint *)(lVar19 + 0x10);
            if (*(uint *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              uVar15 = DAT_14c964868 + 1;
              uVar16 = (ulonglong)uVar15;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar25) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar16);
              }
              LOCK();
              uVar9 = *(uint *)(lVar19 + 0x10);
              bVar25 = uVar9 == 0;
              if (bVar25) {
                *(uint *)(lVar19 + 0x10) = uVar15;
                uVar9 = 0;
              }
              UNLOCK();
              uVar23 = (ulonglong)uVar9;
              if (bVar25) {
                uVar23 = uVar16;
              }
            }
            uVar16 = CONCAT71((int7)(uVar16 >> 8),2);
            if (*(int *)(lVar21 + 0x58) != *(int *)(lVar21 + 0x84)) {
              lVar19 = lVar21 + 0x88;
              if (*(longlong *)(lVar21 + 0x90) != 0) {
                lVar19 = *(longlong *)(lVar21 + 0x90);
              }
              iVar8 = *(int *)(lVar19 + (ulonglong)
                                        (*(int *)(lVar21 + 0x98) - 1U & ((uint)uVar23 ^ uVar3)) * 4)
              ;
              if (iVar8 != -1) {
                lVar19 = *(longlong *)(lVar21 + 0x50);
                do {
                  lVar20 = (longlong)iVar8 * 0x2b0;
                  local_b8 = *(code **)(lVar19 + lVar20);
                  local_88[0] = (undefined8 ****)(uVar23 << 0x20 | (ulonglong)uVar3);
                  cVar7 = FUN_14472d054(&local_b8,local_88);
                  lVar19 = *(longlong *)(lVar21 + 0x50);
                  if (cVar7 != '\0') {
                    if (((lVar19 + lVar20 != 0) &&
                        (pfVar11 = (float *)(lVar19 + lVar20 + 8), pfVar11 != (float *)0x0)) &&
                       (*pfVar11 <= fVar6)) goto LAB_140b8da4c;
                    break;
                  }
                  iVar8 = *(int *)(lVar19 + 0x2a8 + lVar20);
                } while (iVar8 != -1);
              }
            }
            goto LAB_140b8d7e9;
          }
          if (*(char *)(lVar19 + 0xb8) == '\0') {
            uVar3 = *(uint *)(lVar22 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            uVar23 = (ulonglong)*(uint *)(lVar19 + 0x10);
            if (*(uint *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              uVar15 = DAT_14c964868 + 1;
              uVar16 = (ulonglong)uVar15;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar25) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar16);
              }
              LOCK();
              uVar9 = *(uint *)(lVar19 + 0x10);
              bVar25 = uVar9 == 0;
              if (bVar25) {
                *(uint *)(lVar19 + 0x10) = uVar15;
                uVar9 = 0;
              }
              UNLOCK();
              uVar23 = (ulonglong)uVar9;
              if (bVar25) {
                uVar23 = uVar16;
              }
            }
            if (*(int *)(lVar21 + 0x58) != *(int *)(lVar21 + 0x84)) {
              lVar19 = lVar21 + 0x88;
              if (*(longlong *)(lVar21 + 0x90) != 0) {
                lVar19 = *(longlong *)(lVar21 + 0x90);
              }
              iVar8 = *(int *)(lVar19 + (ulonglong)
                                        (*(int *)(lVar21 + 0x98) - 1U & ((uint)uVar23 ^ uVar3)) * 4)
              ;
              if (iVar8 != -1) {
                lVar19 = *(longlong *)(lVar21 + 0x50);
                do {
                  lVar20 = (longlong)iVar8 * 0x2b0;
                  local_b8 = *(code **)(lVar19 + lVar20);
                  local_88[0] = (undefined8 ****)(uVar23 << 0x20 | (ulonglong)uVar3);
                  cVar7 = FUN_14472d054(&local_b8,local_88);
                  lVar19 = *(longlong *)(lVar21 + 0x50);
                  if (cVar7 != '\0') {
                    if (((lVar19 + lVar20 != 0) &&
                        (pfVar11 = (float *)(lVar19 + lVar20 + 8), pfVar11 != (float *)0x0)) &&
                       (uVar16 = CONCAT71((int7)(uVar16 >> 8),2), *pfVar11 <= fVar6))
                    goto LAB_140b8d7e9;
                    break;
                  }
                  iVar8 = *(int *)(lVar19 + 0x2a8 + lVar20);
                } while (iVar8 != -1);
              }
            }
LAB_140b8da4c:
            uVar12 = (**(code **)(*plVar10 + 0x28))(plVar10);
            uVar16 = 0;
            FUN_1400b9668(uVar12,0,lVar22);
            goto LAB_140b8d7e9;
          }
        }
      }
    }
  }
  uVar16 = 0;
LAB_140b8d7e9:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 140b8deda FUN_140b8deda body=254 status=ok
// SIG undefined FUN_140b8deda(void)

longlong FUN_140b8deda(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x988) == '\0') {
    *(undefined1 *)(param_2 + 0x60) = 0;
    goto LAB_140b8df52;
  }
  local_48 = param_1;
  FUN_140b8dfda(&local_40);
  if (local_38 == '\0') {
    do {
      cVar1 = FUN_140b8e10e(param_1);
    } while (cVar1 != '\0');
    if (*(char *)(param_1 + 0x988) != '\x02') goto LAB_140b8df3f;
    if (*(char *)(param_1 + 0x968) == '\x01') {
      if (*(int *)(param_1 + 0x9b4) < *(int *)(param_1 + 0x96c)) goto LAB_140b8df92;
      goto LAB_140b8df3f;
    }
    cVar1 = FUN_140b8e072(param_1 + 0x990);
    if (cVar1 == '\0') goto LAB_140b8df3f;
LAB_140b8df92:
    plVar2 = (longlong *)FUN_140512bb0(param_1 + 0x990);
    if (plVar2 == (longlong *)0x0) goto LAB_140b8df3f;
    (**(code **)(*plVar2 + 0xa00))(plVar2,param_2,param_3,param_4);
  }
  else {
LAB_140b8df3f:
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  if (local_38 == '\0') {
    *(int *)(local_40 + 0x28) = *(int *)(local_40 + 0x28) + -1;
  }
LAB_140b8df52:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b8dfda FUN_140b8dfda body=152 status=ok
// SIG undefined FUN_140b8dfda(void)

undefined8 * FUN_140b8dfda(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &DAT_14cb8c138;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = DAT_14cb8c160;
  lVar3 = (longlong)(int)DAT_14cb8c160;
  if (0 < lVar3) {
    puVar2 = DAT_14cb8c158;
    if (DAT_14cb8c158 == (undefined8 *)0x0) {
      puVar2 = &DAT_14cb8c138;
    }
    lVar4 = 0;
    do {
      if (*(longlong *)((longlong)puVar2 + lVar4) == *param_2) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 - lVar4 != 0);
  }
  DAT_14cb8c160 = DAT_14cb8c160 + 1;
  if (DAT_14cb8c164 < DAT_14cb8c160) {
    FUN_148999692(iVar1);
  }
  puVar2 = &DAT_14cb8c138;
  if (DAT_14cb8c158 != (undefined8 *)0x0) {
    puVar2 = DAT_14cb8c158;
  }
  puVar2[lVar3] = *param_2;
  return param_1;
}



// FUNCTION 140b8e072 FUN_140b8e072 body=155 status=ok
// SIG undefined FUN_140b8e072(void)

ulonglong FUN_140b8e072(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if ((char)param_1[4] == '\0') {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) {
        return (ulonglong)
               CONCAT31((int3)(*(uint *)(lVar2 + 8) >> 8),(*(uint *)(lVar2 + 8) & 0x10200000) == 0);
      }
    }
  }
  else {
    lVar2 = *(longlong *)param_1;
    if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x10) != 0)) {
      lVar4 = *(longlong *)(lVar2 + 8);
      lVar2 = (longlong)*(int *)(lVar2 + 0x10) * 0x18;
      do {
        lVar2 = lVar2 + -0x18;
        uVar3 = FUN_140b8e072(lVar4);
        if ((char)uVar3 == '\0') {
          return uVar3;
        }
        lVar4 = lVar4 + 0x18;
      } while (lVar2 != 0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140b8e10e FUN_140b8e10e body=1095 status=ok
// SIG undefined FUN_140b8e10e(void)

bool FUN_140b8e10e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined8 unaff_RDI;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [39];
  char local_81;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 *local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  char *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = (char)param_1[0x131];
  if (cVar3 == '\x01') {
    if (((longlong *)param_1[0x13a] != (longlong *)0x0) &&
       (*(int *)((longlong)param_1 + 0x9cc) != 0)) {
      uVar4 = *(uint *)(param_1 + 0x139);
      uVar8 = 0;
      if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140b8e1d8;
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_1 + 0x9cc))) &&
          ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) &&
         (lVar12 = (**(code **)(*(longlong *)param_1[0x13a] + 0x20))(), lVar12 != 0)) {
        if ((param_1[0x12f] == 0) || (uVar8 = 1, *(char *)(param_1[0x12f] + 0x120) == '\x02')) {
          cVar6 = FUN_1405067fc(lVar12,&DAT_14cb8c168);
          uVar8 = (uint)(byte)(2 - cVar6);
        }
        goto LAB_140b8e1d8;
      }
    }
  }
  else {
    if (cVar3 == '\x02') {
      if ((char)param_1[0x135] == '\0') {
        uVar11 = (undefined7)((ulonglong)unaff_RDI >> 8);
        if ((char)param_1[0x12d] == '\x01') {
          uVar8 = (uint)CONCAT71(uVar11,2);
          if (*(int *)((longlong)param_1 + 0x9b4) < *(int *)((longlong)param_1 + 0x96c))
          goto LAB_140b8e1d8;
        }
        else {
          cVar6 = FUN_140b8e072(param_1 + 0x132);
          uVar8 = (uint)CONCAT71(uVar11,2);
          if (cVar6 != '\0') goto LAB_140b8e1d8;
        }
      }
      local_40 = &local_81;
      local_81 = '\0';
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b42e160;
      local_68 = &LAB_143e43a22;
      FUN_140ba5e30(param_1 + 0x132,&local_68);
      if (local_68 != (undefined1 *)0x0) {
        pppuVar10 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar10 = &local_48;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      uVar11 = (undefined7)((ulonglong)&local_68 >> 8);
      uVar8 = (uint)CONCAT71(uVar11,2);
      if ((((local_81 == '\0') && (uVar8 = (uint)CONCAT71(uVar11,3), param_1[0x13e] != 0)) &&
          (cVar6 = FUN_144729dda(param_1 + 0x13d), cVar6 != '\0')) &&
         ((longlong *)param_1[0x13e] != (longlong *)0x0)) {
        uVar9 = (**(code **)(*(longlong *)param_1[0x13e] + 0x18))();
        local_6c = 0;
        local_68 = DAT_14cb8c180;
        local_60 = 0xffffffff;
        local_80 = DAT_14cb8c168;
        local_78 = 0xffffffff;
        FUN_140f8b8f2(uVar9);
      }
      goto LAB_140b8e1d8;
    }
    if (cVar3 != '\x03') {
      uVar8 = FUN_14577e3a0(param_1);
      goto LAB_140b8e1d8;
    }
    if (((param_1[0x15] != 0) && ((longlong *)param_1[0x13a] != (longlong *)0x0)) &&
       (*(int *)((longlong)param_1 + 0x9cc) != 0)) {
      uVar4 = *(uint *)(param_1 + 0x139);
      uVar8 = 0;
      if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140b8e1d8;
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((lVar12 != 0) &&
         (((*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_1 + 0x9cc) &&
           ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) &&
          (lVar12 = (**(code **)(*(longlong *)param_1[0x13a] + 0x20))(), lVar12 != 0)))) {
        if (param_1[0x12f] == 0) {
          bVar13 = false;
        }
        else {
          bVar13 = *(char *)(param_1[0x12f] + 0xa0) == '\0';
        }
        cVar6 = FUN_1405067fc(lVar12,&DAT_14cb8c168);
        uVar8 = 3;
        if ((bVar13) || (cVar6 != '\0')) goto LAB_140b8e1d8;
        if ((param_1[0x13e] != 0) &&
           ((cVar6 = FUN_144729dda(param_1 + 0x13d), cVar6 != '\0' &&
            ((longlong *)param_1[0x13e] != (longlong *)0x0)))) {
          uVar9 = (**(code **)(*(longlong *)param_1[0x13e] + 0x18))();
          local_70 = 0xc479c000;
          local_6c = 1;
          local_68 = DAT_14cb8c170;
          local_60 = 0xffffffff;
          local_80 = DAT_14cb8c168;
          local_78 = 0xffffffff;
          FUN_140f8b8f2(uVar9);
        }
        param_1[0x12f] = 0;
        plVar5 = (longlong *)param_1[0x130];
        if (plVar5 != (longlong *)0x0) {
          param_1[0x130] = 0;
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
    }
  }
  uVar8 = 0;
LAB_140b8e1d8:
  *(char *)(param_1 + 0x131) = (char)uVar8;
  if ((char)uVar8 != cVar3) {
    FUN_14577e2fe(param_1 + 0x12a,uVar8);
  }
  uVar7 = (**(code **)(*param_1 + 0xa58))(param_1);
  cVar6 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if ((char)uVar7 != cVar6) {
    (**(code **)(*param_1 + 0x3b0))(param_1,uVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (char)param_1[0x131] != '\0' && (char)param_1[0x131] != cVar3;
}



// FUNCTION 140b8e580 FUN_140b8e580 body=120 status=ok
// SIG undefined FUN_140b8e580(void)

undefined8 FUN_140b8e580(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cbd3848;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd3848 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b8e5fa FUN_140b8e5fa body=23866 status=ok
// SIG undefined FUN_140b8e5fa(void)

ulonglong FUN_140b8e5fa(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,
                       undefined4 param_4,longlong param_5,undefined1 param_6,undefined4 param_7,
                       uint param_8)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  char cVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  int iVar23;
  void *pvVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  longlong *plVar32;
  int *_Src;
  undefined8 *puVar33;
  byte *pbVar34;
  ulonglong *puVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  uint uVar44;
  int *piVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  int iVar49;
  float *pfVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  uint uVar54;
  longlong lVar55;
  uint uVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  float fVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  undefined4 uVar84;
  float fVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  float fVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  float fVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auStack_a78 [32];
  uint local_a58;
  longlong *local_a50;
  undefined8 local_a48;
  longlong local_a40;
  undefined1 local_a38;
  undefined4 local_a30;
  int *local_a28;
  longlong local_a20;
  float local_a18;
  ulonglong *local_a10;
  undefined8 *local_a08;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined1 local_9f8 [16];
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [8];
  undefined8 uStack_9d0;
  undefined1 local_9c8 [12];
  undefined4 uStack_9bc;
  undefined1 local_9b8 [16];
  undefined8 local_9a8;
  double local_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined1 local_988 [16];
  double local_978;
  double local_970;
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  double local_940;
  double local_938;
  undefined8 local_930;
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  double local_900;
  double local_8f8;
  undefined8 uStack_8f0;
  undefined1 local_8e8 [16];
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  double dStack_8d0;
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [8];
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  double local_898;
  undefined8 uStack_890;
  undefined1 local_888 [24];
  double local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  double local_848;
  undefined8 uStack_840;
  double local_838;
  undefined8 uStack_830;
  double local_828;
  undefined8 uStack_820;
  longlong local_810;
  double local_808;
  double local_800;
  double local_7f8;
  double local_7f0;
  double local_7e8;
  double local_7e0;
  double local_7d8;
  undefined8 uStack_7d0;
  double local_7c8;
  undefined8 uStack_7c0;
  double local_7b8;
  undefined8 uStack_7b0;
  double local_7a8;
  undefined8 uStack_7a0;
  undefined1 local_798 [16];
  longlong local_788;
  undefined8 *local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 *puStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined4 local_720;
  undefined8 local_71c;
  undefined8 uStack_714;
  undefined8 local_70c;
  undefined8 uStack_704;
  undefined8 local_6fc;
  undefined8 uStack_6f4;
  undefined8 local_6ec;
  undefined5 uStack_6e4;
  undefined3 uStack_6df;
  undefined5 uStack_6dc;
  undefined8 uStack_6d7;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined8 local_6a8;
  longlong local_698 [74];
  longlong local_448;
  undefined8 *puStack_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined8 uStack_42c;
  uint local_424;
  byte local_420;
  undefined4 local_41c;
  wchar_t *local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined4 local_148;
  float fStack_144;
  float fStack_140;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  local_a08 = param_1;
  local_9fc = param_4;
  FUN_144b27382(local_698,param_5 + 0x500,param_5 + 0x500);
  uVar56 = *(int *)(param_5 + 0x4e0) - *(int *)(param_5 + 0x4d8);
  local_728 = 0;
  local_738 = 0;
  uStack_730 = 0;
  local_748 = 0;
  puStack_740 = (undefined8 *)0x0;
  local_758 = 0;
  uStack_750 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_71c = 0;
  uStack_714 = 0;
  local_70c = 0;
  uStack_704 = 0;
  local_6fc = 0;
  uStack_6f4 = 0;
  local_6ec = 0;
  uStack_6e4 = 0;
  uStack_6df = 0;
  uStack_6dc = 0;
  uStack_6d7 = 0;
  local_6c8 = 0;
  uStack_6c0 = 0;
  local_6b8 = 0;
  local_6b0 = 1;
  local_6a8 = 0;
  local_a10 = param_2;
  FUN_144b0e33a(param_2,&local_778);
  local_748 = *param_3;
  local_738 = param_3[1];
  local_a00 = *(undefined4 *)(param_3 + 7);
  puStack_740 = DAT_14c9c0db0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  puVar35 = local_a10;
  uVar36 = CONCAT22(local_148._2_2_,(undefined2)local_148);
  if (DAT_14c872bf0 == '\x01') {
    uVar29 = 0;
    if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) goto LAB_140b92e04;
LAB_140b8e7b3:
    uVar44 = *(uint *)(local_a08 + 1);
    if (((uVar44 != 0) ||
        (((*(int *)(local_a08 + 3) != 0 || (*(int *)(local_a08 + 0xd) != 0)) ||
         (*(int *)(local_a08 + 0x2e) != 0)))) ||
       ((*(int *)(local_a08 + 0xb) != 0 || (0 < *(int *)(local_a08 + 5))))) {
      dVar69 = *(double *)(param_5 + 0xb70) * 0.0;
      dVar94 = *(double *)(param_5 + 0xb78) * 0.0;
      dVar61 = *(double *)(param_5 + 0xb90) * 0.0;
      dVar63 = *(double *)(param_5 + 0xb98) * 0.0;
      dVar90 = *(double *)(param_5 + 0xb50) * 0.0 + *(double *)(param_5 + 0xb30) + dVar69 + dVar61;
      dVar66 = *(double *)(param_5 + 0xb58) * 0.0 + *(double *)(param_5 + 0xb38) + dVar94 + dVar63;
      dVar65 = *(double *)(param_5 + 0xba0) * 0.0;
      dVar80 = *(double *)(param_5 + 0xb80) * 0.0;
      dVar83 = *(double *)(param_5 + 0xb60) * 0.0 + *(double *)(param_5 + 0xb40) + dVar80 + dVar65;
      dVar91 = dVar83 * dVar83 + dVar90 * dVar90 + dVar66 * dVar66;
      local_998 = 0.0;
      local_8e8 = ZEXT816(0);
      uVar70 = 0;
      uVar71 = 0;
      if (9.99999993922529e-09 < dVar91) {
        dVar91 = 1.0 / SQRT(dVar91);
        local_998 = dVar91 * dVar90;
        local_8e8._8_4_ = SUB84(dVar66,0);
        local_8e8._0_8_ = dVar66 * dVar91;
        local_8e8._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
        uVar70 = SUB84(dVar83 * dVar91,0);
        uVar71 = (undefined4)((ulonglong)(dVar83 * dVar91) >> 0x20);
      }
      uStack_990 = 0;
      dVar61 = *(double *)(param_5 + 0xb30) * 0.0 + *(double *)(param_5 + 0xb50) + dVar69 + dVar61;
      dVar63 = *(double *)(param_5 + 0xb38) * 0.0 + *(double *)(param_5 + 0xb58) + dVar94 + dVar63;
      dVar90 = 0.0;
      dVar65 = *(double *)(param_5 + 0xb40) * 0.0 + *(double *)(param_5 + 0xb60) + dVar80 + dVar65;
      dVar94 = dVar65 * dVar65 + dVar61 * dVar61 + dVar63 * dVar63;
      local_8d8 = 0;
      dVar69 = 0.0;
      dVar66 = 0.0;
      dStack_8d0 = 0.0;
      if (9.99999993922529e-09 < dVar94) {
        dVar90 = 1.0 / SQRT(dVar94);
        dVar66 = dVar65 * dVar90;
        dVar69 = dVar63 * dVar90;
        local_8d8 = SUB84(dVar69,0);
        dVar90 = dVar90 * dVar61;
        dStack_8d0 = dVar63;
      }
      uStack_8d4 = (undefined4)((ulonglong)dVar69 >> 0x20);
      local_720 = 0;
      puStack_740 = DAT_14c9c0db0;
      uStack_890 = 0;
      uVar72 = (undefined4)local_998;
      uVar96 = local_998._4_4_;
      uStack_990._0_4_ = 0;
      uVar73 = (undefined4)uStack_990;
      uStack_990._4_4_ = 0;
      uVar97 = uStack_990._4_4_;
      uVar84 = local_8e8._0_4_;
      uVar86 = local_8e8._4_4_;
      uVar87 = local_8e8._8_4_;
      uVar88 = local_8e8._12_4_;
      local_8a8 = (double)CONCAT44(uVar71,uVar70);
      uStack_8a0 = 0;
      uStack_8f0 = 0;
      local_8f8 = dVar66;
      local_898 = dVar90;
      if ((int)uVar44 < 1) {
        if ((*(int *)(local_a08 + 3) < 1) && (*(int *)(local_a08 + 0xb) < 1)) {
          local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
          if (((param_8 & 1) != 0) && (local_148 = uVar36, 0 < *(int *)(local_a08 + 5))) {
LAB_140b8eeb7:
            local_720 = 0;
            local_a28 = (int *)0x0;
            local_a30 = param_7;
            local_a38 = param_6;
            local_a40 = DAT_14ca94e18;
            local_a48 = 0;
            local_a50 = local_698;
            local_a58 = 0;
            local_a18 = 0.5;
            local_a20 = param_5;
            FUN_1434144d2(local_a10,&local_778,local_a00);
            auVar3 = local_9b8;
            uVar36 = *(uint *)(local_a08 + 3);
            local_9b8 = auVar3;
            uVar44 = CONCAT22(local_148._2_2_,(undefined2)local_148);
            if (((0 < (int)uVar36) &&
                (uVar44 = CONCAT22(local_148._2_2_,(undefined2)local_148), uVar36 < 0x2aaaaaab)) &&
               (local_9b8._4_4_ = 0, local_9b8._0_4_ = uVar36 * 2, uVar29 = local_9b8._0_8_,
               uVar73 = 0, uVar97 = 0, uVar44 = CONCAT22(local_148._2_2_,(undefined2)local_148),
               uVar36 * 6 < 0x4000000)) {
              local_448 = 0;
              puStack_440 = (undefined8 *)0x0;
              local_438 = 1;
              local_434 = 0;
              uStack_42c = 0;
              local_424 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
              local_420 = 0;
              local_41c = 0;
              local_418 = L"FBatchedElements_Points";
              local_410 = 0;
              uStack_408 = 0;
              uVar36 = uVar36 * 0x180;
              fStack_144 = 0.0;
              fStack_140 = 2.29645e-41;
              local_148 = uVar36;
              if (uVar36 == 0) {
                FUN_14570b4be(local_a10,&local_448,0x4004,0);
              }
              puVar35 = local_a10;
              local_9b8 = CONCAT88(local_9b8._8_8_,uVar29);
              if (*(char *)((longlong)local_a10 + 0x69) == '\0') {
                FUN_14002049c(local_a10,1);
                local_a50 = &local_448;
                local_a58 = 8;
                (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35);
                *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
                FUN_14002049c(puVar35,0);
                lVar27 = local_798._0_8_;
              }
              else {
                local_a50 = &local_448;
                local_a58 = 8;
                (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,local_a10);
                *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
                lVar27 = local_798._0_8_;
              }
              cVar4 = *(char *)((longlong)puVar35 + 0x69);
              if (cVar4 == '\0') {
                FUN_14002049c(puVar35,1);
              }
              local_9f8._0_4_ = uVar56;
              local_a50 = (longlong *)CONCAT44(local_a50._4_4_,1);
              local_a58 = uVar36;
              lVar27 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,puVar35,lVar27);
              if (cVar4 == '\0') {
                FUN_14002049c(local_a10);
              }
              puVar35 = local_a10;
              if (0 < *(int *)(local_a08 + 3)) {
                dVar69 = 1.0 / (double)(uint)local_9f8._0_4_;
                local_9c8._0_8_ = dVar69;
                lVar28 = 0x20;
                uVar56 = 5;
                lVar51 = 0;
                do {
                  lVar55 = local_a08[2];
                  dVar94 = *(double *)(lVar55 + -0x20 + lVar28);
                  dVar65 = *(double *)(lVar55 + -0x18 + lVar28);
                  dVar61 = *(double *)(lVar55 + -0x10 + lVar28);
                  fVar60 = *(float *)(lVar55 + -8 + lVar28);
                  dVar66 = (double)fVar60;
                  local_9e8._12_4_ = uVar88;
                  local_9e8._8_4_ = uVar87;
                  dVar80 = *(double *)(param_5 + 0xac8) * dVar94 +
                           *(double *)(param_5 + 0xae8) * dVar65 +
                           *(double *)(param_5 + 0xb08) * dVar61 + *(double *)(param_5 + 0xb28);
                  dVar91 = (double)-fVar60;
                  dVar63 = (double)CONCAT44(uVar71,uVar70) * dVar66 * dVar69 * dVar80;
                  local_9e8._0_8_ = (double)CONCAT44(uVar86,uVar84) * dVar66 * dVar69 * dVar80;
                  dVar83 = dVar66 * local_998 * dVar69 * dVar80;
                  dVar9 = local_8f8 * dVar91 * dVar69 * dVar80;
                  dVar66 = (double)CONCAT44(uStack_8d4,local_8d8) * dVar91 * dVar69 * dVar80;
                  dVar80 = dVar91 * dVar90 * dVar69 * dVar80;
                  uVar70 = (&DAT_14c758c60)[*(byte *)(lVar55 + -2 + lVar28)];
                  local_9d8._0_4_ = uVar70;
                  bVar5 = *(byte *)(lVar55 + -1 + lVar28);
                  dVar90 = (dVar61 + dVar63) - dVar9;
                  dVar61 = (dVar94 + dVar83) - dVar80;
                  fVar101 = (float)dVar61;
                  dVar94 = (dVar65 + (double)local_9e8._0_8_) - dVar66;
                  fVar102 = (float)dVar94;
                  fVar60 = (float)dVar90;
                  uVar71 = (&DAT_14c758c60)[*(byte *)(lVar55 + -3 + lVar28)];
                  uVar72 = (&DAT_14c758c60)[*(byte *)(lVar55 + -4 + lVar28)];
                  uVar96 = *(undefined4 *)(lVar55 + lVar28);
                  lVar52 = (ulonglong)(uVar56 - 5) * 0x40;
                  *(float *)(lVar27 + lVar52) = fVar101;
                  *(float *)(lVar27 + 4 + lVar52) = fVar102;
                  *(float *)(lVar27 + 8 + lVar52) = fVar60;
                  *(undefined4 *)(lVar27 + 0xc + lVar52) = 0x3f800000;
                  *(float *)(lVar27 + 0x10 + lVar52) = (float)(dVar61 - (double)fVar101);
                  *(float *)(lVar27 + 0x14 + lVar52) = (float)(dVar94 - (double)fVar102);
                  *(float *)(lVar27 + 0x18 + lVar52) = (float)(dVar90 - (double)fVar60);
                  *(undefined8 *)(lVar27 + 0x1c + lVar52) = 0x3f80000000000000;
                  *(undefined4 *)(lVar27 + 0x24 + lVar52) = 0;
                  *(undefined4 *)(lVar27 + 0x28 + lVar52) = uVar70;
                  *(undefined4 *)(lVar27 + 0x2c + lVar52) = uVar71;
                  *(undefined4 *)(lVar27 + 0x30 + lVar52) = uVar72;
                  *(float *)(lVar27 + 0x34 + lVar52) = (float)bVar5 * 0.003921569;
                  *(undefined4 *)(lVar27 + 0x38 + lVar52) = uVar96;
                  uVar70 = (&DAT_14c758c60)[*(byte *)(lVar55 + -2 + lVar28)];
                  bVar5 = *(byte *)(lVar55 + -1 + lVar28);
                  uVar71 = (&DAT_14c758c60)[*(byte *)(lVar55 + -3 + lVar28)];
                  dVar94 = *(double *)(lVar55 + -0x10 + lVar28) + dVar63 + dVar9;
                  dVar65 = *(double *)(lVar55 + -0x18 + lVar28) + (double)local_9e8._0_8_ + dVar66;
                  dVar61 = *(double *)(lVar55 + -0x20 + lVar28) + dVar83 + dVar80;
                  uVar72 = (&DAT_14c758c60)[*(byte *)(lVar55 + -4 + lVar28)];
                  fVar60 = (float)dVar61;
                  fVar101 = (float)dVar65;
                  fVar102 = (float)dVar94;
                  uVar96 = *(undefined4 *)(lVar55 + lVar28);
                  lVar52 = (ulonglong)(uVar56 - 4) * 0x40;
                  *(float *)(lVar27 + lVar52) = fVar60;
                  *(float *)(lVar27 + 4 + lVar52) = fVar101;
                  *(float *)(lVar27 + 8 + lVar52) = fVar102;
                  *(undefined4 *)(lVar27 + 0xc + lVar52) = 0x3f800000;
                  *(float *)(lVar27 + 0x10 + lVar52) = (float)(dVar61 - (double)fVar60);
                  *(float *)(lVar27 + 0x14 + lVar52) = (float)(dVar65 - (double)fVar101);
                  *(float *)(lVar27 + 0x18 + lVar52) = (float)(dVar94 - (double)fVar102);
                  *(undefined8 *)(lVar27 + 0x1c + lVar52) = 0x3f80000000000000;
                  *(undefined4 *)(lVar27 + 0x24 + lVar52) = 0x3f800000;
                  *(undefined4 *)(lVar27 + 0x28 + lVar52) = uVar70;
                  *(undefined4 *)(lVar27 + 0x2c + lVar52) = uVar71;
                  *(undefined4 *)(lVar27 + 0x30 + lVar52) = uVar72;
                  *(float *)(lVar27 + 0x34 + lVar52) = (float)bVar5 * 0.003921569;
                  *(undefined4 *)(lVar27 + 0x38 + lVar52) = uVar96;
                  bVar5 = *(byte *)(lVar55 + -1 + lVar28);
                  uVar70 = (&DAT_14c758c60)[*(byte *)(lVar55 + -2 + lVar28)];
                  dVar94 = (*(double *)(lVar55 + -0x10 + lVar28) - dVar63) - dVar9;
                  dVar61 = (*(double *)(lVar55 + -0x18 + lVar28) - (double)local_9e8._0_8_) - dVar66
                  ;
                  dVar65 = (*(double *)(lVar55 + -0x20 + lVar28) - dVar83) - dVar80;
                  fVar60 = (float)dVar65;
                  fVar101 = (float)dVar61;
                  fVar102 = (float)dVar94;
                  uVar71 = (&DAT_14c758c60)[*(byte *)(lVar55 + -3 + lVar28)];
                  uVar72 = (&DAT_14c758c60)[*(byte *)(lVar55 + -4 + lVar28)];
                  uVar96 = *(undefined4 *)(lVar55 + lVar28);
                  lVar52 = (ulonglong)(uVar56 - 3) * 0x40;
                  *(float *)(lVar27 + lVar52) = fVar60;
                  *(float *)(lVar27 + 4 + lVar52) = fVar101;
                  *(float *)(lVar27 + 8 + lVar52) = fVar102;
                  *(undefined4 *)(lVar27 + 0xc + lVar52) = 0x3f800000;
                  *(float *)(lVar27 + 0x10 + lVar52) = (float)(dVar65 - (double)fVar60);
                  *(float *)(lVar27 + 0x14 + lVar52) = (float)(dVar61 - (double)fVar101);
                  *(float *)(lVar27 + 0x18 + lVar52) = (float)(dVar94 - (double)fVar102);
                  *(undefined8 *)(lVar27 + 0x1c + lVar52) = 0;
                  *(undefined4 *)(lVar27 + 0x24 + lVar52) = 0;
                  *(undefined4 *)(lVar27 + 0x28 + lVar52) = uVar70;
                  *(undefined4 *)(lVar27 + 0x2c + lVar52) = uVar71;
                  *(undefined4 *)(lVar27 + 0x30 + lVar52) = uVar72;
                  *(float *)(lVar27 + 0x34 + lVar52) = (float)bVar5 * 0.003921569;
                  *(undefined4 *)(lVar27 + 0x38 + lVar52) = uVar96;
                  bVar5 = *(byte *)(lVar55 + -1 + lVar28);
                  uVar70 = (&DAT_14c758c60)[*(byte *)(lVar55 + -2 + lVar28)];
                  dVar94 = *(double *)(lVar55 + -0x10 + lVar28) + dVar63 + dVar9;
                  dVar61 = *(double *)(lVar55 + -0x20 + lVar28) + dVar83 + dVar80;
                  fVar60 = (float)dVar61;
                  dVar65 = *(double *)(lVar55 + -0x18 + lVar28) + (double)local_9e8._0_8_ + dVar66;
                  fVar101 = (float)dVar65;
                  fVar102 = (float)dVar94;
                  uVar71 = (&DAT_14c758c60)[*(byte *)(lVar55 + -3 + lVar28)];
                  uVar72 = (&DAT_14c758c60)[*(byte *)(lVar55 + -4 + lVar28)];
                  lVar52 = (ulonglong)(uVar56 - 2) * 0x40;
                  uVar96 = *(undefined4 *)(lVar55 + lVar28);
                  *(float *)(lVar27 + lVar52) = fVar60;
                  *(float *)(lVar27 + 4 + lVar52) = fVar101;
                  *(float *)(lVar27 + 8 + lVar52) = fVar102;
                  *(undefined4 *)(lVar27 + 0xc + lVar52) = 0x3f800000;
                  *(float *)(lVar27 + 0x10 + lVar52) = (float)(dVar61 - (double)fVar60);
                  *(float *)(lVar27 + 0x14 + lVar52) = (float)(dVar65 - (double)fVar101);
                  *(float *)(lVar27 + 0x18 + lVar52) = (float)(dVar94 - (double)fVar102);
                  *(undefined8 *)(lVar27 + 0x1c + lVar52) = 0x3f80000000000000;
                  *(undefined4 *)(lVar27 + 0x24 + lVar52) = 0x3f800000;
                  *(undefined4 *)(lVar27 + 0x28 + lVar52) = uVar70;
                  *(undefined4 *)(lVar27 + 0x2c + lVar52) = uVar71;
                  *(undefined4 *)(lVar27 + 0x30 + lVar52) = uVar72;
                  *(float *)(lVar27 + 0x34 + lVar52) = (float)bVar5 * 0.003921569;
                  *(undefined4 *)(lVar27 + 0x38 + lVar52) = uVar96;
                  bVar5 = *(byte *)(lVar55 + -1 + lVar28);
                  uVar70 = (&DAT_14c758c60)[*(byte *)(lVar55 + -2 + lVar28)];
                  dVar61 = (*(double *)(lVar55 + -0x10 + lVar28) - dVar63) - dVar9;
                  dVar94 = (*(double *)(lVar55 + -0x18 + lVar28) - (double)local_9e8._0_8_) - dVar66
                  ;
                  dVar65 = (*(double *)(lVar55 + -0x20 + lVar28) - dVar83) - dVar80;
                  uVar71 = (&DAT_14c758c60)[*(byte *)(lVar55 + -3 + lVar28)];
                  fVar60 = (float)dVar65;
                  fVar101 = (float)dVar94;
                  fVar102 = (float)dVar61;
                  uVar96 = *(undefined4 *)(lVar55 + lVar28);
                  lVar52 = (ulonglong)(uVar56 - 1) * 0x40;
                  uVar72 = (&DAT_14c758c60)[*(byte *)(lVar55 + -4 + lVar28)];
                  *(float *)(lVar27 + lVar52) = fVar60;
                  *(float *)(lVar27 + 4 + lVar52) = fVar101;
                  *(float *)(lVar27 + 8 + lVar52) = fVar102;
                  *(undefined4 *)(lVar27 + 0xc + lVar52) = 0x3f800000;
                  *(float *)(lVar27 + 0x10 + lVar52) = (float)(dVar65 - (double)fVar60);
                  *(float *)(lVar27 + 0x14 + lVar52) = (float)(dVar94 - (double)fVar101);
                  *(float *)(lVar27 + 0x18 + lVar52) = (float)(dVar61 - (double)fVar102);
                  *(undefined8 *)(lVar27 + 0x1c + lVar52) = 0;
                  *(undefined4 *)(lVar27 + 0x24 + lVar52) = 0;
                  *(undefined4 *)(lVar27 + 0x28 + lVar52) = uVar70;
                  *(undefined4 *)(lVar27 + 0x2c + lVar52) = uVar71;
                  *(undefined4 *)(lVar27 + 0x30 + lVar52) = uVar72;
                  *(float *)(lVar27 + 0x34 + lVar52) = (float)bVar5 * 0.003921569;
                  *(undefined4 *)(lVar27 + 0x38 + lVar52) = uVar96;
                  uVar70 = (&DAT_14c758c60)[*(byte *)(lVar55 + -2 + lVar28)];
                  bVar5 = *(byte *)(lVar55 + -1 + lVar28);
                  uVar71 = (&DAT_14c758c60)[*(byte *)(lVar55 + -3 + lVar28)];
                  dVar9 = (*(double *)(lVar55 + -0x10 + lVar28) - dVar63) + dVar9;
                  dVar80 = (*(double *)(lVar55 + -0x20 + lVar28) - dVar83) + dVar80;
                  fVar60 = (float)dVar80;
                  dVar66 = (*(double *)(lVar55 + -0x18 + lVar28) - (double)local_9e8._0_8_) + dVar66
                  ;
                  fVar101 = (float)dVar66;
                  fVar102 = (float)dVar9;
                  uVar96 = *(undefined4 *)(lVar55 + lVar28);
                  uVar72 = (&DAT_14c758c60)[*(byte *)(lVar55 + -4 + lVar28)];
                  lVar55 = (ulonglong)uVar56 * 0x40;
                  *(float *)(lVar27 + lVar55) = fVar60;
                  *(float *)(lVar27 + 4 + lVar55) = fVar101;
                  *(float *)(lVar27 + 8 + lVar55) = fVar102;
                  *(undefined4 *)(lVar27 + 0xc + lVar55) = 0x3f800000;
                  *(float *)(lVar27 + 0x10 + lVar55) = (float)(dVar80 - (double)fVar60);
                  *(float *)(lVar27 + 0x14 + lVar55) = (float)(dVar66 - (double)fVar101);
                  *(float *)(lVar27 + 0x18 + lVar55) = (float)(dVar9 - (double)fVar102);
                  *(undefined8 *)(lVar27 + 0x1c + lVar55) = 0;
                  *(undefined4 *)(lVar27 + 0x24 + lVar55) = 0x3f800000;
                  *(undefined4 *)(lVar27 + 0x28 + lVar55) = uVar70;
                  *(undefined4 *)(lVar27 + 0x2c + lVar55) = uVar71;
                  *(undefined4 *)(lVar27 + 0x30 + lVar55) = uVar72;
                  *(float *)(lVar27 + 0x34 + lVar55) = (float)bVar5 * 0.003921569;
                  *(undefined4 *)(lVar27 + 0x38 + lVar55) = uVar96;
                  lVar51 = lVar51 + 1;
                  lVar28 = lVar28 + 0x28;
                  uVar56 = uVar56 + 6;
                  uVar84 = local_8e8._0_4_;
                  uVar86 = local_8e8._4_4_;
                  uVar87 = local_8e8._8_4_;
                  uVar88 = local_8e8._12_4_;
                  uVar70 = (undefined4)local_8a8;
                  uVar71 = local_8a8._4_4_;
                  dVar90 = local_898;
                } while (lVar51 < *(int *)(local_a08 + 3));
              }
              uVar14 = local_798._0_8_;
              if (*(char *)((longlong)local_a10 + 0x69) == '\0') {
                FUN_14002049c(local_a10,1);
                (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,uVar14);
                FUN_14002049c(puVar35,0);
              }
              else {
                (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_a10,local_798._0_8_);
              }
              dVar66 = local_8f8;
              auVar3 = local_9b8;
              uVar72 = (undefined4)local_998;
              uVar96 = local_998._4_4_;
              uVar73 = (undefined4)uStack_990;
              uVar97 = uStack_990._4_4_;
              uVar56 = local_9f8._0_4_;
              uVar14 = local_798._0_8_;
              puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar25 + 5;
              if ((undefined8 *)puVar35[1] < puVar41) {
                FUN_140023dd8(puVar35,0x30);
                puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar41 = puVar25 + 5;
              }
              *puVar35 = (ulonglong)puVar41;
              *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
              *(undefined8 **)puVar35[6] = puVar25;
              puVar35[6] = (ulonglong)(puVar25 + 1);
              puVar25[1] = 0;
              *puVar25 = &PTR_LAB_14a1fb5a8;
              *(undefined4 *)(puVar25 + 2) = 0;
              puVar25[3] = uVar14;
              *(undefined4 *)(puVar25 + 4) = 0;
              puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar25 + 4;
              if ((undefined8 *)puVar35[1] < puVar41) {
                FUN_140023dd8(puVar35,0x28);
                puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar41 = puVar25 + 4;
              }
              *puVar35 = (ulonglong)puVar41;
              *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
              *(undefined8 **)puVar35[6] = puVar25;
              puVar35[6] = (ulonglong)(puVar25 + 1);
              puVar25[1] = 0;
              *puVar25 = &PTR_LAB_14a1fc200;
              *(undefined4 *)(puVar25 + 2) = 0;
              *(int *)((longlong)puVar25 + 0x14) = auVar3._0_4_;
              *(undefined4 *)(puVar25 + 3) = 1;
              uVar14 = local_798._0_8_;
              uVar44 = local_148;
              if (local_798._0_8_ != 0) {
                LOCK();
                puVar1 = (uint *)(local_798._0_8_ + 8);
                uVar36 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar36 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_798._0_8_ + 8);
                  LOCK();
                  uVar36 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar36 >> 0x1e & 1) == 0) {
                    bVar5 = *(byte *)(local_798._0_8_ + 0xd);
                    plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar26[1] = uVar14;
                    plVar32 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c8;
                    uVar44 = local_148;
                    if ((bVar5 & 2) == 0) {
                      do {
                        *plVar26 = (longlong)plVar32;
                        LOCK();
                        bVar57 = plVar32 != DAT_14ca843c0;
                        plVar31 = plVar26;
                        if (bVar57) {
                          plVar32 = DAT_14ca843c0;
                          plVar31 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar31;
                        UNLOCK();
                      } while (bVar57);
                    }
                    else {
                      do {
                        *plVar26 = (longlong)plVar31;
                        LOCK();
                        bVar57 = plVar31 != DAT_14ca843c8;
                        plVar32 = plVar26;
                        if (bVar57) {
                          plVar31 = DAT_14ca843c8;
                          plVar32 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar32;
                        UNLOCK();
                      } while (bVar57);
                    }
                  }
                }
              }
            }
            local_148._2_2_ = (undefined2)(uVar44 >> 0x10);
            iVar23 = *(int *)(local_a08 + 0xb);
            if (0 < iVar23) {
              local_7f0 = *(double *)(param_5 + 0x8a8);
              dVar69 = *(double *)(param_5 + 0xb10) * 0.0;
              dVar94 = *(double *)(param_5 + 0xb18) * 0.0;
              dVar63 = (double)CONCAT44(uVar71,uVar70) * *(double *)(param_5 + 0xaf0) +
                       (double)CONCAT44(uVar86,uVar84) * *(double *)(param_5 + 0xad0) +
                       (double)CONCAT44(uVar96,uVar72) * *(double *)(param_5 + 0xab0) + dVar69;
              dVar83 = (double)CONCAT44(uVar71,uVar70) * *(double *)(param_5 + 0xaf8) +
                       (double)CONCAT44(uVar86,uVar84) * *(double *)(param_5 + 0xad8) +
                       (double)CONCAT44(uVar96,uVar72) * *(double *)(param_5 + 0xab8) + dVar94;
              dVar65 = *(double *)(param_5 + 0xb20) * 0.0;
              dVar91 = (double)CONCAT44(uVar96,uVar72) * *(double *)(param_5 + 0xac0) +
                       (double)CONCAT44(uVar86,uVar84) * *(double *)(param_5 + 0xae0) +
                       (double)CONCAT44(uVar71,uVar70) * *(double *)(param_5 + 0xb00) + dVar65;
              dVar61 = (double)CONCAT44(uStack_8d4,local_8d8);
              local_7f8 = (double)(float)(1.0 / *(double *)(param_5 + 0x830));
              local_800 = SQRT(dVar91 * dVar91 + dVar63 * dVar63 + dVar83 * dVar83);
              dVar69 = dVar66 * *(double *)(param_5 + 0xaf0) +
                       dVar61 * *(double *)(param_5 + 0xad0) + dVar90 * *(double *)(param_5 + 0xab0)
                       + dVar69;
              dVar94 = dVar66 * *(double *)(param_5 + 0xaf8) +
                       dVar61 * *(double *)(param_5 + 0xad8) + dVar90 * *(double *)(param_5 + 0xab8)
                       + dVar94;
              dVar65 = *(double *)(param_5 + 0xac0) * dVar90 + *(double *)(param_5 + 0xae0) * dVar61
                       + *(double *)(param_5 + 0xb00) * dVar66 + dVar65;
              local_808 = SQRT(dVar65 * dVar65 + dVar69 * dVar69 + dVar94 * dVar94);
              iVar37 = (int)((ulonglong)(longlong)DAT_14ca84e7c / 0xc0) * 3;
              iVar49 = 0x10000;
              if (iVar37 < 0x10000) {
                iVar49 = iVar37;
              }
              local_870 = (double)uVar56;
              local_810 = (longlong)(iVar49 / 0xc);
              local_998 = (double)CONCAT44(uVar96,uVar72);
              uStack_990 = CONCAT44(uVar97,uVar73);
              puVar41 = local_a08;
              iVar37 = 0;
              do {
                puVar35 = local_a10;
                lVar28 = (longlong)iVar37;
                lVar27 = lVar28 * 0x50;
                pfVar50 = (float *)(puVar41[10] + lVar27 + 0x98);
                fStack_140 = *(float *)(puVar41[10] + lVar27 + 0x48);
                iVar49 = iVar37 + 1;
                if (iVar37 + 1 < iVar23) {
                  iVar49 = iVar23;
                }
                lVar51 = local_810 + lVar28;
                iVar38 = iVar37;
                while (lVar28 = lVar28 + 1, iVar39 = iVar49, lVar28 < iVar23) {
                  iVar38 = iVar38 + 1;
                  iVar39 = iVar38;
                  if (((*pfVar50 != fStack_140) || (NAN(*pfVar50) || NAN(fStack_140))) ||
                     (pfVar50 = pfVar50 + 0x14, lVar51 <= lVar28)) break;
                }
                local_148._0_2_ = 2;
                fStack_144 = 0.0;
                uStack_13c = 0;
                uStack_13b = 1;
                uStack_13a = 0;
                (**(code **)(*DAT_14ca83900 + 0x50))(DAT_14ca83900,&local_780,&local_148);
                puStack_740 = local_780;
                local_a20 = param_5;
                local_a28 = (int *)0x0;
                local_a30 = param_7;
                local_a38 = param_6;
                local_a40 = DAT_14ca94e18;
                local_a48 = 0;
                local_a50 = local_698;
                local_a18 = 0.5;
                local_a58 = 0xb;
                FUN_1434144d2(puVar35,&local_778,local_a00,local_9fc);
                local_448 = 0;
                puStack_440 = (undefined8 *)0x0;
                local_438 = 1;
                local_434 = 0;
                uStack_42c = 0;
                local_424 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
                local_420 = 0;
                local_41c = 0;
                local_418 = L"ThickLines";
                local_410 = 0;
                uStack_408 = 0;
                local_9e8._0_4_ = iVar39 - iVar37;
                uVar56 = (iVar39 - iVar37) * 0x300;
                local_798._4_8_ = 0x400400000000;
                local_798._0_4_ = uVar56;
                if (uVar56 == 0) {
                  FUN_14570b4be(puVar35,&local_448,0x4004,0);
                }
                if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
                  FUN_14002049c(puVar35,1);
                  local_a50 = &local_448;
                  local_a58 = 8;
                  (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_788,puVar35);
                  *(undefined4 *)(local_788 + 0x18) = 8;
                  FUN_14002049c(puVar35,0);
                }
                else {
                  local_a50 = &local_448;
                  local_a58 = 8;
                  (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_788,puVar35);
                  *(undefined4 *)(local_788 + 0x18) = 8;
                }
                lVar28 = local_788;
                cVar4 = *(char *)((longlong)puVar35 + 0x69);
                if (cVar4 == '\0') {
                  FUN_14002049c(puVar35,1);
                }
                local_a50 = (longlong *)CONCAT44(local_a50._4_4_,1);
                local_a58 = uVar56;
                pfVar50 = (float *)(**(code **)(*DAT_14ca83900 + 0x158))
                                             (DAT_14ca83900,puVar35,lVar28);
                if (cVar4 == '\0') {
                  FUN_14002049c(local_a10,0);
                }
                lVar28 = local_788;
                puVar41 = local_a08;
                puVar35 = local_a10;
                if ((int)local_9e8._0_4_ < 1) {
                  iVar23 = 0;
                }
                else {
                  uVar29 = (ulonglong)(uint)local_9e8._0_4_;
                  iVar23 = 0;
                  do {
                    uVar56 = 0x3ff00000;
                    uVar73 = 0;
                    dVar61 = 1.0;
                    lVar51 = local_a08[10];
                    local_9c8._0_8_ = *(double *)(lVar51 + lVar27);
                    local_9d8 = *(undefined1 (*) [8])(lVar51 + 8 + lVar27);
                    dVar69 = *(double *)(lVar51 + 0x10 + lVar27);
                    stack0xfffffffffffff640 = 0;
                    uStack_9d0 = 0;
                    local_988._0_8_ = *(double *)(lVar51 + 0x18 + lVar27);
                    local_9b8._0_8_ = *(double *)(lVar51 + 0x20 + lVar27);
                    local_988._8_8_ = 0;
                    local_9b8._8_8_ = 0;
                    local_9f8._0_8_ = *(double *)(lVar51 + 0x28 + lVar27);
                    local_9f8._8_8_ = 0;
                    dVar63 = dVar69 * *(double *)(param_5 + 0xaf0) +
                             (double)local_9d8 * *(double *)(param_5 + 0xad0) +
                             (double)local_9c8._0_8_ * *(double *)(param_5 + 0xab0) +
                             *(double *)(param_5 + 0xb10);
                    dVar66 = dVar69 * *(double *)(param_5 + 0xaf8) +
                             (double)local_9d8 * *(double *)(param_5 + 0xad8) +
                             (double)local_9c8._0_8_ * *(double *)(param_5 + 0xab8) +
                             *(double *)(param_5 + 0xb18);
                    dVar83 = *(double *)(param_5 + 0xaf0) * (double)local_9f8._0_8_ +
                             *(double *)(param_5 + 0xad0) * (double)local_9b8._0_8_ +
                             *(double *)(param_5 + 0xab0) * (double)local_988._0_8_ +
                             *(double *)(param_5 + 0xb10);
                    dVar91 = *(double *)(param_5 + 0xaf8) * (double)local_9f8._0_8_ +
                             *(double *)(param_5 + 0xad8) * (double)local_9b8._0_8_ +
                             *(double *)(param_5 + 0xab8) * (double)local_988._0_8_ +
                             *(double *)(param_5 + 0xb18);
                    dVar94 = dVar69 * *(double *)(param_5 + 0xb08) +
                             (double)local_9d8 * *(double *)(param_5 + 0xae8) +
                             (double)local_9c8._0_8_ * *(double *)(param_5 + 0xac8) +
                             *(double *)(param_5 + 0xb28);
                    dVar65 = *(double *)(param_5 + 0xb08) * (double)local_9f8._0_8_ +
                             *(double *)(param_5 + 0xae8) * (double)local_9b8._0_8_ +
                             *(double *)(param_5 + 0xac8) * (double)local_988._0_8_ +
                             *(double *)(param_5 + 0xb28);
                    dVar80 = (double)*(float *)(param_5 + 0x2170) + 0.0001;
                    if (1.0 <= local_7f0) {
                      uVar70 = SUB84(local_7f8,0);
                      uVar36 = (uint)((ulonglong)local_7f8 >> 0x20);
LAB_140b902af:
                      uVar71 = (undefined4)((ulonglong)dVar91 >> 0x20);
                      local_7b8 = 1.0 / dVar94;
                      local_7a8 = 1.0 / dVar65;
                      dVar63 = dVar83 * local_7a8 - local_7b8 * dVar63;
                      bVar57 = dVar63 < 0.0;
                      local_838 = 0.0;
                      uVar44 = uVar56;
                      if (bVar57) {
                        uVar44 = 0;
                        local_838 = 1.0;
                      }
                      dVar90 = dVar91 * local_7a8 - dVar66 * local_7b8;
                      bVar59 = dVar90 < 0.0;
                      local_828 = 1.0;
                      uVar54 = 0;
                      if (bVar59) {
                        local_828 = 0.0;
                        uVar54 = uVar56;
                      }
                      bVar58 = *(int *)(lVar51 + 0x4c + lVar27) == 0;
                      if (!bVar58) {
                        dVar61 = dVar94 / local_870;
                      }
                      uStack_7b0 = 0;
                      uStack_7a0 = 0;
                      local_918 = ZEXT416(uVar54) << 0x20;
                      local_928 = ZEXT416(uVar44) << 0x20;
                      dVar94 = 1.0;
                      if (!bVar58) {
                        dVar94 = dVar65 / local_870;
                        uVar73 = uVar70;
                        uVar56 = uVar36;
                      }
                      local_7e8 = (double)ABS(*(float *)(lVar51 + 0x30 + lVar27)) *
                                  *(double *)(&DAT_14a7ecff0 + (ulonglong)bVar58 * 8) *
                                  (double)CONCAT44(uVar56,uVar73);
                      local_7e0 = dVar61 * local_7e8;
                      local_7e8 = local_7e8 * dVar94;
                      local_7d8 = (double)(~-(ulonglong)(0.0 <= dVar63) & 0xbff0000000000000 |
                                          -(ulonglong)(0.0 <= dVar63) & 0x3ff0000000000000);
                      local_7c8 = (double)(~-(ulonglong)(0.0 <= dVar90) & 0xbff0000000000000 |
                                          -(ulonglong)(0.0 <= dVar90) & 0x3ff0000000000000);
                      dVar83 = local_7d8 * local_7e0 * 0.5;
                      local_968._8_4_ = SUB84(dVar91,0);
                      local_968._0_8_ = dVar90;
                      local_968._12_4_ = uVar71;
                      dVar80 = local_7e0 * 0.5 * local_7c8;
                      dVar65 = local_8f8 * dVar80;
                      local_958._8_8_ = uStack_8f0;
                      local_958._0_8_ = dVar65;
                      uVar96 = SUB84(dStack_8d0,0);
                      uVar73 = (undefined4)((ulonglong)dStack_8d0 >> 0x20);
                      dVar61 = (double)CONCAT44(uStack_8d4,local_8d8) * dVar80;
                      local_888._8_4_ = SUB84(dVar91,0);
                      local_888._0_8_ = dVar63;
                      local_888._12_4_ = uVar71;
                      dVar80 = dVar80 * local_898;
                      uStack_7d0 = 0;
                      dVar94 = local_7d8 * local_7e8 * 0.5;
                      uStack_7c0 = 0;
                      dVar66 = local_7e8 * 0.5 * local_7c8;
                      dVar62 = local_8f8 * dVar66;
                      dVar10 = (double)CONCAT44(uStack_8d4,local_8d8) * dVar66;
                      unique0x10003d54 = uVar96;
                      local_8b8 = dVar10;
                      unique0x10003d58 = uVar73;
                      dVar66 = dVar66 * local_898;
                      local_978 = dVar69 + local_8a8 * dVar83;
                      dVar81 = (double)local_9d8 + (double)local_8e8._0_8_ * dVar83;
                      dVar67 = (double)local_9c8._0_8_ + dVar83 * local_998;
                      dVar69 = dVar69 - local_8a8 * dVar83;
                      uVar71 = (undefined4)uStack_8f0;
                      uVar72 = (undefined4)((ulonglong)uStack_8f0 >> 0x20);
                      local_9a8 = local_978 - dVar65;
                      dVar11 = (double)local_9d8 - (double)local_8e8._0_8_ * dVar83;
                      local_8c8._0_8_ = dVar81;
                      local_938 = dVar81 - dVar61;
                      dVar91 = (double)local_9c8._0_8_ - dVar83 * local_998;
                      uVar97 = local_9f8._8_4_;
                      uVar84 = local_9f8._12_4_;
                      local_970 = local_9f8._0_8_ + local_8a8 * dVar94;
                      dVar9 = local_9f8._0_8_ - local_8a8 * dVar94;
                      dVar12 = local_9b8._0_8_ + (double)local_8e8._0_8_ * dVar94;
                      dVar82 = local_9b8._0_8_ - (double)local_8e8._0_8_ * dVar94;
                      dVar83 = (double)local_988._0_8_ + dVar94 * local_998;
                      dVar92 = (double)local_988._0_8_ - dVar94 * local_998;
                      local_9f8._0_8_ = dVar67;
                      local_940 = dVar67 - dVar80;
                      dVar94 = dVar65 + dVar69;
                      uStack_9d0._0_4_ = uVar71;
                      local_9d8 = (undefined1  [8])dVar94;
                      uStack_9d0._4_4_ = uVar72;
                      local_9e8._0_8_ = dVar69 - dVar65;
                      local_9c8._0_8_ = dVar61 + dVar11;
                      stack0xfffffffffffff640 = dStack_8d0;
                      dVar11 = dVar11 - dVar61;
                      local_900 = dVar80 + dVar91;
                      dVar91 = dVar91 - dVar80;
                      local_858 = dVar62 + local_970;
                      uStack_850 = uStack_8f0;
                      local_970 = local_970 - dVar62;
                      local_868 = dVar10 + dVar12;
                      uStack_860 = uStack_8b0;
                      dVar12 = dVar12 - dVar10;
                      local_930 = dVar66 + dVar83;
                      dVar83 = dVar83 - dVar66;
                      dVar68 = dVar62 + dVar9;
                      local_988._8_8_ = uStack_8f0;
                      local_988._0_8_ = dVar68;
                      dVar69 = dVar10 + dVar82;
                      uStack_840 = uStack_8b0;
                      local_9a0 = dVar66 + dVar92;
                      uVar70 = (undefined4)((ulonglong)local_9e8._0_8_ >> 0x20);
                      uVar53 = (ulonglong)local_9a8 >> 0x20;
                      dVar13 = local_940;
                      dVar93 = local_970;
                      local_848 = dVar69;
                      dVar20 = local_938;
                      if (bVar58) {
                        dVar65 = dVar65 + local_978;
                        local_958._8_4_ = uVar71;
                        local_958._0_8_ = dVar65;
                        local_958._12_4_ = uVar72;
                        dVar61 = dVar61 + dVar81;
                        auVar8._8_4_ = uVar96;
                        auVar8._0_8_ = dVar61;
                        auVar8._12_4_ = uVar73;
                        local_978 = dVar80 + dVar67;
                        dVar9 = dVar9 - dVar62;
                        local_9f8._8_4_ = uVar97;
                        local_9f8._0_8_ = dVar9;
                        local_9f8._12_4_ = uVar84;
                        dVar82 = dVar82 - dVar10;
                        dVar92 = dVar92 - dVar66;
                        dVar66 = local_7a8 * local_7e8 * 0.5 - local_7b8 * local_7e0 * 0.5;
                        dVar80 = -dVar66;
                        if (-dVar66 <= dVar66) {
                          dVar80 = dVar66;
                        }
                        uVar86 = local_9b8._8_4_;
                        uVar87 = local_9b8._12_4_;
                        local_8c8 = auVar8;
                        if ((local_800 * dVar80 <= local_7d8 * dVar63) ||
                           (dVar80 * local_808 <= local_7c8 * dVar90)) {
                          local_9b8._8_4_ = uVar86;
                          local_9b8._0_8_ = dVar82;
                          local_9b8._12_4_ = uVar87;
                          if (local_7d8 * dVar63 < local_800 * dVar80) {
                            dVar69 = local_978;
                            if (0.0 <= dVar66) {
                              local_958._8_8_ = 0;
                              local_958._0_8_ = local_970;
                              uVar71 = uVar97;
                              uVar72 = uVar84;
                              uVar96 = uVar86;
                              uVar73 = uVar87;
                              dVar61 = dVar12;
                              dVar69 = dVar83;
                              local_900 = dVar92;
                              dVar94 = dVar9;
                              local_9c8._0_8_ = dVar82;
                            }
                            dVar83 = dVar69;
                            dVar12 = dVar61;
                            local_828 = (double)((ulonglong)local_828 & -(ulonglong)(dVar66 < 0.0) |
                                                ~-(ulonglong)(dVar66 < 0.0) & local_918._0_8_);
                            local_918._8_8_ = 0;
                            local_918._0_8_ = local_828;
                            dVar93 = (double)local_958._0_8_;
                          }
                          else {
                            local_8c8._8_8_ = auVar8._8_8_;
                            if (local_7c8 * dVar90 < dVar80 * local_808) {
                              local_848 = dVar61;
                              dVar65 = local_978;
                              if (0.0 <= dVar66) {
                                local_958._0_8_ = dVar68;
                                dVar13 = dVar92;
                                local_848 = dVar69;
                                local_8c8._8_8_ = uStack_8b0;
                                dVar65 = local_9a0;
                                local_9a8 = dVar9;
                                dVar20 = dVar82;
                              }
                              local_9a0 = dVar65;
                              local_838 = (double)(local_928._0_8_ & -(ulonglong)(dVar66 < 0.0) |
                                                  ~-(ulonglong)(dVar66 < 0.0) & (ulonglong)local_838
                                                  );
                              local_928._8_8_ = 0;
                              local_928._0_8_ = local_838;
                              local_988 = local_958;
                              uStack_840 = local_8c8._8_8_;
                            }
                          }
                          goto LAB_140b90f5e;
                        }
                        fVar60 = 1.0;
                        if (dVar63 < 0.0) {
                          fVar60 = 0.0;
                        }
                        pauVar2 = (undefined1 (*) [16])(lVar51 + 0x34 + lVar27);
                        fVar101 = (float)bVar59;
                        if (0.0 <= dVar66) {
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar102 = *(float *)(lVar51 + 0x44 + lVar27);
                          *pfVar50 = (float)dVar83;
                          pfVar50[1] = (float)dVar12;
                          pfVar50[2] = (float)local_970;
                          pfVar50[3] = 1.0;
                          pfVar50[4] = (float)(dVar83 - (double)(float)dVar83);
                          pfVar50[5] = (float)(dVar12 - (double)(float)dVar12);
                          pfVar50[6] = (float)(local_970 - (double)(float)local_970);
                          pfVar50[7] = 0.0;
                          pfVar50[8] = fVar60;
                          pfVar50[9] = fVar101;
                          *(undefined8 *)(pfVar50 + 10) = uVar14;
                          *(undefined8 *)(pfVar50 + 0xc) = uVar15;
                          fVar64 = (float)local_930;
                          local_9d8._0_4_ = (undefined4)(local_930 - (double)fVar64);
                          fVar74 = (float)local_868;
                          fVar76 = (float)(local_868 - (double)fVar74);
                          pfVar50[0xe] = fVar102;
                          fVar75 = (float)local_858;
                          fVar102 = 1.0;
                          if (dVar90 < 0.0) {
                            fVar102 = 0.0;
                          }
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar77 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x10] = fVar64;
                          pfVar50[0x11] = fVar74;
                          pfVar50[0x12] = fVar75;
                          pfVar50[0x13] = 1.0;
                          pfVar50[0x14] = (float)local_9d8._0_4_;
                          pfVar50[0x15] = fVar76;
                          pfVar50[0x16] = (float)(local_858 - (double)fVar75);
                          pfVar50[0x17] = 0.0;
                          pfVar50[0x18] = fVar60;
                          pfVar50[0x19] = fVar102;
                          *(undefined8 *)(pfVar50 + 0x1a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x1c) = uVar15;
                          local_9e8._0_8_ = CONCAT44(uVar70,fVar76);
                          fVar79 = (float)dVar92;
                          fVar85 = (float)dVar82;
                          fVar89 = (float)dVar9;
                          pfVar50[0x1e] = fVar77;
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar77 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x20] = fVar79;
                          pfVar50[0x21] = fVar85;
                          pfVar50[0x22] = fVar89;
                          pfVar50[0x23] = 1.0;
                          pfVar50[0x24] = (float)(dVar92 - (double)fVar79);
                          pfVar50[0x25] = (float)(dVar82 - (double)fVar85);
                          pfVar50[0x26] = (float)(dVar9 - (double)fVar89);
                          pfVar50[0x27] = 0.0;
                          fVar78 = (float)bVar57;
                          pfVar50[0x28] = fVar78;
                          pfVar50[0x29] = fVar101;
                          *(undefined8 *)(pfVar50 + 0x2a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x2c) = uVar15;
                          pfVar50[0x2e] = fVar77;
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar77 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x30] = fVar79;
                          pfVar50[0x31] = fVar85;
                          pfVar50[0x32] = fVar89;
                          pfVar50[0x33] = 1.0;
                          pfVar50[0x34] = (float)(dVar92 - (double)fVar79);
                          pfVar50[0x35] = (float)(dVar82 - (double)fVar85);
                          pfVar50[0x36] = (float)(dVar9 - (double)fVar89);
                          pfVar50[0x37] = 0.0;
                          pfVar50[0x38] = fVar78;
                          pfVar50[0x39] = fVar101;
                          *(undefined8 *)(pfVar50 + 0x3a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x3c) = uVar15;
                          pfVar50[0x3e] = fVar77;
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar101 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x40] = fVar64;
                          pfVar50[0x41] = fVar74;
                          pfVar50[0x42] = fVar75;
                          pfVar50[0x43] = 1.0;
                          pfVar50[0x44] = (float)local_9d8._0_4_;
                          pfVar50[0x45] = fVar76;
                          pfVar50[0x46] = (float)(local_858 - (double)fVar75);
                          pfVar50[0x47] = 0.0;
                          pfVar50[0x48] = fVar60;
                          pfVar50[0x49] = fVar102;
                          *(undefined8 *)(pfVar50 + 0x4a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x4c) = uVar15;
                          pfVar50[0x4e] = fVar101;
                          fVar60 = (float)local_9a0;
                          dVar65 = local_9a0 - (double)fVar60;
                          fVar101 = (float)dVar69;
                          dVar69 = dVar69 - (double)fVar101;
                        }
                        else {
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar102 = *(float *)(lVar51 + 0x44 + lVar27);
                          *pfVar50 = (float)local_940;
                          pfVar50[1] = (float)local_938;
                          pfVar50[2] = (float)local_9a8;
                          pfVar50[3] = 1.0;
                          pfVar50[4] = (float)(local_940 - (double)(float)local_940);
                          pfVar50[5] = (float)(local_938 - (double)(float)local_938);
                          pfVar50[6] = (float)(local_9a8 - (double)(float)local_9a8);
                          pfVar50[7] = 0.0;
                          pfVar50[8] = fVar60;
                          pfVar50[9] = fVar101;
                          *(undefined8 *)(pfVar50 + 10) = uVar14;
                          *(undefined8 *)(pfVar50 + 0xc) = uVar15;
                          fVar64 = (float)local_978;
                          fVar76 = (float)(local_978 - (double)fVar64);
                          fVar74 = (float)dVar61;
                          pfVar50[0xe] = fVar102;
                          fVar75 = (float)dVar65;
                          fVar102 = 1.0;
                          if (dVar90 < 0.0) {
                            fVar102 = 0.0;
                          }
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar77 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x10] = fVar64;
                          pfVar50[0x11] = fVar74;
                          pfVar50[0x12] = fVar75;
                          pfVar50[0x13] = 1.0;
                          pfVar50[0x14] = fVar76;
                          pfVar50[0x15] = (float)(dVar61 - (double)fVar74);
                          pfVar50[0x16] = (float)(dVar65 - (double)fVar75);
                          pfVar50[0x17] = 0.0;
                          pfVar50[0x18] = fVar60;
                          pfVar50[0x19] = fVar102;
                          *(undefined8 *)(pfVar50 + 0x1a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x1c) = uVar15;
                          fVar79 = (float)dVar91;
                          local_9f8._0_4_ = fVar76;
                          fVar85 = (float)dVar11;
                          fVar89 = (float)(double)local_9e8._0_8_;
                          pfVar50[0x1e] = fVar77;
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar77 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x20] = fVar79;
                          pfVar50[0x21] = fVar85;
                          pfVar50[0x22] = fVar89;
                          pfVar50[0x23] = 1.0;
                          pfVar50[0x24] = (float)(dVar91 - (double)fVar79);
                          pfVar50[0x25] = (float)(dVar11 - (double)fVar85);
                          pfVar50[0x26] = (float)((double)local_9e8._0_8_ - (double)fVar89);
                          pfVar50[0x27] = 0.0;
                          fVar78 = (float)bVar57;
                          pfVar50[0x28] = fVar78;
                          pfVar50[0x29] = fVar101;
                          *(undefined8 *)(pfVar50 + 0x2a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x2c) = uVar15;
                          pfVar50[0x2e] = fVar77;
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar77 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x30] = fVar79;
                          pfVar50[0x31] = fVar85;
                          pfVar50[0x32] = fVar89;
                          pfVar50[0x33] = 1.0;
                          pfVar50[0x34] = (float)(dVar91 - (double)fVar79);
                          pfVar50[0x35] = (float)(dVar11 - (double)fVar85);
                          pfVar50[0x36] = (float)((double)local_9e8._0_8_ - (double)fVar89);
                          pfVar50[0x37] = 0.0;
                          pfVar50[0x38] = fVar78;
                          pfVar50[0x39] = fVar101;
                          *(undefined8 *)(pfVar50 + 0x3a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x3c) = uVar15;
                          pfVar50[0x3e] = fVar77;
                          uVar14 = *(undefined8 *)*pauVar2;
                          uVar15 = *(undefined8 *)(*pauVar2 + 8);
                          fVar101 = *(float *)(lVar51 + 0x44 + lVar27);
                          pfVar50[0x40] = fVar64;
                          pfVar50[0x41] = fVar74;
                          pfVar50[0x42] = fVar75;
                          pfVar50[0x43] = 1.0;
                          pfVar50[0x44] = fVar76;
                          pfVar50[0x45] = (float)(dVar61 - (double)fVar74);
                          pfVar50[0x46] = (float)(dVar65 - (double)fVar75);
                          pfVar50[0x47] = 0.0;
                          pfVar50[0x48] = fVar60;
                          pfVar50[0x49] = fVar102;
                          *(undefined8 *)(pfVar50 + 0x4a) = uVar14;
                          *(undefined8 *)(pfVar50 + 0x4c) = uVar15;
                          pfVar50[0x4e] = fVar101;
                          fVar60 = (float)local_900;
                          dVar65 = local_900 - (double)fVar60;
                          fVar101 = (float)(double)local_9c8._0_8_;
                          dVar69 = (double)local_9c8._0_8_ - (double)fVar101;
                          dVar68 = dVar94;
                        }
                        local_798 = *pauVar2;
                        fVar64 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x50] = fVar60;
                        pfVar50[0x51] = fVar101;
                        pfVar50[0x52] = (float)dVar68;
                        pfVar50[0x53] = 1.0;
                        pfVar50[0x54] = (float)dVar65;
                        pfVar50[0x55] = (float)dVar69;
                        pfVar50[0x56] = (float)(dVar68 - (double)(float)dVar68);
                        pfVar50[0x57] = 0.0;
                        pfVar50[0x58] = fVar78;
                        *(undefined1 (*) [16])(pfVar50 + 0x5a) = local_798;
                        pfVar50[0x59] = fVar102;
                        pfVar50[0x5e] = fVar64;
                        pfVar50 = pfVar50 + 0x60;
                        iVar23 = iVar23 + 2;
                      }
                      else {
LAB_140b90f5e:
                        local_9b8._0_8_ = dVar83;
                        local_9c8._8_4_ = uVar96;
                        uStack_9bc = uVar73;
                        uStack_9d0._0_4_ = uVar71;
                        local_9d8 = (undefined1  [8])dVar94;
                        uStack_9d0._4_4_ = uVar72;
                        fVar60 = 1.0;
                        if (dVar63 < 0.0) {
                          fVar60 = 0.0;
                        }
                        fVar78 = (float)dVar91;
                        fVar74 = (float)(dVar91 - (double)fVar78);
                        local_9f8._0_4_ = fVar74;
                        local_958._0_4_ = (undefined4)dVar11;
                        fVar85 = (float)(double)local_9e8._0_8_;
                        fVar99 = (float)(dVar11 - (double)(float)local_958._0_4_);
                        local_968._0_4_ = fVar99;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar98 = (float)((double)local_9e8._0_8_ - (double)fVar85);
                        fVar101 = *(float *)(lVar51 + 0x44 + lVar27);
                        *pfVar50 = fVar78;
                        pfVar50[1] = (float)local_958._0_4_;
                        pfVar50[2] = fVar85;
                        pfVar50[3] = 1.0;
                        pfVar50[4] = fVar74;
                        pfVar50[5] = fVar99;
                        pfVar50[6] = fVar98;
                        fVar75 = (float)bVar59;
                        pfVar50[7] = 0.0;
                        fVar100 = (float)bVar57;
                        pfVar50[8] = fVar100;
                        pfVar50[9] = fVar75;
                        *(undefined8 *)(pfVar50 + 10) = uVar14;
                        *(undefined8 *)(pfVar50 + 0xc) = uVar15;
                        pfVar50[0xe] = fVar101;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar101 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x10] = (float)dVar13;
                        pfVar50[0x11] = (float)dVar20;
                        pfVar50[0x12] = (float)local_9a8;
                        pfVar50[0x13] = 1.0;
                        pfVar50[0x14] = (float)(dVar13 - (double)(float)dVar13);
                        pfVar50[0x15] = (float)(dVar20 - (double)(float)dVar20);
                        pfVar50[0x16] = (float)(local_9a8 - (double)(float)local_9a8);
                        pfVar50[0x17] = 0.0;
                        pfVar50[0x18] = (float)(double)local_928._0_8_;
                        pfVar50[0x19] = fVar75;
                        *(undefined8 *)(pfVar50 + 0x1a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x1c) = uVar15;
                        fVar95 = (float)dVar83;
                        fVar102 = (float)dVar12;
                        fVar77 = (float)dVar93;
                        pfVar50[0x1e] = fVar101;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar89 = (float)(double)local_918._0_8_;
                        fVar101 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x20] = fVar95;
                        pfVar50[0x21] = fVar102;
                        pfVar50[0x22] = fVar77;
                        pfVar50[0x23] = 1.0;
                        pfVar50[0x24] = (float)(dVar83 - (double)fVar95);
                        pfVar50[0x25] = (float)(dVar12 - (double)fVar102);
                        pfVar50[0x26] = (float)(dVar93 - (double)fVar77);
                        pfVar50[0x27] = 0.0;
                        local_888._0_4_ = fVar60;
                        pfVar50[0x28] = fVar60;
                        pfVar50[0x29] = fVar89;
                        *(undefined8 *)(pfVar50 + 0x2a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x2c) = uVar15;
                        pfVar50[0x2e] = fVar101;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar101 = *(float *)(lVar51 + 0x44 + lVar27);
                        local_9b8._0_4_ = fVar78;
                        pfVar50[0x30] = fVar78;
                        pfVar50[0x31] = (float)local_958._0_4_;
                        pfVar50[0x32] = fVar85;
                        pfVar50[0x33] = 1.0;
                        pfVar50[0x34] = fVar74;
                        pfVar50[0x35] = fVar99;
                        pfVar50[0x36] = fVar98;
                        pfVar50[0x37] = 0.0;
                        local_9e8._0_8_ = CONCAT44(uVar70,fVar100);
                        pfVar50[0x38] = fVar100;
                        pfVar50[0x39] = fVar75;
                        *(undefined8 *)(pfVar50 + 0x3a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x3c) = uVar15;
                        fVar76 = (float)local_930;
                        fVar79 = (float)local_868;
                        local_928._0_4_ = (undefined4)local_858;
                        fVar64 = (float)(local_930 - (double)fVar76);
                        local_8b8._0_4_ = (undefined4)(local_868 - (double)fVar79);
                        pfVar50[0x3e] = fVar101;
                        fVar103 = (float)(local_858 - (double)(float)local_928._0_4_);
                        fVar101 = 1.0;
                        if (dVar90 < 0.0) {
                          fVar101 = 0.0;
                        }
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar7 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x40] = fVar76;
                        pfVar50[0x41] = fVar79;
                        pfVar50[0x42] = (float)local_928._0_4_;
                        pfVar50[0x43] = 1.0;
                        pfVar50[0x44] = fVar64;
                        pfVar50[0x45] = (float)local_8b8._0_4_;
                        pfVar50[0x46] = fVar103;
                        pfVar50[0x47] = 0.0;
                        uVar21 = (ulonglong)local_858 >> 0x20;
                        local_858 = (double)CONCAT44((int)uVar21,fVar64);
                        pfVar50[0x48] = fVar60;
                        pfVar50[0x49] = fVar101;
                        *(undefined8 *)(pfVar50 + 0x4a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x4c) = uVar15;
                        pfVar50[0x4e] = fVar7;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar7 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x50] = fVar95;
                        pfVar50[0x51] = fVar102;
                        pfVar50[0x52] = fVar77;
                        pfVar50[0x53] = 1.0;
                        pfVar50[0x54] = (float)(dVar83 - (double)fVar95);
                        pfVar50[0x55] = (float)(dVar12 - (double)fVar102);
                        pfVar50[0x56] = (float)(dVar93 - (double)fVar77);
                        pfVar50[0x57] = 0.0;
                        pfVar50[0x58] = fVar60;
                        pfVar50[0x59] = fVar89;
                        *(undefined8 *)(pfVar50 + 0x5a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x5c) = uVar15;
                        pfVar50[0x5e] = fVar7;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar102 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x60] = fVar78;
                        pfVar50[0x61] = (float)local_958._0_4_;
                        pfVar50[0x62] = fVar85;
                        pfVar50[99] = 1.0;
                        pfVar50[100] = fVar74;
                        uVar21 = (ulonglong)local_930 >> 0x20;
                        local_930 = (double)CONCAT44((int)uVar21,fVar76);
                        pfVar50[0x65] = fVar99;
                        local_9a8 = (double)CONCAT44((int)uVar53,fVar79);
                        pfVar50[0x66] = fVar98;
                        pfVar50[0x67] = 0.0;
                        pfVar50[0x68] = fVar100;
                        pfVar50[0x69] = fVar75;
                        *(undefined8 *)(pfVar50 + 0x6a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x6c) = uVar15;
                        local_918._0_4_ = (undefined4)local_9a0;
                        dVar65 = local_9a0 - (double)(float)local_918._0_4_;
                        fVar89 = (float)local_848;
                        local_9a0 = (double)CONCAT44(local_9a0._4_4_,fVar103);
                        fVar95 = (float)(double)local_988._0_8_;
                        dVar69 = (double)local_988._0_8_ - (double)fVar95;
                        pfVar50[0x6e] = fVar102;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar77 = (float)dVar65;
                        local_988._0_4_ = fVar77;
                        fVar102 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x70] = (float)local_918._0_4_;
                        pfVar50[0x71] = fVar89;
                        pfVar50[0x72] = fVar95;
                        pfVar50[0x73] = 1.0;
                        pfVar50[0x74] = fVar77;
                        pfVar50[0x75] = (float)(local_848 - (double)fVar89);
                        pfVar50[0x76] = (float)dVar69;
                        pfVar50[0x77] = 0.0;
                        pfVar50[0x78] = (float)local_838;
                        uVar53 = (ulonglong)local_868 >> 0x20;
                        local_868 = (double)CONCAT44((int)uVar53,fVar101);
                        pfVar50[0x79] = fVar101;
                        *(undefined8 *)(pfVar50 + 0x7a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x7c) = uVar15;
                        pfVar50[0x7e] = fVar102;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar102 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x80] = fVar76;
                        pfVar50[0x81] = fVar79;
                        pfVar50[0x82] = (float)local_928._0_4_;
                        pfVar50[0x83] = 1.0;
                        pfVar50[0x84] = fVar64;
                        pfVar50[0x85] = (float)local_8b8._0_4_;
                        pfVar50[0x86] = fVar103;
                        pfVar50[0x87] = 0.0;
                        pfVar50[0x88] = fVar60;
                        pfVar50[0x89] = fVar101;
                        *(undefined8 *)(pfVar50 + 0x8a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x8c) = uVar15;
                        pfVar50[0x8e] = fVar102;
                        puVar25 = (undefined8 *)(lVar51 + 0x34 + lVar27);
                        uVar14 = *puVar25;
                        uVar15 = puVar25[1];
                        fVar60 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0x90] = fVar78;
                        pfVar50[0x91] = (float)local_958._0_4_;
                        pfVar50[0x92] = fVar85;
                        pfVar50[0x93] = 1.0;
                        pfVar50[0x94] = fVar74;
                        pfVar50[0x95] = fVar99;
                        pfVar50[0x96] = fVar98;
                        pfVar50[0x97] = 0.0;
                        pfVar50[0x98] = fVar100;
                        pfVar50[0x99] = fVar75;
                        *(undefined8 *)(pfVar50 + 0x9a) = uVar14;
                        *(undefined8 *)(pfVar50 + 0x9c) = uVar15;
                        pfVar50[0x9e] = fVar60;
                        auVar3 = *(undefined1 (*) [16])(lVar51 + 0x34 + lVar27);
                        fVar60 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0xa0] = (float)local_900;
                        pfVar50[0xa1] = (float)(double)local_9c8._0_8_;
                        pfVar50[0xa2] = (float)dVar94;
                        pfVar50[0xa3] = 1.0;
                        pfVar50[0xa4] = (float)(local_900 - (double)(float)local_900);
                        pfVar50[0xa5] =
                             (float)((double)local_9c8._0_8_ -
                                    (double)(float)(double)local_9c8._0_8_);
                        pfVar50[0xa6] = (float)(dVar94 - (double)(float)dVar94);
                        pfVar50[0xa7] = 0.0;
                        pfVar50[0xa8] = fVar100;
                        pfVar50[0xa9] = (float)local_828;
                        local_798._0_8_ = auVar3._0_8_;
                        local_798._8_8_ = auVar3._8_8_;
                        *(undefined8 *)(pfVar50 + 0xaa) = local_798._0_8_;
                        *(undefined8 *)(pfVar50 + 0xac) = local_798._8_8_;
                        pfVar50[0xae] = fVar60;
                        local_798 = *(undefined1 (*) [16])(lVar51 + 0x34 + lVar27);
                        fVar60 = *(float *)(lVar51 + 0x44 + lVar27);
                        pfVar50[0xb0] = (float)local_918._0_4_;
                        pfVar50[0xb1] = fVar89;
                        pfVar50[0xb2] = fVar95;
                        pfVar50[0xb3] = 1.0;
                        pfVar50[0xb4] = fVar77;
                        pfVar50[0xb5] = (float)(local_848 - (double)fVar89);
                        pfVar50[0xb6] = (float)dVar69;
                        pfVar50[0xb7] = 0.0;
                        pfVar50[0xb8] = (float)local_838;
                        pfVar50[0xb9] = fVar101;
                        *(undefined8 *)(pfVar50 + 0xba) = local_798._0_8_;
                        *(undefined8 *)(pfVar50 + 0xbc) = local_798._8_8_;
                        pfVar50[0xbe] = fVar60;
                        pfVar50 = pfVar50 + 0xc0;
                        iVar23 = iVar23 + 4;
                      }
                      local_9e8._8_8_ = 0;
                      uStack_820 = 0;
                      uStack_830 = 0;
                      uVar72 = (undefined4)local_998;
                      uVar96 = local_998._4_4_;
                      uVar70 = (undefined4)local_8a8;
                      uVar71 = local_8a8._4_4_;
                      dVar90 = local_898;
                    }
                    else if ((dVar80 <= dVar94) || (dVar80 <= dVar65)) {
                      uVar70 = uVar73;
                      uVar36 = uVar56;
                      if (dVar80 <= dVar94) {
                        if (dVar65 < dVar80) {
                          dVar90 = (dVar80 - dVar65) / (dVar94 - dVar65);
                          local_9f8._8_8_ = 0;
                          local_9f8._0_8_ =
                               (double)local_9f8._0_8_ + (dVar69 - (double)local_9f8._0_8_) * dVar90
                          ;
                          local_9b8._8_8_ = 0;
                          local_9b8._0_8_ =
                               (double)local_9b8._0_8_ +
                               ((double)local_9d8 - (double)local_9b8._0_8_) * dVar90;
                          local_988._0_8_ =
                               (double)local_988._0_8_ +
                               ((double)local_9c8._0_8_ - (double)local_988._0_8_) * dVar90;
                          dVar65 = (dVar94 - dVar65) * dVar90 + dVar65;
                          dVar83 = (dVar63 - dVar83) * dVar90 + dVar83;
                          dVar91 = (dVar66 - dVar91) * dVar90 + dVar91;
                        }
                      }
                      else {
                        dVar90 = (dVar80 - dVar94) / (dVar65 - dVar94);
                        dVar69 = dVar69 + ((double)local_9f8._0_8_ - dVar69) * dVar90;
                        local_9d8 = (undefined1  [8])
                                    ((double)local_9d8 +
                                    ((double)local_9b8._0_8_ - (double)local_9d8) * dVar90);
                        local_9c8._0_8_ =
                             (double)local_9c8._0_8_ +
                             ((double)local_988._0_8_ - (double)local_9c8._0_8_) * dVar90;
                        dVar94 = (dVar65 - dVar94) * dVar90 + dVar94;
                        dVar63 = (dVar83 - dVar63) * dVar90 + dVar63;
                        dVar66 = (dVar91 - dVar66) * dVar90 + dVar66;
                      }
                      goto LAB_140b902af;
                    }
                    lVar27 = lVar27 + 0x50;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
                if (*(char *)((longlong)local_a10 + 0x69) == '\0') {
                  FUN_14002049c(local_a10,1);
                  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,lVar28);
                  FUN_14002049c(puVar35,0);
                }
                else {
                  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_a10,local_788);
                }
                lVar27 = local_788;
                puVar35 = local_a10;
                if (0 < iVar23) {
                  puVar30 = (undefined8 *)(*local_a10 + 7 & 0xfffffffffffffff8);
                  puVar25 = puVar30 + 5;
                  if ((undefined8 *)local_a10[1] < puVar25) {
                    FUN_140023dd8(local_a10,0x30);
                    puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar30 + 5;
                  }
                  *puVar35 = (ulonglong)puVar25;
                  *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
                  *(undefined8 **)puVar35[6] = puVar30;
                  puVar35[6] = (ulonglong)(puVar30 + 1);
                  puVar30[1] = 0;
                  *puVar30 = &PTR_LAB_14a1fb5a8;
                  *(undefined4 *)(puVar30 + 2) = 0;
                  puVar30[3] = lVar27;
                  *(undefined4 *)(puVar30 + 4) = 0;
                  puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                  puVar25 = puVar30 + 4;
                  if ((undefined8 *)puVar35[1] < puVar25) {
                    FUN_140023dd8(puVar35,0x28);
                    puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar30 + 4;
                  }
                  *puVar35 = (ulonglong)puVar25;
                  *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
                  *(undefined8 **)puVar35[6] = puVar30;
                  puVar35[6] = (ulonglong)(puVar30 + 1);
                  puVar30[1] = 0;
                  *puVar30 = &PTR_LAB_14a1fc200;
                  *(undefined4 *)(puVar30 + 2) = 0;
                  *(int *)((longlong)puVar30 + 0x14) = iVar23;
                  *(undefined4 *)(puVar30 + 3) = 1;
                }
                lVar27 = local_788;
                if (local_788 != 0) {
                  LOCK();
                  puVar1 = (uint *)(local_788 + 8);
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar56 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(local_788 + 8);
                    LOCK();
                    uVar56 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar56 >> 0x1e & 1) == 0) {
                      bVar5 = *(byte *)(local_788 + 0xd);
                      plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar26[1] = lVar27;
                      plVar32 = DAT_14ca843c0;
                      plVar31 = DAT_14ca843c8;
                      if ((bVar5 & 2) == 0) {
                        do {
                          *plVar26 = (longlong)plVar32;
                          LOCK();
                          bVar57 = plVar32 != DAT_14ca843c0;
                          plVar31 = plVar26;
                          if (bVar57) {
                            plVar32 = DAT_14ca843c0;
                            plVar31 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar31;
                          UNLOCK();
                        } while (bVar57);
                      }
                      else {
                        do {
                          *plVar26 = (longlong)plVar31;
                          LOCK();
                          bVar57 = plVar31 != DAT_14ca843c8;
                          plVar32 = plVar26;
                          if (bVar57) {
                            plVar31 = DAT_14ca843c8;
                            plVar32 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar32;
                          UNLOCK();
                        } while (bVar57);
                      }
                    }
                  }
                }
                puVar25 = local_780;
                if (local_780 != (undefined8 *)0x0) {
                  LOCK();
                  puVar1 = (uint *)(local_780 + 1);
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar56 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(local_780 + 1);
                    LOCK();
                    uVar56 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar56 >> 0x1e & 1) == 0) {
                      bVar5 = *(byte *)((longlong)local_780 + 0xd);
                      plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar26[1] = (longlong)puVar25;
                      plVar32 = DAT_14ca843c0;
                      plVar31 = DAT_14ca843c8;
                      if ((bVar5 & 2) == 0) {
                        do {
                          *plVar26 = (longlong)plVar32;
                          LOCK();
                          bVar57 = plVar32 != DAT_14ca843c0;
                          plVar31 = plVar26;
                          if (bVar57) {
                            plVar32 = DAT_14ca843c0;
                            plVar31 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar31;
                          UNLOCK();
                        } while (bVar57);
                      }
                      else {
                        do {
                          *plVar26 = (longlong)plVar31;
                          LOCK();
                          bVar57 = plVar31 != DAT_14ca843c8;
                          plVar32 = plVar26;
                          if (bVar57) {
                            plVar31 = DAT_14ca843c8;
                            plVar32 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar32;
                          UNLOCK();
                        } while (bVar57);
                      }
                    }
                  }
                }
                uVar44 = CONCAT22(local_148._2_2_,(undefined2)local_148);
                iVar23 = *(int *)(puVar41 + 0xb);
                iVar37 = iVar39;
              } while (iVar39 < iVar23);
              puStack_740 = DAT_14c9c0db0;
            }
            puVar41 = local_a08;
            local_148 = uVar44;
            if (0 < *(int *)(local_a08 + 5)) {
              puStack_440 = local_a08 + 6;
              local_448 = 0;
              local_438 = 1;
              local_434 = 0;
              uStack_42c = 0;
              local_424 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
              local_420 = 0;
              local_41c = 0;
              local_418 = L"WireTris";
              local_410 = 0;
              uStack_408 = 0;
              uVar56 = *(uint *)(local_a08 + 8);
              if (uVar56 < 0x4000000) {
                local_148._0_2_ = (undefined2)(uVar56 << 6);
                local_148._2_2_ = (undefined2)((uVar56 << 6) >> 0x10);
                fStack_144 = 0.0;
                fStack_140 = 2.29645e-41;
                puVar35 = local_a10;
                if (uVar56 == 0) goto LAB_140b936b9;
              }
              else {
                FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                              L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                              ,0x40);
                local_148._0_2_ = 0;
                local_148._2_2_ = 0;
                fStack_144 = 0.0;
                if ((local_420 & 1) == 0) {
LAB_140b936b9:
                  puVar35 = local_a10;
                  fStack_140 = 2.29645e-41;
                  fStack_144 = 0.0;
                  FUN_14570b4be(local_a10,&local_448,0x4004,0);
                }
                else {
                  fStack_140 = 1.469368e-39;
                  puVar35 = local_a10;
                }
              }
              if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
                FUN_14002049c(puVar35,1);
                local_a50 = &local_448;
                local_a58 = 8;
                (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35);
                *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
                FUN_14002049c(puVar35,0);
                lVar27 = local_798._0_8_;
              }
              else {
                local_a50 = &local_448;
                local_a58 = 8;
                (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35);
                *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
                lVar27 = local_798._0_8_;
              }
              puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
              puVar25 = puVar30 + 5;
              if ((undefined8 *)puVar35[1] < puVar25) {
                FUN_140023dd8(puVar35,0x30);
                puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar30 + 5;
              }
              *puVar35 = (ulonglong)puVar25;
              *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
              *(undefined8 **)puVar35[6] = puVar30;
              puVar35[6] = (ulonglong)(puVar30 + 1);
              puVar30[1] = 0;
              *puVar30 = &PTR_LAB_14a1fb5a8;
              *(undefined4 *)(puVar30 + 2) = 0;
              puVar30[3] = lVar27;
              *(undefined4 *)(puVar30 + 4) = 0;
              local_148._0_2_ = 1;
              fStack_144 = 0.0;
              fStack_140 = 0.0;
              uStack_13c = 0;
              uStack_13b = 1;
              uStack_13a = 0;
              iVar23 = (int)((ulonglong)(longlong)DAT_14ca84e7c / 0xc0) * 3;
              iVar37 = 0x10000;
              if (iVar23 < 0x10000) {
                iVar37 = iVar23;
              }
              iVar23 = *(int *)(puVar41 + 5);
              if (0 < iVar23) {
                iVar49 = 0;
                do {
                  iVar38 = iVar49 + iVar37 / 3;
                  if (iVar23 <= iVar38) {
                    iVar38 = iVar23;
                  }
                  lVar27 = puVar41[4];
                  lVar28 = (longlong)iVar49;
                  fStack_144 = *(float *)(lVar27 + lVar28 * 4);
                  iVar39 = iVar49;
                  while (lVar28 = lVar28 + 1, iVar40 = iVar38, lVar28 < iVar38) {
                    iVar39 = iVar39 + 1;
                    pfVar50 = (float *)(lVar27 + lVar28 * 4);
                    iVar40 = iVar39;
                    if ((fStack_144 != *pfVar50) || (NAN(fStack_144) || NAN(*pfVar50))) break;
                  }
                  (**(code **)(*DAT_14ca83900 + 0x50))(DAT_14ca83900,&local_780,&local_148);
                  puVar35 = local_a10;
                  puStack_740 = local_780;
                  local_a20 = param_5;
                  local_a28 = (int *)0x0;
                  local_a30 = param_7;
                  local_a38 = param_6;
                  local_a40 = DAT_14ca94e18;
                  local_a48 = 0;
                  local_a50 = local_698;
                  local_a18 = 0.5;
                  local_a58 = 0;
                  FUN_1434144d2(local_a10,&local_778,local_a00);
                  puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                  puVar25 = puVar30 + 4;
                  if ((undefined8 *)puVar35[1] < puVar25) {
                    FUN_140023dd8(puVar35,0x28);
                    puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                    puVar25 = puVar30 + 4;
                  }
                  puVar47 = local_780;
                  *puVar35 = (ulonglong)puVar25;
                  *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
                  *(undefined8 **)puVar35[6] = puVar30;
                  puVar35[6] = (ulonglong)(puVar30 + 1);
                  puVar30[1] = 0;
                  *puVar30 = &PTR_LAB_14a1fc200;
                  *(int *)(puVar30 + 2) = iVar49 * 3;
                  *(int *)((longlong)puVar30 + 0x14) = iVar40 - iVar49;
                  *(undefined4 *)(puVar30 + 3) = 1;
                  if (local_780 != (undefined8 *)0x0) {
                    LOCK();
                    puVar1 = (uint *)(local_780 + 1);
                    uVar56 = *puVar1;
                    *puVar1 = *puVar1 - 1;
                    UNLOCK();
                    if ((uVar56 & 0x3fffffff) == 1) {
                      puVar1 = (uint *)(local_780 + 1);
                      LOCK();
                      uVar56 = *puVar1;
                      *puVar1 = *puVar1 | 0x40000000;
                      UNLOCK();
                      if ((uVar56 >> 0x1e & 1) == 0) {
                        bVar5 = *(byte *)((longlong)local_780 + 0xd);
                        plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar26[1] = (longlong)puVar47;
                        plVar32 = DAT_14ca843c0;
                        plVar31 = DAT_14ca843c8;
                        if ((bVar5 & 2) == 0) {
                          do {
                            *plVar26 = (longlong)plVar32;
                            LOCK();
                            bVar57 = plVar32 != DAT_14ca843c0;
                            plVar31 = plVar26;
                            if (bVar57) {
                              plVar32 = DAT_14ca843c0;
                              plVar31 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar31;
                            UNLOCK();
                          } while (bVar57);
                        }
                        else {
                          do {
                            *plVar26 = (longlong)plVar31;
                            LOCK();
                            bVar57 = plVar31 != DAT_14ca843c8;
                            plVar32 = plVar26;
                            if (bVar57) {
                              plVar31 = DAT_14ca843c8;
                              plVar32 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar32;
                            UNLOCK();
                          } while (bVar57);
                        }
                      }
                    }
                  }
                  iVar49 = iVar40;
                } while (iVar40 < iVar23);
              }
              uVar14 = local_798._0_8_;
              if (local_798._0_8_ == 0) {
                puStack_740 = DAT_14c9c0db0;
                local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
              }
              else {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = local_798._8_8_;
                local_798 = auVar16 << 0x40;
                LOCK();
                puVar1 = (uint *)(uVar14 + 8);
                uVar56 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar56 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(uVar14 + 8);
                  LOCK();
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar56 >> 0x1e & 1) == 0) {
                    bVar5 = *(byte *)(uVar14 + 0xd);
                    plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar26[1] = uVar14;
                    plVar32 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c8;
                    if ((bVar5 & 2) == 0) {
                      do {
                        *plVar26 = (longlong)plVar32;
                        LOCK();
                        bVar57 = plVar32 != DAT_14ca843c0;
                        plVar31 = plVar26;
                        if (bVar57) {
                          plVar32 = DAT_14ca843c0;
                          plVar31 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar31;
                        UNLOCK();
                      } while (bVar57);
                    }
                    else {
                      do {
                        *plVar26 = (longlong)plVar31;
                        LOCK();
                        bVar57 = plVar31 != DAT_14ca843c8;
                        plVar32 = plVar26;
                        if (bVar57) {
                          plVar31 = DAT_14ca843c8;
                          plVar32 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar32;
                        UNLOCK();
                      } while (bVar57);
                    }
                  }
                }
                uVar14 = local_798._0_8_;
                puStack_740 = DAT_14c9c0db0;
                local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
                if (local_798._0_8_ != 0) {
                  LOCK();
                  puVar1 = (uint *)(local_798._0_8_ + 8);
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
                  if ((uVar56 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(local_798._0_8_ + 8);
                    LOCK();
                    uVar56 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
                    if ((uVar56 >> 0x1e & 1) == 0) {
                      bVar5 = *(byte *)(local_798._0_8_ + 0xd);
                      plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar26[1] = uVar14;
                      plVar32 = DAT_14ca843c0;
                      plVar31 = DAT_14ca843c8;
                      if ((bVar5 & 2) == 0) {
                        do {
                          *plVar26 = (longlong)plVar32;
                          LOCK();
                          bVar57 = plVar32 != DAT_14ca843c0;
                          plVar31 = plVar26;
                          if (bVar57) {
                            plVar32 = DAT_14ca843c0;
                            plVar31 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar31;
                          UNLOCK();
                        } while (bVar57);
                      }
                      else {
                        do {
                          *plVar26 = (longlong)plVar31;
                          LOCK();
                          bVar57 = plVar31 != DAT_14ca843c8;
                          plVar32 = plVar26;
                          if (bVar57) {
                            plVar31 = DAT_14ca843c8;
                            plVar32 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar32;
                          UNLOCK();
                          local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
                        } while (bVar57);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ((param_8 & 1) != 0) goto LAB_140b8eeb7;
      }
      else {
        local_148 = CONCAT22(local_148._2_2_,(undefined2)local_148);
        if ((param_8 & 1) != 0) {
          uVar29 = 0;
          if (0x3ffffff < uVar44) goto LAB_140b92e04;
          local_720 = 2;
          local_a20 = param_5;
          local_a28 = (int *)0x0;
          local_a30 = param_7;
          local_a38 = param_6;
          local_a40 = DAT_14ca94e18;
          local_a48 = 0;
          local_a50 = local_698;
          local_a58 = 0;
          local_a18 = 0.5;
          FUN_1434144d2(local_a10,&local_778,local_a00,local_9fc);
          local_448 = 0;
          puStack_440 = (undefined8 *)0x0;
          local_438 = 1;
          local_434 = 0;
          uStack_42c = 0;
          local_424 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_420 = 0;
          local_41c = 0;
          local_418 = L"Lines";
          local_410 = 0;
          uStack_408 = 0;
          iVar23 = *(int *)(local_a08 + 1) << 6;
          local_148._0_2_ = (undefined2)iVar23;
          local_148._2_2_ = (undefined2)((uint)iVar23 >> 0x10);
          fStack_144 = 0.0;
          fStack_140 = 2.29645e-41;
          if (iVar23 == 0) {
            FUN_14570b4be(puVar35,&local_448,0x4004,0);
          }
          if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
            FUN_14002049c(puVar35,1);
            local_a50 = &local_448;
            local_a58 = 8;
            (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35,&local_148);
            *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
            FUN_14002049c(puVar35,0);
            lVar27 = local_798._0_8_;
          }
          else {
            local_a50 = &local_448;
            local_a58 = 8;
            (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35,&local_148);
            *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
            lVar27 = local_798._0_8_;
          }
          iVar23 = *(int *)(local_a08 + 1);
          cVar4 = *(char *)((longlong)puVar35 + 0x69);
          if (cVar4 == '\0') {
            FUN_14002049c(puVar35,1);
          }
          local_a50 = (longlong *)CONCAT44(local_a50._4_4_,1);
          local_a58 = iVar23 << 6;
          pvVar24 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,puVar35,lVar27,0);
          if (cVar4 == '\0') {
            FUN_14002049c(puVar35,0);
          }
          memcpy(pvVar24,(void *)*local_a08,(longlong)*(int *)(local_a08 + 1) << 6);
          uVar14 = local_798._0_8_;
          if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
            FUN_14002049c(puVar35,1);
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,uVar14);
            FUN_14002049c(puVar35,0);
          }
          else {
            (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,local_798._0_8_);
          }
          uVar14 = local_798._0_8_;
          puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
          puVar41 = puVar25 + 5;
          if ((undefined8 *)puVar35[1] < puVar41) {
            FUN_140023dd8(puVar35,0x30);
            puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
            puVar41 = puVar25 + 5;
          }
          *puVar35 = (ulonglong)puVar41;
          *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
          *(undefined8 **)puVar35[6] = puVar25;
          puVar35[6] = (ulonglong)(puVar25 + 1);
          puVar25[1] = 0;
          *puVar25 = &PTR_LAB_14a1fb5a8;
          iVar37 = 0;
          *(undefined4 *)(puVar25 + 2) = 0;
          puVar25[3] = uVar14;
          *(undefined4 *)(puVar25 + 4) = 0;
          iVar23 = *(int *)(local_a08 + 1);
          if (1 < iVar23) {
            uVar44 = DAT_14ca84e7c >> 6 & 0xfffffffe;
            uVar36 = iVar23 - (iVar23 >> 0x1f) & 0xfffffffe;
            do {
              uVar54 = uVar36 - iVar37;
              if ((int)uVar44 < (int)uVar54) {
                uVar54 = uVar44;
              }
              if (0xffff < (int)uVar54) {
                uVar54 = 0x10000;
              }
              puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
              puVar41 = puVar25 + 4;
              if ((undefined8 *)puVar35[1] < puVar41) {
                FUN_140023dd8(puVar35,0x28);
                puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar41 = puVar25 + 4;
              }
              *puVar35 = (ulonglong)puVar41;
              *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
              *(undefined8 **)puVar35[6] = puVar25;
              puVar35[6] = (ulonglong)(puVar25 + 1);
              puVar25[1] = 0;
              *puVar25 = &PTR_LAB_14a1fc200;
              *(int *)(puVar25 + 2) = iVar37;
              *(int *)((longlong)puVar25 + 0x14) = (int)uVar54 >> 1;
              *(undefined4 *)(puVar25 + 3) = 1;
              iVar37 = iVar37 + uVar54;
            } while (iVar37 < (int)uVar36);
          }
          uVar14 = local_798._0_8_;
          if (local_798._0_8_ != 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_798._8_8_;
            local_798 = auVar3 << 0x40;
            LOCK();
            puVar1 = (uint *)(uVar14 + 8);
            uVar36 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar36 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(uVar14 + 8);
              LOCK();
              uVar36 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar36 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(uVar14 + 0xd);
                plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                plVar26[1] = uVar14;
                plVar32 = DAT_14ca843c0;
                plVar31 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar26 = (longlong)plVar32;
                    LOCK();
                    bVar57 = plVar32 != DAT_14ca843c0;
                    plVar31 = plVar26;
                    if (bVar57) {
                      plVar32 = DAT_14ca843c0;
                      plVar31 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar31;
                    UNLOCK();
                  } while (bVar57);
                }
                else {
                  do {
                    *plVar26 = (longlong)plVar31;
                    LOCK();
                    bVar57 = plVar31 != DAT_14ca843c8;
                    plVar32 = plVar26;
                    if (bVar57) {
                      plVar31 = DAT_14ca843c8;
                      plVar32 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar32;
                    UNLOCK();
                  } while (bVar57);
                }
              }
            }
            uVar14 = local_798._0_8_;
            if (local_798._0_8_ != 0) {
              LOCK();
              puVar1 = (uint *)(local_798._0_8_ + 8);
              uVar36 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar36 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_798._0_8_ + 8);
                LOCK();
                uVar36 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar36 >> 0x1e & 1) == 0) {
                  bVar5 = *(byte *)(local_798._0_8_ + 0xd);
                  plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar26[1] = uVar14;
                  plVar32 = DAT_14ca843c0;
                  plVar31 = DAT_14ca843c8;
                  if ((bVar5 & 2) == 0) {
                    do {
                      *plVar26 = (longlong)plVar32;
                      LOCK();
                      bVar57 = plVar32 != DAT_14ca843c0;
                      plVar31 = plVar26;
                      if (bVar57) {
                        plVar32 = DAT_14ca843c0;
                        plVar31 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar31;
                      UNLOCK();
                    } while (bVar57);
                  }
                  else {
                    do {
                      *plVar26 = (longlong)plVar31;
                      LOCK();
                      bVar57 = plVar31 != DAT_14ca843c8;
                      plVar32 = plVar26;
                      if (bVar57) {
                        plVar31 = DAT_14ca843c8;
                        plVar32 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar32;
                      UNLOCK();
                    } while (bVar57);
                  }
                }
              }
            }
          }
          goto LAB_140b8eeb7;
        }
      }
      puVar25 = local_a08;
      iVar23 = *(int *)(local_a08 + 0xd);
      puVar41 = (undefined8 *)(longlong)iVar23;
      if (0 < (longlong)puVar41) {
        pvVar24 = (void *)local_a08[0xc];
        auVar19._4_4_ = local_798._12_4_;
        auVar19._0_4_ = iVar23;
        auVar19._8_8_ = 0;
        local_798 = auVar19 << 0x40;
        FUN_1472e564e(local_798,iVar23,0);
        memcpy((void *)local_798._0_8_,pvVar24,(longlong)puVar41 * 0x58);
        uVar73 = local_798._8_4_;
        lVar27 = (longlong)(int)local_798._8_4_;
        if (1 < lVar27) {
          uVar14 = local_798._0_8_;
          puVar41 = (undefined8 *)&local_438;
          memset(puVar41,0,0x2f0);
          local_448 = uVar14;
          puStack_440 = (undefined8 *)(lVar27 * 0x58 + uVar14 + -0x58);
          fVar60 = logf((float)(int)uVar73);
          local_438 = (int)(longlong)(fVar60 + fVar60);
          plVar32 = &local_448;
          do {
            puVar30 = (undefined8 *)*plVar32;
            puVar47 = (undefined8 *)plVar32[1];
            iVar23 = (int)plVar32[2];
            iVar37 = (int)((ulonglong)((longlong)puVar47 - (longlong)puVar30) >> 3) * -0x45d1745d;
            uVar56 = iVar37 + 1;
            if (iVar23 != 0) {
LAB_140b92f53:
              if (8 < (int)uVar56) {
                puVar41 = puVar30 + (ulonglong)(uVar56 >> 1) * 0xb;
                puVar33 = (undefined8 *)&local_148;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar33 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar33 = puVar33 + 1;
                }
                puVar41 = puVar30;
                puVar33 = puVar30 + (ulonglong)(uVar56 >> 1) * 0xb;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar33 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar33 = puVar33 + 1;
                }
                puVar41 = (undefined8 *)&local_148;
                puVar33 = puVar30;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar33 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar33 = puVar33 + 1;
                }
                puVar33 = puVar30;
                puVar43 = puVar47 + 0xb;
                do {
                  puVar33 = puVar33 + 0xb;
                  if (puVar33 <= puVar47) {
                    bVar5 = *(byte *)(puVar30 + 10);
                    do {
                      bVar6 = *(byte *)(puVar33 + 10);
                      if (bVar5 == bVar6) {
                        if ((ulonglong)puVar30[4] < (ulonglong)puVar33[4]) break;
                      }
                      else {
                        bVar59 = (bVar5 & param_8) != 0;
                        bVar57 = bVar5 < bVar6;
                        if (((bVar6 & param_8) == 0) == bVar59) {
                          bVar57 = bVar59;
                        }
                        if (bVar57) break;
                      }
                      puVar33 = puVar33 + 0xb;
                    } while (puVar33 <= puVar47);
                  }
                  puVar48 = puVar43 + -0xb;
                  if (puVar30 < puVar48) {
                    bVar5 = *(byte *)(puVar30 + 10);
                    puVar41 = puVar43;
                    do {
                      puVar43 = puVar41;
                      puVar42 = puVar48;
                      bVar6 = *(byte *)(puVar43 + -1);
                      if (bVar6 == bVar5) {
                        if ((ulonglong)puVar43[-7] < (ulonglong)puVar30[4]) {
                          puVar48 = puVar43 + -0xb;
                          goto LAB_140b93077;
                        }
                      }
                      else {
                        bVar59 = (bVar6 & param_8) != 0;
                        bVar57 = bVar6 < bVar5;
                        if (((bVar5 & param_8) == 0) == bVar59) {
                          bVar57 = bVar59;
                        }
                        puVar48 = puVar42;
                        if (bVar57) goto LAB_140b93077;
                      }
                      puVar48 = puVar42 + -0xb;
                      puVar41 = puVar43 + -0xb;
                    } while (puVar30 < puVar43 + -0x16);
                    puVar48 = puVar43 + -0x16;
                    puVar43 = puVar42;
                  }
LAB_140b93077:
                  lVar27 = 0xb;
                  puVar41 = puVar30;
                  puVar42 = puVar33;
                  puVar46 = (undefined8 *)&local_148;
                  if (puVar48 < puVar33) goto code_r0x000140b930b1;
                  for (; lVar27 != 0; lVar27 = lVar27 + -1) {
                    *puVar46 = *puVar42;
                    puVar42 = puVar42 + 1;
                    puVar46 = puVar46 + 1;
                  }
                  puVar41 = puVar48;
                  puVar43 = puVar33;
                  for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                    *puVar43 = *puVar41;
                    puVar41 = puVar41 + 1;
                    puVar43 = puVar43 + 1;
                  }
                  puVar41 = (undefined8 *)&local_148;
                  puVar42 = puVar48;
                  for (lVar27 = 0xb; puVar43 = puVar48, lVar27 != 0; lVar27 = lVar27 + -1) {
                    *puVar42 = *puVar41;
                    puVar41 = puVar41 + 1;
                    puVar42 = puVar42 + 1;
                  }
                } while( true );
              }
              while (puVar43 = puVar30, puVar33 = puVar30, puVar30 < puVar47) {
                while (puVar41 = puVar43, puVar33 = puVar33 + 0xb, puVar33 <= puVar47) {
                  bVar5 = *(byte *)(puVar41 + 10);
                  bVar6 = *(byte *)(puVar33 + 10);
                  if (bVar5 == bVar6) {
                    bVar57 = (ulonglong)puVar41[4] < (ulonglong)puVar33[4];
                  }
                  else {
                    bVar59 = (bVar5 & param_8) != 0;
                    bVar57 = bVar5 < bVar6;
                    if (((bVar6 & param_8) == 0) == bVar59) {
                      bVar57 = bVar59;
                    }
                  }
                  puVar43 = puVar33;
                  if (!bVar57) {
                    puVar43 = puVar41;
                  }
                }
                puVar33 = puVar47 + -0xb;
                puVar43 = puVar41;
                puVar48 = (undefined8 *)&local_148;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar48 = *puVar43;
                  puVar43 = puVar43 + 1;
                  puVar48 = puVar48 + 1;
                }
                puVar43 = puVar47;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar41 = *puVar43;
                  puVar43 = puVar43 + 1;
                  puVar41 = puVar41 + 1;
                }
                puVar41 = (undefined8 *)&local_148;
                puVar43 = puVar47;
                for (lVar27 = 0xb; puVar47 = puVar33, lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar43 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar43 = puVar43 + 1;
                }
              }
              goto LAB_140b9350e;
            }
LAB_140b93154:
            if (uVar56 != 0) {
              iVar37 = (iVar37 - (iVar37 + -1 >> 0x1f)) + -1 >> 1;
              iVar23 = iVar37;
joined_r0x000140b9317c:
              do {
                iVar49 = iVar23 * 2 + 1;
                if (iVar49 < (int)uVar56) {
                  iVar38 = iVar23 * 2 + 2;
                  if (iVar38 < (int)uVar56) {
                    bVar5 = *(byte *)(puVar30 + (longlong)iVar38 * 0xb + 10);
                    bVar6 = *(byte *)(puVar30 + (longlong)iVar49 * 0xb + 10);
                    if (bVar5 == bVar6) {
                      bVar57 = (ulonglong)puVar30[(longlong)iVar38 * 0xb + 4] <
                               (ulonglong)puVar30[(longlong)iVar49 * 0xb + 4];
                    }
                    else {
                      bVar59 = (bVar5 & param_8) != 0;
                      bVar57 = bVar5 < bVar6;
                      if (((bVar6 & param_8) == 0) == bVar59) {
                        bVar57 = bVar59;
                      }
                    }
                    if (!bVar57) {
                      iVar49 = iVar38;
                    }
                  }
                  puVar47 = puVar30 + (longlong)iVar23 * 0xb;
                  puVar33 = puVar30 + (longlong)iVar49 * 0xb;
                  bVar5 = *(byte *)(puVar30 + (longlong)iVar23 * 0xb + 10);
                  bVar6 = *(byte *)(puVar30 + (longlong)iVar49 * 0xb + 10);
                  puVar41 = (undefined8 *)0x0;
                  if (bVar5 == bVar6) {
                    if ((ulonglong)puVar47[4] < (ulonglong)puVar33[4]) {
LAB_140b93268:
                      puVar41 = puVar47;
                      puVar43 = (undefined8 *)&local_148;
                      for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                        *puVar43 = *puVar41;
                        puVar41 = puVar41 + 1;
                        puVar43 = puVar43 + 1;
                      }
                      puVar41 = puVar33;
                      for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                        *puVar47 = *puVar41;
                        puVar41 = puVar41 + 1;
                        puVar47 = puVar47 + 1;
                      }
                      puVar41 = (undefined8 *)&local_148;
                      for (lVar27 = 0xb; iVar23 = iVar49, lVar27 != 0; lVar27 = lVar27 + -1) {
                        *puVar33 = *puVar41;
                        puVar41 = puVar41 + 1;
                        puVar33 = puVar33 + 1;
                      }
                      goto joined_r0x000140b9317c;
                    }
                  }
                  else {
                    bVar59 = (bVar5 & param_8) != 0;
                    bVar57 = bVar5 < bVar6;
                    if (((bVar6 & param_8) == 0) == bVar59) {
                      bVar57 = bVar59;
                    }
                    if (bVar57) goto LAB_140b93268;
                  }
                }
                bVar57 = iVar37 != 0;
                iVar37 = iVar37 + -1;
                iVar23 = iVar37;
              } while (bVar57);
              if (1 < (int)uVar56) {
                puVar41 = puVar30;
                puVar47 = (undefined8 *)&local_148;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar47 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar47 = puVar47 + 1;
                }
                puVar41 = puVar30 + ((ulonglong)uVar56 - 1) * 0xb;
                puVar47 = puVar30;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar47 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar47 = puVar47 + 1;
                }
                puVar41 = (undefined8 *)&local_148;
                puVar47 = puVar30 + ((ulonglong)uVar56 - 1) * 0xb;
                for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *puVar47 = *puVar41;
                  puVar41 = puVar41 + 1;
                  puVar47 = puVar47 + 1;
                }
                uVar29 = (ulonglong)uVar56 - 1;
                if (uVar56 != 2) {
                  do {
                    iVar23 = 0;
                    iVar49 = 1;
                    iVar37 = 0;
                    do {
                      lVar27 = (longlong)(iVar23 + 2);
                      iVar38 = iVar49;
                      if (lVar27 < (longlong)uVar29) {
                        bVar5 = *(byte *)(puVar30 + lVar27 * 0xb + 10);
                        bVar6 = *(byte *)(puVar30 + (longlong)iVar49 * 0xb + 10);
                        if (bVar5 == bVar6) {
                          bVar57 = (ulonglong)puVar30[lVar27 * 0xb + 4] <
                                   (ulonglong)puVar30[(longlong)iVar49 * 0xb + 4];
                        }
                        else {
                          bVar59 = (bVar5 & param_8) != 0;
                          bVar57 = bVar5 < bVar6;
                          if (((bVar6 & param_8) == 0) == bVar59) {
                            bVar57 = bVar59;
                          }
                        }
                        if (!bVar57) {
                          iVar38 = iVar23 + 2;
                        }
                      }
                      puVar41 = puVar30 + (longlong)iVar37 * 0xb;
                      puVar47 = puVar30 + (longlong)iVar38 * 0xb;
                      bVar5 = *(byte *)(puVar30 + (longlong)iVar37 * 0xb + 10);
                      bVar6 = *(byte *)(puVar30 + (longlong)iVar38 * 0xb + 10);
                      if (bVar5 == bVar6) {
                        if ((ulonglong)puVar47[4] <= (ulonglong)puVar41[4]) break;
                      }
                      else {
                        bVar59 = (bVar5 & param_8) != 0;
                        bVar57 = bVar5 < bVar6;
                        if (((bVar6 & param_8) == 0) == bVar59) {
                          bVar57 = bVar59;
                        }
                        if (!bVar57) break;
                      }
                      puVar33 = puVar41;
                      puVar43 = (undefined8 *)&local_148;
                      for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                        *puVar43 = *puVar33;
                        puVar33 = puVar33 + 1;
                        puVar43 = puVar43 + 1;
                      }
                      puVar33 = puVar47;
                      for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                        *puVar41 = *puVar33;
                        puVar33 = puVar33 + 1;
                        puVar41 = puVar41 + 1;
                      }
                      puVar41 = (undefined8 *)&local_148;
                      for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                        *puVar47 = *puVar41;
                        puVar41 = puVar41 + 1;
                        puVar47 = puVar47 + 1;
                      }
                      iVar23 = iVar38 * 2;
                      iVar49 = iVar38 * 2 + 1;
                      iVar37 = iVar38;
                    } while ((longlong)iVar49 < (longlong)uVar29);
                    puVar41 = puVar30;
                    puVar47 = (undefined8 *)&local_148;
                    for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                      *puVar47 = *puVar41;
                      puVar41 = puVar41 + 1;
                      puVar47 = puVar47 + 1;
                    }
                    puVar41 = puVar30 + (uVar29 - 1) * 0xb;
                    puVar47 = puVar30;
                    for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                      *puVar47 = *puVar41;
                      puVar41 = puVar41 + 1;
                      puVar47 = puVar47 + 1;
                    }
                    puVar41 = (undefined8 *)&local_148;
                    puVar47 = puVar30 + (uVar29 - 1) * 0xb;
                    for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
                      *puVar47 = *puVar41;
                      puVar41 = puVar41 + 1;
                      puVar47 = puVar47 + 1;
                    }
                    bVar57 = 2 < uVar29;
                    uVar29 = uVar29 - 1;
                  } while (bVar57);
                }
              }
            }
LAB_140b9350e:
            plVar32 = plVar32 + -3;
          } while (&local_448 <= plVar32);
        }
        if (0 < (int)local_798._8_4_) {
          pbVar34 = (byte *)(local_798._0_8_ + 0x50);
          uVar29 = 0;
          do {
            uVar56 = 2;
            if ((ulonglong)*pbVar34 < 7) {
              uVar56 = *(uint *)(&DAT_14a7feee8 + (ulonglong)*pbVar34 * 4);
            }
            if ((uVar56 & param_8) == 0) goto LAB_140b93570;
            uVar29 = uVar29 + 1;
            pbVar34 = pbVar34 + 0x58;
          } while ((uint)local_798._8_4_ != uVar29);
          uVar29 = (ulonglong)(uint)local_798._8_4_;
LAB_140b93570:
          uVar56 = (uint)uVar29;
          if (uVar56 != 0) {
            if (0x17fffffa < uVar56) {
              uVar36 = local_148;
              if (local_798._0_8_ != 0) {
                FUN_1400020a8();
                uVar36 = local_148;
              }
              goto LAB_140b92637;
            }
            local_448 = 0;
            puStack_440 = (undefined8 *)0x0;
            local_438 = 1;
            local_434 = 0;
            uStack_42c = 0;
            local_424 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            local_420 = 0;
            local_41c = 0;
            local_418 = L"Sprites";
            local_410 = 0;
            uStack_408 = 0;
            uVar36 = uVar56 * 0x180;
            fStack_144 = 0.0;
            fStack_140 = 2.29645e-41;
            local_148 = uVar36;
            if (uVar36 == 0) {
              FUN_14570b4be(local_a10,&local_448,0x4004,0);
            }
            puVar35 = local_a10;
            if (*(char *)((longlong)local_a10 + 0x69) == '\0') {
              FUN_14002049c(local_a10,1);
              local_a50 = &local_448;
              local_a58 = 8;
              (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_780,puVar35,&local_148);
              *(undefined4 *)(local_780 + 3) = 8;
              FUN_14002049c(puVar35,0);
            }
            else {
              local_a50 = &local_448;
              local_a58 = 8;
              (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_780,local_a10,&local_148);
              *(undefined4 *)(local_780 + 3) = 8;
            }
            puVar41 = local_780;
            cVar4 = *(char *)((longlong)puVar35 + 0x69);
            if (cVar4 == '\0') {
              FUN_14002049c(puVar35,1);
            }
            local_a50 = (longlong *)CONCAT44(local_a50._4_4_,1);
            local_a58 = uVar36;
            pfVar50 = (float *)(**(code **)(*DAT_14ca83900 + 0x158))
                                         (DAT_14ca83900,puVar35,puVar41,0);
            if (cVar4 == '\0') {
              FUN_14002049c(puVar35,0);
            }
            uVar29 = uVar29 & 0xffffffff;
            lVar27 = 0;
            local_9f8._0_8_ = uVar29;
            uVar36 = local_148;
            do {
              uVar22 = local_798._0_8_;
              dVar65 = (double)*(float *)(local_798._0_8_ + 0x18 + lVar27);
              dVar66 = (double)CONCAT44(uVar71,uVar70) * dVar65;
              dVar63 = (double)local_8e8._0_8_ * dVar65;
              dVar65 = dVar65 * (double)CONCAT44(uVar96,uVar72);
              dVar94 = (double)-*(float *)(local_798._0_8_ + 0x1c + lVar27);
              dVar83 = local_8f8 * dVar94;
              dVar61 = (double)CONCAT44(uStack_8d4,local_8d8) * dVar94;
              dVar94 = dVar94 * dVar90;
              fVar60 = *(float *)(local_798._0_8_ + 0x3c + lVar27);
              local_148 = uVar36;
              uVar36 = (**(code **)(**(longlong **)(local_798._0_8_ + 0x20 + lVar27) + 0x30))();
              local_9d8._0_4_ = fVar60 / (float)uVar36;
              fVar60 = *(float *)(uVar22 + 0x3c + lVar27);
              fVar101 = *(float *)(uVar22 + 0x40 + lVar27);
              uVar36 = (**(code **)(**(longlong **)(uVar22 + 0x20 + lVar27) + 0x30))();
              fVar77 = (fVar60 + fVar101) / (float)uVar36;
              fVar60 = *(float *)(uVar22 + 0x44 + lVar27);
              uVar36 = (**(code **)(**(longlong **)(uVar22 + 0x20 + lVar27) + 0x38))();
              fVar60 = fVar60 / (float)uVar36;
              local_9e8._0_4_ = fVar60;
              fVar101 = *(float *)(uVar22 + 0x44 + lVar27);
              fVar102 = *(float *)(uVar22 + 0x48 + lVar27);
              uVar36 = (**(code **)(**(longlong **)(uVar22 + 0x20 + lVar27) + 0x38))();
              puVar25 = local_780;
              puVar35 = local_a10;
              dVar90 = (*(double *)(uVar22 + 0x10 + lVar27) + dVar66) - dVar83;
              dVar69 = (*(double *)(uVar22 + lVar27) + dVar65) - dVar94;
              fVar74 = (float)dVar69;
              dVar91 = (*(double *)(uVar22 + 8 + lVar27) + dVar63) - dVar61;
              fVar75 = (float)dVar91;
              fVar76 = (float)dVar90;
              puVar41 = (undefined8 *)(uVar22 + 0x28 + lVar27);
              uVar14 = *puVar41;
              uVar15 = puVar41[1];
              fVar64 = *(float *)(uVar22 + 0x38 + lVar27);
              *pfVar50 = fVar74;
              pfVar50[1] = fVar75;
              pfVar50[2] = fVar76;
              pfVar50[3] = 1.0;
              pfVar50[4] = (float)(dVar69 - (double)fVar74);
              pfVar50[5] = (float)(dVar91 - (double)fVar75);
              pfVar50[6] = (float)(dVar90 - (double)fVar76);
              pfVar50[7] = 0.0;
              pfVar50[8] = fVar77;
              pfVar50[9] = fVar60;
              *(undefined8 *)(pfVar50 + 10) = uVar14;
              *(undefined8 *)(pfVar50 + 0xc) = uVar15;
              pfVar50[0xe] = fVar64;
              fVar74 = (fVar101 + fVar102) / (float)uVar36;
              dVar90 = *(double *)(uVar22 + 0x10 + lVar27) + dVar66 + dVar83;
              dVar69 = *(double *)(uVar22 + lVar27) + dVar65 + dVar94;
              fVar101 = (float)dVar69;
              dVar91 = *(double *)(uVar22 + 8 + lVar27) + dVar63 + dVar61;
              fVar102 = (float)dVar91;
              fVar64 = (float)dVar90;
              puVar41 = (undefined8 *)(uVar22 + 0x28 + lVar27);
              uVar14 = *puVar41;
              uVar15 = puVar41[1];
              fVar60 = *(float *)(uVar22 + 0x38 + lVar27);
              pfVar50[0x10] = fVar101;
              pfVar50[0x11] = fVar102;
              pfVar50[0x12] = fVar64;
              pfVar50[0x13] = 1.0;
              pfVar50[0x14] = (float)(dVar69 - (double)fVar101);
              pfVar50[0x15] = (float)(dVar91 - (double)fVar102);
              pfVar50[0x16] = (float)(dVar90 - (double)fVar64);
              pfVar50[0x17] = 0.0;
              pfVar50[0x18] = fVar77;
              pfVar50[0x19] = fVar74;
              local_9c8._0_4_ = fVar74;
              *(undefined8 *)(pfVar50 + 0x1a) = uVar14;
              *(undefined8 *)(pfVar50 + 0x1c) = uVar15;
              pfVar50[0x1e] = fVar60;
              dVar90 = (*(double *)(uVar22 + 0x10 + lVar27) - dVar66) - dVar83;
              dVar69 = (*(double *)(uVar22 + 8 + lVar27) - dVar63) - dVar61;
              dVar91 = (*(double *)(uVar22 + lVar27) - dVar65) - dVar94;
              fVar101 = (float)dVar91;
              fVar64 = (float)dVar69;
              fVar102 = (float)dVar90;
              puVar41 = (undefined8 *)(uVar22 + 0x28 + lVar27);
              uVar14 = *puVar41;
              uVar15 = puVar41[1];
              fVar60 = *(float *)(uVar22 + 0x38 + lVar27);
              pfVar50[0x20] = fVar101;
              pfVar50[0x21] = fVar64;
              pfVar50[0x22] = fVar102;
              pfVar50[0x23] = 1.0;
              pfVar50[0x24] = (float)(dVar91 - (double)fVar101);
              pfVar50[0x25] = (float)(dVar69 - (double)fVar64);
              pfVar50[0x26] = (float)(dVar90 - (double)fVar102);
              pfVar50[0x27] = 0.0;
              pfVar50[0x28] = (float)local_9d8._0_4_;
              pfVar50[0x29] = (float)local_9e8._0_4_;
              *(undefined8 *)(pfVar50 + 0x2a) = uVar14;
              *(undefined8 *)(pfVar50 + 0x2c) = uVar15;
              pfVar50[0x2e] = fVar60;
              dVar91 = *(double *)(uVar22 + 8 + lVar27) + dVar63 + dVar61;
              dVar69 = *(double *)(uVar22 + lVar27) + dVar65 + dVar94;
              fVar101 = (float)dVar69;
              fVar102 = (float)dVar91;
              dVar90 = *(double *)(uVar22 + 0x10 + lVar27) + dVar66 + dVar83;
              fVar64 = (float)dVar90;
              puVar41 = (undefined8 *)(uVar22 + 0x28 + lVar27);
              uVar14 = *puVar41;
              uVar15 = puVar41[1];
              fVar60 = *(float *)(uVar22 + 0x38 + lVar27);
              pfVar50[0x30] = fVar101;
              pfVar50[0x31] = fVar102;
              pfVar50[0x32] = fVar64;
              pfVar50[0x33] = 1.0;
              pfVar50[0x34] = (float)(dVar69 - (double)fVar101);
              pfVar50[0x35] = (float)(dVar91 - (double)fVar102);
              pfVar50[0x36] = (float)(dVar90 - (double)fVar64);
              pfVar50[0x37] = 0.0;
              pfVar50[0x38] = fVar77;
              pfVar50[0x39] = fVar74;
              *(undefined8 *)(pfVar50 + 0x3a) = uVar14;
              *(undefined8 *)(pfVar50 + 0x3c) = uVar15;
              pfVar50[0x3e] = fVar60;
              dVar90 = (*(double *)(uVar22 + 0x10 + lVar27) - dVar66) - dVar83;
              dVar91 = (*(double *)(uVar22 + 8 + lVar27) - dVar63) - dVar61;
              dVar69 = (*(double *)(uVar22 + lVar27) - dVar65) - dVar94;
              fVar101 = (float)dVar69;
              fVar102 = (float)dVar91;
              fVar64 = (float)dVar90;
              puVar41 = (undefined8 *)(uVar22 + 0x28 + lVar27);
              uVar14 = *puVar41;
              uVar15 = puVar41[1];
              fVar60 = *(float *)(uVar22 + 0x38 + lVar27);
              pfVar50[0x40] = fVar101;
              pfVar50[0x41] = fVar102;
              pfVar50[0x42] = fVar64;
              pfVar50[0x43] = 1.0;
              pfVar50[0x44] = (float)(dVar69 - (double)fVar101);
              pfVar50[0x45] = (float)(dVar91 - (double)fVar102);
              pfVar50[0x46] = (float)(dVar90 - (double)fVar64);
              pfVar50[0x47] = 0.0;
              pfVar50[0x48] = (float)local_9d8._0_4_;
              pfVar50[0x49] = (float)local_9e8._0_4_;
              *(undefined8 *)(pfVar50 + 0x4a) = uVar14;
              *(undefined8 *)(pfVar50 + 0x4c) = uVar15;
              pfVar50[0x4e] = fVar60;
              dVar83 = (*(double *)(uVar22 + 0x10 + lVar27) - dVar66) + dVar83;
              dVar94 = (*(double *)(uVar22 + lVar27) - dVar65) + dVar94;
              fVar101 = (float)dVar94;
              dVar61 = (*(double *)(uVar22 + 8 + lVar27) - dVar63) + dVar61;
              fVar102 = (float)dVar61;
              fVar64 = (float)dVar83;
              puVar41 = (undefined8 *)(uVar22 + 0x28 + lVar27);
              uVar14 = *puVar41;
              uVar15 = puVar41[1];
              local_148._0_2_ = (undefined2)uVar14;
              local_148._2_2_ = (undefined2)((ulonglong)uVar14 >> 0x10);
              uVar36 = (uint)uVar14;
              fStack_144 = (float)((ulonglong)uVar14 >> 0x20);
              fStack_140 = (float)uVar15;
              uStack_13c = (undefined1)((ulonglong)uVar15 >> 0x20);
              uStack_13b = (undefined1)((ulonglong)uVar15 >> 0x28);
              uStack_13a = (undefined1)((ulonglong)uVar15 >> 0x30);
              uStack_139 = (undefined1)((ulonglong)uVar15 >> 0x38);
              fVar60 = *(float *)(uVar22 + 0x38 + lVar27);
              pfVar50[0x50] = fVar101;
              pfVar50[0x51] = fVar102;
              pfVar50[0x52] = fVar64;
              pfVar50[0x53] = 1.0;
              pfVar50[0x54] = (float)(dVar94 - (double)fVar101);
              pfVar50[0x55] = (float)(dVar61 - (double)fVar102);
              pfVar50[0x56] = (float)(dVar83 - (double)fVar64);
              pfVar50[0x57] = 0.0;
              pfVar50[0x58] = (float)local_9d8._0_4_;
              pfVar50[0x59] = fVar74;
              *(undefined8 *)(pfVar50 + 0x5a) = uVar14;
              *(undefined8 *)(pfVar50 + 0x5c) = uVar15;
              pfVar50[0x5e] = fVar60;
              pfVar50 = pfVar50 + 0x60;
              lVar27 = lVar27 + 0x58;
              uVar29 = uVar29 - 1;
              uVar72 = (undefined4)local_998;
              uVar96 = local_998._4_4_;
              uVar70 = (undefined4)local_8a8;
              uVar71 = local_8a8._4_4_;
              dVar90 = local_898;
            } while (uVar29 != 0);
            if (*(char *)((longlong)local_a10 + 0x69) == '\0') {
              FUN_14002049c(local_a10,1);
              (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,puVar25);
              FUN_14002049c(puVar35,0);
            }
            else {
              (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_a10,local_780);
            }
            auVar3 = local_9e8;
            puVar35 = local_a10;
            fVar60 = *(float *)(local_798._0_8_ + 0x4c);
            local_9e8._1_3_ = 0;
            local_9e8[0] = *(byte *)(local_798._0_8_ + 0x50);
            local_9e8._4_12_ = auVar3._4_12_;
            lVar27 = *(longlong *)(local_798._0_8_ + 0x20);
            uVar53 = 1;
            lVar28 = 0x54;
            iVar23 = 2;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uStack_9d0;
            _local_9d8 = auVar18 << 0x40;
            uVar29 = local_9f8._0_8_;
            do {
              if (((uVar29 == uVar53) ||
                  (lVar27 != *(longlong *)(local_798._0_8_ + -0x30 + lVar28 * 2))) ||
                 (local_9e8._0_4_ != (uint)*(byte *)(local_798._0_8_ + lVar28 * 2))) {
LAB_140b93f21:
                local_a20 = param_5;
                local_a28 = (int *)0x0;
                local_a30 = param_7;
                local_a38 = param_6;
                local_a48 = 0;
                local_a50 = local_698;
                local_a58 = local_9e8._0_4_;
                local_a40 = lVar27;
                local_a18 = fVar60;
                FUN_1434144d2(puVar35,&local_778,local_a00,local_9fc);
                puVar25 = local_780;
                puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar41 = puVar30 + 5;
                if ((undefined8 *)puVar35[1] < puVar41) {
                  FUN_140023dd8(puVar35,0x30);
                  puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                  puVar41 = puVar30 + 5;
                }
                *puVar35 = (ulonglong)puVar41;
                *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
                *(undefined8 **)puVar35[6] = puVar30;
                puVar35[6] = (ulonglong)(puVar30 + 1);
                puVar30[1] = 0;
                *puVar30 = &PTR_LAB_14a1fb5a8;
                *(undefined4 *)(puVar30 + 2) = 0;
                puVar30[3] = puVar25;
                *(undefined4 *)(puVar30 + 4) = 0;
                puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar41 = puVar25 + 4;
                if ((undefined8 *)puVar35[1] < puVar41) {
                  FUN_140023dd8(puVar35,0x28);
                  puVar25 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                  puVar41 = puVar25 + 4;
                }
                auVar3 = local_9e8;
                *puVar35 = (ulonglong)puVar41;
                *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
                *(undefined8 **)puVar35[6] = puVar25;
                puVar35[6] = (ulonglong)(puVar25 + 1);
                puVar25[1] = 0;
                *puVar25 = &PTR_LAB_14a1fc200;
                *(int *)(puVar25 + 2) = local_9d8._0_4_ * 6;
                *(int *)((longlong)puVar25 + 0x14) = iVar23 + local_9d8._0_4_ * -2;
                *(undefined4 *)(puVar25 + 3) = 1;
                uVar29 = local_9f8._0_8_;
                if (uVar53 < (ulonglong)local_9f8._0_8_) {
                  lVar27 = *(longlong *)(local_798._0_8_ + -0x30 + lVar28 * 2);
                  local_9e8._1_3_ = 0;
                  local_9e8[0] = *(byte *)(local_798._0_8_ + lVar28 * 2);
                  local_9e8._4_12_ = auVar3._4_12_;
                  fVar60 = *(float *)(local_798._0_8_ + -4 + lVar28 * 2);
                  local_9d8 = (undefined1  [8])(uVar53 & 0xffffffff);
                }
              }
              else {
                pfVar50 = (float *)(local_798._0_8_ + -4 + lVar28 * 2);
                if ((fVar60 != *pfVar50) || (NAN(fVar60) || NAN(*pfVar50))) goto LAB_140b93f21;
              }
              puVar30 = local_780;
              puVar25 = local_a08;
              uVar53 = uVar53 + 1;
              lVar28 = lVar28 + 0x2c;
              iVar23 = iVar23 + 2;
            } while (uVar56 + 1 != uVar53);
            puVar41 = (undefined8 *)0x0;
            if (local_780 != (undefined8 *)0x0) {
              local_780 = (undefined8 *)0x0;
              LOCK();
              puVar1 = (uint *)(puVar30 + 1);
              uVar56 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar56 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(puVar30 + 1);
                LOCK();
                uVar56 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar56 >> 0x1e & 1) == 0) {
                  bVar5 = *(byte *)((longlong)puVar30 + 0xd);
                  plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar26[1] = (longlong)puVar30;
                  plVar32 = DAT_14ca843c0;
                  plVar31 = DAT_14ca843c8;
                  if ((bVar5 & 2) == 0) {
                    do {
                      *plVar26 = (longlong)plVar32;
                      LOCK();
                      bVar57 = plVar32 != DAT_14ca843c0;
                      plVar31 = plVar26;
                      if (bVar57) {
                        plVar32 = DAT_14ca843c0;
                        plVar31 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar31;
                      UNLOCK();
                    } while (bVar57);
                  }
                  else {
                    do {
                      *plVar26 = (longlong)plVar31;
                      LOCK();
                      bVar57 = plVar31 != DAT_14ca843c8;
                      plVar32 = plVar26;
                      if (bVar57) {
                        plVar31 = DAT_14ca843c8;
                        plVar32 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar32;
                      UNLOCK();
                    } while (bVar57);
                  }
                }
              }
              puVar41 = local_780;
              if (local_780 != (undefined8 *)0x0) {
                LOCK();
                puVar1 = (uint *)(local_780 + 1);
                uVar56 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar56 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_780 + 1);
                  LOCK();
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar56 >> 0x1e & 1) == 0) {
                    bVar5 = *(byte *)((longlong)local_780 + 0xd);
                    plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar26[1] = (longlong)puVar41;
                    plVar32 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c8;
                    if ((bVar5 & 2) == 0) {
                      do {
                        *plVar26 = (longlong)plVar32;
                        LOCK();
                        bVar57 = plVar32 != DAT_14ca843c0;
                        plVar31 = plVar26;
                        if (bVar57) {
                          plVar32 = DAT_14ca843c0;
                          plVar31 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar31;
                        UNLOCK();
                      } while (bVar57);
                    }
                    else {
                      do {
                        *plVar26 = (longlong)plVar31;
                        LOCK();
                        bVar57 = plVar31 != DAT_14ca843c8;
                        plVar32 = plVar26;
                        if (bVar57) {
                          plVar31 = DAT_14ca843c8;
                          plVar32 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar32;
                        UNLOCK();
                      } while (bVar57);
                    }
                  }
                }
              }
            }
          }
        }
        if (local_798._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
      puVar35 = local_a10;
      uVar29 = CONCAT71((int7)((ulonglong)puVar41 >> 8),1);
      uVar36 = local_148;
      if (*(int *)(puVar25 + 0x2e) < 1) goto LAB_140b92e04;
      uVar56 = *(uint *)(puVar25 + 0x52);
      if (uVar56 < 0x4000000) {
        local_448 = 0;
        puStack_440 = (undefined8 *)0x0;
        local_438 = 1;
        local_434 = 0;
        uStack_42c = 0;
        local_424 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_420 = 0;
        local_41c = 0;
        local_418 = L"MeshElements";
        local_410 = 0;
        uStack_408 = 0;
        local_148._0_2_ = (undefined2)(uVar56 << 6);
        local_148._2_2_ = (undefined2)((uVar56 << 6) >> 0x10);
        fStack_144 = 0.0;
        fStack_140 = 2.29645e-41;
        if (uVar56 == 0) {
          FUN_14570b4be(local_a10,&local_448,0x4004,0);
        }
        if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
          FUN_14002049c(puVar35,1);
          local_a50 = &local_448;
          local_a58 = 8;
          (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35,&local_148);
          *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
          FUN_14002049c(puVar35,0);
          lVar27 = local_798._0_8_;
        }
        else {
          local_a50 = &local_448;
          local_a58 = 8;
          (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,local_798,puVar35,&local_148);
          *(undefined4 *)(local_798._0_8_ + 0x18) = 8;
          lVar27 = local_798._0_8_;
        }
        iVar23 = *(int *)(puVar25 + 0x52);
        cVar4 = *(char *)((longlong)puVar35 + 0x69);
        if (cVar4 == '\0') {
          FUN_14002049c(puVar35,1);
        }
        local_a50 = (longlong *)CONCAT44(local_a50._4_4_,1);
        local_a58 = iVar23 << 6;
        pvVar24 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,puVar35,lVar27,0);
        if (cVar4 == '\0') {
          FUN_14002049c(puVar35,0);
        }
        puVar41 = puVar25 + 0x30;
        if ((undefined8 *)puVar25[0x50] != (undefined8 *)0x0) {
          puVar41 = (undefined8 *)puVar25[0x50];
        }
        memcpy(pvVar24,puVar41,(longlong)*(int *)(puVar25 + 0x52) << 6);
        uVar14 = local_798._0_8_;
        if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
          FUN_14002049c(puVar35,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,uVar14);
          FUN_14002049c(puVar35,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,local_798._0_8_);
        }
        iVar23 = *(int *)(puVar25 + 0x2e);
        if (0 < iVar23) {
          puVar41 = local_a08 + 0xf;
          lVar27 = 0;
          do {
            puVar25 = (undefined8 *)local_a08[0x2d];
            if ((undefined8 *)local_a08[0x2d] == (undefined8 *)0x0) {
              puVar25 = puVar41;
            }
            uVar56 = *(uint *)(puVar25 + lVar27 * 0xf + 7);
            uVar36 = 2;
            if ((ulonglong)uVar56 < 7) {
              uVar36 = *(uint *)(&DAT_14a7feee8 + (ulonglong)uVar56 * 4);
            }
            if ((uVar36 & param_8) != 0) {
              piVar45 = (int *)(puVar25 + lVar27 * 0xf);
              local_a28 = piVar45 + 0x10;
              local_a40 = *(longlong *)(piVar45 + 10);
              local_a48 = *(undefined8 *)(piVar45 + 0xc);
              local_a20 = param_5;
              local_a30 = param_7;
              local_a38 = param_6;
              local_a50 = local_698;
              local_a18 = 0.5;
              local_a58 = uVar56;
              FUN_1434144d2(local_a10,&local_778,local_a00,local_9fc);
              if (local_420 == 1) {
                local_148 = 0;
                fStack_144 = 0.0;
                fStack_140 = 1.469368e-39;
              }
              else {
                local_148 = piVar45[8] * 2;
                fStack_144 = 2.8026e-45;
                fStack_140 = 4.59234e-41;
                if (local_148 == 0) {
                  FUN_14570b4be(local_a10,&local_448,0x8004,2);
                }
              }
              puVar35 = local_a10;
              if (*(char *)((longlong)local_a10 + 0x69) == '\0') {
                FUN_14002049c(local_a10,1);
                local_a50 = &local_448;
                local_a58 = 8;
                (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_780,puVar35,&local_148);
                *(undefined4 *)(local_780 + 3) = 8;
                FUN_14002049c(puVar35,0);
              }
              else {
                local_a50 = &local_448;
                local_a58 = 8;
                (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_780,local_a10,&local_148)
                ;
                *(undefined4 *)(local_780 + 3) = 8;
              }
              puVar25 = local_780;
              iVar23 = piVar45[8];
              cVar4 = *(char *)((longlong)puVar35 + 0x69);
              if (cVar4 == '\0') {
                FUN_14002049c(puVar35,1);
              }
              local_a58 = iVar23 * 2;
              local_a50 = (longlong *)CONCAT44(local_a50._4_4_,1);
              pvVar24 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))
                                          (DAT_14ca83900,puVar35,puVar25,0);
              if (cVar4 == '\0') {
                FUN_14002049c(puVar35,0);
              }
              _Src = piVar45 + 2;
              if (*(int **)(piVar45 + 6) != (int *)0x0) {
                _Src = *(int **)(piVar45 + 6);
              }
              memcpy(pvVar24,_Src,(longlong)piVar45[8] * 2);
              puVar25 = local_780;
              if (*(char *)((longlong)puVar35 + 0x69) == '\0') {
                FUN_14002049c(puVar35,1);
                (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,puVar25);
                FUN_14002049c(puVar35,0);
              }
              else {
                (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar35,local_780);
              }
              iVar23 = *piVar45;
              uVar14 = local_798._0_8_;
              puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
              puVar25 = puVar30 + 5;
              if ((undefined8 *)puVar35[1] < puVar25) {
                FUN_140023dd8(puVar35,0x30);
                puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar30 + 5;
              }
              puVar47 = local_780;
              *puVar35 = (ulonglong)puVar25;
              *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
              *(undefined8 **)puVar35[6] = puVar30;
              puVar35[6] = (ulonglong)(puVar30 + 1);
              puVar30[1] = 0;
              *puVar30 = &PTR_LAB_14a1fb5a8;
              *(undefined4 *)(puVar30 + 2) = 0;
              puVar30[3] = uVar14;
              *(int *)(puVar30 + 4) = iVar23 << 6;
              iVar23 = piVar45[1];
              iVar37 = *piVar45;
              iVar49 = piVar45[8];
              puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
              puVar25 = puVar30 + 6;
              if ((undefined8 *)puVar35[1] < puVar25) {
                FUN_140023dd8(puVar35,0x38);
                puVar30 = (undefined8 *)(*puVar35 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar30 + 6;
              }
              puVar33 = local_780;
              *puVar35 = (ulonglong)puVar25;
              *(int *)(puVar35 + 0xc) = (int)puVar35[0xc] + 1;
              *(undefined8 **)puVar35[6] = puVar30;
              puVar35[6] = (ulonglong)(puVar30 + 1);
              puVar30[1] = 0;
              *puVar30 = &PTR_FUN_14a1fb5b0;
              puVar30[2] = puVar47;
              puVar30[3] = 0;
              *(int *)(puVar30 + 4) = (iVar23 - iVar37) + 1;
              *(undefined4 *)((longlong)puVar30 + 0x24) = 0;
              *(int *)(puVar30 + 5) = iVar49 / 3;
              *(undefined4 *)((longlong)puVar30 + 0x2c) = 1;
              if (local_780 != (undefined8 *)0x0) {
                local_780 = (undefined8 *)0x0;
                LOCK();
                puVar1 = (uint *)(puVar33 + 1);
                uVar56 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar56 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(puVar33 + 1);
                  LOCK();
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar56 >> 0x1e & 1) == 0) {
                    bVar5 = *(byte *)((longlong)puVar33 + 0xd);
                    plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar26[1] = (longlong)puVar33;
                    plVar32 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c8;
                    if ((bVar5 & 2) == 0) {
                      do {
                        *plVar26 = (longlong)plVar32;
                        LOCK();
                        bVar57 = plVar32 != DAT_14ca843c0;
                        plVar31 = plVar26;
                        if (bVar57) {
                          plVar32 = DAT_14ca843c0;
                          plVar31 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar31;
                        UNLOCK();
                      } while (bVar57);
                    }
                    else {
                      do {
                        *plVar26 = (longlong)plVar31;
                        LOCK();
                        bVar57 = plVar31 != DAT_14ca843c8;
                        plVar32 = plVar26;
                        if (bVar57) {
                          plVar31 = DAT_14ca843c8;
                          plVar32 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar32;
                        UNLOCK();
                      } while (bVar57);
                    }
                  }
                }
                puVar25 = local_780;
                if (local_780 != (undefined8 *)0x0) {
                  LOCK();
                  puVar1 = (uint *)(local_780 + 1);
                  uVar56 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar56 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(local_780 + 1);
                    LOCK();
                    uVar56 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar56 >> 0x1e & 1) == 0) {
                      bVar5 = *(byte *)((longlong)local_780 + 0xd);
                      plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar26[1] = (longlong)puVar25;
                      plVar32 = DAT_14ca843c0;
                      plVar31 = DAT_14ca843c8;
                      if ((bVar5 & 2) == 0) {
                        do {
                          *plVar26 = (longlong)plVar32;
                          LOCK();
                          bVar57 = plVar32 != DAT_14ca843c0;
                          plVar31 = plVar26;
                          if (bVar57) {
                            plVar32 = DAT_14ca843c0;
                            plVar31 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar31;
                          UNLOCK();
                        } while (bVar57);
                      }
                      else {
                        do {
                          *plVar26 = (longlong)plVar31;
                          LOCK();
                          bVar57 = plVar31 != DAT_14ca843c8;
                          plVar32 = plVar26;
                          if (bVar57) {
                            plVar31 = DAT_14ca843c8;
                            plVar32 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar32;
                          UNLOCK();
                        } while (bVar57);
                      }
                    }
                  }
                }
              }
              iVar23 = *(int *)(local_a08 + 0x2e);
            }
            lVar27 = lVar27 + 1;
          } while (lVar27 < iVar23);
        }
        uVar14 = local_798._0_8_;
        lVar27 = 0;
        uVar36 = local_148;
        if (local_798._0_8_ != 0) {
          auVar17._8_8_ = 0;
          auVar17._0_8_ = local_798._8_8_;
          local_798 = auVar17 << 0x40;
          LOCK();
          puVar1 = (uint *)(uVar14 + 8);
          uVar56 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar56 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(uVar14 + 8);
            LOCK();
            uVar56 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar56 >> 0x1e & 1) == 0) {
              bVar5 = *(byte *)(uVar14 + 0xd);
              plVar26 = (longlong *)FUN_14001cc68(0x10,8);
              plVar26[1] = uVar14;
              plVar32 = DAT_14ca843c0;
              plVar31 = DAT_14ca843c8;
              if ((bVar5 & 2) == 0) {
                do {
                  *plVar26 = (longlong)plVar32;
                  LOCK();
                  bVar57 = plVar32 != DAT_14ca843c0;
                  plVar31 = plVar26;
                  if (bVar57) {
                    plVar32 = DAT_14ca843c0;
                    plVar31 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar31;
                  UNLOCK();
                } while (bVar57);
              }
              else {
                do {
                  *plVar26 = (longlong)plVar31;
                  LOCK();
                  bVar57 = plVar31 != DAT_14ca843c8;
                  plVar32 = plVar26;
                  if (bVar57) {
                    plVar31 = DAT_14ca843c8;
                    plVar32 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar32;
                  UNLOCK();
                } while (bVar57);
              }
            }
          }
          lVar27 = local_798._0_8_;
          uVar36 = local_148;
          if (local_798._0_8_ != 0) {
            LOCK();
            puVar1 = (uint *)(local_798._0_8_ + 8);
            uVar56 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar56 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_798._0_8_ + 8);
              LOCK();
              uVar56 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar56 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(local_798._0_8_ + 0xd);
                plVar26 = (longlong *)FUN_14001cc68(0x10,8);
                plVar26[1] = lVar27;
                plVar32 = DAT_14ca843c0;
                plVar31 = DAT_14ca843c8;
                uVar36 = local_148;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar26 = (longlong)plVar32;
                    LOCK();
                    bVar57 = plVar32 != DAT_14ca843c0;
                    plVar31 = plVar26;
                    if (bVar57) {
                      plVar32 = DAT_14ca843c0;
                      plVar31 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar31;
                    UNLOCK();
                  } while (bVar57);
                }
                else {
                  do {
                    *plVar26 = (longlong)plVar31;
                    LOCK();
                    bVar57 = plVar31 != DAT_14ca843c8;
                    plVar32 = plVar26;
                    if (bVar57) {
                      plVar31 = DAT_14ca843c8;
                      plVar32 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar32;
                    UNLOCK();
                  } while (bVar57);
                }
              }
            }
          }
        }
        uVar29 = CONCAT71((int7)((ulonglong)lVar27 >> 8),1);
        goto LAB_140b92e04;
      }
    }
  }
  else if (DAT_14c8442b8 == 0) goto LAB_140b8e7b3;
LAB_140b92637:
  uVar29 = 0;
LAB_140b92e04:
  if ((local_f0 ^ (ulonglong)auStack_a78) != DAT_14c707940) {
    local_148 = uVar36;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar29 & 0xffffffff;
code_r0x000140b930b1:
  for (; lVar27 != 0; lVar27 = lVar27 + -1) {
    *puVar46 = *puVar41;
    puVar41 = puVar41 + 1;
    puVar46 = puVar46 + 1;
  }
  puVar41 = puVar48;
  puVar42 = puVar30;
  for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
    *puVar42 = *puVar41;
    puVar41 = puVar41 + 1;
    puVar42 = puVar42 + 1;
  }
  puVar41 = (undefined8 *)&local_148;
  puVar42 = puVar48;
  for (lVar27 = 0xb; lVar27 != 0; lVar27 = lVar27 + -1) {
    *puVar42 = *puVar41;
    puVar41 = puVar41 + 1;
    puVar42 = puVar42 + 1;
  }
  iVar23 = iVar23 + -1;
  puVar43 = puVar43 + -0x16;
  if ((longlong)puVar43 - (longlong)puVar30 < (longlong)puVar47 - (longlong)puVar33) {
    if (puVar33 < puVar47) {
      *plVar32 = (longlong)puVar33;
      plVar32[1] = (longlong)puVar47;
      *(int *)(plVar32 + 2) = iVar23;
      plVar32 = plVar32 + 3;
    }
    if (puVar48 <= puVar30 + 0xb) goto LAB_140b9350e;
  }
  else {
    if (puVar30 + 0xb < puVar48) {
      *plVar32 = (longlong)puVar30;
      plVar32[1] = (longlong)puVar43;
      *(int *)(plVar32 + 2) = iVar23;
      plVar32 = plVar32 + 3;
    }
    puVar43 = puVar47;
    puVar30 = puVar33;
    if (puVar47 <= puVar33) goto LAB_140b9350e;
  }
  iVar37 = (int)((ulonglong)((longlong)puVar43 - (longlong)puVar30) >> 3) * -0x45d1745d;
  uVar56 = iVar37 + 1;
  puVar47 = puVar43;
  if (iVar23 == 0) goto LAB_140b93154;
  goto LAB_140b92f53;
}



// FUNCTION 140b94344 FUN_140b94344 body=31 status=ok
// SIG undefined FUN_140b94344(void)

undefined8 FUN_140b94344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b94364 FUN_140b94364 body=653 status=ok
// SIG undefined FUN_140b94364(void)

void FUN_140b94364(longlong *param_1,longlong param_2,longlong param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  undefined1 local_110 [4];
  undefined1 local_10c;
  code *local_108 [4];
  double local_e8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
  if ((lVar1 != 0) && (2 < *(byte *)((longlong)param_1 + 0x10c))) {
    *param_4 = (float)((double)*(float *)(lVar1 + 0x20) + *(double *)(param_3 + 0x10));
    if (*(char *)((longlong)param_1 + 0x10c) == '\x03') {
      fVar2 = (float)(*(double *)(param_3 + 0x10) - (double)*(float *)(lVar1 + 0x20));
      local_108[0] = (code *)CONCAT44(local_108[0]._4_4_,fVar2);
      (**(code **)(*param_1 + 0xd8))(param_1,local_108);
      if ((local_108[0]._0_4_ != fVar2) || (NAN(local_108[0]._0_4_) || NAN(fVar2))) {
        fVar2 = *param_4;
        if (local_108[0]._0_4_ <= *param_4) {
          fVar2 = local_108[0]._0_4_;
        }
        *param_4 = fVar2;
      }
    }
LAB_140b9449e:
    if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_130 = local_108;
      local_108[0] = FUN_141030f22;
      local_120 = FUN_14081d0ea;
      local_128 = FUN_142b4754c;
      local_138 = &LAB_1483e40eb;
      local_140 = &LAB_146486986;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x10000005;
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,8);
      local_168 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      if (*(longlong *)(lVar1 + 0x3a8) != 0) {
        local_160 = local_110;
        local_10c = 0;
        local_168 = 0x13;
        FUN_140b9461a(param_1,local_108,*(longlong *)(lVar1 + 0x3a8),param_3);
        if ((local_48 == '\0') &&
           (fVar2 = ((float)local_e8 - (float)local_d0) * *(float *)((longlong)param_1 + 0x104) +
                    (float)local_d0,
           fVar2 = (*(float *)(param_1 + 0x21) - fVar2) * *(float *)((longlong)param_1 + 0x104) +
                   fVar2, *param_4 <= fVar2 && fVar2 != *param_4)) {
          *param_4 = fVar2;
          param_1[0xe] = local_b8;
          *(undefined4 *)(param_1 + 0xc) = local_c8;
          *(undefined4 *)((longlong)param_1 + 100) = uStack_c4;
          *(undefined4 *)(param_1 + 0xd) = uStack_c0;
          *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_bc;
        }
      }
      goto LAB_140b9449e;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_188);
}



// FUNCTION 140b9461a FUN_140b9461a body=2187 status=ok
// SIG undefined FUN_140b9461a(void)

undefined8 *
FUN_140b9461a(longlong param_1,undefined8 *param_2,longlong *param_3,double *param_4,uint param_5,
             undefined8 param_6)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  double local_228;
  undefined8 uStack_220;
  double local_218 [3];
  undefined1 local_200 [24];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8 [23];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  *(undefined4 *)param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[4] = DAT_14c8464f0;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[2] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[3] = uVar6;
  param_2[7] = DAT_14c8464f0;
  uVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[6] = uVar6;
  param_2[10] = DAT_14c8462d0;
  dVar15 = DAT_14c8462c8;
  param_2[8] = DAT_14c8462c0;
  param_2[9] = dVar15;
  dVar15 = DAT_14c8462c8;
  param_2[0xb] = DAT_14c8462c0;
  param_2[0xc] = dVar15;
  param_2[0xd] = DAT_14c8462d0;
  param_2[0xe] = 0;
  param_2[0xf] = 0x3f80000000000000;
  param_2[0x10] = 0;
  dVar15 = DAT_14c8462c8;
  param_2[0x11] = DAT_14c8462c0;
  param_2[0x12] = dVar15;
  param_2[0x13] = DAT_14c8462d0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar19 = (undefined4)DAT_14c8464e8;
  uVar18 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0x15) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xac) = uVar18;
  *(undefined4 *)(param_2 + 0x16) = uVar19;
  *(undefined4 *)((longlong)param_2 + 0xb4) = uVar7;
  param_2[0x17] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  if (param_3 == (longlong *)0x0) goto LAB_140b94afa;
  local_238 = param_6;
  (**(code **)(*param_3 + 0xa80))(param_3,&local_1b8,param_4,param_5);
  *(undefined4 *)param_2 = (undefined4)local_1b8;
  if (&local_1b8 != param_2) {
    if ((local_1b0 & 1) == 0) {
      if (*(char *)(param_2 + 1) != '\x01') goto LAB_140b947cc;
      uVar9 = 0;
    }
    else {
      *(undefined4 *)((longlong)param_2 + 4) = local_1b8._4_4_;
      uVar9 = 1;
    }
    *(undefined1 *)(param_2 + 1) = uVar9;
  }
LAB_140b947cc:
  memcpy(param_2 + 2,local_1a8,0xb1);
  dVar15 = DAT_14c8464f0;
  dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar10 = FUN_140b94ea6(param_3);
  uStack_220 = 0;
  dVar4 = dVar15;
  dVar2 = dVar16;
  local_228 = dVar3;
  if (lVar10 != 0) {
    cVar8 = *(char *)(param_2 + 1);
    if (cVar8 == '\0') {
      uVar11 = FUN_1408b98e8(param_3,param_4);
      cVar8 = '\x01';
    }
    else {
      uVar11 = (ulonglong)*(uint *)((longlong)param_2 + 4);
    }
    if (cVar8 == '\0') {
      uVar11 = 0;
    }
    FUN_140703b8c(lVar10,&local_1d0,uVar11,1);
    FUN_1407541d8(lVar10,&local_1e8,uVar11,1);
    FUN_14099e1de(lVar10,&local_1b8,uVar11,1);
    FUN_1448052ee(&local_1b8,local_200);
    local_1b8 = 0x3ff0000000000000;
    local_1b0 = 0x3ff0000000000000;
    local_1a8[0] = 0x3ff0000000000000;
    FUN_140703ce0(lVar10 + 0x650,local_218,uVar11,&local_1b8);
    dVar4 = param_4[2] - local_1c0;
    dVar3 = param_4[1] - local_1c8;
    dVar2 = *param_4 - local_1d0;
    dVar15 = local_1e8 * local_1e8 + local_1e0 * local_1e0;
    if ((dVar15 != 1.0) || (NAN(dVar15))) {
      if (9.99999993922529e-09 <= dVar15) {
        uVar18 = 0;
        uVar19 = 0;
        dVar13 = local_1e0 * (1.0 / SQRT(dVar15));
        dVar15 = local_1e8 * (1.0 / SQRT(dVar15));
      }
      else {
        uVar18 = SUB84(DAT_14c8464f0,0);
        uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar13 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      }
    }
    else {
      uVar5 = -(ulonglong)(local_1d8 == 0.0) & (ulonglong)local_1d8;
      uVar18 = (undefined4)uVar5;
      uVar19 = (undefined4)(uVar5 >> 0x20);
      dVar13 = local_1e0;
      dVar15 = local_1e8;
    }
    iVar1 = *(int *)(lVar10 + 0x628);
    fVar20 = (float)((dVar15 * DAT_14c8462c8 - DAT_14c8462c0 * dVar13) * dVar4 +
                    (DAT_14c8462d0 * dVar13 - DAT_14c8462c8 * (double)CONCAT44(uVar19,uVar18)) *
                    dVar2 + (DAT_14c8462c0 * (double)CONCAT44(uVar19,uVar18) -
                            DAT_14c8462d0 * dVar15) * dVar3);
    cVar8 = (**(code **)(*param_3 + 0xa40))(param_3);
    if (cVar8 == '\0') {
      fVar21 = 0.0;
      if (((float)uVar11 <= 0.0) || ((float)(iVar1 + -1) <= (float)uVar11)) {
        fVar21 = ABS((float)((double)CONCAT44(uVar19,uVar18) * dVar4 +
                            dVar15 * dVar2 + dVar13 * dVar3));
      }
      fVar12 = 0.0;
      if (0.0 <= ABS(fVar20) - (float)local_218[0]) {
        fVar12 = ABS(fVar20) - (float)local_218[0];
      }
      fVar21 = SQRT(fVar12 * fVar12 + fVar21 * fVar21);
    }
    else {
      cVar8 = (**(code **)(*param_3 + 0xa40))(param_3);
      fVar21 = 0.0;
      if (cVar8 == '\x01') {
        fVar21 = ABS(fVar20);
      }
      fVar21 = (float)(-(uint)(0.0 < fVar20) & (uint)fVar21);
    }
    lVar10 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
    if (lVar10 == 0) {
      fVar20 = 0.0;
    }
    else {
      lVar10 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
      fVar20 = *(float *)(lVar10 + 0x44);
    }
    dVar15 = dVar2 * dVar2 + dVar3 * dVar3;
    if ((dVar15 != 1.0) || (NAN(dVar15))) {
      if (dVar15 < 9.99999993922529e-09) {
        dVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        uVar18 = SUB84(DAT_14c8464f0,0);
        uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        dVar3 = dVar3 * (1.0 / SQRT(dVar15));
        dVar2 = dVar2 * (1.0 / SQRT(dVar15));
        uVar18 = 0;
        uVar19 = 0;
      }
    }
    else {
      uVar11 = -(ulonglong)(dVar4 == 0.0) & (ulonglong)dVar4;
      uVar18 = (undefined4)uVar11;
      uVar19 = (undefined4)(uVar11 >> 0x20);
    }
    dVar15 = (double)(-fVar21 * fVar21 * fVar20);
    dVar13 = (double)((fVar20 + fVar20) * fVar21);
    dVar4 = (double)CONCAT44(uVar19,uVar18) * dVar13;
    dVar3 = dVar3 * dVar13;
    dVar2 = dVar2 * dVar13;
  }
  if (((9.999999747378752e-05 < ABS(dVar16)) || (9.999999747378752e-05 < ABS(local_228))) ||
     (9.999999747378752e-05 < ABS(dVar15))) {
    if ((param_5 & 1) != 0) {
      param_2[5] = (double)param_2[5] + dVar16;
      param_2[6] = (double)param_2[6] + local_228;
      param_2[7] = (double)param_2[7] + dVar15;
      param_2[2] = dVar16 + (double)param_2[2];
      param_2[3] = local_228 + (double)param_2[3];
      param_2[4] = (double)param_2[4] + dVar15;
    }
    if ((param_5 & 2) != 0) {
      dVar14 = (double)param_2[10] + dVar4;
      dVar13 = (double)param_2[9] + dVar3;
      dVar16 = (double)param_2[8] + dVar2;
      dVar17 = dVar14 * dVar14 + dVar16 * dVar16 + dVar13 * dVar13;
      if ((dVar17 != 1.0) || (NAN(dVar17))) {
        if (9.99999993922529e-09 <= dVar17) {
          dVar17 = 1.0 / SQRT(dVar17);
          dVar14 = dVar14 * dVar17;
          dVar13 = dVar13 * dVar17;
          dVar16 = dVar16 * dVar17;
        }
        else {
          dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar13 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar14 = DAT_14c8464f0;
        }
      }
      param_2[8] = dVar16;
      param_2[9] = dVar13;
      param_2[10] = dVar14;
      dVar4 = dVar4 + (double)param_2[0xd];
      dVar3 = dVar3 + (double)param_2[0xc];
      dVar2 = dVar2 + (double)param_2[0xb];
      dVar16 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
      if ((dVar16 != 1.0) || (NAN(dVar16))) {
        if (9.99999993922529e-09 <= dVar16) {
          dVar16 = 1.0 / SQRT(dVar16);
          dVar4 = dVar4 * dVar16;
          dVar3 = dVar3 * dVar16;
          dVar2 = dVar2 * dVar16;
        }
        else {
          dVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar3 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar4 = DAT_14c8464f0;
        }
      }
      param_2[0xb] = dVar2;
      param_2[0xc] = dVar3;
      param_2[0xd] = dVar4;
    }
    if ((param_5 & 0x10) != 0) {
      *(float *)(param_2 + 0x14) = (float)((double)*(float *)(param_2 + 0x14) + dVar15);
    }
    if ((param_5 & 0x108) != 0) {
      *(float *)(param_2 + 0xe) = (float)((double)*(float *)(param_2 + 0xe) + dVar15);
      *(float *)((longlong)param_2 + 0x74) =
           (float)((double)*(float *)((longlong)param_2 + 0x74) + dVar15);
    }
  }
LAB_140b94afa:
  if ((local_f0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b94ea6 FUN_140b94ea6 body=289 status=ok
// SIG undefined FUN_140b94ea6(void)

undefined8 FUN_140b94ea6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_1483e40eb;
      local_40 = &LAB_146486986;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x398);
      goto LAB_140b94f03;
    }
  }
  uVar2 = 0;
LAB_140b94f03:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b94fc8 FUN_140b94fc8 body=73 status=ok
// SIG undefined FUN_140b94fc8(void)

longlong FUN_140b94fc8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_140b95084(param_2);
  iVar2 = FUN_140b95012((longlong *)(param_1 + 0x28),uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x58 + *(longlong *)(param_1 + 0x28);
  }
  lVar3 = lVar4 + 0x18;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140b95012 FUN_140b95012 body=114 status=ok
// SIG undefined FUN_140b95012(void)

int FUN_140b95012(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
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
        lVar5 = (longlong)iVar2 * 0x58;
        if ((((*(longlong *)(lVar3 + lVar5) == *param_3) &&
             (lVar1 = lVar3 + lVar5, *(longlong *)(lVar1 + 8) == param_3[1])) &&
            (*(int *)(lVar1 + 0x10) == (int)param_3[2])) &&
           (*(char *)(lVar1 + 0x14) == *(char *)((longlong)param_3 + 0x14))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x50 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 140b95084 FUN_140b95084 body=516 status=ok
// SIG undefined FUN_140b95084(void)

uint FUN_140b95084(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 2);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar5 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar5 >> 4);
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  uVar7 = uVar5 >> 0xd ^
          (((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) - uVar5;
  uVar6 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
  uVar8 = uVar6 >> 0xd ^ (uVar5 - uVar7) - uVar6;
  uVar7 = uVar8 >> 0xc ^ (uVar7 - uVar6) - uVar8;
  uVar5 = uVar7 << 0x10 ^ (uVar6 - uVar8) - uVar7;
  uVar6 = uVar5 >> 5 ^ (uVar8 - uVar7) - uVar5;
  uVar8 = uVar6 >> 3 ^ (uVar7 - uVar5) - uVar6;
  uVar7 = uVar8 << 10 ^ (uVar5 - uVar6) - uVar8;
  uVar5 = uVar3 >> 0xd ^ (uVar7 >> 0xf ^ uVar6 - (uVar8 + uVar7)) - uVar3;
  uVar7 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
  uVar6 = uVar7 >> 0xd ^ (uVar3 - uVar5) - uVar7;
  uVar3 = uVar6 >> 0xc ^ (uVar5 - uVar7) - uVar6;
  uVar5 = uVar3 << 0x10 ^ (uVar7 - uVar6) - uVar3;
  uVar7 = uVar5 >> 5 ^ (uVar6 - uVar3) - uVar5;
  uVar6 = uVar7 >> 3 ^ (uVar3 - uVar5) - uVar7;
  uVar3 = uVar6 << 10 ^ (uVar5 - uVar7) - uVar6;
  uVar3 = uVar3 >> 0xf ^ uVar7 - (uVar6 + uVar3);
  iVar4 = uVar3 - *(byte *)((longlong)param_1 + 0x14);
  uVar5 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar7 = uVar5 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 0x14) - iVar4) - uVar5;
  uVar3 = uVar7 >> 0xc ^ (iVar4 - uVar5) - uVar7;
  uVar6 = uVar3 << 0x10 ^ (uVar5 - uVar7) - uVar3;
  uVar5 = uVar6 >> 5 ^ (uVar7 - uVar3) - uVar6;
  uVar7 = uVar5 >> 3 ^ (uVar3 - uVar6) - uVar5;
  uVar3 = uVar7 << 10 ^ (uVar6 - uVar5) - uVar7;
  return uVar3 >> 0xf ^ uVar5 - (uVar7 + uVar3);
}



// FUNCTION 140b952ca FUN_140b952ca body=57 status=ok
// SIG undefined FUN_140b952ca(void)

undefined8
FUN_140b952ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140b95304(param_1,param_2,param_4,0);
  if (lVar1 != 0) {
    uVar2 = FUN_140b95694(param_1,lVar1,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140b95304 FUN_140b95304 body=911 status=ok
// SIG undefined FUN_140b95304(void)

undefined8 *
FUN_140b95304(longlong *param_1,ulonglong param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [44];
  int local_4c;
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
      ((*(byte *)(param_2 + 0x65) & 2) == 0)) &&
     ((param_3 == (longlong *)0x0 || (param_3[0x108] == 0)))) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar11 = *(int *)((longlong)plVar6 +
                       (ulonglong)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar11 != -1) {
        do {
          puVar8 = (undefined8 *)(*param_1 + (longlong)iVar11 * 0x18);
          if (*(ulonglong *)*puVar8 == param_2) {
            if (puVar8 != (undefined8 *)0x0) {
              if (param_4 == (undefined1 *)0x0) goto LAB_140b95605;
              uVar3 = 0;
              goto LAB_140b955ff;
            }
            break;
          }
          iVar11 = *(int *)(puVar8 + 2);
        } while (iVar11 != -1);
      }
    }
    if ((param_3 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*param_3 + 0x440))(param_3,param_2), cVar2 != '\0')) {
      puVar7 = (ulonglong *)FUN_14001cc68(0xd8,0x10);
      *puVar7 = param_2;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      uVar4 = *(uint *)(param_2 + 0xc);
      *(uint *)(puVar7 + 1) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar11 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar11 = iVar10;
        }
      }
      *(int *)((longlong)puVar7 + 0xc) = iVar11;
      puVar7[10] = 0;
      *(undefined4 *)(puVar7 + 0xb) = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x5c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar7 + 100) = 0;
      puVar7[0xe] = 0;
      *(undefined4 *)(puVar7 + 0xf) = 0;
      puVar7[0x14] = 0;
      *(undefined4 *)(puVar7 + 0x15) = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      *(undefined8 *)((longlong)puVar7 + 0xac) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar7 + 0xb4) = 0;
      puVar7[0x18] = 0;
      *(undefined4 *)(puVar7 + 0x19) = 0;
      *(byte *)(puVar7 + 0x1a) = (byte)puVar7[0x1a] & 0xe0;
      *(undefined4 *)((longlong)puVar7 + 0xd4) = 0;
      FUN_140ae3470(param_1,local_48);
      *local_40 = puVar7;
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar8[1] = &DAT_100000001;
      *puVar8 = &PTR_FUN_14a9eeeb0;
      puVar8[2] = puVar7;
      local_40[1] = puVar8;
      *(undefined4 *)(local_40 + 2) = 0xffffffff;
      local_4c = local_48[0];
      uVar4 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar4 >> 0x10 ^ uVar4;
      cVar2 = FUN_140ae33b4(param_1,uVar4,local_40,&local_4c);
      lVar12 = (longlong)local_4c;
      if (cVar2 == '\0') {
        uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        if (uVar5 < 4) {
          iVar11 = 1;
        }
        else {
          uVar9 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar1 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar11 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((int)uVar5 < 1) || (iVar11 <= (int)param_1[9])) {
          uVar4 = (int)param_1[9] - 1U & uVar4;
          *(uint *)((longlong)local_40 + 0x14) = uVar4;
          plVar6 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar6 = param_1 + 7;
          }
          *(undefined4 *)(local_40 + 2) =
               *(undefined4 *)
                ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
          plVar6 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar6 = param_1 + 7;
          }
          *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
               local_4c;
        }
        else {
          *(int *)(param_1 + 9) = iVar11;
          FUN_140ae3646(param_1);
        }
      }
      puVar8 = (undefined8 *)(lVar12 * 0x18 + *param_1);
      FUN_140ae3264(param_1 + 10,local_48,puVar8);
      uVar3 = 1;
      if (param_4 != (undefined1 *)0x0) {
LAB_140b955ff:
        *param_4 = uVar3;
      }
      goto LAB_140b95605;
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_140b95605:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 140b95694 FUN_140b95694 body=3121 status=ok
// SIG undefined FUN_140b95694(void)

bool FUN_140b95694(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  uint *puVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  uint local_84;
  int local_80;
  uint local_7c;
  uint *local_78;
  longlong local_70;
  ulonglong local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar17 = (longlong *)*param_2;
  lVar2 = *plVar17;
  if (DAT_14cae8b20 == 0) {
    local_a0 = &local_50;
    local_50 = (code *)&LAB_14355090c;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_147b8e16d;
    local_b0 = (code *)&LAB_140810a38;
    local_b8 = L"Engine";
    local_c0 = 0x800000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar4 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_a0 = &local_50;
    local_50 = FUN_1449e2820;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_1468c5283;
    local_b0 = FUN_142809da0;
    local_b8 = L"Engine";
    local_c0 = 0x400000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar13 = *(longlong *)(lVar2 + 0x20);
  if (lVar13 == 0) {
    lVar19 = 0;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < iVar3) ||
         (lVar19 = lVar13,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
         lVar4 + 0x30)) {
        lVar19 = 0;
      }
    } while ((lVar19 == 0) && (lVar13 = *(longlong *)(lVar13 + 0x20), lVar13 != 0));
  }
LAB_140b9586a:
  lVar13 = lVar19;
  lVar4 = lVar13;
  if (*(longlong *)(lVar13 + 0x20) != 0) goto code_r0x000140b95879;
  goto LAB_140b9588c;
code_r0x000140b95879:
  lVar19 = *(longlong *)(lVar13 + 0x20);
  if ((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) goto LAB_140b9586a;
  lVar4 = FUN_142840154(lVar13);
LAB_140b9588c:
  if (lVar4 == 0) {
    lVar19 = *(longlong *)(lVar13 + 0x20);
    goto LAB_140b9586a;
  }
  local_50 = *(code **)(lVar4 + 0x18);
  iVar3 = FUN_14021c410(param_1 + 0xa0,lVar2);
  if (((iVar3 != 0) && (FUN_140ae3264(param_1 + 0x50,&local_58,param_2), DAT_14caf2744 == '\x01'))
     && (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4))) {
    uVar8 = (uint)((ulonglong)local_50 >> 0x10);
    uVar14 = (uint)local_50 & 0xffff;
    lVar4 = param_1 + 0x1c8;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1d8) - 1U &
                             (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar14)
                             + (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 400);
      do {
        lVar13 = lVar4 + (longlong)iVar3 * 0x60;
        if (*(code **)(lVar4 + (longlong)iVar3 * 0x60) == local_50) {
          if (lVar13 + 8 != 0 && lVar13 != 0) {
            FUN_14021c410(lVar13 + 8,lVar2);
            if (*(int *)(lVar13 + 0x10) == *(int *)(lVar13 + 0x3c)) {
              FUN_147be0eb0((longlong *)(param_1 + 400),local_50);
            }
            puVar22 = (uint *)(plVar17 + 8);
            iVar3 = (int)plVar17[0xb];
            if (iVar3 == 0) {
              uVar16 = 1;
              uVar7 = 0;
              iVar15 = 0;
              iVar23 = 0;
              goto LAB_140b95a30;
            }
            puVar11 = (uint *)plVar17[10];
            if ((uint *)plVar17[10] == (uint *)0x0) {
              puVar11 = puVar22;
            }
            uVar8 = *puVar11;
            if (uVar8 != 0) {
              uVar7 = 0;
              iVar15 = 0;
              goto LAB_140b959fd;
            }
            iVar15 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar15 = iVar3 + -1;
            }
            uVar7 = 0;
            uVar16 = (ulonglong)(uint)(iVar15 >> 5);
            if (iVar15 >> 5 < 1) {
              uVar16 = uVar7;
            }
            iVar15 = 0;
            goto LAB_140b959e3;
          }
          break;
        }
        iVar3 = *(int *)(lVar13 + 0x58);
      } while (iVar3 != -1);
    }
  }
  goto LAB_140b95d75;
  while (iVar15 = *(int *)(lVar4 + 0x58), iVar15 != -1) {
LAB_140b960ef:
    lVar4 = *plVar17 + (longlong)iVar15 * 0x60;
    if (*(code **)(*plVar17 + (longlong)iVar15 * 0x60) == local_50) {
      if (lVar4 + 8 != 0 && lVar4 != 0) {
        FUN_14021c410(lVar4 + 8,lVar2);
        if (*(int *)(lVar4 + 0x10) == *(int *)(lVar4 + 0x3c)) {
          FUN_147be0eb0(plVar17,local_50);
        }
      }
      break;
    }
  }
  goto LAB_140b96162;
  while( true ) {
    iVar15 = iVar15 + 0x20;
    uVar8 = puVar11[uVar7 + 1];
    uVar7 = uVar7 + 1;
    if (uVar8 != 0) break;
LAB_140b959e3:
    if (uVar16 == uVar7) goto LAB_140b95d75;
  }
LAB_140b959fd:
  uVar16 = (ulonglong)(-uVar8 & uVar8);
  uVar1 = uVar16 * 2 + 1;
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar23 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
  if (iVar3 <= iVar23) {
    iVar23 = iVar3;
  }
LAB_140b95a30:
  if (iVar23 < iVar3) {
    local_70 = param_1 + 0x1e0;
    uVar8 = 0xffffffff;
    local_78 = puVar22;
    do {
      iVar3 = *(int *)(plVar17[6] + 4 + (longlong)iVar23 * 0x10);
      uVar12 = 0;
      uVar14 = 0;
      local_80 = iVar15;
      local_7c = uVar8;
      local_68 = uVar7;
      if (iVar3 == 0) {
LAB_140b95b63:
        local_58 = CONCAT44(uVar14,uVar12);
      }
      else {
        uVar8 = *(uint *)(plVar17[6] + (longlong)iVar23 * 0x10);
        uVar12 = 0;
        uVar14 = 0;
        if ((int)uVar8 < 0) goto LAB_140b95b63;
        uVar12 = 0;
        uVar14 = 0;
        if (DAT_14c9647dc <= (int)uVar8) goto LAB_140b95b63;
        uVar12 = 0;
        plVar21 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        uVar14 = 0;
        if (plVar21 == (longlong *)0x0) goto LAB_140b95b63;
        uVar12 = 0;
        uVar14 = 0;
        if ((int)plVar21[2] != iVar3) goto LAB_140b95b63;
        uVar12 = 0;
        uVar14 = 0;
        if ((*(uint *)(plVar21 + 1) & 0x10200000) != 0) goto LAB_140b95b63;
        local_58 = 0;
        uVar12 = 0;
        uVar14 = 0;
        if (*plVar21 != 0) {
          uVar12 = *(uint *)(*plVar21 + 0xc);
          if ((int)uVar12 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          puVar22 = local_78;
          uVar14 = *(uint *)(lVar4 + 0x10);
          if (*(uint *)(lVar4 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar24) {
              local_84 = uVar8;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
              uVar8 = local_84;
            }
            LOCK();
            uVar14 = *(uint *)(lVar4 + 0x10);
            bVar24 = uVar14 == 0;
            if (bVar24) {
              *(uint *)(lVar4 + 0x10) = uVar8;
              uVar14 = 0;
            }
            UNLOCK();
            puVar22 = local_78;
            if (bVar24) {
              uVar14 = uVar8;
            }
          }
          goto LAB_140b95b63;
        }
      }
      uVar8 = uVar14 >> 0xd ^ uVar12 - uVar14;
      uVar12 = uVar8 << 8 ^ (-0x61c88647 - uVar14) - uVar8;
      uVar18 = uVar12 >> 0xd ^ (uVar14 - uVar8) - uVar12;
      uVar8 = uVar18 >> 0xc ^ (uVar8 - uVar12) - uVar18;
      uVar14 = uVar8 << 0x10 ^ (uVar12 - uVar18) - uVar8;
      uVar18 = uVar14 >> 5 ^ (uVar18 - uVar8) - uVar14;
      uVar12 = uVar18 >> 3 ^ (uVar8 - uVar14) - uVar18;
      uVar8 = uVar12 << 10 ^ (uVar14 - uVar18) - uVar12;
      uVar5 = FUN_147be1064(local_70,uVar8 >> 0xf ^ uVar18 - (uVar12 + uVar8),&local_58);
      uVar8 = (uint)((ulonglong)local_50 >> 0x10);
      uVar14 = (uint)local_50 & 0xffff;
      uVar5 = FUN_147be1880(uVar5,((uint)local_50 << 0x10 | uVar14) +
                                  (int)((ulonglong)local_50 >> 0x20) +
                                  (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar14 >> 4),&local_50);
      FUN_140ae3264(uVar5,&local_58,param_2);
      uVar8 = local_7c & ~(uint)uVar16;
      puVar11 = (uint *)plVar17[10];
      if ((uint *)plVar17[10] == (uint *)0x0) {
        puVar11 = puVar22;
      }
      iVar3 = (int)plVar17[0xb];
      iVar23 = (int)local_68;
      lVar4 = (longlong)iVar23;
      uVar14 = puVar11[lVar4] & uVar8;
      uVar7 = local_68;
      iVar15 = local_80;
      if (uVar14 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar23) {
          iVar10 = iVar23;
        }
        if (iVar9 <= iVar23) break;
        lVar13 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar14 = puVar11[lVar4 + lVar13 + 1];
          if (uVar14 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar4 == lVar13) goto LAB_140b95d75;
        }
        uVar8 = 0xffffffff;
        uVar7 = (ulonglong)(iVar23 + (int)lVar13 + 1);
      }
      uVar16 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar16 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar23 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar23 < iVar3);
  }
LAB_140b95d75:
  if (param_3 == 0) {
    local_58._0_4_ = 0;
    iVar3 = 0;
    uVar8 = (uint)local_58;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0xc);
    local_58 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar24 = iVar3 == 0;
      if (bVar24) {
        *(int *)(lVar4 + 0x10) = iVar15;
        iVar3 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_58;
      if (bVar24) {
        iVar3 = iVar15;
      }
    }
  }
  local_58._0_4_ = uVar8;
  local_58 = CONCAT44(iVar3,(uint)local_58);
  iVar3 = FUN_14096bce2(plVar17 + 6);
  if (0 < iVar3) {
    if (param_3 == 0) {
      local_58._0_4_ = 0;
      iVar15 = 0;
      uVar8 = (uint)local_58;
    }
    else {
      uVar8 = *(uint *)(param_3 + 0xc);
      local_58 = (ulonglong)uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar15 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar15 = *(int *)(lVar4 + 0x10);
        bVar24 = iVar15 == 0;
        if (bVar24) {
          *(int *)(lVar4 + 0x10) = iVar23;
          iVar15 = 0;
        }
        UNLOCK();
        uVar8 = (uint)local_58;
        if (bVar24) {
          iVar15 = iVar23;
        }
      }
    }
    local_58._0_4_ = uVar8;
    local_58 = CONCAT44(iVar15,(uint)local_58);
    FUN_140f0f33c(plVar17 + 0x10,local_5c,&local_58);
    if (param_3 == 0) {
      local_58._0_4_ = 0;
      uVar8 = 0;
      uVar14 = (uint)local_58;
    }
    else {
      uVar14 = *(uint *)(param_3 + 0xc);
      local_58 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar8 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        uVar12 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar12);
        }
        LOCK();
        uVar8 = *(uint *)(lVar4 + 0x10);
        bVar24 = uVar8 == 0;
        if (bVar24) {
          *(uint *)(lVar4 + 0x10) = uVar12;
          uVar8 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_58;
        if (bVar24) {
          uVar8 = uVar12;
        }
      }
    }
    local_58._0_4_ = uVar14;
    local_58 = CONCAT44(uVar8,(uint)local_58);
    piVar6 = (int *)FUN_14021c682(param_1 + 0x140,uVar8 ^ (uint)local_58);
    *piVar6 = *piVar6 + -1;
    if (DAT_14caf2744 == '\x01') {
      if (param_3 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(param_3 + 0xc);
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar7 = (ulonglong)*(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          uVar14 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar14);
          }
          LOCK();
          uVar12 = *(uint *)(lVar4 + 0x10);
          bVar24 = uVar12 == 0;
          if (bVar24) {
            *(uint *)(lVar4 + 0x10) = uVar14;
            uVar12 = 0;
          }
          UNLOCK();
          if (bVar24) {
            uVar12 = uVar14;
          }
          uVar7 = (ulonglong)uVar12;
        }
      }
      if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
        iVar15 = (int)uVar7;
        uVar14 = (uint)(uVar7 >> 0xd) ^ uVar8 - iVar15;
        uVar12 = uVar14 << 8 ^ (-0x61c88647 - iVar15) - uVar14;
        uVar18 = uVar12 >> 0xd ^ (iVar15 - uVar14) - uVar12;
        uVar20 = uVar18 >> 0xc ^ (uVar14 - uVar12) - uVar18;
        uVar14 = uVar20 << 0x10 ^ (uVar12 - uVar18) - uVar20;
        uVar12 = uVar14 >> 5 ^ (uVar18 - uVar20) - uVar14;
        uVar18 = uVar12 >> 3 ^ (uVar20 - uVar14) - uVar12;
        uVar14 = uVar18 << 10 ^ (uVar14 - uVar12) - uVar18;
        lVar4 = param_1 + 0x218;
        if (*(longlong *)(param_1 + 0x220) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x220);
        }
        iVar23 = *(int *)(lVar4 + (ulonglong)
                                  (*(int *)(param_1 + 0x228) - 1U &
                                  (uVar14 >> 0xf ^ uVar12 - (uVar18 + uVar14))) * 4);
        if (iVar23 != -1) {
          lVar4 = *(longlong *)(param_1 + 0x1e0);
          do {
            lVar19 = (longlong)iVar23 * 0x60;
            lVar13 = lVar4 + lVar19;
            if ((*(uint *)(lVar4 + lVar19) == uVar8) && (*(int *)(lVar4 + 4 + lVar19) == iVar15)) {
              plVar17 = (longlong *)(lVar13 + 8);
              if ((plVar17 != (longlong *)0x0 && lVar13 != 0) &&
                 (*(int *)(lVar13 + 0x10) != *(int *)(lVar13 + 0x3c))) {
                uVar8 = (uint)((ulonglong)local_50 >> 0x10);
                uVar14 = (uint)local_50 & 0xffff;
                lVar4 = lVar13 + 0x40;
                if (*(longlong *)(lVar13 + 0x48) != 0) {
                  lVar4 = *(longlong *)(lVar13 + 0x48);
                }
                iVar15 = *(int *)(lVar4 + (ulonglong)
                                          (*(int *)(lVar13 + 0x50) - 1U &
                                          (int)((ulonglong)local_50 >> 0x20) +
                                          ((uint)local_50 << 0x10 | uVar14) +
                                          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar14 >> 4)) * 4);
                if (iVar15 != -1) {
                  goto LAB_140b960ef;
                }
              }
              break;
            }
            iVar23 = *(int *)(lVar13 + 0x58);
          } while (iVar23 != -1);
        }
      }
    }
  }
LAB_140b96162:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b962c6 FUN_140b962c6 body=276 status=ok
// SIG undefined FUN_140b962c6(void)

undefined4 FUN_140b962c6(undefined8 *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = DAT_14cbd04a0;
  local_58 = DAT_14cbd0498;
  FUN_1448075d0(local_48);
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_48[0]) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_48[0]) {
            if ((((lVar1 != 0) &&
                 (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
            goto LAB_140b96374;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar4 = &DAT_14c9a1308;
LAB_140b96374:
  uVar7 = FUN_140b963dc(puVar4,0);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 140b963dc FUN_140b963dc body=51 status=ok
// SIG undefined FUN_140b963dc(void)

float FUN_140b963dc(undefined8 *param_1,float param_2)

{
  byte *pbVar1;
  double dVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
    dVar2 = atof(*(char **)(pbVar1 + 8));
    param_2 = (float)dVar2;
  }
  return param_2;
}



// FUNCTION 140b96410 FUN_140b96410 body=98 status=ok
// SIG undefined FUN_140b96410(void)

void FUN_140b96410(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1407d6a5a(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN_1488d20d8(param_1 + 4,0);
  }
  else {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  FUN_140b96472(param_1,1,1);
  return;
}



// FUNCTION 140b96472 FUN_140b96472 body=185 status=ok
// SIG undefined FUN_140b96472(void)

void FUN_140b96472(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  FUN_1401d7cf8(param_1 + 0xa0,&DAT_149e02088);
  if (param_3 != '\0') {
    iVar3 = *(int *)(param_1 + 0x3c);
    FUN_1401b9920(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
      FUN_140cd20a6(param_1 + 0x30,0);
    }
  }
  if (param_2 != '\0') {
    FUN_140368e06(param_1);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar4 = *(longlong **)(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140b96514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b96536 FUN_140b96536 body=256 status=ok
// SIG undefined FUN_140b96536(void)

undefined8 * FUN_140b96536(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b96638();
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x4000;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *param_1 = &PTR_FUN_14b096360;
  param_1[5] = &PTR_FUN_14b0969d0;
  param_1[6] = &PTR_LAB_14b096a10;
  FUN_140440628(local_50,&DAT_14cb81b50,1);
  FUN_1403719a4(param_1 + 0x6b,local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_48[0];
    if (local_30 < 0x19) {
      ppppuVar2 = local_48;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b96638 FUN_140b96638 body=260 status=ok
// SIG undefined FUN_140b96638(void)

undefined8 * FUN_140b96638(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b9673e();
  *param_1 = &PTR_FUN_14ac31a10;
  param_1[5] = &PTR_LAB_14ac32080;
  param_1[6] = &PTR_LAB_14ac320c0;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_14044066a(local_58,0x14,1);
  FUN_1403719a4(param_1 + 0x6b,local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_50[0];
    if (local_38 < 0x19) {
      ppppuVar2 = local_50;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b9673e FUN_140b9673e body=187 status=ok
// SIG undefined FUN_140b9673e(void)

undefined8 * FUN_140b9673e(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14ac52d70;
  param_1[5] = &PTR_FUN_14ac53390;
  param_1[6] = &PTR_LAB_14ac533d0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 2;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x339) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0x7f;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xbf;
  *(byte *)((longlong)param_1 + 0x2a9) = *(byte *)((longlong)param_1 + 0x2a9) & 0xfe;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  FUN_140b967fa(param_1,1);
  return param_1;
}



// FUNCTION 140b967fa FUN_140b967fa body=198 status=ok
// SIG undefined FUN_140b967fa(void)

void FUN_140b967fa(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((*(uint *)(param_1 + 8) >> 9 & 1) == 0) {
    FUN_140b361ee(param_1);
    return;
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0x7f | param_2 << 7;
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (0xfffffffeffffffff < uVar1) {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 1;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
    return;
  }
  plVar5 = (longlong *)0x0;
  if (DAT_14c9980d8 != 0) {
    plVar5 = DAT_14c9980d0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140b968bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0);
  return;
}



// FUNCTION 140b968ce FUN_140b968ce body=108 status=ok
// SIG undefined FUN_140b968ce(void)

undefined8 * FUN_140b968ce(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a1c6480;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x118;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b96940 FUN_140b96940 body=57 status=ok
// SIG undefined FUN_140b96940(void)

void FUN_140b96940(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb232d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb232d8 = FUN_140002ddd(FUN_14643d4e7,uVar1,L"GpsTestSettings_FlightNavTrace");
  }
  return;
}



// FUNCTION 140b9697a FUN_140b9697a body=73 status=ok
// SIG undefined FUN_140b9697a(void)

void FUN_140b9697a(longlong param_1)

{
  longlong lVar1;
  
  FUN_140b969c4();
  if (param_1 != 0) {
    lVar1 = param_1;
    do {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_140b969af;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    FUN_1404d4eb0(param_1 + 0x830,param_1);
  }
LAB_140b969af:
  FUN_1407107b6(param_1 + 0x6b0,param_1);
  return;
}



// FUNCTION 140b969c4 FUN_140b969c4 body=45 status=ok
// SIG undefined FUN_140b969c4(void)

void FUN_140b969c4(longlong param_1)

{
  FUN_140115e24();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_144757f48(param_1,0x4000000);
    return;
  }
  return;
}



// FUNCTION 140b969f2 FUN_140b969f2 body=173 status=ok
// SIG undefined FUN_140b969f2(void)

void FUN_140b969f2(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_140b96a89;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b96a89:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140b96aa0 FUN_140b96aa0 body=21 status=ok
// SIG undefined FUN_140b96aa0(void)

undefined8 FUN_140b96aa0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140b96ab6 FUN_140b96ab6 body=32 status=ok
// SIG undefined FUN_140b96ab6(void)

void FUN_140b96ab6(longlong param_1)

{
  FUN_1447cd2ec(param_1,0);
  FUN_1447f69b6(param_1 + 0x10);
  return;
}



// FUNCTION 140b96ad6 FUN_140b96ad6 body=40 status=ok
// SIG undefined FUN_140b96ad6(void)

undefined8 FUN_140b96ad6(undefined8 param_1,int param_2)

{
  FUN_140b96afe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140b96afe FUN_140b96afe body=119 status=ok
// SIG undefined FUN_140b96afe(void)

void FUN_140b96afe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0894d0;
  param_1[0x4a] = &PTR_FUN_14b0898d0;
  param_1[0x76] = &PTR_FUN_14b0898f0;
  plVar3 = (longlong *)param_1[0x7a];
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
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_140731102(param_1);
  return;
}



// FUNCTION 140b96b76 FUN_140b96b76 body=297 status=ok
// SIG undefined FUN_140b96b76(void)

undefined8 FUN_140b96b76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140b96c98;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b96c98;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140b96c98:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b96c43;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140b96c43;
    }
  }
  uVar6 = 0;
LAB_140b96c43:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b96cba FUN_140b96cba body=490 status=ok
// SIG undefined FUN_140b96cba(void)

bool FUN_140b96cba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403076fe(&local_30,param_3);
  lVar3 = FUN_1447262c2(param_3);
  if (lVar3 == 0) {
LAB_140b96d1f:
    if (local_30 != 0) {
LAB_140b96d28:
      lVar3 = *(longlong *)(local_30 + 0x1a00);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x18);
        if (lVar4 == 0) {
          uVar5 = FUN_14037df6e();
          lVar4 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x18) = lVar4;
        }
        lVar6 = *(longlong *)(param_1 + 0x20);
        if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x10));
          }
          *(longlong *)(param_1 + 0x20) = lVar6;
        }
        bVar8 = lVar3 == lVar6;
        goto LAB_140b96d54;
      }
    }
  }
  else {
    lVar4 = FUN_140b96ea6();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_140b96d1f;
    if (local_30 != 0) goto LAB_140b96d28;
    plVar1 = *(longlong **)(lVar3 + 0x3f0);
    if (plVar1 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar4 = FUN_14037df6e();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        if (lVar3 == 0) {
          uVar5 = FUN_14037df6e();
          lVar3 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x18) = lVar3;
        }
        plVar7 = *(longlong **)(param_1 + 0x20);
        if (((plVar7 == (longlong *)0x0) && (plVar7 = (longlong *)0x0, lVar3 != 0)) &&
           (*(longlong *)(param_1 + 0x10) != 0)) {
          plVar7 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar7 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
            plVar7 = (longlong *)0x0;
          }
          else {
            uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
            plVar7 = (longlong *)FUN_144aff482(uVar5,(longlong *)(param_1 + 0x10));
          }
          *(longlong **)(param_1 + 0x20) = plVar7;
        }
        bVar8 = plVar1 == plVar7;
        goto LAB_140b96d54;
      }
    }
  }
  bVar8 = false;
LAB_140b96d54:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 140b96ea6 FUN_140b96ea6 body=228 status=ok
// SIG undefined FUN_140b96ea6(void)

longlong FUN_140b96ea6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbcf98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_143d83bb4;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650e910;
    local_38 = &LAB_148ca0a51;
    local_40 = &LAB_145ff2285;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xbf0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVehicleStandIn",&DAT_14cbbcf98,&DAT_148ca0a50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbcf98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b96f94 FUN_140b96f94 body=360 status=ok
// SIG undefined FUN_140b96f94(void)

void FUN_140b96f94(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  FUN_140b970fc(param_1 + 0x77);
  FUN_140b970fc(param_1 + 0x50);
  FUN_140b970fc(param_1 + 0x2b);
  plVar1 = param_1 + 0x1c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x14;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x18) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x17)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x17)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xd;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x11) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x10)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x10)) {
    FUN_1400020a8(*plVar1);
  }
  if ((char)param_1[9] == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140b970fc FUN_140b970fc body=393 status=ok
// SIG undefined FUN_140b970fc(void)

void FUN_140b970fc(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0xb8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xd8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd0)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x98)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x98)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x68) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x60)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x60)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x28) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 140b97286 FUN_140b97286 body=94 status=ok
// SIG undefined FUN_140b97286(void)

bool FUN_140b97286(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_140b972e4(param_1,*(undefined8 *)(*(longlong *)(*param_2 + 0x58) + 0x10),
                *(undefined8 *)(*param_2 + 0x38));
  FUN_140b9733e(param_1);
  iVar1 = FUN_140ecba28(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x38));
  if ((iVar1 == 3) && (*(longlong *)(*param_2 + 0x28) != 0)) {
    *(undefined1 *)(*(longlong *)(*param_2 + 0x28) + 0x1c9e) = 1;
  }
  return iVar1 == 0;
}



// FUNCTION 140b972e4 FUN_140b972e4 body=89 status=ok
// SIG undefined FUN_140b972e4(void)

void FUN_140b972e4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != param_2) {
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140b97339. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b9733e FUN_140b9733e body=243 status=ok
// SIG undefined FUN_140b9733e(void)

void FUN_140b9733e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      FUN_140b97432(*(undefined8 *)(param_1 + 8),&local_30,*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_147bd6d0c(*(undefined8 *)(param_1 + 8),&local_30,*(undefined8 *)(param_1 + 0x18));
    }
    plVar1 = local_28;
    if ((undefined8 *)(param_1 + 0x20) != &local_30) {
      *(undefined8 *)(param_1 + 0x20) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x28);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x28) = plVar1;
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
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b97432 FUN_140b97432 body=705 status=ok
// SIG undefined FUN_140b97432(void)

undefined8 * FUN_140b97432(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  uint local_68;
  int local_64;
  undefined1 local_60 [8];
  longlong *local_58;
  uint *local_50;
  undefined1 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    uVar8 = 0;
    uVar3 = 0;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar3 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar7 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x528);
  if (*(int *)(param_1 + 0x530) != *(int *)(param_1 + 0x55c)) {
    lVar7 = param_1 + 0x560;
    if (*(longlong *)(param_1 + 0x568) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x568);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x570) - 1U & (uVar3 ^ uVar8)) * 4);
    if (iVar4 != -1) {
      do {
        lVar7 = *plVar2 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*plVar2 + (longlong)iVar4 * 0x20) == CONCAT44(uVar3,uVar8)) {
          if (lVar7 != 0) goto LAB_140b975cf;
          break;
        }
        iVar4 = *(int *)(lVar7 + 0x18);
      } while (iVar4 != -1);
    }
  }
  FUN_140b976f4(local_60,param_3,*(undefined8 *)(param_1 + 0xf0),*(byte *)(param_1 + 0x309) >> 3 & 1
               );
  local_64 = 0;
  if (param_3 == 0) {
    local_68 = 0;
    iVar4 = 0;
  }
  else {
    local_68 = *(uint *)(param_3 + 0xc);
    if ((int)local_68 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_68 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar5;
      }
    }
  }
  local_50 = &local_68;
  local_64 = iVar4;
  local_48 = local_60;
  FUN_140b97814(plVar2,&local_3c);
  lVar7 = *plVar2;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  lVar7 = lVar7 + (longlong)local_3c * 0x20;
LAB_140b975cf:
  *param_2 = *(undefined8 *)(lVar7 + 8);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b976f4 FUN_140b976f4 body=288 status=ok
// SIG undefined FUN_140b976f4(void)

longlong * FUN_140b976f4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x138,0x10);
  FUN_14001f26a(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aa6e9a0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if ((lVar2 == 0) ||
     (((*(longlong *)(lVar2 + 0x10) != 0 && (*(longlong *)(lVar2 + 0x18) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 8))))) goto LAB_140b9779c;
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 0x10) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x18);
    if (plVar4 == (longlong *)0x0) goto LAB_140b9779c;
LAB_140b977e3:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(lVar2 + 0x18) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_140b9779c;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 0x10) = lVar2;
    if (*(longlong **)(lVar2 + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(lVar2 + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_140b977e3;
      *(longlong **)(lVar2 + 0x18) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140b9779c:
  FUN_140b97954(*param_1,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 140b97814 FUN_140b97814 body=318 status=ok
// SIG undefined FUN_140b97814(void)

undefined4 * FUN_140b97814(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_14001f084(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)*local_40 >> 0x20) ^ (uint)*local_40;
  cVar3 = FUN_14001eea4(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14001fba0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b97954 FUN_140b97954 body=7935 status=ok
// SIG undefined FUN_140b97954(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b97954(longlong param_1,longlong *param_2,code *param_3,uint param_4)

{
  code *pcVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  longlong *plVar14;
  void *pvVar15;
  ulonglong uVar16;
  code *pcVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  undefined8 unaff_RBP;
  undefined *puVar26;
  int iVar27;
  longlong lVar28;
  uint *puVar29;
  ushort uVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint *puVar35;
  longlong *plVar36;
  int iVar37;
  ushort uVar38;
  uint uVar39;
  int iVar40;
  uint *puVar41;
  code *pcVar42;
  longlong lVar43;
  uint *puVar44;
  longlong lVar45;
  code *pcVar46;
  uint uVar47;
  int iVar48;
  void *pvVar49;
  longlong *plVar50;
  code *pcVar51;
  uint *puVar52;
  uint uVar53;
  int iVar54;
  bool bVar55;
  float fVar56;
  undefined1 auStack_4f8 [32];
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  code *local_4c0;
  wchar_t *local_4b8;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  undefined8 *local_4a0;
  code *local_498;
  code *local_490;
  longlong *local_480;
  uint local_478;
  ushort local_472;
  longlong local_470;
  longlong *local_468;
  int local_460;
  int local_45c;
  code *local_458;
  int local_44c;
  code *local_448;
  code *local_440;
  longlong *local_438;
  undefined4 local_430;
  uint local_42c;
  void *local_428;
  ulonglong local_420;
  code *local_418;
  undefined8 uStack_410;
  longlong local_400;
  int local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  int local_3ec;
  undefined8 local_3e8;
  undefined1 local_3e0;
  longlong local_3d8;
  ulonglong uStack_3d0;
  uint local_3c8 [4];
  uint *local_3b8;
  int local_3b0;
  uint local_3ac;
  undefined4 uStack_3a8;
  int local_3a4;
  longlong local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  uint local_378;
  undefined4 local_374;
  longlong local_370;
  undefined2 local_368;
  longlong *local_360;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  local_448 = (code *)CONCAT71(local_448._1_7_,DAT_14c998208);
  local_440 = param_3;
  if (DAT_14cac9ca8 == 0) {
    local_4a0 = &local_388;
    local_388 = FUN_141030f22;
    local_490 = FUN_14081d0ea;
    local_498 = FUN_14081d0ea;
    local_4a8 = &LAB_1478c0a72;
    local_4b0 = &LAB_1417b2375;
    local_4b8 = L"Engine";
    local_4c0 = (code *)0x1000000000;
    local_4c8 = CONCAT44(local_4c8._4_4_,0x10000004);
    local_4d0 = CONCAT44(local_4d0._4_4_,8);
    local_4d8 = CONCAT44(local_4d8._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    if (DAT_14cac9ca8 != 0) goto LAB_140b979b8;
LAB_140b979d3:
    uVar8 = 0;
  }
  else {
LAB_140b979b8:
    if (((int)param_2[7] < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(param_2[6] + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) goto LAB_140b979d3;
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  local_3b8 = (uint *)0x0;
  local_3b0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3ac = 0x80;
  uStack_3a8 = 0xffffffff;
  local_3a4 = 0;
  local_398 = 0;
  local_390 = 0;
  FUN_140202f34(param_2);
  iVar37 = (int)param_2[0x1f];
  if (-1 < iVar37) {
    local_480 = (longlong *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != iVar37) {
      FUN_1417ed170();
    }
    local_470 = param_1;
    local_438 = param_2;
    local_430 = uVar8;
    local_42c = param_4;
    if ((int)param_2[0x1f] < 1) {
      uVar39 = 0xffffffff;
    }
    else {
      local_458 = (code *)(param_1 + 0x38);
      uVar39 = 0xffffffff;
      lVar43 = 0;
      uVar8 = 0;
      do {
        lVar28 = local_470;
        lVar45 = *(longlong *)(local_438[0x1e] + lVar43 * 0x10);
        iVar37 = *(int *)(local_438[0x1e] + 8 + lVar43 * 0x10);
        uVar53 = *(uint *)(local_470 + 0x30);
        *(uint *)(local_470 + 0x30) = uVar53 + 1;
        if (*(uint *)(local_470 + 0x34) < uVar53 + 1) {
          FUN_14001f33a();
        }
        lVar9 = *local_480;
        *(longlong *)(lVar9 + (longlong)(int)uVar53 * 0x30) = lVar45;
        if (lVar45 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = *(undefined8 *)(lVar45 + 0x20);
        }
        lVar9 = lVar9 + (longlong)(int)uVar53 * 0x30;
        *(undefined8 *)(lVar9 + 8) = uVar19;
        *(int *)(lVar9 + 0x10) = iVar37;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        *(undefined8 *)(lVar9 + 0x28) = 0xffffffff;
        iVar24 = *(int *)(lVar45 + 0x34) * iVar37;
        local_388 = local_458;
        uStack_380 = local_440;
        local_378 = uVar53 & 0xffff;
        lVar9 = (ulonglong)(local_378 << 4) * 3;
        local_370 = *(longlong *)(lVar28 + 0x28) + lVar9;
        local_368 = 0;
        local_360 = (longlong *)0x0;
        if (DAT_14cb01ab0 != '\0') {
          local_360 = &local_3d8;
        }
        *(undefined2 *)(*(longlong *)(lVar28 + 0x28) + 0x1c + lVar9) =
             *(undefined2 *)(lVar28 + 0x40);
        local_3f0 = 0;
        local_3e8 = 0;
        local_3e0 = 0;
        local_400 = lVar45;
        local_3f8 = iVar24;
        local_3f4 = uVar8;
        local_3ec = iVar37;
        uVar8 = FUN_143691e49(&local_388,&local_400);
        *(undefined2 *)(*(longlong *)(lVar28 + 0x28) + 0x1e + lVar9) =
             *(undefined2 *)(lVar28 + 0x40);
        puVar18 = (uint *)(*(longlong *)(lVar28 + 0x28) + 0x2c + lVar9);
        *puVar18 = *puVar18 | 2;
        *(int *)(*(longlong *)(lVar28 + 0x28) + 0x14 + lVar9) = iVar24 + *(int *)(lVar45 + 0x44);
        plVar23 = (longlong *)(*(longlong *)(lVar28 + 0x28) + lVar9);
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x28) + lVar9);
        if (lVar28 != 0) {
          puVar26 = *(undefined **)(lVar28 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
            local_4c8 = FUN_1446ddbd2();
            local_4c0 = FUN_1403a682c;
            local_4d0 = 0;
            local_4d8 = 0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
          if (DAT_14c952a10 == 0) {
            bVar55 = puVar26 != (undefined *)0x0;
            if (puVar26 != &DAT_14c952a08 && bVar55) {
              do {
                puVar26 = *(undefined **)(puVar26 + 0x30);
                bVar55 = puVar26 != (undefined *)0x0;
                if (puVar26 == &DAT_14c952a08) break;
              } while (puVar26 != (undefined *)0x0);
            }
            if (bVar55) goto LAB_140b97c88;
          }
          else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952a10) != 0) {
LAB_140b97c88:
            lVar28 = *(longlong *)(lVar28 + 0x70);
            uVar47 = *(uint *)((longlong)plVar23 + 0x2c);
            *(uint *)((longlong)plVar23 + 0x2c) = uVar47 | 0x20;
            if ((*(byte *)(lVar28 + 0xb2) & 0x10) != 0) {
              *(uint *)((longlong)plVar23 + 0x2c) = uVar47 | 0x28;
              lVar9 = FUN_146288f1e();
              if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar28 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar28 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                  == lVar9 + 0x30)) {
                *(byte *)((longlong)plVar23 + 0x2c) = *(byte *)((longlong)plVar23 + 0x2c) | 0x80;
              }
            }
            if ((*(byte *)(lVar28 + 0xb1) & 4) != 0) {
              *(byte *)((longlong)plVar23 + 0x2c) = *(byte *)((longlong)plVar23 + 0x2c) | 0x10;
            }
          }
        }
        if ((*(byte *)(*plVar23 + 0x39) & 2) != 0) {
          *(byte *)((longlong)plVar23 + 0x2c) = *(byte *)((longlong)plVar23 + 0x2c) | 0x40;
        }
        lVar28 = *local_480;
        if ((*(byte *)(lVar45 + 0x39) & 0x40) != 0) {
          pbVar2 = (byte *)(lVar28 + 0x2c + (ulonglong)((uVar53 & 0xffff) * 0x30));
          *pbVar2 = *pbVar2 | 4;
          lVar28 = *local_480;
        }
        uVar32 = (ulonglong)((uVar53 & 0xffff) * 0x30);
        uVar47 = *(uint *)(lVar28 + 0x2c + uVar32);
        if ((uVar47 & 8) != 0) {
          uVar39 = uVar53 & 0xffff;
        }
        if (local_368._1_1_ == '\x01') {
          *(uint *)(lVar28 + uVar32 + 0x2c) = uVar47 | 0x200;
        }
        if ((char)local_368 == '\x01') {
          puVar18 = (uint *)(*local_480 + 0x2c + (ulonglong)((uVar53 & 0xffff) * 0x30));
          *puVar18 = *puVar18 | 0x100;
        }
        lVar43 = lVar43 + 1;
      } while (lVar43 < (int)local_438[0x1f]);
    }
    plVar23 = local_438;
    lVar43 = local_470;
    local_468 = (longlong *)(local_470 + 0x38);
    iVar37 = *(int *)(local_470 + 0x40);
    *(uint *)(local_470 + 0x40) = iVar37 + 1U;
    if (*(uint *)(local_470 + 0x44) < iVar37 + 1U) {
      FUN_14001faa0(local_468,iVar37);
    }
    lVar45 = *local_468;
    lVar28 = (longlong)iVar37 * 0x20;
    puVar10 = (undefined8 *)(lVar45 + 0x10 + lVar28);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined8 *)(lVar45 + lVar28) = 0;
    ((undefined8 *)(lVar45 + lVar28))[1] = 0;
    *(undefined1 *)(lVar45 + 0x1c + lVar28) = 1;
    if (local_3a4 < (int)uStack_3d0) {
      lVar45 = lVar43 + 0xe8;
      FUN_147ceb2c8();
      local_478 = uVar39;
      if (local_3b0 == 0) {
        uVar33 = 1;
        uVar32 = 0;
        iVar37 = 0;
        iVar24 = 0;
      }
      else {
        puVar18 = local_3b8;
        if (local_3b8 == (uint *)0x0) {
          puVar18 = local_3c8;
        }
        uVar39 = *puVar18;
        if (uVar39 == 0) {
          iVar37 = local_3b0 + 0x1e;
          if (-1 < local_3b0 + -1) {
            iVar37 = local_3b0 + -1;
          }
          uVar32 = 0;
          uVar16 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar16 = uVar32;
          }
          iVar37 = 0;
          do {
            if (uVar16 == uVar32) goto LAB_140b995e0;
            iVar37 = iVar37 + 0x20;
            uVar39 = puVar18[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar39 == 0);
        }
        else {
          uVar32 = 0;
          iVar37 = 0;
        }
        uVar33 = (ulonglong)(-uVar39 & uVar39);
        uVar16 = uVar33 * 2 + 1;
        lVar43 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar43 == 0; lVar43 = lVar43 + -1) {
          }
        }
        iVar24 = (iVar37 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
        if (local_3b0 <= iVar24) {
          iVar24 = local_3b0;
        }
      }
      if (iVar24 < local_3b0) {
        uVar39 = 0xffffffff;
        do {
          piVar11 = (int *)(local_3d8 + (longlong)iVar24 * 0x20);
          uStack_380 = (code *)(piVar11 + 2);
          local_88 = (longlong *)((longlong)*piVar11 * 0x20 + *local_468);
          local_388 = (code *)&local_88;
          FUN_147ceb648(lVar45,&local_418,&local_388);
          uVar39 = ~(uint)uVar33 & uVar39;
          puVar18 = local_3b8;
          if (local_3b8 == (uint *)0x0) {
            puVar18 = local_3c8;
          }
          iVar24 = (int)uVar32;
          lVar43 = (longlong)iVar24;
          uVar53 = puVar18[lVar43] & uVar39;
          if (uVar53 == 0) {
            iVar40 = local_3b0 + 0x1e;
            if (-1 < local_3b0 + -1) {
              iVar40 = local_3b0 + -1;
            }
            iVar40 = iVar40 >> 5;
            iVar27 = iVar40;
            if (iVar40 < iVar24) {
              iVar27 = iVar24;
            }
            if (iVar40 <= iVar24) break;
            lVar28 = 0;
            while( true ) {
              iVar37 = iVar37 + 0x20;
              uVar53 = puVar18[lVar43 + lVar28 + 1];
              if (uVar53 != 0) break;
              lVar28 = lVar28 + 1;
              if (iVar27 - lVar43 == lVar28) goto LAB_140b995e0;
            }
            uVar32 = (ulonglong)(iVar24 + (int)lVar28 + 1);
            uVar39 = 0xffffffff;
          }
          uVar33 = (ulonglong)(-uVar53 & uVar53);
          uVar16 = uVar33 * 2 + 1;
          lVar43 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar43 == 0; lVar43 = lVar43 + -1) {
            }
          }
          iVar24 = (iVar37 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
        } while (iVar24 < local_3b0);
      }
LAB_140b995e0:
      FUN_147ceb9e6(lVar45);
      lVar43 = local_470;
      FUN_147ceb9a2(lVar45,*(int *)(local_470 + 0xf0) - *(int *)(local_470 + 0x11c));
      plVar23 = local_438;
      uVar39 = local_478;
    }
    local_418 = (code *)0x0;
    uStack_410 = 0;
    iVar37 = *(int *)(lVar43 + 0x30);
    if (-1 < iVar37) {
      if (iVar37 != 0) {
        FUN_141714720(&local_418);
      }
      plVar14 = (longlong *)plVar23[0x22];
      if (plVar14 == (longlong *)0x0) {
        (**(code **)(*plVar23 + 1000))(plVar23);
        plVar14 = (longlong *)plVar23[0x22];
      }
      (**(code **)(*plVar14 + 0x1e0))();
      pcVar51 = local_418;
      if ((DAT_14cb01b08 == '\x01') && (uVar39 != 0xffffffff)) {
        iVar37 = (int)uStack_410;
        lVar43 = (longlong)(int)uStack_410;
        if (1 < lVar43) {
          local_478 = uVar39;
          memset(&local_378,0,0x2f0);
          local_388 = pcVar51;
          uStack_380 = pcVar51 + (lVar43 * 3 + -3) * 8;
          fVar56 = logf((float)iVar37);
          local_378 = (uint)(longlong)(fVar56 + fVar56);
          puVar10 = &local_388;
          do {
            puVar21 = (uint *)*puVar10;
            puVar29 = (uint *)puVar10[1];
            iVar37 = *(int *)(puVar10 + 2);
            iVar24 = (int)((ulonglong)((longlong)puVar29 - (longlong)puVar21) >> 3) * -0x55555555;
            uVar39 = iVar24 + 1;
            puVar22 = puVar21;
            puVar18 = puVar29;
            if (iVar37 != 0) {
LAB_140b97f8f:
              if (8 < (int)uVar39) {
                uVar32 = (ulonglong)(uVar39 >> 1);
                lVar43 = *(longlong *)(puVar21 + uVar32 * 6 + 4);
                lVar45 = *(longlong *)(puVar21 + uVar32 * 6);
                lVar28 = *(longlong *)(puVar21 + uVar32 * 6 + 2);
                *(longlong *)(puVar21 + uVar32 * 6 + 4) = *(longlong *)(puVar21 + 4);
                lVar9 = *(longlong *)(puVar21 + 2);
                *(longlong *)(puVar21 + uVar32 * 6) = *(longlong *)puVar21;
                *(longlong *)(puVar21 + uVar32 * 6 + 2) = lVar9;
                *(longlong *)(puVar21 + 4) = lVar43;
                *(longlong *)puVar21 = lVar45;
                *(longlong *)(puVar21 + 2) = lVar28;
                puVar41 = puVar18 + 6;
                puVar20 = puVar21;
                do {
                  puVar7 = puVar20 + 6;
                  puVar35 = puVar20 + 6;
                  do {
                    puVar20 = puVar35;
                    puVar52 = puVar7;
                    if (puVar18 < puVar20) break;
                    puVar7 = puVar52 + 6;
                    puVar35 = puVar20 + 6;
                  } while ((ushort)*puVar20 <= (ushort)*puVar21);
                  puVar7 = puVar41 + -0xc;
                  do {
                    puVar35 = puVar41;
                    puVar44 = puVar7;
                    puVar41 = puVar35 + -6;
                    if (puVar41 <= puVar21) break;
                    puVar7 = puVar44 + -6;
                  } while ((ushort)*puVar21 <= (ushort)*puVar41);
                  if (puVar41 < puVar20) goto LAB_140b98081;
                  lVar43 = *(longlong *)(puVar20 + 4);
                  lVar45 = *(longlong *)puVar20;
                  lVar28 = *(longlong *)(puVar20 + 2);
                  *(longlong *)(puVar20 + 4) = *(longlong *)(puVar35 + -2);
                  lVar9 = *(longlong *)(puVar35 + -4);
                  *(longlong *)puVar20 = *(longlong *)puVar41;
                  *(longlong *)(puVar20 + 2) = lVar9;
                  *(longlong *)(puVar35 + -2) = lVar43;
                  *(longlong *)puVar41 = lVar45;
                  *(longlong *)(puVar35 + -4) = lVar28;
                } while( true );
              }
              if (puVar21 < puVar18) {
                do {
                  puVar29 = puVar21;
                  if (puVar21 + 6 <= puVar18) {
                    uVar39 = (uint)(ushort)*puVar21;
                    puVar22 = puVar21 + 6;
                    do {
                      uVar38 = (ushort)uVar39;
                      uVar30 = (ushort)*puVar22;
                      if (uVar38 <= uVar30) {
                        uVar39 = *puVar22;
                      }
                      if (uVar38 < uVar30) {
                        puVar29 = puVar22;
                      }
                      puVar22 = puVar22 + 6;
                    } while (puVar22 <= puVar18);
                  }
                  local_78 = *(longlong *)(puVar29 + 4);
                  local_88 = *(longlong **)puVar29;
                  uStack_80 = *(longlong *)(puVar29 + 2);
                  plVar14 = local_88;
                  lVar45 = uStack_80;
                  *(longlong *)(puVar29 + 4) = *(longlong *)(puVar18 + 4);
                  lVar43 = *(longlong *)(puVar18 + 2);
                  *(longlong *)puVar29 = *(longlong *)puVar18;
                  *(longlong *)(puVar29 + 2) = lVar43;
                  *(longlong *)(puVar18 + 4) = local_78;
                  local_88._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
                  uStack_80._4_4_ = (uint)((ulonglong)uStack_80 >> 0x20);
                  *puVar18 = (uint)local_88;
                  puVar18[1] = local_88._4_4_;
                  puVar18[2] = (uint)uStack_80;
                  puVar18[3] = uStack_80._4_4_;
                  puVar18 = puVar18 + -6;
                  local_88 = plVar14;
                  uStack_80 = lVar45;
                } while (puVar21 < puVar18);
              }
              goto LAB_140b98418;
            }
LAB_140b98153:
            if (uVar39 != 0) {
              iVar37 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
              iVar24 = iVar37;
joined_r0x000140b9817a:
              do {
                iVar40 = iVar37 * 2 + 1;
                if (iVar40 < (int)uVar39) {
                  iVar27 = iVar37 * 2 + 2;
                  if ((iVar27 < (int)uVar39) &&
                     ((ushort)puVar21[(longlong)iVar40 * 6] <= (ushort)puVar21[(longlong)iVar27 * 6]
                     )) {
                    iVar40 = iVar27;
                  }
                  if ((ushort)puVar21[(longlong)iVar37 * 6] < (ushort)puVar21[(longlong)iVar40 * 6])
                  {
                    puVar18 = puVar21 + (longlong)iVar37 * 6;
                    puVar29 = puVar21 + (longlong)iVar40 * 6;
                    local_78 = *(longlong *)(puVar18 + 4);
                    local_88 = *(longlong **)puVar18;
                    uStack_80 = *(longlong *)(puVar18 + 2);
                    plVar14 = local_88;
                    lVar45 = uStack_80;
                    *(longlong *)(puVar18 + 4) = *(longlong *)(puVar29 + 4);
                    lVar43 = *(longlong *)(puVar29 + 2);
                    *(longlong *)puVar18 = *(longlong *)puVar29;
                    *(longlong *)(puVar18 + 2) = lVar43;
                    *(longlong *)(puVar29 + 4) = local_78;
                    local_88._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
                    uStack_80._4_4_ = (uint)((ulonglong)uStack_80 >> 0x20);
                    *puVar29 = (uint)local_88;
                    puVar29[1] = local_88._4_4_;
                    puVar29[2] = (uint)uStack_80;
                    puVar29[3] = uStack_80._4_4_;
                    iVar37 = iVar40;
                    local_88 = plVar14;
                    uStack_80 = lVar45;
                    goto joined_r0x000140b9817a;
                  }
                }
                bVar55 = iVar24 != 0;
                iVar37 = iVar24 + -1;
                iVar24 = iVar37;
              } while (bVar55);
              if (1 < (int)uVar39) {
                uVar32 = (ulonglong)uVar39 - 1;
                local_78 = *(longlong *)(puVar21 + 4);
                local_88 = *(longlong **)puVar21;
                uStack_80 = *(longlong *)(puVar21 + 2);
                plVar14 = local_88;
                lVar45 = uStack_80;
                *(longlong *)(puVar21 + 4) = *(longlong *)(puVar21 + uVar32 * 6 + 4);
                lVar43 = *(longlong *)(puVar21 + uVar32 * 6 + 2);
                *(longlong *)puVar21 = *(longlong *)(puVar21 + uVar32 * 6);
                *(longlong *)(puVar21 + 2) = lVar43;
                *(longlong *)(puVar21 + uVar32 * 6 + 4) = local_78;
                local_88._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (uint)((ulonglong)uStack_80 >> 0x20);
                puVar18 = puVar21 + uVar32 * 6;
                *puVar18 = (uint)local_88;
                puVar18[1] = local_88._4_4_;
                puVar18[2] = (uint)uStack_80;
                puVar18[3] = uStack_80._4_4_;
                local_88 = plVar14;
                uStack_80 = lVar45;
                if (uVar39 != 2) {
                  do {
                    iVar37 = 0;
                    iVar40 = 1;
                    iVar24 = 0;
                    do {
                      iVar37 = iVar37 + 2;
                      iVar27 = iVar40;
                      if (((longlong)iVar37 < (longlong)uVar32) &&
                         ((ushort)puVar21[(longlong)iVar40 * 6] <=
                          (ushort)puVar21[(longlong)iVar37 * 6])) {
                        iVar27 = iVar37;
                      }
                      if ((ushort)puVar21[(longlong)iVar27 * 6] <=
                          (ushort)puVar21[(longlong)iVar24 * 6]) break;
                      puVar18 = puVar21 + (longlong)iVar24 * 6;
                      puVar29 = puVar21 + (longlong)iVar27 * 6;
                      uVar19 = *(undefined8 *)(puVar18 + 4);
                      uVar4 = *(undefined8 *)puVar18;
                      uVar5 = *(undefined8 *)(puVar18 + 2);
                      *(undefined8 *)(puVar18 + 4) = *(undefined8 *)(puVar29 + 4);
                      uVar6 = *(undefined8 *)(puVar29 + 2);
                      *(undefined8 *)puVar18 = *(undefined8 *)puVar29;
                      *(undefined8 *)(puVar18 + 2) = uVar6;
                      *(undefined8 *)(puVar29 + 4) = uVar19;
                      *(undefined8 *)puVar29 = uVar4;
                      *(undefined8 *)(puVar29 + 2) = uVar5;
                      iVar37 = iVar27 * 2;
                      iVar40 = iVar27 * 2 + 1;
                      iVar24 = iVar27;
                    } while ((longlong)iVar40 < (longlong)uVar32);
                    uVar16 = uVar32 - 1;
                    local_78 = *(longlong *)(puVar21 + 4);
                    local_88 = *(longlong **)puVar21;
                    uStack_80 = *(longlong *)(puVar21 + 2);
                    plVar14 = local_88;
                    lVar45 = uStack_80;
                    *(longlong *)(puVar21 + 4) = *(longlong *)(puVar21 + uVar16 * 6 + 4);
                    lVar43 = *(longlong *)(puVar21 + uVar16 * 6 + 2);
                    *(longlong *)puVar21 = *(longlong *)(puVar21 + uVar16 * 6);
                    *(longlong *)(puVar21 + 2) = lVar43;
                    *(longlong *)(puVar21 + uVar16 * 6 + 4) = local_78;
                    local_88._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
                    uStack_80._4_4_ = (uint)((ulonglong)uStack_80 >> 0x20);
                    puVar18 = puVar21 + uVar16 * 6;
                    *puVar18 = (uint)local_88;
                    puVar18[1] = local_88._4_4_;
                    puVar18[2] = (uint)uStack_80;
                    puVar18[3] = uStack_80._4_4_;
                    bVar55 = 2 < uVar32;
                    uVar32 = uVar16;
                    local_88 = plVar14;
                    uStack_80 = lVar45;
                  } while (bVar55);
                }
              }
            }
LAB_140b98418:
            puVar10 = puVar10 + -3;
            uVar39 = local_478;
          } while (&local_388 <= puVar10);
        }
      }
      lVar43 = local_470;
      pvVar49 = (void *)(local_470 + 200);
      *(int *)(local_470 + 0xe0) = *(int *)(local_470 + 0x30);
      uVar53 = *(int *)(local_470 + 0x30) + 0x1f;
      if (0x1f < uVar53) {
        uVar47 = uVar53 >> 5;
        if (*(int *)(local_470 + 0xe4) + 0x1fU >> 5 < uVar47) {
          if ((0x9f < uVar53) || (*(longlong *)(local_470 + 0xd8) != 0)) {
            uVar31 = 0;
            if (0x9f < uVar53) {
              uVar31 = uVar47;
            }
            FUN_1446efa72(local_470 + 0xd8,0,uVar31,4);
          }
          *(uint *)(lVar43 + 0xe4) = uVar53 & 0xffffffe0;
        }
        pvVar15 = *(void **)(lVar43 + 0xd8);
        if (*(void **)(lVar43 + 0xd8) == (void *)0x0) {
          pvVar15 = pvVar49;
        }
        if (uVar53 < 0x120) {
          uVar47 = uVar53 >> 3 & 0x3c;
        }
        else {
          uVar47 = uVar47 << 2;
        }
        memset(pvVar15,0,(ulonglong)uVar47);
        iVar37 = *(int *)(lVar43 + 0xe0);
        iVar24 = iVar37 + 0x1f;
        if (-1 < iVar37) {
          iVar24 = iVar37;
        }
        if (iVar37 % 0x20 != 0) {
          pvVar15 = *(void **)(lVar43 + 0xd8);
          if (*(void **)(lVar43 + 0xd8) == (void *)0x0) {
            pvVar15 = pvVar49;
          }
          bVar12 = -(char)(iVar37 % 0x20);
          *(uint *)((longlong)pvVar15 + (longlong)(iVar24 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar15 + (longlong)(iVar24 >> 5) * 4) << (bVar12 & 0x1f))
               >> (bVar12 & 0x1f);
        }
      }
      plVar14 = local_480;
      if (0 < (int)uStack_410) {
        uVar39 = uVar39 + 1;
        lVar45 = 0;
        iVar37 = 0;
        local_45c = 0;
        local_44c = 0;
        local_460 = 0;
LAB_140b9856c:
        uVar30 = *(ushort *)(local_418 + lVar45 * 0x18);
        if (((int)(uint)uVar30 < *(int *)(lVar43 + 0x30)) &&
           (*(int *)(local_418 + lVar45 * 0x18 + 4) != 0xf)) {
          local_458 = (code *)CONCAT44(local_458._4_4_,iVar37);
          lVar28 = (ulonglong)uVar30 * 0x30;
          *(int *)(*plVar14 + 0x20 + lVar28) = *(int *)(local_418 + lVar45 * 0x18 + 4);
          *(undefined4 *)(*plVar14 + 0x24 + lVar28) =
               *(undefined4 *)(local_418 + (lVar45 * 3 + 1) * 8);
          local_472 = uVar30;
          lVar28 = FUN_1400796d0(plVar23,*(undefined8 *)(*(longlong *)(*plVar14 + lVar28) + 0x68),1)
          ;
          if (lVar28 != 0) {
            *(uint *)(*local_480 + 0x28 + (ulonglong)((uint)uVar30 * 0x30)) =
                 (uint)*(byte *)(lVar28 + 0xb4);
          }
          uVar47 = (uint)uVar30;
          uVar53 = *(uint *)(*local_480 + 0x2c + (ulonglong)(uVar47 * 0x30));
          if ((uVar53 & 8) == 0) {
            *(uint *)(*local_480 + (ulonglong)(uVar47 * 0x30) + 0x2c) = uVar53 | 1;
            iVar37 = *(int *)(local_418 + lVar45 * 0x18 + 4);
            if (iVar37 == 0xe) {
              *(byte *)(lVar43 + 0x20) = *(byte *)(lVar43 + 0x20) | 0x80;
            }
            else if (iVar37 == 1) {
              *(byte *)(lVar43 + 0x20) = *(byte *)(lVar43 + 0x20) | 0x40;
            }
            else if (iVar37 == 0) {
              puVar18 = (uint *)(*local_480 + 0x2c + (ulonglong)(uVar47 * 0x30));
              *puVar18 = *puVar18 & 0xfffffffd;
            }
            if ((*(byte *)(*local_480 + 0x2d + (ulonglong)(uVar47 * 0x30)) & 3) != 0) {
              *(byte *)(lVar43 + 0x20) = *(byte *)(lVar43 + 0x20) | 8;
            }
            iVar37 = (int)local_458 + 1;
            plVar14 = local_480;
            if (((char)local_448 != '\0') && (local_418[lVar45 * 0x18 + 0xc] == (code)0x1)) {
              local_45c = local_45c + 1;
              pvVar15 = *(void **)(lVar43 + 0xd8);
              if (*(void **)(lVar43 + 0xd8) == (void *)0x0) {
                pvVar15 = pvVar49;
              }
              puVar18 = (uint *)((longlong)pvVar15 + (ulonglong)(uVar30 >> 5) * 4);
              *puVar18 = *puVar18 | 1 << ((byte)uVar30 & 0x1f);
            }
            goto LAB_140b986be;
          }
          local_478 = uVar39;
          local_428 = pvVar49;
          local_420 = (ulonglong)uVar30;
          if (*(longlong *)(lVar43 + 0x58) == 0) {
            puVar10 = (undefined8 *)FUN_14001cc68(0x28,0x10);
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
            *(undefined2 *)(puVar10 + 4) = 0;
            local_388 = (code *)CONCAT62(local_388._2_6_,0xffff);
            FUN_1417ece42(puVar10 + 2,&local_388,local_478);
            if (*(undefined8 **)(lVar43 + 0x58) != puVar10) {
              *(undefined8 **)(lVar43 + 0x58) = puVar10;
              FUN_140442c80();
            }
          }
          lVar43 = *local_480;
          if (((*(byte *)(lVar43 + 0x2c + (ulonglong)(uVar47 * 0x30)) & 0x80) != 0) &&
             (uVar30 = *(ushort *)((ulonglong)(uVar47 * 0x30) + lVar43 + 0x1c),
             uVar32 = (ulonglong)uVar30, plVar14 = local_468, plVar36 = local_480,
             uVar30 < *(ushort *)(lVar43 + 0x1e + (ulonglong)(uVar47 * 0x30)))) {
            do {
              iVar37 = (int)uVar32;
              if (*(char *)(*plVar14 + 0x1c + uVar32 * 0x20) == '\0') {
                plVar50 = (longlong *)(*plVar14 + uVar32 * 0x20);
                lVar43 = *(longlong *)(*plVar50 + 0x78);
                if (lVar43 != 0) {
                  puVar26 = *(undefined **)(lVar43 + 8);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c952a58) &&
                     (FUN_144b3d300(&DAT_14c952a58), plVar14 = local_468, plVar36 = local_480,
                     DAT_14c952a58 == -1)) {
                    local_4c8 = FUN_1446ddbd2();
                    local_4c0 = FUN_1403a682c;
                    local_4d0 = 0;
                    local_4d8 = 0x108001;
                    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                    atexit(FUN_142818c9e);
                    _Init_thread_footer(&DAT_14c952a58);
                    plVar14 = local_468;
                    plVar36 = local_480;
                  }
                  if (DAT_14c952a10 == 0) {
                    bVar55 = puVar26 != (undefined *)0x0;
                    if (puVar26 != &DAT_14c952a08 && bVar55) {
                      do {
                        puVar26 = *(undefined **)(puVar26 + 0x30);
                        bVar55 = puVar26 != (undefined *)0x0;
                        if (puVar26 == &DAT_14c952a08) break;
                      } while (puVar26 != (undefined *)0x0);
                    }
                    if (bVar55) goto LAB_140b98845;
                  }
                  else if ((*(ulonglong *)(puVar26 + 0x18) & DAT_14c952a10) != 0) {
LAB_140b98845:
                    lVar28 = *(longlong *)(lVar43 + 0x70);
                    lVar9 = FUN_146288e54();
                    plVar14 = local_468;
                    plVar36 = local_480;
                    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar28 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar28 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                        lVar9 + 0x30)) {
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cb01ba8) &&
                         (FUN_144b3d300(&DAT_14cb01ba8), DAT_14cb01ba8 == -1)) {
                        FUN_1446f470e(&DAT_14cb01ba0,L"DeltaFlags",1);
                        _Init_thread_footer(&DAT_14cb01ba8);
                      }
                      pvVar49 = local_428;
                      uVar39 = local_478;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cb01bb8) &&
                         (FUN_144b3d300(&DAT_14cb01bb8), DAT_14cb01bb8 == -1)) {
                        FUN_1446f470e(&DAT_14cb01bb0,L"ArrayReplicationKey",1);
                        _Init_thread_footer(&DAT_14cb01bb8);
                      }
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14cb01bc8) &&
                         (FUN_144b3d300(&DAT_14cb01bc8), DAT_14cb01bc8 == -1)) {
                        FUN_1446f470e(&DAT_14cb01bc0,L"ReplicationID",1);
                        _Init_thread_footer(&DAT_14cb01bc8);
                      }
                      lVar9 = FUN_1448f9ec4(lVar43);
                      lVar43 = *(longlong *)(lVar28 + 0x70);
                      goto joined_r0x000140b98a24;
                    }
                  }
                }
                iVar37 = *(ushort *)(plVar50 + 1) - 1;
                lVar43 = *plVar36;
              }
              uVar32 = (ulonglong)(iVar37 + 1U);
            } while ((int)(iVar37 + 1U) <
                     (int)(uint)*(ushort *)(lVar43 + 0x1e + (ulonglong)(uVar47 * 0x30)));
          }
          lVar43 = local_470;
          local_388 = (code *)CONCAT62(local_388._2_6_,local_472);
          local_388 = (code *)CONCAT44(0xffffffff,(undefined4)local_388);
          uStack_380 = (code *)0xffffffffffffffff;
          local_378 = 0xffffffff;
          local_374 = 0xffffffff;
          FUN_1459014e2(*(undefined8 *)(local_470 + 0x58),&local_388);
          pvVar49 = local_428;
          uVar39 = local_478;
          goto LAB_140b9897b;
        }
        goto LAB_140b986be;
      }
      local_460 = 0;
      local_44c = 0;
      local_45c = 0;
      iVar37 = 0;
LAB_140b98c57:
      if (((char)local_430 != '\0') && (*(int *)(*plVar14 + 0xe0) != 0xf)) {
        pbVar2 = (byte *)(*plVar14 + 0xec);
        *pbVar2 = *pbVar2 | 2;
        *(undefined4 *)(*plVar14 + 0xe0) = 0;
      }
      if (((char)local_448 != '\0') && (0 < local_460 || 0 < local_45c)) {
        bVar13 = (byte)*(undefined4 *)(lVar43 + 0x20);
        bVar12 = bVar13 | 0x20;
        if (iVar37 != local_45c) {
          bVar12 = bVar13;
        }
        *(byte *)(lVar43 + 0x20) =
             (local_44c == local_460 && iVar37 == local_45c) * '\x02' + 2U | bVar12;
      }
      if ((iVar37 == 0) && (*(longlong *)(lVar43 + 0x58) == 0)) {
        *(byte *)(lVar43 + 0x20) = *(byte *)(lVar43 + 0x20) | 0x10;
      }
      if (local_440 == (code *)0x0 || (local_42c & 1) != 0) {
        FUN_14001f8bc(lVar43,0,*(int *)(lVar43 + 0x40) + -1,lVar43 + 0x48);
      }
      if (DAT_14c7619e4 == 0) {
        *(int *)(lVar43 + 0x24) = (int)plVar23[0xb];
        if (0 < *(int *)(lVar43 + 0x30)) {
          lVar45 = 0;
          lVar28 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar43 + 0x28) + 0x18 + lVar45) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(lVar43 + 0x28) + lVar45) + 0x44);
            lVar28 = lVar28 + 1;
            lVar45 = lVar45 + 0x30;
          } while (lVar28 < *(int *)(lVar43 + 0x30));
        }
        if (0 < *(int *)(lVar43 + 0x40)) {
          lVar45 = 0x10;
          lVar28 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar43 + 0x38) + lVar45) =
                 *(undefined4 *)(*(longlong *)(lVar43 + 0x38) + -4 + lVar45);
            lVar28 = lVar28 + 1;
            lVar45 = lVar45 + 0x20;
          } while (lVar28 < *(int *)(lVar43 + 0x40));
        }
      }
      else {
        *(undefined4 *)(lVar43 + 0x24) = 0;
        iVar37 = *(int *)(lVar43 + 0x30);
        if (iVar37 != 0) {
          local_388 = (code *)0x0;
          uStack_380 = (code *)0x0;
          if (iVar37 < 0) goto LAB_140b99622;
          FUN_14369c5e6(&local_388);
          if (0 < *(int *)(lVar43 + 0x30)) {
            lVar45 = 0;
            lVar28 = 0;
            do {
              pcVar51 = uStack_380;
              lVar43 = *local_480;
              lVar9 = (longlong)(int)uStack_380;
              uVar39 = (int)uStack_380 + 1;
              uStack_380 = (code *)CONCAT44(uStack_380._4_4_,uVar39);
              if (uStack_380._4_4_ < uVar39) {
                FUN_14369c716(&local_388,(ulonglong)pcVar51 & 0xffffffff);
              }
              pcVar51 = local_388;
              *(int *)(local_388 + lVar9 * 8) = (int)lVar28;
              uVar8 = (**(code **)(**(longlong **)(lVar43 + lVar45) + 0x178))();
              *(undefined4 *)(pcVar51 + lVar9 * 8 + 4) = uVar8;
              lVar28 = lVar28 + 1;
              lVar45 = lVar45 + 0x30;
              lVar43 = local_470;
            } while (lVar28 < *(int *)(local_470 + 0x30));
          }
          lVar45 = local_470;
          uVar32 = (ulonglong)(int)uStack_380;
          if (0 < (longlong)uVar32) {
            uVar16 = 1;
            do {
              if ((uVar16 < uVar32) &&
                 (*(int *)(local_388 + uVar16 * 8 + 4) < *(int *)(local_388 + uVar16 * 8 + -4))) {
                uVar19 = *(undefined8 *)(local_388 + (uVar16 - 1) * 8);
                *(undefined8 *)(local_388 + (uVar16 - 1) * 8) =
                     *(undefined8 *)(local_388 + uVar16 * 8);
                *(undefined8 *)(local_388 + uVar16 * 8) = uVar19;
              }
              uVar33 = uVar16 + 1;
              uVar16 = uVar16 + 2;
            } while (uVar33 < uVar32);
            local_448 = local_388;
            if (2 < (int)uStack_380) {
              iVar37 = 2;
              do {
                iVar24 = iVar37 * 2;
                local_440 = (code *)CONCAT44(local_440._4_4_,iVar24);
                local_458 = (code *)(longlong)iVar24;
                lVar43 = 0;
                do {
                  iVar40 = (int)uStack_380 - (int)lVar43;
                  if (iVar24 <= iVar40) {
                    iVar40 = iVar24;
                  }
                  if (iVar37 < iVar40 && 0 < iVar37) {
                    iVar25 = 0;
                    iVar27 = iVar37;
                    while( true ) {
                      lVar28 = (longlong)iVar27 * 8 + lVar43 * 8;
                      iVar48 = 0;
                      if (iVar27 - iVar25 != 0 && iVar25 <= iVar27) {
                        iVar48 = 0;
                        uVar39 = iVar27 - iVar25;
                        do {
                          iVar54 = (uVar39 >> 1) + iVar48;
                          if (*(int *)(local_388 +
                                      (longlong)iVar54 * 8 + (longlong)iVar25 * 8 + lVar43 * 8 + 4)
                              <= *(int *)(local_388 + lVar28 + 4)) {
                            iVar48 = iVar54 + (uVar39 & 1);
                          }
                          bVar55 = 1 < uVar39;
                          uVar39 = uVar39 >> 1;
                        } while (bVar55);
                      }
                      iVar48 = iVar48 + iVar25;
                      iVar25 = iVar27 - iVar48;
                      if (iVar25 == 0 || iVar27 < iVar48) break;
                      uVar39 = iVar40 - iVar27;
                      if (uVar39 == 0 || iVar40 < iVar27) {
                        iVar54 = 0;
                      }
                      else {
                        pcVar51 = local_388 + (lVar43 + iVar48) * 8;
                        iVar54 = 0;
                        uVar16 = (ulonglong)uVar39;
                        do {
                          uVar16 = uVar16 >> 1;
                          uVar53 = (uint)uVar16 + iVar54;
                          if (*(int *)(local_388 + (ulonglong)uVar53 * 8 + lVar28 + 4) <
                              *(int *)(pcVar51 + 4)) {
                            iVar54 = uVar53 + (uVar39 & 1);
                          }
                          bVar55 = 1 < uVar39;
                          uVar39 = (uint)uVar16;
                        } while (bVar55);
                        iVar27 = iVar27 + iVar54;
                        if (0 < iVar54) {
                          pcVar46 = pcVar51 + (longlong)(iVar27 - iVar48) * 8;
                          pcVar17 = pcVar51 + (longlong)iVar25 * 8;
                          pcVar42 = pcVar51 + (longlong)iVar25 * 8;
                          do {
                            while( true ) {
                              pcVar1 = pcVar17 + 8;
                              uVar19 = *(undefined8 *)pcVar51;
                              *(undefined8 *)pcVar51 = *(undefined8 *)pcVar17;
                              pcVar51 = pcVar51 + 8;
                              *(undefined8 *)pcVar17 = uVar19;
                              if (pcVar1 == pcVar46) break;
                              pcVar17 = pcVar1;
                              if (pcVar51 == pcVar42) {
                                pcVar42 = pcVar1;
                              }
                            }
                            pcVar17 = pcVar42;
                          } while (pcVar51 != pcVar42);
                        }
                      }
                      if ((iVar40 <= iVar27) || (iVar25 = iVar48 + iVar54 + 1, iVar27 <= iVar25))
                      break;
                    }
                  }
                  lVar43 = lVar43 + (longlong)local_458;
                } while (lVar43 < (longlong)uVar32);
                iVar37 = iVar24;
              } while (iVar24 < (int)uStack_380);
            }
            lVar43 = lVar45;
            if (0 < (int)uStack_380) {
              iVar37 = 0;
              plVar23 = local_480;
              do {
                lVar9 = (longlong)iVar37;
                plVar14 = (longlong *)(*plVar23 + (longlong)*(int *)(local_388 + lVar9 * 8) * 0x30);
                lVar28 = *(longlong *)(*plVar23 + (longlong)*(int *)(local_388 + lVar9 * 8) * 0x30);
                if ((*(int *)(lVar28 + 0x30) < 2) &&
                   ((*(byte *)((longlong)plVar14 + 0x2c) & 0x20) == 0)) {
                  uVar30 = *(ushort *)((longlong)plVar14 + 0x1c);
                  uVar32 = (ulonglong)uVar30;
                  local_88 = local_468;
                  uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uVar30);
                  plVar36 = local_468;
                  if (uVar30 < *(ushort *)((longlong)plVar14 + 0x1e)) {
                    do {
                      lVar28 = *plVar36;
                      iVar24 = (int)uVar32;
                      lVar9 = (longlong)iVar24 * 0x20;
                      puVar10 = (undefined8 *)(lVar28 + lVar9);
                      cVar3 = *(char *)(lVar28 + 0x1c + lVar9);
                      if ((cVar3 == '\0') || ((*(byte *)((longlong)puVar10 + 0x1d) & 2) != 0)) {
                        iVar40 = (**(code **)(*(longlong *)*puVar10 + 0x178))();
                        uVar39 = -iVar40 & (*(int *)(lVar45 + 0x24) + iVar40) - 1U;
                        *(uint *)(lVar45 + 0x24) = uVar39;
                        *(uint *)(*plVar36 + 0x10 + lVar9) = uVar39;
                        *(int *)(lVar45 + 0x24) =
                             *(int *)(lVar45 + 0x24) +
                             *(int *)(*(longlong *)(*plVar36 + lVar9) + 0x34) *
                             *(int *)(*(longlong *)(*plVar36 + lVar9) + 0x30);
                        if (*(char *)(*plVar36 + 0x1c + lVar9) == '\0') {
                          uVar32 = (ulonglong)(iVar24 + 1U);
                          uStack_80 = CONCAT44(uStack_80._4_4_,iVar24 + 1U);
                          if (*(char *)(lVar9 + 0x3c + *plVar36) != '\x01') {
                            lVar28 = *plVar36 + lVar9 + 0x20;
                            do {
                              *(undefined4 *)(lVar28 + 0x10) = *(undefined4 *)(lVar28 + 0xc);
                              FUN_14369c57b(&local_88);
                              uVar32 = (longlong)(int)(uint)uStack_80 + 1;
                              uStack_80 = CONCAT44(uStack_80._4_4_,(int)uVar32);
                              lVar28 = *local_88 + uVar32 * 0x20;
                              plVar36 = local_88;
                            } while (*(char *)(*local_88 + 0x1c + uVar32 * 0x20) != '\x01');
                          }
                        }
                      }
                      else {
                        uVar39 = *(uint *)(lVar45 + 0x24);
                        if (0 < (int)uVar39) {
                          if ((iVar24 < 1) || (cVar3 != '\x03')) {
                            iVar24 = (**(code **)(*(longlong *)*puVar10 + 0x178))();
                            uVar39 = -iVar24 & (*(int *)(lVar45 + 0x24) + iVar24) - 1U;
                          }
                          else {
                            if ((*(char *)(lVar28 + -4 + uVar32 * 0x20) != '\x03') ||
                               (lVar34 = uVar32 * 0x20 + lVar28,
                               *(int *)(lVar34 + -0x14) != *(int *)((longlong)puVar10 + 0xc)))
                            goto LAB_140b9916a;
                            uVar39 = *(uint *)(lVar34 + -0x10);
                          }
                          *(uint *)(lVar45 + 0x24) = uVar39;
                          lVar28 = *plVar36;
                        }
LAB_140b9916a:
                        *(uint *)(lVar28 + 0x10 + lVar9) = uVar39;
                        *(int *)(lVar45 + 0x24) =
                             *(int *)(lVar45 + 0x24) + (uint)*(ushort *)(*plVar36 + 10 + lVar9);
                      }
                      uVar39 = (int)uVar32 + 1;
                      uVar32 = (ulonglong)uVar39;
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar39);
                    } while ((int)uVar39 < (int)(uint)*(ushort *)((longlong)plVar14 + 0x1e));
                    uVar30 = *(ushort *)((longlong)plVar14 + 0x1c);
                    plVar23 = local_480;
                  }
                  *(undefined4 *)(plVar14 + 3) =
                       *(undefined4 *)(*local_468 + 0x10 + (ulonglong)uVar30 * 0x20);
                }
                else {
                  iVar24 = *(int *)(lVar28 + 0x44);
                  uVar39 = -*(int *)(local_388 + lVar9 * 8 + 4) &
                           (*(int *)(lVar45 + 0x24) + *(int *)(local_388 + lVar9 * 8 + 4)) - 1U;
                  *(uint *)(lVar45 + 0x24) = uVar39;
                  lVar28 = *plVar14;
                  iVar40 = *(int *)(lVar28 + 0x30);
                  if (0 < iVar40) {
                    iVar37 = 0;
                    do {
                      lVar28 = *(longlong *)(lVar45 + 0x28);
                      lVar34 = (longlong)*(int *)(local_388 + lVar9 * 8) * 0x30;
                      *(int *)(lVar28 + 0x18 + lVar34) =
                           (*(int *)(lVar45 + 0x24) - iVar24) +
                           *(int *)(*(longlong *)(lVar28 + lVar34) + 0x44);
                      uVar30 = *(ushort *)(lVar28 + 0x1c + lVar34);
                      uVar39 = (uint)uVar30;
                      local_88 = local_468;
                      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uVar30);
                      if (uVar30 < *(ushort *)(lVar28 + 0x1e + lVar34)) {
                        do {
                          *(int *)(*local_88 + 0x10 + (longlong)(int)uVar39 * 0x20) =
                               (*(int *)(lVar45 + 0x24) - iVar24) +
                               *(int *)(*local_88 + 0xc + (longlong)(int)uVar39 * 0x20);
                          FUN_14369c57b(&local_88);
                          uVar39 = (uint)uStack_80 + 1;
                          uStack_80 = CONCAT44(uStack_80._4_4_,uVar39);
                        } while ((int)uVar39 < (int)(uint)*(ushort *)(lVar28 + lVar34 + 0x1e));
                      }
                      iVar37 = iVar37 + 1;
                      lVar9 = lVar9 + 1;
                      lVar28 = *plVar14;
                      iVar40 = *(int *)(lVar28 + 0x30);
                    } while (iVar37 < iVar40);
                    uVar39 = *(uint *)(lVar45 + 0x24);
                    iVar37 = (int)lVar9;
                    plVar23 = local_480;
                  }
                  iVar37 = iVar37 + -1;
                  *(uint *)(lVar45 + 0x24) = iVar40 * *(int *)(lVar28 + 0x34) + uVar39;
                }
                iVar37 = iVar37 + 1;
              } while (iVar37 < (int)uStack_380);
            }
          }
          plVar23 = local_438;
          if (local_388 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      *(longlong **)(lVar43 + 0x60) = plVar23;
      if (local_418 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_390 = 0;
      if (local_398 != 0) {
        FUN_1400020a8();
      }
      if (local_3b0 == 0) {
        uVar32 = 0;
        uVar33 = 1;
        iVar37 = 0;
        iVar24 = 0;
      }
      else {
        puVar18 = local_3b8;
        if (local_3b8 == (uint *)0x0) {
          puVar18 = local_3c8;
        }
        uVar39 = *puVar18;
        if (uVar39 == 0) {
          iVar37 = local_3b0 + 0x1e;
          if (-1 < local_3b0 + -1) {
            iVar37 = local_3b0 + -1;
          }
          uVar32 = 0;
          uVar16 = (ulonglong)(uint)(iVar37 >> 5);
          if (iVar37 >> 5 < 1) {
            uVar16 = uVar32;
          }
          iVar37 = 0;
          do {
            if (uVar16 == uVar32) goto LAB_140b9937a;
            iVar37 = iVar37 + 0x20;
            uVar39 = puVar18[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar39 == 0);
        }
        else {
          uVar32 = 0;
          iVar37 = 0;
        }
        uVar33 = (ulonglong)(-uVar39 & uVar39);
        uVar16 = uVar33 * 2 + 1;
        lVar43 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar43 == 0; lVar43 = lVar43 + -1) {
          }
        }
        iVar24 = (iVar37 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
        if (local_3b0 <= iVar24) {
          iVar24 = local_3b0;
        }
      }
      if (iVar24 < local_3b0) {
        uVar39 = 0xffffffff;
        iVar40 = local_3b0;
        do {
          if (*(longlong *)(local_3d8 + 8 + (longlong)iVar24 * 0x20) != 0) {
            FUN_1400020a8();
            iVar40 = local_3b0;
          }
          uVar39 = uVar39 & ~(uint)uVar33;
          puVar18 = local_3b8;
          if (local_3b8 == (uint *)0x0) {
            puVar18 = local_3c8;
          }
          iVar24 = (int)uVar32;
          lVar43 = (longlong)iVar24;
          uVar53 = puVar18[lVar43] & uVar39;
          if (uVar53 == 0) {
            iVar27 = iVar40 + 0x1e;
            if (-1 < iVar40 + -1) {
              iVar27 = iVar40 + -1;
            }
            iVar25 = iVar27 >> 5;
            if (iVar27 >> 5 < iVar24) {
              iVar25 = iVar24;
            }
            lVar45 = 0;
            do {
              if (iVar25 - lVar43 == lVar45) goto LAB_140b9937a;
              iVar37 = iVar37 + 0x20;
              uVar53 = puVar18[lVar43 + lVar45 + 1];
              lVar45 = lVar45 + 1;
            } while (uVar53 == 0);
            uVar32 = (ulonglong)(uint)(iVar24 + (int)lVar45);
            uVar39 = 0xffffffff;
          }
          uVar33 = (ulonglong)(-uVar53 & uVar53);
          uVar16 = uVar33 * 2 + 1;
          lVar43 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar43 == 0; lVar43 = lVar43 + -1) {
            }
          }
          iVar24 = (iVar37 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
        } while (iVar24 < iVar40);
      }
LAB_140b9937a:
      uVar32 = uStack_3d0 >> 0x20;
      uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
      if ((int)uVar32 != 0) {
        FUN_1446f4a44(&local_3d8,0);
      }
      uStack_3a8 = 0xffffffff;
      local_3a4 = 0;
      local_3b0 = 0;
      if (0x80 < local_3ac) {
        local_3ac = 0x80;
        FUN_1446efbd8(local_3c8,0);
      }
      if (local_3b8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_3d8 != 0) {
        FUN_1400020a8();
      }
      if ((local_70 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_140b99622:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar37);
LAB_140b98081:
  local_78 = *(longlong *)(puVar21 + 4);
  local_88 = *(longlong **)puVar21;
  uStack_80 = *(longlong *)(puVar21 + 2);
  plVar14 = local_88;
  lVar45 = uStack_80;
  *(longlong *)(puVar21 + 4) = *(longlong *)(puVar35 + -2);
  lVar43 = *(longlong *)(puVar35 + -4);
  *(longlong *)puVar21 = *(longlong *)puVar41;
  *(longlong *)(puVar21 + 2) = lVar43;
  *(longlong *)(puVar35 + -2) = local_78;
  local_88._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (uint)((ulonglong)uStack_80 >> 0x20);
  *puVar41 = (uint)local_88;
  puVar35[-5] = local_88._4_4_;
  puVar35[-4] = (uint)uStack_80;
  puVar35[-3] = uStack_80._4_4_;
  iVar37 = iVar37 + -1;
  puVar35 = puVar35 + -0xc;
  local_88 = plVar14;
  uStack_80 = lVar45;
  if ((longlong)puVar44 - (longlong)puVar22 < (longlong)puVar29 - (longlong)puVar52) {
    if (puVar20 < puVar18) {
      *puVar10 = puVar20;
      puVar10[1] = puVar18;
      *(int *)(puVar10 + 2) = iVar37;
      puVar10 = puVar10 + 3;
    }
    puVar52 = puVar21;
    puVar29 = puVar44;
    if (puVar41 <= puVar21 + 6) goto LAB_140b98418;
  }
  else {
    if (puVar21 + 6 < puVar41) {
      *puVar10 = puVar21;
      puVar10[1] = puVar35;
      *(int *)(puVar10 + 2) = iVar37;
      puVar10 = puVar10 + 3;
    }
    puVar21 = puVar20;
    puVar35 = puVar18;
    puVar29 = puVar18;
    if (puVar18 <= puVar20) goto LAB_140b98418;
  }
  iVar24 = (int)((ulonglong)((longlong)puVar29 - (longlong)puVar52) >> 3) * -0x55555555;
  uVar39 = iVar24 + 1;
  puVar22 = puVar52;
  puVar18 = puVar35;
  if (iVar37 == 0) goto LAB_140b98153;
  goto LAB_140b97f8f;
joined_r0x000140b98a24:
  if (lVar43 == 0) goto LAB_140b98a3c;
  if (*(longlong *)(lVar43 + 0x20) == DAT_14cb01bc0) goto LAB_140b98a3e;
  lVar43 = *(longlong *)(lVar43 + 0x48);
  goto joined_r0x000140b98a24;
LAB_140b98a3c:
  lVar43 = 0;
LAB_140b98a3e:
  local_374 = *(undefined4 *)(lVar43 + 0x44);
  lVar43 = *(longlong *)(lVar9 + 0x70);
  lVar28 = lVar43;
  uVar53 = _DAT_00000044;
  local_378 = _DAT_00000044;
  if (lVar43 != 0) {
    do {
      if (*(longlong *)(lVar28 + 0x20) == DAT_14cb01bb0) goto LAB_140b98a6a;
      plVar14 = (longlong *)(lVar28 + 0x48);
      lVar28 = *plVar14;
    } while (*plVar14 != 0);
    lVar28 = 0;
LAB_140b98a6a:
    do {
      if (*(longlong *)(lVar43 + 0x20) == DAT_14cb01ba0) goto LAB_140b98a86;
      lVar43 = *(longlong *)(lVar43 + 0x48);
    } while (lVar43 != 0);
    lVar43 = 0;
LAB_140b98a86:
    uVar53 = *(uint *)(lVar43 + 0x44);
    local_378 = *(uint *)(lVar28 + 0x44);
  }
  local_388 = (code *)CONCAT62(local_388._2_6_,local_472);
  local_388 = (code *)CONCAT44(iVar37,(undefined4)local_388);
  uStack_380 = (code *)CONCAT44(uVar53,(uint)*(ushort *)(*(longlong *)(local_470 + 0x58) + 0x20));
  FUN_1459014e2(*(longlong *)(local_470 + 0x58),&local_388);
  local_44c = local_44c + 1;
  lVar43 = local_470;
  if ((char)local_448 == '\0') {
LAB_140b9897b:
    plVar14 = local_480;
    iVar37 = (int)local_458;
  }
  else {
    plVar14 = local_480;
    iVar37 = (int)local_458;
    if (local_418[lVar45 * 0x18 + 0xc] == (code)0x1) {
      local_460 = local_460 + 1;
      pvVar15 = *(void **)(local_470 + 0xd8);
      if (*(void **)(local_470 + 0xd8) == (void *)0x0) {
        pvVar15 = pvVar49;
      }
      puVar18 = (uint *)((longlong)pvVar15 + (local_420 >> 5 & 0x7ffffff) * 4);
      *puVar18 = *puVar18 | 1 << ((byte)local_420 & 0x1f);
    }
  }
LAB_140b986be:
  lVar45 = lVar45 + 1;
  if ((int)uStack_410 <= lVar45) goto LAB_140b98c57;
  goto LAB_140b9856c;
}



// FUNCTION 140b99854 FUN_140b99854 body=68 status=ok
// SIG undefined FUN_140b99854(void)

bool FUN_140b99854(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140b99898(param_3);
  if (lVar2 != 0) {
    uVar1 = FUN_1405d5f74(param_4);
    if ((ulonglong)*(byte *)(param_1 + 8) != 0x11) {
      *(undefined4 *)(lVar2 + 0xe3c + (ulonglong)*(byte *)(param_1 + 8) * 4) = uVar1;
    }
  }
  return lVar2 != 0;
}



// FUNCTION 140b99898 FUN_140b99898 body=286 status=ok
// SIG undefined FUN_140b99898(void)

longlong FUN_140b99898(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140940982;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146572ba2;
      local_38 = &LAB_148ca13ba;
      local_40 = &LAB_140e51436;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) goto LAB_140b998ef;
  }
  lVar1 = 0;
LAB_140b998ef:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b999b8 FUN_140b999b8 body=297 status=ok
// SIG undefined FUN_140b999b8(void)

undefined8 FUN_140b999b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140b99ada;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140b99ada;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140b99ada:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140b99a85;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140b99a85;
    }
  }
  uVar6 = 0;
LAB_140b99a85:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b99ae8 FUN_140b99ae8 body=400 status=ok
// SIG undefined FUN_140b99ae8(void)

void FUN_140b99ae8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x68) == 0)) ||
       (*(int *)(*(longlong *)(param_1 + 0x68) + 8) < 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    FUN_1449027d0(param_1,&local_48);
    plVar3 = *(longlong **)(local_48 + 0x2e0);
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 6));
    *(int *)(plVar3 + 5) = (int)plVar3[5] + 1;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    lVar9 = *plVar3;
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 2;
    if ((longlong)(int)plVar3[1] != 0) {
      lVar10 = (longlong)(int)plVar3[1] * 0x130 + lVar9;
      do {
        *(undefined1 *)(lVar9 + 0xca) = 0;
        plVar4 = *(longlong **)(param_1 + 0x68);
        if (plVar4 == (longlong *)0x0) {
LAB_140b99c0c:
          lVar8 = 0;
        }
        else {
          iVar6 = (int)plVar4[1];
          do {
            if (iVar6 == 0) goto LAB_140b99c0c;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar11 = iVar6 == iVar5;
            if (bVar11) {
              *(int *)(plVar4 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar11);
          lVar8 = *(longlong *)(param_1 + 0x60);
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        iVar6 = *(int *)(lVar8 + 0xe8);
        if ((longlong)iVar6 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0xe0);
          lVar7 = 0;
          do {
            if (*(int *)(lVar9 + 0xdc) == *(int *)(lVar8 + 0x14 + lVar7)) {
              *(undefined1 *)(lVar9 + 0xca) = 1;
            }
            lVar7 = lVar7 + 0x30;
          } while ((longlong)iVar6 * 0x30 != lVar7);
        }
        lVar9 = lVar9 + 0x130;
      } while (lVar9 != lVar10);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 6));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b99c9a FUN_140b99c9a body=330 status=ok
// SIG undefined FUN_140b99c9a(void)

undefined8 * FUN_140b99c9a(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a463de0;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  lVar2 = FUN_14009d2a0();
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x58);
  FUN_140b99de6(param_1 + 0x16,2);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0x58);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b99de6 FUN_140b99de6 body=447 status=ok
// SIG undefined FUN_140b99de6(void)

void FUN_140b99de6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140a1bc36(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14754f458(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x130 + lVar2 + -300);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x130) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x4c;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 140b99fa6 FUN_140b99fa6 body=1162 status=ok
// SIG undefined FUN_140b99fa6(void)

void FUN_140b99fa6(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  byte bVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140b9a432();
  if (*(char *)(param_1 + 600) == '\x02') goto LAB_140b9a0cf;
  if ((*(byte *)(param_1 + 0x1d0) & 0x80) == 0) {
    if (*(char *)(param_1 + 0x570) != '\0') {
      uVar8 = FUN_140b9a4e0(param_1);
      *(undefined4 *)(param_1 + 0x558) = uVar8;
    }
  }
  else if (*(char *)(param_1 + 0x570) != '\0') {
    fVar9 = (float)FUN_140b9a4e0(param_1);
    *(float *)(param_1 + 0x558) = fVar9;
    fVar9 = (fVar9 + -1.0) * *(float *)(param_1 + 0x34c);
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      *(undefined1 *)(param_1 + 0x358) = 1;
      *(float *)(param_1 + 0x340) = fVar9 + *(float *)(param_1 + 0x340);
    }
  }
  if (*(longlong **)(param_1 + 0x478) == (longlong *)0x0) {
LAB_140b9a08e:
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x478) + 0x5d8))();
    if (lVar3 == 0) goto LAB_140b9a08e;
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140b9a08e;
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 == 0) {
LAB_140b9a0c4:
    lVar4 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140b9a0c4;
  }
  if (*(char *)(param_1 + 0x51a) == '\x01') goto LAB_140b9a0cf;
  if (lVar3 == 0) {
    if (lVar4 == 0) goto LAB_140b9a0cf;
    lVar3 = FUN_1405c673d();
    if (*(int *)(lVar3 + 0x30) < 1) goto LAB_140b9a0cf;
    bVar7 = (char)*(int *)(lVar3 + 0x30) - 1;
    bVar2 = FUN_1409fe09c(lVar4);
    if (bVar2 < bVar7) {
      bVar7 = bVar2;
    }
    lVar3 = *(longlong *)(lVar3 + 0x28);
    fVar9 = *(float *)(lVar3 + 0x68 + (ulonglong)bVar7 * 0x170);
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      *(undefined1 *)(param_1 + 0x358) = 1;
      *(float *)(param_1 + 0x338 + (ulonglong)(fVar9 <= 0.0) * 4) =
           fVar9 + *(float *)(param_1 + 0x338 + (ulonglong)(fVar9 <= 0.0) * 4);
    }
    if (((*(byte *)(param_1 + 0x1d0) & 0x20) != 0) ||
       (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 == (longlong *)0x0)) goto LAB_140b9a0cf;
    lVar4 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar5 = FUN_14018fb44();
    if ((lVar5 == 0) ||
       (((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) || ((ulonglong)*(byte *)((longlong)plVar1 + 0x121) == 0))))
    goto LAB_140b9a0cf;
    fVar9 = *(float *)(lVar3 + (ulonglong)bVar7 * 0x170 + 0x84 +
                      (ulonglong)*(byte *)((longlong)plVar1 + 0x121) * 4);
  }
  else {
    lVar4 = FUN_1405c673d();
    if (*(int *)(lVar4 + 0x30) < 1) goto LAB_140b9a0cf;
    bVar7 = (char)*(int *)(lVar4 + 0x30) - 1;
    bVar2 = FUN_1409fe09c(lVar3);
    if (bVar2 < bVar7) {
      bVar7 = bVar2;
    }
    lVar3 = *(longlong *)(lVar4 + 0x28);
    fVar9 = *(float *)(lVar3 + 100 + (ulonglong)bVar7 * 0x170);
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      *(undefined1 *)(param_1 + 0x358) = 1;
      *(float *)(param_1 + 0x338 + (ulonglong)(fVar9 <= 0.0) * 4) =
           fVar9 + *(float *)(param_1 + 0x338 + (ulonglong)(fVar9 <= 0.0) * 4);
    }
    if (((*(byte *)(param_1 + 0x1d0) & 0x20) != 0) ||
       (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 == (longlong *)0x0)) goto LAB_140b9a0cf;
    lVar4 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar5 = FUN_14018fb44();
    if ((lVar5 == 0) ||
       (((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) || ((ulonglong)*(byte *)((longlong)plVar1 + 0x121) == 0))))
    goto LAB_140b9a0cf;
    fVar9 = *(float *)(lVar3 + (ulonglong)bVar7 * 0x170 + 0x6c +
                      (ulonglong)*(byte *)((longlong)plVar1 + 0x121) * 4);
  }
  pfVar6 = (float *)(param_1 + 0x338);
  if ((fVar9 != 0.0) || (NAN(fVar9))) {
    *(undefined1 *)(param_1 + 0x358) = 1;
    if (fVar9 <= 0.0) {
      pfVar6 = (float *)(param_1 + 0x33c);
    }
    *pfVar6 = fVar9 + *pfVar6;
  }
LAB_140b9a0cf:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9a432 FUN_140b9a432 body=42 status=ok
// SIG undefined FUN_140b9a432(void)

void FUN_140b9a432(longlong param_1)

{
  if (*(char *)(param_1 + 600) != '\x02') {
    FUN_140b9a5c2();
    FUN_140b9a45c(param_1);
    return;
  }
  return;
}



// FUNCTION 140b9a45c FUN_140b9a45c body=131 status=ok
// SIG undefined FUN_140b9a45c(void)

void FUN_140b9a45c(longlong *param_1)

{
  undefined1 auStack_78 [47];
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_49 = '\0';
  (**(code **)(*param_1 + 400))(0,&local_48,&local_49);
  if (local_49 == '\x01') {
    FUN_140af2ad2(param_1 + 0x67,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9a4e0 FUN_140b9a4e0 body=225 status=ok
// SIG undefined FUN_140b9a4e0(void)

undefined8 FUN_140b9a4e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar9;
  undefined8 uVar10;
  
  fVar11 = 1.0;
  uVar12 = 0;
  if (*(char *)(param_1 + 0x570) == '\x01') {
    lVar6 = FUN_1405831b2();
    bVar4 = *(char *)(param_1 + 0x51a) - 1;
    if (((bVar4 < 3) &&
        (plVar3 = *(longlong **)(param_1 + *(longlong *)(&DAT_14b9668b8 + (ulonglong)bVar4 * 8)),
        plVar3 != (longlong *)0x0)) &&
       (lVar6 = lVar6 + (ulonglong)bVar4 * -0x50 + 0xff0, lVar6 != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x56c);
      uVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
      uVar9 = FUN_1418e1d66(uVar5,lVar6,plVar3);
      fVar7 = (float)uVar9;
      uVar10 = FUN_1418e1d66(uVar2,lVar6,plVar3);
      fVar8 = (float)uVar10;
      if ((0.0 < fVar7) && (0.0 < fVar8)) {
        cVar1 = *(char *)(param_1 + 0x51a);
        if (cVar1 != '\x03') {
          if (cVar1 == '\x02') {
            fVar11 = fVar8 / fVar7;
            uVar12 = (int)((ulonglong)uVar10 >> 0x20);
            goto LAB_140b9a5ab;
          }
          if (cVar1 != '\x01') goto LAB_140b9a5ab;
        }
        fVar11 = fVar7 / fVar8;
        uVar12 = (int)((ulonglong)uVar9 >> 0x20);
      }
    }
  }
LAB_140b9a5ab:
  return CONCAT44(uVar12,fVar11);
}



// FUNCTION 140b9a5c2 FUN_140b9a5c2 body=2093 status=ok
// SIG undefined FUN_140b9a5c2(void)

void FUN_140b9a5c2(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  ulonglong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(char *)(param_1 + 0x4d8) == '\x01') goto LAB_140b9ad95;
  if ((*(longlong *)(param_1 + 0x458) == 0) || (*(longlong **)(param_1 + 0x460) == (longlong *)0x0))
  {
LAB_140b9a713:
    local_180 = 0;
    lVar10 = 0;
  }
  else {
    lVar10 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0x10))();
    iVar2 = *(int *)(lVar10 + 0x178);
    if ((longlong)iVar2 < 1) goto LAB_140b9a713;
    lVar12 = *(longlong *)(lVar10 + 0x170);
    lVar19 = 0;
    local_180 = 0;
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar12 + lVar19);
      lVar11 = FUN_1402179b4(lVar4 + 0x228);
      if ((lVar11 != 0) && ((uint)local_180 <= *(uint *)(lVar4 + 0x240))) {
        local_190 = *(undefined1 *)(param_1 + 0x540);
        iVar3 = *(int *)(lVar12 + 0x14 + lVar19);
        if ((iVar3 == 0) || (uVar9 = *(uint *)(lVar12 + 0x10 + lVar19), (int)uVar9 < 0)) {
LAB_140b9a70e:
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            puVar17 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != iVar3)) ||
               ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140b9a70e;
            uVar18 = *puVar17;
          }
        }
        local_198 = 0;
        cVar8 = FUN_143d0298a(param_1,lVar4,0,uVar18);
        if (cVar8 != '\0') {
          lVar10 = FUN_1402179b4(lVar4 + 0x228);
          local_180 = (ulonglong)*(uint *)(lVar4 + 0x240);
        }
      }
      lVar19 = lVar19 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar19);
  }
  if ((*(longlong *)(param_1 + 0x438) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x440), plVar5 != (longlong *)0x0)) {
    plVar14 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      plVar14 = *(longlong **)(param_1 + 0x460);
    }
    if ((*(longlong *)(param_1 + 0x438) != *(longlong *)(param_1 + 0x458)) || (plVar5 != plVar14)) {
      lVar12 = (**(code **)(*plVar5 + 0x10))();
      iVar2 = *(int *)(lVar12 + 0x178);
      if (0 < (longlong)iVar2) {
        lVar12 = *(longlong *)(lVar12 + 0x170);
        lVar19 = 0;
        do {
          lVar4 = *(longlong *)(lVar12 + lVar19);
          lVar11 = FUN_1402179b4(lVar4 + 0x228);
          if (((lVar11 != 0) && (*(char *)(lVar4 + 0x221) == '\x01')) &&
             ((uint)local_180 <= *(uint *)(lVar4 + 0x240))) {
            local_190 = *(undefined1 *)(param_1 + 0x540);
            iVar3 = *(int *)(lVar12 + 0x14 + lVar19);
            if ((iVar3 == 0) || (uVar9 = *(uint *)(lVar12 + 0x10 + lVar19), (int)uVar9 < 0)) {
LAB_140b9a85d:
              uVar18 = 0;
            }
            else {
              uVar18 = 0;
              if ((int)uVar9 < DAT_14c9647dc) {
                puVar17 = (undefined8 *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != iVar3)) ||
                   ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140b9a85d;
                uVar18 = *puVar17;
              }
            }
            local_198 = 0;
            cVar8 = FUN_143d0298a(param_1,lVar4,0,uVar18);
            if (cVar8 != '\0') {
              lVar10 = FUN_1402179b4(lVar4 + 0x228);
              local_180 = (ulonglong)*(uint *)(lVar4 + 0x240);
            }
          }
          lVar19 = lVar19 + 0x20;
        } while ((longlong)iVar2 * 0x20 != lVar19);
      }
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x488);
  if ((lVar12 != 0) && (iVar2 = *(int *)(lVar12 + 0x40), 0 < (longlong)iVar2)) {
    lVar12 = *(longlong *)(lVar12 + 0x38);
    lVar19 = 0;
    do {
      lVar4 = *(longlong *)(lVar12 + lVar19);
      lVar11 = FUN_1402179b4(lVar4 + 0x228);
      if ((lVar11 != 0) && ((uint)local_180 <= *(uint *)(lVar4 + 0x240))) {
        local_190 = *(undefined1 *)(param_1 + 0x540);
        iVar3 = *(int *)(lVar12 + 0x14 + lVar19);
        if ((iVar3 == 0) || (uVar9 = *(uint *)(lVar12 + 0x10 + lVar19), (int)uVar9 < 0)) {
LAB_140b9a954:
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            puVar17 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != iVar3)) ||
               ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140b9a954;
            uVar18 = *puVar17;
          }
        }
        local_198 = 0;
        cVar8 = FUN_143d0298a(param_1,lVar4,0,uVar18);
        if (cVar8 != '\0') {
          lVar10 = FUN_1402179b4(lVar4 + 0x228);
          local_180 = (ulonglong)*(uint *)(lVar4 + 0x240);
        }
      }
      lVar19 = lVar19 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar19);
  }
  if (*(longlong **)(param_1 + 0x4a0) != (longlong *)0x0) {
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x10))();
    iVar2 = *(int *)(lVar12 + 0x60);
    if (0 < (longlong)iVar2) {
      lVar12 = *(longlong *)(lVar12 + 0x58);
      lVar19 = 0;
      do {
        lVar4 = *(longlong *)(lVar12 + lVar19);
        lVar11 = FUN_1402179b4(lVar4 + 0x228);
        if ((lVar11 != 0) && ((uint)local_180 <= *(uint *)(lVar4 + 0x240))) {
          local_190 = *(undefined1 *)(param_1 + 0x540);
          iVar3 = *(int *)(lVar12 + 0x14 + lVar19);
          if ((iVar3 == 0) || (uVar9 = *(uint *)(lVar12 + 0x10 + lVar19), (int)uVar9 < 0)) {
LAB_140b9aa51:
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            if ((int)uVar9 < DAT_14c9647dc) {
              puVar17 = (undefined8 *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((puVar17 == (undefined8 *)0x0) || (*(int *)(puVar17 + 2) != iVar3)) ||
                 ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140b9aa51;
              uVar18 = *puVar17;
            }
          }
          local_198 = 0;
          cVar8 = FUN_143d0298a(param_1,lVar4,0,uVar18);
          if (cVar8 != '\0') {
            lVar10 = FUN_1402179b4(lVar4 + 0x228);
            local_180 = (ulonglong)*(uint *)(lVar4 + 0x240);
          }
        }
        lVar19 = lVar19 + 0x20;
      } while ((longlong)iVar2 * 0x20 != lVar19);
    }
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  lVar12 = FUN_141845d06();
  if ((longlong)*(int *)(param_1 + 0x2e8) != 0) {
    puVar17 = *(undefined8 **)(param_1 + 0x2e0);
    puVar15 = puVar17 + (longlong)*(int *)(param_1 + 0x2e8) * 4;
    local_168 = lVar12 + 0x30;
    local_178 = param_1;
    local_170 = lVar10;
    do {
      plVar5 = (longlong *)*puVar17;
      plVar14 = (longlong *)puVar17[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      uVar18 = puVar17[2];
      uVar6 = puVar17[3];
      lVar10 = (**(code **)(*plVar5 + 8))(plVar5);
      uVar7 = local_50;
      if (((lVar12 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar12 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
          local_168)) {
        if (plVar14 != (longlong *)0x0) goto LAB_140b9aafc;
      }
      else {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        lVar10 = (longlong)(int)local_50;
        uVar9 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar9);
        if (local_50._4_4_ < uVar9) {
          FUN_148822b36(local_158,uVar7 & 0xffffffff);
        }
        puVar13 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar13 = local_158;
        }
        lVar10 = lVar10 * 0x20;
        *(longlong **)(puVar13 + lVar10) = plVar5;
        *(longlong **)(puVar13 + lVar10 + 8) = plVar14;
        if (plVar14 == (longlong *)0x0) {
          *(undefined8 *)(puVar13 + lVar10 + 0x10) = uVar18;
          *(undefined8 *)(puVar13 + lVar10 + 0x18) = uVar6;
        }
        else {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          *(undefined8 *)(puVar13 + lVar10 + 0x10) = uVar18;
          *(undefined8 *)(puVar13 + lVar10 + 0x18) = uVar6;
          LOCK();
          plVar5 = plVar14 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
LAB_140b9aafc:
          LOCK();
          plVar5 = plVar14 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      param_1 = local_178;
      puVar17 = puVar17 + 4;
    } while (puVar17 != puVar15);
    lVar12 = (longlong)(int)local_50;
    lVar10 = local_170;
    if (0 < lVar12) {
      puVar13 = local_158;
      if (local_58 != (undefined1 *)0x0) {
        puVar13 = local_58;
      }
      lVar19 = 0;
      do {
        lVar4 = *(longlong *)(puVar13 + lVar19);
        lVar11 = FUN_1402179b4(lVar4 + 0x228);
        if ((lVar11 != 0) && ((uint)local_180 <= *(uint *)(lVar4 + 0x240))) {
          local_190 = *(undefined1 *)(param_1 + 0x540);
          if ((*(int *)(puVar13 + lVar19 + 0x14) == 0) ||
             (uVar9 = *(uint *)(puVar13 + lVar19 + 0x10), (int)uVar9 < 0)) {
LAB_140b9ace5:
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            if ((int)uVar9 < DAT_14c9647dc) {
              puVar17 = (undefined8 *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((puVar17 == (undefined8 *)0x0) ||
                  (*(int *)(puVar17 + 2) != *(int *)(puVar13 + lVar19 + 0x14))) ||
                 ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140b9ace5;
              uVar18 = *puVar17;
            }
          }
          local_198 = 0;
          cVar8 = FUN_143d0298a(param_1,lVar4,0,uVar18);
          if (cVar8 != '\0') {
            lVar10 = FUN_1402179b4(lVar4 + 0x228);
            local_180 = (ulonglong)*(uint *)(lVar4 + 0x240);
          }
        }
        lVar19 = lVar19 + 0x20;
      } while (lVar12 * 0x20 != lVar19);
    }
  }
  if (lVar10 != 0) {
    puVar16 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar10 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar10 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar10);
      DAT_14c947fe0 = lVar10;
    }
    FUN_140045924(DAT_14c947fe0,&local_160,puVar16,1);
    if ((*(longlong *)(param_1 + 0x4a8) != local_160) || (*(int *)(param_1 + 0x4b0) != 0x3006)) {
      *(longlong *)(param_1 + 0x4a8) = local_160;
      *(undefined4 *)(param_1 + 0x4b0) = 0x3006;
      *(undefined8 *)(param_1 + 0x4b8) = 0;
    }
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  puVar13 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar13 = local_158;
  }
  FUN_140d9b098(puVar13,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_140b9ad95:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9adf0 FUN_140b9adf0 body=362 status=ok
// SIG undefined FUN_140b9adf0(void)

void FUN_140b9adf0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char local_98 [16];
  longlong *local_88;
  undefined4 local_70 [2];
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140b9af5c();
  lVar2 = *param_2;
  local_98[0] = '\0';
  local_70[0] = 0;
  FUN_14083c332(local_98,param_2);
  FUN_1448729ea(param_1 + 0xe0,local_68,local_98);
  iVar5 = FUN_14005fbd2(local_68,0x1e);
  uVar6 = FUN_140b9b479();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar3,uVar6,2);
  }
  local_a8 = 0;
  FUN_14083c276(lVar2,uVar6,(float)iVar5,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pppuVar7 = local_68;
    if (0x18 < local_50) {
      pppuVar7 = (undefined8 ***)local_68[0];
    }
    (*pcVar4)(pppuVar7);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_1448173f8(local_70);
  if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9af5c FUN_140b9af5c body=1308 status=ok
// SIG undefined FUN_140b9af5c(void)

void FUN_140b9af5c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  int local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8 = 0;
  FUN_14083c332(local_e0);
  puVar11 = &local_b0;
  FUN_1448729ea(param_1 + 0x38,puVar11,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = 0;
    if (local_68 != 0) {
      uVar13 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b9b479();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar11);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar10 = (longlong)local_b8 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8 = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8 = 0;
  FUN_14083c332(local_e0,param_2);
  puVar11 = &local_b0;
  FUN_1448729ea(param_1 + 0x88,puVar11,local_e0);
  uVar13 = local_b0;
  if (local_90 != 3) {
    puVar8 = &local_88;
    FUN_1400b56fe(puVar8,&local_b0,3);
    uVar13 = 0;
    if (local_68 != 0) {
      uVar13 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar8 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140b9b479();
  lVar10 = *(longlong *)(lVar2 + 0x200);
  if (lVar10 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar10,uVar5,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar13,param_3);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar3)(puVar11);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar2 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar10 = (longlong)local_b8 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar2 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar2 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar2 + lVar12) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar2 + 4 + lVar12) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8 = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    FUN_140b9b4b2(*param_2,param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9b479 FUN_140b9b479 body=57 status=ok
// SIG undefined FUN_140b9b479(void)

void FUN_140b9b479(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c10 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c10 = FUN_14171c317(FUN_146573e38,uVar1,L"EAtt_WeaponBehaviorAmmo");
  }
  return;
}



// FUNCTION 140b9b4b2 FUN_140b9b4b2 body=84 status=ok
// SIG undefined FUN_140b9b4b2(void)

void FUN_140b9b4b2(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x2d0);
  *(uint *)(param_1 + 0x2d0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2d4) < iVar1 + 1U) {
    FUN_141733800(param_1 + 0x2c0,iVar1);
  }
  lVar2 = param_1 + 0x2c0;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2c8);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 140b9b50c FUN_140b9b50c body=646 status=ok
// SIG undefined FUN_140b9b50c(void)

void FUN_140b9b50c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 6;
  cVar4 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar4 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar6 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar6;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar6 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_98[2] = lVar7;
      *local_98 = &PTR_FUN_14b9a6820;
      local_98[3] = 0;
      iVar8 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar8 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar8 = *(int *)(lVar5 + 0x10);
          bVar10 = iVar8 == 0;
          if (bVar10) {
            *(int *)(lVar5 + 0x10) = iVar9;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar8 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar8;
      puVar6[4] = param_1;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar3,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_90 != 0) {
        if (local_98 == (undefined8 *)0x0) goto LAB_140b9b689;
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
LAB_140b9b689:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9b796 FUN_140b9b796 body=904 status=ok
// SIG undefined FUN_140b9b796(void)

longlong *
FUN_140b9b796(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_84;
  uint local_80;
  undefined4 local_7c;
  longlong *local_78;
  uint *local_70;
  byte *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *param_3;
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  FUN_140b9bb20(param_1,param_3,param_4,param_5);
  iVar5 = *(int *)(param_1 + 0x40);
  local_7c = param_4;
  if (iVar5 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar18 = 0;
    iVar15 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x28);
    }
    uVar21 = *puVar9;
    if (uVar21 == 0) {
      iVar18 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar18 = iVar5 + -1;
      }
      uVar16 = 0;
      uVar13 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar13 = uVar16;
      }
      iVar18 = 0;
      do {
        if (uVar13 == uVar16) goto LAB_140b9b990;
        iVar18 = iVar18 + 0x20;
        uVar21 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar16 = 0;
      iVar18 = 0;
    }
    uVar17 = (ulonglong)(-uVar21 & uVar21);
    uVar13 = uVar17 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar15 = (iVar18 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar15) {
      iVar15 = iVar5;
    }
  }
  if (iVar15 != iVar5) {
    uVar21 = 0xffffffff;
    local_78 = param_2;
    local_70 = (uint *)(param_1 + 0x28);
    local_84 = iVar18;
    do {
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar15 * 0x18);
      local_58 = *puVar4;
      uStack_54 = puVar4[1];
      uStack_50 = puVar4[2];
      uStack_4c = puVar4[3];
      puVar8 = &DAT_14c9a1308;
      local_80 = uVar21;
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)FUN_1446e60f4(lVar6,&local_58);
      }
      local_68 = (byte *)*puVar8;
      local_60 = (longlong *)puVar8[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_140b9bb20(CONCAT44(uStack_4c,uStack_50),&local_68,local_7c,param_5);
      if ((local_68 != (byte *)0x0) && ((*local_68 & 0x6b) == 3)) {
        pbVar12 = (byte *)*param_3;
        if ((pbVar12 == (byte *)0x0) || ((*pbVar12 & 0x6b) != 3)) {
          FUN_14009b010(param_3,3,0);
          pbVar12 = (byte *)*param_3;
          if (pbVar12 == (byte *)0x0) goto LAB_140b9b8ce;
        }
        local_98 = 0;
        FUN_140516f2a(pbVar12,&local_58,&local_68,0);
      }
LAB_140b9b8ce:
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      uVar21 = local_80 & ~(uint)uVar17;
      puVar9 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar9 = local_70;
      }
      iVar18 = *(int *)(param_1 + 0x40);
      iVar15 = (int)uVar16;
      lVar19 = (longlong)iVar15;
      uVar14 = puVar9[lVar19] & uVar21;
      if (uVar14 == 0) {
        iVar10 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar10 = iVar18 + -1;
        }
        iVar10 = iVar10 >> 5;
        local_84 = local_84 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar15 < iVar10) {
          lVar20 = 0;
          do {
            uVar14 = puVar9[lVar19 + lVar20 + 1];
            if (uVar14 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar20 + 1);
              uVar21 = 0xffffffff;
              goto LAB_140b9b95e;
            }
            local_84 = local_84 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar11 - lVar19 != lVar20);
          uVar21 = 0xffffffff;
          iVar15 = iVar11;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar18;
      }
      else {
LAB_140b9b95e:
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar13 = uVar17 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar15 = (local_84 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar15) {
          iVar15 = iVar18;
        }
      }
      param_2 = local_78;
    } while (iVar15 != iVar5);
  }
LAB_140b9b990:
  *param_2 = *param_3;
  lVar6 = param_3[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b9bb20 FUN_140b9bb20 body=401 status=ok
// SIG undefined FUN_140b9bb20(void)

void FUN_140b9bb20(short *param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  short sVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  longlong *plStack_60;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  sVar6 = *param_1;
  local_54 = param_3;
  if (0 < sVar6) {
    lVar7 = 0;
    do {
      uVar3 = *(ushort *)(*(longlong *)(param_1 + 4) + lVar7 * 2);
      if ((-1 < (short)uVar3) && ((int)(short)uVar3 < *(int *)(*param_4 + 200))) {
        plVar4 = *(longlong **)(*(longlong *)(*param_4 + 0xc0) + (ulonglong)uVar3 * 8);
        if ((DAT_14c950c29 == '\x01') && (plVar4 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar4);
        }
        else if (plVar4 == (longlong *)0x0) goto LAB_140b9bbf5;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        local_78 = &local_68;
        cVar5 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_4,&local_54,param_2);
        plVar4 = plStack_60;
        if (cVar5 != '\0') {
          if (param_2 != &DAT_14c9a1308) {
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
              UNLOCK();
            }
            plVar4 = (longlong *)param_2[1];
            *param_2 = local_68;
            param_2[1] = plStack_60;
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
          }
          plVar4 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_60)(plStack_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          break;
        }
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        sVar6 = *param_1;
      }
LAB_140b9bbf5:
      lVar7 = lVar7 + 1;
    } while (lVar7 < sVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9bcb2 FUN_140b9bcb2 body=413 status=ok
// SIG undefined FUN_140b9bcb2(void)

longlong * FUN_140b9bcb2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14577e8d6(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_140b9be50(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_14577e8d6(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1471b0d60(param_2,iVar2);
        }
        FUN_140b9be50(param_1,(longlong)iVar2 * 8 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b9be50 FUN_140b9be50 body=168 status=ok
// SIG undefined FUN_140b9be50(void)

longlong * FUN_140b9be50(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140b9bef8 FUN_140b9bef8 body=985 status=ok
// SIG undefined FUN_140b9bef8(void)

void FUN_140b9bef8(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(int *)(param_1 + 2) = param_4;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_88 = CONCAT44(4,param_4);
  uStack_80 = CONCAT44(uStack_80._4_4_,param_5) | 0x10110;
  local_48 = param_3;
  if ((param_5 & 0x100000) == 0 && param_4 == 0) {
    FUN_14570b4be(param_2,&local_78,param_5 | 0x10110,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_88);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_88);
    *(undefined4 *)(local_90 + 0x18) = 0x70;
  }
  if (&local_90 == param_1) {
LAB_140b9c0a5:
    lVar3 = local_90;
    if (local_90 != 0) {
      LOCK();
      puVar1 = (uint *)(local_90 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_90 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_90 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  else {
    lVar3 = *param_1;
    *param_1 = local_90;
    local_90 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar3 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar3;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
      goto LAB_140b9c0a5;
    }
  }
  uStack_80 = 0;
  uVar2 = *(uint *)(*param_1 + 0x28);
  bVar4 = 4;
  if (((uVar2 & 0x10) == 0) && (bVar4 = 2, (uVar2 >> 0x10 & 1) == 0)) {
    bVar4 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + 1;
  }
  local_a8 = &local_88;
  local_88 = (ulonglong)bVar4 << 0x10;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_90,param_2);
  param_1 = param_1 + 1;
  if (param_1 != &local_90) {
    lVar3 = *param_1;
    *param_1 = local_90;
    local_90 = 0;
    if (lVar3 == 0) goto LAB_140b9c22d;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar3 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar3 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar3;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_90 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_90 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar3;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_140b9c22d:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9c2d2 FUN_140b9c2d2 body=112 status=ok
// SIG undefined FUN_140b9c2d2(void)

void FUN_140b9c2d2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140b9c344(param_1,&local_40);
  local_28 = local_40;
  FUN_1401533ba(local_34,&local_28,1);
  FUN_140b9c3d4(param_1,local_34,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9c344 FUN_140b9c344 body=142 status=ok
// SIG undefined FUN_140b9c344(void)

undefined8 FUN_140b9c344(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
  FUN_140002266(&local_28,L"__GeneratedBinder_%d");
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140b9c3d4 FUN_140b9c3d4 body=339 status=ok
// SIG undefined FUN_140b9c3d4(void)

longlong * FUN_140b9c3d4(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14b41ba60;
  local_38 = local_30 + 2;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[2] = (longlong)&PTR_FUN_14b417bb0;
  local_30[5] = *param_2;
  *(int *)(local_30 + 6) = (int)param_2[1];
  *(undefined4 *)((longlong)local_30 + 0x3c) = DAT_14c948620;
  *(undefined8 *)((longlong)local_30 + 0x34) = DAT_14c948618;
  *(undefined1 *)(local_30 + 8) = 0;
  *(undefined1 *)(local_30 + 0xf) = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  FUN_1408241ea();
  iVar3 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar3 + 1U) {
    FUN_14082428c((longlong *)(param_1 + 0x180),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x180);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = local_38;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  if (*param_3 != 0) {
    FUN_14082216c(local_38,param_3);
  }
  plVar6 = local_30;
  plVar5 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9c536 FUN_140b9c536 body=311 status=ok
// SIG undefined FUN_140b9c536(void)

void FUN_140b9c536(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = *param_3;
    if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x20))) {
      lVar4 = 0;
      do {
        lVar3 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 8 + lVar4 * 0x20);
        if (lVar3 != 0) {
          lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + lVar4 * 0x20);
          lVar2 = 0;
          do {
            local_4c = *(undefined4 *)(lVar1 + lVar2);
            local_50 = (int)lVar4;
            FUN_1403e2550(*param_1 + 0xe8,local_54,&local_50);
            lVar2 = lVar2 + 4;
          } while (lVar3 * 4 != lVar2);
          lVar1 = *param_3;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar1 + 0x20));
    }
    lVar1 = param_3[1];
    if ((lVar1 != 0) && (local_50 = 0, 0 < *(int *)(lVar1 + 0x20))) {
      do {
        if (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 8 + (longlong)local_50 * 0x10)) {
          FUN_1447cbafe(*param_1 + 0x98,local_54,&local_50,0);
          lVar1 = param_3[1];
        }
        local_50 = local_50 + 1;
      } while (local_50 < *(int *)(lVar1 + 0x20));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9c67c FUN_140b9c67c body=750 status=ok
// SIG undefined FUN_140b9c67c(void)

void FUN_140b9c67c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  int local_88;
  void *local_80;
  int local_78;
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948490) {
    FUN_144b3d300(&DAT_14c948490);
    if (DAT_14c948490 == -1) {
      FUN_1400684da(&DAT_14c9482f8);
      atexit(FUN_1427b7fa2);
      _Init_thread_footer(&DAT_14c948490);
    }
  }
  FUN_140b9d76c(&local_80,param_1,param_2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar2 = 0;
  *(int *)(puVar2 + 1) = local_78;
  if ((longlong)local_78 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,local_78,0);
    memcpy((void *)*puVar2,local_80,(longlong)local_78 * 2);
  }
  puVar1 = puVar2 + 2;
  puVar2[2] = 0;
  *(int *)(puVar2 + 3) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_68,0);
    memcpy((void *)*puVar1,local_70,(longlong)local_68 * 2);
  }
  puVar2[4] = 0;
  *(int *)(puVar2 + 5) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,local_58,0);
    memcpy((void *)puVar2[4],local_60,(longlong)local_58 * 2);
  }
  *(undefined1 *)(puVar2 + 6) = local_50;
  if (local_60 != (void *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8(local_80);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9482f8);
  uVar4 = (ulonglong)DAT_14c948488;
  DAT_14c948488 = DAT_14c948488 + 1;
  if (DAT_14c94848c < DAT_14c948488) {
    FUN_14577e936(&DAT_14c948480,uVar4);
  }
  memmove(DAT_14c948480 + 1,DAT_14c948480,uVar4 << 3);
  *DAT_14c948480 = puVar2;
  local_80 = (void *)*puVar2;
  local_78 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    local_78 = 0;
  }
  puVar3 = (undefined8 *)FUN_140b9c96c(&DAT_14c948430);
  *puVar3 = puVar2;
  local_90 = puVar2[2];
  local_88 = *(int *)(puVar2 + 3) + -1;
  if (*(int *)(puVar2 + 3) == 0) {
    local_88 = 0;
  }
  puVar3 = (undefined8 *)FUN_140b9c96c(&DAT_14c948458);
  *puVar3 = puVar2;
  local_a0 = puVar2[4];
  local_98 = *(int *)(puVar2 + 5) + -1;
  if (*(int *)(puVar2 + 5) == 0) {
    local_98 = 0;
  }
  puVar3 = (undefined8 *)FUN_140b9c96c(&DAT_14c948458);
  *puVar3 = puVar2;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9482f8);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_140b9d292(&DAT_14c9485c0,param_1,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 140b9c96c FUN_140b9c96c body=553 status=ok
// SIG undefined FUN_140b9c96c(void)

undefined8 * FUN_140b9c96c(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  ulonglong *local_58;
  char local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = (int)param_2[1];
  if ((longlong)iVar4 == 0) {
    puVar6 = param_1;
    if (-1 < (int)*(uint *)(param_1 + 3)) {
      *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 0x80000000;
      *param_1 = 0;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
  }
  else {
    if ((*(char *)((longlong)param_1 + 0x26) == '\0') && (0 < iVar4)) {
      lVar7 = *param_2;
      uVar1 = lVar7 + (longlong)iVar4 * 2;
      uVar10 = 0;
      do {
        if (*(short *)(lVar7 + uVar10) == 0x2f) {
          uVar9 = 0x2f;
          if ((int)(~uVar10 >> 1) != 0) goto LAB_140b9cab0;
          break;
        }
        lVar2 = lVar7 + uVar10;
        uVar10 = uVar10 + 2;
      } while (lVar2 + 2U < uVar1);
      uVar10 = 0;
      do {
        if (*(short *)(lVar7 + uVar10) == 0x5c) {
          if ((int)(~uVar10 >> 1) != 0) {
            uVar9 = 0x5c;
LAB_140b9cab0:
            FUN_14577e9bc(param_1,uVar9);
          }
          break;
        }
        lVar2 = lVar7 + uVar10;
        uVar10 = uVar10 + 2;
      } while (lVar2 + 2U < uVar1);
    }
    local_68 = local_48;
    local_50 = '\0';
    local_58 = &local_28;
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_60 = local_68;
    cVar5 = FUN_14022f826();
    if (cVar5 != '\0') {
      local_88 = 0;
      local_80 = 0;
      local_98 = 0;
      local_90 = 0;
      local_a8 = (undefined4)*param_2;
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_a0 = (undefined4)param_2[1];
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140a8f91e(&local_a8,&local_88);
      lVar7 = FUN_1449668a2(&local_68,local_88,local_80);
      uVar3 = *(undefined2 *)((longlong)param_1 + 0x24);
      puVar8 = *(undefined2 **)(lVar7 + 8);
      if (*(undefined2 **)(lVar7 + 0x10) <= puVar8 + 1) {
        FUN_140213274(lVar7,1);
        puVar8 = *(undefined2 **)(lVar7 + 8);
      }
      *(undefined2 **)(lVar7 + 8) = puVar8 + 1;
      *puVar8 = uVar3;
      FUN_1449668a2(lVar7,local_98,local_90);
      *param_2 = (longlong)local_68;
      *(int *)(param_2 + 1) = (int)((ulonglong)((longlong)local_60 - (longlong)local_68) >> 1);
      *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x26) ^ 1;
    }
    local_b8 = *param_2;
    local_b0 = (undefined4)param_2[1];
    local_ac = *(undefined4 *)((longlong)param_2 + 0xc);
    puVar6 = (undefined8 *)FUN_140b9cb96(param_1,&local_b8,&local_78);
    if ((char)local_78 == '\0') {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    if (local_50 == '\x01') {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 140b9cb96 FUN_140b9cb96 body=1787 status=ok
// SIG undefined FUN_140b9cb96(void)

undefined8 * FUN_140b9cb96(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  bool bVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_9e8 [40];
  undefined8 *local_9c0;
  longlong *local_9b8;
  byte *local_9b0;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 local_998;
  undefined4 uStack_994;
  int iStack_990;
  uint uStack_98c;
  void *local_988;
  int local_980;
  undefined4 local_97c;
  undefined4 local_978;
  undefined4 uStack_974;
  int iStack_970;
  undefined4 uStack_96c;
  undefined8 local_968;
  int iStack_960;
  undefined4 uStack_95c;
  longlong local_958;
  int local_950;
  undefined4 local_948;
  undefined4 uStack_944;
  int iStack_940;
  undefined4 uStack_93c;
  undefined8 local_938;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  longlong *local_928;
  int local_920;
  undefined4 local_918;
  undefined4 uStack_914;
  int iStack_910;
  undefined4 uStack_90c;
  undefined8 local_908;
  int local_900;
  undefined8 local_8f8;
  int iStack_8f0;
  undefined4 uStack_8ec;
  undefined8 local_8e0;
  undefined4 local_8d8;
  char local_8c9;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined2 *local_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined8 local_898;
  int iStack_890;
  uint uStack_88c;
  void *local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined2 *local_868;
  undefined8 uStack_860;
  ulonglong *local_858;
  ulonglong uStack_850;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_9e8;
  local_8a8 = (undefined2 *)0x0;
  uStack_8a0 = 0;
  local_8b8 = 0;
  uStack_8b0 = uStack_8b0 & 0xffffffff00000000;
  local_8c8 = *(undefined4 *)param_2;
  uStack_8c4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_8c0 = *(undefined4 *)(param_2 + 1);
  uStack_8bc = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_144907528(&local_8c8,&local_8a8);
  local_868 = local_8a8;
  uStack_860 = (undefined2 *)CONCAT44(uStack_89c,uStack_8a0);
  uVar6 = FUN_14022faad(*(uint *)(param_1 + 3) & 0x7fffffff,param_1 + 1,&local_868,&local_8c9);
  uVar12 = (ulonglong)uVar6;
  if (local_8c9 == '\0') {
    *param_3 = 0;
    local_858 = (ulonglong *)0x0;
    uStack_850 = 0;
    local_868 = (undefined2 *)0x0;
    uStack_860 = (undefined2 *)0x0;
    FUN_14006620a(&local_888,*param_2,*(undefined4 *)(param_2 + 1));
    local_898 = local_888;
    iStack_890 = (int)uStack_880;
    uStack_88c = uStack_880._4_4_;
    puVar8 = (undefined8 *)FUN_140b9d340(param_1,uVar12,&local_898,&local_868);
    if (local_898 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_140b9d6c4(local_858);
    FUN_140b9d678(&uStack_860,uStack_860);
    *(byte *)((longlong)puVar8 + 0x1b) = *(byte *)((longlong)puVar8 + 0x1b) | 0x80;
LAB_140b9cf08:
    *puVar8 = 0;
  }
  else {
    lVar7 = param_1[2];
    lVar13 = param_1[1];
    lVar18 = uVar12 * 0x10;
    local_8e0 = 0;
    local_8d8 = 0;
    local_8f8 = 0;
    iStack_8f0 = 0;
    local_908 = *(undefined8 *)(lVar13 + lVar18);
    iVar11 = *(int *)(lVar13 + 8 + lVar18);
    local_900 = iVar11 + -1;
    if (iVar11 == 0) {
      local_900 = 0;
    }
    FUN_144907528();
    puVar8 = param_1;
    if (-1 < *(int *)(param_2 + 1)) {
      local_9b8 = (longlong *)(lVar13 + lVar18);
      iVar17 = 1;
      puVar5 = (undefined8 *)(uVar12 * 0x20 + lVar7);
      iVar11 = 0;
      do {
        puVar8 = puVar5;
        if (iStack_8f0 == 0) {
          if ((int)uStack_8b0 == 0) {
            *param_3 = (byte)((uint)*(undefined4 *)(puVar8 + 3) >> 0x1f);
            if (-1 < (int)*(uint *)(puVar8 + 3)) {
              *(uint *)(puVar8 + 3) = *(uint *)(puVar8 + 3) | 0x80000000;
              goto LAB_140b9cf08;
            }
          }
          else {
            local_918 = (undefined4)local_8b8;
            uStack_914 = local_8b8._4_4_;
            iStack_910 = (int)uStack_8b0;
            uStack_90c = uStack_8b0._4_4_;
            puVar8 = (undefined8 *)FUN_140b9cb96(puVar8,&local_918,param_3);
          }
          break;
        }
        local_9c0 = puVar8;
        local_9b0 = param_3;
        if ((int)uStack_8b0 == 0) {
          *param_3 = 0;
          uStack_850 = 0;
          uStack_860 = (undefined2 *)0x0;
          local_858 = (ulonglong *)0x0;
          FUN_140b9d5cc(&local_868,puVar8,&local_938);
          FUN_14006620a(&local_888,local_8f8,iStack_8f0);
          local_898 = local_888;
          iStack_890 = (int)uStack_880;
          uStack_88c = uStack_880._4_4_;
          FUN_140b9d726(puVar8);
          *(byte *)((longlong)puVar8 + 0x1b) = *(byte *)((longlong)puVar8 + 0x1b) | 0x80;
          *puVar8 = 0;
          FUN_1402980a2(local_9b8,*param_2,*(undefined4 *)(param_2 + 1));
          FUN_140b9d340(puVar8,0,&local_898,&local_868);
          if (local_898 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_140b9d6c4(local_858);
          FUN_140b9d678(&uStack_860,uStack_860);
          puVar8 = local_9c0;
          break;
        }
        local_928 = (longlong *)0x0;
        local_920 = 0;
        local_938 = 0;
        uStack_930 = 0;
        local_948 = (undefined4)local_8b8;
        uStack_944 = local_8b8._4_4_;
        iStack_940 = (int)uStack_8b0;
        uStack_93c = uStack_8b0._4_4_;
        FUN_144907528(&local_948,&local_928);
        local_958 = 0;
        local_950 = 0;
        local_968 = 0;
        iStack_960 = 0;
        local_978 = (undefined4)local_8f8;
        uStack_974 = local_8f8._4_4_;
        iStack_970 = iStack_8f0;
        uStack_96c = uStack_8ec;
        plVar10 = &local_958;
        FUN_144907528(&local_978);
        pbVar3 = local_9b0;
        plVar2 = local_9b8;
        puVar8 = local_9c0;
        lVar7 = (longlong)local_950;
        if (local_920 != local_950) {
LAB_140b9cf3d:
          local_868 = local_848;
          uStack_850 = uStack_850 & 0xffffffffffffff00;
          local_858 = &local_48;
          iVar11 = (int)local_9b8[1] + -1;
          if ((int)local_9b8[1] == 0) {
            iVar11 = 0;
          }
          pvVar9 = (void *)*local_9b8;
          uStack_860 = local_868;
          do {
            local_888 = (void *)0x0;
            uStack_880 = uStack_880 & 0xffffffff00000000;
            local_898 = (void *)0x0;
            iStack_890 = 0;
            local_97c = SUB84(plVar10,0);
            local_988 = pvVar9;
            local_980 = iVar11;
            FUN_144907528(&local_988,&local_888,&local_898);
            if ((((int)((ulonglong)((longlong)uStack_860 - (longlong)local_868) >> 1) != 0) &&
                (uStack_860[-1] != 0x2f)) && (uStack_860[-1] != 0x5c)) {
              if (local_858 <= uStack_860 + 1) {
                FUN_140213274(&local_868,1);
              }
              *uStack_860 = 0x2f;
              uStack_860 = uStack_860 + 1;
            }
            pvVar9 = local_888;
            iVar11 = (int)uStack_880;
            lVar7 = (longlong)(int)uStack_880;
            if (local_858 <= uStack_860 + lVar7) {
              FUN_140213274(&local_868,lVar7);
            }
            puVar4 = uStack_860;
            if (iVar11 != 0) {
              memcpy(uStack_860,pvVar9,lVar7 * 2);
              uStack_860 = puVar4 + lVar7;
            }
            plVar10 = (longlong *)(ulonglong)uStack_88c;
            iVar17 = iVar17 + -1;
            pvVar9 = local_898;
            iVar11 = iStack_890;
          } while (iVar17 != 0);
          uStack_880 = 0;
          local_878 = 0;
          local_870 = 0;
          FUN_140b9d5cc(&local_888,puVar8);
          FUN_14006620a(&local_898,local_8f8,iStack_8f0);
          local_998 = (undefined4)local_898;
          uStack_994 = local_898._4_4_;
          iStack_990 = iStack_890;
          uStack_98c = uStack_88c;
          FUN_140b9d726(puVar8);
          FUN_1402980a2(plVar2,local_868,
                        (ulonglong)((longlong)uStack_860 - (longlong)local_868) >> 1);
          FUN_140b9d340(puVar8,0,&local_998,&local_888);
          local_9a8 = (undefined4)local_8b8;
          uStack_9a4 = local_8b8._4_4_;
          uStack_9a0 = (int)uStack_8b0;
          uStack_99c = uStack_8b0._4_4_;
          puVar8 = (undefined8 *)FUN_140b9cb96(puVar8,&local_9a8,pbVar3);
          if (CONCAT44(uStack_994,local_998) != 0) {
            FUN_1400020a8();
          }
          FUN_140b9d6c4(local_878);
          FUN_140b9d678(&uStack_880,uStack_880);
          if ((char)uStack_850 == '\x01') {
            FUN_1400020a8(local_868);
          }
          break;
        }
        if (local_950 != 0) {
          lVar13 = 0;
          while( true ) {
            uVar14 = *(ushort *)((longlong)local_928 + lVar13);
            uVar12 = (ulonglong)uVar14;
            uVar15 = *(ushort *)(local_958 + lVar13);
            if (uVar14 != uVar15) break;
            if (uVar14 == 0) goto LAB_140b9cde4;
LAB_140b9cdab:
            lVar7 = lVar7 + -1;
            if (lVar7 == 0) goto LAB_140b9cde4;
            lVar13 = lVar13 + 2;
          }
          if ((uVar15 | uVar14) < 0x80) {
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar16 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_140b9cdab;
          }
          plVar10 = local_928;
          if (uVar14 != uVar15) goto LAB_140b9cf3d;
        }
LAB_140b9cde4:
        local_8b8 = local_938;
        uStack_8b0 = CONCAT44(uStack_92c,uStack_930);
        iStack_8f0 = iStack_960;
        uStack_8ec = uStack_95c;
        local_8f8 = local_968;
        iVar17 = iVar17 + 1;
        bVar1 = iVar11 < *(int *)(param_2 + 1);
        puVar8 = param_1;
        puVar5 = local_9c0;
        param_3 = local_9b0;
        iVar11 = iVar11 + 1;
      } while (bVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_9e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 140b9d292 FUN_140b9d292 body=173 status=ok
// SIG undefined FUN_140b9d292(void)

void FUN_140b9d292(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140b9d329;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140b9d329:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140b9d340 FUN_140b9d340 body=651 status=ok
// SIG undefined FUN_140b9d340(void)

longlong FUN_140b9d340(longlong param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *_Dst;
  ulonglong uVar17;
  
  uVar15 = *(uint *)(param_1 + 0x18) & 0x7fffffff;
  if (uVar15 == *(uint *)(param_1 + 0x1c)) {
    if (uVar15 == 0) {
      uVar12 = 1;
    }
    else {
      uVar12 = uVar15 >> 1;
      if (uVar15 < 8) {
        uVar12 = uVar15;
      }
      uVar12 = uVar12 + uVar15;
      if (uVar15 == uVar12) goto LAB_140b9d372;
    }
    uVar17 = (ulonglong)uVar12;
    puVar10 = (ulonglong *)FUN_14001cc68(uVar17 * 0x10 + 8);
    *puVar10 = uVar17;
    _Dst = puVar10 + 1;
    lVar13 = 0;
    memset(_Dst,0,uVar17 * 0x10);
    puVar11 = (ulonglong *)FUN_14001cc68(uVar17 * 0x20 + 8,0x10);
    *puVar11 = uVar17;
    do {
      puVar2 = (undefined8 *)((longlong)puVar11 + lVar13 + 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)((longlong)puVar11 + lVar13 + 0x20) = 0;
      lVar13 = lVar13 + 0x20;
    } while (uVar17 * 0x20 != lVar13);
    if (uVar15 != 0) {
      lVar16 = 0;
      lVar13 = 0;
      do {
        puVar5 = *(ulonglong **)(param_1 + 8);
        if (_Dst != puVar5) {
          if (*(longlong *)((longlong)_Dst + lVar13) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)_Dst + lVar13) = *(undefined8 *)((longlong)puVar5 + lVar13);
          *(undefined8 *)((longlong)puVar5 + lVar13) = 0;
          *(undefined4 *)((longlong)puVar10 + lVar13 + 0x10) =
               *(undefined4 *)((longlong)puVar5 + lVar13 + 8);
          *(undefined4 *)((longlong)puVar10 + lVar13 + 0x14) =
               *(undefined4 *)((longlong)puVar5 + lVar13 + 0xc);
          *(undefined8 *)((longlong)puVar5 + lVar13 + 8) = 0;
        }
        FUN_140b9d5cc((longlong)(puVar11 + 1) + lVar16,*(longlong *)(param_1 + 0x10) + lVar16);
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x20;
      } while ((ulonglong)uVar15 << 4 != lVar13);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(ulonglong **)(param_1 + 0x10) = puVar11 + 1;
    FUN_140b9d6c4(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(ulonglong **)(param_1 + 8) = _Dst;
    FUN_140b9d678(param_1 + 8,uVar6);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
LAB_140b9d372:
  if ((int)param_2 < (int)uVar15) {
    uVar17 = (ulonglong)uVar15;
    lVar13 = uVar17 << 5;
    lVar16 = uVar17 << 4;
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(lVar4 + lVar16) != 0) {
        FUN_1400020a8();
      }
      uVar17 = uVar17 - 1;
      puVar1 = (undefined4 *)(lVar4 + -0x10 + lVar16);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar3 = (undefined4 *)(lVar4 + lVar16);
      *puVar3 = *puVar1;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      puVar2 = (undefined8 *)(lVar4 + -0x10 + lVar16);
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_140b9d5cc(*(longlong *)(param_1 + 0x10) + lVar13,
                    *(longlong *)(param_1 + 0x10) + lVar13 + -0x20);
      lVar13 = lVar13 + -0x20;
      lVar16 = lVar16 + -0x10;
    } while ((longlong)(ulonglong)param_2 < (longlong)uVar17);
  }
  plVar14 = (longlong *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
  if (plVar14 != param_3) {
    if (*plVar14 != 0) {
      FUN_1400020a8();
    }
    *plVar14 = *param_3;
    *param_3 = 0;
    *(int *)(plVar14 + 1) = (int)param_3[1];
    *(undefined4 *)((longlong)plVar14 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  lVar13 = (ulonglong)param_2 * 0x20;
  FUN_140b9d5cc(*(longlong *)(param_1 + 0x10) + lVar13,param_4);
  *(uint *)(param_1 + 0x18) = (*(uint *)(param_1 + 0x18) & 0x80000000) + uVar15 + 1;
  return lVar13 + *(longlong *)(param_1 + 0x10);
}



// FUNCTION 140b9d5cc FUN_140b9d5cc body=171 status=ok
// SIG undefined FUN_140b9d5cc(void)

undefined8 * FUN_140b9d5cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 3);
  puVar3 = param_1;
  if (*(int *)(param_2 + 3) < 0) {
    *(uint *)(param_1 + 3) = uVar1 | 0x80000000;
    *param_1 = *param_2;
    uVar1 = *(uint *)(param_2 + 3);
    puVar3 = param_2;
  }
  if ((int)uVar1 < 0) {
    *(uint *)(puVar3 + 3) = uVar1 & 0x7fffffff;
  }
  if (param_1 != param_2) {
    uVar2 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    FUN_140b9d678(param_1 + 1,uVar2);
    uVar2 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = 0;
    FUN_140b9d6c4(uVar2);
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0x80000000 | *(uint *)(param_2 + 3) & 0x7fffffff
  ;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) & 0x80000000;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 140b9d678 FUN_140b9d678 body=76 status=ok
// SIG undefined FUN_140b9d678(void)

void FUN_140b9d678(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + -8) != 0) {
    lVar1 = *(longlong *)(param_2 + -8) << 4;
    do {
      if (*(longlong *)(param_2 + -0x10 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  FUN_1400020a8(param_2 + -8);
  return;
}



// FUNCTION 140b9d6c4 FUN_140b9d6c4 body=97 status=ok
// SIG undefined FUN_140b9d6c4(void)

void FUN_140b9d6c4(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + -8) != 0) {
    lVar1 = *(longlong *)(param_1 + -8) << 5;
    do {
      FUN_140b9d6c4(*(undefined8 *)(param_1 + -0x10 + lVar1));
      FUN_140b9d678(param_1 + -0x18 + lVar1,*(undefined8 *)(param_1 + -0x18 + lVar1));
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  FUN_1400020a8(param_1 + -8);
  return;
}



// FUNCTION 140b9d726 FUN_140b9d726 body=69 status=ok
// SIG undefined FUN_140b9d726(void)

void FUN_140b9d726(longlong param_1)

{
  undefined8 uVar1;
  
  if ((int)*(uint *)(param_1 + 0x18) < 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0x7fffffff;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_140b9d678(param_1 + 8,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_140b9d6c4(uVar1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 140b9d76c FUN_140b9d76c body=757 status=ok
// SIG undefined FUN_140b9d76c(void)

undefined8 * FUN_140b9d76c(undefined8 *param_1,undefined8 *param_2,undefined2 **param_3)

{
  void *_Src;
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_2d8 [40];
  void *local_2b0;
  int local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_290 [8];
  int local_288;
  longlong local_280;
  undefined8 local_278;
  undefined2 *local_270;
  int local_268;
  int local_264;
  undefined2 *local_260;
  undefined8 local_258;
  ulonglong *local_250;
  char local_248;
  undefined2 local_240 [256];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_270 = (undefined2 *)0x0;
  local_268 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_268;
  puVar5 = *param_3;
  if (lVar6 == 0) {
    local_264 = 0;
  }
  else {
    FUN_1446dd670(&local_270,local_268,0);
    memcpy(local_270,puVar5,lVar6 * 2);
  }
  cVar1 = FUN_1401aeb9c(&local_270);
  if (cVar1 != '\0') {
    FUN_1401aea18(&local_260,param_3);
    if (local_270 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_270 = local_260;
    local_268 = (int)local_258;
    local_264 = local_258._4_4_;
    if (&local_270 != param_3 && 0x7ffffffd < (int)local_258 - 3U) {
      iVar2 = *(int *)(param_3 + 1);
      puVar5 = *param_3;
      local_268 = iVar2;
      if (iVar2 == 0 && local_258._4_4_ == 0) {
        local_264 = 0;
      }
      else {
        FUN_1446dd670(&local_270,iVar2);
        if (iVar2 != 0) {
          memcpy(local_270,puVar5,(longlong)iVar2 * 2);
        }
      }
    }
  }
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar5 = local_270;
  if (local_268 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar3 + 0xf0))(plVar3,&local_280,puVar5);
  uVar4 = (ulonglong)((int)local_278 - 1);
  if ((int)local_278 == 0) {
    uVar4 = 0;
  }
  if (((int)uVar4 < 1) ||
     (iVar2 = wcscmp((wchar_t *)(local_280 + uVar4 * 2 + -2),L"/"), local_288 = (int)uVar4,
     iVar2 != 0)) {
    FUN_1400020e8(&local_280,&DAT_149e065c6,1);
    local_288 = (int)local_278 + -1;
    if ((int)local_278 == 0) {
      local_288 = 0;
    }
  }
  local_260 = local_240;
  local_248 = '\0';
  local_250 = &local_40;
  local_258 = local_260;
  FUN_1411bb8fa(local_290,&local_260);
  *local_258 = 0;
  FUN_140056680();
  local_2b0 = (void *)0x0;
  local_2a8 = *(int *)(param_2 + 1);
  lVar6 = (longlong)local_2a8;
  _Src = (void *)*param_2;
  if (lVar6 == 0) {
    local_2a4 = 0;
    iVar2 = 0;
  }
  else {
    FUN_1446dd670(&local_2b0,local_2a8,0);
    memcpy(local_2b0,_Src,lVar6 * 2);
    iVar2 = local_2a8;
  }
  *param_1 = local_2b0;
  *(int *)(param_1 + 1) = iVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2a4;
  param_1[2] = local_280;
  local_280 = 0;
  *(int *)(param_1 + 3) = (int)local_278;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_278._4_4_;
  local_278 = 0;
  param_1[4] = local_2a0;
  local_2a0 = 0;
  *(undefined4 *)(param_1 + 5) = local_298;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_294;
  *(byte *)(param_1 + 6) = (*(byte *)(param_1 + 6) & 0xf8) + 1;
  if ((local_248 != '\0') && (FUN_1400020a8(local_260), local_280 != 0)) {
    FUN_1400020a8();
  }
  if (local_270 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140b9da62 FUN_140b9da62 body=3516 status=ok
// SIG undefined FUN_140b9da62(void)

/* WARNING: Removing unreachable block (ram,0x000140b9e4fb) */

void FUN_140b9da62(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,longlong *param_6)

{
  void *_Dst;
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  uint7 uVar15;
  undefined8 uVar9;
  code *pcVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  code *pcVar20;
  uint7 uVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_658 [32];
  undefined1 *local_638;
  longlong *local_630;
  byte local_627;
  byte local_626;
  byte local_625;
  uint local_624;
  undefined4 local_620;
  undefined4 local_61c;
  longlong local_618;
  uint local_610;
  uint local_60c;
  longlong local_608;
  undefined8 local_600;
  longlong local_5f8;
  undefined1 local_5ea [2];
  undefined8 local_5e8;
  undefined1 local_5dd [5];
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined4 local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  longlong local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  longlong lStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [8];
  undefined8 auStack_4f0 [12];
  undefined4 auStack_490 [12];
  undefined8 local_460 [6];
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  undefined8 local_3d0;
  undefined1 local_3c0 [48];
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  undefined8 local_330;
  longlong local_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined2 local_268;
  undefined1 local_266;
  undefined1 local_265;
  undefined4 local_264;
  undefined2 local_260;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined1 local_25a;
  undefined1 local_259;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong lStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 uStack_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined8 uStack_1c7;
  undefined2 local_1bf;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 local_1a0 [4];
  undefined1 local_198 [216];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_658;
  cVar6 = (**(code **)(*param_3 + 0xe8))(param_3);
  if (cVar6 != '\0') {
    if (*(char *)(param_1 + 0x81) == '\x01') {
      puVar19 = &DAT_14ca96b08;
      if (DAT_14ca96b58 != (undefined4 *)0x0) {
        puVar19 = DAT_14ca96b58;
      }
      if (((uint)puVar19[*(ushort *)(param_2 + 0xc) >> 5] >> (*(ushort *)(param_2 + 0xc) & 0x1f) & 1
          ) == 0) goto LAB_140b9dab4;
    }
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2);
    local_60c = FUN_144a42af8((ulonglong)uVar1,param_3);
    uVar16 = local_60c >> 8;
    local_5f8 = (ulonglong)uVar1 * 0x3c + 0x14ca814d4;
    local_626 = (local_60c >> 0x11 & 1) == 0 | 2;
    uVar22 = 0;
    local_610 = uVar16;
    do {
      if ((uVar16 >> (uVar22 & 0x1f) & 1) != 0) {
        cVar6 = (char)uVar22;
        local_638 = (undefined1 *)CONCAT71(local_638._1_7_,cVar6);
        local_630 = param_6;
        FUN_140b9eab2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x20),param_2,param_3);
        if ((*(byte *)(local_5f8 + 2) & 0x10) != 0) {
          uVar15 = (uint7)((ulonglong)local_5f8 >> 8);
          uVar21 = uVar15 & 0xffffff;
          local_624 = (uint)CONCAT71(uVar15,local_626);
          if (cVar6 != '\x02') {
            switch(uVar22 & 0xff) {
            case 1:
              local_624 = uVar22;
              break;
            default:
              local_624 = 0;
              break;
            case 3:
            case 5:
              local_624 = (uint)CONCAT71(uVar21,4);
              break;
            case 4:
              local_624 = (uint)CONCAT71(uVar21,2);
              break;
            case 6:
              local_624 = (uint)CONCAT71(uVar21,5);
            }
          }
          uVar9 = FUN_144a64ef0(local_60c,uVar22);
          *(undefined8 *)(param_1 + 0x40) = uVar9;
          uVar3 = *param_5;
          pcVar10 = *(code **)(*param_3 + 0x38);
          plVar17 = param_3;
          if (pcVar10 == FUN_144765e18) {
            plVar17 = (longlong *)param_3[9];
            if (plVar17 == (longlong *)0x0) {
              plVar17 = (longlong *)param_3[8];
              pcVar10 = *(code **)(*plVar17 + 0x420);
              pcVar20 = (code *)&LAB_144b24e8a;
            }
            else {
              pcVar10 = *(code **)(*plVar17 + 0x420);
              pcVar20 = (code *)&LAB_14497e108;
            }
            if (pcVar10 != pcVar20) goto LAB_140b9e799;
          }
          else {
LAB_140b9e799:
            (*pcVar10)(plVar17);
          }
          lVar12 = *param_3;
          if (*(code **)(lVar12 + 0x100) == (code *)&LAB_144b25520) {
            local_625 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
          }
          else {
            local_625 = (**(code **)(lVar12 + 0x100))(param_3);
            lVar12 = *param_3;
          }
          if (*(code **)(lVar12 + 0x38) == FUN_144765e18) {
            plVar17 = (longlong *)param_3[9];
            if (plVar17 == (longlong *)0x0) {
              pcVar10 = *(code **)(*(longlong *)param_3[8] + 0x420);
              if (pcVar10 != (code *)&LAB_144b24e8a) goto LAB_140b9e7e6;
              bVar8 = *(byte *)((longlong *)param_3[8] + 0x30);
            }
            else {
              pcVar10 = *(code **)(*plVar17 + 0x420);
              if (pcVar10 != (code *)&LAB_14497e108) {
LAB_140b9e7e6:
                local_627 = (*pcVar10)();
                goto LAB_140b9dc84;
              }
              bVar8 = *(byte *)(plVar17 + 0x2a);
            }
            local_627 = (bVar8 & 0x10) >> 4;
          }
          else {
            local_627 = (**(code **)(lVar12 + 0x38))(param_3);
          }
LAB_140b9dc84:
          memset(local_4f8,0,0x98);
          FUN_140c7a5e4();
          auStack_4f0[DAT_14c9c1c18] = &DAT_14c9c1bd0;
          auStack_490[DAT_14c9c1c18] = 0;
          if (cVar6 == '\x06') {
            FUN_140b9f70e();
            puVar11 = &DAT_14c9c1f48;
          }
          else if ((uVar22 & 0xff) == 5) {
            FUN_1460c258c();
            puVar11 = &DAT_14c9c1e20;
          }
          else {
            FUN_140c7a700();
            puVar11 = &DAT_14c9c1cf8;
          }
          bVar8 = puVar11[0x48];
          auStack_4f0[bVar8] = puVar11;
          auStack_490[bVar8] = 0;
          local_508 = 0;
          uStack_500 = 0;
          local_518 = 0;
          uStack_510 = 0;
          local_528 = 0;
          uStack_520 = 0;
          local_538 = 0;
          uStack_530 = 0;
          local_548 = 0;
          lStack_540 = 0;
          local_558 = 0;
          uStack_550 = 0;
          local_568 = 0;
          uStack_560 = 0;
          cVar6 = FUN_14007744c(param_3,local_4f8,*param_4,&local_568);
          if (cVar6 != '\0') {
            local_618 = local_558;
            local_600 = local_568;
            if (local_558 == 0) {
              local_600 = 0;
            }
            local_608 = lStack_540;
            uVar9 = local_568;
            if (lStack_540 == 0) {
              uVar9 = 0;
            }
            local_5d0 = 0;
            local_5d8 = 0;
            uStack_5d4 = 0;
            local_598 = 0;
            uStack_590 = 0;
            local_5a8 = 0;
            uStack_5a0 = 0;
            local_5b8 = 0;
            uStack_5b0 = 0;
            local_5c8 = 0;
            uStack_5c0 = 0;
            local_588 = 0;
            local_61c = 0;
            local_570 = 0;
            local_580 = 0;
            uStack_578 = 0;
            FUN_140b9e81f(param_2,local_624,&local_5d8);
            local_620 = 0;
            if (*(int *)(param_1 + 0x20) == 1) {
              uVar14 = FUN_14723c523(*(undefined2 *)(param_2 + 0xc),
                                     (*(uint *)(param_2 + 0x178) & 2) >> 1,
                                     *(uint *)(param_2 + 0x178) & 0xffffff01,
                                     *(undefined4 *)(param_2 + 0x24));
              local_620 = (undefined4)uVar14;
              local_61c = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            }
            local_624 = *(uint *)(param_1 + 8);
            local_1a0[0] = 0x100;
            local_90 = 0;
            local_88 = 0x300000000;
            local_80 = 0x7fffffff;
            uStack_78 = 0;
            cVar6 = FUN_1406917e6();
            if (cVar6 == '\0') {
              local_248 = 0;
              uStack_240 = 0;
              local_238 = 0;
              local_230 = 1;
              local_208 = 0;
              lStack_200 = 0;
              local_218 = 0;
              lStack_210 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_1f8 = 0xffffffff;
              uStack_1f4 = 0xffffffff;
              uStack_1f0 = 0xffffffff;
              uStack_1ec = 0xffffffff;
              uStack_1c8 = 0;
              uStack_1c7 = 0;
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1cf = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1bf = 1;
              local_1bc = 0;
              uStack_1b8 = 0;
              uStack_1b4 = 0;
              uStack_1b0 = 0;
              lVar12 = param_4[1];
              if (lVar12 == 0) {
                local_298 = 0x1100000000;
                (**(code **)(*param_4 + 0x48))(0,&local_320);
                lVar12 = FUN_14486d71a(&local_320);
              }
              bVar8 = local_627;
              uVar4 = uVar3 >> 0x11;
              bVar23 = ((uint)uVar3 >> 0x10 & 1) == 0;
              local_2e0 = 0;
              uStack_2d8 = 0;
              local_320 = local_618;
              local_318 = local_600;
              local_310 = local_608;
              local_2f0 = 0;
              uStack_2e8 = 0;
              local_300 = 0;
              uStack_2f8 = 0;
              local_2d0 = 0;
              uStack_2c8 = 0;
              local_308 = uVar9;
              FUN_144765e6c(&local_248,lVar12,&local_320);
              bVar5 = (uVar4 & 1) != 0;
              puVar13 = &DAT_14c9c0e28;
              if (bVar23 || (bVar5 || bVar8 != 0)) {
                puVar13 = &DAT_14c9c0e10;
              }
              puVar18 = &DAT_14c9c0df8;
              if (bVar23 || (bVar5 || bVar8 != 0)) {
                puVar18 = &DAT_14c9c0d68;
              }
              if ((uVar4 & 1) != 0 || bVar8 != 0) {
                puVar13 = &DAT_14c9c0e40;
                puVar18 = &DAT_14c9c0db0;
              }
              if (local_625 != 0) {
                puVar18 = puVar13;
              }
              uStack_1e0 = *puVar18;
              local_1e8 = *(undefined8 *)(param_1 + 0x40);
              local_1d8 = *(undefined8 *)(param_1 + 0x48);
              uVar16 = (**(code **)(*param_3 + 0x490))(param_3);
              if (uVar16 < 4) {
                uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar16 << 3) & 0x1f));
              }
              else {
                uVar7 = 0;
                if ((uVar16 < 7) && (uVar7 = 0, DAT_14ca84f33 != '\0')) {
                  uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar16 << 3) & 0x3f));
                }
              }
              local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
              cVar6 = (**(code **)(*param_3 + 0x4a0))(param_3);
              if (cVar6 == '\0') {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_144a12f44(DAT_14ca85550);
              }
              local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
              FUN_144a1fecc(&local_248,&local_320);
              if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
                 (DAT_14cafb358 == 2)) {
                uStack_1b8 = (undefined4)local_250;
                uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
                FUN_14573402d(local_3c0,&local_248);
                if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
                   (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
                  lVar12 = *param_4;
                  local_460[0] = local_330;
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
                  local_5dd._1_4_ = local_5dd._1_4_ & 0xffff0000;
                  local_630 = (longlong *)local_5ea;
                  local_638 = local_5dd + 1;
                  FUN_14573482a(&DAT_14cafccf8,&local_5e8,
                                (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                                0x7fffffff,local_460);
                  if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5e8 * 0x10) == '\x01') {
                    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
                  }
                  else {
                    *(undefined1 *)((longlong)(int)local_5e8 * 0x10 + DAT_14cafccf8 + 8) = 1;
                    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
                    FUN_140691a2a(&DAT_14cafc0a0,local_624,lVar12);
                  }
                }
                FUN_1457340f6(local_460,&local_248);
                if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
                   (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
                  local_618 = *param_4;
                  local_5e8 = local_3d0;
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
                  local_5ea = (undefined1  [2])0x0;
                  local_630 = (longlong *)local_5dd;
                  local_638 = local_5ea;
                  FUN_14573482a(&DAT_14cafd9c8,local_5dd + 1,
                                (int)((ulonglong)local_5e8 >> 0x20) * 0x17 + (int)local_5e8 &
                                0x7fffffff,&local_5e8);
                  if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5dd._1_4_ * 0x10) == '\x01'
                     ) {
                    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
                  }
                  else {
                    *(undefined1 *)((longlong)(int)local_5dd._1_4_ * 0x10 + DAT_14cafd9c8 + 8) = 1;
                    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
                    FUN_140691a2a(&DAT_14cafcd70,local_624,local_618);
                  }
                }
                if (local_418 != 0) {
                  FUN_140021284();
                }
                if (local_420 != 0) {
                  FUN_140021284();
                }
                if (local_428 != 0) {
                  FUN_140021284();
                }
                if (local_430 != 0) {
                  FUN_140021284();
                }
                if (local_378 != 0) {
                  FUN_140021284();
                }
                if (local_380 != 0) {
                  FUN_140021284();
                }
                if (local_388 != 0) {
                  FUN_140021284();
                }
                if (local_390 != 0) {
                  FUN_140021284();
                }
              }
              uStack_2c8 = CONCAT44(local_5d8,(undefined4)uStack_2c8);
              local_2c0 = CONCAT44(local_5d0,uStack_5d4);
              local_288 = local_598;
              uStack_280 = uStack_590;
              local_298 = local_5a8;
              uStack_290 = uStack_5a0;
              local_2a8 = local_5b8;
              uStack_2a0 = uStack_5b0;
              local_2b8 = local_5c8;
              uStack_2b0 = uStack_5c0;
              local_260 = (undefined2)local_570;
              local_278 = local_588;
              local_270 = local_580;
              local_268 = (undefined2)uStack_578;
              local_266 = uStack_578._2_1_;
              local_265 = uStack_578._3_1_;
              local_264 = uStack_578._4_4_;
              local_25a = local_570._2_1_;
              local_259 = local_570._3_1_;
              local_25e = (undefined1)local_620;
              local_25d = (undefined1)local_61c;
              memcpy(local_198,&local_320,0xd8);
              if (lStack_200 != 0) {
                FUN_140021284();
              }
              if (local_208 != 0) {
                FUN_140021284();
              }
              if (lStack_210 != 0) {
                FUN_140021284();
              }
              if (local_218 != 0) {
                FUN_140021284();
              }
              local_80 = 0;
            }
            else {
              local_2e0 = 0;
              uStack_2d8 = 0;
              local_320 = local_618;
              local_318 = local_600;
              local_310 = local_608;
              local_300 = 0;
              uStack_2f8 = 0;
              local_2f0 = 0;
              uStack_2e8 = 0;
              local_2d0 = 0;
              uStack_2c8 = 0;
              local_308 = uVar9;
              FUN_145734aa6(&local_320,&local_248);
              FUN_1457347b6(&local_c0,&local_248);
              if (local_218 != 0) {
                FUN_1400020a8();
              }
              local_80 = local_80 & 0x80000000;
            }
            local_1a0[0] = 0x100;
            local_80 = local_624 & 0x7fffffff | local_80;
            uStack_78 = *param_4;
            if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
               (DAT_14cafb358 == 2)) {
              bVar8 = (**(code **)(*param_3 + 0x400))(param_3);
              local_80 = local_80 & 0x7fffffff | (uint)bVar8 << 0x1f;
              FUN_1406918b2(local_198);
            }
            iVar2 = (int)param_6[1];
            *(uint *)(param_6 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
              FUN_14069191a(param_6,iVar2);
            }
            lVar12 = *param_6;
            _Dst = (void *)(lVar12 + (longlong)iVar2 * 0x130);
            memcpy(_Dst,local_1a0,0xe0);
            *(undefined8 *)(lVar12 + 0x110 + (longlong)iVar2 * 0x130) = 0;
            if (local_90 == 0) {
              *(undefined8 *)((longlong)_Dst + 0x100) = local_a0;
              *(undefined8 *)((longlong)_Dst + 0x108) = uStack_98;
              *(undefined8 *)((longlong)_Dst + 0xf0) = local_b0;
              *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_a8;
              *(undefined8 *)((longlong)_Dst + 0xe0) = local_c0;
              *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_b8;
            }
            *(longlong *)((longlong)_Dst + 0x110) = local_90;
            local_90 = 0;
            *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_88;
            *(undefined4 *)((longlong)_Dst + 0x11c) = local_88._4_4_;
            local_88 = 0x300000000;
            *(uint *)((longlong)_Dst + 0x120) = local_80;
            *(undefined4 *)((longlong)_Dst + 0x124) = uStack_7c;
            *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_78;
            *(undefined4 *)((longlong)_Dst + 300) = uStack_78._4_4_;
            uVar16 = local_610;
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 7);
  }
LAB_140b9dab4:
  if ((local_70 ^ (ulonglong)auStack_658) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9e81f FUN_140b9e81f body=658 status=ok
// SIG undefined FUN_140b9e81f(void)

void FUN_140b9e81f(longlong param_1,undefined1 param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_208 [32];
  undefined8 local_1e8 [6];
  undefined1 local_1b5;
  undefined8 local_1b0;
  undefined1 local_17d;
  undefined8 local_178;
  undefined1 local_145;
  undefined8 local_60;
  char local_2d;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  switch(param_2) {
  case 1:
    FUN_1471456c2(local_1e8,*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0xc));
    uVar5 = *param_3;
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = local_1b5;
    *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = local_1e8[0];
    *(undefined1 *)((longlong)param_3 + (ulonglong)(uVar5 + 1) + 4) = local_17d;
    *(undefined8 *)(param_3 + (ulonglong)(uVar5 + 1) * 2 + 4) = local_1b0;
    *(undefined1 *)((longlong)param_3 + (ulonglong)(uVar5 + 2) + 4) = local_145;
    *(undefined8 *)(param_3 + (ulonglong)(uVar5 + 2) * 2 + 4) = local_178;
    *param_3 = uVar5 + 3;
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    uVar4 = *(undefined1 *)(param_1 + 0xfc);
    cVar3 = FUN_1401c8c05();
    if (cVar3 != '\0') {
      uVar5 = *param_3;
      *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = uVar4;
      *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = uVar2;
      *param_3 = uVar5 + 1;
    }
    if (local_2d == '\0') goto switchD_140b9e85e_default;
    uVar5 = *param_3;
    *(char *)((longlong)param_3 + (ulonglong)uVar5 + 4) = local_2d;
    *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = local_60;
    break;
  case 2:
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *param_3;
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = uVar2;
    uVar5 = uVar5 + 1;
    *param_3 = uVar5;
    lVar6 = 0x9c;
    lVar7 = 0xa0;
    goto LAB_140b9e881;
  case 3:
    uVar5 = *param_3;
    lVar6 = 0x2c;
    lVar7 = 0x30;
LAB_140b9e881:
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = *(undefined1 *)(param_1 + lVar6);
    *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = uVar2;
    uVar1 = uVar5 + 1;
    *param_3 = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar1 + 4) = *(undefined1 *)(param_1 + 0xac);
    *(undefined8 *)(param_3 + (ulonglong)uVar1 * 2 + 4) = uVar2;
    uVar5 = uVar5 + 2;
    *param_3 = uVar5;
    lVar6 = 0xbc;
    lVar7 = 0xc0;
LAB_140b9e8c1:
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = *(undefined1 *)(param_1 + lVar6);
    *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = uVar2;
    uVar1 = uVar5 + 1;
    *param_3 = uVar1;
    if ((*(uint *)(param_1 + 0x178) & 8) != 0) {
      *(char *)((longlong)param_3 + (ulonglong)uVar1 + 4) =
           ((*(uint *)(param_1 + 0x178) & 0x10) == 0) * '\b' + '\r';
      (param_3 + (ulonglong)uVar1 * 2 + 4)[0] = 0x209;
      (param_3 + (ulonglong)uVar1 * 2 + 4)[1] = 0;
      *param_3 = uVar5 + 2;
    }
    goto switchD_140b9e85e_default;
  case 4:
    uVar5 = *param_3;
    lVar6 = 0x2c;
    lVar7 = 0x30;
    goto LAB_140b9e8c1;
  case 5:
    FUN_1403981ba(local_1e8,*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uVar5 = *param_3;
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = local_1b5;
    *(undefined8 *)(param_3 + (ulonglong)uVar5 * 2 + 4) = local_1e8[0];
    break;
  default:
    goto switchD_140b9e85e_default;
  }
  *param_3 = uVar5 + 1;
switchD_140b9e85e_default:
  if ((*(byte *)(param_1 + 0x178) & 0x20) != 0) {
    if ((0x30 < (ulonglong)*(ushort *)(param_1 + 0xc)) ||
       (uVar4 = 0x25, (0x1000001200000U >> ((ulonglong)*(ushort *)(param_1 + 0xc) & 0x3f) & 1) == 0)
       ) {
      uVar4 = 2;
    }
    uVar5 = *param_3;
    *(undefined1 *)((longlong)param_3 + (ulonglong)uVar5 + 4) = uVar4;
    (param_3 + (ulonglong)uVar5 * 2 + 4)[0] = 9;
    (param_3 + (ulonglong)uVar5 * 2 + 4)[1] = 0;
    *param_3 = uVar5 + 1;
  }
  *(undefined2 *)(param_3 + 0x1a) = *(undefined2 *)(param_1 + 0x24);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined1 *)(param_3 + 0x14) = 0xb;
  *(undefined8 *)(param_3 + 0x16) = uVar2;
  *(undefined1 *)(param_3 + 0x18) = 1;
  *(undefined1 *)((longlong)param_3 + 0x62) = 1;
  param_3[0x19] = 0x21;
  bVar8 = ((uint)uVar2 >> 0xc & 1) == 0;
  *(bool *)((longlong)param_3 + 0x61) = bVar8;
  *(bool *)((longlong)param_3 + 99) = bVar8;
  if ((local_28 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9eab2 FUN_140b9eab2 body=1268 status=ok
// SIG undefined FUN_140b9eab2(void)

void FUN_140b9eab2(uint param_1,int param_2,longlong param_3,undefined8 param_4,byte param_5,
                  longlong *param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 unaff_R13;
  ulonglong uVar11;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 *local_240;
  undefined1 *local_238;
  uint *local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  uint local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined2 local_be;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_9a;
  undefined8 uStack_92;
  undefined4 local_8a;
  undefined4 uStack_86;
  undefined4 uStack_82;
  undefined4 uStack_7e;
  undefined8 local_7a;
  undefined8 uStack_72;
  ulonglong local_60;
  
  bVar4 = param_5;
  uVar10 = (uint)param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1ec = param_1;
  uVar8 = FUN_144a42af8(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2),param_4);
  if (uVar10 == 2) {
    uVar11 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),(uVar8 >> 0x11 & 1) == 0) | 2;
    goto switchD_140b9eea9_caseD_1;
  }
  if (bVar4 - 1 < 6) {
    uVar11 = (ulonglong)uVar10;
    switch((uint)bVar4) {
    case 1:
      break;
    case 2:
      goto switchD_140b9eea9_caseD_2;
    default:
      uVar11 = 4;
      break;
    case 4:
      uVar11 = 2;
      break;
    case 6:
      uVar11 = 5;
    }
  }
  else {
switchD_140b9eea9_caseD_2:
    uVar11 = 0;
  }
switchD_140b9eea9_caseD_1:
  local_208 = 0;
  uStack_200 = 0;
  local_248 = &local_218;
  local_218 = 0;
  uStack_210 = 0;
  cVar6 = FUN_140b9f305(param_2,param_4,uVar10);
  if (cVar6 != '\0') {
    cVar6 = FUN_1406917e6();
    if (cVar6 == '\0') {
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_128 = 0;
      local_b8 = 0;
      local_b0 = 1;
      local_a8 = 0;
      local_120 = 0;
      local_148 = FUN_144a64ef0(uVar8,uVar10,uVar11 & 0xffffffff);
      cVar6 = FUN_140b9f231(param_2,param_4,uVar10,&local_178);
      if (cVar6 != '\0') {
        local_1e0 = 0;
        local_1e8 = 0;
        uStack_1e4 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        local_190 = 0;
        uStack_188 = 0;
        local_180 = 0;
        FUN_140b9e81f(param_3,uVar11 & 0xffffffff,&local_1e8);
        local_11c = local_1e8;
        local_118 = CONCAT44(local_1e0,uStack_1e4);
        local_110 = local_1d8;
        uStack_108 = uStack_1d0;
        local_100 = local_1c8;
        uStack_f8 = uStack_1c0;
        local_f0 = local_1b8;
        uStack_e8 = uStack_1b0;
        local_e0 = (undefined4)local_1a8;
        uStack_dc = local_1a8._4_4_;
        uStack_d8 = (undefined4)uStack_1a0;
        uStack_d4 = uStack_1a0._4_4_;
        local_b8 = CONCAT62(local_b8._2_6_,(undefined2)local_180);
        uVar5 = local_b8;
        local_d0 = local_198;
        local_c8 = local_190;
        local_c0 = (undefined1)uStack_188;
        local_bf = uStack_188._1_1_;
        local_be = uStack_188._2_2_;
        local_bc = uStack_188._4_4_;
        local_b8 = CONCAT26(local_180._2_2_,(undefined6)local_b8);
        if (param_2 == 1) {
          local_b8._0_3_ = (undefined3)uVar5;
          local_b8._0_4_ = CONCAT13(1,(undefined3)local_b8);
          uVar7 = FUN_14723c523(*(undefined2 *)(param_3 + 0xc),(*(uint *)(param_3 + 0x178) & 2) >> 1
                                ,*(uint *)(param_3 + 0x178) & 0xffffff01,
                                *(undefined4 *)(param_3 + 0x24));
          local_b8._0_3_ = CONCAT12(uVar7,(undefined2)local_b8);
        }
        local_238 = &param_5;
        local_230 = &local_1ec;
        local_220 = param_6;
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        local_240 = &local_178;
        local_228 = param_4;
        FUN_140b9efa8(&local_240,0,0,0);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,1,0,0);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,0,1,0);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,1,1,0);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,0,0,1);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,1,0,1);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,0,1,1);
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xffffffffffffff00);
        FUN_140b9efa8(&local_240,1,1,1);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,0,0,0);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,1,0,0);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,0,1,0);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,1,1,0);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,0,0,1);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,1,0,1);
        local_248._0_1_ = 1;
        FUN_140b9efa8(&local_240,0,1,1);
        local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
        FUN_140b9efa8(&local_240,1,1,1);
      }
    }
    else {
      local_9a = local_208;
      uStack_92 = uStack_200;
      lVar9 = param_6[1];
      uVar8 = (int)lVar9 + 1;
      local_8a = (undefined4)local_218;
      uStack_86 = local_218._4_4_;
      uStack_82 = (undefined4)uStack_210;
      uStack_7e = uStack_210._4_4_;
      *(uint *)(param_6 + 1) = uVar8;
      if (*(uint *)((longlong)param_6 + 0xc) < uVar8) {
        FUN_14069191a();
      }
      lVar3 = *param_6;
      lVar9 = (longlong)(int)lVar9 * 0x130;
      *(undefined2 *)(lVar3 + lVar9) = 0x100;
      puVar1 = (undefined4 *)(lVar3 + 0xe0 + lVar9);
      *puVar1 = (undefined4)local_9a;
      puVar1[1] = local_9a._4_4_;
      puVar1[2] = (undefined4)uStack_92;
      puVar1[3] = uStack_92._4_4_;
      puVar2 = (undefined8 *)(lVar3 + 0xf0 + lVar9);
      *puVar2 = CONCAT44(uStack_86,local_8a);
      puVar2[1] = CONCAT44(uStack_7e,uStack_82);
      puVar2 = (undefined8 *)(lVar3 + 0x100 + lVar9);
      *puVar2 = local_7a;
      puVar2[1] = uStack_72;
      *(undefined8 *)(lVar3 + 0x110 + lVar9) = 0;
      *(undefined8 *)(lVar3 + 0x118 + lVar9) = 0x300000002;
      *(uint *)(lVar3 + 0x120 + lVar9) = param_1 & 0x7fffffff;
      *(undefined8 *)(lVar3 + 0x128 + lVar9) = 0;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9efa8 FUN_140b9efa8 body=648 status=ok
// SIG undefined FUN_140b9efa8(void)

void FUN_140b9efa8(longlong *param_1,byte param_2,byte param_3,byte param_4,char param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [34];
  undefined1 local_116 [6];
  undefined1 local_110 [216];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar8 = &DAT_14c9c0d58;
  if ((param_3 ^ param_4) == param_2) {
    puVar8 = &DAT_14c9c0de8;
  }
  *(undefined8 *)(*param_1 + 0x38) = *(undefined8 *)(puVar8 + 0x10);
  bVar5 = 100U >> (*(byte *)param_1[1] & 0x1f) & *(byte *)param_1[1] < 7;
  if (param_2 == 0) {
    if (param_5 == '\0') {
      uVar11 = 2;
      if (bVar5 != 0) {
        uVar11 = 8;
      }
      puVar9 = &DAT_14c9c0d38;
      if (bVar5 != 0) {
        puVar9 = &DAT_14c9b7c80;
      }
      goto LAB_140b9f08b;
    }
    uVar11 = (ulonglong)bVar5 ^ 7;
    puVar10 = &DAT_14c9b7c50;
    puVar9 = &DAT_14c9b7c68;
  }
  else if (param_5 == '\0') {
    uVar11 = (ulonglong)bVar5 * 4 + 1;
    puVar10 = &DAT_14c9b7c38;
    puVar9 = &DAT_14c9c0d98;
  }
  else {
    uVar11 = 4 - (ulonglong)bVar5;
    puVar10 = &DAT_14c9b7c08;
    puVar9 = &DAT_14c9b7c20;
  }
  if (bVar5 != 0) {
    puVar9 = puVar10;
  }
LAB_140b9f08b:
  *(undefined8 *)(*param_1 + 0x40) = *puVar9;
  uVar7 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,*param_1);
  *(undefined8 *)(*param_1 + 0xd0) = uVar7;
  memcpy(local_110,(void *)*param_1,0xd8);
  uVar2 = *(uint *)param_1[2];
  cVar6 = (**(code **)(*(longlong *)param_1[3] + 0x1a8))();
  if (cVar6 != '\0') {
    *(undefined8 *)(*param_1 + 0x40) = **(undefined8 **)(&DAT_14a1fc320 + uVar11 * 8);
    uVar7 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,*param_1);
    *(undefined8 *)(*param_1 + 0xd0) = uVar7;
    plVar4 = (longlong *)param_1[4];
    iVar3 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
      FUN_14069191a(plVar4,iVar3);
    }
    puVar1 = (undefined2 *)(*plVar4 + (longlong)iVar3 * 0x130);
    *(undefined8 *)(puVar1 + 0x88) = 0;
    *(undefined8 *)(puVar1 + 0x8c) = 0x300000000;
    *(undefined4 *)(puVar1 + 0x90) = 0x7fffffff;
    *(undefined8 *)(puVar1 + 0x94) = 0;
    *puVar1 = 0x100;
    memcpy(puVar1 + 4,(void *)*param_1,0xd8);
    *(uint *)(puVar1 + 0x90) = *(uint *)param_1[2] & 0x7fffffff;
    *(undefined8 *)(puVar1 + 0x94) = 0;
  }
  plVar4 = (longlong *)param_1[4];
  iVar3 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
    FUN_14069191a(plVar4,iVar3);
  }
  puVar1 = (undefined2 *)(*plVar4 + (longlong)iVar3 * 0x130);
  *puVar1 = 0x100;
  memcpy(puVar1 + 1,local_116,0xde);
  *(undefined8 *)(puVar1 + 0x88) = 0;
  *(undefined8 *)(puVar1 + 0x8c) = 0x300000000;
  *(uint *)(puVar1 + 0x90) = uVar2 & 0x7fffffff;
  *(undefined8 *)(puVar1 + 0x94) = 0;
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140b9f231 FUN_140b9f231 body=211 status=ok
// SIG undefined FUN_140b9f231(void)

undefined4 FUN_140b9f231(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *in_R9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  lStack_20 = 0;
  local_48 = &local_38;
  local_38 = 0;
  lStack_30 = 0;
  uVar1 = FUN_140b9f305();
  if ((char)uVar1 != '\0') {
    *in_R9 = DAT_14ca968c0;
    if (local_28 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lStack_20 + 8) + 0x50) +
               (longlong)*(int *)(local_28 + 0xd4) * 8);
      if (lVar2 == 0) {
        lVar2 = FUN_1400bafc2(*(longlong *)(lStack_20 + 8),(longlong)*(int *)(local_28 + 0xd4),1);
      }
    }
    in_R9[1] = lVar2;
    if (local_38 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lStack_30 + 8) + 0x50) +
               (longlong)*(int *)(local_38 + 0xd4) * 8);
      if (lVar2 == 0) {
        lVar2 = FUN_1400bafc2(*(longlong *)(lStack_30 + 8),(longlong)*(int *)(local_38 + 0xd4),1);
      }
    }
    in_R9[2] = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9f305 FUN_140b9f305 body=747 status=ok
// SIG undefined FUN_140b9f305(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_140b9f305(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  code *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = FUN_144a61873(param_2);
  if ((char)uVar1 != '\0') {
    uVar3 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2) * 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9c2820) {
      FUN_144b3d300(&DAT_14c9c2820);
      if (DAT_14c9c2820 == -1) {
        uVar2 = FUN_144a9022c();
        FUN_145e7e960();
        local_60 = &LAB_14712ac08;
        local_68 = &LAB_14712ac0c;
        local_70 = &LAB_147145e66;
        local_78 = &LAB_147145e6a;
        local_80 = FUN_147145e6e;
        local_88 = FUN_147145ec8;
        local_a0 = L"MainVS";
        local_a8 = L"/Engine/Private/DeferredDecal.usf";
        local_58 = 0xe0;
        local_90 = 1;
        local_98 = 0;
        local_50 = uVar2;
        FUN_140db5666(&DAT_14c9c2778,0,&DAT_14c9c2710,L"FDeferredDecalVS");
        _DAT_14c9c2778 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ba988b);
        _Init_thread_footer(&DAT_14c9c2820);
      }
    }
    FUN_1448e935e(uVar3,&local_38,&DAT_14c9c2778,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9c2820) {
      FUN_144b3d300(&DAT_14c9c2820);
      if (DAT_14c9c2820 == -1) {
        uVar3 = FUN_144a9022c();
        FUN_145e7e960();
        local_60 = &LAB_14712ac08;
        local_68 = &LAB_14712ac0c;
        local_70 = &LAB_147145e66;
        local_78 = &LAB_147145e6a;
        local_80 = FUN_147145e6e;
        local_88 = FUN_147145ec8;
        local_a0 = L"MainVS";
        local_a8 = L"/Engine/Private/DeferredDecal.usf";
        local_58 = 0xe0;
        local_90 = 1;
        local_98 = 0;
        local_50 = uVar3;
        FUN_140db5666(&DAT_14c9c2778,0,&DAT_14c9c2710,L"FDeferredDecalVS");
        _DAT_14c9c2778 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_142ba988b);
        _Init_thread_footer(&DAT_14c9c2820);
      }
    }
    *param_4 = local_38;
    param_4[1] = uStack_34;
    param_4[2] = uStack_30;
    param_4[3] = uStack_2c;
    *param_5 = local_48;
    param_5[1] = uStack_40;
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9f5f2 FUN_140b9f5f2 body=284 status=ok
// SIG undefined FUN_140b9f5f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b9f5f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2b98) {
    FUN_144b3d300(&DAT_14c9c2b98);
    if (DAT_14c9c2b98 == -1) {
      FUN_14577f286();
      FUN_140db5666(&DAT_14c9c2af0,1,&DAT_14c9c2a88,L"FDeferredDecalAmbientOcclusionPS",
                    L"/Engine/Private/DeferredDecal.usf",L"MainPS",3,1,FUN_147146212,FUN_1471461ea,
                    FUN_14175ef52,&LAB_1471461e6,&LAB_14712ac0c,&LAB_14712ac08,0x140,0);
      _DAT_14c9c2af0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142ba98af);
      _Init_thread_footer(&DAT_14c9c2b98);
    }
  }
  return &DAT_14c9c2af0;
}



// FUNCTION 140b9f70e FUN_140b9f70e body=284 status=ok
// SIG undefined FUN_140b9f70e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b9f70e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1ff0) {
    FUN_144b3d300(&DAT_14c9c1ff0);
    if (DAT_14c9c1ff0 == -1) {
      FUN_14577f132();
      FUN_140db5666(&DAT_14c9c1f48,2,&DAT_14c9c1ee0,L"FMeshDecalsAmbientOcclusionPS",
                    L"/Engine/Private/MeshDecals.usf",L"MainPS",3,1,FUN_14714503a,FUN_147145012,
                    FUN_14175eaa6,&LAB_14714500e,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14c9c1f48 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ba5e4f);
      _Init_thread_footer(&DAT_14c9c1ff0);
    }
  }
  return &DAT_14c9c1f48;
}



// FUNCTION 140b9f82a FUN_140b9f82a body=482 status=ok
// SIG undefined FUN_140b9f82a(void)

void FUN_140b9f82a(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58), plVar8 == (longlong *)0x0)) {
    plVar8 = (longlong *)0x0;
    bVar4 = true;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar8);
    }
    lVar10 = plVar8[0x35];
    if (lVar10 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar10);
      }
      bVar4 = false;
      goto LAB_140b9f88b;
    }
    bVar4 = false;
  }
  lVar10 = 0;
LAB_140b9f88b:
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar7);
      if (*(longlong *)(lVar9 + 0x360) == lVar10) {
        if (lVar9 != 0) {
          iVar2 = *(int *)(lVar9 + 0x2b8);
          if ((longlong)iVar2 == 0) {
            bVar5 = false;
          }
          else {
            lVar10 = *(longlong *)(lVar9 + 0x2b0);
            lVar7 = 0;
            do {
              plVar3 = *(longlong **)(lVar10 + lVar7);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x458))(plVar3,param_1,param_2);
              }
              lVar7 = lVar7 + 0x10;
            } while ((longlong)iVar2 * 0x10 != lVar7);
            bVar5 = false;
          }
          goto LAB_140b9f91e;
        }
        break;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar7);
  }
  bVar5 = true;
  lVar9 = 0;
LAB_140b9f91e:
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x3e0))
            (*(longlong **)(param_1 + 0x68),param_3,*(undefined8 *)(param_1 + 0x28));
  if (!bVar4) {
    cVar6 = (**(code **)(*plVar8 + 0x3c0))(plVar8);
    if ((cVar6 == '\0') && ((*(byte *)(param_3 + 0xe8) & 2) == 0)) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x179);
      if ((1 < bVar1) &&
         ((*(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x179) = 1, !bVar5 &&
          (iVar2 = *(int *)(lVar9 + 0x2b8), (longlong)iVar2 != 0)))) {
        lVar10 = *(longlong *)(lVar9 + 0x2b0);
        lVar7 = 0;
        do {
          plVar3 = *(longlong **)(lVar10 + lVar7);
          if ((plVar3 != (longlong *)0x0) && (plVar3 != plVar8)) {
            cVar6 = (**(code **)(*plVar3 + 0x440))(plVar3,param_2);
            if (cVar6 != '\0') {
              plVar3 = *(longlong **)(lVar10 + lVar7);
              (**(code **)(*plVar3 + 0x380))(plVar3,param_2,bVar1);
            }
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar7);
      }
    }
  }
  return;
}



// FUNCTION 140b9fa66 FUN_140b9fa66 body=886 status=ok
// SIG undefined FUN_140b9fa66(void)

undefined8 FUN_140b9fa66(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong *local_78;
  undefined1 local_70 [16];
  undefined1 *local_60 [2];
  longlong local_50;
  short local_44 [2];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14cb89771 != '\0') {
    uVar6 = 0;
    goto LAB_140b9fc3a;
  }
  DAT_14cb89771 = 1;
  local_40 = param_1;
  local_38 = param_1;
  lVar5 = FUN_1447210f0();
  if (lVar5 != 0) {
    iVar3 = FUN_14490d72a(lVar5);
    if (iVar3 == 3) goto LAB_140b9fac8;
    goto LAB_140b9fd13;
  }
LAB_140b9fac8:
  plVar7 = (longlong *)param_1[0x2d];
  if (plVar7 == (longlong *)0x0) {
LAB_140b9fc24:
    FUN_140ba0128(&local_38);
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_140ba0042();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
    if (plVar7 == (longlong *)0x0) goto LAB_140b9fc24;
    uVar6 = FUN_140ba0042();
    plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
    if ((plVar7 == plVar8) || (plVar8 == (longlong *)0x0)) goto LAB_140b9fc24;
    cVar2 = (**(code **)(*plVar8 + 0x20))(plVar8);
    if (cVar2 != '\0') goto LAB_140b9fc24;
    cVar2 = (**(code **)(*plVar8 + 0x18))(plVar8);
    if (cVar2 == '\0') {
      (**(code **)(*plVar8 + 0x48))(plVar8);
    }
    plVar7 = (longlong *)FUN_14497e828(param_1);
    if (plVar7 == (longlong *)0x0) goto LAB_140b9fc24;
    if (DAT_14cb5e538 == 0) {
      local_90 = local_60;
      local_60[0] = &LAB_1417c5d06;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1417ad04a;
      local_98 = &LAB_1486a7af7;
      local_a0 = &LAB_1464e1631;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x1000000c;
      local_c0 = 8;
      local_c8 = (undefined1 **)CONCAT44(local_c8._4_4_,0x420);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) !=
        DAT_14cb5e538 + 0x30)) goto LAB_140b9fc24;
    cVar2 = (**(code **)(*plVar7 + 0x498))(plVar7);
    if ((2 < (byte)(cVar2 - 6U)) ||
       (((lVar5 = plVar7[0x3c], lVar5 == 0 || (lVar1 = *(longlong *)(lVar5 + 0x68), lVar1 == 0)) ||
        (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 == 0)))) goto LAB_140b9fc24;
    cVar2 = (**(code **)(*plVar7 + 0x4c0))(plVar7);
    if (cVar2 == '\0') goto LAB_140b9fc24;
    FUN_14042af24(lVar1,local_44,param_1);
    if (local_44[0] < 0) goto LAB_140b9fc24;
    cVar2 = FUN_140b9fdde(lVar5,local_44);
    if (cVar2 != '\0') goto LAB_140b9fc24;
    uVar4 = FUN_1402d8968(lVar1,local_44);
    if (uVar4 < 5) {
      if (param_1[0x93] == 0) {
        FUN_140056680(local_60,L"WaitingToTransmitVaultData");
        local_78 = param_1;
        FUN_140ba042c(local_70,param_1);
        local_b8 = CONCAT31(local_b8._1_3_,1);
        local_c0 = 0x200000;
        local_c8 = local_60;
        FUN_1413d987a(lVar1,&local_50,local_44,local_70);
        param_1[0x93] = local_50;
        FUN_1449db362(local_70);
        if (local_60[0] != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x770))(param_1);
      if (cVar2 == '\0') goto LAB_140b9fc24;
      lVar5 = FUN_1403b0700(param_1);
      if ((*(longlong *)(lVar5 + 0x38) != 0) && (*(longlong *)(lVar5 + 0x38) != DAT_14cb71810)) {
        FUN_14577f4b2(param_1);
      }
    }
LAB_140b9fd13:
    FUN_140ba036e(&local_40);
    uVar6 = 0;
  }
  DAT_14cb89771 = '\0';
LAB_140b9fc3a:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9fdde FUN_140b9fdde body=105 status=ok
// SIG undefined FUN_140b9fdde(void)

ulonglong FUN_140b9fdde(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0xffff;
  lVar1 = FUN_140b9fe48();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x8a) != '\x01')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x8b)) ^ 1;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140b9fe48 FUN_140b9fe48 body=167 status=ok
// SIG undefined FUN_140b9fe48(void)

undefined8 FUN_140b9fe48(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_3 = param_1;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 3) = *param_2;
  if ((*(longlong *)(param_1 + 0x1b0) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar3 == 0)) {
    param_3[1] = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x68);
    param_3[1] = lVar3;
    if (lVar3 != 0) {
      plVar1 = param_3 + 2;
      iVar2 = FUN_140b9fef0(lVar3,param_2,plVar1);
      *(int *)((longlong)param_3 + 0x1c) = iVar2;
      if (iVar2 < 0) {
        return 0;
      }
      if (*plVar1 == 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0);
        lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28);
        *plVar1 = lVar3;
      }
      uVar4 = FUN_140b9ffa8(param_1,(longlong)param_3 + 0x1c);
      return uVar4;
    }
  }
  *(undefined4 *)((longlong)param_3 + 0x1c) = 0xffffffff;
  return 0;
}



// FUNCTION 140b9fef0 FUN_140b9fef0 body=184 status=ok
// SIG undefined FUN_140b9fef0(void)

undefined4 FUN_140b9fef0(longlong param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_2;
  if (((short)uVar1 < 0) || (*(int *)(param_1 + 0x10) <= (int)(short)uVar1)) {
LAB_140b9ff90:
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar3 == 0) || (*(uint *)(lVar3 + 8) != (uint)param_2[1])) goto LAB_140b9ff90;
    for (; -1 < *(short *)(lVar3 + 4);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8)) {
    }
  }
  if (param_3 == (undefined8 *)0x0) goto LAB_140b9ff29;
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0xb8) == 0)) {
LAB_140b9ff8c:
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0xb4);
    uVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 2) != *(int *)(lVar3 + 0xb8))) ||
         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_140b9ff8c;
      uVar4 = *puVar5;
    }
  }
  *param_3 = uVar4;
LAB_140b9ff29:
  if (lVar3 != 0) {
    return *(undefined4 *)(lVar3 + 0x50);
  }
  return 0xffffffff;
}


