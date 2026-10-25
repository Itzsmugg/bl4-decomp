// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1439f72ea FUN_1439f72ea body=511 status=ok
// SIG undefined FUN_1439f72ea(void)

undefined8 * FUN_1439f72ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (*(longlong *)(param_1 + 0x668) != 0) {
    if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
      FUN_1417e4cb4(param_1);
    }
    cVar5 = FUN_14490dacc(param_1,DAT_14cb39d78 + '\x01');
    if ((cVar5 != '\0') && (DAT_14c761950 == 1)) {
      return (undefined8 *)0x0;
    }
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x3a0,0x10);
  if (*(longlong *)(param_1 + 0x668) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x668) + 0x18);
  }
  FUN_1406ff4f8(puVar6,param_1,uVar8);
  *puVar6 = &PTR_FUN_14ada53e0;
  *(undefined1 *)(puVar6 + 0x53) = 0;
  puVar6[0x58] = 0;
  *(undefined4 *)(puVar6 + 0x59) = 0;
  puVar6[0x54] = 0;
  puVar6[0x55] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x2d4) = 0;
  puVar6[0x5c] = 0;
  *(undefined4 *)(puVar6 + 0x5d) = 0;
  *(undefined1 *)(puVar6 + 0x71) = 0;
  puVar6[0x5e] = 0;
  puVar6[0x5f] = 0;
  *(undefined4 *)((longlong)puVar6 + 0x38c) = 0xbf800000;
  puVar6[0x72] = 0;
  *(undefined1 *)(puVar6 + 0x73) = *(undefined1 *)(param_1 + 0x799);
  *(undefined4 *)(puVar6 + 2) = 0x40400000;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
  *(byte *)((longlong)puVar6 + 0x75) = *(byte *)((longlong)puVar6 + 0x75) & 0xfd;
  *(byte *)((longlong)puVar6 + 0x6e) =
       *(byte *)((longlong)puVar6 + 0x6e) & 0x7f | DAT_14c76280c << 7;
  lVar3 = *(longlong *)(param_1 + 0x760);
  plVar4 = *(longlong **)(param_1 + 0x768);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x668) != 0)) {
    lVar7 = FUN_140315efc(lVar3,*(undefined4 *)(puVar6[0x42] + 8));
    puVar6[0x5e] = lVar7;
    puVar6[0x5f] = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x870);
    *(byte *)((longlong)puVar6 + 0x75) =
         *(byte *)((longlong)puVar6 + 0x75) & 0x7f | *(char *)(lVar7 + 0x42) << 7;
    *(byte *)((longlong)puVar6 + 0x74) =
         *(byte *)((longlong)puVar6 + 0x74) & 0xdf | *(char *)(lVar7 + 0x43) << 5;
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       ((lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x878), lVar3 != 0 &&
        (*(int *)(lVar3 + 0x28) == 1)))) {
      *(byte *)((longlong)puVar6 + 0x6e) = *(byte *)((longlong)puVar6 + 0x6e) & 0x7f;
    }
  }
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
  return puVar6;
}



// FUNCTION 1439f74ee FUN_1439f74ee body=1463 status=ok
// SIG undefined FUN_1439f74ee(void)

void FUN_1439f74ee(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  uint local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  wchar_t *local_248;
  code *local_240;
  undefined1 *local_238;
  code **local_230;
  code *local_228;
  code *local_220;
  longlong local_218;
  undefined **local_210;
  undefined8 local_208;
  longlong lStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined8 local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  code *local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar4 = *(longlong *)(param_1 + 0x668);
  local_198 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  lStack_1d0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  lStack_200 = 0;
  local_190 = 0xffffffff;
  local_210 = &PTR_LAB_14adc1560;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  plVar1 = (longlong *)(param_1 + 0x678);
  memcpy(&local_138,&local_210,0xd8);
  memcpy(&local_210,plVar1,0xd8);
  memcpy(plVar1,&local_138,0xd8);
  local_218 = lVar4 + 0x338;
  FUN_1402ae190(plVar1,lVar4 + 0x338);
  FUN_14043b6da(param_1 + 0x700,lVar4 + 0x3c0);
  FUN_14090dd64(plVar1,param_1);
  if (param_2 == '\0') {
    if ((longlong)(int)local_1f8 != 0) {
      lVar14 = (longlong)(int)local_1f8 * 0x28;
      puVar12 = (undefined4 *)(lStack_200 + 8);
      do {
        local_130 = *puVar12;
        local_138 = *(code **)(puVar12 + -2);
        local_128 = 0;
        uStack_120 = 0;
        local_268 = 0;
        FUN_14021a03c(plVar1,&local_138,1,1);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        puVar2 = (undefined8 *)(puVar12 + -2);
        uVar7 = FUN_144741050(puVar12);
        cVar6 = FUN_14487ac36(uVar7);
        if (cVar6 == '\0') {
          plVar8 = (longlong *)FUN_144741050(puVar12);
          if ((short)plVar8[1] == 3) {
            lVar13 = DAT_14cb420c0;
            if (DAT_14cb420c0 != 0) {
LAB_1439f773d:
              if (DAT_14c927740 == 0) {
                local_138 = FUN_1449e2820;
                local_220 = FUN_14081d0ea;
                local_228 = FUN_14081d0ea;
                local_238 = &LAB_146856450;
                local_240 = FUN_1427b121c;
                local_248 = L"Engine";
                uStack_250 = 0;
                local_258 = CONCAT44(local_258._4_4_,0x10000021);
                local_260 = 8;
                local_268 = CONCAT44(local_268._4_4_,0x28);
                local_230 = &local_138;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                if (DAT_14c927740 == 0) goto LAB_1439f7769;
              }
              if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) ==
                  DAT_14c927740 + 0x30)) {
                iVar3 = puVar12[1];
                if ((longlong)iVar3 < 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  if (iVar3 < (int)local_1c8) {
                    lVar13 = *(longlong *)(lStack_1d0 + (longlong)iVar3 * 8);
                  }
                }
                local_130 = *puVar12;
                local_138 = (code *)*puVar2;
                local_128 = 0;
                uStack_120 = 0;
                piVar9 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_138,0);
                if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, (longlong)iVar3 != -1)) {
                  lVar10 = *(longlong *)(param_1 + 0x6b8);
                  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(lVar13);
                  }
                  *(longlong *)(lVar10 + (longlong)iVar3 * 8) = lVar13;
                  *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 4;
                }
                goto LAB_1439f780a;
              }
            }
          }
          else if (*plVar8 != 0) {
            lVar10 = FUN_1449e2fb2();
            lVar13 = *plVar8;
            if ((((lVar13 != 0) && (lVar10 != 0)) &&
                (lVar5 = *(longlong *)(lVar13 + 0x10), lVar5 != 0)) &&
               ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)))) goto LAB_1439f773d;
          }
LAB_1439f7769:
          local_130 = *puVar12;
          local_138 = (code *)*puVar2;
          local_128 = 0;
          uStack_120 = 0;
          FUN_143aa4086(&local_210,plVar1,&local_138,&local_138);
        }
        else {
          iVar3 = puVar12[1];
          if ((longlong)iVar3 < 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            if (iVar3 < (int)local_1d8) {
              lVar13 = *(longlong *)(lStack_1e0 + (longlong)iVar3 * 8);
            }
          }
          local_130 = *puVar12;
          local_138 = (code *)*puVar2;
          local_128 = 0;
          uStack_120 = 0;
          piVar9 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_138,0);
          if ((piVar9 != (int *)0x0) && (iVar3 = *piVar9, (longlong)iVar3 != -1)) {
            lVar10 = *(longlong *)(param_1 + 0x6a8);
            if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar13);
            }
            *(longlong *)(lVar10 + (longlong)iVar3 * 8) = lVar13;
            *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 2;
          }
        }
LAB_1439f780a:
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        puVar12 = puVar12 + 10;
        lVar14 = lVar14 + -0x28;
      } while (lVar14 != 0);
    }
  }
  lVar14 = local_218;
  if (0 < *(int *)(lVar4 + 0x370)) {
    uVar11 = 0;
    do {
      if ((((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x6b0)) &&
          (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x368) + uVar11 * 8),
          plVar1 != (longlong *)0x0)) &&
         (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x6a8) + uVar11 * 8),
         plVar8 != (longlong *)0x0)) {
        if (plVar1 == plVar8) {
          local_258 = 0;
          uStack_250 = 0;
          local_260 = local_260 & 0xffffff00;
          local_268 = 0;
          lVar10 = FUN_141821fc0(param_1,plVar1[2],0,9);
          (**(code **)(*plVar1 + 0x438))(plVar1,lVar10);
          lVar13 = *(longlong *)(param_1 + 0x6a8);
          if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar10);
          }
          *(longlong *)(lVar13 + uVar11 * 8) = lVar10;
          *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 2;
        }
        else {
          (**(code **)(*plVar1 + 0x438))(plVar1);
        }
      }
      else {
        FUN_143aa3fee(lVar14,uVar11 & 0xffffffff);
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(lVar4 + 0x370));
  }
  FUN_1403aed04(&local_210);
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1439f7aa6 FUN_1439f7aa6 body=69 status=ok
// SIG undefined FUN_1439f7aa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7aa6(void)

{
  _DAT_14cb39df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e00,1);
  return;
}



// FUNCTION 1439f7b10 FUN_1439f7b10 body=69 status=ok
// SIG undefined FUN_1439f7b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7b10(void)

{
  _DAT_14cb39e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7b52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e10,1);
  return;
}



// FUNCTION 1439f7b55 FUN_1439f7b55 body=69 status=ok
// SIG undefined FUN_1439f7b55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7b55(void)

{
  _DAT_14cb39e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7b97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e28,1);
  return;
}



// FUNCTION 1439f7b9a FUN_1439f7b9a body=69 status=ok
// SIG undefined FUN_1439f7b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7b9a(void)

{
  _DAT_14cb39e30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e38,1);
  return;
}



// FUNCTION 1439f7bdf FUN_1439f7bdf body=69 status=ok
// SIG undefined FUN_1439f7bdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7bdf(void)

{
  _DAT_14cb39e40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e48,1);
  return;
}



// FUNCTION 1439f7c24 FUN_1439f7c24 body=69 status=ok
// SIG undefined FUN_1439f7c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7c24(void)

{
  _DAT_14cb39e50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e58,1);
  return;
}



// FUNCTION 1439f7c69 FUN_1439f7c69 body=69 status=ok
// SIG undefined FUN_1439f7c69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7c69(void)

{
  _DAT_14cb39e60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f7cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39e68,1);
  return;
}



// FUNCTION 1439f7cae FUN_1439f7cae body=997 status=ok
// SIG undefined FUN_1439f7cae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f7cae(double *param_1,longlong param_2)

{
  double *pdVar1;
  LARGE_INTEGER LVar2;
  longlong *plVar3;
  byte bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auStack_d8 [32];
  LARGE_INTEGER local_b8;
  undefined8 local_b0;
  double *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  undefined2 local_80;
  longlong local_78;
  longlong *local_70;
  double *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = local_a0;
  if (DAT_14cb39e18 == '\x01') {
    QueryPerformanceCounter(&local_b8);
    dVar16 = (double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0;
    uVar6 = local_a0;
    if (*param_1 <= dVar16) {
      *param_1 = dVar16 + (double)_DAT_14c762824;
      FUN_14012e468(&local_b8,0x10,1,0);
      uVar14 = (ulonglong)local_a8 & 0xffffffff;
      if ((-1 < (int)local_a8) && ((int)local_a8 < (int)local_b0)) {
        pdVar1 = param_1 + 1;
        do {
          dVar16 = *(double *)(local_b8.QuadPart + (uVar14 & 0xffffffff) * 8);
          if ((dVar16 != 0.0) && (lVar9 = *(longlong *)((longlong)dVar16 + 0x668), lVar9 != 0)) {
            lVar8 = *(longlong *)((longlong)dVar16 + 0xb0);
            if (lVar8 == 0) {
              lVar8 = FUN_1448abda6(dVar16);
            }
            if ((lVar8 == param_2) && (*(char *)((longlong)dVar16 + 0x798) != '\x04')) {
              local_78 = *(longlong *)(lVar9 + 0x18);
              if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
                uVar13 = (uint)((ulonglong)local_78 >> 0x10);
                uVar12 = (uint)local_78 & 0xffff;
                pdVar11 = (double *)param_1[9];
                if ((double *)param_1[9] == (double *)0x0) {
                  pdVar11 = param_1 + 8;
                }
                iVar10 = *(int *)((longlong)pdVar11 +
                                 (ulonglong)
                                 (*(int *)(param_1 + 10) - 1U &
                                 (int)((ulonglong)local_78 >> 0x20) +
                                 ((uint)local_78 << 0x10 | uVar12) +
                                 (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar12 >> 4)) * 4);
                if (iVar10 != -1) {
                  do {
                    plVar3 = (longlong *)((longlong)*pdVar1 + (longlong)iVar10 * 0x48);
                    if (*plVar3 == local_78) {
                      if (plVar3 != (longlong *)0x0) goto LAB_1439f7ed2;
                      break;
                    }
                    iVar10 = (int)plVar3[8];
                  } while (iVar10 != -1);
                }
              }
              lVar9 = *(longlong *)(lVar9 + 0x68);
              local_70 = &local_78;
              FUN_148122976(pdVar1,&local_4c,&local_70);
              lVar8 = (longlong)local_4c;
              dVar5 = *pdVar1;
              if (lVar9 == 0) {
                uVar7 = 0;
              }
              else {
                lVar9 = FUN_1402d6e6c(lVar9);
                uVar7 = *(undefined4 *)(lVar9 + 0x40);
              }
              plVar3 = (longlong *)((longlong)dVar5 + lVar8 * 0x48);
              *(undefined4 *)((longlong)plVar3 + 0x3c) = uVar7;
LAB_1439f7ed2:
              bVar4 = *(byte *)((longlong)dVar16 + 0x9e);
              if ((bVar4 & 0x10) == 0) {
                uVar13 = 0;
              }
              else {
                if (*(longlong *)((longlong)dVar16 + 0x760) == 0) {
                  iVar10 = 3;
                }
                else {
                  iVar10 = *(int *)(*(longlong *)(*(longlong *)((longlong)dVar16 + 0x760) + 0x30) +
                                   0x86c);
                }
                uVar13 = (uint)(iVar10 == 0);
              }
              *(int *)((longlong)plVar3 + 0x14) = *(int *)((longlong)plVar3 + 0x14) + 1;
              *(uint *)(plVar3 + 5) = (int)plVar3[5] + ((bVar4 & 0x10) >> 4);
              *(int *)((longlong)plVar3 + 0x34) = *(int *)((longlong)plVar3 + 0x34) + uVar13;
            }
          }
          uVar14 = (longlong)(int)local_a8;
          do {
            uVar15 = uVar14;
            uVar14 = uVar15 + 1;
            local_a8 = (double *)CONCAT44(local_a8._4_4_,(int)uVar14);
            if ((longlong)(int)local_b0 <= (longlong)uVar14) break;
          } while (*(double *)(local_b8.QuadPart + uVar14 * 8) == 0.0);
        } while ((-2 < (longlong)uVar15) && ((int)uVar14 < (int)local_b0));
      }
      if ((double *)local_b8.QuadPart != (double *)0x0) {
        FUN_1400020a8();
      }
      LVar2.QuadPart = (LONGLONG)(param_1 + 1);
      local_68 = param_1 + 3;
      local_70 = (longlong *)&DAT_100000000;
      local_60 = 0xffffffff;
      local_58 = 0;
      if (*(int *)(param_1 + 6) != 0) {
        FUN_1449c0562(&local_70);
      }
      local_b0 = local_70;
      local_a8 = local_68;
      local_a0 = local_60;
      uVar6 = local_a0;
      local_98 = local_58;
      local_94 = local_54;
      local_80 = 0;
      local_a0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
      local_b8.QuadPart = LVar2.QuadPart;
      local_90.QuadPart = LVar2.QuadPart;
      local_88.QuadPart = LVar2.QuadPart;
      if (local_a0._4_4_ < *(int *)(local_68 + 3)) {
        iVar10 = local_a0._4_4_;
        local_a0 = uVar6;
        do {
          lVar9 = (longlong)*(double *)local_b8 + (longlong)iVar10 * 0x48;
          uVar12 = *(uint *)(lVar9 + 0x14);
          uVar13 = *(uint *)(lVar9 + 0x18);
          *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + (uint)(uVar12 < uVar13);
          *(int *)(lVar9 + 0xc) =
               *(int *)(lVar9 + 0xc) + (uint)(uVar12 >= uVar13 && uVar12 != uVar13);
          *(uint *)(lVar9 + 0x18) = uVar12;
          *(undefined4 *)(lVar9 + 0x14) = 0;
          uVar12 = *(uint *)(lVar9 + 0x28);
          uVar13 = *(uint *)(lVar9 + 0x2c);
          *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + (uint)(uVar12 < uVar13);
          *(int *)(lVar9 + 0x20) =
               *(int *)(lVar9 + 0x20) + (uint)(uVar12 >= uVar13 && uVar12 != uVar13);
          *(uint *)(lVar9 + 0x2c) = uVar12;
          *(undefined4 *)(lVar9 + 0x28) = 0;
          iVar10 = *(int *)(lVar9 + 0x38);
          if (*(int *)(lVar9 + 0x38) < *(int *)(lVar9 + 0x34)) {
            iVar10 = *(int *)(lVar9 + 0x34);
          }
          *(int *)(lVar9 + 0x38) = iVar10;
          *(undefined4 *)(lVar9 + 0x34) = 0;
          FUN_148110f4c(1);
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
          FUN_1449c0562(&local_b0);
          iVar10 = local_a0._4_4_;
        } while (local_a0._4_4_ < *(int *)(local_a8 + 3));
        uVar6 = local_a0;
        if (((local_80 & 1) != 0) && (local_80._1_1_ == '\x01')) {
          FUN_148122d5e(local_88.QuadPart,
                        *(int *)(local_88.QuadPart + 8) - *(int *)(local_88.QuadPart + 0x34),1);
          uVar6 = local_a0;
        }
      }
    }
  }
  local_a0 = uVar6;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1439f8094 FUN_1439f8094 body=69 status=ok
// SIG undefined FUN_1439f8094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f8094(void)

{
  _DAT_14cb39eb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f80d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39ec0,1);
  return;
}



// FUNCTION 1439f80d9 FUN_1439f80d9 body=69 status=ok
// SIG undefined FUN_1439f80d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f80d9(void)

{
  _DAT_14cb39ec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f811b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39ed0,1);
  return;
}



// FUNCTION 1439f811e FUN_1439f811e body=69 status=ok
// SIG undefined FUN_1439f811e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f811e(void)

{
  _DAT_14cb39ed8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f8160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39ee0,1);
  return;
}



// FUNCTION 1439f8163 FUN_1439f8163 body=69 status=ok
// SIG undefined FUN_1439f8163(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f8163(void)

{
  _DAT_14cb39ef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f81a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39ef8,1);
  return;
}



// FUNCTION 1439f81a8 FUN_1439f81a8 body=69 status=ok
// SIG undefined FUN_1439f81a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f81a8(void)

{
  _DAT_14cb39f00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f81ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39f08,1);
  return;
}



// FUNCTION 1439f81ed FUN_1439f81ed body=69 status=ok
// SIG undefined FUN_1439f81ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f81ed(void)

{
  _DAT_14cb39f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f822f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39f18,1);
  return;
}



// FUNCTION 1439f8232 FUN_1439f8232 body=300 status=ok
// SIG undefined FUN_1439f8232(void)

longlong FUN_1439f8232(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                      char param_5)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  bVar1 = DAT_14c950c29;
  if (iVar3 != 0 && param_5 == '\0') {
    do {
      lVar2 = *(longlong *)(*param_1 + -0x10 + (longlong)iVar3 * 0x10);
      if (((bVar1 & 1) != 0) && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
        iVar3 = (int)param_1[1];
        bVar1 = DAT_14c950c29;
      }
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 1) = iVar3;
      if (((bVar1 & 1) == 0) || (lVar2 == 0)) {
        if (lVar2 != 0) goto LAB_1439f82ff;
      }
      else {
        FUN_1456cec3c(lVar2);
        bVar1 = DAT_14c950c29;
LAB_1439f82ff:
        if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) {
          FUN_140579be4(lVar2,param_2);
          goto LAB_1439f82b7;
        }
        iVar3 = (int)param_1[1];
      }
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0);
  }
  if (lVar2 != 0) {
    param_2 = lVar2;
  }
  lVar2 = FUN_1404174ad(param_2);
  if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(byte *)(lVar2 + 0x790) = *(byte *)(lVar2 + 0x790) & 0xfe;
  *(byte *)(lVar2 + 0x9e) = *(byte *)(lVar2 + 0x9e) & 0xf7;
  FUN_14041742c(lVar2,0);
  FUN_1409d23de(lVar2,param_3,1);
LAB_1439f82b7:
  *(undefined1 *)(lVar2 + 0x798) = param_4;
  return lVar2;
}



// FUNCTION 1439f835e FUN_1439f835e body=69 status=ok
// SIG undefined FUN_1439f835e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f835e(void)

{
  _DAT_14cb39f50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f83a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb39f58,1);
  return;
}



// FUNCTION 1439f83b4 FUN_1439f83b4 body=49 status=ok
// SIG undefined FUN_1439f83b4(void)

void FUN_1439f83b4(void)

{
  FUN_1447a1747(DAT_14cb39fb0,DAT_14cb39fb8);
  if (DAT_14cb39fb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f83e5 FUN_1439f83e5 body=169 status=ok
// SIG undefined FUN_1439f83e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f83e5(void)

{
  DAT_14cb3a010 = 0;
  if (DAT_14cb3a008 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb39fd0 = 0;
  if (DAT_14cb39fd4 != 0) {
    FUN_14472eb64(&DAT_14cb39fc8,0);
  }
  _DAT_14cb39ff8 = 0xffffffff;
  _DAT_14cb39ff0 = 0;
  if (0x80 < DAT_14cb39ff4) {
    DAT_14cb39ff4 = 0x80;
    FUN_1446efbd8(&DAT_14cb39fd8,0);
  }
  if (DAT_14cb39fe8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb39fc8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1439f848e FUN_1439f848e body=47 status=ok
// SIG undefined FUN_1439f848e(void)

void FUN_1439f848e(void)

{
  DAT_14cb3a060 = 0;
  if (DAT_14cb3a058 != 0) {
    FUN_1400020a8();
  }
  FUN_145af7708(&DAT_14cb3a018);
  return;
}



// FUNCTION 1439f84bd FUN_1439f84bd body=47 status=ok
// SIG undefined FUN_1439f84bd(void)

void FUN_1439f84bd(void)

{
  DAT_14cb3a0b0 = 0;
  if (DAT_14cb3a0a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145af7708(&DAT_14cb3a068);
  return;
}



// FUNCTION 1439f84ec FUN_1439f84ec body=169 status=ok
// SIG undefined FUN_1439f84ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f84ec(void)

{
  DAT_14cb3a100 = 0;
  if (DAT_14cb3a0f8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb3a0c0 = 0;
  if (DAT_14cb3a0c4 != 0) {
    FUN_14472eb64(&DAT_14cb3a0b8,0);
  }
  _DAT_14cb3a0e8 = 0xffffffff;
  _DAT_14cb3a0e0 = 0;
  if (0x80 < DAT_14cb3a0e4) {
    DAT_14cb3a0e4 = 0x80;
    FUN_1446efbd8(&DAT_14cb3a0c8,0);
  }
  if (DAT_14cb3a0d8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3a0b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1439f860c FUN_1439f860c body=61 status=ok
// SIG undefined FUN_1439f860c(void)

void FUN_1439f860c(void)

{
  char cVar1;
  
  cVar1 = FUN_143a08cf7(&DAT_14cb3a108,&DAT_14cb39fc8);
  DAT_14cb39fc5 = DAT_14cb39ffc < DAT_14cb39fd0;
  if (cVar1 != '\0') {
    FUN_1439f8904();
    return;
  }
  return;
}



// FUNCTION 1439f8649 FUN_1439f8649 body=69 status=ok
// SIG undefined FUN_1439f8649(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f8649(void)

{
  _DAT_14cb3a178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f868b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a180,1);
  return;
}



// FUNCTION 1439f868e FUN_1439f868e body=147 status=ok
// SIG undefined FUN_1439f868e(void)

void FUN_1439f868e(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar1 = FUN_143a08f8a(&DAT_14cb3a118,&DAT_14cb3a018);
  cVar2 = FUN_143a08f8a(&DAT_14cb3a128,&DAT_14cb3a068);
  cVar3 = FUN_143a08cf7(&DAT_14cb3a138,&DAT_14cb3a0b8);
  DAT_14cb39fc6 = true;
  if ((DAT_14cb3a020 <= DAT_14cb3a04c) && (DAT_14cb3a070 <= DAT_14cb3a09c)) {
    DAT_14cb39fc6 = DAT_14cb3a0ec < DAT_14cb3a0c0;
  }
  if (cVar3 != '\0' || (cVar2 != '\0' || cVar1 != '\0')) {
    FUN_1439f8904();
    return;
  }
  return;
}



// FUNCTION 1439f8721 FUN_1439f8721 body=69 status=ok
// SIG undefined FUN_1439f8721(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f8721(void)

{
  _DAT_14cb3a188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f8763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a190,1);
  return;
}



// FUNCTION 1439f8766 FUN_1439f8766 body=69 status=ok
// SIG undefined FUN_1439f8766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f8766(void)

{
  _DAT_14cb3a198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f87a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a1a0,1);
  return;
}



// FUNCTION 1439f87ab FUN_1439f87ab body=69 status=ok
// SIG undefined FUN_1439f87ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f87ab(void)

{
  _DAT_14cb3a1a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f87ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a1b0,1);
  return;
}



// FUNCTION 1439f87f0 FUN_1439f87f0 body=69 status=ok
// SIG undefined FUN_1439f87f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f87f0(void)

{
  _DAT_14cb3a1b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f8832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a1c0,1);
  return;
}



// FUNCTION 1439f8835 FUN_1439f8835 body=69 status=ok
// SIG undefined FUN_1439f8835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f8835(void)

{
  _DAT_14cb3a1c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f8877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a1d0,1);
  return;
}



// FUNCTION 1439f887a FUN_1439f887a body=69 status=ok
// SIG undefined FUN_1439f887a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f887a(void)

{
  _DAT_14cb3a1d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f88bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a1e0,1);
  return;
}



// FUNCTION 1439f88bf FUN_1439f88bf body=69 status=ok
// SIG undefined FUN_1439f88bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1439f88bf(void)

{
  _DAT_14cb3a1e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439f8901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a1f0,1);
  return;
}



// FUNCTION 1439f8904 FUN_1439f8904 body=198 status=ok
// SIG undefined FUN_1439f8904(void)

void FUN_1439f8904(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1456d06d8(&local_28,0x10,1,0);
  uVar5 = (ulonglong)local_18;
  lVar2 = local_28;
  iVar3 = local_20;
  if ((int)local_18 < local_20 && -1 < (int)local_18) {
    do {
      lVar1 = *(longlong *)(lVar2 + (uVar5 & 0xffffffff) * 8);
      uVar4 = (uint)uVar5;
      if (lVar1 != 0) {
        FUN_14080a0de(lVar1);
        lVar2 = local_28;
        iVar3 = local_20;
        uVar4 = local_18;
      }
      uVar5 = (longlong)(int)uVar4;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_18 = (uint)uVar5;
        if ((longlong)iVar3 <= (longlong)uVar5) break;
      } while (*(longlong *)(lVar2 + uVar5 * 8) == 0);
    } while ((-2 < (longlong)uVar6) && ((int)local_18 < iVar3));
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439f89cc FUN_1439f89cc body=278 status=ok
// SIG undefined FUN_1439f89cc(void)

void FUN_1439f89cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ada7f10;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) | 0xf;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0xf] = &PTR_FUN_14ae15b00;
  param_1[0x20] = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0x100;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fd) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0xffffffffffffffff;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x275) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  return;
}



// FUNCTION 1439f8ae2 FUN_1439f8ae2 body=89 status=ok
// SIG undefined FUN_1439f8ae2(void)

