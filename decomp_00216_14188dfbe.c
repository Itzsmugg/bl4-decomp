// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14188dfbe FUN_14188dfbe body=890 status=ok
// SIG undefined FUN_14188dfbe(void)

longlong FUN_14188dfbe(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined **ppuVar14;
  longlong lVar15;
  longlong local_58;
  
  lVar13 = param_2[1];
  if (lVar13 == 0) {
    uVar9 = FUN_14043db3a();
    lVar13 = FUN_14477b664(uVar9);
    param_2[1] = lVar13;
  }
  if (param_2[2] == 0) {
    if (lVar13 == 0) {
      return 0;
    }
    if (*param_2 == 0) {
      return 0;
    }
    plVar4 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
      param_2[2] = 0;
      return 0;
    }
    uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar13 = FUN_144aff482(uVar9,param_2);
    param_2[2] = lVar13;
    if (lVar13 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x3b0);
  if ((longlong)iVar1 != 0) {
    lVar13 = *(longlong *)(param_1 + 0x3a8);
    lVar15 = 0;
    do {
      lVar2 = *(longlong *)(lVar13 + lVar15);
      if ((lVar2 != 0) &&
         ((*(longlong *)(lVar2 + 0x48) == 0 ||
          ((((*(uint *)(lVar2 + 8) & 0x10) == 0 &&
            (*(longlong *)(lVar2 + 0x48) == *(longlong *)(lVar2 + 0x20))) &&
           ((*(uint *)(lVar2 + 8) & 0x10) == 0)))))) {
        lVar10 = *(longlong *)(lVar2 + 0x40);
        if (lVar10 == 0) {
          local_58 = 0;
LAB_14188e293:
          uVar9 = FUN_14043db3a();
          lVar10 = FUN_14477b664(uVar9);
        }
        else {
          local_58 = *(longlong *)(lVar10 + 0x148);
          uVar9 = FUN_14477b664(*(undefined8 *)(lVar10 + 0x150));
          lVar10 = FUN_14477b664(uVar9);
          if (lVar10 == 0) goto LAB_14188e293;
        }
        lVar11 = param_2[1];
        if (lVar11 == 0) {
          lVar11 = FUN_14043db3a();
        }
        lVar3 = *param_2;
        lVar11 = FUN_14477b664(lVar11);
        iVar7 = 0;
        if ((lVar11 != 0) && (plVar4 = *(longlong **)(lVar11 + 0xb8), plVar4 != (longlong *)0x0)) {
          lVar12 = *plVar4;
          pcVar5 = *(code **)(lVar12 + 0x108);
          if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
            cVar6 = (*pcVar5)(plVar4);
            iVar7 = 0;
            if (cVar6 == '\0') goto LAB_14188e10c;
            lVar12 = *plVar4;
          }
          pcVar5 = *(code **)(lVar12 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar5 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar5)(plVar4);
          }
          iVar7 = FUN_144aff48c(ppuVar14);
        }
LAB_14188e10c:
        iVar8 = 0;
        if ((lVar10 != 0) && (plVar4 = *(longlong **)(lVar10 + 0xb8), plVar4 != (longlong *)0x0)) {
          lVar12 = *plVar4;
          pcVar5 = *(code **)(lVar12 + 0x108);
          if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
            cVar6 = (*pcVar5)(plVar4);
            iVar8 = 0;
            if (cVar6 == '\0') goto LAB_14188e171;
            lVar12 = *plVar4;
          }
          pcVar5 = *(code **)(lVar12 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar5 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar5)(plVar4);
          }
          iVar8 = FUN_144aff48c(ppuVar14);
        }
LAB_14188e171:
        if ((iVar8 == iVar7) && (local_58 == lVar3)) {
          if (lVar10 == lVar11) {
            return lVar2;
          }
          if ((lVar10 != 0) && (lVar11 != 0)) {
            iVar7 = *(int *)(lVar11 + 0x38);
            iVar8 = *(int *)(lVar10 + 0x38);
            if ((iVar7 <= iVar8) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8) == lVar11 + 0x30))
            {
              return lVar2;
            }
            if ((iVar8 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 8) == lVar10 + 0x30))
            {
              return lVar2;
            }
          }
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar1 * 8 != lVar15);
  }
  return 0;
}



// FUNCTION 14188e338 FUN_14188e338 body=203 status=ok
// SIG undefined FUN_14188e338(void)

void FUN_14188e338(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140cf4cae();
  if (param_2 != 0) {
    lVar1 = FUN_140d53794();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_140317d24();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
    else {
      local_28 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      local_20 = &local_28;
      FUN_140bcbb96(param_1 + 0x3b8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14188e416 FUN_14188e416 body=74 status=ok
// SIG undefined FUN_14188e416(void)

undefined8 FUN_14188e416(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x378);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14188e462 FUN_14188e462 body=796 status=ok
// SIG undefined FUN_14188e462(void)

undefined4 *
FUN_14188e462(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 == (longlong *)0x0) {
LAB_14188e4be:
    plVar1 = (longlong *)FUN_1447262c2(param_4);
    uVar5 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14188e53b;
    if (DAT_14cb5c920 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_14868f36b;
      local_60 = FUN_1464d7452;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb5c920);
    if (plVar1 == (longlong *)0x0) goto LAB_14188e53b;
    if (DAT_14cb5c920 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_14868f36b;
      local_60 = FUN_1464d7452;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
    }
    plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb5c920);
    if (((plVar1 == plVar2) || (plVar2 == (longlong *)0x0)) ||
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2), plVar2 == (longlong *)0x0))
    goto LAB_14188e53b;
  }
  else {
    if (DAT_14cb5cdc8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148692775;
      local_60 = FUN_1464d923a;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb5cdc8);
    if (plVar1 == (longlong *)0x0) goto LAB_14188e4be;
    uVar4 = FUN_1447f7908();
    plVar2 = (longlong *)FUN_144718840(plVar1,uVar4);
    if ((plVar1 == plVar2) || (plVar2 == (longlong *)0x0)) goto LAB_14188e4be;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lVar3 + 0x20c);
  }
LAB_14188e53b:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar5;
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14188e780 FUN_14188e780 body=44 status=ok
// SIG undefined FUN_14188e780(void)

void FUN_14188e780(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 14188e7ac FUN_14188e7ac body=75 status=ok
// SIG undefined FUN_14188e7ac(void)

void FUN_14188e7ac(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140e51fda(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014188e7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_140fb4052(&DAT_14cb7eb10);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b4069c0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x29) = 0;
  return;
}



// FUNCTION 14188e7f8 FUN_14188e7f8 body=44 status=ok
// SIG undefined FUN_14188e7f8(void)

void FUN_14188e7f8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 14188e824 FUN_14188e824 body=3534 status=ok
// SIG undefined FUN_14188e824(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14188e824(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_178 [40];
  longlong *local_150;
  uint *local_148;
  int local_13c;
  uint *local_138;
  uint *local_130;
  uint *local_128;
  uint local_11c;
  uint *local_118;
  ulonglong local_110;
  longlong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  char local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_b9;
  uint *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  local_150 = param_1;
  if (cVar4 == '\0') {
    local_148 = (uint *)(param_1 + 0x5d);
    local_138 = (uint *)(param_1 + 0x5f);
    local_e8 = (longlong *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_138;
    if ((int)param_1[0x62] == 0) {
      iVar20 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar20 = (int)local_150[0x62];
    }
    local_88 = (undefined4)uStack_e0;
    uStack_84 = uStack_e0._4_4_;
    lStack_78 = uStack_d0;
    local_80 = local_d8;
    plVar2 = local_80;
    uStack_90 = local_e8;
    local_98 = local_148;
    local_80._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    if ((local_80._4_4_ != iVar20) || (uStack_e0 != local_138)) {
      iVar21 = local_80._4_4_;
      local_80 = plVar2;
      do {
        lVar17 = *(longlong *)local_98;
        lVar13 = *(longlong *)(lVar17 + 0x10 + (longlong)iVar21 * 0x20);
        if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x30) != 0)) {
          plVar2 = (longlong *)(lVar13 + 0x80);
          local_b8 = (uint *)&DAT_100000000;
          local_a8 = 0xffffffff;
          uStack_a0 = 0;
          plStack_b0 = plVar2;
          if (*(int *)(lVar13 + 0x98) == 0) {
            iVar5 = 0;
          }
          else {
            FUN_1449c0562(&local_b8);
            iVar5 = *(int *)(lVar13 + 0x98);
          }
          plVar14 = (longlong *)(lVar13 + 0x70);
          local_c8 = CONCAT44(uStack_9c,uStack_a0);
          uStack_d0 = local_a8;
          lVar13 = uStack_d0;
          uStack_e0 = local_b8;
          local_d8 = plStack_b0;
          uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
          iVar6 = uStack_d0._4_4_;
          local_e8 = plVar14;
          if ((uStack_d0._4_4_ != iVar5) || (uStack_d0 = lVar13, plStack_b0 != plVar2)) {
            do {
              uStack_d0 = lVar13;
              lVar13 = *(longlong *)(*local_e8 + 0x10 + (longlong)iVar6 * 0x20);
              if ((*(char *)(lVar13 + 0x2a) == '\0') &&
                 (plVar3 = *(longlong **)(lVar13 + 0x30), plVar3 != (longlong *)0x0)) {
                (**(code **)*plVar3)(plVar3,0);
                _DAT_14cb7f854 = _DAT_14cb7f854 + -1;
                *plVar3 = (longlong)DAT_14cb7f848;
                DAT_14cb7f848 = plVar3;
              }
              uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
              FUN_1449c0562(&uStack_e0);
              iVar6 = uStack_d0._4_4_;
              lVar13 = uStack_d0;
            } while (local_e8 != plVar14 || (local_d8 != plVar2 || uStack_d0._4_4_ != iVar5));
          }
          plVar2 = *(longlong **)(*(longlong *)(lVar17 + (longlong)iVar21 * 0x20 + 0x10) + 0x30);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)*plVar2)(plVar2,0);
            _DAT_14cb7f844 = _DAT_14cb7f844 + -1;
            *plVar2 = (longlong)DAT_14cb7f838;
            DAT_14cb7f838 = plVar2;
          }
        }
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar21 = local_80._4_4_;
        plVar2 = local_80;
      } while (local_98 != local_148 ||
               ((uint *)CONCAT44(uStack_84,local_88) != local_138 || local_80._4_4_ != iVar20));
    }
  }
  else {
    uVar11 = 0;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_ec[0] = '\0';
    local_130 = (uint *)(param_1 + 0x41);
    local_e8 = (longlong *)0x100000000;
    local_d8._0_4_ = 0xffffffff;
    local_d8._4_4_ = 0;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_130;
    if ((int)param_1[0x44] == 0) {
      uVar18 = 1;
      iVar20 = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar10 = (ulonglong)local_e8 & 0xffffffff;
      uVar18 = (ulonglong)local_e8 >> 0x20;
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x44);
      iVar20 = (uint)uStack_d0;
    }
    local_108 = param_1 + 0x3f;
    uVar12 = (uint)local_d8;
    uVar9 = local_d8._4_4_;
    puVar16 = uStack_e0;
    if (local_d8._4_4_ != (uint)uVar11 || uStack_e0 != local_130) {
      do {
        local_110 = uVar11;
        local_118 = puVar16;
        lVar17 = *local_108;
        lVar13 = (longlong)(int)uVar9 * 0x70;
        local_e8 = *(longlong **)(lVar17 + 0x10 + lVar13);
        local_11c = uVar12;
        local_100 = uVar18;
        local_f8 = uVar10;
        if (((local_e8 != (longlong *)0x0) &&
            (FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec), local_ec[0] == '\0')) &&
           (plVar2 = *(longlong **)(lVar17 + lVar13 + 0x10), plVar2 != (longlong *)0x0)) {
          lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar8 = FUN_140c04244();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (**(code **)*plVar2)(plVar2,0);
            _DAT_14cb7f844 = _DAT_14cb7f844 + -1;
            *plVar2 = (longlong)DAT_14cb7f838;
            DAT_14cb7f838 = plVar2;
          }
        }
        local_148 = (uint *)(lVar17 + lVar13 + 0x28);
        local_d8._4_4_ = *(uint *)(lVar17 + lVar13 + 0x40);
        uVar11 = 1;
        if (local_d8._4_4_ == 0) {
          uVar18 = 0;
          iVar21 = 0;
          uVar12 = 0;
        }
        else {
          puVar16 = *(uint **)(lVar17 + 0x38 + lVar13);
          if (puVar16 == (uint *)0x0) {
            puVar16 = local_148;
          }
          uVar12 = *puVar16;
          if (uVar12 == 0) {
            iVar21 = local_d8._4_4_ + 0x1e;
            if (-1 < (int)(local_d8._4_4_ - 1)) {
              iVar21 = local_d8._4_4_ - 1;
            }
            uVar15 = 0;
            uVar10 = (ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              uVar10 = uVar15;
            }
            uVar18 = (ulonglong)((int)uVar10 + 1);
            iVar5 = 0;
            do {
              iVar21 = (int)uVar10 * 0x20 + 0x20;
              uVar12 = local_d8._4_4_;
              if (uVar10 == uVar15) goto LAB_14188eabb;
              iVar5 = iVar5 + 0x20;
              uVar12 = puVar16[uVar15 + 1];
              uVar15 = uVar15 + 1;
            } while (uVar12 == 0);
            uVar18 = uVar15 & 0xffffffff;
          }
          else {
            uVar18 = 0;
            iVar5 = 0;
          }
          uVar11 = (ulonglong)(-uVar12 & uVar12);
          uVar10 = uVar11 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar12 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          iVar21 = iVar5;
          if ((int)local_d8._4_4_ <= (int)uVar12) {
            uVar12 = local_d8._4_4_;
          }
        }
LAB_14188eabb:
        local_138 = (uint *)(lVar17 + lVar13 + 0x40);
        local_e8 = (longlong *)CONCAT44(1 << ((byte)local_d8._4_4_ & 0x1f),(int)local_d8._4_4_ >> 5)
        ;
        local_d8._0_4_ = -1 << ((byte)local_d8._4_4_ & 0x1f);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,local_d8._4_4_) & 0xffffffffffffffe0;
        local_13c = iVar20;
        uStack_e0 = local_148;
        if (*local_138 != local_d8._4_4_) {
          local_128 = local_148;
          FUN_1449c0562(&local_e8);
        }
        uVar9 = local_d8._4_4_;
        local_128 = uStack_e0;
        if ((uVar12 != local_d8._4_4_) || (local_148 != uStack_e0)) {
          uVar19 = 0xffffffff;
          do {
            iVar20 = (int)uVar18;
            lVar7 = *(longlong *)(lVar17 + lVar13 + 0x18);
            local_e8 = *(longlong **)(lVar7 + 0x10 + (longlong)(int)uVar12 * 0x20);
            FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec);
            if ((local_ec[0] == '\0') &&
               (plVar2 = *(longlong **)(lVar7 + (longlong)(int)uVar12 * 0x20 + 0x10),
               plVar2 != (longlong *)0x0)) {
              lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
              lVar8 = FUN_14012344a();
              if ((lVar8 != 0) &&
                 ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                   == lVar8 + 0x30)))) {
                (**(code **)*plVar2)(plVar2,0);
                _DAT_14cb7f854 = _DAT_14cb7f854 + -1;
                *plVar2 = (longlong)DAT_14cb7f848;
                DAT_14cb7f848 = plVar2;
              }
            }
            uVar19 = uVar19 & ~(uint)uVar11;
            puVar16 = *(uint **)(lVar17 + lVar13 + 0x38);
            if (puVar16 == (uint *)0x0) {
              puVar16 = local_148;
            }
            uVar1 = *local_138;
            lVar7 = (longlong)iVar20;
            uVar12 = puVar16[lVar7] & uVar19;
            if (uVar12 == 0) {
              iVar5 = uVar1 + 0x1e;
              if (-1 < (int)(uVar1 - 1)) {
                iVar5 = uVar1 - 1;
              }
              iVar5 = iVar5 >> 5;
              iVar21 = iVar21 + 0x20;
              iVar6 = iVar5;
              if (iVar5 < iVar20) {
                iVar6 = iVar20;
              }
              if (iVar20 < iVar5) {
                lVar8 = 0;
                do {
                  uVar12 = puVar16[lVar7 + lVar8 + 1];
                  if (uVar12 != 0) {
                    uVar18 = (ulonglong)(iVar20 + (int)lVar8 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_14188ec62;
                  }
                  iVar21 = iVar21 + 0x20;
                  lVar8 = lVar8 + 1;
                } while (iVar6 - lVar7 != lVar8);
                uVar19 = 0xffffffff;
                iVar20 = iVar6;
              }
              uVar18 = (ulonglong)(iVar20 + 1);
              uVar12 = uVar1;
            }
            else {
LAB_14188ec62:
              uVar11 = (ulonglong)(-uVar12 & uVar12);
              uVar10 = uVar11 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              uVar12 = (iVar21 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if ((int)uVar1 <= (int)uVar12) {
                uVar12 = uVar1;
              }
            }
          } while ((uVar12 != uVar9) || (local_148 != local_128));
        }
        uVar12 = local_11c & ~(uint)local_100;
        puVar16 = *(uint **)(local_118 + 4);
        if (*(uint **)(local_118 + 4) == (uint *)0x0) {
          puVar16 = local_118;
        }
        uVar19 = local_118[6];
        iVar21 = (int)local_f8;
        lVar17 = (longlong)iVar21;
        uVar9 = puVar16[lVar17] & uVar12;
        uVar10 = local_f8;
        iVar20 = local_13c;
        if (uVar9 == 0) {
          iVar5 = uVar19 + 0x1e;
          if (-1 < (int)(uVar19 - 1)) {
            iVar5 = uVar19 - 1;
          }
          iVar5 = iVar5 >> 5;
          iVar20 = local_13c + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar21) {
            iVar6 = iVar21;
          }
          if (iVar21 < iVar5) {
            lVar13 = 0;
            do {
              uVar9 = puVar16[lVar17 + lVar13 + 1];
              if (uVar9 != 0) {
                uVar12 = 0xffffffff;
                uVar10 = (ulonglong)(iVar21 + (int)lVar13 + 1);
                goto LAB_14188ed2b;
              }
              iVar20 = iVar20 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar6 - lVar17 != lVar13);
            uVar12 = 0xffffffff;
            iVar21 = iVar6;
          }
          uVar10 = (ulonglong)(iVar21 + 1);
          uVar18 = local_100;
          uVar9 = uVar19;
        }
        else {
LAB_14188ed2b:
          uVar18 = (ulonglong)(-uVar9 & uVar9);
          uVar11 = uVar18 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar9 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)uVar19 <= (int)uVar9) {
            uVar9 = uVar19;
          }
        }
        puVar16 = local_118;
        uVar11 = local_110;
      } while (uVar9 != (uint)local_110 || local_118 != local_130);
    }
    iVar20 = 0;
    FUN_14570f31c(local_108,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar2 = local_150 + 0x49;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar14 = local_150 + 0x4b;
    local_b8 = (uint *)0x100000000;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    plStack_b0 = plVar14;
    if ((int)local_150[0x4e] != 0) {
      FUN_1449c0562(&local_b8);
      iVar20 = (int)local_150[0x4e];
    }
    uStack_d0._0_4_ = (uint)local_a8;
    uStack_d0._4_4_ = local_a8._4_4_;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = local_b8;
    local_d8 = plStack_b0;
    local_e8 = plVar2;
    if ((local_a8._4_4_ != iVar20) || (plStack_b0 != plVar14)) {
      do {
        lVar17 = *local_e8;
        lVar13 = (longlong)(int)uStack_d0._4_4_;
        puVar16 = *(uint **)(lVar17 + 0x10 + lVar13 * 0x20);
        if ((puVar16 != (uint *)0x0) &&
           ((local_b8 = puVar16, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
            local_b9 == '\0' &&
            (plVar3 = *(longlong **)(lVar17 + lVar13 * 0x20 + 0x10), plVar3 != (longlong *)0x0)))) {
          lVar17 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar13 = FUN_140c04244();
          if ((lVar13 != 0) &&
             ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar17 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
               == lVar13 + 0x30)))) {
            (**(code **)*plVar3)(plVar3,0);
            _DAT_14cb7f844 = _DAT_14cb7f844 + -1;
            *plVar3 = (longlong)DAT_14cb7f838;
            DAT_14cb7f838 = plVar3;
          }
        }
        uStack_d0._0_4_ = (uint)uStack_d0 & ~uStack_e0._4_4_;
        FUN_1449c0562(&uStack_e0);
      } while (((uStack_d0._4_4_ != iVar20) || (local_d8 != plVar14)) || (local_e8 != plVar2));
    }
    iVar20 = 0;
    FUN_1410f1df6(plVar2,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar2 = local_150 + 0x53;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar14 = local_150 + 0x55;
    local_b8 = (uint *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    plStack_b0 = plVar14;
    if ((int)local_150[0x58] != 0) {
      FUN_1449c0562(&local_b8);
      iVar20 = (int)local_150[0x58];
    }
    uStack_d0 = local_a8;
    lVar17 = uStack_d0;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = local_b8;
    local_d8 = plStack_b0;
    uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    iVar21 = uStack_d0._4_4_;
    local_e8 = plVar2;
    if ((uStack_d0._4_4_ != iVar20) || (uStack_d0 = lVar17, plStack_b0 != plVar14)) {
      do {
        uStack_d0 = lVar17;
        lVar17 = *local_e8;
        puVar16 = *(uint **)(lVar17 + 0x10 + (longlong)iVar21 * 0x20);
        if ((puVar16 != (uint *)0x0) &&
           ((local_b8 = puVar16, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
            local_b9 == '\0' &&
            (plVar3 = *(longlong **)(lVar17 + (longlong)iVar21 * 0x20 + 0x10),
            plVar3 != (longlong *)0x0)))) {
          lVar17 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar13 = FUN_14012344a();
          if ((lVar13 != 0) &&
             ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar17 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
               == lVar13 + 0x30)))) {
            (**(code **)*plVar3)(plVar3,0);
            _DAT_14cb7f854 = _DAT_14cb7f854 + -1;
            *plVar3 = (longlong)DAT_14cb7f848;
            DAT_14cb7f848 = plVar3;
          }
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar21 = uStack_d0._4_4_;
        lVar17 = uStack_d0;
      } while (((uStack_d0._4_4_ != iVar20) || (local_d8 != plVar14)) || (local_e8 != plVar2));
    }
    FUN_14570f388(plVar2,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar2 = local_80;
  }
  local_80 = plVar2;
  if ((DAT_14cb259f8 != 0) && (local_150[0x8a] != 0)) {
    FUN_14480f766();
  }
  FUN_14042ef50(local_150);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14188f5f4 FUN_14188f5f4 body=588 status=ok
// SIG undefined FUN_14188f5f4(void)

void FUN_14188f5f4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [5];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140204f88();
  lVar7 = FUN_1403f9bcc(param_3);
  if (lVar7 != 0 && param_2 != (longlong *)0x0) {
    lVar10 = param_2[0x18];
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar7 + 8);
    }
    lVar2 = *(longlong *)(lVar7 + 0x110);
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_1400b2348(puVar8,local_78 + 2,1);
    local_b0 = 0xffffffff;
    local_b8 = 0;
    iVar4 = FUN_1447ee042(local_78 + 2,L"VOBD",4,1);
    if (local_78[2] != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14cb7f768;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar9 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    if (((lVar2 != 0 && iVar4 == -1) || ((char)lVar10 != '\0')) ||
       ((lVar2 != 0 && ((iVar4 != -1 && (*(char *)(lVar3 + uVar9) != '\0')))))) {
      local_78[0] = 0;
      local_78[1] = 0;
      local_a0 = *(undefined8 *)(lVar7 + 0x108);
      local_98 = *(undefined4 *)(lVar7 + 0x110);
      uStack_94 = *(undefined4 *)(lVar7 + 0x114);
      uStack_90 = *(undefined4 *)(lVar7 + 0x118);
      uStack_8c = *(undefined4 *)(lVar7 + 0x11c);
      local_88 = (void *)0x0;
      local_80 = *(int *)(lVar7 + 0x128);
      lVar10 = (longlong)local_80;
      _Src = *(void **)(lVar7 + 0x120);
      if (lVar10 == 0) {
        local_7c = 0;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,_Src,lVar10 * 2);
      }
      FUN_140d56af4(local_78 + 2,&local_a0,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_2 + 8))(param_2,local_78 + 3,0);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14188f842 FUN_14188f842 body=199 status=ok
// SIG undefined FUN_14188f842(void)

ulonglong FUN_14188f842(longlong param_1,undefined8 param_2,uint *param_3)

{
  ushort uVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x155) & 1) == 0) {
    if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
      lVar3 = param_1 + 0x1a0;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1a8);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1b0) - 1U & *param_3) * 4);
      if (iVar4 != -1) {
        do {
          unaff_RSI = (longlong)iVar4 * 0x38;
          lVar3 = *(longlong *)(param_1 + 0x168) + unaff_RSI;
          if (*(uint *)(*(longlong *)(param_1 + 0x168) + unaff_RSI) == *param_3) {
            if ((lVar3 != 0) && ((ushort *)(lVar3 + 0x28) != (ushort *)0x0)) {
              uVar1 = *(ushort *)(lVar3 + 0x28);
              uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
              if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x160))) {
                FUN_1401d5310(param_2,(ulonglong)uVar1 * 0x10 + *(longlong *)(param_1 + 0x158));
              }
              goto LAB_14188f852;
            }
            break;
          }
          iVar4 = *(int *)(lVar3 + 0x30);
        } while (iVar4 != -1);
      }
    }
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                     *(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c));
  }
  else {
    uVar2 = 0;
  }
LAB_14188f852:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14188f924 FUN_14188f924 body=44 status=ok
// SIG undefined FUN_14188f924(void)

void FUN_14188f924(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,1);
  return;
}



// FUNCTION 14188f950 FUN_14188f950 body=71 status=ok
// SIG undefined FUN_14188f950(void)

undefined8 FUN_14188f950(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14188f998 FUN_14188f998 body=86 status=ok
// SIG undefined FUN_14188f998(void)

void FUN_14188f998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(param_1 + 7)])();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 14188f9ee FUN_14188f9ee body=369 status=ok
// SIG undefined FUN_14188f9ee(void)

void FUN_14188f9ee(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
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
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14188fa75;
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
LAB_14188fa75:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 14188fb60 FUN_14188fb60 body=381 status=ok
// SIG undefined FUN_14188fb60(void)

ulonglong FUN_14188fb60(void)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = (ulonglong)DAT_14cb7eed0;
  uVar4 = DAT_14cb7eed4 - DAT_14cb7eed0;
  uVar6 = (ulonglong)uVar4;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar4 * 0x58)) ||
      ((int)(DAT_14cb7eed0 * 3) < DAT_14cb7eed4 * 2)) &&
     ((DAT_14cb7eed0 == 0 || (0x40 < (int)uVar4)))) {
    if (0 < (int)DAT_14cb7eed0) {
      uVar5 = uVar5 * 0x58;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar5 + 0xf;
          if (DAT_14cb7eed0 < 0x175) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x7ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14188fbfd;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar6 & 0x7ffffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
        }
      }
LAB_14188fbfd:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      uVar6 = SUB168(auVar3 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
      uVar5 = uVar5 / 0x58;
    }
    if ((int)uVar5 != DAT_14cb7eed4) {
      DAT_14cb7eed4 = (int)uVar5;
      uVar6 = FUN_1446f8d3c(&DAT_14cb7eec8,DAT_14cb7eed0,uVar5,0x58,8);
    }
  }
  return uVar6;
}



// FUNCTION 14188fcde FUN_14188fcde body=353 status=ok
// SIG undefined FUN_14188fcde(void)

