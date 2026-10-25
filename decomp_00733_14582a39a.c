// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14582a39a FUN_14582a39a body=80 status=ok
// SIG undefined FUN_14582a39a(void)

undefined8 * FUN_14582a39a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b748bb0;
  param_1[5] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 8)])(param_1 + 6);
  FUN_14582a3ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582a3ea FUN_14582a3ea body=60 status=ok
// SIG undefined FUN_14582a3ea(void)

void FUN_14582a3ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1382c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014582a41b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14582a426 FUN_14582a426 body=74 status=ok
// SIG undefined FUN_14582a426(void)

void FUN_14582a426(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_2 + 8) != 0) &&
     (lVar1 = (longlong)*(int *)(param_1 + 0x14),
     *(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10))) {
    do {
      FUN_14582a470(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar1 * 8),1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x10));
  }
  FUN_1411a2e7a(param_1,param_2);
  return;
}



// FUNCTION 14582a470 FUN_14582a470 body=164 status=ok
// SIG undefined FUN_14582a470(void)

void FUN_14582a470(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (DAT_14c872bf0 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x80))(plVar1,0);
    }
    FUN_14582a540(param_1 + 0x138);
    FUN_1411a2e22(param_1 + 0xb8);
    FUN_14067ffd0(param_1 + 0x30);
    if (param_2 != '\0') {
      FUN_14582a514(param_1 + 0x1c0);
      FUN_1411a2e4e(param_1 + 0xf8);
      FUN_14582a6e6(param_1 + 0x298);
      FUN_14582a5de(param_1 + 0x380);
      FUN_14582a588(param_1 + 0x3d0);
      return;
    }
  }
  return;
}



// FUNCTION 14582a514 FUN_14582a514 body=43 status=ok
// SIG undefined FUN_14582a514(void)

void FUN_14582a514(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14582a540 FUN_14582a540 body=72 status=ok
// SIG undefined FUN_14582a540(void)

void FUN_14582a540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14582a588 FUN_14582a588 body=86 status=ok
// SIG undefined FUN_14582a588(void)

void FUN_14582a588(longlong param_1)

{
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_141067c74(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_141067c74(param_1 + 0x38,0);
  return;
}



// FUNCTION 14582a5de FUN_14582a5de body=262 status=ok
// SIG undefined FUN_14582a5de(void)

void FUN_14582a5de(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
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
  iVar2 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
    iVar2 = (int)param_1[5];
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (local_40 != plVar1)) {
    do {
      do {
        FUN_147ccd9aa(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18));
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar2);
    } while ((local_60 != plVar1) || (local_70 != param_1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582a6e6 FUN_14582a6e6 body=392 status=ok
// SIG undefined FUN_14582a6e6(void)

void FUN_14582a6e6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong lStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar2 = param_1 + 0x70;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  iVar3 = 0;
  lStack_b0 = lVar2;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_b8);
    iVar3 = *(int *)(param_1 + 0x88);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = (undefined4)uStack_a0;
  local_bc = uStack_a0._4_4_;
  local_d8 = local_b8;
  local_d0 = lStack_b0;
  local_e0 = plVar1;
  if ((iStack_a4 != iVar3) || (lStack_b0 != lVar2)) {
    do {
      do {
        local_78 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        iStack_a4 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        lStack_b0 = 0;
        local_48 = 0;
        uStack_70 = 0x8000000000;
        local_68 = 0xffffffff;
        FUN_14793ddba(*local_e0 + (longlong)iStack_c4 * 0x88 + 8,&local_b8);
        FUN_14793de3e(&local_b8);
        local_c8 = local_c8 & ~local_d8._4_4_;
        FUN_1449c0562(&local_d8);
      } while (iStack_c4 != iVar3);
    } while ((local_d0 != lVar2) || (local_e0 != plVar1));
  }
  FUN_1411a2ed6(param_1);
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582a8a4 FUN_14582a8a4 body=45 status=ok
// SIG undefined FUN_14582a8a4(void)

undefined8 FUN_14582a8a4(undefined8 param_1,int param_2)

{
  FUN_14582a8d2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14582a8d2 FUN_14582a8d2 body=55 status=ok
// SIG undefined FUN_14582a8d2(void)

void FUN_14582a8d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2d3fc0;
  FUN_1447cd778(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14582a91a FUN_14582a91a body=41 status=ok
// SIG undefined FUN_14582a91a(void)

void FUN_14582a91a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 14582a954 FUN_14582a954 body=44 status=ok
// SIG undefined FUN_14582a954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14582a954(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7d554 = _DAT_14cb7d554 + -1;
  *param_1 = DAT_14cb7d548;
  DAT_14cb7d548 = param_1;
  return;
}



// FUNCTION 14582a980 FUN_14582a980 body=54 status=ok
// SIG undefined FUN_14582a980(void)

undefined8 * FUN_14582a980(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582a9c4 FUN_14582a9c4 body=40 status=ok
// SIG undefined FUN_14582a9c4(void)

undefined8 FUN_14582a9c4(undefined8 param_1,int param_2)

{
  FUN_14582a9ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582a9ec FUN_14582a9ec body=212 status=ok
// SIG undefined FUN_14582a9ec(void)

void FUN_14582a9ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5eb5b0;
  FUN_140753a84(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x46];
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
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x38);
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 14582aac0 FUN_14582aac0 body=352 status=ok
// SIG undefined FUN_14582aac0(void)

undefined8 FUN_14582aac0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar2 = FUN_14073f72a();
    lVar4 = FUN_14477b664(uVar2);
    param_1[1] = lVar4;
  }
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    if ((lVar4 == 0) || (*param_1 == 0)) goto LAB_14582abe3;
    plVar5 = *(longlong **)(lVar4 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar3 = FUN_144aff482(uVar2,param_1);
        param_1[2] = lVar3;
        if (lVar3 == 0) goto LAB_14582abe3;
        lVar4 = param_1[1];
        goto LAB_14582aadb;
      }
    }
    param_1[2] = 0;
LAB_14582abe3:
    uVar2 = FUN_14479d2ce(param_1 + 5);
    plVar5 = (longlong *)FUN_14054e771(uVar2);
    if (plVar5 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar2 = FUN_145838c02(uVar2);
      return uVar2;
    }
    return 0;
  }
LAB_14582aadb:
  if (lVar4 != 0) goto LAB_14582aae4;
  uVar2 = FUN_14073f72a(lVar3);
  lVar4 = FUN_14477b664(uVar2);
  param_1[1] = lVar4;
  if (((param_1[2] != 0) || (lVar4 == 0)) || (*param_1 == 0)) goto LAB_14582aae4;
  plVar5 = *(longlong **)(lVar4 + 0xb8);
  if (plVar5 == (longlong *)0x0) {
LAB_14582ac1c:
    lVar4 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar5 + 0x108))();
    if (cVar1 == '\0') goto LAB_14582ac1c;
    uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar4 = FUN_144aff482(uVar2,param_1);
  }
  param_1[2] = lVar4;
LAB_14582aae4:
  uVar2 = FUN_140f5ab1e();
  return uVar2;
}



// FUNCTION 14582ac20 FUN_14582ac20 body=185 status=ok
// SIG undefined FUN_14582ac20(void)

undefined8 FUN_14582ac20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14598e1ac(&local_38,1);
  FUN_14582acf8(&local_38,param_3);
  FUN_14582acda(param_1,param_2,&local_38);
  FUN_14010f8af(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582acda FUN_14582acda body=30 status=ok
// SIG undefined FUN_14582acda(void)

undefined8 FUN_14582acda(undefined8 param_1)

{
  FUN_140233db2();
  return param_1;
}



// FUNCTION 14582acf8 FUN_14582acf8 body=468 status=ok
// SIG undefined FUN_14582acf8(void)

void FUN_14582acf8(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *_Str2;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  if (0 < (int)uVar5) {
    local_60 = *param_1;
    uVar7 = 0;
    uVar10 = (ulonglong)uVar5;
    do {
      uVar10 = uVar10 >> 1;
      uVar8 = (uint)uVar10 + (int)uVar7;
      lVar6 = (ulonglong)uVar8 * 0x30;
      FUN_140056680(&local_58,L"PlayerName");
      pwVar4 = local_58;
      pwVar3 = L"";
      _Str2 = local_58;
      if (local_50 == 0) {
        _Str2 = L"";
      }
      if (*(int *)(local_60 + 8 + lVar6) != 0) {
        pwVar3 = *(wchar_t **)(local_60 + lVar6);
      }
      iVar2 = wcscmp(pwVar3,_Str2);
      if (iVar2 < 0) {
        uVar7 = (ulonglong)(uVar8 + (uVar5 & 1));
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar4);
      }
      bVar1 = 1 < uVar5;
      uVar5 = (uint)uVar10;
    } while (bVar1);
    uVar5 = *(uint *)(param_1 + 1);
    if ((int)uVar7 < (int)uVar5) {
      lVar6 = *param_1;
      lVar9 = uVar7 * 0x30;
      FUN_140056680(&local_58,L"PlayerName");
      pwVar3 = L"";
      if (*(int *)(lVar6 + 8 + lVar9) != 0) {
        pwVar3 = *(wchar_t **)(lVar6 + lVar9);
      }
      pwVar4 = L"";
      if (local_50 != 0) {
        pwVar4 = local_58;
      }
      iVar2 = wcscmp(pwVar4,pwVar3);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8(local_58);
      }
      if (-1 < iVar2) {
        lVar9 = lVar9 + *param_1;
        FUN_14010f8af(lVar9,1);
        goto LAB_14582ad66;
      }
      uVar5 = *(uint *)(param_1 + 1);
    }
  }
  *(uint *)(param_1 + 1) = uVar5 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar5) {
    FUN_140234572(param_1,uVar5);
  }
  lVar9 = uVar7 * 0x30;
  memmove((void *)(*param_1 + lVar9 + 0x30),(void *)(*param_1 + lVar9),
          (ulonglong)(uVar5 - (int)uVar7) * 0x30);
  lVar9 = lVar9 + *param_1;
LAB_14582ad66:
  FUN_140056680(lVar9,L"PlayerName");
  *(undefined4 *)(lVar9 + 0x10) = 4;
  FUN_14023423e(lVar9 + 0x20,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582aed4 FUN_14582aed4 body=57 status=ok
// SIG undefined FUN_14582aed4(void)

void FUN_14582aed4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0f10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0f10 = FUN_140002ddd(FUN_1465ad7c5,uVar1,L"GbxBrainTask_Land");
  }
  return;
}



// FUNCTION 14582af0e FUN_14582af0e body=241 status=ok
// SIG undefined FUN_14582af0e(void)

void FUN_14582af0e(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x5d8))();
  if (cVar2 != '\0') {
    FUN_14582b000(param_1);
    (**(code **)(*param_1 + 0x478))(param_1);
    plVar1 = (longlong *)param_1[0x23];
    if (plVar1 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
      if (lVar3 != 0) {
        uVar4 = FUN_1401edbbc(lVar3);
        *(undefined4 *)(param_1 + 0x350) = uVar4;
        local_38 = &local_58;
        local_58 = (undefined4)DAT_14c8464e0;
        uStack_54 = DAT_14c8464e0._4_4_;
        uStack_50 = (undefined4)DAT_14c8464e8;
        uStack_4c = DAT_14c8464e8._4_4_;
        local_48 = DAT_14c8464f0;
        local_28 = &local_38;
        local_30 = &LAB_143620548;
        FUN_1448e6002(lVar3 + 0x138);
        param_1[0x353] = local_48;
        *(undefined4 *)(param_1 + 0x351) = local_58;
        *(undefined4 *)((longlong)param_1 + 0x1a8c) = uStack_54;
        *(undefined4 *)(param_1 + 0x352) = uStack_50;
        *(undefined4 *)((longlong)param_1 + 0x1a94) = uStack_4c;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582b000 FUN_14582b000 body=452 status=ok
// SIG undefined FUN_14582b000(void)

void FUN_14582b000(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x19d] == '\x01') {
    (**(code **)(*param_1 + 0x688))(param_1);
  }
  FUN_14582b240(param_1);
  if (param_1[0x130] != 0) {
    if ((char)param_1[0x19d] == '\0') {
      (**(code **)(*param_1 + 0x688))(param_1);
    }
    lVar2 = FUN_1411a5c2e(param_1);
    if (lVar2 != 0) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar1 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_40[2] = lVar4;
      *local_40 = &PTR_FUN_14b521c10;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      puVar1[4] = FUN_1406cc378;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_14582b1c6(lVar2,&local_30,&local_40);
      param_1[0x131] = local_30;
      FUN_1449db362(&local_40);
      lVar2 = FUN_144a7a45a(lVar2);
      if (lVar2 != 0) {
        lVar3 = FUN_1411a5d6c();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong **)(lVar2 + 0xd20) = param_1;
          FUN_148add0ac(lVar2 + 0x450,param_1);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582b1c6 FUN_14582b1c6 body=120 status=ok
// SIG undefined FUN_14582b1c6(void)

undefined8 FUN_14582b1c6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14009d848(&local_30,param_3);
  FUN_1448b6402(param_1 + 0x1128,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582b240 FUN_14582b240 body=280 status=ok
// SIG undefined FUN_14582b240(void)

void FUN_14582b240(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x660))();
  cVar2 = (**(code **)(*param_1 + 0x5d8))(param_1);
  if (cVar2 != '\0') {
    if (param_1[0x23] != 0) {
      (**(code **)(*param_1 + 0x638))(param_1,&local_38);
      (**(code **)(*param_1 + 0x648))(param_1,&local_38);
      if (param_1[0x130] != 0) {
        (**(code **)(*param_1 + 0x650))(param_1);
      }
      (**(code **)(*(longlong *)param_1[0x132] + 8))((longlong *)param_1[0x132],&local_38);
      if (local_38 != (undefined8 *)0x0) {
        (**(code **)*local_38)(local_38,1);
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x478))(param_1);
    plVar1 = (longlong *)param_1[0x23];
    if (plVar1 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff);
    }
    FUN_140bdc706(param_1 + 0x100,uVar3,uVar4,0x3c888f86);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582b382 FUN_14582b382 body=151 status=ok
// SIG undefined FUN_14582b382(void)

void FUN_14582b382(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x84) & 2) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0xf50))(param_1);
    }
  }
  lVar1 = param_1[0x7a];
  if (lVar1 != 0) {
    lVar3 = FUN_144a7a462();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_14582b566(lVar1 + 0x898);
    }
  }
  lVar1 = param_1[0x7a];
  FUN_14582b4ba(param_1);
  FUN_1411a5e52(param_1 + 0x13e,param_1,param_1[0x7a],lVar1);
  return;
}



// FUNCTION 14582b41a FUN_14582b41a body=60 status=ok
// SIG undefined FUN_14582b41a(void)

void FUN_14582b41a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_140d5bae2(uVar1);
  if (lVar2 != 0) {
    FUN_14582b456(lVar2 + 8,param_1 + 0x960);
    return;
  }
  return;
}



// FUNCTION 14582b456 FUN_14582b456 body=100 status=ok
// SIG undefined FUN_14582b456(void)