longlong FUN_1439f8ae2(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x280) + 0x28);
  if ((*(char *)(lVar1 + 0x34 + (longlong)param_2 * 0xa8) == '\x01') &&
     ((longlong)*(int *)(param_1 + 0xe8) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar3);
      if (*(longlong *)(lVar2 + 8) == *(longlong *)(lVar1 + 0x38 + (longlong)param_2 * 0xa8)) {
        return lVar2;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 1439f8b3b FUN_1439f8b3b body=49 status=ok
// SIG undefined FUN_1439f8b3b(void)

void FUN_1439f8b3b(void)

{
  FUN_1406fc1fc(DAT_14cb3a1f8,DAT_14cb3a200);
  if (DAT_14cb3a1f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f8b6c FUN_1439f8b6c body=49 status=ok
// SIG undefined FUN_1439f8b6c(void)

void FUN_1439f8b6c(void)

{
  FUN_1406fc1fc(DAT_14cb3a208,DAT_14cb3a210);
  if (DAT_14cb3a208 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f8b9d FUN_1439f8b9d body=49 status=ok
// SIG undefined FUN_1439f8b9d(void)

void FUN_1439f8b9d(void)

{
  FUN_1406fc1fc(DAT_14cb3a218,DAT_14cb3a220);
  if (DAT_14cb3a218 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f8bce FUN_1439f8bce body=49 status=ok
// SIG undefined FUN_1439f8bce(void)

void FUN_1439f8bce(void)

{
  FUN_1406fc1fc(DAT_14cb3a228,DAT_14cb3a230);
  if (DAT_14cb3a228 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f8bff FUN_1439f8bff body=41 status=ok
// SIG undefined FUN_1439f8bff(void)

void FUN_1439f8bff(void)

{
  DAT_14cb3a280 = 0;
  if (DAT_14cb3a278 != 0) {
    FUN_1400020a8();
  }
  FUN_1461bc6ba();
  return;
}



// FUNCTION 1439f8c28 FUN_1439f8c28 body=47 status=ok
// SIG undefined FUN_1439f8c28(void)

void FUN_1439f8c28(void)

{
  DAT_14cb3a2d0 = 0;
  if (DAT_14cb3a2c8 != 0) {
    FUN_1400020a8();
  }
  FUN_14602dff2(&DAT_14cb3a288);
  return;
}



// FUNCTION 1439f8c57 FUN_1439f8c57 body=49 status=ok
// SIG undefined FUN_1439f8c57(void)

void FUN_1439f8c57(void)

{
  FUN_1406fc1fc(DAT_14cb3a2d8,DAT_14cb3a2e0);
  if (DAT_14cb3a2d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f8c88 FUN_1439f8c88 body=41 status=ok
// SIG undefined FUN_1439f8c88(void)

void FUN_1439f8c88(void)

{
  DAT_14cb3a330 = 0;
  if (DAT_14cb3a328 != 0) {
    FUN_1400020a8();
  }
  FUN_1461bf190();
  return;
}



// FUNCTION 1439f8cb1 FUN_1439f8cb1 body=47 status=ok
// SIG undefined FUN_1439f8cb1(void)

void FUN_1439f8cb1(void)

{
  DAT_14cb3a380 = 0;
  if (DAT_14cb3a378 != 0) {
    FUN_1400020a8();
  }
  FUN_14602dff2(&DAT_14cb3a338);
  return;
}



// FUNCTION 1439f8ce0 FUN_1439f8ce0 body=41 status=ok
// SIG undefined FUN_1439f8ce0(void)

void FUN_1439f8ce0(void)

{
  DAT_14cb3a3d0 = 0;
  if (DAT_14cb3a3c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1457c31e4();
  return;
}



// FUNCTION 1439f8d09 FUN_1439f8d09 body=47 status=ok
// SIG undefined FUN_1439f8d09(void)

void FUN_1439f8d09(void)

{
  DAT_14cb3a420 = 0;
  if (DAT_14cb3a418 != 0) {
    FUN_1400020a8();
  }
  FUN_1403aed4a(&DAT_14cb3a3d8);
  return;
}



// FUNCTION 1439f8d38 FUN_1439f8d38 body=47 status=ok
// SIG undefined FUN_1439f8d38(void)

void FUN_1439f8d38(void)

{
  DAT_14cb3a470 = 0;
  if (DAT_14cb3a468 != 0) {
    FUN_1400020a8();
  }
  FUN_1403aed4a(&DAT_14cb3a428);
  return;
}



// FUNCTION 1439f8d67 FUN_1439f8d67 body=49 status=ok
// SIG undefined FUN_1439f8d67(void)

void FUN_1439f8d67(void)

{
  FUN_1406fc1fc(DAT_14cb3a478,DAT_14cb3a480);
  if (DAT_14cb3a478 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1439f8e86 FUN_1439f8e86 body=47436 status=FAIL
// SIG undefined FUN_1439f8e86(void)
/* DECOMPILE FAILED */

// FUNCTION 143a04817 FUN_143a04817 body=69 status=ok
// SIG undefined FUN_143a04817(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a04817(void)

{
  _DAT_14cb3a5e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a04859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a5f0,1);
  return;
}



// FUNCTION 143a0485c FUN_143a0485c body=55 status=ok
// SIG undefined FUN_143a0485c(void)

void FUN_143a0485c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3a658 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3a658 = FUN_14171c317(FUN_14646df4d,uVar1,L"ENiagartaDataChannelReadResult");
  }
  return;
}



// FUNCTION 143a04893 FUN_143a04893 body=69 status=ok
// SIG undefined FUN_143a04893(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a04893(void)

{
  _DAT_14cb3a6b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a048d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a6c0,1);
  return;
}



// FUNCTION 143a048d8 FUN_143a048d8 body=69 status=ok
// SIG undefined FUN_143a048d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a048d8(void)

{
  _DAT_14cb3a6d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a0491a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a6d8,1);
  return;
}



// FUNCTION 143a0491d FUN_143a0491d body=69 status=ok
// SIG undefined FUN_143a0491d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a0491d(void)

{
  _DAT_14cb3a6e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a0495f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a6f0,1);
  return;
}



// FUNCTION 143a04962 FUN_143a04962 body=69 status=ok
// SIG undefined FUN_143a04962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a04962(void)

{
  _DAT_14cb3a6f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a049a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a700,1);
  return;
}



// FUNCTION 143a049ca FUN_143a049ca body=332 status=ok
// SIG undefined FUN_143a049ca(void)

void FUN_143a049ca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_14032e8b2(lVar3);
    FUN_1400020a8(lVar3);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar4 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1480859e8(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14808d6dc(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_14812471c(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1480859e8(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
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
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a04b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143a04b16 FUN_143a04b16 body=551 status=ok
// SIG undefined FUN_143a04b16(void)

void FUN_143a04b16(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_2 + 0x38;
  lVar5 = *(longlong *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar6 != 0) {
    lVar7 = 0;
    do {
      local_4c = *(undefined4 *)(*(longlong *)(lVar5 + lVar7) + 0x5c);
      FUN_1400ee60a(lVar1,&local_4c);
      *(undefined4 *)(*(longlong *)(lVar5 + lVar7) + 0x5c) = 0xffffffff;
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar6 * 0x18 != lVar7);
    lVar5 = *(longlong *)(param_1 + 0x60);
  }
  iVar6 = *(int *)(param_1 + 0x6c);
  FUN_14812471c(lVar5);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_148124736(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  if ((longlong)*(int *)(param_1 + 0x58) == 0) {
    iVar6 = 0;
  }
  else {
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar5) + 0x120);
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x58) * 8 != lVar5);
  }
  iVar8 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0;
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar8 = iVar8 + iVar6;
  if (iVar8 == 0) {
    if (lVar5 != 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
      UNLOCK();
    }
  }
  else {
    if (lVar5 == 0) {
      lVar5 = FUN_1481b9708(*(undefined8 *)(param_1 + 0x20));
      LOCK();
      if (*(int *)(lVar5 + 8) == -1) {
        *(int *)(lVar5 + 8) = 1;
      }
      UNLOCK();
      lVar7 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x28) = lVar5;
      if (lVar7 != 0) {
        LOCK();
        piVar2 = (int *)(lVar7 + 8);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar5 = *(longlong *)(param_1 + 0x28);
      }
    }
    local_4c = *(undefined4 *)(lVar5 + 0x5c);
    FUN_1400ee60a(lVar1);
    local_68 = 0;
    FUN_143a7817e(*(undefined8 *)(param_1 + 0x28),param_3,iVar8,*(undefined4 *)(param_2 + 0x24));
    local_60 = 0;
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_2 + 0x24));
    local_58 = 0;
    FUN_1481b9e1e(*(undefined8 *)(param_1 + 0x28),param_1 + 0x50,1,param_3);
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x120) = iVar8;
    iVar8 = *(int *)(param_1 + 0x5c);
    FUN_1480859e8(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((iVar8 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
      FUN_14808d6dc(param_1 + 0x50,0);
    }
    uVar4 = FUN_1481c88ee(lVar1,param_3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x5c) = uVar4;
    if (iVar6 != 0) {
      FUN_1481c8952(lVar1,uVar4,iVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a04d3e FUN_143a04d3e body=103 status=ok
// SIG undefined FUN_143a04d3e(void)

longlong * FUN_143a04d3e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        FUN_143a04da6(0,param_3,0x70,0x400,lVar2);
        lVar2 = *(longlong *)(param_1 + 0x28);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        *param_2 = lVar2;
        if (lVar2 == 0) {
          return param_2;
        }
      }
      else {
        *(int *)(param_1 + 0x74) = iVar1 + -1;
        *param_2 = lVar2;
      }
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143a04da6 FUN_143a04da6 body=1185 status=ok
// SIG undefined FUN_143a04da6(void)

void FUN_143a04da6(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_3b8 [32];
  wchar_t *local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  char *local_380;
  undefined4 local_378;
  undefined4 local_370;
  undefined **local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined1 local_339;
  undefined8 *local_338;
  undefined8 uStack_330;
  undefined *local_320;
  longlong local_318;
  undefined *local_310;
  undefined1 local_308 [336];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_128;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_5 != 0) {
    local_40 = 0;
    local_34 = 6;
    local_180 = *(undefined8 *)(param_5 + 0x68);
    local_190 = 0xffffffffffffffff;
    local_188 = 0xffffffff;
    local_178 = 3;
    local_16c = 0;
    local_160 = 0;
    local_38 = 2;
    local_148 = *(undefined8 *)(param_5 + 0x98);
    local_158 = 0xffffffffffffffff;
    local_150 = 0xffffffff;
    local_140 = 3;
    local_134 = 0;
    local_128 = 0;
    local_338 = (undefined8 *)0x0;
    uStack_330._0_4_ = 1;
    uStack_330._4_4_ = 0;
    local_174 = param_3;
    local_170 = param_4;
    local_13c = param_3;
    local_138 = param_4;
    FUN_147ae2918(&local_338,0);
    iVar2 = (int)uStack_330;
    *local_338 = *(undefined8 *)(param_5 + 0x68);
    lVar5 = (longlong)(int)uStack_330;
    uVar3 = (int)uStack_330 + 1;
    uStack_330 = CONCAT44(uStack_330._4_4_,uVar3);
    if (uStack_330._4_4_ < uVar3) {
      FUN_147ae2918(&local_338,iVar2);
    }
    local_338[lVar5] = *(undefined8 *)(param_5 + 0x98);
    local_1b8 = 0;
    FUN_1481247b6(local_308,&local_190);
    puVar4 = local_338;
    local_1a0 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_330;
    local_198 = CONCAT44(local_198._4_4_,(int)uStack_330);
    local_1a8 = param_4;
    if (lVar5 == 0) {
      local_198 = uStack_330 & 0xffffffff;
    }
    else {
      FUN_14812482e(&local_1a0,uStack_330 & 0xffffffff);
      memcpy(local_1a0,puVar4,lVar5 << 3);
    }
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x66;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x338);
      puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar6 + 0x66;
    }
    *puVar1 = (ulonglong)puVar4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9e1d98) {
      FUN_144b3d300(&DAT_14c9e1d98);
      if (DAT_14c9e1d98 == -1) {
        FUN_14596f92a(&local_320);
        local_350 = 0;
        local_360 = 0;
        local_380 = "Unknown";
        local_390 = 0;
        uStack_388 = 0;
        local_398 = L"FEmptyShaderParameters";
        local_358 = 0;
        local_370 = 0x10;
        local_378 = 0x7a6;
        local_368 = &local_320;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_320 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143a0c3a5);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
    }
    local_320 = &DAT_14cb3abb0;
    local_318 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_310 = &DAT_14c9e1d18;
    local_398 = (wchar_t *)((ulonglong)local_398 & 0xffffffffffffff00);
    FUN_140068f1a(puVar6,&local_339,&local_320,0x10);
    lVar5 = local_1b8;
    *puVar6 = &PTR_FUN_14adbc070;
    if (local_1b8 == 0) {
      memcpy(puVar6 + 0x37,local_308,0x150);
    }
    puVar6[0x61] = lVar5;
    local_1b8 = 0;
    *(undefined4 *)(puVar6 + 0x62) = (undefined4)local_1b0;
    *(undefined4 *)((longlong)puVar6 + 0x314) = local_1b0._4_4_;
    local_1b0 = 0x600000000;
    *(undefined4 *)(puVar6 + 99) = local_1a8;
    puVar6[100] = local_1a0;
    local_1a0 = (void *)0x0;
    *(undefined4 *)(puVar6 + 0x65) = (undefined4)local_198;
    *(undefined4 *)((longlong)puVar6 + 0x32c) = local_198._4_4_;
    local_198 = 0;
    *puVar6 = &PTR_FUN_14adbc050;
    iVar2 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar6);
    if (local_1a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_14811469e(local_308);
    if (local_338 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14811469e(&local_190);
  }
  if ((local_30 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a05248 FUN_143a05248 body=66 status=ok
// SIG undefined FUN_143a05248(void)

void FUN_143a05248(longlong param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x30);
    *param_2 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (-1 < *(int *)(param_1 + 0x74))) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    *param_2 = lVar1;
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143a0528a FUN_143a0528a body=1543 status=ok
// SIG undefined FUN_143a0528a(void)

void FUN_143a0528a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143a05302;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143a05307;
      goto LAB_143a05340;
    }
  }
  else {
LAB_143a05302:
    if (iVar9 != 0x10) {
LAB_143a05340:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar7 + 0xc60), iVar9 == 2))
        goto LAB_143a05307;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143a05307;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar3;
        if (puVar13 != (uint *)0x0) goto LAB_143a055c2;
        do {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar7 + 0x310);
          *(undefined8 *)(lVar7 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar3 = puVar12;
          FUN_140217a48(puVar3);
          puVar13 = (uint *)*puVar3;
LAB_143a055c2:
          uVar17 = *(longlong *)(puVar13 + 0x10) + 7;
          uVar15 = puVar13[0x12];
          while( true ) {
            puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffff8);
            if (puVar18 + 0x16 <= puVar13 + 0x4000) {
              *(undefined8 **)(puVar13 + 0x10) = puVar18 + 0x16;
              puVar13[0x12] = uVar15 + 1;
              iVar9 = 0;
              FUN_1447247dc(puVar18,0);
              *puVar18 = &PTR_FUN_14adbc0b0;
              puVar18[0x15] = lVar6;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar15 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                  uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
                  iVar9 = 0;
                }
                else {
                  uVar17 = 2;
                }
              }
              else {
                iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar17 = 5;
              }
              if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
              }
              puVar18[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar18[9] = puVar18;
              puVar18[10] = puVar18;
              lVar6 = *(longlong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
              if (lVar6 == 0) {
                uVar8 = 1;
                if ((char)uVar17 != '\x06') {
                  uVar8 = uVar17;
                }
                uVar17 = uVar8;
                uVar14 = 0;
              }
              else {
                if ((char)uVar17 == '\x06') {
                  uVar17 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
                }
                uVar14 = *(undefined8 *)(lVar6 + 0x30);
              }
              puVar18[0xf] = uVar14;
              puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar18 + 0x1c) = iVar9;
              if (puVar18 == (undefined8 *)0x0) {
                local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
                local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
                FUN_1447439e4(puVar18);
                LOCK();
                piVar2 = (int *)(puVar18 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar18)(puVar18,1);
                }
              }
              goto LAB_143a053d7;
            }
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar4 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar3;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            uVar17 = (longlong)puVar13 + 0x5f;
            uVar15 = 0;
          }
        } while( true );
      }
      local_78 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14adbc090;
      local_68[0] = FUN_143a0c458;
      local_40 = lVar6;
      FUN_14005a792(&DAT_14ca9a440,L"FDeleteContextCommand",&DAT_14cb3ad0c);
      if (local_68[0] != (code *)0x0) {
        pppuVar16 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar16 = &local_48;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      goto LAB_143a053d7;
    }
  }
LAB_143a05307:
  if (lVar6 != 0) {
    FUN_14032e8b2(lVar6);
    FUN_1400020a8(lVar6);
  }
LAB_143a053d7:
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar5 = *(longlong **)(param_1 + 0x50);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
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
  plVar5 = *(longlong **)(param_1 + 0xc0);
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  FUN_143a0c402(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_143a0c402(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_1 + 0x50);
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
  FUN_143a0c402(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
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
  plVar5 = *(longlong **)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a05892 FUN_143a05892 body=2066 status=ok
// SIG undefined FUN_143a05892(void)

void FUN_143a05892(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined ***pppuVar22;
  undefined1 auStack_b8 [32];
  undefined ****local_98;
  undefined ***local_88;
  undefined ***local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  undefined ***local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = (**(code **)(*param_2 + 0x180))(param_2);
  if (*(int *)((longlong)param_2 + 0x2c) == 0) {
LAB_143a05a1c:
    lVar21 = 0;
  }
  else {
    uVar16 = *(uint *)(param_2 + 5);
    lVar21 = 0;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      plVar20 = (longlong *)
                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((plVar20 == (longlong *)0x0) ||
         (((int)plVar20[2] != *(int *)((longlong)param_2 + 0x2c) ||
          ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143a05a1c;
      lVar21 = *plVar20;
    }
  }
  if ((((lVar9 == 0) || (*(longlong **)(lVar9 + 0x218) == (longlong *)0x0)) ||
      (puVar10 = (undefined8 *)(**(code **)(**(longlong **)(lVar9 + 0x218) + 0x420))(),
      puVar10 == (undefined8 *)0x0)) ||
     (plVar20 = (longlong *)(**(code **)*puVar10)(puVar10,&DAT_14cb3e918),
     plVar20 == (longlong *)0x0)) goto LAB_143a05951;
  pppuVar11 = (undefined ***)FUN_14001cc68(0x88,0x10);
  pppuVar11[1] = (undefined **)&DAT_100000001;
  *pppuVar11 = &PTR_FUN_14adbc130;
  pppuVar22 = pppuVar11 + 2;
  pppuVar11[2] = (undefined **)0x0;
  pppuVar11[3] = (undefined **)0x0;
  pppuVar11[4] = (undefined **)0x0;
  pppuVar11[5] = (undefined **)0x0;
  pppuVar11[6] = (undefined **)0x0;
  pppuVar11[7] = (undefined **)0x0;
  pppuVar11[8] = (undefined **)0x0;
  pppuVar11[9] = (undefined **)0x0;
  pppuVar11[10] = (undefined **)0x0;
  pppuVar11[0xb] = (undefined **)0x0;
  pppuVar11[0xc] = (undefined **)0x0;
  pppuVar11[0xd] = (undefined **)0x0;
  pppuVar11[0xe] = (undefined **)0x0;
  pppuVar11[0xf] = (undefined **)0x0;
  pppuVar11[0x10] = (undefined **)0x0;
  local_88 = pppuVar22;
  local_80 = pppuVar11;
  FUN_148124a98(&local_88,pppuVar22);
  if (pppuVar11 == (undefined ***)0x0) {
    param_1[9] = 0x10;
    pppuVar22 = (undefined ***)param_1[10];
    if (pppuVar22 != (undefined ***)0x0) {
      param_1[10] = 0;
LAB_143a05a41:
      LOCK();
      pppuVar11 = pppuVar22 + 1;
      *(int *)pppuVar11 = *(int *)pppuVar11 + -1;
      UNLOCK();
      if (*(int *)pppuVar11 == 0) {
        (*(code *)**pppuVar22)(pppuVar22);
        LOCK();
        piVar1 = (int *)((longlong)pppuVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x000143a05a70:
        if (iVar6 == 0) {
          (*(code *)(*pppuVar22)[2])(pppuVar22);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
    UNLOCK();
    param_1[9] = pppuVar22;
    pppuVar22 = (undefined ***)param_1[10];
    if (pppuVar11 == pppuVar22) {
      LOCK();
      pppuVar22 = pppuVar11 + 1;
      *(int *)pppuVar22 = *(int *)pppuVar22 + -1;
      UNLOCK();
      if (*(int *)pppuVar22 == 0) {
        (*(code *)**pppuVar11)(pppuVar11);
        LOCK();
        piVar1 = (int *)((longlong)pppuVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        pppuVar22 = pppuVar11;
        goto joined_r0x000143a05a70;
      }
    }
    else {
      param_1[10] = pppuVar11;
      if (pppuVar22 != (undefined ***)0x0) goto LAB_143a05a41;
    }
  }
  pppuVar22 = local_80;
  if (local_80 != (undefined ***)0x0) {
    LOCK();
    pppuVar11 = local_80 + 1;
    *(int *)pppuVar11 = *(int *)pppuVar11 + -1;
    UNLOCK();
    if (*(int *)pppuVar11 == 0) {
      (*(code *)**local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)pppuVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppuVar22)[2])(pppuVar22);
      }
    }
  }
  lVar9 = FUN_14001cc68(0xb8,0x10);
  *(undefined4 *)(lVar9 + 0x70) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined4 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x1c) = 0;
  *(undefined8 *)(lVar9 + 0x24) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined8 *)(lVar9 + 0x5c) = 0;
  *(undefined8 *)(lVar9 + 100) = 0;
  *(undefined8 *)(lVar9 + 0x78) = 0;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(undefined8 *)(lVar9 + 0xa4) = 0xffffffff00000002;
  *(undefined4 *)(lVar9 + 0xac) = 0xffffffff;
  *(undefined1 *)(lVar9 + 0xb0) = 0;
  *(undefined8 **)(lVar9 + 8) = &DAT_14cb3db48;
  *(longlong *)(param_1[9] + 0x20) = lVar9;
  FUN_1402ed004(*(undefined8 *)(param_1[9] + 0x20),param_1[0x17] + 0x58,0);
  *(undefined1 *)(param_1[9] + 0x38) = *(undefined1 *)(lVar21 + 0x38);
  uVar15 = *param_1;
  lVar9 = param_1[1];
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
  }
  lVar21 = param_1[9];
  *(undefined8 *)(lVar21 + 0x10) = uVar15;
  plVar4 = *(longlong **)(lVar21 + 0x18);
  *(longlong *)(lVar21 + 0x18) = lVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  lVar9 = param_1[9];
  uVar15 = param_1[0x17];
  lVar21 = param_1[0x18];
  if (lVar21 != 0) {
    LOCK();
    *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(lVar9 + 0x48);
  *(undefined8 *)(lVar9 + 0x40) = uVar15;
  *(longlong *)(lVar9 + 0x48) = lVar21;
  if (plVar4 != (longlong *)0x0) {
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
  pppuVar22 = (undefined ***)param_1[9];
  pppuVar11 = (undefined ***)param_1[10];
  if (pppuVar11 != (undefined ***)0x0) {
    LOCK();
    *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a05bf2;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a05bf7;
      goto LAB_143a05c66;
    }
LAB_143a05bf7:
    if (pppuVar11 != (undefined ***)0x0) {
      LOCK();
      *(int *)(pppuVar11 + 1) = *(int *)(pppuVar11 + 1) + 1;
      UNLOCK();
    }
    local_88 = pppuVar22;
    local_80 = pppuVar11;
    (**(code **)(*plVar20 + 200))(plVar20,&local_88);
    if (pppuVar11 == (undefined ***)0x0) goto LAB_143a05951;
    LOCK();
    pppuVar22 = pppuVar11 + 1;
    *(int *)pppuVar22 = *(int *)pppuVar22 + -1;
    UNLOCK();
    if (*(int *)pppuVar22 != 0) goto LAB_143a05951;
    (*(code *)**pppuVar11)(pppuVar11);
    LOCK();
    piVar1 = (int *)((longlong)pppuVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_143a05951;
    ppuVar12 = *pppuVar11;
  }
  else {
LAB_143a05bf2:
    if (iVar6 == 0x10) goto LAB_143a05bf7;
LAB_143a05c66:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
      goto LAB_143a05bf7;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143a05bf7;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar10 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar14 = (uint *)*puVar10;
      if (puVar14 != (uint *)0x0) goto LAB_143a05db6;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar9 + 0x310);
        *(undefined8 *)(lVar9 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar10 = puVar13;
        FUN_140217a48(puVar10);
        puVar14 = (uint *)*puVar10;
LAB_143a05db6:
        puVar18 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar18 + 0x18);
        uVar16 = puVar14[0x12];
        if (puVar17 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar3 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar10;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar10 = puVar14;
          puVar18 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x18);
          uVar16 = 0;
          if (puVar17 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_143a05e36;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143a05e36:
      *(uint **)(puVar14 + 0x10) = puVar17;
      puVar14[0x12] = uVar16;
      iVar6 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14adbc1b8;
      puVar18[0x15] = plVar20;
      puVar18[0x16] = pppuVar22;
      puVar18[0x17] = pppuVar11;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
          iVar6 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar15 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar18[0xf] = uVar15;
      puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar6;
      if (puVar18 == (undefined8 *)0x0) {
        local_88 = (undefined ***)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_88 = (undefined ***)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
      goto LAB_143a05951;
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14adbc150;
    local_88 = (undefined ***)FUN_143a0c8e2;
    local_98 = &local_88;
    local_60 = plVar20;
    local_58 = pppuVar22;
    local_50 = pppuVar11;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDataChannelDataProxyInit",&DAT_14cb3ad14);
    if (local_88 == (undefined ***)0x0) goto LAB_143a05951;
    pppuVar11 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar11 = &local_68;
    }
    ppuVar12 = *pppuVar11;
  }
  (*(code *)ppuVar12[2])(pppuVar11);
LAB_143a05951:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a060a6 FUN_143a060a6 body=2053 status=ok
// SIG undefined FUN_143a060a6(void)

void FUN_143a060a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_143a068ac();
  if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_143a060d8;
  local_98 = 0;
  uStack_90 = 0;
  iVar10 = *(int *)(param_1 + 0x40);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_14808d6dc(&local_98);
  }
  uVar23 = uStack_90;
  if ((*(int *)(param_1 + 200) < 1) || (DAT_14c76284f != '\x01')) {
    iVar10 = *(int *)(param_1 + 0x40);
    if (0 < iVar10) {
      lVar22 = 0;
      iVar24 = 0;
      iVar19 = 0;
      do {
        uVar23 = uStack_90;
        lVar20 = *(longlong *)(param_1 + 0x38);
        if (*(int *)(*(longlong *)(lVar20 + lVar22) + 0x120) != 0) {
          lVar18 = (longlong)(int)uStack_90;
          uVar9 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
          if (uStack_90._4_4_ < uVar9) {
            FUN_14808e9b0(&local_98,uVar23 & 0xffffffff);
          }
          lVar5 = *(longlong *)(lVar20 + lVar22);
          *(longlong *)(local_98 + lVar18 * 8) = lVar5;
          if (lVar5 == 0) {
            lVar20 = 0;
          }
          else {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            lVar20 = *(longlong *)(lVar20 + lVar22);
          }
          iVar19 = iVar19 + *(int *)(lVar20 + 0x120);
          iVar10 = *(int *)(param_1 + 0x40);
        }
        iVar24 = iVar24 + 1;
        lVar22 = lVar22 + 0x28;
      } while (iVar24 < iVar10);
      goto LAB_143a062b6;
    }
  }
  else {
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78);
    iVar19 = 0;
    if ((lVar22 != 0) && (iVar19 = 0, *(int *)(lVar22 + 0x120) != 0)) {
      lVar20 = (longlong)(int)uStack_90;
      uVar9 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
      if (uStack_90._4_4_ < uVar9) {
        FUN_14808e9b0(&local_98,uVar23 & 0xffffffff);
      }
      *(longlong *)(local_98 + lVar20 * 8) = lVar22;
      LOCK();
      *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
      UNLOCK();
      iVar19 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78) + 0x120);
    }
    iVar10 = *(int *)(param_1 + 0x40);
    if (0 < iVar10) {
      lVar22 = 0;
      iVar24 = 0;
      do {
        uVar23 = uStack_90;
        lVar20 = *(longlong *)(param_1 + 0x38);
        if ((*(char *)(lVar20 + 0x19 + lVar22) == '\0') &&
           (*(int *)(*(longlong *)(lVar20 + lVar22) + 0x120) != 0)) {
          lVar18 = (longlong)(int)uStack_90;
          uVar9 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
          if (uStack_90._4_4_ < uVar9) {
            FUN_14808e9b0(&local_98,uVar23 & 0xffffffff);
          }
          lVar5 = *(longlong *)(lVar20 + lVar22);
          *(longlong *)(local_98 + lVar18 * 8) = lVar5;
          if (lVar5 == 0) {
            lVar20 = 0;
          }
          else {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            lVar20 = *(longlong *)(lVar20 + lVar22);
          }
          iVar19 = iVar19 + *(int *)(lVar20 + 0x120);
          iVar10 = *(int *)(param_1 + 0x40);
        }
        iVar24 = iVar24 + 1;
        lVar22 = lVar22 + 0x28;
      } while (iVar24 < iVar10);
    }
LAB_143a062b6:
    lVar22 = local_98;
    if (0 < iVar19) {
      local_b8 = *(longlong *)(param_1 + 0x48);
      plStack_b0 = *(longlong **)(param_1 + 0x50);
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
        UNLOCK();
      }
      local_a8 = local_98;
      local_98 = 0;
      uVar6 = (int)uStack_90;
      uVar7 = uStack_90._4_4_;
      local_a0 = uStack_90;
      uStack_90 = 0;
      lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar10 = *(int *)(lVar20 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar10 != 2) {
          if (iVar10 != 1) goto LAB_143a0632a;
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143a06333;
          goto LAB_143a063e9;
        }
LAB_143a06333:
        FUN_14811480c(local_b8 + 0x50,&local_a8);
      }
      else {
LAB_143a0632a:
        if (iVar10 == 0x10) goto LAB_143a06333;
LAB_143a063e9:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar20 + 0xc60), iVar10 == 2))
          goto LAB_143a06333;
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_143a06333;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar3 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar14 = (uint *)*puVar3;
          if (puVar14 != (uint *)0x0) goto LAB_143a064c8;
          while( true ) {
            uVar9 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar9 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar9 | 1;
              __tlregdtor(&LAB_143a091f0);
            }
            lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar13 = *(undefined4 **)(lVar22 + 0x310);
            *(undefined8 *)(lVar22 + 0x310) = 0;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar3 = puVar13;
            FUN_140217a48(puVar3);
            puVar14 = (uint *)*puVar3;
LAB_143a064c8:
            puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar21 + 0x19);
            uVar9 = puVar14[0x12];
            if (puVar17 <= puVar14 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
              LOCK();
              uVar4 = *puVar14;
              *puVar14 = *puVar14 + uVar9 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar9) != 0xffffffff) break;
              puVar14 = (uint *)*puVar3;
              *puVar14 = 0xffffffff;
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar3 = puVar14;
              puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
              puVar17 = (uint *)(puVar21 + 0x19);
              uVar9 = 0;
              if (puVar17 <= puVar14 + 0x4000) {
                uVar9 = 1;
                goto LAB_143a06548;
              }
            }
          }
          uVar9 = uVar9 + 1;