void FUN_14188fcde(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14188fd63;
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
LAB_14188fd63:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14188fe40 FUN_14188fe40 body=68 status=ok
// SIG undefined FUN_14188fe40(void)

undefined8 * FUN_14188fe40(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b40aad0;
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



// FUNCTION 14188fe84 FUN_14188fe84 body=118 status=ok
// SIG undefined FUN_14188fe84(void)

void FUN_14188fe84(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b40aad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14188fefa FUN_14188fefa body=29 status=ok
// SIG undefined FUN_14188fefa(void)

undefined8 FUN_14188fefa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14188ff18 FUN_14188ff18 body=307 status=ok
// SIG undefined FUN_14188ff18(void)

int FUN_14188ff18(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar8 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x30;
        puVar1 = (undefined8 *)(lVar8 + lVar10);
        if (*(longlong *)(lVar8 + 8 + lVar10) == 0) {
          uVar7 = FUN_14043db3a();
          uVar7 = FUN_14477b664(uVar7);
          puVar1[1] = uVar7;
        }
        lVar8 = param_3[1];
        if (lVar8 == 0) {
          lVar8 = FUN_14043db3a();
        }
        uVar7 = *param_3;
        uVar6 = FUN_14477b664(lVar8);
        local_50 = uVar7;
        uVar3 = FUN_144a7891a(uVar6);
        local_58 = *puVar1;
        uVar7 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar7);
        local_68 = uVar6;
        local_60 = &local_50;
        cVar2 = FUN_144a789b8(uVar4,uVar7,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_14188ff44;
        lVar8 = *param_1;
        iVar9 = *(int *)(lVar8 + 0x28 + lVar10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_14188ff44:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 14189004c FUN_14189004c body=310 status=ok
// SIG undefined FUN_14189004c(void)

int FUN_14189004c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      lVar8 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x60;
        puVar1 = (undefined8 *)(lVar8 + lVar10);
        if (*(longlong *)(lVar8 + 8 + lVar10) == 0) {
          uVar7 = FUN_14043db3a();
          uVar7 = FUN_14477b664(uVar7);
          puVar1[1] = uVar7;
        }
        lVar8 = param_3[1];
        if (lVar8 == 0) {
          lVar8 = FUN_14043db3a();
        }
        uVar7 = *param_3;
        uVar6 = FUN_14477b664(lVar8);
        local_50 = uVar7;
        uVar3 = FUN_144a7891a(uVar6);
        local_58 = *puVar1;
        uVar7 = puVar1[1];
        uVar4 = FUN_144a7891a(uVar7);
        local_60 = &local_50;
        local_68 = uVar6;
        cVar2 = FUN_144a789b8(uVar4,uVar7,&local_58,uVar3);
        if (cVar2 != '\0') goto LAB_141890078;
        lVar8 = *param_1;
        iVar9 = *(int *)(lVar8 + 0x58 + lVar10);
      } while (iVar9 != -1);
    }
  }
  iVar9 = -1;
LAB_141890078:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 141890184 FUN_141890184 body=109 status=ok
// SIG undefined FUN_141890184(void)

void FUN_141890184(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0xb0))();
  if (cVar2 != '\0') {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb809d0;
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb809c8;
  return;
}



// FUNCTION 1418901f2 FUN_1418901f2 body=60 status=ok
// SIG undefined FUN_1418901f2(void)

void FUN_1418901f2(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    fVar1 = (float)FUN_141236616(param_1);
    if (fVar1 < *(float *)(param_1 + 0x70)) {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 14189022e FUN_14189022e body=58 status=ok
// SIG undefined FUN_14189022e(void)

bool FUN_14189022e(longlong param_1)

{
  bool bVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x74) == '\x01') {
    if (*(float *)(param_1 + 0x1a0) <= 0.0 && *(float *)(param_1 + 0x1a0) != 0.0) {
      bVar1 = true;
    }
    else {
      fVar2 = (float)FUN_141236616(param_1);
      bVar1 = *(float *)(param_1 + 0x1a0) <= fVar2;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 14189026e FUN_14189026e body=95 status=ok
// SIG undefined FUN_14189026e(void)

void FUN_14189026e(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b40c874);
  iVar2 = FUN_1448332aa(param_2,&DAT_14b40c874);
  if ((iVar2 < 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 1418902ce FUN_1418902ce body=487 status=ok
// SIG undefined FUN_1418902ce(void)

longlong * FUN_1418902ce(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar2 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14a79d330;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40d550;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_14889ba5c;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14a79d330;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b40d550;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_14889ba5c;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418904bc FUN_1418904bc body=126 status=ok
// SIG undefined FUN_1418904bc(void)

void FUN_1418904bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar4 = 0;
    lVar2 = 0;
    do {
      uVar3 = (ulonglong)(uint)DAT_14cb809c8;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(ulonglong *)(*param_2 + (longlong)iVar1 * 8) = uVar3 + lVar4;
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x100000000;
    } while (lVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 14189053a FUN_14189053a body=180 status=ok
// SIG undefined FUN_14189053a(void)

void FUN_14189053a(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((longlong)*(int *)(lVar2 + 0x88) == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    lVar4 = 0;
    do {
      fVar5 = fVar5 + *(float *)(*(longlong *)(lVar2 + 0x80) + lVar4);
      lVar4 = lVar4 + 4;
    } while ((longlong)*(int *)(lVar2 + 0x88) * 4 != lVar4);
  }
  uVar3 = rand();
  if (0 < (longlong)*(int *)(lVar2 + 0x88)) {
    fVar5 = fVar5 * ((float)(uVar3 & 0x7fff) / 32767.0) + 0.0;
    lVar4 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(lVar2 + 0x80) + lVar4 * 4);
      if ((0.0 < fVar1) && (fVar5 = fVar5 - fVar1, fVar5 <= 0.0)) goto LAB_1418905ce;
      lVar4 = lVar4 + 1;
    } while (*(int *)(lVar2 + 0x88) != lVar4);
  }
  lVar4 = 0;
LAB_1418905ce:
  FUN_14122bd00(param_1,lVar4);
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 1418905ee FUN_1418905ee body=189 status=ok
// SIG undefined FUN_1418905ee(void)

void FUN_1418905ee(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  longlong local_78;
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x130))(plVar2,local_90);
    uVar3 = FUN_141297d58(local_90);
    FUN_140851e80(local_68,uVar3);
    FUN_14042b1ec(param_2,local_68,1);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418906ac FUN_1418906ac body=56 status=ok
// SIG undefined FUN_1418906ac(void)

void FUN_1418906ac(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1449bd2b2(param_1 + 0x2a8);
  FUN_1409d1ca6(param_1 + 0x5c8,param_2,param_3);
  return;
}



// FUNCTION 14189070c FUN_14189070c body=139 status=ok
// SIG undefined FUN_14189070c(void)

undefined8 *
FUN_14189070c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)FUN_1403cba6c(param_1 + -0x3d8);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*plVar2 + 0x4c8))(plVar2,param_3), cVar1 == '\0')) {
    puVar4 = &DAT_14c846480;
    if (*(longlong *)(param_1 + -0x210) != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + -0x210) + 0x240);
    }
    puVar5 = param_2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x4a8))(plVar2,param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 141890798 FUN_141890798 body=187 status=ok
// SIG undefined FUN_141890798(void)

ulonglong FUN_141890798(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  undefined7 uVar3;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "GbxStandInManager";
  local_20 = 0x11;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (*param_2 != (ulonglong)uVar1) {
    local_28 = "AnimManager";
    local_20 = 0xb;
    local_1c = 0;
    uVar1 = FUN_14001a6c0(&local_28,1);
    if (*param_2 != (ulonglong)uVar1) {
      local_28 = "GbxTrickManager";
      local_20 = 0xf;
      local_1c = 0;
      uVar1 = FUN_14001a6c0(&local_28,1);
      uVar2 = CONCAT71(uVar3,*param_2 == (ulonglong)uVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141890854 FUN_141890854 body=157 status=ok
// SIG undefined FUN_141890854(void)

undefined8 FUN_141890854(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80fa0) {
    FUN_144b3d300(&DAT_14cb80fa0);
    if (DAT_14cb80fa0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb80f98 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.gbx.SkeletalMesh.CustomMaterialSetAfterPSOPrecache",1);
      _Init_thread_footer(&DAT_14cb80fa0);
    }
  }
  if (DAT_14cb80f98 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014189088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_14cb80f98 + 0xb0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1418908f2 FUN_1418908f2 body=128 status=ok
// SIG undefined FUN_1418908f2(void)

void FUN_1418908f2(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b40e248);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141890974 FUN_141890974 body=419 status=ok
// SIG undefined FUN_141890974(void)

void FUN_141890974(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar4 = FUN_1400439fc(param_1,0,&local_51);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  plVar1 = param_1 + 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) < 0) {
    FUN_1488b732c(plVar1);
  }
  plVar2 = param_1 + 0x11;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) < 0) {
    FUN_1488b732c(plVar2);
  }
  if ((longlong)(int)param_1[0xe] != 0) {
    lVar7 = param_1[0xd];
    lVar6 = (longlong)(int)param_1[0xe] * 0x18;
    do {
      if (1.0 <= *(float *)(lVar7 + 0x10)) {
        iVar8 = (int)param_1[0x10];
        *(uint *)(param_1 + 0x10) = iVar8 + 1U;
        plVar5 = plVar1;
        if (*(uint *)((longlong)param_1 + 0x84) < iVar8 + 1U) {
          FUN_1488b735c(plVar1,iVar8);
        }
      }
      else {
        iVar8 = (int)param_1[0x12];
        *(uint *)(param_1 + 0x12) = iVar8 + 1U;
        plVar5 = plVar2;
        if (*(uint *)((longlong)param_1 + 0x94) < iVar8 + 1U) {
          FUN_1488b735c(plVar2,iVar8);
        }
      }
      lVar3 = *plVar5 + (longlong)iVar8 * 0x18;
      FUN_1488b73f0(lVar3,lVar7);
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar7 + 0x10);
      *(undefined1 *)(lVar3 + 0x14) = *(undefined1 *)(lVar7 + 0x14);
      lVar7 = lVar7 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141890b18 FUN_141890b18 body=266 status=ok
// SIG undefined FUN_141890b18(void)

undefined8 * FUN_141890b18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40e000;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa8c730;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc9c0(param_1 + 0x62);
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc994(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141890c22 FUN_141890c22 body=71 status=ok
// SIG undefined FUN_141890c22(void)

undefined8 * FUN_141890c22(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141890c6a FUN_141890c6a body=29 status=ok
// SIG undefined FUN_141890c6a(void)

undefined8 FUN_141890c6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141890c88 FUN_141890c88 body=334 status=ok
// SIG undefined FUN_141890c88(void)

void FUN_141890c88(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141890cf5;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141890cf5:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 141890dd6 FUN_141890dd6 body=320 status=ok
// SIG undefined FUN_141890dd6(void)

void FUN_141890dd6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141890e3f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141890e3f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 141890f16 FUN_141890f16 body=65 status=ok
// SIG undefined FUN_141890f16(void)

void FUN_141890f16(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  if (param_1 != 0) {
    lVar1 = param_1;
    while ((*(uint *)(lVar1 + 8) & 0x30) == 0) {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      if (lVar1 == 0) {
        FUN_1404d4eb0(param_1 + 0x398,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141890f58 FUN_141890f58 body=33 status=ok
// SIG undefined FUN_141890f58(void)

void FUN_141890f58(longlong param_1)

{
  FUN_140872622();
  FUN_140521134(param_1 + 0x398);
  return;
}



// FUNCTION 141890f7a FUN_141890f7a body=39 status=ok
// SIG undefined FUN_141890f7a(void)

bool FUN_141890f7a(longlong param_1)

{
  FUN_1405f85e0(param_1 + 0x398);
  return (byte)(*(char *)(param_1 + 0x499) - 3U) < 2;
}



// FUNCTION 141890fa2 FUN_141890fa2 body=185 status=ok
// SIG undefined FUN_141890fa2(void)

void FUN_141890fa2(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405f1eac();
  FUN_1405f85e0(param_1 + 0x398);
  plVar1 = *(longlong **)(param_1 + 0x4a0);
  if (plVar1 != (longlong *)0x0) {
    if ((*(double *)(param_1 + 0x500) == DAT_14c8464e0) &&
       (!NAN(*(double *)(param_1 + 0x500)) && !NAN(DAT_14c8464e0))) {
      if ((*(double *)(param_1 + 0x508) == DAT_14c8464e8) &&
         (!NAN(*(double *)(param_1 + 0x508)) && !NAN(DAT_14c8464e8))) {
        if ((*(double *)(param_1 + 0x510) == DAT_14c8464f0) &&
           (!NAN(*(double *)(param_1 + 0x510)) && !NAN(DAT_14c8464f0))) goto LAB_141891015;
      }
    }
    local_18 = *(undefined8 *)(param_1 + 0x510);
    local_28 = *(undefined8 *)(param_1 + 0x500);
    uStack_20 = *(undefined8 *)(param_1 + 0x508);
    (**(code **)(*plVar1 + 0x6a8))(plVar1,&local_28,0,0);
  }
LAB_141891015:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189105c FUN_14189105c body=137 status=ok
// SIG undefined FUN_14189105c(void)

void FUN_14189105c(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403d8a98();
  lVar1 = FUN_1447210f0(param_1);
  if (((param_2 != 3) || (lVar1 == 0)) || ((*(byte *)(lVar1 + 0x155) & 0x20) != 0)) {
    FUN_140633cb6(param_1 + 0x398,1);
  }
  FUN_140e15cbe(&local_28);
  FUN_14051c89e(param_1 + 0x20d,param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418910e6 FUN_1418910e6 body=604 status=ok
// SIG undefined FUN_1418910e6(void)

void FUN_1418910e6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_2 == 0) || ((*(byte *)(param_1 + 0x2d8) & 2) == 0)) goto LAB_14189125d;
  puVar1 = (uint *)(param_2 + 0x1f);
  if (((*(int *)((longlong)param_2 + 0xfc) == 0) ||
      (((uVar2 = *puVar1, (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0)))) ||
     ((((int)plVar6[2] != *(int *)((longlong)param_2 + 0xfc) ||
       ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) || (*plVar6 == 0)))) {
    if (param_2[0x20] == 0) goto LAB_14189125d;
    lVar5 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar3 == '\0')) {
      if (lVar5 == 0) {
        param_2[0x1f] = 0;
        goto LAB_14189125d;
      }
      uVar2 = *(uint *)(lVar5 + 0xc);
      *puVar1 = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar8;
        }
      }
      *(int *)((longlong)param_2 + 0xfc) = iVar4;
    }
    else {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) goto LAB_14189125d;
  }
  if ((((*(longlong *)(param_1 + 0x20) == 0) ||
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x32b8), lVar5 == 0)) ||
      (iVar4 = FUN_144909502(lVar5,*param_2), iVar4 == -1)) || ((*(byte *)(lVar5 + 0x9c) & 1) == 0))
  {
    puVar7 = &DAT_14c846480;
    puVar9 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    FUN_140084aae(lVar5,local_98,iVar4,lVar5 + 0x240);
  }
  FUN_140a8e0a4(param_1,local_98,param_3,param_2);
LAB_14189125d:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141891344 FUN_141891344 body=837 status=ok
// SIG undefined FUN_141891344(void)

/* WARNING: Removing unreachable block (ram,0x0001418915c3) */
/* WARNING: Type propagation algorithm not settling */

void FUN_141891344(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *******pppppppuVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  void *_Dst;
  bool bVar17;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  ulonglong uStack_90;
  undefined8 *******local_88;
  longlong local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(int *)(param_1 + 0x44c) != 0) && (uVar3 = *(uint *)(param_1 + 0x448), -1 < (int)uVar3))
       && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x44c))))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (lVar12 = *plVar14, lVar12 != 0)))) {
    uVar10 = FUN_1447210f0(lVar12);
    lVar11 = FUN_140149a73(uVar10,0);
    if ((lVar11 != 0) && (plVar14 = *(longlong **)(lVar11 + 0x140), plVar14 != (longlong *)0x0)) {
      lVar11 = *(longlong *)(param_1 + 0x48);
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      (**(code **)(*plVar14 + 0x48 + (ulonglong)*(byte *)(lVar11 + 0x1cc) * 8))
                (plVar14,lVar12,&local_98);
      if ((longlong)(int)uStack_90 == 0) {
        uVar15 = 0;
      }
      else {
        plVar16 = local_98 + (longlong)(int)uStack_90 * 2;
        plVar14 = local_98;
        do {
          plVar4 = (longlong *)plVar14[1];
          if (plVar4 != (longlong *)0x0) {
            iVar9 = (int)plVar4[1];
            do {
              if (iVar9 == 0) goto LAB_141891559;
              LOCK();
              iVar7 = (int)plVar4[1];
              bVar17 = iVar9 == iVar7;
              if (bVar17) {
                *(int *)(plVar4 + 1) = iVar9 + 1;
                iVar7 = iVar9;
              }
              iVar9 = iVar7;
              UNLOCK();
            } while (!bVar17);
            if ((longlong *)*plVar14 != (longlong *)0x0) {
              if (*(int *)(lVar11 + 0x1c8) != 0) {
                cVar8 = (**(code **)(*(longlong *)*plVar14 + 8))();
                if (cVar8 == '\x02') {
                  bVar6 = *(byte *)(lVar11 + 0x1c8) & 4;
                }
                else if (cVar8 == '\x01') {
                  bVar6 = *(byte *)(lVar11 + 0x1c8) & 2;
                }
                else {
                  if (cVar8 != '\0') goto LAB_141891487;
                  bVar6 = *(byte *)(lVar11 + 0x1c8) & 1;
                }
                if (bVar6 == 0) goto LAB_14189154f;
              }
LAB_141891487:
              iVar9 = *(int *)(param_2 + 0x388);
              *(uint *)(param_2 + 0x388) = iVar9 + 1U;
              if (*(uint *)(param_2 + 0x38c) < iVar9 + 1U) {
                FUN_14052e0a0(param_2,iVar9);
              }
              lVar12 = *(longlong *)(param_2 + 0x380);
              if (*(longlong *)(param_2 + 0x380) == 0) {
                lVar12 = param_2;
              }
              _Dst = (void *)((longlong)iVar9 * 0x38 + lVar12);
              local_70 = 0x10;
              local_88 = (undefined8 *******)*plVar14;
              local_80 = plVar14[1];
              if (local_80 == 0) {
                *(undefined2 *)((longlong)_Dst + 0x18) = 0x10;
              }
              else {
                LOCK();
                *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
                UNLOCK();
                *(undefined2 *)((longlong)_Dst + 0x18) = 0x10;
              }
              local_68 = 0x10;
              if (DAT_14c9a97b0 == (code *)0x0) {
                memcpy(_Dst,&local_88,(longlong)DAT_14c9a9710);
              }
              else {
                (*DAT_14c9a97b0)();
              }
              *(byte *)((longlong)_Dst + 0x20) = local_68;
              *(undefined8 *)((longlong)_Dst + 0x28) = 0;
              *(undefined8 *)((longlong)_Dst + 0x30) = 0;
              pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
              if (pcVar5 != (code *)0x0) {
                pppppppuVar13 = &local_88;
                if (0x18 < local_70) {
                  pppppppuVar13 = local_88;
                }
                (*pcVar5)(pppppppuVar13);
              }
              if (0x18 < local_70) {
                FUN_1400020a8(local_88);
              }
            }
LAB_14189154f:
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
LAB_141891559:
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar16);
        uVar15 = uStack_90 & 0xffffffff;
      }
      FUN_140be4274(local_98,uVar15);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189168a FUN_14189168a body=194 status=ok
// SIG undefined FUN_14189168a(void)

void FUN_14189168a(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  FUN_1406ff33a();
  lVar3 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar4 = FUN_140309e34(lVar2 + 0x80,lVar3,lVar2 + 0x98);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  fVar5 = (float)FUN_140309e34(lVar2 + 0xa0,lVar3,lVar2 + 0xb8);
  *(float *)(param_1 + 100) = fVar5;
  fVar1 = *(float *)(param_1 + 0x60);
  if (*(int *)(lVar2 + 0xe0) == 2) {
    fVar6 = (fVar5 + fVar1) * 0.5;
  }
  else {
    fVar6 = fVar1;
    if (*(int *)(lVar2 + 0xe0) == 3) {
      fVar6 = (float)FUN_140309e34(lVar2 + 0xc0,lVar3,lVar2 + 0xd8);
      if (fVar5 <= fVar6) {
        fVar6 = fVar5;
      }
      if (fVar6 <= fVar1) {
        fVar6 = fVar1;
      }
    }
  }
  *(float *)(param_1 + 0x68) = fVar6;
  return;
}



// FUNCTION 14189174c FUN_14189174c body=564 status=ok
// SIG undefined FUN_14189174c(void)

void FUN_14189174c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong unaff_RBX;
  uint uVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  longlong lStack_70;
  uint local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  iVar1 = *(int *)(lVar2 + 0x80);
  local_57 = *(undefined1 *)(lVar2 + 0x78);
  local_5c = *(undefined4 *)(param_1 + 0x58);
  lVar3 = *param_2;
  lStack_70 = param_2[1];
  local_64 = 0x3f80000000000000;
  local_58 = 0;
  uVar4 = (uint)lStack_70;
  uVar8 = 0;
  local_78 = lVar3;
  if ((uint)lStack_70 == 0) {
LAB_14189180b:
    local_68 = uVar8;
    if (uVar8 < (uint)lStack_70) {
      do {
        uVar8 = local_68;
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar2 + 0x84));
        lVar6 = FUN_14030a32e((longlong)(int)local_68 * 0x38 + lVar3);
        if (lVar6 != 0) {
          if (DAT_14cb56270 == 0) {
            local_90 = &local_50;
            local_50 = FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_1427b09ee;
            local_98 = &LAB_148630fef;
            local_a0 = FUN_1464b6a91;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10004001;
            local_c0 = 8;
            local_c8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
          }
          plVar7 = (longlong *)FUN_144718840(lVar6,DAT_14cb56270);
          if (plVar7 != (longlong *)0x0) {
            uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
            unaff_RBX = (ulonglong)CONCAT31((int3)((uint)uVar5 >> 8),(byte)uVar5 ^ iVar1 != 1);
          }
        }
        FUN_1402d7d58(&local_78,unaff_RBX & 0xffffffff);
        local_68 = uVar8 + 1;
        if ((local_68 < uVar4) &&
           ((*(byte *)(lVar3 + 0x34 + (longlong)(int)local_68 * 0x38) & 1) != 0)) {
          uVar8 = uVar8 + 2;
          do {
            local_68 = uVar4;
            if (uVar4 == uVar8) break;
            lVar6 = (longlong)(int)uVar8;
            local_68 = uVar8;
            uVar8 = uVar8 + 1;
          } while ((*(byte *)(lVar3 + 0x34 + lVar6 * 0x38) & 1) != 0);
        }
      } while (local_68 < uVar4);
    }
  }
  else {
    do {
      if ((*(byte *)(lVar3 + 0x34 + (longlong)(int)uVar8 * 0x38) & 1) == 0) goto LAB_14189180b;
      uVar8 = uVar8 + 1;
    } while ((uint)lStack_70 != uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141891981 FUN_141891981 body=618 status=ok
// SIG undefined FUN_141891981(void)

void FUN_141891981(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  char *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_2 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)param_2 + 0x2d3) = *(byte *)((longlong)param_2 + 0x2d3) | 8;
    (**(code **)(*param_2 + 0x958))(param_2);
  }
  local_58 = "OnBeginHazardDamageOverlap";
  local_50 = CONCAT35(local_50._5_3_,0x1a);
  uVar4 = FUN_14001a6c0(&local_58,1);
  uVar10 = 0;
  uVar6 = 0;
  uVar11 = 0;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar7;
      }
      uVar11 = (ulonglong)uVar3;
    }
  }
  local_58 = "OnEndHazardDamageOverlap";
  local_50 = CONCAT35(local_50._5_3_,0x18);
  uVar5 = FUN_14001a6c0(&local_58,1);
  uVar9 = 0;
  if (param_1 != 0) {
    uVar10 = *(uint *)(param_1 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar9 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar7;
      }
      uVar9 = (ulonglong)uVar3;
    }
  }
  FUN_140838726((longlong)param_2 + 0x599,&local_60);
  local_58 = (char *)((ulonglong)uVar6 | uVar11 << 0x20);
  local_50 = uVar4 & 0xffffffff;
  bVar2 = FUN_140a28ca8(param_2,local_60,&local_58);
  *(byte *)((longlong)param_2 + 0x599) = *(byte *)((longlong)param_2 + 0x599) | bVar2;
  FUN_140852908((longlong)param_2 + 0x59a,&local_60);
  local_58 = (char *)((ulonglong)uVar10 | uVar9 << 0x20);
  local_50 = uVar5 & 0xffffffff;
  bVar2 = FUN_140a28ca8(param_2,local_60,&local_58);
  *(byte *)((longlong)param_2 + 0x59a) = *(byte *)((longlong)param_2 + 0x59a) | bVar2;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141891bec FUN_141891bec body=618 status=ok
// SIG undefined FUN_141891bec(void)

void FUN_141891bec(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  char *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_2 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)param_2 + 0x2d3) = *(byte *)((longlong)param_2 + 0x2d3) | 8;
    (**(code **)(*param_2 + 0x958))(param_2);
  }
  local_58 = "OnBeginHazardInteractionOverlap";
  local_50 = CONCAT35(local_50._5_3_,0x1f);
  uVar4 = FUN_14001a6c0(&local_58,1);
  uVar10 = 0;
  uVar6 = 0;
  uVar11 = 0;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar7;
      }
      uVar11 = (ulonglong)uVar3;
    }
  }
  local_58 = "OnEndHazardInteractionOverlap";
  local_50 = CONCAT35(local_50._5_3_,0x1d);
  uVar5 = FUN_14001a6c0(&local_58,1);
  uVar9 = 0;
  if (param_1 != 0) {
    uVar10 = *(uint *)(param_1 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar9 = (ulonglong)*(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar7;
      }
      uVar9 = (ulonglong)uVar3;
    }
  }
  FUN_140838726((longlong)param_2 + 0x599,&local_60);
  local_58 = (char *)((ulonglong)uVar6 | uVar11 << 0x20);
  local_50 = uVar4 & 0xffffffff;
  bVar2 = FUN_140a28ca8(param_2,local_60,&local_58);
  *(byte *)((longlong)param_2 + 0x599) = *(byte *)((longlong)param_2 + 0x599) | bVar2;
  FUN_140852908((longlong)param_2 + 0x59a,&local_60);
  local_58 = (char *)((ulonglong)uVar10 | uVar9 << 0x20);
  local_50 = uVar5 & 0xffffffff;
  bVar2 = FUN_140a28ca8(param_2,local_60,&local_58);
  *(byte *)((longlong)param_2 + 0x59a) = *(byte *)((longlong)param_2 + 0x59a) | bVar2;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141891e58 FUN_141891e58 body=431 status=ok
// SIG undefined FUN_141891e58(void)

void FUN_141891e58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x58);
  puVar2 = (uint *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x80);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar5 = puVar2;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_141891e9a;
        iVar7 = iVar7 + 0x20;
        uVar6 = puVar5[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar6 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar7;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar6 & uVar6;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_141891e9a:
  local_48 = 0xffffffff;
  local_60 = plVar1;
  local_50 = puVar2;
  if (local_44 != iVar3) {
    do {
      do {
        (**(code **)(*param_2 + 0x88))(param_2,(longlong)local_44 * 0x68 + *local_60,0,0);
        local_48 = local_48 & ~local_54;
        FUN_1449c0562(&local_58);
      } while (local_44 != iVar3);
    } while ((local_50 != puVar2) || (local_60 != plVar1));
  }
  local_68 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0),0);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141892008 FUN_141892008 body=40 status=ok
// SIG undefined FUN_141892008(void)

void FUN_141892008(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 1000,param_1 + 0x3d8);
  return;
}



// FUNCTION 141892030 FUN_141892030 body=70 status=ok
// SIG undefined FUN_141892030(void)

void FUN_141892030(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1405f1eac();
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,(char)plVar1[0x56],0);
  }
  FUN_1407c0b34(param_1 + 1000,param_1 + 0x3d8,param_1);
  return;
}



// FUNCTION 141892076 FUN_141892076 body=76 status=ok
// SIG undefined FUN_141892076(void)

undefined8 FUN_141892076(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14109547a(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001418920b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1418920c2 FUN_1418920c2 body=152 status=ok
// SIG undefined FUN_1418920c2(void)

void FUN_1418920c2(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140115e24();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_14189212a;
  FUN_144757f48(param_1,0x4000000);
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_141892112;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_141892112:
    local_20 = param_1 + 0x398;
  }
  local_28 = param_1;
  FUN_140eae5d4(param_1 + 0x3a0);
LAB_14189212a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189215c FUN_14189215c body=35 status=ok
// SIG undefined FUN_14189215c(void)

void FUN_14189215c(longlong param_1)

{
  FUN_140d7ddf8(param_1 + 0xb68,0);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 141892180 FUN_141892180 body=26 status=ok
// SIG undefined FUN_141892180(void)

void FUN_141892180(undefined8 param_1)

{
  FUN_140dd17ea();
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 14189219a FUN_14189219a body=150 status=ok
// SIG undefined FUN_14189219a(void)

undefined8 * FUN_14189219a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40fae0;
  plVar3 = (longlong *)param_1[0x24];
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
  plVar3 = (longlong *)param_1[0x22];
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
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141892230 FUN_141892230 body=29 status=ok
// SIG undefined FUN_141892230(void)

undefined8 FUN_141892230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189224e FUN_14189224e body=101 status=ok
// SIG undefined FUN_14189224e(void)

void FUN_14189224e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418922b4 FUN_1418922b4 body=152 status=ok
// SIG undefined FUN_1418922b4(void)

void FUN_1418922b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40fc00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x000141892341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 14189234c FUN_14189234c body=296 status=ok
// SIG undefined FUN_14189234c(void)

ulonglong FUN_14189234c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14189246e;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14189246e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14189246e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14189241c;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pcVar3 = *(code **)(param_1 + 0x20);
      plVar9 = (longlong *)(param_1 + 0x40);
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x30);
      }
      uVar6 = (**(code **)(*plVar9 + 8))(plVar9);
      (*pcVar3)(uVar6);
      uVar8 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
      goto LAB_14189241c;
    }
  }
  uVar8 = 0;
LAB_14189241c:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141892476 FUN_141892476 body=353 status=ok
// SIG undefined FUN_141892476(void)

void FUN_141892476(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418924fb;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1418924fb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1418925d8 FUN_1418925d8 body=271 status=ok
// SIG undefined FUN_1418925d8(void)

int FUN_1418925d8(longlong *param_1,uint param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar4 = *param_1;
      do {
        local_38 = *param_3;
        uVar1 = *(ulonglong *)(lVar4 + (longlong)iVar6 * 0x28);
        uVar5 = (uint)uVar1;
        if ((uVar5 == (uint)local_38) && ((local_38 ^ uVar1) >> 0x20 == 0)) goto LAB_1418926b4;
        if (((uVar1 >> 0x20 == 0) ||
            ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
             (lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)), lVar7 == 0
             )))) || ((*(int *)(lVar7 + 0x10) != (int)(uVar1 >> 0x20) ||
                      ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) {
          cVar2 = FUN_144729dda(&local_38);
          if (cVar2 == '\0') goto LAB_1418926b4;
          lVar4 = *param_1;
        }
        iVar6 = *(int *)(lVar4 + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_1418926b4:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 1418926e8 FUN_1418926e8 body=101 status=ok
// SIG undefined FUN_1418926e8(void)

void FUN_1418926e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b40ff80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14189274e FUN_14189274e body=99 status=ok
// SIG undefined FUN_14189274e(void)

void FUN_14189274e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b40f880;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418927b2 FUN_1418927b2 body=29 status=ok
// SIG undefined FUN_1418927b2(void)

undefined8 FUN_1418927b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418927d0 FUN_1418927d0 body=353 status=ok
// SIG undefined FUN_1418927d0(void)

void FUN_1418927d0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141892855;
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
LAB_141892855:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141892932 FUN_141892932 body=411 status=ok
// SIG undefined FUN_141892932(void)

void FUN_141892932(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)local_60 >> 0x10);
    uVar5 = (uint)local_60 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_60 >> 0x20) + ((uint)local_60 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x10) == local_60) goto LAB_141892a84;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + *param_1 + 8);
      } while (iVar6 != -1);
    }
  }
  FUN_144a13f80(param_1,&local_58,&local_60,0);
  lVar2 = param_1[10];
  plVar4 = (longlong *)(lVar2 + 0x30);
  uVar3 = *(uint *)(lVar2 + 0x3c);
  if ((int)uVar3 < 1) {
    FUN_140d7698c(plVar4,1);
    uVar3 = *(uint *)(lVar2 + 0x3c);
  }
  iVar6 = *(int *)(lVar2 + 0x38);
  *(uint *)(lVar2 + 0x38) = iVar6 + 1U;
  if (uVar3 < iVar6 + 1U) {
    FUN_140eed74c(plVar4,iVar6);
  }
  lVar2 = *plVar4;
  local_58 = &PTR_FUN_14a184370;
  local_40 = *(byte *)(param_3 + 0x18);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_40])(local_50,param_3 + 8);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar6 * 0x30);
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_FUN_14a184370;
  *(byte *)(puVar1 + 3) = local_40;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_40])(puVar1 + 1,local_50);
  *(undefined1 *)(puVar1 + 4) = 10;
  puVar1[5] = local_60;
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(local_50);
LAB_141892a84:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141892ace FUN_141892ace body=439 status=ok
// SIG undefined FUN_141892ace(void)