void FUN_14582b456(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))();
  uVar3 = (ulonglong)(int)plVar2[1];
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 * 0x78;
    do {
      lVar4 = lVar4 + -0x78;
      if (*(longlong *)(*plVar2 + 8 + lVar4) == param_2) {
        FUN_14051f3ba(*plVar2 + lVar4);
        FUN_14051f312(plVar2,(int)uVar3 + -1,1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14582b4ba FUN_14582b4ba body=170 status=ok
// SIG undefined FUN_14582b4ba(void)

void FUN_14582b4ba(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)param_1[0x7a];
  if (plVar2 != (longlong *)0x0) {
    if ((char)param_1[0x2f] == '\x03') {
      FUN_140c7ce82(plVar2,1);
      plVar2 = (longlong *)param_1[0x7a];
    }
    (**(code **)(*plVar2 + 0x6d8))();
    lVar1 = (**(code **)(*param_1 + 0x6b8))(param_1);
    if (lVar1 == param_1[0x7a]) {
      local_20 = 0;
      local_1c = 1;
      local_18 = 0x40000000;
      (**(code **)(*param_1 + 0xe38))(param_1,param_1);
    }
  }
  (**(code **)(*param_1 + 0x6b0))(param_1,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582b566 FUN_14582b566 body=151 status=ok
// SIG undefined FUN_14582b566(void)

void FUN_14582b566(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  short local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    if (lVar2 == 0) goto LAB_14582b5aa;
    iVar1 = FUN_14490d72a(lVar2);
    if (iVar1 == 3) goto LAB_14582b5aa;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(short *)(param_1 + 0x40) < 0 || lVar2 != 0) {
      local_28 = *(longlong *)(param_1 + 0x38);
      local_20 = *(short *)(param_1 + 0x40);
      local_18 = lVar2;
      FUN_140365ba6(param_1,&local_28,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    }
  }
LAB_14582b5aa:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582b5fe FUN_14582b5fe body=40 status=ok
// SIG undefined FUN_14582b5fe(void)

undefined8 FUN_14582b5fe(undefined8 param_1,int param_2)

{
  FUN_14582b626();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582b626 FUN_14582b626 body=156 status=ok
// SIG undefined FUN_14582b626(void)

void FUN_14582b626(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeac860;
  param_1[0x26] = &PTR_FUN_14aeacbd0;
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar1 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar1 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14582b6ee(param_1);
  return;
}



// FUNCTION 14582b6ce FUN_14582b6ce body=31 status=ok
// SIG undefined FUN_14582b6ce(void)

undefined8 FUN_14582b6ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582b6ee FUN_14582b6ee body=120 status=ok
// SIG undefined FUN_14582b6ee(void)

void FUN_14582b6ee(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeae4e0;
  FUN_14582b792(param_1 + 0x19);
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_FUN_14aeab700;
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14582b772 FUN_14582b772 body=31 status=ok
// SIG undefined FUN_14582b772(void)

undefined8 FUN_14582b772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582b792 FUN_14582b792 body=70 status=ok
// SIG undefined FUN_14582b792(void)

void FUN_14582b792(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14582b7d8(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14582b7d8 FUN_14582b7d8 body=53 status=ok
// SIG undefined FUN_14582b7d8(void)

void FUN_14582b7d8(longlong *param_1)

{
  FUN_14582b80e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14582b80e FUN_14582b80e body=367 status=ok
// SIG undefined FUN_14582b80e(void)

void FUN_14582b80e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x60) != 0) {
        lVar3 = *local_68 + (longlong)iStack_4c * 0x60;
        plVar2 = *(longlong **)(lVar3 + 0x20);
        plVar4 = (longlong *)(lVar3 + 0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar4 = plVar2;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401283f4(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582b97e FUN_14582b97e body=62 status=ok
// SIG undefined FUN_14582b97e(void)

undefined8 * FUN_14582b97e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4a6b20;
  FUN_1404dbac8(param_1 + 0xb);
  thunk_FUN_1404db954(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582b9bc thunk_FUN_1404db954 body=5 status=ok
// SIG undefined thunk_FUN_1404db954(void)

void thunk_FUN_1404db954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a492200;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14582b9c1 FUN_14582b9c1 body=35 status=ok
// SIG undefined FUN_14582b9c1(void)

void FUN_14582b9c1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14582b9e4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba233f0;
  return;
}



// FUNCTION 14582b9e4 FUN_14582b9e4 body=32 status=ok
// SIG undefined FUN_14582b9e4(void)

undefined8 * FUN_14582b9e4(undefined8 *param_1)

{
  FUN_140e6d9f4();
  *param_1 = &PTR_FUN_14aef92e0;
  return param_1;
}



// FUNCTION 14582ba04 FUN_14582ba04 body=63 status=ok
// SIG undefined FUN_14582ba04(void)

undefined1 FUN_14582ba04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14582ba44(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14582ba44 FUN_14582ba44 body=122 status=ok
// SIG undefined FUN_14582ba44(void)

longlong FUN_14582ba44(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_1400fce78(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  FUN_141010638(param_1 + 0x48,param_2 + 0x48);
  FUN_1400fce78(param_1 + 0x58,param_2 + 0x58);
  FUN_1411a709a(param_1 + 0x68,param_2 + 0x68);
  FUN_1411a709a(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 14582babe FUN_14582babe body=115 status=ok
// SIG undefined FUN_14582babe(void)

void FUN_14582babe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = (**(code **)(*param_1 + 0x20))();
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x3e) == '\x01')) {
    uVar3 = *(undefined8 *)(param_1[0x51] + 0xf8);
    plVar4 = *(longlong **)(param_1[0x51] + 0x100);
    if (plVar4 == (longlong *)0x0) {
      FUN_14582bb32(uVar3,0);
      return;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_14582bb32(uVar3,0);
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
                    /* WARNING: Could not recover jumptable at 0x00014582bb2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14582bb32 FUN_14582bb32 body=646 status=ok
// SIG undefined FUN_14582bb32(void)

void FUN_14582bb32(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((char)param_1[0x1c] != param_2) {
    *(char *)(param_1 + 0x1c) = param_2;
    plVar2 = *(longlong **)(param_1[7] + 0xe8);
    plVar3 = *(longlong **)(param_1[7] + 0xf0);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x108))(plVar2,&local_70);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      (**(code **)(*plVar2 + 0x108))(plVar2,&local_70);
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
    lVar4 = local_70;
    lVar8 = (longlong)local_68;
    if (lVar8 == 0) {
      local_68 = 0;
    }
    else {
      lVar6 = 0;
      do {
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        plVar2 = *(longlong **)(lVar4 + lVar6);
        (**(code **)(*plVar2 + 8))(plVar2,&local_98);
        iVar5 = (**(code **)(*param_1 + 0x68))(param_1,local_98,&local_88);
        lVar7 = local_88;
        plVar2 = plStack_90;
        if (iVar5 == 0) {
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_90 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          if (lVar7 != 0) {
            local_98 = 0;
            plStack_90 = (longlong *)0x0;
            lVar7 = local_88 + 0x20;
            plVar2 = *(longlong **)(lVar4 + lVar6);
            (**(code **)(*plVar2 + 8))(plVar2,&local_a8);
            (**(code **)(*param_1 + 0x10))(param_1,local_a8,lVar7,&local_98);
            plVar2 = local_a0;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            FUN_1449db362(&local_98);
          }
        }
        else if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar2 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_80 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar8 * 0x10 != lVar6);
    }
    FUN_140b6e673(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582bdba FUN_14582bdba body=40 status=ok
// SIG undefined FUN_14582bdba(void)

undefined8 FUN_14582bdba(undefined8 param_1,int param_2)

{
  FUN_14582bde2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582bde2 FUN_14582bde2 body=114 status=ok
// SIG undefined FUN_14582bde2(void)

void FUN_14582bde2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a580fe0;
  plVar3 = (longlong *)param_1[0x1a];
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
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(param_1 + 0xe);
  FUN_14582be54(param_1);
  return;
}



// FUNCTION 14582be54 FUN_14582be54 body=60 status=ok
// SIG undefined FUN_14582be54(void)

void FUN_14582be54(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a580bf0;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_1477f2a0c(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1411a8230(param_1);
  return;
}



// FUNCTION 14582be90 FUN_14582be90 body=104 status=ok
// SIG undefined FUN_14582be90(void)

undefined8 FUN_14582be90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1411a8284(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582bf04 FUN_14582bf04 body=118 status=ok
// SIG undefined FUN_14582bf04(void)

undefined8 * FUN_14582bf04(undefined8 *param_1)

{
  FUN_14582bf9a();
  *param_1 = &PTR_FUN_14a4a6b20;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 2;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 2;
  param_1[0xb] = &PTR_FUN_14a4a6980;
  FUN_14582bf7a(param_1 + 0x15);
  return param_1;
}



// FUNCTION 14582bf7a FUN_14582bf7a body=31 status=ok
// SIG undefined FUN_14582bf7a(void)

void FUN_14582bf7a(undefined4 *param_1)

{
  *param_1 = 0x40800000;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  param_1[4] = 0;
  return;
}



// FUNCTION 14582bf9a FUN_14582bf9a body=32 status=ok
// SIG undefined FUN_14582bf9a(void)

undefined8 * FUN_14582bf9a(undefined8 *param_1)

{
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a466f80;
  return param_1;
}



// FUNCTION 14582bfba FUN_14582bfba body=794 status=ok
// SIG undefined FUN_14582bfba(void)

longlong * FUN_14582bfba(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar9 = param_2;
    do {
      if (DAT_14c98e778 != DAT_14c98e7a4) {
        uVar6 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar8 = (uint)lVar9 & 0xffff;
        puVar7 = DAT_14c98e7b0;
        if (DAT_14c98e7b0 == (undefined *)0x0) {
          puVar7 = &DAT_14c98e7a8;
        }
        iVar4 = *(int *)(puVar7 + (ulonglong)
                                  (DAT_14c98e7b8 - 1U &
                                  (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar8) +
                                  (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
        while (iVar4 != -1) {
          lVar2 = DAT_14c98e770 + (longlong)iVar4 * 0x80;
          if (*(longlong *)(DAT_14c98e770 + (longlong)iVar4 * 0x80) == lVar9) {
            if (lVar2 != 0) {
              FUN_14582c344(&local_c8,lVar2 + 8);
              goto LAB_14582c0a6;
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x78);
        }
      }
      FUN_145cfde1a(&local_c8);
LAB_14582c0a6:
      FUN_1411a8b42(&local_d8,lVar9,param_3,1);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)param_1[1];
      *param_1 = local_d8;
      param_1[1] = (longlong)local_d0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      plVar5 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar9 = *(longlong *)(local_68 + 0x18);
      FUN_14582c2d6(&local_c8);
    } while (*param_1 == 0 && lVar9 != 0);
    if (*param_1 != 0) goto LAB_14582c1b8;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14582c3e0(param_2,&local_c8);
  if (0 < (int)uStack_c0) {
    lVar9 = 1;
    do {
      FUN_1411a8b42(&local_d8,*(undefined8 *)(local_c8 + -8 + lVar9 * 8),param_3,1);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)param_1[1];
      *param_1 = local_d8;
      param_1[1] = (longlong)local_d0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      plVar5 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    } while ((lVar9 < (int)uStack_c0) && (lVar9 = lVar9 + 1, *param_1 == 0));
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_14582c1b8:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582c2d6 FUN_14582c2d6 body=110 status=ok
// SIG undefined FUN_14582c2d6(void)

void FUN_14582c2d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
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
  FUN_1411a9211(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1411a91da(param_1);
  return;
}



// FUNCTION 14582c344 FUN_14582c344 body=156 status=ok
// SIG undefined FUN_14582c344(void)

undefined8 * FUN_14582c344(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1411a9a20();
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1411a9520(param_1 + 10,iVar1);
    FUN_1411a9287(param_1[10],uVar2,iVar1);
  }
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14582c3e0 FUN_14582c3e0 body=169 status=ok
// SIG undefined FUN_14582c3e0(void)

void FUN_14582c3e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = param_1;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14582c48a(param_1,&local_38);
  if (0 < (int)uStack_30) {
    lVar2 = 0;
    do {
      FUN_14582c3e0(*(undefined8 *)(local_38 + lVar2 * 8),param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)uStack_30);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582c48a FUN_14582c48a body=239 status=ok
// SIG undefined FUN_14582c48a(void)

void FUN_14582c48a(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_14c98e808 != 0) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar5 = &DAT_14c98e7f8;
    if (DAT_14c98e800 != (undefined *)0x0) {
      puVar5 = DAT_14c98e800;
    }
    iVar6 = *(int *)(puVar5 + (longlong)
                              (int)(DAT_14c98e808 - 1U &
                                   ((uint)param_1 << 0x10 | uVar4) +
                                   (int)((ulonglong)param_1 >> 0x20) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    while (iVar7 = iVar6, iVar7 != -1) {
      iVar6 = *(int *)(DAT_14c98e7c0 + 0x10 + (longlong)iVar7 * 0x18);
      if (*(longlong *)(DAT_14c98e7c0 + (longlong)iVar7 * 0x18) == param_1) {
        do {
          lVar3 = DAT_14c98e7c0;
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
               *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x18 + 8);
          do {
            iVar7 = iVar6;
            if (iVar7 == -1) {
              return;
            }
            iVar6 = *(int *)(DAT_14c98e7c0 + 0x10 + (longlong)iVar7 * 0x18);
          } while (*(longlong *)(DAT_14c98e7c0 + (longlong)iVar7 * 0x18) != param_1);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 14582c57a FUN_14582c57a body=132 status=ok
// SIG undefined FUN_14582c57a(void)

void FUN_14582c57a(longlong param_1,int param_2)

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



// FUNCTION 14582c600 FUN_14582c600 body=132 status=ok
// SIG undefined FUN_14582c600(void)

void FUN_14582c600(longlong param_1,int param_2)

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



// FUNCTION 14582c686 FUN_14582c686 body=64 status=ok
// SIG undefined FUN_14582c686(void)

void FUN_14582c686(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_144729dda(param_1 + 0x20);
  if (cVar2 != '\0') {
    uVar1 = FUN_14479d2ce(param_1 + 0x20);
    FUN_144938f46(uVar1,*(undefined8 *)(param_1 + 8),param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x44);
  }
  return;
}



// FUNCTION 14582c6c6 FUN_14582c6c6 body=40 status=ok
// SIG undefined FUN_14582c6c6(void)

undefined8 FUN_14582c6c6(undefined8 param_1,int param_2)

{
  FUN_14582c6ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582c6ee FUN_14582c6ee body=107 status=ok
// SIG undefined FUN_14582c6ee(void)

void FUN_14582c6ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c3a40;
  if (*(char *)((longlong)param_1 + 0xac) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 14582c75a FUN_14582c75a body=221 status=ok
// SIG undefined FUN_14582c75a(void)

void FUN_14582c75a(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14101eafe();
  local_58 = *(undefined4 *)(param_1 + 0x90);
  uStack_54 = *(undefined4 *)(param_1 + 0x94);
  uStack_50 = *(undefined4 *)(param_1 + 0x98);
  uStack_4c = *(undefined4 *)(param_1 + 0x9c);
  FUN_1411ab340(&local_58,local_48);
  FUN_1458433a4(param_2,local_48);
  iVar2 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar4 = 0;
    do {
      local_68 = *(longlong **)(lVar3 + 0x10 + lVar4);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar4);
      local_60 = *puVar1;
      local_78 = puVar1[-6];
      uStack_74 = puVar1[-5];
      uStack_70 = puVar1[-4];
      uStack_6c = puVar1[-3];
      FUN_14582c838(param_2,&local_78,&local_68);
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582c838 FUN_14582c838 body=157 status=ok
// SIG undefined FUN_14582c838(void)

void FUN_14582c838(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1411ab38a(param_2,local_34);
  local_48 = (longlong *)*param_3;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  local_40 = (undefined4)param_3[1];
  FUN_1411ab340(param_2,local_58);
  FUN_14100d696(param_1,local_58,&local_48);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582c8d6 FUN_14582c8d6 body=55 status=ok
// SIG undefined FUN_14582c8d6(void)

ulonglong FUN_14582c8d6(int *param_1,int *param_2)

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



// FUNCTION 14582c90d FUN_14582c90d body=96 status=ok
// SIG undefined FUN_14582c90d(void)

void FUN_14582c90d(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_1411ab854(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4f0470;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  FUN_1411ab84c(&local_19);
  *(undefined1 *)(puVar1 + 0xd) = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582c96e FUN_14582c96e body=44 status=ok
// SIG undefined FUN_14582c96e(void)

void FUN_14582c96e(undefined8 param_1)

{
  char cVar1;
  
  FUN_140f05dd8();
  cVar1 = FUN_14582c99a(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1411ab890(param_1);
  return;
}



// FUNCTION 14582c99a FUN_14582c99a body=141 status=ok
// SIG undefined FUN_14582c99a(void)

undefined8 FUN_14582c99a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  uVar2 = DAT_14cbc5600;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = DAT_14cbc5600;
  local_20 = 0xffffffff;
  cVar1 = FUN_144a7a548(param_1 + 0x4d8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_38 = DAT_14c9a6400;
    local_30 = 0xffffffff;
    local_48 = uVar2;
    local_40 = 0xffffffff;
    uVar2 = FUN_1400b1204(param_1 + 0x4d8);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582ca30 FUN_14582ca30 body=91 status=ok
// SIG undefined FUN_14582ca30(void)

undefined8 * FUN_14582ca30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1402309ae(param_1,uVar1);
  *param_1 = &PTR_FUN_14a1d85c0;
  param_1[7] = DAT_14caa8578;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3e4ccccd;
  FUN_1446f470e(param_1 + 9,L"AnimNotify",1);
  return param_1;
}



// FUNCTION 14582ca9e FUN_14582ca9e body=52 status=ok
// SIG undefined FUN_14582ca9e(void)

void FUN_14582ca9e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14582cb46(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 14582cad2 FUN_14582cad2 body=115 status=ok
// SIG undefined FUN_14582cad2(void)

void FUN_14582cad2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14582cb46 FUN_14582cb46 body=121 status=ok
// SIG undefined FUN_14582cb46(void)

undefined8 * FUN_14582cb46(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  FUN_1447715ec(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14582cbce FUN_14582cbce body=40 status=ok
// SIG undefined FUN_14582cbce(void)

undefined8 FUN_14582cbce(undefined8 param_1,int param_2)

{
  FUN_14582cbf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582cbf6 FUN_14582cbf6 body=168 status=ok
// SIG undefined FUN_14582cbf6(void)

void FUN_14582cbf6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7d1970;
  FUN_14582cc9e(param_1 + 0x30);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14582cc9e FUN_14582cc9e body=49 status=ok
// SIG undefined FUN_14582cc9e(void)

void FUN_14582cc9e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1 + 0x38);
  FUN_144a2da94(param_1);
  return;
}



// FUNCTION 14582cccf FUN_14582cccf body=48 status=ok
// SIG undefined FUN_14582cccf(void)

void FUN_14582cccf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14582cd00(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad3a600;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined2 *)(puVar1 + 0xb) = 1;
  return;
}



// FUNCTION 14582cd00 FUN_14582cd00 body=44 status=ok
// SIG undefined FUN_14582cd00(void)

undefined8 * FUN_14582cd00(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8067f0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0x7f;
  return param_1;
}



// FUNCTION 14582cd2c FUN_14582cd2c body=147 status=ok
// SIG undefined FUN_14582cd2c(void)

void FUN_14582cd2c(longlong param_1,int param_2)

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



// FUNCTION 14582cdc0 FUN_14582cdc0 body=310 status=ok
// SIG undefined FUN_14582cdc0(void)

undefined4 *
FUN_14582cdc0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14582cfb2(param_1,local_50);
  uVar1 = *(undefined8 *)*param_3;
  *local_48 = uVar1;
  local_48[1] = 0;
  local_48[2] = 0;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  local_68 = param_4;
  cVar3 = FUN_14582cef8(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
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
      *(uint *)((longlong)local_48 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14582d2b0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582cef8 FUN_14582cef8 body=185 status=ok
// SIG undefined FUN_14582cef8(void)

void FUN_14582cef8(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    iVar7 = FUN_1411acbfc();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14582d23e(param_1,*param_4);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_14582cf46;
    }
  }
  uVar6 = 0;
LAB_14582cf46:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582cfb2 FUN_14582cfb2 body=239 status=ok
// SIG undefined FUN_14582cfb2(void)

int * FUN_14582cfb2(longlong *param_1,int *param_2)

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



// FUNCTION 14582d0a2 FUN_14582d0a2 body=266 status=ok
// SIG undefined FUN_14582d0a2(void)

undefined8 FUN_14582d0a2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar5 != -1) {
      lVar4 = *param_1;
      lVar5 = lVar5 * 0x20;
      local_48 = *(undefined8 *)(lVar4 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_1411accb2();
      if (cVar2 == '\0') {
        lVar5 = lVar4 + lVar5;
        do {
          lVar4 = lVar5;
          lVar5 = (longlong)*(int *)(lVar4 + 0x18);
          if (lVar5 == -1) goto LAB_14582d138;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x20;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_1411accb2(&local_48,&local_50);
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x18);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_14582d1ae(param_1,*puVar6);
      uVar3 = 1;
    }
  }
LAB_14582d138:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582d1ae FUN_14582d1ae body=89 status=ok
// SIG undefined FUN_14582d1ae(void)

void FUN_14582d1ae(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14582d208();
  return;
}



// FUNCTION 14582d208 FUN_14582d208 body=54 status=ok
// SIG undefined FUN_14582d208(void)

void FUN_14582d208(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14582d23e(param_1,param_2);
  return;
}



// FUNCTION 14582d23e FUN_14582d23e body=114 status=ok
// SIG undefined FUN_14582d23e(void)

void FUN_14582d23e(longlong *param_1,int param_2)

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



// FUNCTION 14582d2b0 FUN_14582d2b0 body=448 status=ok
// SIG undefined FUN_14582d2b0(void)

void FUN_14582d2b0(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14582d472 FUN_14582d472 body=610 status=ok
// SIG undefined FUN_14582d472(void)

void FUN_14582d472(longlong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  int local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_b8 = param_2;
    if (*param_2 == '\x01') {
      FUN_1447a97f4(&local_70,param_2 + 0x10);
      if (0 < local_6c) {
        iVar4 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_7c,iVar4,1);
          if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                ((FUN_144a7c8fe(&local_70,local_88,iVar4,1), local_88[0] == DAT_14cb7bec8 &&
                 (local_80 == DAT_14cb7bed0)))) ||
               ((FUN_144a7c8fe(&local_70,local_94,iVar4,1), local_94[0] == DAT_14cb7bee0 &&
                (local_8c == DAT_14cb7bee8)))) ||
              ((FUN_144a7c8fe(&local_70,local_a0,iVar4,1), local_a0[0] == DAT_14cb7bef8 &&
               (local_98 == DAT_14cb7bf00)))) ||
             ((FUN_144a7c8fe(&local_70,local_ac,iVar4,1), local_ac[0] == DAT_14cb7bf10 &&
              (local_a4 == DAT_14cb7bf18)))) {
            FUN_1402b5374(&local_70,iVar4,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_6c);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_70 = *(int *)(param_2 + 0x10);
    }
    pcVar1 = local_b8;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)local_70 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar8 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x50 + *param_1;
      cVar2 = FUN_14493b798(lVar3,local_b8);
      if (cVar2 == '\0') {
        do {
          lVar7 = lVar3;
          lVar3 = (longlong)*(int *)(lVar7 + 0x48);
          if (lVar3 == -1) goto LAB_14582d668;
          lVar3 = lVar3 * 0x50 + *param_1;
          cVar2 = FUN_14493b798(lVar3,pcVar1);
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar7 + 0x48);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar8 * 4);
      }
      FUN_14582d6d6(param_1,*puVar6);
    }
  }
LAB_14582d668:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582d6d6 FUN_14582d6d6 body=121 status=ok
// SIG undefined FUN_14582d6d6(void)

void FUN_14582d6d6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x50;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x4c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x50 + 0x48);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x48);
  FUN_14582d750(lVar2 + *param_1);
  FUN_14582d78c(param_1,param_2);
  return;
}



// FUNCTION 14582d750 FUN_14582d750 body=59 status=ok
// SIG undefined FUN_14582d750(void)

void FUN_14582d750(longlong param_1)

{
  FUN_14121cc12(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14582d78c FUN_14582d78c body=124 status=ok
// SIG undefined FUN_14582d78c(void)

void FUN_14582d78c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 14582d814 FUN_14582d814 body=86 status=ok
// SIG undefined FUN_14582d814(void)

undefined8 * FUN_14582d814(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14ab54ae0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(byte *)(param_1 + 0xe) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14582d86a FUN_14582d86a body=155 status=ok
// SIG undefined FUN_14582d86a(void)

undefined8 FUN_14582d86a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  iVar2 = *(int *)(lVar1 + 0x2c);
  if (3 < iVar2) {
    iVar2 = 4;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 4;
  if (*(int *)(lVar1 + 0x30) < 4) {
    iVar3 = *(int *)(lVar1 + 0x30);
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  return CONCAT44((*(byte *)(param_1 + 0x2fd) & 0xf) << 4 |
                  (uint)*(byte *)(lVar1 + 0x35) + (uint)*(byte *)(lVar1 + 0x3d) * 4 +
                  (uint)*(byte *)(lVar1 + 0x3a) * 2 + (uint)*(byte *)(lVar1 + 0x36) * 8,
                  (uint)(byte)(*(char *)(lVar1 + 0x34) << 4) +
                  (0x4000 << ((byte)iVar2 & 0x1f) & 0xfc000U) + 2 | *(int *)(lVar1 + 0x44) << 0x18 |
                  iVar3 << 0x15);
}



// FUNCTION 14582d918 FUN_14582d918 body=40 status=ok
// SIG undefined FUN_14582d918(void)

undefined8 FUN_14582d918(undefined8 param_1,int param_2)

{
  FUN_14582d940();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582d940 FUN_14582d940 body=63 status=ok
// SIG undefined FUN_14582d940(void)

void FUN_14582d940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b09fb70;
  FUN_144a2da94(param_1 + 10);
  FUN_144a2da94(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14582d980 FUN_14582d980 body=63 status=ok
// SIG undefined FUN_14582d980(void)

void FUN_14582d980(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14582d9c0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14582d9c0 FUN_14582d9c0 body=93 status=ok
// SIG undefined FUN_14582d9c0(void)

ulonglong FUN_14582d9c0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
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



// FUNCTION 14582da26 FUN_14582da26 body=1306 status=ok
// SIG undefined FUN_14582da26(void)

undefined8 * FUN_14582da26(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14b6d6590;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  puVar5 = param_1 + 5;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar4 = (undefined8 *)FUN_1411ae66e(puVar5);
  FUN_1446f470e(&local_50,L"L_Upperarm",1);
  *puVar4 = local_50;
  puVar4[1] = 0xffffffff7fffffff;
  plVar1 = puVar4 + 6;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(plVar1,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"L_Upperarm_Twist01",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3d4ccccd;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  FUN_1446f470e(&local_50,L"L_Upperarm_Twist02",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f19999a;
  puVar4 = (undefined8 *)FUN_1411ae66e(puVar5);
  FUN_1446f470e(&local_50,L"L_Hand",1);
  *puVar4 = local_50;
  puVar4[1] = 0xffffffff7fffffff;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(puVar4 + 6,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"L_Forearm_Twist02",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f000000;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(puVar4 + 6,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"L_Forearm_Twist03",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f800000;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4 = (undefined8 *)FUN_1411ae66e(puVar5);
  FUN_1446f470e(&local_50,L"R_Upperarm",1);
  *puVar4 = local_50;
  puVar4[1] = 0xffffffff7fffffff;
  plVar1 = puVar4 + 6;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(plVar1,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"R_Upperarm_Twist01",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3d4ccccd;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  FUN_1446f470e(&local_50,L"R_Upperarm_Twist02",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f19999a;
  puVar4 = (undefined8 *)FUN_1411ae66e(puVar5);
  FUN_1446f470e(&local_50,L"R_Hand",1);
  *puVar4 = local_50;
  puVar4[1] = 0xffffffff7fffffff;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(puVar4 + 6,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"R_Forearm_Twist02",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f000000;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(puVar4 + 6,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"R_Forearm_Twist03",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f800000;
  *(undefined1 *)(puVar4 + 5) = 0;
  puVar4 = (undefined8 *)FUN_1411ae66e(puVar5);
  FUN_1446f470e(&local_50,L"L_Thigh",1);
  *puVar4 = local_50;
  puVar4[1] = 0xffffffff7fffffff;
  iVar2 = *(int *)(puVar4 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar4 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(puVar4 + 6,iVar2);
  }
  lVar3 = puVar4[6];
  FUN_1446f470e(&local_50,L"L_Thigh_Twist01",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f800000;
  puVar5 = (undefined8 *)FUN_1411ae66e(puVar5);
  FUN_1446f470e(&local_50,L"R_Thigh",1);
  *puVar5 = local_50;
  puVar5[1] = 0xffffffff7fffffff;
  iVar2 = *(int *)(puVar5 + 7);
  lVar6 = (longlong)iVar2;
  *(uint *)(puVar5 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x3c) < iVar2 + 1U) {
    FUN_1411ae6e0(puVar5 + 6,iVar2);
  }
  lVar3 = puVar5[6];
  FUN_1446f470e(&local_50,L"R_Thigh_Twist01",1);
  *(undefined8 *)(lVar3 + lVar6 * 0x14) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x14) = 0xffffffff7fffffff;
  *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x14) = 0x3f800000;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582df42 FUN_14582df42 body=214 status=ok
// SIG undefined FUN_14582df42(void)

undefined8 * FUN_14582df42(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582e01a FUN_14582e01a body=428 status=ok
// SIG undefined FUN_14582e01a(void)

longlong * FUN_14582e01a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14582e0fa:
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
    *puVar5 = &PTR_FUN_14b99b8f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14582e0fa;
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
    *puVar5 = &PTR_FUN_14b99b8f0;
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



// FUNCTION 14582e1c6 FUN_14582e1c6 body=428 status=ok
// SIG undefined FUN_14582e1c6(void)

longlong * FUN_14582e1c6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14582e2a6:
    *puVar5 = &PTR_LAB_14b99b9d0;
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
    *puVar5 = &PTR_FUN_14b99b960;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14582e2a6;
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
    *puVar5 = &PTR_LAB_14b99b9d0;
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
    *puVar5 = &PTR_FUN_14b99b960;
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



// FUNCTION 14582e38e FUN_14582e38e body=124 status=ok
// SIG undefined FUN_14582e38e(void)

void FUN_14582e38e(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar1 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x108);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x60) == param_2) {
          if (lVar1 + 8 == 0 || lVar1 == 0) {
            return;
          }
          FUN_148aa0dbe(lVar1 + 8,param_3);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14582e40a FUN_14582e40a body=114 status=ok
// SIG undefined FUN_14582e40a(void)

void FUN_14582e40a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_14582e4a8(param_1 + 0x80);
  FUN_14582e47c(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1411af240(param_1);
  return;
}



// FUNCTION 14582e47c FUN_14582e47c body=43 status=ok
// SIG undefined FUN_14582e47c(void)

void FUN_14582e47c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14708bbe0(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 14582e4a8 FUN_14582e4a8 body=55 status=ok
// SIG undefined FUN_14582e4a8(void)

void FUN_14582e4a8(longlong *param_1)

{
  FUN_14582e4e0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14582e4e0 FUN_14582e4e0 body=384 status=ok
// SIG undefined FUN_14582e4e0(void)

void FUN_14582e4e0(longlong *param_1,int param_2)

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
      FUN_14708bbe0(*local_70 + (longlong)iStack_54 * 0xd0 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145c8a91a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582e694 FUN_14582e694 body=52 status=ok
// SIG undefined FUN_14582e694(void)

void FUN_14582e694(longlong *param_1)

{
  FUN_14582e6c8(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014582e6be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14582e6c8 FUN_14582e6c8 body=78 status=ok
// SIG undefined FUN_14582e6c8(void)

void FUN_14582e6c8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_1411b0924(*param_1);
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x710);
  if (plVar2 != (longlong *)0x0) {
    iVar4 = (**(code **)(*plVar2 + 0x20))();
    if (iVar4 == 1) {
      FUN_1411b0914(lVar1 + 0x710);
    }
  }
  FUN_1411b0906(*param_1,uVar3);
  return;
}



// FUNCTION 14582e716 FUN_14582e716 body=40 status=ok
// SIG undefined FUN_14582e716(void)

undefined8 FUN_14582e716(undefined8 param_1,int param_2)

{
  FUN_14582e73e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582e73e FUN_14582e73e body=70 status=ok
// SIG undefined FUN_14582e73e(void)

void FUN_14582e73e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b715800;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_14582e784(param_1 + 0x72);
  FUN_140bd4d6a(param_1);
  return;
}



// FUNCTION 14582e784 FUN_14582e784 body=53 status=ok
// SIG undefined FUN_14582e784(void)

void FUN_14582e784(longlong *param_1)

{
  FUN_1411b0946();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14582e7ba FUN_14582e7ba body=273 status=ok
// SIG undefined FUN_14582e7ba(void)

undefined8 FUN_14582e7ba(longlong param_1)

{
  byte bVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x90));
  LOCK();
  bVar1 = *(byte *)(param_1 + 0xac);
  *(byte *)(param_1 + 0xac) = 1;
  UNLOCK();
  if ((bVar1 & 1) == 0) {
    local_b0 = &local_98;
    local_90 = 0;
    local_98 = 0xffffffffffffffff;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_149e34980;
    local_78[0] = &LAB_1427883c6;
    local_a8 = 1;
    local_b8 = 0;
    local_50 = param_1;
    FUN_1411b0d90(local_88,L"OutputDeviceRedirector",local_78,0);
    FUN_14582e8cc(param_1 + 0x80,local_88);
    FUN_1411ee6a8(local_88);
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar2 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar2 = &local_58;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x90));
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582e8cc FUN_14582e8cc body=98 status=ok
// SIG undefined FUN_14582e8cc(void)

undefined8 * FUN_14582e8cc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
  return param_1;
}



// FUNCTION 14582e92e FUN_14582e92e body=39 status=ok
// SIG undefined FUN_14582e92e(void)

void FUN_14582e92e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014582e951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14582e95f FUN_14582e95f body=86 status=ok
// SIG undefined FUN_14582e95f(void)

undefined8
FUN_14582e95f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_14582e9b5(param_1,param_3,param_4,param_5,param_6,param_7);
  }
  return param_1;
}



// FUNCTION 14582e9b5 FUN_14582e9b5 body=158 status=ok
// SIG undefined FUN_14582e9b5(void)

undefined8
FUN_14582e9b5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_140d76916(param_1,5);
  FUN_1411b2fb0(param_1,&DAT_14cbd3fc0,param_2);
  FUN_1411b30c0(param_1,&DAT_14cbd3fd0,param_3);
  FUN_1411b2fb0(param_1,&DAT_14cbd3fe0,param_4);
  FUN_1411b2fb0(param_1,&DAT_14cbd3ff0,param_5);
  FUN_14582ea54(param_1,&DAT_14cbd4000,param_6);
  return param_1;
}



// FUNCTION 14582ea54 FUN_14582ea54 body=124 status=ok
// SIG undefined FUN_14582ea54(void)

longlong * FUN_14582ea54(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(undefined1 *)(lVar2 + lVar4) = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 1;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 14582eae6 FUN_14582eae6 body=100 status=ok
// SIG undefined FUN_14582eae6(void)

void FUN_14582eae6(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    FUN_141131ab6(param_1);
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03')) {
    uVar1 = FUN_141211ffe(param_1 + 0xb0);
    FUN_1448a8284(uVar1);
    uVar1 = FUN_141211ffe(param_1 + 0xbc);
    FUN_1448a8284(uVar1);
    return;
  }
  return;
}



// FUNCTION 14582eb4a FUN_14582eb4a body=9 status=ok
// SIG undefined FUN_14582eb4a(void)

void FUN_14582eb4a(longlong param_1)

{
  FUN_14582eb54(param_1 + 0x10);
  return;
}



// FUNCTION 14582eb54 FUN_14582eb54 body=80 status=ok
// SIG undefined FUN_14582eb54(void)

void FUN_14582eb54(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014582eba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14582ebb0 FUN_14582ebb0 body=138 status=ok
// SIG undefined FUN_14582ebb0(void)

undefined8 * FUN_14582ebb0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aeee240;
  param_1[5] = &PTR_FUN_14aeee510;
  param_1[6] = &PTR_FUN_14aeee530;
  param_1[7] = &PTR_FUN_14aeee550;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  FUN_14582ec3a(param_1);
  return param_1;
}



// FUNCTION 14582ec3a FUN_14582ec3a body=98 status=ok
// SIG undefined FUN_14582ec3a(void)

void FUN_14582ec3a(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_14001cc68(0x220,0x10);
  FUN_1411b354a(lVar2,0,0,0,1);
  puVar1 = (undefined8 *)param_1[0x13];
  param_1[0x13] = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014582ec89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a0))(param_1);
  return;
}



// FUNCTION 14582ec9c FUN_14582ec9c body=117 status=ok
// SIG undefined FUN_14582ec9c(void)

void FUN_14582ec9c(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14582f278(*(undefined8 *)(param_1 + 0x98));
  FUN_14582eef4(*(undefined8 *)(param_1 + 0x98),0);
  FUN_14582ed12(*(undefined8 *)(param_1 + 0x98));
  FUN_14582ed9a(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x208));
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xa8) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00014582ed0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a0))(plVar1,*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}



// FUNCTION 14582ed12 FUN_14582ed12 body=135 status=ok
// SIG undefined FUN_14582ed12(void)

void FUN_14582ed12(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x208) == 0) {
    uVar2 = FUN_14001cc68(0x130,0x10);
    FUN_14582ee2c(uVar2,param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      uVar2 = *(undefined8 *)(param_1 + 0x208);
    }
    FUN_1411b31a2(uVar2,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                  *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144));
    return;
  }
  return;
}



// FUNCTION 14582ed9a FUN_14582ed9a body=145 status=ok
// SIG undefined FUN_14582ed9a(void)

void FUN_14582ed9a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_149f3bf50;
    FUN_141040b84(puVar3 + 3);
    puVar3[2] = uVar1;
    FUN_1411b3144(puVar3,0);
    *puVar3 = &PTR_FUN_149f3be80;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      puVar3 = *(undefined8 **)(param_1 + 0x48);
    }
    FUN_1411b3144(puVar3,0);
    return;
  }
  return;
}



// FUNCTION 14582ee2c FUN_14582ee2c body=199 status=ok
// SIG undefined FUN_14582ee2c(void)

undefined8 * FUN_14582ee2c(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f3b580;
  param_1[3] = param_2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  FUN_1411b3362(param_1,1);
  FUN_1411b3456(param_1,1);
  return param_1;
}



// FUNCTION 14582eef4 FUN_14582eef4 body=214 status=ok
// SIG undefined FUN_14582eef4(void)

void FUN_14582eef4(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    FUN_141040b84(local_48);
    puVar1 = (undefined1 *)(param_1 + 400);
    if (local_48 != puVar1) {
      FUN_14582f14e(puVar1,local_48);
    }
    FUN_141082b5c(local_40,0);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    FUN_1411b328a(puVar1,uVar3);
    if (0 < (int)uVar3) {
      uVar2 = 0;
      do {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                (ulonglong)(uVar2 & 0x1ff) * 4) = param_2;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    *(int *)(param_1 + 0x1b0) = param_2 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582efcc FUN_14582efcc body=77 status=ok
// SIG undefined FUN_14582efcc(void)

undefined8 * FUN_14582efcc(undefined8 *param_1,undefined8 param_2)

{
  FUN_141224904(param_1 + 1);
  FUN_141040b84(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14582f01a(param_1 + 8);
  FUN_141040b84(param_1 + 0xb);
  FUN_141040b84(param_1 + 0xe);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14582f01a FUN_14582f01a body=97 status=ok
// SIG undefined FUN_14582f01a(void)

undefined8 * FUN_14582f01a(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_14582f07c(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 14582f07c FUN_14582f07c body=132 status=ok
// SIG undefined FUN_14582f07c(void)

void FUN_14582f07c(longlong param_1,int param_2)

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



// FUNCTION 14582f100 FUN_14582f100 body=77 status=ok
// SIG undefined FUN_14582f100(void)

undefined8 * FUN_14582f100(undefined8 *param_1,undefined8 param_2)

{
  FUN_141224904(param_1 + 1);
  FUN_141040b84(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14582f01a(param_1 + 8);
  FUN_141040b84(param_1 + 0xb);
  FUN_141040b84(param_1 + 0xe);
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14582f14e FUN_14582f14e body=70 status=ok
// SIG undefined FUN_14582f14e(void)

longlong FUN_14582f14e(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_141082b5c(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_14582f194(param_1,param_2);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 14582f194 FUN_14582f194 body=148 status=ok
// SIG undefined FUN_14582f194(void)

undefined8 * FUN_14582f194(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14582f228(param_1 + 1,param_2 + 1);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  iVar1 = *(int *)(param_2 + 2);
  *(uint *)(param_2 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x14) < iVar1 + 1U) {
    FUN_1411b3bbe(param_2 + 1,iVar1);
  }
  *(void **)(param_2[1] + (longlong)iVar1 * 8) = _Dst;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 14582f228 FUN_14582f228 body=79 status=ok
// SIG undefined FUN_14582f228(void)

longlong * FUN_14582f228(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_141082b5c(param_1,0);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14582f278 FUN_14582f278 body=457 status=ok
// SIG undefined FUN_14582f278(void)

undefined4 FUN_14582f278(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  FUN_14582f63e(param_1 + 8);
  FUN_1411b3fe4(param_1 + 0x38);
  FUN_14582f442(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_146c40926(param_1 + 0x60,0);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_146c40926(param_1 + 0x80,0);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_146c409ee(param_1 + 0xa0,0);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  FUN_14582f602(param_1 + 0xb8);
  FUN_14582f522(param_1 + 0x128);
  FUN_1411b3fe4(param_1 + 0x158);
  FUN_14582f442(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x170) = 0;
  FUN_14582f522(param_1 + 0x178);
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_141082b5c(param_1 + 0x198,0);
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  FUN_14582f71e(param_1 + 0x1b8);
  FUN_1411b3fe4(param_1 + 0x1e8);
  FUN_14582f442(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x200) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x208);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x214) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x218) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14582f442 FUN_14582f442 body=116 status=ok
// SIG undefined FUN_14582f442(void)

void FUN_14582f442(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_14582f4b6(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x400);
    memset(_Dst,0,0x400);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_141224966(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 14582f4b6 FUN_14582f4b6 body=108 status=ok
// SIG undefined FUN_14582f4b6(void)

void FUN_14582f4b6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146c411be(param_1);
    return;
  }
  return;
}



// FUNCTION 14582f522 FUN_14582f522 body=116 status=ok
// SIG undefined FUN_14582f522(void)

void FUN_14582f522(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  undefined8 uVar2;
  
  puVar1 = param_1 + 1;
  FUN_14582f596(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    uVar2 = 0;
    _Dst = (void *)FUN_14001cc68(0x1800,0x10);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x1800);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_1411b3d20(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 14582f596 FUN_14582f596 body=108 status=ok
// SIG undefined FUN_14582f596(void)

void FUN_14582f596(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146c4e488(param_1);
    return;
  }
  return;
}



// FUNCTION 14582f602 FUN_14582f602 body=60 status=ok
// SIG undefined FUN_14582f602(void)

void FUN_14582f602(longlong param_1)

{
  FUN_1411b3fe4();
  FUN_1411b3fe4(param_1 + 0x18);
  FUN_1411b3fe4(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_1411b3fe4(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  return;
}



// FUNCTION 14582f63e FUN_14582f63e body=116 status=ok
// SIG undefined FUN_14582f63e(void)

void FUN_14582f63e(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_14582f6b2(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x3000);
    memset(_Dst,0,0x3000);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_141040c48(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 14582f6b2 FUN_14582f6b2 body=108 status=ok
// SIG undefined FUN_14582f6b2(void)

void FUN_14582f6b2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146bee27a(param_1);
    return;
  }
  return;
}



// FUNCTION 14582f71e FUN_14582f71e body=116 status=ok
// SIG undefined FUN_14582f71e(void)

void FUN_14582f71e(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  undefined8 uVar2;
  
  puVar1 = param_1 + 1;
  FUN_14582f792(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    uVar2 = 0;
    _Dst = (void *)FUN_14001cc68(0x2000,0x10);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x2000);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_1411b3e82(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 14582f792 FUN_14582f792 body=108 status=ok
// SIG undefined FUN_14582f792(void)

void FUN_14582f792(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146c4e52a(param_1);
    return;
  }
  return;
}



// FUNCTION 14582f7fe FUN_14582f7fe body=102 status=ok
// SIG undefined FUN_14582f7fe(void)

void FUN_14582f7fe(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_14582f864(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14582f864 FUN_14582f864 body=120 status=ok
// SIG undefined FUN_14582f864(void)

void FUN_14582f864(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x38;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x34 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x38 + 0x30);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x30);
  FUN_1411b40c4(*param_1 + lVar2 + 8);
  FUN_14582f8dc(param_1,param_2);
  return;
}



// FUNCTION 14582f8dc FUN_14582f8dc body=116 status=ok
// SIG undefined FUN_14582f8dc(void)

void FUN_14582f8dc(longlong *param_1,int param_2)

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



// FUNCTION 14582f954 FUN_14582f954 body=64 status=ok
// SIG undefined FUN_14582f954(void)

void FUN_14582f954(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14582f994(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 14582f994 FUN_14582f994 body=95 status=ok
// SIG undefined FUN_14582f994(void)

ulonglong FUN_14582f994(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 14582fa02 FUN_14582fa02 body=40 status=ok
// SIG undefined FUN_14582fa02(void)

undefined8 FUN_14582fa02(undefined8 param_1,int param_2)

{
  FUN_1411b55a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582fa2a FUN_14582fa2a body=98 status=ok
// SIG undefined FUN_14582fa2a(void)

void FUN_14582fa2a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b565c(puVar1);
  *puVar1 = &PTR_FUN_14bd0a0f0;
  puVar1[0x21] = &PTR_FUN_14bd0a400;
  puVar1[0x22] = &PTR_FUN_14bd0a430;
  puVar1[0x23] = &PTR_FUN_14bd0a450;
  puVar1[0x24] = &PTR_FUN_14bd0a470;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  return;
}



// FUNCTION 14582fa92 FUN_14582fa92 body=117 status=ok
// SIG undefined FUN_14582fa92(void)

void FUN_14582fa92(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a85dcb0;
  puVar1[5] = &PTR_FUN_14a85e290;
  puVar1[6] = &PTR_LAB_14a85e2d0;
  puVar1[0x55] = &PTR_FUN_14a85e320;
  FUN_144894d4c(puVar1 + 0x56);
  *(undefined8 *)((longlong)puVar1 + 0xb74) = 0x3f80000042c80000;
  *(undefined4 *)(puVar1 + 0x16e) = 0;
  *(byte *)((longlong)puVar1 + 0xb7c) = *(byte *)((longlong)puVar1 + 0xb7c) | 3;
  return;
}



// FUNCTION 14582fb07 FUN_14582fb07 body=49 status=ok
// SIG undefined FUN_14582fb07(void)

longlong FUN_14582fb07(void)

{
  if (DAT_14c99e0d8 == 0) {
    FUN_140f50038(&DAT_14c99e0d8,&PTR_s__Script_UniversalObjectLocator_149fcc858);
  }
  return DAT_14c99e0d8;
}



// FUNCTION 14582fb3e FUN_14582fb3e body=2618 status=ok
// SIG undefined FUN_14582fb3e(void)

undefined8 * FUN_14582fb3e(longlong *param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined *puVar7;
  longlong *plVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_a8 [35];
  byte local_85;
  uint local_84;
  longlong local_80;
  longlong *local_78;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  ushort local_5a;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_3;
  if ((param_3 == (longlong *)0x0) ||
     (((plVar6 = (longlong *)(**(code **)(*param_1 + 0x348))(param_1,param_4),
       plVar6 == (longlong *)0x0 || (plVar6[8] == 0)) &&
      (plVar6 = (longlong *)(**(code **)(*local_78 + 0x348))(local_78,param_4),
      plVar6 == (longlong *)0x0)))) {
    *param_2 = 0;
    goto LAB_14583026a;
  }
  if (*(code **)(*plVar6 + 0x288) == FUN_144927896) {
    plVar8 = (longlong *)plVar6[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)plVar6[8];
    }
    (**(code **)(*plVar8 + 0x410))(plVar8,&local_58);
  }
  else {
    (**(code **)(*plVar6 + 0x288))(plVar6,&local_58);
  }
  uVar11 = (ushort)local_58 & 0x400;
  local_80 = (longlong)param_4;
  local_64 = param_4;
  if (*(code **)(*plVar6 + 0x238) == FUN_144b2561a) {
    if (((*(byte *)(plVar6[8] + 0x1d0) & 4) == 0) ||
       ((1 < *(int *)((longlong)plVar6 + 0x24) && (iVar5 = FUN_147cee33b(), iVar5 == 1))))
    goto LAB_14582fc1a;
LAB_14583043b:
    bVar4 = FUN_147cee4d5(*(undefined2 *)(&DAT_14ca85070 + local_80 * 2));
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x238))(plVar6);
    if (cVar3 != '\0') goto LAB_14583043b;
LAB_14582fc1a:
    bVar4 = 0;
  }
  local_68 = uVar11;
  if (*(code **)(*plVar6 + 0x288) == FUN_144927896) {
    plVar8 = (longlong *)plVar6[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)plVar6[8];
    }
    (**(code **)(*plVar8 + 0x410))(plVar8,&local_5a);
  }
  else {
    (**(code **)(*plVar6 + 0x288))(plVar6,&local_5a);
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = CONCAT44(uStack_50._4_4_,2);
  uVar17 = 0;
  FUN_14470b5ae(&local_58,2);
  *local_58 = 0x400000001;
  if ((longlong)(int)uStack_50 != 0) {
    lVar14 = 0;
    do {
      if ((local_5a >> (*(uint *)((longlong)local_58 + lVar14) & 0x1f) & 1) != 0) {
        if (plVar6[2] != 0) {
          uVar17 = (byte)(*(char *)(*(longlong *)(plVar6[2] + 0x28) + 0x247) * '\x02') & 0xffffff10;
          goto LAB_14582fcd3;
        }
        break;
      }
      lVar14 = lVar14 + 4;
    } while ((longlong)(int)uStack_50 * 4 != lVar14);
    uVar17 = 0;
  }
LAB_14582fcd3:
  bVar12 = param_4 < 2 & (byte)(uVar11 >> 10);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_6c = uVar17;
  local_84 = (**(code **)(*param_1 + 0x408))(param_1);
  bVar20 = 1 < local_84;
  if (*(code **)(*plVar6 + 0x30) == (code *)&LAB_14473a65e) {
    uVar11 = (uint)*(byte *)(plVar6[8] + 0x128);
  }
  else {
    uVar11 = (**(code **)(*plVar6 + 0x30))(plVar6);
  }
  bVar10 = bVar20 | bVar12 | bVar4;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x410))(param_1,param_2);
  local_60 = 0;
  if (plVar6[2] == 0) {
    bVar19 = 0;
  }
  else {
    uVar17 = *(uint *)(*(longlong *)(plVar6[2] + 0x28) + 0x238);
    bVar19 = (byte)(uVar17 >> 0xd) & 1 | (byte)(uVar17 >> 0x18) & 2;
  }
  *(byte *)((longlong)param_2 + 7) = bVar19;
  local_85 = (uVar11 == 1) << 2;
  *(byte *)((longlong)param_2 + 6) = local_85;
  bVar13 = ~bVar10;
  if ((*(byte *)(local_78 + 0x25) & 0xfb) != 1 && (bVar13 & 1) == 0) {
    if (local_64 < 2) {
      local_60 = *(byte *)((longlong)local_78 + 0x18c) & 1;
    }
    else {
      local_60 = (**(code **)(*plVar6 + 0x4b0))(plVar6);
    }
  }
  uVar18 = (ulonglong)*(ushort *)(&DAT_14ca85070 + local_80 * 2);
  pcVar1 = *(code **)(*plVar6 + 800);
  if (pcVar1 == FUN_144b25530) {
    bVar21 = *(char *)(plVar6[8] + 0x178) == '\v';
    pcVar1 = *(code **)(*plVar6 + 0x3f0);
    if (pcVar1 == FUN_144927938) {
      cVar3 = FUN_14473b0f0();
    }
    else {
      cVar3 = (*pcVar1)(plVar6);
    }
    if (cVar3 != '\0') {
      iVar5 = (**(code **)(*plVar6 + 0x270))(plVar6);
      bVar21 = iVar5 == 7;
    }
    bVar22 = true;
    if ((*(uint *)((longlong)&DAT_14ca814d0 + uVar18 * 0x3c) & 0x800008) != 8) {
      bVar22 = (&DAT_14ca814b8)[uVar18 * 0xf] == 1;
    }
    if (!(bool)(bVar21 & bVar22)) goto LAB_14582fe2f;
LAB_145830491:
    bVar15 = 0x80;
  }
  else {
    cVar3 = (*pcVar1)(plVar6,uVar18);
    if (cVar3 != '\0') goto LAB_145830491;
LAB_14582fe2f:
    cVar3 = FUN_1449279a5();
    bVar15 = cVar3 << 7;
  }
  lVar14 = plVar6[2];
  if (lVar14 == 0) {
    bVar16 = 0;
  }
  else {
    bVar16 = *(byte *)(*(longlong *)(lVar14 + 0x28) + 0x242);
  }
  if (bVar16 < 2) {
    bVar16 = 1;
  }
  bVar9 = 9;
  if (bVar16 < 9) {
    bVar9 = bVar16;
  }
  local_84 = 1 << (bVar9 - 1 & 0x1f);
  if (lVar14 == 0) {
    bVar16 = 0;
  }
  else {
    bVar16 = *(byte *)(*(longlong *)(lVar14 + 0x28) + 0x243);
  }
  uVar11 = 1;
  if (1 < bVar16) {
    uVar11 = (uint)bVar16;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar11);
  bVar13 = (bVar13 & 1) * '\x02';
  *(byte *)((longlong)param_2 + 4) = bVar13;
  cVar3 = (**(code **)(*param_1 + 0x498))(param_1);
  bVar13 = cVar3 << 2 | bVar13;
  *(byte *)((longlong)param_2 + 4) = bVar13;
  pcVar1 = *(code **)(*plVar6 + 0x2b0);
  if (pcVar1 == FUN_1456bdbae) {
    if ((*(byte *)(plVar6[8] + 0x1c2) & 0x10) != 0) {
      pcVar1 = *(code **)(*plVar6 + 0x270);
      if (pcVar1 == (code *)&LAB_1447f82f4) {
        plVar8 = (longlong *)plVar6[9];
        if (plVar8 == (longlong *)0x0) {
          uVar11 = (**(code **)(*(longlong *)plVar6[8] + 0x408))();
        }
        else {
          uVar11 = (**(code **)(*plVar8 + 0x408))(plVar8);
        }
      }
      else {
        uVar11 = (*pcVar1)(plVar6);
      }
      if (1 < uVar11) goto LAB_14583030e;
    }
LAB_14582feef:
    bVar16 = 0;
  }
  else {
    cVar3 = (*pcVar1)(plVar6);
    if (cVar3 == '\0') goto LAB_14582feef;
LAB_14583030e:
    bVar16 = 8;
  }
  bVar16 = bVar16 | bVar13;
  *(byte *)((longlong)param_2 + 4) = bVar16;
  if (local_64 < 3) {
LAB_14582ff2b:
    bVar13 = 0;
  }
  else {
    if (*(code **)(*plVar6 + 0x1d8) == (code *)&LAB_1456bd9d0) {
      bVar13 = *(byte *)(plVar6[8] + 0x1c4) & 2;
    }
    else {
      bVar13 = (**(code **)(*plVar6 + 0x1d8))(plVar6);
    }
    if (bVar13 == 0) goto LAB_14582ff2b;
    cVar3 = FUN_144a7cdf8(plVar6);
    bVar13 = cVar3 << 4;
  }
  bVar13 = bVar13 | bVar16;
  *(byte *)((longlong)param_2 + 4) = bVar13;
  if (*(code **)(*plVar6 + 0x38) == FUN_144765e18) {
    plVar8 = (longlong *)plVar6[9];
    bVar16 = (byte)local_6c;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)plVar6[8];
    }
    cVar3 = (**(code **)(*plVar8 + 0x420))();
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
    bVar16 = (byte)local_6c;
  }
  bVar12 = bVar20 | bVar12 | bVar4 & 1;
  *(byte *)((longlong)param_2 + 4) = bVar15 | cVar3 << 5 | (local_60 == 1 & bVar12) << 6 | bVar13;
  bVar4 = (local_60 == 0 & bVar12) * '\x02' | local_60 == 2;
  *(byte *)((longlong)param_2 + 5) = bVar4;
  if (bVar12 == 0) {
    *(byte *)((longlong)param_2 + 7) = bVar19;
    bVar12 = 0;
  }
  else {
    bVar19 = (*(byte *)(local_78 + 0x38) & 1) << 3 | bVar19;
    *(byte *)((longlong)param_2 + 7) = bVar19;
    if (plVar6[2] == 0) {
      bVar12 = 0;
    }
    else {
      bVar12 = (*(byte *)(*(longlong *)(plVar6[2] + 0x28) + 0x238) & 1) << 2;
    }
  }
  bVar12 = bVar12 | bVar4;
  *(byte *)((longlong)param_2 + 5) = bVar12;
  if (*(code **)(*plVar6 + 0x58) == (code *)&LAB_1456bd9e0) {
    plVar8 = (longlong *)plVar6[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)plVar6[8];
    }
    cVar3 = (**(code **)(*plVar8 + 0x488))();
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  bVar4 = local_85;
  bVar12 = cVar3 << 3 | bVar12;
  *(byte *)((longlong)param_2 + 5) = bVar12;
  lVar14 = plVar6[2];
  if (lVar14 == 0) {
    bVar13 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar14 + 0x28);
    bVar15 = *(byte *)(lVar2 + 0x246);
    bVar13 = bVar15 * '\x02';
    bVar12 = bVar13 & 0x20 | bVar15 >> 1 & 0x10 | bVar12;
    *(byte *)((longlong)param_2 + 5) = bVar12;
    bVar12 = *(char *)(lVar2 + 0x247) * '\x02' & 0x40U | bVar12;
    bVar13 = bVar13 & 0x80;
  }
  *(byte *)((longlong)param_2 + 5) = bVar12 | bVar13;
  if (*(code **)(*plVar6 + 0x298) == (code *)&LAB_1456bd99c) {
    uVar11 = (uint)*(byte *)(plVar6[8] + 0x18b);
  }
  else {
    uVar11 = (**(code **)(*plVar6 + 0x298))(plVar6);
    lVar14 = plVar6[2];
  }
  bVar4 = (bVar10 & (uVar11 & 0xfffffffe) == 4) << 3 | bVar4;
  *(byte *)((longlong)param_2 + 6) = bVar4;
  if (lVar14 == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = (*(byte *)(*(longlong *)(lVar14 + 0x28) + 0x238) & 2) << 3;
  }
  bVar12 = bVar12 | bVar4;
  *(byte *)((longlong)param_2 + 6) = bVar12;
  if (*(code **)(*plVar6 + 0xf8) == (code *)&LAB_147bc0ab6) {
    cVar3 = *(char *)(plVar6[8] + 0x128) == '\x03';
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    lVar14 = plVar6[2];
  }
  uVar11 = local_84;
  bVar12 = cVar3 << 7 | bVar12;
  *(byte *)((longlong)param_2 + 6) = bVar12;
  if (lVar14 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)(*(longlong *)(lVar14 + 0x28) + 0x246) >> 5 & 4;
  }
  bVar12 = (byte)((local_68 & 0xffff) >> 4) | (*(byte *)((longlong)local_78 + 0x1d7) & 4) << 3 |
           bVar12;
  *(byte *)((longlong)param_2 + 6) = bVar12;
  *(byte *)((longlong)param_2 + 7) = bVar19 | bVar16 | bVar4;
  lVar14 = *plVar6;
  if (*(code **)(lVar14 + 0x408) == (code *)&LAB_1456bd9a8) {
    iVar5 = *(int *)(plVar6[8] + 400);
  }
  else {
    iVar5 = (**(code **)(lVar14 + 0x408))(plVar6);
    lVar14 = *plVar6;
  }
  *(byte *)((longlong)param_2 + 6) = bVar12 | 0 < iVar5;
  if (*(code **)(lVar14 + 0x458) == FUN_1456cd7c0) {
    if (*(code **)(lVar14 + 0x4c0) == (code *)&LAB_14473a694) {
      plVar8 = (longlong *)plVar6[9];
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)plVar6[8];
        goto LAB_14583033f;
      }
LAB_145830185:
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      puVar7 = (undefined *)(**(code **)(*plVar8 + 0x2d0))();
    }
    else {
      plVar8 = (longlong *)(**(code **)(lVar14 + 0x4c0))(plVar6);
LAB_14583033f:
      if (plVar8 != (longlong *)0x0) goto LAB_145830185;
      puVar7 = &DAT_14caea5a0;
    }
    bVar4 = (puVar7[0x460] & 0x40) >> 6;
  }
  else {
    bVar4 = (**(code **)(lVar14 + 0x458))(plVar6);
  }
  *(byte *)((longlong)param_2 + 6) = bVar12 & 0xfd | 0 < iVar5 | bVar4 * '\x02';
  *(char *)((longlong)param_2 + 3) = (char)uVar11;
  *(char *)((longlong)param_2 + 2) = (char)local_80;
  if (plVar6[2] == 0) {
    bVar12 = *(byte *)((longlong)param_2 + 4) & 0xfe;
    bVar4 = 0;
  }
  else {
    lVar14 = *(longlong *)(plVar6[2] + 0x28);
    bVar12 = *(byte *)((longlong)param_2 + 4) & 0xfe | *(char *)(lVar14 + 0x241) == '\x03';
    bVar4 = *(char *)(lVar14 + 0x247) * '\x02' & 0x20;
  }
  *(byte *)((longlong)param_2 + 4) = bVar12;
  bVar12 = *(byte *)((longlong)param_2 + 7);
  *(byte *)((longlong)param_2 + 7) = bVar12 & 0xdf | bVar4;
  if (*(code **)(*plVar6 + 0xc0) == (code *)&LAB_147bc0a8c) {
    plVar8 = (longlong *)plVar6[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)plVar6[8];
    }
    cVar3 = (**(code **)(*plVar8 + 0x448))();
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  }
  bVar4 = bVar12 & 0x9f | bVar4 | cVar3 << 6;
  *(byte *)((longlong)param_2 + 7) = bVar4;
  if (*(code **)(*plVar6 + 200) == (code *)&LAB_1456bd9b4) {
    plVar8 = (longlong *)plVar6[9];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)plVar6[8];
    }
    cVar3 = (**(code **)(*plVar8 + 0x450))();
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 200))(plVar6);
  }
  *(byte *)((longlong)param_2 + 7) = bVar4 & 0x7f | cVar3 << 7;
LAB_14583026a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145830588 FUN_145830588 body=31 status=ok
// SIG undefined FUN_145830588(void)

undefined8 FUN_145830588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458305c4 FUN_1458305c4 body=31 status=ok
// SIG undefined FUN_1458305c4(void)

undefined8 FUN_1458305c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458305f4 FUN_1458305f4 body=44 status=ok
// SIG undefined FUN_1458305f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458305f4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb75514 = _DAT_14cb75514 + -1;
  *param_1 = DAT_14cb75508;
  DAT_14cb75508 = param_1;
  return;
}



// FUNCTION 145830654 FUN_145830654 body=158 status=ok
// SIG undefined FUN_145830654(void)

bool FUN_145830654(longlong param_1,undefined8 param_2)

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



// FUNCTION 1458306f6 FUN_1458306f6 body=152 status=ok
// SIG undefined FUN_1458306f6(void)

longlong FUN_1458306f6(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_14583078e(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x600000000;
  FUN_1456bd906(param_1,0x100);
  FUN_1456bd906(param_1 + 0x20,0x100);
  FUN_1411b683e(param_1 + 0x60,0x100);
  FUN_1411b6534(param_1);
  return param_1;
}



// FUNCTION 14583078e FUN_14583078e body=102 status=ok
// SIG undefined FUN_14583078e(void)

undefined8 * FUN_14583078e(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14473de44(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  param_1[10] = &DAT_100000001;
  FUN_144718544(param_1 + 0xb);
  return param_1;
}



// FUNCTION 1458307f4 FUN_1458307f4 body=68 status=ok
// SIG undefined FUN_1458307f4(void)

void FUN_1458307f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411b71a8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b017840;
  puVar1[5] = &PTR_FUN_14b017af0;
  puVar1[10] = &PTR_FUN_14b017b20;
  puVar1[0xb] = &PTR_FUN_14b017b50;
  return;
}



// FUNCTION 145830838 FUN_145830838 body=48 status=ok
// SIG undefined FUN_145830838(void)

void FUN_145830838(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 145830868 FUN_145830868 body=648 status=ok
// SIG undefined FUN_145830868(void)

void FUN_145830868(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined1 *puStack_b0;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x178) == '\x03') {
      FUN_1411b7b50(param_1,param_2);
    }
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_145830af2(local_98,param_2 + 0x2808);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar5 = 0;
    puStack_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar5 = local_70;
    }
    local_c8 = local_a8;
    uVar1 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = puStack_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = local_98;
    if ((local_c8._4_4_ != iVar5) || (puStack_b0 != local_88)) {
      iVar3 = local_c8._4_4_;
      local_c8 = uVar1;
      do {
        plVar4 = (longlong *)(*local_e0 + (longlong)iVar3 * 0x18);
        local_b8 = *plVar4;
        puStack_b0 = (undefined1 *)plVar4[1];
        cVar2 = FUN_144729dda(&puStack_b0);
        if (cVar2 != '\0') {
          plVar4 = (longlong *)FUN_14479d2ce(&puStack_b0);
          (**(code **)(*plVar4 + 0x5c8))(plVar4,0);
        }
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar3 = local_c8._4_4_;
      } while (((local_c8._4_4_ != iVar5) || (local_d0 != local_88)) ||
              (uVar1 = local_c8, local_e0 != local_98));
    }
    local_c8 = uVar1;
    local_e8 = 0;
    FUN_14485c47a(&local_e8,param_2);
    FUN_145830be4(param_1 + 0x150,local_e8);
    local_f0 = 0;
    FUN_14485c47a(&local_f0,param_2);
    FUN_14088c474(param_1 + 0x1a0,local_f0);
    local_b8 = 0;
    FUN_14485c47a(&local_b8,param_2);
    local_e0 = &local_b8;
    FUN_1411b73de(param_1 + 0x128,&local_e0);
    local_b8 = 0;
    FUN_14485c47a(&local_b8,param_2);
    local_e0 = &local_b8;
    FUN_1411b73de(param_1 + 0x138,&local_e0);
    FUN_140457ffc(param_2 + 0x2a90,param_2);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1411b79ea(local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145830af2 FUN_145830af2 body=120 status=ok
// SIG undefined FUN_145830af2(void)

longlong FUN_145830af2(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145830b6a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145830b6a FUN_145830b6a body=121 status=ok
// SIG undefined FUN_145830b6a(void)

undefined8 * FUN_145830b6a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1411b7a22(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145830be4 FUN_145830be4 body=270 status=ok
// SIG undefined FUN_145830be4(void)

void FUN_145830be4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    lVar2 = (longlong)
            *(int *)((longlong)plVar3 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (lVar2 != -1) {
      lVar4 = *param_1;
      lVar2 = lVar2 * 0x60;
      local_40 = *(undefined8 *)(lVar4 + lVar2);
      local_48 = param_2;
      cVar1 = FUN_14088b310();
      if (cVar1 == '\0') {
        lVar4 = lVar4 + lVar2;
        do {
          if ((longlong)*(int *)(lVar4 + 0x58) == -1) goto LAB_145830ce5;
          lVar2 = (longlong)*(int *)(lVar4 + 0x58) * 0x60;
          lVar4 = *param_1 + lVar2;
          local_40 = *(undefined8 *)(*param_1 + lVar2);
          local_48 = param_2;
          cVar1 = FUN_14088b310(&local_40,&local_48);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_145830ce5:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145830dbc FUN_145830dbc body=122 status=ok
// SIG undefined FUN_145830dbc(void)

void FUN_145830dbc(longlong *param_1,int param_2)

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



// FUNCTION 145830e36 FUN_145830e36 body=93 status=ok
// SIG undefined FUN_145830e36(void)

undefined8 * FUN_145830e36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1411b8283(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148f1236a(param_1,iVar1);
      FUN_148f123dc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145830e94 FUN_145830e94 body=230 status=ok
// SIG undefined FUN_145830e94(void)

undefined8 FUN_145830e94(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x1f0) == 0) {
      puVar2 = (undefined8 *)(lVar1 + 0x458);
    }
    else {
      puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
    }
    local_20 = *(undefined8 *)(param_1 + 0x2b20);
    FUN_144a61814(*puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145830f7e FUN_145830f7e body=142 status=ok
// SIG undefined FUN_145830f7e(void)

undefined8 FUN_145830f7e(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_14126eb14(), iVar3 != -1)) {
    lVar2 = *param_1;
    lVar1 = lVar2 + (longlong)iVar3 * 0xa0;
    FUN_1411b822c(lVar1 + 0x38);
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0xa0),param_3,0x98);
    FUN_145867cda(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 14583100c FUN_14583100c body=214 status=ok
// SIG undefined FUN_14583100c(void)

undefined8 * FUN_14583100c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1447715ec(param_1 + 2,param_2 + 2);
  param_1[7] = param_2[7];
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar2 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_14107c57c(param_1 + 8,iVar1,0);
    FUN_14107c654(param_1[8],uVar2,iVar1);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar2 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_148f1236a(param_1 + 10,iVar1,0);
    FUN_148f123dc(param_1[10],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1458310e2 FUN_1458310e2 body=248 status=ok
// SIG undefined FUN_1458310e2(void)

int * FUN_1458310e2(longlong *param_1,int *param_2)

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
      FUN_1413d87fe(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 1458311da FUN_1458311da body=84 status=ok
// SIG undefined FUN_1458311da(void)

void FUN_1458311da(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  FUN_1411b9bf0(param_2);
  *param_2 = &PTR_FUN_14b470310;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 14583122e FUN_14583122e body=225 status=ok
// SIG undefined FUN_14583122e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14583122e(void)

{
  _DAT_14ca3faa0 = L"BASE";
  DAT_14ca3faca = 4;
  _DAT_14ca3faa8 = FUN_1411cad6c();
  _DAT_14ca3fab0 = DAT_14ca3fa48;
  _DAT_14ca3fab8 = &LAB_14682652b;
  DAT_14ca3fa48 = &DAT_14ca3faa0;
  DAT_14ca3fa9d = DAT_14ca3fa9d + '\x01';
  _DAT_14ca3fac0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca3faa8 + 100) != '\0') {
    DAT_14ca3fa9e = DAT_14ca3fa9e + '\x01';
  }
  _DAT_14ca3fad0 = L"BASE";
  DAT_14ca3fafa = 4;
  _DAT_14ca3fad8 = FUN_141092e92();
  _DAT_14ca3fae0 = DAT_14ca3fa48;
  _DAT_14ca3fae8 = &LAB_14682652b;
  DAT_14ca3fa48 = &DAT_14ca3fad0;
  DAT_14ca3fa9d = DAT_14ca3fa9d + '\x01';
  _DAT_14ca3faf0 = 0x100000000;
  if (*(char *)(_DAT_14ca3fad8 + 100) != '\0') {
    DAT_14ca3fa9e = DAT_14ca3fa9e + '\x01';
  }
  return;
}



// FUNCTION 145831310 FUN_145831310 body=218 status=ok
// SIG undefined FUN_145831310(void)

void FUN_145831310(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5,char param_6)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a8b87e(param_1,&local_40);
  local_48 = &local_40;
  if (param_6 == '\0') {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    FUN_1411bbb4e(&local_48,0x20,param_2);
  }
  cVar1 = FUN_1411bbb4e(&local_48,0x2e,param_3);
  if (cVar1 == '\0') {
    *param_3 = CONCAT44(uStack_3c,local_40);
    param_3[1] = CONCAT44(uStack_34,uStack_38);
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    cVar1 = FUN_1411bbb4e(&local_48,0x3a,param_4);
    if (cVar1 == '\0') {
      *param_4 = CONCAT44(uStack_3c,local_40);
      param_4[1] = CONCAT44(uStack_34,uStack_38);
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
    }
  }
  *param_5 = local_40;
  param_5[1] = uStack_3c;
  param_5[2] = uStack_38;
  param_5[3] = uStack_34;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458313ec FUN_1458313ec body=83 status=ok
// SIG undefined FUN_1458313ec(void)

undefined8 FUN_1458313ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_145831440(param_2 + -0x18,param_3 + -0x18);
      FUN_144a787a6(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145831440 FUN_145831440 body=84 status=ok
// SIG undefined FUN_145831440(void)

longlong * FUN_145831440(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1458314a2 FUN_1458314a2 body=5518 status=ok
// SIG undefined FUN_1458314a2(void)

void FUN_1458314a2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_318 [40];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar1 = *param_1;
  FUN_1446ddc76(&local_50,"Colors.Black",1);
  FUN_1411bc70e(uVar1,local_50,&DAT_14c98da98);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_58,"Colors.Title",1);
  FUN_1411bc70e(uVar1,local_58,&DAT_14c98dc8c);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_60,"Colors.WindowBorder",1);
  FUN_1411bc70e(uVar1,local_60,&DAT_14c98dc64);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_68,"Colors.Foldout",1);
  FUN_1411bc70e(uVar1,local_68,&DAT_14c98dbd8);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_70,"Colors.Input",1);
  FUN_1411bc70e(uVar1,local_70,&DAT_14c98dc00);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_78,"Colors.InputOutline",1);
  FUN_1411bc70e(uVar1,local_78,&DAT_14c98dc28);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_80,"Colors.Recessed",1);
  FUN_1411bc70e(uVar1,local_80,&DAT_14c98dc14);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_88,"Colors.Background",1);
  FUN_1411bc70e(uVar1,local_88,&DAT_14c98dc50);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_90,"Colors.Panel",1);
  FUN_1411bc70e(uVar1,local_90,&DAT_14c98db9c);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_98,"Colors.Header",1);
  FUN_1411bc70e(uVar1,local_98,&DAT_14c98dc78);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_a0,"Colors.Dropdown",1);
  FUN_1411bc70e(uVar1,local_a0,&DAT_14c98dbc4);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_a8,"Colors.DropdownOutline",1);
  FUN_1411bc70e(uVar1,local_a8,&DAT_14c98dbb0);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_b0,"Colors.Hover",1);
  FUN_1411bc70e(uVar1,local_b0,&DAT_14c98dae8);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_b8,"Colors.Hover2",1);
  FUN_1411bc70e(uVar1,local_b8,&DAT_14c98dafc);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_c0,"Colors.White",1);
  FUN_1411bc70e(uVar1,local_c0,&DAT_14c98db4c);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_c8,"Colors.White25",1);
  FUN_1411bc70e(uVar1,local_c8,&DAT_14c98dca0);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_d0,"Colors.Highlight",1);
  FUN_1411bc70e(uVar1,local_d0,&DAT_14c98da84);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_d8,"Colors.Foreground",1);
  FUN_1411bc70e(uVar1,local_d8,&DAT_14c98dac0);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_e0,"Colors.ForegroundHover",1);
  FUN_1411bc70e(uVar1,local_e0,&DAT_14c98db38);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_e8,"Colors.ForegroundInverted",1);
  FUN_1411bc70e(uVar1,local_e8,&DAT_14c98dad4);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_f0,"Colors.ForegroundHeader",1);
  FUN_1411bc70e(uVar1,local_f0,&DAT_14c98dcb4);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_f8,"Colors.Select",1);
  FUN_1411bc70e(uVar1,local_f8,&DAT_14c98dcc8);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_100,"Colors.SelectInactive",1);
  FUN_1411bc70e(uVar1,local_100,&DAT_14c98dcdc);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_108,"Colors.SelectParent",1);
  FUN_1411bc70e(uVar1,local_108,&DAT_14c98dcf0);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_110,"Colors.SelectHover",1);
  FUN_1411bc70e(uVar1,local_110,&DAT_14c98dd04);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_118,"Colors.Primary",1);
  FUN_1411bc70e(uVar1,local_118,&DAT_14c98db10);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_120,"Colors.PrimaryHover",1);
  FUN_1411bc70e(uVar1,local_120,&DAT_14c98dbec);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_128,"Colors.PrimaryPress",1);
  FUN_1411bc70e(uVar1,local_128,&DAT_14c98dd18);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_130,"Colors.Secondary",1);
  FUN_1411bc70e(uVar1,local_130,&DAT_14c98dc3c);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_138,"Colors.AccentBlue",1);
  FUN_1411bc70e(uVar1,local_138,&DAT_14c98dd2c);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_140,"Colors.AccentPurple",1);
  FUN_1411bc70e(uVar1,local_140,&DAT_14c98dd40);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_148,"Colors.AccentPink",1);
  FUN_1411bc70e(uVar1,local_148,&DAT_14c98dd54);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_150,"Colors.AccentRed",1);
  FUN_1411bc70e(uVar1,local_150,&DAT_14c98dd68);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_158,"Colors.AccentOrange",1);
  FUN_1411bc70e(uVar1,local_158,&DAT_14c98dd7c);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_160,"Colors.AccentYellow",1);
  FUN_1411bc70e(uVar1,local_160,&DAT_14c98dd90);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_168,"Colors.AccentGreen",1);
  FUN_1411bc70e(uVar1,local_168,&DAT_14c98daac);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_170,"Colors.AccentBrown",1);
  FUN_1411bc70e(uVar1,local_170,&DAT_14c98dda4);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_178,"Colors.AccentBlack",1);
  FUN_1411bc70e(uVar1,local_178,&DAT_14c98ddb8);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_180,"Colors.AccentGray",1);
  FUN_1411bc70e(uVar1,local_180,&DAT_14c98ddcc);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_188,"Colors.AccentWhite",1);
  FUN_1411bc70e(uVar1,local_188,&DAT_14c98dde0);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_190,"Colors.AccentFolder",1);
  FUN_1411bc70e(uVar1,local_190,&DAT_14c98ddf4);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_198,"Colors.Warning",1);
  FUN_1411bc70e(uVar1,local_198,&DAT_14c98db74);
  uVar1 = *param_1;
  FUN_1446ddc76(&local_1a0,"Colors.Error",1);
  FUN_1411bc70e(uVar1,local_1a0,&DAT_14c98db60);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98da98);
  FUN_1446ddc76(&local_1a8,"Brushes.Black",1);
  FUN_1411bc6ae(uVar1,local_1a8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc8c);
  FUN_1446ddc76(&local_1b0,"Brushes.Title",1);
  FUN_1411bc6ae(uVar1,local_1b0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dbd8);
  FUN_1446ddc76(&local_1b8,"Brushes.Foldout",1);
  FUN_1411bc6ae(uVar1,local_1b8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc00);
  FUN_1446ddc76(&local_1c0,"Brushes.Input",1);
  FUN_1411bc6ae(uVar1,local_1c0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc28);
  FUN_1446ddc76(&local_1c8,"Brushes.InputOutline",1);
  FUN_1411bc6ae(uVar1,local_1c8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc14);
  FUN_1446ddc76(&local_1d0,"Brushes.Recessed",1);
  FUN_1411bc6ae(uVar1,local_1d0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc50);
  FUN_1446ddc76(&local_1d8,"Brushes.Background",1);
  FUN_1411bc6ae(uVar1,local_1d8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98db9c);
  FUN_1446ddc76(&local_1e0,"Brushes.Panel",1);
  FUN_1411bc6ae(uVar1,local_1e0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc78);
  FUN_1446ddc76(&local_1e8,"Brushes.Header",1);
  FUN_1411bc6ae(uVar1,local_1e8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dbc4);
  FUN_1446ddc76(&local_1f0,"Brushes.Dropdown",1);
  FUN_1411bc6ae(uVar1,local_1f0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dbb0);
  FUN_1446ddc76(&local_1f8,"Brushes.DropdownOutline",1);
  FUN_1411bc6ae(uVar1,local_1f8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dae8);
  FUN_1446ddc76(&local_200,"Brushes.Hover",1);
  FUN_1411bc6ae(uVar1,local_200,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dafc);
  FUN_1446ddc76(&local_208,"Brushes.Hover2",1);
  FUN_1411bc6ae(uVar1,local_208,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98db4c);
  FUN_1446ddc76(&local_210,"Brushes.White",1);
  FUN_1411bc6ae(uVar1,local_210,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dca0);
  FUN_1446ddc76(&local_218,"Brushes.White25",1);
  FUN_1411bc6ae(uVar1,local_218,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98da84);
  FUN_1446ddc76(&local_220,"Brushes.Highlight",1);
  FUN_1411bc6ae(uVar1,local_220,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dac0);
  FUN_1446ddc76(&local_228,"Brushes.Foreground",1);
  FUN_1411bc6ae(uVar1,local_228,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98db38);
  FUN_1446ddc76(&local_230,"Brushes.ForegroundHover",1);
  FUN_1411bc6ae(uVar1,local_230,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dad4);
  FUN_1446ddc76(&local_238,"Brushes.ForegroundInverted",1);
  FUN_1411bc6ae(uVar1,local_238,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dcb4);
  FUN_1446ddc76(&local_240,"Brushes.ForegroundHeader",1);
  FUN_1411bc6ae(uVar1,local_240,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dcc8);
  FUN_1446ddc76(&local_248,"Brushes.Select",1);
  FUN_1411bc6ae(uVar1,local_248,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dcdc);
  FUN_1446ddc76(&local_250,"Brushes.SelectInactive",1);
  FUN_1411bc6ae(uVar1,local_250,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dcf0);
  FUN_1446ddc76(&local_258,"Brushes.SelectParent",1);
  FUN_1411bc6ae(uVar1,local_258,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd04);
  FUN_1446ddc76(&local_260,"Brushes.SelectHover",1);
  FUN_1411bc6ae(uVar1,local_260,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98db10);
  FUN_1446ddc76(&local_268,"Brushes.Primary",1);
  FUN_1411bc6ae(uVar1,local_268,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dbec);
  FUN_1446ddc76(&local_270,"Brushes.PrimaryHover",1);
  FUN_1411bc6ae(uVar1,local_270,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd18);
  FUN_1446ddc76(&local_278,"Brushes.PrimaryPress",1);
  FUN_1411bc6ae(uVar1,local_278,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dc3c);
  FUN_1446ddc76(&local_280,"Brushes.Secondary",1);
  FUN_1411bc6ae(uVar1,local_280,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd2c);
  FUN_1446ddc76(&local_288,"Brushes.AccentBlue",1);
  FUN_1411bc6ae(uVar1,local_288,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd40);
  FUN_1446ddc76(&local_290,"Brushes.AccentPurple",1);
  FUN_1411bc6ae(uVar1,local_290,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd54);
  FUN_1446ddc76(&local_298,"Brushes.AccentPink",1);
  FUN_1411bc6ae(uVar1,local_298,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd68);
  FUN_1446ddc76(&local_2a0,"Brushes.AccentRed",1);
  FUN_1411bc6ae(uVar1,local_2a0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd7c);
  FUN_1446ddc76(&local_2a8,"Brushes.AccentOrange",1);
  FUN_1411bc6ae(uVar1,local_2a8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dd90);
  FUN_1446ddc76(&local_2b0,"Brushes.AccentYellow",1);
  FUN_1411bc6ae(uVar1,local_2b0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98daac);
  FUN_1446ddc76(&local_2b8,"Brushes.AccentGreen",1);
  FUN_1411bc6ae(uVar1,local_2b8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dda4);
  FUN_1446ddc76(&local_2c0,"Brushes.AccentBrown",1);
  FUN_1411bc6ae(uVar1,local_2c0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98ddb8);
  FUN_1446ddc76(&local_2c8,"Brushes.AccentBlack",1);
  FUN_1411bc6ae(uVar1,local_2c8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98ddcc);
  FUN_1446ddc76(&local_2d0,"Brushes.AccentGray",1);
  FUN_1411bc6ae(uVar1,local_2d0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98dde0);
  FUN_1446ddc76(&local_2d8,"Brushes.AccentWhite",1);
  FUN_1411bc6ae(uVar1,local_2d8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98ddf4);
  FUN_1446ddc76(&local_2e0,"Brushes.AccentFolder",1);
  FUN_1411bc6ae(uVar1,local_2e0,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98db74);
  FUN_1446ddc76(&local_2e8,"Brushes.Warning",1);
  FUN_1411bc6ae(uVar1,local_2e8,uVar2);
  uVar1 = *param_1;
  uVar2 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar2,&DAT_14c98db60);
  FUN_1446ddc76(&local_2f0,"Brushes.Error",1);
  FUN_1411bc6ae(uVar1,local_2f0,uVar2);
  if ((local_48 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145832a32 FUN_145832a32 body=61 status=ok
// SIG undefined FUN_145832a32(void)

void FUN_145832a32(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    lVar1 = param_1;
  }
  FUN_1411bc964(lVar1,*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145832a80 FUN_145832a80 body=606 status=ok
// SIG undefined FUN_145832a80(void)

void FUN_145832a80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0 [7];
  longlong local_68;
  longlong *plStack_60;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_145832ce0();
  if ((lVar3 != 0) && (lVar3 = FUN_1400d6ce6(lVar3), lVar3 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x38);
    FUN_1411bce2a(lVar3,&local_40,plVar1);
    if (local_40 == 0) {
      FUN_1411bce48(lVar3,local_a0,plVar1);
    }
    else {
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      FUN_1401031ac(local_40,0,&local_68);
      FUN_140002266(local_50,L"TextureRenderTarget2D\'%s\'");
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_68 = param_1;
      plStack_60 = local_50;
      plVar4 = (longlong *)FUN_145832dae(param_1);
      lVar3 = *plVar4;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
      *(int *)(lVar3 + 0x1b8) = *(int *)(lVar3 + 0x1b8) + 1;
      FUN_1411bd674(&local_68,lVar3 + 0x80);
      FUN_1411bd674(&local_68,lVar3 + 0x38);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
      plVar4 = (longlong *)FUN_145832d08(param_1);
      lVar3 = *plVar4;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1f0));
      *(int *)(lVar3 + 0x1e8) = *(int *)(lVar3 + 0x1e8) + 1;
      lVar10 = *(longlong *)(lVar3 + 0x38);
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 2;
      if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
        lVar11 = (longlong)*(int *)(lVar3 + 0x40) * 0x448 + lVar10;
        do {
          iVar2 = *(int *)(lVar10 + 0x1f8);
          if (iVar2 == *(int *)(param_1 + 0x40)) {
            if (1 < iVar2) {
              lVar7 = 0;
              while( true ) {
                uVar5 = *(ushort *)(*(longlong *)(lVar10 + 0x1f0) + lVar7);
                uVar6 = (ulonglong)uVar5;
                uVar8 = *(ushort *)(*plVar1 + lVar7);
                if (uVar5 != uVar8) break;
                if (uVar5 == 0) goto LAB_145832c86;
LAB_145832c59:
                lVar7 = lVar7 + 2;
              }
              if ((uVar8 | uVar5) < 0x80) {
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                uVar9 = (ulonglong)uVar8;
                uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_145832c59;
              }
              if (uVar5 != uVar8) goto LAB_145832cb9;
            }
LAB_145832c86:
            iVar2 = *(int *)(lVar10 + 0x1d4);
            if (*(char *)(lVar10 + 0x1d0) == '\0') {
              if (iVar2 == 0) {
                iVar2 = 0;
                goto LAB_145832c97;
              }
            }
            else {
LAB_145832c97:
              *(undefined1 *)(lVar10 + 0x1d0) = 0;
              *(int *)(lVar10 + 0x1d4) = iVar2 + 1;
            }
            FUN_1449a0272(lVar10 + 0x1d8,plStack_60);
          }
          else if (*(int *)(param_1 + 0x40) + iVar2 == 1) goto LAB_145832c86;
LAB_145832cb9:
          lVar10 = lVar10 + 0x448;
        } while (lVar10 != lVar11);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1f0));
      local_a0[0] = local_50[0];
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145832ce0 FUN_145832ce0 body=39 status=ok
// SIG undefined FUN_145832ce0(void)

undefined8 FUN_145832ce0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14126888e();
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x78) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + 0x80);
  }
  return uVar2;
}



// FUNCTION 145832d08 FUN_145832d08 body=165 status=ok
// SIG undefined FUN_145832d08(void)

longlong FUN_145832d08(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
    return local_28 + 0x210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145832dae FUN_145832dae body=165 status=ok
// SIG undefined FUN_145832dae(void)

longlong FUN_145832dae(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14126888e();
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  local_2c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_2c = local_2c >> 0x10 ^ local_2c;
  FUN_1448d5e3c(&local_28);
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
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145832e54 FUN_145832e54 body=1430 status=ok
// SIG undefined FUN_145832e54(void)

void FUN_145832e54(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_1b8 [40];
  undefined8 local_190;
  undefined4 local_188;
  longlong *local_180;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar16 = (**(code **)(*param_1 + 0x180))();
  lVar17 = FUN_14088cdf8(uVar16);
  if (lVar17 != 0) {
    local_b8 = 0;
    local_b0 = 0x8000000000;
    uStack_a8 = 0xffffffff;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    local_58 = 1;
    local_54 = 0;
    uStack_4c = 0;
    FUN_14088c870(&local_118,param_2);
    lVar18 = FUN_1402735c8();
    local_120 = *(undefined8 *)(lVar18 + 0x718);
    FUN_14088cfbe(lVar17,&local_130,&local_118);
    cVar15 = FUN_1411bd768(local_130);
    if (cVar15 == '\0') {
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_178 = (void *)0x0;
      local_170 = *(int *)(param_2 + 1);
      lVar17 = (longlong)local_170;
      pvVar6 = (void *)*param_2;
      local_180 = param_1;
      if (lVar17 == 0) {
        local_16c = 0;
      }
      else {
        FUN_1446dd670(&local_178,local_170,0);
        memcpy(local_178,pvVar6,lVar17 * 2);
      }
      local_148 = *(undefined4 *)(param_2 + 6);
      local_168 = *(undefined4 *)(param_2 + 2);
      uStack_164 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_160 = *(undefined4 *)(param_2 + 3);
      uStack_15c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_158 = *(undefined4 *)(param_2 + 4);
      uStack_154 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_150 = *(undefined4 *)(param_2 + 5);
      uStack_14c = *(undefined4 *)((longlong)param_2 + 0x2c);
      FUN_1446efa72(&local_140,0,6,0x10);
      puVar3 = local_140;
      local_138 = 6;
      *local_140 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar17 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      local_140[2] = lVar18;
      *local_140 = &PTR_FUN_14b9d8c00;
      local_140[3] = 0;
      FUN_14485c47a(local_140 + 3,param_1);
      pvVar6 = local_178;
      puVar3[4] = local_180;
      puVar3[5] = 0;
      lVar17 = (longlong)local_170;
      *(int *)(puVar3 + 6) = local_170;
      if (lVar17 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
      }
      else {
        FUN_1446dd670(puVar3 + 5,local_170,0);
        memcpy((void *)puVar3[5],pvVar6,lVar17 * 2);
      }
      *(undefined4 *)(puVar3 + 0xb) = local_148;
      *(undefined4 *)(puVar3 + 9) = local_158;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_154;
      *(undefined4 *)(puVar3 + 10) = uStack_150;
      *(undefined4 *)((longlong)puVar3 + 0x54) = uStack_14c;
      *(undefined4 *)(puVar3 + 7) = local_168;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_164;
      *(undefined4 *)(puVar3 + 8) = uStack_160;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_15c;
      if (local_178 != (void *)0x0) {
        FUN_1400020a8(local_178);
      }
      iVar5 = (int)param_1[0x21];
      *(uint *)(param_1 + 0x21) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x10c) < iVar5 + 1U) {
        FUN_1458333ec(param_1 + 0x20,iVar5);
      }
      lVar17 = param_1[0x20];
      puVar3 = (undefined8 *)(lVar17 + (longlong)iVar5 * 0x50);
      puVar4 = (undefined8 *)(lVar17 + (longlong)iVar5 * 0x50);
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_144a787a6(puVar4 + 3,param_2);
      *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(param_2 + 6);
      uVar8 = *(undefined4 *)(param_2 + 2);
      uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar10 = *(undefined4 *)(param_2 + 3);
      uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar13 = *(undefined4 *)(param_2 + 5);
      uVar14 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar12;
      *(undefined4 *)(puVar4 + 8) = uVar13;
      *(undefined4 *)((longlong)puVar4 + 0x44) = uVar14;
      *(undefined4 *)(puVar4 + 5) = uVar8;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar9;
      *(undefined4 *)(puVar4 + 6) = uVar10;
      *(undefined4 *)((longlong)puVar4 + 0x34) = uVar11;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_128 + 1) = (int)local_128[1] + 1;
        UNLOCK();
      }
      plVar7 = (longlong *)puVar3[2];
      puVar3[1] = local_130;
      puVar3[2] = local_128;
      if (plVar7 != (longlong *)0x0) {
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
      local_190 = 0;
      local_188 = 0;
      FUN_14009d848(&local_190,&local_140);
      FUN_1411bd7b4(local_130,&local_180,&local_190);
      *puVar3 = local_180;
      FUN_1449db362(&local_140);
    }
    else {
      iVar5 = (int)param_1[0x23];
      *(uint *)(param_1 + 0x23) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x11c) < iVar5 + 1U) {
        FUN_141306894(param_1 + 0x22,iVar5);
      }
      lVar17 = param_1[0x22];
      lVar18 = (longlong)iVar5 * 0x38;
      puVar3 = (undefined8 *)(lVar17 + lVar18);
      *(undefined8 *)(lVar17 + lVar18) = 0;
      iVar5 = *(int *)(param_2 + 1);
      pvVar6 = (void *)*param_2;
      *(int *)(lVar17 + 8 + lVar18) = iVar5;
      if ((longlong)iVar5 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar5,0);
        memcpy((void *)*puVar3,pvVar6,(longlong)iVar5 * 2);
      }
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_2 + 6);
      uVar8 = *(undefined4 *)(param_2 + 2);
      uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar10 = *(undefined4 *)(param_2 + 3);
      uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar13 = *(undefined4 *)(param_2 + 5);
      uVar14 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar3 + 0x24) = uVar12;
      *(undefined4 *)(puVar3 + 5) = uVar13;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar14;
      *(undefined4 *)(puVar3 + 2) = uVar8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uVar9;
      *(undefined4 *)(puVar3 + 3) = uVar10;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar11;
      iVar5 = (int)param_1[0x21];
      *(uint *)(param_1 + 0x21) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0x10c) < iVar5 + 1U) {
        FUN_1458333ec(param_1 + 0x20,iVar5);
      }
      lVar18 = param_1[0x20];
      lVar17 = lVar18 + (longlong)iVar5 * 0x50;
      puVar3 = (undefined8 *)(lVar18 + (longlong)iVar5 * 0x50);
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_144a787a6(puVar3 + 3,param_2);
      *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(param_2 + 6);
      uVar8 = *(undefined4 *)(param_2 + 2);
      uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar10 = *(undefined4 *)(param_2 + 3);
      uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar13 = *(undefined4 *)(param_2 + 5);
      uVar14 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar12;
      *(undefined4 *)(puVar3 + 8) = uVar13;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uVar14;
      *(undefined4 *)(puVar3 + 5) = uVar8;
      *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar9;
      *(undefined4 *)(puVar3 + 6) = uVar10;
      *(undefined4 *)((longlong)puVar3 + 0x34) = uVar11;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_128 + 1) = (int)local_128[1] + 1;
        UNLOCK();
      }
      plVar7 = *(longlong **)(lVar17 + 0x10);
      *(undefined8 *)(lVar17 + 8) = local_130;
      *(longlong **)(lVar17 + 0x10) = local_128;
      if (plVar7 != (longlong *)0x0) {
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
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_128 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
    FUN_140368b56(&local_118);
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458333ec FUN_1458333ec body=147 status=ok
// SIG undefined FUN_1458333ec(void)

void FUN_1458333ec(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145833480 FUN_145833480 body=29 status=ok
// SIG undefined FUN_145833480(void)

void FUN_145833480(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14583349e FUN_14583349e body=73 status=ok
// SIG undefined FUN_14583349e(void)

undefined8 * FUN_14583349e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b47abe0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458334e8 FUN_1458334e8 body=94 status=ok
// SIG undefined FUN_1458334e8(void)

void FUN_1458334e8(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1411bee87(local_20,*(undefined1 *)(param_1 + 0x18));
  FUN_140bfca4e(param_1 + 0x20,&DAT_14cb7bde0,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145833548 FUN_145833548 body=40 status=ok
// SIG undefined FUN_145833548(void)

undefined8 FUN_145833548(undefined8 param_1,int param_2)

{
  FUN_145833570();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145833570 FUN_145833570 body=99 status=ok
// SIG undefined FUN_145833570(void)

void FUN_145833570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b060c60;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1458335d3(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1411c1256(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458335d3 FUN_1458335d3 body=49 status=ok
// SIG undefined FUN_1458335d3(void)

void FUN_1458335d3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145833604 FUN_145833604 body=153 status=ok
// SIG undefined FUN_145833604(void)

void FUN_145833604(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 2;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  return;
}



// FUNCTION 14583369e FUN_14583369e body=119 status=ok
// SIG undefined FUN_14583369e(void)

longlong * FUN_14583369e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14494321d(0x238);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5d0e70;
  FUN_1411c2bae(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 145833724 FUN_145833724 body=40 status=ok
// SIG undefined FUN_145833724(void)

undefined8 FUN_145833724(undefined8 param_1,int param_2)

{
  FUN_14583374c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14583374c FUN_14583374c body=97 status=ok
// SIG undefined FUN_14583374c(void)

void FUN_14583374c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a16f5d0;
  FUN_1458337ad(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458337ad FUN_1458337ad body=54 status=ok
// SIG undefined FUN_1458337ad(void)

void FUN_1458337ad(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1447a1747(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1458337ee FUN_1458337ee body=136 status=ok
// SIG undefined FUN_1458337ee(void)

undefined8 * FUN_1458337ee(undefined8 *param_1)

{
  FUN_145833876();
  *param_1 = &PTR_FUN_14ad3d1b0;
  param_1[5] = 0x3e4ccccd3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3e4ccccd;
  FUN_145833896((longlong)param_1 + 0x34);
  *param_1 = &PTR_FUN_14ad3cd10;
  param_1[0xb] = &DAT_3f8000003f800000;
  param_1[0xc] = &DAT_3f8000003f800000;
  param_1[0xd] = &DAT_3f8000003f800000;
  param_1[0xe] = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x7c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x84) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x8c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 145833876 FUN_145833876 body=32 status=ok
// SIG undefined FUN_145833876(void)

undefined8 * FUN_145833876(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a808a50;
  return param_1;
}



// FUNCTION 145833896 FUN_145833896 body=26 status=ok
// SIG undefined FUN_145833896(void)

void FUN_145833896(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xe0;
  return;
}



// FUNCTION 1458338c0 FUN_1458338c0 body=66 status=ok
// SIG undefined FUN_1458338c0(void)

void FUN_1458338c0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  fVar2 = cosf(*(float *)(param_1 + 6) * 0.017453292);
  *(float *)((longlong)param_1 + 0x34) = fVar2;
  return;
}



// FUNCTION 14583390a FUN_14583390a body=1061 status=ok
// SIG undefined FUN_14583390a(void)

undefined8 * FUN_14583390a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_1410b71be(param_1,uVar1);
  *(undefined2 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2704) = 0;
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  param_1[0x4e5] = 0;
  param_1[0x4e6] = 0;
  *(undefined4 *)(param_1 + 0x4e7) = 0;
  *param_1 = &PTR_FUN_14b68f310;
  param_1[0x72] = &PTR_FUN_14b68f9a0;
  param_1[0x73] = &PTR_FUN_14b68f9c0;
  param_1[0x74] = &PTR_FUN_14b68f9f0;
  param_1[0x75] = &PTR_FUN_14b68fa00;
  param_1[0x76] = &PTR_FUN_14b68fa70;
  param_1[0x77] = &PTR_FUN_14b68faa0;
  param_1[0x78] = &PTR_FUN_14b68fad0;
  param_1[0x7f] = &PTR_FUN_14b68fb80;
  param_1[0x80] = &PTR_FUN_14b68fbf0;
  param_1[0x81] = &PTR_FUN_14b68fc60;
  param_1[0x82] = &PTR_FUN_14b68fc90;
  param_1[0x83] = &PTR_FUN_14b68fcd0;
  param_1[0x84] = &PTR_FUN_14b68fd70;
  param_1[0x85] = &PTR_FUN_14b68fd90;
  param_1[0x89] = &PTR_FUN_14b68fdb0;
  param_1[0x8a] = &PTR_FUN_14b68fe70;
  param_1[0x8b] = &PTR_FUN_14b68fef0;
  param_1[0x8c] = &PTR_FUN_14b68ff40;
  param_1[0x8d] = &PTR_FUN_14b68ff80;
  param_1[0x8e] = &PTR_FUN_14b68ffa0;
  param_1[0x8f] = &PTR_FUN_14b68ffc0;
  param_1[0x90] = &PTR_FUN_14b68ffe0;
  param_1[0x91] = &PTR_FUN_14b690000;
  param_1[0x92] = &PTR_FUN_14b690020;
  param_1[0x93] = &PTR_FUN_14b690040;
  param_1[0x94] = &PTR_FUN_14b690060;
  param_1[0x95] = &PTR_FUN_14b690080;
  param_1[0x96] = &PTR_FUN_14b6900a0;
  param_1[0x34b] = &PTR_FUN_14b6900c0;
  param_1[0x352] = &PTR_FUN_14b6900d0;
  param_1[0x353] = &PTR_FUN_14b690110;
  param_1[0x354] = &PTR_FUN_14b690150;
  param_1[0x355] = &PTR_FUN_14b6901a0;
  param_1[0x356] = &PTR_FUN_14b6901d0;
  param_1[0x359] = &PTR_FUN_14b690210;
  param_1[0x35a] = &PTR_FUN_14b690220;
  param_1[0x35b] = &PTR_FUN_14b690250;
  param_1[0x35c] = &PTR_FUN_14b6902f0;
  param_1[0x4bf] = &PTR_FUN_14b690310;
  param_1[0x4df] = &PTR_FUN_14b690320;
  FUN_1411c3dfa(param_1 + 0x4e8);
  param_1[0x4e8] = &PTR_FUN_14b693830;
  *(undefined1 *)(param_1 + 0x52c) = 0;
  param_1[0x530] = 0;
  param_1[0x52d] = 0;
  param_1[0x52e] = 0;
  *(undefined1 *)(param_1 + 0x52f) = 0;
  *(undefined4 *)(param_1 + 0x531) = 0x6000;
  param_1[0x532] = 0;
  *(undefined4 *)(param_1 + 0x533) = 2;
  *(undefined2 *)((longlong)param_1 + 0x299c) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x534] = DAT_14c8464e0;
  param_1[0x535] = uVar1;
  param_1[0x536] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x537) = 0x45bb8000;
  *(undefined4 *)((longlong)param_1 + 0x29bc) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x538) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x29c4) = 0x453b8000;
  param_1[0x539] = 0;
  param_1[0x53a] = 0;
  param_1[0x53b] = 0;
  param_1[0x53c] = 0;
  param_1[0x53d] = 0;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  param_1[0x540] = 0;
  param_1[0x541] = 0;
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  param_1[0x544] = 0;
  param_1[0x545] = 0;
  param_1[0x546] = 0;
  param_1[0x547] = 0;
  uVar1 = DAT_14cbd3910;
  uVar2 = FUN_144a7a726();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,1,0);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x52d] = lVar3;
    if (lVar3 == 0) goto LAB_145833ca6;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x52d] = lVar3;
  }
  FUN_140486fc4(lVar3,param_1[0x39],0);
LAB_145833ca6:
  uVar1 = DAT_14cbd3918;
  uVar2 = FUN_1412c1e88();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,1,0);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x52e] = lVar3;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x52e] = lVar3;
  }
  FUN_140486fc4(lVar3,param_1[0x39],0);
  return param_1;
}



// FUNCTION 145833d3e FUN_145833d3e body=40 status=ok
// SIG undefined FUN_145833d3e(void)

undefined8 FUN_145833d3e(undefined8 param_1,int param_2)

{
  FUN_145826a20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145833d66 FUN_145833d66 body=42 status=ok
// SIG undefined FUN_145833d66(void)

undefined8 FUN_145833d66(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145833d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x5f0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145833dc6 FUN_145833dc6 body=57 status=ok
// SIG undefined FUN_145833dc6(void)

void FUN_145833dc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22c50 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22c50 = FUN_140002ddd(FUN_14643b2b4,uVar1,L"GpsGenerator_Trace");
  }
  return;
}



// FUNCTION 145833e06 FUN_145833e06 body=57 status=ok
// SIG undefined FUN_145833e06(void)

void FUN_145833e06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb236c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb236c0 = FUN_140002ddd(FUN_14643f060,uVar1,L"GpsTest_PlayerDamaging");
  }
  return;
}



// FUNCTION 145833e40 FUN_145833e40 body=40 status=ok
// SIG undefined FUN_145833e40(void)

undefined8 FUN_145833e40(undefined8 param_1,int param_2)

{
  thunk_FUN_145833e6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145833e68 thunk_FUN_145833e6e body=5 status=ok
// SIG undefined thunk_FUN_145833e6e(void)

void thunk_FUN_145833e6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ea030;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 145833e6e FUN_145833e6e body=48 status=ok
// SIG undefined FUN_145833e6e(void)

void FUN_145833e6e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ea030;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 145833ea4 FUN_145833ea4 body=57 status=ok
// SIG undefined FUN_145833ea4(void)

void FUN_145833ea4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb692c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb692c8 = FUN_140002ddd(FUN_146520184,uVar1,L"GpsGenerator_Waypoints");
  }
  return;
}



// FUNCTION 145833ee4 FUN_145833ee4 body=57 status=ok
// SIG undefined FUN_145833ee4(void)

void FUN_145833ee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9128 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9128 = FUN_140002ddd(FUN_1465d2ad5,uVar1,L"OakClimbableInteractDef");
  }
  return;
}



// FUNCTION 145833f32 FUN_145833f32 body=45 status=ok
// SIG undefined FUN_145833f32(void)

undefined8 FUN_145833f32(undefined8 param_1,int param_2)

{
  FUN_145833f60();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 145833f60 FUN_145833f60 body=74 status=ok
// SIG undefined FUN_145833f60(void)

void FUN_145833f60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b297c30;
  param_1[3] = &DAT_14a176f00;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 4);
  return;
}



// FUNCTION 145833faa FUN_145833faa body=104 status=ok
// SIG undefined FUN_145833faa(void)

undefined8 FUN_145833faa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1411c6bc6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145834014 FUN_145834014 body=42 status=ok
// SIG undefined FUN_145834014(void)

void FUN_145834014(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145834054(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145834029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_145834114();
  FUN_145734bb4(uVar2);
  return;
}



// FUNCTION 14583403e FUN_14583403e body=21 status=ok
// SIG undefined FUN_14583403e(void)

void FUN_14583403e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145834114();
  FUN_145734bb4(uVar1);
  return;
}



// FUNCTION 145834054 FUN_145834054 body=191 status=ok
// SIG undefined FUN_145834054(void)

longlong FUN_145834054(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1411c6bdc();
  lVar3 = *param_1;
  if (DAT_14cb8ca28 != DAT_14cb8ca54) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb8ca58;
    if (DAT_14cb8ca60 != (undefined *)0x0) {
      puVar7 = DAT_14cb8ca60;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb8ca68 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb8ca20 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb8ca18;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145834114 FUN_145834114 body=113 status=ok
// SIG undefined FUN_145834114(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145834114(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb8ca78;
  if (DAT_14cb8ca78 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x4e80,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x9d;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb8ca78;
    DAT_14cb8ca80 = DAT_14cb8ca80 + 0x10;
  }
  DAT_14cb8ca78 = (undefined8 *)*puVar2;
  _DAT_14cb8ca84 = _DAT_14cb8ca84 + 1;
  return;
}



// FUNCTION 145834187 FUN_145834187 body=116 status=ok
// SIG undefined FUN_145834187(void)

void FUN_145834187(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar1 = (undefined8 *)FUN_1458341fc();
  local_38 = 0;
  local_30 = &local_res18;
  __stdio_common_vsscanf(*puVar1,param_1,0xffffffffffffffff,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458341fc FUN_1458341fc body=8 status=ok
// SIG undefined FUN_1458341fc(void)

undefined * FUN_1458341fc(void)

{
  return &DAT_14c967a78;
}



// FUNCTION 145834204 FUN_145834204 body=123 status=ok
// SIG undefined FUN_145834204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145834204(void)

{
  _DAT_14ca572a0 = L"BASE";
  DAT_14ca572ca = 4;
  _DAT_14ca572a8 = FUN_140b35ae4();
  _DAT_14ca572b0 = DAT_14ca4ffa8;
  _DAT_14ca572b8 = &LAB_14682652b;
  DAT_14ca4ffa8 = &DAT_14ca572a0;
  DAT_14ca4fffd = DAT_14ca4fffd + '\x01';
  _DAT_14ca572c0 = 0x100000000;
  if (*(char *)(_DAT_14ca572a8 + 100) != '\0') {
    DAT_14ca4fffe = DAT_14ca4fffe + '\x01';
  }
  return;
}



// FUNCTION 14583428e FUN_14583428e body=72 status=ok
// SIG undefined FUN_14583428e(void)

undefined8 * FUN_14583428e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0ae520;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2194c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458342e4 FUN_1458342e4 body=59 status=ok
// SIG undefined FUN_1458342e4(void)

undefined8 * FUN_1458342e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14583433c FUN_14583433c body=99 status=ok
// SIG undefined FUN_14583433c(void)

void FUN_14583433c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014583439b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014583437e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1458343d0 FUN_1458343d0 body=10 status=ok
// SIG undefined FUN_1458343d0(void)

void FUN_1458343d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001458343d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}



// FUNCTION 1458343da FUN_1458343da body=87 status=ok
// SIG undefined FUN_1458343da(void)

void FUN_1458343da(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    cVar1 = FUN_144729dda(param_1 + 6);
    if (cVar1 != '\0') {
      if (0 < (int)param_1[0x55]) {
        FUN_148a019f0(param_1);
        return;
      }
      (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
      *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
    }
  }
  return;
}



// FUNCTION 145834440 FUN_145834440 body=115 status=ok
// SIG undefined FUN_145834440(void)

void FUN_145834440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar4 != 0) {
    cVar3 = FUN_1458344b4(lVar4);
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)(lVar4 + 0x598);
      if (lVar1 != 0) {
        lVar2 = FUN_1407f492e(lVar4);
        if ((lVar2 != 0) && (*(char *)(lVar1 + 0x34) != '\0')) {
          *(undefined1 *)(lVar1 + 0x34) = 0;
        }
      }
      cVar3 = FUN_14129c520(lVar4 + 900,0);
      if (cVar3 == '\0') {
        lVar4 = FUN_14479d2ce(lVar4 + 900);
        *(undefined1 *)(lVar4 + 0x170) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1458344b4 FUN_1458344b4 body=80 status=ok
// SIG undefined FUN_1458344b4(void)

undefined1 FUN_1458344b4(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_144729dda(param_1 + 900);
  if ((cVar1 == '\0') || (*(longlong *)(param_1 + 0x598) == 0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 900);
    if (*(char *)(lVar3 + 0x170) == '\0') {
      uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x598) + 0x34);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 145834504 FUN_145834504 body=121 status=ok
// SIG undefined FUN_145834504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145834504(void)

{
  FUN_14583457e();
  _DAT_14c9ea290 = L"PrecomputedLightingBufferParameter";
  DAT_14c9ea2ba = FUN_140850cc5();
  _DAT_14c9ea298 = FUN_14106a12a();
  _DAT_14c9ea2a8 = &LAB_14682652b;
  _DAT_14c9ea2b0 = 0x100000000;
  _DAT_14c9ea2b8 = 0;
  _DAT_14c9ea2a0 = DAT_14c9e8fb8;
  DAT_14c9e8fb8 = &DAT_14c9ea290;
  return;
}



// FUNCTION 14583457e FUN_14583457e body=216 status=ok
// SIG undefined FUN_14583457e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14583457e(void)

{
  _DAT_14c9ea2f0 = L"LightmapResourceCluster";
  DAT_14c9ea31a = FUN_140850cc5();
  _DAT_14c9ea2f8 = FUN_14106a12a();
  _DAT_14c9ea308 = &LAB_14682652b;
  _DAT_14c9ea310 = &DAT_100000004;
  _DAT_14c9ea318 = 0;
  _DAT_14c9ea300 = DAT_14c9e8fb8;
  DAT_14c9e8fb8 = &DAT_14c9ea2f0;
  _DAT_14c9ea2c0 = L"IndirectLightingCacheParameter";
  DAT_14c9ea2ea = FUN_140850cc5();
  _DAT_14c9ea2c8 = FUN_14106a12a();
  _DAT_14c9ea2d8 = &LAB_14682652b;
  _DAT_14c9ea2e0 = &DAT_100000002;
  _DAT_14c9ea2e8 = 0;
  _DAT_14c9ea2d0 = DAT_14c9e8fb8;
  DAT_14c9e8fb8 = &DAT_14c9ea2c0;
  return;
}



// FUNCTION 14583465c FUN_14583465c body=33 status=ok
// SIG undefined FUN_14583465c(void)

void FUN_14583465c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aade220;
  if (DAT_14cb0cab0 == param_1) {
    DAT_14cb0cab0 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 14583468c FUN_14583468c body=45 status=ok
// SIG undefined FUN_14583468c(void)

undefined8 FUN_14583468c(undefined8 param_1,int param_2)

{
  FUN_1458346ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 1458346ba FUN_1458346ba body=67 status=ok
// SIG undefined FUN_1458346ba(void)

void FUN_1458346ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b10e570;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e38032(param_1);
  return;
}



// FUNCTION 1458346fe FUN_1458346fe body=40 status=ok
// SIG undefined FUN_1458346fe(void)

undefined8 FUN_1458346fe(undefined8 param_1,int param_2)

{
  FUN_145834726();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145834726 FUN_145834726 body=59 status=ok
// SIG undefined FUN_145834726(void)

void FUN_145834726(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcf2c00;
  FUN_145834761(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145834761 FUN_145834761 body=43 status=ok
// SIG undefined FUN_145834761(void)

void FUN_145834761(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149482a98(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 14583478c FUN_14583478c body=38 status=ok
// SIG undefined FUN_14583478c(void)

undefined8 FUN_14583478c(undefined8 param_1,int param_2)

{
  FUN_1458347ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458347b2 FUN_1458347b2 body=59 status=ok
// SIG undefined FUN_1458347b2(void)

void FUN_1458347b2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + (ulonglong)param_2 * 8);
  if (lVar1 != 0) {
    FUN_1458348a8(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_145834848(param_1,param_2);
  return;
}



// FUNCTION 1458347ee FUN_1458347ee body=90 status=ok
// SIG undefined FUN_1458347ee(void)

void FUN_1458347ee(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aab1c70;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x38))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1411cbbd8(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145834848 FUN_145834848 body=95 status=ok
// SIG undefined FUN_145834848(void)

void FUN_145834848(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (ulonglong)param_2 * 8) = uVar5;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1458348a8 FUN_1458348a8 body=128 status=ok
// SIG undefined FUN_1458348a8(void)

void FUN_1458348a8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x100);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14583495a(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_145834928(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1410fadde(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145834928 FUN_145834928 body=49 status=ok
// SIG undefined FUN_145834928(void)

void FUN_145834928(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14583495a FUN_14583495a body=98 status=ok
// SIG undefined FUN_14583495a(void)

void FUN_14583495a(undefined8 *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1458349bc FUN_1458349bc body=85 status=ok
// SIG undefined FUN_1458349bc(void)

void FUN_1458349bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_145834a12();
  return;
}



// FUNCTION 145834a12 FUN_145834a12 body=114 status=ok
// SIG undefined FUN_145834a12(void)

void FUN_145834a12(longlong *param_1,int param_2)

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



// FUNCTION 145834a84 FUN_145834a84 body=134 status=ok
// SIG undefined FUN_145834a84(void)

void FUN_145834a84(longlong *param_1,ulonglong param_2)

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
          FUN_147d58fa8(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145834b0a FUN_145834b0a body=24 status=ok
// SIG undefined FUN_145834b0a(void)

void FUN_145834b0a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145834b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145834b22 FUN_145834b22 body=38 status=ok
// SIG undefined FUN_145834b22(void)

undefined8 FUN_145834b22(undefined8 param_1,int param_2)

{
  FUN_145834b48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145834b48 FUN_145834b48 body=211 status=ok
// SIG undefined FUN_145834b48(void)

void FUN_145834b48(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b965460;
  param_1[4] = &PTR_FUN_14b965480;
  param_1[6] = &PTR_FUN_14b9654e0;
  if (param_1[8] != 0) {
    FUN_14480f766(&DAT_14cb95108);
    param_1[8] = 0;
  }
  FUN_140896aa8(param_1 + 9);
  if (*(char *)(param_1 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  FUN_1411cbed1(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1413495c2(param_1 + 9);
  param_1[6] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 6);
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145834c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145834c1c FUN_145834c1c body=38 status=ok
// SIG undefined FUN_145834c1c(void)

undefined8 FUN_145834c1c(undefined8 param_1,int param_2)

{
  FUN_145834c42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145834c42 FUN_145834c42 body=156 status=ok
// SIG undefined FUN_145834c42(void)

void FUN_145834c42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa4ccd0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_145834cde(param_1 + 0x7a);
  *(undefined4 *)(param_1 + 0x79) = 0;
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_145834d14(param_1 + 0x70);
  FUN_1411cf128(param_1);
  return;
}