LAB_143a06548:
          *(uint **)(puVar14 + 0x10) = puVar17;
          puVar14[0x12] = uVar9;
          iVar10 = 0;
          FUN_1447247dc(puVar21,0);
          *puVar21 = &PTR_FUN_14adbc118;
          puVar21[0x15] = local_b8;
          puVar21[0x16] = plStack_b0;
          local_b8 = 0;
          plStack_b0 = (longlong *)0x0;
          puVar21[0x17] = local_a8;
          local_a8 = 0;
          *(undefined4 *)(puVar21 + 0x18) = (undefined4)local_a0;
          *(undefined4 *)((longlong)puVar21 + 0xc4) = local_a0._4_4_;
          local_a0 = 0;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar9 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar9 < 2) {
              uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
            }
            else {
              uVar23 = 2;
            }
          }
          else {
            iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar23 = 5;
          }
          if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
          }
          puVar21[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar21[9] = puVar21;
          puVar21[10] = puVar21;
          lVar22 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar22 == 0) {
            uVar8 = 1;
            if ((char)uVar23 != '\x06') {
              uVar8 = uVar23;
            }
            uVar23 = uVar8;
            uVar15 = 0;
          }
          else {
            if ((char)uVar23 == '\x06') {
              uVar23 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
            }
            uVar15 = *(undefined8 *)(lVar22 + 0x30);
          }
          puVar21[0xf] = uVar15;
          puVar21[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar21 + 0x1c) = iVar10;
          if (puVar21 == (undefined8 *)0x0) {
            local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
            local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(puVar21);
            LOCK();
            piVar2 = (int *)(puVar21 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar21)(puVar21,1);
            }
          }
        }
        else {
          local_88[0] = (undefined1 *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x28,8);
          plVar16 = plStack_b0;
          lVar20 = local_b8;
          *local_78 = (longlong)&PTR_LAB_14adbc0c0;
          local_b8 = 0;
          plStack_b0 = (longlong *)0x0;
          local_a8 = 0;
          local_a0 = 0;
          local_78[1] = lVar20;
          local_78[2] = (longlong)plVar16;
          local_78[3] = lVar22;
          *(undefined4 *)(local_78 + 4) = uVar6;
          *(undefined4 *)((longlong)local_78 + 0x24) = uVar7;
          if (local_78 + 1 != (longlong *)0x0) {
            local_88[0] = &LAB_143a0c678;
          }
          local_c8 = local_88;
          FUN_14005a792(&DAT_14ca9a440,L"FDataChannelProxyEndFrame",&DAT_14cb3ad10);
          if (local_88[0] != (undefined1 *)0x0) {
            plVar16 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar16 = local_68;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
        }
      }
      lVar22 = local_a8;
      FUN_1480859e8(local_a8,local_a0 & 0xffffffff);
      if (lVar22 != 0) {
        FUN_1400020a8(lVar22);
      }
      plVar16 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
  }
  FUN_1480859e8(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143a060d8:
  iVar10 = *(int *)(param_1 + 0x44);
  FUN_143a0c402(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar10 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14812494c(param_1 + 0x38,0);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a068ac FUN_143a068ac body=2229 status=ok
// SIG undefined FUN_143a068ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_143a068ac(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  LPCRITICAL_SECTION local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x90);
  EnterCriticalSection(lpCriticalSection);
  iVar11 = 0;
  iVar8 = 0;
  if (((((*(int *)((longlong)param_2 + 0x2c) != 0) &&
        (uVar5 = *(uint *)(param_2 + 5), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)), iVar11 = iVar8,
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_2 + 0x2c))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
      ((lVar16 = *plVar9, lVar16 != 0 && (*(int *)(param_1 + 0x60) != 0)))))) {
    if ((DAT_14cb3a6b0 == '\x01') && (*(char *)(lVar16 + 0x39) == '\x01')) {
      iVar11 = 8;
      if ((int)param_2[8] < 8) {
        iVar11 = (int)param_2[8];
      }
      iVar8 = 1;
      if (1 < iVar11) {
        iVar8 = iVar11;
      }
      if ((((uint)*(byte *)(lVar16 + 0x3a) < iVar8 - 1U) &&
          (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb3a740)) && (FUN_144b3d300(&DAT_14cb3a740), DAT_14cb3a740 == -1))
      {
        _DAT_14cb3a738 = FUN_14786402d();
        _Init_thread_footer(&DAT_14cb3a740);
      }
    }
    (**(code **)(*param_2 + 0x180))(param_2);
    iVar11 = *(int *)(param_1 + 0x60);
    iVar8 = *(int *)(param_1 + 0x40) + iVar11;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
    iVar17 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78) + 0x120);
    local_c8 = param_1 + 0x38;
    iVar2 = iVar11;
    if (*(int *)(param_1 + 0x44) < iVar8) {
      FUN_14812494c(local_c8);
      iVar2 = *(int *)(param_1 + 0x60);
    }
    local_a8 = (longlong *)(param_1 + 0x58);
    local_d0 = param_1;
    local_bc = iVar11;
    local_a0 = lpCriticalSection;
    if (iVar2 != 0) {
      plVar13 = (longlong *)*local_a8;
      plVar9 = plVar13 + (longlong)iVar2 * 5;
      local_98 = (undefined8 *)(param_1 + 0x80);
      do {
        if ((DAT_14c76284f == '\x01') && (0 < *(int *)(param_1 + 200))) {
          bVar4 = *(byte *)((longlong)plVar13 + 0x19);
        }
        else {
          bVar4 = 0;
        }
        bVar4 = (bVar4 ^ 1) & *(byte *)((longlong)plVar13 + 0x1a);
        lVar16 = plVar13[1];
        if (lVar16 == 0) {
          if (*plVar13 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(*plVar13 + 0x120);
            if ((iVar11 != 0 & bVar4) == 1) {
              plVar7 = (longlong *)FUN_148114d96(local_c8);
              lVar16 = *plVar13;
              lVar14 = *plVar7;
              if (lVar14 != lVar16) {
                *plVar7 = lVar16;
                if (lVar16 != 0) {
                  LOCK();
                  *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
                  UNLOCK();
                }
                goto joined_r0x000143a07064;
              }
              goto LAB_143a07073;
            }
          }
        }
        else {
          iVar11 = *(int *)(lVar16 + 0x20);
          if ((0 < iVar11 & bVar4) == 1) {
            lVar14 = *(longlong *)(param_1 + 0x30);
            lVar10 = *(longlong *)(lVar14 + 0x98);
            if (*(longlong *)(lVar14 + 0x98) == 0) {
              lVar10 = lVar14 + 0x88;
            }
            iVar8 = *(int *)(lVar14 + 0xa0);
            if ((longlong)iVar8 != 0) {
              lVar15 = 0;
              do {
                puVar6 = *(undefined8 **)(lVar10 + lVar15);
                if (puVar6 != *(undefined8 **)(lVar14 + 0x78)) {
                  LOCK();
                  bVar18 = *(int *)(puVar6 + 1) == 0;
                  if (bVar18) {
                    *(int *)(puVar6 + 1) = -1;
                  }
                  UNLOCK();
                  if (bVar18) goto LAB_143a06f58;
                }
                lVar15 = lVar15 + 8;
              } while ((longlong)iVar8 * 8 != lVar15);
            }
            local_b0 = lVar14 + 0x88;
            puVar6 = (undefined8 *)FUN_14001cc68(0x198,0x10);
            *(undefined4 *)(puVar6 + 1) = 0;
            *puVar6 = &PTR_FUN_14ade2d80;
            puVar6[2] = lVar14;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            puVar6[0xb] = 0xffffffff00000000;
            puVar6[0xc] = 0;
            puVar6[0xd] = 0;
            puVar6[0xe] = 0;
            puVar6[0xf] = 0;
            *(undefined8 *)((longlong)puVar6 + 0x7c) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
            puVar6[0x12] = 0;
            puVar6[0x13] = 0;
            puVar6[0x14] = 0;
            puVar6[0x15] = 0;
            *(undefined8 *)((longlong)puVar6 + 0xac) = 0;
            *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
            puVar6[0x18] = 0;
            puVar6[0x19] = 0;
            puVar6[0x1a] = 0;
            puVar6[0x1b] = 0;
            *(undefined8 *)((longlong)puVar6 + 0xdc) = 0;
            *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x10c) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
            puVar6[0x20] = 0;
            puVar6[0x21] = 0;
            puVar6[0x1e] = 0;
            puVar6[0x1f] = 0;
            *(undefined8 *)((longlong)puVar6 + 300) = 0;
            *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
            puVar6[0x24] = 0;
            puVar6[0x25] = 0;
            puVar6[0x28] = 0;
            puVar6[0x29] = 0;
            puVar6[0x2c] = 0;
            puVar6[0x2d] = 0;
            puVar6[0x2e] = 0;
            puVar6[0x2f] = 0;
            *(undefined4 *)(puVar6 + 0x30) = 1;
            puVar6[0x31] = 0;
            puVar6[0x32] = 0;
            lVar10 = (longlong)*(int *)(lVar14 + 0xa0);
            uVar5 = *(int *)(lVar14 + 0xa0) + 1;
            *(uint *)(lVar14 + 0xa0) = uVar5;
            if (*(uint *)(lVar14 + 0xa4) < uVar5) {
              local_b8 = lVar10;
              FUN_140e69270(local_b0,lVar10);
              lVar10 = local_b8;
            }
            lVar15 = local_b0;
            if (*(longlong *)(lVar14 + 0x98) != 0) {
              lVar15 = *(longlong *)(lVar14 + 0x98);
            }
            *(undefined8 **)(lVar15 + lVar10 * 8) = puVar6;
            LOCK();
            if (*(int *)(puVar6 + 1) == 0) {
              *(int *)(puVar6 + 1) = -1;
            }
            UNLOCK();
LAB_143a06f58:
            *(undefined8 **)(lVar14 + 0x80) = puVar6;
            *(undefined4 *)(puVar6 + 0x24) = 0;
            lVar10 = *(longlong *)(lVar14 + 0x80);
            if (*(int *)(lVar10 + 0x54) < 0) {
              *(undefined4 *)(lVar10 + 0x50) = 0;
              FUN_14481578e(lVar10 + 0x48,0);
            }
            else {
              *(undefined4 *)(lVar10 + 0x50) = 0;
            }
            lVar10 = *(longlong *)(lVar14 + 0x80);
            FUN_14009337e(lVar10,iVar11);
            local_68 = *(undefined4 *)(local_98 + 1);
            local_70 = *local_98;
            FUN_1481133e6(lVar16,lVar10,0,&local_70);
            param_1 = local_d0;
            lVar16 = *(longlong *)(local_d0 + 0x30);
            piVar1 = (int *)(*(longlong *)(lVar16 + 0x80) + 8);
            LOCK();
            if (*piVar1 == -1) {
              *piVar1 = 0;
            }
            UNLOCK();
            *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar16 + 0x80);
            *(undefined8 *)(lVar16 + 0x80) = 0;
            plVar7 = (longlong *)FUN_148114d96(local_c8);
            lVar14 = *plVar7;
            if (lVar14 != lVar10) {
              *plVar7 = lVar10;
              if (lVar10 != 0) {
                LOCK();
                *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                UNLOCK();
              }
joined_r0x000143a07064:
              if (lVar14 != 0) {
                LOCK();
                *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + -1;
                UNLOCK();
              }
            }
LAB_143a07073:
            *(undefined1 *)((longlong)plVar7 + 0x19) = *(undefined1 *)((longlong)plVar13 + 0x19);
            *(undefined1 *)((longlong)plVar7 + 0x1a) = *(undefined1 *)((longlong)plVar13 + 0x1a);
            *(undefined8 *)((longlong)plVar7 + 0x1c) = *(undefined8 *)((longlong)plVar13 + 0x1c);
            *(undefined4 *)((longlong)plVar7 + 0x24) = *(undefined4 *)((longlong)plVar13 + 0x24);
          }
        }
        iVar8 = 0;
        if ((char)plVar13[3] != '\0') {
          iVar8 = iVar11;
        }
        iVar12 = iVar12 + iVar8;
        if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
          iVar11 = 0;
        }
        iVar17 = iVar17 + iVar11;
        plVar13 = plVar13 + 5;
      } while (plVar13 != plVar9);
    }
    lVar14 = *(longlong *)(param_1 + 0x20);
    lVar16 = lVar14 + 0x88;
    lVar10 = *(longlong *)(lVar14 + 0x98);
    if (*(longlong *)(lVar14 + 0x98) == 0) {
      lVar10 = lVar16;
    }
    iVar11 = *(int *)(lVar14 + 0xa0);
    if ((longlong)iVar11 != 0) {
      lVar15 = 0;
      do {
        puVar6 = *(undefined8 **)(lVar10 + lVar15);
        if (puVar6 != *(undefined8 **)(lVar14 + 0x78)) {
          LOCK();
          bVar18 = *(int *)(puVar6 + 1) == 0;
          if (bVar18) {
            *(int *)(puVar6 + 1) = -1;
          }
          UNLOCK();
          if (bVar18) goto LAB_143a06bcd;
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)iVar11 * 8 != lVar15);
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x198,0x10);
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_FUN_14ade2d80;
    puVar6[2] = lVar14;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0xffffffff00000000;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    *(undefined8 *)((longlong)puVar6 + 0xac) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xb4) = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    *(undefined8 *)((longlong)puVar6 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar6 + 0xe4) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x114) = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    *(undefined8 *)((longlong)puVar6 + 300) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x134) = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    *(undefined4 *)(puVar6 + 0x30) = 1;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    iVar11 = *(int *)(lVar14 + 0xa0);
    *(uint *)(lVar14 + 0xa0) = iVar11 + 1U;
    if (*(uint *)(lVar14 + 0xa4) < iVar11 + 1U) {
      FUN_140e69270(lVar16,iVar11);
    }
    if (*(longlong *)(lVar14 + 0x98) != 0) {
      lVar16 = *(longlong *)(lVar14 + 0x98);
    }
    *(undefined8 **)(lVar16 + (longlong)iVar11 * 8) = puVar6;
    LOCK();
    if (*(int *)(puVar6 + 1) == 0) {
      *(int *)(puVar6 + 1) = -1;
    }
    UNLOCK();
LAB_143a06bcd:
    *(undefined8 **)(lVar14 + 0x80) = puVar6;
    *(undefined4 *)(puVar6 + 0x24) = 0;
    lVar16 = *(longlong *)(lVar14 + 0x80);
    if (*(int *)(lVar16 + 0x54) < 0) {
      *(undefined4 *)(lVar16 + 0x50) = 0;
      FUN_14481578e(lVar16 + 0x48,0);
    }
    else {
      *(undefined4 *)(lVar16 + 0x50) = 0;
    }
    FUN_1447a955c(*(undefined8 *)(param_1 + 0x20),iVar17);
    FUN_148113152(*(undefined8 *)(param_1 + 0x10),iVar12);
    lVar16 = local_d0;
    if (0 < *(int *)(param_1 + 0x60)) {
      puVar6 = (undefined8 *)(local_d0 + 0x80);
      lVar14 = 0;
      iVar11 = 0;
      do {
        lVar10 = *local_a8;
        lVar15 = *(longlong *)(lVar10 + 8 + lVar14);
        if ((lVar15 != 0) && (*(int *)(lVar15 + 0x20) != 0)) {
          if (*(char *)(lVar10 + 0x18 + lVar14) == '\x01') {
            FUN_1481139f2(*(undefined8 *)(local_d0 + 0x10),lVar15);
          }
          if (*(char *)(lVar10 + 0x19 + lVar14) == '\x01') {
            local_78 = *(undefined4 *)(lVar16 + 0x88);
            local_80 = *puVar6;
            lVar3 = *(longlong *)(*(longlong *)(local_d0 + 0x20) + 0x80);
            FUN_1481133e6(lVar15,lVar3,*(undefined4 *)(lVar3 + 0x120),&local_80);
          }
        }
        if (*(longlong *)(lVar10 + lVar14) != 0) {
          if (*(char *)(lVar10 + 0x18 + lVar14) == '\x01') {
            local_88 = *(undefined4 *)(lVar10 + 0x24 + lVar14);
            local_90 = *(undefined8 *)(lVar10 + 0x1c + lVar14);
            FUN_148113a84(*(undefined8 *)(local_d0 + 0x10),*(undefined8 *)(lVar10 + lVar14));
          }
          if (*(char *)(lVar10 + 0x19 + lVar14) == '\x01') {
            local_d8 = *(undefined4 *)(*(longlong *)(lVar10 + lVar14) + 0x120);
            lVar15 = *(longlong *)(*(longlong *)(local_d0 + 0x20) + 0x80);
            FUN_1481b9aa0(*(longlong *)(lVar10 + lVar14),lVar15,0,*(undefined4 *)(lVar15 + 0x120));
          }
        }
        iVar11 = iVar11 + 1;
        lVar14 = lVar14 + 0x28;
      } while (iVar11 < *(int *)(local_d0 + 0x60));
    }
    lVar16 = local_d0;
    iVar11 = *(int *)(local_d0 + 100);
    FUN_143a0c402(*(undefined8 *)(local_d0 + 0x58));
    *(undefined4 *)(lVar16 + 0x60) = 0;
    if ((iVar11 < 0) && (*(int *)(lVar16 + 100) != 0)) {
      FUN_14812494c(local_a8,0);
    }
    lVar16 = *(longlong *)(lVar16 + 0x20);
    piVar1 = (int *)(*(longlong *)(lVar16 + 0x80) + 8);
    LOCK();
    if (*piVar1 == -1) {
      *piVar1 = 0;
    }
    UNLOCK();
    *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar16 + 0x80);
    *(undefined8 *)(lVar16 + 0x80) = 0;
    lpCriticalSection = local_a0;
    iVar11 = local_bc;
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 143a07162 FUN_143a07162 body=148 status=ok
// SIG undefined FUN_143a07162(void)

void FUN_143a07162(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  iVar2 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
    FUN_1481249bc((longlong *)(param_1 + 0x58),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 0x28);
  lVar3 = *param_2;
  *plVar1 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar1[1] = param_2[1];
  lVar3 = param_2[2];
  plVar1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(plVar1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar4;
  *(int *)(plVar1 + 4) = (int)lVar3;
  *(undefined4 *)((longlong)plVar1 + 0x24) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x000143a071e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return;
}



// FUNCTION 143a071f6 FUN_143a071f6 body=784 status=ok
// SIG undefined FUN_143a071f6(void)

/* WARNING: Removing unreachable block (ram,0x000143a07469) */
/* WARNING: Removing unreachable block (ram,0x000143a0746f) */
/* WARNING: Removing unreachable block (ram,0x000143a0747d) */
/* WARNING: Removing unreachable block (ram,0x000143a07486) */
/* WARNING: Removing unreachable block (ram,0x000143a0749e) */

ulonglong FUN_143a071f6(longlong param_1,longlong *param_2,int param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined4 uStack_63;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) {
    uVar8 = 0;
    goto LAB_143a072b3;
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  local_80 = *param_2;
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uStack_78 = (undefined4)param_2[1];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_70 = (undefined4)param_2[2];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_67 = *(undefined4 *)((longlong)param_2 + 0x19);
  uStack_63 = *(undefined4 *)((longlong)param_2 + 0x1d);
  uStack_68 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x15) >> 0x18);
  (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_58,&local_80,1);
  uVar8 = CONCAT71((int7)((ulonglong)&local_58 >> 8),local_58 != 0);
  if (local_58 != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x2c);
    if (iVar3 == 0) {
LAB_143a07500:
      uVar6 = 0;
    }
    else {
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x28);
      uVar6 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != iVar3 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
        goto LAB_143a07500;
        uVar6 = *puVar7;
      }
    }
    FUN_148114b6c(uVar6,&local_a8);
    plVar2 = plStack_a0;
    *(longlong *)(param_1 + 0x28) = local_a8;
    local_a8 = 0;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plStack_a0 == plVar5) {
LAB_143a073a3:
      plVar5 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_a0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else {
      plStack_a0 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x30) = plVar2;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        goto LAB_143a073a3;
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    *(int *)(lVar9 + 0x20) = param_3;
    if ((longlong)*(int *)(lVar9 + 0x18) != 0) {
      lVar10 = *(longlong *)(lVar9 + 0x10);
      lVar9 = (longlong)*(int *)(lVar9 + 0x18) * 0x28;
      do {
        FUN_1401211f6(lVar10,*(int *)(lVar10 + 0x20) * param_3,1);
        lVar10 = lVar10 + 0x28;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    local_a8 = 0;
    local_84 = DAT_14c846338;
    local_8c = DAT_14c846330;
    local_8f = param_5;
    local_8e = param_6;
    plStack_a0 = *(longlong **)(param_1 + 0x28);
    plVar5 = *(longlong **)(param_1 + 0x30);
    local_90 = param_4;
    if (plVar5 == (longlong *)0x0) {
      local_98 = (longlong *)0x0;
      FUN_143a07162(local_58);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_98 = plVar5;
      FUN_143a07162(local_58,&local_a8);
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + -1;
      UNLOCK();
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_143a072b3:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a07507 FUN_143a07507 body=69 status=ok
// SIG undefined FUN_143a07507(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a07507(void)

{
  _DAT_14cb3a748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a07549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a750,1);
  return;
}



// FUNCTION 143a0754c FUN_143a0754c body=551 status=ok
// SIG undefined FUN_143a0754c(void)

void FUN_143a0754c(undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  if (DAT_14c76292d == '\x01') {
    iVar2 = *(int *)(param_1 + 6);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar15 = 0;
      iVar10 = 0;
      iVar9 = 0;
    }
    else {
      puVar6 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 3);
      }
      uVar14 = *puVar6;
      if (uVar14 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar13 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar13 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar15) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar14 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
    }
    if (iVar9 < iVar2) {
      uVar14 = 0xffffffff;
      do {
        lVar12 = param_1[1];
        lVar7 = (longlong)iVar9;
        iVar2 = *(int *)(lVar12 + 4 + lVar7 * 0x18);
        if ((((iVar2 == 0) || (uVar3 = *(uint *)(lVar12 + lVar7 * 0x18), (int)uVar3 < 0)) ||
            (DAT_14c9647dc <= (int)uVar3)) ||
           (((plVar11 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar11 == (longlong *)0x0 || ((int)plVar11[2] != iVar2)) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) {
          plVar8 = *(longlong **)(lVar12 + 8 + lVar7 * 0x18);
LAB_143a0773b:
          (**(code **)(*plVar8 + 0x2a8))();
          FUN_14812501e(param_1 + 1,iVar9);
        }
        else {
          plVar8 = *(longlong **)(lVar12 + 8 + lVar7 * 0x18);
          if (*plVar11 == 0) goto LAB_143a0773b;
          (**(code **)(*plVar8 + 0x2b0))(plVar8,param_2,*param_1);
        }
        uVar14 = uVar14 & ~(uint)uVar13;
        puVar6 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 3);
        }
        iVar2 = *(int *)(param_1 + 6);
        iVar9 = (int)uVar15;
        lVar12 = (longlong)iVar9;
        uVar3 = puVar6[lVar12] & uVar14;
        if (uVar3 == 0) {
          iVar4 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar4 = iVar2 + -1;
          }
          iVar4 = iVar4 >> 5;
          iVar5 = iVar4;
          if (iVar4 < iVar9) {
            iVar5 = iVar9;
          }
          if (iVar4 <= iVar9) {
            return;
          }
          lVar7 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = puVar6[lVar12 + lVar7 + 1];
            if (uVar3 != 0) break;
            lVar7 = lVar7 + 1;
            if (iVar5 - lVar12 == lVar7) {
              return;
            }
          }
          uVar15 = (ulonglong)(iVar9 + (int)lVar7 + 1);
          uVar14 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar2);
    }
  }
  return;
}



// FUNCTION 143a07773 FUN_143a07773 body=69 status=ok
// SIG undefined FUN_143a07773(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a07773(void)

{
  _DAT_14cb3a760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a077b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a768,1);
  return;
}



// FUNCTION 143a077c8 FUN_143a077c8 body=69 status=ok
// SIG undefined FUN_143a077c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a077c8(void)

{
  _DAT_14cb3a778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a0780a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a780,1);
  return;
}



// FUNCTION 143a0780d FUN_143a0780d body=69 status=ok
// SIG undefined FUN_143a0780d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a0780d(void)

{
  _DAT_14cb3a788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a0784f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3a790,1);
  return;
}



// FUNCTION 143a07852 FUN_143a07852 body=137 status=ok
// SIG undefined FUN_143a07852(void)

int FUN_143a07852(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < (longlong)iVar1) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x78) = iVar1 + -1;
    lVar2 = (longlong)iVar3 * 0x70 + *(longlong *)(param_1 + 0x80);
    if (lVar2 != 0) goto LAB_143a07882;
  }
  iVar3 = *(int *)(param_1 + 0x88);
  lVar2 = FUN_148118f3e(param_1 + 0x80);
LAB_143a07882:
  if (iVar3 != -1) {
    iVar1 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
      FUN_1446f48e2(param_1 + 0x60,iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 4) = iVar3;
    FUN_148117d9e(lVar2,param_1);
  }
  return iVar3;
}



// FUNCTION 143a078dc FUN_143a078dc body=1259 status=ok
// SIG undefined FUN_143a078dc(void)

void FUN_143a078dc(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143a07d22;
    if (iVar7 != 1) goto LAB_143a0793a;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143a07d22;
  }
  else {
LAB_143a0793a:
    if (iVar7 == 0x10) goto LAB_143a07d22;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143a07d22:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a07d22;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143a07aa7;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143a091f0);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143a07aa7:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_143a07b27;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143a07b27:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14adbc360;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14adbc340;
    local_68[0] = &LAB_143a0cd3c;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDITexture_RemoveInstance",&DAT_14cb3ad1c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a07ddc FUN_143a07ddc body=2004 status=ok
// SIG undefined FUN_143a07ddc(void)

undefined8 FUN_143a07ddc(longlong param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar21 = param_2[6];
  if ((ulonglong)uVar21 != 0xffffffff) {
    if (((-1 < (int)uVar21) && ((int)uVar21 < *(int *)(*(longlong *)(param_2 + 8) + 0x48))) &&
       (lVar20 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 8) + 0x40) + (ulonglong)uVar21 * 8),
       lVar20 != 0)) {
      if (DAT_14cb0b430 == 0) {
        local_d0 = local_88;
        local_88[0] = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_145892f94;
        local_d8 = &LAB_147d6dbf3;
        local_e0 = &LAB_1464081e0;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10000001;
        local_100 = 8;
        local_108 = (code **)CONCAT44(local_108._4_4_,0x138);
        FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
      }
      if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) == DAT_14cb0b430 + 0x30))
      goto LAB_143a07e6c;
    }
    FUN_144b34b0c(param_2,0);
    goto LAB_143a07e81;
  }
  lVar20 = *(longlong *)(param_1 + 0x38);
LAB_143a07e6c:
  cVar4 = FUN_144b34b0c(param_2,lVar20);
  if (lVar20 == 0 || cVar4 != '\0') goto LAB_143a07e81;
  lVar9 = FUN_14586995e();
  if (*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) {
    lVar22 = 0;
  }
  else {
    lVar22 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30) {
      lVar22 = lVar20;
    }
  }
  lVar9 = FUN_1458bbce6();
  if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
      != lVar9 + 0x30)) {
    if (lVar22 == 0) goto LAB_143a07e81;
LAB_143a07f08:
    puVar11 = *(uint **)(lVar22 + 0x138);
    if (puVar11 != (uint *)0x0) {
      uVar21 = puVar11[2] & 0x1fffffff;
      puVar13 = puVar11 + 1;
      goto LAB_143a07f22;
    }
    uVar21 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    if (lVar22 != 0) goto LAB_143a07f08;
    uVar21 = *(uint *)(lVar20 + 0x148);
    puVar13 = (uint *)(lVar20 + 0x144);
    puVar11 = (uint *)(lVar20 + 0x140);
LAB_143a07f22:
    uVar18 = *puVar13;
    uVar19 = *puVar11;
  }
  uVar5 = *(uint *)(lVar20 + 0xc);
  *param_2 = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar5 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    uVar17 = DAT_14c964868 + 1;
    bVar23 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar23) {
      local_b4 = uVar17;
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar17);
      uVar17 = local_b4;
    }
    LOCK();
    uVar5 = *(uint *)(lVar9 + 0x10);
    bVar23 = uVar5 == 0;
    if (bVar23) {
      *(uint *)(lVar9 + 0x10) = uVar17;
      uVar5 = 0;
    }
    UNLOCK();
    if (bVar23) {
      uVar5 = uVar17;
    }
  }
  param_2[1] = uVar5;
  param_2[2] = uVar19;
  param_2[3] = uVar18;
  param_2[4] = uVar21;
  local_b0 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_3 + 0x100);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  local_a0 = lVar20;
  uStack_98 = uVar19;
  uStack_94 = uVar18;
  local_90 = uVar21;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a07fd1;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a07fd6;
      goto LAB_143a08050;
    }
  }
  else {
LAB_143a07fd1:
    if (iVar6 != 0x10) {
LAB_143a08050:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_143a07fd6;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a07fd6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a081df;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a081df:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar16 + 0x1a);
          uVar21 = puVar11[0x12];
          if (puVar13 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar18 = *puVar11;
            *puVar11 = *puVar11 + uVar21 + 1;
            UNLOCK();
            if ((uVar18 ^ uVar21) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar16 + 0x1a);
            uVar21 = 0;
            if (puVar13 <= puVar11 + 0x4000) {
              uVar21 = 1;
              goto LAB_143a0825f;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_143a0825f:
        *(uint **)(puVar11 + 0x10) = puVar13;
        puVar11[0x12] = uVar21;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adbc390;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_b0._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_a8._4_4_;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = local_a0._4_4_;
        *(uint *)(puVar16 + 0x18) = uStack_98;
        *(uint *)((longlong)puVar16 + 0xc4) = uStack_94;
        puVar16[0x19] = CONCAT44(uStack_8c,local_90);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar21 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          uVar12 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbc370;
        local_78[5] = CONCAT44(uStack_8c,local_90);
        *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
        *(uint *)(local_78 + 4) = uStack_98;
        *(uint *)((longlong)local_78 + 0x24) = uStack_94;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = (code *)&LAB_143a0d1e6;
        }
        local_108 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDITexture_UpdateInstance",&DAT_14cb3ad20);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a07e81;
    }
  }
LAB_143a07fd6:
  FUN_143a0cf14(&local_b0);
LAB_143a07e81:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a085b2 FUN_143a085b2 body=1011 status=ok
// SIG undefined FUN_143a085b2(void)

void FUN_143a085b2(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_78 [32];
  uint *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(param_2[2] + 0x10);
    lVar13 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar13 = *(longlong *)(lVar2 + 0x50);
    }
    iVar9 = *(int *)(lVar13 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar13 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x38) == lVar8)
        goto LAB_143a08641;
        iVar9 = *(int *)(lVar13 + 0x30);
      } while (iVar9 != -1);
    }
  }
  lVar13 = 0;
LAB_143a08641:
  lVar2 = *param_2;
  uVar16 = (int)param_2[10] + 0xfU & 0xfffffff0;
  FUN_14812642c();
  puVar17 = (undefined8 *)((ulonglong)uVar16 + param_2[7]);
  *(uint *)(param_2 + 10) = DAT_14cb3ad64 + uVar16;
  if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0x10) == 0)) {
    *(undefined4 *)(puVar17 + 1) = DAT_14c846338;
    *puVar17 = DAT_14c846330;
    puVar17[3] = DAT_14c9c0d80;
    uVar5 = FUN_140579634(param_2[1],lVar2,1);
    puVar17[2] = uVar5;
  }
  else {
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar13 + 0x20);
    *puVar17 = *(undefined8 *)(lVar13 + 0x18);
    puVar17[3] = *(undefined8 *)(lVar13 + 8);
    lVar8 = *(longlong *)param_2[5];
    uVar11 = *(ulonglong *)(lVar8 + 0x20);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x20;
    }
    sVar3 = (short)(puVar17 + 2) - (short)param_2[7];
    if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
      lVar14 = 0;
      do {
        if (*(short *)(uVar11 + lVar14) == sVar3) goto LAB_143a08787;
        lVar14 = lVar14 + 6;
      } while ((longlong)*(int *)(lVar8 + 0x28) * 6 != lVar14);
    }
    uVar11 = *(ulonglong *)(lVar8 + 0x10);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x10;
    }
    if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
      lVar14 = 0;
      do {
        if (*(short *)(uVar11 + lVar14) == sVar3) goto LAB_143a08787;
        lVar14 = lVar14 + 4;
      } while ((longlong)*(int *)(lVar8 + 0x18) * 4 != lVar14);
    }
  }
  goto LAB_143a0872f;
LAB_143a08787:
  lVar8 = *(longlong *)(lVar13 + 0x28);
  if (lVar8 == 0) {
    uVar11 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x60);
    if (uVar11 != 0) {
      LOCK();
      *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
      UNLOCK();
      puVar12 = (uint *)(uVar11 + 8);
      uVar16 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar4 = uVar16 & 0x7fffffff ^ uVar16 >> 0x10;
      uVar16 = *(uint *)(lVar2 + 0x248);
      uVar10 = uVar16 & uVar4;
      lVar8 = lVar2 + 0x230;
      if (*(longlong *)(lVar2 + 0x238) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x238);
      }
      do {
        if (*(uint *)(lVar8 + (longlong)(int)uVar10 * 4) == uVar4) {
          lVar14 = *(longlong *)(lVar2 + 0x220);
          if (*(longlong *)(lVar2 + 0x220) == 0) {
            lVar14 = lVar2 + 0x218;
          }
          iVar9 = *(int *)(lVar14 + (longlong)(int)uVar10 * 4);
          lVar14 = (longlong)iVar9 * 0x10;
          if (uVar11 == *(ulonglong *)(*(longlong *)(lVar2 + 0x1d8) + lVar14)) {
            if ((iVar9 != -1) &&
               (plVar15 = (longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar14 + 8),
               plVar15 != (longlong *)0x0)) {
              lVar8 = *plVar15;
              *(longlong *)(lVar13 + 0x28) = lVar8;
              if (lVar8 == 0) goto LAB_143a08873;
              goto LAB_143a0891e;
            }
            break;
          }
        }
        uVar10 = uVar10 + 1 & uVar16;
      } while (uVar10 != (*(int *)(lVar2 + 0x24c) + uVar4 + 1 & uVar16));
      *(undefined8 *)(lVar13 + 0x28) = 0;
LAB_143a08873:
      FUN_1447ec05f(&local_50,uVar11,L"NiagaraTexture2DArray");
      uVar5 = FUN_14473c272(lVar2,&local_50,0);
      *(undefined8 *)(lVar13 + 0x28) = uVar5;
      local_58 = puVar12;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x38))();
        uVar5 = *(undefined8 *)(lVar13 + 0x28);
      }
      FUN_14022b18a(lVar2,uVar5);
      lVar8 = *(longlong *)(lVar13 + 0x28);
      if (lVar8 == 0) {
        lVar8 = 0;
        puVar12 = local_58;
      }
      else {
        lVar14 = param_2[1];
        iVar9 = *(int *)(lVar14 + 0x260);
        *(uint *)(lVar14 + 0x260) = iVar9 + 1U;
        if (*(uint *)(lVar14 + 0x264) < iVar9 + 1U) {
          FUN_144904f42((longlong *)(lVar14 + 600),iVar9);
        }
        lVar14 = *(longlong *)(lVar14 + 600);
        lVar18 = (longlong)iVar9 * 0x10;
        *(longlong *)(lVar14 + lVar18) = lVar8;
        *(undefined4 *)(lVar14 + 8 + lVar18) = 0x70;
        *(undefined1 *)(lVar14 + 0xc + lVar18) = 1;
        lVar8 = *(longlong *)(lVar13 + 0x28);
        puVar12 = local_58;
      }
LAB_143a0891e:
      LOCK();
      uVar16 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        LOCK();
        uVar16 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(uVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = uVar11;
          plVar15 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar15;
              LOCK();
              bVar19 = plVar15 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar19) {
                plVar15 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar19 = plVar7 != DAT_14ca843c8;
              plVar15 = plVar6;
              if (bVar19) {
                plVar7 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
      if (lVar8 != 0) goto LAB_143a08986;
    }
    lVar8 = FUN_140579634(param_2[1],lVar2,1);
  }
LAB_143a08986:
  puVar17[2] = lVar8;
LAB_143a0872f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a089a6 FUN_143a089a6 body=544 status=ok
// SIG undefined FUN_143a089a6(void)

ulonglong FUN_143a089a6(longlong *param_1,int *param_2,int *param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 **ppuVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined2 *local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_2 == *param_3) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (0 < *param_2) {
      iVar1 = param_2[1];
      lVar3 = *(longlong *)(*(longlong *)param_1[1] + 0x48);
      iVar2 = param_3[1];
      lVar4 = *(longlong *)(*(longlong *)param_1[3] + 0x48);
      iVar7 = 0;
      do {
        local_88 = (undefined2 *)CONCAT44(local_88._4_4_,*(undefined4 *)param_1[5]);
        cVar6 = (**(code **)(**(longlong **)param_1[4] + 0xa0))
                          (*(longlong **)param_1[4],iVar1 + lVar3,iVar2 + lVar4,iVar7);
        if (cVar6 == '\0') {
          local_88._0_4_ = iVar7;
          (**(code **)(**(longlong **)param_1[4] + 0xa8))
                    (*(longlong **)param_1[4],&local_58,*(undefined8 *)param_1[1],param_2);
          local_88 = (undefined2 *)CONCAT44(local_88._4_4_,iVar7);
          (**(code **)(**(longlong **)param_1[4] + 0xa8))
                    (*(longlong **)param_1[4],&local_68,*(undefined8 *)param_1[3],param_3);
          local_88 = &DAT_149dfb77a;
          if (local_60 != 0) {
            local_88 = local_68;
          }
          puVar9 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar9 = local_58;
          }
          local_80 = param_4;
          FUN_140002266(&local_78,L"Element %d Mismatch (%s -> %s) for %s data",iVar7,puVar9);
          param_1 = (longlong *)*param_1;
          if (param_1 == &local_78) {
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_1 != 0) {
              FUN_1400020a8();
            }
            *param_1 = local_78;
            local_78 = 0;
            *(undefined4 *)(param_1 + 1) = local_70;
            *(undefined4 *)((longlong)param_1 + 0xc) = local_6c;
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_143a08b8c;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *param_2);
    }
  }
  else {
    local_88 = param_4;
    FUN_140002266(&local_58,L"Element Count Mismatch (%d -> %d) for %s data",
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)param_1[1] + 0x28) + (longlong)*(int *)param_1[2] * 8
                   ),*(undefined4 *)
                      (*(longlong *)(*(longlong *)param_1[3] + 0x28) +
                      (longlong)*(int *)param_1[2] * 8));
    ppuVar5 = (undefined2 **)*param_1;
    if (ppuVar5 == &local_58) {
LAB_143a08b8c:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*ppuVar5 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *ppuVar5 = local_58;
      *(int *)(ppuVar5 + 1) = local_50;
      *(undefined4 *)((longlong)ppuVar5 + 0xc) = local_4c;
    }
    uVar8 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143a08bc7 FUN_143a08bc7 body=169 status=ok
// SIG undefined FUN_143a08bc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a08bc7(void)