void FUN_141892ace(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [8];
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar14 = FUN_1409231c6(param_2);
  if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x178) != 0)) {
    lVar15 = FUN_14041aabe();
    lVar14 = *(longlong *)(lVar14 + 0x178);
    if (((lVar14 != 0) &&
        (((lVar15 != 0 && (lVar5 = *(longlong *)(lVar14 + 0x10), lVar5 != 0)) &&
         (*(int *)(lVar15 + 0x38) <= *(int *)(lVar5 + 0x38))))) &&
       ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
         lVar15 + 0x30 && (lVar14 = *(longlong *)(lVar14 + 0x488), lVar14 != 0)))) {
      lVar15 = FUN_140082f10();
      if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
        iVar1 = *(int *)(lVar14 + 0x4cc);
        iVar2 = *(int *)(lVar14 + 0x4d0);
        iVar3 = *(int *)(lVar14 + 0x4d4);
        iVar4 = *(int *)(lVar14 + 0x4d8);
        if (((iVar2 != 0 || iVar1 != 0) || iVar3 != 0) || iVar4 != 0) {
          (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
          *(int *)(param_1 + 8) = iVar1;
          *(int *)(param_1 + 0xc) = iVar2;
          *(int *)(param_1 + 0x10) = iVar3;
          *(int *)(param_1 + 0x14) = iVar4;
          *(undefined1 *)(param_1 + 0x28) = 6;
          goto LAB_141892bd4;
        }
      }
    }
  }
  local_90 = 0;
  puVar17 = (undefined4 *)(param_1 + 8);
  if (local_b0 == puVar17) {
    uVar16 = 0;
  }
  else {
    local_68 = local_68 & 0xffffffffffffff00;
    local_38 = local_68;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uVar16 = *(ulonglong *)(param_1 + 0x28);
    uVar6 = *puVar17;
    uVar7 = *(undefined4 *)(param_1 + 0xc);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    uVar11 = *(undefined4 *)(param_1 + 0x1c);
    uVar12 = *(undefined4 *)(param_1 + 0x20);
    uVar13 = *(undefined4 *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x28) = local_68;
    *(undefined4 *)(param_1 + 0x18) = local_78;
    *(undefined4 *)(param_1 + 0x1c) = uStack_74;
    *(undefined4 *)(param_1 + 0x20) = uStack_70;
    *(undefined4 *)(param_1 + 0x24) = uStack_6c;
    *puVar17 = local_88;
    *(undefined4 *)(param_1 + 0xc) = uStack_84;
    *(undefined4 *)(param_1 + 0x10) = uStack_80;
    *(undefined4 *)(param_1 + 0x14) = uStack_7c;
    local_88 = uVar6;
    uStack_84 = uVar7;
    uStack_80 = uVar8;
    uStack_7c = uVar9;
    local_78 = uVar10;
    uStack_74 = uVar11;
    uStack_70 = uVar12;
    uStack_6c = uVar13;
    local_68 = uVar16;
    (*(code *)(&PTR_FUN_14a1842f0)[uVar16 & 0xff])();
    uVar16 = (ulonglong)local_90;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[uVar16])(local_b0);
LAB_141892bd4:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141892c86 FUN_141892c86 body=158 status=ok
// SIG undefined FUN_141892c86(void)

void FUN_141892c86(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc,4);
      uVar3 = uVar3 / 0xc;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
    }
  }
  return;
}



// FUNCTION 141892d24 FUN_141892d24 body=109 status=ok
// SIG undefined FUN_141892d24(void)

undefined8 * FUN_141892d24(undefined8 *param_1)

{
  FUN_14095bfc2();
  *param_1 = &PTR_FUN_14b410820;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfc;
  return param_1;
}



// FUNCTION 141892d92 FUN_141892d92 body=316 status=ok
// SIG undefined FUN_141892d92(void)

void FUN_141892d92(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  char local_a0 [16];
  longlong *local_90;
  undefined4 local_78 [2];
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)((longlong)param_1 + 0xc) & 0x10) != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a0[0] = '\0';
    local_78[0] = 0;
    FUN_1456bb102(local_a0);
    local_70 = '\0';
    local_48[0] = 0;
    local_c8 = 0;
    local_c0 = 1;
    (**(code **)(*param_1 + 0x50))(param_1,&local_b8,param_2,local_a0);
    FUN_1448173f8(local_48);
    if (local_70 != '\0') {
      if (local_70 == '\x01') {
        local_68 = 0;
      }
      else if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      local_70 = '\0';
    }
    FUN_1448173f8(local_78);
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    FUN_140368c45(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141892ed0 FUN_141892ed0 body=879 status=ok
// SIG undefined FUN_141892ed0(void)

void FUN_141892ed0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0 && (param_3 & 2) != 0) {
    lVar5 = FUN_14102013a();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      puVar1 = (uint *)(param_1 + 0x30);
      if (((*(int *)(param_1 + 0x34) == 0) ||
          ((((uVar2 = *puVar1, (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
            (plVar9 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar9 == (longlong *)0x0)) ||
           (((int)plVar9[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))))) || (lVar5 = *plVar9, lVar5 == 0)) {
        if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_141893080;
        lVar5 = FUN_140007850();
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar5 == 0) || (cVar4 == '\0')) {
          FUN_14485c47a(puVar1,lVar5);
          if (lVar5 == 0) goto LAB_141893080;
        }
        else {
          uVar2 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(puVar1,lVar5);
          }
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) goto LAB_141893080;
      }
      if (DAT_14c949118 == 0) {
        local_40 = FUN_140631fbe;
        lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar6;
        FUN_1446f470e(local_38,L"Class",1);
        local_58 = &LAB_146891e90;
        local_60 = &LAB_146273097;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x20;
        local_80 = 0x10000000;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_40;
        FUN_14574b4b2(lVar6);
        DAT_14c949118 = lVar6;
        uVar7 = FUN_144a7a812();
        lVar6 = DAT_14c949118;
        uVar8 = FUN_1449e2fb2();
        local_88 = L"Class";
        FUN_14574b446(uVar8,lVar6,uVar7,L"/Script/CoreUObject");
      }
      if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
          (lVar6 = FUN_140789e1e(), lVar6 != 0)) &&
         (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
        lVar10 = 0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar10 = lVar5;
        }
        if ((lVar10 == 0) || (DAT_14c950c29 == '\0')) {
          if (lVar10 == 0) goto LAB_141893080;
        }
        else {
          FUN_1456cec3c(lVar10);
        }
        lVar6 = FUN_140789e1e();
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar5);
          }
          iVar3 = *(int *)(param_2 + 0x8b8);
          *(uint *)(param_2 + 0x8b8) = iVar3 + 1U;
          if (*(uint *)(param_2 + 0x8bc) < iVar3 + 1U) {
            FUN_140789f3e((longlong *)(param_2 + 0x8b0),iVar3);
          }
          *(longlong *)(*(longlong *)(param_2 + 0x8b0) + (longlong)iVar3 * 8) = lVar5;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar5);
          }
        }
      }
    }
  }
LAB_141893080:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141893240 FUN_141893240 body=199 status=ok
// SIG undefined FUN_141893240(void)

longlong FUN_141893240(longlong param_1,undefined8 param_2,byte param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if (*(int *)(lVar3 + 0x120) < 1) {
    lVar4 = 0;
  }
  else {
    lVar5 = 0x144;
    lVar4 = 0;
    lVar6 = 0;
    do {
      cVar2 = FUN_140991644(*(longlong *)(lVar3 + 0x118) + lVar5 + -300,param_2);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      if (((cVar2 != '\0') &&
          (lVar1 = *(longlong *)(lVar3 + 0x118), (param_3 & ~*(byte *)(lVar1 + -0x38 + lVar5)) == 0)
          ) && ((param_4[1] != '\x01' || ((bool)*param_4 == (*(char *)(lVar1 + lVar5) != -1))))) {
        lVar4 = lVar1 + lVar5 + -0x134;
        break;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x150;
    } while (lVar6 < *(int *)(lVar3 + 0x120));
  }
  if (param_4[1] == '\x01') {
    param_4[1] = '\0';
  }
  return lVar4;
}



// FUNCTION 141893308 FUN_141893308 body=77 status=ok
// SIG undefined FUN_141893308(void)

longlong FUN_141893308(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = switchD_143c3d4dc::caseD_57();
  if (lVar2 == 0) {
    lVar2 = FUN_1401fa540();
    if ((lVar2 == param_2) && (plVar1 = *(longlong **)(param_1 + 0x1b0), plVar1 != (longlong *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x00014189334e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,param_2);
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 141893356 FUN_141893356 body=347 status=ok
// SIG undefined FUN_141893356(void)

void FUN_141893356(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + -0x3b8);
  if (lVar2 != 0) {
    if (DAT_14cb252d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f6f07f;
      local_50 = FUN_1464465e2;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
    }
    plVar3 = (longlong *)FUN_144718840(lVar2,DAT_14cb252d8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
      if (local_28 != (code *)0x0) {
        (**(code **)(*(longlong *)local_28 + 0x28))(local_28,param_2);
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418934b2 FUN_1418934b2 body=74 status=ok
// SIG undefined FUN_1418934b2(void)

undefined8 FUN_1418934b2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x508);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418934fd FUN_1418934fd body=1018 status=ok
// SIG undefined FUN_1418934fd(void)

double * FUN_1418934fd(double *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cac7cb8 == 0) {
      local_70 = &local_58;
      local_58 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1417963e0;
      local_78 = &LAB_1478a2d90;
      local_80 = &LAB_146395589;
      local_88 = L"Engine";
      local_90 = 0x20000000000;
      local_98 = 0x10000005;
      local_a0 = 0x10;
      local_a8 = 0xad0;
      FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
    }
    if ((*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
        DAT_14cac7cb8 + 0x30)) {
      lVar7 = FUN_144a7954a(param_2);
      if ((lVar7 == 0) || ((int)param_2[0x13b] == 0)) goto LAB_141893570;
      dVar1 = (double)param_2[0x144];
      dVar2 = (double)param_2[0x147];
      dVar3 = (double)param_2[0x142];
      dVar4 = (double)param_2[0x143];
      dVar5 = (double)param_2[0x146];
      dVar6 = (double)param_2[0x145];
      *param_1 = dVar3 - dVar6;
      param_1[1] = dVar4 - dVar5;
      param_1[2] = dVar1 - dVar2;
      param_1[3] = dVar3 + dVar6;
      param_1[4] = dVar4 + dVar5;
      param_1[5] = dVar1 + dVar2;
LAB_141893665:
      *(undefined1 *)(param_1 + 6) = 1;
      goto LAB_141893669;
    }
LAB_141893570:
    if (DAT_14cad3688 == 0) {
      local_70 = &local_58;
      local_58 = FUN_144b223ce;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1417963e0;
      local_78 = &LAB_147a2f4c9;
      local_80 = &LAB_1400ea6f8;
      local_88 = L"Engine";
      local_90 = 0x200000000000;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) ==
        DAT_14cad3688 + 0x30)) {
      lVar7 = param_2[0xcc];
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
        lVar7 = param_2[0xcc];
      }
      else if (lVar7 == 0) goto LAB_14189373e;
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
      }
      if (0.0 < *(double *)(lVar7 + 0x230)) {
        dVar1 = *(double *)(lVar7 + 0x228);
        dVar2 = *(double *)(lVar7 + 0x220);
        dVar3 = *(double *)(lVar7 + 0x218);
        dVar4 = *(double *)(lVar7 + 0x210);
        dVar5 = *(double *)(lVar7 + 0x200);
        dVar6 = *(double *)(lVar7 + 0x208);
        *param_1 = dVar5 - dVar3;
        param_1[1] = dVar6 - dVar2;
        param_1[2] = dVar4 - dVar1;
        param_1[3] = dVar3 + dVar5;
        param_1[4] = dVar2 + dVar6;
        param_1[5] = dVar1 + dVar4;
        goto LAB_141893665;
      }
    }
LAB_14189373e:
    lVar7 = (**(code **)(*param_2 + 0x7a0))(param_2);
    if (lVar7 != 0) {
      FUN_144875afe(lVar7 + 0x38,param_1,&DAT_14c846480);
      goto LAB_141893669;
    }
  }
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 6) = 0;
LAB_141893669:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418938f8 FUN_1418938f8 body=147 status=ok
// SIG undefined FUN_1418938f8(void)

void FUN_1418938f8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b410e80);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4049a0);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  FUN_140a6acaa(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189398c FUN_14189398c body=102 status=ok
// SIG undefined FUN_14189398c(void)

void FUN_14189398c(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a0f7b0();
  local_28 = 0x4897a06a;
  uStack_24 = 0xa30b4775;
  uStack_20 = 0xb8d91478;
  uStack_1c = 0x70e6004a;
  FUN_1448a256a(param_1);
  local_38 = 0xcfd07738;
  uStack_34 = 0xfe028e14;
  uStack_30 = 0x44efe6a3;
  uStack_2c = 0xc682f1f9;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418939f4 FUN_1418939f4 body=181 status=ok
// SIG undefined FUN_1418939f4(void)

void FUN_1418939f4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 0x3e0) & 1) == 0) && (*(longlong *)(param_1 + 0x3f0) != 0)) {
    if ((longlong)*(int *)(param_1 + 0x408) != 0) {
      lVar1 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x400) + lVar1) == 0) goto LAB_141893a8d;
        lVar1 = lVar1 + 8;
      } while ((longlong)*(int *)(param_1 + 0x408) * 8 != lVar1);
    }
    local_48 = 0;
    local_38 = &PTR_LAB_149e01e20;
    local_30 = &DAT_143da083e;
    local_58 = FUN_140d11fbe;
    FUN_140f6405a(param_1);
    FUN_14472eae2(param_1,0x4000000);
  }
LAB_141893a8d:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141893aaa FUN_141893aaa body=209 status=ok
// SIG undefined FUN_141893aaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141893aaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb821c0) {
    FUN_144b3d300(&DAT_14cb821c0);
    if (DAT_14cb821c0 == -1) {
      _DAT_14cb82130 = 0;
      DAT_14cb82138 = 0;
      _DAT_14cb82128 = &PTR_FUN_14b318730;
      _DAT_14cb82190 = 0;
      _DAT_14cb82198 = 0;
      _DAT_14cb82140 = 0;
      uRam000000014cb82148 = 0;
      _DAT_14cb82150 = 0;
      uRam000000014cb82158 = 0;
      _DAT_14cb82160 = 0;
      uRam000000014cb82168 = 0;
      _DAT_14cb82170 = 0;
      uRam000000014cb82178 = 0;
      _DAT_14cb8219c = 0xffffffff00000080;
      _DAT_14cb821a4 = 0;
      _DAT_14cb821b0 = 0;
      _DAT_14cb821b8 = 0;
      atexit((_func_5014 *)&LAB_143da03dd);
      _Init_thread_footer(&DAT_14cb821c0);
    }
  }
  return &DAT_14cb82128;
}



// FUNCTION 141893b7c FUN_141893b7c body=26 status=ok
// SIG undefined FUN_141893b7c(void)

undefined8 FUN_141893b7c(longlong param_1,undefined8 param_2)

{
  FUN_140c65c56(param_1 + 0x40);
  return param_2;
}



// FUNCTION 141893b96 FUN_141893b96 body=413 status=ok
// SIG undefined FUN_141893b96(void)

void FUN_141893b96(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (DAT_14cac7cb8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1417963e0;
      local_58 = &LAB_1478a2d90;
      local_60 = &LAB_146395589;
      local_68 = L"Engine";
      local_70 = 0x20000000000;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0xad0;
      FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (lVar3 == 0) goto LAB_141893c3b;
    }
    if ((((DAT_14cac7cb8 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
        DAT_14cac7cb8 + 0x30)) {
      lVar3 = lVar3 + (longlong)*(int *)(lVar3 + 0x718) * 0x10;
      if (param_1 + 0x170 != lVar3 + 0x878) {
        iVar1 = *(int *)(lVar3 + 0x880);
        *(int *)(param_1 + 0x178) = iVar1;
        if (iVar1 == 0 && *(int *)(param_1 + 0x17c) == 0) {
          *(undefined4 *)(param_1 + 0x17c) = 0;
        }
        else {
          FUN_1447a127e(param_1 + 0x170,iVar1);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
          }
        }
      }
    }
  }
LAB_141893c3b:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141893d4e FUN_141893d4e body=557 status=ok
// SIG undefined FUN_141893d4e(void)

void FUN_141893d4e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*(int *)(param_1 + 0x24) == 0) || (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar6 == (undefined8 *)0x0 || (*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x24))) ||
      ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_141893edc;
  if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
    uVar5 = *puVar6;
  }
  else {
    uVar5 = 0;
  }
  lVar3 = FUN_1447210f0(uVar5);
  if (lVar3 == 0) goto LAB_141893edc;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_141893f05:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x24) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_141893f05;
      uVar5 = *puVar6;
    }
  }
  FUN_1447210f0(uVar5);
  local_40 = (undefined1 *)0x0;
  local_38 = 0x1800000000;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_141893f0c:
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x24) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_141893f0c;
      uVar5 = *puVar6;
    }
  }
  FUN_140696bce(uVar5,local_100,0);
  puVar7 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar7 = local_100;
  }
  lVar3 = (longlong)(int)local_38;
  if (lVar3 != 0) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(puVar7 + lVar8);
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x9e) & 8) != 0)) &&
         (plVar4 = (longlong *)FUN_1488c8002(param_1,lVar2), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x2a8))(plVar4,0);
      }
      FUN_1488c7b0e(param_1,lVar2);
      lVar8 = lVar8 + 8;
    } while (lVar3 * 8 != lVar8);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_141893edc:
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141893f7c FUN_141893f7c body=132 status=ok
// SIG undefined FUN_141893f7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141893f7c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141894000 FUN_141894000 body=132 status=ok
// SIG undefined FUN_141894000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141894000(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189408a FUN_14189408a body=156 status=ok
// SIG undefined FUN_14189408a(void)

undefined8 * FUN_14189408a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141894126 FUN_141894126 body=228 status=ok
// SIG undefined FUN_141894126(void)

void FUN_141894126(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14189420a FUN_14189420a body=850 status=ok
// SIG undefined FUN_14189420a(void)

undefined1 *
FUN_14189420a(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1447262c2(param_4);
  if (lVar3 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      goto LAB_14189435c;
    }
  }
  lVar3 = FUN_1447262c2(param_4);
  if (lVar3 != 0) {
    if (DAT_14cad00c8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1479b7a0c;
      local_60 = &LAB_1463b464e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 8;
      local_88 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) {
      lVar3 = *(longlong *)(lVar3 + 0xa8);
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      if (lVar3 != 0) {
        *(undefined4 *)(param_2 + 0x38) = 1;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        goto LAB_14189435c;
      }
      goto LAB_14189431c;
    }
  }
  lVar3 = FUN_1447262c2(param_4);
  if (lVar3 == 0) {
    FUN_140232ee4(param_4,&local_30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (local_30 != (code *)0x0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1408403ca(param_2,&local_30);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  else {
    uVar4 = FUN_144a6c4d8();
    lVar3 = FUN_144a78ede(lVar3,uVar4);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar3 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
LAB_14189435c:
      FUN_1456bb102(param_2,lVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14189431c:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14189455e FUN_14189455e body=274 status=ok
// SIG undefined FUN_14189455e(void)

ulonglong FUN_14189455e(int *param_1,longlong param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_3 != 0) && (0 < param_1[0x14])) {
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0x4c) * 0x20;
    if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar12) != 0) {
      lVar12 = *(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar12;
      if ((longlong)*(int *)(lVar12 + 0x18) != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar9) != 0) {
            iVar4 = *(int *)(param_3 + 0x100);
            if (0 < (longlong)iVar4) {
              lVar9 = *(longlong *)(param_3 + 0xf8);
              lVar10 = 0;
              goto LAB_1418945f8;
            }
            break;
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar12 + 0x18) * 8 != lVar9);
      }
    }
  }
  goto LAB_1418945c6;
LAB_1418945f8:
  do {
    lVar2 = lVar10 * 0x38 + lVar9;
    cVar5 = FUN_1405d595e(lVar2,lVar12);
    if (cVar5 != '\0') {
      if (param_4 == '\0') {
        if ((ulonglong)*(uint *)(lVar2 + 0x30) == 0) {
          iVar6 = *(int *)(lVar2 + 0x20);
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 0x30);
          do {
            if ((int)uVar7 < 1) {
              iVar6 = 0;
              goto LAB_14189462d;
            }
            uVar1 = uVar7 - 1;
            lVar3 = uVar7 * 8;
            uVar7 = uVar1;
          } while (*param_1 < *(int *)(*(longlong *)(lVar2 + 0x28) + -8 + lVar3));
          iVar6 = *(int *)(*(longlong *)(lVar2 + 0x28) + 4 + uVar1 * 8);
        }
      }
      else {
        iVar6 = *(int *)(lVar9 + 0x20 + lVar10 * 0x38);
      }
LAB_14189462d:
      piVar8 = *(int **)(param_1 + 0x12);
      if (*(int **)(param_1 + 0x12) == (int *)0x0) {
        piVar8 = param_1 + 10;
      }
      if (iVar6 <= piVar8[lVar10]) {
        uVar11 = 0;
        break;
      }
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != iVar4);
LAB_1418945c6:
  return uVar11 & 0xffffffff;
}



// FUNCTION 141894670 thunk_FUN_140cde312 body=5 status=ok
// SIG undefined thunk_FUN_140cde312(void)

longlong * thunk_FUN_140cde312(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  plVar4 = DAT_14cb848c0;
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[1] < 2) && (DAT_14cb848c0 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar1 == '\0') {
      lVar5 = FUN_1400e3c00(plVar4,param_1,1);
      if (lVar5 != 0) {
        plVar10 = *(longlong **)(lVar5 + 0x30);
LAB_140cde383:
        if (plVar10 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
          lVar6 = FUN_14042c486();
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
            plVar4 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              plVar4 = plVar10;
            }
            goto LAB_140cde32f;
          }
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar2 = param_1[1], iVar2 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar2 < 1)) {
        iStack_20 = DAT_14c948620;
        uStack_28 = DAT_14c948618;
      }
      else {
        puVar7 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar2 != 1) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        iStack_20 = (int)puVar7[1];
        uStack_28 = *puVar7;
      }
      plVar4 = plVar4 + 0x3f;
      uVar9 = uStack_28 & 0xffffffff;
      if (iStack_20 != 0) {
        uVar3 = FUN_144a78877(uVar9,iStack_20);
        uVar9 = (ulonglong)uVar3;
      }
      iVar2 = FUN_1448467de(plVar4,uVar9,&uStack_28);
      if (iVar2 != -1) {
        lVar5 = *plVar4;
        plVar4 = (longlong *)0x0;
        if ((lVar5 + (longlong)iVar2 * 0x70 == 0) ||
           (puVar8 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x70 + 0x10),
           puVar8 == (undefined8 *)0x0)) goto LAB_140cde32f;
        plVar10 = (longlong *)*puVar8;
        goto LAB_140cde383;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140cde32f:
  if ((uStack_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 141894676 FUN_141894676 body=148 status=ok
// SIG undefined FUN_141894676(void)

void FUN_141894676(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14cb848c0 + 0x3a8;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823b8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x382) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823c0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 900) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823d8,&DAT_14c9a77a0);
  *(undefined2 *)(param_1 + 0x380) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb82408,lVar2);
  *(undefined2 *)(param_1 + 0x386) = uVar1;
  return;
}



// FUNCTION 14189470a thunk_FUN_14005f05e body=5 status=ok
// SIG undefined thunk_FUN_14005f05e(void)

longlong * thunk_FUN_14005f05e(int *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_58 [40];
  ulonglong uStack_30;
  int iStack_28;
  ulonglong uStack_20;
  
  plVar10 = DAT_14cb848c0;
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb848c0 != (longlong *)0x0) {
    cVar3 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar3 == '\0') {
      lVar7 = FUN_1400e3c00(plVar10,param_1,1);
      if ((lVar7 != 0) && (lVar7 = FUN_14013f0dc(plVar10,lVar7,param_1,1), lVar7 != 0)) {
        bVar2 = *(byte *)(lVar7 + 0x2a);
        if ((-1 < (char)bVar2) &&
           (((int)(char)bVar2 < (int)plVar10[0x78] &&
            (*(longlong *)(plVar10[0x77] + (ulonglong)bVar2 * 8) == DAT_14cb84658)))) {
          plVar15 = *(longlong **)(lVar7 + 0x30);
LAB_14005f103:
          if (plVar15 != (longlong *)0x0) {
            lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar8 = FUN_14005f2f0();
            if ((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) {
              plVar10 = (longlong *)0x0;
              if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                  == lVar8 + 0x30) {
                plVar10 = plVar15;
              }
              goto LAB_14005f148;
            }
          }
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar4 = param_1[1], iVar4 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar4 < 1)) {
        iStack_28 = DAT_14c948620;
        uStack_30 = DAT_14c948618;
      }
      else {
        puVar11 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar11 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar4 != 1) {
          puVar11 = *(ulonglong **)(param_1 + 6);
        }
        iStack_28 = (int)puVar11[1];
        uStack_30 = *puVar11;
      }
      uVar14 = uStack_30 & 0xffffffff;
      if (iStack_28 != 0) {
        uVar5 = FUN_144a78877(uVar14,iStack_28);
        uVar14 = (ulonglong)uVar5;
      }
      iVar4 = FUN_1448467de(plVar10 + 0x3f,uVar14,&uStack_30);
      if (iVar4 != -1) {
        lVar7 = plVar10[0x3f];
        lVar8 = lVar7 + (longlong)iVar4 * 0x70;
        plVar10 = (longlong *)0x0;
        if ((lVar8 == 0) || (plVar10 = (longlong *)0x0, lVar7 + (longlong)iVar4 * 0x70 == -0x10))
        goto LAB_14005f148;
        puVar12 = (uint *)&DAT_14c948618;
        piVar9 = &DAT_14c948620;
        if ((*param_1 != 0) && ((1 < param_1[1] && (*param_1 != DAT_14c948000)))) {
          puVar12 = (uint *)(*(longlong *)(param_1 + 6) + 0xc);
          piVar9 = (int *)(*(longlong *)(param_1 + 6) + 0x14);
        }
        uVar5 = *puVar12;
        iVar4 = *piVar9;
        uVar6 = uVar5;
        if (iVar4 != 0) {
          uVar6 = FUN_144a78877(uVar5,iVar4);
        }
        if (*(int *)(lVar8 + 0x20) != *(int *)(lVar8 + 0x4c)) {
          lVar7 = lVar8 + 0x50;
          if (*(longlong *)(lVar8 + 0x58) != 0) {
            lVar7 = *(longlong *)(lVar8 + 0x58);
          }
          iVar13 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar8 + 0x60) - 1U & uVar6) * 4);
          if (iVar13 != -1) {
            lVar7 = *(longlong *)(lVar8 + 0x18);
            plVar10 = (longlong *)0x0;
            do {
              lVar8 = (longlong)iVar13 * 0x20;
              if ((*(uint *)(lVar7 + lVar8) == uVar5) &&
                 (lVar1 = lVar7 + lVar8, *(int *)(lVar1 + 8) == iVar4)) {
                plVar10 = (longlong *)0x0;
                if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0)) {
                  plVar15 = *(longlong **)(lVar1 + 0x10);
                  goto LAB_14005f103;
                }
                break;
              }
              iVar13 = *(int *)(lVar7 + 0x18 + lVar8);
            } while (iVar13 != -1);
            goto LAB_14005f148;
          }
        }
      }
    }
  }
  plVar10 = (longlong *)0x0;
LAB_14005f148:
  if ((uStack_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 141894710 FUN_141894710 body=169 status=ok
// SIG undefined FUN_141894710(void)

void FUN_141894710(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14cb848c0 + 0x3a8;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823b8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x152) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823c0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x154) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823d0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x156) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb823e8,lVar2);
  *(undefined2 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb82408,lVar2);
  *(undefined2 *)(param_1 + 0x15a) = uVar1;
  return;
}



// FUNCTION 1418947b9 FUN_1418947b9 body=28 status=ok
// SIG undefined FUN_1418947b9(void)

undefined8 FUN_1418947b9(undefined8 param_1,undefined8 param_2)

{
  FUN_140cd18ac(param_2,param_1);
  return param_1;
}



// FUNCTION 1418947d6 FUN_1418947d6 body=15 status=ok
// SIG undefined FUN_1418947d6(void)

longlong FUN_1418947d6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar2 + 0xd8);
  if (lVar5 == 0) {
    uVar4 = FUN_140428d10();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar2 + 0xd8) = lVar5;
  }
  if (*(longlong *)(lVar2 + 0xe0) == 0) {
    if ((*(longlong *)(lVar2 + 0xd0) != 0) && (lVar5 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar2 + 0xd0));
      }
      *(longlong *)(lVar2 + 0xe0) = lVar5;
      return lVar5;
    }
    return 0;
  }
  return *(longlong *)(lVar2 + 0xe0);
}



// FUNCTION 1418947e6 FUN_1418947e6 body=34 status=ok
// SIG undefined FUN_1418947e6(void)

undefined8 FUN_1418947e6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_140c65c56(uVar1,param_2);
  return param_2;
}



// FUNCTION 141894808 FUN_141894808 body=169 status=ok
// SIG undefined FUN_141894808(void)

int * FUN_141894808(int *param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                   undefined1 param_5,int param_6,int param_7)

