// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1462464fe FUN_1462464fe body=763 status=ok
// SIG undefined FUN_1462464fe(void)

undefined8 FUN_1462464fe(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar6 = FUN_140261af2();
    lVar5 = FUN_14477b664(uVar6);
    param_1[1] = lVar5;
  }
  local_40 = (undefined2 *)*param_1;
  if (param_1[2] == 0) {
    if (lVar5 == 0 || local_40 == (undefined2 *)0x0) {
LAB_1462466d0:
      FUN_140056680(param_2,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
      param_1[2] = 0;
      goto LAB_1462466d0;
    }
    uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar6,param_1);
    param_1[2] = lVar5;
    if (lVar5 == 0) goto LAB_1462466d0;
    local_40 = (undefined2 *)*param_1;
  }
  FUN_1400021e4(&local_40,param_2);
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar6 = FUN_140261af2();
    lVar5 = FUN_14477b664(uVar6);
    param_1[1] = lVar5;
  }
  lVar7 = param_1[2];
  if (lVar7 == 0) {
    puVar8 = (undefined2 *)0x0;
    bVar2 = true;
    if ((lVar5 == 0) || (*param_1 == 0)) goto LAB_14624658a;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
      param_1[2] = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar7 = FUN_144aff482(uVar6,param_1);
      param_1[2] = lVar7;
      if (lVar7 != 0) goto LAB_146246562;
    }
  }
  else {
LAB_146246562:
    FUN_14168c06a(lVar7);
    if ((*(longlong *)(lVar7 + 0x48) != 0) &&
       (lVar5 = FUN_144a87586(*(longlong *)(lVar7 + 0x48),param_1[4]), lVar5 != 0)) {
      FUN_140002850(lVar5,&local_40);
      bVar2 = local_38 < 2;
      puVar8 = local_40;
      goto LAB_14624658a;
    }
  }
  bVar2 = true;
  puVar8 = (undefined2 *)0x0;
LAB_14624658a:
  FUN_1400021e4(param_1 + 3,&local_50);
  puVar9 = local_50;
  if (local_48 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,L".R[%s]",puVar9);
  iVar3 = local_38 + -1;
  if (local_38 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(param_2,local_40,iVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar9 = puVar8;
  if ((bVar2) && (FUN_1400021e4(param_1 + 4,&local_50,puVar8), puVar9 = local_50, local_48 == 0)) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,L".C[%s]",puVar9);
  iVar3 = local_38 + -1;
  if (local_38 == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(param_2,local_40,iVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((bVar2) && (local_50 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  if (puVar8 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1462467fc FUN_1462467fc body=56 status=ok
// SIG undefined FUN_1462467fc(void)

undefined8 * FUN_1462467fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14168c0da(uVar1,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146246834 FUN_146246834 body=385 status=ok
// SIG undefined FUN_146246834(void)

void FUN_146246834(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong *)param_1[0x7d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x7d] + 0x6c0))();
  }
  local_48 = 0;
  uStack_40 = 0;
  uVar8 = FUN_1447210f0(param_1);
  FUN_1462469b6(uVar8,&local_58);
  if (-1 < (int)local_50) {
    do {
      if ((int)local_58[1] <= (int)local_50) break;
      uVar8 = FUN_14479d2ce((ulonglong)local_50 * 8 + *local_58);
      uVar4 = uStack_40;
      lVar11 = (longlong)(int)uStack_40;
      uVar7 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar7);
      if (uStack_40._4_4_ < uVar7) {
        FUN_14095e928(&local_48,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar11 * 8) = uVar8;
      uVar7 = local_50 + 1;
      bVar3 = -2 < (int)local_50;
      local_50 = uVar7;
    } while (bVar3);
    lVar11 = local_48;
    lVar12 = (longlong)(int)uStack_40;
    if (lVar12 != 0) {
      lVar10 = 0;
      do {
        plVar2 = *(longlong **)(lVar11 + lVar10);
        local_58 = plVar2;
        if (plVar2[0x73] != 0) {
          if (plVar2 != (longlong *)0x0) {
            lVar9 = FUN_144a75eb4();
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30)) {
              bVar5 = FUN_1414077a0(param_1,plVar2);
              piVar1 = (int *)((ulonglong)(bVar5 ^ 1) * 0x10 + 0x43c + (longlong)param_1);
              *piVar1 = *piVar1 + 1;
              cVar6 = FUN_140496a74(plVar2);
              if (cVar6 == '\0') goto LAB_146246976;
            }
          }
          (**(code **)(*param_1 + 0x730))(param_1,&local_58);
        }
LAB_146246976:
        lVar10 = lVar10 + 8;
      } while (lVar12 * 8 != lVar10);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462469b6 FUN_1462469b6 body=21 status=ok
// SIG undefined FUN_1462469b6(void)

longlong * FUN_1462469b6(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 0x220;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1462469cc FUN_1462469cc body=390 status=ok
// SIG undefined FUN_1462469cc(void)

void FUN_1462469cc(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0;
  lStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_40;
  uStack_54 = local_40._4_4_;
  uStack_50 = (undefined4)uStack_38;
  uStack_4c = uStack_38._4_4_;
  local_48 = lStack_30;
  if ((lStack_30 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  puVar2 = &local_21;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_146246b54(local_20,puVar2,&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146246b54 FUN_146246b54 body=274 status=ok
// SIG undefined FUN_146246b54(void)

void FUN_146246b54(longlong param_1,undefined1 *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      FUN_14119d0a4(lVar1);
      uVar2 = FUN_14001cc68(0x30,0x10);
      local_48 = *param_3;
      iStack_44 = param_3[1];
      iStack_40 = param_3[2];
      iStack_3c = param_3[3];
      local_38 = *(longlong *)(param_3 + 4);
      if ((local_38 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_146246c9e(uVar2,param_1,&local_48,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((*param_3 != -1) && (*(longlong *)(param_3 + 4) != 0)) {
    lVar1 = FUN_1400796d0(*(undefined8 *)(*(longlong *)(param_3 + 4) + 0x10),
                          *(undefined8 *)(param_3 + 2),1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146246c9e FUN_146246c9e body=96 status=ok
// SIG undefined FUN_146246c9e(void)

undefined8 *
FUN_146246c9e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b95e850;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  lVar1 = *(longlong *)(param_3 + 4);
  param_1[4] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[5] = param_4;
  return param_1;
}



// FUNCTION 146246cfe FUN_146246cfe body=536 status=ok
// SIG undefined FUN_146246cfe(void)

undefined4 FUN_146246cfe(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong *local_78 [2];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  cVar4 = FUN_140f7cb10(local_48,puVar6,0,0);
  if (cVar4 == '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_68,L"Failed to open descriptor file %s",puVar6);
    FUN_140233b1a(&local_58,&local_68);
    FUN_140008f88(param_3,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar5 = 0;
  }
  else {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    FUN_14047afda(&local_68,local_48);
    cVar4 = FUN_14047b282(local_68,&local_58,0);
    if ((cVar4 == '\0') || (local_58 == (longlong *)0x0)) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      FUN_140002266(local_88,L"Failed to read file %s",puVar6);
      FUN_140233b1a(local_78,local_88);
      FUN_140008f88(param_3,local_78);
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = 0;
    }
    else {
      FUN_140bee914(local_78,param_2);
      uVar5 = FUN_146246f18(param_1,local_58,local_78,param_3);
      if (local_78[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    plVar1 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146246f18 FUN_146246f18 body=2591 status=ok
// SIG undefined FUN_146246f18(void)

undefined8 FUN_146246f18(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t **ppwVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined1 auStack_238 [40];
  int *local_210;
  wchar_t *local_208;
  undefined4 local_200;
  code *local_1f8;
  wchar_t ***local_1f0;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  wchar_t *local_1d8;
  undefined4 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined4 local_180;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  longlong *local_170 [2];
  longlong local_160;
  longlong *local_158;
  wchar_t *local_150;
  undefined4 local_148;
  wchar_t **local_140;
  undefined4 local_138;
  longlong *local_130 [2];
  wchar_t **local_120;
  undefined4 local_118;
  wchar_t *local_110;
  undefined4 local_108;
  wchar_t *local_100;
  undefined4 local_f8;
  wchar_t *local_f0;
  undefined4 local_e8;
  int local_dc;
  longlong local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  undefined1 *local_c0;
  wchar_t *local_b8;
  ulonglong uStack_b0;
  wchar_t *local_a8;
  ulonglong uStack_a0;
  wchar_t *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_f0 = L"FileVersion";
  local_e8 = 0xb;
  cVar3 = FUN_14047faa2(param_2,&local_f0,&local_dc);
  if (cVar3 == '\0') {
    local_100 = L"ProjectFileVersion";
    local_f8 = 0x12;
    cVar3 = FUN_14047faa2(param_2,&local_100,&local_dc);
    if (cVar3 != '\0') goto LAB_146246f82;
    local_a8 = L"InvalidProjectFileVersion";
    uStack_a0._0_4_ = 0x19;
    FUN_1446e940c(&local_b8,&local_a8);
    local_a8 = L"ProjectDescriptor";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x11);
    FUN_1446e940c(&local_c8,&local_a8);
    FUN_140208bae(&local_a8,&local_c8,&local_b8,
                  L"File does not have a valid \'FileVersion\' number.");
    FUN_140008f88(param_4,&local_a8);
    local_110 = local_a8;
LAB_14624753f:
    if (local_110 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_110 + 0x10))();
    }
  }
  else {
LAB_146246f82:
    *param_1 = local_dc;
    if (local_dc - 4U < 0xfffffffd) {
      FUN_140002266(&local_a8,&DAT_149e063bc);
      FUN_140233b1a(&local_110,&local_a8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_a8,&DAT_149e063bc,3);
      FUN_140233b1a(&local_120,&local_a8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_140 = local_120;
      if (local_120 != (wchar_t **)0x0) {
        (**(code **)(*local_120 + 4))();
      }
      local_138 = local_118;
      local_150 = local_110;
      if (local_110 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_110 + 8))();
      }
      local_148 = local_108;
      local_a8 = L"ProjectFileVersionTooLarge";
      uStack_a0._0_4_ = 0x1a;
      FUN_1446e940c(local_174,&local_a8);
      local_a8 = L"ProjectDescriptor";
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0x11);
      FUN_1446e940c(local_178,&local_a8);
      FUN_140208bae(local_170,local_178,local_174,
                    L"File appears to be in a newer version ({0}) of the file format that we can load (max version: {1})."
                   );
      FUN_14023409e(&local_160,local_170,1);
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
      FUN_14023423e(&local_98,&local_150);
      local_88 = 4;
      FUN_14023423e(local_78,&local_140);
      local_c0 = local_68;
      local_c8 = &local_a8;
      FUN_14010d304(&local_b8);
      local_d8 = local_160;
      local_d0 = local_158;
      if (local_158 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_158 + 1) = (int)local_158[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_130,&local_d8,&local_b8);
      FUN_14007f2db(local_b8,uStack_b0 & 0xffffffff);
      if (local_b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar13 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_a8 + lVar13) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_a8 + lVar13) + 0x10))();
          *(undefined8 *)((longlong)&local_a8 + lVar13) = 0;
          *(undefined4 *)((longlong)&uStack_a0 + lVar13) = 0;
        }
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != -0x10);
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_158 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_158 + 0x10))(local_158);
          }
        }
      }
      if (local_150 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_150 + 0x10))();
      }
      if (local_140 != (wchar_t **)0x0) {
        (**(code **)(*local_140 + 8))();
      }
      FUN_140008f88(param_4,local_130);
      if (local_130[0] != (longlong *)0x0) {
        (**(code **)(*local_130[0] + 0x10))();
      }
      if (local_170[0] != (longlong *)0x0) {
        (**(code **)(*local_170[0] + 0x10))();
      }
      if (local_120 != (wchar_t **)0x0) {
        (**(code **)(*local_120 + 8))();
      }
      goto LAB_14624753f;
    }
    local_188 = L"EngineAssociation";
    local_180 = 0x11;
    FUN_14047fa10(param_2,&local_188,param_1 + 2);
    local_198 = L"Category";
    local_190 = 8;
    FUN_14047fa10(param_2,&local_198,param_1 + 6);
    local_1a8 = L"Description";
    local_1a0 = 0xb;
    FUN_14047fa10(param_2,&local_1a8,param_1 + 10);
    local_1b8 = L"Enterprise";
    local_1b0 = 10;
    FUN_14047f976(param_2,&local_1b8,param_1 + 0x44);
    local_1c8 = L"DisableEnginePluginsByDefault";
    local_1c0 = 0x1d;
    FUN_14047f976(param_2,&local_1c8,(longlong)param_1 + 0x111);
    cVar3 = FUN_140481258(param_2,param_1 + 0xe,param_4);
    if ((cVar3 != '\0') && (cVar3 = FUN_14047feda(param_2,param_1 + 0x12,param_4), cVar3 != '\0')) {
      local_1d8 = L"AdditionalPluginDirectories";
      local_1d0 = 0x1b;
      cVar3 = FUN_140480164(param_2,&local_1d8,&local_d8);
      if ((cVar3 != '\0') && (0 < *(int *)(local_d8 + 8))) {
        FUN_1447a1747(*(undefined8 *)(param_1 + 0x46),param_1[0x48]);
        param_1[0x48] = 0;
        if (param_1[0x49] != 0) {
          FUN_1408be2c4(param_1 + 0x46,0);
        }
        FUN_140f7cd62(&local_b8);
        FUN_1412cfe60(&local_a8,&local_b8,((int)uStack_b0 == 0) + '\x14');
        FUN_1401aebe8(&local_a8,L"../RemappedPlugins/",0x13);
        if (local_b8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        cVar3 = FUN_1401aeb9c(&local_a8);
        if (cVar3 != '\0') {
          plVar6 = (longlong *)FUN_14054d1d4();
          pwVar9 = local_a8;
          if ((int)uStack_a0 == 0) {
            pwVar9 = L"";
          }
          (**(code **)(*plVar6 + 0x100))(plVar6,&local_b8,pwVar9);
          if (local_a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_a8 = local_b8;
          uStack_a0 = uStack_b0;
        }
        FUN_14684d436(param_1,&local_a8);
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_1e8 = L"TargetPlatforms";
      local_1e0 = 0xf;
      cVar3 = FUN_140480164(param_2,&local_1e8,&local_110);
      if ((cVar3 != '\0') && (0 < *(int *)(local_110 + 4))) {
        lVar13 = 0;
        lVar14 = 0;
        do {
          local_a8 = (wchar_t *)0x0;
          uStack_a0 = 0;
          cVar3 = (**(code **)(**(longlong **)(*(longlong *)local_110 + lVar13) + 0x58))
                            (*(longlong **)(*(longlong *)local_110 + lVar13),&local_a8);
          if (cVar3 != '\0') {
            pwVar9 = L"";
            if ((int)uStack_a0 != 0) {
              pwVar9 = local_a8;
            }
            FUN_1446f470e(&local_b8,pwVar9,1);
            iVar4 = param_1[0x18];
            param_1[0x18] = iVar4 + 1U;
            if ((uint)param_1[0x19] < iVar4 + 1U) {
              FUN_1446f84a2(param_1 + 0x16,iVar4);
            }
            *(wchar_t **)(*(longlong *)(param_1 + 0x16) + (longlong)iVar4 * 8) = local_b8;
          }
          if (local_a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x10;
        } while (lVar14 < *(int *)(local_110 + 4));
      }
      if (0 < param_1[0x18]) {
        local_b8 = (wchar_t *)0x0;
        uStack_b0 = 0;
        plVar6 = (longlong *)FUN_14054d1d4();
        local_1f0 = &local_120;
        local_1f8 = FUN_1427b082a;
        local_a8 = (wchar_t *)*param_3;
        iVar4 = *(int *)(param_3 + 1) + -1;
        if (*(int *)(param_3 + 1) == 0) {
          iVar4 = 0;
        }
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar4);
        local_98 = L"Platforms";
        local_90 = 9;
        local_120 = &local_b8;
        FUN_140bee87a(&local_c8,&local_a8,2);
        ppwVar10 = local_c8;
        if ((int)local_c0 == 0) {
          ppwVar10 = (wchar_t **)&DAT_149dfb77a;
        }
        (**(code **)(*plVar6 + 0x88))(plVar6,ppwVar10,&local_1f8);
        if (local_c8 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
        plVar6 = (longlong *)FUN_140f7b050();
        if ((longlong)(int)uStack_b0 == 0) {
          uVar12 = 0;
        }
        else {
          local_210 = param_1 + 0x16;
          pwVar15 = local_b8 + (longlong)(int)uStack_b0 * 8;
          pwVar9 = local_b8;
          do {
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(pwVar9 + 4) != 0) {
              puVar11 = *(undefined2 **)pwVar9;
            }
            FUN_1446f470e(&local_a8,puVar11,1);
            if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
              uVar2 = (uint)((ulonglong)local_a8 >> 0x10);
              uVar8 = (uint)local_a8 & 0xffff;
              plVar7 = (longlong *)plVar6[8];
              if ((longlong *)plVar6[8] == (longlong *)0x0) {
                plVar7 = plVar6 + 7;
              }
              iVar4 = *(int *)((longlong)plVar7 +
                              (ulonglong)
                              ((int)plVar6[9] - 1U &
                              (int)((ulonglong)local_a8 >> 0x20) + ((uint)local_a8 << 0x10 | uVar8)
                              + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
              if (iVar4 != -1) {
                do {
                  if (*(wchar_t **)(*plVar6 + (longlong)iVar4 * 0xa0) == local_a8) {
                    FUN_140721fbe(local_210,&local_a8);
                    break;
                  }
                  iVar4 = *(int *)((longlong)iVar4 * 0xa0 + *plVar6 + 0x98);
                } while (iVar4 != -1);
              }
            }
            pwVar9 = pwVar9 + 8;
          } while (pwVar9 != pwVar15);
          uVar12 = uStack_b0 & 0xffffffff;
        }
        FUN_1447a1747(local_b8,uVar12);
        if (local_b8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_208 = L"EpicSampleNameHash";
      local_200 = 0x12;
      FUN_146247938(param_2,&local_208,param_1 + 0x1a);
      FUN_140056680(&local_a8,L"PreBuildSteps");
      FUN_14047fc48(param_1 + 0x1c,param_2,&local_a8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_a8,L"PostBuildSteps");
      FUN_14047fc48(param_1 + 0x30,param_2,&local_a8);
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = 1;
      goto LAB_14624717d;
    }
  }
  uVar5 = 0;
LAB_14624717d:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146247938 FUN_146247938 body=144 status=ok
// SIG undefined FUN_146247938(void)

undefined4 FUN_146247938(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x10))(local_28,param_3);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462479ca FUN_1462479ca body=633 status=ok
// SIG undefined FUN_1462479ca(void)

int * FUN_1462479ca(ushort *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong param_7)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  ushort *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  ushort **local_b8;
  ushort *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *param_1;
  if (uVar3 != 0xffff) {
    lVar12 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar12 + 0x20) != (uint)uVar3 &&
         (int)(uint)uVar3 <= (int)*(uint *)(lVar12 + 0x20)) &&
       ((*(uint *)(lVar12 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0)) {
      plVar13 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar13[1] = (longlong)&DAT_100000001;
      *plVar13 = (longlong)&PTR_FUN_14b422cb0;
      plVar13[2] = (longlong)&PTR_FUN_14b422cc8;
      plVar13[3] = param_7;
      uVar5 = *(undefined4 *)(param_1 + 2);
      uVar6 = *(undefined4 *)(param_1 + 4);
      uVar7 = *(undefined4 *)(param_1 + 6);
      uVar8 = *(undefined4 *)(param_1 + 6);
      uVar9 = *(undefined4 *)(param_1 + 8);
      uVar10 = *(undefined4 *)(param_1 + 10);
      uVar11 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(plVar13 + 4) = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)plVar13 + 0x24) = uVar5;
      *(undefined4 *)(plVar13 + 5) = uVar6;
      *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar7;
      *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar8;
      *(undefined4 *)(plVar13 + 6) = uVar9;
      *(undefined4 *)((longlong)plVar13 + 0x34) = uVar10;
      *(undefined4 *)(plVar13 + 7) = uVar11;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      local_50 = 0;
      FUN_1400abb7c(local_70,param_1 + 0x40);
      local_78 = 0;
      FUN_1400abb7c(local_98,param_1 + 0x54);
      FUN_146247c44(param_1,local_70,local_98);
      local_b8 = &local_b0;
      local_c0 = &LAB_1460d4ef2;
      local_a0 = *(byte *)(param_6 + 8);
      local_b0 = param_1;
      (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_100 = &local_c0;
      local_108 = local_a8;
      local_f8 = param_1 + 0x10;
      local_f0 = local_70;
      local_e8 = local_98;
      local_d0 = plVar13 + 2;
      local_c8 = plVar13;
      FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
      iVar4 = *param_2;
      if (*param_2 == -1) {
        if ((*(byte *)(param_5 + 1) & 4) != 0) {
          FUN_145c7137e(param_4,&local_d4);
          *param_2 = local_d4;
          iVar4 = local_d4;
          if (local_d4 != -1) goto LAB_146247b74;
        }
      }
      else {
LAB_146247b74:
        thunk_FUN_1407ce0e2(param_4,iVar4,0xffffffff);
        thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      goto LAB_146247ba1;
    }
  }
  *param_2 = -1;
LAB_146247ba1:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146247c44 FUN_146247c44 body=187 status=ok
// SIG undefined FUN_146247c44(void)

void FUN_146247c44(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  if (param_1[1] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[2] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[3] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[4]);
  }
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[5]);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
    FUN_140dba9e6(param_3,param_1[6]);
    return;
  }
  return;
}



// FUNCTION 146247d00 FUN_146247d00 body=123 status=ok
// SIG undefined FUN_146247d00(void)

void FUN_146247d00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x78) & 2) != 0) && (*(char *)(param_1 + 9) == '\0')) {
    FUN_14168cd3e(param_1);
    if ((longlong)*(int *)(param_1 + 0x98) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      lVar1 = (longlong)*(int *)(param_1 + 0x98) * 0xf0;
      do {
        if ((((*(byte *)(lVar2 + 0x15) & 8) != 0) && (*(longlong *)(lVar2 + 0xe8) != 0)) &&
           ((*(byte *)(*(longlong *)(lVar2 + 0xe8) + 0x9e) & 0x10) == 0)) {
          FUN_140980756(param_1,lVar2,1);
        }
        lVar2 = lVar2 + 0xf0;
        lVar1 = lVar1 + -0xf0;
      } while (lVar1 != 0);
    }
  }
  return;
}



// FUNCTION 146247d7c FUN_146247d7c body=315 status=ok
// SIG undefined FUN_146247d7c(void)

void FUN_146247d7c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *_Src;
  void *_Src_00;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 1);
  if (((longlong)iVar1 != 0) && (_Src = (longlong *)*param_2, *_Src == DAT_14cbcaf98)) {
    local_40 = (void *)0x0;
    iVar2 = 0;
    local_38 = iVar1;
    FUN_140c19d4e(&local_40,iVar1,0);
    memcpy(local_40,_Src,(longlong)iVar1 << 3);
    if (local_38 + -1 != 0) {
      memmove(local_40,(void *)((longlong)local_40 + 8),(longlong)(local_38 + -1) << 3);
      iVar2 = local_38 + -1;
    }
    local_38 = iVar2;
    FUN_14572d304(&local_40);
    _Src_00 = local_40;
    local_50 = (void *)0x0;
    lVar3 = (longlong)local_38;
    local_48 = local_38;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_140c19d4e(&local_50,local_38,0);
      memcpy(local_50,_Src_00,lVar3 << 3);
    }
    FUN_146247eb8(param_1 + 0xbf0,&local_50);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146247eb8 FUN_146247eb8 body=96 status=ok
// SIG undefined FUN_146247eb8(void)

void FUN_146247eb8(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140c19cf6(local_28);
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



// FUNCTION 146247f1a FUN_146247f1a body=180 status=ok
// SIG undefined FUN_146247f1a(void)

bool FUN_146247f1a(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146247fda FUN_146247fda body=346 status=ok
// SIG undefined FUN_146247fda(void)

undefined4 * FUN_146247fda(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  FUN_1462481e2(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_145a14a00(local_40 + 2,uVar1);
  *(undefined4 *)(local_40 + 0x1a) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_146248136(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xd4) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1a) =
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
      FUN_1462482ce(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146248136 FUN_146248136 body=171 status=ok
// SIG undefined FUN_146248136(void)

undefined8 FUN_146248136(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xe0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xe0) == *param_3) {
          FUN_145a1457c((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0xd0);
          FUN_1488b5f94(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xd0);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1462481e2 FUN_1462481e2 body=236 status=ok
// SIG undefined FUN_1462481e2(void)

int * FUN_1462481e2(longlong *param_1,int *param_2)

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
      FUN_140df211e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xe0);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xe0) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xe0 + *param_1;
  return param_2;
}



// FUNCTION 1462482ce FUN_1462482ce body=491 status=ok
// SIG undefined FUN_1462482ce(void)

void FUN_1462482ce(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xe0;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xd4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xd0 + lVar7) =
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



// FUNCTION 1462484ba FUN_1462484ba body=194 status=ok
// SIG undefined FUN_1462484ba(void)

longlong FUN_1462484ba(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_1;
  uVar1 = FUN_145a2f768();
  FUN_1400021e4(&local_30,&local_40);
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  uVar2 = FUN_145a2f768();
  lVar3 = FUN_140277b32(uVar2,uVar1,puVar4,0);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar3 == 0) {
    local_50 = 0;
    local_58 = 0;
    lVar3 = FUN_14624857d(uVar1,param_1,0,0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14624857d FUN_14624857d body=221 status=ok
// SIG undefined FUN_14624857d(void)

undefined8
FUN_14624857d(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a2f768();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624865c FUN_14624865c body=419 status=ok
// SIG undefined FUN_14624865c(void)

longlong * FUN_14624865c(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0x780,0x10);
  FUN_14168ddae(lVar2,*param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14afc7e30;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_14624871d;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_1462487a3:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_14624870c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_1462487a3;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_14624870c:
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
    }
  }
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_14624871d:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146248800 FUN_146248800 body=53 status=ok
// SIG undefined FUN_146248800(void)

void FUN_146248800(longlong *param_1)

{
  FUN_146248836();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146248836 FUN_146248836 body=370 status=ok
// SIG undefined FUN_146248836(void)

void FUN_146248836(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_140be4274(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462489aa FUN_1462489aa body=475 status=ok
// SIG undefined FUN_1462489aa(void)

void FUN_1462489aa(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  ushort *puVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  if (*(longlong *)(lVar6 + 0x218) == 0) {
    puVar5 = &DAT_14ca85550;
  }
  else {
    puVar5 = (ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(lVar6 + 0x218) + 8) * 2);
  }
  if ((&DAT_14ca814b8)[(ulonglong)*puVar5 * 0xf] == 1) {
    cVar3 = FUN_14743059b();
    if (cVar3 != '\0') goto LAB_146248a05;
    piVar7 = (int *)FUN_1456e8488(param_1);
    if (piVar7 == (int *)0x0) goto LAB_146248a18;
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      FUN_1414e9958(puVar8);
      *puVar8 = &PTR_FUN_14a878630;
      puVar8[9] = 0;
      *(undefined1 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      *(undefined8 **)(param_1 + 0x2f0) = puVar8;
      local_38 = 0;
      uStack_30 = 0;
      if ((DAT_14ca964f0 == '\x01') && ((DAT_14c760e14 & 1) != 0)) {
        FUN_1447a122a(&local_38,piVar7 + 2);
        uVar4 = 10;
      }
      else {
        local_38 = *(longlong *)(piVar7 + 6);
        uStack_30 = *(undefined8 *)(piVar7 + 8);
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[8] = 0;
        piVar7[9] = 0;
        uVar4 = 0x1a;
      }
      lVar6 = *(longlong *)(param_1 + 0x2f0);
      iVar9 = *piVar7;
      *(int *)(lVar6 + 0x48) = iVar9;
      uVar1 = (ulonglong)(iVar9 + -1 + (uint)(iVar9 == 0)) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      *(uint *)(lVar6 + 0x4c) = ((uint)lVar2 ^ 0xffffffc0) + 0x41;
      *(undefined1 *)(lVar6 + 0x50) = uVar4;
      if ((longlong *)(lVar6 + 0x60) != &local_38) {
        if (*(longlong *)(lVar6 + 0x60) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar6 + 0x60) = local_38;
        local_38 = 0;
        *(undefined4 *)(lVar6 + 0x68) = (undefined4)uStack_30;
        *(undefined4 *)(lVar6 + 0x6c) = uStack_30._4_4_;
        uStack_30 = 0;
      }
      FUN_140308182(*(undefined8 *)(param_1 + 0x2f0),0);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    iVar9 = piVar7[1];
  }
  else {
LAB_146248a05:
    FUN_14168e298(param_1);
    iVar9 = 0;
  }
  *(int *)(param_1 + 0x304) = iVar9;
LAB_146248a18:
  FUN_1401a0912(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146248b86 FUN_146248b86 body=99 status=ok
// SIG undefined FUN_146248b86(void)

void FUN_146248b86(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000146248be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146248bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146248bea FUN_146248bea body=329 status=ok
// SIG undefined FUN_146248bea(void)

void FUN_146248bea(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      lVar4 = FUN_1407f492e(uVar3);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x398) != 0)) {
        lVar5 = FUN_144a7b4ca();
        if (((*(longlong *)(lVar4 + 0x398) != 0) &&
            (((lVar5 != 0 &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x398) + 0x10), lVar4 != 0)) &&
             (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          lVar4 = FUN_14129b2e6();
          if (lVar4 != 0) {
            local_a8[0] = 0;
            uStack_70 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            local_74 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            local_40 = 0;
            uStack_38 = 0;
            local_30 = 0xffffffff;
            local_2c = 0;
            local_2a = 1;
            local_29 = 0;
            uStack_6c = 0x10000000000;
            lVar5 = thunk_FUN_1402735c8();
            local_b8 = local_a8;
            FUN_140bdce7c(lVar2,lVar5 + 0x548,lVar4,0);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146248d34 FUN_146248d34 body=920 status=ok
// SIG undefined FUN_146248d34(void)

void FUN_146248d34(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a63f30();
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    local_38 = &local_39;
    local_39 = 1;
    local_30 = (undefined8 *)(param_1 + 0xe0);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(param_1 + 0xfc) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0xf0),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0xf0);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    local_38 = &local_39;
    local_39 = 2;
    local_30 = (undefined8 *)(param_1 + 0x100);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (*(int *)(param_1 + 0x11c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x110),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x110);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    local_38 = &local_39;
    local_39 = 8;
    local_30 = (undefined8 *)(param_1 + 0x120);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x13c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x130),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x130);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    local_38 = &local_39;
    local_39 = 9;
    local_30 = (undefined8 *)(param_1 + 0x140);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(param_1 + 0x15c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x150),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x150);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    local_38 = &local_39;
    local_39 = 10;
    local_30 = (undefined8 *)(param_1 + 0x160);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    if (*(int *)(param_1 + 0x17c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x170),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x170);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_38 = &local_39;
    local_39 = 0xb;
    local_30 = (undefined8 *)(param_1 + 0x180);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 400),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 400);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_38 = &local_39;
    local_39 = 0xc;
    local_30 = (undefined8 *)(param_1 + 0x1a0);
    FUN_147d9efc8(param_1 + 0x90,local_24);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x1b0),0);
    }
    puVar1 = *(undefined2 **)(param_1 + 0x1b0);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  FUN_14168f4a6(param_1,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462490ce FUN_1462490ce body=40 status=ok
// SIG undefined FUN_1462490ce(void)

undefined8 FUN_1462490ce(undefined8 param_1,int param_2)

{
  FUN_1462490f6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462490f6 FUN_1462490f6 body=1689 status=ok
// SIG undefined FUN_1462490f6(void)

void FUN_1462490f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd8af90;
  param_1[5] = &PTR_FUN_14bd8b3e0;
  param_1[0x13] = &PTR_FUN_14bd8b400;
  param_1[0x15] = &PTR_FUN_14bd8b430;
  param_1[0x16] = &PTR_FUN_14bd8b470;
  if (param_1[0x1fe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1fa) = 0;
  if (param_1[0x1f9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1f1);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (param_1[0x1ef] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1e7);
  if (param_1[0x1e4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d5] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e5b52(param_1 + 0x1ba);
  FUN_141082778(param_1 + 0x175);
  plVar3 = (longlong *)param_1[0x16b];
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
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (param_1[0x167] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x15f);
  FUN_145820e2a(param_1 + 0x15a);
  if (param_1[0x158] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e2a(param_1 + 0x153);
  if (param_1[0x151] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x132];
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
  if (param_1[0x124] != 0) {
    plVar3 = param_1 + 0x128;
    if ((longlong *)param_1[0x126] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x126];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x11c] != 0) {
    plVar3 = param_1 + 0x120;
    if ((longlong *)param_1[0x11e] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x11e];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x110] != 0) {
    plVar3 = param_1 + 0x114;
    if ((longlong *)param_1[0x112] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x112];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x108] != 0) {
    plVar3 = param_1 + 0x10c;
    if ((longlong *)param_1[0x10a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xfc] != 0) {
    plVar3 = param_1 + 0x100;
    if ((longlong *)param_1[0xfe] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xfe];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xf4] != 0) {
    plVar3 = param_1 + 0xf8;
    if ((longlong *)param_1[0xf6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xf6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xea] != 0) {
    plVar3 = param_1 + 0xee;
    if ((longlong *)param_1[0xec] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xec];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xe2] != 0) {
    plVar3 = param_1 + 0xe6;
    if ((longlong *)param_1[0xe4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xe4];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xd8] != 0) {
    plVar3 = param_1 + 0xdc;
    if ((longlong *)param_1[0xda] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xda];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xd0] != 0) {
    plVar3 = param_1 + 0xd4;
    if ((longlong *)param_1[0xd2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xd2];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xc6] != 0) {
    plVar3 = param_1 + 0xca;
    if ((longlong *)param_1[200] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[200];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xbe] != 0) {
    plVar3 = param_1 + 0xc2;
    if ((longlong *)param_1[0xc0] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xc0];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xb4] != 0) {
    plVar3 = param_1 + 0xb8;
    if ((longlong *)param_1[0xb6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xb6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xac] != 0) {
    plVar3 = param_1 + 0xb0;
    if ((longlong *)param_1[0xae] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xae];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xa2] != 0) {
    plVar3 = param_1 + 0xa6;
    if ((longlong *)param_1[0xa4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xa4];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x9a] != 0) {
    plVar3 = param_1 + 0x9e;
    if ((longlong *)param_1[0x9c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x9c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x90] != 0) {
    plVar3 = param_1 + 0x94;
    if ((longlong *)param_1[0x92] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x92];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x88] != 0) {
    plVar3 = param_1 + 0x8c;
    if ((longlong *)param_1[0x8a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x8a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x7e] != 0) {
    plVar3 = param_1 + 0x82;
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x80];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x76] != 0) {
    plVar3 = param_1 + 0x7a;
    if ((longlong *)param_1[0x78] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x78];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x6c] != 0) {
    plVar3 = param_1 + 0x70;
    if ((longlong *)param_1[0x6e] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x6e];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[100] != 0) {
    plVar3 = param_1 + 0x68;
    if ((longlong *)param_1[0x66] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x66];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x5a] != 0) {
    plVar3 = param_1 + 0x5e;
    if ((longlong *)param_1[0x5c] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x5c];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x52] != 0) {
    plVar3 = param_1 + 0x56;
    if ((longlong *)param_1[0x54] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x54];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 146249790 FUN_146249790 body=754 status=ok
// SIG undefined FUN_146249790(void)

int * FUN_146249790(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined1 **local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  longlong *local_150;
  int *local_148;
  longlong *local_140;
  longlong *local_138;
  undefined1 *local_130;
  short **local_128;
  short *local_120;
  longlong local_118;
  undefined4 local_10c;
  undefined1 local_108 [8];
  byte local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_146249a84(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_1462499d3;
  }
  local_148 = param_2;
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b422c90;
  local_150 = plVar8 + 2;
  plVar8[2] = (longlong)&PTR_FUN_14b422ca8;
  plVar8[3] = param_7;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_10c._0_2_ = *param_1;
  local_120 = (short *)&local_10c;
  local_118 = (longlong)&local_10c + 2;
  FUN_1447c44f6(local_f8,&local_120);
  local_10c = CONCAT22(local_10c._2_2_,param_1[1]);
  local_120 = (short *)&local_10c;
  local_118 = (longlong)&local_10c + 2;
  FUN_1447c44f6(local_f8,&local_120);
  local_130 = &LAB_14615e6e4;
  local_100 = *(byte *)(param_6 + 8);
  local_128 = &local_120;
  local_120 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_100])(local_108);
  param_2 = local_148;
  local_140 = local_150;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_158 = local_98;
  local_170 = &local_130;
  local_178 = local_108;
  local_168 = local_f8;
  local_160 = local_70;
  local_138 = plVar8;
  FUN_1406ac01c(param_4,local_148,param_5,&local_140);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_10c);
      *param_2 = local_10c;
      iVar3 = local_10c;
      if (local_10c != -1) goto LAB_146249995;
    }
  }
  else {
LAB_146249995:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
LAB_1462499d3:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146249a84 FUN_146249a84 body=112 status=ok
// SIG undefined FUN_146249a84(void)

undefined8 FUN_146249a84(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 146249af4 FUN_146249af4 body=293 status=ok
// SIG undefined FUN_146249af4(void)

void FUN_146249af4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar2);
  local_48 = local_28;
  FUN_146249c1a(&local_58,uVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146249c1a FUN_146249c1a body=141 status=ok
// SIG undefined FUN_146249c1a(void)

void FUN_146249c1a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14017698e(param_2);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x180) != 0)) {
      cVar1 = FUN_144729dda(lVar3 + 0x178);
      if (cVar1 != '\0') {
        lVar4 = (**(code **)(**(longlong **)(lVar3 + 0x180) + 0x18))();
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
          FUN_140316e34(lVar3,1);
          FUN_140d53d1a(lVar3,param_1,0);
          FUN_140d53872(lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146249ca8 FUN_146249ca8 body=26 status=ok
// SIG undefined FUN_146249ca8(void)

void FUN_146249ca8(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_14168f7ce(param_1);
  return;
}



// FUNCTION 146249cc2 FUN_146249cc2 body=687 status=ok
// SIG undefined FUN_146249cc2(void)

void FUN_146249cc2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  FUN_146249f72(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar3 = (longlong)*(int *)(lVar1 + 0x1a8);
  if (lVar3 == 0) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar6 = *(char **)(lVar1 + 0x1a0);
    lVar4 = lVar3 * 0x78;
    pcVar8 = pcVar6;
    do {
      if (*pcVar8 == '\0') goto LAB_146249d0d;
      pcVar8 = pcVar8 + 0x78;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
    pcVar8 = (char *)0x0;
LAB_146249d0d:
    lVar3 = lVar3 * 0x78;
    do {
      if (*pcVar6 == '\x02') goto LAB_146249d22;
      pcVar6 = pcVar6 + 0x78;
      lVar3 = lVar3 + -0x78;
    } while (lVar3 != 0);
  }
  pcVar6 = (char *)0x0;
LAB_146249d22:
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1a8);
  if (lVar4 == 0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar9 = *(char **)(lVar3 + 0x1a0);
    lVar5 = lVar4 * 0x78;
    pcVar7 = pcVar9;
    do {
      if (*pcVar7 == '\0') goto LAB_146249d4f;
      pcVar7 = pcVar7 + 0x78;
      lVar5 = lVar5 + -0x78;
    } while (lVar5 != 0);
    pcVar7 = (char *)0x0;
LAB_146249d4f:
    lVar4 = lVar4 * 0x78;
    do {
      if (*pcVar9 == '\x02') goto LAB_146249d66;
      pcVar9 = pcVar9 + 0x78;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_146249d66:
  plVar2 = *(longlong **)(lVar1 + 0x38);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  *(longlong **)(lVar3 + 0x38) = plVar2;
  if ((pcVar8 != (char *)0x0) && (pcVar7 != (char *)0x0)) {
    if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar2);
    }
    *(longlong **)(pcVar7 + 0x10) = plVar2;
    pcVar8[0x10] = '\0';
    pcVar8[0x11] = '\0';
    pcVar8[0x12] = '\0';
    pcVar8[0x13] = '\0';
    pcVar8[0x14] = '\0';
    pcVar8[0x15] = '\0';
    pcVar8[0x16] = '\0';
    pcVar8[0x17] = '\0';
  }
  if ((pcVar6 != (char *)0x0) && (pcVar9 != (char *)0x0)) {
    if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar2);
    }
    *(longlong **)(pcVar9 + 0x10) = plVar2;
    pcVar6[0x10] = '\0';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
  }
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x38) = 0;
    (**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(param_1 + 0x78));
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x152) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x152);
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x1f0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(lVar1 + 0x1f0) = lVar3;
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x6d0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6d0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x930) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x930);
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x6d8) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6d8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x6e0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6e0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x6e8) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6e8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x6f8) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x6f8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x700) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x700);
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x740) =
         *(undefined4 *)((longlong)plVar2 + 0xcc);
  }
  return;
}



// FUNCTION 146249f72 FUN_146249f72 body=191 status=ok
// SIG undefined FUN_146249f72(void)

void FUN_146249f72(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb103c8;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb103d4 = DAT_14cb103d4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb103c0 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb103c0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb103d4 = DAT_14cb103d4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14624a018;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb103d4 = DAT_14cb103d4 + -1;
LAB_14624a018:
  FUN_14474d06a(&DAT_14cb103c0,0);
  return;
}



// FUNCTION 14624a032 FUN_14624a032 body=399 status=ok
// SIG undefined FUN_14624a032(void)

void FUN_14624a032(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
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
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_78 = local_20;
  cVar1 = (**(code **)(*param_1 + 0x8b0))(param_1);
  if (cVar1 == '\0') {
    DAT_14c949520 = L"ServerSetSpectatorLocation_Validate";
  }
  else {
    local_98 = local_38;
    local_a8 = local_48;
    uStack_a0 = uStack_40;
    local_c8 = local_30;
    uStack_c4 = uStack_2c;
    uStack_c0 = uStack_28;
    uStack_bc = uStack_24;
    local_b8 = local_20;
    (**(code **)(*param_1 + 0x8b8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624a1c6 FUN_14624a1c6 body=477 status=ok
// SIG undefined FUN_14624a1c6(void)

void FUN_14624a1c6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1447210f0();
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] == (ulonglong)DAT_14c893048) {
    param_1[0x9a] = param_2[2];
    lVar3 = param_2[1];
    param_1[0x98] = *param_2;
    param_1[0x99] = lVar3;
    param_1[0x9d] = param_3[2];
    lVar3 = param_3[1];
    param_1[0x9b] = *param_3;
    param_1[0x9c] = lVar3;
    if (*(double *)(lVar1 + 0x6d0) - (double)*(float *)((longlong)param_1 + 0x4bc) <= 2.0)
    goto LAB_14624a26c;
    FUN_147a36bcc(param_1,&local_48);
    local_40 = local_48;
    uVar2 = FUN_14477b072(param_1,DAT_14caf9618);
    lVar3 = *param_1;
LAB_14624a398:
    (**(code **)(lVar3 + 0x248))(param_1,uVar2,&local_40);
  }
  else {
    if ((*(double *)(lVar1 + 0x6d0) == (double)*(float *)((longlong)param_1 + 0x4bc)) &&
       (!NAN(*(double *)(lVar1 + 0x6d0)) && !NAN((double)*(float *)((longlong)param_1 + 0x4bc))))
    goto LAB_14624a26c;
    if (param_1[0x87] == param_1[0x7a]) {
      FUN_147a36bcc(param_1,&local_50);
      local_40 = local_50;
      uVar2 = FUN_14477b072(param_1,DAT_14caf9618);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_40);
      local_40 = (**(code **)(*param_1 + 0x6b8))(param_1);
      local_38 = 0;
      local_34 = 1;
      local_30 = 0x40000000;
      uVar2 = FUN_14477b072(param_1,DAT_14caf97b8);
      lVar3 = *param_1;
      goto LAB_14624a398;
    }
    (**(code **)(*param_1 + 0xc78))(param_1);
  }
  *(float *)((longlong)param_1 + 0x4bc) = (float)*(double *)(lVar1 + 0x6d0);
LAB_14624a26c:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624a3a4 FUN_14624a3a4 body=27 status=ok
// SIG undefined FUN_14624a3a4(void)

undefined8 FUN_14624a3a4(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xb8) >> 8),
                    *(longlong *)(param_1 + 0xb8) == *param_2);
  }
  return 0;
}



// FUNCTION 14624a3d6 FUN_14624a3d6 body=94 status=ok
// SIG undefined FUN_14624a3d6(void)

void FUN_14624a3d6(void)

{
  longlong lVar1;
  undefined1 auStack_48 [48];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1447210f0();
  local_18 = 0;
  FUN_141690028(lVar1);
  *(byte *)(lVar1 + 0x154) = *(byte *)(lVar1 + 0x154) | 0x40;
  FUN_140e510d0(DAT_14cb0d2b0,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624a436 FUN_14624a436 body=110 status=ok
// SIG undefined FUN_14624a436(void)

void FUN_14624a436(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_141427290(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1412f1190(param_1);
    return;
  }
  FUN_14624a4a4(param_1);
  FUN_141427290(param_1,param_2);
  return;
}



// FUNCTION 14624a4a4 FUN_14624a4a4 body=335 status=ok
// SIG undefined FUN_14624a4a4(void)

void FUN_14624a4a4(longlong *param_1)

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



// FUNCTION 14624a5f4 FUN_14624a5f4 body=263 status=ok
// SIG undefined FUN_14624a5f4(void)

void FUN_14624a5f4(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14624a6fc();
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      puVar1 = (undefined4 *)(lVar2 + lVar4);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      local_b8 = param_3;
      FUN_14624a736(param_1,&local_a8,param_4,&local_98);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar4);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1403950f6(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624a6fc FUN_14624a6fc body=57 status=ok
// SIG undefined FUN_14624a6fc(void)

void FUN_14624a6fc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\0') {
    if (*(char *)((longlong)param_1 + 0x11) == '\0') {
      FUN_1416a9fc6(param_1[1]);
      *(undefined1 *)((longlong)param_1 + 0x11) = 1;
    }
    FUN_1416906a2(param_1[1],*param_1);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



// FUNCTION 14624a736 FUN_14624a736 body=945 status=ok
// SIG undefined FUN_14624a736(void)

void FUN_14624a736(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_5[1] == *(int *)((longlong)param_5 + 0x34)) {
    lVar4 = param_2[1];
  }
  else {
    lVar2 = *param_2;
    lVar4 = param_2[1];
    uVar11 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar10 = (uint)lVar2 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    uVar11 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar10) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4);
    plVar8 = param_5 + 7;
    if ((longlong *)param_5[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_5[8];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_5[9] - 1U &
                    ((uVar11 >> 2) +
                     ((uint)lVar4 << 0x10 | uVar6) + (int)((ulonglong)lVar4 >> 0x20) +
                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar11 * 0x40 + 0x9e3779b9 ^
                    uVar11)) * 4);
    if (iVar7 != -1) {
      lVar5 = *param_5;
      do {
        lVar9 = (longlong)iVar7;
        if ((*(longlong *)(lVar5 + lVar9 * 0x18) == lVar2) &&
           (*(longlong *)(lVar5 + 8 + lVar9 * 0x18) == lVar4)) goto LAB_14624a8a3;
        iVar7 = *(int *)(lVar5 + lVar9 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
    lVar2 = *param_2;
    uVar11 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar10 = (uint)lVar2 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    uVar11 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar10) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4);
    plVar8 = param_4 + 7;
    if ((longlong *)param_4[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[8];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_4[9] - 1U &
                    ((uVar11 >> 2) +
                     ((uint)lVar4 << 0x10 | uVar6) + (int)((ulonglong)lVar4 >> 0x20) +
                     (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar11 * 0x40 + 0x9e3779b9 ^
                    uVar11)) * 4);
    if (iVar7 != -1) {
      lVar5 = *param_4;
      do {
        lVar9 = (longlong)iVar7;
        if ((*(longlong *)(lVar5 + lVar9 * 0x18) == lVar2) &&
           (*(longlong *)(lVar5 + 8 + lVar9 * 0x18) == lVar4)) goto LAB_14624a8a3;
        iVar7 = *(int *)(lVar5 + lVar9 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  FUN_144972254(param_3,&local_58,param_2,0);
  FUN_144972254(param_4,&local_58,param_2,0);
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x58) != *(int *)(lVar4 + 0x84)) {
    lVar2 = *param_2;
    lVar5 = param_2[1];
    uVar11 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar10 = (uint)lVar2 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar6 = (uint)lVar5 & 0xffff;
    uVar11 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar10) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4);
    lVar9 = lVar4 + 0x88;
    if (*(longlong *)(lVar4 + 0x90) != 0) {
      lVar9 = *(longlong *)(lVar4 + 0x90);
    }
    iVar7 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(lVar4 + 0x98) - 1U &
                             ((uVar11 >> 2) +
                              (int)((ulonglong)lVar5 >> 0x20) + (uint)lVar5 * 0x10000 + uVar6 +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar11 * 0x40 +
                              0x9e3779b9 ^ uVar11)) * 4);
    if (iVar7 != -1) {
      do {
        plVar8 = (longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar7 * 0x28);
        if ((*plVar8 == lVar2) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x50) + 8 + (longlong)iVar7 * 0x28) == lVar5)) {
          if ((((ulonglong)(plVar8 + 2) & 0xffffffffffffffef) != 0) &&
             (lVar4 = plVar8[3], (longlong)(int)lVar4 != 0)) {
            lVar2 = plVar8[2];
            lVar5 = 0;
            do {
              puVar1 = (undefined4 *)(lVar2 + lVar5);
              local_58 = *puVar1;
              uStack_54 = puVar1[1];
              uStack_50 = puVar1[2];
              uStack_4c = puVar1[3];
              local_68 = param_5;
              FUN_14624a736(param_1,&local_58,param_3,param_4);
              lVar5 = lVar5 + 0x10;
            } while ((longlong)(int)lVar4 * 0x10 != lVar5);
          }
          break;
        }
        iVar7 = (int)plVar8[4];
      } while (iVar7 != -1);
    }
  }
LAB_14624a8a3:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624aae8 FUN_14624aae8 body=40 status=ok
// SIG undefined FUN_14624aae8(void)

undefined8 FUN_14624aae8(undefined8 param_1,int param_2)

{
  FUN_14169169a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14624ab1c FUN_14624ab1c body=1788 status=ok
// SIG undefined FUN_14624ab1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14624ab1c(undefined8 *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  double local_f0 [4];
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a55f1c0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x43fa0000;
  *(undefined2 *)((longlong)param_1 + 0x39c) = 0;
  FUN_1446f470e(&local_b0,L"TransformComponent",1);
  uVar8 = FUN_144a799b0();
  local_100 = 0;
  local_108 = CONCAT71(local_108._1_7_,1);
  lVar9 = FUN_14048696c(param_1,local_b0,uVar8,uVar8);
  if (lVar9 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar9);
  }
  bVar7 = DAT_14c950c29;
  param_1[0x74] = lVar9;
  if ((lVar9 != 0) && ((bVar7 & 1) != 0)) {
    FUN_14689c22e(lVar9);
    lVar9 = param_1[0x74];
  }
  param_1[0x39] = lVar9;
  FUN_1446f470e(&local_b8,L"CraneYawControl",1);
  uVar8 = FUN_144a799b0();
  local_100 = 0;
  local_108 = CONCAT71(local_108._1_7_,1);
  lVar9 = FUN_14048696c(param_1,local_b8,uVar8,uVar8);
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x75] = lVar9;
  FUN_140486fc4(lVar9,param_1[0x74],0);
  lVar9 = param_1[0x75];
  auVar13 = *(undefined1 (*) [16])(lVar9 + 0x1b0);
  dVar5 = auVar13._0_8_;
  dVar6 = auVar13._8_8_;
  dVar20 = *(double *)(lVar9 + 0x1c0);
  puVar10 = *(undefined8 **)(lVar9 + 0x230);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar8 = DAT_14c8463d8;
    *puVar10 = DAT_14c8463d0;
    puVar10[1] = uVar8;
    uVar8 = DAT_14c8463e8;
    puVar10[2] = DAT_14c8463e0;
    puVar10[3] = uVar8;
    uVar8 = DAT_14c846500;
    puVar10[4] = DAT_14c8464f8;
    puVar10[5] = uVar8;
    puVar10[6] = DAT_14c846508;
    *(undefined8 **)(lVar9 + 0x230) = puVar10;
  }
  if (((((double)puVar10[4] != dVar5) || (NAN((double)puVar10[4]) || NAN(dVar5))) ||
      ((double)puVar10[5] != dVar6)) ||
     (((NAN((double)puVar10[5]) || NAN(dVar6) || ((double)puVar10[6] != dVar20)) ||
      (NAN((double)puVar10[6]) || NAN(dVar20))))) {
    auVar25._8_8_ = 0;
    auVar25._0_8_ = dVar20;
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar13 = divpd(auVar13,_DAT_1499387d0);
    auVar18 = divpd(auVar25,_DAT_1499387d0);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar18 = roundpd(auVar18,auVar18,3);
    dVar5 = dVar5 - auVar13._0_8_ * dVar2;
    dVar6 = dVar6 - auVar13._8_8_ * dVar3;
    auVar26._0_8_ = dVar20 - auVar18._0_8_ * dVar2;
    auVar26._8_8_ = 0.0 - auVar18._8_8_ * dVar3;
    auVar23._0_8_ = dVar5 + dVar2;
    auVar23._8_8_ = dVar6 + dVar3;
    auVar21._0_8_ = dVar2 + auVar26._0_8_;
    auVar21._8_8_ = dVar3 + auVar26._8_8_;
    auVar18._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar18._0_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar13._8_4_ = SUB84(dVar6,0);
    auVar13._0_8_ = dVar5;
    auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar18 = blendvpd(auVar23,auVar13,auVar18);
    auVar11._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
    auVar11._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
    auVar13 = blendvpd(auVar21,auVar26,auVar11);
    auVar17._0_8_ = auVar18._0_8_ + -360.0;
    auVar17._8_8_ = auVar18._8_8_ + -360.0;
    auVar12._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
    auVar12._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
    auVar18 = blendvpd(auVar18,auVar17,auVar12);
    dVar20 = auVar13._0_8_;
    *(undefined1 (*) [16])(puVar10 + 4) = auVar18;
    puVar10[6] = ~-(ulonglong)(180.0 < dVar20) & (ulonglong)dVar20 |
                 (ulonglong)(dVar20 + -360.0) & -(ulonglong)(180.0 < dVar20);
    FUN_144a7484c(puVar10 + 4,&local_88);
    puVar10[2] = local_78;
    puVar10[3] = uStack_70;
    *puVar10 = local_88;
    puVar10[1] = uStack_80;
  }
  local_88 = *puVar10;
  uStack_80 = puVar10[1];
  local_78 = puVar10[2];
  uStack_70 = puVar10[3];
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 70.0;
  local_100 = 0;
  local_108 = 0;
  FUN_144927ad4(lVar9,local_a8,&local_88,0);
  local_c8 = (double)*(float *)((longlong)param_1 + 0x394);
  local_d0 = 0;
  local_c0 = 0;
  local_108 = local_108 & 0xffffffffffffff00;
  FUN_14020f75c(param_1[0x75],&local_d0,0,0);
  FUN_1446f470e(local_f0 + 3,L"CranePitchControl",1);
  uVar8 = FUN_144a799b0();
  local_100 = 0;
  local_108 = CONCAT71(local_108._1_7_,1);
  lVar9 = FUN_14048696c(param_1,local_f0[3],uVar8,uVar8);
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x76] = lVar9;
  FUN_140486fc4(lVar9,param_1[0x75],0);
  local_f0[0] = (double)*(float *)(param_1 + 0x72);
  local_f0[1] = 0.0;
  local_f0[2] = 0.0;
  local_108 = local_108 & 0xffffffffffffff00;
  FUN_14020f75c(param_1[0x76],local_f0,0,0);
  FUN_1446f470e(&local_f8,L"CraneCameraMount",1);
  uVar8 = FUN_144a799b0();
  local_100 = 0;
  local_108 = CONCAT71(local_108._1_7_,1);
  lVar9 = FUN_14048696c(param_1,local_f8,uVar8,uVar8);
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x77] = lVar9;
  FUN_140486fc4(lVar9,param_1[0x76],0);
  lVar9 = param_1[0x77];
  fVar1 = *(float *)(param_1 + 0x73);
  auVar13 = *(undefined1 (*) [16])(lVar9 + 0x1b0);
  dVar5 = auVar13._0_8_;
  dVar6 = auVar13._8_8_;
  dVar20 = *(double *)(lVar9 + 0x1c0);
  puVar10 = *(undefined8 **)(lVar9 + 0x230);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar8 = DAT_14c8463d8;
    *puVar10 = DAT_14c8463d0;
    puVar10[1] = uVar8;
    uVar8 = DAT_14c8463e8;
    puVar10[2] = DAT_14c8463e0;
    puVar10[3] = uVar8;
    uVar8 = DAT_14c846500;
    puVar10[4] = DAT_14c8464f8;
    puVar10[5] = uVar8;
    puVar10[6] = DAT_14c846508;
    *(undefined8 **)(lVar9 + 0x230) = puVar10;
  }
  if ((((((double)puVar10[4] != dVar5) || (NAN((double)puVar10[4]) || NAN(dVar5))) ||
       ((double)puVar10[5] != dVar6)) ||
      ((NAN((double)puVar10[5]) || NAN(dVar6) || ((double)puVar10[6] != dVar20)))) ||
     (NAN((double)puVar10[6]) || NAN(dVar20))) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar20;
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar13 = divpd(auVar13,_DAT_1499387d0);
    auVar18 = divpd(auVar27,_DAT_1499387d0);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar18 = roundpd(auVar18,auVar18,3);
    dVar5 = dVar5 - auVar13._0_8_ * dVar2;
    dVar6 = dVar6 - auVar13._8_8_ * dVar3;
    auVar28._0_8_ = dVar20 - auVar18._0_8_ * dVar2;
    auVar28._8_8_ = 0.0 - auVar18._8_8_ * dVar3;
    auVar24._0_8_ = dVar5 + dVar2;
    auVar24._8_8_ = dVar6 + dVar3;
    auVar22._0_8_ = dVar2 + auVar28._0_8_;
    auVar22._8_8_ = dVar3 + auVar28._8_8_;
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar18 = blendvpd(auVar24,auVar4,auVar14);
    auVar15._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
    auVar15._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
    auVar13 = blendvpd(auVar22,auVar28,auVar15);
    auVar19._0_8_ = auVar18._0_8_ + -360.0;
    auVar19._8_8_ = auVar18._8_8_ + -360.0;
    auVar16._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
    auVar16._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
    auVar18 = blendvpd(auVar18,auVar19,auVar16);
    dVar20 = auVar13._0_8_;
    *(undefined1 (*) [16])(puVar10 + 4) = auVar18;
    puVar10[6] = ~-(ulonglong)(180.0 < dVar20) & (ulonglong)dVar20 |
                 (ulonglong)(dVar20 + -360.0) & -(ulonglong)(180.0 < dVar20);
    FUN_144a7484c(puVar10 + 4,&local_88);
    puVar10[2] = local_78;
    puVar10[3] = uStack_70;
    *puVar10 = local_88;
    puVar10[1] = uStack_80;
  }
  local_a8[0] = (double)fVar1;
  local_88 = *puVar10;
  uStack_80 = puVar10[1];
  local_78 = puVar10[2];
  uStack_70 = puVar10[3];
  local_a8[1] = 0.0;
  local_a8[2] = -15.0;
  local_108 = 0;
  local_100 = 0;
  FUN_144927ad4(lVar9,local_a8,&local_88,0);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624b21a FUN_14624b21a body=40 status=ok
// SIG undefined FUN_14624b21a(void)

undefined8 FUN_14624b21a(undefined8 param_1,int param_2)

{
  FUN_141692ee4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14624b24e FUN_14624b24e body=1795 status=ok
// SIG undefined FUN_14624b24e(void)

undefined8 * FUN_14624b24e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b6ab920;
  param_1[0x72] = &PTR_FUN_14b6abfa0;
  param_1[0x73] = &PTR_FUN_14b6abfc0;
  param_1[0x74] = &PTR_FUN_14b6abff0;
  param_1[0x75] = &PTR_FUN_14b6ac000;
  param_1[0x76] = &PTR_FUN_14b6ac070;
  param_1[0x77] = &PTR_FUN_14b6ac0a0;
  param_1[0x78] = &PTR_FUN_14b6ac0d0;
  param_1[0x7f] = &PTR_FUN_14b6ac180;
  param_1[0x80] = &PTR_FUN_14b6ac1f0;
  param_1[0x81] = &PTR_FUN_14b6ac260;
  param_1[0x82] = &PTR_FUN_14b6ac290;
  param_1[0x83] = &PTR_FUN_14b6ac2d0;
  param_1[0x84] = &PTR_FUN_14b6ac370;
  param_1[0x85] = &PTR_FUN_14b6ac390;
  param_1[0x89] = &PTR_FUN_14b6ac3b0;
  param_1[0x8a] = &PTR_FUN_14b6ac470;
  param_1[0x8b] = &PTR_FUN_14b6ac4f0;
  param_1[0x8c] = &PTR_FUN_14b6ac540;
  param_1[0x8d] = &PTR_FUN_14b6ac580;
  param_1[0x8e] = &PTR_FUN_14b6ac5a0;
  param_1[0x8f] = &PTR_FUN_14b6ac5c0;
  param_1[0x90] = &PTR_FUN_14b6ac5e0;
  param_1[0x91] = &PTR_FUN_14b6ac600;
  param_1[0x92] = &PTR_FUN_14b6ac620;
  param_1[0x93] = &PTR_FUN_14b6ac640;
  param_1[0x94] = &PTR_FUN_14b6ac660;
  param_1[0x95] = &PTR_FUN_14b6ac680;
  param_1[0x96] = &PTR_FUN_14b6ac6a0;
  param_1[0x34b] = &PTR_FUN_14b6ac6c0;
  param_1[0x352] = &PTR_FUN_14b6ac6d0;
  param_1[0x353] = &PTR_FUN_14b6ac710;
  param_1[0x354] = &PTR_FUN_14b6ac750;
  param_1[0x355] = &PTR_FUN_14b6ac7a0;
  param_1[0x356] = &PTR_FUN_14b6ac7d0;
  param_1[0x359] = &PTR_FUN_14b6ac810;
  param_1[0x35a] = &PTR_FUN_14b6ac820;
  param_1[0x35b] = &PTR_FUN_14b6ac850;
  param_1[0x35c] = &PTR_FUN_14b6ac8f0;
  param_1[0x4bf] = &PTR_FUN_14b6ac910;
  param_1[0x4c0] = &PTR_FUN_14b6ac940;
  param_1[0x4c1] = &PTR_FUN_14b6ac960;
  param_1[0x4c2] = &PTR_FUN_14b6ac990;
  FUN_1411c3dfa(param_1 + 0x4c4);
  param_1[0x4c4] = &PTR_FUN_14b6aed70;
  param_1[0x512] = 0;
  *(undefined4 *)(param_1 + 0x513) = 0;
  param_1[0x508] = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  param_1[0x50b] = 0;
  param_1[0x50c] = 0;
  param_1[0x50d] = 0;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x289c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28a4) = 0;
  param_1[0x516] = 0;
  *(undefined4 *)(param_1 + 0x517) = 0;
  param_1[0x51c] = 0;
  *(undefined4 *)(param_1 + 0x51d) = 0;
  param_1[0x518] = 0;
  param_1[0x519] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28f4) = 0;
  param_1[0x520] = 0;
  *(undefined4 *)(param_1 + 0x521) = 0;
  param_1[0x526] = 0;
  *(undefined4 *)(param_1 + 0x527) = 0;
  param_1[0x522] = 0;
  param_1[0x523] = 0;
  *(undefined8 *)((longlong)param_1 + 0x293c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2944) = 0;
  param_1[0x52a] = 0;
  *(undefined4 *)(param_1 + 0x52b) = 0;
  param_1[0x530] = 0;
  *(undefined4 *)(param_1 + 0x531) = 0;
  param_1[0x52c] = 0;
  param_1[0x52d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x298c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2994) = 0;
  param_1[0x534] = 0;
  *(undefined4 *)(param_1 + 0x535) = 0;
  param_1[0x53a] = 0;
  *(undefined4 *)(param_1 + 0x53b) = 0;
  param_1[0x536] = 0;
  param_1[0x537] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29e4) = 0;
  param_1[0x53e] = 0;
  *(undefined4 *)(param_1 + 0x53f) = 0;
  param_1[0x544] = 0;
  param_1[0x545] = 0;
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  param_1[0x540] = 0;
  param_1[0x541] = 0;
  *(undefined4 *)(param_1 + 0x546) = 2;
  param_1[0x558] = 0;
  *(undefined4 *)(param_1 + 0x559) = 0;
  param_1[0x54c] = 0;
  param_1[0x54d] = 0;
  param_1[0x54e] = 0;
  param_1[0x54f] = 0;
  param_1[0x550] = 0;
  param_1[0x551] = 0;
  param_1[0x552] = 0;
  param_1[0x553] = 0;
  param_1[0x554] = 0;
  param_1[0x555] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2acc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ad4) = 0;
  param_1[0x55c] = 0;
  *(undefined4 *)(param_1 + 0x55d) = 0;
  param_1[0x562] = 0;
  param_1[0x560] = 0;
  param_1[0x561] = 0;
  param_1[0x55e] = 0;
  param_1[0x55f] = 0;
  param_1[0x563] = 0xf;
  *(undefined2 *)(param_1 + 0x564) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2b24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b2c) = 0;
  param_1[0x56a] = 0;
  param_1[0x56b] = 0;
  param_1[0x567] = 0;
  param_1[0x568] = 0;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b64) = 0;
  *(undefined4 *)(param_1 + 0x56d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b6c) = 0x3ff00000;
  param_1[0x570] = 0;
  param_1[0x571] = 0;
  param_1[0x56e] = 0;
  param_1[0x56f] = 0;
  *(undefined4 *)(param_1 + 0x572) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b94) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x573) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b9c) = 0x3ff00000;
  param_1[0x574] = 0x3ff0000000000000;
  param_1[0x575] = 0;
  param_1[0x576] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x577) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2bbc) = 0;
  param_1[0x57a] = 0;
  param_1[0x57b] = 0xffffffffffffffff;
  param_1[0x57c] = 0;
  param_1[0x57d] = 0;
  param_1[0x57e] = 0xffffffffffffffff;
  param_1[0x582] = 0;
  *(undefined4 *)(param_1 + 0x581) = 0;
  param_1[0x57f] = 0;
  param_1[0x580] = 0;
  *(undefined2 *)(param_1 + 0x583) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x2c96) = 0;
  param_1[0x58c] = 0;
  param_1[0x58d] = 0;
  param_1[0x58a] = 0;
  param_1[0x58b] = 0;
  param_1[0x588] = 0;
  param_1[0x589] = 0;
  param_1[0x586] = 0;
  param_1[0x587] = 0;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
  *(undefined2 *)((longlong)param_1 + 0x2c8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c8e) = 0;
  *(byte *)((longlong)param_1 + 0x1d39) = *(byte *)((longlong)param_1 + 0x1d39) | 1;
  *(undefined4 *)(param_1 + 0x58e) = 0;
  *(undefined4 *)(param_1 + 0x591) = 0;
  param_1[0x58f] = 0;
  param_1[0x590] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c8f) = 0;
  FUN_1446f470e(&local_28,L"Terminal Area",1);
  uVar1 = FUN_1400b5618();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x58b] = lVar2;
  FUN_140486fc4(lVar2,param_1[0x39],0);
  FUN_1446f470e(&local_30,L"Barrier",1);
  uVar1 = FUN_14088b378();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x58c] = lVar2;
  FUN_140486fc4(lVar2,param_1[0x39],0);
  FUN_1446f470e(&local_38,L"DomeBarrier",1);
  uVar1 = FUN_140f974a4();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x58d] = lVar2;
  FUN_140486fc4(lVar2,param_1[0x39],0);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = FUN_1447210f0(param_1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x152) != '\x02')) {
      FUN_140c4b7f0(param_1 + 0x544,param_1 + 0x4c0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624b952 FUN_14624b952 body=156 status=ok
// SIG undefined FUN_14624b952(void)

bool FUN_14624b952(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14624b9f0 FUN_14624b9f0 body=752 status=ok
// SIG undefined FUN_14624b9f0(void)

void FUN_14624b9f0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar7 = FUN_144729dda(param_1 + 200);
  if (cVar7 == '\0') goto LAB_14624bc1b;
  local_78 = local_78 & 0xffffffffffffff00;
  local_50 = 0;
  FUN_1405833e0(&local_78,param_1 + 200);
  plVar9 = (longlong *)FUN_1447262c2(&local_78);
  if (plVar9 != (longlong *)0x0) {
    uVar10 = FUN_140da3b08();
    lVar11 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
    if (lVar11 != 0) {
      uVar10 = FUN_140da3b08();
      lVar12 = FUN_144718840(lVar11,uVar10);
      if (lVar11 != lVar12) {
        FUN_144a5ac3a(&local_78);
        if (lVar12 == 0) goto LAB_14624bc1b;
        FUN_1402815f4(param_1,&local_78);
        lVar11 = *(longlong *)(local_78 + 0xb0);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x88));
        plVar9 = uStack_70;
        *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
        if (uStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_70)(uStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        FUN_140e96cb2();
        local_80 = (&DAT_14cbc82a0)[param_2];
        FUN_1400021e4(&local_80,&local_78);
        uVar4 = local_78;
        uVar8 = (int)uStack_70 - 1;
        if ((int)uStack_70 == 0) {
          uVar8 = 0;
        }
        if (0 < (int)uVar8) {
          uVar13 = 0;
          do {
            uVar3 = *(ushort *)(local_78 + uVar13 * 2);
            *(ushort *)(local_78 + uVar13 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
            uVar13 = uVar13 + 1;
          } while (uVar8 != uVar13);
        }
        if (param_2 == 4) {
          FUN_1400b22c2(&local_78,"electric");
          if ((ulonglong *)(lVar11 + 0x68) == &local_78) goto LAB_14624bbfc;
          if (*(longlong *)(lVar11 + 0x68) != 0) {
            FUN_1400020a8();
          }
          *(ulonglong *)(lVar11 + 0x68) = local_78;
          local_78 = 0;
          *(int *)(lVar11 + 0x70) = (int)uStack_70;
          *(undefined4 *)(lVar11 + 0x74) = uStack_70._4_4_;
        }
        else {
          FUN_140e96cb2();
          local_80 = (&DAT_14cbc82a0)[param_2];
          FUN_1400021e4(&local_80,&local_78);
          uVar13 = local_78;
          iVar5 = (int)uStack_70;
          uVar8 = (int)uStack_70 - 1;
          if ((int)uStack_70 == 0) {
            uVar8 = 0;
          }
          if (0 < (int)uVar8) {
            uVar14 = 0;
            do {
              uVar3 = *(ushort *)(local_78 + uVar14 * 2);
              *(ushort *)(local_78 + uVar14 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
              uVar14 = uVar14 + 1;
            } while (uVar8 != uVar14);
          }
          uVar6 = uStack_70._4_4_;
          local_78 = 0;
          uStack_70 = (longlong *)0x0;
          if (*(longlong *)(lVar11 + 0x68) == 0) {
            *(ulonglong *)(lVar11 + 0x68) = uVar13;
            *(int *)(lVar11 + 0x70) = iVar5;
            *(undefined4 *)(lVar11 + 0x74) = uVar6;
          }
          else {
            FUN_1400020a8();
            *(ulonglong *)(lVar11 + 0x68) = uVar13;
            *(int *)(lVar11 + 0x70) = iVar5;
            *(undefined4 *)(lVar11 + 0x74) = uVar6;
LAB_14624bbfc:
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
        }
        if (uVar4 != 0) {
          FUN_1400020a8(uVar4);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x88));
        goto LAB_14624bc1b;
      }
    }
  }
  FUN_144a5ac3a(&local_78);
LAB_14624bc1b:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624bce2 FUN_14624bce2 body=273 status=ok
// SIG undefined FUN_14624bce2(void)

undefined8 FUN_14624bce2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (lVar3 != 0) {
    lVar5 = FUN_144a74fb4();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && (lVar3 = *(longlong *)(lVar3 + 0xae8), lVar3 != 0)) {
      lVar5 = FUN_1407831c2();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        uVar6 = FUN_14001cc68(0x68,0x10);
        local_28 = *param_2;
        plVar4 = (longlong *)param_2[1];
        local_20 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          FUN_14624bdf4(uVar6,&local_28);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_14624bdf4(uVar6);
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
        goto LAB_14624bda7;
      }
    }
  }
  uVar6 = 0;
LAB_14624bda7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624bdf4 FUN_14624bdf4 body=185 status=ok
// SIG undefined FUN_14624bdf4(void)

undefined8 * FUN_14624bdf4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_140e18e3c(param_1,&local_30);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *param_1 = &PTR_FUN_14b4a8dd0;
  param_1[10] = *param_2;
  lVar3 = param_2[1];
  param_1[0xb] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0xc] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624beae FUN_14624beae body=1237 status=ok
// SIG undefined FUN_14624beae(void)

void FUN_14624beae(longlong *param_1,char param_2,float param_3,longlong *param_4,float *param_5,
                  int *param_6,int *param_7,longlong *param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0.0 <= *param_5) {
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  fVar8 = *param_5;
  if (fVar6 <= *param_5) {
    fVar8 = fVar6;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *param_5 = fVar8;
  if (param_3 < 0.0) {
    pfVar4 = (float *)(param_7 + 1);
    if ((longlong)*param_6 != -1) {
      if ((float)param_6[1] <= param_3) {
LAB_14624c2e1:
        (**(code **)(*param_1 + 0x2b0))(param_1);
        fVar8 = (float)FUN_1447c7e44(*param_5 + param_3);
        *param_5 = fVar8;
        if (fVar8 < 0.0) {
          fVar8 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
          *param_5 = fVar8 + *param_5;
        }
        param_6[1] = (int)((float)param_6[1] - param_3);
        goto LAB_14624c0aa;
      }
      puVar3 = (undefined8 *)((longlong)*param_6 * 0xc + param_1[0x30]);
LAB_14624c115:
      *param_5 = *(float *)(puVar3 + 1);
      param_3 = param_3 - (float)param_6[1];
      *param_7 = *param_6;
      param_7[1] = 0;
      iVar1 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar1 + 1U) {
        FUN_14624c384(param_8,iVar1);
      }
      lVar2 = *param_8;
      lVar5 = (longlong)iVar1 * 0xc;
      *(undefined8 *)(lVar2 + lVar5) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
      *(undefined8 *)(*param_8 + lVar5) = *puVar3;
      *(float *)(*param_8 + 8 + lVar5) = param_3;
      fVar8 = 0.0;
      while (iVar1 = *param_6, *param_6 = iVar1 + -1, 0 < iVar1) {
LAB_14624c193:
        if ((longlong)(int)param_4[1] != 0) {
          lVar2 = (longlong)*param_6;
          lVar5 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar5) == *(longlong *)(param_1[0x30] + lVar2 * 0xc)) {
              if (*param_6 == -1) goto LAB_14624c34b;
              fVar8 = (fVar8 + *(float *)(param_1[0x30] + 8 + lVar2 * 0xc)) - *param_5;
              param_6[1] = (int)fVar8;
              puVar3 = (undefined8 *)(lVar2 * 0xc + param_1[0x30]);
              if (fVar8 <= param_3) goto LAB_14624c2e1;
              goto LAB_14624c115;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)param_4[1] * 8 != lVar5);
        }
      }
      if (param_2 != '\0') {
        *param_6 = (int)param_1[0x31] + -1;
        fVar6 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        fVar8 = fVar8 - fVar6;
        goto LAB_14624c193;
      }
      *param_6 = -1;
LAB_14624c34b:
      fVar8 = *param_5;
    }
    param_3 = param_3 + fVar8;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    *param_5 = param_3;
    param_6[1] = (int)param_3;
    param_3 = *param_5 - fVar8;
  }
  else {
    pfVar4 = (float *)(param_6 + 1);
    if ((longlong)*param_7 != -1) {
      if (param_3 < (float)param_7[1] || param_3 == (float)param_7[1]) {
LAB_14624c06c:
        (**(code **)(*param_1 + 0x2b0))(param_1);
        fVar8 = (float)FUN_1447c7e44(*param_5 + param_3);
        *param_5 = fVar8;
        if (fVar8 < 0.0) {
          fVar8 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
          *param_5 = fVar8 + *param_5;
        }
        param_7[1] = (int)((float)param_7[1] - param_3);
        goto LAB_14624c0aa;
      }
      puVar3 = (undefined8 *)((longlong)*param_7 * 0xc + param_1[0x30]);
LAB_14624bf76:
      *param_5 = *(float *)(puVar3 + 1);
      param_3 = param_3 - (float)param_7[1];
      *param_6 = *param_7;
      param_6[1] = 0;
      iVar1 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar1 + 1U) {
        FUN_14624c384(param_8,iVar1);
      }
      lVar2 = *param_8;
      lVar5 = (longlong)iVar1 * 0xc;
      *(undefined8 *)(lVar2 + lVar5) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
      *(undefined8 *)(*param_8 + lVar5) = *puVar3;
      *(float *)(*param_8 + 8 + lVar5) = param_3;
      fVar8 = 0.0;
      while (iVar1 = *param_7, *param_7 = iVar1 + 1, iVar1 + 1 < (int)param_1[0x31]) {
LAB_14624c004:
        if ((longlong)(int)param_4[1] != 0) {
          lVar2 = (longlong)*param_7;
          lVar5 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar5) == *(longlong *)(param_1[0x30] + lVar2 * 0xc)) {
              if (*param_7 == -1) goto LAB_14624c299;
              fVar8 = (fVar8 + *(float *)(param_1[0x30] + 8 + lVar2 * 0xc)) - *param_5;
              param_7[1] = (int)fVar8;
              puVar3 = (undefined8 *)(lVar2 * 0xc + param_1[0x30]);
              if (fVar8 < param_3) goto LAB_14624bf76;
              goto LAB_14624c06c;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)param_4[1] * 8 != lVar5);
        }
      }
      if (param_2 != '\0') {
        *param_7 = 0;
        fVar8 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
        goto LAB_14624c004;
      }
      *param_7 = -1;
LAB_14624c299:
      fVar8 = *param_5;
    }
    fVar7 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    fVar6 = param_3 + *param_5;
    if (fVar7 <= param_3 + *param_5) {
      fVar6 = fVar7;
    }
    *param_5 = fVar6;
    fVar6 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    param_7[1] = (int)(fVar6 - *param_5);
    param_3 = *param_5 - fVar8;
  }
LAB_14624c0aa:
  *pfVar4 = *pfVar4 - param_3;
  return;
}



// FUNCTION 14624c384 FUN_14624c384 body=147 status=ok
// SIG undefined FUN_14624c384(void)

void FUN_14624c384(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14624c418 FUN_14624c418 body=493 status=ok
// SIG undefined FUN_14624c418(void)

void FUN_14624c418(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_2c;
  FUN_14624c606(local_18,local_20,local_24,local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624c606 FUN_14624c606 body=82 status=ok
// SIG undefined FUN_14624c606(void)

void FUN_14624c606(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140d4a076();
  if (lVar1 != 0) {
    FUN_141693cd8(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 14624c658 FUN_14624c658 body=254 status=ok
// SIG undefined FUN_14624c658(void)

void FUN_14624c658(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbe7978) && (FUN_144b3d300(&DAT_14cbe7978), DAT_14cbe7978 == -1)) {
    FUN_1446ddc76(&DAT_14cbe7970,"MaxCharges",1);
    _Init_thread_footer(&DAT_14cbe7978);
  }
  if (*param_3 == DAT_14cbe7970) {
    if ((*(longlong *)(param_1 + 0x3e0) != *param_2) ||
       (*(int *)(param_1 + 1000) != (int)param_2[1])) {
      *(longlong *)(param_1 + 0x3e0) = *param_2;
      *(int *)(param_1 + 1000) = (int)param_2[1];
      *(undefined8 *)(param_1 + 0x3f0) = 0;
    }
  }
  else {
    local_38 = *param_2;
    local_30 = (undefined4)param_2[1];
    local_28 = 0;
    FUN_1416941d8(param_1,&local_38,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624c758 FUN_14624c758 body=489 status=ok
// SIG undefined FUN_14624c758(void)

void FUN_14624c758(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0xb8);
    lVar7 = *(longlong *)(lVar2 + 0xf8);
    lVar6 = (longlong)*(int *)(lVar2 + 0xb4) * 0x10;
    plVar4 = *(longlong **)(lVar7 + lVar6);
    if (plVar3 != plVar4) {
      *(longlong **)(lVar2 + 0xb8) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(lVar2 + 0xc0) = *(undefined4 *)(lVar7 + lVar6 + 8);
    plVar3 = *(longlong **)(lVar2 + 200);
    lVar7 = *(longlong *)(lVar2 + 0x108);
    lVar6 = (longlong)*(int *)(lVar2 + 0xb4) * 0x10;
    plVar4 = *(longlong **)(lVar7 + lVar6);
    if (plVar3 != plVar4) {
      *(longlong **)(lVar2 + 200) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)(lVar2 + 0xd0) = *(undefined4 *)(lVar7 + lVar6 + 8);
    lVar7 = (longlong)*(int *)(lVar2 + 0xb4) * 0x10;
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x118) + 8 + lVar7);
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(lVar2 + 0xd8,*(undefined8 *)(*(longlong *)(lVar2 + 0x118) + lVar7),iVar8);
    lVar7 = (longlong)*(int *)(lVar2 + 0xb4) * 0x10;
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x128) + 8 + lVar7);
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(lVar2 + 0xe8,*(undefined8 *)(*(longlong *)(lVar2 + 0x128) + lVar7),iVar8);
    if (*(int *)(lVar2 + 0xb4) == *(int *)(lVar2 + 0x110) + -1) {
      FUN_144a787a6(lVar2 + 0x138,&DAT_14cbe5af8);
      FUN_144a787a6(lVar2 + 0x158,param_1 + 0x2c0);
      FUN_14020fad6(lVar2 + 0x148,&DAT_149dfb77a);
      FUN_14020fad6(lVar2 + 0x168,&DAT_149dfb77a);
    }
    else {
      FUN_144a787a6(lVar2 + 0x138,&DAT_14cbe5ae8);
      FUN_144a787a6(lVar2 + 0x158,param_1 + 0x2c0);
      FUN_144a787a6(lVar2 + 0x148,&DAT_14cbe5ad8);
      FUN_144a787a6(lVar2 + 0x168,param_1 + 0x2b0);
    }
    puVar5 = *(ushort **)(lVar2 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 14624c942 FUN_14624c942 body=2194 status=ok
// SIG undefined FUN_14624c942(void)

/* WARNING: Removing unreachable block (ram,0x00014624d15d) */

void FUN_14624c942(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  void *local_b0;
  uint local_a8;
  undefined4 local_a4;
  int local_9c;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar4 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b0 = (void *)0x0;
  local_a8 = *(uint *)(param_2 + 0x230);
  lVar14 = (longlong)(int)local_a8;
  pvVar3 = *(void **)(param_2 + 0x228);
  if (lVar14 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_a8,0);
    memcpy(local_b0,pvVar3,lVar14 * 2);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  iVar12 = (int)param_3[1];
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iVar12 != 0) {
    FUN_1408be2c4(&local_c8);
    lVar14 = param_3[1];
    if ((longlong)(int)lVar14 != 0) {
      local_140 = *param_3;
      lVar11 = 0;
      do {
        local_98 = (void *)0x0;
        uVar8 = *(uint *)(local_140 + 0x10 + lVar11);
        pvVar3 = *(void **)(local_140 + 8 + lVar11);
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
        if ((longlong)(int)uVar8 == 0) {
          uStack_90 = (ulonglong)uVar8;
        }
        else {
          FUN_1446dd670(&local_98,uVar8,0);
          memcpy(local_98,pvVar3,(longlong)(int)uVar8 * 2);
        }
        lVar9 = (longlong)(int)uStack_c0;
        uVar8 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar8);
        if (uStack_c0._4_4_ < uVar8) {
          FUN_1447a1bd6(&local_c8);
        }
        lVar9 = lVar9 * 0x10;
        *(undefined8 *)(local_c8 + lVar9) = 0;
        *(void **)(local_c8 + lVar9) = local_98;
        local_98 = (void *)0x0;
        *(undefined4 *)(local_c8 + 8 + lVar9) = (undefined4)uStack_90;
        *(undefined4 *)(local_c8 + 0xc + lVar9) = uStack_90._4_4_;
        uStack_90 = 0;
        lVar11 = lVar11 + 0x40;
      } while ((longlong)(int)lVar14 * 0x40 != lVar11);
    }
  }
  if (((*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x140) == 0) ||
      (plVar10 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x138),
      plVar10 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar10 + 0x30))(), cVar7 == '\0')) {
    pvVar3 = local_b0;
    local_98 = (void *)0x0;
    lVar14 = (longlong)(int)local_a8;
    uStack_90 = CONCAT44(uStack_90._4_4_,local_a8);
    if (lVar14 == 0) {
      uStack_90 = (ulonglong)local_a8;
    }
    else {
      FUN_1446dd670(&local_98,local_a8,0);
      memcpy(local_98,pvVar3,lVar14 * 2);
    }
    local_88 = 0;
    iVar12 = (int)param_3[1];
    lVar14 = *param_3;
    local_80 = iVar12;
    if (iVar12 == 0) {
      local_7c = 0;
    }
    else {
      FUN_145c496b4(&local_88,iVar12,0);
      FUN_14150193d(local_88,lVar14,iVar12);
    }
    local_78 = *param_4;
    *param_4 = 0;
    local_70 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_4 + 1) = 0;
    local_6c._0_5_ = CONCAT14(param_5,(undefined4)local_6c);
    local_138 = (undefined8 *)0x0;
    local_130 = 0;
    FUN_1446efa72(&local_138,0,5,0x10);
    iVar12 = local_80;
    uVar5 = local_88;
    puVar13 = local_138;
    local_130 = 5;
    *local_138 = &PTR_LAB_14b5072b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_138[2] = lVar11;
    *local_138 = &PTR_FUN_14b5062f0;
    local_138[3] = local_98;
    local_98 = (void *)0x0;
    *(undefined4 *)(local_138 + 4) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)local_138 + 0x24) = uStack_90._4_4_;
    uStack_90 = 0;
    local_138[5] = 0;
    *(int *)(local_138 + 6) = local_80;
    if (local_80 == 0) {
      *(undefined4 *)((longlong)local_138 + 0x34) = 0;
    }
    else {
      puVar2 = local_138 + 5;
      FUN_145c496b4(puVar2,local_80,0);
      FUN_14150193d(*puVar2,uVar5,iVar12);
    }
    puVar13[7] = local_78;
    local_78 = 0;
    *(undefined4 *)(puVar13 + 8) = local_70;
    local_70 = 0;
    *(undefined1 *)(puVar13 + 9) = local_6c._4_1_;
    FUN_143f66eec(uVar4,&local_c8,&local_138);
    FUN_143f67670(&local_98);
    goto LAB_14624cca5;
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_128 = param_1;
  if ((longlong)(int)param_3[1] == 0) {
    lVar14 = *(longlong *)(DAT_14cb98ab0 + 0x28);
    puVar13 = (undefined8 *)(lVar14 + 0x138);
    local_118 = 0;
LAB_14624ca9f:
    local_120 = 0;
    local_114 = 0;
  }
  else {
    lVar14 = *param_3;
    lVar11 = (longlong)(int)param_3[1] << 6;
    do {
      FUN_1418c0cf6(&local_128,lVar14);
      local_d8 = &local_120;
      FUN_148ac7870(&local_98,&local_9c,&local_d8);
      iVar12 = (int)local_108 + -1;
      if ((int)local_108 == 0) {
        iVar12 = 0;
      }
      FUN_1402980a2((longlong)local_98 + (longlong)local_9c * 0x28 + 0x10,local_110,iVar12);
      FUN_1418bf7c0(&local_128);
      lVar14 = lVar14 + 0x40;
      lVar11 = lVar11 + -0x40;
    } while (lVar11 != 0);
    iVar12 = (int)param_3[1];
    lVar11 = *param_3;
    lVar14 = *(longlong *)(DAT_14cb98ab0 + 0x28);
    puVar13 = (undefined8 *)(lVar14 + 0x138);
    local_120 = 0;
    local_118 = iVar12;
    if (iVar12 == 0) goto LAB_14624ca9f;
    FUN_145c496b4(&local_120,iVar12,0);
    FUN_14150193d(local_120,lVar11,iVar12);
  }
  uVar6 = uStack_c0;
  lVar11 = local_c8;
  local_110 = 0;
  local_108 = CONCAT44(local_108._4_4_,(int)uStack_c0);
  if ((int)uStack_c0 == 0) {
    local_108 = uStack_c0 & 0xffffffff;
  }
  else {
    FUN_140b856de(&local_110,uStack_c0 & 0xffffffff,0);
    FUN_140b8566a(local_110,lVar11,uVar6 & 0xffffffff);
  }
  pvVar3 = local_b0;
  local_100 = (void *)0x0;
  lVar11 = (longlong)(int)local_a8;
  local_f8 = CONCAT44(local_f8._4_4_,local_a8);
  if (lVar11 == 0) {
    local_f8 = (ulonglong)local_a8;
  }
  else {
    FUN_1446dd670(&local_100,local_a8,0);
    memcpy(local_100,pvVar3,lVar11 * 2);
  }
  local_f0 = *param_4;
  *param_4 = 0;
  local_e8 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_e0 = param_5;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,7,0x10);
  puVar2 = local_d8;
  iVar12 = local_118;
  uVar5 = local_120;
  local_d0 = 7;
  *local_d8 = &PTR_LAB_14b506210;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_d8[2] = lVar9;
  *local_d8 = &PTR_FUN_14b5061a0;
  local_d8[3] = local_128;
  local_d8[4] = 0;
  *(int *)(local_d8 + 5) = local_118;
  if (local_118 == 0) {
    *(undefined4 *)((longlong)local_d8 + 0x2c) = 0;
  }
  else {
    puVar1 = local_d8 + 4;
    FUN_145c496b4(puVar1,local_118,0);
    FUN_14150193d(*puVar1,uVar5,iVar12);
  }
  puVar2[6] = local_110;
  plVar10 = (longlong *)0x0;
  local_110 = 0;
  *(int *)(puVar2 + 7) = (int)local_108;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = local_108._4_4_;
  local_108 = 0;
  puVar2[8] = local_100;
  local_100 = (void *)0x0;
  *(undefined4 *)(puVar2 + 9) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = local_f8._4_4_;
  local_f8 = 0;
  puVar2[10] = local_f0;
  local_f0 = 0;
  *(undefined4 *)(puVar2 + 0xb) = local_e8;
  local_e8 = 0;
  *(undefined1 *)(puVar2 + 0xc) = local_e0;
  if (*(int *)(lVar14 + 0x140) != 0) {
    plVar10 = (longlong *)*puVar13;
  }
  (**(code **)(*plVar10 + 0x58))(plVar10,uVar4,&local_98,&local_d8);
  FUN_1449db362(&local_d8);
  FUN_141694818(&local_128);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
LAB_14624cca5:
  FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624d1d6 FUN_14624d1d6 body=186 status=ok
// SIG undefined FUN_14624d1d6(void)

void FUN_14624d1d6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1416948b4(param_1,(char)param_2,1);
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    local_28 = *param_2;
    lVar2 = FUN_14050aea0();
    param_2[2] = lVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x23d0);
  if (lVar1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x23c0);
    lVar1 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x23d0) = lVar1;
  }
  if ((lVar1 != 0 && lVar2 != lVar1) &&
     ((lVar2 == 0 || (*(longlong *)(lVar2 + 0x1b0) != *(longlong *)(lVar1 + 0x1b0))))) {
    FUN_145ac041a(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624d298 FUN_14624d298 body=167 status=ok
// SIG undefined FUN_14624d298(void)

void FUN_14624d298(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_2c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28,local_2c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624d340 FUN_14624d340 body=775 status=ok
// SIG undefined FUN_14624d340(void)

void FUN_14624d340(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  float fVar2;
  ushort *puVar3;
  double dVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  lVar5 = FUN_140391552();
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    *puVar6 = &PTR_FUN_14b9c6ed8;
    puVar6[1] = *param_2;
    lVar8 = 0x14;
    do {
      *(undefined1 *)((longlong)puVar6 + lVar8 + -4) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar8) = 0;
      ((undefined8 *)((longlong)puVar6 + lVar8))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar6 + lVar8 + 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar6 + lVar8 + 0x30) = 0;
      lVar8 = lVar8 + 0x38;
    } while (lVar8 != 0xbc);
    *(int *)((longlong)puVar6 + 0x14) = param_3;
    FUN_14039144e(lVar5,puVar6);
  }
  dVar4 = DAT_14c846328;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 == 0) {
    return;
  }
  if (*param_2 == DAT_14cbe0ca0) {
    fVar2 = *(float *)(lVar5 + 0x130);
    iVar7 = *(int *)(lVar5 + 0x134);
    switch(param_3) {
    case 1:
      if ((fVar2 != 0.25) || (NAN(fVar2))) {
        iVar7 = iVar7 + 1;
      }
      else {
        if (iVar7 != 0) goto LAB_14624d49a;
        iVar7 = 1;
      }
      *(undefined4 *)(lVar5 + 0x130) = 0x3e800000;
      break;
    case 2:
      if ((fVar2 != 0.5) || (NAN(fVar2))) {
        iVar7 = iVar7 + 1;
      }
      else {
        if (iVar7 != 0) goto LAB_14624d49a;
        iVar7 = 1;
      }
      *(undefined4 *)(lVar5 + 0x130) = 0x3f000000;
      break;
    case 3:
      if ((fVar2 != 0.75) || (NAN(fVar2))) {
        iVar7 = iVar7 + 1;
      }
      else {
        if (iVar7 != 0) goto LAB_14624d49a;
        iVar7 = 1;
      }
      *(undefined4 *)(lVar5 + 0x130) = 0x3f400000;
      break;
    case 4:
      if ((fVar2 != 1.0) || (NAN(fVar2))) {
        iVar7 = iVar7 + 1;
      }
      else {
        if (iVar7 != 0) goto LAB_14624d49a;
        iVar7 = 1;
      }
      *(undefined4 *)(lVar5 + 0x130) = 0x3f800000;
      break;
    default:
      if ((fVar2 != 0.0) || (NAN(fVar2))) {
        iVar7 = iVar7 + 1;
      }
      else {
        if (iVar7 != 0) goto LAB_14624d49a;
        iVar7 = 1;
      }
      *(undefined4 *)(lVar5 + 0x130) = 0;
    }
    *(int *)(lVar5 + 0x134) = iVar7;
    goto LAB_14624d49a;
  }
  if (*param_2 != DAT_14cbe0ca8) {
    return;
  }
  if (param_3 == 1) {
    if ((((*(double *)(lVar5 + 0x160) == 1.100000023841858) && (!NAN(*(double *)(lVar5 + 0x160))))
        && (*(double *)(lVar5 + 0x168) == 1.100000023841858)) &&
       ((!NAN(*(double *)(lVar5 + 0x168)) && (*(int *)(lVar5 + 0x170) != 0)))) goto LAB_14624d49a;
    uVar9 = 0x3ff19999a0000000;
LAB_14624d486:
    *(undefined8 *)(lVar5 + 0x160) = uVar9;
    *(undefined8 *)(lVar5 + 0x168) = uVar9;
  }
  else {
    if (param_3 == 2) {
      if (((*(double *)(lVar5 + 0x160) == 1.2000000476837158) && (!NAN(*(double *)(lVar5 + 0x160))))
         && ((*(double *)(lVar5 + 0x168) == 1.2000000476837158 &&
             ((!NAN(*(double *)(lVar5 + 0x168)) && (*(int *)(lVar5 + 0x170) != 0))))))
      goto LAB_14624d49a;
      uVar9 = 0x3ff3333340000000;
      goto LAB_14624d486;
    }
    if ((DAT_14c846320 == *(double *)(lVar5 + 0x160)) &&
       (!NAN(DAT_14c846320) && !NAN(*(double *)(lVar5 + 0x160)))) {
      if ((DAT_14c846328 == *(double *)(lVar5 + 0x168)) &&
         ((!NAN(DAT_14c846328) && !NAN(*(double *)(lVar5 + 0x168)) && (*(int *)(lVar5 + 0x170) != 0)
          ))) goto LAB_14624d49a;
    }
    *(double *)(lVar5 + 0x160) = DAT_14c846320;
    *(double *)(lVar5 + 0x168) = dVar4;
  }
  *(int *)(lVar5 + 0x170) = *(int *)(lVar5 + 0x170) + 1;
LAB_14624d49a:
  puVar3 = *(ushort **)(lVar5 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 14624d648 FUN_14624d648 body=487 status=ok
// SIG undefined FUN_14624d648(void)

longlong * FUN_14624d648(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = (**(code **)(*(longlong *)*param_3 + 0x20))();
  if (lVar5 == 0) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    FUN_1407ae1a6(lVar5,&local_58,&DAT_14cb8c3a8);
    if (local_58 != 0) {
      if ((longlong)*(int *)(local_58 + 0x30) != 0) {
        lVar5 = *(longlong *)(local_58 + 0x28);
        lVar7 = (longlong)*(int *)(local_58 + 0x30) * 0x48;
        do {
          if (*(longlong *)(lVar5 + 0x18) == *(longlong *)(param_1 + 0x10)) {
            if (lVar5 != 0) {
              bVar8 = *(byte *)(lVar5 + 0x20);
              goto LAB_14624d6db;
            }
            break;
          }
          lVar5 = lVar5 + 0x48;
          lVar7 = lVar7 + -0x48;
        } while (lVar7 != 0);
      }
      bVar8 = 0;
LAB_14624d6db:
      bVar4 = *(byte *)(param_1 + 0x18);
      plVar6 = (longlong *)FUN_14001cc68(0x48,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14b4297d0;
      plVar1 = plVar6 + 2;
      plVar6[3] = 0;
      plVar6[4] = 0;
      *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
      *(byte *)(plVar6 + 7) = (bVar8 ^ bVar4 ^ 1) * '\x02';
      plVar6[2] = (longlong)&PTR_FUN_14b4297f0;
      *(byte *)(plVar6 + 8) = bVar4;
      local_68 = plVar1;
      local_60 = plVar6;
      FUN_14624d830(&local_68,plVar1);
      lVar5 = local_58;
      local_88 = &LAB_1489732d8;
      local_80 = 0;
      FUN_14624d8d2(local_78,&local_68);
      FUN_14109b102(lVar5,&local_88,(longlong *)(param_1 + 0x10),local_78);
      FUN_1449db362(local_78);
      plVar2 = local_60;
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      }
      goto LAB_14624d7b3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14624d7b3:
  plVar1 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624d830 FUN_14624d830 body=162 status=ok
// SIG undefined FUN_14624d830(void)

void FUN_14624d830(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14624d86f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14624d86f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14624d86f:
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
                    /* WARNING: Could not recover jumptable at 0x00014624d8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14624d8d2 FUN_14624d8d2 body=300 status=ok
// SIG undefined FUN_14624d8d2(void)

longlong * FUN_14624d8d2(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b42a8e0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429810;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a8e0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b429810;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14624d9fe FUN_14624d9fe body=85 status=ok
// SIG undefined FUN_14624d9fe(void)

void FUN_14624d9fe(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  FUN_144a63f30();
  uVar1 = (ulonglong)(*(int *)(param_1 + 0xd0) + -1 + (uint)(*(int *)(param_1 + 0xd0) == 0)) * 2 + 1
  ;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (DAT_14ca84e64 <= iVar4) {
    iVar4 = DAT_14ca84e64;
  }
  iVar3 = 8;
  if (8 < iVar4) {
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 0xd0) = iVar3;
  FUN_1416949d2(param_1);
  return;
}



// FUNCTION 14624da54 FUN_14624da54 body=68 status=ok
// SIG undefined FUN_14624da54(void)

void FUN_14624da54(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x2f8);
  memset(_Dst,0,0x2f8);
  FUN_1416950ee(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14624da98 FUN_14624da98 body=225 status=ok
// SIG undefined FUN_14624da98(void)

void FUN_14624da98(longlong *param_1,char param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140898514(param_1 + 0xd0);
  if (param_2 == '\0') {
    FUN_14144f736(param_1 + 0x40,&DAT_14cbca3b0,1);
    FUN_14144f736(param_1 + 0x40,&DAT_14cbca3c0,1);
    local_22 = 7;
  }
  else {
    bVar1 = (**(code **)(*param_1 + 0x498))(param_1);
    if (5 < bVar1) goto LAB_14624db5b;
    FUN_14144f736(param_1 + 0x40,&DAT_14cbca3b0,0);
    uVar2 = (**(code **)(*param_1 + 0x458))(param_1,0xffffffff);
    FUN_14144f736(param_1 + 0x40,&DAT_14cbca3b8,uVar2);
    local_21 = 6;
  }
  FUN_140627eda(param_1 + 0x40);
LAB_14624db5b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624db7a FUN_14624db7a body=323 status=ok
// SIG undefined FUN_14624db7a(void)

longlong * FUN_14624db7a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0xd8);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b419510;
  plVar1 = plVar4 + 2;
  memset(plVar4 + 3,0,0xa8);
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x74) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x7c) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b348f70;
  *(undefined4 *)(plVar4 + 0x14) = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  *(undefined4 *)(plVar4 + 0x17) = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  *(undefined2 *)(plVar4 + 0x13) = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1a] = 0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_14624dcc0(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624dcc0 FUN_14624dcc0 body=157 status=ok
// SIG undefined FUN_14624dcc0(void)

void FUN_14624dcc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14624dcfa;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14624dcfa;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14624dcfa:
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
                    /* WARNING: Could not recover jumptable at 0x00014624dd59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14624dd5e FUN_14624dd5e body=158 status=ok
// SIG undefined FUN_14624dd5e(void)

bool FUN_14624dd5e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 14624ddfe FUN_14624ddfe body=666 status=ok
// SIG undefined FUN_14624ddfe(void)

void FUN_14624ddfe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1449027d0(param_1,&local_60);
  lVar10 = *(longlong *)((longlong)local_60 + 0x410);
  SRWLock = (PSRWLOCK)(lVar10 + 0x1b0);
  AcquireSRWLockExclusive(SRWLock);
  plVar3 = (longlong *)CONCAT44(uStack_54,local_58);
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
  plVar3 = (longlong *)(lVar10 + 0x50);
  *(undefined4 *)(lVar10 + 0x58) = 0;
  if (*(int *)(lVar10 + 0x5c) != 0) {
    FUN_14481578e(plVar3,0);
  }
  if (*(char *)(lVar10 + 0x15a) == '\x01') {
    ReleaseSRWLockExclusive(SRWLock);
  }
  else {
    if ((longlong)(int)param_2[1] != 0) {
      lVar9 = (longlong)(int)param_2[1] * 0x18;
      lVar7 = *param_2 + 8;
      do {
        lVar8 = FUN_14479d2ce(lVar7);
        if (lVar8 != 0) {
          lVar8 = FUN_14479d2ce(lVar7);
          uVar5 = *(undefined8 *)(lVar8 + 0x30);
          iVar4 = *(int *)(lVar10 + 0x58);
          *(uint *)(lVar10 + 0x58) = iVar4 + 1U;
          if (*(uint *)(lVar10 + 0x5c) < iVar4 + 1U) {
            FUN_1446f48e2(plVar3,iVar4);
          }
          *(int *)(*plVar3 + (longlong)iVar4 * 4) =
               (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5;
        }
        lVar7 = lVar7 + 0x18;
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != 0);
    }
    pvVar6 = DAT_14cbd5bc0;
    local_60 = (void *)0x0;
    lVar9 = (longlong)DAT_14cbd5bc8;
    local_58 = DAT_14cbd5bc8;
    if (lVar9 == 0) {
      uStack_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,DAT_14cbd5bc8,0);
      memcpy(local_60,pvVar6,lVar9 * 2);
    }
    local_50 = 1;
    lVar9 = FUN_1400d7050(param_1 + 0x30);
    if (lVar9 != 0) {
      lVar7 = FUN_144a5dd5e();
      if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
         (lVar9 = FUN_140e16172(lVar9), pvVar6 = local_60, lVar9 != 0)) {
        if (*(int *)(lVar10 + 0x58) < 1) {
          FUN_140e1630e(lVar9);
        }
        else {
          local_78 = (void *)0x0;
          lVar10 = (longlong)local_58;
          local_70 = local_58;
          if (lVar10 == 0) {
            local_6c = 0;
          }
          else {
            FUN_1446dd670(&local_78,local_58,0);
            memcpy(local_78,pvVar6,lVar10 * 2);
          }
          local_68 = local_50;
          FUN_1410df722(lVar9);
        }
      }
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive(SRWLock);
    FUN_14624e09a(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624e09a FUN_14624e09a body=187 status=ok
// SIG undefined FUN_14624e09a(void)

void FUN_14624e09a(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_141169abc();
  if (lVar5 != 0) {
    FUN_1449027d0(param_1,&local_38);
    lVar3 = *(longlong *)(local_38 + 0x410);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
    *(int *)(lVar3 + 0x1a8) = *(int *)(lVar3 + 0x1a8) + 1;
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
    uVar4 = FUN_14624e156(lVar5,0);
    *(undefined4 *)(lVar3 + 0x110) = uVar4;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624e156 FUN_14624e156 body=435 status=ok
// SIG undefined FUN_14624e156(void)

uint FUN_14624e156(longlong param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar5 = param_1 + 1000;
  uVar3 = FUN_14479d2ce(lVar5);
  plVar4 = (longlong *)FUN_14041a931(uVar3);
  uVar9 = 0;
  uVar8 = 0;
  if (plVar4 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    cVar1 = FUN_144729dda(lVar5);
    if (cVar1 != '\0') {
      lVar5 = FUN_14479d2ce(lVar5);
      lVar5 = *(longlong *)(lVar5 + 0x398);
      if (lVar5 != 0) {
        if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x888))) {
          lVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x880) + (ulonglong)param_2 * 0x18 + 8);
          if (lVar6 != 0) {
            lVar7 = FUN_144a84b50();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              if (*(longlong *)(lVar6 + 200) != 0) {
                cVar1 = FUN_14041ad86(uVar3,lVar5);
                if (cVar1 != '\0') {
                  return 2;
                }
                bVar2 = FUN_14882d2c0(uVar3,lVar5,2);
                return (uint)bVar2;
              }
            }
          }
          lVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x880) + (ulonglong)param_2 * 0x18 + 8);
          if (lVar6 != 0) {
            lVar7 = FUN_14116e48a();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              lVar7 = FUN_14187eb96(lVar6);
              lVar6 = FUN_14479d2ce(lVar6 + 200);
              if (lVar7 == lVar6) {
                return 4;
              }
            }
          }
        }
        lVar6 = FUN_1447210f0(param_1);
        uVar9 = uVar8;
        if (((lVar6 != 0) && (*(char *)(param_1 + 0x858) == '\x01')) &&
           (*(char *)(param_1 + 0x878) == '\x01')) {
          bVar2 = FUN_14882d2c0(uVar3,lVar5,1);
          uVar9 = (uint)bVar2 + (uint)bVar2 * 2;
        }
      }
    }
  }
  return uVar9;
}



// FUNCTION 14624e30a FUN_14624e30a body=252 status=ok
// SIG undefined FUN_14624e30a(void)

longlong * FUN_14624e30a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)FUN_14624e408();
  if (0 < *(int *)(param_1 + 0x1e8)) {
    do {
      plVar5 = *(longlong **)(param_1 + 0x1e0);
      lVar3 = *plVar5;
      plVar4 = (longlong *)plVar5[1];
      if (plVar4 == (longlong *)0x0) {
        if (lVar3 != 0) {
          FUN_1493611f4(lVar3,local_30);
          goto LAB_14624e3d5;
        }
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        if (lVar3 == 0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) goto LAB_14624e38c;
          plVar5 = (longlong *)(**(code **)*plVar4)(plVar4);
        }
        else {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          FUN_1493611f4(lVar3,local_30);
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
LAB_14624e3d5:
          uVar6 = FUN_146153ef6();
          plVar5 = (longlong *)FUN_1492ecac8(uVar6,local_30);
          if (plVar4 != (longlong *)0x0) {
            plVar5 = (longlong *)(ulonglong)*(uint *)(plVar4 + 1);
          }
          if (local_30[0] != 0) {
            plVar5 = (longlong *)FUN_1400020a8();
          }
          if (plVar4 == (longlong *)0x0) goto LAB_14624e38c;
        }
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
LAB_14624e38c:
    } while (0 < *(int *)(param_1 + 0x1e8));
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 14624e408 FUN_14624e408 body=491 status=ok
// SIG undefined FUN_14624e408(void)

void FUN_14624e408(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14169591e(param_1,1);
  uVar4 = *(uint *)(param_1 + 0x1e8);
  if (0 < (int)uVar4) {
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + lVar8);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 8 + lVar8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (lVar6 != 0) {
        LOCK();
        *(undefined1 *)(lVar6 + 0x170) = 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
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
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)uVar4 << 4 != lVar8);
  }
  plVar3 = (longlong *)(param_1 + 0x148);
  lVar8 = param_1 + 0x158;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar7 = 0;
  local_50 = lVar8;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_1449c0562(&local_58);
    iVar7 = *(int *)(param_1 + 0x170);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar3;
  if ((iStack_44 != iVar7) || (local_50 != lVar8)) {
    do {
      if (*(int *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20) != 0) {
        plVar5 = *(longlong **)((longlong)iStack_64 * 0x20 + *local_80 + 8);
        lVar6 = *plVar5;
        plVar5 = (longlong *)plVar5[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          LOCK();
          *(undefined1 *)(lVar6 + 0x170) = 1;
          UNLOCK();
        }
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
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar7) || (local_70 != lVar8)) || (local_80 != plVar3));
  }
  *(undefined1 *)(param_1 + 0x3b0) = 1;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624e5f4 FUN_14624e5f4 body=283 status=ok
// SIG undefined FUN_14624e5f4(void)

void FUN_14624e5f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14030da5e(param_1,&local_30);
  AcquireSRWLockExclusive((PSRWLOCK)(local_30 + 0xa0));
  *(int *)(local_30 + 0x98) = *(int *)(local_30 + 0x98) + 1;
  if (*(char *)(local_30 + 0x20) == '\0') {
    if (*(int *)(local_30 + 0x24) != 0) goto LAB_14624e648;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(local_30 + 0x24) + 1;
  }
  *(undefined1 *)(local_30 + 0x20) = 0;
  *(int *)(local_30 + 0x24) = iVar3;
LAB_14624e648:
  ReleaseSRWLockExclusive((PSRWLOCK)(local_30 + 0xa0));
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
  uVar4 = (**(code **)(param_1[0x1ce] + 0x10))(param_1 + 0x1ce,&DAT_14cbcfb40);
  FUN_14169654e(uVar4,param_1,DAT_14cbcfa90);
  (**(code **)(*param_1 + 0x14b8))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014624e6cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x1b5] + 0x58))
              (param_1 + 0x1b5,param_1 + 0x1ec,*(code **)(param_1[0x1b5] + 0x58));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14624e710 FUN_14624e710 body=172 status=ok
// SIG undefined FUN_14624e710(void)

void FUN_14624e710(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_140f50f54();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140457ffc(param_2 + 0x2618,param_1);
      FUN_1410d9770(param_1,local_48);
      FUN_1447325ac(local_48,&local_50,1);
      FUN_14624e7be(param_2,local_50);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624e7be FUN_14624e7be body=311 status=ok
// SIG undefined FUN_14624e7be(void)

void FUN_14624e7be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70 [3];
  byte local_58;
  longlong local_50 [3];
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x27c0);
    if ((longlong)iVar2 != 0) {
      plVar1 = (longlong *)(param_1 + 0x27b8);
      plVar3 = *(longlong **)(param_1 + 0x27b8);
      lVar6 = 0;
      iVar4 = 0;
      do {
        if (*(longlong *)((longlong)plVar3 + lVar6) == param_2) {
          if (iVar4 < iVar2 && -1 < iVar4) {
            lVar6 = *plVar3;
            FUN_14584f588(local_50,plVar3 + 1);
            local_38 = '\x01';
            FUN_148cfaab6(plVar1,iVar4);
            FUN_148cfab0e(plVar1);
            local_58 = 0 < *(int *)(param_1 + 0x27c0);
            if ((bool)local_58) {
              lVar5 = *(longlong *)*plVar1;
              FUN_14584f588(local_70,(longlong *)*plVar1 + 1);
            }
            else {
              lVar5 = 0;
            }
            if (lVar6 != lVar5) {
              FUN_14584f6b2(param_1,local_70,local_50);
            }
            if (((local_58 & 1) != 0) && (local_70[0] != 0)) {
              FUN_1400020a8();
            }
            if ((local_38 == '\x01') && (local_50[0] != 0)) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x20;
      } while ((longlong)iVar2 << 5 != lVar6);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624e8f6 FUN_14624e8f6 body=422 status=ok
// SIG undefined FUN_14624e8f6(void)

void FUN_14624e8f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  code *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_b8 [8];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0xc30) == '\0') {
    cVar2 = FUN_141696f8c(param_1 + 0x558);
    if (cVar2 != '\0') {
      lVar3 = FUN_1447210f0(param_1);
      if (lVar3 != 0) {
        *(undefined8 *)(param_1 + 0xc00) = 0;
        lVar1 = param_1 + 0xc28;
        cVar2 = FUN_144729dda(lVar1);
        if (cVar2 != '\0') {
          uVar4 = FUN_14479d2ce(lVar1);
          FUN_140aeefbc(uVar4,0,1);
        }
        if (param_2 != 0) {
          *(undefined1 *)(param_1 + 0xc30) = 0;
          FUN_1411371f6(local_b8);
          uVar4 = FUN_141089c88();
          local_108 = local_b8;
          uVar4 = FUN_141137228(lVar3,uVar4,0,0);
          FUN_14485c47a(lVar1,uVar4);
          if (local_78 != 0) {
            if (local_68 == (longlong *)0x0) {
              local_68 = local_58;
            }
            (**(code **)(*local_68 + 0x10))();
          }
          cVar2 = FUN_144729dda(lVar1);
          if (cVar2 != '\0') {
            local_b8[0] = 0;
            FUN_14485c47a(local_b8,param_1);
            uVar4 = local_b8[0];
            lVar3 = FUN_14479d2ce(lVar1);
            *(undefined1 *)(lVar3 + 0x530) = 1;
            *(undefined8 *)(lVar3 + 0x534) = 0;
            uVar5 = FUN_14479d2ce(lVar1);
            local_e8 = 0;
            local_d8 = &PTR_LAB_14b974950;
            local_d0 = uVar4;
            local_f8 = FUN_1441646c6;
            local_c8 = param_2;
            FUN_140f6405a(uVar5,param_2 + 0x3f0);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624ea9e FUN_14624ea9e body=576 status=ok
// SIG undefined FUN_14624ea9e(void)

void FUN_14624ea9e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_3 + 0x94) < 0) || (*(int *)(param_1 + 0x78) <= *(int *)(param_3 + 0x94))) ||
      (*(int *)(param_3 + 0x80) != 1)) ||
     ((*(int *)(param_3 + 0x30) != 0 || ((*(byte *)(param_3 + 0x8c) & 2) != 0))))
  goto LAB_14624ebed;
  lVar9 = *(longlong *)(param_1 + -0xe0);
  if (lVar9 == 0) {
LAB_14624ec25:
    lVar9 = 0;
  }
  else {
    lVar5 = FUN_1408613c0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_14624ec25;
  }
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_3 + 0x94) * 0x18);
  lVar5 = plVar2[1];
  if (lVar5 == 0) {
    uVar8 = FUN_14012344a();
    lVar5 = FUN_14477b664(uVar8);
    plVar2[1] = lVar5;
  }
  if (plVar2[2] == 0) {
    if ((lVar5 == 0) || (*plVar2 == 0)) goto LAB_14624ebed;
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      plVar2[2] = 0;
      goto LAB_14624ebed;
    }
    uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar5 = FUN_144aff482(uVar8,plVar2);
    plVar2[2] = lVar5;
    if (lVar5 == 0) goto LAB_14624ebed;
  }
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0x108) != '\x01')) {
    FUN_1405e06c2(*param_2,&local_48,param_3,param_3 + 0x90);
    if ((longlong)local_40 != 0) {
      lVar5 = (longlong)local_40 << 3;
      lVar9 = local_48;
      do {
        lVar6 = FUN_14479d2ce(lVar9);
        if (lVar6 == 0) {
LAB_14624ec2d:
          lVar6 = 0;
        }
        else {
          lVar7 = FUN_144a6c4d8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_14624ec2d;
        }
        FUN_14624ece0(*param_2,lVar6,plVar2);
        lVar9 = lVar9 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  else {
    FUN_143e14eda(param_1 + -0x100,*param_2,plVar2);
  }
LAB_14624ebed:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624ece0 FUN_14624ece0 body=328 status=ok
// SIG undefined FUN_14624ece0(void)

void FUN_14624ece0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    if (lVar2 != 0) {
      lVar2 = FUN_140115352(lVar2);
      if (lVar2 != 0) {
        local_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        lStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0xffffffff;
        local_34 = 0;
        local_32 = 1;
        local_31 = 0;
        plVar3 = (longlong *)FUN_14017698e(param_2);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
          if (lVar4 != 0) {
            FUN_1407abeca(&uStack_a0,plVar3);
          }
        }
        uVar1 = uStack_74;
        uStack_74._0_7_ = CONCAT16(1,(undefined6)uStack_74);
        uStack_74._0_5_ = CONCAT14(1,(int)uVar1);
        local_31 = CONCAT31(local_31._1_3_,1);
        lVar4 = FUN_14479d2ce(param_1 + 0x18);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        lStack_90 = lVar4;
        FUN_14624ee2a(lVar2,param_3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624ee2a FUN_14624ee2a body=74 status=ok
// SIG undefined FUN_14624ee2a(void)

void FUN_14624ee2a(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  local_18 = 0;
  FUN_141001a8e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624ee76 FUN_14624ee76 body=586 status=ok
// SIG undefined FUN_14624ee76(void)

void FUN_14624ee76(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [28];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  iVar2 = local_2c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  puVar3 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_51;
  local_68 = local_50;
  FUN_141696fcc(local_28,iVar2 != 0,puVar3,local_4c);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624f0c2 FUN_14624f0c2 body=1262 status=ok
// SIG undefined FUN_14624f0c2(void)

void FUN_14624f0c2(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined1 *local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 local_220;
  int local_218;
  undefined4 local_214;
  undefined1 local_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  longlong local_188;
  ulonglong uStack_180;
  int local_174;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined4 local_cc;
  undefined4 local_a0;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_68 = 0;
  local_60 = 0x4fc71eb4;
  local_58 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  memset(local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_16c = 0x3f800000;
  local_cc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_170);
  }
  puVar7 = local_170;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_174 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_174);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_174);
  }
  iVar5 = local_174;
  local_188 = 0;
  uStack_180 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  local_1c8[0] = 1;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c8);
  }
  local_1cc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1cc);
  }
  local_1d0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d0);
  }
  uVar2 = local_1cc;
  uVar1 = local_1d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_210[0] = local_1c8[0];
  local_208 = local_1c0;
  uVar6 = FUN_14477b664(uStack_1b8);
  local_200 = FUN_14477b664(uVar6);
  local_1f8 = (undefined4)local_1b0;
  uStack_1f4 = local_1b0._4_4_;
  uStack_1f0 = (undefined4)uStack_1a8;
  uStack_1ec = uStack_1a8._4_4_;
  uVar6 = FUN_14477b664(local_1a0);
  local_1e8 = FUN_14477b664(uVar6);
  uVar4 = uStack_180;
  lVar3 = local_188;
  local_1e0 = uStack_198;
  local_1d8 = local_190;
  local_220 = 0;
  local_218 = (int)uStack_180;
  if ((int)uStack_180 == 0) {
    local_214 = 0;
  }
  else {
    FUN_1405bd402(&local_220,uStack_180 & 0xffffffff,0);
    FUN_1405bd2e2(local_220,lVar3,uVar4 & 0xffffffff);
  }
  local_238 = local_68;
  local_230 = local_60;
  local_228 = 0;
  local_240 = uVar1;
  local_248 = uVar2;
  local_250 = local_210;
  local_258 = &local_220;
  FUN_14624f5b2(&local_238,local_70,puVar7,iVar5 != 0);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624f5b2 FUN_14624f5b2 body=709 status=ok
// SIG undefined FUN_14624f5b2(void)

void FUN_14624f5b2(undefined8 *param_1,longlong param_2,undefined8 param_3,byte param_4,
                  longlong *param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_1c8 [32];
  byte local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  longlong local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = *param_1;
  FUN_1446dcdd4(&local_188);
  if (DAT_14cb78ff0 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_144837462(DAT_14cb78ff0,&local_188);
  }
  if (lStack_170 != 0) {
    FUN_1400020a8();
  }
  if ((((param_2 != 0) && (lVar5 != 0)) && (lVar6 = FUN_1447210f0(param_2), lVar6 != 0)) &&
     (iVar4 = FUN_14487fd02(param_2), iVar4 != (uint)param_4 * 2 + 1)) {
    FUN_1407f7f84(&local_188,lVar6);
    if (plStack_180 != (longlong *)0x0) {
      iVar4 = (int)plStack_180[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plStack_180[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plStack_180 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plStack_180;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_180 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_180 + 0x10))();
      }
      lVar6 = local_188;
      if (plVar7 != (longlong *)0x0) {
        if (local_188 != 0) {
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          lStack_170 = 0;
          local_188 = 0;
          plStack_180 = (longlong *)0x0;
          local_148 = 0xc0;
          local_138 = 0;
          local_128 = 0;
          local_f8 = 0;
          local_e8 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_a0 = 0x3ff0000000000000;
          local_98 = 0x3ff0000000000000;
          local_90 = 0x3ff0000000000000;
          local_88 = 0x3f80000000000000;
          local_80 = 0;
          FUN_145e32940(param_6,&local_188);
          FUN_14065c7a4(&local_188,param_5);
          local_88 = CONCAT44(param_8,param_7);
          local_198 = 0;
          local_1a8 = param_4;
          local_1a0 = &local_188;
          FUN_1408f2522(lVar6,lVar5,param_2,param_3);
          FUN_141466e9a(&local_188);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14624f878 FUN_14624f878 body=25 status=ok
// SIG undefined FUN_14624f878(void)

undefined8 FUN_14624f878(undefined8 param_1,undefined8 param_2)

{
  FUN_14624f892(param_2);
  return param_2;
}



// FUNCTION 14624f892 FUN_14624f892 body=468 status=ok
// SIG undefined FUN_14624f892(void)

undefined8 * FUN_14624f892(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cbd3360 != (longlong *)0x0 && DAT_14cbd3368 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cbd3360 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cbd3360;
    if (DAT_14cbd3368 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_14624f994;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *puVar3 = &PTR_FUN_14b9a0270;
  FUN_1409e1656(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b9a0200;
  puVar3[4] = &PTR_FUN_14b9a0220;
  puVar3[5] = 0;
  puVar3[6] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a0290;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_14624f994;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14624f994;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_14624fa0b:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14624f98a;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_14624fa0b;
      puVar3[3] = plVar4;
    }
LAB_14624f98a:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_14624f994:
  *param_1 = local_40;
  param_1[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14624fa72 FUN_14624fa72 body=456 status=ok
// SIG undefined FUN_14624fa72(void)

undefined8 *
FUN_14624fa72(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  int local_c0;
  undefined8 *local_b8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  byte local_7c;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = FUN_1447210f0(param_3);
  uVar3 = FUN_140cbc0d8(uVar3);
  local_78[0] = 0;
  local_50 = 0;
  local_a0 = param_3;
  FUN_1456bb102(local_78,param_3);
  local_e8 = uVar3;
  local_a4 = param_4;
  local_98 = uVar3;
  FUN_145760262(&local_80,param_1 + 0x20,local_78,param_4);
  FUN_144a5ac3a(local_78);
  local_c0 = (local_7c ^ 1) * 2;
  if (local_7c != 0) {
    local_a4 = local_80;
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_90 = 0;
  local_88 = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78,local_a0);
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e8 = local_98;
  local_e0 = uVar1;
  local_b8 = &local_90;
  FUN_1403695ab(param_2,param_1 + 0x20,local_a4,local_78);
  FUN_144a5ac3a(local_78);
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar4 = (int *)*param_2;
    lVar5 = (longlong)*(int *)(param_2 + 1) * 0x68;
    do {
      local_78[0] = 0;
      local_50 = 0;
      FUN_1456bb102(local_78,local_a0);
      iVar2 = FUN_14624fc3c(piVar4,local_78,0);
      FUN_144a5ac3a(local_78);
      if ((0 < iVar2) && (*piVar4 < iVar2)) {
        *piVar4 = iVar2;
      }
      piVar4 = piVar4 + 0x1a;
      lVar5 = lVar5 + -0x68;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624fc3c FUN_14624fc3c body=42 status=ok
// SIG undefined FUN_14624fc3c(void)

undefined8 FUN_14624fc3c(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_14005f32a(*(longlong *)(param_1 + 0x10),param_2,param_3 & 1);
    return uVar1;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_14005f6be(*(longlong *)(param_1 + 8),param_2,param_3 & 1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14624fc66 FUN_14624fc66 body=308 status=ok
// SIG undefined FUN_14624fc66(void)

undefined8 FUN_14624fc66(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1;
  local_20 = param_1;
  plVar2 = (longlong *)FUN_14497e828();
  if (plVar2 == (longlong *)0x0) {
LAB_14624fd17:
    lVar3 = (**(code **)(*param_1 + 0x6b8))(param_1);
    if (lVar3 == 0) {
LAB_14624fd8a:
      FUN_1441f1612(&local_20);
      uVar5 = 1;
      goto LAB_14624fce5;
    }
    lVar4 = FUN_1459ba0f6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if ((param_1[0x7a] == 0) || ((*(uint *)(param_1[0x7a] + 8) >> 0x1e & 1) != 0))
      goto LAB_14624fd8a;
      local_38 = 0;
      local_34 = 1;
      local_30 = 0x40000000;
      (**(code **)(*param_1 + 0xe38))(param_1);
    }
  }
  else {
    lVar3 = FUN_1403ca142();
    if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_14624fd17;
    cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
    if (cVar1 == '\a') {
LAB_14624fd03:
      lVar3 = FUN_140d27a2a(plVar2);
      if (7 < (byte)(*(char *)(lVar3 + 0xb0) - 1U)) goto LAB_14624fd17;
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
      if (cVar1 == '\b') goto LAB_14624fd03;
    }
  }
  FUN_141697b00(&local_28);
  uVar5 = 0;
LAB_14624fce5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14624fd9b FUN_14624fd9b body=872 status=ok
// SIG undefined FUN_14624fd9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HBITMAP FUN_14624fd9b(void)

{
  ulonglong uVar1;
  int iVar2;
  HDC hdc;
  HBITMAP ho;
  undefined2 *puVar3;
  HBITMAP pHVar4;
  bool bVar5;
  undefined1 auStackY_d8 [32];
  void *local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_54;
  undefined1 local_4c [16];
  undefined8 local_3c;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_d8;
  CoInitialize((LPVOID)0x0);
  local_68 = (longlong *)0x0;
  CoCreateInstance((IID *)&DAT_14997eb88,(LPUNKNOWN)0x0,1,(IID *)&DAT_149eca9e0,&local_68);
  local_70 = (longlong *)0x0;
  puVar3 = DAT_14c967968;
  if (DAT_14c967970 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = (**(code **)(*local_68 + 0x18))(local_68,puVar3,0,0x80000000);
  local_78 = (longlong *)0x0;
  if (iVar2 < 0) {
LAB_1462500f4:
    local_80 = (longlong *)0x0;
    local_88 = (longlong *)0x0;
  }
  else {
    iVar2 = (**(code **)(*local_70 + 0x68))(local_70,0,&local_78);
    local_80 = (longlong *)0x0;
    if (iVar2 < 0) goto LAB_1462500f4;
    iVar2 = (**(code **)*local_78)(local_78,&DAT_1499d7840,&local_80);
    local_88 = (longlong *)0x0;
    if (-1 < iVar2) {
      local_60 = (longlong *)0x0;
      iVar2 = (**(code **)(*local_68 + 0x50))();
      if ((iVar2 < 0) ||
         (iVar2 = (**(code **)(*local_60 + 0x40))(local_60,local_78,&DAT_14997eb98,0), iVar2 < 0)) {
        (**(code **)(*local_60 + 0x10))();
      }
      else {
        iVar2 = (**(code **)*local_60)(local_60,&DAT_149eca9f0,&local_88);
        (**(code **)(*local_60 + 0x10))();
        pHVar4 = (HBITMAP)0x0;
        if (iVar2 < 0) goto LAB_146250053;
        local_8c = 0;
        local_90 = 0;
        local_98 = (void *)0x0;
        iVar2 = (**(code **)(*local_88 + 0x20))(local_88,local_30);
        if (iVar2 < 0) goto LAB_146250053;
        if (_DAT_14997eb98 == local_30) {
          iVar2 = (**(code **)(*local_88 + 0x18))(local_88,&local_8c,&local_90);
          pHVar4 = (HBITMAP)0x0;
          if (iVar2 < 0) goto LAB_146250053;
          local_4c = (undefined1  [16])0x0;
          local_3c._0_4_ = 0;
          local_3c._4_1_ = '\0';
          local_3c._5_1_ = '\0';
          local_3c._6_1_ = '\0';
          local_3c._7_1_ = '\0';
          local_60 = (longlong *)CONCAT44(local_8c,0x28);
          local_58 = -local_90;
          local_54._0_2_ = 1;
          local_54._2_2_ = 0x20;
          local_54._4_4_ = 0;
          hdc = GetDC((HWND)0x0);
          if (hdc != (HDC)0x0) {
            ho = CreateDIBSection(hdc,(BITMAPINFO *)&local_60,0,&local_98,(HANDLE)0x0,0);
            ReleaseDC((HWND)0x0,hdc);
            pHVar4 = (HBITMAP)0x0;
            if (ho == (HBITMAP)0x0) goto LAB_146250053;
            if (local_8c < 0x40000000) {
              uVar1 = (ulonglong)(local_8c << 2) * (ulonglong)local_90;
              bVar5 = (int)(uVar1 >> 0x20) != 0;
              pHVar4 = ho;
              if ((bVar5) || (local_88 == (longlong *)0x0)) {
                if (!bVar5) goto LAB_146250053;
              }
              else {
                iVar2 = (**(code **)(*local_88 + 0x38))
                                  (local_88,0,(ulonglong)(local_8c << 2),uVar1 & 0xffffffff);
                if (-1 < iVar2) goto LAB_146250053;
              }
            }
            DeleteObject(ho);
          }
        }
      }
    }
  }
  pHVar4 = (HBITMAP)0x0;
LAB_146250053:
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStackY_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pHVar4;
}



// FUNCTION 146250104 FUN_146250104 body=1928 status=ok
// SIG undefined FUN_146250104(void)

undefined8 * FUN_146250104(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)FUN_14001cc68(0x278,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b99a6f0;
  plVar11 = plVar7 + 2;
  FUN_1462509ba(plVar11);
  lVar8 = param_3[3];
  plVar3 = (longlong *)param_3[4];
  local_a8 = param_1;
  local_a0 = param_2;
  local_88 = plVar11;
  local_80 = plVar7;
  if (plVar3 == (longlong *)0x0) {
    plVar7[0x30] = lVar8;
    plVar11 = (longlong *)plVar7[0x31];
    if (plVar11 != (longlong *)0x0) {
      plVar7[0x31] = 0;
LAB_1462506ad:
      LOCK();
      plVar7 = plVar11 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      param_1 = local_a8;
      if (plVar3 != (longlong *)0x0) goto LAB_1462501c6;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar7[0x30] = lVar8;
    plVar11 = (longlong *)plVar7[0x31];
    if (plVar3 == plVar11) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      plVar7[0x31] = (longlong)plVar3;
      if (plVar11 != (longlong *)0x0) goto LAB_1462506ad;
    }
LAB_1462501c6:
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  FUN_14571b264(param_3[2],&local_78,&DAT_14cb8b8a8);
  plVar11 = uStack_70;
  if (local_88 + 0x42 != &local_78) {
    local_88[0x42] = local_78;
    local_78 = 0;
    plVar3 = (longlong *)local_88[0x43];
    if (uStack_70 != plVar3) {
      uStack_70 = (longlong *)0x0;
      local_88[0x43] = (longlong)plVar11;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar3 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
  plVar11 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  lVar8 = FUN_14108b142(param_1 + 0x9f8);
  plVar3 = local_88;
  plVar11 = local_88 + 0x36;
  if (lVar8 == 0) {
    plVar7 = local_88 + 0x39;
    *plVar11 = 0;
    local_88[0x37] = 0;
    local_88[0x38] = 0;
    *(undefined4 *)(local_88 + 0x3a) = 0;
    if (*(int *)((longlong)local_88 + 0x1d4) < 0) {
      FUN_1446f8c06(plVar7,0);
    }
    puVar4 = (undefined2 *)*plVar7;
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_78,lVar8);
    *(undefined4 *)(plVar3 + 0x37) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar3 + 0x1bc) = local_78._4_4_;
    *(undefined4 *)(plVar3 + 0x38) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)plVar3 + 0x1c4) = uStack_70._4_4_;
    if (plVar3 + 0x37 == &local_78) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar3[0x39] != 0) {
        FUN_1400020a8();
      }
      plVar3[0x39] = local_68;
      local_68 = 0;
      *(undefined4 *)(plVar3 + 0x3a) = uStack_60;
      *(undefined4 *)((longlong)plVar3 + 0x1d4) = uStack_5c;
    }
    cVar6 = (*(code *)PTR_FUN_14c758760)();
    if (cVar6 != '\0') {
      uVar2 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
        plVar3[0x36] = 0;
        goto LAB_1462502e7;
      }
    }
    FUN_14485c47a(plVar11,lVar8);
  }
LAB_1462502e7:
  uVar9 = FUN_141698032(param_3[1]);
  FUN_14154b34a(&local_98,uVar9);
  plVar11 = local_90;
  if (local_98 != 0) {
    plVar3[0x48] = local_98;
    plVar7 = (longlong *)plVar3[0x49];
    if (plVar7 != local_90) {
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar3[0x49];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      plVar3[0x49] = (longlong)plVar11;
    }
    local_58 = (code *)&LAB_14619f310;
    local_50 = 0;
    FUN_146250a70(&local_78,&local_88);
    FUN_1459850be(local_98 + 0x10,&local_58,&local_78);
    FUN_1449db362(&local_78);
  }
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
  lVar8 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar8 != 0) {
    lVar10 = FUN_144a2f878();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      local_58 = FUN_148dce644;
      local_50 = 0;
      FUN_14625088e(&local_78,&local_88);
      FUN_1448b6402(lVar8 + 0x6eb8,&local_58,&local_78);
      FUN_1449db362(&local_78);
      local_58 = (code *)&LAB_145c20184;
      local_50 = 0;
      FUN_146250b9c(&local_78,&local_88,&local_58);
      uVar9 = FUN_14108b142(param_1 + 0x9f8);
      FUN_14108b3c6(lVar8 + 0x6df0,&local_58,uVar9,&local_78);
      FUN_1449db362(&local_78);
      local_58 = (code *)&LAB_148dce65e;
      local_50 = 0;
      FUN_14625088e(&local_78,&local_88,&local_58);
      FUN_1448b6402(lVar8 + 0x4e80,&local_58,&local_78);
      FUN_1449db362(&local_78);
    }
  }
  puVar5 = local_a0;
  if (((*(longlong *)(param_3[1] + 0x88) != 0) &&
      (plVar11 = *(longlong **)(param_3[1] + 0x90), plVar11 != (longlong *)0x0)) &&
     (lVar8 = (**(code **)(*plVar11 + 8))(), lVar8 != 0)) {
    uVar9 = FUN_1403c7982();
    plVar11 = (longlong *)FUN_144718840(lVar8,uVar9);
    if (plVar11 != (longlong *)0x0) {
      uVar9 = (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar12 = FUN_14011c2be(local_a8 + 0x928);
      local_78 = 0;
      uStack_70 = (longlong *)0x0;
      uStack_5c = CONCAT31(uStack_5c._1_3_,0xff);
      uStack_60 = 0;
      local_68 = 0;
      FUN_14493679e(uVar9,&local_78,uVar12,0);
      plVar11 = local_88 + 0x32;
      *(undefined4 *)(local_88 + 0x34) = (undefined4)local_68;
      *(undefined4 *)((longlong)local_88 + 0x1a4) = local_68._4_4_;
      *(undefined4 *)(local_88 + 0x35) = uStack_60;
      *(undefined4 *)((longlong)local_88 + 0x1ac) = uStack_5c;
      *(undefined4 *)(local_88 + 0x32) = (undefined4)local_78;
      *(undefined4 *)((longlong)local_88 + 0x194) = local_78._4_4_;
      *(undefined4 *)(local_88 + 0x33) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)local_88 + 0x19c) = uStack_70._4_4_;
      cVar6 = FUN_14486ea84(plVar11);
      if (cVar6 != '\0') {
        lVar8 = FUN_14008e0ae(plVar11);
        local_58 = (code *)&LAB_148dce63e;
        local_50 = 0;
        FUN_146633aa0(&local_78,&local_88);
        FUN_14036a282(lVar8 + 0x198,&local_58,&local_78);
        FUN_1449db362(&local_78);
        lVar8 = FUN_14008e0ae(plVar11);
        local_58 = FUN_148dce5e8;
        local_50 = 0;
        FUN_146633aa0(&local_78,&local_88,&local_58);
        FUN_14036a282(lVar8 + 0x1b0,&local_58,&local_78);
        FUN_1449db362(&local_78);
      }
    }
  }
  plVar11 = local_80;
  *puVar5 = local_88;
  puVar5[1] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 14625088e FUN_14625088e body=300 status=ok
// SIG undefined FUN_14625088e(void)

longlong * FUN_14625088e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99a780;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99a780;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1462509ba FUN_1462509ba body=182 status=ok
// SIG undefined FUN_1462509ba(void)

undefined8 * FUN_1462509ba(undefined8 *param_1)

{
  FUN_145c42fa8();
  *param_1 = &PTR_FUN_14b6325b0;
  param_1[0x2d] = &PTR_FUN_14b632650;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 0xff;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 1;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xf8;
  return param_1;
}



// FUNCTION 146250a70 FUN_146250a70 body=300 status=ok
// SIG undefined FUN_146250a70(void)

longlong * FUN_146250a70(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b3e9d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99a710;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3e9d10;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99a710;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146250b9c FUN_146250b9c body=300 status=ok
// SIG undefined FUN_146250b9c(void)

longlong * FUN_146250b9c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b42a7c0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99a7f0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a7c0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99a7f0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146250cc8 FUN_146250cc8 body=589 status=ok
// SIG undefined FUN_146250cc8(void)

void FUN_146250cc8(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  longlong local_98;
  undefined1 local_90 [16];
  undefined **local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined **local_60;
  longlong *local_58;
  longlong *local_50;
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar1 = param_1 + 0x20;
  cVar4 = FUN_14142923a(lVar1);
  if (cVar4 == '\0') {
    FUN_1446f470e(&local_80,L"SHIFT",1);
    plVar5 = (longlong *)FUN_14479d2ce(lVar1);
    (**(code **)(*plVar5 + 0x180))(plVar5);
    local_60 = local_80;
    plVar5 = (longlong *)FUN_1401e3228();
    if (plVar5 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
      if (local_78 != (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14479d2ce(lVar1);
        (**(code **)(*plVar5 + 0x350))(plVar5,&local_60);
        if ((&DAT_149fc1b6e)[local_48] == '\x01') {
          plVar6 = local_58;
          if (local_50 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            plVar5 = local_50;
          }
        }
        else {
          plVar5 = (longlong *)0x0;
          plVar6 = (longlong *)0x0;
        }
        local_60 = &PTR_FUN_14a5af930;
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        local_60 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])();
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x18))(local_78,&local_60,param_1 + 0x28);
          plVar3 = local_78;
          if (local_60 != (undefined **)0x0) {
            *(undefined1 *)(param_1 + 0x18) = 0;
            local_98 = param_1;
            FUN_146250f16(local_90,param_1);
            local_a8 = local_90;
            (**(code **)(*plVar3 + 0x1b0))(plVar3,plVar6,local_60,plVar6);
            FUN_1449db362(local_90);
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_58 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)local_58 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_58 + 0x10))(local_58);
              }
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
    plVar5 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_70 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146250f16 FUN_146250f16 body=422 status=ok
// SIG undefined FUN_146250f16(void)

longlong * FUN_146250f16(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_146250ff0:
    *puVar3 = &PTR_LAB_14b4e4ea0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f5e20;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146250ff0;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4e4ea0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f5e20;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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
  return param_1;
}



// FUNCTION 1462510bc FUN_1462510bc body=738 status=ok
// SIG undefined FUN_1462510bc(void)

void FUN_1462510bc(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  int local_84;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14625110d;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14625110d:
  local_84 = *(int *)(param_3 + 0x14);
  local_78 = param_4;
  if (local_84 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 10)) goto LAB_146251153;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_146251153:
  local_90 = *plVar7;
  local_88 = *(int *)(lVar4 + 0x14);
  if (local_88 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  local_80 = *plVar10;
  lVar4 = *param_2;
  lVar6 = FUN_14009d2a0();
  FUN_1462513a0(lVar4,&local_60,*(undefined2 *)(lVar6 + 0x4a));
  if (local_50 == 0) {
    if (0 < *(int *)((longlong)param_2 + 0xc)) {
      lVar4 = 0;
      local_68 = param_2;
      do {
        lVar2 = local_68[1];
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        lVar9 = (longlong)*(int *)(*local_78 + lVar4 * 4) * 0x10;
        lVar6 = *(longlong *)(local_90 + 8 + lVar9);
        if (((lVar6 == 0) || (lVar5 = FUN_1458f9c40(), lVar5 == 0)) ||
           ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
             lVar5 + 0x30)))) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(local_90 + lVar9 + 8);
        }
        uVar3 = FUN_1462513f6(uVar1,0,uVar8);
        *(undefined4 *)(local_80 + 8 + (longlong)((int)lVar2 + (int)lVar4) * 0x10) = uVar3;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)((longlong)local_68 + 0xc));
    }
  }
  else if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar4 = 0;
    local_70 = param_1;
    do {
      lVar2 = param_2[1];
      uVar1 = *(undefined8 *)(local_70 + 0x10);
      lVar9 = (longlong)*(int *)(*local_78 + lVar4 * 4) * 0x10;
      lVar6 = *(longlong *)(local_90 + 8 + lVar9);
      if ((((lVar6 == 0) || (lVar5 = FUN_1458f9c40(), lVar5 == 0)) ||
          (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(local_90 + lVar9 + 8);
      }
      lVar6 = (longlong)((int)lVar2 + (int)lVar4);
      uVar3 = FUN_1462513f6(uVar1,*(undefined8 *)(local_50 + lVar6 * 8),uVar8);
      *(undefined4 *)(local_80 + 8 + lVar6 * 0x10) = uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((longlong)param_2 + 0xc));
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_84 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462513a0 FUN_1462513a0 body=86 status=ok
// SIG undefined FUN_1462513a0(void)

undefined8 * FUN_1462513a0(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1405e0cfe(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1462513f6 FUN_1462513f6 body=1214 status=ok
// SIG undefined FUN_1462513f6(void)

ulonglong FUN_1462513f6(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  uint local_74;
  ulonglong local_70;
  longlong local_68;
  undefined1 local_5c [4];
  ulonglong *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  iVar8 = *(int *)(param_1 + 0xc0);
  bVar3 = DAT_14c950c29;
  if (iVar8 == 0) {
LAB_146251489:
    uVar9 = 0xffffffffffffffff;
  }
  else {
    if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
      iVar8 = *(int *)(param_1 + 0xc0);
    }
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar5 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    uVar9 = (ulonglong)*(uint *)(lVar5 + (longlong)(int)(iVar8 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4)
            << 0x20;
    bVar3 = DAT_14c950c29;
    do {
      if (uVar9 >> 0x20 == 0xffffffff) goto LAB_146251489;
      lVar5 = *plVar1;
      uVar6 = *(uint *)(lVar5 + 0x10 + ((longlong)uVar9 >> 0x20) * 0x18);
      if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        lVar5 = *plVar1;
        bVar3 = DAT_14c950c29;
      }
      uVar11 = *(ulonglong *)(lVar5 + ((longlong)uVar9 >> 0x20) * 0x18);
      if (((bVar3 & 1) != 0) && (uVar11 != 0)) {
        FUN_1456cec3c(uVar11);
        bVar3 = DAT_14c950c29;
      }
      if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar3 = DAT_14c950c29;
      }
      uVar9 = (ulonglong)uVar6 << 0x20 | uVar9 >> 0x20;
    } while (uVar11 != param_2);
  }
  if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  if ((int)uVar9 == -1) {
LAB_14625177a:
    if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_2);
    }
    local_70 = param_2;
    local_68 = FUN_14633d290(param_1,param_3);
    if ((local_68 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_68);
    }
    FUN_14633cece(local_68,param_2,*(undefined8 *)(param_1 + 0x28));
    FUN_14633f3b0(param_1 + 0x40,&local_58);
    FUN_147565cb0(local_50,&local_70);
    local_74 = (uint)local_58;
    local_80 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_2);
    }
    local_58 = &local_80;
    local_50 = &local_74;
    FUN_146254bd0(plVar1,local_5c);
    lVar5 = param_1 + 200;
    iVar8 = (local_74 - *(int *)(param_1 + 0xe0)) + 1;
    if (0 < iVar8) {
      uVar4 = FUN_144a54ea4(lVar5,iVar8);
      FUN_1447c6044(lVar5,uVar4,iVar8,0);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xd8);
    }
    uVar6 = local_74 + 0x1f;
    if (-1 < (int)local_74) {
      uVar6 = local_74;
    }
    puVar2 = (uint *)(lVar5 + (longlong)((int)uVar6 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)local_74 & 0x1f);
    uVar11 = (ulonglong)local_74;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x40);
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)(int)uVar9 * 0x18);
    while (uVar11 = (ulonglong)iVar8,
          *(longlong *)(*(longlong *)(lVar5 + 8 + uVar11 * 0x10) + 0x10) != param_3) {
      do {
        if (uVar9 >> 0x20 == 0xffffffff) goto LAB_14625177a;
        lVar5 = *plVar1;
        lVar10 = (longlong)uVar9 >> 0x20;
        uVar6 = *(uint *)(lVar5 + 0x10 + lVar10 * 0x18);
        if (DAT_14c950c29 == 1 && param_2 != 0) {
          FUN_1456cec3c(param_2);
          lVar5 = *plVar1;
        }
        uVar11 = *(ulonglong *)(lVar5 + lVar10 * 0x18);
        if (((DAT_14c950c29 & 1) != 0) && (uVar11 != 0)) {
          FUN_1456cec3c(uVar11);
        }
        if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_2);
        }
        uVar9 = (ulonglong)uVar6 << 0x20 | uVar9 >> 0x20;
      } while (uVar11 != param_2);
      lVar5 = *(longlong *)(param_1 + 0x40);
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x78) + 8 + lVar10 * 0x18);
    }
    lVar5 = param_1 + 200;
    iVar7 = (iVar8 - *(int *)(param_1 + 0xe0)) + 1;
    if (0 < iVar7) {
      uVar4 = FUN_144a54ea4(lVar5,iVar7);
      FUN_1447c6044(lVar5,uVar4,iVar7,0);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xd8);
    }
    iVar7 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    puVar2 = (uint *)(lVar5 + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462518b6 FUN_1462518b6 body=38 status=ok
// SIG undefined FUN_1462518b6(void)

undefined8 FUN_1462518b6(undefined8 param_1,int param_2)

{
  FUN_141698042();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462518e8 FUN_1462518e8 body=327 status=ok
// SIG undefined FUN_1462518e8(void)

undefined8 * FUN_1462518e8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14bb684c0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0x101;
  param_1[0x75] = 0;
  FUN_140056680(param_1 + 0x76,L"Color");
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  FUN_1446f470e(&local_38,L"SceneComponent0",1);
  uVar1 = FUN_144a799b0();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x79] = lVar2;
  FUN_14092e51e(param_1,lVar2);
  *(undefined1 *)(param_1 + 7) = 5;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 7;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 1;
  FUN_1405e47c6(param_1,0);
  FUN_146251a30(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146251a30 FUN_146251a30 body=3825 status=ok
// SIG undefined FUN_146251a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146251a30(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined2 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar41;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2ac [4];
  undefined8 local_2a8;
  longlong local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  double dStack_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_1[0x72] == 0) goto LAB_146251ac5;
  iVar24 = *(int *)(param_1 + 0x80);
  if ((((iVar24 == 0) || (iVar24 != *(int *)(param_1 + 0x84))) ||
      (iVar24 != *(int *)(param_1 + 0x86))) || (iVar24 != *(int *)(param_1 + 0x82))) {
    FUN_145c01e8c(param_1);
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
    if (*(int *)((longlong)param_1 + 0x3f4) < 0) {
      FUN_1446f8c06(param_1 + 0x7d,0);
    }
    puVar8 = (undefined2 *)param_1[0x7d];
    if (puVar8 != (undefined2 *)0x0) {
      *puVar8 = 0;
    }
    FUN_1461eb2c6(param_1);
  }
  puVar2 = param_1 + 0x7a;
  lVar18 = FUN_14479d2ce(puVar2);
  if (lVar18 == 0) {
    ppuVar3 = (undefined8 **)(param_1 + 0x7b);
    if (param_1[0x7b] != 0) {
      lVar18 = FUN_140007850();
      cVar16 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar18 == 0) || (cVar16 == '\0')) {
        FUN_14485c47a(puVar2,lVar18);
        if (lVar18 == 0) goto LAB_146251d6d;
      }
      else {
        uVar17 = *(uint *)(lVar18 + 0xc);
        if ((int)uVar17 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        if ((*(uint *)(lVar19 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar2,lVar18);
        }
      }
      if ((*(uint *)(lVar18 + 8) >> 0x1e & 1) == 0) goto LAB_146251b98;
    }
LAB_146251d6d:
    local_2a0 = param_1[0x73];
    if ((local_2a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14919d160(local_1f8,param_1[0x72],&local_2a0);
    if (0 < (int)local_1f8._8_4_) {
      lVar18 = *(longlong *)local_1f8._0_8_;
      if (lVar18 == 0) {
        *puVar2 = 0;
        param_1[0x7b] = 0;
        param_1[0x7c] = 0;
        *(undefined4 *)(param_1 + 0x7e) = 0;
        if (*(int *)((longlong)param_1 + 0x3f4) < 0) {
          FUN_1446f8c06(param_1 + 0x7d,0);
        }
        puVar8 = (undefined2 *)param_1[0x7d];
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      else {
        FUN_1400bbfc4(&local_178,lVar18);
        *ppuVar3 = local_178;
        param_1[0x7c] = dStack_170;
        if (ppuVar3 == &local_178) {
          if (local_168 != 0.0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_1[0x7d] != 0) {
            FUN_1400020a8();
          }
          param_1[0x7d] = local_168;
          local_168 = 0.0;
          *(undefined4 *)(param_1 + 0x7e) = (undefined4)local_160;
          *(undefined4 *)((longlong)param_1 + 0x3f4) = local_160._4_4_;
        }
        cVar16 = (*(code *)PTR_FUN_14c758760)();
        if (cVar16 != '\0') {
          uVar17 = *(uint *)(lVar18 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar19 = 0;
          }
          if ((*(uint *)(lVar19 + 8) & 0x8400000) != 0) {
            param_1[0x7a] = 0;
            goto LAB_1462526bc;
          }
        }
        FUN_14485c47a(puVar2,lVar18);
      }
    }
LAB_1462526bc:
    lVar18 = FUN_14479d2ce(puVar2);
    if (lVar18 == 0) {
      if (*ppuVar3 != (undefined8 *)0x0) {
        lVar18 = FUN_140007850();
        cVar16 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar18 == 0) || (cVar16 == '\0')) {
          FUN_14485c47a(puVar2,lVar18);
          if (lVar18 == 0) goto LAB_146252744;
        }
        else {
          uVar17 = *(uint *)(lVar18 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar19 = 0;
          }
          if ((*(uint *)(lVar19 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(puVar2,lVar18);
          }
        }
        if ((*(uint *)(lVar18 + 8) >> 0x1e & 1) == 0) goto LAB_146252765;
      }
LAB_146252744:
      bVar15 = false;
    }
    else {
LAB_146252765:
      FUN_145c01e8c(param_1);
      lVar18 = FUN_145c01f0e(puVar2);
      plVar22 = *(longlong **)(lVar18 + 0x360);
      plVar20 = *(longlong **)(lVar18 + 0x368);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      if (plVar22 != (longlong *)0x0) {
        uVar21 = (**(code **)(*plVar22 + 0x18))();
        FUN_1491add92(uVar21,&local_178,param_1);
      }
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      plVar22 = (longlong *)FUN_145c01f0e(puVar2);
      plVar22 = (longlong *)(**(code **)(*plVar22 + 0x3f8))(plVar22);
      if ((int)plVar22[1] == 0) goto LAB_146252744;
      FUN_1405e47c6(param_1,0);
      if ((longlong)(int)plVar22[1] != 0) {
        lVar18 = *plVar22;
        lVar19 = (longlong)(int)plVar22[1] * 0x28;
        do {
          lVar23 = FUN_1491a1b8e(lVar18);
          FUN_1491ade88(lVar23 + 0xd0);
          lVar18 = lVar18 + 0x28;
          lVar19 = lVar19 + -0x28;
        } while (lVar19 != 0);
      }
      lVar18 = FUN_145c01f0e(puVar2);
      lVar18 = *(longlong *)(lVar18 + 0x2f8);
      dStack_170 = 0.0;
      iVar24 = (int)plVar22[1];
      lVar19 = *plVar22;
      local_168 = (double)CONCAT44(local_168._4_4_,iVar24);
      local_178 = param_1;
      if (iVar24 == 0) {
        local_168 = 0.0;
      }
      else {
        FUN_145a2bf94(&dStack_170,iVar24,0);
        FUN_145a2c009(dStack_170,lVar19,iVar24);
      }
      iVar24 = *(int *)(lVar18 + 0xc0);
      local_160 = lVar18;
      if (0 < iVar24) {
        lVar19 = 0;
        do {
          dVar9 = *(double *)(*(longlong *)(lVar18 + 0xb8) + lVar19 * 8);
          if ((dVar9 != 0.0) && (*(char *)((longlong)dVar9 + 0x10) == '\x04')) {
            local_278 = dVar9;
            FUN_144495e30(&local_178,&local_278);
            iVar24 = *(int *)(lVar18 + 0xc0);
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < iVar24);
      }
      FUN_1456e43db(dStack_170,(ulonglong)local_168 & 0xffffffff);
      if (dStack_170 != 0.0) {
        FUN_1400020a8();
      }
      bVar15 = true;
    }
    if (local_1f8._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (!bVar15) goto LAB_146251ac5;
  }
LAB_146251b98:
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar18 = 0;
    do {
      lVar19 = FUN_145c01f0e(puVar2);
      lVar19 = *(longlong *)(lVar19 + 0x2f8);
      plVar22 = *(longlong **)(param_1[0x83] + lVar18 * 8);
      local_2ac[0] = 4;
      local_2a8 = *(undefined8 *)(param_1[0x7f] + lVar18 * 8);
      uVar17 = FUN_140813180(lVar19,local_2ac);
      if (((((int)uVar17 < 0) || (*(int *)(lVar19 + 0xc0) <= (int)uVar17)) ||
          (lVar23 = *(longlong *)(*(longlong *)(lVar19 + 0xb8) + (ulonglong)uVar17 * 8), lVar23 == 0
          )) || (*(char *)(lVar23 + 0x10) != '\x04')) {
        lVar23 = 0;
        bVar15 = true;
LAB_146251c31:
        uVar26 = 0;
      }
      else {
        if ((*(char *)(lVar23 + 0x210) == '\x01') || (*(char *)(lVar23 + 0x211) == '\0')) {
          bVar15 = false;
          goto LAB_146251c31;
        }
        uVar26 = (undefined4)
                 CONCAT71((int7)((ulonglong)lVar19 >> 8),*(undefined1 *)(lVar23 + 0x33c));
        bVar15 = false;
      }
      if (plVar22 != (longlong *)0x0) {
        cVar16 = (**(code **)(*plVar22 + 0x4e8))(plVar22);
        if ((char)uVar26 != cVar16) {
          FUN_14045627c(plVar22,uVar26,1);
        }
        if (!bVar15) {
          plVar20 = (longlong *)FUN_145c01f0e(puVar2);
          (**(code **)(*plVar20 + 0x3d0))(plVar20,&local_318,lVar18 * 8 + param_1[0x7f]);
          auVar39 = _DAT_149934d80;
          lVar19 = param_1[0x81];
          lVar25 = lVar18 * 0x60;
          pdVar4 = (double *)(lVar19 + lVar25);
          local_348 = ZEXT816(0);
          local_358 = 0.0;
          dStack_350 = 0.0;
          local_328 = ZEXT816(0x3ff0000000000000);
          dVar9 = local_2d8._0_8_;
          dVar11 = local_2d8._8_8_;
          dVar10 = local_2c8._0_8_;
          dVar12 = local_2c8._8_8_;
          auVar5 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar25);
          auVar6 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar25);
          auVar32 = minpd(auVar5,local_2d8);
          auVar36 = minpd(auVar6,local_2c8);
          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
          auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
          iVar24 = movmskpd((int)lVar19,auVar33);
          auVar32._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
          auVar32._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
          uVar17 = movmskpd((int)lVar25,auVar32);
          if ((uVar17 & 0x3fffffff) == 0 && iVar24 == 0) {
            dVar35 = *pdVar4;
            dVar42 = pdVar4[1];
            dVar13 = pdVar4[2];
            dVar14 = pdVar4[3];
            dVar29 = (double)DAT_149931170;
            dVar34 = DAT_149931170._8_8_;
            dVar31 = dVar35 * local_308 * 1.0 +
                     dVar14 * dStack_310 + dVar13 * local_318 * dVar34 + dVar42 * dStack_300;
            dVar30 = pdVar4[4] * dVar9;
            dVar43 = pdVar4[5] * dVar11;
            dVar38 = pdVar4[6] * dVar10;
            dVar41 = pdVar4[7] * dVar12;
            local_378._8_4_ = SUB84(dVar31,0);
            local_378._0_8_ =
                 dVar42 * local_308 * -1.0 +
                 dVar13 * dStack_310 + dVar14 * local_318 * dVar29 + dVar35 * dStack_300;
            local_378._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            local_368._8_8_ =
                 dVar13 * local_308 * dVar34 +
                 ((local_318 * dVar35 * dVar34 + dVar14 * dStack_300) - dVar42 * dStack_310);
            local_368._0_8_ =
                 dVar14 * local_308 * dVar29 +
                 ((local_318 * dVar42 * dVar29 + dVar13 * dStack_300) - dVar35 * dStack_310);
            dVar29 = dVar43 * local_318 - dStack_310 * dVar30;
            dVar35 = dVar38 * dStack_310 - local_308 * dVar43;
            dVar31 = dVar30 * local_308 - local_318 * dVar38;
            dVar34 = dVar41 * dStack_300 - dStack_300 * dVar41;
            dVar35 = dVar35 + dVar35;
            dVar31 = dVar31 + dVar31;
            dVar29 = dVar29 + dVar29;
            dVar34 = dVar34 + dVar34;
            local_358 = (dVar29 * dStack_310 - local_308 * dVar31) + dStack_300 * dVar35 + dVar30 +
                        local_2f8;
            dStack_350 = (dVar35 * local_308 - dVar29 * local_318) + dStack_300 * dVar31 + dVar43 +
                         dStack_2f0;
            local_348._0_8_ =
                 (dVar31 * local_318 - dStack_310 * dVar35) + dStack_300 * dVar29 + dVar38 +
                 local_2e8;
            local_348._8_8_ =
                 (dVar34 * dStack_300 - dVar34 * dStack_300) + dStack_300 * dVar34 + dVar41 +
                 dStack_2e0;
          }
          else {
            dVar34 = dStack_310 + dStack_310;
            dVar38 = local_308 + local_308;
            dVar29 = local_318 * (local_318 + local_318);
            local_1a8 = (1.0 - (dVar29 + dStack_310 * dVar34)) * dVar10;
            dVar41 = (local_318 + local_318) * dStack_300;
            local_1b8 = (dVar34 * dStack_300 + local_318 * dVar38) * dVar10;
            local_1d8 = (dVar34 * local_318 - dVar38 * dStack_300) * dVar11;
            dStack_1b0 = (dVar38 * dStack_310 - dVar41) * dVar10;
            dStack_1d0 = (DAT_149934d80._8_8_ - (local_308 * dVar38 + dVar29)) * dVar11;
            dVar29 = (dVar34 * local_318 + dVar38 * dStack_300) * dVar9;
            local_1c8 = (dVar38 * dStack_310 + dVar41) * dVar11;
            local_1e8 = (local_318 * dVar38 - dVar34 * dStack_300) * dVar9;
            local_1f8._8_4_ = SUB84(dVar29,0);
            local_1f8._0_8_ =
                 ((double)DAT_149934d80 - (local_308 * dVar38 + dStack_310 * dVar34)) * dVar9;
            local_1f8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_2f8;
            dStack_190 = dStack_2f0;
            local_188 = local_2e8;
            uStack_180 = 0x3ff0000000000000;
            dVar38 = *pdVar4;
            dVar41 = pdVar4[1];
            dVar29 = pdVar4[2];
            local_268 = pdVar4[8];
            dVar31 = pdVar4[9];
            dStack_230 = pdVar4[10];
            dVar42 = dVar41 + dVar41;
            dVar30 = dVar29 + dVar29;
            dVar43 = dVar38 * (dVar38 + dVar38);
            local_278 = ((double)DAT_149934d80 - (dVar29 * dVar30 + dVar41 * dVar42)) * local_268;
            dVar34 = (DAT_149934d80._8_8_ - (dVar29 * dVar30 + dVar43)) * dVar31;
            local_228 = (1.0 - (dVar43 + dVar41 * dVar42)) * dStack_230;
            dVar29 = pdVar4[3];
            dVar43 = dVar30 * dVar29;
            dVar35 = (dVar38 + dVar38) * pdVar4[3];
            dVar29 = dVar42 * dVar29;
            dStack_270 = (dVar42 * dVar38 + dVar43) * local_268;
            local_248 = (dVar30 * dVar41 + dVar35) * dVar31;
            local_238 = (dVar29 + *pdVar4 * dVar30) * dStack_230;
            local_268 = (*pdVar4 * dVar30 - dVar29) * local_268;
            dStack_230 = (dVar30 * dVar41 - dVar35) * dStack_230;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar34,0);
            local_258._0_8_ = (dVar42 * dVar38 - dVar43) * dVar31;
            local_258._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = pdVar4[4];
            dStack_210 = pdVar4[5];
            local_208 = pdVar4[6];
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar36._8_8_ = -(ulonglong)(0.0 <= auVar5._8_8_ * dVar11);
            auVar36._0_8_ = -(ulonglong)(0.0 <= auVar5._0_8_ * dVar9);
            auVar32 = blendvpd(_DAT_149936790,auVar39,auVar36);
            uVar27 = -(ulonglong)(0.0 <= auVar6._0_8_ * dVar10);
            dVar29 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
            dVar34 = auVar32._0_8_;
            local_168 = local_168 * dVar34;
            dStack_170 = dStack_170 * dVar34;
            local_178 = (undefined8 *)((double)local_178 * dVar34);
            dVar34 = auVar32._8_8_;
            local_148 = local_148 * dVar34;
            local_150 = local_150 * dVar34;
            local_158 = dVar34 * local_158;
            local_128 = local_128 * dVar29;
            local_130 = local_130 * dVar29;
            local_138 = dVar29 * local_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar29 = local_288 * local_288 + local_298 * local_298;
            dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar37._0_8_ = dVar29 + dVar34;
            auVar37._8_8_ = dVar29 + dVar34;
            auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
            auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
            auVar32 = sqrtpd(auVar37,auVar37);
            auVar39 = divpd(auVar39,auVar32);
            auVar40._0_8_ = auVar39._0_8_ * local_288;
            auVar40._8_8_ = auVar39._8_8_ * dStack_280;
            local_368 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar28);
            local_378._8_8_ =
                 (ulonglong)(dStack_290 * auVar39._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
            local_378._0_8_ =
                 (ulonglong)(local_298 * auVar39._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
            local_348._8_8_ = 0.0;
            local_348._0_8_ = (double)local_108;
            local_358 = local_118;
            dStack_350 = dStack_110;
          }
          dVar11 = auVar5._8_8_ * dVar11;
          dVar12 = auVar6._8_8_ * dVar12;
          local_338._8_4_ = SUB84(dVar11,0);
          local_338._0_8_ = auVar5._0_8_ * dVar9;
          local_338._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          local_328._8_4_ = SUB84(dVar12,0);
          local_328._0_8_ = auVar6._0_8_ * dVar10;
          local_328._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_388 = 0;
          FUN_144927a08(plVar22,local_378,0,0);
          uVar21 = *(undefined8 *)(param_1[0x85] + lVar18 * 8);
          local_178 = (undefined8 *)(double)*(float *)(lVar23 + 0x348);
          dStack_170 = (double)*(float *)(lVar23 + 0x34c);
          local_168 = (double)*(float *)(lVar23 + 0x350);
          uVar7 = param_1[0x87];
          FUN_144a083d0(local_1f8,&local_178);
          FUN_144a9d3f0(uVar21,uVar7,local_1f8);
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x80));
  }
LAB_146251ac5:
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146252922 FUN_146252922 body=206 status=ok
// SIG undefined FUN_146252922(void)

undefined8 * FUN_146252922(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [39];
  char local_31;
  undefined **local_30;
  undefined4 local_28;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a791f8(param_2 + 0x10,&DAT_14ba3c4b8,3,1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    local_30 = &PTR_FUN_14ba3c280;
    local_28 = 0;
    local_24 = 0;
    local_31 = '\0';
    if (*(int *)(param_2 + 0x18) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)(param_2 + 0x10);
    }
    FUN_141698816(&local_30,puVar2,&local_31);
    if (local_31 == '\x01') {
      *param_1 = &PTR_FUN_14ba3c280;
      *(undefined4 *)(param_1 + 1) = local_28;
      *(undefined2 *)((longlong)param_1 + 0xc) = local_24;
    }
    *(bool *)(param_1 + 2) = local_31 == '\x01';
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1462529f2 FUN_1462529f2 body=929 status=ok
// SIG undefined FUN_1462529f2(void)

/* WARNING: Removing unreachable block (ram,0x000146252d8a) */

void FUN_1462529f2(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 3)) {
    lVar10 = *(longlong *)(pbVar1 + 8);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,DAT_14cbd0620);
    local_a8 = DAT_14cbd0618;
    FUN_1448075d0(&local_88);
    if (*(int *)(lVar10 + 0x28) != *(int *)(lVar10 + 0x54)) {
      lVar12 = lVar10 + 0x58;
      if (*(longlong *)(lVar10 + 0x60) != 0) {
        lVar12 = *(longlong *)(lVar10 + 0x60);
      }
      iVar5 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar10 + 0x68) - 1U & (uint)local_88) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar5 * 0x40) == (uint)local_88) {
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_,DAT_14cbd0620);
            local_a8 = DAT_14cbd0618;
            FUN_1448075d0(&local_88);
            puVar4 = (undefined8 *)FUN_144a06846(param_2,&local_88);
            pbVar1 = (byte *)*puVar4;
            plVar9 = &DAT_14c9a1270;
            if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
              plVar9 = *(longlong **)(pbVar1 + 8);
            }
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            if ((longlong)(int)plVar9[2] != 0) {
              lVar10 = *plVar9;
              lVar12 = (longlong)(int)plVar9[2] * 0x10 + lVar10;
              local_b0 = (longlong *)(param_1 + 0x1300);
              do {
                uStack_a0 = CONCAT44(uStack_a0._4_4_,DAT_14cbd0638);
                local_a8 = DAT_14cbd0630;
                FUN_1448075d0(&local_88,&local_a8);
                puVar4 = (undefined8 *)FUN_144a06846(lVar10,&local_88);
                pbVar1 = (byte *)*puVar4;
                if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = *(undefined8 *)(pbVar1 + 8);
                }
                FUN_1446ddc76(&local_90,uVar6);
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
                uStack_a0 = CONCAT44(uStack_a0._4_4_,DAT_14cbd0650);
                local_a8 = DAT_14cbd0648;
                FUN_1448075d0(&local_88,&local_a8);
                puVar4 = (undefined8 *)FUN_144a06846(lVar10,&local_88);
                pbVar1 = (byte *)*puVar4;
                plVar9 = &DAT_14c9a1270;
                if ((pbVar1 != (byte *)0x0) && (plVar9 = &DAT_14c9a1270, (*pbVar1 & 2) != 0)) {
                  plVar9 = *(longlong **)(pbVar1 + 8);
                }
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
                local_a8 = 0;
                uStack_a0 = 0;
                if ((longlong)(int)plVar9[2] != 0) {
                  lVar8 = *plVar9;
                  lVar11 = (longlong)(int)plVar9[2] << 4;
                  do {
                    uVar2 = FUN_1410451c0(lVar8,0);
                    lVar7 = (longlong)(int)uStack_a0;
                    uVar3 = (int)uStack_a0 + 1;
                    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
                    if (uStack_a0._4_4_ < uVar3) {
                      FUN_1447808da(&local_a8);
                    }
                    *(undefined4 *)(local_a8 + lVar7 * 4) = uVar2;
                    lVar8 = lVar8 + 0x10;
                    lVar11 = lVar11 + -0x10;
                  } while (lVar11 != 0);
                }
                local_80 = 0;
                uStack_78 = 0;
                local_88 = local_90;
                thunk_FUN_1447bdc4c(&local_80,&local_a8);
                plVar9 = local_b0;
                iVar5 = *(int *)(param_1 + 0x1308);
                lVar8 = (longlong)iVar5;
                *(uint *)(param_1 + 0x1308) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x130c) < iVar5 + 1U) {
                  FUN_146252d9a(local_b0,iVar5);
                }
                lVar11 = *plVar9;
                *(undefined8 *)(lVar11 + lVar8 * 0x18) = local_88;
                *(undefined8 *)(lVar11 + 8 + lVar8 * 0x18) = 0;
                *(undefined8 *)(lVar11 + 8 + lVar8 * 0x18) = local_80;
                *(undefined4 *)(lVar11 + 0x10 + lVar8 * 0x18) = (undefined4)uStack_78;
                *(undefined4 *)(lVar11 + 0x14 + lVar8 * 0x18) = uStack_78._4_4_;
                uStack_78 = 0;
                local_80 = 0;
                if (local_a8 != 0) {
                  FUN_1400020a8();
                }
                lVar10 = lVar10 + 0x10;
              } while (lVar10 != lVar12);
            }
            goto LAB_146252a92;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x40 + *(longlong *)(lVar10 + 0x18) + 0x38);
        } while (iVar5 != -1);
      }
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
LAB_146252a92:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146252d94 thunk_FUN_1447bdc4c body=5 status=ok
// SIG undefined thunk_FUN_1447bdc4c(void)

undefined8 * thunk_FUN_1447bdc4c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1447bda9e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 146252d9a FUN_146252d9a body=147 status=ok
// SIG undefined FUN_146252d9a(void)

void FUN_146252d9a(longlong param_1,int param_2)

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



// FUNCTION 146252e2e FUN_146252e2e body=40 status=ok
// SIG undefined FUN_146252e2e(void)

undefined8 FUN_146252e2e(undefined8 param_1,int param_2)

{
  FUN_141699396();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146252e56 FUN_146252e56 body=36 status=ok
// SIG undefined FUN_146252e56(void)

longlong FUN_146252e56(longlong *param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  lVar1 = param_1[6];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x58))();
    lVar1 = param_1[6];
  }
  return lVar1;
}



// FUNCTION 146252e7a FUN_146252e7a body=563 status=ok
// SIG undefined FUN_146252e7a(void)

void FUN_146252e7a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
    puVar2 = *(undefined8 **)(param_1[6] + 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      *puVar2 = &PTR_FUN_14b504d10;
      puVar2[2] = &LAB_145c1e742;
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,"UI_Ready",puVar2);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      *puVar2 = &PTR_FUN_14b504d10;
      puVar2[2] = &LAB_145c1e750;
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,"On_Back_Notify",puVar2);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      *puVar2 = &PTR_FUN_14b504d10;
      puVar2[2] = &LAB_148ac53ba;
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,"Text_Entry_Begin_Notify",puVar2);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      *puVar2 = &PTR_FUN_14b504d10;
      puVar2[2] = &LAB_148ac53c8;
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,"Text_Entry_End_Notify",puVar2);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      *puVar2 = &PTR_FUN_14b504d30;
      puVar2[2] = &LAB_145dcc5d4;
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,"Get_Platform_Controller",puVar2);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      *puVar2 = &PTR_FUN_14b504d50;
      puVar2[2] = &LAB_145df11c4;
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,"Is_Platform_Console",puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x000146253091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[6] + 0x88))();
    return;
  }
  return;
}



// FUNCTION 1462530ae FUN_1462530ae body=338 status=ok
// SIG undefined FUN_1462530ae(void)

void FUN_1462530ae(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) goto LAB_14625316a;
  plVar3 = (longlong *)FUN_14001cc68(0x218);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b507020;
  plVar5 = plVar3 + 2;
  memset(plVar5,0,0x208);
  FUN_1462532a2(plVar5);
  local_38 = plVar5;
  local_30 = plVar3;
  FUN_146253202(&local_38,plVar5);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
LAB_1462531a4:
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001462531d1:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x40) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x0001462531d1;
      }
    }
    else {
      *(longlong **)(param_1 + 0x48) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1462531a4;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
LAB_14625316a:
  *(undefined8 *)(lVar4 + 0x18) = param_2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146253202 FUN_146253202 body=159 status=ok
// SIG undefined FUN_146253202(void)

void FUN_146253202(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14625323f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14625323f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14625323f:
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
                    /* WARNING: Could not recover jumptable at 0x00014625329d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462532a2 FUN_1462532a2 body=286 status=ok
// SIG undefined FUN_1462532a2(void)

void FUN_1462532a2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1462533c0 FUN_1462533c0 body=1144 status=ok
// SIG undefined FUN_1462533c0(void)

void FUN_1462533c0(undefined8 param_1,byte param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  void **ppvVar6;
  longlong lVar7;
  void *pvVar8;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  void *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_70 = &local_68;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = param_1;
  if ((param_2 & 0x24) != 0) {
    FUN_14169d05a(&local_70,&local_98);
    uVar2 = uStack_80;
    lVar7 = (longlong)(int)(uint)uStack_90;
    if (lVar7 != 0) {
      iVar1 = (int)uStack_80;
      lVar5 = (longlong)(int)uStack_80;
      uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + (uint)uStack_90);
      if ((uint)(uStack_80._4_4_ - iVar1) < (uint)uStack_90) {
        FUN_1447a1bd6(&local_88,uVar2 & 0xffffffff);
      }
      memmove((void *)(lVar5 * 0x10 + local_88),local_98,lVar7 << 4);
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
    }
    FUN_1447a1747(local_98,0);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  if ((param_2 & 2) != 0) {
    uVar4 = FUN_142787044();
    FUN_140b7fa3a(&local_a8,uVar4);
    uVar4 = FUN_1427871cc();
    FUN_140b7fa3a(&local_a8,uVar4);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_138 = &DAT_14c872a98;
    cVar3 = FUN_14052bb08(DAT_14c872ce0,L"Internationalization",L"ShouldUseLocalizedPropertyNames");
    if (cVar3 == '\0') {
      local_138 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Internationalization",L"ShouldUseLocalizedPropertyNames",
                    &local_b8);
    }
    ppvVar6 = &local_98;
    if ((char)local_b8 != '\0') {
      ppvVar6 = &local_a8;
    }
    uVar4 = FUN_142787108();
    FUN_140b7fa3a(ppvVar6,uVar4);
  }
  local_b8 = 0;
  uStack_b0 = 0;
  if ((param_2 & 8) != 0) {
    uVar4 = FUN_140e82edc();
    FUN_140b7fa3a(&local_b8,uVar4);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  if ((param_2 & 0x10) != 0) {
    FUN_1457ba5da(&DAT_14c86aa18,&local_c8);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_140b7fa3a(&local_d8,&local_88);
  FUN_140b7fa3a(&local_d8,&local_a8);
  FUN_140b7fa3a(&local_d8,&local_b8);
  FUN_140b7fa3a(&local_d8,&local_c8);
  local_e8 = 0;
  uStack_e0 = 0;
  if ((param_2 & 1) != 0) {
    FUN_140bee9ec(&local_e8,&local_d8);
    if (0 < (longlong)(int)(uint)uStack_90) {
      lVar7 = (longlong)(int)(uint)uStack_90 << 4;
      pvVar8 = local_98;
      do {
        FUN_1412fabe8(&local_e8,pvVar8);
        pvVar8 = (void *)((longlong)pvVar8 + 0x10);
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  local_130 = &local_f8;
  local_108 = local_d8;
  local_100 = (undefined4)uStack_d0;
  local_118 = local_e8;
  local_110 = (undefined4)uStack_e0;
  local_120 = param_5;
  local_138 = (undefined8 *)CONCAT71(local_138._1_7_,param_2);
  local_128 = param_4;
  FUN_14169c35e(param_1);
  FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(0,0);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625383a FUN_14625383a body=158 status=ok
// SIG undefined FUN_14625383a(void)

bool FUN_14625383a(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1462538da FUN_1462538da body=321 status=ok
// SIG undefined FUN_1462538da(void)

void FUN_1462538da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
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
  FUN_14169ef78(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146253a1c FUN_146253a1c body=93 status=ok
// SIG undefined FUN_146253a1c(void)

void FUN_146253a1c(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140d7e454();
  if (lVar1 != 0) {
    local_20 = *(undefined4 *)(param_3 + 1);
    local_28 = *param_3;
    FUN_14169f05e(lVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146253a7a FUN_146253a7a body=4270 status=ok
// SIG undefined FUN_146253a7a(void)

/* WARNING: Removing unreachable block (ram,0x000146254aab) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001462548f4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_146253a7a(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  uint local_a0;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  _DAT_14cc1cb60 = 0;
  _DAT_14cc1cb68 = 0;
  DAT_14cc1cb40 = 0;
  _DAT_14cc1cb48 = 0;
  _DAT_14cc1cb6c = 0xffffffff00000080;
  DAT_14cc1cb74 = 0;
  DAT_14cc1cb80 = 0;
  DAT_14cc1cb88 = 0;
  DAT_14cc1cb90 = 0;
  _DAT_14cc1cb98 = 0;
  local_a0 = 0;
  FUN_1446ddc76(local_a8,"clamp",1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,3);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d199c;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  else {
    uVar4 = 3;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14b3f2748,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,2);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a0c;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 2;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14b3f1684,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,2);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a1a;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 2;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c806,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a28;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,"round",1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a38;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c80a,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a56;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,"floor",1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a64;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c815,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a72;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c819,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a80;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])();
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14a1750fc,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar6 = _DAT_14cc1cb98;
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,1);
  local_78 = 0;
  local_68 = &PTR_LAB_14bd1c840;
  uStack_60 = &LAB_1494d1a8e;
  local_88 = FUN_1494d19ae;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar3);
  uVar4 = 1;
  if (DAT_14cc1cb9c < uVar3) {
    FUN_146254b2a(uVar6 & 0xffffffff);
    uVar4 = (undefined4)local_98;
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = uVar4;
  *(code **)(lVar2 + 0x10 + lVar7) = local_88;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = local_78;
  local_78 = 0;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_68;
  puVar1[1] = local_68._4_4_;
  puVar1[2] = (undefined4)uStack_60;
  puVar1[3] = uStack_60._4_4_;
  if ((*(longlong *)(lVar2 + 0x10 + lVar7) == 0) && (local_88 != (code *)0x0)) {
    (*(code *)local_68[2])(&local_68);
  }
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c81d,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar3 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < uVar3) {
    uVar6 = _DAT_14cc1cb98 & 0xffffffff;
    DAT_14cc1cb98 = uVar3;
    FUN_146254b2a(uVar6);
    uVar3 = DAT_14cc1cb98;
  }
  DAT_14cc1cb98 = uVar3;
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1a9c;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = (undefined4)uStack_90;
  puVar1[3] = uStack_90._4_4_;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c822,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1acc;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = (undefined4)uStack_90;
  puVar1[3] = uStack_90._4_4_;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14a175110,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1afc;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = (undefined4)uStack_90;
  puVar1[3] = uStack_90._4_4_;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c827,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1b0a;
  puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = (undefined4)uStack_90;
  puVar1[3] = uStack_90._4_4_;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,"isqrt",1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1b26;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14b9b0300,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1b3a;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14a1c8ef5,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 1;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1b48;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_14bd1c832,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  DAT_14cc1cb98 = DAT_14cc1cb98 + 1;
  if (DAT_14cc1cb9c < DAT_14cc1cb98) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 0;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1b56;
  local_a0 = DAT_14cc1cb98;
  FUN_1446ddc76(local_a8,&DAT_149dfd14e,1);
  local_98 = local_a8;
  uStack_90 = &local_a0;
  FUN_14147c052(&DAT_14cc1cb40,local_9c,&local_98,0);
  uVar3 = DAT_14cc1cb98;
  lVar7 = (longlong)(int)DAT_14cc1cb98;
  uVar5 = DAT_14cc1cb98 + 1;
  _DAT_14cc1cb98 = CONCAT44(DAT_14cc1cb9c,uVar5);
  if (DAT_14cc1cb9c < uVar5) {
    FUN_146254b2a(uVar3);
  }
  lVar2 = DAT_14cc1cb90;
  lVar7 = lVar7 * 0x50;
  *(undefined4 *)(DAT_14cc1cb90 + lVar7) = 0;
  *(code **)(lVar2 + 0x10 + lVar7) = FUN_1494d19ae;
  *(undefined8 *)(lVar2 + 0x20 + lVar7) = 0;
  *(undefined ***)(lVar2 + 0x30 + lVar7) = &PTR_LAB_14bd1c840;
  *(undefined1 **)(lVar2 + 0x38 + lVar7) = &LAB_1494d1b60;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146254b2a FUN_146254b2a body=159 status=ok
// SIG undefined FUN_146254b2a(void)

void FUN_146254b2a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cc1cb98;
  if (param_1 <= (int)DAT_14cc1cb98) {
    if (DAT_14cc1cb9c == 0) {
      uVar2 = 4;
      if (4 < DAT_14cc1cb98) {
        uVar2 = DAT_14cc1cb98;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cc1cb98 * 3) >> 3) + (longlong)(int)DAT_14cc1cb98 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    DAT_14cc1cb9c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cc1cb90,param_1,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146254bd0 FUN_146254bd0 body=371 status=ok
// SIG undefined FUN_146254bd0(void)

undefined4 * FUN_146254bd0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146254d44(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  if ((uVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar6);
    uVar6 = *local_40;
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  if (((bVar2 & 1) != 0) && (uVar6 != 0)) {
    FUN_1456cec3c(uVar6);
  }
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = *(int *)(param_1 + 0x48) - 1U & (uVar4 >> 0x10 ^ uVar4);
    *(uint *)((longlong)local_40 + 0x14) = uVar4;
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(local_40 + 2) =
         *(undefined4 *)
          (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4) =
         local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_146254e2c(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146254d44 FUN_146254d44 body=231 status=ok
// SIG undefined FUN_146254d44(void)

int * FUN_146254d44(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146254e2c FUN_146254e2c body=517 status=ok
// SIG undefined FUN_146254e2c(void)

void FUN_146254e2c(longlong *param_1)

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



// FUNCTION 146255032 FUN_146255032 body=40 status=ok
// SIG undefined FUN_146255032(void)

undefined8 FUN_146255032(undefined8 param_1,int param_2)

{
  FUN_1416a1074();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14625505a FUN_14625505a body=3838 status=ok
// SIG undefined FUN_14625505a(void)

void FUN_14625505a(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0xc18);
  if (cVar1 != '\0') {
    switch(param_2) {
    case 2:
      plVar2 = (longlong *)(param_1 + 0x3c0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x3a8;
      break;
    case 3:
      plVar2 = (longlong *)(param_1 + 0x420);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x408;
      break;
    case 4:
      plVar2 = (longlong *)(param_1 + 0x480);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x468;
      break;
    case 5:
      plVar2 = (longlong *)(param_1 + 0x4c8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x4b0;
      break;
    case 6:
      plVar2 = (longlong *)(param_1 + 0x4f0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x4d8;
      break;
    case 7:
      plVar2 = (longlong *)(param_1 + 0x510);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x4f8;
      break;
    case 8:
      plVar2 = (longlong *)(param_1 + 0x530);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x518;
      break;
    case 9:
      plVar2 = (longlong *)(param_1 + 0x578);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x560;
      break;
    case 10:
      plVar2 = (longlong *)(param_1 + 0x598);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x580;
      break;
    case 0xb:
      plVar2 = (longlong *)(param_1 + 0x5b8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x5a0;
      break;
    case 0xc:
      plVar2 = (longlong *)(param_1 + 0x238);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x220;
      break;
    case 0xd:
      plVar2 = (longlong *)(param_1 + 600);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x240;
      break;
    case 0xe:
      plVar2 = (longlong *)(param_1 + 0x278);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x260;
      break;
    case 0xf:
      plVar2 = (longlong *)(param_1 + 0x298);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x280;
      break;
    case 0x10:
      plVar2 = (longlong *)(param_1 + 0x378);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x360;
      break;
    case 0x11:
      plVar2 = (longlong *)(param_1 + 0x3a0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x388;
      break;
    case 0x12:
      plVar2 = (longlong *)(param_1 + 0x3e0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x3c8;
      break;
    case 0x13:
      plVar2 = (longlong *)(param_1 + 0x158);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x140;
      break;
    case 0x14:
      plVar2 = (longlong *)(param_1 + 0x178);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x160;
      break;
    case 0x15:
      plVar2 = (longlong *)(param_1 + 0x198);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x180;
      break;
    case 0x16:
      plVar2 = (longlong *)(param_1 + 0x1b8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x1a0;
      break;
    case 0x17:
      plVar2 = (longlong *)(param_1 + 0x18);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      break;
    case 0x18:
      plVar2 = (longlong *)(param_1 + 0x38);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x20;
      break;
    case 0x19:
      plVar2 = (longlong *)(param_1 + 0x58);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x40;
      break;
    case 0x1a:
      plVar2 = (longlong *)(param_1 + 0x78);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x60;
      break;
    case 0x1b:
      plVar2 = (longlong *)(param_1 + 0x6c8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x6b0;
      break;
    case 0x1c:
      plVar2 = (longlong *)(param_1 + 0x6a8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x690;
      break;
    case 0x1d:
      plVar2 = (longlong *)(param_1 + 0x6e8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x6d0;
      break;
    case 0x1e:
      plVar2 = (longlong *)(param_1 + 0x708);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x6f0;
      break;
    default:
      goto switchD_14625508f_caseD_1f;
    case 0x20:
      plVar2 = (longlong *)(param_1 + 0x888);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x870;
      break;
    case 0x21:
      plVar2 = (longlong *)(param_1 + 0x848);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x830;
      break;
    case 0x22:
      plVar2 = (longlong *)(param_1 + 0x400);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 1000;
      break;
    case 0x23:
      plVar2 = (longlong *)(param_1 + 0x828);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x810;
      break;
    case 0x25:
      plVar2 = (longlong *)(param_1 + 0x118);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x100;
      break;
    case 0x26:
      plVar2 = (longlong *)(param_1 + 0x138);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x120;
      break;
    case 0x27:
      plVar2 = (longlong *)(param_1 + 0x768);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x750;
      break;
    case 0x28:
      plVar2 = (longlong *)(param_1 + 0x7a8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x790;
      break;
    case 0x29:
      plVar2 = (longlong *)(param_1 + 0x788);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x770;
      break;
    case 0x2a:
      plVar2 = (longlong *)(param_1 + 0x7c8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x7b0;
      break;
    case 0x2b:
      plVar2 = (longlong *)(param_1 + 0xb8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0xa0;
      break;
    case 0x2c:
      plVar2 = (longlong *)(param_1 + 0xd8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0xc0;
      break;
    case 0x2d:
      plVar2 = (longlong *)(param_1 + 0x98);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x80;
      break;
    case 0x2e:
      plVar2 = (longlong *)(param_1 + 0x440);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x428;
      break;
    case 0x2f:
      plVar2 = (longlong *)(param_1 + 0x460);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x448;
      break;
    case 0x30:
      plVar2 = (longlong *)(param_1 + 0xf8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0xe0;
      break;
    case 0x31:
      plVar2 = (longlong *)(param_1 + 0x868);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x850;
      break;
    case 0x32:
      plVar2 = (longlong *)(param_1 + 0x1d8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x1c0;
      break;
    case 0x33:
      plVar2 = (longlong *)(param_1 + 0x8d0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x8b8;
      break;
    case 0x34:
      plVar2 = (longlong *)(param_1 + 0x8b0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x898;
      break;
    case 0x35:
      plVar2 = (longlong *)(param_1 + 0x808);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x7f0;
      break;
    case 0x36:
      plVar2 = (longlong *)(param_1 + 0x7e8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 2000;
      break;
    case 0x37:
      plVar2 = (longlong *)(param_1 + 0x218);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x200;
      break;
    case 0x38:
      plVar2 = (longlong *)(param_1 + 0x5f8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x5e0;
      break;
    case 0x39:
      plVar2 = (longlong *)(param_1 + 0x620);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x608;
      break;
    case 0x3a:
      plVar2 = (longlong *)(param_1 + 0x728);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x710;
      break;
    case 0x3b:
      plVar2 = (longlong *)(param_1 + 0x748);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x730;
      break;
    case 0x3c:
      plVar2 = (longlong *)(param_1 + 0x2b8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x2a0;
      break;
    case 0x3d:
      plVar2 = (longlong *)(param_1 + 0x2d8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x2c0;
      break;
    case 0x3e:
      plVar2 = (longlong *)(param_1 + 0x2f8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x2e0;
      break;
    case 0x3f:
      plVar2 = (longlong *)(param_1 + 0x318);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x300;
      break;
    case 0x41:
      plVar2 = (longlong *)(param_1 + 0x338);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 800;
      break;
    case 0x42:
      plVar2 = (longlong *)(param_1 + 0x358);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x340;
      break;
    case 0x43:
      plVar2 = (longlong *)(param_1 + 0x950);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x938;
      break;
    case 0x44:
      plVar2 = (longlong *)(param_1 + 0x648);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x630;
      break;
    case 0x45:
      plVar2 = (longlong *)(param_1 + 0x8f0);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x8d8;
      break;
    case 0x46:
      plVar2 = (longlong *)(param_1 + 0x1f8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x1e0;
      break;
    case 0x47:
      plVar2 = (longlong *)(param_1 + 0x910);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x8f8;
      break;
    case 0x48:
      plVar2 = (longlong *)(param_1 + 0x930);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x918;
      break;
    case 0x49:
      plVar2 = (longlong *)(param_1 + 0x9e8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x9d0;
      break;
    case 0x4a:
      plVar2 = (longlong *)(param_1 + 0x558);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x540;
      break;
    case 0x4b:
      plVar2 = (longlong *)(param_1 + 0x5d8);
      cVar1 = FUN_146255f58(plVar2,param_1 + 0xcc8);
      if (cVar1 == '\0') {
        return;
      }
      if (*plVar2 == 0) {
        return;
      }
      param_1 = param_1 + 0x5c0;
    }
    FUN_14480f766(param_1);
    *plVar2 = 0;
  }
switchD_14625508f_caseD_1f:
  return;
}



// FUNCTION 146255f58 FUN_146255f58 body=130 status=ok
// SIG undefined FUN_146255f58(void)

bool FUN_146255f58(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    plVar3 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_2[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4
                    );
    if (iVar2 != -1) {
      while (plVar3 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18), *plVar3 != lVar1) {
        iVar2 = (int)plVar3[2];
        if (iVar2 == -1) {
          return false;
        }
      }
      if (plVar3 == (longlong *)0x0) {
        return false;
      }
      plVar3 = plVar3 + 1;
      if (plVar3 == (longlong *)0x0) {
        return false;
      }
      *(int *)plVar3 = (int)*plVar3 + -1;
      return (int)*plVar3 == 0;
    }
  }
  return false;
}



// FUNCTION 146255fda FUN_146255fda body=87 status=ok
// SIG undefined FUN_146255fda(void)

void FUN_146255fda(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x38);
    FUN_140545fa2(uVar1);
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x30);
    FUN_146256032(uVar1);
    return;
  }
  return;
}



// FUNCTION 146256032 FUN_146256032 body=473 status=ok
// SIG undefined FUN_146256032(void)

void FUN_146256032(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong **local_80;
  undefined4 local_78;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_1403ae2fa(param_1 + 0xc1d,3,0);
  if (cVar1 == '\0') goto LAB_1462561ae;
  lVar3 = (**(code **)(*param_1 + 0x5d8))(param_1);
  if (lVar3 == 0) goto LAB_1462561ae;
  lVar4 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_1462561ae;
  uVar2 = FUN_14042831e(param_1);
  if (((int)uVar2 < 0) || ((int)param_1[0xf1e] <= (int)uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  lVar4 = param_1[0xf1d];
  lVar5 = FUN_14011c349();
  lVar4 = lVar4 + (ulonglong)uVar2 * 0x48;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0xc) == -1)) goto LAB_1462561ae;
  local_88 = 0;
  FUN_140d78d10(param_1 + 0xc1d,0,0xff,1);
  local_3c = *(undefined4 *)(lVar4 + 0xc);
  lVar4 = *(longlong *)(lVar3 + 0xc38);
  if (lVar4 == 0) goto LAB_1462561ae;
  if (param_1 == (longlong *)0x0 || DAT_14c950c29 != 1) {
    if (param_1 != (longlong *)0x0) goto LAB_14625614d;
    local_48 = (longlong *)0x0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_14625614d:
    local_48 = param_1 + 0x77d;
  }
  local_50 = param_1;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(lVar3);
  }
  local_58 = lVar3 + 0xe18;
  local_68 = *(undefined8 *)(lVar5 + 0x48);
  local_80 = &local_50;
  local_78 = 1;
  local_88 = 1;
  local_60 = lVar3;
  FUN_1416a1924(lVar4,&local_3c);
  FUN_1458df226(param_1,1);
LAB_1462561ae:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146256220 FUN_146256220 body=159 status=ok
// SIG undefined FUN_146256220(void)

void FUN_146256220(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1416a1b56(param_1 + 0x28,&local_28);
    if ((int)uStack_20 - 2U < 0x7fffffff) {
      FUN_1400020e8(param_2,L"Entitle=",8);
      iVar1 = (int)uStack_20 + -1;
      if ((int)uStack_20 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_28,iVar1);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462562c0 FUN_1462562c0 body=589 status=ok
// SIG undefined FUN_1462562c0(void)

void FUN_1462562c0(longlong param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_60;
  longlong local_58 [3];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_141356c7a(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a7b4ca();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      piVar7 = (int *)FUN_1416a23f8();
      iVar2 = *(int *)(param_2 + 0x20);
      iVar3 = *piVar7;
      lVar6 = FUN_1410a623c();
      plVar12 = (longlong *)(lVar6 + 0x38);
      if (iVar2 == iVar3) {
        plVar12 = (longlong *)(lVar6 + 0x20);
      }
      lVar6 = *plVar12;
      local_58[2] = lVar6;
      uVar8 = FUN_14477b664(plVar12[1]);
      local_40 = FUN_14477b664(uVar8);
      lVar9 = plVar12[2];
      dVar1 = *(double *)(param_2 + 0x48);
      local_38 = lVar9;
      if (local_40 == 0) {
        uVar8 = FUN_145764ed6();
        local_40 = FUN_14477b664(uVar8);
      }
      if (lVar9 == 0) {
        local_38 = 0;
        lVar9 = 0;
        if ((lVar6 != 0) && (local_40 != 0)) {
          plVar12 = *(longlong **)(local_40 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
            lVar9 = 0;
            local_38 = lVar9;
          }
          else {
            uVar8 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar9 = FUN_144aff482(uVar8,local_58 + 2);
            local_38 = lVar9;
          }
        }
      }
      uVar8 = FUN_140fcc63a(lVar9);
      if (local_40 == 0) {
        uVar10 = FUN_145764ed6();
        local_40 = FUN_14477b664(uVar10);
      }
      lVar6 = local_38;
      if (((local_38 == 0) && (lVar6 = 0, local_40 != 0)) && (local_58[2] != 0)) {
        plVar12 = *(longlong **)(local_40 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
          lVar6 = 0;
          local_38 = lVar6;
        }
        else {
          uVar10 = (**(code **)(*plVar12 + 0x110))(plVar12);
          lVar6 = FUN_144aff482(uVar10,local_58 + 2);
          local_38 = lVar6;
        }
      }
      puVar11 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(lVar6 + 8);
      }
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_1400b2348(puVar11,local_58,1);
      local_60 = 1;
      local_68 = (int)dVar1;
      FUN_145c5cda5(L"points_allocated",local_58,lVar5,uVar8);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625650e FUN_14625650e body=185 status=ok
// SIG undefined FUN_14625650e(void)

bool FUN_14625650e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462565c8 FUN_1462565c8 body=1010 status=ok
// SIG undefined FUN_1462565c8(void)

void FUN_1462565c8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  PVOID pvVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  PSRWLOCK SRWLock;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  undefined1 local_70;
  undefined7 uStack_6f;
  longlong *local_68;
  PSRWLOCK local_60;
  int local_58;
  undefined4 uStack_54;
  uint *local_50;
  undefined1 local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1414ae211(&local_60);
  cVar6 = FUN_14493b798(param_2,&local_60);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
    FUN_1414ae1a9(&local_60);
    cVar6 = FUN_14493b798(param_2,&local_60);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (cVar6 != '\0') {
      FUN_1402815f4(param_1,&local_70);
      puVar3 = *(uint **)(CONCAT71(uStack_6f,local_70) + 0x3e0);
      local_60 = (PSRWLOCK)(puVar3 + 0x30);
      local_58 = 1;
      AcquireSRWLockExclusive(local_60);
      puVar3[0x2e] = puVar3[0x2e] + 1;
      local_48 = 1;
      local_50 = puVar3;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_68 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_68)();
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
      }
      cVar6 = *(char *)(param_2 + 0x38);
      if (cVar6 == '\x03') {
        bVar11 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_146256761:
        uVar8 = (uint)!bVar11;
      }
      else if (cVar6 == '\x02') {
        uVar8 = *(uint *)(param_2 + 0x44);
      }
      else {
        uVar8 = 0;
        if (cVar6 == '\x01') {
          bVar11 = *(int *)(param_2 + 0x44) == 0;
          goto LAB_146256761;
        }
      }
      if (uVar8 == local_50[2]) {
        if (local_50[3] == 0) {
          uVar10 = 1;
          goto LAB_14625697f;
        }
      }
      else {
        uVar10 = local_50[3] + 1;
LAB_14625697f:
        local_50[2] = uVar8;
        local_50[3] = uVar10;
        cVar6 = *(char *)(param_2 + 0x38);
      }
      if (cVar6 == '\x03') {
        bVar11 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_14625678e:
        local_70 = !bVar11;
      }
      else if (cVar6 == '\x02') {
        local_70 = (undefined1)*(undefined4 *)(param_2 + 0x44);
      }
      else {
        if (cVar6 == '\x01') {
          bVar11 = *(int *)(param_2 + 0x44) == 0;
          goto LAB_14625678e;
        }
        local_70 = 0;
      }
      uVar7 = FUN_1405c673d();
      FUN_1458e1fcc(param_1,&local_60,uVar7,&local_70);
      SRWLock = local_60;
      goto joined_r0x0001462567ba;
    }
    FUN_145bf9a33(&local_60);
    cVar6 = FUN_14493b798(param_2,&local_60);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') goto LAB_1462567c6;
    FUN_1402815f4(param_1,&local_60);
    pvVar4 = local_60[0x7c].Ptr;
    SRWLock = (PSRWLOCK)((longlong)pvVar4 + 0xc0);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)((longlong)pvVar4 + 0xb8) = *(int *)((longlong)pvVar4 + 0xb8) + 1;
    plVar5 = (longlong *)CONCAT44(uStack_54,local_58);
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
    if (*(char *)(param_2 + 0x38) == '\x01') {
      cVar6 = *(int *)(param_2 + 0x44) != 0;
    }
    else {
      cVar6 = FUN_140321d1a(param_2 + 0x38);
    }
    if (*(char *)((longlong)pvVar4 + 0x30) == cVar6) {
      if (*(int *)((longlong)pvVar4 + 0x34) == 0) {
        iVar9 = 1;
        goto LAB_146256990;
      }
    }
    else {
      iVar9 = *(int *)((longlong)pvVar4 + 0x34) + 1;
LAB_146256990:
      *(char *)((longlong)pvVar4 + 0x30) = cVar6;
      *(int *)((longlong)pvVar4 + 0x34) = iVar9;
    }
  }
  else {
    FUN_1402815f4(param_1,&local_70);
    puVar3 = *(uint **)(CONCAT71(uStack_6f,local_70) + 0x3e0);
    local_60 = (PSRWLOCK)(puVar3 + 0x30);
    local_58 = 1;
    AcquireSRWLockExclusive(local_60);
    puVar3[0x2e] = puVar3[0x2e] + 1;
    local_48 = 1;
    local_50 = puVar3;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_68 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    cVar6 = *(char *)(param_2 + 0x38);
    if (cVar6 == '\x03') {
      bVar11 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_146256681:
      uVar8 = (uint)!bVar11;
    }
    else if (cVar6 == '\x02') {
      uVar8 = *(uint *)(param_2 + 0x44);
    }
    else {
      if (cVar6 == '\x01') {
        bVar11 = *(int *)(param_2 + 0x44) == 0;
        goto LAB_146256681;
      }
      uVar8 = 0;
    }
    if (uVar8 == *local_50) {
      if (local_50[1] == 0) {
        uVar10 = 1;
        goto LAB_14625694a;
      }
    }
    else {
      uVar10 = local_50[1] + 1;
LAB_14625694a:
      *local_50 = uVar8;
      local_50[1] = uVar10;
    }
    uVar7 = FUN_1405c673d();
    FUN_14130caba(param_1,&local_60,uVar7);
    SRWLock = local_60;
joined_r0x0001462567ba:
    local_60 = SRWLock;
    if (local_58 == 0) {
      ReleaseSRWLockShared(SRWLock);
      goto LAB_1462567c6;
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_1462567c6:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462569bc FUN_1462569bc body=763 status=ok
// SIG undefined FUN_1462569bc(void)

longlong * FUN_1462569bc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (longlong *)FUN_146256cb8();
  local_40 = local_38 + 2;
  lVar6 = param_3[3];
  plVar4 = (longlong *)param_3[4];
  if (plVar4 == (longlong *)0x0) {
    local_38[0x35] = lVar6;
    plVar8 = (longlong *)local_38[0x36];
    if (plVar8 != (longlong *)0x0) {
      local_38[0x36] = 0;
LAB_146256b87:
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar4 != (longlong *)0x0) goto LAB_146256a39;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38[0x35] = lVar6;
    plVar8 = (longlong *)local_38[0x36];
    if (plVar4 == plVar8) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      local_38[0x36] = (longlong)plVar4;
      if (plVar8 != (longlong *)0x0) goto LAB_146256b87;
    }
LAB_146256a39:
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  cVar5 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar5 == '\0') goto LAB_146256abe;
  FUN_145c43050(param_1 + 400,&local_50,param_3);
  plVar4 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_40[0x31] = local_50;
    plVar8 = (longlong *)local_40[0x32];
    if (plVar8 != (longlong *)0x0) {
      local_40[0x32] = 0;
LAB_146256c28:
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000146256c63:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    local_40[0x31] = local_50;
    plVar8 = (longlong *)local_40[0x32];
    if (local_48 == plVar8) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar8 = plVar4;
        goto joined_r0x000146256c63;
      }
    }
    else {
      local_40[0x32] = (longlong)local_48;
      if (plVar8 != (longlong *)0x0) goto LAB_146256c28;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_146256abe:
  lVar6 = FUN_14108b142(param_1 + 0x2a8);
  if (lVar6 != 0) {
    lVar6 = param_3[2];
    FUN_146256d42(&local_50,&local_40);
    uVar7 = FUN_14108b142(param_1 + 0x2a8);
    FUN_14108b3c6(lVar6 + 0x1a8,local_58,uVar7,&local_50);
    FUN_1449db362(&local_50);
  }
  plVar4 = local_38;
  *param_2 = (longlong)local_40;
  param_2[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_38 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_38)(local_38);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146256cb8 FUN_146256cb8 body=137 status=ok
// SIG undefined FUN_146256cb8(void)

undefined8 * FUN_146256cb8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1b8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99a2e0;
  memset(puVar1 + 2,0,0x1a8);
  FUN_145c42fa8(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b631f60;
  *(undefined1 *)((longlong)puVar1 + 0x18c) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  return puVar1;
}



// FUNCTION 146256d42 FUN_146256d42 body=298 status=ok
// SIG undefined FUN_146256d42(void)

longlong * FUN_146256d42(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b42a7c0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99a300;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_145a1fb18;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b42a7c0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99a300;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_145a1fb18;
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



// FUNCTION 146256e6c FUN_146256e6c body=226 status=ok
// SIG undefined FUN_146256e6c(void)

void FUN_146256e6c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_2 + 0xf48);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x73eb) != '\0')) {
      FUN_1416a2400(lVar3 + 0x71a8,param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x000146256eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6f0))(plVar1);
    return;
  }
  param_1 = param_1 + 8;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    lVar3 = *(longlong *)(lVar3 + 0x1f0);
    if (lVar3 != 0) {
      lVar4 = FUN_1403ca142();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        cVar2 = FUN_144a87d0a(lVar3);
        if (cVar2 != '\0') {
          cVar2 = FUN_144729dda(param_1);
          if (cVar2 != '\0') {
            lVar3 = FUN_14479d2ce(param_1);
            plVar1 = *(longlong **)(lVar3 + 0x170);
            if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146256f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar1 + 0x7a0))(plVar1,param_2);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146256f4e FUN_146256f4e body=132 status=ok
// SIG undefined FUN_146256f4e(void)

void FUN_146256f4e(longlong param_1,int param_2)

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



// FUNCTION 146256fd4 FUN_146256fd4 body=185 status=ok
// SIG undefined FUN_146256fd4(void)

void FUN_146256fd4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar2 = FUN_1449db7f2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
        lVar2 = FUN_14094c9c2();
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
          local_28[0] = 0;
          local_28[1] = 0;
          FUN_1416a30d0(*(longlong *)(lVar2 + 0x30),*(undefined4 *)(lVar1 + 0xe0),8,local_28);
          if (local_28[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625708e FUN_14625708e body=186 status=ok
// SIG undefined FUN_14625708e(void)

undefined8 * FUN_14625708e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_145f96d8a;
      local_40 = 0;
      FUN_14625714a(local_38,param_1);
      FUN_1448b6402(param_3 + 0x6048,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_14625711c;
    }
  }
  *param_2 = 0;
LAB_14625711c:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625714a FUN_14625714a body=428 status=ok
// SIG undefined FUN_14625714a(void)

longlong * FUN_14625714a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_14625722a:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99d850;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14625722a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99d850;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1462572f6 FUN_1462572f6 body=186 status=ok
// SIG undefined FUN_1462572f6(void)

undefined8 * FUN_1462572f6(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_148df5c44;
      local_40 = 0;
      FUN_1462573b2(local_38,param_1);
      FUN_1411aefd8(param_3 + 0x6150,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_146257384;
    }
  }
  *param_2 = 0;
LAB_146257384:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462573b2 FUN_1462573b2 body=428 status=ok
// SIG undefined FUN_1462573b2(void)

longlong * FUN_1462573b2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_146257492:
    *puVar5 = &PTR_LAB_14b9667e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99e690;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146257492;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9667e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99e690;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14625755e FUN_14625755e body=431 status=ok
// SIG undefined FUN_14625755e(void)

void FUN_14625755e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + -0x20;
  (**(code **)(*(longlong *)(param_1 + -0x20) + 0x50))(lVar1,&local_70);
  if ((longlong)local_68 != 0) {
    lVar2 = param_1 + -0xe38;
    lVar6 = (longlong)local_68 << 3;
    lVar5 = local_70;
    do {
      lVar4 = FUN_140254f32(lVar2,lVar5);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x146) == '\0')) {
        uVar3 = *(undefined8 *)(param_1 + -0x200);
        lVar4 = *(longlong *)(param_1 + 0x110);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
        }
        local_88 = 0;
        lStack_80 = 0;
        if ((~DAT_14c950c29 & 1) == 0 && lVar4 != 0) {
          FUN_1456cec3c(lVar4);
LAB_14625762c:
          lStack_80 = lVar4 + 0x3be8;
        }
        else {
          if (lVar4 != 0) goto LAB_14625762c;
          lStack_80 = 0;
        }
        local_98 = 0;
        lStack_90 = 0;
        local_88 = lVar4;
        if ((lVar2 == 0) || ((DAT_14c950c29 & 1) == 0)) {
          lStack_90 = lVar1;
          if (lVar2 == 0) {
            lStack_90 = 0;
          }
        }
        else {
          FUN_1456cec3c(lVar2);
          lStack_90 = lVar1;
        }
        local_98 = lVar2;
        FUN_1416a327c(uVar3,lVar5,&local_98,&local_88);
      }
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if (local_70 != 0) {
    FUN_1400020a8(local_70);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625770e FUN_14625770e body=538 status=ok
// SIG undefined FUN_14625770e(void)

longlong * FUN_14625770e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
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
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + -0xa80) != 0) {
    lVar6 = FUN_144a7b4ca();
    lVar2 = *(longlong *)(param_1 + -0xa80);
    if ((((lVar2 != 0) && (lVar6 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)))) {
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_141149c26(local_98,lVar2 + 0xc90);
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar7 = 0;
      local_b0 = local_88;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
        iVar7 = local_70;
      }
      local_c8 = local_a8;
      uVar4 = local_c8;
      local_c0 = local_a0;
      local_bc = local_9c;
      local_d8 = local_b8;
      local_d0 = local_b0;
      local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      local_e0 = local_98;
      if ((local_c8._4_4_ != iVar7) || (local_b0 != local_88)) {
        iVar5 = local_c8._4_4_;
        local_c8 = uVar4;
        do {
          lVar2 = *local_e0;
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
               *(undefined8 *)((longlong)iVar5 * 0x18 + lVar2);
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar5 = local_c8._4_4_;
          uVar4 = local_c8;
        } while (local_e0 != local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar7));
      }
      local_c8 = uVar4;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_141149b74(local_98);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625792a FUN_14625792a body=75 status=ok
// SIG undefined FUN_14625792a(void)

void FUN_14625792a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_146257976(param_1 + -8,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 146257976 FUN_146257976 body=1146 status=ok
// SIG undefined FUN_146257976(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_146257976(longlong param_1,longlong **param_2,HWND param_3,undefined8 *param_4,
                 undefined4 *param_5,longlong *param_6,undefined8 *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  HWND pHVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  longlong *local_130;
  longlong **local_128;
  undefined4 local_120;
  undefined1 local_118;
  char local_109;
  longlong local_108;
  longlong local_100 [2];
  undefined8 *local_f0;
  longlong **local_e8;
  HWND local_e0;
  undefined8 *local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  longlong **local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar11 = DAT_14cc28f30;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_68 = (longlong *)0x0;
  local_108 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(local_108 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar4 ^ 1);
  }
  local_109 = '\x01';
  if (*(int *)(lVar11 + uVar7 * 4) == 0) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_109 = FUN_14054d46e(&DAT_14c846b20,L"fsr3swapchain");
  }
  if (param_3 == (HWND)0x0) {
    bVar13 = false;
  }
  else {
    pHVar8 = GetParent(param_3);
    bVar13 = pHVar8 != (HWND)0x0;
  }
  if ((local_109 == '\0') || (bVar13)) {
    local_128 = &local_68;
    local_130 = param_6;
    local_138 = param_5;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                      (*(longlong **)(param_1 + 0x28),param_2,param_3,param_4);
    plVar9 = (longlong *)0x0;
  }
  else {
    local_98 = *param_4;
    uStack_90 = param_4[1];
    local_88 = *(undefined4 *)(param_4 + 2);
    uStack_84 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_80 = *(undefined4 *)(param_4 + 3);
    uStack_7c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_78 = *(undefined4 *)(param_4 + 4);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_70 = *(undefined4 *)(param_4 + 5);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_d8 = &local_98;
    local_a8 = param_5[4];
    local_d0 = &local_b8;
    local_b8 = *param_5;
    uStack_b4 = param_5[1];
    uStack_b0 = param_5[2];
    uStack_ac = param_5[3];
    local_100[1] = 0x30006;
    local_e8 = &local_68;
    local_c8 = *(undefined8 *)(param_1 + 0x20);
    plVar9 = (longlong *)0x0;
    local_100[0] = 0;
    lVar11 = *(longlong *)(param_1 + 0x38);
    local_60 = 2;
    local_58 = 0;
    local_e0 = param_3;
    local_c0 = param_2;
    local_50 = (**(code **)(*DAT_14ca83900 + 0x3b8))();
    local_f0 = &local_60;
    iVar6 = (**(code **)(lVar11 + 0x20))(local_100,local_100 + 1,lVar11 + 8);
    if (iVar6 == 0) {
      (**(code **)(*local_68 + 0x10))();
      plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
      lVar11 = *(longlong *)(param_1 + 0x38);
      plVar9[1] = (longlong)&PTR_FUN_149e002e8;
      *(undefined4 *)(plVar9 + 2) = 0;
      *plVar9 = (longlong)&PTR_FUN_14bea6570;
      plVar9[1] = (longlong)&PTR_FUN_14bea66b8;
      plVar9[3] = local_100[0];
      plVar9[4] = (longlong)local_68;
      plVar9[5] = lVar11;
      LOCK();
      *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
      UNLOCK();
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar5 = FUN_14054d46e(&DAT_14c846b20,L"fsr3hudless");
      if (cVar5 != '\0') {
        FUN_140635eb8(DAT_14cc28eb0,1,0xd000000,0);
      }
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar5 = FUN_14054d46e(&DAT_14c846b20,L"fsr3async");
      if (cVar5 != '\0') {
        FUN_140635eb8(DAT_14cc28f40,1,0xd000000,0);
      }
    }
  }
  if (iVar6 != 0) goto LAB_146257c8d;
  puVar2 = (undefined4 *)*param_4;
  local_120 = FUN_1416a3386(*(undefined4 *)(param_4 + 1));
  local_130 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    local_130 = local_68;
  }
  local_118 = 0;
  local_138 = puVar2;
  local_128 = param_2;
  plVar10 = (longlong *)
            (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),3,puVar2);
  if (plVar10 == (longlong *)0x0) {
    iVar6 = -0x7ff8fff2;
    goto LAB_146257c8d;
  }
  if (plVar9 == (longlong *)0x0) {
    plVar9 = local_68;
  }
  *param_7 = plVar9;
  piVar3 = DAT_14cc28f48;
  iVar6 = 0;
  if (local_109 == '\0') goto LAB_146257c8d;
  piVar1 = (int *)(local_108 + 0xc60);
  if (*piVar1 == 0x40000002) {
    iVar12 = *DAT_14cc28f48;
LAB_146257dc0:
    uVar7 = 0;
    lVar11 = DAT_14cc28eb8;
  }
  else {
    bVar4 = FUN_144a61b4f();
    lVar11 = DAT_14cc28eb8;
    iVar12 = piVar3[bVar4 ^ 1];
    if (*piVar1 == 0x40000002) goto LAB_146257dc0;
    bVar4 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar4 ^ 1);
  }
  if (iVar12 == 0 && *(int *)(lVar11 + uVar7 * 4) == 0) {
    (**(code **)(*plVar10 + 0x60))(plVar10,1);
  }
  else {
    (**(code **)(*plVar10 + 0x58))(plVar10,1);
  }
LAB_146257c8d:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146257df2 FUN_146257df2 body=505 status=ok
// SIG undefined FUN_146257df2(void)

void FUN_146257df2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_141277154(0,param_2,&local_78);
  if ((longlong)(int)uStack_70 != 0) {
    local_a8 = local_78;
    plVar10 = local_78 + (longlong)(int)uStack_70 * 2;
    do {
      lVar4 = *local_a8;
      lVar1 = lVar4 + 0x20;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar1;
      if (*(int *)(lVar4 + 0x38) == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar9 = *(int *)(lVar4 + 0x38);
      }
      plVar11 = (longlong *)(lVar4 + 0x10);
      uStack_80 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_58;
      uVar6 = local_88;
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (undefined4)uStack_60;
      uStack_8c = uStack_60._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar8 = local_88._4_4_;
      local_a0 = plVar11;
      if ((local_88._4_4_ != iVar9) || (local_88 = uVar6, uStack_60 != lVar1)) {
        do {
          local_88 = uVar6;
          lVar4 = *(longlong *)(*local_a0 + 0x10 + (longlong)iVar8 * 0x28);
          plVar5 = *(longlong **)(*local_a0 + 0x18 + (longlong)iVar8 * 0x28);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          cVar7 = FUN_1412770ea(lVar4);
          if (cVar7 != '\0') {
            FUN_148852cb6(param_3,lVar4 + 0xa0);
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar8 = local_88._4_4_;
          uVar6 = local_88;
        } while (local_a0 != plVar11 ||
                 (CONCAT44(uStack_8c,uStack_90) != lVar1 || local_88._4_4_ != iVar9));
      }
      local_a8 = local_a8 + 2;
    } while (local_a8 != plVar10);
  }
  FUN_1416a339c(param_1,param_3);
  FUN_141276ec9(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146257fec FUN_146257fec body=150 status=ok
// SIG undefined FUN_146257fec(void)

ulonglong FUN_146257fec(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((lVar3 != 0) &&
     ((iVar1 = FUN_14490d72a(lVar3), iVar1 == 0 || (*(longlong *)(lVar3 + 0x38) == 0)))) {
    FUN_145ad1184(local_88,lVar3 + 0x5b8);
    uVar2 = FUN_1416a341a(lVar3,local_88);
    uVar4 = (ulonglong)uVar2;
    FUN_141238aee(local_88);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146258084 FUN_146258084 body=438 status=ok
// SIG undefined FUN_146258084(void)

void FUN_146258084(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [36];
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14625823c(puVar3,local_38,local_40,local_44 != 0);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625823c FUN_14625823c body=211 status=ok
// SIG undefined FUN_14625823c(void)

longlong FUN_14625823c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_48,param_1,param_2);
  lVar3 = FUN_14070d842(local_48);
  if (lVar3 == 0) {
LAB_146258278:
    bVar2 = true;
  }
  else {
    if (param_3 != 0) {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(param_3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(param_3 + 0x38) * 8) != param_3 + 0x30)) goto LAB_146258278;
    }
    bVar2 = false;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_48;
    if (0x18 < local_30) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if (bVar2) {
    lVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146258310 FUN_146258310 body=435 status=ok
// SIG undefined FUN_146258310(void)

void FUN_146258310(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  FUN_1416a3898(local_20,&local_60,local_40,local_41);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462584c4 FUN_1462584c4 body=1314 status=ok
// SIG undefined FUN_1462584c4(void)

void FUN_1462584c4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong **pplVar12;
  undefined8 ****ppppuVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_238 [32];
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_208;
  undefined1 local_1f9;
  undefined8 ***local_1f8;
  longlong *plStack_1f0;
  ushort local_1e0;
  byte local_1d8;
  longlong *local_1c8 [5];
  undefined4 local_1a0;
  char local_168;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_13f;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128 [4];
  undefined2 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_e8 [12];
  char local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1462589e8();
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar9 = *(longlong *)(lVar3 + 0x370);
  if (lVar9 == 0) {
    uVar8 = FUN_14050b070();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(lVar3 + 0x370) = lVar9;
  }
  plVar2 = (longlong *)(lVar3 + 0x368);
  if (*(longlong *)(lVar3 + 0x378) == 0) {
    if ((lVar9 != 0) && (*plVar2 != 0)) {
      plVar4 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
        *(undefined8 *)(lVar3 + 0x378) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar9 = FUN_144aff482(uVar8,plVar2);
        *(longlong *)(lVar3 + 0x378) = lVar9;
        if (lVar9 != 0) goto LAB_146258584;
      }
    }
    if (*(char *)(lVar3 + 0x381) != '\x01') goto LAB_14625878d;
  }
LAB_146258584:
  local_158 = 0;
  local_150 = 0x6000;
  local_148 = 0;
  local_13f = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_88 = '\0';
  local_138 = 0;
  uStack_130 = 0;
  local_128[0] = 0;
  if (*plVar2 != 0) {
    local_158 = *plVar2;
  }
  local_140 = *(undefined1 *)(lVar3 + 0x380);
  FUN_144983130(local_128,lVar3 + 0x388);
  if ((*(char *)(lVar3 + 0x381) == '\x01') && (lVar9 = FUN_14479d2ce(param_1 + 0xcc), lVar9 != 0)) {
    lVar10 = FUN_145b900f0();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      local_1f8 = (undefined8 ****)0x0;
      plStack_1f0 = (longlong *)0x0;
      uVar8 = FUN_1416a3972(param_1);
      uVar8 = FUN_1462592ee(uVar8);
      FUN_1410d0284(uVar8,&local_1f8);
      pppuVar6 = local_1f8;
      lVar10 = (longlong)(int)plStack_1f0;
      if (lVar10 != 0) {
        lVar11 = 0;
        do {
          plVar2 = *(longlong **)((longlong)pppuVar6 + lVar11);
          if ((((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0x84) & 2) != 0)) &&
              (cVar7 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar7 != '\0')) &&
             (cVar7 = FUN_141107632(plVar2), cVar7 != '\0')) {
            if (plVar2[0x7a] != 0) {
              FUN_148dc7a28(lVar9,local_1c8);
              if (local_168 == '\0') {
                if (local_88 != '\0') {
                  local_88 = '\0';
                }
              }
              else {
                pplVar12 = local_1c8;
                puVar14 = local_e8;
                for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *puVar14 = *pplVar12;
                  pplVar12 = pplVar12 + 1;
                  puVar14 = puVar14 + 1;
                }
                local_88 = '\x01';
              }
            }
            break;
          }
          lVar11 = lVar11 + 8;
        } while (lVar10 * 8 != lVar11);
      }
      if ((undefined8 ****)local_1f8 != (undefined8 ****)0x0) {
        FUN_1400020a8(local_1f8);
      }
    }
  }
  FUN_14045cb56(param_1,local_1c8);
  if (local_1c8[1] == (longlong *)0x0) {
    local_210 = (longlong *)0x0;
    FUN_146258bba(param_1 + 0x1c0,local_218,&local_158);
  }
  else {
    LOCK();
    *(int *)(local_1c8[1] + 1) = (int)local_1c8[1][1] + 1;
    UNLOCK();
    if (local_1c8[1] != (longlong *)0x0) {
      LOCK();
      plVar2 = local_1c8[1] + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_1c8[1])(local_1c8[1]);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8[1] + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1c8[1] + 0x10))(local_1c8[1]);
        }
      }
    }
    local_210 = local_1c8[1];
    LOCK();
    *(int *)((longlong)local_1c8[1] + 0xc) = *(int *)((longlong)local_1c8[1] + 0xc) + 1;
    UNLOCK();
    FUN_146258bba(param_1 + 0x1c0,local_218,&local_158);
    LOCK();
    plVar2 = local_1c8[1] + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1c8[1])(local_1c8[1]);
      LOCK();
      piVar1 = (int *)((longlong)local_1c8[1] + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c8[1] + 0x10))(local_1c8[1]);
      }
    }
  }
  if (*(char *)(lVar3 + 0x382) == '\x01') {
    fVar15 = *(float *)(param_1 + 0x1a0);
    fVar16 = 0.0;
    if (fVar15 < 0.0) {
      fVar15 = (float)FUN_141236616(param_1);
    }
    if (*(char *)(lVar3 + 0x290) == '\x01') {
      local_1f9 = 2;
      local_208 = FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_1f8);
      local_1c8[0]._0_1_ = 0;
      local_1a0 = 0;
      FUN_144a7bf34(local_1c8,&local_1f8,&local_208,&local_1f9);
      if (plStack_1f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_1f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_1f0 + 0x10))();
        }
      }
      FUN_1447c3578(lVar3 + 0x2d0,&local_1f8,local_1c8);
      fVar16 = (float)FUN_144a7ecd0(&local_1f8);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1d8 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar13 = &local_1f8;
        if (0x18 < local_1e0) {
          ppppuVar13 = (undefined8 ****)local_1f8;
        }
        (*pcVar5)(ppppuVar13);
      }
      if (0x18 < local_1e0) {
        FUN_1400020a8(local_1f8);
      }
      FUN_144a5ac3a(local_1c8);
    }
    *(float *)(param_1 + 0x2c0) = fVar15 + fVar16 + *(float *)(lVar3 + 900);
  }
  if (local_88 == '\x01') {
    local_88 = '\0';
  }
  FUN_144a2da94(local_128);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_14625878d:
  if ((local_70 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462589e8 FUN_1462589e8 body=464 status=ok
// SIG undefined FUN_1462589e8(void)

void FUN_1462589e8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = FUN_14122bd5e(*(undefined8 *)(param_1 + 0x48),DAT_14cb80ad0);
  FUN_14122bd00(param_1,uVar4);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x360) == '\x01') {
    FUN_1488a5aa8(*(longlong *)(param_1 + 0x40) + 0x148);
  }
  if (*(char *)(lVar2 + 0x290) == '\x01') {
    local_a9 = 2;
    local_b8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_78);
    local_a8[0] = 0;
    local_80 = 0;
    FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_1447c3578(lVar2 + 0x298,&local_78,local_a8);
    fVar6 = (float)FUN_144a7ecd0(&local_78);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar5 = &local_78;
      if (0x18 < local_60) {
        pppuVar5 = (undefined8 ***)local_78;
      }
      (*pcVar3)(pppuVar5);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
    FUN_144a5ac3a(local_a8);
    if (0.0 < fVar6) {
      fVar7 = (float)FUN_141236616(param_1);
      *(float *)(param_1 + 0x1a0) = fVar6 + fVar7;
    }
  }
  if (*(char *)(lVar2 + 0x230) == '\x01') {
    FUN_145bef6be(param_1,&DAT_14cb80ae0);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146258bba FUN_146258bba body=1634 status=ok
// SIG undefined FUN_146258bba(void)

void FUN_146258bba(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 ******ppppppuVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  ulonglong *local_110;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  char local_ed;
  undefined4 local_ec;
  ulonglong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  ulonglong local_a8;
  longlong *plStack_a0;
  undefined4 local_80;
  undefined8 *****local_70;
  int local_68;
  undefined4 uStack_64;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar10 = *param_2;
  plVar17 = (longlong *)param_2[1];
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
  }
  plVar15 = (longlong *)param_1[1];
  *param_1 = lVar10;
  param_1[1] = (longlong)plVar17;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    plVar17 = (longlong *)param_1[1];
  }
  if (plVar17 == (longlong *)0x0) goto LAB_146258fe2;
  iVar7 = (int)plVar17[1];
  do {
    if (iVar7 == 0) goto LAB_146258fe2;
    LOCK();
    iVar5 = (int)plVar17[1];
    bVar18 = iVar7 == iVar5;
    if (bVar18) {
      *(int *)(plVar17 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar18);
  lVar10 = *param_1;
  if (lVar10 != 0) {
    local_e0 = param_1 + 2;
    FUN_1462592f8(local_e0,param_3);
    uVar8 = FUN_14625921e(param_1);
    FUN_1410d53f0(&local_a8,uVar8);
    if (plStack_a0 != (longlong *)0x0) {
      iVar7 = (int)plStack_a0[1];
      do {
        if (iVar7 == 0) {
          plVar15 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)plStack_a0[1];
        bVar18 = iVar7 == iVar5;
        if (bVar18) {
          *(int *)(plStack_a0 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
        plVar15 = plStack_a0;
      } while (!bVar18);
      LOCK();
      piVar1 = (int *)((longlong)plStack_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_a0 + 0x10))();
      }
      if (plVar15 != (longlong *)0x0) {
        local_e8 = local_a8;
        if (local_a8 == 0) goto LAB_146258fce;
        lVar9 = param_1[4];
        if (lVar9 == 0) {
          local_a8 = param_1[2];
          lVar9 = FUN_14050aea0();
          param_1[4] = lVar9;
          if (lVar9 != 0) goto LAB_146258cdf;
LAB_146259023:
          if ((char)param_1[0x1c] == '\x01') {
            local_ec = 1;
LAB_146258d4d:
            local_c8 = 0;
            uStack_c0 = 0;
            local_d0 = param_2;
            uVar8 = FUN_146259282(param_1);
            FUN_1410d0284(uVar8,&local_c8);
            local_ed = FUN_140c58360(*(undefined8 *)(lVar10 + 0x40),param_1 + 8);
            if (local_ed == '\0') {
              lVar10 = 0;
            }
            else {
              local_a9 = 2;
              local_b8 = FUN_144a7be76(lVar10);
              FUN_144a7bec8(lVar10,&local_70);
              local_a8 = local_a8 & 0xffffffffffffff00;
              local_80 = 0;
              FUN_144a7bf34(&local_a8,&local_70,&local_b8,&local_a9);
              plVar4 = (longlong *)CONCAT44(uStack_64,local_68);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))();
                }
              }
              FUN_1447c3578(param_1 + 8,&local_70,&local_a8);
              lVar10 = FUN_14030a32e(&local_70);
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar3 != (code *)0x0) {
                ppppppuVar16 = &local_70;
                if (0x18 < local_58) {
                  ppppppuVar16 = (undefined8 ******)local_70;
                }
                (*pcVar3)(ppppppuVar16);
              }
              if (0x18 < local_58) {
                FUN_1400020a8(local_70);
              }
              FUN_144a5ac3a(&local_a8);
            }
            uVar13 = local_c8;
            lVar9 = (longlong)(int)uStack_c0;
            if (lVar9 != 0) {
              lVar14 = 0;
              local_d8 = plVar15;
              do {
                plVar15 = *(longlong **)(uVar13 + lVar14);
                if (plVar15 != (longlong *)0x0) {
                  lVar11 = FUN_144a5dd5e();
                  if (((*(int *)(lVar11 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
                      (*(longlong *)
                        (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                       == lVar11 + 0x30)) &&
                     (((local_ed == '\0' || (plVar15[0x7a] == 0)) ||
                      ((lVar10 != 0 && (cVar6 = FUN_14064aef8(plVar15[0x7a],lVar10), cVar6 != '\0'))
                      )))) {
                    if (((*(byte *)(plVar15 + 0x84) & 2) == 0) ||
                       (((cVar6 = (**(code **)(*plVar15 + 0x6c8))(plVar15), cVar6 == '\0' ||
                         (cVar6 = FUN_141107632(plVar15), cVar6 == '\0')) ||
                        ((char)param_1[0x1c] != '\x01')))) {
                      if ((char)local_ec != '\0') goto LAB_146258fa5;
                      local_f8 = 1;
                      local_100 = 1;
                      local_108 = CONCAT31(local_108._1_3_,1);
                      local_110 = (ulonglong *)((ulonglong)local_110 & 0xffffffffffffff00);
                      local_118 = 0;
                      cVar6 = FUN_1416a3978(local_e8,plVar15,local_e0,0);
                    }
                    else {
                      local_118 = 0;
                      cVar6 = FUN_144236e58(local_e8,plVar15,param_1 + 0x10,1);
                    }
                    if (cVar6 != '\0') {
                      local_a8 = 0;
                      FUN_14485c47a(&local_a8,plVar15);
                      iVar7 = (int)param_1[0x1f];
                      *(uint *)(param_1 + 0x1f) = iVar7 + 1U;
                      if (*(uint *)((longlong)param_1 + 0xfc) < iVar7 + 1U) {
                        FUN_145dce618(param_1 + 0x1e,iVar7);
                      }
                      *(ulonglong *)(param_1[0x1e] + (longlong)iVar7 * 8) = local_a8;
                    }
                  }
                }
LAB_146258fa5:
                lVar14 = lVar14 + 8;
                plVar15 = local_d8;
              } while (lVar9 * 8 != lVar14);
            }
            uVar13 = local_c8;
            param_2 = local_d0;
            if (local_c8 != 0) goto LAB_146258fc9;
          }
        }
        else {
LAB_146258cdf:
          if (*(longlong *)(lVar9 + 0x1b0) == 0) goto LAB_146259023;
          puVar2 = *(undefined4 **)(*(longlong *)(lVar9 + 0x1b0) + 8);
          puVar12 = &DAT_14c9485f0;
          if (puVar2 != (undefined4 *)0x0) {
            puVar12 = puVar2;
          }
          FUN_144a7660c(puVar12,&local_a8,1);
          uVar8 = FUN_14625921e(param_1);
          FUN_140fda471(&local_70,uVar8);
          cVar6 = FUN_144a8940a(&local_a8,&local_70);
          if (cVar6 == '\0') {
            local_ec = 0;
            goto LAB_146258d4d;
          }
          if ((char)param_1[5] != '\x01') goto LAB_146258fce;
          local_a8 = 0;
          plStack_a0 = (longlong *)0x0;
          if (*(char *)((longlong)param_1 + 0x29) == '\x01') {
            FUN_140002266(&local_70,L"?%ls",L"ExtLoadingMovie");
            iVar7 = local_68 + -1;
            if (local_68 == 0) {
              iVar7 = 0;
            }
            FUN_1400020e8(&local_a8,local_70,iVar7);
            if ((undefined8 ******)local_70 != (undefined8 ******)0x0) {
              FUN_1400020a8();
            }
            if (1 < (int)param_1[7]) {
              FUN_140002266(&local_70,L"=%ls",param_1[6]);
              iVar7 = local_68 + -1;
              if (local_68 == 0) {
                iVar7 = 0;
              }
              FUN_1400020e8(&local_a8,local_70,iVar7);
              if ((undefined8 ******)local_70 != (undefined8 ******)0x0) {
                FUN_1400020a8();
              }
            }
          }
          local_100 = 0;
          local_118 = 0;
          local_108 = 0xbf800000;
          local_110 = &local_a8;
          FUN_144230d0e(local_e8,local_e0,0,0);
          uVar13 = local_a8;
          if (local_a8 == 0) goto LAB_146258fce;
LAB_146258fc9:
          FUN_1400020a8(uVar13);
        }
LAB_146258fce:
        LOCK();
        plVar4 = plVar15 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    }
  }
  LOCK();
  plVar15 = plVar17 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_146258fe2:
  plVar17 = (longlong *)param_2[1];
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625921e FUN_14625921e body=99 status=ok
// SIG undefined FUN_14625921e(void)

undefined8 FUN_14625921e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
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
    if (*param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1405f939e();
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
  return uVar6;
}



// FUNCTION 146259282 FUN_146259282 body=107 status=ok
// SIG undefined FUN_146259282(void)

undefined8 FUN_146259282(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
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
    if (*param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1416a3972();
      uVar6 = FUN_1462592ee(uVar6);
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
  return uVar6;
}



// FUNCTION 1462592ee FUN_1462592ee body=9 status=ok
// SIG undefined FUN_1462592ee(void)

void FUN_1462592ee(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x48);
  return;
}



// FUNCTION 1462592f8 FUN_1462592f8 body=146 status=ok
// SIG undefined FUN_1462592f8(void)

longlong * FUN_1462592f8(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(short *)(param_1 + 3) = (short)param_2[3];
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  FUN_144983130(param_1 + 6,param_2 + 6);
  if (param_2 != param_1) {
    if ((char)param_2[0x1a] == '\x01') {
      plVar3 = param_2 + 0xe;
      plVar4 = param_1 + 0xe;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar4 = *plVar3;
        plVar3 = plVar3 + 1;
        plVar4 = plVar4 + 1;
      }
      uVar1 = 1;
    }
    else {
      if ((char)param_1[0x1a] != '\x01') {
        return param_1;
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x1a) = uVar1;
  }
  return param_1;
}



// FUNCTION 14625938a FUN_14625938a body=246 status=ok
// SIG undefined FUN_14625938a(void)

undefined8 *
FUN_14625938a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_146259482(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146259482 FUN_146259482 body=423 status=ok
// SIG undefined FUN_146259482(void)

void FUN_146259482(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146259558:
    *puVar5 = &PTR_LAB_14b5afcc0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c12e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146259558;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b5afcc0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c12e0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000146259611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14625962a FUN_14625962a body=771 status=ok
// SIG undefined FUN_14625962a(void)

undefined8 FUN_14625962a(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  int local_98;
  short local_8c [2];
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x6b0) = 1;
  lVar7 = FUN_1447210f0();
  if (lVar7 != 0) {
    lVar8 = FUN_1400f6f32(lVar7);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x30);
    }
    lVar9 = FUN_1400f6f32(lVar7);
    if (((lVar9 != 0) && (lVar8 != 0)) && (*(longlong *)(lVar9 + 0x68) != 0)) {
      FUN_14042af24(*(longlong *)(lVar9 + 0x68),local_8c,param_1);
      if (-1 < local_8c[0]) {
        lVar9 = FUN_145bd989c(lVar7);
        uVar10 = FUN_144a7ba4c(param_2);
        plVar11 = (longlong *)FUN_1403ca102(param_1);
        if (plVar11 == (longlong *)0x0) {
LAB_1462596fd:
          *(undefined2 *)(param_1 + 0x6b3) = 0;
          if (lVar9 != 0) goto LAB_14625970b;
LAB_146259742:
          uVar4 = FUN_14625992e(param_1);
        }
        else {
          cVar3 = (**(code **)(*plVar11 + 0x498))(plVar11);
          if (((1 < (byte)(cVar3 - 7U)) || (lVar9 == 0)) ||
             ((byte)(*(char *)(lVar9 + 0xb0) - 1U) < 8)) goto LAB_1462596fd;
          FUN_146010760(lVar9 + 0xb8,&local_a0,lVar7,uVar10);
          if (local_a0 == DAT_14cbd0110) {
            local_b0 = *(longlong *)(lVar7 + 0x18);
            FUN_1400021e4(&local_b0,&local_a0);
            FUN_145ad105e(&local_b0);
            if (local_98 == local_a8) {
              bVar14 = true;
              if (1 < local_98) {
                lVar12 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(local_a0 + lVar12);
                  uVar5 = (uint)uVar1;
                  uVar2 = *(ushort *)(local_b0 + lVar12);
                  uVar13 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1462598b1;
                    }
                    iVar6 = uVar5 - uVar13;
                    goto LAB_146259926;
                  }
                  if (uVar1 == 0) break;
LAB_1462598b1:
                  lVar12 = lVar12 + 2;
                }
                iVar6 = 0;
LAB_146259926:
                bVar14 = iVar6 == 0;
              }
            }
            else {
              bVar14 = local_a8 + local_98 == 1;
            }
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            if (local_a0 != 0) {
              FUN_1400020a8();
            }
            if (!bVar14) {
              FUN_146228670(lVar9 + 0xb8,DAT_14cbd0118,lVar7,uVar10);
            }
          }
          *(undefined2 *)(param_1 + 0x6b3) = 0;
LAB_14625970b:
          FUN_146010760(lVar9 + 0xb8,&local_a0,lVar7,uVar10);
          if ((local_a0 == DAT_14cbd0110) || (local_a0 == DAT_14cbd0118)) goto LAB_146259742;
          uVar4 = 0;
        }
        *(undefined1 *)(param_1 + 0x6b2) = uVar4;
        uVar4 = *(undefined1 *)(param_1 + 0x710);
        DAT_14cbd06b8 = 1;
        local_a0 = 0;
        local_78 = 0;
        local_68 = &PTR_LAB_14b996a00;
        local_88 = FUN_1442029b4;
        local_60 = param_1;
        uVar10 = FUN_1416a46e4(lVar8,local_8c);
        if ((char)uVar10 == '\0') {
          *(undefined1 *)(param_1 + 0x6b0) = 0;
        }
        else {
          DAT_14cbd06b8 = 0;
          *(undefined1 *)(param_1 + 0x710) = uVar4;
        }
        goto LAB_1462597ab;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  uVar10 = 0;
LAB_1462597ab:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625992e FUN_14625992e body=93 status=ok
// SIG undefined FUN_14625992e(void)

undefined8 FUN_14625992e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar3 = FUN_1400f6f32(lVar2);
    param_1 = lVar2;
    if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x30), lVar2 != 0)) {
      lVar3 = FUN_14130c5c8();
      param_1 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38)) &&
         (param_1 = *(longlong *)(param_1 + 0x30),
         *(longlong *)(param_1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        uVar4 = FUN_14625998c(lVar2);
        bVar6 = (byte)uVar4;
        uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
        bVar1 = 1;
        goto LAB_14625997f;
      }
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_14625997f:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 14625998c FUN_14625998c body=169 status=ok
// SIG undefined FUN_14625998c(void)

bool FUN_14625998c(void)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  plVar2 = (longlong *)FUN_14054d1d4();
  FUN_145f8d864(&local_38);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_28,puVar3,0);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = (int)uStack_20;
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1 != 0;
}



// FUNCTION 146259a36 FUN_146259a36 body=145 status=ok
// SIG undefined FUN_146259a36(void)

void FUN_146259a36(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0x6000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x40a00000;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_14 = DAT_14c948618;
  local_c = DAT_14c948620;
  FUN_146259ac8();
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146259ac8 FUN_146259ac8 body=531 status=ok
// SIG undefined FUN_146259ac8(void)

void FUN_146259ac8(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_144a7e010(param_1 + 600);
    if ((*(longlong *)(param_1 + 0x268) != 0) || (*(int *)(param_1 + 0x270) != 0x6000)) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined4 *)(param_1 + 0x270) = 0x6000;
      *(undefined8 *)(param_1 + 0x278) = 0;
    }
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = DAT_14c948620;
    *(undefined8 *)(param_1 + 0x1d4) = DAT_14c948618;
    if (*(longlong **)(param_3 + 0x20) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x5d8))();
    }
    FUN_148e145a2(param_1 + 0x28,param_2,uVar1);
    FUN_148e0b48c(param_1);
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(param_1 + 0x288);
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      lVar4 = FUN_144a61814(uVar1,puVar5);
      if (lVar4 != 0) {
        FUN_1405a424c(uVar1,*puVar5);
      }
      *puVar5 = 0;
      local_48 = lVar2 + 0x230;
      local_40 = 0;
      FUN_1461e533c(&local_48);
      if (local_38 != 0) {
        do {
          lVar2 = local_38;
          if (*(char *)(local_38 + 0x2270) == '\x01') {
            *(undefined1 *)(local_38 + 0x2270) = 2;
            *(undefined4 *)(local_38 + 0x2298) = 0;
            FUN_1447715ec(local_38 + 0x22a0,param_2);
            *(undefined1 *)(lVar2 + 0x22c8) = *(undefined1 *)(param_3 + 0x58);
            *(undefined1 *)(lVar2 + 0x22c9) = *(undefined1 *)(param_3 + 0x59);
            lVar4 = *(longlong *)(param_3 + 0x20);
            if (DAT_14c950c29 == '\x01') {
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar4 = *(longlong *)(param_3 + 0x20);
              }
            }
            *(longlong *)(lVar2 + 0x2290) = lVar4;
            if (((*param_2 != 0) && (param_2[1] != 0)) && (*param_2 != DAT_14c948000)) {
              FUN_148e0b5aa(lVar4,lVar2);
            }
          }
          local_40 = local_40 + 1;
          FUN_1461e533c(&local_48);
        } while (local_38 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146259cdc FUN_146259cdc body=573 status=ok
// SIG undefined FUN_146259cdc(void)

void FUN_146259cdc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = &local_78;
  local_68 = local_48;
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = uStack_34;
  local_88 = local_30;
  FUN_146259f1a(local_18,local_20,local_24);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146259f1a FUN_146259f1a body=197 status=ok
// SIG undefined FUN_146259f1a(void)

void FUN_146259f1a(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar5 = FUN_1447210f0();
    if (lVar5 != 0) {
      uVar1 = FUN_1447210f0(param_1);
      iVar2 = FUN_14490d72a(uVar1);
      if (iVar2 != 1) {
        uVar1 = FUN_14072d970();
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
        if (plVar3 != (longlong *)0x0) {
          uVar1 = FUN_14072d970();
          plVar4 = (longlong *)FUN_144718840(plVar3,uVar1);
          if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if ((*(longlong *)(lVar5 + 0x20) != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) {
              FUN_146259fe0(lVar5,param_2,param_3,param_4);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146259fe0 FUN_146259fe0 body=592 status=ok
// SIG undefined FUN_146259fe0(void)

void FUN_146259fe0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
      (*(char *)(lVar1 + 0x178) == '\x03')) &&
     (((uVar4 = FUN_140a3f8a2(param_1), uVar4 != 0xffffffff && (-1 < (int)uVar4)) &&
      ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)(int)uVar4 * 0x18) == '\0' &&
       ((int)uVar4 < *(int *)(param_1 + 0x40))))))) {
    local_48 = param_4[2];
    local_58 = *param_4;
    uStack_50 = param_4[1];
    local_68 = *(undefined8 *)(param_5 + 4);
    local_78 = *param_5;
    uStack_74 = param_5[1];
    uStack_70 = param_5[2];
    uStack_6c = param_5[3];
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)uVar4 * 0x18);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x32b8);
      if (plVar3 == (longlong *)0x0) {
        lVar1 = *(longlong *)(lVar1 + 0x1c8);
        local_b8 = (undefined4)DAT_14c8464e0;
        uStack_b4 = DAT_14c8464e0._4_4_;
        uStack_b0 = (undefined4)DAT_14c8464e8;
        uStack_ac = DAT_14c8464e8._4_4_;
        local_a8 = DAT_14c8464f0;
        if (lVar1 != 0) {
          local_b8 = *(undefined4 *)(lVar1 + 0x260);
          uStack_b4 = *(undefined4 *)(lVar1 + 0x264);
          uStack_b0 = *(undefined4 *)(lVar1 + 0x268);
          uStack_ac = *(undefined4 *)(lVar1 + 0x26c);
          local_a8 = *(undefined8 *)(lVar1 + 0x270);
        }
      }
      else {
        (**(code **)(*plVar3 + 0x4a8))(plVar3,local_d8,*(undefined8 *)(lVar2 + 0x18),0);
      }
      *(undefined1 *)(param_1 + 0x180) = 1;
      *(uint *)(param_1 + 0x178) = uVar4;
      *(undefined4 *)(param_1 + 0x188) = local_b8;
      *(undefined4 *)(param_1 + 0x18c) = uStack_b4;
      *(undefined4 *)(param_1 + 400) = uStack_b0;
      *(undefined4 *)(param_1 + 0x194) = uStack_ac;
      *(undefined8 *)(param_1 + 0x198) = local_a8;
      *(undefined8 *)(param_1 + 0x1a0) = local_58;
      *(undefined8 *)(param_1 + 0x1a8) = uStack_50;
      *(undefined8 *)(param_1 + 0x1b0) = local_48;
      *(ulonglong *)(param_1 + 0x1b8) = CONCAT44(uStack_74,local_78);
      *(ulonglong *)(param_1 + 0x1c0) = CONCAT44(uStack_6c,uStack_70);
      *(undefined8 *)(param_1 + 0x1c8) = local_68;
      *(undefined4 *)(param_1 + 0x1d0) = param_3;
      *(undefined8 *)(param_1 + 0x1d8) = 0x3f80000000000000;
      memset((void *)(param_1 + 0x1e0),0,0x9c);
      *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x2ac) = 0;
      *(undefined8 *)(param_1 + 0x2b4) = 0;
      *(undefined8 *)(param_1 + 700) = 0;
      *(undefined8 *)(param_1 + 0x2c4) = 0;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined1 *)(param_1 + 0x181) = 1;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
      FUN_140a3f3ac(param_1);
      FUN_1405badf6(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625a232 FUN_14625a232 body=279 status=ok
// SIG undefined FUN_14625a232(void)

void FUN_14625a232(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
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
  FUN_1416a5568(param_1,plVar1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625a34a FUN_14625a34a body=1181 status=ok
// SIG undefined FUN_14625a34a(void)

longlong *
FUN_14625a34a(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = (longlong *)*param_3;
  if (plVar3 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_148a9ad24(param_2,0);
    *(undefined4 *)*param_2 = 3;
  }
  else {
    plVar4 = (longlong *)param_3[1];
    if (plVar4 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_50 = plVar4;
    }
    local_58 = plVar3;
    uVar7 = (**(code **)(*plVar3 + 0x40))();
    iVar8 = FUN_1461bd7ca(param_1 + 0x85,uVar7,&local_58);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (iVar8 == -1) {
      cVar5 = FUN_14625a7e8(param_1,param_4);
      local_68 = *param_3;
      local_60 = (longlong *)param_3[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_140b7090e(param_1,&local_58,&local_68);
      plVar4 = local_50;
      plVar3 = local_58;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      plVar4 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_148a9ad24(param_2,iVar8);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 4;
      }
      iVar8 = FUN_14148f09a(param_1);
      if (iVar8 <= ((int)param_1[0x86] + (int)param_1[0xf]) - *(int *)((longlong)param_1 + 0x45c)) {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_148a9ad24(param_2,iVar8);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 5;
      }
      local_58 = (longlong *)*param_3;
      local_50 = (longlong *)param_3[1];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_1416a5c66(param_1,&local_58,param_4,param_5);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (cVar6 != '\0') {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_148a9ad24(param_2,iVar8);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 7;
      }
      if ((char)param_1[10] == '\0') {
        local_58 = (longlong *)*param_3;
        local_50 = (longlong *)param_3[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*param_1 + 200))(param_1,&local_58);
        plVar3 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (cVar6 != '\0') {
          iVar8 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
            FUN_148a9ad24(param_2,iVar8);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 8;
        }
      }
      if (param_1[0xc] == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = *(int *)(param_1[0xc] + 0x58) == 1;
      }
      if (!bVar9 && cVar5 == '\0') {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_148a9ad24(param_2,iVar8);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 9;
      }
      if (param_6 == 0 && cVar5 == '\0') {
        iVar8 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_148a9ad24(param_2,iVar8);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar8 * 4) = 10;
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625a7e8 FUN_14625a7e8 body=1078 status=ok
// SIG undefined FUN_14625a7e8(void)

ulonglong FUN_14625a7e8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_2;
  FUN_14101cf30(param_1,&local_88);
  bVar5 = true;
  if ((longlong)(int)local_80 != 0) {
    plVar14 = local_88 + (longlong)(int)local_80 * 2;
    plVar12 = local_88;
    do {
      lVar3 = *plVar12;
      plVar4 = (longlong *)plVar12[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_b8 = (wchar_t *)0x0;
      lStack_b0 = 0;
      cVar7 = FUN_14101cdd4(lVar3 + 0x20,&DAT_14cb977e0,&local_b8);
      pwVar6 = local_b8;
      if (cVar7 != '\0') {
        iVar8 = *(int *)(local_d0 + 1);
        if (iVar8 == (int)lStack_b0) {
          if ((1 < iVar8) && (iVar8 = wcscmp((wchar_t *)*local_d0,local_b8), iVar8 != 0)) {
LAB_14625ab48:
            if (pwVar6 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar6);
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar4 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
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
            bVar5 = false;
            break;
          }
        }
        else if ((int)lStack_b0 + iVar8 != 1) goto LAB_14625ab48;
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar6);
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
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar14);
  }
  FUN_14101cee4(local_88,(ulonglong)local_80 & 0xffffffff);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = 0;
  if (bVar5) {
    plVar12 = (longlong *)(param_1 + 0x428);
    lVar3 = param_1 + 0x438;
    local_b8 = (wchar_t *)&DAT_100000000;
    local_a8 = 0xffffffff;
    local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
    lStack_b0 = lVar3;
    if (*(int *)(param_1 + 0x450) != 0) {
      FUN_1449c0562(&local_b8);
      iVar8 = *(int *)(param_1 + 0x450);
    }
    local_70 = local_a8;
    lVar11 = local_70;
    local_68 = (undefined4)local_a0;
    local_64 = local_a0._4_4_;
    local_80 = local_b8;
    local_78 = lStack_b0;
    local_70._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    local_88 = plVar12;
    if ((local_70._4_4_ != iVar8) || (lStack_b0 != lVar3)) {
      iVar9 = local_70._4_4_;
      local_70 = lVar11;
      do {
        lVar11 = *local_88;
        lVar10 = (longlong)iVar9 * 0x30;
        local_b8 = *(wchar_t **)(lVar11 + lVar10);
        lStack_b0 = *(longlong *)(lVar11 + 8 + lVar10);
        if (lStack_b0 != 0) {
          LOCK();
          *(int *)(lStack_b0 + 8) = *(int *)(lStack_b0 + 8) + 1;
          UNLOCK();
        }
        lVar11 = lVar11 + lVar10;
        local_a8 = *(longlong *)(lVar11 + 0x10);
        local_a0 = *(longlong **)(lVar11 + 0x18);
        if (local_a0 == (longlong *)0x0) {
          local_98 = *(undefined4 *)(lVar11 + 0x20);
LAB_14625aa6d:
          bVar5 = true;
          plVar14 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          local_98 = *(undefined4 *)(lVar11 + 0x20);
          if (local_a0 == (longlong *)0x0) goto LAB_14625aa6d;
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          bVar5 = false;
          plVar14 = local_a0;
        }
        local_c8 = (wchar_t *)0x0;
        uStack_c0 = 0;
        cVar7 = FUN_14101cdd4(local_a8 + 0x20,&DAT_14cb97680,&local_c8);
        pwVar6 = local_c8;
        if (cVar7 != '\0') {
          iVar9 = *(int *)(local_d0 + 1);
          if (iVar9 == (int)uStack_c0) {
            if ((1 < iVar9) && (iVar9 = wcscmp((wchar_t *)*local_d0,local_c8), iVar9 != 0)) {
LAB_14625abdb:
              if (pwVar6 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar6);
              }
              if (!bVar5) {
                LOCK();
                plVar12 = plVar14 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              FUN_145c7dde4(&local_b8);
              goto LAB_14625ac18;
            }
          }
          else if ((int)uStack_c0 + iVar9 != 1) goto LAB_14625abdb;
        }
        if (pwVar6 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar6);
        }
        if (!bVar5) {
          LOCK();
          plVar4 = plVar14 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        FUN_145c7dde4(&local_b8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
      } while (((local_70._4_4_ != iVar8) || (local_78 != lVar3)) ||
              (lVar11 = local_70, local_88 != plVar12));
    }
  }
  else {
LAB_14625ac18:
    uVar13 = 0;
    lVar11 = local_70;
  }
  local_70 = lVar11;
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14625ac20 FUN_14625ac20 body=188 status=ok
// SIG undefined FUN_14625ac20(void)

bool FUN_14625ac20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625acde FUN_14625acde body=656 status=ok
// SIG undefined FUN_14625acde(void)

ulonglong FUN_14625acde(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [3];
  short local_7c [2];
  longlong local_78;
  longlong *local_70;
  int local_68;
  undefined8 local_60;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_78 = param_1;
  FUN_1457cd628(&local_70);
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 == 0) {
    *(undefined1 *)(local_78 + 0x6b0) = 0;
    if (local_70 != (longlong *)0x0 && local_68 != 0) goto LAB_14625af05;
  }
  else {
    lVar2 = FUN_1400f6f32(lVar1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x30);
    }
    lVar1 = FUN_1400f6f32(lVar1);
    if ((((lVar1 != 0) && (lVar2 != 0)) && (*(longlong *)(lVar1 + 0x68) != 0)) &&
       (FUN_14042af24(*(longlong *)(lVar1 + 0x68),local_7c,param_1), -1 < local_7c[0])) {
      FUN_14625af70(param_1);
      FUN_1413fa72a(lVar2,&local_60,local_7c);
      if ((((int)local_60 != 0) && (local_60._4_4_ != 0)) && ((int)local_60 != DAT_14c948000)) {
        uVar3 = FUN_1401e6c61();
        local_98[0] = 0;
        local_98[1] = 0;
        FUN_1400b2348(&local_60,local_98,1);
        local_b0 = 0;
        local_b8 = (undefined8 *)((ulonglong)local_b8._4_4_ << 0x20);
        FUN_145c5cda5(L"create_new_char",local_98,param_1,uVar3);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_a8 = 0;
      local_a0 = 0;
      FUN_1457cd628(&local_a8,param_2);
      local_b8 = &local_a8;
      FUN_1457cd3ba(lVar2,local_98,local_7c,1);
      uVar4 = CONCAT71((int7)((ulonglong)local_98 >> 8),local_98[0] != 0);
      *(undefined1 *)(local_78 + 0x6b0) = 0;
      if ((local_98[0] == 0) && (local_70 != (longlong *)0x0 && local_68 != 0)) {
        (**(code **)(*local_70 + 0x60))(local_70,7);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14625ae76;
    }
    local_60 = 0;
    uVar3 = FUN_1403b0700(param_1);
    uVar4 = 0;
    FUN_145d0a0b4(uVar3,&local_60,0);
    *(undefined1 *)(local_78 + 0x6b0) = 0;
    if (local_70 == (longlong *)0x0 || local_68 == 0) goto LAB_14625ae76;
LAB_14625af05:
    (**(code **)(*local_70 + 0x60))(local_70,7);
  }
  uVar4 = 0;
LAB_14625ae76:
  FUN_1449db362(&local_70);
  FUN_1449db362(param_2);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14625af70 FUN_14625af70 body=63 status=ok
// SIG undefined FUN_14625af70(void)

void FUN_14625af70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_145bd989c(lVar1);
    if ((lVar1 != 0) && (*(char *)(param_1 + 0x6b3) == '\0')) {
      FUN_1416a8438(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14625afb0 FUN_14625afb0 body=140 status=ok
// SIG undefined FUN_14625afb0(void)

void FUN_14625afb0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar4[7];
    plVar2 = plVar1;
    while (plVar2 != (longlong *)0x0) {
      if (plVar4[5] != 0) {
        lVar3 = *(longlong *)(plVar4[5] + 0x30);
        if (lVar3 == 0) {
          return;
        }
        if (*(longlong *)(lVar3 + 0x360) == 0) {
          return;
        }
        lVar3 = FUN_1400f6f32();
        if (lVar3 == 0) {
          return;
        }
        if (*(longlong *)(lVar3 + 0x68) == 0) {
          return;
        }
        lVar3 = FUN_140d1732e(*(longlong *)(lVar3 + 0x68),param_2 + 0x18);
        if (lVar3 == 0) {
          return;
        }
        FUN_1416a8700(plVar1,param_4);
        return;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))(plVar4);
      plVar2 = plVar4;
    }
  }
  return;
}



// FUNCTION 14625b03c FUN_14625b03c body=78 status=ok
// SIG undefined FUN_14625b03c(void)

void FUN_14625b03c(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_14625b08a(lVar1,0);
    *(byte *)(lVar1 + 0x118) = *(byte *)(lVar1 + 0x118) & 0xfb;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 14625b08a FUN_14625b08a body=644 status=ok
// SIG undefined FUN_14625b08a(void)

void FUN_14625b08a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar4 = *(byte *)(param_1 + 0x118);
  bVar5 = (param_2 != 0) << 2;
  *(byte *)(param_1 + 0x118) = bVar4 & 0xfb | bVar5;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x118) = bVar4 & 0xc3;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_1413a454c(&local_38,0,0);
    plVar6 = local_38;
  }
  else {
    bVar4 = bVar4 & 0xf3 | bVar5 | *(char *)(param_2 + 0x38) << 3;
    *(byte *)(param_1 + 0x118) = bVar4;
    bVar4 = bVar4 & 0xef | *(char *)(param_2 + 0x40) << 4;
    *(byte *)(param_1 + 0x118) = bVar4;
    *(byte *)(param_1 + 0x118) = bVar4 & 0xdf | *(char *)(param_2 + 0x48) << 5;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0x30);
    plVar6 = *(longlong **)(param_2 + 0x50);
    local_38 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    local_30 = *(undefined4 *)(param_2 + 0x58);
  }
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar6) {
    *(longlong **)(param_1 + 0xb8) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar6 = local_38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      plVar6 = local_38;
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = local_30;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  plVar6 = plStack_40;
  if (param_2 == 0) {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    FUN_1413a454c(&local_38,0,0);
    plVar6 = local_38;
  }
  else {
    plVar6 = *(longlong **)(param_2 + 0x60);
    local_38 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    local_30 = *(undefined4 *)(param_2 + 0x68);
  }
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar6) {
    *(longlong **)(param_1 + 200) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    plVar6 = local_38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      plVar6 = local_38;
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = local_30;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  plVar6 = plStack_50;
  if ((param_2 == 0) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625b310 FUN_14625b310 body=130 status=ok
// SIG undefined FUN_14625b310(void)

void FUN_14625b310(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1416a9fc6();
  *(undefined1 *)(param_1 + 0x8b8) = 1;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1416aa601(param_1 + 0x568,&local_48,0);
  local_48 = 0;
  uStack_40 = 0;
  FUN_1416aa601(param_1 + 0x668,&local_48,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625b394 FUN_14625b394 body=247 status=ok
// SIG undefined FUN_14625b394(void)

undefined8 *
FUN_14625b394(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  FUN_1414a725e(puVar4);
  *puVar4 = &PTR_LAB_14acd0ae0;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_14625b48c(puVar4 + 4,param_3);
  *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625b48c FUN_14625b48c body=484 status=ok
// SIG undefined FUN_14625b48c(void)

void FUN_14625b48c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  FUN_14063f24e();
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar5 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b47b160;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar8;
  *local_48 = &PTR_FUN_14b9a7bc0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_2);
  *(undefined4 *)(puVar5 + 5) = uVar3;
  puVar5[4] = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b47b140;
  plVar7[2] = (longlong)local_48;
  local_48 = (undefined8 *)0x0;
  *(undefined4 *)(plVar7 + 3) = local_40;
  local_40 = 0;
  if (plVar7 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar9 = (longlong *)param_1[1];
    if (plVar9 == (longlong *)0x0) goto LAB_14625b5ad;
    param_1[1] = 0;
LAB_14625b603:
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_14625b5ad;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar7 + 2);
    plVar9 = (longlong *)param_1[1];
    if (plVar7 == plVar9) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[1] = (longlong)plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_14625b603;
    }
  }
  LOCK();
  plVar9 = plVar7 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_14625b5ad:
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625b672 FUN_14625b672 body=1471 status=ok
// SIG undefined FUN_14625b672(void)

void FUN_14625b672(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 **local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_69;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = FUN_145905bd0();
  if (lVar7 != 0) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_b0 = *(longlong *)(lVar7 + 0x140);
      local_a8 = *(longlong *)(lVar7 + 0x148);
      uStack_a0 = *(undefined4 *)(lVar7 + 0x150);
      uStack_9c = *(undefined4 *)(lVar7 + 0x154);
      local_98 = (void *)0x0;
      iVar3 = *(int *)(lVar7 + 0x160);
      pvVar5 = *(void **)(lVar7 + 0x158);
      local_90 = (void *)CONCAT44(local_90._4_4_,iVar3);
      lVar8 = local_a8;
      if ((longlong)iVar3 != 0) {
        FUN_1446dd670(&local_98,iVar3,0);
        memcpy(local_98,pvVar5,(longlong)iVar3 * 2);
        lVar8 = local_a8;
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (lVar8 != 0) {
        lVar10 = FUN_14050fd64();
        local_d8 = (undefined8 *)0x0;
        local_d0 = 0;
        FUN_1446efa72(&local_d8,0,3,0x10);
        puVar6 = local_d8;
        local_d0 = 3;
        *local_d8 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_d8[2] = lVar9;
        *local_d8 = &PTR_FUN_14b5a3f10;
        local_d8[3] = 0;
        FUN_14485c47a(local_d8 + 3,param_1);
        puVar6[4] = param_1;
        local_b0 = *(longlong *)(lVar7 + 0x140);
        local_a8 = *(longlong *)(lVar7 + 0x148);
        uStack_a0 = *(undefined4 *)(lVar7 + 0x150);
        uStack_9c = *(undefined4 *)(lVar7 + 0x154);
        local_98 = (void *)0x0;
        uVar4 = *(uint *)(lVar7 + 0x160);
        pvVar5 = *(void **)(lVar7 + 0x158);
        local_90 = (void *)CONCAT44(local_90._4_4_,uVar4);
        if ((longlong)(int)uVar4 == 0) {
          local_90 = (void *)(ulonglong)uVar4;
        }
        else {
          FUN_1446dd670(&local_98,uVar4,0);
          memcpy(local_98,pvVar5,(longlong)(int)uVar4 * 2);
        }
        local_e0 = &local_80;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 0;
        FUN_140a1e0be(lVar10 + 0x1e8,local_58,&local_a8,&local_d8);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_d8);
      }
    }
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_b0 = *(longlong *)(lVar7 + 0x168);
      local_a8 = *(longlong *)(lVar7 + 0x170);
      uStack_a0 = *(undefined4 *)(lVar7 + 0x178);
      uStack_9c = *(undefined4 *)(lVar7 + 0x17c);
      local_98 = (void *)0x0;
      iVar3 = *(int *)(lVar7 + 0x188);
      pvVar5 = *(void **)(lVar7 + 0x180);
      local_90 = (void *)CONCAT44(local_90._4_4_,iVar3);
      lVar8 = local_a8;
      if ((longlong)iVar3 != 0) {
        FUN_1446dd670(&local_98,iVar3,0);
        memcpy(local_98,pvVar5,(longlong)iVar3 * 2);
        lVar8 = local_a8;
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (lVar8 != 0) {
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        lVar8 = FUN_14050fd64();
        local_a8 = *(longlong *)(lVar7 + 0x168);
        uStack_a0 = *(undefined4 *)(lVar7 + 0x170);
        uStack_9c = *(undefined4 *)(lVar7 + 0x174);
        local_98 = *(void **)(lVar7 + 0x178);
        local_90 = (void *)0x0;
        local_88._0_4_ = *(int *)(lVar7 + 0x188);
        lVar10 = (longlong)(int)local_88;
        pvVar5 = *(void **)(lVar7 + 0x180);
        local_b0 = param_1;
        if (lVar10 == 0) {
          local_88._4_4_ = 0;
        }
        else {
          FUN_1446dd670(&local_90,(int)local_88,0);
          memcpy(local_90,pvVar5,lVar10 * 2);
        }
        local_80 = (undefined8 *)0x0;
        local_78 = 0;
        FUN_1446efa72(&local_80,0,5,0x10);
        puVar6 = local_80;
        local_78 = 5;
        *local_80 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_80[2] = lVar9;
        *local_80 = &PTR_FUN_14b5a3f80;
        local_80[3] = 0;
        FUN_14485c47a(local_80 + 3,param_1);
        puVar6[4] = local_b0;
        puVar6[5] = local_a8;
        puVar6[6] = CONCAT44(uStack_9c,uStack_a0);
        puVar6[7] = local_98;
        puVar6[8] = local_90;
        local_90 = (void *)0x0;
        *(int *)(puVar6 + 9) = (int)local_88;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = local_88._4_4_;
        local_88 = 0;
        local_d8 = *(undefined8 **)(lVar7 + 0x168);
        local_d0 = *(undefined4 *)(lVar7 + 0x170);
        uStack_cc = *(undefined4 *)(lVar7 + 0x174);
        uStack_c8 = *(undefined4 *)(lVar7 + 0x178);
        uStack_c4 = *(undefined4 *)(lVar7 + 0x17c);
        local_c0 = (void *)0x0;
        local_b8 = *(int *)(lVar7 + 0x188);
        lVar10 = (longlong)local_b8;
        pvVar5 = *(void **)(lVar7 + 0x180);
        if (lVar10 == 0) {
          local_b4 = 0;
        }
        else {
          FUN_1446dd670(&local_c0,local_b8,0);
          memcpy(local_c0,pvVar5,lVar10 * 2);
        }
        local_e0 = (undefined8 **)&local_69;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 0;
        FUN_140a1e0be(lVar8 + 0x1e8,(longlong)&local_69 + 1,&local_d0,&local_80);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
        if (local_c0 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_80);
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_1416ac158(param_1);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625bc32 FUN_14625bc32 body=323 status=ok
// SIG undefined FUN_14625bc32(void)

void FUN_14625bc32(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
    if (lVar4 != 0) {
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = FUN_148e900f0;
      local_a0 = 0;
      FUN_14625bd76(&local_b8,param_1,&local_a8);
      uVar5 = FUN_144a88394(lVar4);
      lVar4 = FUN_1402735c8();
      uVar1 = *(undefined4 *)(lVar4 + 0x514);
      lVar4 = FUN_1402735c8();
      uVar2 = *(undefined4 *)(lVar4 + 0x510);
      local_a8 = (code *)0x0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_b8);
      local_68 = 1;
      local_c8 = 1;
      local_c0 = uVar1;
      FUN_1406f3fee(uVar5,param_1 + 0x2e0,&local_a8,uVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      FUN_1449db362(&local_b8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625bd76 FUN_14625bd76 body=423 status=ok
// SIG undefined FUN_14625bd76(void)

void FUN_14625bd76(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14625be4c:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6250;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14625be4c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6250;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014625bf05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14625bf1e FUN_14625bf1e body=612 status=ok
// SIG undefined FUN_14625bf1e(void)

void FUN_14625bf1e(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined8 local_118 [12];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_80[0] = 0;
  local_80._4_8_ = 0;
  local_70 = 0;
  local_68 = DAT_14c8464f8;
  uStack_60 = DAT_14c846500;
  local_58 = DAT_14c846508;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  iVar1 = local_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uVar2 = local_84;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = &local_b8;
  local_a8 = local_90;
  local_b8 = local_a0;
  uStack_b4 = uStack_9c;
  uStack_b0 = uStack_98;
  uStack_ac = uStack_94;
  puVar4 = (undefined8 *)local_80;
  puVar5 = local_118;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  (**(code **)(*param_1 + 0xb38))(param_1,local_118,uVar2,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625c184 FUN_14625c184 body=141 status=ok
// SIG undefined FUN_14625c184(void)

void FUN_14625c184(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_5;
  local_28 = 0;
  local_38 = param_4;
  FUN_146190044(param_1 + 0x4ea0,local_20,param_2,param_3);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625c212 FUN_14625c212 body=41 status=ok
// SIG undefined FUN_14625c212(void)

void FUN_14625c212(void)

{
  if (DAT_14cb12fa9 == '\0') {
    FUN_1416ad2e5();
    return;
  }
  FUN_1416ad2e5();
  return;
}



// FUNCTION 14625c240 FUN_14625c240 body=479 status=ok
// SIG undefined FUN_14625c240(void)

void FUN_14625c240(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  local_2c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar4 = &local_34;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  uVar3 = FUN_14625c420(puVar4,local_40,&local_58,iVar2 != 0);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625c420 FUN_14625c420 body=289 status=ok
// SIG undefined FUN_14625c420(void)

longlong FUN_14625c420(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ff2acb(local_58,param_1,param_2);
  lVar3 = FUN_14030a32e(local_58);
  bVar6 = true;
  if (lVar3 != 0) {
    lVar1 = *param_3;
    if (lVar1 != 0) {
      lVar4 = FUN_144a6c4d8();
      if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (lVar1 = *param_3, lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) {
          bVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30;
        }
        goto LAB_14625c46c;
      }
    }
    bVar6 = false;
  }
LAB_14625c46c:
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar5 = local_58;
    if (0x18 < local_40) {
      pppuVar5 = (undefined8 ***)local_58[0];
    }
    (*pcVar2)(pppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if (bVar6) {
    lVar3 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625c542 FUN_14625c542 body=144 status=ok
// SIG undefined FUN_14625c542(void)

void FUN_14625c542(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_1 = param_1 + 0x38;
  cVar3 = FUN_144729dda(param_1);
  if (cVar3 != '\0') {
    lVar1 = FUN_14479d2ce(param_1);
    if (*(longlong *)(lVar1 + 0x2210) != 0) {
      uVar2 = FUN_14479d2ce(param_1);
      FUN_140545fa2(uVar2);
      lVar1 = FUN_14479d2ce(param_1);
      FUN_1416adeb6(*(undefined8 *)(lVar1 + 0x2210),1,
                    9.99999905104687e-09 <=
                    param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
      return;
    }
  }
  return;
}



// FUNCTION 14625c5d2 FUN_14625c5d2 body=48 status=ok
// SIG undefined FUN_14625c5d2(void)

void FUN_14625c5d2(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014625c5ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2);
  return;
}



// FUNCTION 14625c602 FUN_14625c602 body=367 status=ok
// SIG undefined FUN_14625c602(void)

void FUN_14625c602(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x360) == 0) {
    lVar5 = param_1 + 0x30;
    cVar3 = FUN_144729dda(lVar5);
    if (cVar3 != '\0') {
      cVar3 = FUN_144729dda(lVar5);
      if (cVar3 != '\0') {
        plVar4 = (longlong *)FUN_14479d2ce(lVar5);
        lVar5 = (**(code **)(*plVar4 + 0x180))(plVar4);
        if (lVar5 != 0) {
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = FUN_148ea4286;
          local_b0 = 0;
          FUN_14625c772(&local_c8,param_1,&local_b8);
          uVar6 = FUN_144a88394(lVar5);
          lVar5 = thunk_FUN_1402735c8();
          uVar1 = *(undefined4 *)(lVar5 + 0x514);
          lVar5 = thunk_FUN_1402735c8();
          uVar2 = *(undefined4 *)(lVar5 + 0x510);
          local_b8 = (code *)0x0;
          local_b0 = 0;
          FUN_14487d8d8(&local_b8,&local_c8);
          local_78 = 1;
          local_d8 = 1;
          local_d0 = uVar1;
          FUN_1406f3fee(uVar6,param_1 + 0x360,&local_b8,uVar2);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
          FUN_1449db362(&local_c8);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625c772 FUN_14625c772 body=423 status=ok
// SIG undefined FUN_14625c772(void)

void FUN_14625c772(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14625c848:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9cc220;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14625c848;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9cc220;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014625c901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14625c91a FUN_14625c91a body=379 status=ok
// SIG undefined FUN_14625c91a(void)

void FUN_14625c91a(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined1 local_b0 [16];
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1459dd0f6();
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (0.0001 < *(float *)(*(longlong *)(param_1 + 0x50) + 0x30))) {
    lVar5 = param_1 + 0x48;
    cVar2 = FUN_144729dda(lVar5);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(lVar5);
      lVar4 = FUN_1447210f0(uVar3);
      if (lVar4 != 0) {
        uVar3 = FUN_14479d2ce(lVar5);
        lVar5 = FUN_1447210f0(uVar3);
        if (*(longlong *)(lVar5 + 0x1f0) == 0) {
          puVar6 = (undefined8 *)(lVar5 + 0x458);
        }
        else {
          puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar6;
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x30);
        local_98 = &LAB_141603374;
        local_90 = 0;
        FUN_14625ca96(local_b0,param_1,&local_98);
        local_98 = (undefined1 *)0x0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,local_b0);
        local_58 = 1;
        local_b8 = local_a0;
        local_a0[0] = 0;
        local_9c = 0xbf800000;
        FUN_1406f4044(uVar3,param_1 + 0x130,&local_98,uVar1);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(local_b0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625ca96 FUN_14625ca96 body=428 status=ok
// SIG undefined FUN_14625ca96(void)

longlong * FUN_14625ca96(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14625cb76:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b968b40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14625cb76;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b968b40;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14625cc50 FUN_14625cc50 body=1060 status=ok
// SIG undefined FUN_14625cc50(void)

ulonglong FUN_14625cc50(longlong param_1,int param_2,char param_3,char param_4,undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar3 == '\0') goto LAB_14625ccf4;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar6 = *(longlong *)(param_1 + 0x68);
      lVar7 = (longlong)param_2;
      local_48 = *(ulonglong *)(lVar6 + 0x20 + lVar7 * 0x28);
      puVar5 = (undefined4 *)(lVar6 + lVar7 * 0x28);
      local_68 = *puVar5;
      uStack_64 = puVar5[1];
      uStack_60 = puVar5[2];
      uStack_5c = puVar5[3];
      puVar5 = (undefined4 *)(lVar6 + 0x10 + lVar7 * 0x28);
      local_58 = *puVar5;
      uStack_54 = puVar5[1];
      uStack_50 = puVar5[2];
      uStack_4c = puVar5[3];
      FUN_14621f65a(param_1 + 0x18);
      FUN_14621f5e6(param_1 + 0x68,param_2);
      uVar4 = *(uint *)(param_1 + 0xa8);
      lVar6 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar4;
      if (0 < (int)uVar4) {
        do {
          uVar11 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar6 + (ulonglong)uVar11 * 0x1c) < param_2) {
            uVar13 = uVar11 + (uVar12 & 1);
          }
          bVar2 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar2);
      }
      if (((int)uVar13 < (int)uVar4) && (*(int *)(lVar6 + (ulonglong)uVar13 * 0x1c) <= param_2)) {
        if (~uVar13 + uVar4 != 0) {
          pvVar8 = (void *)(lVar6 + (ulonglong)uVar13 * 0x1c);
          memmove(pvVar8,(void *)((longlong)pvVar8 + 0x1c),(longlong)(int)(~uVar13 + uVar4) * 0x1c);
          uVar4 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar4 - 1;
LAB_14625d06b:
        FUN_14768b278(param_1 + 0xa0);
      }
LAB_14625cf39:
      if ((local_48 & 1) != 0) {
        FUN_14625d076(&uStack_60,param_5);
      }
      unaff_RBP = 0;
      goto LAB_14625ccf4;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + (longlong)param_2 * 0x28) & 1) == 0)
    goto LAB_14625ccf4;
    puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar4) {
      uVar12 = 0;
      uVar10 = (ulonglong)uVar4;
      uVar13 = uVar4;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + uVar12;
        if (*(int *)(lVar6 + (ulonglong)uVar11 * 0x1c) < param_2) {
          uVar12 = uVar11 + (uVar13 & 1);
        }
        bVar2 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar2);
    }
    if ((((int)uVar12 < (int)uVar4) && (*(int *)(lVar6 + (ulonglong)uVar12 * 0x1c) <= param_2)) &&
       (lVar6 = lVar6 + (ulonglong)uVar12 * 0x1c + 4, lVar6 != 0)) {
      FUN_14625d076(lVar6,param_5);
      uVar4 = *(uint *)(param_1 + 0xa8);
      lVar6 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar4;
      if (0 < (int)uVar4) {
        do {
          uVar11 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar6 + (ulonglong)uVar11 * 0x1c) < param_2) {
            uVar13 = uVar11 + (uVar12 & 1);
          }
          bVar2 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar2);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar13 < (int)uVar4) && (*(int *)(lVar6 + (ulonglong)uVar13 * 0x1c) <= param_2)) {
        if (~uVar13 + uVar4 != 0) {
          pvVar8 = (void *)(lVar6 + (ulonglong)uVar13 * 0x1c);
          memmove(pvVar8,(void *)((longlong)pvVar8 + 0x1c),(longlong)(int)(~uVar13 + uVar4) * 0x1c);
          uVar4 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar4 - 1;
        FUN_14768b278(param_1 + 0xa0);
      }
      goto LAB_14625ccf4;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\0') {
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
      if ((*(byte *)(puVar5 + 8) & 2) == 0) {
        local_48 = *(ulonglong *)(puVar5 + 8);
        local_68 = *puVar5;
        uStack_64 = puVar5[1];
        uStack_60 = puVar5[2];
        uStack_5c = puVar5[3];
        local_58 = puVar5[4];
        uStack_54 = puVar5[5];
        uStack_50 = puVar5[6];
        uStack_4c = puVar5[7];
        FUN_14621f65a(param_1 + 0x18);
        FUN_14621f5e6(param_1 + 0x68,param_2);
        uVar4 = *(uint *)(param_1 + 0xa8);
        lVar6 = *(longlong *)(param_1 + 0xa0);
        uVar13 = 0;
        uVar12 = uVar4;
        if (0 < (int)uVar4) {
          do {
            uVar11 = (uVar12 >> 1) + uVar13;
            if (*(int *)(lVar6 + (ulonglong)uVar11 * 0x1c) < param_2) {
              uVar13 = uVar11 + (uVar12 & 1);
            }
            bVar2 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar2);
        }
        if (((int)uVar13 < (int)uVar4) && (*(int *)(lVar6 + (ulonglong)uVar13 * 0x1c) <= param_2)) {
          if (~uVar13 + uVar4 != 0) {
            pvVar8 = (void *)(lVar6 + (ulonglong)uVar13 * 0x1c);
            memmove(pvVar8,(void *)((longlong)pvVar8 + 0x1c),(longlong)(int)(~uVar13 + uVar4) * 0x1c
                   );
            uVar4 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar4 - 1;
          goto LAB_14625d06b;
        }
        goto LAB_14625cf39;
      }
      if ((*(byte *)(puVar5 + 8) & 1) == 0) goto LAB_14625ccf4;
    }
    else {
      if (param_4 != '\x01') goto LAB_14625ccf4;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + (longlong)param_2 * 0x28);
      if ((bVar1 & 1) == 0) goto LAB_14625ccf4;
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
      *(byte *)(puVar5 + 8) = bVar1 | 2;
    }
  }
  FUN_14625d076(puVar5 + 2,param_5);
LAB_14625ccf4:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14625d076 FUN_14625d076 body=209 status=ok
// SIG undefined FUN_14625d076(void)

void FUN_14625d076(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14625d148(param_2,&local_28);
  if (local_28 != 0) {
    if (*(char *)((longlong)param_1 + 0x15) == '\x01') {
      uVar4 = *(undefined1 *)(param_1 + 5);
      uVar3 = *param_1;
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_14115d1aa(&local_38,uVar3,param_1 + 1,uVar4);
    }
    else {
      local_48 = local_28;
      local_40 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_14625d1d8(&local_48);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625d148 FUN_14625d148 body=144 status=ok
// SIG undefined FUN_14625d148(void)

undefined8 * FUN_14625d148(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if ((*param_1 == 0) || ((short)param_1[1] == -1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x548) + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x100 + (ulonglong)*(ushort *)(param_1 + 1) * 0x128);
    plVar5 = *(longlong **)(lVar3 + 0x108 + (ulonglong)*(ushort *)(param_1 + 1) * 0x128);
    if (plVar5 == (longlong *)0x0) {
      *param_2 = uVar4;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *param_2 = uVar4;
      param_2[1] = plVar5;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  return param_2;
}



// FUNCTION 14625d1d8 FUN_14625d1d8 body=1068 status=ok
// SIG undefined FUN_14625d1d8(void)

void FUN_14625d1d8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8f;
  undefined3 uStack_8b;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3f800000;
  local_e8 = *param_1;
  local_e0 = param_1[1];
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
  }
  FUN_14115d6de(&local_d8,&local_e8);
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  if (local_d8 == (longlong *)0x0) {
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x30))(local_d0,&local_88);
    }
  }
  else {
    (**(code **)(*local_d8 + 8))(local_d8,&local_88);
  }
  local_b0 = 0x100000000;
  local_a0 = 0xffffffff;
  local_98 = 0;
  iVar13 = 0;
  uStack_a8 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_b0);
    iVar13 = local_60;
  }
  local_f8 = local_a0;
  uVar4 = local_f8;
  local_f0 = local_98;
  local_ec = local_94;
  local_108 = local_b0;
  local_100 = uStack_a8;
  local_f8._4_4_ = (int)(local_a0 >> 0x20);
  local_110 = &local_88;
  if ((local_f8._4_4_ != iVar13) || (uStack_a8 != local_78)) {
    iVar5 = local_f8._4_4_;
    local_f8 = uVar4;
    do {
      if ((int)uStack_80 != local_54) {
        uVar4 = *(ulonglong *)(*local_110 + (longlong)iVar5 * 0x48);
        uVar9 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        puVar10 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        iVar5 = *(int *)(puVar10 + (ulonglong)(local_40 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        while (iVar5 != -1) {
          puVar11 = (ulonglong *)(local_88 + (longlong)iVar5 * 0x48);
          if (*puVar11 == uVar4) goto LAB_14625d552;
          iVar5 = (int)puVar11[8];
        }
      }
      puVar11 = (ulonglong *)0x0;
LAB_14625d552:
      puVar11[1] = 1;
      puVar11[2] = CONCAT44(uStack_c4,local_c8);
      puVar11[3] = CONCAT44(uStack_bc,uStack_c0);
      *(undefined4 *)(puVar11 + 4) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar11 + 0x24) = local_b0._4_4_;
      *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_a8._4_4_;
      puVar11[6] = local_a0;
      *(undefined1 *)(puVar11 + 7) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x39) = local_8f;
      *(uint *)((longlong)puVar11 + 0x3c) = CONCAT31(uStack_8b,local_8f._3_1_);
      local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
      FUN_1449c0562(&local_108);
      iVar5 = local_f8._4_4_;
    } while (((local_f8._4_4_ != iVar13) || (local_100 != local_78)) ||
            (uVar4 = local_f8, local_110 != &local_88));
  }
  local_f8 = uVar4;
  if (local_d8 == (longlong *)0x0) {
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x28))(local_d0,&local_88);
    }
  }
  else {
    (**(code **)*local_d8)(local_d8,&local_88);
  }
  plVar6 = (longlong *)FUN_14479d2ce(*param_1 + 0x18);
  if (((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x180))(plVar6), lVar7 != 0))
     && ((*(char *)(lVar7 + 0x152) == '\x01' || (*(char *)(lVar7 + 0x152) == '\x03')))) {
    lVar8 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x1f0) + 0x40);
    if (lVar8 != 0) {
      lVar12 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0x38) + lVar12);
        if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
          plVar6 = *(longlong **)(lVar3 + 0x448);
          if ((plVar6 != (longlong *)0x0) && ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0)) {
            (**(code **)(*plVar6 + 0x810))();
          }
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar8 * 8 != lVar12);
    }
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14115d668(&local_88);
  plVar6 = (longlong *)param_1[1];
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
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625d606 FUN_14625d606 body=348 status=ok
// SIG undefined FUN_14625d606(void)

void FUN_14625d606(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  FUN_140170290();
  FUN_14625d764(lVar1);
  FUN_1416afcd8(lVar1);
  lVar4 = FUN_1400d7050(param_1);
  if (lVar4 == 0) goto LAB_14625d711;
  lVar5 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_14625d711;
  FUN_1449027d0(lVar1,&local_40);
  lVar5 = *(longlong *)(local_40 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b0));
  *(int *)(lVar5 + 0x1a8) = *(int *)(lVar5 + 0x1a8) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958);
  if (plVar6 == (longlong *)0x0) {
LAB_14625d734:
    uVar3 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
    if (lVar7 == 0) goto LAB_14625d734;
    uVar3 = FUN_1414875dc(lVar7);
  }
  *(undefined1 *)(lVar5 + 0x138) = uVar3;
  lVar4 = FUN_1402a1246(lVar4);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xf74) == '\x01')) {
    FUN_148e24c1c(lVar1);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x1b0));
LAB_14625d711:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625d764 FUN_14625d764 body=389 status=ok
// SIG undefined FUN_14625d764(void)

void FUN_14625d764(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_1449027d0(param_1,&local_40);
      lVar6 = *(longlong *)(local_40 + 0x410);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1b0));
      *(int *)(lVar6 + 0x1a8) = *(int *)(lVar6 + 0x1a8) + 1;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      cVar3 = *(char *)(param_1 + 500);
      *(char *)(lVar6 + 0x158) = cVar3;
      if (cVar3 == '\0') {
        iVar4 = *(int *)(lVar6 + 0x154);
        FUN_14580f9a5(*(undefined8 *)(lVar6 + 0x148),*(undefined4 *)(lVar6 + 0x150));
        *(undefined4 *)(lVar6 + 0x150) = 0;
        if ((iVar4 < 0) && (*(int *)(lVar6 + 0x154) != 0)) {
          FUN_148e2aba6(lVar6 + 0x148,0);
        }
      }
      else {
        uVar7 = FUN_1402a1246(lVar5);
        uVar7 = FUN_148dc1a6c(uVar7);
        *(undefined8 *)(lVar6 + 0x140) = uVar7;
        FUN_144250970(param_1,lVar6 + 0x160);
        FUN_1442510dc(lVar6 + 0x178);
        FUN_14424f504(param_1,lVar6 + 0x148);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x1b0));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625d8fa FUN_14625d8fa body=414 status=ok
// SIG undefined FUN_14625d8fa(void)

void FUN_14625d8fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_48 = local_34;
  FUN_1416b2ae6(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625da9a FUN_14625da9a body=3441 status=ok
// SIG undefined FUN_14625da9a(void)

/* WARNING: Removing unreachable block (ram,0x00014625e7e5) */
/* WARNING: Removing unreachable block (ram,0x00014625e7ab) */
/* WARNING: Removing unreachable block (ram,0x00014625e771) */
/* WARNING: Removing unreachable block (ram,0x00014625e737) */
/* WARNING: Removing unreachable block (ram,0x00014625e6fd) */
/* WARNING: Removing unreachable block (ram,0x00014625e6c3) */
/* WARNING: Removing unreachable block (ram,0x00014625e689) */
/* WARNING: Removing unreachable block (ram,0x00014625e64f) */
/* WARNING: Removing unreachable block (ram,0x00014625e628) */
/* WARNING: Removing unreachable block (ram,0x00014625e5ee) */
/* WARNING: Removing unreachable block (ram,0x00014625e5d1) */
/* WARNING: Removing unreachable block (ram,0x00014625e60b) */
/* WARNING: Removing unreachable block (ram,0x00014625e632) */
/* WARNING: Removing unreachable block (ram,0x00014625e66c) */
/* WARNING: Removing unreachable block (ram,0x00014625e6a6) */
/* WARNING: Removing unreachable block (ram,0x00014625e6e0) */
/* WARNING: Removing unreachable block (ram,0x00014625e71a) */
/* WARNING: Removing unreachable block (ram,0x00014625e754) */
/* WARNING: Removing unreachable block (ram,0x00014625e78e) */
/* WARNING: Removing unreachable block (ram,0x00014625e7c8) */
/* WARNING: Removing unreachable block (ram,0x00014625e802) */

void FUN_14625da9a(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1416b2ca8(DAT_14cadc0f0,DAT_14cadc0f8);
  DAT_14cadc0f8 = 0;
  if (DAT_14cadc0fc != 0) {
    FUN_147adff68();
  }
  local_28 = 0x37;
  FUN_140056680(&local_20,L"AntiAliasingMethod");
  iVar2 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,iVar2);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x38;
  FUN_140056680(&local_20,L"UpscalingMethod");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x39;
  FUN_140056680(&local_20,L"Upscaling");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x3a;
  FUN_140056680(&local_20,L"SecondaryUpscaling");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x3b;
  FUN_140056680(&local_20,L"SceneCaptureUpscaling");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x40;
  FUN_140056680(&local_20,L"HLODLoadingRange");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x41;
  FUN_140056680(&local_20,L"NaniteQuality");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x42;
  FUN_140056680(&local_20,L"Textures");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x43;
  FUN_140056680(&local_20,L"TexturesStreamingSpeed");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x44;
  FUN_140056680(&local_20,L"AnisotropicFiltering");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x45;
  FUN_140056680(&local_20,L"Foliage");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x46;
  FUN_140056680(&local_20,&DAT_14a1f75d8);
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x47;
  FUN_140056680(&local_20,L"VolumetricCloud");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x48;
  FUN_140056680(&local_20,L"Shadows");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x49;
  FUN_140056680(&local_20,L"DirectionalShadows");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x4a;
  FUN_140056680(&local_20,L"VolumetricCloudShadows");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x4b;
  FUN_140056680(&local_20,L"Lumen");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x4c;
  FUN_140056680(&local_20,L"Reflections");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x4d;
  FUN_140056680(&local_20,L"MaterialsQuality");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x4e;
  FUN_140056680(&local_20,L"PostProcessQuality");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0x50;
  FUN_140056680(&local_20,L"MotionBlurQuality");
  uVar3 = DAT_14cadc0f8;
  lVar4 = (longlong)(int)DAT_14cadc0f8;
  DAT_14cadc0f8 = DAT_14cadc0f8 + 1;
  if (DAT_14cadc0fc < DAT_14cadc0f8) {
    FUN_1457e6d7c(&DAT_14cadc0f0,uVar3);
  }
  lVar1 = DAT_14cadc0f0;
  *(undefined4 *)(DAT_14cadc0f0 + lVar4 * 0x18) = local_28;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar4 * 0x18) = local_20;
  *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0x14 + lVar4 * 0x18) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625e80c FUN_14625e80c body=1117 status=ok
// SIG undefined FUN_14625e80c(void)

void FUN_14625e80c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar11 = *(uint *)(param_1 + 0x10);
  lVar25 = (longlong)(int)uVar11;
  if (lVar25 != 0) {
    local_78 = (longlong *)(param_1 + 8);
    plVar12 = *(longlong **)(param_1 + 8);
    uVar14 = 0;
    bVar4 = *plVar12 == 0;
    uVar17 = 0;
    do {
      lVar18 = (longlong)(int)uVar17;
      uVar5 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)uVar11) {
        uVar5 = uVar11;
      }
      plVar8 = plVar12 + lVar18 * 3 + 3;
      lVar19 = lVar18;
      uVar16 = uVar17;
      do {
        lVar19 = lVar19 + 1;
        uVar6 = uVar5;
        if (lVar25 <= lVar19) break;
        lVar3 = *plVar8;
        uVar16 = uVar16 + 1;
        plVar8 = plVar8 + 3;
        local_a0 = param_1;
        uVar6 = uVar16;
      } while (bVar4 == (lVar3 == 0));
      iVar10 = uVar6 - uVar17;
      if (bVar4) {
        FUN_1458ce261(plVar12 + lVar18 * 3,iVar10);
      }
      else {
        if (uVar14 != uVar17) {
          local_a0 = param_1;
          memmove(plVar12 + (longlong)(int)uVar14 * 3,plVar12 + lVar18 * 3,(longlong)iVar10 * 0x18);
          param_1 = local_a0;
        }
        uVar14 = uVar14 + iVar10;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      uVar17 = uVar6;
    } while (lVar19 < lVar25);
    *(uint *)(param_1 + 0x10) = uVar14;
    plVar12 = *(longlong **)(param_1 + 8);
    if (1 < (int)uVar14) {
      local_80 = (ulonglong)uVar14;
      lVar25 = 0;
      plVar8 = plVar12;
      do {
        if ((lVar25 + 1U < local_80) && (*(int *)(plVar8[3] + 8) < *(int *)(*plVar8 + 8))) {
          local_58 = plVar8[2];
          local_68 = *plVar8;
          lStack_60 = plVar8[1];
          plVar8[2] = plVar8[5];
          *plVar8 = plVar8[3];
          plVar8[1] = plVar8[4];
          plVar8[5] = local_58;
          plVar8[3] = local_68;
          plVar8[4] = lStack_60;
        }
        lVar25 = lVar25 + 2;
        plVar8 = plVar8 + 6;
      } while ((int)lVar25 < (int)uVar14);
      if (uVar14 != 2) {
        local_90 = 2;
        do {
          iVar10 = (int)local_90;
          local_94 = iVar10 * 2;
          local_70 = (longlong)(int)local_94;
          local_88 = 0;
          do {
            uVar11 = uVar14 - (int)local_88;
            if ((int)local_94 <= (int)(uVar14 - (int)local_88)) {
              uVar11 = local_94;
            }
            if (iVar10 < (int)uVar11 && 0 < iVar10) {
              iVar22 = 0;
              uVar13 = local_90;
              while( true ) {
                iVar24 = (int)uVar13;
                iVar21 = 0;
                if (iVar24 - iVar22 != 0 && iVar22 <= iVar24) {
                  iVar21 = 0;
                  uVar15 = (ulonglong)(uint)(iVar24 - iVar22);
                  do {
                    iVar20 = (int)(uVar15 >> 1) + iVar21;
                    uVar17 = (uint)uVar15;
                    if (*(int *)(plVar12[local_88 * 3 + (longlong)iVar22 * 3 + (longlong)iVar20 * 3]
                                + 8) <= *(int *)(plVar12[local_88 * 3 + (longlong)iVar24 * 3] + 8))
                    {
                      iVar21 = iVar20 + (uVar17 & 1);
                    }
                    uVar15 = uVar15 >> 1;
                  } while (1 < uVar17);
                }
                iVar21 = iVar21 + iVar22;
                if (iVar24 - iVar21 == 0 || iVar24 < iVar21) break;
                if (uVar11 - iVar24 == 0 || (int)uVar11 < iVar24) {
                  iVar22 = 0;
                }
                else {
                  plVar8 = plVar12 + local_88 * 3 + (longlong)iVar21 * 3;
                  iVar22 = 0;
                  uVar17 = uVar11 - iVar24;
                  do {
                    uVar5 = (uVar17 >> 1) + iVar22;
                    if (*(int *)((plVar12 + local_88 * 3 + (longlong)iVar24 * 3)
                                 [(ulonglong)uVar5 * 3] + 8) < *(int *)(*plVar8 + 8)) {
                      iVar22 = uVar5 + (uVar17 & 1);
                    }
                    bVar4 = 1 < uVar17;
                    uVar17 = uVar17 >> 1;
                  } while (bVar4);
                  uVar13 = (ulonglong)(uint)(iVar24 + iVar22);
                  if (0 < iVar22) {
                    plVar2 = plVar8 + (longlong)((iVar24 + iVar22) - iVar21) * 3;
                    plVar9 = plVar8 + (longlong)(iVar24 - iVar21) * 3;
                    plVar23 = plVar8 + (longlong)(iVar24 - iVar21) * 3;
                    do {
                      while( true ) {
                        plVar1 = plVar9 + 3;
                        local_58 = plVar8[2];
                        local_68 = *plVar8;
                        lStack_60 = plVar8[1];
                        plVar8[2] = plVar9[2];
                        lVar25 = plVar9[1];
                        *plVar8 = *plVar9;
                        plVar8[1] = lVar25;
                        plVar8 = plVar8 + 3;
                        plVar9[2] = local_58;
                        *plVar9 = local_68;
                        plVar9[1] = lStack_60;
                        if (plVar1 == plVar2) break;
                        plVar9 = plVar1;
                        if (plVar8 == plVar23) {
                          plVar23 = plVar1;
                        }
                      }
                      plVar9 = plVar23;
                    } while (plVar8 != plVar23);
                  }
                }
                if (((int)uVar11 <= (int)uVar13) ||
                   (iVar22 = iVar21 + iVar22 + 1, (int)uVar13 <= iVar22)) break;
              }
            }
            local_88 = local_88 + local_70;
          } while (local_88 < (longlong)local_80);
          local_90 = (ulonglong)local_94;
        } while ((int)local_94 < (int)uVar14);
      }
      iVar10 = *(int *)(param_1 + 0x10);
      iVar22 = 1;
      local_a0 = param_1;
      if (1 < iVar10) {
        uVar13 = 0;
        uVar15 = 1;
        lVar25 = 0x18;
        do {
          lVar18 = *local_78;
          if (*(int *)(*(longlong *)(lVar18 + lVar25) + 8) !=
              *(int *)(*(longlong *)(lVar18 + (longlong)(int)uVar13 * 0x18) + 8)) {
            uVar11 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar11;
            if (uVar15 != uVar13) {
              FUN_1401f3db8(lVar18 + (longlong)(int)uVar11 * 0x18,lVar18 + lVar25);
              iVar10 = *(int *)(local_a0 + 0x10);
            }
          }
          uVar15 = uVar15 + 1;
          lVar25 = lVar25 + 0x18;
        } while ((longlong)uVar15 < (longlong)iVar10);
        iVar22 = (int)uVar13 + 1;
      }
      FUN_148cef314(local_78,iVar22);
      plVar12 = *(longlong **)(local_a0 + 8);
      uVar14 = *(uint *)(local_a0 + 0x10);
    }
    if (uVar14 != 0) {
      lVar25 = 0;
      do {
        plVar8 = *(longlong **)((longlong)plVar12 + lVar25);
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,(int)plVar8[1]);
        *(undefined8 *)(*(longlong *)((longlong)plVar12 + lVar25) + 0x10) = uVar7;
        lVar25 = lVar25 + 0x18;
      } while ((longlong)(int)uVar14 * 0x18 != lVar25);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14625ec6a FUN_14625ec6a body=843 status=ok
// SIG undefined FUN_14625ec6a(void)

void FUN_14625ec6a(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x2cc);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x1c0))) &&
       (*(int *)(lVar3 + 0x1c8) = *(int *)(lVar3 + 0x1c8) + 1,
       *(char *)(*(longlong *)(lVar3 + 0x1b8) + 0xb0 + (longlong)iVar1 * 0x1e8) == '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    iVar1 = *(int *)(param_1 + 0x2c8 + (ulonglong)(*(byte *)(lVar3 + 0x1dd) ^ 1) * 4);
    *(undefined1 *)(lVar3 + 0x308) = 0;
    if ((-1 < (longlong)iVar1) && (iVar1 < (int)*(uint *)(lVar3 + 0x1c0))) {
      iVar2 = *(int *)(lVar3 + 0x1c8);
      lVar4 = *(longlong *)(lVar3 + 0x1b8);
      *(int *)(lVar3 + 0x1c8) = iVar2 + 2;
      lVar11 = 0;
      do {
        if (*(char *)(lVar4 + 0xb8 + lVar11) == '\x01') {
          uVar8 = *(undefined8 *)(lVar4 + 0x28 + lVar11);
          iVar10 = (int)((ulonglong)uVar8 >> 0x20);
          goto LAB_14625ed4b;
        }
        lVar11 = lVar11 + 0x1e8;
      } while ((ulonglong)*(uint *)(lVar3 + 0x1c0) * 0x1e8 - lVar11 != 0);
      uVar8 = 0;
      iVar10 = 0;
LAB_14625ed4b:
      *(int *)(lVar3 + 0x1c8) = iVar2 + 3;
      uVar5 = *(undefined8 *)(lVar4 + 0x28 + (longlong)iVar1 * 0x1e8);
      if (((int)uVar8 == (int)uVar5) && (iVar10 == (int)((ulonglong)uVar5 >> 0x20))) {
        if (*(char *)(lVar3 + 0x2f8) == '\0') {
          puVar6 = (undefined8 *)FUN_14001cc68(0x68,0x10);
          if (*(longlong *)(param_1 + 0x160) == 0) {
            puVar7 = &DAT_14c9a1308;
          }
          else {
            puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2618);
          }
          uVar8 = FUN_144a7cdd6(puVar7,0);
          FUN_1446ddc76(&local_50,uVar8,1);
          *puVar6 = &PTR_FUN_14b9cd3a0;
          FUN_1446ddc76(&local_48,"UpdateStandIn",1);
          FUN_14039176c(puVar6,*(undefined8 *)(param_1 + 0x30),local_48,1);
          *puVar6 = &PTR_FUN_14b9cd3a0;
          puVar6[7] = DAT_14cbe0120;
          puVar6[8] = *(undefined8 *)(param_1 + 0x18);
          puVar6[9] = local_50;
          *(undefined1 *)(puVar6 + 0xc) = 0;
          FUN_140391314(param_1,puVar6);
          FUN_140de1078(param_1,&DAT_14cbe1fc0,0,0);
          puVar9 = &DAT_14cbe22a8;
        }
        else {
          FUN_140de1078(param_1,&DAT_14cbe1f50,0,0);
          puVar9 = &DAT_14cbe22f0;
        }
      }
      else if (*(char *)(lVar3 + 0x2f8) == '\0') {
        FUN_140de1078(param_1,&DAT_14cbe1fb0,0,0);
        puVar9 = &DAT_14cbe22a0;
      }
      else {
        FUN_140de1078(param_1,&DAT_14cbe1f50,0,0);
        puVar9 = &DAT_14cbe22e8;
      }
      FUN_1457d7894(param_1,puVar9);
      if (*(char *)(lVar3 + 0x2f8) == '\0') {
        if (*(char *)(lVar3 + 0x1dd) == '\x01') {
          puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          puVar6[1] = 0;
          *(undefined4 *)(puVar6 + 2) = 0;
          puVar6[3] = 0;
          *puVar6 = &PTR_FUN_14b9d43a0;
          puVar6[4] = *(undefined8 *)(lVar3 + 0xd0);
          puVar6[5] = uVar5;
        }
        else {
          puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          puVar6[1] = 0;
          *(undefined4 *)(puVar6 + 2) = 0;
          puVar6[3] = 0;
          *puVar6 = &PTR_FUN_14b9d4390;
          puVar6[4] = *(undefined8 *)(lVar3 + 0xd0);
          puVar6[5] = uVar5;
          *(undefined1 *)(puVar6 + 6) = 1;
        }
        FUN_140391314(param_1,puVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625efd6 FUN_14625efd6 body=476 status=ok
// SIG undefined FUN_14625efd6(void)

undefined1 *
FUN_14625efd6(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  longlong *plVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  char local_e8 [184];
  ulonglong local_30;
  
  lVar5 = DAT_14cb98ab0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = *(undefined8 *)(param_4 + 0x20);
  local_110 = *(undefined8 *)(param_4 + 0x28);
  local_108 = *(longlong *)(param_4 + 0x30);
  if (local_108 != 0) {
    LOCK();
    *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
    UNLOCK();
  }
  FUN_14625f1b4(param_1,local_e8,&local_118);
  local_100 = *(undefined8 *)(param_4 + 0x20);
  local_f8 = *(undefined8 *)(param_4 + 0x28);
  local_f0 = *(longlong **)(param_4 + 0x30);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_140230656();
  plVar8 = local_f0;
  if ((cVar6 == '\0') || (local_e8[0] != '\0')) {
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f0)();
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
  }
  else {
    if ((*(int *)(lVar5 + 0x10) == 0) || (*(longlong **)(lVar5 + 8) == (longlong *)0x0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x30))();
    }
    plVar8 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f0)();
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    if (cVar6 != '\0') {
      uVar4 = *(undefined4 *)(param_4 + 0xc);
      bVar3 = *(byte *)(param_4 + 10);
      local_100 = *(undefined8 *)(param_4 + 0x20);
      local_f8 = *(undefined8 *)(param_4 + 0x28);
      local_f0 = *(longlong **)(param_4 + 0x30);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      if (*(int *)(lVar5 + 0x10) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar5 + 8);
      }
      cVar6 = (**(code **)(*plVar8 + 0x58))(plVar8,&local_100,(uint)bVar3 * 2,uVar4);
      uVar7 = 1;
      if (cVar6 != '\0') goto LAB_14625f07e;
    }
  }
  uVar7 = 0;
LAB_14625f07e:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  FUN_14493db24(local_e8);
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14625f1b4 FUN_14625f1b4 body=402 status=ok
// SIG undefined FUN_14625f1b4(void)

undefined1 * FUN_14625f1b4(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x318) == (longlong *)0x0) {
LAB_14625f2a2:
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x78))();
    if (cVar6 != '\0') goto LAB_14625f1f0;
    if (*(longlong **)(param_1 + 0x318) == (longlong *)0x0) goto LAB_14625f2a2;
    (**(code **)(**(longlong **)(param_1 + 0x318) + 0x80))();
    uVar5 = uStack_40;
    lVar4 = local_48;
    if ((longlong)(int)uStack_40 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(local_48 + lVar7) == *param_3) {
          *param_2 = 0;
          param_2[0x20] = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          memset(param_2 + 0x28,0,0x88);
          *(undefined4 *)(param_2 + 0xb0) = 0x20702;
          param_2[0xb4] = 0;
          FUN_144a65a1e(lVar4,uVar5 & 0xffffffff);
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14625f220;
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)uStack_40 * 0x18 != lVar7);
    }
  }
  FUN_144a65a1e(local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_14625f1f0:
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14625f220:
  plVar3 = (longlong *)param_3[2];
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14625f348 FUN_14625f348 body=807 status=ok
// SIG undefined FUN_14625f348(void)

void FUN_14625f348(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x48);
  FUN_14625f670(param_1,&local_c8);
  if (local_c8 != 0) {
    cVar3 = *(char *)(lVar4 + 0x80);
    local_a9 = 2;
    local_b8 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_78);
    local_a8[0] = 0;
    local_80 = 0;
    FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_1447c3578(lVar4 + 0x88,&local_78,local_a8);
    fVar8 = (float)FUN_144a7ecd0(&local_78);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar7 = &local_78;
      if (0x18 < local_60) {
        ppppuVar7 = (undefined8 ****)local_78;
      }
      (*pcVar5)(ppppuVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
    FUN_144a5ac3a(local_a8);
    if ((*(char *)(lVar4 + 0x80) == '\x02') || (cVar3 == '\0' && fVar8 < 1e-08)) {
      puVar6 = &DAT_14cb80c78;
      if (*(longlong *)(lVar4 + 200) != 0) {
        puVar6 = (undefined8 *)(lVar4 + 200);
      }
      FUN_145bef72e(local_c8,puVar6);
    }
    else {
      if (cVar3 == '\0') {
        local_d4 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0xc1)];
        local_d0 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0xc0)];
        local_cc = (float)*(byte *)(lVar4 + 0xc3) * 0.003921569;
        local_d8 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0xc2)];
        FUN_1461ba4f0(local_a8,fVar8,*(undefined1 *)(lVar4 + 0xc4));
      }
      else {
        local_e4 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0xc1)];
        local_e0 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0xc0)];
        local_dc = (float)*(byte *)(lVar4 + 0xc3) * 0.003921569;
        local_e8 = (&DAT_14c758c60)[*(byte *)(lVar4 + 0xc2)];
        FUN_1460147d0(local_a8,fVar8,*(undefined1 *)(lVar4 + 0xc4));
      }
      puVar6 = &DAT_14cb80c78;
      if (*(longlong *)(lVar4 + 200) != 0) {
        puVar6 = (undefined8 *)(lVar4 + 200);
      }
      FUN_1461a0c5e(local_c8,puVar6,local_a8);
    }
    fVar9 = (float)FUN_141236616(param_1);
    *(float *)(param_1 + 0x70) = fVar8 + fVar9;
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625f670 FUN_14625f670 body=73 status=ok
// SIG undefined FUN_14625f670(void)

undefined8 * FUN_14625f670(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar1 + 0x158);
    lVar1 = *(longlong *)(lVar1 + 0x160);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 14625f6ba FUN_14625f6ba body=737 status=ok
// SIG undefined FUN_14625f6ba(void)

ulonglong FUN_14625f6ba(undefined8 param_1,short *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined1 auStack_c8 [32];
  byte *local_a8;
  longlong *local_a0;
  byte *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined4 local_58;
  int local_50;
  undefined4 uStack_4c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (-1 < *param_2) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xffff;
    lVar6 = FUN_140b9fe48();
    if (lVar6 != 0) {
      uVar7 = FUN_144a8232a(&DAT_14cbe6830);
      piVar8 = (int *)FUN_1413fa874(lVar6,&local_88,uVar7);
      local_98 = DAT_14cb8dcf8;
      local_90 = DAT_14cb8dd00;
      FUN_1448075d0(&local_50);
      iVar5 = local_50;
      iVar2 = *piVar8;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (iVar2 != iVar5) {
        uVar7 = FUN_144a8232a(&DAT_14cbe6830);
        FUN_1416b4a92(lVar6,&local_98,&local_88,uVar7);
        if ((local_98 == (byte *)0x0) || ((*local_98 & 0x6b) != 3)) {
          pbVar10 = (byte *)0x0;
        }
        else {
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,DAT_14cbe66b8);
          local_a8 = DAT_14cbe66b0;
          FUN_1448075d0(&local_50,&local_a8);
          puVar9 = (undefined8 *)FUN_144a06846(&local_98,&local_50);
          local_a8 = (byte *)*puVar9;
          local_a0 = (longlong *)puVar9[1];
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
          }
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          if ((local_a8 == (byte *)0x0) || ((*local_a8 & 0x6b) != 3)) {
LAB_14625f93b:
            pbVar10 = (byte *)0x0;
          }
          else {
            local_58 = DAT_14cbe66a0;
            local_60 = DAT_14cbe6698;
            FUN_1448075d0(&local_50);
            puVar9 = (undefined8 *)FUN_144a06846(&local_a8,&local_50);
            pbVar10 = (byte *)*puVar9;
            plVar3 = (longlong *)puVar9[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            if (local_38 != 0) {
              FUN_1400020a8();
            }
            if ((pbVar10 == (byte *)0x0) || ((*pbVar10 & 0x6b) != 1)) {
              bVar4 = false;
            }
            else {
              local_60 = 0;
              FUN_1400bc2ec(pbVar10,&local_50);
              pbVar10 = (byte *)CONCAT71((int7)((ulonglong)pbVar10 >> 8),
                                         CONCAT44(uStack_4c,local_50) == DAT_14cb71810);
              bVar4 = true;
            }
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar8 = (int *)((longlong)plVar3 + 0xc);
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (*piVar8 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (!bVar4) goto LAB_14625f93b;
          }
          plVar3 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar8 = (int *)((longlong)plVar3 + 0xc);
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (*piVar8 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        plVar3 = (longlong *)CONCAT44(uStack_8c,local_90);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar8 = (int *)((longlong)plVar3 + 0xc);
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (*piVar8 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        goto LAB_14625f8e9;
      }
    }
  }
  pbVar10 = (byte *)0x0;
LAB_14625f8e9:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return (ulonglong)pbVar10 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14625f99c FUN_14625f99c body=1758 status=ok
// SIG undefined FUN_14625f99c(void)

ulonglong FUN_14625f99c(undefined8 param_1,longlong *param_2,int *param_3,int *param_4,
                       void **param_5,void **param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  int iVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  void *pvVar9;
  size_t _Size;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  wchar_t *_Str;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  uint local_98;
  uint local_94;
  longlong *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
    uVar10 = 0;
    goto LAB_14625fe01;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_1403de9f2(0,&local_58,&DAT_149e001d8,1);
  uVar10 = uStack_50 & 0xffffffff;
  if (((int)uStack_50 < 8) || ((uStack_50 & 1) != 0)) {
LAB_14625fe48:
    uVar10 = 0;
  }
  else {
    _Str = L"";
    pwVar7 = L"";
    if (*(int *)(local_58 + 1) != 0) {
      pwVar7 = (wchar_t *)*local_58;
    }
    iVar5 = _wtoi(pwVar7);
    *param_3 = iVar5;
    pwVar7 = L"";
    if (*(int *)(local_58 + 3) != 0) {
      pwVar7 = (wchar_t *)local_58[2];
    }
    iVar5 = _wtoi(pwVar7);
    *param_4 = iVar5;
    if (*(int *)(local_58 + 5) != 0) {
      _Str = (wchar_t *)local_58[4];
    }
    local_98 = _wtoi(_Str);
    local_68 = (void *)0x0;
    local_60 = *(int *)(local_58 + 7);
    lVar8 = (longlong)local_60;
    pvVar9 = (void *)local_58[6];
    if (lVar8 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar9,lVar8 * 2);
    }
    iVar5 = *(int *)(local_58 + 9);
    local_a0 = uVar10;
    if (iVar5 == DAT_14cb976a8) {
      if (1 < iVar5) {
        pvVar9 = (void *)local_58[8];
        lVar8 = 0;
        while( true ) {
          uVar11 = *(ushort *)((longlong)pvVar9 + lVar8);
          uVar12 = (ulonglong)uVar11;
          uVar13 = *(ushort *)(DAT_14cb976a0 + lVar8);
          if (uVar11 != uVar13) break;
          if (uVar11 == 0) goto LAB_14625ff57;
LAB_14625ff1f:
          lVar8 = lVar8 + 2;
        }
        if ((uVar13 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_14625ff1f;
        }
        if (uVar11 != uVar13) goto LAB_14625fad8;
      }
LAB_14625ff57:
      local_78 = (void *)0x0;
      uStack_70 = (longlong *)0x0;
    }
    else {
      if (DAT_14cb976a8 + iVar5 == 1) goto LAB_14625ff57;
      pvVar9 = (void *)local_58[8];
LAB_14625fad8:
      local_78 = (void *)0x0;
      uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,iVar5);
      if (iVar5 == 0) {
        uStack_70 = (longlong *)0x0;
      }
      else {
        FUN_1446dd670(&local_78,iVar5,0);
        memcpy(local_78,pvVar9,(longlong)iVar5 * 2);
      }
    }
    if (&local_78 == param_5) {
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_5 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_5 = local_78;
      *(undefined4 *)(param_5 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_5 + 0xc) = uStack_70._4_4_;
    }
    iVar5 = *(int *)(local_58 + 0xb);
    if (iVar5 == DAT_14cb976b8) {
      if (1 < iVar5) {
        pvVar9 = (void *)local_58[10];
        lVar8 = 0;
        while( true ) {
          uVar11 = *(ushort *)((longlong)pvVar9 + lVar8);
          uVar12 = (ulonglong)uVar11;
          uVar13 = *(ushort *)(DAT_14cb976b0 + lVar8);
          if (uVar11 != uVar13) break;
          if (uVar11 == 0) goto LAB_14625fbc6;
LAB_14625fb96:
          lVar8 = lVar8 + 2;
        }
        if ((uVar13 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_14625fb96;
        }
        if (uVar11 != uVar13) goto LAB_14625ffa2;
      }
LAB_14625fbc6:
      local_78 = (void *)0x0;
      uStack_70 = (longlong *)0x0;
    }
    else {
      if (DAT_14cb976b8 + iVar5 == 1) goto LAB_14625fbc6;
      pvVar9 = (void *)local_58[10];
LAB_14625ffa2:
      local_78 = (void *)0x0;
      uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,iVar5);
      if (iVar5 == 0) {
        uStack_70 = (longlong *)0x0;
        uVar10 = local_a0;
      }
      else {
        FUN_1446dd670(&local_78,iVar5,0);
        memcpy(local_78,pvVar9,(longlong)iVar5 * 2);
        uVar10 = local_a0;
      }
    }
    if (&local_78 == param_6) {
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_6 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_6 = local_78;
      local_78 = (void *)0x0;
      *(undefined4 *)(param_6 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_6 + 0xc) = uStack_70._4_4_;
    }
    local_94 = (int)uVar10 - 6U >> 1;
    if (local_94 == local_98) {
      iVar5 = 6;
      lVar8 = 0x60;
      local_90 = param_2;
      do {
        (**(code **)(*(longlong *)*param_2 + 0x120))
                  ((longlong *)*param_2,&local_78,(longlong)local_58 + lVar8);
        local_88 = (void *)0x0;
        local_80 = *(int *)((longlong)local_58 + lVar8 + 0x18);
        lVar15 = (longlong)local_80;
        pvVar9 = *(void **)((longlong)local_58 + lVar8 + 0x10);
        if (lVar15 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,pvVar9,lVar15 * 2);
        }
        plVar4 = uStack_70;
        pvVar9 = local_78;
        if (local_78 == (void *)0x0) {
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar4 = uStack_70;
          if (uStack_70 != (longlong *)0x0) {
            LOCK();
            plVar6 = uStack_70 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*uStack_70)(uStack_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar10 = 0;
          param_2 = local_90;
          break;
        }
        if (uStack_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
        _Src = local_88;
        plVar6[1] = (longlong)&DAT_100000001;
        *plVar6 = (longlong)&PTR_FUN_14b4f0250;
        plVar6[2] = (longlong)pvVar9;
        plVar6[3] = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        plVar6[4] = 0;
        lVar15 = (longlong)local_80;
        *(int *)(plVar6 + 5) = local_80;
        if (lVar15 == 0) {
          *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
          _Size = 0;
        }
        else {
          FUN_1446dd670(plVar6 + 4,local_80,0);
          _Size = lVar15 * 2;
          memcpy((void *)plVar6[4],_Src,_Size);
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
        iVar3 = (int)param_7[1];
        *(uint *)(param_7 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_7 + 0xc) < iVar3 + 1U) {
          FUN_14626007c(param_7,iVar3);
        }
        lVar15 = *param_7;
        *(longlong **)(lVar15 + (longlong)iVar3 * 0x10) = plVar6 + 2;
        *(longlong **)(lVar15 + 8 + (longlong)iVar3 * 0x10) = plVar6;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar6 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        param_2 = local_90;
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar4 = uStack_70;
        if (uStack_70 != (longlong *)0x0) {
          LOCK();
          plVar6 = uStack_70 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*uStack_70)(uStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        iVar5 = iVar5 + 2;
        lVar8 = lVar8 + 0x20;
        uVar10 = CONCAT71((int7)(_Size >> 8),1);
      } while (iVar5 < (int)local_a0);
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_94 != local_98) goto LAB_14625fe48;
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14625fe01:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 14626007c FUN_14626007c body=132 status=ok
// SIG undefined FUN_14626007c(void)

void FUN_14626007c(longlong param_1,int param_2)

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



// FUNCTION 146260100 FUN_146260100 body=264 status=ok
// SIG undefined FUN_146260100(void)

void FUN_146260100(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a01d60();
  uVar5 = FUN_1447210f0(param_1);
  iVar4 = FUN_14490d72a(uVar5);
  if (iVar4 == 1) goto LAB_14626019d;
  FUN_1416b5010(&local_30);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x390) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x398);
  if (local_28 == plVar3) {
LAB_1462601de:
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  else {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x398) = plVar1;
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
      goto LAB_1462601de;
    }
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1416b4b3c(*(longlong *)(param_1 + 0x390),param_1 + 0x3a0);
  }
  DAT_14cb913f0 = param_1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) | 7;
LAB_14626019d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14626020a FUN_14626020a body=3729 status=ok
// SIG undefined FUN_14626020a(void)

/* WARNING: Removing unreachable block (ram,0x000146261078) */
/* WARNING: Removing unreachable block (ram,0x000146261044) */
/* WARNING: Removing unreachable block (ram,0x000146261010) */
/* WARNING: Removing unreachable block (ram,0x000146260fec) */
/* WARNING: Removing unreachable block (ram,0x000146260fb8) */
/* WARNING: Removing unreachable block (ram,0x000146260fa4) */
/* WARNING: Removing unreachable block (ram,0x000146260f72) */
/* WARNING: Removing unreachable block (ram,0x000146260f40) */
/* WARNING: Removing unreachable block (ram,0x000146260f0e) */
/* WARNING: Removing unreachable block (ram,0x000146260edc) */
/* WARNING: Removing unreachable block (ram,0x000146260eaa) */
/* WARNING: Removing unreachable block (ram,0x000146260e78) */
/* WARNING: Removing unreachable block (ram,0x000146260e55) */
/* WARNING: Removing unreachable block (ram,0x000146260e23) */
/* WARNING: Removing unreachable block (ram,0x000146260e0a) */
/* WARNING: Removing unreachable block (ram,0x000146260e3c) */
/* WARNING: Removing unreachable block (ram,0x000146260e5f) */
/* WARNING: Removing unreachable block (ram,0x000146260e91) */
/* WARNING: Removing unreachable block (ram,0x000146260ec3) */
/* WARNING: Removing unreachable block (ram,0x000146260ef5) */
/* WARNING: Removing unreachable block (ram,0x000146260f27) */
/* WARNING: Removing unreachable block (ram,0x000146260f59) */
/* WARNING: Removing unreachable block (ram,0x000146260f8b) */
/* WARNING: Removing unreachable block (ram,0x000146260fae) */
/* WARNING: Removing unreachable block (ram,0x000146260fd2) */
/* WARNING: Removing unreachable block (ram,0x000146261006) */
/* WARNING: Removing unreachable block (ram,0x00014626102a) */
/* WARNING: Removing unreachable block (ram,0x00014626105e) */
/* WARNING: Removing unreachable block (ram,0x000146261092) */

void FUN_14626020a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)(param_1 + 8);
  FUN_140056680(&local_38,&DAT_14beee10e);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14beee116);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"3gp2");
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"3gpp");
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14ab40a78);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"adts");
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14bef9ce2);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14bef9cea);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"m2ts");
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14beee174);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14beee17c);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a598f58);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a598f60);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"sami");
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14bef9d06);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a1354e6);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14bef9d0e);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a598f68);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"Windows");
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x18),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  local_38 = 0xd2b54f625636fbc1;
  uStack_30 = 0xb184b45aac8e7d4f;
  FUN_14626109c(param_1 + -8);
  plVar4 = (longlong *)(param_1 + 0x28);
  FUN_140056680(&local_38,L"audcap");
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a8e6a18);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_149e3fc1c);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"httpd");
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_149e3fc26);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14bef9d30);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"rtsp");
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"rtspt");
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"rtspu");
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"vidcap");
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_1446ddc76(&local_40,"Media",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1405f3750(uVar3,local_40,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x80))(plVar4,param_1 + -8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14626109c FUN_14626109c body=240 status=ok
// SIG undefined FUN_14626109c(void)

/* WARNING: Removing unreachable block (ram,0x000146261183) */

void FUN_14626109c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_28,"Media",1);
  plVar3 = (longlong *)FUN_1447c1074(local_28);
  if ((plVar3 != (longlong *)0x0) &&
     ((**(code **)(*plVar3 + 0x40))(plVar3,&local_30,param_2), local_30 != 0)) {
    FUN_1400021e4(&local_30,&local_40);
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x20),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_40;
    local_40 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_38;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_38._4_4_;
    local_38 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14626118d FUN_14626118d body=593 status=ok
// SIG undefined FUN_14626118d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14626118d(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  double dVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  fVar12 = in_XMM3._0_4_;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144a9d448(&local_a8);
  dVar7 = local_98 * local_98 + local_a8 * local_a8;
  dVar11 = dStack_a0 * dStack_a0 + 0.0;
  auVar9._0_8_ = dVar7 + dVar11;
  auVar9._8_8_ = dVar7 + dVar11;
  auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar9._8_8_);
  auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar9._0_8_);
  auVar14 = sqrtpd(in_XMM3,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar14);
  auVar14._8_8_ = dStack_a0 * auVar10._8_8_;
  auVar14._0_8_ = local_a8 * auVar10._0_8_;
  auVar14 = blendvpd(ZEXT816(0x3ff0000000000000),auVar14,auVar6);
  if ((-(ulonglong)(1e-08 <= auVar9._0_8_) & 1) == 0) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = local_98 * auVar10._0_8_;
  }
  dVar11 = dStack_90;
  if (1.0 <= dStack_90) {
    dVar11 = 1.0;
  }
  dVar11 = acos((double)(~-(ulonglong)(dStack_90 < -1.0) & (ulonglong)dVar11 |
                        -(ulonglong)(dStack_90 < -1.0) & 0xbff0000000000000));
  dVar11 = (double)((float)(dVar11 + dVar11) * fVar12) * 0.5;
  dVar4 = sin(dVar11);
  dVar5 = cos(dVar11);
  dVar15 = auVar14._0_8_ * dVar4;
  dVar2 = auVar14._8_8_ * dVar4;
  dVar7 = dVar7 * dVar4;
  dVar11 = *param_2;
  dVar4 = param_2[1];
  dVar1 = param_2[2];
  dVar13 = dVar2 * dVar1 - dVar4 * dVar7;
  dVar13 = dVar13 + dVar13;
  dVar3 = dVar15 * dVar4 - dVar11 * dVar2;
  dVar3 = dVar3 + dVar3;
  dVar8 = dVar7 * dVar11 - dVar1 * dVar15;
  dVar8 = dVar8 + dVar8;
  *param_1 = (dVar2 * dVar3 - dVar8 * dVar7) + dVar5 * dVar13 + dVar11;
  param_1[1] = (dVar7 * dVar13 - dVar3 * dVar15) + dVar5 * dVar8 + dVar4;
  param_1[2] = (dVar15 * dVar8 - dVar13 * dVar2) + dVar5 * dVar3 + dVar1;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462613e0 FUN_1462613e0 body=457 status=ok
// SIG undefined FUN_1462613e0(void)

void FUN_1462613e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1416b77dc();
  plVar3 = (longlong *)(param_1 + 0x118);
  plVar4 = (longlong *)(param_1 + 0x128);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar4;
  if (*(int *)(param_1 + 0x140) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x140);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar3;
  if ((iStack_54 != iVar11) || (uStack_60 != plVar4)) {
    do {
      lVar6 = *local_90;
      lVar9 = (longlong)iStack_74;
      if (*(char *)(*(longlong *)(lVar6 + 0x10 + lVar9 * 0x28) + 0x28) == '\x01') {
        FUN_148d7d280(&local_68);
        lVar7 = local_68;
        if (local_68 != 0) {
          puVar10 = (undefined8 *)(lVar9 * 0x28 + lVar6);
          *(undefined4 *)(local_68 + 0x18) = *(undefined4 *)(puVar10 + 1);
          *(undefined8 *)(local_68 + 0x10) = *puVar10;
          *(undefined1 *)(local_68 + 0x1c) = 1;
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_140d2f4b4(param_2,iVar5);
          }
          lVar6 = *param_2;
          *(longlong *)(lVar6 + (longlong)iVar5 * 0x10) = lVar7;
          *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = uStack_60;
          if (uStack_60 == (longlong *)0x0) goto LAB_14626149a;
          LOCK();
          *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
          UNLOCK();
        }
        plVar8 = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_60)(uStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
LAB_14626149a:
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar3 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar4 || iStack_74 != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462615ee FUN_1462615ee body=977 status=ok
// SIG undefined FUN_1462615ee(void)

void FUN_1462615ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  undefined8 *local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_146261643;
      plVar6 = plVar6 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_146261643:
  local_c8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_98 = *(ulonglong *)(param_1 + 0x40);
  local_a4 = *(int *)(param_2 + 0x14);
  if (local_a4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_146261696;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_146261696:
  lVar3 = *plVar6;
  local_a8 = *(int *)(param_2 + 0x14);
  if (local_a8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18))
      goto LAB_1462616e1;
      plVar5 = plVar5 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_1462616e1:
  local_c0 = *plVar7;
  local_ac = *(int *)(param_2 + 0x14);
  local_b8 = lVar3;
  if (local_ac == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  lVar4 = local_c0;
  if (local_50 == 0) {
    local_a0 = plVar7;
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar1 = local_b8;
    lVar4 = local_c0;
    uVar10 = local_c8;
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if ((short)local_c8 != 0 && local_80 != (undefined8 *)0x0) {
        uVar10 = 0;
        puVar9 = local_80;
        do {
          uVar2 = FUN_1457bdbaa(*puVar9,*(undefined8 *)(local_c0 + uVar10 * 8));
          *(undefined1 *)(local_b8 + uVar10) = uVar2;
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 2;
        } while (local_c8 != uVar10);
      }
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
        }
      }
    }
    else if (local_c8 != 0) {
      uVar8 = 0;
      do {
        FUN_1460d56a8(*(undefined8 *)(lVar4 + uVar8 * 8),*(undefined2 *)(lVar3 + uVar8 * 2),
                      *(undefined2 *)(local_68 + uVar8 * 2),uVar8 + lVar1);
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
    }
    plVar7 = local_a0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
        plVar7 = local_a0;
      }
    }
  }
  else if (local_c8 != 0) {
    uVar10 = 0;
    do {
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) *
                          (ulonglong)*(ushort *)(local_50 + uVar10 * 2)))
                        (*(undefined8 *)(lVar4 + uVar10 * 8));
      *(undefined1 *)(local_b8 + uVar10) = uVar2;
      uVar10 = uVar10 + 1;
    } while (local_c8 != uVar10);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (local_ac == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar10 = plVar6[2];
    if ((ulonglong)plVar6[2] < local_98) {
      uVar10 = local_98;
    }
    plVar6[2] = uVar10;
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_a4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462619c0 FUN_1462619c0 body=93 status=ok
// SIG undefined FUN_1462619c0(void)

void FUN_1462619c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x198),
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x20))();
    if (cVar2 != '\0') {
      FUN_1416b7ddc(*(undefined8 *)(DAT_14cb98ab0 + 0x28),param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 146261a1e FUN_146261a1e body=50 status=ok
// SIG undefined FUN_146261a1e(void)

void FUN_146261a1e(longlong *param_1,longlong param_2)

{
  FUN_141001072();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146261a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x368))(param_1);
    return;
  }
  return;
}



// FUNCTION 146261a50 FUN_146261a50 body=1034 status=ok
// SIG undefined FUN_146261a50(void)

void FUN_146261a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0x100000000;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x118) * 0x118;
    lVar4 = *(longlong *)(param_1 + 0x110) + 8;
    do {
      FUN_140f937a0(&local_60,lVar4);
      lVar4 = lVar4 + 0x118;
      lVar6 = lVar6 + -0x118;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x108) * 0x110;
    lVar4 = *(longlong *)(param_1 + 0x100) + 8;
    do {
      FUN_147652216(&local_60,lVar4);
      lVar4 = lVar4 + 0x110;
      lVar6 = lVar6 + -0x110;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x128) * 0x228;
    lVar4 = *(longlong *)(param_1 + 0x120) + 0x118;
    do {
      FUN_140f937a0(&local_60,lVar4 + -0x110);
      FUN_140f937a0(&local_60,lVar4);
      lVar4 = lVar4 + 0x228;
      lVar6 = lVar6 + -0x228;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x148) * 0x448;
    lVar4 = *(longlong *)(param_1 + 0x140) + 0x338;
    do {
      FUN_140f937a0(&local_60,lVar4 + -0x330);
      FUN_140f937a0(&local_60,lVar4 + -0x220);
      FUN_140f937a0(&local_60,lVar4 + -0x110);
      FUN_140f937a0(&local_60,lVar4);
      lVar4 = lVar4 + 0x448;
      lVar6 = lVar6 + -0x448;
    } while (lVar6 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x158);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x150);
    lVar6 = 0;
    do {
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 8);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x118);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x228);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x338);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x448);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x558);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x668);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x778);
      FUN_140f937a0(&local_60,lVar4 + lVar6 + 0x888);
      lVar6 = lVar6 + 0x998;
    } while ((longlong)iVar3 * 0x998 - lVar6 != 0);
  }
  local_68 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_68[1] = (longlong)&DAT_100000001;
  *local_68 = (longlong)&PTR_FUN_14a492060;
  local_70 = local_68 + 2;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 2;
  if (local_48 == 0) {
    local_68[9] = local_50;
    *(undefined4 *)(local_68 + 7) = local_60;
    *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_5c;
    *(undefined4 *)(local_68 + 8) = uStack_58;
    *(undefined4 *)((longlong)local_68 + 0x44) = uStack_54;
  }
  local_68[10] = local_48;
  local_48 = 0;
  *(undefined4 *)(local_68 + 0xb) = (undefined4)local_40;
  *(undefined4 *)((longlong)local_68 + 0x5c) = local_40._4_4_;
  local_40 = 0x100000000;
  FUN_140aec6f8(&local_70);
  plVar1 = local_68;
  if (local_68 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0xe0) = local_70;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (plVar5 == (longlong *)0x0) goto LAB_146261bce;
    *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_146261df0:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146261bce;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe0) = local_70;
    plVar5 = *(longlong **)(param_1 + 0xe8);
    if (local_68 != plVar5) {
      *(longlong **)(param_1 + 0xe8) = local_68;
      if (plVar5 == (longlong *)0x0) goto LAB_146261bce;
      goto LAB_146261df0;
    }
    LOCK();
    plVar5 = local_68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146261bce;
    (**(code **)*local_68)(local_68);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146261bce:
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_60);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146261e5c FUN_146261e5c body=169 status=ok
// SIG undefined FUN_146261e5c(void)

bool FUN_146261e5c(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 146261f06 FUN_146261f06 body=41 status=ok
// SIG undefined FUN_146261f06(void)

void FUN_146261f06(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x498))();
  if (5 < bVar1) {
    FUN_1416b967c(param_1);
    return;
  }
  return;
}



// FUNCTION 146261f2f FUN_146261f2f body=764 status=ok
// SIG undefined FUN_146261f2f(void)

void FUN_146261f2f(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_348 [32];
  double local_328;
  double local_320;
  double local_318;
  undefined1 local_310 [24];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined1 local_2e0 [4];
  char local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  int local_2b0;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined1 local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_98;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (((param_1 != (longlong *)0x0) && ((char)param_1[0x2f] == '\x03')) &&
     (*(longlong *)(param_2 + 8) != 0)) {
    uVar4 = FUN_1447210f0(param_1);
    plVar5 = (longlong *)FUN_14007a5e6(uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x718))(param_1,&local_2f8,local_310);
      FUN_144a76660(local_310,&local_328);
      local_188 = DAT_14c8464f0;
      local_198 = DAT_14c8464e0;
      uStack_190 = DAT_14c8464e8;
      local_17c = DAT_14cb7bd68;
      local_174 = DAT_14cb7bd70;
      local_170 = DAT_14cb7bd80;
      local_168 = DAT_14cb7bd88;
      local_164 = 0;
      uStack_15c = 0;
      local_154 = 0;
      uStack_14c = 0;
      local_144 = 0;
      local_140 = 0xffffffff;
      local_98 = '\0';
      local_88 = 0;
      uStack_80 = 0;
      uStack_7f = 0;
      uStack_78 = 0;
      uStack_77 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      lStack_120 = 0;
      dVar2 = local_320 * 64.0 + local_2f0;
      local_138 = 0;
      uStack_130 = 0;
      FUN_144a7484c(local_310,&local_2d8);
      local_1f8 = local_2d8;
      uStack_1f0 = uStack_2d0;
      local_1e8 = local_2c8;
      uStack_1e4 = uStack_2c4;
      uStack_1e0 = uStack_2c0;
      uStack_1dc = uStack_2bc;
      local_1d8._8_4_ = SUB84(dVar2,0);
      local_1d8._0_8_ = local_328 * 64.0 + local_2f8;
      local_1d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uStack_1c0 = 0;
      local_1b8 = 0x3ff0000000000000;
      uStack_1b0 = 0x3ff0000000000000;
      local_1a8 = 0x3ff0000000000000;
      uStack_1a0 = 0;
      local_1c8 = local_318 * 64.0 + local_2e8;
      uVar3 = rand();
      local_180 = ((float)(uVar3 & 0x7fff) / 32767.0) * 250.0 + 750.0;
      FUN_1416b9e2e(&local_198);
      local_144 = 1;
      local_140 = *(undefined4 *)(param_2 + 0xf8);
      FUN_1406fd608(&local_2d8,param_2 + 8);
      if (0 < (longlong)local_2b0) {
        uVar6 = (longlong)local_2b0 + 1;
        do {
          lVar1 = *(longlong *)(local_2b8 + -0x10 + uVar6 * 8);
          if ((lVar1 != 0) && (*(char *)(lVar1 + 0x30) == '\x01')) {
            FUN_1488cba04(&local_2d8);
          }
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,local_2e0,&local_2d8,&local_1f8);
      if (local_2dc == '\x01') {
        local_2dc = '\0';
      }
      FUN_140368b56(&local_2d8);
      if (local_98 == '\x01') {
        local_98 = '\0';
      }
      if (lStack_120 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146262238 FUN_146262238 body=1207 status=ok
// SIG undefined FUN_146262238(void)

void FUN_146262238(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148 [2];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110 [2];
  longlong *local_100 [2];
  undefined1 local_f0 [36];
  int local_cc;
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar4 = FUN_1462626f0(DAT_14cb0d2b0,param_1);
  FUN_140245d8a(local_f0,uVar4,puVar7,((param_3 ^ 1) & 0xff) * 2);
  if (local_cc == 0) {
    FUN_140009b9a(local_110,param_2);
    local_58 = L"InvalidUrl";
    local_50 = 10;
    FUN_1446e940c(local_134,&local_58);
    local_58 = L"Engine";
    local_50 = 6;
    FUN_1446e940c(local_138,&local_58);
    FUN_140208bae(local_130,local_138,local_134,L"Invalid URL: {0}");
    FUN_14023409e(&local_120,local_130,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_110);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_120;
    local_80 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_100,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)local_118 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
  }
  else {
    lVar5 = FUN_14045d4ce(local_f0,L"Restart",0);
    if (lVar5 != 0) {
      uVar4 = FUN_1462626f0(DAT_14cb0d2b0,param_1);
      FUN_1405f35b2(local_f0,uVar4);
    }
    lVar5 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
    cVar3 = FUN_1416bb0a0(lVar5 + 8,param_1,local_f0);
    if ((cVar3 != '\0') || (*(char *)(lVar5 + 0x88) != '\0')) goto LAB_1462622fd;
    FUN_140009b9a(local_148,param_2);
    local_58 = L"InvalidUrl";
    local_50 = 10;
    FUN_1446e940c(local_134,&local_58);
    local_58 = L"Engine";
    local_50 = 6;
    FUN_1446e940c(local_138,&local_58);
    FUN_140208bae(local_130,local_138,local_134,L"Invalid URL: {0}");
    FUN_14023409e(&local_158,local_130,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_148);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_158;
    local_80 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_100,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    local_110[0] = local_148[0];
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        local_110[0] = local_148[0];
        if (*piVar2 == 0) {
          (**(code **)(*local_150 + 0x10))(local_150);
          local_110[0] = local_148[0];
        }
      }
    }
  }
  if (local_110[0] != (longlong *)0x0) {
    (**(code **)(*local_110[0] + 0x10))();
  }
  puVar6 = (undefined8 *)FUN_1447a1f4a(local_100);
  local_58 = (wchar_t *)0x0;
  local_50 = *(int *)(puVar6 + 1);
  lVar5 = (longlong)local_50;
  _Src = (void *)*puVar6;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar5 * 2);
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
  FUN_147d83bd2(DAT_14cb0d2b0 + 0xeb0,param_1,2,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1462622fd:
  FUN_141238aee(local_f0);
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462626f0 FUN_1462626f0 body=20 status=ok
// SIG undefined FUN_1462626f0(void)

longlong FUN_1462626f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a();
  return lVar1 + 0x160;
}



// FUNCTION 146262704 FUN_146262704 body=442 status=ok
// SIG undefined FUN_146262704(void)

void FUN_146262704(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong *local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = &PTR_FUN_14b4c3b18;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = &PTR_FUN_14b4c3b20;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = FUN_1414a827a();
  local_d0 = 0;
  local_c8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 9999;
  FUN_140dfab96(&local_160,param_1 + 0x30);
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar3 = FUN_1416bb482(*(undefined8 *)(param_1 + 0x28),local_160,&local_150,&local_150);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1a0))
            (*(longlong **)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x48));
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x50), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,0,*(undefined1 *)(param_1 + 0x48),&local_150);
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_158 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_158 + 0x10))(local_158);
      }
    }
  }
  FUN_14124efea(&local_150);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462628c0 FUN_1462628c0 body=407 status=ok
// SIG undefined FUN_1462628c0(void)

void FUN_1462628c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (((param_2 != 0) && (*(char *)((longlong)param_1 + 0x15) != '\0')) &&
     (lVar4 = *(longlong *)(param_2 + 0x30 + (ulonglong)*(uint *)(param_1 + 2) * 8), lVar4 != 0)) {
    uVar5 = *(undefined8 *)(lVar4 + 0x78);
    lVar8 = *param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x14) * 0x10;
    iVar1 = *(int *)(lVar8 + 0x3680);
    *(uint *)(lVar8 + 0x3680) = iVar1 + 1U;
    if (*(uint *)(lVar8 + 0x3684) < iVar1 + 1U) {
      FUN_14736f572((longlong *)(lVar8 + 0x3678),iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar8 + 0x3678) + (longlong)iVar1 * 8) = uVar5;
    uVar2 = *(uint *)(lVar4 + 0x90);
    if ((longlong)(int)uVar2 != 0) {
      _Src = *(void **)(lVar4 + 0x88);
      lVar8 = *param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x14) * 0x10;
      iVar1 = *(int *)(lVar8 + 0x3680);
      *(uint *)(lVar8 + 0x3680) = iVar1 + uVar2;
      if ((uint)(*(int *)(lVar8 + 0x3684) - iVar1) < uVar2) {
        FUN_14736f572((longlong *)(lVar8 + 0x3678),iVar1);
      }
      memcpy((void *)((longlong)iVar1 * 8 + *(longlong *)(lVar8 + 0x3678)),_Src,
             (longlong)(int)uVar2 << 3);
    }
    iVar1 = *(int *)(lVar4 + 0xa0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x98);
      lVar8 = 0;
      do {
        plVar7 = *(longlong **)(lVar4 + lVar8);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
          if ((*(byte *)(lVar6 + 2) & 4) != 0) {
            plVar7 = (longlong *)**(longlong **)(plVar7[0x48] + 0xa0);
          }
          lVar6 = (**(code **)(*plVar7 + 0x30))(plVar7);
          if (lVar6 != 0) {
            uVar5 = *(undefined8 *)(lVar6 + 0x168);
            lVar6 = *param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x14) * 0x10;
            iVar3 = *(int *)(lVar6 + 0x3680);
            *(uint *)(lVar6 + 0x3680) = iVar3 + 1U;
            if (*(uint *)(lVar6 + 0x3684) < iVar3 + 1U) {
              FUN_14736f572((longlong *)(lVar6 + 0x3678),iVar3);
            }
            *(undefined8 *)(*(longlong *)(lVar6 + 0x3678) + (longlong)iVar3 * 8) = uVar5;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
  }
  return;
}



// FUNCTION 146262a58 FUN_146262a58 body=147 status=ok
// SIG undefined FUN_146262a58(void)

undefined8 FUN_146262a58(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((*(char *)(param_2 + 0x3db8) != '\0') || (*(char *)(param_1 + 0x30) == '\x01')) {
    plVar2 = (longlong *)(param_2 + 0x3db0);
    FUN_14315b54c(param_1);
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      *plVar2 = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *(undefined1 *)(param_2 + 0x3db8) = 0;
    FUN_14736b6ae(param_1,plVar2);
    if ((*(int *)(param_1 + 0x18) == 1) && (*(longlong *)(param_2 + 0x198) != 0)) {
      uVar4 = FUN_14737065a(param_2 + 0x3740,*(undefined8 *)(param_2 + 0x3db0));
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 146262aec FUN_146262aec body=989 status=ok
// SIG undefined FUN_146262aec(void)

undefined8 * FUN_146262aec(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  plVar4 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b426ce0;
  local_48 = plVar4 + 2;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x44) = 0xffffffff;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined4 *)(plVar4 + 0xb) = 2;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  *(undefined1 *)(plVar4 + 0xf) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b2426c0;
  plVar4[0xc] = (longlong)&PTR_FUN_14b242710;
  plVar4[0x1a] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x12] = 0;
  plVar4[0x13] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  local_40 = plVar4;
  FUN_14485c47a(plVar4 + 0x13,*(undefined8 *)(param_3[1] + 0x40));
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_14485c47a(plVar4 + 0x18,*(undefined8 *)(param_3[1] + 0x40));
  }
  lVar7 = *(longlong *)(param_1 + 0x2b8);
  if (lVar7 == 0) {
    uVar5 = FUN_145cd97be();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x2b8) = lVar7;
  }
  lVar6 = *(longlong *)(param_1 + 0x2c0);
  if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*(longlong *)(param_1 + 0x2b0) != 0)) {
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x2b0));
    }
    *(longlong *)(param_1 + 0x2c0) = lVar6;
  }
  plVar4[0x12] = lVar6;
  lVar7 = param_3[3];
  plVar2 = (longlong *)param_3[4];
  if (plVar2 == (longlong *)0x0) {
    plVar4[0x14] = lVar7;
    plVar8 = (longlong *)plVar4[0x15];
    if (plVar8 == (longlong *)0x0) goto LAB_146262cd5;
    plVar4 = plVar4 + 0x15;
LAB_146262e16:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *plVar4 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_146262cd5;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    local_48[0x12] = lVar7;
    if ((longlong *)local_48[0x13] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = local_48 + 0x13;
      plVar8 = (longlong *)*plVar4;
      if (plVar8 != (longlong *)0x0) goto LAB_146262e16;
      *plVar4 = (longlong)plVar2;
    }
  }
  LOCK();
  plVar4 = plVar2 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_146262cd5:
  FUN_141260192(param_3[2],&local_68,&DAT_14cb8c380);
  plVar4 = plStack_60;
  if (local_48 + 0xe != &local_68) {
    local_48[0xe] = local_68;
    local_68 = 0;
    plVar2 = (longlong *)local_48[0xf];
    if (plStack_60 != plVar2) {
      plStack_60 = (longlong *)0x0;
      local_48[0xf] = (longlong)plVar4;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar2 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar4 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_146262ecc(*param_3,&local_48,param_1 + 0x2c8);
  plVar4 = local_40;
  *param_2 = local_48;
  param_2[1] = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146262ecc FUN_146262ecc body=162 status=ok
// SIG undefined FUN_146262ecc(void)

void FUN_146262ecc(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_4 = (longlong *)*param_4;
  if ((param_4 != (longlong *)0x0) || (param_4 = (longlong *)*param_3, param_4 != (longlong *)0x0))
  {
    local_20 = *param_2 + 0x50;
    if (*param_2 == 0) {
      local_20 = 0;
    }
    local_18 = (longlong *)param_2[1];
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_4 + 0x18))(param_4,param_1,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146262f70 FUN_146262f70 body=197 status=ok
// SIG undefined FUN_146262f70(void)

void FUN_146262f70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  FUN_1416bccd6();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_144a75eb4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
      if (cVar3 != '\0') {
        cVar3 = FUN_141107632(param_2);
        if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x3f0) != 0)) {
          lVar4 = FUN_14041aabe();
          plVar1 = *(longlong **)(param_1 + 0x3f0);
          if (((plVar1 != (longlong *)0x0) &&
              (((lVar4 != 0 && (lVar2 = plVar1[2], lVar2 != 0)) &&
               (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
             ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
               lVar4 + 0x30 && (param_2[0x73] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014626302a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar1 + 0x770))();
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146263036 FUN_146263036 body=861 status=ok
// SIG undefined FUN_146263036(void)

void FUN_146263036(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [9];
  undefined1 local_99;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_88._0_4_ = 0;
  local_88._4_1_ = 0;
  local_80 = 0xbf80000000000000;
  local_78 = 0xc4750000;
  local_74 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  iVar2 = local_8c;
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar1 = local_90;
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_120 = local_98;
  local_118 = local_99;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar4 = &local_88;
  puVar5 = local_e8;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_30;
  local_108 = local_40;
  uStack_104 = uStack_3c;
  uStack_100 = uStack_38;
  uStack_fc = uStack_34;
  local_128 = iVar1 != 0;
  FUN_1416bd0ac(local_28,&local_108,local_e8,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146263394 FUN_146263394 body=58 status=ok
// SIG undefined FUN_146263394(void)

undefined8 * FUN_146263394(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    FUN_14689af94(uVar1,param_2,0);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1401031ac(uVar1 & 0xfffffffffffffffe,0,param_2);
  }
  return param_2;
}



// FUNCTION 1462633ce FUN_1462633ce body=641 status=ok
// SIG undefined FUN_1462633ce(void)

void FUN_1462633ce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = param_1 + 0x10;
  cVar5 = FUN_144729dda(lVar10);
  if (cVar5 != '\0') {
    plVar8 = (longlong *)FUN_14479d2ce(lVar10);
    bVar6 = (**(code **)(*plVar8 + 0x498))(plVar8);
    if (bVar6 < 6) {
      lVar9 = FUN_14479d2ce(lVar10);
      if ((*(longlong *)(lVar9 + 0x30) != 0) &&
         (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x360), lVar9 != 0)) {
        FUN_1410d53f0(&local_60,lVar9);
        plVar8 = (longlong *)CONCAT44(uStack_54,local_58);
        if (plVar8 != (longlong *)0x0) {
          iVar7 = (int)plVar8[1];
          do {
            if (iVar7 == 0) {
              plVar8 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar4 = (int)plVar8[1];
            bVar15 = iVar7 == iVar4;
            if (bVar15) {
              *(int *)(plVar8 + 1) = iVar7 + 1;
              iVar4 = iVar7;
            }
            iVar7 = iVar4;
            UNLOCK();
          } while (!bVar15);
          LOCK();
          piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
          }
          lVar3 = local_60;
          if (plVar8 != (longlong *)0x0) {
            if (local_60 != 0) {
              FUN_14145079c(local_60,&local_60,*(undefined8 *)(param_1 + 0x108));
              plVar2 = *(longlong **)(lVar9 + 0x170);
              if (plVar2 != (longlong *)0x0) {
                lVar10 = FUN_14479d2ce(lVar10);
                if ((longlong)*(int *)(lVar10 + 0x40) != 0) {
                  puVar14 = *(undefined8 **)(lVar10 + 0x38);
                  puVar13 = puVar14 + *(int *)(lVar10 + 0x40);
                  do {
                    lVar10 = FUN_140334a94(*puVar14,lVar9);
                    if (lVar10 != 0) {
                      lVar11 = FUN_144a5dd5e();
                      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
                        if ((longlong)*(int *)(lVar3 + 0x238) != 0) {
                          local_68 = *(longlong *)(lVar3 + 0x230) + 0x10;
                          lVar11 = (longlong)*(int *)(lVar3 + 0x238) * 0x98;
                          do {
                            lVar12 = FUN_14479d2ce(local_68);
                            if (lVar12 == lVar10) {
                              if (local_68 != 0x10) {
                                if ((local_58 - 1U < 0xfffffffe && local_60 != 0) &&
                                   ((local_60 != *(longlong *)(local_68 + 8) ||
                                    (local_58 != *(int *)(local_68 + 0x10))))) {
                                  local_78 = 0;
                                  local_80 = 1;
                                  local_88 = 1;
                                  local_90 = 0;
                                  local_98 = 1;
                                  FUN_1416a3978(lVar3,lVar10,&local_60,0);
                                }
                                goto LAB_14626352c;
                              }
                              break;
                            }
                            local_68 = local_68 + 0x98;
                            lVar11 = lVar11 + -0x98;
                          } while (lVar11 != 0);
                        }
                        (**(code **)(*plVar2 + 0x7a0))(plVar2,lVar10);
                      }
                    }
LAB_14626352c:
                    puVar14 = puVar14 + 1;
                  } while (puVar14 != puVar13);
                }
              }
            }
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14626365c FUN_14626365c body=2034 status=ok
// SIG undefined FUN_14626365c(void)

void FUN_14626365c(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined7 uVar4;
  undefined8 *puVar3;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_310;
  undefined4 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined1 local_2e1;
  void *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220 [256];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_4c = 0;
  local_2e0 = param_3;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar1 = local_50;
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_d8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  local_e8 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_ec = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    puVar3 = *(undefined8 **)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = puVar3[3];
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    puVar3 = &local_120;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),puVar3);
  }
  local_2e1 = iVar1 != 0;
  uVar4 = (undefined7)((ulonglong)puVar3 >> 8);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2f8 = &local_238;
  local_238 = local_120;
  uStack_230 = uStack_118;
  local_228 = local_110;
  local_300 = &local_258;
  local_258 = local_108;
  uStack_250 = uStack_100;
  local_248 = local_f8;
  local_348 = &local_278;
  local_268 = local_a8;
  local_350 = &local_298;
  local_288 = local_90;
  local_358 = &local_2b8;
  local_2a8 = local_78;
  local_360 = &local_2d8;
  local_2c8 = local_60;
  local_278 = local_b8;
  uStack_270 = uStack_b0;
  local_298 = local_a0;
  uStack_290 = uStack_98;
  local_2b8 = local_88;
  uStack_2b0 = uStack_80;
  local_2d8 = local_70;
  uStack_2d0 = uStack_68;
  local_308 = local_ec;
  local_310 = local_e8;
  local_318 = local_e4;
  local_320 = local_e0;
  local_328 = local_d8;
  local_330 = local_d0;
  local_338 = local_c8;
  local_340 = local_c0;
  local_368 = local_58;
  FUN_1416c4e04(local_220,CONCAT71(uVar4,iVar2 != 0) & 0xffffffff,CONCAT71(uVar4,local_2e1),local_54
               );
  memcpy(local_2e0,local_220,0x100);
  if ((local_48 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146263e50 FUN_146263e50 body=82 status=ok
// SIG undefined FUN_146263e50(void)

void FUN_146263e50(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  FUN_1416c50cc();
  if (param_3 != 0) {
    lVar1 = FUN_1406f6176();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_146263e86;
  }
  param_3 = 0;
LAB_146263e86:
  FUN_14485c47a(param_1 + 0x210,param_3);
  return;
}



// FUNCTION 146263ea2 FUN_146263ea2 body=95 status=ok
// SIG undefined FUN_146263ea2(void)

ulonglong FUN_146263ea2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146263ee4:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146263ee4;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 146263f02 FUN_146263f02 body=202 status=ok
// SIG undefined FUN_146263f02(void)

void FUN_146263f02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 == (longlong *)0x0) {
    FUN_1416c6b90(local_38,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
    FUN_1416c6b90(local_38,*(undefined8 *)(param_1 + 0x30));
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146263fce FUN_146263fce body=216 status=ok
// SIG undefined FUN_146263fce(void)

void FUN_146263fce(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
    FUN_1446ddc76(&local_38,"DisplayPlayerStandin",1);
    if (*param_2 == local_38) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar1 = &PTR_FUN_14b9c6e00;
      FUN_1446ddc76(&local_30,"MenuOpened",1);
      FUN_14039176c(puVar1,param_1[6],local_30,1);
      *puVar1 = &PTR_FUN_14b9c6e00;
      puVar1[7] = param_1[3];
      FUN_140391314(param_1,puVar1);
      (**(code **)(*param_1 + 400))(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462640a8 FUN_1462640a8 body=1284 status=ok
// SIG undefined FUN_1462640a8(void)

void FUN_1462640a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    lVar13 = param_1 + 0x378;
    FUN_14025a15c(lVar13,0);
    lVar10 = *(longlong *)(param_1 + 0x288);
    if (lVar10 != 0) {
      *(int *)(lVar10 + 0x1c8) = *(int *)(lVar10 + 0x1c8) + 2;
      if ((longlong)*(int *)(lVar10 + 0x1c0) != 0) {
        pcVar14 = (char *)(*(longlong *)(lVar10 + 0x1b8) + 0xb8);
        lVar5 = 0;
LAB_146264119:
        if (*pcVar14 != '\x01') goto code_r0x000146264123;
        lVar5 = *(longlong *)(lVar10 + 0x1b8) - lVar5;
        FUN_140608954(lVar13,lVar5 + 0xd4);
        if ((longlong)*(int *)(pcVar14 + 0x58) != 0) {
          lVar15 = (longlong)*(int *)(pcVar14 + 0x58) * 200;
          lVar10 = *(longlong *)(pcVar14 + 0x50) + 0xac;
          do {
            FUN_140608954(lVar13,lVar10);
            lVar10 = lVar10 + 200;
            lVar15 = lVar15 + -200;
          } while (lVar15 != 0);
        }
        FUN_140608954(lVar13,lVar5 + 0x1c4);
      }
    }
LAB_146264135:
    if (*(int *)(param_1 + 0x380) == 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x68,0x10);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        puVar7 = &DAT_14c9a1308;
      }
      else {
        puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2618);
      }
      uVar8 = FUN_144a7cdd6(puVar7,0);
      FUN_1446ddc76(&local_50,uVar8,1);
      *puVar6 = &PTR_FUN_14b9cd3a0;
      FUN_1446ddc76(&local_40,"UpdateStandIn",1);
      FUN_14039176c(puVar6,*(undefined8 *)(param_1 + 0x30),local_40,1);
      *puVar6 = &PTR_FUN_14b9cd3a0;
      puVar6[7] = DAT_14cbe0120;
      puVar6[8] = *(undefined8 *)(param_1 + 0x18);
      puVar6[9] = local_50;
      *(undefined1 *)(puVar6 + 0xc) = 0;
      FUN_140391314(param_1,puVar6);
    }
    else {
      puVar6 = (undefined8 *)FUN_1457d768a(lVar13);
      local_40 = (undefined8 *)0x0;
      local_38 = *(uint *)(puVar6 + 1);
      lVar13 = (longlong)(int)local_38;
      _Src = (void *)*puVar6;
      if (lVar13 == 0) {
        local_34 = 0;
        uVar12 = 0;
      }
      else {
        FUN_140c19d4e(&local_40,local_38,0);
        memcpy(local_40,_Src,lVar13 << 3);
        uVar12 = local_38;
      }
      local_38 = uVar12 + 1;
      if (local_34 < local_38) {
        FUN_1403de658(&local_40,uVar12);
      }
      puVar6 = local_40;
      memmove(local_40 + 1,local_40,(ulonglong)uVar12 << 3);
      puVar7 = local_40;
      *puVar6 = DAT_14cbcaf98;
      local_60 = (void *)0x0;
      lVar13 = (longlong)(int)local_38;
      local_58 = CONCAT44(local_58._4_4_,local_38);
      if (lVar13 == 0) {
        local_58 = (ulonglong)local_38;
      }
      else {
        FUN_140c19d4e(&local_60,local_38,0);
        memcpy(local_60,puVar7,lVar13 << 3);
      }
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,4,0x10);
      local_48 = 4;
      plVar11 = *(longlong **)(param_1 + 0x10);
      if (plVar11 == (longlong *)0x0) {
LAB_14626439e:
        *local_50 = &PTR_LAB_14b40e8d0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_50[2] = lVar10;
        *local_50 = &PTR_FUN_14b9d33b0;
        local_50[3] = 0;
        local_50[4] = 0;
        bVar16 = true;
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar4 = (int)plVar11[1];
        do {
          if (iVar4 == 0) goto LAB_14626439e;
          LOCK();
          iVar3 = (int)plVar11[1];
          bVar16 = iVar4 == iVar3;
          if (bVar16) {
            *(int *)(plVar11 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
        } while (!bVar16);
        uVar8 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        *local_50 = &PTR_LAB_14b40e8d0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_50[2] = lVar10;
        *local_50 = &PTR_FUN_14b9d33b0;
        local_50[3] = uVar8;
        local_50[4] = plVar11;
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        bVar16 = false;
      }
      local_50[5] = local_60;
      local_60 = (void *)0x0;
      *(undefined4 *)(local_50 + 6) = (undefined4)local_58;
      *(undefined4 *)((longlong)local_50 + 0x34) = local_58._4_4_;
      local_58 = 0;
      if (!bVar16) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = FUN_14001cc68(0x68,0x10);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        puVar6 = &DAT_14c9a1308;
      }
      else {
        puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe2618);
      }
      uVar9 = FUN_144a7cdd6(puVar6,0);
      FUN_1446ddc76(&local_60,uVar9,1);
      local_68 = &local_50;
      FUN_1457d882c(uVar8,param_1 + 0x30,param_1 + 0x18,&local_60);
      FUN_140391314(param_1,uVar8);
      FUN_1449db362(&local_50);
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146264123:
  lVar5 = lVar5 + -0x1e8;
  pcVar14 = pcVar14 + 0x1e8;
  if ((longlong)*(int *)(lVar10 + 0x1c0) * -0x1e8 - lVar5 == 0) goto LAB_146264135;
  goto LAB_146264119;
}



// FUNCTION 1462645ae FUN_1462645ae body=64 status=ok
// SIG undefined FUN_1462645ae(void)

void FUN_1462645ae(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_1416cc158();
      return;
    }
  }
  return;
}



// FUNCTION 1462645ee FUN_1462645ee body=28 status=ok
// SIG undefined FUN_1462645ee(void)

void FUN_1462645ee(undefined8 param_1)

{
  FUN_1416cf400(param_1,0);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14626460a FUN_14626460a body=163 status=ok
// SIG undefined FUN_14626460a(void)

longlong * FUN_14626460a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ad81180;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ad89ea0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 1462646ae FUN_1462646ae body=55 status=ok
// SIG undefined FUN_1462646ae(void)

undefined8 FUN_1462646ae(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x60) = param_3;
    FUN_140bee9ec(param_1 + 0x20);
    uVar1 = FUN_1416d349e(param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1462646e6 FUN_1462646e6 body=338 status=ok
// SIG undefined FUN_1462646e6(void)

void FUN_1462646e6(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1447210f0();
  FUN_1410d53f0(&local_48,lVar5);
  if (local_40 != (longlong *)0x0) {
    iVar4 = (int)local_40[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_40[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_40;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if ((((lVar5 != 0) && (local_48 != 0)) && (lVar5 = FUN_1400f6f32(lVar5), lVar5 != 0)) &&
         (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) {
        FUN_140d173bc(lVar5,&local_48,param_2);
        lVar5 = FUN_140d1732e(lVar5,&local_48);
        if (lVar5 != 0) {
          lVar6 = FUN_144a5dd5e();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            local_50 = 0;
            local_58 = 0;
            FUN_1416d511e(local_48,param_1,lVar5,0);
          }
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146264839 FUN_146264839 body=826 status=ok
// SIG undefined FUN_146264839(void)

void FUN_146264839(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [190];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar18 + fVar18);
    plVar12 = &local_358;
    do {
      piVar4 = (int *)*plVar12;
      piVar13 = (int *)plVar12[1];
      iVar15 = (int)plVar12[2];
      iVar11 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar4) >> 2);
      piVar16 = piVar13;
      piVar9 = piVar4;
      if (iVar15 != 0) {
LAB_146264904:
        uVar6 = iVar11 * -0x55555555 + 1;
        if (8 < (int)uVar6) {
          uVar7 = (ulonglong)(uVar6 >> 1);
          iVar11 = piVar4[uVar7 * 3 + 2];
          uVar1 = *(undefined8 *)(piVar4 + uVar7 * 3);
          piVar4[uVar7 * 3 + 2] = piVar4[2];
          *(undefined8 *)(piVar4 + uVar7 * 3) = *(undefined8 *)piVar4;
          piVar4[2] = iVar11;
          *(undefined8 *)piVar4 = uVar1;
          piVar8 = piVar13 + 3;
          piVar5 = piVar4;
          do {
            piVar2 = piVar5 + 3;
            piVar14 = piVar5 + 3;
            do {
              piVar5 = piVar14;
              piVar10 = piVar2;
              if (piVar13 < piVar5) break;
              iVar11 = *piVar4 - *piVar5;
              if (*piVar4 - *piVar5 == 0) {
                iVar11 = piVar4[1] - piVar5[1];
              }
              piVar2 = piVar10 + 3;
              piVar14 = piVar5 + 3;
            } while (-1 < iVar11);
            piVar2 = piVar8 + -6;
            do {
              piVar14 = piVar8;
              piVar17 = piVar2;
              piVar8 = piVar14 + -3;
              if (piVar8 <= piVar4) break;
              iVar11 = *piVar8 - *piVar4;
              if (*piVar8 - *piVar4 == 0) {
                iVar11 = piVar14[-2] - piVar4[1];
              }
              piVar2 = piVar17 + -3;
            } while (-1 < iVar11);
            if (piVar8 < piVar5) goto LAB_1462649f7;
            iVar11 = piVar5[2];
            uVar1 = *(undefined8 *)piVar5;
            piVar5[2] = piVar14[-1];
            *(undefined8 *)piVar5 = *(undefined8 *)piVar8;
            piVar14[-1] = iVar11;
            *(undefined8 *)piVar8 = uVar1;
          } while( true );
        }
        if (piVar4 < piVar13) {
          do {
            piVar16 = piVar4;
            if (piVar4 + 3 <= piVar13) {
              iVar15 = *piVar4;
              piVar9 = piVar4 + 3;
              piVar8 = piVar4;
              do {
                iVar11 = iVar15 - *piVar9;
                if (iVar11 == 0) {
                  iVar11 = piVar8[1] - piVar9[1];
                }
                piVar16 = piVar9;
                iVar3 = *piVar9;
                if (-1 < iVar11) {
                  piVar16 = piVar8;
                  iVar3 = iVar15;
                }
                iVar15 = iVar3;
                piVar9 = piVar9 + 3;
                piVar8 = piVar16;
              } while (piVar9 <= piVar13);
            }
            local_48 = piVar16[2];
            local_50 = *(undefined8 *)piVar16;
            piVar16[2] = piVar13[2];
            *(undefined8 *)piVar16 = *(undefined8 *)piVar13;
            piVar13[2] = local_48;
            *(undefined8 *)piVar13 = local_50;
            piVar13 = piVar13 + -3;
          } while (piVar4 < piVar13);
        }
        goto LAB_146264b52;
      }
LAB_146264b67:
      FUN_1474d99fa(piVar4);
LAB_146264b52:
      plVar12 = plVar12 + -3;
    } while (&local_358 <= plVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1462649f7:
  local_48 = piVar4[2];
  local_50 = *(undefined8 *)piVar4;
  piVar4[2] = piVar14[-1];
  *(undefined8 *)piVar4 = *(undefined8 *)piVar8;
  piVar14[-1] = local_48;
  *(undefined8 *)piVar8 = local_50;
  iVar15 = iVar15 + -1;
  piVar14 = piVar14 + -6;
  if ((longlong)piVar17 - (longlong)piVar9 < (longlong)piVar16 - (longlong)piVar10) {
    if (piVar5 < piVar13) {
      *plVar12 = (longlong)piVar5;
      plVar12[1] = (longlong)piVar13;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    piVar10 = piVar4;
    if (piVar8 <= piVar4 + 3) goto LAB_146264b52;
  }
  else {
    if (piVar4 + 3 < piVar8) {
      *plVar12 = (longlong)piVar4;
      plVar12[1] = (longlong)piVar14;
      *(int *)(plVar12 + 2) = iVar15;
      plVar12 = plVar12 + 3;
    }
    piVar4 = piVar5;
    piVar14 = piVar13;
    piVar17 = piVar13;
    if (piVar13 <= piVar5) goto LAB_146264b52;
  }
  iVar11 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar10) >> 2);
  piVar13 = piVar14;
  piVar16 = piVar17;
  piVar9 = piVar10;
  if (iVar15 == 0) goto LAB_146264b67;
  goto LAB_146264904;
}