{
  DAT_14cb3ab10 = 0;
  if (DAT_14cb3ab08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb3aad0 = 0;
  if (DAT_14cb3aad4 != 0) {
    FUN_14472eb64(&DAT_14cb3aac8,0);
  }
  _DAT_14cb3aaf8 = 0xffffffff;
  _DAT_14cb3aaf0 = 0;
  if (0x80 < DAT_14cb3aaf4) {
    DAT_14cb3aaf4 = 0x80;
    FUN_1446efbd8(&DAT_14cb3aad8,0);
  }
  if (DAT_14cb3aae8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb3aac8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143a08cf7 FUN_143a08cf7 body=658 status=ok
// SIG undefined FUN_143a08cf7(void)

bool FUN_143a08cf7(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_90;
  int local_88;
  int local_84;
  undefined1 local_80 [16];
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1403de9f2(param_1,&local_f8,&DAT_149e06196,1);
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  plVar5 = local_e8;
  plVar6 = &local_90;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2;
  plVar6 = local_e8;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = &local_90;
  plVar6 = param_2;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  if ((longlong)(int)uStack_f0 != 0) {
    lVar7 = (longlong)(int)uStack_f0 << 4;
    lVar4 = local_f8;
    do {
      FUN_147c0a94e(param_2,&local_90,lVar4,0);
      lVar4 = lVar4 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  FUN_1408d9f48(local_e8,&local_90,param_2);
  iVar3 = local_60._4_4_;
  iVar2 = local_88;
  local_48 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  if (local_84 != 0) {
    FUN_14472eb64(&local_90,0);
  }
  local_60 = 0xffffffff;
  local_68 = 0;
  if (0x80 < local_64) {
    local_64 = 0x80;
    FUN_1446efbd8(local_80,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  uVar1 = (ulonglong)local_e8[1] >> 0x20;
  local_e8[1] = local_e8[1] & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_14472eb64(local_e8,0);
  }
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    FUN_1446efbd8(local_d8,0);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar3 < iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a08f8a FUN_143a08f8a body=472 status=ok
// SIG undefined FUN_143a08f8a(void)

bool FUN_143a08f8a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  int local_110;
  undefined8 *local_108;
  ulonglong uStack_100;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a0;
  int local_98;
  undefined4 uStack_94;
  int local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  FUN_1403de9f2(param_1,&local_108,&DAT_149e06196,1);
  local_d8 = 0;
  local_d0 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  plVar2 = local_f8;
  plVar3 = &local_a0;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  plVar2 = param_2;
  plVar3 = local_f8;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  plVar2 = &local_a0;
  plVar3 = param_2;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  if ((longlong)(int)uStack_100 != 0) {
    puVar5 = local_108 + (longlong)(int)uStack_100 * 2;
    puVar4 = local_108;
    do {
      local_118 = *puVar4;
      local_110 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        local_110 = 0;
      }
      FUN_14812060a(&local_a0,&local_118);
      if ((local_a0 != 0) && (CONCAT44(uStack_94,local_98) != 0)) {
        FUN_1481206fe(param_2,&local_118,&local_a0);
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar5);
  }
  FUN_148120882(local_f8,&local_a0,param_2);
  local_58 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_145af7708(&local_a0);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_145af7708(local_f8);
  FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
  if (local_108 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return local_6c < local_98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a09163 FUN_143a09163 body=44 status=ok
// SIG undefined FUN_143a09163(void)

void FUN_143a09163(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb3ac80;
  if (DAT_14cb3ac80 == 0) {
    return;
  }
  FUN_148121286(DAT_14cb3ac80);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 143a09218 FUN_143a09218 body=29 status=ok
// SIG undefined FUN_143a09218(void)

undefined8 FUN_143a09218(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0924a FUN_143a0924a body=85 status=ok
// SIG undefined FUN_143a0924a(void)

void FUN_143a0924a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbc00;
  return;
}



// FUNCTION 143a092a0 FUN_143a092a0 body=85 status=ok
// SIG undefined FUN_143a092a0(void)

void FUN_143a092a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbc00;
  return;
}



// FUNCTION 143a092f6 FUN_143a092f6 body=118 status=ok
// SIG undefined FUN_143a092f6(void)

void FUN_143a092f6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adbbc00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0935d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a0936c FUN_143a0936c body=62 status=ok
// SIG undefined FUN_143a0936c(void)

void FUN_143a0936c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143a093ee(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a093ac FUN_143a093ac body=64 status=ok
// SIG undefined FUN_143a093ac(void)

undefined8 FUN_143a093ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_143a093ee(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a093ee FUN_143a093ee body=1199 status=ok
// SIG undefined FUN_143a093ee(void)

void FUN_143a093ee(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  size_t sVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  ushort uVar17;
  undefined2 *puVar18;
  ushort uVar19;
  ulonglong uVar20;
  int iVar21;
  wchar_t *_Str;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_94;
  longlong local_90 [2];
  longlong local_80;
  int local_78;
  uint local_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *param_2;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar11 = (undefined8 *)*param_1;
    puVar7 = puVar11 + (longlong)*(int *)(param_1 + 1) * 2;
    puVar16 = puVar11;
LAB_143a09448:
    puVar18 = &DAT_149dfb77a;
    if (*(int *)(puVar16 + 1) != 0) {
      puVar18 = (undefined2 *)*puVar16;
    }
    lVar12 = 0;
    do {
      uVar17 = *(ushort *)((longlong)puVar18 + lVar12);
      uVar15 = (uint)uVar17;
      uVar19 = *(ushort *)((longlong)&DAT_14a3cba14 + lVar12);
      uVar5 = (uint)uVar19;
      if (uVar17 == uVar19) {
        if (uVar17 == 0) {
          uVar13 = 1;
          goto LAB_143a094a5;
        }
      }
      else {
        if (0x7f < (uVar19 | uVar17)) goto LAB_143a0948d;
        uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar17];
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar19];
        if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[uVar19]) goto LAB_143a0948d;
      }
      lVar12 = lVar12 + 2;
    } while( true );
  }
  bVar22 = lVar3 == 0;
  uVar13 = 0;
  goto LAB_143a09525;
LAB_143a0948d:
  iVar6 = uVar15 - uVar5;
  uVar13 = CONCAT31((int3)((uint)iVar6 >> 8),iVar6 == 0);
  if ((iVar6 == 0) || (puVar16 = puVar16 + 2, puVar16 == puVar7)) goto LAB_143a094a5;
  goto LAB_143a09448;
LAB_143a09502:
  bVar22 = uVar17 == uVar19;
  if ((bVar22) || (puVar11 = puVar11 + 2, puVar11 == puVar7)) goto LAB_143a09525;
  goto LAB_143a094bb;
LAB_143a095fc:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar17] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar19];
LAB_143a095ff:
  if (iVar21 == 0) {
LAB_143a09622:
    uVar15 = iVar6 - 1;
    if (iVar6 == 0) {
      puVar18 = &DAT_149dfb77a;
      uVar15 = 0;
    }
    else {
      puVar18 = (undefined2 *)*puVar11;
    }
    if ((int)uVar15 <= (int)uVar5) {
      uVar5 = uVar15;
    }
    uVar8 = (ulonglong)uVar5;
    if ((int)uVar5 < 1) {
      uVar8 = 0;
    }
    FUN_14006620a(&local_68,puVar18 + uVar8,uVar15 - (int)uVar8);
    goto LAB_143a09663;
  }
LAB_143a0960a:
  puVar11 = puVar11 + 2;
  if (puVar11 == puVar16) goto LAB_143a0965b;
  goto LAB_143a09594;
LAB_143a094a5:
  bVar22 = true;
  if (lVar3 != 0) {
LAB_143a094bb:
    puVar18 = &DAT_149dfb77a;
    if (*(int *)(puVar11 + 1) != 0) {
      puVar18 = (undefined2 *)*puVar11;
    }
    lVar12 = 0;
    do {
      uVar17 = *(ushort *)((longlong)puVar18 + lVar12);
      uVar8 = (ulonglong)uVar17;
      uVar19 = *(ushort *)((longlong)L"allworlds" + lVar12);
      if (uVar17 == uVar19) {
        bVar22 = true;
        if (uVar17 == 0) break;
      }
      else {
        if (0x7f < (uVar19 | uVar17)) goto LAB_143a09502;
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar20 = (ulonglong)uVar19;
        uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar20]) goto LAB_143a09502;
      }
      lVar12 = lVar12 + 2;
    } while( true );
  }
LAB_143a09525:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3ad00) && (FUN_144b3d300(&DAT_14cb3ad00), DAT_14cb3ad00 == -1)) {
    FUN_140056680(&DAT_14cb3acf0);
    atexit((_func_5014 *)&LAB_143a0989e);
    _Init_thread_footer(&DAT_14cb3ad00);
  }
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    uVar8 = (ulonglong)(DAT_14cb3acf8 - 1);
    if (DAT_14cb3acf8 == 0) {
      uVar8 = 0;
    }
    puVar11 = (undefined8 *)*param_1;
    puVar18 = &DAT_149dfb77a;
    if (DAT_14cb3acf8 != 0) {
      puVar18 = DAT_14cb3acf0;
    }
    puVar16 = puVar11 + (longlong)*(int *)(param_1 + 1) * 2;
LAB_143a09594:
    uVar5 = (uint)uVar8;
    local_94 = uVar13;
    if (0 < (int)uVar5) {
      iVar6 = *(int *)(puVar11 + 1);
      puVar14 = &DAT_149dfb77a;
      if (iVar6 != 0) {
        puVar14 = (undefined2 *)*puVar11;
      }
      lVar12 = 0;
      uVar20 = uVar8;
      do {
        uVar17 = *(ushort *)((longlong)puVar14 + lVar12);
        uVar19 = *(ushort *)((longlong)puVar18 + lVar12);
        if (uVar17 == uVar19) {
          if (uVar17 == 0) goto LAB_143a09622;
        }
        else {
          if (0x7f < (uVar19 | uVar17)) {
            iVar21 = (uint)uVar17 - (uint)uVar19;
            goto LAB_143a095ff;
          }
          if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[(uint)uVar19]) goto LAB_143a095fc;
        }
        if (uVar20 == 1) goto LAB_143a09622;
        uVar20 = uVar20 - 1;
        lVar12 = lVar12 + 2;
      } while( true );
    }
    goto LAB_143a0960a;
  }
LAB_143a0965b:
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
LAB_143a09663:
  FUN_14012e468(&local_80,0x10,1,0);
  uVar8 = (ulonglong)local_70;
  if ((-1 < (int)local_70) && ((int)local_70 < local_78)) {
    do {
      lVar12 = *(longlong *)(local_80 + (uVar8 & 0xffffffff) * 8);
      if ((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) {
        if (!bVar22) {
          lVar9 = *(longlong *)(lVar12 + 0xb0);
          if (lVar9 == 0) {
            lVar9 = FUN_1448abda6(lVar12);
          }
          if (lVar9 != lVar3) goto LAB_143a097c5;
        }
        if ((int)uStack_60 < 2) {
LAB_143a09773:
          if (*(char *)(lVar12 + 0x798) != '\x04') {
            lVar9 = *(longlong *)(lVar12 + 0x760);
            plVar4 = *(longlong **)(lVar12 + 0x768);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            if (lVar9 != 0) {
              FUN_143ac873e(lVar9,uVar13);
            }
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
        }
        else if (*(longlong *)(lVar12 + 0x668) != 0) {
          local_50 = *(undefined8 *)(*(longlong *)(lVar12 + 0x668) + 0x18);
          FUN_1400021e4(&local_50,local_90);
          _Str = L"";
          if ((int)uStack_60 != 0) {
            _Str = local_68;
          }
          if (_Str == (wchar_t *)0x0) {
            bVar23 = false;
          }
          else {
            sVar10 = wcslen(_Str);
            local_a0 = 0xffffffff;
            local_a8 = 0;
            iVar6 = FUN_1447ee042(local_90,_Str,sVar10 & 0xffffffff,1);
            bVar23 = iVar6 != -1;
          }
          if (local_90[0] != 0) {
            FUN_1400020a8();
          }
          if (bVar23) goto LAB_143a09773;
        }
      }
LAB_143a097c5:
      uVar8 = (longlong)(int)local_70;
      do {
        uVar20 = uVar8;
        uVar8 = uVar20 + 1;
        local_70 = (uint)uVar8;
        if ((longlong)local_78 <= (longlong)uVar8) break;
      } while (*(longlong *)(local_80 + uVar8 * 8) == 0);
    } while ((-2 < (longlong)uVar20) && ((int)local_70 < local_78));
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a098b0 FUN_143a098b0 body=29 status=ok
// SIG undefined FUN_143a098b0(void)

undefined8 FUN_143a098b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a098e2 FUN_143a098e2 body=85 status=ok
// SIG undefined FUN_143a098e2(void)

void FUN_143a098e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbc90;
  return;
}



// FUNCTION 143a09938 FUN_143a09938 body=85 status=ok
// SIG undefined FUN_143a09938(void)

void FUN_143a09938(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbc90;
  return;
}



// FUNCTION 143a0998e FUN_143a0998e body=118 status=ok
// SIG undefined FUN_143a0998e(void)

void FUN_143a0998e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adbbc90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a099f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a09a0a FUN_143a09a0a body=16 status=ok
// SIG undefined FUN_143a09a0a(void)

undefined1 FUN_143a09a0a(void)

{
  FUN_14183b810();
  return 1;
}



// FUNCTION 143a09a1a FUN_143a09a1a body=31 status=ok
// SIG undefined FUN_143a09a1a(void)

undefined8 FUN_143a09a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a09a3a FUN_143a09a3a body=31 status=ok
// SIG undefined FUN_143a09a3a(void)

undefined8 FUN_143a09a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a09aa8 FUN_143a09aa8 body=29 status=ok
// SIG undefined FUN_143a09aa8(void)

undefined8 FUN_143a09aa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a09c44 FUN_143a09c44 body=93 status=ok
// SIG undefined FUN_143a09c44(void)

void FUN_143a09c44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbe00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143a09ca2 FUN_143a09ca2 body=93 status=ok
// SIG undefined FUN_143a09ca2(void)

void FUN_143a09ca2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbe00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143a09d00 FUN_143a09d00 body=126 status=ok
// SIG undefined FUN_143a09d00(void)

void FUN_143a09d00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adbbe00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a09d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a09d8a FUN_143a09d8a body=268 status=ok
// SIG undefined FUN_143a09d8a(void)

undefined8 FUN_143a09d8a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143a09e90;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143a09e90;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143a09e90:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143a09e44;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140557bc8(*(undefined8 *)(param_1 + 0x20),0);
      uVar6 = 1;
      goto LAB_143a09e44;
    }
  }
  uVar6 = 0;
LAB_143a09e44:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a09e98 FUN_143a09e98 body=162 status=ok
// SIG undefined FUN_143a09e98(void)

void FUN_143a09e98(longlong *param_1,undefined8 param_2)

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
        goto LAB_143a09f25;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143a09f25:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143a09f3a FUN_143a09f3a body=43 status=ok
// SIG undefined FUN_143a09f3a(void)

void FUN_143a09f3a(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143a09f62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 143a09f70 FUN_143a09f70 body=29 status=ok
// SIG undefined FUN_143a09f70(void)

void FUN_143a09f70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a09f8e FUN_143a09f8e body=71 status=ok
// SIG undefined FUN_143a09f8e(void)

undefined8 * FUN_143a09f8e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14adbbea0;
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



// FUNCTION 143a09fd6 FUN_143a09fd6 body=282 status=ok
// SIG undefined FUN_143a09fd6(void)

undefined8 * FUN_143a09fd6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0a0f0 FUN_143a0a0f0 body=141 status=ok
// SIG undefined FUN_143a0a0f0(void)

void FUN_143a0a0f0(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0a171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a0a17e FUN_143a0a17e body=165 status=ok
// SIG undefined FUN_143a0a17e(void)

void FUN_143a0a17e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  LARGE_INTEGER LVar6;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x14];
  if (lVar1 == 0) {
    LVar6.QuadPart = -1;
  }
  else {
    QueryPerformanceCounter(&local_30);
    LVar6 = local_30;
  }
  FUN_144af47f4(param_1 + 1);
  lVar2 = *param_1;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x9c);
  lVar5 = param_1[0x14];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xa4);
  *(int *)(lVar2 + 0x388) = (int)param_1[0x13];
  *(undefined4 *)(lVar2 + 0x38c) = uVar3;
  *(int *)(lVar2 + 0x390) = (int)lVar5;
  *(undefined4 *)(lVar2 + 0x394) = uVar4;
  if (LVar6.QuadPart != -1) {
    QueryPerformanceCounter(&local_30);
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x40) =
           *(longlong *)(lVar1 + 0x40) + (local_30.QuadPart - (longlong)LVar6);
      *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0a22e FUN_143a0a22e body=29 status=ok
// SIG undefined FUN_143a0a22e(void)

void FUN_143a0a22e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a0a24c FUN_143a0a24c body=60 status=ok
// SIG undefined FUN_143a0a24c(void)

undefined8 * FUN_143a0a24c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adbbed0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0a29e FUN_143a0a29e body=12 status=ok
// SIG undefined FUN_143a0a29e(void)

void FUN_143a0a29e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a0a2a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a0a2aa FUN_143a0a2aa body=29 status=ok
// SIG undefined FUN_143a0a2aa(void)

undefined8 FUN_143a0a2aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0a2c8 FUN_143a0a2c8 body=282 status=ok
// SIG undefined FUN_143a0a2c8(void)

undefined8 * FUN_143a0a2c8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0a3e2 FUN_143a0a3e2 body=109 status=ok
// SIG undefined FUN_143a0a3e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a0a3e2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144807ef6(_DAT_000000b0,_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144807ef6(param_1[0x16],param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0a425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a0a450 FUN_143a0a450 body=2898 status=ok
// SIG undefined FUN_143a0a450(void)