{
  int iVar1;
  
  *param_1 = 0;
  FUN_1406fd608(param_1 + 2,param_4);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if (DAT_14cb84a98 == 0) {
    DAT_14cb84a98 = 1;
  }
  iVar1 = DAT_14cb84a98 + 1;
  *param_1 = DAT_14cb84a98;
  DAT_14cb84a98 = iVar1;
  param_1[0x3b] = 0;
  *(undefined8 *)(param_1 + 0x3c) = param_2;
  param_1[0x3a] = param_7;
  param_1[0x3e] = *param_3;
  *(undefined1 *)(param_1 + 0x3f) = param_5;
  *(undefined1 *)((longlong)param_1 + 0xfd) = 0xff;
  param_1[0x3b] = param_6;
  return param_1;
}



// FUNCTION 1418948b2 FUN_1418948b2 body=141 status=ok
// SIG undefined FUN_1418948b2(void)

void FUN_1418948b2(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140a6a9d4(param_1 + 2,param_2 + 2);
  *param_2 = 0;
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  *(undefined8 *)(param_2 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = param_2[0x3e];
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined1 *)((longlong)param_1 + 0xfd) = *(undefined1 *)((longlong)param_2 + 0xfd);
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined2 *)(param_2 + 0x3f) = 0xff00;
  return;
}



// FUNCTION 141894940 FUN_141894940 body=70 status=ok
// SIG undefined FUN_141894940(void)

void FUN_141894940(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140c2f38e(param_1 + 0x980,0);
  puVar1 = *(undefined8 **)(param_1 + 0x3d8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x3d8) = 0;
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 141894986 FUN_141894986 body=32 status=ok
// SIG undefined FUN_141894986(void)

undefined8 * FUN_141894986(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140831778();
  *param_2 = *(undefined8 *)(lVar1 + 0x88);
  return param_2;
}



// FUNCTION 1418949a6 FUN_1418949a6 body=335 status=ok
// SIG undefined FUN_1418949a6(void)

void FUN_1418949a6(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  *(byte *)(param_1 + 0x448) = *(byte *)(param_1 + 0x448) & 0xdf;
  FUN_140b3b830(param_1 + -0x520,0);
  (**(code **)(*(longlong *)(param_1 + 0x78) + 0x30))(param_1 + 0x78);
  if (param_2 == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x4a0))(plVar2,&DAT_14cadad9c);
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x690))(*(longlong **)(param_1 + 0x268),0);
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x928))();
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x940))(*(longlong **)(param_1 + 0x268),0);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x44c) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar4 = DAT_14c964868 + 1;
    bVar6 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar4);
    }
    LOCK();
    iVar3 = *(int *)(lVar5 + 0x10);
    bVar6 = iVar3 == 0;
    if (bVar6) {
      *(int *)(lVar5 + 0x10) = iVar4;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar6) {
      iVar3 = iVar4;
    }
  }
  *(int *)(param_1 + 0x450) = iVar3;
  *(undefined4 *)(param_1 + 0x418) = param_3;
  *(undefined4 *)(param_1 + 0x454) = param_4;
  FUN_14022e476(param_1 + -0x520);
  return;
}



// FUNCTION 141894af6 FUN_141894af6 body=273 status=ok
// SIG undefined FUN_141894af6(void)

undefined8 * FUN_141894af6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  char local_5c;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,&local_60);
  if (local_5c == '\x01') {
    uVar1 = FUN_1447210f0(param_1 + -0x528);
    plVar2 = (longlong *)FUN_14007a5e6(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xc0))(plVar2,local_58,local_60);
      if (((local_48 == 0) || (local_44 == 0)) || (local_48 == DAT_14c948000)) {
        *(undefined4 *)(param_2 + 1) = DAT_14c948620;
        *param_2 = DAT_14c948618;
      }
      else {
        if ((local_44 == 1) || (local_44 < 5)) {
          *(undefined4 *)(param_2 + 1) = DAT_14c948620;
          uVar1 = DAT_14c948618;
        }
        else {
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(local_30 + 0x38);
          uVar1 = *(undefined8 *)(local_30 + 0x30);
        }
        *param_2 = uVar1;
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      goto LAB_141894b3e;
    }
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
LAB_141894b3e:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141894c08 FUN_141894c08 body=28 status=ok
// SIG undefined FUN_141894c08(void)

undefined8 FUN_141894c08(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x10) + 0x18))(param_1 + -0x10);
  return param_2;
}



// FUNCTION 141894c24 FUN_141894c24 body=22 status=ok
// SIG undefined FUN_141894c24(void)

undefined8 FUN_141894c24(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb849c0;
  if (DAT_14cb849c0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb849c0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb849c0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb849c0[0x3a] <= *(int *)((longlong)DAT_14cb849c0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb849c0 + 0x300))(DAT_14cb849c0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 141894c3a FUN_141894c3a body=543 status=ok
// SIG undefined FUN_141894c3a(void)

bool FUN_141894c3a(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_140c7c082(param_1 + 8);
  plVar7 = (longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    plVar7 = (longlong *)(lVar3 + 0x58);
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)*param_2;
  }
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    plVar5 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar7[8];
    }
    iVar9 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar7[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar4 = *plVar7 + (longlong)iVar9 * 0x60;
        if (*(longlong *)(*plVar7 + (longlong)iVar9 * 0x60) == lVar3) break;
        iVar9 = *(int *)(lVar4 + 0x58);
        lVar4 = 0;
      } while (iVar9 != -1);
      goto LAB_141894c9a;
    }
  }
  lVar4 = 0;
LAB_141894c9a:
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    puVar10 = &local_90;
    FUN_1448729ea(lVar3,puVar10,param_3);
    if (local_70 == 3) {
      uVar2 = 3;
      uVar11 = local_90;
    }
    else {
      puVar8 = &local_68;
      FUN_1400b56fe(puVar8,&local_90,3);
      uVar11 = local_68;
      if (local_48 == 0) {
        uVar11 = 0x3f800000;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_50) {
          puVar8 = (undefined4 *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar1)(puVar8);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      uVar2 = (uint)local_70;
    }
    *param_4 = uVar11;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_78) {
        puVar10 = (undefined4 *)CONCAT44(uStack_8c,local_90);
      }
      (*pcVar1)(puVar10);
    }
    if (0x18 < local_78) {
      FUN_1400020a8(CONCAT44(uStack_8c,local_90));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 != 0;
}



// FUNCTION 141894e5a FUN_141894e5a body=220 status=ok
// SIG undefined FUN_141894e5a(void)

longlong * FUN_141894e5a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4129c0;
  plVar1 = plVar4 + 2;
  plVar4[3] = (longlong)&DAT_14cb83188;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b3184b0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 141894f36 FUN_141894f36 body=297 status=ok
// SIG undefined FUN_141894f36(void)

float * FUN_141894f36(undefined8 param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  undefined1 auVar7 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140232ee4(param_4,&local_30);
  if (local_30 != 0) {
    if ((longlong)*(int *)(local_30 + 0x110) != 0) {
      plVar4 = *(longlong **)(local_30 + 0x108);
      lVar5 = (longlong)*(int *)(local_30 + 0x110) * 0x18;
      do {
        if (*plVar4 == param_3) {
          if (plVar4 != (longlong *)0x0) {
            fVar6 = *(float *)((longlong)plVar4 + 0xc);
            auVar7 = ZEXT416((uint)fVar6);
            cVar2 = *(char *)((longlong)plVar4 + 0x14);
            if (cVar2 == '\x02') {
LAB_14189504e:
              auVar7 = roundps(auVar7,ZEXT416(auVar7._0_4_),1);
              fVar6 = auVar7._0_4_;
            }
            else if (cVar2 == '\x03') {
              auVar7 = roundps(auVar7,ZEXT416((uint)fVar6),2);
              fVar6 = auVar7._0_4_;
            }
            else if (cVar2 == '\x01') {
              auVar7 = ZEXT416((uint)(fVar6 + 0.5));
              goto LAB_14189504e;
            }
            *(undefined2 *)(param_2 + 6) = 4;
            *param_2 = fVar6;
            uVar3 = 3;
            goto LAB_141894fcb;
          }
          break;
        }
        plVar4 = plVar4 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
    *(undefined2 *)(param_2 + 6) = 0;
    uVar3 = 0;
LAB_141894fcb:
    *(undefined1 *)(param_2 + 8) = uVar3;
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_30 == 0) {
    *(undefined2 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141895084 FUN_141895084 body=1346 status=ok
// SIG undefined FUN_141895084(void)

int FUN_141895084(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [44];
  int local_dc;
  longlong *local_d8;
  float local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  float local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar10 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar10 = (ulonglong)((uint)*(ushort *)(lVar10 + 0x380) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  pfVar6 = &local_a8;
  FUN_1448729ea(lVar10,pfVar6,param_3);
  iVar4 = FUN_14005fbd2(pfVar6,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_90) {
      pfVar6 = (float *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar1)(pfVar6);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    lVar10 = param_2[1];
    fVar11 = *(float *)(*param_2 + 0x388);
    local_dc = iVar4;
    if (lVar10 != 0) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
      lVar10 = (ulonglong)((uint)*(ushort *)(lVar10 + 0x156) * 0x50) + DAT_14c9a6588;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
      pfVar6 = &local_d0;
      FUN_1448729ea(lVar10,pfVar6,param_3);
      if (local_b0 == 3) {
        uVar5 = 3;
        fVar12 = local_d0;
      }
      else {
        pfVar8 = &local_a8;
        FUN_1400b56fe(pfVar8,&local_d0,3);
        fVar12 = local_a8;
        if (local_88 == 0) {
          fVar12 = 1.0;
        }
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_90) {
            pfVar8 = (float *)CONCAT44(uStack_a4,local_a8);
          }
          (*pcVar1)(pfVar8);
        }
        if (0x18 < local_90) {
          FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
        }
        uVar5 = (uint)local_b0;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_b8) {
          pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
        }
        (*pcVar1)(pfVar6);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      }
      fVar11 = fVar11 * fVar12;
    }
    lVar10 = param_2[3];
    local_d8 = param_2;
    if ((longlong)(int)lVar10 != 0) {
      lVar2 = param_2[2];
      lVar7 = 0;
      do {
        lVar9 = *(longlong *)(lVar2 + lVar7);
        if (lVar9 != 0) {
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
          lVar9 = (ulonglong)((uint)*(ushort *)(lVar9 + 0x4a) * 0x50) + DAT_14c9a6588;
          ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
          FUN_1448729ea(lVar9,&local_d0,param_3);
          if (local_b0 == 3) {
            fVar12 = local_d0;
            bVar3 = 3;
          }
          else {
            FUN_1400b56fe(&local_a8,&local_d0,3);
            fVar12 = 1.0;
            if (local_88 != 0) {
              fVar12 = local_a8;
            }
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar1 != (code *)0x0) {
              pfVar6 = &local_a8;
              if (0x18 < local_90) {
                pfVar6 = (float *)CONCAT44(uStack_a4,local_a8);
              }
              (*pcVar1)(pfVar6);
            }
            bVar3 = local_b0;
            if (0x18 < local_90) {
              FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
              bVar3 = local_b0;
            }
          }
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar1 != (code *)0x0) {
            pfVar6 = &local_d0;
            if (0x18 < local_b8) {
              pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
            }
            (*pcVar1)(pfVar6);
          }
          if (0x18 < local_b8) {
            FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
          }
          fVar11 = fVar11 * fVar12;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar10 * 8 != lVar7);
    }
    lVar10 = FUN_14087dee0(local_d8);
    iVar4 = local_dc;
    if (lVar10 != 0) {
      pfVar6 = &local_d0;
      FUN_1448729ea(lVar10 + 0x1a0,pfVar6,param_3);
      iVar4 = local_dc;
      if (local_b0 == 3) {
        uVar5 = 3;
        fVar12 = local_d0;
      }
      else {
        pfVar8 = &local_a8;
        FUN_1400b56fe(pfVar8,&local_d0,3);
        fVar12 = local_a8;
        if (local_88 == 0) {
          fVar12 = 1.0;
        }
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_90) {
            pfVar8 = (float *)CONCAT44(uStack_a4,local_a8);
          }
          (*pcVar1)(pfVar8);
          iVar4 = local_dc;
        }
        if (0x18 < local_90) {
          FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
        }
        uVar5 = (uint)local_b0;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_b8) {
          pfVar6 = (float *)CONCAT44(uStack_cc,local_d0);
        }
        (*pcVar1)(pfVar6);
        iVar4 = local_dc;
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      }
      fVar11 = fVar11 * fVar12;
    }
    iVar4 = (int)((float)iVar4 * fVar11);
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1418955c7 FUN_1418955c7 body=87 status=ok
// SIG undefined FUN_1418955c7(void)

void FUN_1418955c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d8b18e(local_28,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140d8b20c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141895620 FUN_141895620 body=212 status=ok
// SIG undefined FUN_141895620(void)

longlong * FUN_141895620(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 == 0) {
    uVar2 = FUN_140d2fab0();
    lVar4 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0x70) = lVar4;
  }
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      return (longlong *)0x0;
    }
    if (lVar4 == 0) {
      return (longlong *)0x0;
    }
    plVar3 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar1 == '\0')) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      return (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x110))(plVar3);
    plVar3 = (longlong *)FUN_144aff482(uVar2,(longlong *)(param_1 + 0x68));
    *(longlong **)(param_1 + 0x78) = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  lVar5 = FUN_146527d8c();
  if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    if ((char)plVar3[3] != '\0') {
      return plVar3;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 1418956f4 FUN_1418956f4 body=386 status=ok
// SIG undefined FUN_1418956f4(void)

undefined8 * FUN_1418956f4(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b023b08;
  puVar3 = *(undefined4 **)(param_2 + 8);
  if (DAT_14c947fe0 == 0) {
    lVar2 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar2);
    DAT_14c947fe0 = lVar2;
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &DAT_14c9485f0;
  }
  FUN_140045924(DAT_14c947fe0,&local_48,puVar3,1);
  param_1[1] = local_48;
  *(undefined4 *)(param_1 + 2) = 0x1010;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = param_2;
  puVar3 = *(undefined4 **)(param_2 + 8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = &DAT_14c9485f0;
  }
  *(char *)((longlong)param_1 + 0x21) = (1 < (int)puVar3[1]) + '\x01';
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3b9cbb9e;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = *(undefined8 *)(param_3 + 2);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_3 + 4));
  uVar1 = FUN_14477b664(uVar1);
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined8 *)(param_3 + 6);
  uVar1 = *(undefined8 *)(param_3 + 10);
  param_1[0x11] = *(undefined8 *)(param_3 + 8);
  param_1[0x12] = uVar1;
  param_1[0x13] = *(undefined8 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = param_3[0xe];
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_3[0x12];
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141895878 FUN_141895878 body=309 status=ok
// SIG undefined FUN_141895878(void)

undefined4 FUN_141895878(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = &local_80;
  FUN_1448729ea(param_1 + 0x68,puVar3,param_2);
  if (local_60 == 3) {
    uVar2 = 3;
    uVar5 = local_80;
  }
  else {
    puVar4 = &local_58;
    FUN_1400b56fe(puVar4,&local_80,3);
    uVar5 = 0;
    if (local_38 != 0) {
      uVar5 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar3 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418959ae FUN_1418959ae body=145 status=ok
// SIG undefined FUN_1418959ae(void)

void FUN_1418959ae(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  if (param_1[9] != 0) {
    FUN_1488d3796(param_1 + 6,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1407d6a5a(param_1 + 10,0);
  }
  param_1[0x14] = 0;
  if (param_1[0x15] != 0) {
    FUN_140115c12(param_1 + 0x12,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if (param_1[0x19] == 0) {
    return;
  }
  FUN_1488d20d8(param_1 + 0x16,0);
  return;
}



// FUNCTION 141895a40 FUN_141895a40 body=29 status=ok
// SIG undefined FUN_141895a40(void)

undefined8 FUN_141895a40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141895a5e FUN_141895a5e body=353 status=ok
// SIG undefined FUN_141895a5e(void)

void FUN_141895a5e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141895ae3;
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
LAB_141895ae3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141895bc0 FUN_141895bc0 body=142 status=ok
// SIG undefined FUN_141895bc0(void)

void FUN_141895bc0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 141895c4e FUN_141895c4e body=353 status=ok
// SIG undefined FUN_141895c4e(void)

void FUN_141895c4e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141895cd5;
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
LAB_141895cd5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141895db0 FUN_141895db0 body=504 status=ok
// SIG undefined FUN_141895db0(void)

void FUN_141895db0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
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
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0,4);
    }
LAB_141895df4:
    uVar5 = 0;
    do {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  else {
    uVar4 = local_58;
    if (uVar2 == 0) goto LAB_141895e9b;
    FUN_1446efa72(plVar8,0,uVar2,4);
    if (0 < (int)uVar2) goto LAB_141895df4;
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
    iVar6 = local_58._4_4_;
    local_58 = uVar4;
    do {
      lVar3 = *local_70;
      lVar7 = (longlong)iVar6;
      uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(short *)(lVar3 + lVar7 * 0xc);
      iVar9 = (int)uVar10;
      *(int *)(lVar3 + 8 + lVar7 * 0xc) = iVar9;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar3 + 4 + lVar7 * 0xc) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_1449c0562(&local_68);
      iVar6 = local_58._4_4_;
      uVar4 = local_58;
    } while (local_58._4_4_ < (int)local_60[3]);
  }
LAB_141895e9b:
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141895faa FUN_141895faa body=363 status=ok
// SIG undefined FUN_141895faa(void)

void FUN_141895faa(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141896040;
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
LAB_141896040:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 141896116 FUN_141896116 body=29 status=ok
// SIG undefined FUN_141896116(void)

undefined8 FUN_141896116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141896134 FUN_141896134 body=269 status=ok
// SIG undefined FUN_141896134(void)

void FUN_141896134(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141896242 FUN_141896242 body=29 status=ok
// SIG undefined FUN_141896242(void)

undefined8 FUN_141896242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141896260 FUN_141896260 body=29 status=ok
// SIG undefined FUN_141896260(void)

undefined8 FUN_141896260(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189627e FUN_14189627e body=68 status=ok
// SIG undefined FUN_14189627e(void)

undefined8 * FUN_14189627e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b412ad0;
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



// FUNCTION 1418962c2 FUN_1418962c2 body=118 status=ok
// SIG undefined FUN_1418962c2(void)

void FUN_1418962c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b412ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141896338 FUN_141896338 body=137 status=ok
// SIG undefined FUN_141896338(void)

void FUN_141896338(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_144760e21(*(undefined8 *)(lVar2 + 0xf8),*(undefined4 *)(lVar2 + 0x100));
    if (*(longlong *)(lVar2 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    FUN_1407c83f0(*(undefined8 *)(lVar2 + 0xe8),*(undefined4 *)(lVar2 + 0xf0));
    if (*(longlong *)(lVar2 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    FUN_140368b56(lVar2 + 0x10);
    plVar3 = *(longlong **)(lVar2 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 1418963c2 FUN_1418963c2 body=29 status=ok
// SIG undefined FUN_1418963c2(void)

undefined8 FUN_1418963c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418963e0 FUN_1418963e0 body=217 status=ok
// SIG undefined FUN_1418963e0(void)

undefined8 FUN_1418963e0(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2 * 0xc0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0xab) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 / 0xc0)) {
    uVar4 = uVar3 / 0xc0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc0,8);
  }
  return uVar2;
}



// FUNCTION 1418964ba FUN_1418964ba body=272 status=ok
// SIG undefined FUN_1418964ba(void)

void FUN_1418964ba(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 1418965ca FUN_1418965ca body=225 status=ok
// SIG undefined FUN_1418965ca(void)

void FUN_1418965ca(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar5 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar5 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 1;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  puVar6[1] = 0;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar6[3] = &PTR_FUN_14aff2260;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 5) = 0xffff0300;
  *puVar6 = &PTR_FUN_14b30c7a0;
  puVar6[6] = param_2;
  puVar6[7] = 0x101000100010001;
  puVar6[8] = 0;
  *(undefined1 *)(puVar6 + 9) = 1;
  *(undefined2 *)((longlong)puVar6 + 0x4a) = 1;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
  *(undefined2 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0x15] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  return;
}



// FUNCTION 1418966ac FUN_1418966ac body=3359 status=ok
// SIG undefined FUN_1418966ac(void)

void FUN_1418966ac(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 auStack_178 [40];
  longlong *local_150;
  uint *local_148;
  int local_13c;
  uint *local_138;
  uint *local_130;
  uint local_124;
  uint *local_120;
  ulonglong local_118;
  longlong *local_110;
  ulonglong local_108;
  ulonglong local_100;
  uint *local_f8;
  char local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_b9;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  local_150 = param_1;
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x5d;
    plVar2 = param_1 + 0x5f;
    local_e8 = (longlong *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = (uint *)plVar2;
    if ((int)param_1[0x62] == 0) {
      iVar22 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar22 = (int)local_150[0x62];
    }
    local_88 = (undefined4)uStack_e0;
    uStack_84 = uStack_e0._4_4_;
    lStack_78 = uStack_d0;
    local_80 = local_d8;
    plVar23 = local_80;
    uStack_90 = local_e8;
    local_80._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar22) || (uStack_e0 != (uint *)plVar2)) {
      iVar6 = local_80._4_4_;
      local_80 = plVar23;
      do {
        lVar16 = *(longlong *)(*local_98 + 0x10 + (longlong)iVar6 * 0x20);
        if (lVar16 != 0) {
          puVar4 = *(undefined8 **)(lVar16 + 0x30);
          if (puVar4 != (undefined8 *)0x0) {
            plVar23 = (longlong *)(*local_98 + (longlong)iVar6 * 0x20 + 0x10);
            (**(code **)*puVar4)(puVar4,1);
            *(undefined8 *)(*plVar23 + 0x30) = 0;
            lVar16 = *plVar23;
          }
          plVar23 = (longlong *)(lVar16 + 0x80);
          local_b8 = (longlong *)&DAT_100000000;
          local_a8 = 0xffffffff;
          uStack_a0 = 0;
          plStack_b0 = plVar23;
          if (*(int *)(lVar16 + 0x98) == 0) {
            iVar6 = 0;
          }
          else {
            FUN_1449c0562(&local_b8);
            iVar6 = *(int *)(lVar16 + 0x98);
          }
          plVar24 = (longlong *)(lVar16 + 0x70);
          local_c8 = CONCAT44(uStack_9c,uStack_a0);
          uStack_d0 = local_a8;
          lVar16 = uStack_d0;
          uStack_e0 = (uint *)local_b8;
          local_d8 = plStack_b0;
          uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
          iVar12 = uStack_d0._4_4_;
          local_e8 = plVar24;
          if ((uStack_d0._4_4_ != iVar6) || (uStack_d0 = lVar16, plStack_b0 != plVar23)) {
            do {
              uStack_d0 = lVar16;
              lVar16 = *local_e8;
              lVar19 = *(longlong *)(lVar16 + 0x10 + (longlong)iVar12 * 0x20);
              if ((lVar19 != 0) &&
                 (((puVar4 = *(undefined8 **)(lVar19 + 0x30), puVar4 != (undefined8 *)0x0 &&
                   (-1 < *(char *)(lVar19 + 0x2a))) &&
                  ((int)*(char *)(lVar19 + 0x2a) < (int)local_150[0x78])))) {
                (**(code **)*puVar4)(puVar4,1);
                *(undefined8 *)(*(longlong *)(lVar16 + (longlong)iVar12 * 0x20 + 0x10) + 0x30) = 0;
              }
              uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
              FUN_1449c0562(&uStack_e0);
              iVar12 = uStack_d0._4_4_;
              lVar16 = uStack_d0;
            } while (local_e8 != plVar24 || (local_d8 != plVar23 || uStack_d0._4_4_ != iVar6));
          }
        }
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar6 = local_80._4_4_;
        plVar23 = local_80;
      } while (local_98 != plVar1 ||
               ((longlong *)CONCAT44(uStack_84,local_88) != plVar2 || local_80._4_4_ != iVar22));
    }
  }
  else {
    uVar13 = 0;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_ec[0] = '\0';
    local_138 = (uint *)(param_1 + 0x41);
    local_e8 = (longlong *)0x100000000;
    local_d8._0_4_ = 0xffffffff;
    local_d8._4_4_ = 0;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_138;
    if ((int)param_1[0x44] == 0) {
      uVar25 = 1;
      iVar22 = 0;
      uVar20 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar20 = (ulonglong)local_e8 & 0xffffffff;
      uVar25 = (ulonglong)local_e8 >> 0x20;
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x44);
      iVar22 = (uint)uStack_d0;
    }
    local_110 = param_1 + 0x3f;
    uVar18 = (uint)local_d8;
    uVar8 = local_d8._4_4_;
    puVar15 = uStack_e0;
    if (local_d8._4_4_ != (uint)uVar13 || uStack_e0 != local_138) {
      do {
        local_118 = uVar13;
        local_120 = puVar15;
        lVar16 = *local_110;
        lVar19 = (longlong)(int)uVar8 * 0x70;
        local_e8 = *(longlong **)(lVar16 + 0x10 + lVar19);
        local_124 = uVar18;
        if (((local_e8 != (longlong *)0x0) &&
            (FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec), local_ec[0] == '\0')) &&
           (puVar4 = *(undefined8 **)(lVar16 + lVar19 + 0x10), puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)(puVar4,1);
        }
        local_148 = (uint *)(lVar16 + lVar19 + 0x28);
        local_d8._4_4_ = *(uint *)(lVar16 + lVar19 + 0x40);
        uVar13 = 1;
        uVar14 = 0;
        if (local_d8._4_4_ == 0) {
          uVar18 = 0;
          iVar12 = 0;
        }
        else {
          puVar15 = *(uint **)(lVar16 + 0x38 + lVar19);
          if (puVar15 == (uint *)0x0) {
            puVar15 = local_148;
          }
          uVar18 = *puVar15;
          if (uVar18 == 0) {
            iVar6 = local_d8._4_4_ + 0x1e;
            if (-1 < (int)(local_d8._4_4_ - 1)) {
              iVar6 = local_d8._4_4_ - 1;
            }
            uVar17 = 0;
            uVar10 = (ulonglong)(uint)(iVar6 >> 5);
            if (iVar6 >> 5 < 1) {
              uVar10 = uVar17;
            }
            uVar14 = (ulonglong)((int)uVar10 + 1);
            iVar6 = 0;
            do {
              uVar18 = local_d8._4_4_;
              iVar12 = (int)uVar10 * 0x20 + 0x20;
              if (uVar10 == uVar17) goto LAB_14189687f;
              iVar6 = iVar6 + 0x20;
              uVar18 = puVar15[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar18 == 0);
            uVar14 = uVar17 & 0xffffffff;
          }
          else {
            uVar14 = 0;
            iVar6 = 0;
          }
          uVar13 = (ulonglong)(-uVar18 & uVar18);
          uVar10 = uVar13 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar18 = (iVar6 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          iVar12 = iVar6;
          if ((int)local_d8._4_4_ <= (int)uVar18) {
            uVar18 = local_d8._4_4_;
          }
        }
LAB_14189687f:
        local_f8 = (uint *)(lVar16 + lVar19 + 0x40);
        local_e8 = (longlong *)CONCAT44(1 << ((byte)local_d8._4_4_ & 0x1f),(int)local_d8._4_4_ >> 5)
        ;
        local_d8._0_4_ = -1 << ((byte)local_d8._4_4_ & 0x1f);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,local_d8._4_4_) & 0xffffffffffffffe0;
        local_13c = iVar22;
        local_108 = uVar25;
        local_100 = uVar20;
        uStack_e0 = local_148;
        if (*local_f8 != local_d8._4_4_) {
          local_130 = local_148;
          FUN_1449c0562(&local_e8);
        }
        uVar8 = local_d8._4_4_;
        local_130 = uStack_e0;
        if ((uVar18 != local_d8._4_4_) || (local_148 != uStack_e0)) {
          uVar21 = 0xffffffff;
          do {
            iVar22 = (int)uVar14;
            lVar9 = *(longlong *)(lVar19 + lVar16 + 0x18);
            local_e8 = *(longlong **)(lVar9 + 0x10 + (longlong)(int)uVar18 * 0x20);
            FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec);
            if ((local_ec[0] == '\0') &&
               (puVar4 = *(undefined8 **)(lVar9 + (longlong)(int)uVar18 * 0x20 + 0x10),
               puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)(puVar4,1);
            }
            uVar21 = uVar21 & ~(uint)uVar13;
            puVar15 = *(uint **)(lVar19 + lVar16 + 0x38);
            if (puVar15 == (uint *)0x0) {
              puVar15 = local_148;
            }
            uVar3 = *local_f8;
            lVar9 = (longlong)iVar22;
            uVar18 = puVar15[lVar9] & uVar21;
            if (uVar18 == 0) {
              iVar6 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar6 = uVar3 - 1;
              }
              iVar6 = iVar6 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar7 = iVar6;
              if (iVar6 < iVar22) {
                iVar7 = iVar22;
              }
              if (iVar22 < iVar6) {
                lVar11 = 0;
                do {
                  uVar18 = puVar15[lVar9 + lVar11 + 1];
                  if (uVar18 != 0) {
                    uVar14 = (ulonglong)(iVar22 + (int)lVar11 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_1418969e7;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar7 - lVar9 != lVar11);
                uVar21 = 0xffffffff;
                iVar22 = iVar7;
              }
              uVar14 = (ulonglong)(iVar22 + 1);
              uVar18 = uVar3;
            }
            else {
LAB_1418969e7:
              uVar13 = (ulonglong)(-uVar18 & uVar18);
              uVar25 = uVar13 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              uVar18 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar18) {
                uVar18 = uVar3;
              }
            }
          } while ((uVar18 != uVar8) || (local_148 != local_130));
        }
        uVar18 = local_124 & ~(uint)local_108;
        puVar15 = *(uint **)(local_120 + 4);
        if (*(uint **)(local_120 + 4) == (uint *)0x0) {
          puVar15 = local_120;
        }
        uVar21 = local_120[6];
        iVar6 = (int)local_100;
        lVar16 = (longlong)iVar6;
        uVar8 = puVar15[lVar16] & uVar18;
        uVar20 = local_100;
        iVar22 = local_13c;
        if (uVar8 == 0) {
          iVar12 = uVar21 + 0x1e;
          if (-1 < (int)(uVar21 - 1)) {
            iVar12 = uVar21 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar22 = local_13c + 0x20;
          iVar7 = iVar12;
          if (iVar12 < iVar6) {
            iVar7 = iVar6;
          }
          if (iVar6 < iVar12) {
            lVar19 = 0;
            do {
              uVar8 = puVar15[lVar16 + lVar19 + 1];
              if (uVar8 != 0) {
                uVar18 = 0xffffffff;
                uVar20 = (ulonglong)(iVar6 + (int)lVar19 + 1);
                goto LAB_141896ab8;
              }
              iVar22 = iVar22 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar7 - lVar16 != lVar19);
            uVar18 = 0xffffffff;
            iVar6 = iVar7;
          }
          uVar20 = (ulonglong)(iVar6 + 1);
          uVar25 = local_108;
          uVar8 = uVar21;
        }
        else {
LAB_141896ab8:
          uVar25 = (ulonglong)(-uVar8 & uVar8);
          uVar13 = uVar25 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar8 = (iVar22 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar21 <= (int)uVar8) {
            uVar8 = uVar21;
          }
        }
        puVar15 = local_120;
        uVar13 = local_118;
      } while (uVar8 != (uint)local_118 || local_120 != local_138);
    }
    iVar22 = 0;
    FUN_14570f31c(local_110,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar1 = local_150 + 0x49;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar2 = local_150 + 0x4b;
    local_b8 = (longlong *)0x100000000;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    plStack_b0 = plVar2;
    if ((int)local_150[0x4e] != 0) {
      FUN_1449c0562(&local_b8);
      iVar22 = (int)local_150[0x4e];
    }
    uStack_d0._0_4_ = (uint)local_a8;
    uStack_d0._4_4_ = local_a8._4_4_;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = (uint *)local_b8;
    local_d8 = plStack_b0;
    local_e8 = plVar1;
    if ((local_a8._4_4_ != iVar22) || (plStack_b0 != plVar2)) {
      do {
        lVar16 = *local_e8;
        lVar19 = (longlong)(int)uStack_d0._4_4_;
        plVar23 = *(longlong **)(lVar16 + 0x10 + lVar19 * 0x20);
        if ((plVar23 != (longlong *)0x0) &&
           ((local_b8 = plVar23, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
            local_b9 == '\0' &&
            (puVar4 = *(undefined8 **)(lVar16 + lVar19 * 0x20 + 0x10), puVar4 != (undefined8 *)0x0))
           )) {
          (**(code **)*puVar4)(puVar4,1);
        }
        uStack_d0._0_4_ = (uint)uStack_d0 & ~uStack_e0._4_4_;
        FUN_1449c0562(&uStack_e0);
      } while (local_e8 != plVar1 || (local_d8 != plVar2 || uStack_d0._4_4_ != iVar22));
    }
    iVar22 = 0;
    FUN_1410f1df6(plVar1,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar1 = local_150 + 0x53;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar2 = local_150 + 0x55;
    local_b8 = (longlong *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    plStack_b0 = plVar2;
    if ((int)local_150[0x58] != 0) {
      FUN_1449c0562(&local_b8);
      iVar22 = (int)local_150[0x58];
    }
    uStack_d0 = local_a8;
    lVar16 = uStack_d0;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = (uint *)local_b8;
    local_d8 = plStack_b0;
    uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    iVar6 = uStack_d0._4_4_;
    local_e8 = plVar1;
    if ((uStack_d0._4_4_ != iVar22) || (uStack_d0 = lVar16, plStack_b0 != plVar2)) {
      do {
        uStack_d0 = lVar16;
        lVar16 = *local_e8;
        plVar23 = *(longlong **)(lVar16 + 0x10 + (longlong)iVar6 * 0x20);
        if ((plVar23 != (longlong *)0x0) &&
           ((local_b8 = plVar23, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
            local_b9 == '\0' &&
            (puVar4 = *(undefined8 **)(lVar16 + (longlong)iVar6 * 0x20 + 0x10),
            puVar4 != (undefined8 *)0x0)))) {
          (**(code **)*puVar4)(puVar4,1);
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar6 = uStack_d0._4_4_;
        lVar16 = uStack_d0;
      } while (((uStack_d0._4_4_ != iVar22) || (local_d8 != plVar2)) || (local_e8 != plVar1));
    }
    FUN_14570f388(plVar1,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar23 = local_80;
  }
  local_80 = plVar23;
  lVar16 = local_150[0x7e];
  if ((longlong)(int)lVar16 != 0) {
    lVar19 = local_150[0x7d];
    lVar9 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar19 + lVar9);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar16 * 8 != lVar9);
  }
  lVar16 = local_150[0x80];
  if ((longlong)(int)lVar16 != 0) {
    lVar19 = local_150[0x7f];
    lVar9 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar19 + lVar9);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar16 * 8 != lVar9);
  }
  *(undefined4 *)(local_150 + 0x7e) = 0;
  if (*(int *)((longlong)local_150 + 0x3f4) != 0) {
    FUN_1488dc162(local_150 + 0x7d);
  }
  *(undefined4 *)(local_150 + 0x80) = 0;
  if (*(int *)((longlong)local_150 + 0x404) != 0) {
    FUN_1488dc192(local_150 + 0x7f);
  }
  FUN_14042ef50(local_150);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189740e FUN_14189740e body=126 status=ok
// SIG undefined FUN_14189740e(void)

void FUN_14189740e(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_2 + 4) == 2) {
    lVar2 = FUN_1400e3c00(param_1,param_2,1);
    if (lVar2 != 0) {
      lVar3 = FUN_14013f0dc(param_1,lVar2,param_2,1);
      if (lVar3 != 0) {
        bVar1 = *(byte *)(lVar3 + 0x2a);
        if (((-1 < (char)bVar1) && ((int)(char)bVar1 < *(int *)(param_1 + 0x3c0))) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x3b8) + (ulonglong)bVar1 * 8) == DAT_14cb84658))
        {
          FUN_140a93e94(param_1,lVar2,lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1418974a4 FUN_1418974a4 body=631 status=ok
// SIG undefined FUN_1418974a4(void)

void FUN_1418974a4(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_1 + 0x51;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_78;
  if ((int)param_1[0x54] == 0) {
    uVar18 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar18 = local_68 >> 0x20;
    iVar11 = (int)param_1[0x54];
  }
  plVar5 = local_60;
  plVar16 = local_78;
  iVar12 = (int)local_68;
  uVar19 = (uint)local_58;
  iVar10 = local_58._4_4_;
  iVar17 = local_50;
  if (local_58._4_4_ != iVar11 || local_60 != local_78) {
    do {
      lVar13 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar10 * 0x20);
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0x40) != (int)param_1[0x5f])) {
        local_70 = param_1 + 0x5a;
        lVar14 = lVar13;
        do {
          puVar6 = (undefined8 *)FUN_144a06846(lVar14 + 0x48,local_70);
          pbVar3 = (byte *)*puVar6;
          plVar16 = local_78;
          if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) == 0)) || ((*pbVar3 & 0x68) != 0))
          goto LAB_14189756e;
          uVar7 = FUN_140625092(pbVar3,&DAT_14c9a12e0);
          lVar14 = FUN_144837648(param_1,uVar7,1);
          plVar16 = local_78;
          if (lVar14 == 0) goto LAB_14189756e;
        } while (*(int *)(lVar14 + 0x40) != (int)param_1[0x5f]);
        (**(code **)(*param_1 + 0x420))(param_1,lVar13);
        plVar16 = local_78;
      }
LAB_14189756e:
      uVar19 = uVar19 & ~(uint)uVar18;
      plVar15 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar15 = plVar5;
      }
      iVar2 = (int)plVar5[3];
      lVar13 = (longlong)iVar12;
      uVar9 = *(uint *)((longlong)plVar15 + lVar13 * 4) & uVar19;
      iVar10 = iVar2;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar4 = iVar8;
        if (iVar8 < iVar12) {
          iVar4 = iVar12;
        }
        if (iVar12 < iVar8) {
          lVar14 = 0;
          do {
            uVar9 = *(uint *)((longlong)plVar15 + lVar14 * 4 + lVar13 * 4 + 4);
            if (uVar9 != 0) {
              iVar12 = iVar12 + (int)lVar14 + 1;
              uVar19 = 0xffffffff;
              goto LAB_1418975dc;
            }
            iVar17 = iVar17 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar4 - lVar13 != lVar14);
          uVar19 = 0xffffffff;
          plVar16 = local_78;
          iVar12 = iVar4 + 1;
        }
        else {
          iVar12 = iVar12 + 1;
          plVar16 = local_78;
        }
      }
      else {
LAB_1418975dc:
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar18 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar10) {
          iVar10 = iVar2;
        }
      }
    } while (iVar10 != iVar11 || plVar5 != plVar16);
  }
  *(int *)(param_1 + 0x5f) = (int)param_1[0x5f] + 1;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189771c FUN_14189771c body=280 status=ok