void FUN_143a0a450(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar14 = *param_4;
  param_3 = (longlong *)*param_3;
  if (DAT_14cb413d0 == param_3) {
    lVar24 = *(longlong *)*param_1;
    uVar12 = *(uint *)param_1[2];
    iVar11 = *(int *)param_1[1];
    *(int *)param_1[1] = iVar11 + 1;
    lVar25 = *(longlong *)(lVar24 + 0x18);
    iVar13 = *(int *)(lVar24 + 0x128);
    lVar24 = *(longlong *)*param_1;
    uVar5 = *(uint *)param_1[2];
    iVar6 = *(int *)param_1[1];
    *(int *)param_1[1] = iVar6 + 1;
    lVar27 = *(longlong *)(lVar24 + 0x18);
    iVar7 = *(int *)(lVar24 + 0x128);
    lVar24 = *(longlong *)*param_1;
    uVar8 = *(uint *)param_1[2];
    iVar9 = *(int *)param_1[1];
    *(int *)param_1[1] = iVar9 + 1;
    if (0 < *(int *)param_1[3]) {
      iVar10 = *(int *)(lVar24 + 0x128);
      lVar24 = *(longlong *)(lVar24 + 0x18);
      lVar26 = 0;
      do {
        pfVar15 = (float *)param_1[5];
        fVar1 = pfVar15[2];
        fVar2 = pfVar15[1];
        lVar22 = (longlong)(int)lVar26 * (longlong)*(int *)param_1[4];
        dVar3 = *(double *)(lVar14 + 0x10 + lVar22);
        dVar4 = *(double *)(lVar14 + 8 + lVar22);
        *(float *)(lVar25 + (ulonglong)(uint)(iVar13 * iVar11) + (ulonglong)uVar12 * 4 + lVar26 * 4)
             = (float)(*(double *)(lVar14 + lVar22) - (double)*pfVar15 * 65536.0);
        *(float *)(lVar27 + (ulonglong)(uint)(iVar7 * iVar6) + (ulonglong)uVar5 * 4 + lVar26 * 4) =
             (float)(dVar4 - (double)fVar2 * 65536.0);
        *(float *)((ulonglong)(uint)(iVar9 * iVar10) + lVar24 + (ulonglong)uVar8 * 4 + lVar26 * 4) =
             (float)(dVar3 - (double)fVar1 * 65536.0);
        lVar26 = lVar26 + 1;
      } while ((int)lVar26 < *(int *)param_1[3]);
    }
  }
  else {
    param_2 = (longlong *)*param_2;
    if (param_2 == (longlong *)0x0) {
      lVar24 = 0;
      plVar19 = (longlong *)0x0;
    }
    else {
      do {
        for (lVar24 = param_2[10]; lVar24 != 0; lVar24 = *(longlong *)(lVar24 + 0x18)) {
          plVar19 = param_2;
          if ((~*(uint *)(*(longlong *)(lVar24 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0a607;
        }
        param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
        lVar24 = 0;
        plVar19 = (longlong *)0x0;
      } while (param_2 != (longlong *)0x0);
    }
LAB_143a0a607:
    if (param_3 == (longlong *)0x0) {
      plVar20 = (longlong *)0x0;
      lVar25 = 0;
    }
    else {
      do {
        plVar20 = param_3;
        for (lVar25 = plVar20[10]; lVar25 != 0; lVar25 = *(longlong *)(lVar25 + 0x18)) {
          if ((~*(uint *)(*(longlong *)(lVar25 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0a653;
        }
        param_3 = (longlong *)(**(code **)(*plVar20 + 0x2b0))(plVar20);
        plVar20 = (longlong *)0x0;
        lVar25 = 0;
      } while (param_3 != (longlong *)0x0);
    }
LAB_143a0a653:
    if (lVar24 != 0) {
      local_68 = 0x101008001;
      do {
        iVar11 = *(int *)(lVar24 + 0x44);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952420) &&
           (local_78 = plVar20, FUN_144b3d300(&DAT_14c952420), plVar20 = local_78,
           DAT_14c952420 == -1)) {
          FUN_14475b26a();
          local_80 = FUN_14079c5e4;
          local_88 = &DAT_14c9520b8;
          local_98 = local_68;
          local_90 = 0;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
          atexit(FUN_1428170bb);
          _Init_thread_footer(&DAT_14c952420);
          plVar20 = local_78;
        }
        lVar27 = iVar11 + lVar14;
        puVar17 = *(undefined **)(lVar24 + 8);
        if (DAT_14c9523d8 == 0) {
          bVar28 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c9523d0 && bVar28) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar28 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c9523d0) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (bVar28) goto LAB_143a0a6c5;
LAB_143a0a75b:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9523c8) &&
             (local_78 = plVar20, FUN_144b3d300(&DAT_14c9523c8), plVar20 = local_78,
             DAT_14c9523c8 == -1)) {
            FUN_14475b26a();
            local_80 = FUN_1408a629c;
            local_88 = &DAT_14c9520b8;
            local_90 = 0;
            local_98 = 0x1008101;
            FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
            atexit(FUN_14281708e);
            _Init_thread_footer(&DAT_14c9523c8);
            plVar20 = local_78;
          }
          puVar18 = *(undefined8 **)(lVar24 + 8);
          if (DAT_14c952380 == 0) {
            bVar28 = puVar18 != (undefined8 *)0x0;
            if (puVar18 != &DAT_14c952378 && bVar28) {
              do {
                puVar18 = (undefined8 *)puVar18[6];
                bVar28 = puVar18 != (undefined8 *)0x0;
                if (puVar18 == &DAT_14c952378) break;
              } while (puVar18 != (undefined8 *)0x0);
            }
            if (bVar28) goto LAB_143a0a79a;
          }
          else if ((puVar18[3] & DAT_14c952380) != 0) {
LAB_143a0a79a:
            lVar26 = *(longlong *)*param_1;
            uVar12 = *(uint *)param_1[2];
            iVar11 = *(int *)param_1[1];
            *(int *)param_1[1] = iVar11 + 1;
            if (0 < *(int *)param_1[3]) {
              iVar13 = *(int *)(lVar26 + 0x128);
              lVar26 = *(longlong *)(lVar26 + 0x18);
              lVar22 = 0;
              do {
                *(undefined4 *)
                 ((ulonglong)(uint)(iVar11 * iVar13) + lVar26 + (ulonglong)uVar12 * 4 + lVar22 * 4)
                     = *(undefined4 *)
                        (lVar27 + (longlong)(int)lVar22 * (longlong)*(int *)param_1[4]);
                lVar22 = lVar22 + 1;
              } while ((int)lVar22 < *(int *)param_1[3]);
            }
            goto LAB_143a0a9fd;
          }
          local_78 = plVar20;
          lVar22 = FUN_140e98e1a();
          lVar26 = *(longlong *)(lVar24 + 8);
          if (*(ulonglong *)(lVar22 + 8) == 0) {
            bVar28 = lVar26 != 0;
            if (lVar26 != lVar22 && bVar28) {
              do {
                lVar26 = *(longlong *)(lVar26 + 0x30);
                bVar28 = lVar26 != 0;
                if (lVar26 == lVar22) break;
              } while (lVar26 != 0);
            }
            if (bVar28) goto LAB_143a0a853;
          }
          else if ((*(ulonglong *)(lVar26 + 0x18) & *(ulonglong *)(lVar22 + 8)) != 0) {
LAB_143a0a853:
            lVar26 = *(longlong *)*param_1;
            uVar12 = *(uint *)param_1[2];
            iVar11 = *(int *)param_1[6];
            *(int *)param_1[6] = iVar11 + 1;
            plVar20 = local_78;
            if (0 < *(int *)param_1[3]) {
              iVar13 = *(int *)(lVar26 + 0x130);
              lVar26 = *(longlong *)(lVar26 + 0x38);
              lVar22 = 0;
              do {
                *(undefined2 *)
                 ((ulonglong)(uint)(iVar11 * iVar13) + lVar26 + (ulonglong)uVar12 * 2 + lVar22 * 2)
                     = *(undefined2 *)
                        (lVar27 + (longlong)(int)lVar22 * (longlong)*(int *)param_1[4]);
                lVar22 = lVar22 + 1;
              } while ((int)lVar22 < *(int *)param_1[3]);
            }
            goto LAB_143a0a9fd;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
            FUN_14475b26a();
            local_80 = FUN_1405ebbb2;
            local_88 = &DAT_14c9520b8;
            local_90 = 0;
            local_98 = 0x1008081;
            FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
            atexit(FUN_142816fad);
            _Init_thread_footer(&DAT_14c952210);
          }
          puVar18 = *(undefined8 **)(lVar24 + 8);
          local_70 = plVar19;
          if (DAT_14c9521c8 == 0) {
            bVar28 = puVar18 != (undefined8 *)0x0;
            if (puVar18 != &DAT_14c9521c0 && bVar28) {
              do {
                puVar18 = (undefined8 *)puVar18[6];
                bVar28 = puVar18 != (undefined8 *)0x0;
                if (puVar18 == &DAT_14c9521c0) break;
              } while (puVar18 != (undefined8 *)0x0);
            }
            if (!bVar28) goto LAB_143a0a960;
          }
          else if ((puVar18[3] & DAT_14c9521c8) == 0) {
LAB_143a0a960:
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
            {
              local_88 = (undefined *)FUN_1446ddbd2();
              local_80 = FUN_14067a048;
              local_90 = 0;
              local_98 = 0x28001;
              FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
              atexit(FUN_142811fe5);
              _Init_thread_footer(&DAT_14c951d20);
            }
            puVar18 = *(undefined8 **)(lVar24 + 8);
            if (DAT_14c951cd8 == 0) {
              bVar28 = puVar18 != (undefined8 *)0x0;
              puVar23 = puVar18;
              if (puVar18 != &DAT_14c951cd0 && bVar28) {
                do {
                  puVar23 = (undefined8 *)puVar23[6];
                  bVar28 = puVar23 != (undefined8 *)0x0;
                  if (puVar23 == &DAT_14c951cd0) break;
                } while (puVar23 != (undefined8 *)0x0);
              }
              if (bVar28) goto LAB_143a0a9a3;
            }
            else if ((puVar18[3] & DAT_14c951cd8) != 0) goto LAB_143a0a9a3;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
            {
              local_88 = (undefined *)FUN_1446ddbd2();
              local_80 = FUN_1403a682c;
              local_90 = 0;
              local_98 = 0x108001;
              FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
              atexit(FUN_142818c9e);
              _Init_thread_footer(&DAT_14c952a58);
            }
            if (DAT_14c952a10 == 0) {
              bVar28 = puVar18 != (undefined8 *)0x0;
              if (puVar18 != (undefined8 *)&DAT_14c952a08 && bVar28) {
                do {
                  puVar18 = (undefined8 *)puVar18[6];
                  bVar28 = puVar18 != (undefined8 *)0x0;
                  if (puVar18 == (undefined8 *)&DAT_14c952a08) break;
                } while (puVar18 != (undefined8 *)0x0);
              }
              bVar28 = !bVar28;
            }
            else {
              bVar28 = (puVar18[3] & DAT_14c952a10) == 0;
            }
            plVar19 = local_70;
            plVar20 = local_78;
            if (!bVar28) {
              if (lVar25 == 0) {
                lVar26 = 0;
              }
              else {
                puVar17 = *(undefined **)(lVar25 + 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c952a58) &&
                   (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                  local_88 = (undefined *)FUN_1446ddbd2();
                  local_80 = FUN_1403a682c;
                  local_90 = 0;
                  local_98 = 0x108001;
                  FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                  atexit(FUN_142818c9e);
                  _Init_thread_footer(&DAT_14c952a58);
                }
                if (DAT_14c952a10 == 0) {
                  bVar28 = puVar17 != (undefined *)0x0;
                  if (puVar17 != &DAT_14c952a08 && bVar28) {
                    do {
                      puVar17 = *(undefined **)(puVar17 + 0x30);
                      bVar28 = puVar17 != (undefined *)0x0;
                      if (puVar17 == &DAT_14c952a08) break;
                    } while (puVar17 != (undefined *)0x0);
                  }
                }
                else {
                  bVar28 = (*(ulonglong *)(puVar17 + 0x18) & DAT_14c952a10) != 0;
                }
                lVar26 = 0;
                if (bVar28) {
                  lVar26 = lVar25;
                }
              }
              puVar18 = (undefined8 *)param_1[8];
              local_58 = *(undefined8 *)(lVar26 + 0x70);
              local_60 = *(undefined8 *)(lVar24 + 0x70);
              pcVar16 = (code *)*puVar18;
              plVar19 = puVar18 + 4;
              if ((longlong *)puVar18[2] != (longlong *)0x0) {
                plVar19 = (longlong *)puVar18[2];
              }
              local_50 = lVar27;
              uVar21 = (**(code **)(*plVar19 + 8))();
              (*pcVar16)(uVar21,&local_60,&local_58);
              plVar19 = local_70;
              plVar20 = local_78;
            }
            goto LAB_143a0a9fd;
          }
LAB_143a0a9a3:
          lVar26 = *(longlong *)*param_1;
          uVar12 = *(uint *)param_1[2];
          iVar11 = *(int *)param_1[7];
          *(int *)param_1[7] = iVar11 + 1;
          plVar19 = local_70;
          plVar20 = local_78;
          if (0 < *(int *)param_1[3]) {
            iVar13 = *(int *)(lVar26 + 300);
            lVar26 = *(longlong *)(lVar26 + 0x28);
            lVar22 = 0;
            do {
              *(undefined4 *)
               ((ulonglong)(uint)(iVar11 * iVar13) + lVar26 + (ulonglong)uVar12 * 4 + lVar22 * 4) =
                   *(undefined4 *)(lVar27 + (longlong)(int)lVar22 * (longlong)*(int *)param_1[4]);
              lVar22 = lVar22 + 1;
            } while ((int)lVar22 < *(int *)param_1[3]);
          }
        }
        else {
          if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) == 0) goto LAB_143a0a75b;
LAB_143a0a6c5:
          lVar26 = *(longlong *)*param_1;
          uVar12 = *(uint *)param_1[2];
          iVar11 = *(int *)param_1[1];
          *(int *)param_1[1] = iVar11 + 1;
          if (0 < *(int *)param_1[3]) {
            iVar13 = *(int *)(lVar26 + 0x128);
            lVar26 = *(longlong *)(lVar26 + 0x18);
            lVar22 = 0;
            do {
              *(float *)((ulonglong)(uint)(iVar11 * iVar13) + lVar26 + (ulonglong)uVar12 * 4 +
                        lVar22 * 4) =
                   (float)*(double *)(lVar27 + (longlong)(int)lVar22 * (longlong)*(int *)param_1[4])
              ;
              lVar22 = lVar22 + 1;
            } while ((int)lVar22 < *(int *)param_1[3]);
          }
        }
LAB_143a0a9fd:
        lVar24 = *(longlong *)(lVar24 + 0x18);
        if (plVar19 == (longlong *)0x0) {
          plVar19 = (longlong *)0x0;
        }
        else {
          while( true ) {
            for (; lVar24 != 0; lVar24 = *(longlong *)(lVar24 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar24 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0aac9;
            }
            plVar19 = (longlong *)(**(code **)(*plVar19 + 0x2b0))(plVar19);
            if (plVar19 == (longlong *)0x0) break;
            lVar24 = plVar19[10];
          }
          plVar19 = (longlong *)0x0;
          lVar24 = 0;
        }
LAB_143a0aac9:
        lVar25 = *(longlong *)(lVar25 + 0x18);
        if (plVar20 == (longlong *)0x0) {
          plVar20 = (longlong *)0x0;
        }
        else {
          while( true ) {
            for (; lVar25 != 0; lVar25 = *(longlong *)(lVar25 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar25 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0ab0e;
            }
            plVar20 = (longlong *)(**(code **)(*plVar20 + 0x2b0))(plVar20);
            if (plVar20 == (longlong *)0x0) break;
            lVar25 = plVar20[10];
          }
          plVar20 = (longlong *)0x0;
          lVar25 = 0;
        }
LAB_143a0ab0e:
      } while (lVar24 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a0afa4 FUN_143a0afa4 body=71 status=ok
// SIG undefined FUN_143a0afa4(void)

void FUN_143a0afa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14adbbf30;
  lVar2 = 9;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143a0aff2 FUN_143a0aff2 body=29 status=ok
// SIG undefined FUN_143a0aff2(void)

void FUN_143a0aff2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a0b010 FUN_143a0b010 body=29 status=ok
// SIG undefined FUN_143a0b010(void)

undefined8 FUN_143a0b010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0b02e FUN_143a0b02e body=2843 status=ok
// SIG undefined FUN_143a0b02e(void)

void FUN_143a0b02e(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  code *pcVar13;
  undefined *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = *param_4;
  param_2 = (longlong *)*param_2;
  if (DAT_14cb413d0 == param_2) {
    lVar20 = *(longlong *)*param_1;
    iVar9 = *(int *)param_1[1];
    *(int *)param_1[1] = iVar9 + 1;
    lVar21 = *(longlong *)(lVar20 + 0x18);
    iVar10 = *(int *)(lVar20 + 0x128);
    lVar20 = *(longlong *)*param_1;
    iVar5 = *(int *)param_1[1];
    *(int *)param_1[1] = iVar5 + 1;
    lVar23 = *(longlong *)(lVar20 + 0x18);
    iVar6 = *(int *)(lVar20 + 0x128);
    lVar20 = *(longlong *)*param_1;
    iVar7 = *(int *)param_1[1];
    *(int *)param_1[1] = iVar7 + 1;
    if (0 < *(int *)param_1[2]) {
      iVar8 = *(int *)(lVar20 + 0x128);
      lVar20 = *(longlong *)(lVar20 + 0x18);
      lVar22 = 0;
      do {
        pfVar12 = (float *)param_1[4];
        fVar1 = *(float *)((ulonglong)(uint)(iVar7 * iVar8) + lVar20 + lVar22 * 4);
        fVar2 = *(float *)(lVar23 + (ulonglong)(uint)(iVar6 * iVar5) + lVar22 * 4);
        fVar3 = pfVar12[2];
        fVar4 = pfVar12[1];
        lVar19 = (longlong)(int)lVar22 * (longlong)*(int *)param_1[3];
        *(double *)(lVar11 + lVar19) =
             (double)*pfVar12 * 65536.0 +
             (double)*(float *)(lVar21 + (ulonglong)(uint)(iVar10 * iVar9) + lVar22 * 4);
        *(double *)(lVar11 + 8 + lVar19) = (double)fVar4 * 65536.0 + (double)fVar2;
        *(double *)(lVar11 + 0x10 + lVar19) = (double)fVar3 * 65536.0 + (double)fVar1;
        lVar22 = lVar22 + 1;
      } while ((int)lVar22 < *(int *)param_1[2]);
    }
  }
  else {
    param_3 = (longlong *)*param_3;
    if (param_2 == (longlong *)0x0) {
      lVar20 = 0;
      plVar15 = (longlong *)0x0;
    }
    else {
      do {
        for (lVar20 = param_2[10]; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x18)) {
          plVar15 = param_2;
          if ((~*(uint *)(*(longlong *)(lVar20 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0b1c0;
        }
        param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
        lVar20 = 0;
        plVar15 = (longlong *)0x0;
      } while (param_2 != (longlong *)0x0);
    }
LAB_143a0b1c0:
    if (param_3 == (longlong *)0x0) {
      plVar17 = (longlong *)0x0;
      lVar21 = 0;
    }
    else {
      do {
        plVar17 = param_3;
        for (lVar21 = plVar17[10]; lVar21 != 0; lVar21 = *(longlong *)(lVar21 + 0x18)) {
          if ((~*(uint *)(*(longlong *)(lVar21 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0b20c;
        }
        param_3 = (longlong *)(**(code **)(*plVar17 + 0x2b0))(plVar17);
        plVar17 = (longlong *)0x0;
        lVar21 = 0;
      } while (param_3 != (longlong *)0x0);
    }
LAB_143a0b20c:
    if (lVar20 != 0) {
      local_80 = 0x101008001;
      do {
        iVar9 = *(int *)(lVar21 + 0x44);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952420) &&
           (local_90 = plVar17, FUN_144b3d300(&DAT_14c952420), plVar17 = local_90,
           DAT_14c952420 == -1)) {
          FUN_14475b26a();
          local_a0 = FUN_14079c5e4;
          local_a8 = &DAT_14c9520b8;
          local_b8 = local_80;
          local_b0 = 0;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
          atexit(FUN_1428170bb);
          _Init_thread_footer(&DAT_14c952420);
          plVar17 = local_90;
        }
        lVar23 = iVar9 + lVar11;
        puVar14 = *(undefined **)(lVar21 + 8);
        if (DAT_14c9523d8 == 0) {
          bVar24 = puVar14 != (undefined *)0x0;
          if (puVar14 != &DAT_14c9523d0 && bVar24) {
            do {
              puVar14 = *(undefined **)(puVar14 + 0x30);
              bVar24 = puVar14 != (undefined *)0x0;
              if (puVar14 == &DAT_14c9523d0) break;
            } while (puVar14 != (undefined *)0x0);
          }
          if (bVar24) goto LAB_143a0b27e;
LAB_143a0b308:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9523c8) &&
             (local_90 = plVar17, FUN_144b3d300(&DAT_14c9523c8), plVar17 = local_90,
             DAT_14c9523c8 == -1)) {
            FUN_14475b26a();
            local_a0 = FUN_1408a629c;
            local_a8 = &DAT_14c9520b8;
            local_b0 = 0;
            local_b8 = 0x1008101;
            FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
            atexit(FUN_14281708e);
            _Init_thread_footer(&DAT_14c9523c8);
            plVar17 = local_90;
          }
          puVar16 = *(undefined8 **)(lVar21 + 8);
          if (DAT_14c952380 == 0) {
            bVar24 = puVar16 != (undefined8 *)0x0;
            if (puVar16 != &DAT_14c952378 && bVar24) {
              do {
                puVar16 = (undefined8 *)puVar16[6];
                bVar24 = puVar16 != (undefined8 *)0x0;
                if (puVar16 == &DAT_14c952378) break;
              } while (puVar16 != (undefined8 *)0x0);
            }
            if (bVar24) goto LAB_143a0b347;
          }
          else if ((puVar16[3] & DAT_14c952380) != 0) {
LAB_143a0b347:
            lVar22 = *(longlong *)*param_1;
            iVar9 = *(int *)param_1[1];
            *(int *)param_1[1] = iVar9 + 1;
            if (0 < *(int *)param_1[2]) {
              iVar10 = *(int *)(lVar22 + 0x128);
              lVar22 = *(longlong *)(lVar22 + 0x18);
              lVar19 = 0;
              do {
                *(undefined4 *)(lVar23 + (longlong)(int)lVar19 * (longlong)*(int *)param_1[3]) =
                     *(undefined4 *)((ulonglong)(uint)(iVar9 * iVar10) + lVar22 + lVar19 * 4);
                lVar19 = lVar19 + 1;
              } while ((int)lVar19 < *(int *)param_1[2]);
            }
            goto LAB_143a0b583;
          }
          local_90 = plVar17;
          lVar19 = FUN_140e98e1a();
          lVar22 = *(longlong *)(lVar21 + 8);
          if (*(ulonglong *)(lVar19 + 8) == 0) {
            bVar24 = lVar22 != 0;
            if (lVar22 != lVar19 && bVar24) {
              do {
                lVar22 = *(longlong *)(lVar22 + 0x30);
                bVar24 = lVar22 != 0;
                if (lVar22 == lVar19) break;
              } while (lVar22 != 0);
            }
            if (bVar24) goto LAB_143a0b3fb;
          }
          else if ((*(ulonglong *)(lVar22 + 0x18) & *(ulonglong *)(lVar19 + 8)) != 0) {
LAB_143a0b3fb:
            lVar22 = *(longlong *)*param_1;
            iVar9 = *(int *)param_1[5];
            *(int *)param_1[5] = iVar9 + 1;
            plVar17 = local_90;
            if (0 < *(int *)param_1[2]) {
              iVar10 = *(int *)(lVar22 + 0x130);
              lVar22 = *(longlong *)(lVar22 + 0x38);
              lVar19 = 0;
              do {
                *(undefined2 *)(lVar23 + (longlong)(int)lVar19 * (longlong)*(int *)param_1[3]) =
                     *(undefined2 *)((ulonglong)(uint)(iVar9 * iVar10) + lVar22 + lVar19 * 2);
                lVar19 = lVar19 + 1;
              } while ((int)lVar19 < *(int *)param_1[2]);
            }
            goto LAB_143a0b583;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
            FUN_14475b26a();
            local_a0 = FUN_1405ebbb2;
            local_a8 = &DAT_14c9520b8;
            local_b0 = 0;
            local_b8 = 0x1008081;
            FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
            atexit(FUN_142816fad);
            _Init_thread_footer(&DAT_14c952210);
          }
          puVar16 = *(undefined8 **)(lVar21 + 8);
          if (DAT_14c9521c8 == 0) {
            bVar24 = puVar16 != (undefined8 *)0x0;
            if (puVar16 != &DAT_14c9521c0 && bVar24) {
              do {
                puVar16 = (undefined8 *)puVar16[6];
                bVar24 = puVar16 != (undefined8 *)0x0;
                if (puVar16 == &DAT_14c9521c0) break;
              } while (puVar16 != (undefined8 *)0x0);
            }
            if (!bVar24) goto LAB_143a0b4f7;
          }
          else if ((puVar16[3] & DAT_14c9521c8) == 0) {
LAB_143a0b4f7:
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
            {
              local_a8 = (undefined *)FUN_1446ddbd2();
              local_a0 = FUN_14067a048;
              local_b0 = 0;
              local_b8 = 0x28001;
              FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
              atexit(FUN_142811fe5);
              _Init_thread_footer(&DAT_14c951d20);
            }
            puVar16 = *(undefined8 **)(lVar21 + 8);
            if (DAT_14c951cd8 == 0) {
              bVar24 = puVar16 != (undefined8 *)0x0;
              if (puVar16 != &DAT_14c951cd0 && bVar24) {
                do {
                  puVar16 = (undefined8 *)puVar16[6];
                  bVar24 = puVar16 != (undefined8 *)0x0;
                  if (puVar16 == &DAT_14c951cd0) break;
                } while (puVar16 != (undefined8 *)0x0);
              }
              if (bVar24) goto LAB_143a0b53a;
            }
            else if ((puVar16[3] & DAT_14c951cd8) != 0) goto LAB_143a0b53a;
            puVar14 = *(undefined **)(lVar20 + 8);
            local_88 = plVar15;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
            {
              local_a8 = (undefined *)FUN_1446ddbd2();
              local_a0 = FUN_1403a682c;
              local_b0 = 0;
              local_b8 = 0x108001;
              FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
              atexit(FUN_142818c9e);
              _Init_thread_footer(&DAT_14c952a58);
            }
            if (DAT_14c952a10 == 0) {
              bVar24 = puVar14 != (undefined *)0x0;
              if (puVar14 != &DAT_14c952a08 && bVar24) {
                do {
                  puVar14 = *(undefined **)(puVar14 + 0x30);
                  bVar24 = puVar14 != (undefined *)0x0;
                  if (puVar14 == &DAT_14c952a08) break;
                } while (puVar14 != (undefined *)0x0);
              }
              bVar24 = !bVar24;
            }
            else {
              bVar24 = (*(ulonglong *)(puVar14 + 0x18) & DAT_14c952a10) == 0;
            }
            plVar15 = local_88;
            plVar17 = local_90;
            if (!bVar24) {
              if (lVar21 == 0) {
                lVar22 = 0;
              }
              else {
                puVar14 = *(undefined **)(lVar21 + 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c952a58) &&
                   (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                  local_a8 = (undefined *)FUN_1446ddbd2();
                  local_a0 = FUN_1403a682c;
                  local_b0 = 0;
                  local_b8 = 0x108001;
                  FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                  atexit(FUN_142818c9e);
                  _Init_thread_footer(&DAT_14c952a58);
                }
                if (DAT_14c952a10 == 0) {
                  bVar24 = puVar14 != (undefined *)0x0;
                  if (puVar14 != &DAT_14c952a08 && bVar24) {
                    do {
                      puVar14 = *(undefined **)(puVar14 + 0x30);
                      bVar24 = puVar14 != (undefined *)0x0;
                      if (puVar14 == &DAT_14c952a08) break;
                    } while (puVar14 != (undefined *)0x0);
                  }
                }
                else {
                  bVar24 = (*(ulonglong *)(puVar14 + 0x18) & DAT_14c952a10) != 0;
                }
                lVar22 = 0;
                if (bVar24) {
                  lVar22 = lVar21;
                }
              }
              puVar16 = (undefined8 *)param_1[7];
              local_70 = *(undefined8 *)(lVar22 + 0x70);
              local_78 = *(undefined8 *)(lVar20 + 0x70);
              pcVar13 = (code *)*puVar16;
              plVar15 = puVar16 + 4;
              if ((longlong *)puVar16[2] != (longlong *)0x0) {
                plVar15 = (longlong *)puVar16[2];
              }
              local_68 = lVar23;
              uVar18 = (**(code **)(*plVar15 + 8))();
              (*pcVar13)(uVar18,&local_78,&local_70,&local_68);
              plVar15 = local_88;
              plVar17 = local_90;
            }
            goto LAB_143a0b583;
          }
LAB_143a0b53a:
          lVar22 = *(longlong *)*param_1;
          iVar9 = *(int *)param_1[6];
          *(int *)param_1[6] = iVar9 + 1;
          plVar17 = local_90;
          if (0 < *(int *)param_1[2]) {
            iVar10 = *(int *)(lVar22 + 300);
            lVar22 = *(longlong *)(lVar22 + 0x28);
            lVar19 = 0;
            do {
              *(undefined4 *)(lVar23 + (longlong)(int)lVar19 * (longlong)*(int *)param_1[3]) =
                   *(undefined4 *)((ulonglong)(uint)(iVar9 * iVar10) + lVar22 + lVar19 * 4);
              lVar19 = lVar19 + 1;
            } while ((int)lVar19 < *(int *)param_1[2]);
          }
        }
        else {
          if ((*(ulonglong *)(puVar14 + 0x18) & DAT_14c9523d8) == 0) goto LAB_143a0b308;
LAB_143a0b27e:
          lVar22 = *(longlong *)*param_1;
          iVar9 = *(int *)param_1[1];
          *(int *)param_1[1] = iVar9 + 1;
          if (0 < *(int *)param_1[2]) {
            iVar10 = *(int *)(lVar22 + 0x128);
            lVar22 = *(longlong *)(lVar22 + 0x18);
            lVar19 = 0;
            do {
              *(double *)(lVar23 + (longlong)(int)lVar19 * (longlong)*(int *)param_1[3]) =
                   (double)*(float *)((ulonglong)(uint)(iVar9 * iVar10) + lVar22 + lVar19 * 4);
              lVar19 = lVar19 + 1;
            } while ((int)lVar19 < *(int *)param_1[2]);
          }
        }
LAB_143a0b583:
        lVar20 = *(longlong *)(lVar20 + 0x18);
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          while( true ) {
            for (; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar20 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0b657;
            }
            plVar15 = (longlong *)(**(code **)(*plVar15 + 0x2b0))(plVar15);
            if (plVar15 == (longlong *)0x0) break;
            lVar20 = plVar15[10];
          }
          plVar15 = (longlong *)0x0;
          lVar20 = 0;
        }
LAB_143a0b657:
        lVar21 = *(longlong *)(lVar21 + 0x18);
        if (plVar17 == (longlong *)0x0) {
          plVar17 = (longlong *)0x0;
        }
        else {
          while( true ) {
            for (; lVar21 != 0; lVar21 = *(longlong *)(lVar21 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar21 + 8) + 0x18) & 0x8001) == 0) goto LAB_143a0b69c;
            }
            plVar17 = (longlong *)(**(code **)(*plVar17 + 0x2b0))(plVar17);
            if (plVar17 == (longlong *)0x0) break;
            lVar21 = plVar17[10];
          }
          plVar17 = (longlong *)0x0;
          lVar21 = 0;
        }
LAB_143a0b69c:
      } while (lVar20 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a0bb4a FUN_143a0bb4a body=86 status=ok
// SIG undefined FUN_143a0bb4a(void)

undefined8 * FUN_143a0bb4a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14adbbf50;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 143a0bba6 FUN_143a0bba6 body=29 status=ok
// SIG undefined FUN_143a0bba6(void)

void FUN_143a0bba6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a0bbc4 FUN_143a0bbc4 body=29 status=ok
// SIG undefined FUN_143a0bbc4(void)

undefined8 FUN_143a0bbc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0bbe2 FUN_143a0bbe2 body=64 status=ok
// SIG undefined FUN_143a0bbe2(void)

undefined8 * FUN_143a0bbe2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14adbbf70;
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



// FUNCTION 143a0bc36 FUN_143a0bc36 body=124 status=ok
// SIG undefined FUN_143a0bc36(void)

void FUN_143a0bc36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adbbfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbf70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 143a0bcb2 FUN_143a0bcb2 body=124 status=ok
// SIG undefined FUN_143a0bcb2(void)

void FUN_143a0bcb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adbbfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbbf70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 143a0bd2e FUN_143a0bd2e body=162 status=ok
// SIG undefined FUN_143a0bd2e(void)

void FUN_143a0bd2e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14adbbfe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adbbf70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000143a0bdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a0bdd0 FUN_143a0bdd0 body=68 status=ok
// SIG undefined FUN_143a0bdd0(void)

void FUN_143a0bdd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_143a0be54(param_1 + 0x18);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000143a0be09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143a0be14 FUN_143a0be14 body=63 status=ok
// SIG undefined FUN_143a0be14(void)

undefined8 FUN_143a0be14(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_143a0be54(param_1 + 0x18);
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 1;
}



// FUNCTION 143a0be54 FUN_143a0be54 body=433 status=ok
// SIG undefined FUN_143a0be54(void)

void FUN_143a0be54(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [43];
  undefined1 uStack_4d;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *param_2;
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[1];
  if (plVar6 != (longlong *)0x0) {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_143a0bec7;
      LOCK();
      iVar9 = (int)plVar6[1];
      bVar12 = iVar10 == iVar9;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar12);
    lVar7 = *param_1;
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
    if ((lVar7 != 0) &&
       (lVar8 = param_1[4], iVar10 = FUN_148073748(*(longlong *)(lVar7 + 0xb8) + 0x10),
       (int)lVar8 == iVar10)) {
      lVar8 = param_1[2];
      uVar3 = *(undefined1 *)((longlong)param_1 + 0x11);
      local_44 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_4c = (undefined4)*(undefined8 *)((longlong)param_1 + 0x14);
      uStack_48 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x14) >> 0x20);
      if (*(longlong *)(lVar7 + 0x20) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_1481b9708();
      }
      FUN_1481bb948(uVar4,lVar11);
      LOCK();
      if (*(int *)(lVar11 + 8) == -1) {
        *(int *)(lVar11 + 8) = 1;
      }
      UNLOCK();
      iVar10 = *(int *)(lVar7 + 0x70);
      *(uint *)(lVar7 + 0x70) = iVar10 + 1U;
      if (*(uint *)(lVar7 + 0x74) < iVar10 + 1U) {
        FUN_1481249bc((longlong *)(lVar7 + 0x68),iVar10);
      }
      plVar6 = (longlong *)(*(longlong *)(lVar7 + 0x68) + (longlong)iVar10 * 0x28);
      *plVar6 = lVar11;
      if (lVar11 == 0) {
        plVar6[1] = 0;
        plVar6[2] = 0;
        *(undefined1 *)(plVar6 + 3) = uVar3;
        *(char *)((longlong)plVar6 + 0x19) = (char)lVar8;
        *(undefined1 *)((longlong)plVar6 + 0x1a) = 0;
        *(ulonglong *)((longlong)plVar6 + 0x1b) =
             CONCAT35((undefined3)uStack_48,CONCAT41(local_4c,uStack_4d));
        plVar6[4] = CONCAT44(local_44,uStack_48);
      }
      else {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *(undefined1 *)(plVar6 + 3) = uVar3;
        *(char *)((longlong)plVar6 + 0x19) = (char)lVar8;
        *(undefined1 *)((longlong)plVar6 + 0x1a) = 0;
        *(ulonglong *)((longlong)plVar6 + 0x1b) =
             CONCAT35((undefined3)uStack_48,CONCAT41(local_4c,uStack_4d));
        plVar6[4] = CONCAT44(local_44,uStack_48);
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + -1;
        UNLOCK();
      }
    }
  }
LAB_143a0bec7:
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a0c01e FUN_143a0c01e body=80 status=ok
// SIG undefined FUN_143a0c01e(void)

undefined8 * FUN_143a0c01e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adbc070;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_14811469e(param_1 + 0x37);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0c06e FUN_143a0c06e body=822 status=ok
// SIG undefined FUN_143a0c06e(void)

void FUN_143a0c06e(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  longlong *_Src_00;
  undefined1 *_Src_01;
  void *_Dst;
  undefined8 *puVar6;
  ulonglong _Size;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    _Src_00 = &local_b8;
    if ((longlong *)CONCAT44(uStack_ac,local_b0) != (longlong *)0x0) {
      _Src_00 = (longlong *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar6 + 2,local_a8,0);
    puVar3 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 2;
    }
    memcpy(puVar3,_Src_00,(longlong)local_a8);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    _Src_01 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_01 = local_a0;
    }
    FUN_1446fe1b8(puVar6 + 5,local_58,0);
    puVar3 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar3 = puVar6 + 5;
    }
    memcpy(puVar3,_Src_01,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar6 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  local_b8 = param_1 + 0x1b8;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    local_b8 = *(longlong *)(param_1 + 0x308);
  }
  local_b0 = *(undefined4 *)(param_1 + 0x310);
  FUN_144760590(param_2,&local_b8,0);
  iVar2 = *(int *)(param_1 + 0x328);
  uVar1 = iVar2 * 8;
  _Size = (ulonglong)uVar1;
  _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
  uVar4 = (longlong)_Dst + _Size;
  _Src = *(void **)(param_1 + 800);
  if (*(int *)(param_1 + 0x318) == 0x400) {
    if (param_2[1] < uVar4) {
      FUN_140023dd8(param_2,uVar1 + 8);
      _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
      uVar4 = (longlong)_Dst + _Size;
    }
    *param_2 = uVar4;
    memcpy(_Dst,_Src,_Size);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 4;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x28);
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar6 + 4;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar6;
    param_2[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    ppuVar5 = &PTR_FUN_14a2dc3b0;
  }
  else {
    if (param_2[1] < uVar4) {
      FUN_140023dd8(param_2,uVar1 + 8);
      _Dst = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
      uVar4 = (longlong)_Dst + _Size;
    }
    *param_2 = uVar4;
    memcpy(_Dst,_Src,_Size);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 4;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x28);
      puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar6 + 4;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar6;
    param_2[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    ppuVar5 = &PTR_FUN_14a2dc3b8;
  }
  *puVar6 = ppuVar5;
  puVar6[2] = _Dst;
  *(int *)(puVar6 + 3) = iVar2;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0c3b2 FUN_143a0c3b2 body=80 status=ok
// SIG undefined FUN_143a0c3b2(void)

undefined8 * FUN_143a0c3b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adbc070;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_14811469e(param_1 + 0x37);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0c402 FUN_143a0c402 body=86 status=ok
// SIG undefined FUN_143a0c402(void)

void FUN_143a0c402(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      if (plVar4[-2] != 0) {
        LOCK();
        piVar2 = (int *)(plVar4[-2] + 8);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143a0c458 FUN_143a0c458 body=41 status=ok
// SIG undefined FUN_143a0c458(void)

void FUN_143a0c458(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14032e8b2(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 143a0c48c FUN_143a0c48c body=12 status=ok
// SIG undefined FUN_143a0c48c(void)

void FUN_143a0c48c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a0c495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a0c498 FUN_143a0c498 body=29 status=ok
// SIG undefined FUN_143a0c498(void)

undefined8 FUN_143a0c498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0c4b6 FUN_143a0c4b6 body=282 status=ok
// SIG undefined FUN_143a0c4b6(void)

undefined8 * FUN_143a0c4b6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0c5d0 FUN_143a0c5d0 body=94 status=ok
// SIG undefined FUN_143a0c5d0(void)

ulonglong FUN_143a0c5d0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_14032e8b2(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0c623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143a0c62e FUN_143a0c62e body=74 status=ok
// SIG undefined FUN_143a0c62e(void)

void FUN_143a0c62e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar2 = *(longlong *)(param_2 + lVar5);
    *(longlong *)(param_1 + lVar5) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    lVar2 = param_1 + lVar5;
    lVar1 = param_2 + lVar5;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    lVar3 = *(longlong *)(lVar1 + 0x10);
    *(longlong *)(lVar2 + 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    lVar5 = lVar5 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 143a0c696 FUN_143a0c696 body=29 status=ok
// SIG undefined FUN_143a0c696(void)

void FUN_143a0c696(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a0c6b4 FUN_143a0c6b4 body=109 status=ok
// SIG undefined FUN_143a0c6b4(void)

undefined8 * FUN_143a0c6b4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14adbc0c0;
  FUN_1480859e8(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0c722 FUN_143a0c722 body=282 status=ok
// SIG undefined FUN_143a0c722(void)

undefined8 * FUN_143a0c722(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0c83c FUN_143a0c83c body=165 status=ok
// SIG undefined FUN_143a0c83c(void)

void FUN_143a0c83c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14811480c(param_1[0x15] + 0x50,param_1 + 0x17);
  FUN_1480859e8(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0c8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a0c8e2 FUN_143a0c8e2 body=93 status=ok
// SIG undefined FUN_143a0c8e2(void)

void FUN_143a0c8e2(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)*param_1;
  local_18 = param_1[1];
  local_10 = param_1[2];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 200))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0c94a FUN_143a0c94a body=12 status=ok
// SIG undefined FUN_143a0c94a(void)

void FUN_143a0c94a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a0c953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a0c956 FUN_143a0c956 body=83 status=ok
// SIG undefined FUN_143a0c956(void)

undefined8 * FUN_143a0c956(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14adbc150;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0c9aa FUN_143a0c9aa body=282 status=ok
// SIG undefined FUN_143a0c9aa(void)

undefined8 * FUN_143a0c9aa(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0cac4 FUN_143a0cac4 body=187 status=ok
// SIG undefined FUN_143a0cac4(void)

void FUN_143a0cac4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x15];
  local_28 = param_1[0x16];
  local_20 = param_1[0x17];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 200))(plVar3,&local_28);
  plVar3 = (longlong *)param_1[0x17];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0cba2 FUN_143a0cba2 body=12 status=ok
// SIG undefined FUN_143a0cba2(void)

void FUN_143a0cba2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a0cbab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a0cbae FUN_143a0cbae body=29 status=ok
// SIG undefined FUN_143a0cbae(void)

undefined8 FUN_143a0cbae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0cbcc FUN_143a0cbcc body=282 status=ok
// SIG undefined FUN_143a0cbcc(void)

undefined8 * FUN_143a0cbcc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0cce6 FUN_143a0cce6 body=85 status=ok
// SIG undefined FUN_143a0cce6(void)

ulonglong FUN_143a0cce6(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0cd31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143a0cd5a FUN_143a0cd5a body=12 status=ok
// SIG undefined FUN_143a0cd5a(void)

void FUN_143a0cd5a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a0cd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a0cd66 FUN_143a0cd66 body=29 status=ok
// SIG undefined FUN_143a0cd66(void)

undefined8 FUN_143a0cd66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0cd84 FUN_143a0cd84 body=282 status=ok
// SIG undefined FUN_143a0cd84(void)

undefined8 * FUN_143a0cd84(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0ce9e FUN_143a0ce9e body=117 status=ok
// SIG undefined FUN_143a0ce9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a0ce9e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148125d06(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148125d06(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0cf09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a0cf14 FUN_143a0cf14 body=722 status=ok
// SIG undefined FUN_143a0cf14(void)

void FUN_143a0cf14(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar5 = (longlong *)
           FUN_148125e58(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  if (param_1[2] == 0) {
    lVar7 = plVar5[1];
    if (lVar7 != 0) {
      plVar5[1] = 0;
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar8 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar9 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar9 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar7 = *plVar5;
    if (lVar7 != 0) {
      *plVar5 = 0;
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar8 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar9 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar9 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    *(undefined4 *)(plVar5 + 3) = DAT_14c846338;
    plVar5[2] = DAT_14c846330;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1[2] + 0x128) + 0x10);
    lVar4 = plVar5[1];
    if (lVar4 != lVar7) {
      plVar5[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c0;
                plVar9 = plVar6;
                if (bVar10) {
                  plVar8 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar10) {
                  plVar9 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
          }
        }
      }
    }
    lVar7 = FUN_1447b4020(param_1[2]);
    if (lVar7 == 0) {
      plVar8 = &DAT_14c9c0d80;
    }
    else {
      lVar7 = FUN_1447b4020(param_1[2]);
      plVar8 = (longlong *)(lVar7 + 0x18);
    }
    lVar7 = *plVar8;
    lVar4 = *plVar5;
    if (lVar4 != lVar7) {
      *plVar5 = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c0;
                plVar9 = plVar6;
                if (bVar10) {
                  plVar8 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar10) {
                  plVar9 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
          }
        }
      }
    }
    *(float *)(plVar5 + 2) = (float)(int)param_1[3];
    *(float *)((longlong)plVar5 + 0x14) = (float)*(int *)((longlong)param_1 + 0x1c);
    *(float *)(plVar5 + 3) = (float)(int)param_1[4];
  }
  return;
}



// FUNCTION 143a0d1f6 FUN_143a0d1f6 body=29 status=ok
// SIG undefined FUN_143a0d1f6(void)

void FUN_143a0d1f6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a0d214 FUN_143a0d214 body=29 status=ok
// SIG undefined FUN_143a0d214(void)

undefined8 FUN_143a0d214(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0d232 FUN_143a0d232 body=282 status=ok
// SIG undefined FUN_143a0d232(void)

undefined8 * FUN_143a0d232(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0d34c FUN_143a0d34c body=91 status=ok
// SIG undefined FUN_143a0d34c(void)

void FUN_143a0d34c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a0cf14(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a0cf14(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a0d388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a0d3c6 FUN_143a0d3c6 body=1148 status=ok
// SIG undefined FUN_143a0d3c6(void)

void FUN_143a0d3c6(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_148126950(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0d844 FUN_143a0d844 body=1685 status=ok
// SIG undefined FUN_143a0d844(void)

ulonglong FUN_143a0d844(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a0d8e2;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a0d8e2;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 2;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a0d8e4;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a0da13;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a0de2b;
          goto LAB_143a0da1c;
        }
LAB_143a0de2b:
        FUN_148128890(&local_c0,&DAT_14ca85100);
        goto LAB_143a0daf3;
      }
LAB_143a0da13:
      if (iVar3 == 0x10) goto LAB_143a0de2b;
LAB_143a0da1c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a0de2b;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a0de2b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a0db9d;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a0db9d:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a0dc1d;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a0dc1d:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbca00;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbc9b0;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_148128dd6;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae34);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a0daf3:
      FUN_14080c2b4();
      goto LAB_143a0d8e4;
    }
  }
LAB_143a0d8e2:
  uVar19 = 0;
LAB_143a0d8e4:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0deda FUN_143a0deda body=1915 status=ok
// SIG undefined FUN_143a0deda(void)

ulonglong FUN_143a0deda(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  void *pvVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined8 unaff_RSI;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  char *local_c8;
  void *local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) * 4);
    if (iVar8 != -1) {
      do {
        plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18);
        if (*plVar17 == lVar4) {
          if ((plVar17 != (longlong *)0x0) && (pcVar5 = (char *)plVar17[1], pcVar5 != (char *)0x0))
          {
            uVar19 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a0e1c6;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar16 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar5 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar5 == '\0') {
                *pcVar5 = '\x01';
                if (pcVar5 + 0x10 != (char *)(lVar16 + 0x50)) {
                  iVar8 = *(int *)(lVar16 + 0x58);
                  pvVar6 = *(void **)(lVar16 + 0x50);
                  *(int *)(pcVar5 + 0x18) = iVar8;
                  if (iVar8 == 0 && *(int *)(pcVar5 + 0x1c) == 0) {
                    pcVar5[0x1c] = '\0';
                    pcVar5[0x1d] = '\0';
                    pcVar5[0x1e] = '\0';
                    pcVar5[0x1f] = '\0';
                  }
                  else {
                    local_c8 = (char *)(longlong)iVar8;
                    local_c0 = pvVar6;
                    FUN_1447c510a();
                    if ((int)local_c8 != 0) {
                      memcpy(*(void **)(pcVar5 + 0x10),local_c0,(longlong)local_c8 << 2);
                    }
                  }
                }
              }
              pcVar22 = pcVar5 + 0x10;
              lVar16 = *(longlong *)(param_2 + 0x28);
              uVar23 = (ulonglong)param_3;
              iVar8 = *(int *)(lVar16 + uVar23 * 8);
              iVar3 = *(int *)(pcVar5 + 0x18);
              if (iVar3 < iVar8) {
                *(int *)(pcVar5 + 0x18) = iVar8;
                if ((uint)(*(int *)(pcVar5 + 0x1c) - iVar3) < (uint)(iVar8 - iVar3)) {
                  local_c8 = pcVar22;
                  FUN_14475e4ac(pcVar22);
                  pcVar22 = local_c8;
                }
              }
              else {
                if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4();
                }
                if (iVar8 < iVar3) {
                  *(int *)(pcVar5 + 0x18) = iVar8;
                  local_c8 = pcVar22;
                  FUN_1401fef06(pcVar22);
                  pcVar22 = local_c8;
                }
              }
              lVar21 = (longlong)*(int *)(lVar16 + uVar23 * 8);
              if (0 < lVar21) {
                memcpy(*(void **)pcVar22,
                       (void *)((longlong)*(int *)(lVar16 + 4 + uVar23 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar21 << 2);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a0e1c6;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar17 == (longlong *)0x0 ||
                (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(),
                puVar11 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
            }
            lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar8 = *(int *)(lVar16 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar4;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar8 != 2) {
                if (iVar8 != 1) goto LAB_143a0e0e2;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                if (DVar9 == DVar10) goto LAB_143a0e5a2;
                goto LAB_143a0e0eb;
              }
            }
            else {
LAB_143a0e0e2:
              if (iVar8 != 0x10) {
LAB_143a0e0eb:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
                  goto LAB_143a0e5a2;
                  if (iVar8 == 1) {
                    DVar9 = FUN_140ad26c0();
                    DVar10 = GetCurrentThreadId();
                    if (DVar9 == DVar10) goto LAB_143a0e5a2;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar11 = (undefined8 *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x308);
                  puVar13 = (uint *)*puVar11;
                  if (puVar13 != (uint *)0x0) goto LAB_143a0e2f7;
                  while( true ) {
                    uVar15 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar15 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar15 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar4 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar12 = *(undefined4 **)(lVar4 + 0x310);
                    *(undefined8 *)(lVar4 + 0x310) = 0;
                    if (puVar12 == (undefined4 *)0x0) {
                      puVar12 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar12 = 0xffffffff;
                    *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
                    puVar12[0x12] = 0;
                    *puVar11 = puVar12;
                    FUN_140217a48(puVar11);
                    puVar13 = (uint *)*puVar11;
LAB_143a0e2f7:
                    puVar20 = (undefined8 *)
                              (*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar18 = (uint *)(puVar20 + 0x1a);
                    uVar15 = puVar13[0x12];
                    if (puVar18 <= puVar13 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                      LOCK();
                      uVar2 = *puVar13;
                      *puVar13 = *puVar13 + uVar15 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar15) != 0xffffffff) break;
                      puVar13 = (uint *)*puVar11;
                      *puVar13 = 0xffffffff;
                      *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                      puVar13[0x12] = 0;
                      *puVar11 = puVar13;
                      puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
                      puVar18 = (uint *)(puVar20 + 0x1a);
                      uVar15 = 0;
                      if (puVar18 <= puVar13 + 0x4000) {
                        uVar15 = 1;
                        goto LAB_143a0e377;
                      }
                    }
                  }
                  uVar15 = uVar15 + 1;
LAB_143a0e377:
                  *(uint **)(puVar13 + 0x10) = puVar18;
                  puVar13[0x12] = uVar15;
                  iVar8 = 0;
                  FUN_1447247dc(puVar20,0);
                  *puVar20 = &PTR_FUN_14adbca30;
                  *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar20 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar20 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar20 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_94;
                  puVar20[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar15 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                      uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
                      iVar8 = 0;
                    }
                    else {
                      uVar23 = 2;
                    }
                  }
                  else {
                    iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar23 = 5;
                  }
                  if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
                  }
                  puVar20[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar20[9] = puVar20;
                  puVar20[10] = puVar20;
                  lVar4 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar4 == 0) {
                    uVar7 = 1;
                    if ((char)uVar23 != '\x06') {
                      uVar7 = uVar23;
                    }
                    uVar23 = uVar7;
                    uVar14 = 0;
                  }
                  else {
                    if ((char)uVar23 == '\x06') {
                      uVar23 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                    }
                    uVar14 = *(undefined8 *)(lVar4 + 0x30);
                  }
                  puVar20[0xf] = uVar14;
                  puVar20[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar20 + 0x1c) = iVar8;
                  if (puVar20 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar20);
                    LOCK();
                    piVar1 = (int *)(puVar20 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar20)(puVar20,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbca10;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_148128f7c;
                  }
                  local_d8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae38);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar17 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar17 = local_68;
                    }
                    (**(code **)(*plVar17 + 0x10))();
                  }
                }
                goto LAB_143a0e1c6;
              }
            }
LAB_143a0e5a2:
            FUN_148128e8c(&local_b0,&DAT_14ca85100);
            goto LAB_143a0e1c6;
          }
          break;
        }
        iVar8 = (int)plVar17[2];
      } while (iVar8 != -1);
    }
  }
  uVar19 = 0;
LAB_143a0e1c6:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0e656 FUN_143a0e656 body=450 status=ok
// SIG undefined FUN_143a0e656(void)

void FUN_143a0e656(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148126c78(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0e81a FUN_143a0e81a body=31 status=ok
// SIG undefined FUN_143a0e81a(void)

undefined8 FUN_143a0e81a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a0e83a FUN_143a0e83a body=282 status=ok
// SIG undefined FUN_143a0e83a(void)

undefined8 * FUN_143a0e83a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0e954 FUN_143a0e954 body=282 status=ok
// SIG undefined FUN_143a0e954(void)

undefined8 * FUN_143a0e954(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0ea6e FUN_143a0ea6e body=114 status=ok
// SIG undefined FUN_143a0ea6e(void)

void FUN_143a0ea6e(longlong *param_1,int param_2)

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



// FUNCTION 143a0eb04 FUN_143a0eb04 body=282 status=ok
// SIG undefined FUN_143a0eb04(void)

undefined8 * FUN_143a0eb04(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0ec24 FUN_143a0ec24 body=282 status=ok
// SIG undefined FUN_143a0ec24(void)

undefined8 * FUN_143a0ec24(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a0ed44 FUN_143a0ed44 body=1148 status=ok
// SIG undefined FUN_143a0ed44(void)

void FUN_143a0ed44(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_1481293b6(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0f1c2 FUN_143a0f1c2 body=1685 status=ok
// SIG undefined FUN_143a0f1c2(void)

ulonglong FUN_143a0f1c2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a0f260;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a0f260;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 3;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a0f262;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a0f391;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a0f7a9;
          goto LAB_143a0f39a;
        }
LAB_143a0f7a9:
        FUN_14812bb96(&local_c0,&DAT_14ca85100);
        goto LAB_143a0f471;
      }
LAB_143a0f391:
      if (iVar3 == 0x10) goto LAB_143a0f7a9;
LAB_143a0f39a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a0f7a9;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a0f7a9;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a0f51b;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a0f51b:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a0f59b;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a0f59b:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbd0e0;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbd0c0;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_14812c0a6;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae44);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a0f471:
      FUN_14080c2b4();
      goto LAB_143a0f262;
    }
  }
LAB_143a0f260:
  uVar19 = 0;
LAB_143a0f262:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0f858 FUN_143a0f858 body=1736 status=ok
// SIG undefined FUN_143a0f858(void)

ulonglong FUN_143a0f858(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar18 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar18 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar14 == lVar3) {
          if ((plVar14 != (longlong *)0x0) && (pcVar4 = (char *)plVar14[1], pcVar4 != (char *)0x0))
          {
            uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a0fa92;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar18 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_1401f7650(pcVar4 + 0x10,lVar18 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_146c50912(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8),1);
              lVar18 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar18) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar18 << 3);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a0fa92;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar14 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar14 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar18 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a0f9b1;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a0fe72;
                goto LAB_143a0f9ba;
              }
            }
            else {
LAB_143a0f9b1:
              if (iVar6 != 0x10) {
LAB_143a0f9ba:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar18 + 0xc60), iVar6 == 2))
                  goto LAB_143a0fe72;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a0fe72;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar11 = (uint *)*puVar9;
                  if (puVar11 != (uint *)0x0) goto LAB_143a0fbe4;
                  while( true ) {
                    uVar13 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar13 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar13 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar10 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar10 = 0xffffffff;
                    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                    puVar10[0x12] = 0;
                    *puVar9 = puVar10;
                    FUN_140217a48(puVar9);
                    puVar11 = (uint *)*puVar9;
LAB_143a0fbe4:
                    puVar17 = (undefined8 *)
                              (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar15 = (uint *)(puVar17 + 0x1a);
                    uVar13 = puVar11[0x12];
                    if (puVar15 <= puVar11 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                      LOCK();
                      uVar2 = *puVar11;
                      *puVar11 = *puVar11 + uVar13 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar13) != 0xffffffff) break;
                      puVar11 = (uint *)*puVar9;
                      *puVar11 = 0xffffffff;
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                      puVar11[0x12] = 0;
                      *puVar9 = puVar11;
                      puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                      puVar15 = (uint *)(puVar17 + 0x1a);
                      uVar13 = 0;
                      if (puVar15 <= puVar11 + 0x4000) {
                        uVar13 = 1;
                        goto LAB_143a0fc64;
                      }
                    }
                  }
                  uVar13 = uVar13 + 1;
LAB_143a0fc64:
                  *(uint **)(puVar11 + 0x10) = puVar15;
                  puVar11[0x12] = uVar13;
                  iVar6 = 0;
                  FUN_1447247dc(puVar17,0);
                  *puVar17 = &PTR_FUN_14adbd110;
                  *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar17 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar17 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar17 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_94;
                  puVar17[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar13 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                  }
                  puVar17[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar17[9] = puVar17;
                  puVar17[10] = puVar17;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar12 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar12 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar17[0xf] = uVar12;
                  puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
                  if (puVar17 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar17);
                    LOCK();
                    piVar1 = (int *)(puVar17 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar17)(puVar17,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbd0f0;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_14812c24c;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae48);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar14 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar14 = local_68;
                    }
                    (**(code **)(*plVar14 + 0x10))();
                  }
                }
                goto LAB_143a0fa92;
              }
            }
LAB_143a0fe72:
            FUN_14812c15c(&local_b0,&DAT_14ca85100);
            goto LAB_143a0fa92;
          }
          break;
        }
        iVar6 = (int)plVar14[2];
      } while (iVar6 != -1);
    }
  }
  uVar16 = 0;