// SIG undefined FUN_14189771c(void)

undefined8 *
FUN_14189771c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  code *pcVar1;
  void *_Src;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  void **local_58;
  void *local_50;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b418ac(param_1,&local_50);
  _Src = local_50;
  pcVar1 = (code *)*param_4;
  if (pcVar1 == (code *)0x0) {
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_48;
    if ((longlong)local_48 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,local_48,0);
      memcpy((void *)*param_2,_Src,(longlong)local_48 * 2);
    }
  }
  else {
    local_3c = 0;
    local_40 = 0xffffffff;
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_58 = &local_50;
    (*pcVar1)(param_2,uVar2,&local_40,&local_3c);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141897836 FUN_141897836 body=17 status=ok
// SIG undefined FUN_141897836(void)

void FUN_141897836(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1407b25f0(param_1 + 2,param_2 + 2);
  return;
}



// FUNCTION 141897848 FUN_141897848 body=94 status=ok
// SIG undefined FUN_141897848(void)

void FUN_141897848(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418978a6 FUN_1418978a6 body=116 status=ok
// SIG undefined FUN_1418978a6(void)

void FUN_1418978a6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14189791a FUN_14189791a body=630 status=ok
// SIG undefined FUN_14189791a(void)

void FUN_14189791a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar11 = param_1[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar4 = *param_1;
    lVar12 = 0;
    do {
      lVar7 = (**(code **)(**(longlong **)(lVar4 + lVar12) + 8))();
      lVar8 = FUN_140a49604();
      if (lVar7 == lVar8) {
        plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b4132e0;
        lVar11 = *param_2;
        plVar6[2] = (longlong)&PTR_FUN_14b33eb10;
        plVar6[3] = 0;
        FUN_14485c47a(plVar6 + 3,lVar11);
        if (plVar6 == (longlong *)0x0) {
          *(undefined8 *)(lVar4 + lVar12) = 0x10;
          plVar10 = *(longlong **)(lVar4 + 8 + lVar12);
          if (plVar10 == (longlong *)0x0) {
            return;
          }
          *(undefined8 *)(lVar4 + 8 + lVar12) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          *(longlong **)(lVar4 + lVar12) = plVar6 + 2;
          plVar10 = *(longlong **)(lVar4 + 8 + lVar12);
          if (plVar6 == plVar10) {
            LOCK();
            plVar10 = plVar6 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            goto LAB_1418979ef;
          }
          *(longlong **)(lVar4 + 8 + lVar12) = plVar6;
          if (plVar10 == (longlong *)0x0) goto LAB_1418979ef;
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        goto LAB_1418979ef;
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar11 * 0x10 != lVar12);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4132e0;
  lVar11 = *param_2;
  plVar6[2] = (longlong)&PTR_FUN_14b33eb10;
  plVar6[3] = 0;
  if (lVar11 == 0) {
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar11 + 0xc);
    *(uint *)(plVar6 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)plVar6 + 0x1c) = iVar5;
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_1401037bc(param_1,iVar5);
  }
  lVar11 = *param_1;
  *(longlong **)(lVar11 + (longlong)iVar5 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar11 + 8 + (longlong)iVar5 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_1418979ef:
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141897b90 FUN_141897b90 body=29 status=ok
// SIG undefined FUN_141897b90(void)

undefined8 FUN_141897b90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141897bae FUN_141897bae body=107 status=ok
// SIG undefined FUN_141897bae(void)

void FUN_141897bae(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2;
  FUN_140771728(*(undefined8 *)(lVar1 + 0x10 + lVar3 * 0x28),
                *(undefined4 *)(lVar1 + 0x18 + lVar3 * 0x28));
  if (*(longlong *)(lVar1 + 0x10 + lVar3 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + lVar3 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 141897c1a FUN_141897c1a body=158 status=ok
// SIG undefined FUN_141897c1a(void)

void FUN_141897c1a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x28)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x28,8);
      uVar3 = uVar3 / 0x28;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
    }
  }
  return;
}



// FUNCTION 141897cb8 FUN_141897cb8 body=158 status=ok
// SIG undefined FUN_141897cb8(void)

void FUN_141897cb8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x300)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x300,0x10);
      uVar3 = uVar3 / 0x300;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x300,0x10);
    }
  }
  return;
}



// FUNCTION 141897d56 FUN_141897d56 body=29 status=ok
// SIG undefined FUN_141897d56(void)

undefined8 FUN_141897d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141897d74 FUN_141897d74 body=333 status=ok
// SIG undefined FUN_141897d74(void)

void FUN_141897d74(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x111) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141897ddd;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141897ddd:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x78)) {
      uVar4 = uVar3 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x78,8);
  }
  return;
}



// FUNCTION 141897ec2 FUN_141897ec2 body=272 status=ok
// SIG undefined FUN_141897ec2(void)

void FUN_141897ec2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141897fd2 FUN_141897fd2 body=1464 status=ok
// SIG undefined FUN_141897fd2(void)

int * FUN_141897fd2(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_14482b872(param_1,iVar20);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar11 = iVar23 + 1;
    iVar15 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar15 = iVar23;
    }
    if (iVar15 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar7 = iVar23;
        }
        else {
          uVar19 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar19) {
              uVar14 = uVar19;
            }
          }
          else {
            uVar14 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar14 << 2,0);
          iVar7 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar19 <= iVar7) {
            iVar11 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar9,iVar7);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar7 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar8 = (longlong)iVar20;
    iVar23 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar23;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar23 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar23 = iVar20;
  }
  puVar12[iVar23 >> 5] = puVar12[iVar23 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  uVar19 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  puVar4 = (undefined4 *)param_3[1];
  uVar13 = *(ulonglong *)*param_3;
  *puVar2 = uVar13;
  *(undefined4 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar14 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar21) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar23 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar23 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar23 * 0x18);
        if (*puVar3 == uVar13) {
          uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar13 = puVar2[1];
          uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(int *)puVar3 = (int)*puVar2;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
          *(int *)(puVar3 + 1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
          FUN_1488dcfd8(param_1,iVar20);
          iVar20 = iVar23;
          goto LAB_1418981b6;
        }
        iVar23 = (int)puVar3[2];
      } while (iVar23 != -1);
    }
  }
  if (3 < uVar21) {
    uVar13 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)puVar2 + 0x14) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar20;
    goto LAB_1418981b6;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_141898204:
    uVar14 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4) =
           0xffffffff;
      uVar14 = uVar14 + 1;
    } while (uVar19 != uVar14);
  }
  else {
    if (uVar19 == 0) goto LAB_1418981b6;
    FUN_1446efa72(plVar9,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_141898204;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar13 = 0;
    uVar18 = 1;
    iVar7 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar19 = *puVar12;
    if (uVar19 == 0) {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_1418981b6;
        iVar11 = iVar11 + 0x20;
        uVar19 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar24 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar7) {
      iVar7 = iVar23;
    }
  }
  if (iVar7 < iVar23) {
    uVar19 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar22 = (longlong)iVar7;
      uVar24 = *(ulonglong *)(lVar8 + lVar22 * 0x18);
      uVar14 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar14 >> 0x10 ^ uVar14) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar19 = ~(uint)uVar18 & uVar19;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar23 = (int)param_1[5];
      iVar7 = (int)uVar13;
      lVar8 = (longlong)iVar7;
      uVar14 = puVar12[lVar8] & uVar19;
      if (uVar14 == 0) {
        iVar15 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar15 = iVar23 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar7) {
          iVar16 = iVar7;
        }
        if (iVar15 <= iVar7) break;
        lVar22 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar12[lVar8 + lVar22 + 1];
          if (uVar14 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar16 - lVar8 == lVar22) goto LAB_1418981b6;
        }
        uVar13 = (ulonglong)(iVar7 + (int)lVar22 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar14 & uVar14);
      uVar24 = uVar18 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar23);
  }
LAB_1418981b6:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 14189858a FUN_14189858a body=213 status=ok
// SIG undefined FUN_14189858a(void)

void FUN_14189858a(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else if (param_2 < 5) {
    iVar4 = 4;
  }
  else {
    uVar2 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar4;
    FUN_141027d76(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 141898660 FUN_141898660 body=29 status=ok
// SIG undefined FUN_141898660(void)

undefined8 FUN_141898660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189867e FUN_14189867e body=275 status=ok
// SIG undefined FUN_14189867e(void)

void FUN_14189867e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 141898792 FUN_141898792 body=594 status=ok
// SIG undefined FUN_141898792(void)

void FUN_141898792(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  uint local_58;
  undefined4 uStack_54;
  int local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar5,0);
  if (*(longlong *)((longlong)param_1 + 0x24) != 0) {
    FUN_1400021e4((undefined8 *)((longlong)param_1 + 0x24),&local_58);
    cVar3 = FUN_144a38768(&local_58,L".umap",5,1);
    if (cVar3 != '\0') {
      iVar8 = local_50 + -1;
      if (local_50 == 0) {
        iVar8 = 0;
      }
      if (iVar8 < 6) {
        iVar8 = 5;
      }
      FUN_14496493a(&local_58,iVar8 + -5,5,1);
      if (local_50 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)CONCAT44(uStack_54,local_58);
      }
      FUN_1446f470e(&local_68,puVar9,1);
      *(undefined8 *)((longlong)param_1 + 0x24) = local_68;
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  local_60 = DAT_14cb84d48;
  local_68 = DAT_14cb84d40;
  FUN_1448075d0(&local_58);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar10 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar6[9];
      }
      iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar6[10] - 1U & local_58) * 4);
      if (iVar8 != -1) {
        do {
          lVar1 = *plVar6 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar8 * 0x40) == local_58) {
            if ((((lVar1 != 0) &&
                 (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_141898865;
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_141898865:
  if ((byte *)*puVar7 == (byte *)0x0) {
    bVar11 = false;
  }
  else {
    bVar11 = (*(byte *)*puVar7 & 3) != 0;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (bVar11) {
    local_60 = DAT_14cb84d48;
    local_68 = DAT_14cb84d40;
    FUN_1448075d0(&local_58);
    uVar5 = FUN_144a06846(param_2,&local_58);
    uVar4 = FUN_1410c4486(uVar5,1);
    *(undefined1 *)(param_1 + 3) = uVar4;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418989e6 FUN_1418989e6 body=124 status=ok
// SIG undefined FUN_1418989e6(void)

longlong FUN_1418989e6(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_14050af02(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141898a64 FUN_141898a64 body=96 status=ok
// SIG undefined FUN_141898a64(void)

void FUN_141898a64(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x2a00,0);
    lVar4 = 0x3f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x15;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x40;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 141898ac4 FUN_141898ac4 body=58 status=ok
// SIG undefined FUN_141898ac4(void)

void FUN_141898ac4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140595908(param_1,*(undefined1 *)(param_3 + 0x2a));
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_3 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141898afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c8))(plVar1,*(longlong *)(param_3 + 0x30),*(code **)(*plVar1 + 0x2c8))
    ;
    return;
  }
  return;
}



// FUNCTION 141898afe FUN_141898afe body=81 status=ok
// SIG undefined FUN_141898afe(void)

void FUN_141898afe(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    bVar1 = *(byte *)(param_3 + 0x2a);
    if (((-1 < (char)bVar1) && ((int)(char)bVar1 < *(int *)(param_1 + 0x1e0))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (ulonglong)bVar1 * 8) != 0)) {
      plVar2 = (longlong *)FUN_140595908();
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141898b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2c0))(plVar2);
        return;
      }
    }
  }
  FUN_140902b36();
  return;
}



// FUNCTION 141898b56 FUN_141898b56 body=480 status=ok
// SIG undefined FUN_141898b56(void)

ulonglong FUN_141898b56(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_RDI;
  undefined7 uVar9;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (param_2 == 0) {
LAB_141898be7:
    lVar4 = *(longlong *)(param_1 + 0x78);
    if ((*(byte *)(lVar4 + 0x16d) & 1) == 0) {
LAB_141898bf4:
      bVar1 = *(byte *)(lVar4 + 0x16c);
      goto LAB_141898bfa;
    }
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar3 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (plVar3 == (longlong *)0x0) goto LAB_141898be7;
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
      goto LAB_141898bf4;
    }
    if ((*(byte *)(lVar4 + 0x7c) & 4) != 0) {
      uVar8 = CONCAT71(uVar9,1);
      goto LAB_141898bc3;
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x78) + 0x16c);
    if ((char)bVar1 < '\0') goto LAB_141898bc1;
LAB_141898bfa:
    uVar8 = CONCAT71(uVar9,1);
    if ((bVar1 & 0x70) != 0x30) goto LAB_141898bc3;
    lVar4 = *(longlong *)(param_1 + 0x188);
    if (lVar4 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      uVar5 = FUN_1449d6ade();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar5);
    }
    if (param_2 == 0) goto LAB_141898bc3;
    uVar5 = FUN_1449d6ade();
    plVar6 = (longlong *)FUN_144718840(param_2,uVar5);
    if (plVar6 == (longlong *)0x0 || plVar3 == (longlong *)0x0) goto LAB_141898bc3;
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
    cVar2 = FUN_14570329c(lVar4 + 0x20,lVar7 + 0x20);
    if (cVar2 == '\0') goto LAB_141898bc3;
  }
LAB_141898bc1:
  uVar8 = 0;
LAB_141898bc3:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 141898d38 FUN_141898d38 body=863 status=ok
// SIG undefined FUN_141898d38(void)

ulonglong FUN_141898d38(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  uint local_74;
  uint *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_1447b4afa();
  uVar9 = (ulonglong)uVar4;
  iVar1 = *(int *)(param_1 + 0x3fc);
  local_74 = 0;
  if ((*(byte *)(param_2 + 0x30) & 0x80) == 0) {
    plVar11 = (longlong *)(param_2 + 0x1a8);
    if (*(int *)(param_2 + 0x1b0) != *(int *)(param_2 + 0x1dc)) {
      piVar6 = (int *)(param_2 + 0x1e0);
      if (*(int **)(param_2 + 0x1e8) != (int *)0x0) {
        piVar6 = *(int **)(param_2 + 0x1e8);
      }
      iVar5 = *piVar6;
      if (iVar5 != -1) {
        do {
          lVar7 = *plVar11 + (longlong)iVar5 * 0x10;
          if (*(int *)(*plVar11 + (longlong)iVar5 * 0x10) == 0) {
            if (lVar7 != 0) goto LAB_141898dda;
            break;
          }
          iVar5 = *(int *)(lVar7 + 8);
        } while (iVar5 != -1);
      }
    }
    local_70 = &local_74;
    local_98 = 0;
    FUN_1407932ac(plVar11,&local_64,0);
    lVar7 = (longlong)local_64 * 0x10 + *plVar11;
LAB_141898dda:
    if (*(int *)(lVar7 + 4) == iVar1) goto LAB_141898dde;
    *(int *)(lVar7 + 4) = iVar1;
    iVar1 = *(int *)(param_2 + 0x250);
    *(uint *)(param_2 + 0x250) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x254) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_2 + 0x248),iVar1);
    }
    *(uint *)(*(longlong *)(param_2 + 0x248) + (longlong)iVar1 * 4) = local_74;
  }
  lVar7 = FUN_1447210f0(param_1);
  if (lVar7 == 0) {
    fVar13 = -1.0;
  }
  else {
    lVar7 = FUN_1447210f0(param_1);
    fVar13 = (float)(*(double *)(lVar7 + 0x6d0) + -0.5);
  }
  if ((longlong)*(int *)(param_1 + 0x3d0) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x3c8);
    plVar12 = plVar10 + *(int *)(param_1 + 0x3d0);
    plVar11 = (longlong *)(param_2 + 0x1a8);
    lVar7 = param_2 + 0x1e0;
    local_80 = (longlong *)(param_2 + 0x248);
    do {
      lVar2 = *plVar10;
      if ((lVar2 != 0) &&
         ((*(char *)(lVar2 + 0x70) != '\x01' || (fVar13 < *(float *)(lVar2 + 0x6c))))) {
        iVar1 = *(int *)(lVar2 + 100);
        local_74 = *(int *)(lVar2 + 0x60) + 1;
        if ((*(byte *)(param_2 + 0x30) & 0x80) == 0) {
          if (*(int *)(param_2 + 0x1b0) != *(int *)(param_2 + 0x1dc)) {
            lVar8 = *(longlong *)(param_2 + 0x1e8);
            if (*(longlong *)(param_2 + 0x1e8) == 0) {
              lVar8 = lVar7;
            }
            iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_2 + 0x1f0) - 1U & local_74) * 4);
            if (iVar5 != -1) {
              do {
                lVar8 = *plVar11 + (longlong)iVar5 * 0x10;
                if (*(uint *)(*plVar11 + (longlong)iVar5 * 0x10) == local_74) {
                  if (lVar8 != 0) goto LAB_141898f9a;
                  break;
                }
                iVar5 = *(int *)(lVar8 + 8);
              } while (iVar5 != -1);
            }
          }
          local_98 = 0;
          local_90 = lVar7;
          local_88 = plVar11;
          local_70 = &local_74;
          FUN_1407932ac(plVar11,&local_64,local_74,&local_70);
          lVar8 = (longlong)local_64 * 0x10 + *local_88;
          plVar11 = local_88;
          lVar7 = local_90;
LAB_141898f9a:
          if (*(int *)(lVar8 + 4) == iVar1) goto LAB_141898f20;
          *(int *)(lVar8 + 4) = iVar1;
          iVar1 = *(int *)(param_2 + 0x250);
          *(uint *)(param_2 + 0x250) = iVar1 + 1U;
          local_90 = lVar7;
          if (*(uint *)(param_2 + 0x254) < iVar1 + 1U) {
            local_88 = plVar11;
            FUN_1446f48e2(local_80,iVar1);
            plVar11 = local_88;
          }
          *(uint *)(*local_80 + (longlong)iVar1 * 4) = local_74;
          lVar7 = local_90;
        }
        local_90 = lVar7;
        if (((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
          bVar3 = FUN_14009cd08(param_2,lVar2,param_3,*param_4);
        }
        else {
          bVar3 = 0;
        }
        uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 | bVar3);
        lVar7 = local_90;
      }
LAB_141898f20:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar12);
  }
LAB_141898dde:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 141899098 FUN_141899098 body=527 status=ok
// SIG undefined FUN_141899098(void)

void FUN_141899098(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
    **(undefined1 **)(param_1 + 8) = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
      goto LAB_1418991be;
    }
    uVar11 = 0;
    uVar5 = 0;
  }
  else {
    cVar3 = *(char *)(param_1 + 0x29);
    if (((((cVar3 != '\0') || (*(int *)(param_1 + 0x30) == 0)) ||
         (uVar11 = *(uint *)(param_1 + 0x2c), (int)uVar11 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar11 ||
         (plVar10 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
         plVar10 == (longlong *)0x0)))) ||
       (((int)plVar10[2] != *(int *)(param_1 + 0x30) ||
        (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))))) goto LAB_141899231;
    *(undefined1 *)(param_1 + 0x29) = 1;
    **(undefined1 **)(param_1 + 8) = 1;
    uVar11 = 0;
    if (*(int *)(param_1 + 0x30) == 0) {
LAB_141899248:
      uVar6 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x2c);
      uVar6 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x30) ||
            ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_141899248;
        uVar6 = *puVar7;
      }
    }
    **(undefined8 **)(param_1 + 0x38) = uVar6;
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
LAB_1418991be:
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar4 = *(uint *)(lVar12 + 0x10);
        bVar13 = uVar4 == 0;
        if (bVar13) {
          *(uint *)(lVar12 + 0x10) = uVar9;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar13) {
          uVar4 = uVar9;
        }
        uVar5 = (ulonglong)uVar4;
      }
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_2 + 0x58);
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar12 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar12 = param_2;
  }
  lVar8 = (longlong)iVar2;
  *(undefined8 *)(lVar12 + lVar8 * 0x14) = uVar6;
  *(undefined4 *)(lVar12 + 8 + lVar8 * 0x14) = uVar1;
  *(ulonglong *)(lVar12 + 0xc + lVar8 * 0x14) = (ulonglong)uVar11 | uVar5 << 0x20;
  cVar3 = *(char *)(param_1 + 0x29);
LAB_141899231:
  *(char *)(param_2 + 0x60) = cVar3;
  return;
}



// FUNCTION 1418992a8 FUN_1418992a8 body=338 status=ok
// SIG undefined FUN_1418992a8(void)

undefined8 FUN_1418992a8(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar3 = 0x1c8;
    if ((char)param_1[1] == '\x01') goto LAB_1418992d7;
    lVar3 = 0;
    switch((char)param_1[1]) {
    case '\0':
      goto switchD_141899318_caseD_0;
    default:
      goto switchD_141899318_caseD_1;
    case '\x02':
      lVar3 = 0x180;
      break;
    case '\x03':
      lVar3 = 0x188;
      break;
    case '\x04':
      lVar3 = 400;
      break;
    case '\x05':
      lVar3 = 0x278;
    }
LAB_1418992d7:
    lVar3 = *(longlong *)(param_2 + lVar3);
switchD_141899318_caseD_1:
    if (*param_1 == lVar3) {
switchD_141899318_caseD_0:
      if ((param_1[2] != 0) && ((int)param_1[3] - 1U < 0xfffffffe)) {
        puVar1 = *(undefined4 **)(*(longlong *)(param_2 + 0x80) + 8);
        puVar5 = &DAT_14c9485f0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar5 = puVar1;
        }
        FUN_1447325ac(puVar5,&local_28,1);
        if (local_28 != param_1[2]) goto LAB_1418992e0;
      }
      if ((param_1[5] == 0) || (*(longlong *)(param_2 + 0x10c) == param_1[5])) {
        if ((param_1[7] != 0) && ((longlong)(int)param_1[9] != 0)) {
          lVar3 = 0;
          do {
            if (*(longlong *)(param_1[8] + lVar3) != 0) {
              cVar2 = FUN_1405d595e(param_2 + 0x3c0,param_1 + 6);
              if (cVar2 == '\0') goto LAB_1418992e0;
              break;
            }
            lVar3 = lVar3 + 8;
          } while ((longlong)(int)param_1[9] * 8 != lVar3);
        }
        uVar4 = 1;
        goto LAB_1418992e2;
      }
    }
  }