LAB_143a0fa92:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a0ff22 FUN_143a0ff22 body=2064 status=ok
// SIG undefined FUN_143a0ff22(void)

undefined8 FUN_143a0ff22(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_148 [32];
  code **local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_e9;
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar14 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar14 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar14 + 0x48) & 0xfe) == 2) {
    bVar8 = *(byte *)(lVar14 + 0x30) >> 1 & 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar8;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  plVar18 = (longlong *)(param_1 + 0x20);
  lVar14 = *(longlong *)(param_4 + 0x100);
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar10 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar10 + 1;
    local_118 = param_2;
    if (*(int *)(param_1 + 0x2c) == iVar10) {
      FUN_14482b872(plVar18,iVar10);
    }
    lVar21 = (longlong)iVar10;
    iVar19 = FUN_144a54ea4(param_1 + 0x30,1);
    lVar13 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar13 = param_1 + 0x30;
    }
    iVar9 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar9 = iVar19;
    }
    bVar8 = (byte)iVar19 & 0x1f;
    puVar16 = (uint *)(lVar13 + (longlong)(iVar9 >> 5) * 4);
    *puVar16 = *puVar16 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    param_2 = local_118;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x50);
    lVar21 = (longlong)iVar10;
    iVar19 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar21 * 0x18);
    *(int *)(param_1 + 0x50) = iVar19;
    iVar9 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 0x18) = 0xffffffff;
    }
  }
  lVar13 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x40);
  }
  iVar19 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar19 = iVar10;
  }
  puVar16 = (uint *)(lVar13 + (longlong)(iVar19 >> 5) * 4);
  *puVar16 = *puVar16 | 1 << ((byte)iVar10 & 0x1f);
  iVar19 = 1;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar21 * 0x18);
  *plVar3 = lVar14;
  plVar3[1] = (longlong)param_3;
  *(undefined4 *)(plVar3 + 2) = 0xffffffff;
  uVar24 = (int)((ulonglong)lVar14 >> 0x20) * 0x17 + (int)lVar14;
  uVar25 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
  if (1 < uVar25) {
    lVar13 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x60);
    }
    iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar24) * 4);
    if (iVar9 != -1) {
      do {
        plVar4 = (longlong *)(*plVar18 + (longlong)iVar9 * 0x18);
        if (*plVar4 == lVar14) {
          uVar5 = *(undefined4 *)((longlong)plVar3 + 4);
          lVar14 = plVar3[1];
          uVar6 = *(undefined4 *)((longlong)plVar3 + 0xc);
          *(int *)plVar4 = (int)*plVar3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar5;
          *(int *)(plVar4 + 1) = (int)lVar14;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar6;
          FUN_143a11174(plVar18,iVar10);
          goto LAB_143a10130;
        }
        iVar9 = (int)plVar4[2];
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar25) {
    uVar22 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar19 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar25 < 1) || (iVar19 <= *(int *)(param_1 + 0x68))) {
    uVar24 = *(int *)(param_1 + 0x68) - 1U & uVar24;
    *(uint *)((longlong)plVar3 + 0x14) = uVar24;
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar14 = param_1 + 0x58;
    }
    *(undefined4 *)(plVar3 + 2) =
         *(undefined4 *)
          (lVar14 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar24) * 4);
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar14 = param_1 + 0x58;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar24) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 0x68) = iVar19;
    FUN_14646f424(plVar18);
  }
LAB_143a10130:
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1033e;
  local_c0 = &local_e9;
  local_e9 = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14adbd130;
  local_e8 = FUN_141824472;
  FUN_140bb9115(param_2,param_4);
  uStack_108 = *(undefined8 *)(param_4 + 0x100);
  local_100 = *(undefined8 *)(param_4 + 0x870);
  uStack_f8 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_f4 = CONCAT31(uStack_f4._1_3_,local_e9);
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar14 + 0xc60);
  local_110 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_143a101c7;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143a101d0;
      goto LAB_143a10267;
    }
  }
  else {
LAB_143a101c7:
    if (iVar10 != 0x10) {
LAB_143a10267:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar14 + 0xc60), iVar10 == 2))
        goto LAB_143a101d0;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143a101d0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar16 = (uint *)*puVar2;
        if (puVar16 != (uint *)0x0) goto LAB_143a10416;
        while( true ) {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar14 + 0x310);
          *(undefined8 *)(lVar14 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar2 = puVar15;
          FUN_140217a48(puVar2);
          puVar16 = (uint *)*puVar2;
LAB_143a10416:
          puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar23 + 0x19);
          uVar24 = puVar16[0x12];
          if (puVar20 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar25 = *puVar16;
            *puVar16 = *puVar16 + uVar24 + 1;
            UNLOCK();
            if ((uVar25 ^ uVar24) != 0xffffffff) break;
            puVar16 = (uint *)*puVar2;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar2 = puVar16;
            puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar23 + 0x19);
            uVar24 = 0;
            if (puVar20 <= puVar16 + 0x4000) {
              uVar24 = 1;
              goto LAB_143a10496;
            }
          }
        }
        uVar24 = uVar24 + 1;
LAB_143a10496:
        *(uint **)(puVar16 + 0x10) = puVar20;
        puVar16[0x12] = uVar24;
        iVar10 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14adbd170;
        *(undefined4 *)(puVar23 + 0x15) = (undefined4)local_110;
        *(undefined4 *)((longlong)puVar23 + 0xac) = local_110._4_4_;
        *(undefined4 *)(puVar23 + 0x16) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)puVar23 + 0xb4) = uStack_108._4_4_;
        *(undefined4 *)(puVar23 + 0x17) = (undefined4)local_100;
        *(undefined4 *)((longlong)puVar23 + 0xbc) = local_100._4_4_;
        *(undefined4 *)(puVar23 + 0x18) = uStack_f8;
        *(undefined4 *)((longlong)puVar23 + 0xc4) = uStack_f4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar24 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
            iVar10 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar14 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar14 == 0) {
          uVar7 = 1;
          if ((char)uVar22 != '\x06') {
            uVar7 = uVar22;
          }
          uVar22 = uVar7;
          uVar17 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
          }
          uVar17 = *(undefined8 *)(lVar14 + 0x30);
        }
        puVar23[0xf] = uVar17;
        puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar10;
        if (puVar23 == (undefined8 *)0x0) {
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_a8[0] = (code *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_LAB_14adbd150;
        *(undefined4 *)(local_98 + 3) = (undefined4)local_100;
        *(undefined4 *)((longlong)local_98 + 0x1c) = local_100._4_4_;
        *(undefined4 *)(local_98 + 4) = uStack_f8;
        *(undefined4 *)((longlong)local_98 + 0x24) = uStack_f4;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_110;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_110._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_108._4_4_;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = FUN_14129d5ca;
        }
        local_128 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae4c);
        if (local_a8[0] != (code *)0x0) {
          plVar18 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar18 = local_88;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
      }
      goto LAB_143a1033e;
    }
  }
LAB_143a101d0:
  FUN_14812c33c(&local_110,&DAT_14ca85100);
LAB_143a1033e:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a10734 FUN_143a10734 body=1427 status=ok
// SIG undefined FUN_143a10734(void)

void FUN_143a10734(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a10861;
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143a10795;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a1079a;
      goto LAB_143a107c6;
    }
  }
  else {
LAB_143a10795:
    if (iVar8 != 0x10) {
LAB_143a107c6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_143a1079a;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a1079a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_143a109d9;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_143a109d9:
          puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar18 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar14 = 0;
            if (puVar18 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143a10a5b;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143a10a5b:
        *(uint **)(puVar12 + 0x10) = puVar18;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14adbd1a0;
        puVar19[0x15] = param_1;
        puVar19[0x16] = uVar13;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar19[0xf] = uVar13;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar17 = (int *)(puVar19 + 1);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbd180;
        local_88[0] = &LAB_141151f68;
        local_60 = param_1;
        local_58 = uVar13;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3ae50);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_143a10861;
    }
  }
LAB_143a1079a:
  FUN_141151f7c(param_1 + 0x70,uVar13);
LAB_143a10861:
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_3 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        plVar2 = (longlong *)(lVar5 + (longlong)iVar8 * 0x18);
        if (*plVar2 == lVar4) {
          iVar7 = *(int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          if (iVar7 == iVar8) {
            piVar17 = (int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          }
          else {
            do {
              piVar17 = (int *)(lVar5 + (longlong)iVar7 * 0x18 + 0x10);
              iVar7 = *piVar17;
            } while (iVar7 != iVar8);
          }
          *piVar17 = (int)plVar2[2];
          FUN_143a11174((longlong *)(param_1 + 0x20));
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a10d7c FUN_143a10d7c body=450 status=ok
// SIG undefined FUN_143a10d7c(void)

void FUN_143a10d7c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1481296de(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a10f40 FUN_143a10f40 body=282 status=ok
// SIG undefined FUN_143a10f40(void)

undefined8 * FUN_143a10f40(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1105a FUN_143a1105a body=282 status=ok
// SIG undefined FUN_143a1105a(void)

undefined8 * FUN_143a1105a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a11174 FUN_143a11174 body=116 status=ok
// SIG undefined FUN_143a11174(void)

void FUN_143a11174(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 143a1120c FUN_143a1120c body=282 status=ok
// SIG undefined FUN_143a1120c(void)

undefined8 * FUN_143a1120c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1132c FUN_143a1132c body=282 status=ok
// SIG undefined FUN_143a1132c(void)

undefined8 * FUN_143a1132c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1144c FUN_143a1144c body=1148 status=ok
// SIG undefined FUN_143a1144c(void)

void FUN_143a1144c(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_14812c6c2(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a118ca FUN_143a118ca body=1688 status=ok
// SIG undefined FUN_143a118ca(void)

ulonglong FUN_143a118ca(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a11968;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a11968;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 * 0xc;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1196a;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a11a9c;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a11eb4;
          goto LAB_143a11aa5;
        }
LAB_143a11eb4:
        FUN_14812e73a(&local_c0,&DAT_14ca85100);
        goto LAB_143a11b7c;
      }
LAB_143a11a9c:
      if (iVar3 == 0x10) goto LAB_143a11eb4;
LAB_143a11aa5:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a11eb4;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a11eb4;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a11c26;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a11c26:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a11ca6;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a11ca6:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbd750;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbd730;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_14812ec56;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae54);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a11b7c:
      FUN_14080c2b4();
      goto LAB_143a1196a;
    }
  }
LAB_143a11968:
  uVar19 = 0;
LAB_143a1196a:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a11f64 FUN_143a11f64 body=1740 status=ok
// SIG undefined FUN_143a11f64(void)

ulonglong FUN_143a11f64(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 unaff_RSI;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar10 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar15 == lVar3) {
          if ((plVar15 != (longlong *)0x0) && (pcVar4 = (char *)plVar15[1], pcVar4 != (char *)0x0))
          {
            uVar17 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a1219e;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar10 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_140de4b5e(pcVar4 + 0x10,lVar10 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_146bfab7c(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8),1);
              lVar10 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar10) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar10 * 0xc);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a1219e;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar15 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar15 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar15 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar10 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a120bd;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a12582;
                goto LAB_143a120c6;
              }
            }
            else {
LAB_143a120bd:
              if (iVar6 != 0x10) {
LAB_143a120c6:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar10 + 0xc60), iVar6 == 2))
                  goto LAB_143a12582;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a12582;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar12 = (uint *)*puVar9;
                  if (puVar12 != (uint *)0x0) goto LAB_143a122f4;
                  while( true ) {
                    uVar14 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar14 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar14 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar11 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar11 = 0xffffffff;
                    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                    puVar11[0x12] = 0;
                    *puVar9 = puVar11;
                    FUN_140217a48(puVar9);
                    puVar12 = (uint *)*puVar9;
LAB_143a122f4:
                    puVar18 = (undefined8 *)
                              (*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar16 = (uint *)(puVar18 + 0x1a);
                    uVar14 = puVar12[0x12];
                    if (puVar16 <= puVar12 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                      LOCK();
                      uVar2 = *puVar12;
                      *puVar12 = *puVar12 + uVar14 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar14) != 0xffffffff) break;
                      puVar12 = (uint *)*puVar9;
                      *puVar12 = 0xffffffff;
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                      puVar12[0x12] = 0;
                      *puVar9 = puVar12;
                      puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                      puVar16 = (uint *)(puVar18 + 0x1a);
                      uVar14 = 0;
                      if (puVar16 <= puVar12 + 0x4000) {
                        uVar14 = 1;
                        goto LAB_143a12374;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
LAB_143a12374:
                  *(uint **)(puVar12 + 0x10) = puVar16;
                  puVar12[0x12] = uVar14;
                  iVar6 = 0;
                  FUN_1447247dc(puVar18,0);
                  *puVar18 = &PTR_FUN_14adbd780;
                  *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar18 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar18 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar18 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_94;
                  puVar18[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar14 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                  }
                  puVar18[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar18[9] = puVar18;
                  puVar18[10] = puVar18;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar13 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar13 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar18[0xf] = uVar13;
                  puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar18 + 0x1c) = iVar6;
                  if (puVar18 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar18);
                    LOCK();
                    piVar1 = (int *)(puVar18 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar18)(puVar18,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbd760;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_14812edfc;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae58);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar15 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar15 = local_68;
                    }
                    (**(code **)(*plVar15 + 0x10))();
                  }
                }
                goto LAB_143a1219e;
              }
            }
LAB_143a12582:
            FUN_14812ed0c(&local_b0,&DAT_14ca85100);
            goto LAB_143a1219e;
          }
          break;
        }
        iVar6 = (int)plVar15[2];
      } while (iVar6 != -1);
    }
  }
  uVar17 = 0;
LAB_143a1219e:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a12638 FUN_143a12638 body=2055 status=ok
// SIG undefined FUN_143a12638(void)

undefined8 FUN_143a12638(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_e9;
  code *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar15 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar15 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar15 + 0x48) & 0xfe) == 2) {
    bVar8 = *(byte *)(lVar15 + 0x30) >> 1 & 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar8;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  plVar19 = (longlong *)(param_1 + 0x20);
  lVar15 = *(longlong *)(param_4 + 0x100);
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar11 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar11 + 1;
    local_118 = param_4;
    if (*(int *)(param_1 + 0x2c) == iVar11) {
      FUN_14482b872(plVar19,iVar11);
    }
    lVar21 = (longlong)iVar11;
    iVar9 = FUN_144a54ea4(param_1 + 0x30,1);
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar14 = param_1 + 0x30;
    }
    iVar10 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    bVar8 = (byte)iVar9 & 0x1f;
    puVar17 = (uint *)(lVar14 + (longlong)(iVar10 >> 5) * 4);
    *puVar17 = *puVar17 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    param_4 = local_118;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x50);
    lVar21 = (longlong)iVar11;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar21 * 0x18);
    *(int *)(param_1 + 0x50) = iVar9;
    iVar10 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  lVar14 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x40);
  }
  iVar9 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar9 = iVar11;
  }
  puVar17 = (uint *)(lVar14 + (longlong)(iVar9 >> 5) * 4);
  *puVar17 = *puVar17 | 1 << ((byte)iVar11 & 0x1f);
  iVar9 = 1;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar21 * 0x18);
  *plVar3 = lVar15;
  plVar3[1] = (longlong)param_3;
  *(undefined4 *)(plVar3 + 2) = 0xffffffff;
  uVar24 = (int)((ulonglong)lVar15 >> 0x20) * 0x17 + (int)lVar15;
  uVar25 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
  if (1 < uVar25) {
    lVar21 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x60);
    }
    iVar10 = *(int *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar24) * 4);
    if (iVar10 != -1) {
      do {
        plVar4 = (longlong *)(*plVar19 + (longlong)iVar10 * 0x18);
        if (*plVar4 == lVar15) {
          uVar5 = *(undefined4 *)((longlong)plVar3 + 4);
          lVar15 = plVar3[1];
          uVar6 = *(undefined4 *)((longlong)plVar3 + 0xc);
          *(int *)plVar4 = (int)*plVar3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar5;
          *(int *)(plVar4 + 1) = (int)lVar15;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar6;
          FUN_143a137e6(plVar19,iVar11);
          goto LAB_143a12895;
        }
        iVar10 = (int)plVar4[2];
      } while (iVar10 != -1);
    }
  }
  if (3 < uVar25) {
    uVar22 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar25 < 1) || (iVar9 <= *(int *)(param_1 + 0x68))) {
    uVar24 = *(int *)(param_1 + 0x68) - 1U & uVar24;
    *(uint *)((longlong)plVar3 + 0x14) = uVar24;
    lVar15 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar15 = param_1 + 0x58;
    }
    *(undefined4 *)(plVar3 + 2) =
         *(undefined4 *)
          (lVar15 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar24) * 4);
    lVar15 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar15 = param_1 + 0x58;
    }
    *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar24) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 0x68) = iVar9;
    FUN_14646f5ee(plVar19);
  }
LAB_143a12895:
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a12a10;
  local_c0 = &local_e9;
  local_e9 = 0;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14adbd7b0;
  local_e8 = FUN_14182471a;
  FUN_140bb9115(param_2,param_4);
  uStack_108 = *(undefined8 *)(param_4 + 0x100);
  local_100 = *(undefined8 *)(param_4 + 0x870);
  uStack_f8 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_f4 = CONCAT31(uStack_f4._1_3_,local_e9);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar15 + 0xc60);
  local_110 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar11 != 2) {
      if (iVar11 != 1) goto LAB_143a12930;
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_143a12d68;
      goto LAB_143a12939;
    }
  }
  else {
LAB_143a12930:
    if (iVar11 != 0x10) {
LAB_143a12939:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar15 + 0xc60), iVar11 == 2))
        goto LAB_143a12d68;
        if (iVar11 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          if (DVar12 == DVar13) goto LAB_143a12d68;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar17 = (uint *)*puVar2;
        if (puVar17 != (uint *)0x0) goto LAB_143a12ae8;
        while( true ) {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar16 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar2 = puVar16;
          FUN_140217a48(puVar2);
          puVar17 = (uint *)*puVar2;
LAB_143a12ae8:
          puVar23 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar23 + 0x19);
          uVar24 = puVar17[0x12];
          if (puVar20 <= puVar17 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar25 = *puVar17;
            *puVar17 = *puVar17 + uVar24 + 1;
            UNLOCK();
            if ((uVar25 ^ uVar24) != 0xffffffff) break;
            puVar17 = (uint *)*puVar2;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            puVar23 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar23 + 0x19);
            uVar24 = 0;
            if (puVar20 <= puVar17 + 0x4000) {
              uVar24 = 1;
              goto LAB_143a12b68;
            }
          }
        }
        uVar24 = uVar24 + 1;
LAB_143a12b68:
        *(uint **)(puVar17 + 0x10) = puVar20;
        puVar17[0x12] = uVar24;
        iVar11 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14adbd7f0;
        *(undefined4 *)(puVar23 + 0x15) = (undefined4)local_110;
        *(undefined4 *)((longlong)puVar23 + 0xac) = local_110._4_4_;
        *(undefined4 *)(puVar23 + 0x16) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)puVar23 + 0xb4) = uStack_108._4_4_;
        *(undefined4 *)(puVar23 + 0x17) = (undefined4)local_100;
        *(undefined4 *)((longlong)puVar23 + 0xbc) = local_100._4_4_;
        *(undefined4 *)(puVar23 + 0x18) = uStack_f8;
        *(undefined4 *)((longlong)puVar23 + 0xc4) = uStack_f4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar24 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
            iVar11 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar15 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar15 == 0) {
          uVar7 = 1;
          if ((char)uVar22 != '\x06') {
            uVar7 = uVar22;
          }
          uVar22 = uVar7;
          uVar18 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
          }
          uVar18 = *(undefined8 *)(lVar15 + 0x30);
        }
        puVar23[0xf] = uVar18;
        puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar11;
        if (puVar23 == (undefined8 *)0x0) {
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_a8[0] = (undefined1 *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x28,8);
        *local_98 = (longlong)&PTR_LAB_14adbd7d0;
        *(undefined4 *)(local_98 + 3) = (undefined4)local_100;
        *(undefined4 *)((longlong)local_98 + 0x1c) = local_100._4_4_;
        *(undefined4 *)(local_98 + 4) = uStack_f8;
        *(undefined4 *)((longlong)local_98 + 0x24) = uStack_f4;
        *(undefined4 *)(local_98 + 1) = (undefined4)local_110;
        *(undefined4 *)((longlong)local_98 + 0xc) = local_110._4_4_;
        *(undefined4 *)(local_98 + 2) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)local_98 + 0x14) = uStack_108._4_4_;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = &LAB_1458be130;
        }
        local_128 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae5c);
        if (local_a8[0] != (undefined1 *)0x0) {
          plVar19 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar19 = local_88;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
      }
      goto LAB_143a12a10;
    }
  }
LAB_143a12d68:
  FUN_1458be136(&local_110,&DAT_14ca85100);
LAB_143a12a10:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a12e40 FUN_143a12e40 body=1453 status=ok
// SIG undefined FUN_143a12e40(void)

void FUN_143a12e40(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a12f51;
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143a12ea5;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143a1334b;
      goto LAB_143a12eae;
    }
  }
  else {
LAB_143a12ea5:
    if (iVar8 != 0x10) {
LAB_143a12eae:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_143a1334b;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a1334b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_143a130c9;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_143a130c9:
          puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar18 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar14 = 0;
            if (puVar18 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143a1314b;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143a1314b:
        *(uint **)(puVar12 + 0x10) = puVar18;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14adbd820;
        puVar19[0x15] = param_1;
        puVar19[0x16] = uVar13;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar19[0xf] = uVar13;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar17 = (int *)(puVar19 + 1);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbd800;
        local_88[0] = &LAB_145837a16;
        local_60 = param_1;
        local_58 = uVar13;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3ae60);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_143a12f51;
    }
  }
LAB_143a1334b:
  FUN_145837a2a(param_1 + 0x70,uVar13);