LAB_1418992e0:
  uVar4 = 0;
LAB_1418992e2:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418993fc FUN_1418993fc body=198 status=ok
// SIG undefined FUN_1418993fc(void)

undefined8 FUN_1418993fc(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1403d77ae(param_1 + 8);
  if (lVar2 == 0) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    if (*(int *)(param_1 + 0x70) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x6c);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x70)) {
      return 0;
    }
    if ((*(uint *)(lVar2 + 8) & 0x10200000) != 0) {
      return 0;
    }
  }
  if ((param_2 & 2) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418994c2 FUN_1418994c2 body=3280 status=ok
// SIG undefined FUN_1418994c2(void)

void FUN_1418994c2(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  double *pdVar18;
  undefined *puVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(double *)(param_1 + 0x4e8) = DAT_14c8464f0;
  uVar11 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x4d8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x4e0) = uVar11;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (*(char *)(param_1 + 0x508) == '\x01') {
      *(undefined1 *)(param_1 + 0x508) = 0;
    }
    goto LAB_14189968d;
  }
  puVar1 = (undefined8 *)(param_1 + 0x4d8);
  puVar19 = &DAT_14cb89c20;
  if (*(undefined **)(param_1 + 0x510) != (undefined *)0x0) {
    puVar19 = *(undefined **)(param_1 + 0x510);
  }
  if ((*(byte *)(param_1 + 0x104) & 0x80) == 0) {
    if ((((*(double *)(param_1 + 0x1a8) == 0.0) && (!NAN(*(double *)(param_1 + 0x1a8)))) &&
        (*(double *)(param_1 + 0x1b0) == 0.0)) &&
       (((!NAN(*(double *)(param_1 + 0x1b0)) && (*(double *)(param_1 + 0x1b8) == 0.0)) &&
        (!NAN(*(double *)(param_1 + 0x1b8)))))) goto LAB_14189968d;
    *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x1b8);
    uVar11 = *(undefined8 *)(param_1 + 0x1a8);
    uVar23 = *(undefined8 *)(param_1 + 0x1b0);
    goto LAB_141899939;
  }
  if (puVar19[0xb4] != '\0') {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar14 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar14 = 0;
    }
    if ((*(char *)(lVar14 + 0x178) == '\x03') &&
       (plVar15 = *(longlong **)(param_1 + 400), plVar15 != (longlong *)0x0)) {
      uVar11 = FUN_14069ce7c();
      plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,uVar11);
      if (plVar15 != (longlong *)0x0) {
        uVar11 = FUN_14069ce7c();
        plVar12 = (longlong *)FUN_144718840(plVar15,uVar11);
        if ((((((plVar15 != plVar12) && (plVar12 != (longlong *)0x0)) &&
              (puVar13 = (uint *)(**(code **)(*plVar12 + 0x10))(plVar12), puVar13 != (uint *)0x0))
             && ((puVar13[1] != 0 && (uVar4 = *puVar13, -1 < (int)uVar4)))) &&
            ((((int)uVar4 < DAT_14c9647dc &&
              ((plVar15 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar15 != (longlong *)0x0 && (*(uint *)(plVar15 + 2) == puVar13[1])))) &&
             ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))) &&
           ((longlong *)*plVar15 != (longlong *)0x0)) {
          plVar12 = (longlong *)0x0;
          if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
            plVar12 = (longlong *)*plVar15;
          }
          plVar15 = *(longlong **)(param_1 + 0x180);
          if (plVar12 != plVar15) {
            if (plVar15 == (longlong *)0x0) {
LAB_1418998d0:
              bVar20 = false;
            }
            else {
              if (DAT_14caf64b8 == 0) {
                local_120 = &local_108;
                local_108 = FUN_141030f22;
                local_110 = FUN_14081d0ea;
                local_118 = FUN_142b4754c;
                local_128 = &LAB_147c45ce0;
                local_130 = &LAB_1463f1ff4;
                local_138 = &DAT_149e063b2;
                local_140 = 0x4000000000;
                local_148 = 0x10000004;
                local_150 = 8;
                local_158 = 0x428;
                FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
                plVar15 = *(longlong **)(param_1 + 0x180);
                if (plVar15 == (longlong *)0x0) goto LAB_1418998d0;
              }
              bVar20 = false;
              if ((DAT_14caf64b8 != 0) && (lVar14 = plVar15[2], bVar20 = false, lVar14 != 0)) {
                if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
                    == DAT_14caf64b8 + 0x30)) {
                  pcVar5 = *(code **)(*plVar15 + 0x5e8);
                  if (pcVar5 == FUN_140972dde) {
                    lVar14 = plVar15[0x76];
                    if (lVar14 != 0) goto LAB_141899a5f;
                    pcVar5 = *(code **)(*plVar15 + 0x5f8);
                    if (pcVar5 == FUN_144784df4) {
                      if (*(code **)(plVar15[0x784] + 0x18) == (code *)&LAB_144904684) {
                        if (*(int *)((longlong)plVar15 + 0x75b4) != 0) {
                          uVar4 = *(uint *)(plVar15 + 0xeb6);
                          bVar20 = false;
                          if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_1418998d2;
                          plVar12 = (longlong *)
                                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                          if ((plVar12 != (longlong *)0x0) &&
                             (((int)plVar12[2] == *(int *)((longlong)plVar15 + 0x75b4) &&
                              ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
                            if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
                              lVar14 = *plVar12;
                            }
                            else {
                              lVar14 = 0;
                            }
                            lVar14 = lVar14 + 0x110;
                            goto LAB_141899a39;
                          }
                        }
                      }
                      else {
                        lVar14 = (**(code **)(plVar15[0x784] + 0x18))();
LAB_141899a39:
                        if (lVar14 != 0) {
                          lVar14 = *(longlong *)(lVar14 + 0x20);
                          goto LAB_141899a46;
                        }
                      }
                    }
                    else {
                      lVar14 = (*pcVar5)();
LAB_141899a46:
                      if (lVar14 != 0) {
                        lVar14 = *(longlong *)(lVar14 + 0x3b0);
                        goto LAB_141899a56;
                      }
                    }
                  }
                  else {
                    lVar14 = (*pcVar5)();
LAB_141899a56:
                    if (lVar14 != 0) {
LAB_141899a5f:
                      bVar20 = (*(byte *)(lVar14 + 0x39a) & 8) == 0;
                      goto LAB_1418998d2;
                    }
                  }
                }
                goto LAB_1418998d0;
              }
            }
LAB_1418998d2:
            if ((char)puVar13[6] == '\x01') {
              if (((char)puVar13[0x10] == '\0') && (bVar20)) goto LAB_1418998f1;
LAB_1418999ba:
              if (*(char *)(param_1 + 0x1c0) != '\0') goto LAB_14189959f;
              lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x48);
              if (lVar14 != 0) {
                lVar14 = lVar14 * 0x28;
                plVar15 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x40) + 8);
                do {
                  plVar12 = (longlong *)FUN_14479d2ce();
                  if (plVar12 == (longlong *)0x0) {
                    if (*plVar15 != 0) {
                      plVar12 = (longlong *)FUN_140007850();
                      cVar10 = (*(code *)PTR_FUN_14c758760)();
                      if ((plVar12 == (longlong *)0x0) || (cVar10 == '\0')) {
                        FUN_14485c47a(plVar15 + -1,plVar12);
                        if (plVar12 == (longlong *)0x0) goto LAB_14189a096;
                      }
                      else {
                        uVar4 = *(uint *)((longlong)plVar12 + 0xc);
                        if ((int)uVar4 < DAT_14c9647dc) {
                          lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                        }
                        else {
                          lVar16 = 0;
                        }
                        if ((*(uint *)(lVar16 + 8) & 0x8400000) == 0) {
                          FUN_14485c47a(plVar15 + -1,plVar12);
                        }
                      }
                      if ((*(uint *)(plVar12 + 1) >> 0x1e & 1) == 0) goto LAB_14189a072;
                    }
                  }
                  else {
LAB_14189a072:
                    lVar16 = FUN_144a797b2();
                    if ((((*(int *)(lVar16 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8
                           ) == lVar16 + 0x30)) && (lVar16 = FUN_145a557f0(), lVar16 != 0)) &&
                       ((*(int *)(lVar16 + 0x38) <= (int)plVar12[7] &&
                        (*(longlong *)(plVar12[6] + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                         lVar16 + 0x30)))) {
                      lVar16 = plVar12[0x22];
                      if (lVar16 == 0) {
                        (**(code **)(*plVar12 + 1000))();
                        lVar16 = plVar12[0x22];
                        if (lVar16 == 0) goto LAB_14189a096;
                      }
                      uVar11 = *(undefined8 *)(lVar16 + 0x28);
                      *(longlong *)(lVar16 + 0x28) = param_1;
                      FUN_14876f694(lVar16,param_1,1);
                      *(undefined8 *)(lVar16 + 0x28) = uVar11;
                    }
                  }
LAB_14189a096:
                  plVar15 = plVar15 + 5;
                  lVar14 = lVar14 + -0x28;
                } while (lVar14 != 0);
              }
              *(undefined1 *)(param_1 + 0x1c0) = 1;
            }
            else {
              if (bVar20) {
                if ((puVar13[0x10] & 1) == 0) goto LAB_1418998f1;
                goto LAB_1418999ba;
              }
              if ((char)puVar13[0x20] != '\0') goto LAB_1418999ba;
LAB_1418998f1:
              if (*(char *)(param_1 + 0x1c0) != '\x01') goto LAB_14189959f;
              *(undefined1 *)(param_1 + 0x1c0) = 0;
            }
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
            if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
              plVar15 = *(longlong **)(param_1 + 0x20);
            }
            else {
              plVar15 = (longlong *)0x0;
            }
            *(int *)(plVar15 + 0x92) = (int)plVar15[0x92] + 1;
            (**(code **)(*plVar15 + 0x578))();
          }
        }
      }
    }
LAB_14189959f:
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      if ((puVar19[0xb4] != '\x02') && (*(char *)(param_1 + 0x508) == '\x01')) {
        *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x500);
        uVar11 = *(undefined8 *)(param_1 + 0x4f0);
        uVar23 = *(undefined8 *)(param_1 + 0x4f8);
LAB_141899939:
        *puVar1 = uVar11;
        *(undefined8 *)(param_1 + 0x4e0) = uVar23;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_178);
      }
      goto LAB_14189968d;
    }
  }
  plVar15 = (longlong *)(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    plVar15 = (longlong *)(puVar19 + 0x60);
  }
  lVar14 = *plVar15;
  if (lVar14 == 0) {
LAB_1418995d0:
    lVar14 = *(longlong *)(param_1 + 0x198);
    if (lVar14 == 0) {
      if (*(longlong *)(param_1 + 400) == 0) {
        *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_1 + 0x178);
        *puVar1 = *(undefined8 *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_1 + 0x170);
      }
      else {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x1c8);
        if (lVar16 == 0) {
          puVar17 = &DAT_14c8464e0;
          dVar22 = DAT_14c8464f0;
        }
        else {
          puVar17 = (undefined8 *)(lVar16 + 0x260);
          dVar22 = *(double *)(lVar16 + 0x270);
        }
        uVar11 = puVar17[1];
        *(undefined8 *)(param_1 + 0x4d8) = *puVar17;
        *(undefined8 *)(param_1 + 0x4e0) = uVar11;
        *(double *)(param_1 + 0x4e8) = dVar22;
      }
    }
    else {
      uVar23 = *(undefined8 *)(lVar14 + 0x268);
      uVar11 = *(undefined8 *)(lVar14 + 0x270);
      *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(lVar14 + 0x260);
      *(undefined8 *)(param_1 + 0x4e0) = uVar23;
      *(undefined8 *)(param_1 + 0x4e8) = uVar11;
    }
    if (((*(double *)(puVar19 + 0x68) != 0.0) || (NAN(*(double *)(puVar19 + 0x68)))) ||
       ((*(double *)(puVar19 + 0x70) != 0.0 ||
        (((NAN(*(double *)(puVar19 + 0x70)) || (*(double *)(puVar19 + 0x78) != 0.0)) ||
         (NAN(*(double *)(puVar19 + 0x78)))))))) {
      if (lVar14 == 0) {
        lVar14 = *(longlong *)(param_1 + 400);
        if (lVar14 != 0) {
          lVar16 = *(longlong *)(lVar14 + 0x1c8);
          if (lVar16 == 0) {
            pdVar18 = (double *)&DAT_14c8464e0;
            dVar22 = DAT_14c8464f0;
          }
          else {
            pdVar18 = (double *)(lVar16 + 0x260);
            dVar22 = *(double *)(lVar16 + 0x270);
          }
          dVar30 = *pdVar18;
          dVar2 = pdVar18[1];
          *(double *)(param_1 + 0x4d8) = dVar30;
          *(double *)(param_1 + 0x4e0) = dVar2;
          *(double *)(param_1 + 0x4e8) = dVar22;
          pdVar18 = (double *)&DAT_14c846480;
          if (*(longlong *)(lVar14 + 0x1c8) != 0) {
            pdVar18 = (double *)(*(longlong *)(lVar14 + 0x1c8) + 0x240);
          }
          dVar26 = *(double *)(puVar19 + 0x68) * pdVar18[8];
          dVar27 = *(double *)(puVar19 + 0x70) * pdVar18[9];
          dVar29 = *(double *)(puVar19 + 0x78) * pdVar18[10];
          dVar24 = *pdVar18;
          dVar25 = pdVar18[1];
          dVar28 = pdVar18[2];
          dVar3 = pdVar18[3];
          dVar7 = dVar27 * dVar24 - dVar26 * dVar25;
          dVar8 = dVar29 * dVar25 - dVar27 * dVar28;
          dVar21 = dVar26 * dVar28 - dVar24 * dVar29;
          dVar8 = dVar8 + dVar8;
          dVar21 = dVar21 + dVar21;
          dVar7 = dVar7 + dVar7;
          dVar2 = (dVar28 * dVar8 - dVar24 * dVar7) + pdVar18[3] * dVar21 + dVar27 + dVar2;
          auVar9._8_4_ = SUB84(dVar2,0);
          auVar9._0_8_ = (dVar7 * dVar25 - dVar21 * dVar28) + dVar3 * dVar8 + dVar26 + dVar30;
          auVar9._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x4d8) = auVar9;
          *(double *)(param_1 + 0x4e8) =
               dVar7 * dVar3 + dVar29 + (dVar21 * dVar24 - dVar8 * dVar25) + dVar22;
        }
      }
      else {
        dVar24 = *(double *)(puVar19 + 0x68) * *(double *)(lVar14 + 0x280);
        dVar25 = *(double *)(puVar19 + 0x70) * *(double *)(lVar14 + 0x288);
        dVar21 = *(double *)(puVar19 + 0x78) * *(double *)(lVar14 + 0x290);
        dVar3 = *(double *)(lVar14 + 0x240);
        dVar7 = *(double *)(lVar14 + 0x248);
        dVar8 = *(double *)(lVar14 + 0x250);
        dVar2 = *(double *)(lVar14 + 600);
        dVar22 = *(double *)(lVar14 + 600);
        dVar28 = dVar25 * dVar3 - dVar24 * dVar7;
        dVar29 = dVar21 * dVar7 - dVar25 * dVar8;
        dVar30 = dVar24 * dVar8 - dVar3 * dVar21;
        dVar29 = dVar29 + dVar29;
        dVar30 = dVar30 + dVar30;
        dVar28 = dVar28 + dVar28;
        *(double *)(param_1 + 0x4d8) =
             *(double *)(param_1 + 0x4d8) +
             (dVar28 * dVar7 - dVar30 * dVar8) + dVar2 * dVar29 + dVar24;
        *(double *)(param_1 + 0x4e0) =
             (dVar8 * dVar29 - dVar3 * dVar28) + dVar22 * dVar30 + dVar25 +
             *(double *)(param_1 + 0x4e0);
        *(double *)(param_1 + 0x4e8) =
             dVar28 * dVar2 + dVar21 + (dVar30 * dVar3 - dVar29 * dVar7) +
             *(double *)(param_1 + 0x4e8);
      }
    }
  }
  else {
    plVar15 = (longlong *)(param_1 + 0x648);
    if (*(longlong *)(param_1 + 0x648) == 0) {
      plVar15 = (longlong *)(param_1 + 0x198);
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 == (longlong *)0x0) {
      if (*(longlong *)(param_1 + 400) == 0) {
        *(undefined8 *)(param_1 + 0x648) = 0;
        goto LAB_1418995d0;
      }
      plVar15 = (longlong *)FUN_144a545f2(*(longlong *)(param_1 + 400),lVar14,0);
    }
    if ((plVar15 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      *(longlong **)(param_1 + 0x648) = plVar15;
      if (plVar15 == (longlong *)0x0) goto LAB_1418995d0;
    }
    else {
      FUN_1456cec3c(plVar15);
      *(longlong **)(param_1 + 0x648) = plVar15;
    }
    cVar10 = (**(code **)(*plVar15 + 0x4c8))(plVar15,lVar14);
    if (cVar10 == '\0') goto LAB_1418995d0;
    (**(code **)(**(longlong **)(param_1 + 0x648) + 0x4a8))
              (*(longlong **)(param_1 + 0x648),&local_108,lVar14,0);
    *(double *)(param_1 + 0x4d8) = local_e8;
    *(double *)(param_1 + 0x4e0) = dStack_e0;
    *(double *)(param_1 + 0x4e8) = local_d8;
    if ((((*(double *)(param_1 + 0x1a8) != 0.0) || (NAN(*(double *)(param_1 + 0x1a8)))) ||
        (*(double *)(param_1 + 0x1b0) != 0.0)) ||
       (((NAN(*(double *)(param_1 + 0x1b0)) || (*(double *)(param_1 + 0x1b8) != 0.0)) ||
        (NAN(*(double *)(param_1 + 0x1b8)))))) {
      local_c8 = *(double *)(param_1 + 0x1a8) * local_c8;
      dStack_c0 = *(double *)(param_1 + 0x1b0) * dStack_c0;
      local_b8 = *(double *)(param_1 + 0x1b8) * local_b8;
      dVar22 = dStack_c0 * (double)local_108 - local_c8 * dStack_100;
      dVar2 = local_b8 * dStack_100 - dStack_c0 * local_f8;
      dVar30 = local_c8 * local_f8 - (double)local_108 * local_b8;
      dVar2 = dVar2 + dVar2;
      dVar30 = dVar30 + dVar30;
      dVar22 = dVar22 + dVar22;
      dStack_e0 = dStack_e0 +
                  (local_f8 * dVar2 - (double)local_108 * dVar22) + dStack_f0 * dVar30 + dStack_c0;
      auVar6._8_4_ = SUB84(dStack_e0,0);
      auVar6._0_8_ = local_e8 +
                     (dVar22 * dStack_100 - dVar30 * local_f8) + dStack_f0 * dVar2 + local_c8;
      auVar6._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x4d8) = auVar6;
      *(double *)(param_1 + 0x4e8) =
           local_d8 +
           dVar22 * dStack_f0 + local_b8 + (dVar30 * (double)local_108 - dVar2 * dStack_100);
    }
  }
  *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4f0) = *puVar1;
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x4e0);
  *(undefined1 *)(param_1 + 0x508) = 1;
LAB_14189968d:
  if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189a198 FUN_14189a198 body=1443 status=ok
// SIG undefined FUN_14189a198(void)

void FUN_14189a198(longlong *param_1,float param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [104];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[0x32] != 0) {
    lVar4 = *(longlong *)(param_1[0x32] + 0x1c8);
    if (lVar4 == 0) {
      puVar3 = &DAT_14c8464e0;
      uVar16 = (undefined4)DAT_14c8464f0;
      uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar16 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
      puVar3 = (undefined8 *)(lVar4 + 0x260);
    }
    fVar6 = *(float *)(param_1[0x10] + 0x2fc);
    uVar19 = (undefined4)*puVar3;
    uVar21 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    uVar22 = (undefined4)puVar3[1];
    uVar23 = (undefined4)((ulonglong)puVar3[1] >> 0x20);
    if (((*(byte *)((longlong)param_1 + 0x104) & 0x40) != 0) &&
       (0.0 < *(float *)((longlong)param_1 + 0x32c))) {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x938), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x30))
                  (plVar1,local_f8,*(undefined4 *)((longlong)param_1 + 0x32c),param_1[0x32]);
        uVar16 = (undefined4)local_f8._48_8_;
        uVar18 = SUB84(local_f8._48_8_,4);
        uVar19 = (undefined4)local_f8._32_8_;
        uVar21 = SUB84(local_f8._32_8_,4);
        uVar22 = (undefined4)local_f8._40_8_;
        uVar23 = SUB84(local_f8._40_8_,4);
      }
    }
    dVar7 = ((double)CONCAT44(uVar18,uVar16) + (double)param_1[0x37]) - (double)param_1[0x7e];
    dVar8 = ((double)CONCAT44(uVar23,uVar22) + (double)param_1[0x36]) - (double)param_1[0x7d];
    dVar10 = ((double)CONCAT44(uVar21,uVar19) + (double)param_1[0x35]) - (double)param_1[0x7c];
    fVar5 = (float)SQRT(dVar7 * dVar7 + dVar10 * dVar10 + dVar8 * dVar8);
    if (0.0001 < fVar5) {
      dVar9 = 1.0 / (double)fVar5;
      dVar10 = dVar10 * dVar9;
      dVar8 = dVar8 * dVar9;
      dVar7 = dVar7 * dVar9;
    }
    dVar9 = (double)param_1[0x98];
    dVar11 = (double)param_1[0x99];
    if ((fVar6 != 0.0) || (NAN(fVar6))) {
      dVar12 = dVar9 * dVar9 + dVar11 * dVar11;
      dVar13 = 0.0;
      if (dVar12 <= 9.99999993922529e-09) {
        dVar12 = 0.0;
      }
      else {
        dVar12 = 1.0 / SQRT(dVar12);
        dVar9 = dVar9 * dVar12;
        dVar11 = dVar11 * dVar12;
        dVar12 = dVar12 * 0.0;
      }
      dVar2 = dVar10 * dVar10 + dVar8 * dVar8;
      dVar14 = dVar10;
      dVar15 = dVar8;
      if (9.99999993922529e-09 < dVar2) {
        dVar13 = 1.0 / SQRT(dVar2);
        dVar14 = dVar10 * dVar13;
        dVar15 = dVar8 * dVar13;
        dVar13 = dVar13 * 0.0;
      }
      dVar9 = dVar11 * dVar15 + dVar9 * dVar14 + dVar12 * dVar13;
    }
    else {
      dVar9 = (double)param_1[0x9a] * dVar7 + dVar9 * dVar10 + dVar11 * dVar8;
    }
    if (*(float *)(param_1 + 0xe1) <= (float)dVar9) {
      if ((((dVar10 != 0.0) || (NAN(dVar10))) || (dVar8 != 0.0)) || (NAN(dVar8))) {
        dVar9 = atan2(dVar8,dVar10);
        fVar5 = (float)(dVar9 * 57.29577951308232);
      }
      else {
        fVar5 = 0.0;
      }
      dVar10 = SQRT(dVar10 * dVar10 + dVar8 * dVar8);
      if (((dVar7 != 0.0) || (NAN(dVar7))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
        dVar7 = atan2(dVar7,dVar10);
        fVar17 = (float)(dVar7 * 57.29577951308232);
      }
      else {
        fVar17 = 0.0;
      }
      dVar7 = (double)param_1[0xcd];
      dVar10 = (double)param_1[0xce];
      if (((dVar7 != 0.0) || (NAN(dVar7))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
        dVar8 = atan2(dVar10,dVar7);
        dVar7 = (double)param_1[0xcd];
        dVar10 = (double)param_1[0xce];
        fVar20 = (float)(dVar8 * 57.29577951308232);
      }
      else {
        fVar20 = 0.0;
      }
      dVar8 = SQRT(dVar7 * dVar7 + dVar10 * dVar10);
      dVar7 = (double)param_1[0xcf];
      dVar10 = 0.0;
      if ((((dVar7 != 0.0) || (NAN(dVar7))) || (dVar8 != 0.0)) || (NAN(dVar8))) {
        dVar10 = atan2(dVar7,dVar8);
        dVar10 = dVar10 * 57.29577951308232;
      }
      fVar5 = (float)FUN_1407b5b68(fVar20,fVar5,(float)((double)param_1[0xdf] * (double)param_2));
      if ((fVar6 == 0.0) && (!NAN(fVar6))) {
        fVar6 = (float)FUN_1407b5b68((float)dVar10,fVar17,
                                     (float)((double)param_2 * (double)param_1[0xe0]));
        dVar10 = (double)fVar6;
      }
      dVar7 = (double)FUN_144719204(dVar10,0x4076800000000000);
      dVar10 = (double)FUN_144719204((double)fVar5,0x4076800000000000);
      dVar8 = sin(dVar7 * 0.017453292519943295);
      dVar7 = cos(dVar7 * 0.017453292519943295);
      dVar9 = sin(dVar10 * 0.017453292519943295);
      dVar10 = cos(dVar10 * 0.017453292519943295);
      dVar11 = SQRT((double)param_1[0xcf] * (double)param_1[0xcf] +
                    (double)param_1[0xcd] * (double)param_1[0xcd] +
                    (double)param_1[0xce] * (double)param_1[0xce]);
      param_1[0xcd] = (longlong)(dVar10 * dVar7 * dVar11);
      param_1[0xce] = (longlong)(dVar9 * dVar7 * dVar11);
      param_1[0xcf] = (longlong)(dVar8 * dVar11);
      goto LAB_14189a573;
    }
  }
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xfb;
LAB_14189a573:
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189a73c FUN_14189a73c body=29 status=ok
// SIG undefined FUN_14189a73c(void)

undefined8 FUN_14189a73c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189a75a FUN_14189a75a body=29 status=ok
// SIG undefined FUN_14189a75a(void)

undefined8 FUN_14189a75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189a778 FUN_14189a778 body=369 status=ok
// SIG undefined FUN_14189a778(void)

void FUN_14189a778(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14189a7fd;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14189a7fd:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 14189a8ea FUN_14189a8ea body=29 status=ok
// SIG undefined FUN_14189a8ea(void)

undefined8 FUN_14189a8ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189a908 FUN_14189a908 body=353 status=ok
// SIG undefined FUN_14189a908(void)

void FUN_14189a908(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14189a98d;
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
LAB_14189a98d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14189aa6a FUN_14189aa6a body=139 status=ok
// SIG undefined FUN_14189aa6a(void)

void FUN_14189aa6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b415280;
  puVar3 = *(undefined8 **)(param_1 + 0x358);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b415230;
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
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
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_14076ba36(param_1 + 0x60);
  return;
}



// FUNCTION 14189aaf6 FUN_14189aaf6 body=29 status=ok
// SIG undefined FUN_14189aaf6(void)

undefined8 FUN_14189aaf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189ab14 FUN_14189ab14 body=129 status=ok
// SIG undefined FUN_14189ab14(void)

undefined8 FUN_14189ab14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = param_1[2];
  local_48[0] = 0;
  if (local_58[0] != 0) {
    puVar1 = param_1 + 6;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[4];
    }
    (**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_140ed5c4e(param_2,*param_1,local_58,0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189ab96 FUN_14189ab96 body=863 status=ok
// SIG undefined FUN_14189ab96(void)

ulonglong FUN_14189ab96(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  uint local_74;
  uint *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_1447b4afa();
  uVar9 = (ulonglong)uVar4;
  iVar1 = *(int *)(param_1 + 0x490);
  local_74 = 0;
  if ((*(byte *)(param_2 + 0x30) & 0x80) == 0) {
    plVar11 = (longlong *)(param_2 + 0x1a8);
    if (*(int *)(param_2 + 0x1b0) != *(int *)(param_2 + 0x1dc)) {
      piVar6 = (int *)(param_2 + 0x1e0);
      if (*(int **)(param_2 + 0x1e8) != (int *)0x0) {
        piVar6 = *(int **)(param_2 + 0x1e8);
      }
      iVar5 = *piVar6;
      if (iVar5 != -1) {
        do {
          lVar7 = *plVar11 + (longlong)iVar5 * 0x10;
          if (*(int *)(*plVar11 + (longlong)iVar5 * 0x10) == 0) {
            if (lVar7 != 0) goto LAB_14189ac38;
            break;
          }
          iVar5 = *(int *)(lVar7 + 8);
        } while (iVar5 != -1);
      }
    }
    local_70 = &local_74;
    local_98 = 0;
    FUN_1407932ac(plVar11,&local_64,0);
    lVar7 = (longlong)local_64 * 0x10 + *plVar11;
LAB_14189ac38:
    if (*(int *)(lVar7 + 4) == iVar1) goto LAB_14189ac3c;
    *(int *)(lVar7 + 4) = iVar1;
    iVar1 = *(int *)(param_2 + 0x250);
    *(uint *)(param_2 + 0x250) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x254) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_2 + 0x248),iVar1);
    }
    *(uint *)(*(longlong *)(param_2 + 0x248) + (longlong)iVar1 * 4) = local_74;
  }
  lVar7 = FUN_1447210f0(param_1);
  if (lVar7 == 0) {
    fVar13 = -1.0;
  }
  else {
    lVar7 = FUN_1447210f0(param_1);
    fVar13 = (float)(*(double *)(lVar7 + 0x6d0) + -0.5);
  }
  if ((longlong)*(int *)(param_1 + 1000) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x3e0);
    plVar12 = plVar10 + *(int *)(param_1 + 1000);
    plVar11 = (longlong *)(param_2 + 0x1a8);
    lVar7 = param_2 + 0x1e0;
    local_80 = (longlong *)(param_2 + 0x248);
    local_88 = lVar7;
    do {
      lVar2 = *plVar10;
      if ((lVar2 != 0) &&
         ((*(char *)(lVar2 + 0x68) != '\x01' || (fVar13 < *(float *)(lVar2 + 100))))) {
        iVar1 = *(int *)(lVar2 + 0x5c);
        local_74 = *(int *)(lVar2 + 0x58) + 1;
        if ((*(byte *)(param_2 + 0x30) & 0x80) == 0) {
          if (*(int *)(param_2 + 0x1b0) != *(int *)(param_2 + 0x1dc)) {
            lVar8 = *(longlong *)(param_2 + 0x1e8);
            if (*(longlong *)(param_2 + 0x1e8) == 0) {
              lVar8 = lVar7;
            }
            iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_2 + 0x1f0) - 1U & local_74) * 4);
            if (iVar5 != -1) {
              do {
                lVar8 = *plVar11 + (longlong)iVar5 * 0x10;
                if (*(uint *)(*plVar11 + (longlong)iVar5 * 0x10) == local_74) {
                  if (lVar8 != 0) goto LAB_14189ae08;
                  break;
                }
                iVar5 = *(int *)(lVar8 + 8);
              } while (iVar5 != -1);
            }
          }
          local_70 = &local_74;
          local_98 = 0;
          local_90 = plVar11;
          FUN_1407932ac(plVar11,&local_64,local_74,&local_70);
          lVar8 = (longlong)local_64 * 0x10 + *local_90;
          plVar11 = local_90;
          lVar7 = local_88;
LAB_14189ae08:
          if (*(int *)(lVar8 + 4) == iVar1) goto LAB_14189ad7e;
          *(int *)(lVar8 + 4) = iVar1;
          iVar1 = *(int *)(param_2 + 0x250);
          *(uint *)(param_2 + 0x250) = iVar1 + 1U;
          if (*(uint *)(param_2 + 0x254) < iVar1 + 1U) {
            local_90 = plVar11;
            FUN_1446f48e2(local_80,iVar1);
            plVar11 = local_90;
          }
          *(uint *)(*local_80 + (longlong)iVar1 * 4) = local_74;
        }
        if (((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
          bVar3 = FUN_14009cd08(param_2,lVar2,param_3,*param_4);
        }
        else {
          bVar3 = 0;
        }
        uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 | bVar3);
        lVar7 = local_88;
      }
LAB_14189ad7e:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar12);
  }
LAB_14189ac3c:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 14189aef6 FUN_14189aef6 body=262 status=ok
// SIG undefined FUN_14189aef6(void)

void FUN_14189aef6(longlong param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_140c8307c();
  if (param_2 != 0) {
    lVar3 = FUN_140f1e398();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 1000);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x3e0);
        uVar4 = 0;
        bVar2 = DAT_14c950c29;
        do {
          if ((bVar2 & 1) != 0) {
            FUN_1456cec3c(param_2);
            bVar2 = DAT_14c950c29;
          }
          if (*(longlong *)(lVar3 + uVar4) == param_2) {
            if ((int)(~uVar4 >> 3) != 0) {
              return;
            }
            break;
          }
          uVar4 = uVar4 + 8;
        } while ((longlong)iVar1 * 8 != uVar4);
      }
      iVar1 = *(int *)(param_1 + 1000);
      *(uint *)(param_1 + 1000) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x3ec) < iVar1 + 1U) {
        FUN_14575354e((longlong *)(param_1 + 0x3e0),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14189b054 FUN_14189b054 body=669 status=ok
// SIG undefined FUN_14189b054(void)

undefined8 * FUN_14189b054(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined **local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 *local_d8;
  longlong *local_c8;
  longlong local_b8 [4];
  undefined1 *local_98;
  longlong *local_88 [2];
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = *param_3;
  if ((local_128 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_120 = (undefined1)param_3[1];
  local_118 = param_3[2];
  local_110 = (undefined4)param_3[3];
  local_108 = 0;
  local_100 = param_3[5];
  local_f8 = (undefined **)&DAT_14a171d50;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = param_3[7];
  FUN_1406022fe(&local_e8,param_3 + 8);
  local_f8 = &PTR_FUN_14b0394b0;
  local_d8 = (undefined1 *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x58,8);
  *plVar2 = (longlong)&PTR_FUN_14b4165f0;
  plVar2[1] = local_128;
  local_c8 = plVar2;
  if ((local_128 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(plVar2 + 2) = local_120;
  plVar2[3] = local_118;
  *(undefined4 *)(plVar2 + 4) = local_110;
  plVar2[5] = 0;
  plVar2[6] = local_100;
  plVar2[7] = (longlong)&DAT_14a171d50;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[8] = local_f0;
  FUN_1406022fe(plVar2 + 9,&local_e8);
  plVar2[7] = (longlong)&PTR_FUN_14b0394b0;
  if (plVar2 == (longlong *)&DAT_fffffffffffffff8) {
    local_98 = (undefined1 *)0x0;
    local_88[0] = (longlong *)0x0;
    *param_2 = param_1;
    param_2[2] = 0;
    param_2[4] = 0;
  }
  else {
    local_d8 = &LAB_143ddd796;
    local_98 = &LAB_143ddd796;
    local_88[0] = (longlong *)0x0;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = local_b8;
    }
    (**(code **)*plVar2)(plVar2,local_88);
    *param_2 = param_1;
    param_2[2] = local_98;
    param_2[4] = 0;
    if (local_98 != (undefined1 *)0x0) {
      plVar2 = local_88[0];
      if (local_88[0] == (longlong *)0x0) {
        plVar2 = local_78;
      }
      (**(code **)*plVar2)(plVar2,param_2 + 4);
      if (local_98 != (undefined1 *)0x0) {
        plVar2 = local_78;
        if (local_88[0] != (longlong *)0x0) {
          plVar2 = local_88[0];
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_d8 != (undefined1 *)0x0) {
    plVar2 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar2 = local_b8;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  local_f8 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_e8,0);
  }
  local_f0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189b2f2 FUN_14189b2f2 body=310 status=ok
// SIG undefined FUN_14189b2f2(void)

longlong * FUN_14189b2f2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb85c60;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189b42a FUN_14189b42a body=306 status=ok
// SIG undefined FUN_14189b42a(void)

ulonglong FUN_14189b42a(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4
                       )

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_4c8 [32];
  undefined1 local_4a8 [4];
  float local_4a4;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  double local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  double local_458;
  undefined1 local_410 [272];
  byte local_300;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  byte local_1a0;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if ((*(longlong *)(param_1 + 0x1f08) == 0) ||
     (*(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0x1f08)) == 0)) {
    uVar2 = 0;
  }
  else {
    memset(local_4a8,0,0x98);
    FUN_140e6f50a(local_410);
    local_40 = 0;
    FUN_140397346(param_1 + 0x1f08,local_4a8);
    local_470 = (double)param_2[2];
    local_480 = *param_2;
    uStack_478 = param_2[1];
    local_458 = local_470 - (double)local_4a4;
    local_498 = *param_3;
    uStack_494 = param_3[1];
    uStack_490 = param_3[2];
    uStack_48c = param_3[3];
    local_488 = *(undefined8 *)(param_3 + 4);
    local_40 = 1;
    local_468 = local_480;
    uStack_460 = uStack_478;
    uVar1 = FUN_140692004(local_4a8,local_410);
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_1a0 | local_300);
    if (((local_1a0 | local_300) & 1) != 0) {
      *(undefined8 *)(param_4 + 4) = local_2d0;
      *param_4 = local_2e0;
      param_4[1] = uStack_2dc;
      param_4[2] = uStack_2d8;
      param_4[3] = uStack_2d4;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189b55e FUN_14189b55e body=897 status=ok
// SIG undefined FUN_14189b55e(void)

ulonglong FUN_14189b55e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_138 [144];
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar8 = FUN_14069294b();
  lVar10 = *(longlong *)(*param_1 + 0xb0);
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6();
  }
  fVar11 = (float)*(double *)(lVar10 + 0x6d0) - *(float *)((longlong)param_1 + 0x80c);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(float *)(lVar8 + 0x34) <= fVar11 && fVar11 != *(float *)(lVar8 + 0x34)) goto LAB_14189b5f5;
  if ((*(byte *)(param_1 + 2) & 2) == 0) {
LAB_14189b83b:
    uVar9 = 0;
  }
  else {
    memset(local_138,0,0x98);
    FUN_140397346(param_1,local_138);
    if (((*(byte *)(param_1 + 2) & 2) != 0) && (lVar10 = param_1[1], lVar10 != 0)) {
      iVar5 = (int)param_1[3];
      if ((-1 < (longlong)iVar5) &&
         ((iVar5 < *(int *)(lVar10 + 0x20) &&
          (lVar10 = (longlong)iVar5 * 0x40 + *(longlong *)(lVar10 + 0x18), lVar10 != 0)))) {
        cVar7 = FUN_140692f68(local_138,param_1 + 0x84,lVar10,0);
        if (cVar7 != '\0') {
          if ((*(byte *)(lVar10 + 0x3c) & 1) == 0) {
            dVar3 = (double)param_1[0x85];
            dVar4 = (double)param_1[0x86];
            dVar12 = dVar3 * dVar3 + dVar4 * dVar4;
            if ((dVar12 != 1.0) || (NAN(dVar12))) {
              if (dVar12 < 9.99999993922529e-09) {
                uVar16 = (undefined4)DAT_14c8464f0;
                uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                dVar4 = DAT_14c8464e8;
                dVar3 = DAT_14c8464e0;
              }
              else {
                uVar16 = 0;
                uVar17 = 0;
                dVar4 = dVar4 * (1.0 / SQRT(dVar12));
                dVar3 = dVar3 * (1.0 / SQRT(dVar12));
              }
            }
            else {
              uVar6 = -(ulonglong)((double)param_1[0x87] == 0.0) & param_1[0x87];
              uVar16 = (undefined4)uVar6;
              uVar17 = (undefined4)(uVar6 >> 0x20);
            }
            (**(code **)(**(longlong **)(*param_1 + 0x1f0) + 0x710))
                      (*(longlong **)(*param_1 + 0x1f0),&local_150);
            local_150 = 0;
            dVar12 = (double)FUN_144719204(0,0x4076800000000000);
            dVar13 = (double)FUN_144719204(local_148,0x4076800000000000);
            dVar14 = sin(dVar12 * 0.017453292519943295);
            dVar12 = cos(dVar12 * 0.017453292519943295);
            dVar15 = sin(dVar13 * 0.017453292519943295);
            dVar13 = cos(dVar13 * 0.017453292519943295);
            fVar11 = cosf(*(float *)(lVar8 + 0x30) * 0.017453292);
            if ((float)(dVar14 * (double)CONCAT44(uVar17,uVar16) +
                       dVar13 * dVar12 * dVar3 + dVar15 * dVar12 * dVar4) < fVar11)
            goto LAB_14189b85f;
          }
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar2 = (int *)((longlong)local_a8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_a8 + 0x10))(local_a8);
              }
            }
          }
          goto LAB_14189b83b;
        }
      }
    }
LAB_14189b85f:
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a8 + 0x10))(local_a8);
        }
      }
    }
  }
LAB_14189b5f5:
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189b8e0 FUN_14189b8e0 body=458 status=ok
// SIG undefined FUN_14189b8e0(void)

void FUN_14189b8e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 0x88) != 0)) {
    lVar6 = FUN_140791f3e();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (plVar8 = param_1,
       *(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)) {
      plVar8 = (longlong *)0x0;
    }
    if ((longlong)*(int *)(param_2 + 0x88) != 0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
      lVar6 = (longlong)*(int *)(param_2 + 0x88) * 0x90;
      do {
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          cVar5 = (char)plVar9[4];
          if (cVar5 == '\x01') {
LAB_14189b986:
            if (plVar8 != (longlong *)0x0) {
              cVar5 = (**(code **)(*plVar8 + 0xb58))(plVar8,lVar3,local_50);
              if (cVar5 == '\0') goto LAB_14189b9fd;
              cVar5 = (char)plVar9[4];
            }
            plVar1 = (longlong *)((longlong)plVar9 + 0x24);
            plVar4 = plVar9 + 5;
            plVar2 = (longlong *)((longlong)plVar9 + 0x2c);
            plVar7 = plVar9 + 6;
            if (cVar5 != '\x01') {
              plVar7 = (longlong *)((longlong)plVar9 + 0x4c);
              plVar2 = plVar9 + 9;
              plVar4 = (longlong *)((longlong)plVar9 + 0x44);
              plVar1 = plVar9 + 8;
            }
            local_60 = (undefined4)*plVar1;
            local_5c = (undefined4)*plVar4;
            local_58 = (undefined4)*plVar2;
            local_54 = (undefined4)*plVar7;
            (**(code **)(*param_1 + 0xa18))(param_1,lVar3,&local_60);
          }
          else if (cVar5 == '\x02') {
            if ((plVar8 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar8 + 0xb40))(plVar8,lVar3,local_50), cVar5 != '\0')) {
              (**(code **)(*param_1 + 0xa08))
                        (param_1,lVar3,*(undefined4 *)((longlong)plVar9 + 0x34));
            }
          }
          else if (cVar5 == '\x03') goto LAB_14189b986;
        }