LAB_143a12f51:
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_3 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        plVar2 = (longlong *)(lVar5 + (longlong)iVar8 * 0x18);
        if (*plVar2 == lVar4) {
          iVar7 = *(int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          if (iVar7 == iVar8) {
            piVar17 = (int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          }
          else {
            do {
              piVar17 = (int *)(lVar5 + (longlong)iVar7 * 0x18 + 0x10);
              iVar7 = *piVar17;
            } while (iVar7 != iVar8);
          }
          *piVar17 = (int)plVar2[2];
          FUN_143a137e6((longlong *)(param_1 + 0x20));
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a133ee FUN_143a133ee body=450 status=ok
// SIG undefined FUN_143a133ee(void)

void FUN_143a133ee(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14812c9ea(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a135b2 FUN_143a135b2 body=282 status=ok
// SIG undefined FUN_143a135b2(void)

undefined8 * FUN_143a135b2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a136cc FUN_143a136cc body=282 status=ok
// SIG undefined FUN_143a136cc(void)

undefined8 * FUN_143a136cc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a137e6 FUN_143a137e6 body=112 status=ok
// SIG undefined FUN_143a137e6(void)

void FUN_143a137e6(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 143a1385c FUN_143a1385c body=282 status=ok
// SIG undefined FUN_143a1385c(void)

undefined8 * FUN_143a1385c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a13976 FUN_143a13976 body=282 status=ok
// SIG undefined FUN_143a13976(void)

undefined8 * FUN_143a13976(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a13a90 FUN_143a13a90 body=1148 status=ok
// SIG undefined FUN_143a13a90(void)

void FUN_143a13a90(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_14812f4b2(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a13f0e FUN_143a13f0e body=1688 status=ok
// SIG undefined FUN_143a13f0e(void)

ulonglong FUN_143a13f0e(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a13fac;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a13fac;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 * 0xc;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a13fae;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a140e0;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a144f8;
          goto LAB_143a140e9;
        }
LAB_143a144f8:
        FUN_14813170e(&local_c0,&DAT_14ca85100);
        goto LAB_143a141c0;
      }
LAB_143a140e0:
      if (iVar3 == 0x10) goto LAB_143a144f8;
LAB_143a140e9:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a144f8;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a144f8;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a1426a;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a1426a:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a142ea;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a142ea:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbddd0;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbddb0;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_148131c2a;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae64);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a141c0:
      FUN_14080c2b4();
      goto LAB_143a13fae;
    }
  }
LAB_143a13fac:
  uVar19 = 0;
LAB_143a13fae:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a145a8 FUN_143a145a8 body=1737 status=ok
// SIG undefined FUN_143a145a8(void)

ulonglong FUN_143a145a8(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 unaff_RSI;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar10 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar15 == lVar3) {
          if ((plVar15 != (longlong *)0x0) && (pcVar4 = (char *)plVar15[1], pcVar4 != (char *)0x0))
          {
            uVar17 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a147e2;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar10 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_1457af622(pcVar4 + 0x10,lVar10 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_14811e196(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8));
              lVar10 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar10) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar10 * 0xc);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a147e2;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar15 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar15 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar15 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar10 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a14701;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a14bc3;
                goto LAB_143a1470a;
              }
            }
            else {
LAB_143a14701:
              if (iVar6 != 0x10) {
LAB_143a1470a:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar10 + 0xc60), iVar6 == 2))
                  goto LAB_143a14bc3;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a14bc3;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar12 = (uint *)*puVar9;
                  if (puVar12 != (uint *)0x0) goto LAB_143a14935;
                  while( true ) {
                    uVar14 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar14 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar14 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar11 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar11 = 0xffffffff;
                    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                    puVar11[0x12] = 0;
                    *puVar9 = puVar11;
                    FUN_140217a48(puVar9);
                    puVar12 = (uint *)*puVar9;
LAB_143a14935:
                    puVar18 = (undefined8 *)
                              (*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar16 = (uint *)(puVar18 + 0x1a);
                    uVar14 = puVar12[0x12];
                    if (puVar16 <= puVar12 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                      LOCK();
                      uVar2 = *puVar12;
                      *puVar12 = *puVar12 + uVar14 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar14) != 0xffffffff) break;
                      puVar12 = (uint *)*puVar9;
                      *puVar12 = 0xffffffff;
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                      puVar12[0x12] = 0;
                      *puVar9 = puVar12;
                      puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                      puVar16 = (uint *)(puVar18 + 0x1a);
                      uVar14 = 0;
                      if (puVar16 <= puVar12 + 0x4000) {
                        uVar14 = 1;
                        goto LAB_143a149b5;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
LAB_143a149b5:
                  *(uint **)(puVar12 + 0x10) = puVar16;
                  puVar12[0x12] = uVar14;
                  iVar6 = 0;
                  FUN_1447247dc(puVar18,0);
                  *puVar18 = &PTR_FUN_14adbde00;
                  *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar18 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar18 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar18 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_94;
                  puVar18[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar14 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                  }
                  puVar18[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar18[9] = puVar18;
                  puVar18[10] = puVar18;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar13 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar13 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar18[0xf] = uVar13;
                  puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar18 + 0x1c) = iVar6;
                  if (puVar18 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar18);
                    LOCK();
                    piVar1 = (int *)(puVar18 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar18)(puVar18,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbdde0;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_148131dd0;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae68);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar15 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar15 = local_68;
                    }
                    (**(code **)(*plVar15 + 0x10))();
                  }
                }
                goto LAB_143a147e2;
              }
            }
LAB_143a14bc3:
            FUN_148131ce0(&local_b0,&DAT_14ca85100);
            goto LAB_143a147e2;
          }
          break;
        }
        iVar6 = (int)plVar15[2];
      } while (iVar6 != -1);
    }
  }
  uVar17 = 0;
LAB_143a147e2:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a14c78 FUN_143a14c78 body=398 status=ok
// SIG undefined FUN_143a14c78(void)

void FUN_143a14c78(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  return;
}



// FUNCTION 143a14e06 FUN_143a14e06 body=1901 status=ok
// SIG undefined FUN_143a14e06(void)

void FUN_143a14e06(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *_Dst;
  longlong *plVar11;
  undefined4 uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar7 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar7 = *(int *)(param_3 + 1);
  }
  if (iVar7 == (int)param_1[5]) goto LAB_143a152e0;
  FUN_143a14c78(param_1);
  *(int *)(param_1 + 5) = iVar7;
  *(int *)(param_1 + 4) = iVar7 * 0xc + 0xc;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  bVar14 = *(int *)((longlong)param_1 + 0x2c) != -1;
  uVar12 = 0x400;
  if (!bVar14) {
    uVar12 = 0x10;
  }
  iVar7 = iVar7 * 0xc + 0xc;
  local_a8 = (undefined8 *)CONCAT44(DAT_14c873698,iVar7);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar14 * 8 + 0x4121);
  if (iVar7 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar12);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar12;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar12);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar12;
  }
  lVar13 = local_b0;
  plVar11 = param_1 + 1;
  if (plVar11 == &local_b0) {
LAB_143a15002:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar13 = *plVar11;
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_b0;
    local_b0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_143a15002;
    }
  }
  if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x28) & 0x10) == 0)) {
    local_a8._0_3_ = 0x10d00;
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar10 = param_1 + 3;
  if (plVar10 == &local_b0) {
LAB_143a15139:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar13 = *plVar10;
    *plVar10 = local_b0;
    local_b0 = 0;
    if (lVar13 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar13 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar13 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar13 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_143a15139;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar11 == 0) || ((*(byte *)(*plVar11 + 0x28) & 0x10) == 0)) {
      local_a8 = (undefined8 *)0x10d01;
    }
    else {
      local_a8 = (undefined8 *)0x40001;
    }
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar11 = param_1 + 2;
    if (plVar11 != &local_b0) {
      lVar13 = *plVar11;
      *plVar11 = local_b0;
      local_b0 = 0;
      if (lVar13 == 0) goto LAB_143a152e0;
      LOCK();
      puVar1 = (uint *)(lVar13 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar13 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar13 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar13;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar14 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar14) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar13;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar14 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar14) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar14) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
LAB_143a152e0:
  lVar5 = param_1[4];
  lVar13 = param_1[1];
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar5);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar13,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) * 0xc);
  }
  uVar12 = DAT_14c846338;
  uVar6 = DAT_14c846330;
  lVar13 = param_1[5];
  *(undefined4 *)((longlong)_Dst + (longlong)(int)lVar13 * 0xc + 8) = DAT_14c846338;
  *(undefined8 *)((longlong)_Dst + (longlong)(int)lVar13 * 0xc) = uVar6;
  lVar13 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((uint7)(uint3)((uint)uVar12 >> 8),1));
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar13 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar13 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a15574 FUN_143a15574 body=450 status=ok
// SIG undefined FUN_143a15574(void)

void FUN_143a15574(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14812f7da(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a15738 FUN_143a15738 body=31 status=ok
// SIG undefined FUN_143a15738(void)

undefined8 FUN_143a15738(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a15758 FUN_143a15758 body=282 status=ok
// SIG undefined FUN_143a15758(void)

undefined8 * FUN_143a15758(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a15872 FUN_143a15872 body=282 status=ok
// SIG undefined FUN_143a15872(void)

undefined8 * FUN_143a15872(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1598c FUN_143a1598c body=116 status=ok
// SIG undefined FUN_143a1598c(void)

void FUN_143a1598c(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 143a15a00 FUN_143a15a00 body=282 status=ok
// SIG undefined FUN_143a15a00(void)

undefined8 * FUN_143a15a00(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a15b1a FUN_143a15b1a body=282 status=ok
// SIG undefined FUN_143a15b1a(void)

undefined8 * FUN_143a15b1a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a15c34 FUN_143a15c34 body=1148 status=ok
// SIG undefined FUN_143a15c34(void)

void FUN_143a15c34(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_148132cb2(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a160b2 FUN_143a160b2 body=1685 status=ok
// SIG undefined FUN_143a160b2(void)

ulonglong FUN_143a160b2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a16150;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a16150;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 4;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a16152;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a16281;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a16699;
          goto LAB_143a1628a;
        }
LAB_143a16699:
        FUN_14813573a(&local_c0,&DAT_14ca85100);
        goto LAB_143a16361;
      }
LAB_143a16281:
      if (iVar3 == 0x10) goto LAB_143a16699;
LAB_143a1628a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a16699;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a16699;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a1640b;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a1640b:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a1648b;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a1648b:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbe430;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbe410;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_148135c4a;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae74);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a16361:
      FUN_14080c2b4();
      goto LAB_143a16152;
    }
  }
LAB_143a16150:
  uVar19 = 0;
LAB_143a16152:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a16748 FUN_143a16748 body=1737 status=ok
// SIG undefined FUN_143a16748(void)

ulonglong FUN_143a16748(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar18 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar18 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar14 == lVar3) {
          if ((plVar14 != (longlong *)0x0) && (pcVar4 = (char *)plVar14[1], pcVar4 != (char *)0x0))
          {
            uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a169ea;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar18 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_146bff298(pcVar4 + 0x10,lVar18 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_140330574(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8),1);
              lVar18 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar18) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar18 << 4);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a169ea;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar14 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar14 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar18 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a16909;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a16d63;
                goto LAB_143a16912;
              }
            }
            else {
LAB_143a16909:
              if (iVar6 != 0x10) {
LAB_143a16912:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar18 + 0xc60), iVar6 == 2))
                  goto LAB_143a16d63;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a16d63;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar11 = (uint *)*puVar9;
                  if (puVar11 != (uint *)0x0) goto LAB_143a16ad5;
                  while( true ) {
                    uVar13 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar13 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar13 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar10 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar10 = 0xffffffff;
                    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                    puVar10[0x12] = 0;
                    *puVar9 = puVar10;
                    FUN_140217a48(puVar9);
                    puVar11 = (uint *)*puVar9;
LAB_143a16ad5:
                    puVar17 = (undefined8 *)
                              (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar15 = (uint *)(puVar17 + 0x1a);
                    uVar13 = puVar11[0x12];
                    if (puVar15 <= puVar11 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                      LOCK();
                      uVar2 = *puVar11;
                      *puVar11 = *puVar11 + uVar13 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar13) != 0xffffffff) break;
                      puVar11 = (uint *)*puVar9;
                      *puVar11 = 0xffffffff;
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                      puVar11[0x12] = 0;
                      *puVar9 = puVar11;
                      puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                      puVar15 = (uint *)(puVar17 + 0x1a);
                      uVar13 = 0;
                      if (puVar15 <= puVar11 + 0x4000) {
                        uVar13 = 1;
                        goto LAB_143a16b55;
                      }
                    }
                  }
                  uVar13 = uVar13 + 1;
LAB_143a16b55:
                  *(uint **)(puVar11 + 0x10) = puVar15;
                  puVar11[0x12] = uVar13;
                  iVar6 = 0;
                  FUN_1447247dc(puVar17,0);
                  *puVar17 = &PTR_FUN_14adbe460;
                  *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar17 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar17 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar17 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_94;
                  puVar17[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar13 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                  }
                  puVar17[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar17[9] = puVar17;
                  puVar17[10] = puVar17;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar12 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar12 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar17[0xf] = uVar12;
                  puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
                  if (puVar17 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar17);
                    LOCK();
                    piVar1 = (int *)(puVar17 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar17)(puVar17,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbe440;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_148135df0;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae78);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar14 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar14 = local_68;
                    }
                    (**(code **)(*plVar14 + 0x10))();
                  }
                }
                goto LAB_143a169ea;
              }
            }
LAB_143a16d63:
            FUN_148135d00(&local_b0,&DAT_14ca85100);
            goto LAB_143a169ea;
          }
          break;
        }
        iVar6 = (int)plVar14[2];
      } while (iVar6 != -1);
    }
  }
  uVar16 = 0;
LAB_143a169ea:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a16e12 FUN_143a16e12 body=1581 status=ok
// SIG undefined FUN_143a16e12(void)

undefined8 FUN_143a16e12(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_148135ea6(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a17045;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adbe490;
  local_d8 = FUN_148136372;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a16f68;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a17399;
      goto LAB_143a16f71;
    }
  }
  else {
LAB_143a16f68:
    if (iVar7 != 0x10) {
LAB_143a16f71:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a17399;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a17399;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a17119;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a17119:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a17199;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a17199:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adbe4d0;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adbe4b0;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_1481369d4;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae7c);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a17045;
    }
  }
LAB_143a17399:
  FUN_1481363dc(&local_108,&DAT_14ca85100);
LAB_143a17045:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a17440 FUN_143a17440 body=1307 status=ok
// SIG undefined FUN_143a17440(void)

void FUN_143a17440(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a174ae;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a1749d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a174a2;
      goto LAB_143a17513;
    }
  }
  else {
LAB_143a1749d:
    if (iVar6 != 0x10) {
LAB_143a17513:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a174a2;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a174a2;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a175f8;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a175f8:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a1767a;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a1767a:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adbe500;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbe4e0;
        local_88[0] = &LAB_148136b6c;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3ae80);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a174ae;
    }
  }
LAB_143a174a2:
  FUN_148136a8a(param_1 + 0x70,uVar11);
LAB_143a174ae:
  FUN_148136c2a(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1795c FUN_143a1795c body=398 status=ok
// SIG undefined FUN_143a1795c(void)

void FUN_143a1795c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  return;
}



// FUNCTION 143a17aea FUN_143a17aea body=1921 status=ok
// SIG undefined FUN_143a17aea(void)

void FUN_143a17aea(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *_Dst;
  longlong *plVar10;
  byte bVar11;
  undefined *puVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar14 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar14 = *(int *)(param_3 + 1);
  }
  if (iVar14 == (int)param_1[5]) goto LAB_143a17fea;
  FUN_143a1795c(param_1);
  *(int *)(param_1 + 5) = iVar14;
  *(int *)(param_1 + 4) = iVar14 * 0x10 + 0x10;
  bVar16 = *(int *)((longlong)param_1 + 0x2c) != -1;
  bVar11 = 0xd;
  if (!bVar16) {
    bVar11 = 1;
  }
  puVar12 = &DAT_14c873680;
  if (!bVar16) {
    puVar12 = &DAT_14c873440;
  }
  uVar15 = 0x400;
  if (!bVar16) {
    uVar15 = 0x10;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  iVar14 = iVar14 * 0x10 + 0x10;
  local_a8 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar12 + 0x18),iVar14);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar16 * 8 + 0x4121);
  if (iVar14 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar15);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar15;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar15);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar15;
  }
  lVar13 = local_b0;
  plVar10 = param_1 + 1;
  if (plVar10 == &local_b0) {
LAB_143a17d08:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar13;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    lVar13 = *plVar10;
  }
  else {
    lVar6 = *plVar10;
    *plVar10 = local_b0;
    local_b0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_143a17d08;
    }
  }
  if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x28) & 0x10) == 0)) {
    local_a8._0_2_ = (ushort)bVar11 << 8;
    local_a8._0_3_ = CONCAT12(1,(short)local_a8);
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar9 = param_1 + 3;
  if (plVar9 == &local_b0) {
LAB_143a17e41:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar13;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  else {
    lVar13 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar13 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar13 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar13 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar13 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar13;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_143a17e41;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
      local_a8._0_2_ = CONCAT11(bVar11,1);
      local_a8._0_3_ = CONCAT12(1,(short)local_a8);
    }
    else {
      local_a8._0_3_ = 0x40001;
    }
    local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar10 = param_1 + 2;
    if (plVar10 != &local_b0) {
      lVar13 = *plVar10;
      *plVar10 = local_b0;
      local_b0 = 0;
      if (lVar13 == 0) goto LAB_143a17fea;
      LOCK();
      puVar2 = (uint *)(lVar13 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar13 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar11 = *(byte *)(lVar13 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar11 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar16) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar16) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar11 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar11 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar16) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar16) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
LAB_143a17fea:
  lVar6 = param_1[4];
  lVar13 = param_1[1];
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar6);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar13,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 4);
  }
  puVar1 = (undefined8 *)((longlong)_Dst + (longlong)(int)param_1[5] * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar13 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar13 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar13 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a1826c FUN_143a1826c body=450 status=ok
// SIG undefined FUN_143a1826c(void)

void FUN_143a1826c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148132fda(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a18430 FUN_143a18430 body=282 status=ok
// SIG undefined FUN_143a18430(void)

undefined8 * FUN_143a18430(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1854a FUN_143a1854a body=282 status=ok
// SIG undefined FUN_143a1854a(void)

undefined8 * FUN_143a1854a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a18664 FUN_143a18664 body=282 status=ok
// SIG undefined FUN_143a18664(void)

undefined8 * FUN_143a18664(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1877e FUN_143a1877e body=282 status=ok
// SIG undefined FUN_143a1877e(void)

undefined8 * FUN_143a1877e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1889e FUN_143a1889e body=1148 status=ok
// SIG undefined FUN_143a1889e(void)

void FUN_143a1889e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_148136ecc(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a18d1c FUN_143a18d1c body=1685 status=ok
// SIG undefined FUN_143a18d1c(void)

ulonglong FUN_143a18d1c(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a18dba;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a18dba;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 4;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a18dbc;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a18eeb;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a19303;
          goto LAB_143a18ef4;
        }
LAB_143a19303:
        FUN_148138fdc(&local_c0,&DAT_14ca85100);
        goto LAB_143a18fcb;
      }
LAB_143a18eeb:
      if (iVar3 == 0x10) goto LAB_143a19303;
LAB_143a18ef4:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a19303;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a19303;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a19075;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a19075:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a190f5;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a190f5:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbeab0;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbea90;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_1481394ec;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae84);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a18fcb:
      FUN_14080c2b4();
      goto LAB_143a18dbc;
    }
  }
LAB_143a18dba:
  uVar19 = 0;
LAB_143a18dbc:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a193b2 FUN_143a193b2 body=1837 status=ok
// SIG undefined FUN_143a193b2(void)

ulonglong FUN_143a193b2(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined8 unaff_RSI;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  char *local_c8;
  void *local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar19 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(lVar19 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar7 != -1) {
      do {
        plVar15 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x18);
        if (*plVar15 == lVar3) {
          if ((plVar15 != (longlong *)0x0) && (pcVar4 = (char *)plVar15[1], pcVar4 != (char *)0x0))
          {
            uVar17 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a195ee;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar19 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                local_c8 = pcVar4 + 0x10;
                if (local_c8 != (char *)(lVar19 + 0x50)) {
                  iVar7 = *(int *)(lVar19 + 0x58);
                  pvVar5 = *(void **)(lVar19 + 0x50);
                  *(int *)(pcVar4 + 0x18) = iVar7;
                  if (iVar7 == 0 && *(int *)(pcVar4 + 0x1c) == 0) {
                    pcVar4[0x1c] = '\0';
                    pcVar4[0x1d] = '\0';
                    pcVar4[0x1e] = '\0';
                    pcVar4[0x1f] = '\0';
                  }
                  else {
                    local_c0 = pvVar5;
                    FUN_14479fa02(local_c8,iVar7);
                    if (iVar7 != 0) {
                      memcpy(*(void **)local_c8,local_c0,(longlong)iVar7 << 4);
                    }
                  }
                }
              }
              local_c8 = *(char **)(param_2 + 0x28);
              uVar20 = (ulonglong)param_3;
              FUN_14735c9c0(pcVar4 + 0x10,*(undefined4 *)((longlong)local_c8 + uVar20 * 8),1);
              lVar19 = (longlong)*(int *)((longlong)local_c8 + uVar20 * 8);
              if (0 < lVar19) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)((longlong)local_c8 + 4 + uVar20 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar19 << 4);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a195ee;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar15 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar15 == (longlong *)0x0 ||
                (puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x420))(),
                puVar10 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar10)(puVar10,&DAT_14cb3e918);
            }
            lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar7 = *(int *)(lVar19 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar7 != 2) {
                if (iVar7 != 1) goto LAB_143a1950a;
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_143a19a31;
                goto LAB_143a19513;
              }
            }
            else {
LAB_143a1950a:
              if (iVar7 != 0x10) {
LAB_143a19513:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar19 + 0xc60), iVar7 == 2))
                  goto LAB_143a19a31;
                  if (iVar7 == 1) {
                    DVar8 = FUN_140ad26c0();
                    DVar9 = GetCurrentThreadId();
                    if (DVar8 == DVar9) goto LAB_143a19a31;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar10 = (undefined8 *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x308);
                  puVar12 = (uint *)*puVar10;
                  if (puVar12 != (uint *)0x0) goto LAB_143a19795;
                  while( true ) {
                    uVar14 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar14 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar14 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar11 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar11 = 0xffffffff;
                    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                    puVar11[0x12] = 0;
                    *puVar10 = puVar11;
                    FUN_140217a48(puVar10);
                    puVar12 = (uint *)*puVar10;
LAB_143a19795:
                    puVar18 = (undefined8 *)
                              (*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar16 = (uint *)(puVar18 + 0x1a);
                    uVar14 = puVar12[0x12];
                    if (puVar16 <= puVar12 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                      LOCK();
                      uVar2 = *puVar12;
                      *puVar12 = *puVar12 + uVar14 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar14) != 0xffffffff) break;
                      puVar12 = (uint *)*puVar10;
                      *puVar12 = 0xffffffff;
                      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                      puVar12[0x12] = 0;
                      *puVar10 = puVar12;
                      puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                      puVar16 = (uint *)(puVar18 + 0x1a);
                      uVar14 = 0;
                      if (puVar16 <= puVar12 + 0x4000) {
                        uVar14 = 1;
                        goto LAB_143a19815;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
LAB_143a19815:
                  *(uint **)(puVar12 + 0x10) = puVar16;
                  puVar12[0x12] = uVar14;
                  iVar7 = 0;
                  FUN_1447247dc(puVar18,0);
                  *puVar18 = &PTR_FUN_14adbeae0;
                  *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar18 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar18 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar18 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_94;
                  puVar18[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar14 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                      uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                      iVar7 = 0;
                    }
                    else {
                      uVar20 = 2;
                    }
                  }
                  else {
                    iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar20 = 5;
                  }
                  if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                  }
                  puVar18[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar18[9] = puVar18;
                  puVar18[10] = puVar18;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar6 = 1;
                    if ((char)uVar20 != '\x06') {
                      uVar6 = uVar20;
                    }
                    uVar20 = uVar6;
                    uVar13 = 0;
                  }
                  else {
                    if ((char)uVar20 == '\x06') {
                      uVar20 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar13 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar18[0xf] = uVar13;
                  puVar18[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar18 + 0x1c) = iVar7;
                  if (puVar18 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar18);
                    LOCK();
                    piVar1 = (int *)(puVar18 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar18)(puVar18,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbeac0;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_148139692;
                  }
                  local_d8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae88);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar15 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar15 = local_68;
                    }
                    (**(code **)(*plVar15 + 0x10))();
                  }
                }
                goto LAB_143a195ee;
              }
            }
LAB_143a19a31:
            FUN_1481395a2(&local_b0,&DAT_14ca85100);
            goto LAB_143a195ee;
          }
          break;
        }
        iVar7 = (int)plVar15[2];
      } while (iVar7 != -1);
    }
  }
  uVar17 = 0;
LAB_143a195ee:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a19ae0 FUN_143a19ae0 body=450 status=ok
// SIG undefined FUN_143a19ae0(void)

void FUN_143a19ae0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1481371f4(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a19ca4 FUN_143a19ca4 body=31 status=ok
// SIG undefined FUN_143a19ca4(void)

undefined8 FUN_143a19ca4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a19cc4 FUN_143a19cc4 body=31 status=ok
// SIG undefined FUN_143a19cc4(void)

undefined8 FUN_143a19cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a19ce4 FUN_143a19ce4 body=282 status=ok
// SIG undefined FUN_143a19ce4(void)

undefined8 * FUN_143a19ce4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a19dfe FUN_143a19dfe body=282 status=ok
// SIG undefined FUN_143a19dfe(void)

undefined8 * FUN_143a19dfe(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a19f18 FUN_143a19f18 body=114 status=ok
// SIG undefined FUN_143a19f18(void)

void FUN_143a19f18(longlong *param_1,int param_2)

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



// FUNCTION 143a19fae FUN_143a19fae body=282 status=ok
// SIG undefined FUN_143a19fae(void)

undefined8 * FUN_143a19fae(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1a0ce FUN_143a1a0ce body=282 status=ok
// SIG undefined FUN_143a1a0ce(void)

undefined8 * FUN_143a1a0ce(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1a1e8 FUN_143a1a1e8 body=1148 status=ok
// SIG undefined FUN_143a1a1e8(void)

void FUN_143a1a1e8(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_148139e12(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1a666 FUN_143a1a666 body=1685 status=ok
// SIG undefined FUN_143a1a666(void)

ulonglong FUN_143a1a666(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a1a704;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a1a704;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 4;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1a706;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a1a835;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a1ac4d;
          goto LAB_143a1a83e;
        }
LAB_143a1ac4d:
        FUN_14813c99e(&local_c0,&DAT_14ca85100);
        goto LAB_143a1a915;
      }
LAB_143a1a835:
      if (iVar3 == 0x10) goto LAB_143a1ac4d;
LAB_143a1a83e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a1ac4d;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a1ac4d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a1a9bf;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a1a9bf:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a1aa3f;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a1aa3f:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbf110;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbf0f0;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_14813ceae;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae94);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a1a915:
      FUN_14080c2b4();
      goto LAB_143a1a706;
    }
  }
LAB_143a1a704:
  uVar19 = 0;
LAB_143a1a706:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1acfc FUN_143a1acfc body=1736 status=ok
// SIG undefined FUN_143a1acfc(void)

ulonglong FUN_143a1acfc(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar18 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar18 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar14 == lVar3) {
          if ((plVar14 != (longlong *)0x0) && (pcVar4 = (char *)plVar14[1], pcVar4 != (char *)0x0))
          {
            uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a1af36;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar18 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_14785c646(pcVar4 + 0x10,lVar18 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_14813bc2a(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8),1);
              lVar18 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar18) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar18 << 4);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a1af36;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar14 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar14 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar18 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a1ae55;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a1b316;
                goto LAB_143a1ae5e;
              }
            }
            else {
LAB_143a1ae55:
              if (iVar6 != 0x10) {
LAB_143a1ae5e:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar18 + 0xc60), iVar6 == 2))
                  goto LAB_143a1b316;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a1b316;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar11 = (uint *)*puVar9;
                  if (puVar11 != (uint *)0x0) goto LAB_143a1b088;
                  while( true ) {
                    uVar13 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar13 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar13 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar10 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar10 = 0xffffffff;
                    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                    puVar10[0x12] = 0;
                    *puVar9 = puVar10;
                    FUN_140217a48(puVar9);
                    puVar11 = (uint *)*puVar9;
LAB_143a1b088:
                    puVar17 = (undefined8 *)
                              (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar15 = (uint *)(puVar17 + 0x1a);
                    uVar13 = puVar11[0x12];
                    if (puVar15 <= puVar11 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                      LOCK();
                      uVar2 = *puVar11;
                      *puVar11 = *puVar11 + uVar13 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar13) != 0xffffffff) break;
                      puVar11 = (uint *)*puVar9;
                      *puVar11 = 0xffffffff;
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                      puVar11[0x12] = 0;
                      *puVar9 = puVar11;
                      puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                      puVar15 = (uint *)(puVar17 + 0x1a);
                      uVar13 = 0;
                      if (puVar15 <= puVar11 + 0x4000) {
                        uVar13 = 1;
                        goto LAB_143a1b108;
                      }
                    }
                  }
                  uVar13 = uVar13 + 1;
LAB_143a1b108:
                  *(uint **)(puVar11 + 0x10) = puVar15;
                  puVar11[0x12] = uVar13;
                  iVar6 = 0;
                  FUN_1447247dc(puVar17,0);
                  *puVar17 = &PTR_FUN_14adbf140;
                  *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar17 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar17 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar17 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_94;
                  puVar17[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar13 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                  }
                  puVar17[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar17[9] = puVar17;
                  puVar17[10] = puVar17;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar12 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar12 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar17[0xf] = uVar12;
                  puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
                  if (puVar17 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar17);
                    LOCK();
                    piVar1 = (int *)(puVar17 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar17)(puVar17,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbf120;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_14813d054;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3ae98);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar14 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar14 = local_68;
                    }
                    (**(code **)(*plVar14 + 0x10))();
                  }
                }
                goto LAB_143a1af36;
              }
            }
LAB_143a1b316:
            FUN_14813cf64(&local_b0,&DAT_14ca85100);
            goto LAB_143a1af36;
          }
          break;
        }
        iVar6 = (int)plVar14[2];
      } while (iVar6 != -1);
    }
  }
  uVar16 = 0;
LAB_143a1af36:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1b3c6 FUN_143a1b3c6 body=1581 status=ok
// SIG undefined FUN_143a1b3c6(void)

undefined8 FUN_143a1b3c6(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_14813d13e(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1b5f9;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adbf150;
  local_d8 = FUN_14813d60a;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a1b51c;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a1b94d;
      goto LAB_143a1b525;
    }
  }
  else {
LAB_143a1b51c:
    if (iVar7 != 0x10) {
LAB_143a1b525:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a1b94d;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a1b94d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a1b6cd;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a1b6cd:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a1b74d;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a1b74d:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adbf190;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adbf170;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_14813dc6c;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3ae9c);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a1b5f9;
    }
  }
LAB_143a1b94d:
  FUN_14813d674(&local_108,&DAT_14ca85100);
LAB_143a1b5f9:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1b9f4 FUN_143a1b9f4 body=1307 status=ok
// SIG undefined FUN_143a1b9f4(void)

void FUN_143a1b9f4(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1ba62;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a1ba51;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a1ba56;
      goto LAB_143a1bac7;
    }
  }
  else {
LAB_143a1ba51:
    if (iVar6 != 0x10) {
LAB_143a1bac7:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a1ba56;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a1ba56;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a1bbac;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a1bbac:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a1bc2e;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a1bc2e:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adbf1c0;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbf1a0;
        local_88[0] = &LAB_14813de04;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3aea0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a1ba62;
    }
  }
LAB_143a1ba56:
  FUN_14813dd22(param_1 + 0x70,uVar11);
LAB_143a1ba62:
  FUN_14813dec2(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1bf10 FUN_143a1bf10 body=398 status=ok
// SIG undefined FUN_143a1bf10(void)

void FUN_143a1bf10(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  return;
}



// FUNCTION 143a1c09e FUN_143a1c09e body=1925 status=ok
// SIG undefined FUN_143a1c09e(void)

void FUN_143a1c09e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *_Dst;
  longlong *plVar12;
  byte bVar13;
  undefined *puVar14;
  longlong lVar15;
  int iVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar16 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar16 = *(int *)(param_3 + 1);
  }
  if (iVar16 == (int)param_1[5]) goto LAB_143a1c59e;
  FUN_143a1bf10(param_1);
  *(int *)(param_1 + 5) = iVar16;
  *(int *)(param_1 + 4) = iVar16 * 0x10 + 0x10;
  bVar18 = *(int *)((longlong)param_1 + 0x2c) != -1;
  bVar13 = 0xd;
  if (!bVar18) {
    bVar13 = 1;
  }
  puVar14 = &DAT_14c873680;
  if (!bVar18) {
    puVar14 = &DAT_14c873440;
  }
  uVar17 = 0x400;
  if (!bVar18) {
    uVar17 = 0x10;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  iVar16 = iVar16 * 0x10 + 0x10;
  local_a8 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar14 + 0x18),iVar16);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar18 * 8 + 0x4121);
  if (iVar16 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar17);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar17;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar17);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar17;
  }
  lVar15 = local_b0;
  plVar12 = param_1 + 1;
  if (plVar12 == &local_b0) {
LAB_143a1c2bc:
    lVar15 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar15;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar18 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar18) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar18) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    lVar15 = *plVar12;
  }
  else {
    lVar6 = *plVar12;
    *plVar12 = local_b0;
    local_b0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar18 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar18) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar18) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
      goto LAB_143a1c2bc;
    }
  }
  if ((lVar15 == 0) || ((*(byte *)(lVar15 + 0x28) & 0x10) == 0)) {
    local_a8._0_2_ = (ushort)bVar13 << 8;
    local_a8._0_3_ = CONCAT12(1,(short)local_a8);
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar11 = param_1 + 3;
  if (plVar11 == &local_b0) {
LAB_143a1c3f5:
    lVar15 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar15;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar18 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar18) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar18) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
  }
  else {
    lVar15 = *plVar11;
    *plVar11 = local_b0;
    local_b0 = 0;
    if (lVar15 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar15 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar15 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar15 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar15;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar18 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar18) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar18 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar18) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
      goto LAB_143a1c3f5;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar12 == 0) || ((*(byte *)(*plVar12 + 0x28) & 0x10) == 0)) {
      local_a8._0_2_ = CONCAT11(bVar13,1);
      local_a8._0_3_ = CONCAT12(1,(short)local_a8);
    }
    else {
      local_a8._0_3_ = 0x40001;
    }
    local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar12 = param_1 + 2;
    if (plVar12 != &local_b0) {
      lVar15 = *plVar12;
      *plVar12 = local_b0;
      local_b0 = 0;
      if (lVar15 == 0) goto LAB_143a1c59e;
      LOCK();
      puVar2 = (uint *)(lVar15 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar15 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar15 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar18 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar18) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar18 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar18) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
    lVar15 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(local_b0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar18 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar18) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar18);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar18 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar18) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar18);
          }
        }
      }
    }
  }