LAB_14189b9fd:
        plVar9 = plVar9 + 0x12;
        lVar6 = lVar6 + -0x90;
      } while (lVar6 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189baac FUN_14189baac body=375 status=ok
// SIG undefined FUN_14189baac(void)

void FUN_14189baac(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    iVar6 = *(int *)(puVar4 + 1);
    do {
      if (iVar6 == 0) goto LAB_14189bad9;
      LOCK();
      iVar3 = *(int *)(puVar4 + 1);
      bVar10 = iVar6 == iVar3;
      if (bVar10) {
        *(int *)(puVar4 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar10);
    if ((param_1 != 0) && (puVar5 = (undefined1 *)*param_2, puVar5 != (undefined1 *)0x0)) {
      lVar7 = FUN_14081cebe();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
        lVar7 = *(longlong *)(param_1 + 0xb0);
        if (lVar7 == 0) {
          lVar7 = FUN_1448abda6(param_1);
        }
        FUN_141222b64(&local_40,lVar7);
        if (local_40 != 0) {
          lVar7 = *(longlong *)(param_1 + 0xa8);
          lVar8 = FUN_14479d2ce(puVar5 + 8);
          if (lVar8 != 0) {
            lVar9 = FUN_144a6c4d8();
            if ((((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) && (lVar7 != 0)) &&
               (lVar7 != lVar8)) {
              local_48 = puVar5 + 0x20;
              FUN_14122315c(local_40,lVar7,*puVar5,puVar5 + 0x48);
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_38 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)local_38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
    }
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_14189bad9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189bc40 FUN_14189bc40 body=608 status=ok
// SIG undefined FUN_14189bc40(void)

bool FUN_14189bc40(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar6 = false;
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) goto LAB_14189bcfa;
  if (DAT_14cb223d8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1427b09ee;
    local_58 = &LAB_147f29feb;
    local_60 = FUN_1464384fe;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10004001;
    local_80 = 8;
    local_88 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14cb223d8);
  if (plVar3 == (longlong *)0x0) {
LAB_14189bd21:
    bVar6 = false;
  }
  else {
    if (DAT_14cb223d8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f29feb;
      local_60 = FUN_1464384fe;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb223d8);
    bVar6 = false;
    if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (lVar5 == 0) goto LAB_14189bd21;
      iVar2 = FUN_14486116a(lVar5,param_2);
      bVar6 = param_2 != param_3 && iVar2 != 0;
    }
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    lVar5 = FUN_144a78b9e();
    if (*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6 & *(longlong *)
                       (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30;
    }
    bVar1 = FUN_14881eea6(param_2);
    bVar6 = (bool)((bVar1 ^ 1) & bVar7);
  }
LAB_14189bcfa:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189bea2 FUN_14189bea2 body=272 status=ok
// SIG undefined FUN_14189bea2(void)

void FUN_14189bea2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14189bfb2 FUN_14189bfb2 body=29 status=ok
// SIG undefined FUN_14189bfb2(void)

undefined8 FUN_14189bfb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189bfd0 FUN_14189bfd0 body=29 status=ok
// SIG undefined FUN_14189bfd0(void)

undefined8 FUN_14189bfd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189bfee FUN_14189bfee body=269 status=ok
// SIG undefined FUN_14189bfee(void)

void FUN_14189bfee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14189c0fc FUN_14189c0fc body=1189 status=ok
// SIG undefined FUN_14189c0fc(void)

undefined8 * FUN_14189c0fc(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auStack_128 [36];
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_f8 = 0;
    uVar11 = 0;
    local_fc = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar6 = 0;
    iVar10 = 0;
    local_100 = 0;
    local_104 = 0;
LAB_14189c249:
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    *param_2 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    FUN_144928b90(local_d0,1);
    if (iVar10 == 0) {
      uStack_90 = DAT_14cb7bba0;
      local_98 = (undefined2)DAT_14cb7bb98;
      uStack_96 = (undefined2)((ulonglong)DAT_14cb7bb98 >> 0x10);
      uStack_94 = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
    }
    else {
      local_98 = (undefined2)iVar10;
      uStack_96 = (undefined2)((uint)iVar10 >> 0x10);
      uStack_94 = local_100;
      uStack_90 = local_104;
    }
    FUN_144928d62(local_c0,1,&local_98);
    local_dc = local_fc;
    local_d4 = local_f8;
    local_d8 = uVar11;
    FUN_14013eb2c(local_d0);
    local_e8 = uVar6;
    local_e4 = uVar9;
    local_e0 = uVar8;
    FUN_14013eb54(local_d0);
    local_f4 = *(int *)(param_1 + 0x24);
    local_f0 = *(undefined4 *)(param_1 + 0x28);
    puVar2 = param_3 + 3;
    if (local_f4 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x2c);
    }
    if (*(int *)(param_3 + 2) == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x2c);
    }
    local_ec = *(undefined4 *)puVar2;
    FUN_144928d62(local_c0,4);
    if (DAT_14c9a85d0 != (code *)0x0) {
      (*DAT_14c9a85d0)(param_2 + 2);
      if (0x18 < *(ushort *)(param_2 + 5)) {
        FUN_1400020a8(param_2[2]);
      }
    }
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_98 = local_d0._0_2_;
    uStack_96 = local_d0._2_2_;
    uStack_94 = local_d0._4_4_;
    uStack_90 = local_c8;
    FUN_1447715ec(&local_88,local_c0);
    *(undefined2 *)(param_2 + 5) = 0x38;
    puVar2 = (undefined8 *)FUN_14001cc68(0x38,0);
    param_2[2] = puVar2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 1) = uStack_90;
    *puVar2 = CONCAT44(uStack_94,CONCAT22(uStack_96,local_98));
    FUN_1447715ec(puVar2 + 2,&local_88);
    *(undefined1 *)(param_2 + 6) = 0x1f;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      piVar3 = (int *)*param_3;
      lVar7 = (longlong)*(int *)(param_3 + 1) * 0x48;
      do {
        if ((*piVar3 == *(int *)(param_1 + 0x18)) && (piVar3[2] == *(int *)(param_1 + 0x20))) {
          if (piVar3 != (int *)0x0) {
            FUN_14096c63a(piVar3 + 4,&local_98);
            cVar1 = FUN_1401144ce(&local_98);
            if (cVar1 == '\0') goto LAB_14189c4bf;
            iVar10 = (int)DAT_14c948618;
            uVar11 = DAT_14c948618._4_4_;
            if ((((int)local_88 == 0) || (local_88._4_4_ == 0)) || ((int)local_88 == DAT_14c948000))
            {
              puVar2 = &DAT_14c948618;
              puVar5 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
              puVar4 = &DAT_14c948620;
              local_fc = (int)DAT_14c948618;
              local_100 = DAT_14c948618._4_4_;
              local_f8 = DAT_14c948620;
              local_104 = DAT_14c948620;
            }
            else {
              local_104 = DAT_14c948620;
              local_100 = DAT_14c948618._4_4_;
              if (1 < (int)local_88._4_4_) {
                iVar10 = *(int *)(local_70 + 0xc);
                local_100 = *(undefined4 *)(local_70 + 0x10);
                local_104 = *(undefined4 *)(local_70 + 0x14);
                if (local_88._4_4_ != 2) {
                  local_f8 = *(undefined4 *)(local_70 + 0x20);
                  local_fc = *(int *)(local_70 + 0x18);
                  uVar11 = *(undefined4 *)(local_70 + 0x1c);
                  if (local_88._4_4_ < 4) {
                    puVar2 = &DAT_14c948618;
                    puVar5 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
                    puVar4 = &DAT_14c948620;
                  }
                  else {
                    puVar2 = (undefined8 *)(local_70 + 0x24);
                    puVar5 = (undefined4 *)(local_70 + 0x28);
                    puVar4 = (undefined4 *)(local_70 + 0x2c);
                  }
                  goto LAB_14189c230;
                }
              }
              local_f8 = DAT_14c948620;
              puVar2 = &DAT_14c948618;
              puVar4 = &DAT_14c948620;
              puVar5 = (undefined4 *)((longlong)&DAT_14c948618 + 4);
              local_fc = (int)DAT_14c948618;
            }
LAB_14189c230:
            uVar6 = *(undefined4 *)puVar2;
            uVar9 = *puVar5;
            uVar8 = *puVar4;
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            goto LAB_14189c249;
          }
          break;
        }
        piVar3 = piVar3 + 0x12;
        lVar7 = lVar7 + -0x48;
      } while (lVar7 != 0);
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
LAB_14189c4bf:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    local_a8 = local_70;
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14189c5a2 FUN_14189c5a2 body=70 status=ok
// SIG undefined FUN_14189c5a2(void)

undefined8 * FUN_14189c5a2(longlong param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x80);
  FUN_1447715ec(param_2 + 2,param_1 + 0x88);
  return param_2;
}



// FUNCTION 14189c5e8 FUN_14189c5e8 body=65 status=ok
// SIG undefined FUN_14189c5e8(void)

undefined8 * FUN_14189c5e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_144928d62(0,0,param_2);
  FUN_144928d62(param_1,1,param_3);
  return param_1;
}



// FUNCTION 14189c62a FUN_14189c62a body=189 status=ok
// SIG undefined FUN_14189c62a(void)

undefined8 FUN_14189c62a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x54) != 0) && (uVar1 = *(uint *)(param_1 + 0x50), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1))
         && ((((int)uVar1 < DAT_14c9647dc &&
              (((plVar3 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x5c))) &&
               ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) &&
             ((longlong *)*plVar3 != (longlong *)0x0)))) {
        lVar4 = (**(code **)(*(longlong *)*plVar3 + 0x2b0))();
        if (lVar4 != 0) {
          uVar2 = FUN_1401499e8(lVar4);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14189c6e8 FUN_14189c6e8 body=481 status=ok
// SIG undefined FUN_14189c6e8(void)

longlong FUN_14189c6e8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68 [3];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *param_2;
  local_70 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_68);
  lVar3 = FUN_14060eaf6(local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (lVar3 != 0) {
    if ((*(longlong *)(lVar3 + 0x4d8) == 0 & *(byte *)(lVar3 + 0x750)) == 1) {
      local_80 = DAT_14cb88800;
      local_88 = DAT_14cb887f8;
    }
    else {
      local_68[0] = *(longlong *)(lVar3 + 0x4d8);
      FUN_1401533ba(&local_88,local_68,1);
    }
    lVar3 = FUN_140f16de6(param_1,&local_88);
    if (lVar3 != 0) {
      lVar4 = (**(code **)(*param_1 + 8))(param_1,param_2);
      if (lVar4 == 0) {
        local_90 = *(undefined4 *)(param_2 + 1);
        local_98 = *param_2;
        lVar3 = FUN_140f15de8(param_1,&local_98,lVar3,param_3);
        if (lVar3 != 0) {
          local_68[0] = 0;
          local_68[1] = 0;
          FUN_140f42bec(lVar3,0,0,local_68);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          lVar4 = param_1[0x38];
          *(undefined1 *)(param_1 + 0x38) = 1;
          FUN_140f5499c(lVar3);
          FUN_140f55216(lVar3);
          *(char *)(param_1 + 0x38) = (char)lVar4;
          uVar1 = *(undefined1 *)((longlong)param_1 + 0x1c1);
          *(undefined1 *)((longlong)param_1 + 0x1c1) = 1;
          FUN_140f54a3a(lVar3);
          *(undefined1 *)((longlong)param_1 + 0x1c1) = uVar1;
          lVar4 = FUN_140f42f34(lVar3);
          if (lVar4 != 0) {
            cVar2 = FUN_1405f61f4(lVar4);
            if (cVar2 != '\0') goto LAB_14189c86a;
          }
          FUN_140f13ae4(lVar3,1,1);
          goto LAB_14189c86a;
        }
      }
    }
  }
  lVar3 = 0;
LAB_14189c86a:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189c8ca FUN_14189c8ca body=99 status=ok
// SIG undefined FUN_14189c8ca(void)

undefined8 * FUN_14189c8ca(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_140114204(param_2 + 7);
  if (cVar1 == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    FUN_1447715ec(param_1 + 2,param_2 + 2);
  }
  else {
    FUN_140c258c2(param_2 + 7,param_1);
  }
  return param_1;
}



// FUNCTION 14189c938 FUN_14189c938 body=29 status=ok
// SIG undefined FUN_14189c938(void)

undefined8 FUN_14189c938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189c956 FUN_14189c956 body=118 status=ok
// SIG undefined FUN_14189c956(void)

void FUN_14189c956(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b418ec0;
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



// FUNCTION 14189c9cc FUN_14189c9cc body=29 status=ok
// SIG undefined FUN_14189c9cc(void)

undefined8 FUN_14189c9cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189c9ea FUN_14189c9ea body=46 status=ok
// SIG undefined FUN_14189c9ea(void)

void FUN_14189c9ea(longlong param_1)

{
  FUN_140ec3a0d(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189ca18 FUN_14189ca18 body=29 status=ok
// SIG undefined FUN_14189ca18(void)

undefined8 FUN_14189ca18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189ca36 FUN_14189ca36 body=118 status=ok
// SIG undefined FUN_14189ca36(void)

void FUN_14189ca36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4193a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14189caac FUN_14189caac body=29 status=ok
// SIG undefined FUN_14189caac(void)

undefined8 FUN_14189caac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189caca FUN_14189caca body=29 status=ok
// SIG undefined FUN_14189caca(void)

undefined8 FUN_14189caca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189cae8 FUN_14189cae8 body=29 status=ok
// SIG undefined FUN_14189cae8(void)

undefined8 FUN_14189cae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189cb06 FUN_14189cb06 body=29 status=ok
// SIG undefined FUN_14189cb06(void)

undefined8 FUN_14189cb06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189cb24 FUN_14189cb24 body=108 status=ok
// SIG undefined FUN_14189cb24(void)

int FUN_14189cb24(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14493b798(lVar3 + (longlong)iVar4 * 0x58,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x50 + (longlong)iVar4 * 0x58);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14189cb90 FUN_14189cb90 body=280 status=ok
// SIG undefined FUN_14189cb90(void)

longlong * FUN_14189cb90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x550) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x568);
    if (*(longlong **)(param_1 + 0x568) == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_140e045c8(*(undefined8 *)(param_1 + 0x558));
      *(longlong **)(param_1 + 0x568) = plVar3;
    }
    goto LAB_14189cbd0;
  }
  FUN_140f4ea62(param_1 + 0x550,&local_30,param_2,param_3);
  if (local_20 == (longlong *)0x0) {
    if ((((local_30 != 0) && (local_28 != 0)) &&
        (plVar3 = *(longlong **)(local_28 + 0xb8), plVar3 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 != '\0')) {
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      local_20 = (longlong *)FUN_144aff482(uVar6,&local_30);
      if (local_20 != (longlong *)0x0) goto LAB_14189cc14;
    }
  }
  else {
LAB_14189cc14:
    plVar1 = local_20;
    lVar4 = (**(code **)(*local_20 + 8))(local_20);
    lVar5 = FUN_1405e2e10();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar3 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar3 = plVar1;
      }
      goto LAB_14189cbd0;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_14189cbd0:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14189ccaa FUN_14189ccaa body=222 status=ok
// SIG undefined FUN_14189ccaa(void)

void FUN_14189ccaa(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar2 = FUN_140114204(param_1 + 0x50);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x88) != 0)) {
    if ((*(int *)(param_1 + 0x1c) != 0) &&
       ((uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 != (longlong *)0x0) &&
         ((((int)plVar4[2] == *(int *)(param_1 + 0x1c) &&
           ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar4 != (longlong *)0x0))
         )) {
        lVar3 = (**(code **)(*(longlong *)*plVar4 + 0x2b0))();
        if (lVar3 != 0) {
          FUN_140825b72(param_1 + 0x50,*(undefined8 *)(param_1 + 0x88),lVar3,0);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_1446dda88(param_1 + 0x78,0);
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14189cd88 FUN_14189cd88 body=332 status=ok
// SIG undefined FUN_14189cd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14189cd88(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b41aae0;
  plVar1 = plVar3 + 2;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 2;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b351ec0;
  *(undefined1 *)((longlong)plVar3 + 0x61) = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *(undefined4 *)(plVar3 + 0x10) = 0;
  plVar3[0x13] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  if (plVar3 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar4 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_14189ceb3:
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *plVar5 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_14189ce3d;
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar3[3] = (longlong)plVar1;
    if ((longlong *)plVar3[4] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar5 = plVar3 + 4;
        plVar4 = (longlong *)plVar3[4];
        goto LAB_14189ceb3;
      }
      plVar3[4] = (longlong)plVar3;
    }
LAB_14189ce3d:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 14189ced4 FUN_14189ced4 body=248 status=ok
// SIG undefined FUN_14189ced4(void)

void FUN_14189ced4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)(param_3 + 0x10);
  if (*(byte *)(param_3 + 0x30) == 0x1d) {
    lVar3 = *(longlong *)(param_1 + 8);
    if (*plVar1 != lVar3) {
      *(undefined8 *)(param_3 + 0x20) = 0;
    }
    *(longlong *)(param_3 + 0x10) = lVar3;
    if (*(longlong *)(param_3 + 0x18) != *(longlong *)(param_1 + 0x10)) {
      *(undefined8 *)(param_3 + 0x20) = 0;
    }
    uVar6 = FUN_14477b664();
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(param_3 + 0x18) = uVar6;
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_3 + 0x30) * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar7 = plVar1;
      if (0x18 < *(ushort *)(param_3 + 0x28)) {
        plVar7 = *(longlong **)(param_3 + 0x10);
      }
      (*pcVar2)(plVar7);
    }
    if (0x18 < *(ushort *)(param_3 + 0x28)) {
      FUN_1400020a8(*plVar1);
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_14477b664(*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_14477b664(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined2 *)(param_3 + 0x28) = 0x18;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
    uVar6 = FUN_14477b664(uVar5);
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(param_3 + 0x18) = uVar6;
    *(undefined8 *)(param_3 + 0x20) = uVar4;
    *(undefined1 *)(param_3 + 0x30) = 0x1d;
  }
  return;
}



// FUNCTION 14189cfe8 FUN_14189cfe8 body=33 status=ok
// SIG undefined FUN_14189cfe8(void)

undefined8 FUN_14189cfe8(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 != 0) {
    uVar2 = FUN_1405f61f4(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14189d00a FUN_14189d00a body=111 status=ok
// SIG undefined FUN_14189d00a(void)

undefined8 FUN_14189d00a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  plVar1 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  if ((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1), lVar2 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 200);
    if (lVar2 == 0) {
      piVar3 = &DAT_14c948620;
      piVar4 = (int *)&DAT_14c948618;
    }
    else {
      piVar4 = (int *)(lVar2 + 8);
      piVar3 = (int *)(lVar2 + 0x10);
    }
    if (((*piVar4 != 0) && (*piVar4 == *(int *)(param_1 + 0x90))) &&
       (*piVar3 == *(int *)(param_1 + 0x98))) {
      return CONCAT71((int7)((ulonglong)piVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14189d07a FUN_14189d07a body=42 status=ok
// SIG undefined FUN_14189d07a(void)

undefined8 FUN_14189d07a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f42f34();
  if (lVar1 != 0) {
    uVar2 = FUN_140ca9be8(lVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14189d0a4 FUN_14189d0a4 body=91 status=ok
// SIG undefined FUN_14189d0a4(void)

void FUN_14189d0a4(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1401bd880();
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30) {
        lVar2 = param_2;
      }
      goto LAB_14189d0e4;
    }
  }
  lVar2 = 0;
LAB_14189d0e4:
  FUN_140005f6c(param_1,lVar2,param_3,param_4);
  return;
}



// FUNCTION 14189d100 FUN_14189d100 body=131 status=ok
// SIG undefined FUN_14189d100(void)

void FUN_14189d100(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  for (lVar2 = *(longlong *)(param_1 + 0x98); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x98)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_140f54fb6(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  for (lVar2 = *(longlong *)(param_1 + 0xa0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0xa0)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_140f54fb6(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 14189d184 FUN_14189d184 body=40 status=ok
// SIG undefined FUN_14189d184(void)

void FUN_14189d184(longlong param_1)

{
  FUN_140d82b92(*(undefined8 *)(param_1 + 8),param_1);
  FUN_1447f69b6(param_1 + 0x180);
  return;
}



// FUNCTION 14189d1ac FUN_14189d1ac body=92 status=ok
// SIG undefined FUN_14189d1ac(void)

undefined8 FUN_14189d1ac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  lVar1 = FUN_140f42f34(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140ca9be8(lVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189d20a FUN_14189d20a body=29 status=ok
// SIG undefined FUN_14189d20a(void)

undefined8 FUN_14189d20a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d227 FUN_14189d227 body=45 status=ok
// SIG undefined FUN_14189d227(void)

void FUN_14189d227(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14189d254 FUN_14189d254 body=40 status=ok
// SIG undefined FUN_14189d254(void)

void FUN_14189d254(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140f7620c(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 14189d27c FUN_14189d27c body=118 status=ok
// SIG undefined FUN_14189d27c(void)

void FUN_14189d27c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41aa70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14189d2f2 FUN_14189d2f2 body=151 status=ok
// SIG undefined FUN_14189d2f2(void)

void FUN_14189d2f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351ec0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351f30;
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014189d385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14189d38a FUN_14189d38a body=29 status=ok
// SIG undefined FUN_14189d38a(void)

undefined8 FUN_14189d38a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d3a8 FUN_14189d3a8 body=29 status=ok
// SIG undefined FUN_14189d3a8(void)

undefined8 FUN_14189d3a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d3c6 FUN_14189d3c6 body=29 status=ok
// SIG undefined FUN_14189d3c6(void)

undefined8 FUN_14189d3c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d3e4 FUN_14189d3e4 body=68 status=ok
// SIG undefined FUN_14189d3e4(void)

undefined8 * FUN_14189d3e4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41b210;
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



// FUNCTION 14189d428 FUN_14189d428 body=118 status=ok
// SIG undefined FUN_14189d428(void)

void FUN_14189d428(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41b210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14189d49e FUN_14189d49e body=57 status=ok
// SIG undefined FUN_14189d49e(void)

void FUN_14189d49e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189d4d8 FUN_14189d4d8 body=29 status=ok
// SIG undefined FUN_14189d4d8(void)

undefined8 FUN_14189d4d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d4f6 FUN_14189d4f6 body=128 status=ok
// SIG undefined FUN_14189d4f6(void)

void FUN_14189d4f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b00bf40;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189d576 FUN_14189d576 body=29 status=ok
// SIG undefined FUN_14189d576(void)

undefined8 FUN_14189d576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d594 FUN_14189d594 body=29 status=ok
// SIG undefined FUN_14189d594(void)

undefined8 FUN_14189d594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d5b2 FUN_14189d5b2 body=111 status=ok
// SIG undefined FUN_14189d5b2(void)

void FUN_14189d5b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14affe3c0;
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afff080;
  FUN_1403d9eef(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14189d622 FUN_14189d622 body=29 status=ok
// SIG undefined FUN_14189d622(void)

undefined8 FUN_14189d622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d640 FUN_14189d640 body=29 status=ok
// SIG undefined FUN_14189d640(void)

undefined8 FUN_14189d640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d65e FUN_14189d65e body=29 status=ok
// SIG undefined FUN_14189d65e(void)

undefined8 FUN_14189d65e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d67c FUN_14189d67c body=29 status=ok
// SIG undefined FUN_14189d67c(void)

undefined8 FUN_14189d67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d69a FUN_14189d69a body=269 status=ok
// SIG undefined FUN_14189d69a(void)

void FUN_14189d69a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14189d7a8 FUN_14189d7a8 body=142 status=ok
// SIG undefined FUN_14189d7a8(void)

void FUN_14189d7a8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14189d836 FUN_14189d836 body=29 status=ok
// SIG undefined FUN_14189d836(void)

undefined8 FUN_14189d836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d854 FUN_14189d854 body=29 status=ok
// SIG undefined FUN_14189d854(void)

undefined8 FUN_14189d854(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d872 FUN_14189d872 body=29 status=ok
// SIG undefined FUN_14189d872(void)

undefined8 FUN_14189d872(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14189d890 FUN_14189d890 body=269 status=ok
// SIG undefined FUN_14189d890(void)

void FUN_14189d890(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14189d99e FUN_14189d99e body=324 status=ok
// SIG undefined FUN_14189d99e(void)

void FUN_14189d99e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x175) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14189da06;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14189da06:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x58)) {
      uVar4 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return;
}



// FUNCTION 14189dae2 FUN_14189dae2 body=55 status=ok
// SIG undefined FUN_14189dae2(void)

void FUN_14189dae2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b41be10;
  FUN_140ce26a5(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14189db1a FUN_14189db1a body=44 status=ok
// SIG undefined FUN_14189db1a(void)

longlong FUN_14189db1a(undefined8 param_1)

{
  longlong lVar1;
  
  if (((DAT_14cb86df8 != 0) && (lVar1 = FUN_144837462(DAT_14cb86df8,param_1), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x58) != '\0')) {
    return lVar1;
  }
  return 0;
}



// FUNCTION 14189db46 FUN_14189db46 body=101 status=ok
// SIG undefined FUN_14189db46(void)

void FUN_14189db46(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1446dd912(param_1,iVar2);
  }
  memcpy((void *)((longlong)iVar2 * 0xc + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0xc);
  return;
}



// FUNCTION 14189dbb4 FUN_14189dbb4 body=501 status=ok
// SIG undefined FUN_14189dbb4(void)

void FUN_14189dbb4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = FUN_140823ef2(param_1,param_3,&DAT_14c948618);
  iVar3 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar10 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar10);
      if (lVar6 != 0) {
        plVar7 = *(longlong **)(lVar5 + 8 + lVar10);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
        }
        iVar4 = *(int *)(lVar9 + 0x40);
        *(uint *)(lVar9 + 0x40) = iVar4 + 1U;
        if (*(uint *)(lVar9 + 0x44) < iVar4 + 1U) {
          FUN_140822268((longlong *)(lVar9 + 0x38),iVar4);
        }
        lVar8 = *(longlong *)(lVar9 + 0x38);
        *(longlong *)(lVar8 + (longlong)iVar4 * 0x10) = lVar6;
        *(longlong **)(lVar8 + 8 + (longlong)iVar4 * 0x10) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
        }
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar10);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar10 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar10);
      if (lVar6 != 0) {
        plVar7 = *(longlong **)(lVar5 + 8 + lVar10);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
        }
        iVar4 = *(int *)(lVar9 + 0x50);
        *(uint *)(lVar9 + 0x50) = iVar4 + 1U;
        if (*(uint *)(lVar9 + 0x54) < iVar4 + 1U) {
          FUN_140822376((longlong *)(lVar9 + 0x48),iVar4);
        }
        lVar8 = *(longlong *)(lVar9 + 0x48);
        *(longlong *)(lVar8 + (longlong)iVar4 * 0x10) = lVar6;
        *(longlong **)(lVar8 + 8 + (longlong)iVar4 * 0x10) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
        }
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar10);
  }
  return;
}



// FUNCTION 14189ddaa FUN_14189ddaa body=1893 status=ok
// SIG undefined FUN_14189ddaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14189ddaa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  short local_130;
  longlong local_120;
  undefined4 *local_118;
  undefined4 local_10c;
  longlong local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [40];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar15 = FUN_14082167c();
  plVar10 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x78) != 0) {
    bVar6 = *(byte *)(param_1 + 8);
    uVar15 = FUN_140822484(uVar15,local_98,param_2);
    local_138 = param_1 + 0x10;
    local_130 = (ushort)bVar6 * 2;
    uVar15 = FUN_1408236ae(uVar15,param_2,local_98,plVar10);
  }
  local_138 = CONCAT71(local_138._1_7_,2);
  FUN_1408234aa(uVar15,local_98,param_2,&DAT_14cb86eb8);
  lVar13 = param_2 + 0x2c0;
  FUN_14082207e(&local_d0,local_98,0);
  FUN_140822770(lVar13,&local_d0,1);
  uVar15 = FUN_1447cd778(CONCAT44(uStack_cc,CONCAT22(uStack_ce,CONCAT11(uStack_cf,local_d0))),
                         local_c8);
  if (CONCAT44(uStack_cc,CONCAT22(uStack_ce,CONCAT11(uStack_cf,local_d0))) != 0) {
    uVar15 = FUN_1400020a8();
  }
  if ((*(int *)plVar10 != 0) && (*(char *)(param_1 + 0x87) == '\x01')) {
    lVar9 = FUN_1406b2efc(lVar13);
    local_f0._0_4_ = CONCAT31(local_f0._1_3_,1);
    uStack_e4 = 1;
    local_f0._4_4_ = (undefined4)DAT_14cb7c588;
    uStack_e8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_f8 = *(undefined4 *)(param_1 + 0x80);
    local_100 = *plVar10;
    local_d0 = 0xb;
    uStack_cf = 0;
    uStack_cc = 0;
    local_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_144928d62(&local_c0,0);
    local_d8 = DAT_14cb7bdd0;
    local_e0 = _DAT_14cb7bdc8;
    FUN_144928d62(&local_c0,1);
    local_138 = local_138 & 0xffffffffffffff00;
    uVar15 = FUN_140641812(lVar9 + 0x58,&local_d0,&local_f0,0);
    if (local_a8 != 0) {
      uVar15 = FUN_1400020a8();
    }
  }
  local_120 = lVar13;
  if (*(char *)(param_1 + 0x86) == '\x01') {
    uVar15 = FUN_14600d188(lVar13,*(undefined4 *)(param_1 + 0x88));
  }
  local_c8 = *(undefined4 *)(param_1 + 0x80);
  lVar13 = *plVar10;
  local_d0 = (undefined1)lVar13;
  uStack_cf = (undefined1)((ulonglong)lVar13 >> 8);
  uStack_ce = (undefined2)((ulonglong)lVar13 >> 0x10);
  uStack_cc = (undefined4)((ulonglong)lVar13 >> 0x20);
  lVar9 = FUN_140823ef2(uVar15,param_2);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_118 = (undefined4 *)(lVar13 + 0xc7c);
  uVar15 = *local_118;
  pbVar3 = (byte *)(lVar13 + 0xc80);
  bVar6 = *pbVar3;
  if ((bVar6 & 1) != 0) {
    *pbVar3 = 0;
    *local_118 = 0xffffffff;
  }
  plVar10 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b41dfe0;
  uVar16 = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[2] = (longlong)&PTR_FUN_14b00be30;
  *(undefined1 *)((longlong)plVar10 + 0x29) = 0;
  *(undefined4 *)(plVar10 + 6) = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  *(undefined4 *)(plVar10 + 9) = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  *(undefined2 *)(plVar10 + 0xc) = 0;
  *(undefined1 *)((longlong)plVar10 + 0x62) = 1;
  if ((bVar6 & 1) != 0) {
    *local_118 = uVar15;
    *pbVar3 = 1;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(lVar9 + 0x50);
  *(uint *)(lVar9 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar9 + 0x54) < iVar7 + 1U) {
    uVar16 = FUN_140822376((longlong *)(lVar9 + 0x48),iVar7);
  }
  lVar13 = *(longlong *)(lVar9 + 0x48);
  *(longlong **)(lVar13 + (longlong)iVar7 * 0x10) = plVar10 + 2;
  *(longlong **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar16 = (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar16 = (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  *(undefined1 *)(plVar10 + 0xc) = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)((longlong)plVar10 + 0x61) = *(undefined1 *)(param_1 + 0x85);
  if (*(char *)(param_1 + 0x86) == '\x01') {
    local_138 = local_138 & 0xffffffffffffff00;
    FUN_1408234aa(uVar16,&local_d0,param_2,&DAT_14cb889e0);
    FUN_1411b8130(plVar10 + 5,&local_d0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  puVar14 = local_118;
  plVar1 = plVar10 + 3;
  iVar7 = (int)plVar10[4];
  *(uint *)(plVar10 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar10 + 0x24) < iVar7 + 1U) {
    FUN_140823334(plVar1,iVar7);
  }
  puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 0x28);
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = DAT_14cb86280;
  local_d0 = 1;
  local_c4 = 1;
  uStack_cc = (undefined4)DAT_14cb7c588;
  local_c8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar4,local_98,&local_d0,0);
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar13 = (longlong)*(int *)(param_1 + 0x98) * 0x30;
    lVar9 = *(longlong *)(param_1 + 0x90) + 0x10;
    do {
      local_108 = lVar13;
      FUN_140a893aa(local_120,&local_d0,param_2);
      local_10c = *puVar14;
      bVar6 = *pbVar3;
      if ((bVar6 & 1) != 0) {
        *pbVar3 = 0;
        *puVar14 = 0xffffffff;
      }
      plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14b41e000;
      plVar11[2] = (longlong)&PTR_FUN_14b35b440;
      plVar11[3] = 0;
      plVar11[4] = 0;
      plVar11[5] = 0;
      plVar11[6] = (longlong)&PTR_FUN_14b00be10;
      plVar11[7] = 0;
      plVar11[8] = 0;
      plVar11[9] = 0;
      plVar11[10] = 0;
      plVar11[0xb] = 0;
      plVar11[0xc] = 0;
      if ((bVar6 & 1) != 0) {
        *puVar14 = local_10c;
        *pbVar3 = 1;
      }
      uVar12 = FUN_140822996();
      FUN_140005f6c(plVar11 + 3,uVar12,0,0);
      FUN_14082207e(&local_f0,&local_d0,0);
      FUN_140822942(plVar11 + 3,&local_100);
      FUN_1408228f2(local_100 + 8,&local_f0);
      plVar8 = (longlong *)CONCAT44(uStack_f4,local_f8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      FUN_1447cd778(CONCAT44(local_f0._4_4_,(undefined4)local_f0),uStack_e8);
      if (CONCAT44(local_f0._4_4_,(undefined4)local_f0) != 0) {
        FUN_1400020a8();
      }
      FUN_1406b39e6(plVar11 + 7,lVar9);
      FUN_1406b3a44(plVar11 + 9,lVar9 + 0x10);
      uStack_e8 = SUB84(plVar11,0);
      uStack_e4 = (undefined4)((ulonglong)plVar11 >> 0x20);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_f0 = plVar11 + 2;
      FUN_1408229d0(local_120,&local_f0);
      plVar8 = (longlong *)CONCAT44(uStack_e4,uStack_e8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      puVar14 = local_118;
      iVar7 = (int)plVar10[4];
      *(uint *)(plVar10 + 4) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar10 + 0x24) < iVar7 + 1U) {
        FUN_140823334(plVar1,iVar7);
      }
      puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar7 * 0x28);
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[4] = 0;
      *puVar4 = *(undefined8 *)(lVar9 + -0x10);
      local_f0._0_4_ = CONCAT31(local_f0._1_3_,1);
      uStack_e4 = 1;
      local_f0._4_4_ = (undefined4)DAT_14cb7c588;
      uStack_e8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
      FUN_140821fec(puVar4,&local_d0,&local_f0);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar11 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      lVar13 = local_108;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x30;
      lVar13 = lVar13 + -0x30;
    } while (lVar13 != 0);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14189e510 FUN_14189e510 body=842 status=ok
// SIG undefined FUN_14189e510(void)

void FUN_14189e510(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  short local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = FUN_14082167c();
  local_78 = *(undefined4 *)(param_1 + 0x80);
  local_80 = *(undefined8 *)(param_1 + 0x78);
  if ((int)local_80 == 0) goto LAB_14189e761;
  bVar3 = *(byte *)(param_1 + 8);
  uVar10 = FUN_140822484(uVar10,local_70,param_2);
  local_a8 = param_1 + 0x10;
  local_a0 = (ushort)bVar3 * 2;
  uVar10 = FUN_1408236ae(uVar10,param_2,local_70,param_1 + 0x78);
  local_a8 = CONCAT71(local_a8._1_7_,2);
  FUN_1408234aa(uVar10,local_70,param_2,&DAT_14cb86eb8);
  FUN_14082207e(&local_90,local_70,0);
  FUN_140822770(param_2 + 0x2c0,&local_90,1);
  uVar10 = FUN_1447cd778(CONCAT44(uStack_8c,local_90),local_88);
  if (CONCAT44(uStack_8c,local_90) != 0) {
    uVar10 = FUN_1400020a8();
  }
  lVar8 = FUN_140823ef2(uVar10,param_2,&local_80);
  plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b41dc50;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[2] = (longlong)&PTR_FUN_14b39b820;
  plVar9[6] = 0;
  plVar9[7] = 0;
  lVar5 = *(longlong *)(param_1 + 0x98);
  plVar6 = *(longlong **)(param_1 + 0xa0);
  if (plVar6 == (longlong *)0x0) {
    plVar9[6] = lVar5;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    plVar9[6] = lVar5;
    plVar7 = (longlong *)plVar9[7];
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar7 = plVar6;
joined_r0x00014189e7b2:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      plVar9[7] = (longlong)plVar6;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          goto joined_r0x00014189e7b2;
        }
      }
    }
  }
  *(undefined1 *)(plVar9 + 5) = *(undefined1 *)(param_1 + 0x90);
  iVar4 = (int)plVar9[4];
  *(uint *)(plVar9 + 4) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar9 + 0x24) < iVar4 + 1U) {
    FUN_140823334(plVar9 + 3,iVar4);
  }
  puVar2 = (undefined8 *)(plVar9[3] + (longlong)iVar4 * 0x28);
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = DAT_14cb871c0;
  local_90 = CONCAT31(local_90._1_3_,1);
  local_84 = 1;
  uStack_8c = (undefined4)DAT_14cb7c588;
  local_88 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar2,local_70,&local_90,0);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(lVar8 + 0x50);
  *(uint *)(lVar8 + 0x50) = iVar4 + 1U;
  if (*(uint *)(lVar8 + 0x54) < iVar4 + 1U) {
    FUN_140822376((longlong *)(lVar8 + 0x48),iVar4);
  }
  lVar5 = *(longlong *)(lVar8 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar9 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_14189e761:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189e85c FUN_14189e85c body=334 status=ok
// SIG undefined FUN_14189e85c(void)

undefined8 FUN_14189e85c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  size_t sVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char *_Str;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  uVar5 = DAT_14cb871e0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = DAT_14cb871d0;
  local_58 = DAT_14cb871c8;
  FUN_1448075d0(local_48);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar8 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar6[9];
      }
      iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
      if (iVar9 != -1) {
        do {
          lVar1 = *plVar6 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_48[0]) {
            if ((((lVar1 != 0) &&
                 (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_14189e90e;
            break;
          }
          iVar9 = *(int *)(lVar1 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_14189e90e:
  pbVar2 = (byte *)*puVar7;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
     (_Str = *(char **)(pbVar2 + 8), _Str == (char *)0x0)) {
    _Str = (char *)0x0;
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(_Str);
  }
  cVar3 = FUN_14002b5e0(uVar5,_Str,sVar4);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_146539140();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14189e9ac FUN_14189e9ac body=1202 status=ok
// SIG undefined FUN_14189e9ac(void)

void FUN_14189e9ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  short local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = FUN_14082167c();
  local_78 = *(undefined4 *)(param_1 + 0x80);
  local_80 = *(undefined8 *)(param_1 + 0x78);
  if ((int)local_80 == 0) goto LAB_14189ed41;
  bVar4 = *(byte *)(param_1 + 8);
  uVar8 = FUN_140822484(uVar8,local_70,param_2);
  local_a8 = param_1 + 0x10;
  local_a0 = (ushort)bVar4 * 2;
  uVar8 = FUN_1408236ae(uVar8,param_2,local_70,param_1 + 0x78);
  local_a8 = CONCAT71(local_a8._1_7_,2);
  FUN_1408234aa(uVar8,local_70,param_2,&DAT_14cb86eb8);
  FUN_14082207e(&local_90,local_70,0);
  FUN_140822770(param_2 + 0x2c0,&local_90,1);
  uVar8 = FUN_1447cd778(CONCAT44(uStack_8c,local_90),local_88);
  if (CONCAT44(uStack_8c,local_90) != 0) {
    uVar8 = FUN_1400020a8();
  }
  lVar5 = FUN_140823ef2(uVar8,param_2,&local_80);
  plVar6 = (longlong *)FUN_14001cc68(0x1a8);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41dd50;
  memset(plVar6 + 3,0,400);
  plVar6[2] = (longlong)&PTR_FUN_14b057db0;
  *(undefined4 *)(plVar6 + 7) = 0x10;
  plVar6[10] = 0;
  plVar6[9] = (longlong)&PTR_FUN_14b023b20;
  plVar6[0xc] = (longlong)&PTR_FUN_14b023b40;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = (longlong)&PTR_FUN_14b00be70;
  *(undefined4 *)(plVar6 + 0x11) = 0xf00000d0;
  *(undefined4 *)(plVar6 + 0x13) = 0;
  *(undefined4 *)(plVar6 + 0x14) = 0;
  *(undefined1 *)((longlong)plVar6 + 0xa4) = 1;
  *(undefined4 *)(plVar6 + 0x16) = 0xf00000d0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  *(undefined4 *)(plVar6 + 0x19) = 0xf00000d0;
  *(undefined1 *)(plVar6 + 0x1b) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xdc) = 0;
  *(undefined1 *)((longlong)plVar6 + 0xe1) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xe4) = 6;
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
  plVar6[0x1e] = (longlong)DAT_14c844840;
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
  *(undefined4 *)(plVar6 + 0x1f) = 0;
  *(undefined4 *)(plVar6 + 0x20) = 0;
  *(undefined2 *)(plVar6 + 0x21) = 0;
  *(undefined4 *)(plVar6 + 0x22) = 0;
  plVar6[0x23] = 0;
  plVar6[0x24] = 0;
  plVar6[0x25] = 0;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  *(undefined4 *)(plVar6 + 0x29) = 0xf00000d0;
  plVar6[0x2a] = 0;
  *(undefined4 *)(plVar6 + 0x2b) = 0x3f800000;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  plVar6[0x32] = 0;
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b39b860;
  plVar6[5] = *(longlong *)(param_1 + 0x90);
  if (plVar6[6] == *(longlong *)(param_1 + 0x98)) {
    iVar7 = *(int *)(param_1 + 0xa0);
    if ((int)plVar6[7] != iVar7) goto LAB_14189ed71;
  }
  else {
    iVar7 = *(int *)(param_1 + 0xa0);
LAB_14189ed71:
    plVar6[6] = *(longlong *)(param_1 + 0x98);
    *(int *)(plVar6 + 7) = iVar7;
    plVar6[8] = 0;
  }
  FUN_14070e2ba(plVar6 + 9,param_1 + 0xb0);
  iVar7 = (int)plVar6[4];
  *(uint *)(plVar6 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar6 + 0x24) < iVar7 + 1U) {
    FUN_140823334(plVar6 + 3,iVar7);
  }
  puVar3 = (undefined8 *)(plVar6[3] + (longlong)iVar7 * 0x28);
  *puVar3 = DAT_14cb8dce0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_90 = CONCAT31(local_90._1_3_,1);
  local_84 = 1;
  uStack_8c = (undefined4)DAT_14cb7c588;
  local_88 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar3,local_70,&local_90,0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar7 + 1U) {
    FUN_140822376((longlong *)(lVar5 + 0x48),iVar7);
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar7 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar7 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_14189ed41:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14189ee60 FUN_14189ee60 body=1191 status=ok
// SIG undefined FUN_14189ee60(void)

void FUN_14189ee60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  short local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = FUN_14082167c();
  local_78 = *(undefined4 *)(param_1 + 0x80);
  local_80 = *(undefined8 *)(param_1 + 0x78);
  if ((int)local_80 == 0) goto LAB_14189f1ea;
  bVar4 = *(byte *)(param_1 + 8);
  uVar8 = FUN_140822484(uVar8,local_70,param_2);
  local_a8 = param_1 + 0x10;
  local_a0 = (ushort)bVar4 * 2;
  uVar8 = FUN_1408236ae(uVar8,param_2,local_70,param_1 + 0x78);
  local_a8 = CONCAT71(local_a8._1_7_,2);
  FUN_1408234aa(uVar8,local_70,param_2,&DAT_14cb86eb8);
  FUN_14082207e(&local_90,local_70,0);
  FUN_140822770(param_2 + 0x2c0,&local_90,1);
  uVar8 = FUN_1447cd778(CONCAT44(uStack_8c,local_90),local_88);
  if (CONCAT44(uStack_8c,local_90) != 0) {
    uVar8 = FUN_1400020a8();
  }
  lVar5 = FUN_140823ef2(uVar8,param_2,&local_80);
  plVar6 = (longlong *)FUN_14001cc68(0x1a8);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41dd90;
  memset(plVar6 + 3,0,400);
  plVar6[2] = (longlong)&PTR_FUN_14b057db0;
  *(undefined4 *)(plVar6 + 7) = 0x10;
  plVar6[10] = 0;
  plVar6[9] = (longlong)&PTR_FUN_14b023b20;
  plVar6[0xc] = (longlong)&PTR_FUN_14b023b40;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = (longlong)&PTR_FUN_14b00be70;
  *(undefined4 *)(plVar6 + 0x11) = 0xf00000d0;
  *(undefined4 *)(plVar6 + 0x13) = 0;
  *(undefined4 *)(plVar6 + 0x14) = 0;
  *(undefined1 *)((longlong)plVar6 + 0xa4) = 1;
  *(undefined4 *)(plVar6 + 0x16) = 0xf00000d0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  *(undefined4 *)(plVar6 + 0x19) = 0xf00000d0;
  *(undefined1 *)(plVar6 + 0x1b) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xdc) = 0;
  *(undefined1 *)((longlong)plVar6 + 0xe1) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xe4) = 6;
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
  plVar6[0x1e] = (longlong)DAT_14c844840;
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
  *(undefined4 *)(plVar6 + 0x1f) = 0;
  *(undefined4 *)(plVar6 + 0x20) = 0;
  *(undefined2 *)(plVar6 + 0x21) = 0;
  *(undefined4 *)(plVar6 + 0x22) = 0;
  plVar6[0x23] = 0;
  plVar6[0x24] = 0;
  plVar6[0x25] = 0;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  *(undefined4 *)(plVar6 + 0x29) = 0xf00000d0;
  plVar6[0x2a] = 0;
  *(undefined4 *)(plVar6 + 0x2b) = 0x3f800000;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  plVar6[0x32] = 0;
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  plVar6[5] = *(longlong *)(param_1 + 0x88);
  if (plVar6[6] == *(longlong *)(param_1 + 0x90)) {
    iVar7 = *(int *)(param_1 + 0x98);
    if ((int)plVar6[7] != iVar7) goto LAB_14189f21a;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x98);
LAB_14189f21a:
    plVar6[6] = *(longlong *)(param_1 + 0x90);
    *(int *)(plVar6 + 7) = iVar7;
    plVar6[8] = 0;
  }
  FUN_14070e2ba(plVar6 + 9,param_1 + 0xa8);
  iVar7 = (int)plVar6[4];
  *(uint *)(plVar6 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar6 + 0x24) < iVar7 + 1U) {
    FUN_140823334(plVar6 + 3,iVar7);
  }
  puVar3 = (undefined8 *)(plVar6[3] + (longlong)iVar7 * 0x28);
  *puVar3 = DAT_14cb8dce0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  local_90 = CONCAT31(local_90._1_3_,1);
  local_84 = 1;
  uStack_8c = (undefined4)DAT_14cb7c588;
  local_88 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar3,local_70,&local_90,0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar7 + 1U) {
    FUN_140822376((longlong *)(lVar5 + 0x48),iVar7);
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar7 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar7 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_14189f1ea:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