LAB_143a1c59e:
  lVar6 = param_1[4];
  lVar15 = param_1[1];
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar6);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar15,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 4);
  }
  uVar8 = DAT_14c84634c;
  uVar7 = DAT_14c846348;
  uVar17 = DAT_14c846344;
  puVar1 = (undefined4 *)((longlong)_Dst + (longlong)(int)param_1[5] * 0x10);
  *puVar1 = DAT_14c84633c._4_4_;
  puVar1[1] = uVar17;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar15 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar15 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar15 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar15 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar15 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a1c824 FUN_143a1c824 body=450 status=ok
// SIG undefined FUN_143a1c824(void)

void FUN_143a1c824(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14813a13a(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1c9e8 FUN_143a1c9e8 body=282 status=ok
// SIG undefined FUN_143a1c9e8(void)

undefined8 * FUN_143a1c9e8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1cb02 FUN_143a1cb02 body=282 status=ok
// SIG undefined FUN_143a1cb02(void)

undefined8 * FUN_143a1cb02(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1cc1c FUN_143a1cc1c body=282 status=ok
// SIG undefined FUN_143a1cc1c(void)

undefined8 * FUN_143a1cc1c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1cd36 FUN_143a1cd36 body=282 status=ok
// SIG undefined FUN_143a1cd36(void)

undefined8 * FUN_143a1cd36(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1ce50 FUN_143a1ce50 body=1148 status=ok
// SIG undefined FUN_143a1ce50(void)

void FUN_143a1ce50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_24b;
  undefined2 local_24a;
  undefined8 local_248;
  int local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 auStack_220 [4];
  char local_200 [8];
  char acStack_1f8 [64];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 auStack_1a8 [4];
  undefined8 uStack_198;
  char local_190 [8];
  char acStack_188 [64];
  longlong local_148;
  uint local_140;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  char local_128 [16];
  undefined8 local_118;
  undefined1 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  char local_f8 [24];
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  char local_88 [24];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)))
  {
    lVar12 = param_2[2];
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xb8) - 1U &
                              (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 0x40) == lVar12) {
          if ((((lVar11 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar11 + 0x34) != -1)) &&
             (*(int *)(lVar11 + 0x28) != 0)) {
            lVar2 = param_2[1];
            local_258 = *(undefined8 *)(lVar2 + 0x28);
            local_260 = *(undefined8 *)(lVar2 + 0x58);
            local_70 = *(undefined8 *)(lVar11 + 0x10);
            local_b8[0] = -1;
            local_b8[1] = -1;
            local_b8[2] = -1;
            local_b8[3] = -1;
            local_b8[4] = -1;
            local_b8[5] = -1;
            local_b8[6] = -1;
            local_b8[7] = -1;
            local_b8[8] = -1;
            local_b8[9] = -1;
            local_b8[10] = -1;
            local_b8[0xb] = -1;
            local_a8 = *(undefined8 *)(lVar2 + 0x60);
            uStack_a0 = 3;
            uStack_9c = 0x8000000400;
            bVar13 = false;
            uStack_94 = 0;
            local_88[0] = '\0';
            local_88[8] = -1;
            local_88[9] = -1;
            local_88[10] = -1;
            local_88[0xb] = -1;
            local_88[0xc] = -1;
            local_88[0xd] = -1;
            local_88[0xe] = -1;
            local_88[0xf] = -1;
            local_88[0x10] = -1;
            local_88[0x11] = -1;
            local_88[0x12] = -1;
            local_88[0x13] = -1;
            local_68 = 2;
            local_64 = 0x8000000400;
            local_5c = 0;
            local_50 = 0;
            local_128[0] = -1;
            local_128[1] = -1;
            local_128[2] = -1;
            local_128[3] = -1;
            local_128[4] = -1;
            local_128[5] = -1;
            local_128[6] = -1;
            local_128[7] = -1;
            local_128[8] = -1;
            local_128[9] = -1;
            local_128[10] = -1;
            local_128[0xb] = -1;
            local_118 = *(undefined8 *)(lVar2 + 0x60);
            uStack_110 = 3;
            uStack_10c = 0x40000000080;
            uStack_104 = 0;
            local_f8[0] = '\0';
            local_f8[8] = -1;
            local_f8[9] = -1;
            local_f8[10] = -1;
            local_f8[0xb] = -1;
            local_f8[0xc] = -1;
            local_f8[0xd] = -1;
            local_f8[0xe] = -1;
            local_f8[0xf] = -1;
            local_f8[0x10] = -1;
            local_f8[0x11] = -1;
            local_f8[0x12] = -1;
            local_f8[0x13] = -1;
            local_e0 = local_70;
            local_d8 = 2;
            local_d4 = 0x40000000080;
            local_cc = 0;
            local_c0 = 0;
            local_248 = local_260;
            local_240 = *(int *)(lVar11 + 0x34) << 2;
            local_23c = 4;
            local_238 = local_70;
            local_230 = 0;
            local_22c = *(int *)(lVar11 + 0x28);
            lVar11 = 0;
            pcVar10 = local_b8;
            do {
              *(undefined4 *)(auStack_220 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              auStack_220[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar7 = *(undefined8 *)(pcVar10 + 0x18);
              auStack_220[lVar11 * 7 + 1] = *(undefined8 *)(pcVar10 + 0x10);
              auStack_220[lVar11 * 7 + 2] = uVar7;
              auStack_220[lVar11 * 7 + 3] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_1f8[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_1f8 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_88 + 8;
            } while (bVar6);
            bVar13 = false;
            lVar11 = 0;
            pcVar10 = local_128;
            do {
              *(undefined4 *)(&uStack_1b0 + lVar11 * 7) = *(undefined4 *)(pcVar10 + 8);
              (&uStack_1b0)[lVar11 * 7 + -1] = *(undefined8 *)pcVar10;
              uVar3 = *(undefined4 *)(pcVar10 + 0x14);
              uVar4 = *(undefined4 *)(pcVar10 + 0x18);
              uVar5 = *(undefined4 *)(pcVar10 + 0x1c);
              auStack_1a8[lVar11 * 0xe] = *(undefined4 *)(pcVar10 + 0x10);
              auStack_1a8[lVar11 * 0xe + 1] = uVar3;
              auStack_1a8[lVar11 * 0xe + 2] = uVar4;
              auStack_1a8[lVar11 * 0xe + 3] = uVar5;
              (&uStack_198)[lVar11 * 7] = *(undefined8 *)(pcVar10 + 0x20);
              cVar1 = pcVar10[0x30];
              acStack_188[lVar11 * 0x38] = cVar1;
              if (cVar1 == '\x01') {
                *(undefined8 *)(acStack_188 + lVar11 * 0x38 + -8) = *(undefined8 *)(pcVar10 + 0x28);
              }
              lVar11 = 1;
              bVar6 = !bVar13;
              bVar13 = true;
              pcVar10 = local_f8 + 8;
            } while (bVar6);
            local_13c = 0;
            local_148 = lVar12;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              local_140 = 0;
              iVar9 = 0;
            }
            else {
              local_140 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
              if ((int)local_140 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar9 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar9 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar9;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar9 = *(int *)(lVar12 + 0x10);
                bVar13 = iVar9 == 0;
                if (bVar13) {
                  *(int *)(lVar12 + 0x10) = iVar8;
                  iVar9 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar9 = iVar8;
                }
              }
            }
            local_130 = local_258;
            lVar12 = *param_2;
            local_24a = 0x10;
            local_13c = iVar9;
            local_138 = param_1;
            FUN_140069376(lVar12);
            local_268 = &local_248;
            uVar7 = FUN_14813e4b0(lVar12 + 0x168,lVar12 + 0x70,&local_24b,&local_24a);
            FUN_143204634(lVar12,uVar7);
            lVar12 = 0xf8;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x88);
            lVar12 = 0x88;
            do {
              *(undefined1 *)((longlong)&local_248 + lVar12) = 0;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0x18);
            lVar12 = 0x68;
            do {
              if (local_128[lVar12] == '\x01') {
                local_128[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
            lVar12 = 0x68;
            do {
              if (local_b8[lVar12] == '\x01') {
                local_b8[lVar12] = '\0';
              }
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != -8);
          }
          break;
        }
        iVar9 = *(int *)(lVar11 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1d2ce FUN_143a1d2ce body=1685 status=ok
// SIG undefined FUN_143a1d2ce(void)

ulonglong FUN_143a1d2ce(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  PSRWLOCK local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98;
  int local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_4 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      while (plVar17 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18),
            *plVar17 != lVar4) {
        iVar8 = (int)plVar17[2];
        if (iVar8 == -1) goto LAB_143a1d36c;
      }
      if ((plVar17 == (longlong *)0x0) || (pcVar5 = (char *)plVar17[1], pcVar5 == (char *)0x0))
      goto LAB_143a1d36c;
      lVar16 = *(longlong *)(param_1 + 0x10);
      local_c8 = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(local_c8);
      pcVar21 = (char *)(lVar16 + 0x50);
      if (*pcVar5 != '\0') {
        pcVar21 = pcVar5 + 0x10;
      }
      iVar8 = (int)param_3;
      if (*(int *)(param_2 + 0x30) <= iVar8) {
        FUN_1481287aa(param_2 + 0x28,(iVar8 - *(int *)(param_2 + 0x30)) + 1);
      }
      lVar16 = *(longlong *)(param_2 + 0x28);
      local_90 = *(int *)(pcVar21 + 8);
      *(int *)(lVar16 + (longlong)iVar8 * 8) = local_90;
      local_90 = local_90 << 6;
      local_98 = *(undefined8 *)pcVar21;
      uVar7 = FUN_148119ae4(param_2);
      *(undefined4 *)(lVar16 + 4 + (longlong)iVar8 * 8) = uVar7;
      ReleaseSRWLockShared(local_c8);
      uVar19 = CONCAT71((int7)(int3)((ulonglong)param_3 >> 8),1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1d36e;
      if (((*(longlong *)(param_4 + 0x30) == 0) ||
          (plVar17 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
          plVar17 == (longlong *)0x0)) ||
         (puVar11 = (undefined8 *)(**(code **)(*plVar17 + 0x420))(), puVar11 == (undefined8 *)0x0))
      {
        local_a0 = 0;
      }
      else {
        local_a0 = (**(code **)*puVar11)(puVar11,&DAT_14cb3e918);
      }
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar3 = *(int *)(lVar16 + 0xc60);
      local_c0 = param_1;
      uStack_b8 = lVar4;
      local_b0 = param_2;
      iStack_a8 = iVar8;
      if (DAT_14c86a9fc == 0) {
        if (iVar3 != 2) {
          if (iVar3 != 1) goto LAB_143a1d49d;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a1d8b5;
          goto LAB_143a1d4a6;
        }
LAB_143a1d8b5:
        FUN_148141c28(&local_c0,&DAT_14ca85100);
        goto LAB_143a1d57d;
      }
LAB_143a1d49d:
      if (iVar3 == 0x10) goto LAB_143a1d8b5;
LAB_143a1d4a6:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar16 + 0xc60), iVar8 == 2))
        goto LAB_143a1d8b5;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143a1d8b5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_143a1d627;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_143a1d627:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1a);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x1a);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143a1d6a7;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143a1d6a7:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14adbf770;
        *(undefined4 *)(puVar20 + 0x15) = (undefined4)local_c0;
        *(undefined4 *)((longlong)puVar20 + 0xac) = local_c0._4_4_;
        *(undefined4 *)(puVar20 + 0x16) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = uStack_b8._4_4_;
        *(undefined4 *)(puVar20 + 0x17) = (undefined4)local_b0;
        *(undefined4 *)((longlong)puVar20 + 0xbc) = local_b0._4_4_;
        *(int *)(puVar20 + 0x18) = iStack_a8;
        *(undefined4 *)((longlong)puVar20 + 0xc4) = uStack_a4;
        puVar20[0x19] = local_a0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
        }
        puVar20[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar20[9] = puVar20;
        puVar20[10] = puVar20;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar22 != '\x06') {
            uVar6 = uVar22;
          }
          uVar22 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar8;
        if (puVar20 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar20);
          LOCK();
          piVar1 = (int *)(puVar20 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      else {
        local_88[0] = (undefined1 *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_LAB_14adbf750;
        local_78[5] = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b0;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b0._4_4_;
        *(int *)(local_78 + 4) = iStack_a8;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a4;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_c0;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_c0._4_4_;
        *(undefined4 *)(local_78 + 2) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)local_78 + 0x14) = uStack_b8._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = &LAB_148142138;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aea4);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar17 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar17 = local_68;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
      }
LAB_143a1d57d:
      FUN_14080c2b4();
      goto LAB_143a1d36e;
    }
  }
LAB_143a1d36c:
  uVar19 = 0;
LAB_143a1d36e:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1d964 FUN_143a1d964 body=1727 status=ok
// SIG undefined FUN_143a1d964(void)

ulonglong FUN_143a1d964(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  longlong local_c0;
  PSRWLOCK local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_4 + 0x100);
    lVar18 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x60);
    }
    iVar6 = *(int *)(lVar18 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        if (*plVar14 == lVar3) {
          if ((plVar14 != (longlong *)0x0) && (pcVar4 = (char *)plVar14[1], pcVar4 != (char *)0x0))
          {
            uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if ((int)param_3 < 0) goto LAB_143a1dc17;
            if ((int)param_3 < *(int *)(param_2 + 0x30)) {
              lVar18 = *(longlong *)(param_1 + 0x10);
              local_b8 = (PSRWLOCK)(pcVar4 + 8);
              AcquireSRWLockExclusive(local_b8);
              if (*pcVar4 == '\0') {
                *pcVar4 = '\x01';
                FUN_140491812(pcVar4 + 0x10,lVar18 + 0x50);
              }
              local_c0 = *(longlong *)(param_2 + 0x28);
              uVar19 = (ulonglong)param_3;
              FUN_140491ce0(pcVar4 + 0x10,*(undefined4 *)(local_c0 + uVar19 * 8),1);
              lVar18 = (longlong)*(int *)(local_c0 + uVar19 * 8);
              if (0 < lVar18) {
                memcpy(*(void **)(pcVar4 + 0x10),
                       (void *)((longlong)*(int *)(local_c0 + 4 + uVar19 * 8) +
                               *(longlong *)(param_2 + 0x48)),lVar18 << 6);
              }
              ReleaseSRWLockExclusive(local_b8);
            }
            if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) ||
               (*(int *)(param_2 + 0x40) <= (int)param_3)) goto LAB_143a1dc17;
            if ((*(longlong *)(param_4 + 0x30) == 0) ||
               ((plVar14 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218),
                plVar14 == (longlong *)0x0 ||
                (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0x420))(),
                puVar9 == (undefined8 *)0x0)))) {
              local_90 = 0;
            }
            else {
              local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            iVar6 = *(int *)(lVar18 + 0xc60);
            local_b0 = param_1;
            uStack_a8 = lVar3;
            local_a0 = param_2;
            uStack_98 = param_3;
            if (DAT_14c86a9fc == 0) {
              if (iVar6 != 2) {
                if (iVar6 != 1) goto LAB_143a1db36;
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                if (DVar7 == DVar8) goto LAB_143a1df75;
                goto LAB_143a1db3f;
              }
            }
            else {
LAB_143a1db36:
              if (iVar6 != 0x10) {
LAB_143a1db3f:
                if (DAT_14ca9a438 == '\0') {
                  if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar18 + 0xc60), iVar6 == 2))
                  goto LAB_143a1df75;
                  if (iVar6 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    if (DVar7 == DVar8) goto LAB_143a1df75;
                  }
                }
                if (DAT_14ca9a43c == 0) {
                  puVar9 = (undefined8 *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x308);
                  puVar11 = (uint *)*puVar9;
                  if (puVar11 != (uint *)0x0) goto LAB_143a1dce7;
                  while( true ) {
                    uVar13 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar13 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar13 | 1;
                      __tlregdtor(&LAB_143a091f0);
                    }
                    lVar3 = *(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar10 = *(undefined4 **)(lVar3 + 0x310);
                    *(undefined8 *)(lVar3 + 0x310) = 0;
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar10 = 0xffffffff;
                    *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
                    puVar10[0x12] = 0;
                    *puVar9 = puVar10;
                    FUN_140217a48(puVar9);
                    puVar11 = (uint *)*puVar9;
LAB_143a1dce7:
                    puVar17 = (undefined8 *)
                              (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar15 = (uint *)(puVar17 + 0x1a);
                    uVar13 = puVar11[0x12];
                    if (puVar15 <= puVar11 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                      LOCK();
                      uVar2 = *puVar11;
                      *puVar11 = *puVar11 + uVar13 + 1;
                      UNLOCK();
                      if ((uVar2 ^ uVar13) != 0xffffffff) break;
                      puVar11 = (uint *)*puVar9;
                      *puVar11 = 0xffffffff;
                      *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                      puVar11[0x12] = 0;
                      *puVar9 = puVar11;
                      puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                      puVar15 = (uint *)(puVar17 + 0x1a);
                      uVar13 = 0;
                      if (puVar15 <= puVar11 + 0x4000) {
                        uVar13 = 1;
                        goto LAB_143a1dd67;
                      }
                    }
                  }
                  uVar13 = uVar13 + 1;
LAB_143a1dd67:
                  *(uint **)(puVar11 + 0x10) = puVar15;
                  puVar11[0x12] = uVar13;
                  iVar6 = 0;
                  FUN_1447247dc(puVar17,0);
                  *puVar17 = &PTR_FUN_14adbf7a0;
                  *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)puVar17 + 0xac) = local_b0._4_4_;
                  *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_a8._4_4_;
                  *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)puVar17 + 0xbc) = local_a0._4_4_;
                  *(uint *)(puVar17 + 0x18) = uStack_98;
                  *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_94;
                  puVar17[0x19] = local_90;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar13 = DAT_14c7585c8 >> 10 & 3;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                      uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                      iVar6 = 0;
                    }
                    else {
                      uVar19 = 2;
                    }
                  }
                  else {
                    iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar19 = 5;
                  }
                  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                  }
                  puVar17[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar17[9] = puVar17;
                  puVar17[10] = puVar17;
                  lVar3 = *(longlong *)
                           (*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x2b8);
                  if (lVar3 == 0) {
                    uVar5 = 1;
                    if ((char)uVar19 != '\x06') {
                      uVar5 = uVar19;
                    }
                    uVar19 = uVar5;
                    uVar12 = 0;
                  }
                  else {
                    if ((char)uVar19 == '\x06') {
                      uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
                    }
                    uVar12 = *(undefined8 *)(lVar3 + 0x30);
                  }
                  puVar17[0xf] = uVar12;
                  puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
                  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
                  if (puVar17 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar17);
                    LOCK();
                    piVar1 = (int *)(puVar17 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar17)(puVar17,1);
                    }
                  }
                }
                else {
                  local_88[0] = (undefined1 *)0x0;
                  local_78 = (longlong *)FUN_14001cc68(0x30,8);
                  *local_78 = (longlong)&PTR_LAB_14adbf780;
                  local_78[5] = local_90;
                  *(undefined4 *)(local_78 + 3) = (undefined4)local_a0;
                  *(undefined4 *)((longlong)local_78 + 0x1c) = local_a0._4_4_;
                  *(uint *)(local_78 + 4) = uStack_98;
                  *(undefined4 *)((longlong)local_78 + 0x24) = uStack_94;
                  *(undefined4 *)(local_78 + 1) = (undefined4)local_b0;
                  *(undefined4 *)((longlong)local_78 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(local_78 + 2) = (undefined4)uStack_a8;
                  *(undefined4 *)((longlong)local_78 + 0x14) = uStack_a8._4_4_;
                  if (local_78 + 1 != (longlong *)0x0) {
                    local_88[0] = &LAB_1481422de;
                  }
                  local_c8 = local_88;
                  FUN_14005a792(&DAT_14ca9a440,L"NDIArray_SimCacheWrite",&DAT_14cb3aea8);
                  if (local_88[0] != (undefined1 *)0x0) {
                    plVar14 = local_78;
                    if (local_78 == (longlong *)0x0) {
                      plVar14 = local_68;
                    }
                    (**(code **)(*plVar14 + 0x10))();
                  }
                }
                goto LAB_143a1dc17;
              }
            }
LAB_143a1df75:
            FUN_1481421ee(&local_b0,&DAT_14ca85100);
            goto LAB_143a1dc17;
          }
          break;
        }
        iVar6 = (int)plVar14[2];
      } while (iVar6 != -1);
    }
  }
  uVar16 = 0;
LAB_143a1dc17:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1e024 FUN_143a1e024 body=1581 status=ok
// SIG undefined FUN_143a1e024(void)

undefined8 FUN_143a1e024(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined1 local_dc [4];
  code *local_d8;
  undefined8 local_c8;
  undefined **local_b8;
  undefined1 *local_b0;
  undefined8 *local_98;
  undefined8 **local_90;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x18) = (*(byte *)(lVar4 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(lVar4 + 0x48) & 0xfe) == 2) {
    bVar6 = *(byte *)(lVar4 + 0x30) >> 1 & 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(param_1 + 0x19) = bVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  InitializeSRWLock((PSRWLOCK)(param_3 + 1));
  param_3[2] = 0;
  param_3[3] = 0;
  local_90 = &local_e8;
  *(undefined1 *)((longlong)param_3 + 1) = 1;
  local_108 = *(longlong *)(param_4 + 0x100);
  local_98 = &local_108;
  local_e8 = param_3;
  FUN_148142450(param_1 + 0x20,local_dc,&local_98);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1e257;
  local_dc[0] = 0;
  local_c8 = 0;
  local_b8 = &PTR_LAB_14adbf7c0;
  local_d8 = FUN_14814291c;
  local_b0 = local_dc;
  FUN_140bb9115(param_2,param_4);
  uStack_100 = *(undefined8 *)(param_4 + 0x100);
  local_f8 = *(undefined8 *)(param_4 + 0x870);
  uStack_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4c);
  uStack_ec = CONCAT31(uStack_ec._1_3_,local_dc[0]);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  local_108 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143a1e17a;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143a1e5ab;
      goto LAB_143a1e183;
    }
  }
  else {
LAB_143a1e17a:
    if (iVar7 != 0x10) {
LAB_143a1e183:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143a1e5ab;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143a1e5ab;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143a1e32b;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_143a1e32b:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x19);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x19);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143a1e3ab;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143a1e3ab:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14adbf800;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_108;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_108._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_100._4_4_;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_f8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_f8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = uStack_f0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_ec;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_98 = (undefined8 *)0x0;
        local_88 = (longlong *)FUN_14001cc68(0x28,8);
        *local_88 = (longlong)&PTR_LAB_14adbf7e0;
        *(undefined4 *)(local_88 + 3) = (undefined4)local_f8;
        *(undefined4 *)((longlong)local_88 + 0x1c) = local_f8._4_4_;
        *(undefined4 *)(local_88 + 4) = uStack_f0;
        *(undefined4 *)((longlong)local_88 + 0x24) = uStack_ec;
        *(undefined4 *)(local_88 + 1) = (undefined4)local_108;
        *(undefined4 *)((longlong)local_88 + 0xc) = local_108._4_4_;
        *(undefined4 *)(local_88 + 2) = (undefined4)uStack_100;
        *(undefined4 *)((longlong)local_88 + 0x14) = uStack_100._4_4_;
        if (local_88 + 1 != (longlong *)0x0) {
          local_98 = (undefined8 *)&LAB_148142f7e;
        }
        local_118 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_AddProxy",&DAT_14cb3aeac);
        if (local_98 != (undefined8 *)0x0) {
          plVar14 = local_88;
          if (local_88 == (longlong *)0x0) {
            plVar14 = local_78;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_143a1e257;
    }
  }
LAB_143a1e5ab:
  FUN_148142986(&local_108,&DAT_14ca85100);
LAB_143a1e257:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1e652 FUN_143a1e652 body=1307 status=ok
// SIG undefined FUN_143a1e652(void)

void FUN_143a1e652(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_143a1e6c0;
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a1e6af;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a1e6b4;
      goto LAB_143a1e725;
    }
  }
  else {
LAB_143a1e6af:
    if (iVar6 != 0x10) {
LAB_143a1e725:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a1e6b4;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a1e6b4;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a1e80a;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a091f0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143a1e80a:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143a1e88c;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a1e88c:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14adbf830;
        puVar15[0x15] = param_1;
        puVar15[0x16] = uVar11;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbf810;
        local_88[0] = &LAB_148143116;
        local_60 = param_1;
        local_58 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3aeb0);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar13 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar13 = &local_68;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a1e6c0;
    }
  }
LAB_143a1e6b4:
  FUN_148143034(param_1 + 0x70,uVar11);
LAB_143a1e6c0:
  FUN_1481431d4(param_1 + 0x20,*(undefined8 *)(param_3 + 0x100));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1eb6e FUN_143a1eb6e body=398 status=ok
// SIG undefined FUN_143a1eb6e(void)

void FUN_143a1eb6e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
  return;
}



// FUNCTION 143a1ecfc FUN_143a1ecfc body=1964 status=ok
// SIG undefined FUN_143a1ecfc(void)

void FUN_143a1ecfc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  void *_Dst;
  longlong lVar24;
  longlong *plVar25;
  byte bVar26;
  undefined *puVar27;
  int iVar28;
  undefined4 uVar29;
  bool bVar30;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar28 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar28 = *(int *)(param_3 + 1);
  }
  if (iVar28 == (int)param_1[5]) goto LAB_143a1f1fc;
  FUN_143a1eb6e(param_1);
  *(int *)(param_1 + 5) = iVar28;
  *(int *)(param_1 + 4) = iVar28 * 0x40 + 0x40;
  bVar30 = *(int *)((longlong)param_1 + 0x2c) != -1;
  bVar26 = 0xd;
  if (!bVar30) {
    bVar26 = 1;
  }
  puVar27 = &DAT_14c873680;
  if (!bVar30) {
    puVar27 = &DAT_14c873440;
  }
  uVar29 = 0x400;
  if (!bVar30) {
    uVar29 = 0x10;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  iVar28 = iVar28 * 0x40 + 0x40;
  local_a8 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar27 + 0x18),iVar28);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar30 * 8 + 0x4121);
  if (iVar28 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar29);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar29;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar29);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar29;
  }
  lVar24 = local_b0;
  plVar25 = param_1 + 1;
  if (plVar25 == &local_b0) {
LAB_143a1ef1a:
    lVar24 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar21 = (longlong *)FUN_14001cc68(0x10,8);
          plVar21[1] = lVar24;
          plVar23 = DAT_14ca843c0;
          plVar22 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar21 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c0;
              plVar22 = plVar21;
              if (bVar30) {
                plVar23 = DAT_14ca843c0;
                plVar22 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar22;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar21 = (longlong)plVar22;
              LOCK();
              bVar30 = plVar22 != DAT_14ca843c8;
              plVar23 = plVar21;
              if (bVar30) {
                plVar22 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
    lVar24 = *plVar25;
  }
  else {
    lVar6 = *plVar25;
    *plVar25 = local_b0;
    local_b0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar21 = (longlong *)FUN_14001cc68(0x10,8);
          plVar21[1] = lVar6;
          plVar23 = DAT_14ca843c0;
          plVar22 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar21 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c0;
              plVar22 = plVar21;
              if (bVar30) {
                plVar23 = DAT_14ca843c0;
                plVar22 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar22;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar21 = (longlong)plVar22;
              LOCK();
              bVar30 = plVar22 != DAT_14ca843c8;
              plVar23 = plVar21;
              if (bVar30) {
                plVar22 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
      goto LAB_143a1ef1a;
    }
  }
  if ((lVar24 == 0) || ((*(byte *)(lVar24 + 0x28) & 0x10) == 0)) {
    local_a8._0_2_ = (ushort)bVar26 << 8;
    local_a8._0_3_ = CONCAT12(1,(short)local_a8);
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar23 = param_1 + 3;
  if (plVar23 == &local_b0) {
LAB_143a1f053:
    lVar24 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar21 = (longlong *)FUN_14001cc68(0x10,8);
          plVar21[1] = lVar24;
          plVar23 = DAT_14ca843c0;
          plVar22 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar21 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c0;
              plVar22 = plVar21;
              if (bVar30) {
                plVar23 = DAT_14ca843c0;
                plVar22 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar22;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar21 = (longlong)plVar22;
              LOCK();
              bVar30 = plVar22 != DAT_14ca843c8;
              plVar23 = plVar21;
              if (bVar30) {
                plVar22 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
  else {
    lVar24 = *plVar23;
    *plVar23 = local_b0;
    local_b0 = 0;
    if (lVar24 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar24 + 0xd);
          plVar21 = (longlong *)FUN_14001cc68(0x10,8);
          plVar21[1] = lVar24;
          plVar23 = DAT_14ca843c0;
          plVar22 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar21 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c0;
              plVar22 = plVar21;
              if (bVar30) {
                plVar23 = DAT_14ca843c0;
                plVar22 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar22;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar21 = (longlong)plVar22;
              LOCK();
              bVar30 = plVar22 != DAT_14ca843c8;
              plVar23 = plVar21;
              if (bVar30) {
                plVar22 = DAT_14ca843c8;
                plVar23 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
      goto LAB_143a1f053;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar25 == 0) || ((*(byte *)(*plVar25 + 0x28) & 0x10) == 0)) {
      local_a8._0_2_ = CONCAT11(bVar26,1);
      local_a8._0_3_ = CONCAT12(1,(short)local_a8);
    }
    else {
      local_a8._0_3_ = 0x40001;
    }
    local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar25 = param_1 + 2;
    if (plVar25 != &local_b0) {
      lVar24 = *plVar25;
      *plVar25 = local_b0;
      local_b0 = 0;
      if (lVar24 == 0) goto LAB_143a1f1fc;
      LOCK();
      puVar1 = (uint *)(lVar24 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar24 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar26 = *(byte *)(lVar24 + 0xd);
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = lVar24;
          plVar25 = DAT_14ca843c0;
          plVar23 = DAT_14ca843c8;
          if ((bVar26 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar25;
              LOCK();
              bVar30 = plVar25 != DAT_14ca843c0;
              plVar23 = plVar22;
              if (bVar30) {
                plVar25 = DAT_14ca843c0;
                plVar23 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar22 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c8;
              plVar25 = plVar22;
              if (bVar30) {
                plVar23 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
    lVar24 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar26 = *(byte *)(local_b0 + 0xd);
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = lVar24;
          plVar25 = DAT_14ca843c0;
          plVar23 = DAT_14ca843c8;
          if ((bVar26 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar25;
              LOCK();
              bVar30 = plVar25 != DAT_14ca843c0;
              plVar23 = plVar22;
              if (bVar30) {
                plVar25 = DAT_14ca843c0;
                plVar23 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar23;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar22 = (longlong)plVar23;
              LOCK();
              bVar30 = plVar23 != DAT_14ca843c8;
              plVar25 = plVar22;
              if (bVar30) {
                plVar23 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
LAB_143a1f1fc:
  lVar6 = param_1[4];
  lVar24 = param_1[1];
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar6);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar24,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 6);
  }
  uVar20 = DAT_14c84628c;
  uVar19 = DAT_14c846288;
  uVar18 = DAT_14c846284;
  uVar17 = DAT_14c84627c;
  uVar16 = DAT_14c846278;
  uVar15 = DAT_14c846274;
  uVar14 = DAT_14c846270;
  uVar13 = DAT_14c84626c;
  uVar12 = DAT_14c846268;
  uVar11 = DAT_14c846264;
  uVar10 = DAT_14c846260;
  uVar9 = DAT_14c846258._4_4_;
  uVar8 = (undefined4)DAT_14c846258;
  uVar7 = DAT_14c846254;
  uVar29 = DAT_14c846250;
  lVar24 = (longlong)(int)param_1[5] * 0x40;
  puVar2 = (undefined4 *)((longlong)_Dst + lVar24 + 0x30);
  *puVar2 = DAT_14c846280;
  puVar2[1] = uVar18;
  puVar2[2] = uVar19;
  puVar2[3] = uVar20;
  puVar2 = (undefined4 *)((longlong)_Dst + lVar24 + 0x20);
  *puVar2 = uVar14;
  puVar2[1] = uVar15;
  puVar2[2] = uVar16;
  puVar2[3] = uVar17;
  puVar2 = (undefined4 *)((longlong)_Dst + lVar24 + 0x10);
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  puVar2 = (undefined4 *)((longlong)_Dst + lVar24);
  *puVar2 = uVar29;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  lVar24 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar24);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar24);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar24 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar24 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar24 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar24 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar24 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar24 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a1f4aa FUN_143a1f4aa body=450 status=ok
// SIG undefined FUN_143a1f4aa(void)

void FUN_143a1f4aa(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14813e7d8(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a1f66e FUN_143a1f66e body=282 status=ok
// SIG undefined FUN_143a1f66e(void)

undefined8 * FUN_143a1f66e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1f788 FUN_143a1f788 body=282 status=ok
// SIG undefined FUN_143a1f788(void)

undefined8 * FUN_143a1f788(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143a1f8a2 FUN_143a1f8a2 body=282 status=ok
// SIG undefined FUN_143a1f8a2(void)

undefined8 * FUN_143a1f8a2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143a091f0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}


